// libs/ui/components/ComponentCollection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ComponentCollection : public ComponentCollectionBase // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ComponentCollection();
        virtual GetStaticChildren();
        virtual GetDynamicChildren();
        virtual GetStaticChildrenRenderOrderCollection();
        virtual GetDynamicChildrenRenderOrderCollection();
        virtual GetStaticChildrenWithOptionalRenderOrder() const;
        virtual GetDynamicChildrenWithOptionalRenderOrder() const;
        virtual void AddStaticChild(ComponentContainer const&);
        virtual ulong AddDynamicChild(shared_ptr<Component> const&, bool);
        virtual DelDynamicChild(int);
        virtual void DelAll();
        virtual void SendComponentToBack(shared_ptr<Component> const&);
        virtual void SendComponentToFront(shared_ptr<Component> const&);
        virtual void SetChildHidden(Component const&, bool);
        virtual void SetScrollPos(int, int);
        virtual void SetScrollSize(int, int);
        virtual void GetScrollXPos() const;
        virtual void GetScrollYPos() const;
        virtual int GetScrollWidth() const;
        virtual int GetScrollHeight() const;
        GetStaticChildren() const;
        void ValidateScrollPos(int&, int&) const;
        ComponentCollection();
        GetDynamicChildren() const;

        // data members, from how the methods use this: 544 bytes, the first 400 are ComponentCollectionBase
        char _unknown_400[24];
        int field_424;      // offset 424
        int field_428;      // offset 428
        int m_scrollWidth;  // offset 432
        int m_scrollHeight; // offset 436
        char _unknown_440[104];
    };

    // 0x1006941d0, 48 bytes, inline, placed by class name and debug map
    // ComponentCollection::DelAll()
    void ComponentCollection::DelAll() {
        DelAll();
        (&field_536)->clear();
    }

    // 0x1006979a0, 176 bytes, base-object constructor, inline, placed by class name
    // ComponentCollection::ComponentCollection()
    void ComponentCollection::ComponentCollection() {
        new (this) ComponentCollectionBase();
        field_0 = &PTR__ComponentCollection_100f0eb90;
        field_424 = 0;
        field_428 = 0;
        m_scrollWidth = 0;
        m_scrollHeight = 0;
        new (&field_440) eastl::vector<ComponentContainer, eastl::allocator>();
        new (&field_472) eastl::vector<ComponentContainer, eastl::allocator>();
        new (&field_504) eastl::vector<ComponentContainer, eastl::allocator>();
        new (&field_536) eastl::vector<ComponentContainer, eastl::allocator>();
    }

    // 0x1006ad5b0, 16 bytes, inline, placed by class name
    // ComponentCollection::GetDynamicChildren()
    /* ComponentCollection::GetDynamicChildren() const */

    undefined1* ComponentCollection::GetDynamicChildren() {
        return &field_504;
    }

    // 0x1006ad5c0, 16 bytes, inline, placed by class name
    // ComponentCollection::GetStaticChildrenRenderOrderCollection()
    undefined1* ComponentCollection::GetStaticChildrenRenderOrderCollection() {
        return &field_472;
    }

    // 0x1006ad5d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ComponentCollection::GetDynamicChildrenRenderOrderCollection()
    /* graphics::GeometryBatch::GetVertexDataBufferSkin() const */

    undefined1* graphics::GeometryBatch::GetVertexDataBufferSkin() {
        return &m_vertexDataBufferSkin;
    }

    // 0x1006ad5e0, 48 bytes, inline, placed by class name
    // ComponentCollection::GetStaticChildrenWithOptionalRenderOrder() const
    undefined1* ComponentCollection::GetStaticChildrenWithOptionalRenderOrder() {
        char cVar1;
        undefined1* puVar2;

        cVar1 = (&field_472)->empty();
        puVar2 = &field_440;
        if (cVar1 == '\0') {
            puVar2 = &field_472;
        }
        return puVar2;
    }

    // 0x1006ad610, 48 bytes, inline, placed by class name
    // ComponentCollection::GetDynamicChildrenWithOptionalRenderOrder() const
    undefined1* ComponentCollection::GetDynamicChildrenWithOptionalRenderOrder() {
        char cVar1;
        undefined1* puVar2;

        cVar1 = (&field_536)->empty();
        puVar2 = &field_504;
        if (cVar1 == '\0') {
            puVar2 = &field_536;
        }
        return puVar2;
    }

    // 0x1006ad640, 64 bytes, inline, placed by class name
    // ComponentCollection::GetScrollXPos() const
    void ComponentCollection::GetScrollXPos() {
        int iVar1;
        int iVar2;

        iVar2 = field_424;
        iVar1 = eastl::max<int>(field_88, m_scrollWidth);
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, iVar1 - field_88);
        eastl::max<int>(0, iVar2);
    }

    // 0x1006ad680, 64 bytes, inline, placed by class name
    // ComponentCollection::GetScrollYPos() const
    void ComponentCollection::GetScrollYPos() {
        int iVar1;
        int iVar2;

        iVar2 = field_428;
        iVar1 = eastl::max<int>(field_92, m_scrollHeight);
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, iVar1 - field_92);
        eastl::max<int>(0, iVar2);
    }

    // 0x1006ad6c0, 16 bytes, inline, placed by class name
    // ComponentCollection::GetScrollWidth() const
    int ComponentCollection::GetScrollWidth() {
        return m_scrollWidth;
    }

    // 0x1006ad6d0, 16 bytes, inline, placed by class name
    // ComponentCollection::GetScrollHeight() const
    int ComponentCollection::GetScrollHeight() {
        return m_scrollHeight;
    }

} // namespace jag::ui
