// libs/ui/components/PagedLayer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.ui

namespace jag::ui {
    class PagedLayer {
    public:
        class PageData;
        // virtual methods in vtable order
        virtual ~PagedLayer();
        virtual uint64_t GetType() const;
        virtual void OnPageCountChanged();
        virtual void MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2);
        virtual uint8_t RequiresSeparatePreviousValueTrigger() const;
        virtual void SetMargin(Component::MarginType marginType, Margin margin);
        virtual Margin GetMargin(Component::MarginType marginType) const;
        virtual bool SupportsMargin(Component::MarginType optionClient) const;
        virtual uint8_t* GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(const StyleSheet& styleSheet);
        virtual vector<render::Viewport, eastl::fixed_vector_allocator<24ul, _2ul, _4ul, _0ul, true> _>*
        GetStaticChildren();
        virtual uint8_t* GetDynamicChildren();
        virtual void GetStaticChildrenRenderOrderCollection();
        virtual long GetDynamicChildrenRenderOrderCollection();
        virtual uint8_t* GetStaticChildrenWithOptionalRenderOrder() const;
        virtual uint8_t* GetDynamicChildrenWithOptionalRenderOrder() const;
        virtual void AddStaticChild(const ComponentContainer& componentContainer);
        virtual unsigned long AddDynamicChild(const shared_ptr<Component>& component, bool arg2);
        virtual uint64_t DelDynamicChild(int arg1);
        virtual void SendComponentToBack(const shared_ptr<Component>& component);
        virtual void SendComponentToFront(const shared_ptr<Component>& component);
        virtual void SetChildHidden(const Component& component, bool arg2);
        virtual void SetScrollPos(int arg1, int arg2);
        virtual void SetScrollSize(int arg1, int arg2);
        virtual void GetScrollXPos() const;
        virtual void GetScrollYPos() const;
        virtual uint32_t GetScrollWidth() const;
        virtual uint32_t GetScrollHeight() const;
        virtual bool HasRecentValueChange() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual unsigned char GetPreviousValue() const;
        virtual unsigned char GetActivePage() const;
        virtual void OnActivePageChanged();
        void OnActivePageChanging(unsigned char arg1);
        uint8_t* GetDynamicChildren() const;
        PagedLayer(InterfaceManager* interfaceManager);
        bool SetActivePage(unsigned char arg1);
        uint8_t GetPageCount() const;
        unsigned char GetCurrentValue() const;
        void GetPageStaticChildren(unsigned char arg1);
        long GetPageDynamicChildren(unsigned char arg1);
        void DrawBackground(graphics::RT7Core* rt7Core, int arg2, int arg3);
        void DrawActivePage(graphics::RT7Core* rt7Core, int arg2, int arg3, float arg4);
        bool SetDynamicPageCount(unsigned char arg1);
        uint8_t GetStaticPageCount() const;
        void GetCurrentPage();
        void ConvertToInteractableArea(int& arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6) const;
        long GetPageLabel(unsigned char arg1) const;
        uint8_t GetPageEnabled(unsigned char arg1) const;
        uint32_t GetPageIcon(unsigned char arg1) const;
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, _2ul, _4ul, _0ul, true> _>*
        GetStaticChildren() const;
        void GetCurrentPage() const;
        static bool m_showNoClickThroughPagedLayers; // = 0

