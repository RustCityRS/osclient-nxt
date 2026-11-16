// libs/game/runetek5/config/loctype/LocTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LocTypeList {
    public:
        // virtual methods in vtable order
        virtual ~LocTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        IsMembersServer() const;
        LocTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, bool);
        void SetMembersServer(bool);

        // data members, from how the methods use this: 128 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        undefined1 m_membersServer; // offset 112
        char _unknown_113[15];
    };

    // 0x100518700, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // LocTypeList::~LocTypeList(): jumps straight to the base-object destructor

    // 0x100518710, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // LocTypeList::~LocTypeList()
    void LocTypeList::~LocTypeList() {
        ~LocTypeList(this);
        operator_delete(this);
    }

    // 0x100518780, 48 bytes, inline, placed by class name and debug map
    // LocTypeList::CacheReset()
    void LocTypeList::CacheReset() {
        CacheReset();
        (&field_120)->Reset();
    }

    // 0x1005187b0, 48 bytes, inline, placed by class name and debug map
    // LocTypeList::CacheClean(unsigned int)
    void LocTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_120, (ulong)param_1)->Clean();
    }

    // 0x1005190c0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Triangulate::SourcePoint::SourcePoint(math::Point<int> const&, int)
    void Triangulate::SourcePoint::SourcePoint(Point* param_1, int param_2) {
        new (this) math::Point<int>(param_1);
        m_index = param_2;
    }

    // 0x1005217a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Triangulate::SourcePoint::SourcePoint(Triangulate::SourcePoint&&): jumps straight to the base-object constructor

    // 0x1005217b0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Triangulate::SourcePoint::SourcePoint(Triangulate::SourcePoint&&)
    void Triangulate::SourcePoint::SourcePoint(SourcePoint* param_1) {
        new (this) math::Point<int>(param_1);
        m_index = param_1->m_index;
    }

    // 0x1005219c0, 64 bytes, inline, placed by debug map only (low confidence)
    // Triangulate::SourcePoint::operator=(Triangulate::SourcePoint&&)
    /* Triangulate::SourcePoint::TEMPNAMEPLACEHOLDERVALUE(Triangulate::SourcePoint&&)
    */

    SourcePoint* Triangulate::SourcePoint::operator=(SourcePoint* param_1) {
        Point<int> local_28[8];

        math::Point<int>::Point(local_28, (Point*)param_1);
        math::Point<int>::operator=((Point<int>*)this, local_28);
        m_index = param_1->m_index;
        return this;
    }

    // 0x100521a00, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // LocTypeList::~LocTypeList()
    void LocTypeList::~LocTypeList() {
        field_0 = PTR_vtable_100ee7ee0 + 16;
        (&field_120)->~AssetLRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

    // 0x1005654b0, 16 bytes, inline, placed by class name
    // LocTypeList::SetMembersServer(bool)
    /* NPCTypeList::SetMembersServer(bool) */

    void NPCTypeList::SetMembersServer(bool param_1) {
        m_membersServer = param_1;
    }

} // namespace jag::game

namespace jag {
    // 0x10051aa40, 32 bytes, inline, placed by debug map only (low confidence)
    // game::LocType* placement_new<game::LocType, game::BaseTemplateConfigTypeList<game::LocType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::LocType>*&, int&)
    /* game::LocType* placement_new<game::LocType,
   game::BaseTemplateConfigTypeList<game::LocType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::LocType>*&, unsigned int&) */

    LocType* jag::placement_new<game::LocType, game::BaseTemplateConfigTypeList<game::LocType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::LocType::LocType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10051aa60, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256> >* placement_new<MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256> >, MakeSharedPool<game::LocType, 256>::RefCounterAndData*&, game::LocType*>(void*, MakeSharedPool<game::LocType, 256>::RefCounterAndData*&, game::LocType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>,
                       MakeSharedPool<game::LocType, 256>::RefCounterAndData*&, game::LocType*>(
        void* param_1, RefCounterAndData** param_2, LocType** param_3) {
        MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10051aa80, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::LocType>(ref_counter_base*, game::LocType*, game::LocType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::LocType>(ref_counter_base* param_1, LocType* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x10051b620, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256> >::MakeSharedPoolRefCounter(void*, game::LocType*): jumps straight to the base-object constructor

    // 0x10051b630, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256> >::MakeSharedPoolRefCounter(void*, game::LocType*)
    void MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>* this, void* param_1,
        LocType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b00 + 16;
        *(void**)(this + 16) = param_1;
        *(LocType**)(this + 24) = param_2;
    }

    // 0x10051b670, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::LocType, 256>::deallocate(pvVar1);
    }

} // namespace jag
