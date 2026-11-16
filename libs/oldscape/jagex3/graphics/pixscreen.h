// libs/oldscape/jagex3/graphics/pixscreen.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::graphics {
    class PixScreen {
    public:
        // virtual methods in vtable order
        virtual void Resize(int, int);
        PixScreen();
        ~PixScreen();
        PixScreen(int, int);
        void SetupPixelBuffer(int, int);

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        int field_32;        // offset 32
        int field_36;        // offset 36
        undefined2 field_40; // offset 40
        undefined1 field_42; // offset 42
        char _unknown_43[5];
    };

    // 0x10031aee0, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // PixScreen::PixScreen()
    void PixScreen::PixScreen() {
        field_0 = &PTR_Resize_100efadd8;
        new (&field_8) SharedArray<unsigned int>();
        field_32 = 0;
        field_36 = 0;
        field_40 = 1;
        field_42 = 0;
    }

    // 0x10031b010, 32 bytes, base-object destructor, inline, placed by class name
    // PixScreen::~PixScreen()
    void PixScreen::~PixScreen() {
        field_0 = &PTR_Resize_100efadd8;
        (&field_8)->~SharedArray();
    }

} // namespace jag::oldscape::graphics
