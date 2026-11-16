// Decompiles the functions listed in a file of hex addresses into decomp_<thread>.txt records
// that rebuild.py reads. Script args: <targets file> <output dir> [threads] [thiscall]
//@category osclient
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressSpace;
import ghidra.app.util.NamespaceUtils;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.GhidraClass;
import ghidra.program.model.symbol.Namespace;
import ghidra.util.task.TaskMonitor;

import java.io.Writer;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.atomic.AtomicInteger;

public class DecompileAll extends GhidraScript {
	@Override
	public void run() throws Exception {
		String[] args = getScriptArgs();
		Path targets = Path.of(args[0]);
		Path out = Path.of(args[1]);
		int threads = args.length > 2 ? Integer.parseInt(args[2]) : 8;
		Files.createDirectories(out);

		AddressSpace space = currentProgram.getAddressFactory().getDefaultAddressSpace();
		List<Function> functions = new ArrayList<>();
		int missing = 0;
		for (String line : Files.readAllLines(targets)) {
			line = line.trim();
			if (line.isEmpty()) {
				continue;
			}
			Function f = getFunctionAt(space.getAddress(Long.parseUnsignedLong(line, 16)));
			if (f == null) {
				missing++;
			} else {
				functions.add(f);
			}
		}
		println(functions.size() + " functions to decompile, " + missing + " addresses without a function");

		// "thiscall": decompile the listed functions as member functions (changes are not saved with -readOnly)
		if (args.length > 3 && args[3].equals("thiscall")) {
			int tx = currentProgram.startTransaction("thiscall");
			int set = 0;
			try {
				for (Function f : functions) {
					Namespace ns = f.getParentNamespace();
					if (ns == null || ns.isGlobal()) {
						continue;
					}
					if (!(ns instanceof GhidraClass)) {
						NamespaceUtils.convertNamespaceToClass(ns);
					}
					f.setCallingConvention("__thiscall");
					set++;
				}
			} finally {
				currentProgram.endTransaction(tx, true);
			}
			println(set + " functions switched to __thiscall");
		}

		ConcurrentLinkedQueue<Function> queue = new ConcurrentLinkedQueue<>(functions);
		AtomicInteger done = new AtomicInteger();
		AtomicInteger failed = new AtomicInteger();
		ExecutorService pool = Executors.newFixedThreadPool(threads);
		List<Future<?>> jobs = new ArrayList<>();
		for (int t = 0; t < threads; t++) {
			Path file = out.resolve("decomp_" + t + ".txt");
			jobs.add(pool.submit(() -> {
				DecompInterface ifc = new DecompInterface();
				DecompileOptions options = new DecompileOptions();
				options.grabFromProgram(currentProgram);
				ifc.setOptions(options);
				ifc.toggleCCode(true);
				ifc.toggleSyntaxTree(false);
				ifc.setSimplificationStyle("decompile");
				ifc.openProgram(currentProgram);
				try (Writer w = Files.newBufferedWriter(file, StandardCharsets.UTF_8)) {
					Function f;
					while ((f = queue.poll()) != null && !monitor.isCancelled()) {
						DecompileResults r = ifc.decompileFunction(f, 120, TaskMonitor.DUMMY);
						w.write("//@@FUNC " + Long.toHexString(f.getEntryPoint().getOffset()) + "\n");
						if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
							w.write(r.getDecompiledFunction().getC());
						} else {
							failed.incrementAndGet();
							w.write("// decompile failed: " + (r == null ? "no result" : r.getErrorMessage().trim()) + "\n");
						}
						int n = done.incrementAndGet();
						if (n % 2000 == 0) {
							println(n + "/" + functions.size() + " decompiled, " + failed.get() + " failed");
						}
					}
				} finally {
					ifc.dispose();
				}
				return null;
			}));
		}
		for (Future<?> job : jobs) {
			job.get();
		}
		pool.shutdown();
		println("done: " + done.get() + " decompiled, " + failed.get() + " failed");
	}
}
