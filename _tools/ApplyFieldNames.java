// Names (and types) data members from accessor_map.py's mapping, then re-exports the layouts.
// Only default-named members (fieldN_0x..) or untouched bytes are changed. Script args: <mapping tsv> <layouts out tsv>
//@category osclient
import ghidra.app.script.GhidraScript;
import ghidra.app.util.NamespaceUtils;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.VariableUtilities;
import ghidra.program.model.symbol.Namespace;

import java.io.Writer;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;

public class ApplyFieldNames extends GhidraScript {
	private static final Map<String, DataType> TYPES = Map.of(
		"float", FloatDataType.dataType, "double", DoubleDataType.dataType, "int", IntegerDataType.dataType,
		"uint", UnsignedIntegerDataType.dataType, "bool", BooleanDataType.dataType, "byte", ByteDataType.dataType,
		"char", CharDataType.dataType, "short", ShortDataType.dataType, "ushort", UnsignedShortDataType.dataType,
		"longlong", LongLongDataType.dataType);

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		DataTypeManager dtm = currentProgram.getDataTypeManager();
		Map<String, Structure> structs = new LinkedHashMap<>();
		int named = 0, typed = 0, added = 0, skipped = 0;
		int tx = currentProgram.startTransaction("name members from accessors");
		try {
			for (String line : Files.readAllLines(Path.of(args[0]))) {
				String[] p = line.split("\t", -1);
				if (p.length < 5) {
					continue;
				}
				Structure s = structs.computeIfAbsent(p[0], name -> classStruct(name, dtm));
				if (s == null) {
					skipped++;
					continue;
				}
				int off = Integer.parseInt(p[1]);
				int size = Integer.parseInt(p[2]);
				String name = p[3];
				DataType type = TYPES.get(p[4].trim());
				DataTypeComponent c = off < s.getLength() ? s.getComponentContaining(off) : null;
				try {
					if (c != null && c.getOffset() == off && c.getDataType() != DataType.DEFAULT) {
						String current = c.getFieldName();
						if (current != null && !current.matches("field\\d*_0x[0-9a-f]+")) {
							skipped++;  // already named
							continue;
						}
						if (type != null && type.getLength() == c.getLength()
								&& c.getDataType().getName().startsWith("undefined")) {
							s.replace(c.getOrdinal(), type, c.getLength(), name, c.getComment());
							typed++;
						}
						else {
							c.setFieldName(name);
						}
						named++;
					}
					else if (size > 0 && off + size <= s.getLength() && undefinedRange(s, off, size)) {
						DataType dt = type != null && type.getLength() == size ? type
								: new ArrayDataType(Undefined1DataType.dataType, size, 1);
						s.replaceAtOffset(off, dt, size, name, "named from an accessor");
						added++;
					}
					else {
						skipped++;
					}
				}
				catch (Exception ex) {
					skipped++;
				}
			}
		}
		finally {
			currentProgram.endTransaction(tx, true);
		}
		println(named + " members named (" + typed + " typed), " + added + " added, " + skipped + " skipped");

		try (Writer w = Files.newBufferedWriter(Path.of(args[1]), StandardCharsets.UTF_8)) {
			for (Namespace ns : allClasses()) {
				Structure s = VariableUtilities.findExistingClassStruct((GhidraClass) ns, dtm);
				if (s == null) {
					continue;
				}
				w.write("C\t" + ns.getName(true) + "\t" + (s.isZeroLength() ? 0 : s.getLength()) + "\n");
				for (DataTypeComponent c : s.getDefinedComponents()) {
					w.write("F\t" + c.getOffset() + "\t" + c.getLength() + "\t" + c.getDataType().getDisplayName()
							+ "\t" + (c.getFieldName() == null ? c.getDefaultFieldName() : c.getFieldName())
							+ "\t" + (c.getComment() == null ? "" : c.getComment()) + "\n");
				}
			}
		}
		println("layouts written to " + args[1]);
	}

	private Structure classStruct(String name, DataTypeManager dtm) {
		try {
			for (Namespace ns : NamespaceUtils.getNamespaceByPath(currentProgram, null, name)) {
				if (ns instanceof GhidraClass cls) {
					return VariableUtilities.findExistingClassStruct(cls, dtm);
				}
			}
			return null;
		}
		catch (Exception ex) {
			return null;
		}
	}

	private boolean undefinedRange(Structure s, int off, int size) {
		for (int i = off; i < off + size; i++) {
			DataTypeComponent c = s.getComponentContaining(i);
			if (c != null && c.getDataType() != DataType.DEFAULT) {
				return false;
			}
		}
		return true;
	}

	private List<Namespace> allClasses() {
		List<Namespace> out = new ArrayList<>();
		for (GhidraClass cls : (Iterable<GhidraClass>) () -> currentProgram.getSymbolTable().getClassNamespaces()) {
			if (cls.getName(true).startsWith("jag::") && !cls.getName(true).contains("<")) {
				out.add(cls);
			}
		}
		return out;
	}
}
