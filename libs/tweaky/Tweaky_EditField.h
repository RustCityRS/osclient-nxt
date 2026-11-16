// libs/tweaky/Tweaky_EditField.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class EditField : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~EditField();
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual OnClick(float, float, bool);
        virtual OnMouseOver(float, float);
        virtual void InitDefault();
        virtual void ResetToDefault();
        virtual void GetValue() const;
        virtual void SetValue(eastl::string const&);
        virtual LoadSettings(TweakSettingsValue const&);
        virtual void SaveSettings(TweakSettingsValue&);
        virtual HandleChar(int);
        virtual HandleKeyDown(int);
        virtual void HandleKeyUp(int);
        virtual HasKeyboardNavigation() const;
        EditField(char const*, int);

        // data members, from how the methods use this: 564 bytes, the first 220 are Label
        char _unknown_220[28];
        EditLine field_248; // offset 248
    };

    // 0x100a51580, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // EditField::~EditField(): jumps straight to the base-object destructor

    // 0x100a51590, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // EditField::~EditField()
    void EditField::~EditField() {
        ~EditField(this);
        operator_delete(this);
    }

    // 0x100a515b0, 48 bytes, inline, placed by class name and debug map
    // EditField::InitDefault()
    void EditField::InitDefault() {
        char* pcVar1;

        pcVar1 = (char*)field_248->GetText();
        (&field_216, pcVar1)->assign();
    }

    // 0x100a515e0, 32 bytes, inline, placed by class name and debug map
    // EditField::GetValue() const
    void EditField::GetValue() {
        field_248->GetText();
    }

    // 0x100a51600, 64 bytes, inline, placed by class name and debug map
    // EditField::SetValue(eastl::string const&)
    void EditField::SetValue(basic_string* param_1) {
        uchar* extraout_RDX;
        StringView SVar1;
        StringView local_28;

        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_28,
                                                                                      (fixed_string*)param_1);
        SVar1.field_8 = extraout_RDX;
        SVar1.field_0 = (ulong)&local_28;
        (field_248, SVar1)->SetText();
    }

    // 0x100a51640, 32 bytes, inline, placed by class name and debug map
    // EditField::HandleKeyUp(int)
    void EditField::HandleKeyUp(int param_1) {
        (field_248, param_1)->HandleKeyUp();
    }

    // 0x100a52a50, 64 bytes, base-object destructor, inline, placed by class name
    // EditField::~EditField()
    void EditField::~EditField() {
        field_0 = &PTR__EditField_100f1dd18;
        field_248->~EditLine();
        (&field_216)->~basic_string();
        ~Control();
    }

    // 0x100a55c90, 16 bytes, complete-object constructor, inline, placed by class name
    // EditField::EditField(char const*, int): jumps straight to the base-object constructor

    // 0x100a55ca0, 160 bytes, base-object constructor, inline, placed by class name
    // EditField::EditField(char const*, int)
    void EditField::EditField(char* param_1, int param_2) {
        allocator local_28[8];

        new (this) Control(0, 0, 6, param_1);
        field_0 = &PTR__EditField_100f1dd18;
        field_212 = 50;
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_216, "", local_28) eastl::string();
        new (field_248) EditLine();
        field_212 = param_2;
    }

} // namespace jag::tweak
