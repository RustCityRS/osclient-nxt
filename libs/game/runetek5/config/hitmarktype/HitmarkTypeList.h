// libs/game/runetek5/config/hitmarktype/HitmarkTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x10059d0a0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::HitmarkType* placement_new<game::HitmarkType, game::BaseTemplateConfigTypeList<game::HitmarkType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::HitmarkType>*&, int&)
    /* game::HitmarkType* placement_new<game::HitmarkType,
   game::BaseTemplateConfigTypeList<game::HitmarkType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::HitmarkType>*&, unsigned int&) */

    HitmarkType*
    jag::placement_new<game::HitmarkType, game::BaseTemplateConfigTypeList<game::HitmarkType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::HitmarkType::HitmarkType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10059d0c0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32> >* placement_new<MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32> >, MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData*&, game::HitmarkType*>(void*, MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData*&, game::HitmarkType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>,
                       MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData*&, game::HitmarkType*>(
        void* param_1, RefCounterAndData** param_2, HitmarkType** param_3) {
        MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10059d0e0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::HitmarkType>(ref_counter_base*, game::HitmarkType*, game::HitmarkType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::HitmarkType>(ref_counter_base* param_1, HitmarkType* param_2,
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

    // 0x10059d880, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32> >::MakeSharedPoolRefCounter(void*, game::HitmarkType*): jumps straight to the base-object constructor

    // 0x10059d890, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32> >::MakeSharedPoolRefCounter(void*, game::HitmarkType*)
    void MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>* this, void* param_1,
        HitmarkType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a08 + 16;
        *(void**)(this + 16) = param_1;
        *(HitmarkType**)(this + 24) = param_2;
    }

    // 0x10059d8d0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::HitmarkType, 32>::deallocate(pvVar1);
    }

    // 0x1005a20f0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::HeadbarType* placement_new<game::HeadbarType, game::BaseTemplateConfigTypeList<game::HeadbarType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::HeadbarType>*&, int&)
    /* game::HeadbarType* placement_new<game::HeadbarType,
   game::BaseTemplateConfigTypeList<game::HeadbarType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::HeadbarType>*&, unsigned int&) */

    HeadbarType*
    jag::placement_new<game::HeadbarType, game::BaseTemplateConfigTypeList<game::HeadbarType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::HeadbarType::HeadbarType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005a2110, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32> >* placement_new<MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32> >, MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData*&, game::HeadbarType*>(void*, MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData*&, game::HeadbarType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>,
                       MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData*&, game::HeadbarType*>(
        void* param_1, RefCounterAndData** param_2, HeadbarType** param_3) {
        MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005a2130, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::HeadbarType>(ref_counter_base*, game::HeadbarType*, game::HeadbarType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::HeadbarType>(ref_counter_base* param_1, HeadbarType* param_2,
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

    // 0x1005a3440, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32> >::MakeSharedPoolRefCounter(void*, game::HeadbarType*): jumps straight to the base-object constructor

    // 0x1005a3450, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32> >::MakeSharedPoolRefCounter(void*, game::HeadbarType*)
    void MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>* this, void* param_1,
        HeadbarType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a00 + 16;
        *(void**)(this + 16) = param_1;
        *(HeadbarType**)(this + 24) = param_2;
    }

    // 0x1005a3490, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::HeadbarType, 32>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::game {
    class HitmarkTypeList {
    public:
        // virtual methods in vtable order
        virtual ~HitmarkTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        void FindCachedSprite(int);
        void CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int);
        HitmarkTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[112];
    };

    // 0x100544b40: the linker folded this into HeadbarTypeList::FindCachedSprite(int), which has identical code
    HitmarkTypeList::FindCachedSprite(int);

    // 0x100544e00: the linker folded this into HeadbarTypeList::CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int), which has identical code
    HitmarkTypeList::CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int);

    // 0x10059be60, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HitmarkTypeList::HitmarkTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x10059be80, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // HitmarkTypeList::HitmarkTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void HitmarkTypeList::HitmarkTypeList() {
        BaseTemplateConfigTypeList<HitmarkType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f88 + 16;
        new (&field_112, 32, "HitmarkTypeList")
            LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>();
    }

    // 0x10059c080, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HitmarkTypeList::~HitmarkTypeList(): jumps straight to the base-object destructor

    // 0x10059c090, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // HitmarkTypeList::~HitmarkTypeList()
    void HitmarkTypeList::~HitmarkTypeList() {
        ~HitmarkTypeList(this);
        operator_delete(this);
    }

    // 0x10059c100, 48 bytes, inline, placed by class name and debug map
    // HitmarkTypeList::CacheReset()
    void HitmarkTypeList::CacheReset() {
        CacheReset();
        (&field_112)->Reset();
    }

    // 0x10059c130, 48 bytes, inline, placed by class name and debug map
    // HitmarkTypeList::CacheClean(unsigned int)
    void HitmarkTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_112, (ulong)param_1)->Clean();
    }

    // 0x1005a0dc0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // HitmarkTypeList::~HitmarkTypeList()
    void HitmarkTypeList::~HitmarkTypeList() {
        field_0 = PTR_vtable_100ee7f88 + 16;
        (&field_112)->~LRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

} // namespace jag::game
