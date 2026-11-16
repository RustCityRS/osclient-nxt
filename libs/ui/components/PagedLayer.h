// libs/ui/components/PagedLayer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.ui

namespace jag::ui {
    class PagedLayer {
    public:
        class PageData;
        // virtual methods in vtable order
        virtual ~PagedLayer();
        virtual GetType() const;
        virtual OnPageCountChanged();
        virtual void MainDraw(ComponentDependencies const&, int, int, float);
        virtual void DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        virtual RequiresSeparatePreviousValueTrigger() const;
        virtual void SetMargin(Component::MarginType, Margin);
        virtual Margin GetMargin(Component::MarginType) const;
        virtual SupportsMargin(Component::MarginType) const;
        virtual GetValueRepresentation();
        virtual void LoadStyleSheetVisuals(StyleSheet const&);
        virtual GetStaticChildren();
        virtual GetDynamicChildren();
        virtual void GetStaticChildrenRenderOrderCollection();
        virtual long GetDynamicChildrenRenderOrderCollection();
        virtual GetStaticChildrenWithOptionalRenderOrder() const;
        virtual GetDynamicChildrenWithOptionalRenderOrder() const;
        virtual void AddStaticChild(ComponentContainer const&);
        virtual ulong AddDynamicChild(shared_ptr<Component> const&, bool);
        virtual DelDynamicChild(int);
        virtual void SendComponentToBack(shared_ptr<Component> const&);
        virtual void SendComponentToFront(shared_ptr<Component> const&);
        virtual void SetChildHidden(Component const&, bool);
        virtual void SetScrollPos(int, int);
        virtual void SetScrollSize(int, int);
        virtual void GetScrollXPos() const;
        virtual void GetScrollYPos() const;
        virtual GetScrollWidth() const;
        virtual GetScrollHeight() const;
        virtual bool HasRecentValueChange() const;
        virtual void NotifyRecentValueChangeHandled();
        virtual uchar GetPreviousValue() const;
        virtual GetActivePage() const;
        virtual void OnActivePageChanged();
        OnActivePageChanging(unsigned char);
        GetDynamicChildren() const;
        PagedLayer(InterfaceManager*);
        bool SetActivePage(unsigned char);
        GetPageCount() const;
        uchar GetCurrentValue() const;
        void GetPageStaticChildren(unsigned char);
        long GetPageDynamicChildren(unsigned char);
        void DrawBackground(graphics::RT7Core*, int, int);
        void DrawActivePage(graphics::RT7Core*, int, int, float);
        bool SetDynamicPageCount(unsigned char);
        byte GetStaticPageCount() const;
        void GetCurrentPage();
        void ConvertToInteractableArea(int&, int&, int&, int&, int&, int&) const;
        long GetPageLabel(unsigned char) const;
        GetPageEnabled(unsigned char) const;
        GetPageIcon(unsigned char) const;
        GetStaticChildren() const;
        void GetCurrentPage() const;
        static /* 1 bytes */ m_showNoClickThroughPagedLayers; // = 0

        // data members, from how the methods use this: 1132 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[4];
        ushort field_12; // offset 12
        char _unknown_14[74];
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        byte field_100;      // offset 100
        char _unknown_101[323];
        undefined** field_424; // offset 424
        char _unknown_432[584];
        byte m_staticPageCount; // offset 1016
        uchar m_currentValue;   // offset 1017
        uchar m_previousValue;  // offset 1018
        char _unknown_1019[53];
        undefined4 field_1072; // offset 1072
        char _unknown_1076[4];
        InterfaceManager* field_1080; // offset 1080
        char _unknown_1088[44];
    };

    class PagedLayer::PageData {
    public:
        void ValidateScrollPos(int&, int&, int, int) const;
        ~PageData();
        PageData(PageData&&);
        PageData();

        // data members, from how the methods use this: 120 bytes
        char _unknown_0[64];
        undefined8 field_64; // offset 64
        int field_72;        // offset 72
        int field_76;        // offset 76
        undefined1 field_80; // offset 80
        char _unknown_81[31];
        undefined4 field_112; // offset 112
        char _unknown_116[4];
    };

