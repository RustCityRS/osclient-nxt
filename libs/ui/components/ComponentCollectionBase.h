// libs/ui/components/ComponentCollectionBase.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ComponentCollectionBase : public Component // base inferred from shared vtable slots
    {
    public:
        class DynamicNestedChildren;
        // virtual methods in vtable order
        virtual ~ComponentCollectionBase();
        virtual UpdateLayout(bool);
        virtual SupportsScrolling() const;
        virtual void OnResizeAnimation();
        IsLayoutDirty() const;
        IsComponentCollection() const;
        SupportsChildComponentType(ComponentType) const;
        void ChildDynamicIDExists(int) const;
        void RootSetUnownedDynamicChild(int, shared_ptr<Component> const&);
        void RootRemoveUnownedDynamicChild(shared_ptr<Component> const&);
        void DelAll();
        void RootRemoveUnownedDynamicChildren(eastl::vector<ComponentContainer, eastl::allocator> const&);
        void GetChildCombinedIDs(eastl::vector<unsigned int, BucketAllocatorEASTL>&) const;
        ComponentContainer* GetDynamicChild(int) const;
        int GetNextAvailableDynamicId(int) const;
        shared_ptr* FindNext(shared_ptr<Component> const&) const;
        ComponentCollectionBase* GetRootCollection();
        void BuildDynamicNestedChildrenList();
        ComponentCollectionBase();
        static /* 96 bytes */ DYNAMIC_COMPONENT_LIST_MIN_INITIAL_SIZE; // initialised in its definition

        // data members, from how the methods use this: 400 bytes, the first 368 are Component
        char _unknown_368[32];
    };

    class ComponentCollectionBase::DynamicNestedChildren {
    public:
        int GetNextFreeId() const;
        void Set(int, shared_ptr<Component> const&);
        void Remove(int);
        void RemoveAll(ComponentContainer const*, ComponentContainer const*);
        bool IdUsed(int) const;
        void UpdateNextFreeId() const;
        ~DynamicNestedChildren();
        DynamicNestedChildren(DynamicNestedChildren&&);
        DynamicNestedChildren();

        // data members, from how the methods use this: 52 bytes
        int field_0; // offset 0
        char _unknown_4[36];
        undefined1 field_40; // offset 40
        char _unknown_41[3];
        int m_nextFreeId; // offset 44
        char _unknown_48[4];
    };

    // 0x100694210, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // ComponentCollectionBase::~ComponentCollectionBase()
    void ComponentCollectionBase::~ComponentCollectionBase() {
        field_0 = &PTR__OptionStore_100f0fdc8;
        (&field_392)->~vector();
        ~Component();
    }

    // 0x100696050, 32 bytes, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::GetNextFreeId() const
    int ComponentCollectionBase::DynamicNestedChildren::GetNextFreeId() {
        UpdateNextFreeId(this);
        return m_nextFreeId;
    }

    // 0x1006a2710, 112 bytes, base-object constructor, inline, placed by class name
    // ComponentCollectionBase::ComponentCollectionBase()
    void ComponentCollectionBase::ComponentCollectionBase() {
        new (this) Component();
        field_0 = &PTR__OptionStore_100f0fdc8;
        new (&field_392) eastl::vector<ComponentCollectionBase::DynamicNestedChildren, eastl::allocator>();
        SetClickthrough(true);
    }

    // 0x1006ad590, 32 bytes, inline, placed by class name
    // ComponentCollectionBase::OnResizeAnimation()
    void ComponentCollectionBase::OnResizeAnimation() {
        (*(code*)field_0[33])(this, 1);
    }

    // 0x1006b2250, 16 bytes, complete-object destructor, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::~DynamicNestedChildren(): jumps straight to the base-object destructor

    // 0x1006b2260, 16 bytes, base-object destructor, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::~DynamicNestedChildren()
    void ComponentCollectionBase::DynamicNestedChildren::~DynamicNestedChildren() {
        (&field_8)->~vector();
    }

    // 0x1006d0580, 16 bytes, inline, placed by class name
    // ComponentCollectionBase::GetDynamicChild(int) const::$_41::operator()(eastl::pair<shared_ptr<Component>, int> const&, int) const
    /* ComponentCollectionBase::GetDynamicChild(int)
   const::$_41::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<shared_ptr<Component>, int>
   const&, int) const */

    _func_GetDynamicChild_int* const ::$_41::operator()(pair * param_1, int param_2) {
        undefined7 in_register_00000001;

        return (_func_GetDynamicChild_int*)CONCAT71(in_register_00000001, *(int*)(param_1 + 16) < param_2);
    }

    // 0x1006d05e0, 32 bytes, inline, placed by class name
    // ComponentCollectionBase::FindNext(shared_ptr<Component> const&) const::$_43::operator()(ComponentContainer const&, shared_ptr<Component> const&) const
    /* ComponentCollectionBase::FindNext(shared_ptr<Component> const&)
   const::$_43::TEMPNAMEPLACEHOLDERVALUE(ComponentContainer const&,
   shared_ptr<Component> const&) const */

    _func_FindNext_shared_ptr_ptr* const ::$_43::operator()(ComponentContainer * param_1, shared_ptr * param_2) {
        jag* this;
        bool bVar1;
        undefined7 extraout_var;
        shared_ptr* extraout_RDX;

        this = (jag*)param_1->second();
        bVar1 = operator==(this, param_2, extraout_RDX);
        return (_func_FindNext_shared_ptr_ptr*)CONCAT71(extraout_var, bVar1);
    }

    // 0x1006d0600, 48 bytes, inline, placed by class name
    // ComponentCollectionBase::FindNext(shared_ptr<Component> const&) const::$_44::operator()(ComponentContainer const&, ComponentType) const
    /* ComponentCollectionBase::FindNext(shared_ptr<Component> const&)
   const::$_44::TEMPNAMEPLACEHOLDERVALUE(ComponentContainer const&, ComponentType)
   const */

    _func_FindNext_shared_ptr_ptr* const ::$_44::operator()(SharedArray<unsigned int>* param_1, char param_2) {
        long* plVar1;
        undefined8 uVar2;

        plVar1 = (long*)param_1->data();
        uVar2 = (**(code**)(*plVar1 + 16))(plVar1);
        return (_func_FindNext_shared_ptr_ptr*)CONCAT71((int7)((ulong)uVar2 >> 8), (char)uVar2 == param_2);
    }

    // 0x1006d0900, 16 bytes, complete-object constructor, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::DynamicNestedChildren(ComponentCollectionBase::DynamicNestedChildren&&): jumps straight to the base-object constructor

    // 0x1006d0910, 48 bytes, base-object constructor, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::DynamicNestedChildren(ComponentCollectionBase::DynamicNestedChildren&&)
    void ComponentCollectionBase::DynamicNestedChildren::DynamicNestedChildren(DynamicNestedChildren* param_1) {
        undefined3 uVar1;
        int iVar2;

        field_0 = param_1->field_0;
        new (&field_8, (vector*)&param_1->field_8)
            eastl::vector<eastl::pair<shared_ptr<Component>, int>, eastl::allocator>();
        uVar1 = *(undefined3*)&param_1->field_41;
        iVar2 = param_1->m_nextFreeId;
        field_40 = param_1->field_40;
        *(undefined3*)&field_41 = uVar1;
        m_nextFreeId = iVar2;
    }

    // 0x1006d09f0, 16 bytes, complete-object constructor, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::DynamicNestedChildren(): jumps straight to the base-object constructor

    // 0x1006d0a00, 48 bytes, base-object constructor, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::DynamicNestedChildren()
    void ComponentCollectionBase::DynamicNestedChildren::DynamicNestedChildren() {
        field_0 = 0;
        new (&field_8) eastl::vector<eastl::pair<shared_ptr<Component>, int>, eastl::allocator>();
        field_40 = 0;
        m_nextFreeId = 0;
    }

    // 0x1006d0aa0, 16 bytes, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::IdUsed(int) const::$_45::operator()(eastl::pair<shared_ptr<Component>, int> const&, int) const
    /* ComponentCollectionBase::DynamicNestedChildren::IdUsed(int)
   const::$_45::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<shared_ptr<Component>, int>
   const&, int) const */

    _func_IdUsed_int* const ::$_45::operator()(pair * param_1, int param_2) {
        undefined7 in_register_00000001;

        return (_func_IdUsed_int*)CONCAT71(in_register_00000001, *(int*)(param_1 + 16) < param_2);
    }

    // 0x1006d0ab0, 16 bytes, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::Set(int, shared_ptr<Component> const&)::$_46::operator()(eastl::pair<shared_ptr<Component>, int> const&, int) const
    /* ComponentCollectionBase::DynamicNestedChildren::Set(int,
   shared_ptr<Component>
   const&)::$_46::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<shared_ptr<Component>, int>
   const&, int) const */

    bool ComponentCollectionBase::DynamicNestedChildren::Set(int, shared_ptr<Component> const&)::$_46::operator()(
        pair* param_1, int param_2) {
        return *(int*)(param_1 + 16) < param_2;
    }

    // 0x1006d1030, 16 bytes, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::Remove(int)::$_47::operator()(eastl::pair<shared_ptr<Component>, int> const&, int) const
    /* ComponentCollectionBase::DynamicNestedChildren::Remove(int)::$_47::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<shared_ptr<Component>,
   int> const&, int) const */

    bool ComponentCollectionBase::DynamicNestedChildren::Remove(int)::$_47::operator()(pair* param_1, int param_2) {
        return *(int*)(param_1 + 16) < param_2;
    }

    // 0x1006d1230, 144 bytes, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::RemoveAll(ComponentContainer const*, ComponentContainer const*)::$_48::operator()(eastl::pair<shared_ptr<Component>, int> const&)
    /* ComponentCollectionBase::DynamicNestedChildren::RemoveAll(ComponentContainer
   const*, ComponentContainer
   const*)::$_48::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<shared_ptr<Component>, int>
   const&) */

    ulong ComponentCollectionBase::DynamicNestedChildren::RemoveAll(
        ComponentContainer_const*, ComponentContainer_const*)::$_48::operator()(pair* param_1) {
        uint uVar1;
        uint uVar2;
        Component* this_00;
        ulong uVar3;

        if ((SharedArray<unsigned int>*)**(undefined8**)this !=
            (SharedArray<unsigned int>*)**(undefined8**)(this + 8)) {
            this_00 = (Component*)(**(undefined8**)this)->data();
            uVar1 = this_00->GetDynamicID();
            uVar2 = ComponentHelpers::GetDynamicID(uVar1);
            uVar1 = *(uint*)(param_1 + 16);
            if (uVar2 == uVar1) {
                **(long**)this = **(long**)this + 24;
                uVar3 = CONCAT71((int7)((ulong)this >> 8), 1);
                goto LAB_1006d12b1;
            }
            if ((int)uVar2 <= (int)uVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("comp.second < startDynamicID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "ComponentCollectionBase.cpp",
                          413,
                          "%s: component requested for removal with id %d has been skipped (current component id = %d)",
                          "operator()", (ulong)uVar2, uVar1);
            }
        }
        uVar3 = 0;
    LAB_1006d12b1:
        return uVar3 & 4294967295;
    }

    // 0x1006d12c0, 32 bytes, inline, placed by class name
    // ComponentCollectionBase::DynamicNestedChildren::UpdateNextFreeId() const::$_49::operator()(eastl::pair<shared_ptr<Component>, int> const&, eastl::pair<shared_ptr<Component>, int> const&) const
    /* ComponentCollectionBase::DynamicNestedChildren::UpdateNextFreeId()
   const::$_49::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<shared_ptr<Component>, int>
   const&, eastl::pair<shared_ptr<Component>, int> const&) const */

    _func_UpdateNextFreeId* const ::$_49::operator()(pair * param_1, pair * param_2) {
        return (_func_UpdateNextFreeId*)(ulong)CONCAT31((int3)((uint)(*(int*)(param_1 + 16) + 1) >> 8),
                                                        *(int*)(param_1 + 16) + 1 < *(int*)(param_2 + 16));
    }

} // namespace jag::ui
