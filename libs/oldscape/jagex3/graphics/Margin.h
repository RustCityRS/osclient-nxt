// libs/oldscape/jagex3/graphics/Margin.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::graphics {
    class Margin {
    public:
        Margin(int, int, int, int);
        Margin();

        // data members, from how the methods use this: 20 bytes
        char _unknown_0[20];
    };

    // 0x10005f250: the linker folded this into widgets::Padding::Padding(int, int, int, int), which has identical code
    Margin::Margin(int, int, int, int);

    // 0x100075850: the linker folded this into widgets::Padding::Padding(int, int, int, int), which has identical code
    Margin::Margin(int, int, int, int);

    // 0x10014d410, 32 bytes, complete-object constructor, inline, placed by class name and debug map
    // Margin::Margin()
    void Margin::Margin() {
        new (this) dash3d::GridRect(0, 0, 0, 0);
    }

} // namespace jag::oldscape::graphics
