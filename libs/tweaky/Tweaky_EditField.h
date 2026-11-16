// libs/tweaky/Tweaky_EditField.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class EditField : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~EditField();
        virtual void Draw(int arg1, int arg2);
        virtual unsigned long GetControlSize(int& arg1, int& arg2);
        virtual uint64_t OnClick(float arg1, float arg2, bool arg3);
        virtual uint64_t OnMouseOver(float arg1, float arg2);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void GetValue() const;
        virtual void SetValue(const eastl::string& str);
        virtual uint8_t LoadSettings(const TweakSettingsValue& tweakSettingsValue);
        virtual void SaveSettings(TweakSettingsValue& tweakSettingsValue);
        virtual uint8_t HandleChar(int arg1);
        virtual uint8_t HandleKeyDown(int arg1);
        virtual void HandleKeyUp(int arg1);
        virtual bool HasKeyboardNavigation() const;
        EditField(const char* str, int arg2);

    private:
        uint8_t _unknown_220[28];
        EditLine field_248;
    };

    // 0x100a515b0
    void EditField::InitDefault() {
        auto str = field_248->GetText();
        (&field_216)->assign(str);
    }

    // 0x100a515e0
    void EditField::GetValue() const {
        field_248->GetText();
    }

    // 0x100a51600
    void EditField::SetValue(const eastl::string& str) {
        StringView local_28;

        local_28.StringView<eastl::fixed_string<char, 40>>(str);
        field_248->SetText(&local_28);
    }

    // 0x100a51640
    void EditField::HandleKeyUp(int arg1) {
        field_248->HandleKeyUp(arg1);
    }

    // 0x100a52a50
    EditField::~EditField() {
        field_248->~EditLine();
        field_216.~basic_string();
    }

    // 0x100a55ca0
    EditField::EditField(const char* str, int arg2) : Control(0, 0, 6, str), field_212(50) {

        new (&field_216) eastl::string("");
        new (field_248) EditLine();
        field_212 = arg2;
    }

} // namespace jag::tweak
