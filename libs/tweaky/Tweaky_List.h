// libs/tweaky/Tweaky_List.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::fixedfunction {
    // 0x1006c9ce0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::__28, void>(
        function<void(int, StringView), 64ul, 16ul, (Methods)0>* this, __28* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 80) =
            function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->SetEntries()::$_28&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->SetEntries()::$_28&&)::{
            lambda(void*, int, StringView) #1
        }
        ::StringView_;
        *(code**)(this + 88) =
            function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->SetEntries()::$_28&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006c9d20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1006c9d30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (int, StringView), 64ul, 16ul,
   (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int,
   StringView> const&)::$_28,
   void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView>
   const&)::$_28&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x1006c9d40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{lambda(void*, int, StringView)#1}::__invoke(void*, int, StringView)
    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*, int, StringView) #1
    }
    ::StringView_(void* param_1, int param_2, ulong param_3, uchar* param_4) {
        StringView SVar1;

        SVar1.field_8 = param_4;
        SVar1.field_0 = param_3;
        operator()(param_1, param_2, SVar1);
    }

    // 0x1006c9d50, 64 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{lambda(void*, int, StringView)#1}::operator()(void*, int, StringView) const
    /* function<void (int, StringView), 64ul, 16ul,
   (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int,
   StringView> const&)::$_28,
   void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView>
   const&)::$_28&&)::{lambda(void*, int, StringView)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, int,
   StringView) const */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*, int, StringView) #1
    }
    ::operator()(void* param_1, int param_2, StringView param_3) {
        uchar* puVar1;
        StringView SVar2;
        StringView local_30;

        puVar1 = param_3.field_8;
        new (&local_30) StringView(param_3.field_0);
        SVar2.field_8 = puVar1;
        SVar2.field_0 = (ulong)&local_30;
        (ui::UIDataMappingProvider<int, StringView> const&)->SetEntries()::$_28::operator()(param_1, param_2, SVar2);
    }

    // 0x1006c9f80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28, void>(
        ui::ComboField::SetEntries(ui::UIDataMappingProvider<int, StringView> const&)::$_28&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x1006bd120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::List>::ref_counter_shared(unsigned long, tweak::List*): jumps straight to the base-object constructor

    // 0x1006bd130, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::List>::ref_counter_shared(unsigned long, tweak::List*)
    void ref_counter_shared<tweak::List>::ref_counter_shared(ulong param_1, List* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7450 + 16;
        *(ulong*)(this + 16) = param_1;
        *(List**)(this + 24) = param_2;
    }

    // 0x1006bd170, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<tweak::List>::DeleteData()
    /* ref_counter_shared<hal::audio::osx::OSXAudioRenderer>::DeleteData() */

    void ref_counter_shared<hal::audio::osx::OSXAudioRenderer>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 320;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1006bd1f0, 32 bytes, inline, placed by debug map only (low confidence)
    // tweak::Label* placement_new<tweak::Label, char const (&) [1]>(void*, char const (&) [1])
    Label* placement_new<tweak::Label, char const (&)[1]>(void* param_1, char* param_2) {
        tweak::Label::Label(param_1, param_2);
        return param_1;
    }

} // namespace jag

