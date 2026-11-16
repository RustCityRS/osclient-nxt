// libs/ui/components/Carousel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class Carousel {
    public:
        class Entry;
        // virtual methods in vtable order
        virtual ~Carousel();
        virtual uint64_t GetType() const;
        virtual uint64_t GetSwipeable() const;
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual uint8_t RequiresSeparatePreviousValueTrigger() const;
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType optionClient) const;
        virtual uint64_t ProcessSwipeMovement(const math::Vector2T<int>& vector21, const math::Vector2T<int>& vector22,
                                              float arg3);
        virtual ComponentSingleValueMultiOptionMixin GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual uint16_t HasRecentValueChange() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual uint32_t GetPreviousValue() const;
        virtual void GetCurrentValue() const;
        virtual void ClearEntries();
        Carousel();
        short WrapSelectedEntryOffset(int arg1) const;
        void SetEntrySelectedByIndex(unsigned short arg1, bool arg2);
        void ApplyScroll(float arg1);
        unsigned long PrepareEntryIcons(graphics::SpriteAtlasManager& spriteAtlasManager);
        void UpdateAnimations(float arg1);
        void DrawBackground(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawSelectedEntry(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                               graphics::FontHelpers* fontHelpers, int arg4, int arg5);
        void DrawButtons(graphics::RT7Core* rt7Core, int arg2, int arg3);
        uint16_t GetEntryIndexById(int arg1) const;
        bool SetEntryEnabled(int arg1, bool arg2);
        bool GetEntryEnabled(int arg1) const;
        bool SetSelectedEntry(int arg1, bool arg2);
        unsigned int AddEntry(int arg1, const eastl::string& str);
        bool HasEntry(int arg1) const;
        unsigned int AddEntry(int arg1, int arg2);
        uint32_t GetSelectedEntryID() const;

    private:
        unsigned short field_8;
        unsigned short field_10;
        unsigned short field_12;
        unsigned short field_14;
        uint8_t _unknown_16[32];
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
        ComponentSingleValueMultiOptionMixin m_valueRepresentation;
        SpriteData field_400;
        SpriteData field_448;
        TextData field_496;
        unsigned short field_560;
        unsigned short field_562;
        unsigned short field_564;
        uint8_t _unknown_566[362];
        unsigned short field_928;
        unsigned short field_930;
        uint8_t field_932;
        uint8_t field_933;
        uint8_t field_934;
        uint8_t field_935;
        float field_936;
        uint8_t _unknown_940[28];
        ButtonElement field_968;
    };

    class Carousel::Entry {
    public:
        ~Entry();
        Entry(Entry&& entry);
        Entry();
        Entry(int arg1, const eastl::string& str);
        Entry(int arg1, int arg2);

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        int field_4;
        uint8_t _unknown_8[24];
        int field_32;
        uint8_t _unknown_36[4];
        uint64_t field_40;
        uint8_t _unknown_48[8];
    };

    // 0x10068b3b0
    ComponentSingleValueMultiOptionMixin::ComponentSingleValueMultiOptionMixin() : ComponentValueMixin() {}

    // 0x10068c8b0
    uint16_t Carousel::HasRecentValueChange() const {
        return field_930 != field_928;
    }

    // 0x10068c930
    bool Carousel::HasEntry(int arg1) const {
        return GetEntryIndexById(arg1) != -1;
    }

    // 0x1006ad070
    void Carousel::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 0) {
            field_932 = margin.field_0;
            field_933 = margin.field_1;
            field_934 = margin.field_2;
            field_935 = margin.field_3;
            return;
        }
    }

    // 0x1006ad090
    Margin Carousel::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 0) {
            local_c.field_0 = field_932;
            local_c.field_1 = field_933;
            local_c.field_2 = field_934;
            local_c.field_3 = field_935;
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x1006ad0c0
    void Carousel::NotifyRecentValueChangeHandled() {
        field_930 = field_928;
    }

    // 0x1006ad0e0
    uint32_t Carousel::GetPreviousValue() const {
        uint32_t uVar1;
        long lVar3;

        if (field_568.size() <= field_930) {
            LogAssert("m_entries.size() > m_lastSelectedEntryIndex",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.h",
                      56, nullptr);
        }
        if ((unsigned long)field_930 == 65535) {
            uVar1 = 0;
        } else {
            lVar3 = field_568[(unsigned long)field_930];
            uVar1 = *(uint32_t*)(lVar3 + 4);
        }
        return uVar1;
    }

    // 0x1006ad150
    void Carousel::GetCurrentValue() const {
        GetSelectedEntryID();
    }

    // 0x1006b0120
    Carousel::Entry::~Entry() {
        field_48.~shared_ptr();
        field_8.~basic_string();
    }

    // 0x1006b2a70
    Carousel::~Carousel() {
        *(uint8_t***)m_valueRepresentation = &PTR__Carousel_100f0e7c0;
        field_568.~fixed_vector();
        field_496->~TextData();
        field_448->~Sprite();
        field_400->~Sprite();
        m_valueRepresentation->destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1006b2ae0
    uint32_t Carousel::GetSelectedEntryID() const {
        uint32_t uVar1;
        long lVar3;

        if (field_568.size() <= field_928) {
            LogAssert("m_entries.size() > m_selectedEntryIndex",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.h",
                      45, nullptr);
        }
        if ((unsigned long)field_928 == 65535) {
            uVar1 = 0;
        } else {
            lVar3 = field_568[(unsigned long)field_928];
            uVar1 = *(uint32_t*)(lVar3 + 4);
        }
        return uVar1;
    }

    // 0x1006c5ba0
    Carousel::Entry::Entry(Carousel::Entry&& entry) {
        uint32_t uVar2 = *(uint32_t*)&entry.field_1;
        int iVar3 = entry.field_4;
        field_0 = entry.field_0;
        *(uint32_t*)&field_1 = uVar2;
        field_4 = iVar3;
        new (&field_8) eastl::basic_string<char, BucketAllocatorEASTL>(entry.field_8);
        uint32_t uVar4 = *(uint32_t*)&entry.field_36;
        uint64_t uVar1 = entry.field_40;
        field_32 = entry.field_32;
        *(uint32_t*)&field_36 = uVar4;
        field_40 = uVar1;
        field_48.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(entry.field_48);
    }

    // 0x1006c5c50
    Carousel::Entry::Entry() : field_0(1), field_4(-1), field_32(-1), field_40(18446744073709551615) {
        new (&field_48) shared_ptr();
    }

    // 0x1006c5e40
    Carousel::Entry::Entry(int arg1, const eastl::basic_string<char, BucketAllocatorEASTL>& str)
        : field_0(1), field_4(arg1), field_8(str), field_32(-1), field_40(18446744073709551615) {
        new (&field_48) shared_ptr();
    }

    // 0x1006c5f80
    Carousel::Entry::Entry(int arg1, int arg2)
        : field_0(1), field_4(arg1), field_32(arg2), field_40(18446744073709551615) {
        new (&field_48) shared_ptr();
    }

} // namespace jag::ui

namespace jag::math {
    // 0x10068b780
    int sign<int>(int arg1) {
        return (unsigned int)(0 < arg1) + (arg1 >> 31);
    }

} // namespace jag::math
