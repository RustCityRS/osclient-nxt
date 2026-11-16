// libs/tweaky/Tweaky_List.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::fixedfunction {
    // 0x1006c9ce0
    function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 80) =
            function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->SetEntries()::$_28&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->SetEntries()::$_28&&)::{
            lambda(void*, int, StringView) #1
        }
        ::StringView_;
        *(void (**)(...))(this + 88) =
            function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->SetEntries()::$_28&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006c9d20
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1006c9d30
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x1006c9d40
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*, int, StringView) #1
    }
    ::__invoke(void* arg1, int arg2, StringView stringView) {
        operator()(this, arg1, arg2, stringView);
    }

    // 0x1006c9d50
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*, int, StringView) #1
    }
    ::operator()(void* arg1, int arg2, StringView stringView) const {
        uint32_t in_register_00000014;

        StringView local_30(*((StringView*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2)));
        (ui::UIDataMappingProvider<int, StringView> const&)
            ->SetEntries()::$_28::operator()((__28*)this, (int)arg1, &local_30);
    }

    // 0x1006c9f80
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::ui {
    // 0x1006c3a00
    unsigned char StyleSheetValueHelper::Get<unsigned char>(int arg1, StyleSheetValueHelper::Type arg2) {
        if (arg2 != 0) {
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      22, nullptr);
        }
        return (unsigned char)arg1;
    }

    // 0x1006c3a50
    unsigned int StyleSheetValueHelper::Get<unsigned int>(int arg1, StyleSheetValueHelper::Type arg2) {
        if (arg2 != 0) {
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      18, nullptr);
        }
        return arg1;
    }

    // 0x1006c5cd0
    unsigned short StyleSheetValueHelper::Get<unsigned short>(int arg1, StyleSheetValueHelper::Type arg2) {
        if (arg2 != 0) {
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      20, nullptr);
        }
        return (unsigned short)arg1;
    }

    // 0x1006c7120
    signed char StyleSheetValueHelper::Get<signed char>(int arg1, StyleSheetValueHelper::Type arg2) {
        if (arg2 != 0) {
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      21, nullptr);
        }
        return (schar)arg1;
    }

} // namespace jag::ui

namespace jag {
    // 0x1006bd130
    ref_counter_shared<tweak::List>::ref_counter_shared(unsigned long arg1, tweak::List* arg2) : ref_counter_base() {}

    // 0x1006bd170
    void ref_counter_shared<tweak::List>::DeleteData() {
        long lVar1;
        ref_counter_shared<hal::audio::osx::OSXAudioRenderer> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<hal::audio::osx::OSXAudioRenderer> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 320;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1006bd1f0
    tweak::Label* placement_new<tweak::Label, char const (&)[1]>(void* arg1, char const (&arg2)[1]) {
        new (arg1) tweak::Label(arg2);
        return arg1;
    }

} // namespace jag

namespace jag::math {
    // 0x1006cba70
    Vector2T<int> Lerp<Vector2T<int>, float>(const Vector2T<int>& vector21, const Vector2T<int>& vector22, float arg3) {
        uint64_t local_20 = vector22 - vector21;
        uint64_t local_28 = &local_20 * arg3;
        vector21 + local_28;
    }

    // 0x1006cbac0
    Vector2T<int> operator* <int>(const Vector2T<int>& vector2, float arg2) {
        uint64_t uVar1;
        uint8_t local_10[8];

        new (local_10) oldscape::sidebars::SideBarData((int)((float)*(int*)vector2 * arg2),
                                                       (int)((float)*(int*)(vector2 + 4) * arg2));
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

} // namespace jag::math

namespace jag::tweak {
    class List : public Label // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~List();
        virtual void ResetToDefault();
        virtual void Draw(int arg1, int arg2);
        virtual uint64_t GetControlSize(int& arg1, int& arg2);
        virtual uint64_t OnClick(float arg1, float arg2, bool arg3);
        virtual uint64_t OnMouseMove(float arg1, float arg2);
        virtual uint32_t OnMouseOver(float arg1, float arg2);
        virtual uint32_t OnMouseWheel(float arg1, float arg2, float arg3);
        virtual SpriteAtlasUsageType GetCurrentListItem() const;
        virtual uint8_t* GetCurrentListItemText() const;
        virtual uint32_t LoadSettings(const TweakSettingsValue& tweakSettingsValue);
        virtual void SaveSettings(TweakSettingsValue& tweakSettingsValue);
        virtual uint64_t HandleKeyDown(int arg1);
        virtual bool HasKeyboardNavigation() const;
        List(const char* str, eastl::vector<eastl::string>&& strs);
        void UpdateMouseSelection(float arg1, float arg2);
        void ValidatePosition();
        void NavigateUp();
        void NavigateDown();
        void NavigatePageUp();
        void NavigatePageDown();
        void NavigateHome();
        void NavigateEnd();
        void AddLine(const eastl::string& str);
        void AddLineUnique(const eastl::string& str);
        void AddLineUniqueFirstWord(const eastl::string& str);
        void Sort();
        void HandleMouseDown(float arg1, float arg2);
        uint32_t HandleMouseUp(float arg1, float arg2);
        void ScrollUp(int arg1);
        void ScrollDown(int arg1);

    private:
        uint8_t _unknown_220[28];
        EnumOptionToggle field_248;
        EnumOptionToggle field_252;
        EnumOptionToggle field_256;
        EnumOptionToggle field_260;
        int field_264;
        int field_268;
        int field_272;
        unsigned int field_276;
        EnumOptionToggle field_280;
        bool field_284;
        bool field_285;
        bool field_286;
        bool field_287;
        int field_288;
        int field_292;
        int field_296;
        float field_300;
        float field_304;
        bool field_308;
        char field_309;
        uint8_t _unknown_310[6];
    };

} // namespace jag::tweak
