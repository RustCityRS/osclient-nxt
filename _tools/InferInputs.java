// Unlocks the prototype of every C++ function (a mangled __Z name) and lets the decompiler infer which registers it
// reads and what it returns. Run with -readOnly: the cleared prototypes must not be saved.
// Script args: <out tsv> [threads]
// Output: addr \t mangled names (|-separated) \t inputs \t flags
//   inputs: storage:size:kind for each inferred parameter, kind P (pointer use), F (float), I (other)
//   flags: retRDI (returns its first register argument), ret=<size>, p0deref (first argument is dereferenced)
//@category osclient
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.data.AbstractFloatDataType;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.util.task.TaskMonitor;

import java.io.Writer;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.*;
import java.util.concurrent.*;
import java.util.concurrent.atomic.AtomicInteger;

public class InferInputs extends GhidraScript {
	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		Path out = Path.of(args[0]);
		int threads = args.length > 1 ? Integer.parseInt(args[1]) : 10;

		List<Function> targets = new ArrayList<>();
		Map<Function, String> names = new HashMap<>();
		for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
			if (f.isThunk() || f.isExternal()) {
				continue;
			}
			List<String> mangled = new ArrayList<>();
			for (Symbol s : currentProgram.getSymbolTable().getSymbols(f.getEntryPoint())) {
				if (s.getName().startsWith("__Z")) {
					mangled.add(s.getName());
				}
			}
			if (!mangled.isEmpty()) {
				targets.add(f);
				names.put(f, String.join("|", mangled));
			}
		}
		println(targets.size() + " C++ functions");

		int tx = currentProgram.startTransaction("unlock prototypes");
		try {
			for (Function f : targets) {
				f.updateFunction(Function.UNKNOWN_CALLING_CONVENTION_STRING,
					new ReturnParameterImpl(DataType.DEFAULT, currentProgram), new ArrayList<Parameter>(),
					Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.DEFAULT);
			}
		}
		finally {
			currentProgram.endTransaction(tx, true);
		}
		println("prototypes unlocked");

		ConcurrentLinkedQueue<Function> queue = new ConcurrentLinkedQueue<>(targets);
		ConcurrentHashMap<Function, String> rows = new ConcurrentHashMap<>();
		AtomicInteger done = new AtomicInteger();
		ExecutorService pool = Executors.newFixedThreadPool(threads);
		List<Future<?>> jobs = new ArrayList<>();
		for (int t = 0; t < threads; t++) {
			jobs.add(pool.submit(() -> {
				DecompInterface ifc = new DecompInterface();
				DecompileOptions options = new DecompileOptions();
				options.grabFromProgram(currentProgram);
				ifc.setOptions(options);
				ifc.toggleCCode(false);
				ifc.toggleSyntaxTree(true);
				ifc.setSimplificationStyle("decompile");
				ifc.openProgram(currentProgram);
				try {
					Function f;
					while ((f = queue.poll()) != null && !monitor.isCancelled()) {
						rows.put(f, infer(ifc, f));
						int n = done.incrementAndGet();
						if (n % 20000 == 0) {
							println(n + "/" + targets.size() + " inferred");
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

		try (Writer w = Files.newBufferedWriter(out, StandardCharsets.UTF_8)) {
			for (Function f : targets) {
				w.write(Long.toHexString(f.getEntryPoint().getOffset()) + "\t" + names.get(f) + "\t" + rows.get(f) + "\n");
			}
		}
		println("written " + out);
	}

	private String infer(DecompInterface ifc, Function f) {
		DecompileResults r = ifc.decompileFunction(f, 60, TaskMonitor.DUMMY);
		HighFunction hf = r == null ? null : r.getHighFunction();
		if (hf == null) {
			return "?\tfailed";
		}
		LocalSymbolMap lsm = hf.getLocalSymbolMap();
		List<String> inputs = new ArrayList<>();
		HighVariable first = null;
		for (int i = 0; i < lsm.getNumParams(); i++) {
			HighSymbol p = lsm.getParamSymbol(i);
			if (p == null) {
				inputs.add("?");
				continue;
			}
			DataType dt = p.getDataType();
			String kind = dt instanceof Pointer ? "P" : dt instanceof AbstractFloatDataType ? "F" : "I";
			inputs.add(p.getStorage().toString().replace(" ", "") + ":" + dt.getLength() + ":" + kind);
			if (i == 0) {
				first = p.getHighVariable();
			}
		}
		List<String> flags = new ArrayList<>();
		FunctionPrototype proto = hf.getFunctionPrototype();
		DataType ret = proto.getReturnType();
		flags.add("ret=" + (ret == null ? 0 : ret.getLength()));
		boolean retFirst = false, deref = false, written = false;
		Function ctor = null;
		Iterator<PcodeOpAST> ops = hf.getPcodeOps();
		while (ops.hasNext()) {
			PcodeOpAST op = ops.next();
			if (first != null && (op.getOpcode() == PcodeOp.CALL || op.getOpcode() == PcodeOp.CALLIND)
					&& op.getNumInputs() > 1 && op.getInput(1).getHigh() == first) {
				written = true;  // passed on as a call's first argument: constructed or filled in by the callee
				Function callee = op.getOpcode() == PcodeOp.CALL
						? currentProgram.getFunctionManager().getFunctionAt(op.getInput(0).getAddress()) : null;
				if (ctor == null && callee != null && callee.getParentNamespace() != null
						&& callee.getName().equals(callee.getParentNamespace().getName())) {
					ctor = callee;  // constructed in place: the class of a by-value return
				}
			}
			if (op.getOpcode() == PcodeOp.RETURN && op.getNumInputs() > 1) {
				Varnode v = op.getInput(1);
				for (int k = 0; k < 4 && v != null; k++) {  // look through copies and casts
					if (first != null && v.getHigh() == first) {
						retFirst = true;
						break;
					}
					PcodeOp d = v.getDef();
					if (d == null || (d.getOpcode() != PcodeOp.COPY && d.getOpcode() != PcodeOp.CAST)) {
						break;
					}
					v = d.getInput(0);
				}
			}
			else if (first != null && (op.getOpcode() == PcodeOp.LOAD || op.getOpcode() == PcodeOp.STORE)) {
				Varnode a = op.getInput(1);
				PcodeOp d = a.getDef();
				if (a.getHigh() == first || (d != null && (d.getOpcode() == PcodeOp.INT_ADD
						|| d.getOpcode() == PcodeOp.PTRSUB || d.getOpcode() == PcodeOp.PTRADD)
						&& d.getInput(0).getHigh() == first)) {
					deref = true;
					written |= op.getOpcode() == PcodeOp.STORE;
				}
			}
		}
		if (retFirst) {
			flags.add("retRDI");
		}
		if (deref) {
			flags.add("p0deref");
		}
		if (written) {
			flags.add("p0written");
		}
		if (ctor != null) {
			for (Symbol s : currentProgram.getSymbolTable().getSymbols(ctor.getEntryPoint())) {
				if (s.getName().startsWith("__Z")) {
					flags.add("p0ctor=" + s.getName());  // the mangled constructor; protos.py takes its class
					break;
				}
			}
		}
		return String.join(",", inputs) + "\t" + String.join(",", flags);
	}
}
