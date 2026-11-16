// projects/osclient/highlighting/HighlightUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::highlight {
    // 0x100010a70, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // TypeIDFromStaticEntityKey(long long)
    /* CreactionCycleFromNPCKey(long long) */

    ulong CreactionCycleFromNPCKey(longlong param_1) {
        return (ulong)param_1 >> 32;
    }

    // 0x100010a80, 32 bytes, inline, placed by debug map only (low confidence)
    // CoordFromStaticEntityKey(long long)
    highlight* CoordFromStaticEntityKey(longlong param_1) {
        new (this) rs2lib::CoordGrid((int)param_1);
        return this;
    }

} // namespace jag::oldscape::highlight
