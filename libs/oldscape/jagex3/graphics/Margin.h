// libs/oldscape/jagex3/graphics/Margin.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::graphics {
    class Margin {
    public:
        Margin(int arg1, int arg2, int arg3, int arg4);
        Margin();

        uint8_t _unknown_0[20];
    };

    // 0x100075850: Margin::Margin(int, int, int, int) has the same machine code as widgets::Padding::Padding(int, int, int, int)

    // 0x10014d410
    Margin::Margin() : dash3d::GridRect(0, 0, 0, 0) {}

} // namespace jag::oldscape::graphics
