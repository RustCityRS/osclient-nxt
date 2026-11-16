// projects/osclient/highlighting/HighlightUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::highlight {
    // 0x100010a70
    void TypeIDFromStaticEntityKey(long long arg1) {
        return (unsigned long)arg1 >> 32;
    }

    // 0x100010a80
    long long CoordFromStaticEntityKey(long long arg1) {
        int in_ESI;

        new (arg1) rs2lib::CoordGrid(in_ESI);
        return arg1;
    }

} // namespace jag::oldscape::highlight
