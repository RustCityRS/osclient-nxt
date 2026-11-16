// libs/tweaky/Tweaky_CheckBox.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class CheckBox : public RadioButton // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~CheckBox();
        virtual OnClick(float, float, bool);
        virtual OnMouseOver(float, float);
        virtual void ResetToDefault();
        virtual void DrawTick(int, int);
        CheckBox(char const*, bool);
        CheckBox(char const*);

        // data members, from how the methods use this: 213 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        int field_40; // offset 40
        char _unknown_44[116];
        Event field_160; // offset 160
        char _unknown_184[24];
        bool field_208; // offset 208
        char _unknown_209[2];
        byte field_211;       // offset 211
        undefined1 field_212; // offset 212
    };

    // 0x100a51510, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // CheckBox::~CheckBox(): jumps straight to the base-object destructor

    // 0x100a51520, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CheckBox::~CheckBox()
    /* RadioButton::~RadioButton() */

    void RadioButton::~RadioButton() {
        ~RadioButton(this);
        operator_delete(this);
    }

    // 0x100a550a0, 16 bytes, complete-object constructor, inline, placed by class name
    // CheckBox::CheckBox(char const*, bool): jumps straight to the base-object constructor

    // 0x100a550b0, 144 bytes, base-object constructor, inline, placed by class name
    // CheckBox::CheckBox(char const*, bool)
    void CheckBox::CheckBox(char* param_1, bool param_2) {
        undefined7 in_register_00000011;
        eastl::string local_58[32];
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, param_1, local_38);
        new (this) Tickable(0, 0, 5, local_58, CONCAT71(in_register_00000011, param_2) & 4294967295);
        eastl::string::~basic_string(local_58);
        field_0 = &PTR__RadioButton_100f1db08;
    }

    // 0x100a55b20, 16 bytes, complete-object constructor, inline, placed by class name
    // CheckBox::CheckBox(char const*): jumps straight to the base-object constructor

    // 0x100a55b30, 144 bytes, base-object constructor, inline, placed by class name
    // CheckBox::CheckBox(char const*)
    void CheckBox::CheckBox(char* param_1) {
        eastl::string local_50[32];
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, param_1, local_30);
        new (this) Tickable(0, 0, 5, local_50, 0);
        eastl::string::~basic_string(local_50);
        field_0 = &PTR__RadioButton_100f1db08;
    }

} // namespace jag::tweak