    private:
        uint8_t _unknown_8[4];
        unsigned short field_12;
        uint8_t _unknown_14[74];
        ShaderVariablePrecision field_88;
        ShaderVariablePrecision field_92;
        uint32_t field_96;
        uint8_t field_100;
        uint8_t _unknown_101[323];
        uint8_t** m_pValueRepresentation;
        uint8_t _unknown_432[584];
        uint8_t m_staticPageCount;
        unsigned char m_currentValue;
        unsigned char m_previousValue;
        uint8_t _unknown_1019[53];
        Margin field_1072;
        uint8_t _unknown_1076[4];
        InterfaceManager* field_1080;
        uint8_t _unknown_1088[44];
    };

    class PagedLayer::PageData {
    public:
        void ValidateScrollPos(int& arg1, int& arg2, int arg3, int arg4) const;
        ~PageData();
        PageData(PageData&& pageData);
        PageData();

    private:
        uint8_t _unknown_0[64];
        uint64_t field_64;
        ShaderVariablePrecision field_72;
        ShaderVariablePrecision field_76;
        uint8_t field_80;
        uint8_t _unknown_81[31];
        uint32_t field_112;
        uint8_t _unknown_116[4];
    };

    // 0x1006a1ad0
    uint8_t PagedLayer::GetPageCount() const {
        return field_496.size();
    }

    // 0x1006a2500
    unsigned char PagedLayer::GetActivePage() const {
        return m_currentValue;
    }

    // 0x1006a25c0
    void PagedLayer::GetPageStaticChildren(unsigned char arg1) {
        if (GetPageCount() <= arg1) {
            LogAssert(
                "pageIndex < GetPageCount()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 86,
                nullptr);
        }
        field_496[(unsigned long)arg1];
    }

    // 0x1006a2610
    long PagedLayer::GetPageDynamicChildren(unsigned char arg1) {
        if (GetPageCount() <= arg1) {
            LogAssert(
                "pageIndex < GetPageCount()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 87,
                nullptr);
        }
        return field_496[(unsigned long)arg1] + 32;
    }

    // 0x1006a2d10
    uint8_t PagedLayer::GetStaticPageCount() const {
        return m_staticPageCount;
    }

    // 0x1006a2d80
    void PagedLayer::GetCurrentPage() {
        field_496[(unsigned long)m_currentValue];
    }

    // 0x1006a56b0
    long PagedLayer::GetPageLabel(unsigned char arg1) const {
        uint64_t in_register_00000031;

        unsigned long arg1_00 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
        if (field_496.size() <= arg1_00) {
            LogAssert(
                "pageIndex < m_pages.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 48,
                nullptr);
        }
        return field_496[arg1_00] + 88;
    }

    // 0x1006a5780
    uint8_t PagedLayer::GetPageEnabled(unsigned char arg1) const {
        uint64_t in_register_00000031;

        unsigned long arg1_00 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
        if (field_496.size() <= arg1_00) {
            LogAssert(
                "pageIndex < m_pages.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 44,
                nullptr);
        }
        long lVar2 = field_496[arg1_00];
        return *(uint8_t*)(lVar2 + 80);
    }

    // 0x1006a57e0
    uint32_t PagedLayer::GetPageIcon(unsigned char arg1) const {
        uint64_t in_register_00000031;

        unsigned long arg1_00 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
        if (field_496.size() <= arg1_00) {
            LogAssert(
                "pageIndex < m_pages.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 49,
                nullptr);
        }
        long lVar2 = field_496[arg1_00];
        return *(uint32_t*)(lVar2 + 112);
    }

    // 0x1006adc50
    vector<render::Viewport, eastl::fixed_vector_allocator<24ul, _2ul, _4ul, _0ul, true> _>*
    PagedLayer::GetStaticChildren() {
        return (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, _2ul, _4ul, _0ul, true> _>*)&field_432;
    }

    // 0x1006adc60
    void PagedLayer::GetStaticChildrenRenderOrderCollection() {
        GetCurrentPage();
    }

    // 0x1006adc70
    long PagedLayer::GetDynamicChildrenRenderOrderCollection() {
        return GetCurrentPage() + 32;
    }

    // 0x1006adc80
    uint8_t* PagedLayer::GetStaticChildrenWithOptionalRenderOrder() const {
        uint8_t* puVar2;

        if (GetPageCount() == '\0') {
            puVar2 = &field_432;
        } else {
            puVar2 = (uint8_t*)GetCurrentPage();
        }
        return puVar2;
    }

    // 0x1006adcb0
    uint8_t* PagedLayer::GetDynamicChildrenWithOptionalRenderOrder() const {
        long lVar2;
        uint8_t* puVar3;

        if (GetPageCount() == '\0') {
            puVar3 = &field_464;
        } else {
            lVar2 = GetCurrentPage();
            puVar3 = (uint8_t*)(lVar2 + 32);
        }
        return puVar3;
    }

    // 0x1006adcf0
    void PagedLayer::GetScrollXPos() const {
        long lVar3 = GetCurrentPage();
        EnumOptionToggle enumOptionToggle1 = *(EnumOptionToggle*)(lVar3 + 64);
        ShaderVariablePrecision SVar2 = field_88;
        lVar3 = GetCurrentPage();
        int iVar1 = eastl::max<int>(SVar2, *(ShaderVariablePrecision*)(lVar3 + 72));
        SVar2 = eastl::min<graphics::GraphicsQuality>(enumOptionToggle1, iVar1 - field_88);
        eastl::max<int>(0, SVar2);
    }

    // 0x1006add40
    void PagedLayer::GetScrollYPos() const {
        long lVar3 = GetCurrentPage();
        EnumOptionToggle enumOptionToggle1 = *(EnumOptionToggle*)(lVar3 + 68);
        ShaderVariablePrecision SVar2 = field_92;
        lVar3 = GetCurrentPage();
        int iVar1 = eastl::max<int>(SVar2, *(ShaderVariablePrecision*)(lVar3 + 76));
        SVar2 = eastl::min<graphics::GraphicsQuality>(enumOptionToggle1, iVar1 - field_92);
        eastl::max<int>(0, SVar2);
    }

    // 0x1006add90
    uint32_t PagedLayer::GetScrollWidth() const {
        long lVar1 = GetCurrentPage();
        return *(uint32_t*)(lVar1 + 72);
    }

    // 0x1006adda0
    uint32_t PagedLayer::GetScrollHeight() const {
        long lVar1 = GetCurrentPage();
        return *(uint32_t*)(lVar1 + 76);
    }

    // 0x1006addb0
    bool PagedLayer::HasRecentValueChange() const {
        return m_currentValue != m_previousValue;
    }

    // 0x1006addd0
    void PagedLayer::NotifyRecentValueChangeHandled() {
        m_previousValue = m_currentValue;
    }

    // 0x1006addf0
    unsigned char PagedLayer::GetPreviousValue() const {
        return m_previousValue;
    }

    // 0x1006adf10
    uint64_t PagedLayer::GetType() const {
        return 22;
    }

    // 0x1006adf20
    void PagedLayer::SetMargin(Component::MarginType marginType, Margin margin) {
        if (marginType == 0) {
            field_1072[0] = margin.field_0;
            field_1072[1] = margin.field_1;
            field_1072[2] = margin.field_2;
            field_1072[3] = margin.field_3;
            return;
        }
    }

    // 0x1006adf40
    Margin PagedLayer::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 0) {
            local_c.field_0 = field_1072[0];
            local_c.field_1 = field_1072[1];
            local_c.field_2 = field_1072[2];
            local_c.field_3 = field_1072[3];
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x1006b2620
    PagedLayer::PageData::~PageData() {
        field_88.~basic_string();
        field_32.~vector();
    }

    // 0x1006b2fb0
    void PagedLayer::GetCurrentPage() const {
        field_496[(unsigned long)m_currentValue];
    }

    // 0x1006d6140
    PagedLayer::PageData::PageData(PagedLayer::PageData&& pageData)
        : eastl::vector<ComponentContainer>(pageData), field_32(pageData.field_32), field_80(pageData.field_80) {
        ShaderVariablePrecision SVar1 = pageData.field_72;
        ShaderVariablePrecision SVar2 = pageData.field_76;
        field_64 = pageData.field_64;
        field_72 = SVar1;
        field_76 = SVar2;
        new (&field_88) eastl::basic_string<char, BucketAllocatorEASTL>(pageData.field_88);
        field_112 = pageData.field_112;
    }

    // 0x1006d6270
    PagedLayer::PageData::PageData()
        : eastl::vector<ComponentContainer>(), field_64(0), field_72(0), field_76(0), field_80(1),
          field_112(4294967295) {}

    // 0x1006d6630
    void PagedLayer::SendComponentToBack(shared_ptr<Component> const&)::$_56::operator()(
        const ComponentContainer& componentContainer, const shared_ptr<Component>& component) const {
        auto midiRequest1 = second();
        *midiRequest1 == componentContainer;
    }

} // namespace jag::ui

namespace jag::math {
    // 0x1006a2590
    int Lerp<int, float>(const int& arg1, const int& arg2, float arg3) {
        return (int)((float)(arg2 - arg1) * arg3) + arg1;
    }

} // namespace jag::math

// 0x1006a2700
void ceil(float arg1) {
    _ceilf();
}
