// libs/ui/components/PagedCarousel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class PagedCarousel : public PagedLayer // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PagedCarousel();
        virtual uint64_t GetType() const;
        virtual uint64_t GetSwipeable() const;
        virtual void MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7);
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void OnActivePageChanged();
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual void FlagLayoutDirty();
        virtual unsigned long HasInteractionInProgress() const;
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual unsigned long GetMargin(Component::MarginType marginType) const;
        virtual uint8_t SupportsMargin(Component::MarginType marginType) const;
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual bool IsLayoutDirty() const;
        virtual uint64_t UpdateLayout(bool arg1);
        virtual void OnActivePageChanging(unsigned char arg1);
        virtual void OnPageCountChanged();
        PagedCarousel(InterfaceManager* interfaceManager);
        unsigned long WrapActivePageOffset(int arg1) const;
        void ApplyScroll(float arg1);
        void UpdateAnimations(float arg1);
        void DrawBackground(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawActivePage(graphics::RT7Core* rt7Core, int arg2, int arg3, float arg4);
        void DrawPages(graphics::RT7Core* rt7Core, int arg2, int arg3, float arg4);
        void DrawFadeGradients(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawButtons(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void SetupButtons(unsigned short arg1, unsigned short arg2, ButtonDisplayMode buttonDisplayMode);
        bool IsSinglePageCarousel() const;
        void UpdateComponentListLayout(const eastl::vector<ComponentContainer>& componentContainers, int arg2, int arg3,
                                       int arg4, int arg5);
        void UpdateComponentListForceDisabled(const eastl::vector<ComponentContainer>& componentContainers, bool arg2);
        bool PageTransitionInProgress() const;

    private:
        uint8_t _unknown_1132[44];
        SpriteData field_1176;
        uint8_t _unknown_1224[83];
        uint8_t field_1307;
        float field_1308;
        unsigned int field_1312;
        uint8_t _unknown_1316[28];
        ButtonElement field_1344;
    };

    // 0x1006a2260
    bool PagedCarousel::IsSinglePageCarousel() const {
        return field_1096 == 0.0;
    }

    // 0x1006adb80
    uint64_t PagedCarousel::GetType() const {
        return 16;
    }

    // 0x1006adb90
    void PagedCarousel::FlagLayoutDirty() {
        m_layoutDirty = 1;
    }

    // 0x1006adba0
    unsigned long PagedCarousel::HasInteractionInProgress() const {
        unsigned int uVar2;
        uint64_t unaff_R14;

        bool cVar1 = PageTransitionInProgress();
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            cVar1 = field_1316.IsMouseOver();
            if (!cVar1) {
                uVar2 = field_1344->IsMouseOver();
                uVar3 = (unsigned long)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1006adbe0
    void PagedCarousel::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 2) {
            field_1304 = margin.field_0;
            field_1305 = margin.field_1;
            field_1306 = margin.field_2;
            field_1307 = margin.field_3;
            return;
        }
        SetMargin(marginType, margin);
    }

    // 0x1006adc00
    unsigned long PagedCarousel::GetMargin(Component::MarginType marginType) const {
        if (marginType == 2) {
            return (unsigned long)*(unsigned int*)&field_1304;
        }
        return GetMargin(marginType);
    }

    // 0x1006adc20
    uint8_t PagedCarousel::SupportsMargin(Component::MarginType marginType) const {
        uint8_t uVar1 = 1;
        if (marginType != 2) {
            uVar1 = IsAvailable(marginType);
        }
        return uVar1;
    }

    // 0x1006adc40
    bool PagedCarousel::IsLayoutDirty() const {
        return m_layoutDirty;
    }

    // 0x1006ade00
    void PagedCarousel::OnPageCountChanged() {
        field_1224.resize(field_496.size());
    }

    // 0x1006b2f30
    PagedCarousel::~PagedCarousel() {
        *(uint8_t***)field_424 = &PTR__PagedCarousel_100f0f510;
        field_1224.~fixed_vector();
        field_1176->~Sprite();
        field_1128->~Sprite();
    }

    // 0x1006b2f90
    bool PagedCarousel::PageTransitionInProgress() const {
        return field_1092 != 0.0;
    }

} // namespace jag::ui