    // 0x1006a1ad0, 32 bytes, inline, placed by class name and debug map
    // PagedLayer::GetPageCount() const
    undefined1 PagedLayer::GetPageCount() {
        undefined1 uVar1;

        uVar1 = (&field_496)->size();
        return uVar1;
    }

    // 0x1006a2500, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PagedLayer::GetActivePage() const
    /* PagedLayer::GetCurrentValue() const */

    uchar PagedLayer::GetCurrentValue() {
        return m_currentValue;
    }

    // 0x1006a25c0, 80 bytes, inline, placed by class name and debug map
    // PagedLayer::GetPageStaticChildren(unsigned char)
    void PagedLayer::GetPageStaticChildren(uchar param_1) {
        if (GetPageCount(this) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pageIndex < GetPageCount()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 86,
                (char*)0);
        }
        eastl::vector<PagedLayer::PageData,
                      eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   (ulong)param_1);
    }

    // 0x1006a2610, 96 bytes, inline, placed by class name and debug map
    // PagedLayer::GetPageDynamicChildren(unsigned char)
    long PagedLayer::GetPageDynamicChildren(uchar param_1) {
        long lVar2;

        if (GetPageCount(this) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pageIndex < GetPageCount()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 87,
                (char*)0);
        }
        lVar2 = eastl::vector<PagedLayer::PageData,
                              eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   (ulong)param_1);
        return lVar2 + 32;
    }

    // 0x1006a2d10, 16 bytes, inline, placed by class name and debug map
    // PagedLayer::GetStaticPageCount() const
    byte PagedLayer::GetStaticPageCount() {
        return m_staticPageCount;
    }

    // 0x1006a2d80, 32 bytes, inline, placed by class name and debug map
    // PagedLayer::GetCurrentPage()
    void PagedLayer::GetCurrentPage() {
        eastl::vector<PagedLayer::PageData,
                      eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   (ulong)m_currentValue);
    }

    // 0x1006a56b0, 96 bytes, inline, placed by class name
    // PagedLayer::GetPageLabel(unsigned char) const
    long PagedLayer::GetPageLabel(uchar param_1) {
        ulong uVar1;
        long lVar2;
        undefined7 in_register_00000031;
        ulong uVar3;

        uVar3 = CONCAT71(in_register_00000031, param_1) & 4294967295;
        uVar1 = (&field_496)->size();
        if (uVar1 <= uVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pageIndex < m_pages.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 48,
                (char*)0);
        }
        lVar2 = eastl::vector<PagedLayer::PageData,
                              eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   uVar3);
        return lVar2 + 88;
    }

    // 0x1006a5780, 96 bytes, inline, placed by class name
    // PagedLayer::GetPageEnabled(unsigned char) const
    undefined1 PagedLayer::GetPageEnabled(uchar param_1) {
        ulong uVar1;
        long lVar2;
        undefined7 in_register_00000031;
        ulong uVar3;

        uVar3 = CONCAT71(in_register_00000031, param_1) & 4294967295;
        uVar1 = (&field_496)->size();
        if (uVar1 <= uVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pageIndex < m_pages.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 44,
                (char*)0);
        }
        lVar2 = eastl::vector<PagedLayer::PageData,
                              eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   uVar3);
        return *(undefined1*)(lVar2 + 80);
    }

    // 0x1006a57e0, 96 bytes, inline, placed by class name
    // PagedLayer::GetPageIcon(unsigned char) const
    undefined4 PagedLayer::GetPageIcon(uchar param_1) {
        ulong uVar1;
        long lVar2;
        undefined7 in_register_00000031;
        ulong uVar3;

        uVar3 = CONCAT71(in_register_00000031, param_1) & 4294967295;
        uVar1 = (&field_496)->size();
        if (uVar1 <= uVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "pageIndex < m_pages.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayer.h", 49,
                (char*)0);
        }
        lVar2 = eastl::vector<PagedLayer::PageData,
                              eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   uVar3);
        return *(undefined4*)(lVar2 + 112);
    }

    // 0x1006adc50, 16 bytes, inline, placed by class name
    // PagedLayer::GetStaticChildren()
    /* PagedLayer::GetStaticChildren() const */

    undefined1* PagedLayer::GetStaticChildren() {
        return &field_432;
    }

    // 0x1006adc60, 16 bytes, inline, placed by class name
    // PagedLayer::GetStaticChildrenRenderOrderCollection()
    void PagedLayer::GetStaticChildrenRenderOrderCollection() {
        GetCurrentPage(this);
    }

    // 0x1006adc70, 16 bytes, inline, placed by class name
    // PagedLayer::GetDynamicChildrenRenderOrderCollection()
    long PagedLayer::GetDynamicChildrenRenderOrderCollection() {
        return GetCurrentPage(this) + 32;
    }

    // 0x1006adc80, 48 bytes, inline, placed by class name
    // PagedLayer::GetStaticChildrenWithOptionalRenderOrder() const
    undefined1* PagedLayer::GetStaticChildrenWithOptionalRenderOrder() {
        undefined1* puVar2;

        if (GetPageCount(this) == '\0') {
            puVar2 = &field_432;
        } else {
            puVar2 = (undefined1*)GetCurrentPage(this);
        }
        return puVar2;
    }

    // 0x1006adcb0, 64 bytes, inline, placed by class name
    // PagedLayer::GetDynamicChildrenWithOptionalRenderOrder() const
    undefined1* PagedLayer::GetDynamicChildrenWithOptionalRenderOrder() {
        long lVar2;
        undefined1* puVar3;

        if (GetPageCount(this) == '\0') {
            puVar3 = &field_464;
        } else {
            lVar2 = GetCurrentPage(this);
            puVar3 = (undefined1*)(lVar2 + 32);
        }
        return puVar3;
    }

    // 0x1006adcf0, 80 bytes, inline, placed by class name
    // PagedLayer::GetScrollXPos() const
    void PagedLayer::GetScrollXPos() {
        undefined4 uVar1;
        int iVar2;
        long lVar3;

        lVar3 = GetCurrentPage(this);
        uVar1 = *(undefined4*)(lVar3 + 64);
        iVar2 = field_88;
        lVar3 = GetCurrentPage(this);
        iVar2 = eastl::max<int>(iVar2, *(int*)(lVar3 + 72));
        iVar2 = eastl::min<graphics::GraphicsQuality>(uVar1, iVar2 - field_88);
        eastl::max<int>(0, iVar2);
    }

    // 0x1006add40, 80 bytes, inline, placed by class name
    // PagedLayer::GetScrollYPos() const
    void PagedLayer::GetScrollYPos() {
        undefined4 uVar1;
        int iVar2;
        long lVar3;

        lVar3 = GetCurrentPage(this);
        uVar1 = *(undefined4*)(lVar3 + 68);
        iVar2 = field_92;
        lVar3 = GetCurrentPage(this);
        iVar2 = eastl::max<int>(iVar2, *(int*)(lVar3 + 76));
        iVar2 = eastl::min<graphics::GraphicsQuality>(uVar1, iVar2 - field_92);
        eastl::max<int>(0, iVar2);
    }

    // 0x1006add90, 16 bytes, inline, placed by class name
    // PagedLayer::GetScrollWidth() const
    undefined4 PagedLayer::GetScrollWidth() {
        long lVar1;

        lVar1 = GetCurrentPage(this);
        return *(undefined4*)(lVar1 + 72);
    }

    // 0x1006adda0, 16 bytes, inline, placed by class name
    // PagedLayer::GetScrollHeight() const
    undefined4 PagedLayer::GetScrollHeight() {
        long lVar1;

        lVar1 = GetCurrentPage(this);
        return *(undefined4*)(lVar1 + 76);
    }

    // 0x1006addb0, 32 bytes, inline, placed by class name
    // PagedLayer::HasRecentValueChange() const
    bool PagedLayer::HasRecentValueChange() {
        return m_currentValue != m_previousValue;
    }

    // 0x1006addd0, 32 bytes, inline, placed by class name
    // PagedLayer::NotifyRecentValueChangeHandled()
    void PagedLayer::NotifyRecentValueChangeHandled() {
        m_previousValue = m_currentValue;
    }

    // 0x1006addf0, 16 bytes, inline, placed by class name
    // PagedLayer::GetPreviousValue() const
    uchar PagedLayer::GetPreviousValue() {
        return m_previousValue;
    }

    // 0x1006adf10, 16 bytes, inline, placed by class name
    // PagedLayer::GetType() const
    undefined8 PagedLayer::GetType() {
        return 22;
    }

    // 0x1006adf20, 32 bytes, inline, placed by class name
    // PagedLayer::SetMargin(Component::MarginType, Margin)
    void PagedLayer::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 0) {
            field_1072 = param_3;
            return;
        }
    }

    // 0x1006adf40, 48 bytes, inline, placed by class name
    // PagedLayer::GetMargin(Component::MarginType) const
    Margin PagedLayer::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 0) {
            local_c = (Margin)field_1072;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x1006b2610, 16 bytes, complete-object destructor, inline, placed by class name
    // PagedLayer::PageData::~PageData(): jumps straight to the base-object destructor

    // 0x1006b2620, 48 bytes, base-object destructor, inline, placed by class name
    // PagedLayer::PageData::~PageData()
    void PagedLayer::PageData::~PageData() {
        (&field_88)->~basic_string();
        (&field_32)->~vector();
        ~vector();
    }

    // 0x1006b2fb0, 32 bytes, inline, placed by class name
    // PagedLayer::GetCurrentPage() const
    void PagedLayer::GetCurrentPage() {
        eastl::vector<PagedLayer::PageData,
                      eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<PagedLayer::PageData,
                           eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_496,
                   (ulong)m_currentValue);
    }

    // 0x1006d6130, 16 bytes, complete-object constructor, inline, placed by class name
    // PagedLayer::PageData::PageData(PagedLayer::PageData&&): jumps straight to the base-object constructor

    // 0x1006d6140, 80 bytes, base-object constructor, inline, placed by class name
    // PagedLayer::PageData::PageData(PagedLayer::PageData&&)
    void PagedLayer::PageData::PageData(PageData* param_1) {
        int iVar1;
        int iVar2;

        new (this) eastl::vector<ComponentContainer, eastl::allocator>(param_1);
        new (&field_32, (vector*)&param_1->field_32) eastl::vector<ComponentContainer, eastl::allocator>();
        field_80 = param_1->field_80;
        iVar1 = param_1->field_72;
        iVar2 = param_1->field_76;
        field_64 = param_1->field_64;
        field_72 = iVar1;
        field_76 = iVar2;
        new (&field_88) eastl::basic_string<char, BucketAllocatorEASTL>();
        field_112 = param_1->field_112;
    }

    // 0x1006d6260, 16 bytes, complete-object constructor, inline, placed by class name
    // PagedLayer::PageData::PageData(): jumps straight to the base-object constructor

    // 0x1006d6270, 112 bytes, base-object constructor, inline, placed by class name
    // PagedLayer::PageData::PageData()
    void PagedLayer::PageData::PageData() {
        new (this) eastl::vector<ComponentContainer, eastl::allocator>();
        new (&field_32) eastl::vector<ComponentContainer, eastl::allocator>();
        field_64 = 0;
        field_72 = 0;
        field_76 = 0;
        field_80 = 1;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        field_112 = 4294967295;
    }

    // 0x1006d6630, 32 bytes, inline, placed by class name
    // PagedLayer::SendComponentToBack(shared_ptr<Component> const&)::$_56::operator()(ComponentContainer const&, shared_ptr<Component> const&) const
    /* PagedLayer::SendComponentToBack(shared_ptr<Component>
   const&)::$_56::TEMPNAMEPLACEHOLDERVALUE(ComponentContainer const&,
   shared_ptr<Component> const&) const */

    void PagedLayer::SendComponentToBack(shared_ptr<Component> const&)::$_56::operator()(ComponentContainer* param_1,
                                                                                         shared_ptr* param_2) {
        jag* this;
        shared_ptr* extraout_RDX;

        this = (jag*)param_1->second();
        operator==(this, param_2, extraout_RDX);
    }

} // namespace jag::ui

namespace jag::math {
    // 0x1006a2590, 32 bytes, inline, placed by debug map only (low confidence)
    // int Lerp<int, float>(int const&, int const&, float)
    int Lerp<int, float>(int* param_1, int* param_2, float param_3) {
        return (int)((float)(*param_2 - *param_1) * param_3) + *param_1;
    }

} // namespace jag::math

// 0x1006a2700, 16 bytes, placed by debug map only (low confidence)
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}
