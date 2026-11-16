// libs/ui/components/ComponentCollectionBase.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ComponentCollectionBase : public Component // base inferred from shared vtable slots
    {
    public:
        class DynamicNestedChildren;
        // virtual methods in vtable order
        virtual ~ComponentCollectionBase();
        virtual uint64_t UpdateLayout(bool arg1);
        virtual uint8_t SupportsScrolling() const;
        virtual void OnResizeAnimation();
        bool IsLayoutDirty() const;
        bool IsComponentCollection() const;
        uint8_t SupportsChildComponentType(ComponentType arg1) const;
        void ChildDynamicIDExists(int arg1) const;
        void RootSetUnownedDynamicChild(int arg1, const shared_ptr<Component>& component);
        void RootRemoveUnownedDynamicChild(const shared_ptr<Component>& component);
        void DelAll();
        void RootRemoveUnownedDynamicChildren(const eastl::vector<ComponentContainer>& componentContainers);
        void GetChildCombinedIDs(eastl::vector<unsigned int>& arg1) const;
        ComponentContainer* GetDynamicChild(int arg1) const;
        int GetNextAvailableDynamicId(int arg1) const;
        shared_ptr<Component>* FindNext(const shared_ptr<Component>& component) const;
        auto GetRootCollection();
        void BuildDynamicNestedChildrenList();
        ComponentCollectionBase();
        static int32_t DYNAMIC_COMPONENT_LIST_MIN_INITIAL_SIZE[24]; // initialised in its definition

    private:
        uint8_t _unknown_368[32];
    };

    class ComponentCollectionBase::DynamicNestedChildren {
    public:
        int GetNextFreeId() const;
        void Set(int arg1, const shared_ptr<Component>& component);
        void Remove(int arg1);
        void RemoveAll(const ComponentContainer* componentContainer1, const ComponentContainer* componentContainer2);
        bool IdUsed(int arg1) const;
        void UpdateNextFreeId() const;
        ~DynamicNestedChildren();
        DynamicNestedChildren(DynamicNestedChildren&& dynamicNestedChildren);
        DynamicNestedChildren();

    private:
        int field_0;
        uint8_t _unknown_4[36];
        uint8_t field_40;
        uint8_t _unknown_41[3];
        int m_nextFreeId;
        uint8_t _unknown_48[4];
    };

    // 0x100694210
    ComponentCollectionBase::~ComponentCollectionBase() {
        field_392.~vector();
    }

    // 0x100696050
    int ComponentCollectionBase::DynamicNestedChildren::GetNextFreeId() const {
        UpdateNextFreeId();
        return m_nextFreeId;
    }

    // 0x1006a2710
    ComponentCollectionBase::ComponentCollectionBase() : Component() {
        SetClickthrough(true);
    }

    // 0x1006ad590
    void ComponentCollectionBase::OnResizeAnimation() {
        IsLayoutDirty(1);
    }

    // 0x1006b2260
    ComponentCollectionBase::DynamicNestedChildren::~DynamicNestedChildren() {
        field_8.~vector();
    }

    // 0x1006d0580
    bool ComponentCollectionBase::GetDynamicChild(int) const ::$_41::operator()(
        const eastl::pair<shared_ptr<Component>, int>& arg1, int arg2) const {
        return *(int*)(this + 16) < (int)arg1;
    }

    // 0x1006d05e0
    void ComponentCollectionBase::FindNext(shared_ptr<Component> const&) const ::$_43::operator()(
        const ComponentContainer& componentContainer, const shared_ptr<Component>& component) const {
        auto midiRequest1 = second();
        *midiRequest1 == componentContainer;
    }

    // 0x1006d0600
    bool ComponentCollectionBase::FindNext(shared_ptr<Component> const&) const ::$_44::operator()(
        const ComponentContainer& componentContainer, ComponentType componentType) const {
        auto plVar2 = data();
        return (**(void (**)(...))(*plVar2 + 16))(plVar2) == (char)componentContainer;
    }

    // 0x1006d0910
    ComponentCollectionBase::DynamicNestedChildren::DynamicNestedChildren(
        ComponentCollectionBase::DynamicNestedChildren&& dynamicNestedChildren)
        : field_0(dynamicNestedChildren.field_0), field_8(dynamicNestedChildren.field_8) {
        uint32_t uVar1 = *(uint32_t*)&dynamicNestedChildren.field_41;
        int iVar2 = dynamicNestedChildren.m_nextFreeId;
        field_40 = dynamicNestedChildren.field_40;
        *(uint32_t*)&field_41 = uVar1;
        m_nextFreeId = iVar2;
    }

    // 0x1006d0a00
    ComponentCollectionBase::DynamicNestedChildren::DynamicNestedChildren()
        : field_0(0), field_40(0), m_nextFreeId(0) {}

    // 0x1006d0aa0
    bool ComponentCollectionBase::DynamicNestedChildren::IdUsed(int) const ::$_45::operator()(
        const eastl::pair<shared_ptr<Component>, int>& arg1, int arg2) const {
        return *(int*)(this + 16) < (int)arg1;
    }

    // 0x1006d0ab0
    bool ComponentCollectionBase::DynamicNestedChildren::Set(int, shared_ptr<Component> const&)::$_46::operator()(
        const eastl::pair<shared_ptr<Component>, int>& arg1, int arg2) const {
        return *(int*)(this + 16) < (int)arg1;
    }

    // 0x1006d1030
    bool ComponentCollectionBase::DynamicNestedChildren::Remove(int)::$_47::operator()(
        const eastl::pair<shared_ptr<Component>, int>& arg1, int arg2) const {
        return field_16 < (int)arg1;
    }

    // 0x1006d1230
    unsigned long ComponentCollectionBase::DynamicNestedChildren::RemoveAll(
        ComponentContainer const*,
        ComponentContainer const*)::$_48::operator()(const eastl::pair<shared_ptr<Component>, int>& arg1) {
        unsigned int uVar1;
        unsigned int uVar2;
        unsigned long uVar3;

        if ((SharedArray<unsigned int>*)**(uint64_t**)this != (SharedArray<unsigned int>*)**(uint64_t**)(this + 8)) {
            uVar1 = ((Component*)((SharedArray<unsigned int>*)**(uint64_t**)this)->data())->GetDynamicID();
            uVar2 = ComponentHelpers::GetDynamicID(uVar1);
            uVar1 = *(unsigned int*)(arg1 + 16);
            if (uVar2 == uVar1) {
                **(long**)this = **(long**)this + 24;
                uVar3 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                goto LAB_1006d12b1;
            }
            if ((int)uVar2 <= (int)uVar1) {
                LogAssert("comp.second < startDynamicID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollectionBase.cpp",
                          413,
                          "%s: component requested for removal with id %d has been skipped (current component id = %d)",
                          "operator()", (unsigned long)uVar2, uVar1);
            }
        }
        uVar3 = 0;
    LAB_1006d12b1:
        return uVar3 & 4294967295;
    }

    // 0x1006d12c0
    uint32_t ComponentCollectionBase::DynamicNestedChildren::UpdateNextFreeId() const ::$_49::operator()(
        const eastl::pair<shared_ptr<Component>, int>& arg1,
        const eastl::pair<shared_ptr<Component>, int>& arg2) const {
        return *(int*)(this + 16) + 1 < *(int*)(arg1 + 16);
    }

} // namespace jag::ui
