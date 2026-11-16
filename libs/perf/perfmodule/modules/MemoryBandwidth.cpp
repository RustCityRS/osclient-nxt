// libs/perf/perfmodule/modules/MemoryBandwidth.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.perf.perfmodule

#include "MemoryBandwidth.h"

namespace jag::perf {
    // 0x100bc4d70
    void MemoryBandwidth::Run(int& arg1) {
        unique_ptr<char[]> local_20[8];

        auto str = operator_new__(1073741824);
        local_20->unique_ptr<char*, true, void, void>(str);
        bool bVar2 = ((unique_ptr<char_[], std::default_delete<char_[]> _>*)local_20) != str;
        uint32_t uVar3 = 1;
        if (bVar2) {
            ___bzero((*local_20)[(unsigned long)str], 1073741824);
            uVar3 = 2;
        }
        field_488 = uVar3;
    }

} // namespace jag::perf
