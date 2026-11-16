// Recovers class layouts for the jag:: classes: applies __thiscall to the listed functions (may be empty), sizes classes from
// allocation sites, fills each class structure from how its methods use `this`, names fields from accessors and
// exports the layouts. Script args: <thiscall list> <class sizes tsv> <layouts out tsv> [threads]
//@category osclient
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.component.DecompilerUtils;
import ghidra.app.decompiler.util.FillOutStructureHelper;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.NamespaceUtils;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.data.Array;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.Composite;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.Undefined1DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.Structure;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.VariableUtilities;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighSymbol;
import ghidra.program.model.pcode.HighVariable;
import ghidra.program.model.symbol.Namespace;
import ghidra.util.task.TaskMonitor;

import java.io.Writer;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;
import java.util.concurrent.*;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class BuildStructs extends GhidraScript {
	private static final Pattern GETTER =
		Pattern.compile("return\\s+(?:\\([^()]*\\)\\s*)?&?this->(field\\d*_0x[0-9a-f]+)\\s*;");
	private static final Pattern SETTER =
		Pattern.compile("this->(field\\d*_0x[0-9a-f]+)\\s*=\\s*(?:\\([^()]*\\)\\s*)?param_1\\s*;");
	private static final Pattern ACCESSOR = Pattern.compile("^(Get|Set|Is|Has)([A-Z]\\w*)$");

	private boolean namesOnly;

	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		Path thiscallList = Path.of(args[0]);
		Path sizesFile = Path.of(args[1]);
		Path out = Path.of(args[2]);
		int threads = args.length > 3 ? Integer.parseInt(args[3]) : 8;
		namesOnly = args.length > 4 && args[4].equals("names-only"); // rerun only the naming and export
		int tx = currentProgram.startTransaction("recover class layouts");
		try {
			build(thiscallList, sizesFile, out, threads);
		}
		finally {
			currentProgram.endTransaction(tx, true);
		}
	}

	private void build(Path thiscallList, Path sizesFile, Path out, int threads) throws Exception {
		AddressSpace space = currentProgram.getAddressFactory().getDefaultAddressSpace();
		DataTypeManager dtm = currentProgram.getDataTypeManager();

		// 1. member functions that only the second decompile pass treated as members
		int switched = 0;
		for (String line : namesOnly ? List.<String>of() : Files.readAllLines(thiscallList)) {
			if (line.isBlank()) {
				continue;
			}
			Function f = getFunctionAt(space.getAddress(Long.parseUnsignedLong(line.trim(), 16)));
			if (f == null || f.getParentNamespace() == null || f.getParentNamespace().isGlobal()) {
				continue;
			}
			Namespace ns = f.getParentNamespace();
			if (!(ns instanceof GhidraClass)) {
				NamespaceUtils.convertNamespaceToClass(ns);
			}
			f.setCallingConvention("__thiscall");
			switched++;
		}
		println(switched + " functions switched to __thiscall");

		// 2. jag:: classes and their member functions
		Map<GhidraClass, List<Function>> members = new LinkedHashMap<>();
		FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
		while (it.hasNext()) {
			Function f = it.next();
			Namespace ns = f.getParentNamespace();
			if (ns instanceof GhidraClass cls && hasThis(f)
					&& cls.getName(true).startsWith("jag::") && !cls.getName(true).contains("<")) {
				members.computeIfAbsent(cls, k -> new ArrayList<>()).add(f);
			}
		}
		int methods = members.values().stream().mapToInt(List::size).sum();
		println(members.size() + " classes, " + methods + " member functions");

		// 3. sizes from allocation sites
		Map<String, Integer> sizes = new HashMap<>();
		for (String line : Files.readAllLines(sizesFile)) {
			String[] parts = line.split("\t");
			if (parts.length == 2) {
				sizes.put(parts[0], Integer.parseInt(parts[1]));
			}
		}
		Map<GhidraClass, Structure> structs = new LinkedHashMap<>();
		for (GhidraClass cls : members.keySet()) {
			Structure s = VariableUtilities.findOrCreateClassStruct(cls, dtm);
			if (s == null) {
				continue;
			}
			Integer size = sizes.get(cls.getName(true));
			if (size != null && s.getLength() < size && !namesOnly) {
				if (s.isZeroLength()) {
					s.growStructure(size);
				}
				else {
					s.growStructure(size - s.getLength());
				}
			}
			structs.put(cls, s);
		}

		// 4. fill each class from its methods, one class per worker at a time
		DecompileOptions options = new DecompileOptions();
		options.grabFromProgram(currentProgram);
		ConcurrentLinkedQueue<GhidraClass> queue = new ConcurrentLinkedQueue<>(namesOnly ? List.<GhidraClass>of() : structs.keySet());
		AtomicInteger done = new AtomicInteger();
		AtomicInteger filled = new AtomicInteger();
		ExecutorService pool = Executors.newFixedThreadPool(threads);
		List<Future<?>> jobs = new ArrayList<>();
		for (int t = 0; t < threads; t++) {
			jobs.add(pool.submit(() -> {
				FillOutStructureHelper helper = new FillOutStructureHelper(currentProgram, TaskMonitor.DUMMY);
				DecompInterface ifc = helper.setUpDecompiler(options);
				try {
					GhidraClass next;
					while ((next = queue.poll()) != null && !monitor.isCancelled()) {
						final String className = next.getName();
						List<Function> fs = new ArrayList<>(members.get(next));
						// constructors first: they write most fields, starting with the vtable pointer
						fs.sort(Comparator.comparing((Function f) -> !f.getName().equals(className)));
						Structure own = structs.get(next);
						for (Function f : fs) {
							HighVariable self = thisVariable(ifc, f);
							if (self != null && helper.processStructure(self, f, false, false, ifc) != null) {
								filled.incrementAndGet();
								flattenEmbedded(own);
							}
						}
						int n = done.incrementAndGet();
						if (n % 200 == 0) {
							println(n + "/" + structs.size() + " classes filled");
						}
					}
				}
				finally {
					ifc.dispose();
				}
				return null;
			}));
		}
		for (Future<?> job : jobs) {
			job.get();
		}
		pool.shutdown();
		println(filled.get() + " member functions contributed to a layout");

		// 5. names from accessors: GetFoo() { return this->field; } and SetFoo(x) { this->field = x; }
		DecompInterface ifc = new FillOutStructureHelper(currentProgram, TaskMonitor.DUMMY).setUpDecompiler(options);
		int named = 0;
		for (Map.Entry<GhidraClass, List<Function>> e : members.entrySet()) {
			Structure s = structs.get(e.getKey());
			if (s == null) {
				continue;
			}
			Set<String> used = new HashSet<>();
			for (DataTypeComponent c : s.getDefinedComponents()) {
				if (c.getFieldName() != null) {
					used.add(c.getFieldName());
				}
			}
			for (Function f : e.getValue()) {
				Matcher name = ACCESSOR.matcher(f.getName());
				if (!name.matches() || f.getBody().getNumAddresses() > 64) {
					continue;
				}
				DecompileResults r = ifc.decompileFunction(f, 30, TaskMonitor.DUMMY);
				if (r == null || r.getDecompiledFunction() == null) {
					continue;
				}
				String c = r.getDecompiledFunction().getC();
				Matcher m = (name.group(1).equals("Set") ? SETTER : GETTER).matcher(c);
				if (!m.find()) {
					continue;
				}
				DataTypeComponent comp = componentNamed(s, m.group(1));
				if (comp == null) {
					continue;
				}
				String base = name.group(1).equals("Has") ? "has" + name.group(2) : name.group(2);
				String field = comp.getDataType() instanceof Pointer
						? "m_p" + Character.toUpperCase(base.charAt(0)) + base.substring(1)
						: "m_" + Character.toLowerCase(base.charAt(0)) + base.substring(1);
				if (used.add(field)) {
					try {
						comp.setFieldName(field);
						named++;
					}
					catch (Exception ex) {
						used.remove(field);
					}
				}
			}
		}
		ifc.dispose();
		println(named + " fields named from accessors");

		// 6. export
		try (Writer w = Files.newBufferedWriter(out, StandardCharsets.UTF_8)) {
			for (Map.Entry<GhidraClass, Structure> e : structs.entrySet()) {
				Structure s = e.getValue();
				w.write("C\t" + e.getKey().getName(true) + "\t" + (s.isZeroLength() ? 0 : s.getLength()) + "\n");
				for (DataTypeComponent c : s.getDefinedComponents()) {
					w.write("F\t" + c.getOffset() + "\t" + c.getLength() + "\t" + c.getDataType().getDisplayName()
							+ "\t" + (c.getFieldName() == null ? c.getDefaultFieldName() : c.getFieldName())
							+ "\t" + (c.getComment() == null ? "" : c.getComment()) + "\n");
				}
			}
		}
		println("layouts written to " + out);
	}

	private HighVariable thisVariable(DecompInterface ifc, Function f) {
		DecompileResults r = ifc.decompileFunction(f, 60, TaskMonitor.DUMMY);
		if (r == null || !r.decompileCompleted()) {
			return null;
		}
		HighFunction hf = r.getHighFunction();
		if (hf == null || hf.getLocalSymbolMap().getNumParams() == 0) {
			return null;
		}
		for (int i = 0; i < hf.getLocalSymbolMap().getNumParams(); i++) {
			HighSymbol p = hf.getLocalSymbolMap().getParamSymbol(i);
			HighVariable v = p == null ? null : p.getHighVariable();
			if (v != null && (DecompilerUtils.isThisParameter(v, f) || "this".equals(p.getName()))) {
				return v;
			}
		}
		return null;
	}

	/** A member function: __thiscall, or an explicit this after a by-value return buffer or before a VTT. */
	private static boolean hasThis(Function f) {
		if ("__thiscall".equals(f.getCallingConventionName())) {
			return true;
		}
		for (Parameter p : f.getParameters()) {
			if ("this".equals(p.getName())) {
				return true;
			}
		}
		return false;
	}

	/**
	 * An embedded structure goes stale when its own class grows (another worker may be filling it), which leaves
	 * this structure inconsistent and stops the decompiler. Keep the bytes and the type name, not the dependency.
	 */
	private void flattenEmbedded(Structure s) {
		for (DataTypeComponent c : s.getDefinedComponents()) {
			DataType dt = c.getDataType();
			DataType inner = dt instanceof Array a ? a.getDataType() : dt;
			if (inner instanceof Composite) {
				try {
					s.replace(c.getOrdinal(), new ArrayDataType(Undefined1DataType.dataType, c.getLength(), 1),
						c.getLength(), c.getFieldName(), "embedded " + dt.getDisplayName());
				}
				catch (Exception ex) {
					// leave it; the decompile of this class may fail, as before
				}
			}
		}
	}

	private DataTypeComponent componentNamed(Structure s, String name) {
		for (DataTypeComponent c : s.getDefinedComponents()) {
			String n = c.getFieldName() == null ? c.getDefaultFieldName() : c.getFieldName();
			if (name.equals(n)) {
				return c;
			}
		}
		return null;
	}
}
