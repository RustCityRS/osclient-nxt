// Applies the prototypes chosen by protos.py: member functions get a typed this, parameters get their demangled
// types, enums replace the demangler's empty placeholder structures, and hidden parameters (a by-value return
// buffer, a VTT) are explicit. The return type stays unlocked unless the signature gives it.
// Script args: <protos.jsonl> <layouts.tsv>
//@category osclient
import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.NamespaceUtils;
import ghidra.app.util.SymbolPath;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;

public class ApplyPrototypes extends GhidraScript {
	private static final CategoryPath DEMANGLER = new CategoryPath("/Demangler");
	private DataTypeManager dtm;
	private final Map<String, DataType> classTypes = new HashMap<>();
	private final Map<String, List<String[]>> layoutFields = new HashMap<>();
	private final Map<String, Integer> stats = new TreeMap<>();
	private DataType memberFnPtr;

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		dtm = currentProgram.getDataTypeManager();
		String cur = null;
		for (String line : Files.readAllLines(Path.of(args[1]))) {
			String[] p = line.split("\t", -1);
			if (p[0].equals("C")) {
				cur = p[1];
				layoutFields.put(cur, new ArrayList<>());
			}
			else if (p[0].equals("F") && cur != null) {
				layoutFields.get(cur).add(p);
			}
		}
		int tx = currentProgram.startTransaction("apply prototypes");
		try {
			StructureDataType m = new StructureDataType(new CategoryPath("/osclient"), "member_function_ptr", 0, dtm);
			m.add(new PointerDataType(VoidDataType.dataType, dtm), 8, "ptr", null);
			m.add(LongDataType.dataType, 8, "adj", null);
			memberFnPtr = dtm.addDataType(m, DataTypeConflictHandler.REPLACE_HANDLER);
			int n = 0;
			for (String line : Files.readAllLines(Path.of(args[0]))) {
				apply(JsonParser.parseString(line).getAsJsonObject());
				if (++n % 20000 == 0) {
					println(n + " prototypes applied");
				}
			}
		}
		finally {
			currentProgram.endTransaction(tx, true);
		}
		stats.forEach((k, v) -> println(v + "\t" + k));
	}

	private DataType unknownReturnType;

	/** The pointed-to type for a by-value return whose class is not known. */
	private DataType unknownReturn() {
		if (unknownReturnType == null) {
			StructureDataType s = new StructureDataType(new CategoryPath("/osclient"), "ReturnValue", 8, dtm);
			unknownReturnType = dtm.addDataType(s, DataTypeConflictHandler.REPLACE_HANDLER);
		}
		return unknownReturnType;
	}

	private void count(String k) {
		stats.merge(k, 1, Integer::sum);
	}

	private void apply(JsonObject r) throws Exception {
		Function f = getFunctionAt(toAddr(Long.parseUnsignedLong(r.get("addr").getAsString(), 16)));
		if (f == null || f.isThunk()) {
			count("no function / thunk");
			return;
		}
		selectPrimary(f, r.get("qname").getAsString());
		boolean member = r.get("member").getAsBoolean();
		boolean sret = r.get("sret").getAsBoolean();
		boolean vtt = r.get("vtt").getAsBoolean();

		List<Parameter> params = new ArrayList<>();
		DataType retType = DataType.DEFAULT;
		if (!r.get("ret").isJsonNull()) {
			retType = resolve(r.get("ret").getAsJsonArray());
		}
		if (sret) {
			// Ghidra turns a __return_storage_ptr__ parameter into a forced-indirect return of the pointed-to type
			if (!(retType instanceof Pointer ptr) || ptr.getDataType() instanceof VoidDataType) {
				retType = new PointerDataType(unknownReturn(), dtm);
			}
			params.add(new ParameterImpl("__return_storage_ptr__", retType, currentProgram, SourceType.USER_DEFINED));
		}
		boolean explicitThis = member && (sret || vtt);
		if (member) {
			Namespace ns = f.getParentNamespace();
			if (ns != null && !ns.isGlobal() && !(ns instanceof GhidraClass)) {
				try {
					ns = NamespaceUtils.convertNamespaceToClass(ns);
				}
				catch (Exception e) {
					count("class conversion failed");
				}
			}
			if (explicitThis) {
				DataType self = ns instanceof GhidraClass cls
						? VariableUtilities.findOrCreateClassStruct(cls, dtm) : VoidDataType.dataType;
				params.add(new ParameterImpl("this", new PointerDataType(self, dtm), currentProgram));
			}
		}
		if (vtt) {
			params.add(new ParameterImpl("vtt", new PointerDataType(new PointerDataType(VoidDataType.dataType, dtm), dtm),
				currentProgram));
		}
		JsonArray names = r.get("names").getAsJsonArray();
		int i = 0;
		for (JsonElement e : r.get("params").getAsJsonArray()) {
			params.add(new ParameterImpl(names.get(i++).getAsString(), resolve(e.getAsJsonArray()), currentProgram,
				SourceType.USER_DEFINED));
		}
		String cc = member && !explicitThis ? "__thiscall" : "__stdcall";
		try {
			f.updateFunction(cc, new ReturnParameterImpl(retType, currentProgram), params,
				Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
			f.setVarArgs(r.get("varargs").getAsBoolean());
			boolean bad = false;
			for (Parameter p : f.getParameters()) {
				bad |= !p.getVariableStorage().isValid() || p.getVariableStorage().isUnassignedStorage();
			}
			count(bad ? "applied, some storage unassigned" : "applied");
			if (bad && stats.get("applied, some storage unassigned") <= 8) {
				println("unassigned: " + f.getName(true) + " " + f.getSignature().getPrototypeString());
			}
			if (sret) {
				count("applied with a return buffer");
			}
			if (vtt) {
				count("applied with a VTT");
			}
		}
		catch (Exception e) {
			count("failed: " + e.getClass().getSimpleName());
			if (stats.get("failed: " + e.getClass().getSimpleName()) <= 5) {
				printerr(f.getName(true) + ": " + e);
				e.printStackTrace();
			}
		}
	}

	/** The demangled symbol of the chosen name becomes the function's name (folded functions have several). */
	private void selectPrimary(Function f, String qname) {
		Symbol[] syms = currentProgram.getSymbolTable().getSymbols(f.getEntryPoint());
		int demangled = 0;
		for (Symbol s : syms) {
			if (!s.getName().startsWith("__Z")) {
				demangled++;
			}
		}
		if (demangled < 2) {
			return;
		}
		String want = norm(qname);
		for (Symbol s : syms) {
			if (!s.getName().startsWith("__Z") && norm(s.getName(true)).equals(want)) {
				if (!s.isPrimary()) {
					s.setPrimary();
					count("primary name changed");
				}
				return;
			}
		}
		count("primary name not matched");
	}

	private static String norm(String s) {
		return s.replace("std::__1::", "std::").replaceAll("\\s+", "");
	}

	private DataType resolve(JsonArray spec) {
		String k = spec.get(0).getAsString();
		switch (k) {
			case "B":
				return builtin(spec.get(1).getAsString());
			case "P": {
				JsonArray inner = spec.get(1).getAsJsonArray();
				DataType t = inner.get(0).getAsString().equals("C") ? classType(inner.get(1).getAsString(), 0)
						: resolve(inner);
				return new PointerDataType(t, dtm);
			}
			case "S":
				return classType(spec.get(1).getAsString(), spec.get(2).getAsInt());
			case "E":
				return enumType(spec.get(1).getAsString());
			case "M":
				return memberFnPtr;
			case "C":
				return classType(spec.get(1).getAsString(), 0);
			default:
				return Undefined8DataType.dataType;
		}
	}

	private DataType builtin(String name) {
		switch (name) {
			case "void": return VoidDataType.dataType;
			case "bool": return BooleanDataType.dataType;
			case "char": return CharDataType.dataType;
			case "signed char": return SignedCharDataType.dataType;
			case "unsigned char": case "char8_t": return UnsignedCharDataType.dataType;
			case "wchar_t": return WideCharDataType.dataType;
			case "char16_t": return WideChar16DataType.dataType;
			case "char32_t": return WideChar32DataType.dataType;
			case "short": return ShortDataType.dataType;
			case "unsigned short": return UnsignedShortDataType.dataType;
			case "int": return IntegerDataType.dataType;
			case "unsigned int": return UnsignedIntegerDataType.dataType;
			case "long": return LongDataType.dataType;
			case "unsigned long": return UnsignedLongDataType.dataType;
			case "long long": return LongLongDataType.dataType;
			case "unsigned long long": return UnsignedLongLongDataType.dataType;
			case "__int128": return Integer16DataType.dataType;
			case "unsigned __int128": return UnsignedInteger16DataType.dataType;
			case "float": return FloatDataType.dataType;
			case "double": return DoubleDataType.dataType;
			case "long double": return LongDoubleDataType.dataType;
			default: return Undefined8DataType.dataType;
		}
	}

	/** The structure for a class: the class namespace's own structure when there is one, else /Demangler/ns/Name. */
	private DataType classType(String name, int size) {
		DataType t = classTypes.get(name);
		if (t == null) {
			t = findClassType(name);
			classTypes.put(name, t);
		}
		if (size > 0 && t instanceof Structure s && s.getLength() < size) {
			try {
				if (s.isZeroLength()) {
					s.growStructure(size);
				}
				else {
					s.growStructure(size - s.getLength());
				}
				applyFloatFields(name, s);
			}
			catch (Exception e) {
				count("could not size " + name);
			}
		}
		return t;
	}

	/** Float members decide how a small class is passed (SSE or integer registers), so add them from layouts.tsv. */
	private void applyFloatFields(String name, Structure s) {
		for (String[] p : layoutFields.getOrDefault(name, List.of())) {
			DataType ft = p[3].equals("float") ? FloatDataType.dataType : p[3].equals("double") ? DoubleDataType.dataType : null;
			int off = Integer.parseInt(p[1]);
			if (ft != null && off + ft.getLength() <= s.getLength()) {
				try {
					s.replaceAtOffset(off, ft, ft.getLength(), p[4], null);
				}
				catch (Exception e) {
					// leave the bytes undefined
				}
			}
		}
	}

	private DataType findClassType(String name) {
		List<String> parts = new SymbolPath(name.replace("std::__1::", "std::")).asList();
		try {
			List<Namespace> nss = NamespaceUtils.getNamespaceByPath(currentProgram, null, String.join("::", parts));
			for (Namespace ns : nss) {
				if (ns instanceof GhidraClass cls) {
					return VariableUtilities.findOrCreateClassStruct(cls, dtm);
				}
			}
		}
		catch (Exception e) {
			// fall through to the category lookup
		}
		CategoryPath cat = DEMANGLER;
		for (String p : parts.subList(0, parts.size() - 1)) {
			cat = new CategoryPath(cat, p);
		}
		String leaf = parts.get(parts.size() - 1);
		DataType t = dtm.getDataType(cat, leaf);
		if (t == null) {
			t = dtm.addDataType(new StructureDataType(cat, leaf, 0, dtm), DataTypeConflictHandler.KEEP_HANDLER);
			count("class structures created");
			if (stats.get("class structures created") <= 25) {
				println("created " + cat + " / " + leaf + " for " + name);
			}
		}
		return t;
	}

	private DataType enumType(String name) {
		DataType t = classTypes.get(name);
		if (t != null) {
			return t;
		}
		DataType found = findClassType(name);
		if (found instanceof ghidra.program.model.data.Enum) {
			t = found;
		}
		else if (found instanceof Structure s && !s.isNotYetDefined() && s.getNumDefinedComponents() > 0) {
			t = found;  // a real structure after all: keep it
		}
		else {
			EnumDataType e = new EnumDataType(found.getCategoryPath(), found.getName(), 4, dtm);
			try {
				dtm.replaceDataType(found, e, true);
				t = dtm.getDataType(found.getCategoryPath(), found.getName());
				count("enums created");
			}
			catch (Exception ex) {
				t = dtm.addDataType(e, DataTypeConflictHandler.REPLACE_HANDLER);
			}
		}
		classTypes.put(name, t);
		return t;
	}
}
