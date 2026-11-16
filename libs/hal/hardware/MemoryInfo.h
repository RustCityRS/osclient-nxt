// libs/hal/hardware/MemoryInfo.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game {
    // 0x100189b80: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    PositionData::PositionData();

    // 0x100189b80: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    BaseConfigTypeList::DebugStats::DebugStats();

    // 0x10019b570: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    PositionData::PositionData();

    // 0x10019b570: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    BaseConfigTypeList::DebugStats::DebugStats();

} // namespace jag::game

namespace jag::hardware {
    class MemoryInfo {
    public:
        MemoryInfo();
    };

    // 0x100189b80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MemoryInfo::MemoryInfo(): jumps straight to the base-object constructor

    // 0x10019b570, 32 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MemoryInfo::MemoryInfo()
    /* oldscape::dash3d::ModelLit::AABB::AABB() */

    void oldscape::dash3d::ModelLit::AABB::AABB() {
        field_0 = 0;
        field_4 = 0;
        field_8 = 0;
        field_12 = 0;
        field_16 = 0;
        field_20 = 0;
    }

} // namespace jag::hardware
