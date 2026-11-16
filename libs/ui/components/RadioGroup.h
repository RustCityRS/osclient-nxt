// libs/ui/components/RadioGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class RadioGroup {
    public:
        class OptionData;
        // virtual methods in vtable order
        virtual ~RadioGroup();
        virtual uint64_t GetType() const;
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType marginType) const;
        virtual ComponentMultiValueMixin GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual auto GetRecentValueChanges() const;
        virtual void ClearRecentValueChanges();
        RadioGroup();
        uint8_t[16] CalculateLogicBounds(int arg1, int arg2) const;
        bool CanChangeSelection(bool arg1) const;
        void SelectOptionByIndex(unsigned char arg1, bool arg2, bool arg3, bool arg4);
        bool OptionsUseRegularButtons() const;
        void DebugDrawClickbounds(graphics::RT7Core* rt7Core, int arg2, int arg3);
        uint32_t Setup(const UIDataMappingProvider<int, StringView>& uiDataMappingProvider);
        unsigned long AddOption(int arg1, const eastl::string& str);
        bool RemoveOption(int arg1);
        void ClearOptions();
        bool HasOption(int arg1);
        uint32_t GetSelectedValue(unsigned char arg1) const;
        long GetSelectedOption(unsigned char arg1) const;
        uint8_t* GetSelectedLabel(unsigned char arg1) const;
        bool SetOptionSelected(int arg1, bool arg2, bool arg3);
        uint64_t GetOptionSelected(int arg1) const;
        bool SetOptionEnabled(int arg1, bool arg2);
        bool GetOptionEnabled(int arg1) const;
        void SetVisualParams(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4);
        bool SetSelectionLimits(unsigned char arg1, unsigned char arg2);
        bool CanSelectMultipleOptions() const;
        long GetSelectedOption(unsigned char arg1);
        static bool m_debugDrawClickBounds; // = 0

    private:
        unsigned short field_8;
        unsigned short field_10;
        unsigned short field_12;
        unsigned short field_14;
        unsigned int field_16;
        int field_20;
        uint8_t _unknown_24[24];
        unsigned char field_48;
        uint8_t _unknown_49[1];
        uint8_t field_50;
        uint8_t field_51;
        uint8_t field_52;
        uint8_t field_53;
        char field_54;
        uint8_t _unknown_55[1];
        int field_56;
        int field_60;
        int field_64;
        int field_68;
        int field_72;
        int field_76;
        int field_80;
        int field_84;
        unsigned int field_88;
        int field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[1];
        short field_102;
        uint8_t _unknown_104[8];
        ComponentOpConfig field_112;
        uint8_t _unknown_256[8];
        VisibleShadowCastingLightInfo field_264;
        ComponentSwipeConfig field_288;
        uint8_t _unknown_293[59];
        uint8_t field_352;
        uint8_t _unknown_353[3];
        uint32_t field_356;
        uint8_t _unknown_360[32];
        ComponentMultiValueMixin m_valueRepresentation;
        int field_400;
        uint8_t _unknown_404[84];
        uint8_t field_488;
        uint8_t field_489;
        uint8_t field_490;
        unsigned char field_491;
        unsigned char field_492;
        unsigned char field_493;
        unsigned char field_494;
        uint8_t _unknown_495[3];
        uint8_t field_498;
        uint8_t _unknown_499[3];
        uint8_t field_502;
        uint8_t _unknown_503[1];
        SpriteData field_504;
        TextData field_552;
    };

    class RadioGroup::OptionData {
    public:
        ~OptionData();
        void Selected() const;
        OptionData(StringView stringView);
        void SetSelected(bool arg1, bool arg2);
        OptionData(OptionData&& optionData);
        OptionData* operator=(OptionData&& optionData);

    private:
        uint8_t _unknown_0[24];
        uint8_t field_24;
        uint8_t field_25[3];
        ButtonElement field_28;
    };

    // 0x1006a74f0
    void RadioGroup::OptionData::Selected() const {
        field_28->IsToggled();
    }

    // 0x1006a7c80
    bool RadioGroup::OptionsUseRegularButtons() const {
        return field_493 == '\0';
    }

    // 0x1006a8850
    bool RadioGroup::CanSelectMultipleOptions() const {
        return 1 < field_489;
    }

    // 0x1006a8900
    void RadioGroup::OptionData::SetSelected(bool arg1, bool arg2) {
        field_28->SetToggled(arg1, arg2);
    }

    // 0x1006ae070
    uint64_t RadioGroup::GetType() const {
        return 17;
    }

    // 0x1006ae080
    bool RadioGroup::SupportsMargin(Component::MarginType marginType) const {
        return marginType == 2;
    }

    // 0x1006ae090
    auto RadioGroup::GetRecentValueChanges() const {
        auto result;
        result.WrapArray<
            eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, false, eastl::dummy_allocator>>(
            field_432);
        return result;
    }

    // 0x1006ae0b0
    void RadioGroup::ClearRecentValueChanges() {
        field_432.clear();
    }

    // 0x1006b2850
    RadioGroup::OptionData::OptionData(StringView stringView) {
        *this = stringView->to_owned_string<eastl::basic_string<char, BucketAllocatorEASTL>>();
        field_24 = 1;
        new (field_28) ButtonElement(4, 4);
    }

    // 0x1006b28e0
    RadioGroup::OptionData::OptionData(RadioGroup::OptionData&& optionData)
        : eastl::basic_string<char, BucketAllocatorEASTL>(optionData) {
        uint8_t uVar3 = optionData.field_24;
        uint32_t uVar4 = optionData.field_25;
        uint8_t uVar5 = optionData.field_28[0];
        uint8_t uVar6 = optionData.field_28[1];
        uint8_t uVar7 = optionData.field_28[2];
        uint8_t uVar8 = optionData.field_28[3];
        uint64_t uVar1 = *(uint64_t*)(optionData.field_28 + 4);
        uint64_t uVar2 = *(uint64_t*)(optionData.field_28 + 18);
        *(uint64_t*)(field_28 + 10) = *(uint64_t*)(optionData.field_28 + 10);
        *(uint64_t*)(field_28 + 18) = uVar2;
        field_24 = uVar3;
        field_25 = uVar4;
        field_28[0] = uVar5;
        field_28[1] = uVar6;
        field_28[2] = uVar7;
        field_28[3] = uVar8;
        *(uint64_t*)(field_28 + 4) = uVar1;
    }

    // 0x1006b3080
    RadioGroup::~RadioGroup() {
        *(uint8_t***)this = &PTR__RadioGroup_100f0f9e8;
        *(uint8_t***)m_valueRepresentation = &PTR__RadioGroup_100f0fb08;
        field_552->~TextData();
        field_504->~Sprite();
        field_432.~fixed_vector();
        m_valueRepresentation->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1006d9400
    OptionData* RadioGroup::OptionData::operator=(RadioGroup::OptionData&& optionData) {
        *this = optionData;
        uint32_t uVar4 = optionData.field_25;
        uint8_t uVar5 = optionData.field_28[0];
        uint8_t uVar6 = optionData.field_28[1];
        uint8_t uVar7 = optionData.field_28[2];
        uint8_t uVar8 = optionData.field_28[3];
        uint64_t uVar1 = *(uint64_t*)(optionData.field_28 + 4);
        uint64_t uVar2 = *(uint64_t*)(optionData.field_28 + 10);
        uint64_t uVar3 = *(uint64_t*)(optionData.field_28 + 18);
        field_24 = optionData.field_24;
        field_25 = uVar4;
        field_28[0] = uVar5;
        field_28[1] = uVar6;
        field_28[2] = uVar7;
        field_28[3] = uVar8;
        *(uint64_t*)(field_28 + 4) = uVar1;
        *(uint64_t*)(field_28 + 10) = uVar2;
        *(uint64_t*)(field_28 + 18) = uVar3;
        return this;
    }

    // 0x1006d95f0
    void
    RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)::$_57::operator()(int arg1,
                                                                                       StringView stringView) const {
        Logger* this_00;
        uint64_t uVar3;
        OptionData local_b0;
        StringView local_38;

        long lVar1 = *(long*)this;
        if (((lVar1 + 400))->size() < 255) {
            local_38 = StringView(*stringView);
            local_b0 = OptionData(&local_38);
            ((local_b0[0].field_28 + 28))->pair<int, RadioGroup::OptionData, void>(arg1, local_b0);
            ((lVar1 + 400))->insert<eastl::pair<int, RadioGroup::OptionData>, void>(*((local_b0[0].field_28 + 28)));
            ((local_b0[0].field_28 + 28))->~pair();
        } else {
            this_00 = logger::default_logger();
            uVar3 = stringView->end();
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                207, "Cannot add option %s=%d as RadioGroup is already at the 255 option limit", uVar3, arg1);
        }
    }

    // 0x1006d9700
    void RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)::$_58::operator()(
        const eastl::pair<int, RadioGroup::OptionData>& arg1, StringView stringView) const {
        (*((this + 8))) == arg1;
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

    private:
        uint8_t _unknown_8[209];
    };

} // namespace jag::tweak
