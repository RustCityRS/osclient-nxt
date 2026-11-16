// libs/perf/perfmodule/PerfModuleResult.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::perf {
    class PerfModuleResult {
    public:
        PerfModuleResult();
        void Clear();

        // data members, from how the methods use this: 28 bytes
        undefined8 field_0;  // offset 0
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
    };

    // 0x100bc4f90, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PerfModuleResult::PerfModuleResult(): jumps straight to the base-object constructor

    // 0x100bc54e0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // PerfModuleResult::PerfModuleResult()
    void PerfModuleResult::PerfModuleResult() {
        field_0 = 0;
        field_8 = 4294967295;
        field_12 = 0;
        field_20 = 0;
        Clear(this);
    }

    // 0x100bc5500, 32 bytes, inline, placed by class name and debug map
    // PerfModuleResult::Clear()
    void PerfModuleResult::Clear() {
        field_0 = 0;
        *(undefined8*)&field_8 = 4294967295;
        *(undefined8*)((long)&field_12 + 4) = 0;
    }

} // namespace jag::perf
