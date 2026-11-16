// libs/oldscape/jagex3/graphics/pixscreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "pixscreen.h"

namespace jag::oldscape::graphics {
    // 0x10031ff30, 112 bytes, base-object constructor, placed by class name and debug map
    // PixScreen::PixScreen(int, int)
    void PixScreen::PixScreen(int param_1, int param_2) {
        field_0 = &PTR_Resize_100efadd8;
        new (&field_8) SharedArray<unsigned int>();
        field_32 = 0;
        field_36 = 0;
        field_40 = 1;
        field_42 = 0;
        SetupPixelBuffer(this, param_1, param_2);
    }

    // 0x10031ffa0, 96 bytes, placed by class name and debug map
    // PixScreen::SetupPixelBuffer(int, int)
    void PixScreen::SetupPixelBuffer(int param_1, int param_2) {
        SharedArray<unsigned int> local_30[24];

        field_32 = param_1;
        field_36 = param_2;
        SharedArray<unsigned int>::SharedArray(local_30, (long)(param_2 * param_1));
        SharedArray<unsigned int>::operator=((SharedArray<unsigned int>*)&field_8, (SharedArray*)local_30);
        local_30->~SharedArray();
    }

    // 0x100320000, 16 bytes, placed by class name and debug map
    // PixScreen::Resize(int, int)
    void PixScreen::Resize(int param_1, int param_2) {
        SetupPixelBuffer(this, param_1, param_2);
    }

} // namespace jag::oldscape::graphics
