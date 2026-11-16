// libs/tweaky/Tweaky_Button.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class Button : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~Button();
        virtual void OnFocusChanged(bool arg1);
        virtual void Draw(int arg1, int arg2);
        virtual unsigned long GetControlSize(int& arg1, int& arg2);
        virtual uint64_t OnClick(float arg1, float arg2, bool arg3);
        virtual uint8_t OnMouseMove(float arg1, float arg2);
        virtual uint8_t OnMouseOver(float arg1, float arg2);
        virtual void ResetToDefault();
        Button(const char* str);
        Button(const char* str, int arg2);

    private:
        uint8_t _unknown_220[4];
    };

} // namespace jag::tweak
