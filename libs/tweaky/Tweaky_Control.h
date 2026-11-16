// libs/tweaky/Tweaky_Control.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::tweak {
    class Control {
    public:
        // virtual methods in vtable order
        virtual ~Control();
        virtual void Clear();
        virtual InitDefault();
        SaveSettings(TweakSettingsValue&);
        OnFocusChanged(bool);
        ResetToDefault();
        ResetAllToDefault();
        HandleChar(int);
        HandleKeyUp(int);
        OnMouseMove(float, float);
        OnMouseWheel(float, float, float);
        HandleKeyDown(int);
        HasKeyboardNavigation() const;
        IsTicked() const;
        LoadSettings(TweakSettingsValue const&);
        GetType() const;
        GetRadioValue() const;
        GetCurrentListItem() const;
        int GetPlacement() const;
        void SetText<eastl::fixed_string<char, 256, true, eastl::allocator>>(
            eastl::fixed_string<char, 256, true, eastl::allocator> const&);
        void SetIgnoreTags(bool);
        void SetHandler(std::function<void(Event const&)> const&);
        bool BoundsCheck(float, float) const;
        GetParent();
        void SetColour(unsigned int, bool);
        void SetFocus();
        void DoCallback(Event const&) const;
        void SetParent(weak_ptr<Container>);
        GetTweaky() const;
        void ClearControlSize();
        void ClearFocus();
        void DoOnShown();
        GetText() const;
        void GetValue() const;
        Control(int, int, Type, eastl::string const&);
        Control(int, int, Type, char const*);
        void SetText(char const*);
        char HasBeenShown() const;
        void SetTicked(bool);
        void SetValue(eastl::string const&);
        GetCurrentListItemText() const;
        void SetMouseOver(bool);
        void SetTweaky(weak_ptr<Tweaky>);

        // data members, from how the methods use this: 216 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        int field_24;        // offset 24
        undefined4 field_28; // offset 28
        undefined4 m_type;   // offset 32
        undefined8 field_36; // offset 36
        char _unknown_44[92];
        int m_pPlacement; // offset 136
        int field_140;    // offset 140
        int field_144;    // offset 144
        int field_148;    // offset 148
        char _unknown_152[56];
        bool m_mouseOver;    // offset 208
        char m_hasBeenShown; // offset 209
        bool m_ignoreTags;   // offset 210
        char _unknown_211[5];
    };

    // 0x100687c10, 64 bytes, inline, placed by class name and debug map
    // void Control::SetText<eastl::fixed_string<char, 256, true, eastl::allocator> >(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    /* void Control::SetText<eastl::string
   >(eastl::string const&) */

    void Control::SetText<eastl::string>(basic_string* param_1) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        ((param_1 + 48))->assign(pcVar1, uVar2);
    }

    // 0x1006c1440, 16 bytes, inline, placed by class name
    // Control::SetIgnoreTags(bool)
    void Control::SetIgnoreTags(bool param_1) {
        m_ignoreTags = param_1;
    }

    // 0x100941480, 32 bytes, inline, placed by class name
    // Control::SetHandler(std::function<void (Event const&)> const&)
    /* Control::SetHandler(std::function<void (Event const&)> const&) */

    void Control::SetHandler(function* param_1) {
        std::function<void(Event_const&)>::operator=((function<void(Event_const&)>*)&field_160, param_1);
    }

    // 0x100a3d880, 80 bytes, inline, placed by class name
    // Control::BoundsCheck(float, float) const
    bool Control::BoundsCheck(float param_1, float param_2) {
        if ((((float)m_pPlacement <= param_1) && (param_1 <= (float)field_144)) && ((float)field_140 <= param_2)) {
            return param_2 <= (float)field_148;
        }
        return false;
    }

    // 0x100a3dfe0, 32 bytes, inline, placed by class name
    // Control::GetParent()
    Control* Control::GetParent() {
        long in_RSI;

        new (this) weak_ptr<oldscape::dash3d::Decor>((weak_ptr*)(in_RSI + 120));
        return this;
    }

    // 0x100a41e40, 16 bytes, inline, placed by class name
    // Control::SetParent(weak_ptr<Container>)
    void Control::SetParent(weak_ptr* param_2) {
        weak_ptr<Container>::operator=((weak_ptr<Container>*)&field_120, param_2);
    }

    // 0x100a41ee0, 32 bytes, inline, placed by class name
    // Control::GetTweaky() const
    Control* Control::GetTweaky() {
        long in_RSI;

        new (this) weak_ptr<oldscape::dash3d::Decor>((weak_ptr*)(in_RSI + 104));
        return this;
    }

    // 0x100a42820, 32 bytes, inline, placed by class name
    // Control::Clear()
    void Control::Clear() {
        std::function<void(Event_const&)>::operator=((function<void(Event_const&)>*)&field_160,
                                                     (_func_decltype_nullptr*)0);
    }

    // 0x100a44410, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Control::GetText() const
    /* Control::GetValue() const */

    void Control::GetValue() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100a46c30, 16 bytes, inline, placed by class name
    // Control::HasBeenShown() const
    char Control::HasBeenShown() {
        return m_hasBeenShown;
    }

    // 0x100a47920, 80 bytes, base-object destructor, inline, placed by class name
    // Control::~Control()
    void Control::~Control() {
        field_0 = &PTR__OptionStore_100f1d2c8;
        std::function<void(Event_const&)>::~function((function<void(Event_const&)>*)&field_160);
        (&field_120)->~weak_ptr();
        (&field_104)->~weak_ptr();
        /* WARNING: Subroutine does not return */
        (&field_48)->~fixed_string();
    }

    // 0x100a513e0, 96 bytes, inline, placed by class name
    // Control::SetTicked(bool)
    void Control::SetTicked(bool param_1) {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar1, 0, 3,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Control.h", 118,
            "Ticking a non Radio/Check (%s)", uVar2);
    }

    // 0x100a51440, 48 bytes, inline, placed by class name
    // Control::SetValue(eastl::string const&)
    void Control::SetValue(basic_string* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(
            uVar1, 0, 3,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Control.h", 124,
            "Cannot set value on a non EditField");
    }

    // 0x100a51470, 16 bytes, inline, placed by class name
    // Control::GetCurrentListItemText() const
    undefined1* Control::GetCurrentListItemText() {
        return &eastl::EMPTY_STRING;
    }

    // 0x100a51480, 16 bytes, inline, placed by class name
    // Control::SetMouseOver(bool)
    void Control::SetMouseOver(bool param_1) {
        m_mouseOver = param_1;
    }

    // 0x100a51490, 16 bytes, inline, placed by class name
    // Control::SetTweaky(weak_ptr<Tweaky>)
    void Control::SetTweaky(weak_ptr* param_2) {
        weak_ptr<Tweaky>::operator=((weak_ptr<Tweaky>*)&field_104, param_2);
    }

} // namespace jag::tweak

