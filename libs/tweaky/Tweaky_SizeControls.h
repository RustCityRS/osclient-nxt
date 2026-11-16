// libs/tweaky/Tweaky_SizeControls.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class SizeControl : public RadioGroup // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SizeControl();
        virtual ResetToDefault();
        virtual void Draw(int, int);
        virtual void GetControlSize(int&, int&);
        virtual void SetTweaky(weak_ptr<Tweaky>);
        void Initialise();
        SizeControl();

        // data members, from how the methods use this: 301 bytes, the first 1 are RadioGroup
        char _unknown_1[35];
        int field_36; // offset 36
        int field_40; // offset 40
        char _unknown_44[220];
        int field_264;        // offset 264
        int field_268;        // offset 268
        shared_ptr field_272; // offset 272
        undefined4 field_288; // offset 288
        bool field_292;       // offset 292
        undefined1 field_293; // offset 293
        char field_294;       // offset 294
        char _unknown_295[6];
    };

    // 0x100a51660, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // SizeControl::~SizeControl(): jumps straight to the base-object destructor

    // 0x100a51670, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SizeControl::~SizeControl()
    /* RadioGroup::~RadioGroup() */

    void RadioGroup::~RadioGroup() {
        ~RadioGroup(this);
        operator_delete(this);
    }

    // 0x100a51de0, 304 bytes, inline, placed by class name and debug map
    // void Tweaky::TextDraw<std::basic_string_view<char, std::char_traits<char> > >(int, int, std::basic_string_view<char, std::char_traits<char> > const&, int, int, bool)
    /* void Tweaky::TextDraw<std::basic_string_view<char, std::char_traits<char> > >(int,
   int, std::basic_string_view<char, std::char_traits<char> > const&, int, int, bool) */

    void Tweaky::TextDraw<std::basic_string_view<char, std::char_traits<char>>>(int param_1, int param_2,
                                                                                basic_string_view* param_3, int param_4,
                                                                                int param_5, bool param_6) {
        uint uVar1;
        FontHelpers* this_00;
        StringView SVar2;
        StringView SVar3;
        TextFlags in_stack_ffffffffffffff58;
        undefined7 in_stack_ffffffffffffff59;
        StringView local_a0;
        StringView local_90;
        TextProperties local_80;
        optional<unsigned int> local_58[8];
        TextFlags local_38[8];

        graphics::TextFlags::TextFlags(local_38, 1, param_6);
        new (&local_80) graphics::TextProperties((shared_ptr*)field_64, in_stack_ffffffffffffff58);
        local_80.SetAlignment(0, 0);
        uVar1 = m_colour;
        eastl::optional<unsigned int>::optional(local_58, &field_152);
        local_80.SetColours(uVar1, local_58);
        this_00 = field_56;
        if (param_4 < 1) {
            StringView::StringView<std::basic_string_view<char, std::char_traits<char>>>(&local_90, param_3);
            SVar3.field_8._0_4_ = param_1 - field_136;
            SVar3.field_0 = (ulong)&local_90;
            SVar3.field_8._4_4_ = 0;
            this_00->DrawString(SVar3, param_2 - (field_132 + field_80), 512, (uint)&local_80,
                                (TextProperties*)CONCAT71(in_stack_ffffffffffffff59, in_stack_ffffffffffffff58));
        } else {
            StringView::StringView<std::basic_string_view<char, std::char_traits<char>>>(&local_a0, param_3);
            SVar2.field_8._0_4_ = param_1 - field_136;
            SVar2.field_0 = (ulong)&local_a0;
            SVar2.field_8._4_4_ = 0;
            this_00->DrawStringMultiline(
                SVar2, param_2 - (field_132 + field_80), param_4, param_5, 0, (uint*)&local_80,
                (TextProperties*)CONCAT71(in_stack_ffffffffffffff59, in_stack_ffffffffffffff58));
        }
    }

    // 0x100a51ff0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // EditLine::EditLine()
    void EditLine::EditLine() {
        field_0 = 0;
        m_pos = 0;
        new (&field_8) eastl::fixed_string<char, 256, true, eastl::allocator>();
        m_selectionStart = -1;
        m_selecting = false;
        m_cursorShown = true;
    }

    // 0x100a52030, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TweakSettingsValue::TweakSettingsValue()
    void TweakSettingsValue::TweakSettingsValue() {
        allocator local_20[8];

        new (this) eastl::string();
        eastl::allocator::allocator(local_20, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_32);
        field_80 = 0;
    }

    // 0x100a52090, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // TweakSettingsValue::~TweakSettingsValue()
    void TweakSettingsValue::~TweakSettingsValue() {
        (&field_32)->~map();
        ~basic_string();
    }

    // 0x100a521d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TweakSettingsValue::TweakSettingsValue(TweakSettingsValue const&)
    void TweakSettingsValue::TweakSettingsValue(TweakSettingsValue* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (map*)&param_1->field_32)
            eastl::map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>();
        field_80 = param_1->field_80;
    }

} // namespace jag::tweak
