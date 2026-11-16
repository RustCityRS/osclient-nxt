// libs/tweaky/Tweaky_CheckBox.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class CheckBox : public RadioButton // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~CheckBox();
        virtual uint8_t OnClick(float arg1, float arg2, bool arg3);
        virtual uint8_t OnMouseOver(float arg1, float arg2);
        virtual void ResetToDefault();
        virtual void DrawTick(int arg1, int arg2);
        CheckBox(const char* str, bool arg2);
        CheckBox(const char* str);

    private:
        uint8_t _unknown_8[32];
        int field_40;
        uint8_t _unknown_44[116];
        Event field_160;
        uint8_t _unknown_184[24];
        bool field_208;
        uint8_t _unknown_209[2];
        bool field_211;
        bool field_212;
    };

    // 0x100a550b0
    CheckBox::CheckBox(const char* str, bool arg2) {

        eastl::string local_58(str);
        new (this) Tickable(0, 0, 5, local_58, arg2);
    }

    // 0x100a55b30
    CheckBox::CheckBox(const char* str) {

        eastl::string local_50(str);
        new (this) Tickable(0, 0, 5, local_50, false);
    }

} // namespace jag::tweak
