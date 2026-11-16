// libs/game/runetek5/config/skyboxtype/SkyBoxTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game {
    class SkyBoxTypeList {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        GetModelCache();
        SkyBoxTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[112];
    };

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    SkyBoxTypeList::GetModelCache();

    // 0x1005c8b60, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SkyBoxTypeList::SkyBoxTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005c8b80, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // SkyBoxTypeList::SkyBoxTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void SkyBoxTypeList::SkyBoxTypeList() {
        BaseTemplateConfigTypeList<SkyBoxType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f58 + 16;
        new (&field_112, 4, "SkyBoxTypeList") AssetLRUCache<graphics::Model, BuildModelMain>();
    }

    // 0x1005c8d80, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SkyBoxTypeList::~SkyBoxTypeList(): jumps straight to the base-object destructor

    // 0x1005c8d90, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // SkyBoxTypeList::~SkyBoxTypeList()
    void SkyBoxTypeList::~SkyBoxTypeList() {
        ~SkyBoxTypeList(this);
        operator_delete(this);
    }

    // 0x1005c8e00, 48 bytes, inline, placed by class name and debug map
    // SkyBoxTypeList::CacheReset()
    void SkyBoxTypeList::CacheReset() {
        CacheReset();
        (&field_112)->Reset();
    }

    // 0x1005c8e30, 48 bytes, inline, placed by class name and debug map
    // SkyBoxTypeList::CacheClean(unsigned int)
    void SkyBoxTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_112, (ulong)param_1)->Clean();
    }

    // 0x1005ce670, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // SkyBoxTypeList::~SkyBoxTypeList()
    void SkyBoxTypeList::~SkyBoxTypeList() {
        field_0 = PTR_vtable_100ee7f58 + 16;
        (&field_112)->~AssetLRUCache();
        ~BaseTemplateConfigTypeList();
    }

} // namespace jag::game

namespace jag {
    // 0x1005c9dc0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::SkyBoxType* placement_new<game::SkyBoxType, game::BaseTemplateConfigTypeList<game::SkyBoxType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::SkyBoxType>*&, int&)
    /* game::SkyBoxType* placement_new<game::SkyBoxType,
   game::BaseTemplateConfigTypeList<game::SkyBoxType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::SkyBoxType>*&, unsigned int&) */

    SkyBoxType*
    jag::placement_new<game::SkyBoxType, game::BaseTemplateConfigTypeList<game::SkyBoxType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::SkyBoxType::SkyBoxType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005c9de0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16> >* placement_new<MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16> >, MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData*&, game::SkyBoxType*>(void*, MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData*&, game::SkyBoxType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>,
                       MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData*&, game::SkyBoxType*>(
        void* param_1, RefCounterAndData** param_2, SkyBoxType** param_3) {
        MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1005c9e00, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::SkyBoxType>(ref_counter_base*, game::SkyBoxType*, game::SkyBoxType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::SkyBoxType>(ref_counter_base* param_1, SkyBoxType* param_2,
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

    // 0x1005cb110, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16> >::MakeSharedPoolRefCounter(void*, game::SkyBoxType*): jumps straight to the base-object constructor

    // 0x1005cb120, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16> >::MakeSharedPoolRefCounter(void*, game::SkyBoxType*)
    void MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>* this, void* param_1,
        SkyBoxType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee79e0 + 16;
        *(void**)(this + 16) = param_1;
        *(SkyBoxType**)(this + 24) = param_2;
    }

    // 0x1005cb160, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::SkyBoxType, 16>::deallocate(pvVar1);
    }

} // namespace jag
