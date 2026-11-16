// Types every class's vtable: a <Class>_vtbl structure with one function pointer per slot (typed from the slot
// function's prototype, named after the method) and a _vptr member at offset 0 of the class structure, so the
// decompiler writes virtual calls as this->_vptr->Method(this, ...) instead of (**(code **)(*this + 0x30))(this).
// Run after the class layouts are built. Script args: <vtables.tsv from vtables.py>
//@category osclient
import ghidra.app.script.GhidraScript;
import ghidra.app.util.NamespaceUtils;
import ghidra.app.util.SymbolPath;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Namespace;

import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;

public class ApplyVtables extends GhidraScript {
	@Override
	public void run() throws Exception {
		DataTypeManager dtm = currentProgram.getDataTypeManager();
		Map<String, List<String[]>> slots = new LinkedHashMap<>();
		for (String line : Files.readAllLines(Path.of(getScriptArgs()[0]))) {
			String[] p = line.split("\t", -1);
			if (p.length == 4) {
				slots.computeIfAbsent(p[0], k -> new ArrayList<>()).add(p);
			}
		}
		int typed = 0, missing = 0, failed = 0;
		int tx = currentProgram.startTransaction("type vtables");
		try {
			for (Map.Entry<String, List<String[]>> e : slots.entrySet()) {
				GhidraClass cls = classNamed(e.getKey());
				if (cls == null) {
					missing++;
					continue;
				}
				Structure self = VariableUtilities.findOrCreateClassStruct(cls, dtm);
				if (self == null) {
					missing++;
					continue;
				}
				try {
					StructureDataType vt = new StructureDataType(self.getCategoryPath(), self.getName() + "_vtbl", 0, dtm);
					for (String[] s : e.getValue()) {
						long addr = Long.parseUnsignedLong(s[2], 16);
						Function f = addr == 0 ? null : getFunctionAt(toAddr(addr));
						DataType fp;
						if (f != null) {
							FunctionDefinitionDataType def = new FunctionDefinitionDataType(f, true);
							def.setNameAndCategory(new CategoryPath(self.getCategoryPath(), self.getName() + "_vtbl_fn"),
								fieldName(s[3]));
							fp = new PointerDataType(dtm.addDataType(def, DataTypeConflictHandler.REPLACE_HANDLER), dtm);
						}
						else {
							fp = new PointerDataType(VoidDataType.dataType, dtm);
						}
						vt.add(fp, 8, fieldName(s[3]), null);
					}
					DataType vtbl = dtm.addDataType(vt, DataTypeConflictHandler.REPLACE_HANDLER);
					if (self.isZeroLength()) {
						self.growStructure(8);
					}
					else if (self.getLength() < 8) {
						self.growStructure(8 - self.getLength());
					}
					self.replaceAtOffset(0, new PointerDataType(vtbl, dtm), 8, "_vptr", null);
					typed++;
				}
				catch (Exception ex) {
					failed++;
					if (failed <= 5) {
						printerr(e.getKey() + ": " + ex);
					}
				}
			}
		}
		finally {
			currentProgram.endTransaction(tx, true);
		}
		println(typed + " vtables typed, " + missing + " classes not found, " + failed + " failed");
	}

	/** Field names must be identifiers: ~ is the destructor, ~delete the deleting destructor, operators spelled out. */
	static String fieldName(String slot) {
		if (slot.equals("~")) {
			return "_dtor";
		}
		if (slot.equals("~delete")) {
			return "_deleting_dtor";
		}
		StringBuilder b = new StringBuilder();
		for (char c : slot.toCharArray()) {
			b.append(Character.isLetterOrDigit(c) || c == '_' ? String.valueOf(c) : "_x" + Integer.toHexString(c) + "_");
		}
		return b.toString();
	}

	private GhidraClass classNamed(String name) {
		try {
			String path = String.join("::", new SymbolPath(name.replace("std::__1::", "std::")).asList());
			for (Namespace ns : NamespaceUtils.getNamespaceByPath(currentProgram, null, path)) {
				if (ns instanceof GhidraClass cls) {
					return cls;
				}
				return NamespaceUtils.convertNamespaceToClass(ns);
			}
		}
		catch (Exception e) {
			// not found
		}
		return null;
	}
}
