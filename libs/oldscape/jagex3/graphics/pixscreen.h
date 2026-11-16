// libs/oldscape/jagex3/graphics/pixscreen.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::graphics {
    class PixScreen {
    public:
        // virtual methods in vtable order
        virtual void Resize(int arg1, int arg2);
        PixScreen();
        ~PixScreen();
        PixScreen(int arg1, int arg2);
        void SetupPixelBuffer(int arg1, int arg2);

    private:
        uint8_t _unknown_8[24];
        int field_32;
        int field_36;
        uint16_t field_40;
        uint8_t field_42;
        uint8_t _unknown_43[5];
    };

    // 0x10031aee0
    PixScreen::PixScreen() : field_32(0), field_36(0), field_40(1), field_42(0) {}

    // 0x10031b010
    PixScreen::~PixScreen() {
        field_8.~SharedArray();
    }

} // namespace jag::oldscape::graphics
