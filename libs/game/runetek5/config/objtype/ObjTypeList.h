// libs/game/runetek5/config/objtype/ObjTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1004f8860, 32 bytes, inline, placed by debug map only (low confidence)
    // game::ObjType* placement_new<game::ObjType, game::BaseTemplateConfigTypeList<game::ObjType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::ObjType>*&, int&)
    /* game::ObjType* placement_new<game::ObjType,
   game::BaseTemplateConfigTypeList<game::ObjType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::ObjType>*&, unsigned int&) */

    ObjType* jag::placement_new<game::ObjType, game::BaseTemplateConfigTypeList<game::ObjType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::ObjType::ObjType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1004f8880, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96> >* placement_new<MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96> >, MakeSharedPool<game::ObjType, 96>::RefCounterAndData*&, game::ObjType*>(void*, MakeSharedPool<game::ObjType, 96>::RefCounterAndData*&, game::ObjType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>,
                       MakeSharedPool<game::ObjType, 96>::RefCounterAndData*&, game::ObjType*>(
        void* param_1, RefCounterAndData** param_2, ObjType** param_3) {
        MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1004f88a0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::ObjType>(ref_counter_base*, game::ObjType*, game::ObjType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::ObjType>(ref_counter_base* param_1, ObjType* param_2,
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

    // 0x1004f9170, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96> >::MakeSharedPoolRefCounter(void*, game::ObjType*): jumps straight to the base-object constructor

    // 0x1004f9180, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96> >::MakeSharedPoolRefCounter(void*, game::ObjType*)
    void MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>* this, void* param_1,
        ObjType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b18 + 16;
        *(void**)(this + 16) = param_1;
        *(ObjType**)(this + 24) = param_2;
    }

    // 0x1004f91c0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::ObjType, 96>::deallocate(pvVar1);
    }

    // 0x1004fcf50, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> > >::type make_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >>()
    jag* jag::make_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                            eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        vector_map* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                                eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>(
                    (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<
                                  eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                                    eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>,
                              int,
                              eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                                eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1004fd1c0, 32 bytes, inline, placed by debug map only (low confidence)
    // eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >* placement_new<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >>(void*)
    vector_map*
    jag::placement_new<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>(
        void* param_1) {
        eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>::vector_map(param_1);
        return param_1;
    }

    // 0x1004fd1e0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> > >* placement_new<ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> > >, int, eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >*&>(void*, int&&, eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >*&)
    ref_counter_shared* jag::placement_new<
        ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>,
        int,
        eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>*&>(void* param_1,
                                                                                                int* param_2,
                                                                                                vector_map** param_3) {
        ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>::
            ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1004fd360, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> > >::ref_counter_shared(unsigned long, eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >*): jumps straight to the base-object constructor

    // 0x1004fd370, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> > >::ref_counter_shared(unsigned long, eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> >*)
    void jag::ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                                   eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>::
        ref_counter_shared(
            ref_counter_shared<
                eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>* this,
            ulong param_1, vector_map* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7198 + 16;
        *(ulong*)(this + 16) = param_1;
        *(vector_map**)(this + 24) = param_2;
    }

    // 0x1004fd3b0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator> > >::DeleteData()
    void jag::ref_counter_shared<eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                                   eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>::
        DeleteData(ref_counter_shared<
                   eastl::vector_map<int, game::VarValue, eastl::less<int>, eastl::allocator,
                                     eastl::vector<eastl::pair<int, game::VarValue>, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~vector_map();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 40;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1004fedb0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::QuickChatCatType* placement_new<game::QuickChatCatType, unsigned int&>(void*, unsigned int&)
    QuickChatCatType* placement_new<game::QuickChatCatType, unsigned int&>(void* param_1, uint* param_2) {
        game::QuickChatCatType::QuickChatCatType(param_1, *param_2);
        return param_1;
    }

    // 0x1004fedd0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::QuickChatCatType>* placement_new<ref_counter_shared<game::QuickChatCatType>, int, game::QuickChatCatType*&>(void*, int&&, game::QuickChatCatType*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::QuickChatCatType>, int, game::QuickChatCatType*&>(
        void* param_1, int* param_2, QuickChatCatType** param_3) {
        ref_counter_shared<game::QuickChatCatType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::game {
    class ObjTypeList {
    public:
        // virtual methods in vtable order
        virtual ~ObjTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        virtual ListPostDecode(shared_ptr<ObjType> const&);
        GetModelCache();
        bool IsMembersServer() const;
        ObjTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&,
                    ConfigProvider&, bool);
        GetDefaultOps() const;
        GetDefaultIops() const;
        void SetMembersServer(bool);

        // data members, from how the methods use this: 1424 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[48];
        undefined8 field_56; // offset 56
        char _unknown_64[48];
        ConfigProvider* field_112; // offset 112
        bool m_membersServer;      // offset 120
        char _unknown_121[1295];
        undefined1 m_defaultIops; // offset 1416
        char _unknown_1417[7];
    };

    // 0x1004f6a20, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ObjTypeList::~ObjTypeList(): jumps straight to the base-object destructor

    // 0x1004f6a30, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // ObjTypeList::~ObjTypeList()
    void ObjTypeList::~ObjTypeList() {
        ~ObjTypeList(this);
        operator_delete(this);
    }

    // 0x1004f6aa0, 48 bytes, inline, placed by class name and debug map
    // ObjTypeList::CacheReset()
    void ObjTypeList::CacheReset() {
        CacheReset();
        (&field_128)->Reset();
    }

    // 0x1004f6ad0, 48 bytes, inline, placed by class name and debug map
    // ObjTypeList::CacheClean(unsigned int)
    void ObjTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_128, (ulong)param_1)->Clean();
    }

    // 0x1004f7150, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // ObjTypeList::~ObjTypeList()
    void ObjTypeList::~ObjTypeList() {
        field_0 = &PTR__ObjTypeList_100f02b50;
        (&m_defaultIops)->~array();
        (&field_1224)->~array();
        (&field_128)->~AssetLRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

    // 0x100506170, 16 bytes, inline, placed by class name
    // ObjTypeList::GetDefaultOps() const
    undefined1* ObjTypeList::GetDefaultOps() {
        return &field_1224;
    }

    // 0x100506180, 16 bytes, inline, placed by class name
    // ObjTypeList::GetDefaultIops() const
    undefined1* ObjTypeList::GetDefaultIops() {
        return &m_defaultIops;
    }

    // 0x1005654e0, 16 bytes, inline, placed by class name
    // ObjTypeList::SetMembersServer(bool)
    void ObjTypeList::SetMembersServer(bool param_1) {
        m_membersServer = param_1;
        (*(code*)field_0[4])();
    }

} // namespace jag::game
