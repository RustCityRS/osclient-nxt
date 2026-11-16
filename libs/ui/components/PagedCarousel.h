// libs/ui/components/PagedCarousel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class PagedCarousel : public PagedLayer // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PagedCarousel();
        virtual GetType() const;
        virtual GetSwipeable() const;
        virtual void MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool);
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual OnActivePageChanged();
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual void FlagLayoutDirty();
        virtual ulong HasInteractionInProgress() const;
        virtual void SetMargin(Component::MarginType, Margin);
        virtual ulong GetMargin(Component::MarginType) const;
        virtual SupportsMargin(Component::MarginType) const;
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual IsLayoutDirty() const;
        virtual UpdateLayout(bool);
        virtual void OnActivePageChanging(unsigned char);
        virtual void OnPageCountChanged();
        PagedCarousel(InterfaceManager*);
        ulong WrapActivePageOffset(int) const;
        void ApplyScroll(float);
        void UpdateAnimations(float);
        void DrawBackground(graphics::RT7Core*, int, int);
        void DrawActivePage(graphics::RT7Core*, int, int, float);
        void DrawPages(graphics::RT7Core*, int, int, float);
        void DrawFadeGradients(graphics::RT7Core*, int, int);
        void DrawButtons(graphics::RT7Core*, int, int);
        void SetupButtons(unsigned short, unsigned short, ButtonDisplayMode);
        bool IsSinglePageCarousel() const;
        void UpdateComponentListLayout(eastl::vector<ComponentContainer, eastl::allocator> const&, int, int, int, int);
        void UpdateComponentListForceDisabled(eastl::vector<ComponentContainer, eastl::allocator> const&, bool);
        bool PageTransitionInProgress() const;

        // data members, from how the methods use this: 1376 bytes, the first 1132 are PagedLayer
        char _unknown_1132[44];
        SpriteData field_1176; // offset 1176
        undefined1 field_1224; // offset 1224
        char _unknown_1225[79];
        Margin field_1304;     // offset 1304
        float field_1308;      // offset 1308
        uint field_1312;       // offset 1312
        undefined1 field_1316; // offset 1316
        char _unknown_1317[27];
        ButtonElement field_1344; // offset 1344
    };

    // 0x1006a2260, 32 bytes, inline, placed by class name
    // PagedCarousel::IsSinglePageCarousel() const
    bool PagedCarousel::IsSinglePageCarousel() {
        return field_1096 == 0.0;
    }

    // 0x1006adb50, 16 bytes, complete-object destructor, inline, placed by class name
    // PagedCarousel::~PagedCarousel(): jumps straight to the base-object destructor

    // 0x1006adb60, 32 bytes, deleting destructor, inline, placed by class name
    // PagedCarousel::~PagedCarousel()
    void PagedCarousel::~PagedCarousel() {
        ~PagedCarousel(this);
        operator_delete(this);
    }

    // 0x1006adb80, 16 bytes, inline, placed by class name
    // PagedCarousel::GetType() const
    undefined8 PagedCarousel::GetType() {
        return 16;
    }

    // 0x1006adb90, 16 bytes, inline, placed by class name
    // PagedCarousel::FlagLayoutDirty()
    void PagedCarousel::FlagLayoutDirty() {
        m_layoutDirty = 1;
    }

    // 0x1006adba0, 64 bytes, inline, placed by class name
    // PagedCarousel::HasInteractionInProgress() const
    ulong PagedCarousel::HasInteractionInProgress() {
        char cVar1;
        uint uVar2;
        undefined8 unaff_R14;
        ulong uVar3;

        cVar1 = PageTransitionInProgress(this);
        uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 == '\0') {
            cVar1 = (&field_1316)->IsMouseOver();
            if (cVar1 == '\0') {
                uVar2 = field_1344->IsMouseOver();
                uVar3 = (ulong)uVar2;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1006adbe0, 32 bytes, inline, placed by class name
    // PagedCarousel::SetMargin(Component::MarginType, Margin)
    void PagedCarousel::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 2) {
            *(undefined4*)field_1304 = param_3;
            return;
        }
        PagedLayer::SetMargin();
    }

    // 0x1006adc00, 32 bytes, inline, placed by class name
    // PagedCarousel::GetMargin(Component::MarginType) const
    ulong PagedCarousel::GetMargin(int param_2) {
        if (param_2 == 2) {
            return (ulong) * (uint*)field_1304;
        }
        return PagedLayer::GetMargin();
    }

    // 0x1006adc20, 32 bytes, inline, placed by class name
    // PagedCarousel::SupportsMargin(Component::MarginType) const
    undefined1 PagedCarousel::SupportsMargin(undefined8 param_1, int param_2) {
        undefined1 uVar1;

        uVar1 = 1;
        if (param_2 != 2) {
            uVar1 = game::option::HapticFeedback::IsAvailable();
        }
        return uVar1;
    }

    // 0x1006adc40, 16 bytes, inline, placed by class name
    // PagedCarousel::IsLayoutDirty() const
    undefined1 PagedCarousel::IsLayoutDirty() {
        return m_layoutDirty;
    }

    // 0x1006ade00, 48 bytes, inline, placed by class name
    // PagedCarousel::OnPageCountChanged()
    void PagedCarousel::OnPageCountChanged() {
        (&field_496)->size();
        eastl::vector<
            eastl::pair<int, int>,
            eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::resize((ulong)&field_1224);
    }

    // 0x1006b2f30, 96 bytes, base-object destructor, inline, placed by class name
    // PagedCarousel::~PagedCarousel()
    void PagedCarousel::~PagedCarousel() {
        field_0 = &PTR__PagedCarousel_100f0f2f8;
        *(undefined***)field_424 = &PTR__PagedCarousel_100f0f510;
        (&field_1224)->~fixed_vector();
        field_1176->~Sprite();
        field_1128->~Sprite();
        ~PagedLayer();
    }

    // 0x1006b2f90, 32 bytes, inline, placed by class name
    // PagedCarousel::PageTransitionInProgress() const
    bool PagedCarousel::PageTransitionInProgress() {
        return field_1092 != 0.0;
    }

} // namespace jag::ui
