// libs/ui/components/ComponentContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ComponentContainer {
    public:
        void GetComponent() const;
        bool GetHidden() const;
        void SetHiddenUnsafe(bool arg1);
        ~ComponentContainer();
        void get() const;
        void operator->() const;
        ComponentContainer();
        bool ContainerDynamicIdInOrder(const ComponentContainer& componentContainer, int arg2);
        ComponentContainer(const shared_ptr<Component>& component, bool arg2);
        ComponentContainer* operator=(ComponentContainer&& componentContainer);
        bool ContainerDynamicIdEquals(const ComponentContainer& componentContainer, int arg2);
        bool ContainerStaticIdInOrder(const ComponentContainer& componentContainer, int arg2);
        void ContainerEquals(const ComponentContainer& componentContainer, const shared_ptr<Component>& component);
        ComponentContainer(const shared_ptr<Component>& component);
        bool ContainerPtrEquals(const ComponentContainer& componentContainer, const Component* component);
        ComponentContainer(const ComponentContainer& componentContainer);
        ComponentContainer(ComponentContainer&& componentContainer);
        ComponentContainer* operator=(const ComponentContainer& componentContainer);

    private:
        bool m_hidden;
        uint8_t _unknown_1[15];
    };

    class ComponentUtils {
    public:
        void SetHiddenInStaticList(int arg1, eastl::vector<ComponentContainer>& componentContainers, bool arg3);
        void SetHiddenInDynamicList(int arg1, eastl::vector<ComponentContainer>& componentContainers, bool arg3);
        unsigned long GetHiddenInDynamicList(int arg1, const eastl::vector<ComponentContainer>& componentContainers);
    };

    // 0x10067d550
    ComponentContainer::ComponentContainer() : m_hidden(true) {}

    // 0x100694a30
    bool ComponentContainer::ContainerDynamicIdInOrder(const ComponentContainer& componentContainer, int arg2) {
        return ((Component*)componentContainer.data())->GetDynamicID() < arg2;
    }

    // 0x100694a90
    ComponentContainer* ComponentContainer::operator=(ComponentContainer&& componentContainer) {
        m_hidden = componentContainer.m_hidden;
        field_8 = componentContainer.field_8;
        return this;
    }

    // 0x100694b10
    bool ComponentContainer::ContainerDynamicIdEquals(const ComponentContainer& componentContainer, int arg2) {
        return ((Component*)componentContainer.data())->GetDynamicID() == arg2;
    }

    // 0x100695370
    bool ComponentContainer::ContainerStaticIdInOrder(const ComponentContainer& componentContainer, int arg2) {
        return ((Component*)componentContainer.data())->GetStaticID() < arg2;
    }

    // 0x1006954e0
    void ComponentContainer::ContainerEquals(const ComponentContainer& componentContainer,
                                             const shared_ptr<Component>& component) {
        auto midiRequest1 = componentContainer.second();
        *midiRequest1 == component;
    }

    // 0x1006a3a90
    bool ComponentContainer::ContainerPtrEquals(const ComponentContainer& componentContainer,
                                                const Component* component) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;

        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)componentContainer.second();
        return (Component*)end() == component;
    }

    // 0x1006b22c0
    ComponentContainer::ComponentContainer(const shared_ptr<Component>& component, bool arg2)
        : m_hidden(arg2), field_8(component) {}

    // 0x1006b2650
    ComponentContainer::ComponentContainer(const shared_ptr<Component>& component) {
        auto this_00 = component.operator->();
        m_hidden = (bool)this_00->IsInitiallyHidden();
        new (&field_8) shared_ptr(component);
    }

    // 0x1006cf720
    ComponentContainer::ComponentContainer(const ComponentContainer& componentContainer)
        : m_hidden(componentContainer.m_hidden), field_8(&componentContainer.field_8) {}

    // 0x1006cf8e0
    ComponentContainer::ComponentContainer(ComponentContainer&& componentContainer)
        : m_hidden(componentContainer.m_hidden) {
        field_8.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(componentContainer.field_8);
    }

    // 0x1006d03e0
    ComponentContainer* ComponentContainer::operator=(const ComponentContainer& componentContainer) {
        m_hidden = componentContainer.m_hidden;
        field_8 = componentContainer.field_8;
        return this;
    }

} // namespace jag::ui
