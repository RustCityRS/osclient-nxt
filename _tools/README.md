# Reconstruction pipeline

The tree is rebuilt from `osclient-216-mac` (Mach-O x86_64, build OS1669) with Ghidra 12.2 headless and Python.
Names, signatures, file placement, inheritance and virtual order come from the binary's symbols, debug map and
vtables; bodies come from Ghidra's decompiler and are rewritten into ordinary C++.

## Ghidra side (one analysed project)

1. **Analyse** the binary with the default analysers.
2. **`InferInputs.java`** (`-readOnly`): unlocks every C++ function's prototype and records which registers the
   decompiler sees it read, whether it returns its first argument, and whether it writes through it -> `inputs.tsv`.
3. **`vtables.py <binary> vtables.tsv`**: every class's vtable slots and method names.
4. **`protos.py <binary> inputs.tsv layouts.tsv protos.jsonl [earlier decomp dirs, comma-separated]`**: one
   prototype per function from its demangled signature plus the evidence: member or static, a hidden by-value
   return buffer (sret), a VTT for base-object constructors of classes with virtual bases, parameter types
   (references and non-trivial classes as pointers, unknown by-value types as enums), readable parameter names,
   and return types that callers' casts give away. Rerun it with the previous decompiles until it settles:
   registers a function only passes through to a callee show up as `in_RSI` once its callees are typed.
5. **`ApplyPrototypes.java protos.jsonl layouts.tsv`**: applies them (locked parameters, return type unlocked
   unless known).
6. **`BuildStructs.java <empty file> class_sizes.txt layouts.tsv`**, then **`ApplyFieldNames.java
   accessor_names.tsv layouts.tsv`**: class layouts from how members use `this`, named from accessors.
7. **`ApplyVtables.java vtables.tsv`**: a typed `<Class>_vtbl` per class and a `_vptr` member, so virtual calls
   decompile as `this->_vptr->Method(this, ...)`.
8. **`DecompileAll.java decompile_targets.txt <out dir> 10`** (`-readOnly`): one decompile pass.

`ghidra-decompile.zip` holds the last decompile (`decomp/`), `protos.jsonl`, `inputs.tsv` and `vtables.tsv`.

## Python side

```
python stabs.py osclient-216-mac stabs.tsv
cut -f4 stabs.tsv | c++filt -_ > demangled.txt
python rebuild.py osclient-216-mac stabs.tsv demangled.txt <out> decomp
clang-format -i --style=file:.clang-format <out>/**/*.{cpp,h,mm}
```

`rebuild.py` expects `layouts.tsv` beside the decompile directory and `protos.jsonl` and `accessor_names.tsv`
beside `stabs.tsv`. Body rewriting is split into:

- `cleanup.py`: Ghidra-isms (stack protector, warnings, `undefined8` and friends, `CONCAT44`/`SUB84`/`ZEXT48`,
  wrapped statements, float constants, default template arguments).
- `cxxify.py`: compiler-generated code (vtable/VTT setup, initialiser lists, implicit destructor calls,
  by-value returns, local objects, declarations at first use, boolean flags, virtual calls).
- `rebuild.py`: calls with their callee's hidden parameters removed (`m_history.find(uid)` instead of
  `hashtable<...>::find(&ret, (hashtable *)&m_history, &uid)`), operators as operators, signatures from the
  demangled names, data types from how the code uses each variable.

`verify.py <tree> stabs.tsv demangled.txt` re-checks the earlier review's defects.
