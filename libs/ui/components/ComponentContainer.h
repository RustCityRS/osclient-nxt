// libs/ui/components/ComponentContainer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ComponentContainer {
    public:
        GetComponent() const;
        GetHidden() const;
        SetHiddenUnsafe(bool);
        ~ComponentContainer();
        get() const;
        operator->() const;
        ComponentContainer();
        bool ContainerDynamicIdInOrder(ComponentContainer const&, int);
        ComponentContainer(shared_ptr<Component> const&, bool);
        ComponentContainer* operator=(ComponentContainer&&);
        bool ContainerDynamicIdEquals(ComponentContainer const&, int);
        bool ContainerStaticIdInOrder(ComponentContainer const&, int);
        void ContainerEquals(ComponentContainer const&, shared_ptr<Component> const&);
        ComponentContainer(shared_ptr<Component> const&);
        bool ContainerPtrEquals(ComponentContainer const&, Component const*);
        ComponentContainer(ComponentContainer const&);
        ComponentContainer(ComponentContainer&&);
        ComponentContainer* operator=(ComponentContainer const&);

        // data members, from how the methods use this: 16 bytes
        bool field_0; // offset 0
        char _unknown_1[15];
    };

    class ComponentUtils {
    public:
        void SetHiddenInStaticList(int, eastl::vector<ComponentContainer, eastl::allocator>&, bool);
        void SetHiddenInDynamicList(int, eastl::vector<ComponentContainer, eastl::allocator>&, bool);
        ulong GetHiddenInDynamicList(int, eastl::vector<ComponentContainer, eastl::allocator> const&);
    };

    // 0x10067d540, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ComponentContainer::ComponentContainer(): jumps straight to the base-object constructor

    // 0x10067d550, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ComponentContainer::ComponentContainer()
    void ComponentContainer::ComponentContainer() {
        _func_decltype_nullptr* in_RSI;

        field_0 = true;
        new (&field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100694a30, 48 bytes, inline, placed by class name
    // ComponentContainer::ContainerDynamicIdInOrder(ComponentContainer const&, int)
    bool ComponentContainer::ContainerDynamicIdInOrder(ComponentContainer* param_1, int param_2) {
        Component* this;

        this = (Component*)param_1->data();
        return GetDynamicID() < param_2;
    }

    // 0x100694a80, 16 bytes, complete-object constructor, inline, placed by class name
    // ComponentContainer::ComponentContainer(shared_ptr<Component> const&, bool): jumps straight to the base-object constructor

    // 0x100694a90, 48 bytes, inline, placed by class name
    // ComponentContainer::operator=(ComponentContainer&&)
    /* ComponentContainer::TEMPNAMEPLACEHOLDERVALUE(ComponentContainer&&) */

    ComponentContainer* ComponentContainer::operator=(ComponentContainer* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<Component>::operator=((shared_ptr<Component>*)&field_8, (shared_ptr*)&param_1->field_8);
        return this;
    }

    // 0x100694b10, 48 bytes, inline, placed by class name
    // ComponentContainer::ContainerDynamicIdEquals(ComponentContainer const&, int)
    bool ComponentContainer::ContainerDynamicIdEquals(ComponentContainer* param_1, int param_2) {
        Component* this;

        this = (Component*)param_1->data();
        return GetDynamicID() == param_2;
    }

    // 0x100695370, 48 bytes, inline, placed by class name
    // ComponentContainer::ContainerStaticIdInOrder(ComponentContainer const&, int)
    bool ComponentContainer::ContainerStaticIdInOrder(ComponentContainer* param_1, int param_2) {
        Component* this;

        this = (Component*)param_1->data();
        return GetStaticID() < param_2;
    }

    // 0x1006954e0, 32 bytes, inline, placed by class name
    // ComponentContainer::ContainerEquals(ComponentContainer const&, shared_ptr<Component> const&)
    void ComponentContainer::ContainerEquals(ComponentContainer* param_1, shared_ptr* param_2) {
        jag* this;
        shared_ptr* extraout_RDX;

        this = (jag*)param_1->second();
        operator==(this, param_2, extraout_RDX);
    }

    // 0x1006a3770, 16 bytes, complete-object constructor, inline, placed by class name
    // ComponentContainer::ComponentContainer(shared_ptr<Component> const&): jumps straight to the base-object constructor

    // 0x1006a3a90, 48 bytes, inline, placed by class name
    // ComponentContainer::ContainerPtrEquals(ComponentContainer const&, Component const*)
    bool ComponentContainer::ContainerPtrEquals(ComponentContainer* param_1, Component* param_2) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        Component* pCVar1;

        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_1->second();
        pCVar1 = (Component*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this);
        return pCVar1 == param_2;
    }

    // 0x1006b22c0, 32 bytes, base-object constructor, inline, placed by class name
    // ComponentContainer::ComponentContainer(shared_ptr<Component> const&, bool)
    void ComponentContainer::ComponentContainer(shared_ptr* param_1, bool param_2) {
        field_0 = param_2;
        new (&field_8, param_1) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1006b2650, 64 bytes, base-object constructor, inline, placed by class name
    // ComponentContainer::ComponentContainer(shared_ptr<Component> const&)
    void ComponentContainer::ComponentContainer(shared_ptr* param_1) {
        Component* this_00;

        this_00 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        field_0 = (bool)this_00->IsInitiallyHidden();
        new (&field_8, param_1) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1006cf630, 16 bytes, complete-object constructor, inline, placed by class name
    // ComponentContainer::ComponentContainer(ComponentContainer const&): jumps straight to the base-object constructor

    // 0x1006cf720, 32 bytes, base-object constructor, inline, placed by class name
    // ComponentContainer::ComponentContainer(ComponentContainer const&)
    void ComponentContainer::ComponentContainer(ComponentContainer* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (shared_ptr*)&param_1->field_8) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1006cf8d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ComponentContainer::ComponentContainer(ComponentContainer&&): jumps straight to the base-object constructor

    // 0x1006cf8e0, 32 bytes, base-object constructor, inline, placed by class name
    // ComponentContainer::ComponentContainer(ComponentContainer&&)
    void ComponentContainer::ComponentContainer(ComponentContainer* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_8, (shared_ptr*)&param_1->field_8);
    }

    // 0x1006d03e0, 48 bytes, inline, placed by class name
    // ComponentContainer::operator=(ComponentContainer const&)
    /* ComponentContainer::TEMPNAMEPLACEHOLDERVALUE(ComponentContainer const&) */

    ComponentContainer* ComponentContainer::operator=(ComponentContainer* param_1) {
        field_0 = param_1->field_0;
        shared_ptr<Component>::operator=((shared_ptr<Component>*)&field_8, (shared_ptr*)&param_1->field_8);
        return this;
    }

} // namespace jag::ui
