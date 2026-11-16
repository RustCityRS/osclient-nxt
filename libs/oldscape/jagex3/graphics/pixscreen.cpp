// libs/oldscape/jagex3/graphics/pixscreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "pixscreen.h"

namespace jag::oldscape::graphics {
    // 0x10031ff30
    PixScreen::PixScreen(int arg1, int arg2) : field_32(0), field_36(0), field_40(1), field_42(0) {
        SetupPixelBuffer(arg1, arg2);
    }

    // 0x10031ffa0
    void PixScreen::SetupPixelBuffer(int arg1, int arg2) {

        field_32 = arg1;
        field_36 = arg2;
        SharedArray<unsigned int> local_30((long)(arg2 * arg1));
        field_8 = local_30;
    }

    // 0x100320000
    void PixScreen::Resize(int arg1, int arg2) {
        SetupPixelBuffer(arg1, arg2);
    }

} // namespace jag::oldscape::graphics
