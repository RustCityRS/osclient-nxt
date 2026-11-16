// libs/tweaky/Tweaky_Control.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class Control {
    public:
        // virtual methods in vtable order
        virtual ~Control();
        virtual void Clear();
        virtual void InitDefault();
        void SaveSettings(TweakSettingsValue& arg1);
        void OnFocusChanged(bool arg1);
        void ResetToDefault();
        void ResetAllToDefault();
        uint64_t HandleChar(int arg1);
        uint64_t HandleKeyUp(int arg1);
        uint64_t OnMouseMove(float arg1, float arg2);
        uint64_t OnMouseWheel(float arg1, float arg2, float arg3);
        uint64_t HandleKeyDown(int arg1);
        bool HasKeyboardNavigation() const;
        bool IsTicked() const;
        uint8_t LoadSettings(const TweakSettingsValue& arg1);
        Type GetType() const;
        uint64_t GetRadioValue() const;
        uint64_t GetCurrentListItem() const;
        int GetPlacement() const;
        void SetText<eastl::fixed_string<char, 256>>(const eastl::fixed_string<char, 256>& str);
        void SetIgnoreTags(bool arg1);
        void SetHandler(std::function<void(Event const&)> const& callback);
        bool BoundsCheck(float arg1, float arg2) const;
        auto GetParent();
        void SetColour(unsigned int arg1, bool arg2);
        void SetFocus();
        void DoCallback(const Event& event) const;
        void SetParent(weak_ptr<Container> container);
        auto GetTweaky() const;
        void ClearControlSize();
        void ClearFocus();
        void DoOnShown();
        void GetText() const;
        void GetValue() const;
        Control(int arg1, int arg2, Type arg3, const eastl::string& str);
        Control(int arg1, int arg2, Type arg3, const char* str);
        void SetText(const char* str);
        bool HasBeenShown() const;
        void SetTicked(bool arg1);
        void SetValue(const eastl::string& str);
        uint8_t* GetCurrentListItemText() const;
        void SetMouseOver(bool arg1);
        void SetTweaky(weak_ptr<Tweaky> tweaky);

    private:
        uint8_t _unknown_8[16];
        int field_24;
        int field_28;
        Type m_type;
        uint64_t field_36;
        uint8_t _unknown_44[92];
        int m_pPlacement;
        int field_140;
        int field_144;
        int field_148;
        uint8_t _unknown_152[8];
        uint8_t field_160;
        uint8_t _unknown_161[47];
        bool m_mouseOver;
        char m_hasBeenShown;
        bool m_ignoreTags;
        uint8_t _unknown_211[5];
    };

    // 0x100687c10
    void Control::SetText<eastl::fixed_string<char, 256>>(const eastl::fixed_string<char, 256>& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2 = str.size();
        (&field_48)->assign(str_00, arg2);
    }

    // 0x1006c1440
    void Control::SetIgnoreTags(bool arg1) {
        m_ignoreTags = arg1;
    }

    // 0x100941480
    void Control::SetHandler(std::function<void(Event const&)> const& callback) {
        field_160 = callback;
    }

    // 0x100a3d880
    bool Control::BoundsCheck(float arg1, float arg2) const {
        if ((((float)m_pPlacement <= arg1) && (arg1 <= (float)field_144)) && ((float)field_140 <= arg2)) {
            return arg2 <= (float)field_148;
        }
        return false;
    }

    // 0x100a3dfe0
    auto Control::GetParent() {
        return auto(field_120);
    }

    // 0x100a41e40
    void Control::SetParent(weak_ptr<Container> container) {
        field_120 = *container;
    }

    // 0x100a41ee0
    auto Control::GetTweaky() const {
        return auto(field_104);
    }

    // 0x100a42820
    void Control::Clear() {
        field_160 = nullptr;
    }

    // 0x100a44410
    void Control::GetText() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100a46c30
    bool Control::HasBeenShown() const {
        return m_hasBeenShown;
    }

    // 0x100a47920
    Control::~Control() {
        field_120.~weak_ptr();
        field_104.~weak_ptr();
        field_48.~fixed_string();
    }

    // 0x100a513e0
    void Control::SetTicked(bool arg1) {
        auto this_00 = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->Log(false, 3,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Control.h",
                     118, "Ticking a non Radio/Check (%s)", uVar1);
    }

    // 0x100a51440
    void Control::SetValue(const eastl::string& str) {
        (logger::default_logger())
            ->Log(false, 3,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Control.h", 124,
                  "Cannot set value on a non EditField");
    }

    // 0x100a51470
    uint8_t* Control::GetCurrentListItemText() const {
        return &eastl::EMPTY_STRING;
    }

    // 0x100a51480
    void Control::SetMouseOver(bool arg1) {
        m_mouseOver = arg1;
    }

    // 0x100a51490
    void Control::SetTweaky(weak_ptr<Tweaky> tweaky) {
        field_104 = *tweaky;
    }

} // namespace jag::tweak

namespace jag {
    // 0x100687ec0
    shared_ptr_if_not_array<tweak::Tweaky>::type
    make_shared<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(
        graphics::RT7Core*& arg1, graphics::FontHelpers*& arg2, input::Input*& arg3) {
        ref_counter_base* ref_counter_base;
        int local_44;
        Tweaky* local_40[2];

        auto arg1_00 = aligned_alloc(192, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Tweaky>::type result;
        } else {
            local_40[0] = placement_new<tweak::Tweaky, graphics::RT7Core*&, graphics::FontHelpers*&, input::Input*&>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3);
            local_44 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Tweaky>, int, tweak::Tweaky*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::Tweaky>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100687fc0
    shared_ptr_if_not_array<tweak::List>::type
    make_shared<tweak::List, char const (&)[8], eastl::vector<eastl::string>>(char const (&arg1)[8],
                                                                              eastl::vector<eastl::string>&& strs) {
        ref_counter_base* ref_counter_base;
        int local_3c;
        List* local_38[2];

        auto arg1_00 = aligned_alloc(352, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::List>::type result;
        } else {
            local_38[0] = placement_new<tweak::List, char const(&)[8], eastl::vector<eastl::string>>(
                (void*)((long)arg1_00 + 32), arg1, strs);
            local_3c = 1;
            ref_counter_base = (ref_counter_base*)placement_new<ref_counter_shared<tweak::List>, int, tweak::List*&>(
                arg1_00, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::List>(ref_counter_base, local_38[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100688070
    shared_ptr_if_not_array<tweak::Label>::type make_shared<tweak::Label, char const (&)[1]>(char const (&arg1)[1]) {
        ref_counter_base* ref_counter_base;
        int local_34;
        Label* local_30[2];

        auto arg1_00 = aligned_alloc(256, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Label>::type result;
        } else {
            local_30[0] = placement_new<tweak::Label, char const(&)[1]>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_base = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Label>, int, tweak::Label*&>(
                arg1_00, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Label>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
