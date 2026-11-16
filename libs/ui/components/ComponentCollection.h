// libs/ui/components/ComponentCollection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ComponentCollection : public ComponentCollectionBase // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ComponentCollection();
        virtual uint8_t* GetStaticChildren();
        virtual uint8_t* GetDynamicChildren();
        virtual uint8_t* GetStaticChildrenRenderOrderCollection();
        virtual uint8_t* GetDynamicChildrenRenderOrderCollection();
        virtual uint8_t* GetStaticChildrenWithOptionalRenderOrder() const;
        virtual uint8_t* GetDynamicChildrenWithOptionalRenderOrder() const;
        virtual void AddStaticChild(const ComponentContainer& componentContainer);
        virtual unsigned long AddDynamicChild(const shared_ptr<Component>& component, bool arg2);
        virtual uint64_t DelDynamicChild(int arg1);
        virtual void DelAll();
        virtual void SendComponentToBack(const shared_ptr<Component>& component);
        virtual void SendComponentToFront(const shared_ptr<Component>& component);
        virtual void SetChildHidden(const Component& component, bool arg2);
        virtual void SetScrollPos(int arg1, int arg2);
        virtual void SetScrollSize(int arg1, int arg2);
        virtual void GetScrollXPos() const;
        virtual void GetScrollYPos() const;
        virtual ShaderVariablePrecision GetScrollWidth() const;
        virtual ShaderVariablePrecision GetScrollHeight() const;
        uint8_t* GetStaticChildren() const;
        void ValidateScrollPos(int& arg1, int& arg2) const;
        ComponentCollection();
        uint8_t* GetDynamicChildren() const;

    private:
        uint8_t _unknown_400[24];
        EnumOptionToggle field_424;
        EnumOptionToggle field_428;
        ShaderVariablePrecision m_scrollWidth;
        ShaderVariablePrecision m_scrollHeight;
        uint8_t _unknown_440[104];
    };

    // 0x1006941d0
    void ComponentCollection::DelAll() {
        DelAll();
        field_536.clear();
    }

    // 0x1006979a0
    ComponentCollection::ComponentCollection()
        : ComponentCollectionBase(), field_424(0), field_428(0), m_scrollWidth(0), m_scrollHeight(0) {}

    // 0x1006ad5b0
    uint8_t* ComponentCollection::GetDynamicChildren() {
        return &field_504;
    }

    // 0x1006ad5c0
    uint8_t* ComponentCollection::GetStaticChildrenRenderOrderCollection() {
        return &field_472;
    }

    // 0x1006ad5d0
    uint8_t* ComponentCollection::GetDynamicChildrenRenderOrderCollection() {
        return m_vertexDataBufferSkin;
    }

    // 0x1006ad5e0
    uint8_t* ComponentCollection::GetStaticChildrenWithOptionalRenderOrder() const {
        bool cVar1 = field_472.empty();
        uint8_t* puVar2 = &field_440;
        if (!cVar1) {
            puVar2 = &field_472;
        }
        return puVar2;
    }

    // 0x1006ad610
    uint8_t* ComponentCollection::GetDynamicChildrenWithOptionalRenderOrder() const {
        bool cVar1 = field_536.empty();
        uint8_t* puVar2 = &field_504;
        if (!cVar1) {
            puVar2 = &field_536;
        }
        return puVar2;
    }

    // 0x1006ad640
    void ComponentCollection::GetScrollXPos() const {
        EnumOptionToggle enumOptionToggle1 = field_424;
        int iVar1 = eastl::max<int>(field_88, m_scrollWidth);
        auto shaderVariablePrecision2 = eastl::min<graphics::GraphicsQuality>(enumOptionToggle1, iVar1 - field_88);
        eastl::max<int>(0, shaderVariablePrecision2);
    }

    // 0x1006ad680
    void ComponentCollection::GetScrollYPos() const {
        EnumOptionToggle enumOptionToggle1 = field_428;
        int iVar1 = eastl::max<int>(field_92, m_scrollHeight);
        auto shaderVariablePrecision2 = eastl::min<graphics::GraphicsQuality>(enumOptionToggle1, iVar1 - field_92);
        eastl::max<int>(0, shaderVariablePrecision2);
    }

    // 0x1006ad6c0
    ShaderVariablePrecision ComponentCollection::GetScrollWidth() const {
        return m_scrollWidth;
    }

    // 0x1006ad6d0
    ShaderVariablePrecision ComponentCollection::GetScrollHeight() const {
        return m_scrollHeight;
    }

} // namespace jag::ui
