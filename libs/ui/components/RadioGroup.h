// libs/ui/components/RadioGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class RadioGroup {
    public:
        class OptionData;
        // virtual methods in vtable order
        virtual ~RadioGroup();
        virtual GetType() const;
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual bool SupportsMargin(Component::MarginType) const;
        virtual GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual GetRecentValueChanges() const;
        virtual void ClearRecentValueChanges();
        RadioGroup();
        CalculateLogicBounds(int, int) const;
        bool CanChangeSelection(bool) const;
        void SelectOptionByIndex(unsigned char, bool, bool, bool);
        bool OptionsUseRegularButtons() const;
        void DebugDrawClickbounds(graphics::RT7Core*, int, int);
        Setup(UIDataMappingProvider<int, StringView> const&);
        ulong AddOption(int, eastl::basic_string<char, BucketAllocatorEASTL> const&);
        bool RemoveOption(int);
        void ClearOptions();
        bool HasOption(int);
        GetSelectedValue(unsigned char) const;
        long GetSelectedOption(unsigned char) const;
        GetSelectedLabel(unsigned char) const;
        bool SetOptionSelected(int, bool, bool);
        GetOptionSelected(int) const;
        bool SetOptionEnabled(int, bool);
        bool GetOptionEnabled(int) const;
        void SetVisualParams(unsigned char, unsigned char, unsigned char, unsigned char);
        bool SetSelectionLimits(unsigned char, unsigned char);
        bool CanSelectMultipleOptions() const;
        long GetSelectedOption(unsigned char);
        static /* 1 bytes */ m_debugDrawClickBounds; // = 0

        // data members, from how the methods use this: 616 bytes
        char _unknown_0[4];
        int field_4;     // offset 4
        ushort field_8;  // offset 8
        ushort field_10; // offset 10
        ushort field_12; // offset 12
        ushort field_14; // offset 14
        uint field_16;   // offset 16
        int field_20;    // offset 20
        char _unknown_24[24];
        uchar field_48; // offset 48
        char _unknown_49[1];
        char field_50; // offset 50
        char field_51; // offset 51
        char field_52; // offset 52
        char field_53; // offset 53
        char field_54; // offset 54
        char _unknown_55[1];
        int field_56;        // offset 56
        int field_60;        // offset 60
        int field_64;        // offset 64
        int field_68;        // offset 68
        int field_72;        // offset 72
        int field_76;        // offset 76
        int field_80;        // offset 80
        int field_84;        // offset 84
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[1];
        short field_102; // offset 102
        char _unknown_104[8];
        ComponentOpConfig field_112; // offset 112
        char _unknown_256[8];
        VisibleShadowCastingLightInfo field_264; // offset 264
        ComponentSwipeConfig field_288;          // offset 288
        char _unknown_293[59];
        undefined1 field_352; // offset 352
        char _unknown_353[3];
        undefined4 field_356; // offset 356
        char _unknown_360[32];
        ComponentMultiValueMixin field_392; // offset 392
        char _unknown_400[88];
        byte field_488;  // offset 488
        byte field_489;  // offset 489
        byte field_490;  // offset 490
        uchar field_491; // offset 491
        uchar field_492; // offset 492
        uchar field_493; // offset 493
        uchar field_494; // offset 494
        char _unknown_495[3];
        byte field_498; // offset 498
        char _unknown_499[3];
        byte field_502; // offset 502
        char _unknown_503[1];
        SpriteData field_504; // offset 504
        TextData field_552;   // offset 552
    };

    class RadioGroup::OptionData {
    public:
        ~OptionData();
        void Selected() const;
        OptionData(StringView);
        void SetSelected(bool, bool);
        OptionData(OptionData&&);
        OptionData* operator=(OptionData&&);

        // data members, from how the methods use this: 60 bytes
        char _unknown_0[24];
        undefined1 field_24;    // offset 24
        undefined3 field_25;    // offset 25
        ButtonElement field_28; // offset 28
    };

    // 0x1006a74f0, 16 bytes, inline, placed by class name and debug map
    // RadioGroup::OptionData::Selected() const
    void RadioGroup::OptionData::Selected() {
        field_28->IsToggled();
    }

    // 0x1006a7c80, 16 bytes, inline, placed by class name and debug map
    // RadioGroup::OptionsUseRegularButtons() const
    bool RadioGroup::OptionsUseRegularButtons() {
        return field_493 == '\0';
    }

    // 0x1006a8290, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RadioGroup::OptionData::OptionData(StringView): jumps straight to the base-object constructor

    // 0x1006a8850, 16 bytes, inline, placed by class name and debug map
    // RadioGroup::CanSelectMultipleOptions() const
    bool RadioGroup::CanSelectMultipleOptions() {
        return 1 < field_489;
    }

    // 0x1006a8900, 16 bytes, inline, placed by class name and debug map
    // RadioGroup::OptionData::SetSelected(bool, bool)
    void RadioGroup::OptionData::SetSelected(bool param_1, bool param_2) {
        (field_28, param_1, param_2)->SetToggled();
    }

    // 0x1006ae040, 16 bytes, complete-object destructor, inline, placed by class name
    // RadioGroup::~RadioGroup(): jumps straight to the base-object destructor

    // 0x1006ae050, 32 bytes, deleting destructor, inline, placed by class name
    // RadioGroup::~RadioGroup()
    void RadioGroup::~RadioGroup() {
        ~RadioGroup(this);
        operator_delete(this);
    }

    // 0x1006ae070, 16 bytes, inline, placed by class name
    // RadioGroup::GetType() const
    undefined8 RadioGroup::GetType() {
        return 17;
    }

    // 0x1006ae080, 16 bytes, inline, placed by class name
    // RadioGroup::SupportsMargin(Component::MarginType) const
    bool RadioGroup::SupportsMargin(undefined8 param_1, int param_2) {
        return param_2 == 2;
    }

    // 0x1006ae090, 32 bytes, inline, placed by class name
    // RadioGroup::GetRecentValueChanges() const
    RadioGroup* RadioGroup::GetRecentValueChanges() {
        long in_RSI;

        WrapArray<ComponentMultiValueMixin::ValueChangeEvent_const>::WrapArray<
            eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
            (WrapArray<ComponentMultiValueMixin::ValueChangeEvent_const>*)this, (fixed_vector*)(in_RSI + 432));
        return this;
    }

    // 0x1006ae0b0, 32 bytes, inline, placed by class name
    // RadioGroup::ClearRecentValueChanges()
    void RadioGroup::ClearRecentValueChanges() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1006b2850, 64 bytes, base-object constructor, inline, placed by class name
    // RadioGroup::OptionData::OptionData(StringView)
    void RadioGroup::OptionData::OptionData(StringView param_1) {
        StringView::to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>((StringView*)this);
        field_24 = 1;
        new (field_28, 4, 4) ButtonElement();
    }

    // 0x1006b28d0, 16 bytes, complete-object constructor, inline, placed by class name
    // RadioGroup::OptionData::OptionData(RadioGroup::OptionData&&): jumps straight to the base-object constructor

    // 0x1006b28e0, 48 bytes, base-object constructor, inline, placed by class name
    // RadioGroup::OptionData::OptionData(RadioGroup::OptionData&&)
    void RadioGroup::OptionData::OptionData(OptionData* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined1 uVar3;
        undefined3 uVar4;
        undefined1 uVar5;
        undefined1 uVar6;
        undefined1 uVar7;
        undefined1 uVar8;

        new (this) eastl::basic_string<char, BucketAllocatorEASTL>();
        uVar3 = param_1->field_24;
        uVar4 = param_1->field_25;
        uVar5 = param_1->field_28[0];
        uVar6 = param_1->field_28[1];
        uVar7 = param_1->field_28[2];
        uVar8 = param_1->field_28[3];
        uVar1 = *(undefined8*)(param_1->field_28 + 4);
        uVar2 = *(undefined8*)(param_1->field_28 + 18);
        *(undefined8*)(field_28 + 10) = *(undefined8*)(param_1->field_28 + 10);
        *(undefined8*)(field_28 + 18) = uVar2;
        field_24 = uVar3;
        field_25 = uVar4;
        field_28[0] = uVar5;
        field_28[1] = uVar6;
        field_28[2] = uVar7;
        field_28[3] = uVar8;
        *(undefined8*)(field_28 + 4) = uVar1;
    }

    // 0x1006b3080, 112 bytes, base-object destructor, inline, placed by class name
    // RadioGroup::~RadioGroup()
    void RadioGroup::~RadioGroup() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        *(undefined***)this = &PTR__RadioGroup_100f0f9e8;
        *(undefined***)field_392 = &PTR__RadioGroup_100f0fb08;
        field_552->~TextData();
        field_504->~Sprite();
        (&field_432)->~fixed_vector();
        (&field_400)->~vector_map();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)field_392, in_RSI, extraout_RDX);
        ~Component();
    }

    // 0x1006d9400, 48 bytes, inline, placed by class name
    // RadioGroup::OptionData::operator=(RadioGroup::OptionData&&)
    /* RadioGroup::OptionData::TEMPNAMEPLACEHOLDERVALUE(RadioGroup::OptionData&&) */

    OptionData* RadioGroup::OptionData::operator=(OptionData* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined3 uVar4;
        undefined1 uVar5;
        undefined1 uVar6;
        undefined1 uVar7;
        undefined1 uVar8;

        eastl::basic_string<char, BucketAllocatorEASTL>::operator=((basic_string<char, BucketAllocatorEASTL>*)this,
                                                                   (basic_string*)param_1);
        uVar4 = param_1->field_25;
        uVar5 = param_1->field_28[0];
        uVar6 = param_1->field_28[1];
        uVar7 = param_1->field_28[2];
        uVar8 = param_1->field_28[3];
        uVar1 = *(undefined8*)(param_1->field_28 + 4);
        uVar2 = *(undefined8*)(param_1->field_28 + 10);
        uVar3 = *(undefined8*)(param_1->field_28 + 18);
        field_24 = param_1->field_24;
        field_25 = uVar4;
        field_28[0] = uVar5;
        field_28[1] = uVar6;
        field_28[2] = uVar7;
        field_28[3] = uVar8;
        *(undefined8*)(field_28 + 4) = uVar1;
        *(undefined8*)(field_28 + 10) = uVar2;
        *(undefined8*)(field_28 + 18) = uVar3;
        return this;
    }

    // 0x1006d95f0, 256 bytes, inline, placed by class name
    // RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)::$_57::operator()(int, StringView) const
    /* RadioGroup::Setup(UIDataMappingProvider<int, StringView>
   const&)::$_57::TEMPNAMEPLACEHOLDERVALUE(int, StringView) const */

    void RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)::$_57::operator()(int param_1,
                                                                                            StringView param_2) {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        uchar* extraout_RDX;
        StringView SVar5;
        OptionData local_b0[2];
        StringView local_38;
        int local_24;

        lVar1 = *(long*)this;
        local_24 = param_1;
        uVar2 = ((lVar1 + 400))->size();
        if (uVar2 < 255) {
            new (&local_38) StringView(param_2.field_0);
            SVar5.field_8 = extraout_RDX;
            SVar5.field_0 = (ulong)&local_38;
            OptionData::OptionData(local_b0, SVar5);
            eastl::pair<int, RadioGroup::OptionData>::pair<int, RadioGroup::OptionData, void>(
                (pair<int, RadioGroup::OptionData>*)(local_b0[0].field_28 + 28), &local_24, local_b0);
            eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>::
                insert<eastl::pair<int, RadioGroup::OptionData>, void>(
                    (vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                                eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>*)(lVar1 +
                                                                                                                 400),
                    (pair*)(local_b0[0].field_28 + 28));
            ((local_b0[0].field_28 + 28))->~pair();
            local_b0->~__alt();
        } else {
            uVar3 = logger::default_logger();
            uVar4 = param_2.field_0->end();
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                207, "Cannot add option %s=%d as RadioGroup is already at the 255 option limit", uVar4, local_24);
        }
    }

    // 0x1006d9700, 16 bytes, inline, placed by class name
    // RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)::$_58::operator()(eastl::pair<int, RadioGroup::OptionData> const&, StringView) const
    /* RadioGroup::Setup(UIDataMappingProvider<int, StringView>
   const&)::$_58::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int, RadioGroup::OptionData> const&,
   StringView) const */

    void RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)::$_58::operator()(pair* param_1,
                                                                                            StringView param_2) {
        operator==((basic_string*)(param_1 + 8), (StringView*)param_2.field_0);
    }

} // namespace jag::ui

namespace jag::tweak {
    class RadioGroup : public Container // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RadioGroup();
        virtual int GetRadioValue() const;
        void UntickAll();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

} // namespace jag::tweak

namespace jag::fixedfunction {
    // 0x1006a7ff0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
