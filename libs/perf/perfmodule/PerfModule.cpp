// libs/perf/perfmodule/PerfModule.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

#include "PerfModule.h"

namespace jag::perf {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    PerfModule::Desc::GetID() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    PerfModule::GetDesc() const;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PerfModule::OnSucceeded(PerfModuleResult&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PerfModule::OnFailed(PerfModuleResult&);

    // 0x1004c1940: the linker folded this into callstack::JagException::errorMessage() const, which has identical code
    PerfModule::Desc::GetName() const;

    // 0x100bc4340, 48 bytes, placed by class name and debug map
    // PerfModule::OnRun(PerfModuleResult&, float, float, int)
    void PerfModule::OnRun(PerfModuleResult* param_1, float param_2, float param_3, int param_4) {
        param_1->field_0 = &field_8;
        param_1->field_8 = field_488;
        *(float*)&param_1->field_12 = param_2 + *(float*)&param_1->field_12;
        *(float*)((long)&param_1->field_12 + 4) = param_3 + *(float*)((long)&param_1->field_12 + 4);
        *(int*)&param_1->field_20 = *(int*)&param_1->field_20 + param_4;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    PerfModule::~PerfModule();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    PerfModule::~PerfModule();

} // namespace jag::perf
