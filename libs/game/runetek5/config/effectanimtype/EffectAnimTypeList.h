// libs/game/runetek5/config/effectanimtype/EffectAnimTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game {
    class EffectAnimTypeList {
    public:
        // virtual methods in vtable order
        virtual ~EffectAnimTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        GetModelCache();
        EffectAnimTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[112];
    };

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    EffectAnimTypeList::GetModelCache();

    // 0x1005e3ef0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EffectAnimTypeList::EffectAnimTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005e3f10, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // EffectAnimTypeList::EffectAnimTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void EffectAnimTypeList::EffectAnimTypeList() {
        BaseTemplateConfigTypeList<EffectAnimType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7fc0 + 16;
        new (&field_112, 64, "EffectAnimTypeList")
            LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>();
    }

    // 0x1005e4110, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // EffectAnimTypeList::~EffectAnimTypeList(): jumps straight to the base-object destructor

    // 0x1005e4120, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // EffectAnimTypeList::~EffectAnimTypeList()
    void EffectAnimTypeList::~EffectAnimTypeList() {
        ~EffectAnimTypeList(this);
        operator_delete(this);
    }

    // 0x1005e4190, 48 bytes, inline, placed by class name and debug map
    // EffectAnimTypeList::CacheReset()
    void EffectAnimTypeList::CacheReset() {
        CacheReset();
        (&field_112)->Reset();
    }

    // 0x1005e41c0, 48 bytes, inline, placed by class name and debug map
    // EffectAnimTypeList::CacheClean(unsigned int)
    void EffectAnimTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_112, (ulong)param_1)->Clean();
    }

    // 0x1005e9a60, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // EffectAnimTypeList::~EffectAnimTypeList()
    void EffectAnimTypeList::~EffectAnimTypeList() {
        field_0 = PTR_vtable_100ee7fc0 + 16;
        (&field_112)->~LRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

} // namespace jag::game

namespace jag {
    // 0x1005e5160, 32 bytes, inline, placed by debug map only (low confidence)
    // game::EffectAnimType* placement_new<game::EffectAnimType, game::BaseTemplateConfigTypeList<game::EffectAnimType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::EffectAnimType>*&, int&)
    /* game::EffectAnimType* placement_new<game::EffectAnimType,
   game::BaseTemplateConfigTypeList<game::EffectAnimType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::EffectAnimType>*&, unsigned int&) */

    EffectAnimType*
    jag::placement_new<game::EffectAnimType, game::BaseTemplateConfigTypeList<game::EffectAnimType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::EffectAnimType::EffectAnimType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005e5180, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256> >* placement_new<MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256> >, MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData*&, game::EffectAnimType*>(void*, MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData*&, game::EffectAnimType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>,
                       MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData*&, game::EffectAnimType*>(
        void* param_1, RefCounterAndData** param_2, EffectAnimType** param_3) {
        MakeSharedPoolRefCounter<game::EffectAnimType,
                                 MakeSharedPool<game::EffectAnimType, 256>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                      *param_3);
        return param_1;
    }

    // 0x1005e51a0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::EffectAnimType>(ref_counter_base*, game::EffectAnimType*, game::EffectAnimType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::EffectAnimType>(ref_counter_base* param_1, EffectAnimType* param_2,
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

    // 0x1005e6560, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256> >::MakeSharedPoolRefCounter(void*, game::EffectAnimType*): jumps straight to the base-object constructor

    // 0x1005e6570, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256> >::MakeSharedPoolRefCounter(void*, game::EffectAnimType*)
    void jag::MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>* this,
            void* param_1, EffectAnimType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a28 + 16;
        *(void**)(this + 16) = param_1;
        *(EffectAnimType**)(this + 24) = param_2;
    }

    // 0x1005e65b0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::EffectAnimType, 256>::deallocate(pvVar1);
    }

} // namespace jag
