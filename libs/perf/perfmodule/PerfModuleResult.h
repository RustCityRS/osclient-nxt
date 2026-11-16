// libs/perf/perfmodule/PerfModuleResult.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::perf {
    class PerfModuleResult {
    public:
        PerfModuleResult();
        void Clear();

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint64_t field_12;
        uint64_t field_20;
    };

    // 0x100bc54e0
    PerfModuleResult::PerfModuleResult() : field_0(0), field_8(4294967295), field_12(0), field_20(0) {
        Clear();
    }

    // 0x100bc5500
    void PerfModuleResult::Clear() {
        field_0 = 0;
        *(uint64_t*)&field_8 = 4294967295;
        *(uint64_t*)((long)&field_12 + 4) = 0;
    }

} // namespace jag::perf