namespace jag::ui {
    // 0x1006c3a00, 64 bytes, inline, placed by debug map only (low confidence)
    // unsigned char StyleSheetValueHelper::Get<unsigned char>(int, StyleSheetValueHelper::Type)
    uchar StyleSheetValueHelper::Get<unsigned char>(uchar param_1, int param_2) {
        if (param_2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      22, (char*)0);
        }
        return param_1;
    }

    // 0x1006c3a50, 64 bytes, inline, placed by debug map only (low confidence)
    // unsigned int StyleSheetValueHelper::Get<unsigned int>(int, StyleSheetValueHelper::Type)
    uint StyleSheetValueHelper::Get<unsigned int>(uint param_1, int param_2) {
        if (param_2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      18, (char*)0);
        }
        return param_1;
    }

    // 0x1006c5cd0, 64 bytes, inline, placed by debug map only (low confidence)
    // unsigned short StyleSheetValueHelper::Get<unsigned short>(int, StyleSheetValueHelper::Type)
    ushort StyleSheetValueHelper::Get<unsigned short>(ushort param_1, int param_2) {
        if (param_2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      20, (char*)0);
        }
        return param_1;
    }

    // 0x1006c7120, 64 bytes, inline, placed by debug map only (low confidence)
    // signed char StyleSheetValueHelper::Get<signed char>(int, StyleSheetValueHelper::Type)
    int StyleSheetValueHelper::Get<signed char>(char param_1, int param_2) {
        if (param_2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      21, (char*)0);
        }
        return (int)param_1;
    }

} // namespace jag::ui

namespace jag::math {
    // 0x1006cba70, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int> Lerp<Vector2T<int>, float>(Vector2T<int> const&, Vector2T<int> const&, float)
    void Lerp<Vector2T<int>, float>(Vector2T* param_1, Vector2T* param_2, float param_3) {
        undefined8 local_28;
        undefined8 local_20;

        local_20 = operator-(param_2, param_1);
        local_28 = operator*((Vector2T*)&local_20, param_3);
        operator+(param_1, (Vector2T*)&local_28);
    }

    // 0x1006cbac0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int> operator*<int>(Vector2T<int> const&, float)
    /* Vector2T<int> TEMPNAMEPLACEHOLDERVALUE(Vector2T<int> const&,
   float) */

    undefined8 operator*(Vector2T* param_1, float param_2) {
        undefined8 uVar1;
        undefined1 local_10[8];

        new (local_10) oldscape::sidebars::SideBarData((int)((float)*(int*)param_1 * param_2),
                                                       (int)((float)*(int*)(param_1 + 4) * param_2));
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
        virtual ResetToDefault();
        virtual void Draw(int, int);
        virtual GetControlSize(int&, int&);
        virtual OnClick(float, float, bool);
        virtual OnMouseMove(float, float);
        virtual OnMouseOver(float, float);
        virtual OnMouseWheel(float, float, float);
        virtual GetCurrentListItem() const;
        virtual GetCurrentListItemText() const;
        virtual LoadSettings(TweakSettingsValue const&);
        virtual void SaveSettings(TweakSettingsValue&);
        virtual HandleKeyDown(int);
        virtual HasKeyboardNavigation() const;
        List(char const*, eastl::vector<eastl::string, eastl::allocator>&&);
        void UpdateMouseSelection(float, float);
        void ValidatePosition();
        void NavigateUp();
        void NavigateDown();
        void NavigatePageUp();
        void NavigatePageDown();
        void NavigateHome();
        void NavigateEnd();
        void AddLine(eastl::string const&);
        void AddLineUnique(eastl::string const&);
        void AddLineUniqueFirstWord(eastl::string const&);
        void Sort();
        void HandleMouseDown(float, float);
        HandleMouseUp(float, float);
        void ScrollUp(int);
        void ScrollDown(int);

        // data members, from how the methods use this: 316 bytes, the first 220 are Label
        char _unknown_220[28];
        undefined4 field_248; // offset 248
        int field_252;        // offset 252
        int field_256;        // offset 256
        int field_260;        // offset 260
        int field_264;        // offset 264
        int field_268;        // offset 268
        int field_272;        // offset 272
        uint field_276;       // offset 276
        int field_280;        // offset 280
        int field_284;        // offset 284
        int field_288;        // offset 288
        int field_292;        // offset 292
        int field_296;        // offset 296
        float field_300;      // offset 300
        float field_304;      // offset 304
        bool field_308;       // offset 308
        char field_309;       // offset 309
        char _unknown_310[6];
    };

} // namespace jag::tweak
