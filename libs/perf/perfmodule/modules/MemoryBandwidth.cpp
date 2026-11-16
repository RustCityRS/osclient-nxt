// libs/perf/perfmodule/modules/MemoryBandwidth.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.perf.perfmodule

#include "MemoryBandwidth.h"

namespace jag::perf {
    // 0x100bc4d70, 112 bytes, placed by class name and debug map
    // MemoryBandwidth::Run(int&)
    void MemoryBandwidth::Run(int* param_1) {
        bool bVar1;
        _func_decltype_nullptr* p_Var2;
        undefined8 uVar3;
        undefined4 uVar4;
        unique_ptr<char[], std::default_delete<char[]>> local_20[8];

        p_Var2 = operator_new__(1073741824);
        std::unique_ptr<char[], std::default_delete<char[]>>::unique_ptr<char*, true, void, void>(local_20,
                                                                                                  (char*)p_Var2);
        bVar1 = std::operator!=((unique_ptr*)local_20, p_Var2);
        uVar4 = 1;
        if (bVar1) {
            uVar3 = std::unique_ptr<char[], std::default_delete<char[]>>::operator[]((ulong)local_20);
            ___bzero(uVar3, 1073741824);
            uVar4 = 2;
        }
        field_488 = uVar4;
        std::unique_ptr<char[], std::default_delete<char[]>>::~unique_ptr(local_20);
    }

} // namespace jag::perf
