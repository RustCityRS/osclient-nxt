// libs/perf/perfmodule/PerfModule.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.osclient

#include "PerfModule.h"

namespace jag::perf {
    // 0x100009ca0: PerfModule::Desc::GetID() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009d50: PerfModule::GetDesc() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009e70: PerfModule::OnSucceeded(PerfModuleResult&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PerfModule::OnFailed(PerfModuleResult&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1004c1940: PerfModule::Desc::GetName() const has the same machine code as callstack::JagException::errorMessage() const

    // 0x100bc4340
    void PerfModule::OnRun(PerfModuleResult& perfModuleResult, float arg2, float arg3, int arg4) {
        perfModuleResult.field_0 = &field_8;
        perfModuleResult.field_8 = field_488;
        *(float*)&perfModuleResult.field_12 = arg2 + *(float*)&perfModuleResult.field_12;
        *(float*)((long)&perfModuleResult.field_12 + 4) = arg3 + *(float*)((long)&perfModuleResult.field_12 + 4);
        *(int*)&perfModuleResult.field_20 = *(int*)&perfModuleResult.field_20 + arg4;
    }

    // 0x100c92b50: PerfModule::~PerfModule() has the same machine code as InlineFatalBreak()

} // namespace jag::perf