namespace jag {
    // 0x100687ec0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Tweaky>::type make_shared<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&)
    jag* jag::make_shared<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(
        RT7Core** param_1, FontHelpers** param_2, Input** param_3) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        Tweaky* local_40[2];

        pvVar1 = (void*)aligned_alloc(192, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Tweaky>, int, tweak::Tweaky*&>(
                pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Tweaky>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100687fc0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::List>::type make_shared<tweak::List, char const (&) [8], eastl::vector<eastl::string, eastl::allocator> >(char const (&) [8], eastl::vector<eastl::string, eastl::allocator>&&)
    jag*
    jag::make_shared<tweak::List, char const (&)[8], eastl::vector<eastl::string, eastl::allocator>>(char* param_1,
                                                                                                     vector* param_2) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_3c;
        List* local_38[2];

        pvVar1 = (void*)aligned_alloc(352, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] = placement_new<tweak::List, char const(&)[8], eastl::vector<eastl::string, eastl::allocator>>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::List>, int, tweak::List*&>(
                pvVar1, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::List>(prVar2, local_38[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100688070, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Label>::type make_shared<tweak::Label, char const (&) [1]>(char const (&) [1])
    jag* make_shared<tweak::Label, char const (&)[1]>(char* param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        Label* local_30[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<tweak::Label, char const(&)[1]>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Label>, int, tweak::Label*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Label>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
