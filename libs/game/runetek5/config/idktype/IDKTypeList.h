// libs/game/runetek5/config/idktype/IDKTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005a76c0
    game::IDKType* placement_new<game::IDKType, game::BaseTemplateConfigTypeList<game::IDKType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::IDKType>*& arg2, int& arg3) {
        new (arg1) game::IDKType(arg2, arg3);
        return arg1;
    }

    // 0x1005a76e0
    MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>*
    placement_new<MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>,
                  MakeSharedPool<game::IDKType, 32>::RefCounterAndData*&, game::IDKType*>(
        void* arg1, MakeSharedPool<game::IDKType, 32>::RefCounterAndData*& arg2, game::IDKType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x1005a7700
    void shared_ptr_do_enable_shared_from_this<game::IDKType>(ref_counter_base* ref_counter_base,
                                                              game::IDKType* idkType,
                                                              game::IDKType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)idkType);
            local_38 = weak_ptr(local_48);
            idkType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005a8c50
    MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>::MakeSharedPoolRefCounter(
        void* arg1, game::IDKType* idkType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ae8 + 16;
        *(void**)(this + 16) = arg1;
        *(IDKType**)(this + 24) = idkType;
    }

    // 0x1005a8c90
    void MakeSharedPoolRefCounter<game::IDKType, MakeSharedPool<game::IDKType, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::IDKType, 32>::deallocate(arg1);
    }

    // 0x1005ad050
    game::MapElementType*
    placement_new<game::MapElementType, game::BaseTemplateConfigTypeList<game::MapElementType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::MapElementType>*& arg2, int& arg3) {
        new (arg1) game::MapElementType(arg2, arg3);
        return arg1;
    }

    // 0x1005ad070
    MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>*
    placement_new<MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>,
                  MakeSharedPool<game::MapElementType, 512>::RefCounterAndData*&, game::MapElementType*>(
        void* arg1, MakeSharedPool<game::MapElementType, 512>::RefCounterAndData*& arg2, game::MapElementType*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>(arg2, arg3);
        return arg1;
    }

    // 0x1005ad090
    void shared_ptr_do_enable_shared_from_this<game::MapElementType>(
        ref_counter_base* ref_counter_base, game::MapElementType* mapElementType,
        game::MapElementType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)mapElementType);
            local_38 = weak_ptr(local_48);
            mapElementType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005aeeb0
    MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>::MakeSharedPoolRefCounter(
        void* arg1, game::MapElementType* mapElementType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a30 + 16;
        *(void**)(this + 16) = arg1;
        *(MapElementType**)(this + 24) = mapElementType;
    }

    // 0x1005aeef0
    void MakeSharedPoolRefCounter<game::MapElementType, MakeSharedPool<game::MapElementType, 512>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::MapElementType, 512>::deallocate(arg1);
    }

    // 0x1005b38e0
    game::MSIType* placement_new<game::MSIType, game::BaseTemplateConfigTypeList<game::MSIType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::MSIType>*& arg2, int& arg3) {
        new (arg1) game::MSIType(arg2, arg3);
        return arg1;
    }

    // 0x1005b3900
    MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>*
    placement_new<MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>,
                  MakeSharedPool<game::MSIType, 32>::RefCounterAndData*&, game::MSIType*>(
        void* arg1, MakeSharedPool<game::MSIType, 32>::RefCounterAndData*& arg2, game::MSIType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x1005b3920
    void shared_ptr_do_enable_shared_from_this<game::MSIType>(ref_counter_base* ref_counter_base,
                                                              game::MSIType* msiType,
                                                              game::MSIType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)msiType);
            local_38 = weak_ptr(local_48);
            msiType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005b4c10
    MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>::MakeSharedPoolRefCounter(
        void* arg1, game::MSIType* msiType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b08 + 16;
        *(void**)(this + 16) = arg1;
        *(MSIType**)(this + 24) = msiType;
    }

    // 0x1005b4c50
    void MakeSharedPoolRefCounter<game::MSIType, MakeSharedPool<game::MSIType, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::MSIType, 32>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class IDKTypeList {
    public:
        // virtual methods in vtable order
        virtual ~IDKTypeList();
        IDKTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x1005a6580
    IDKTypeList::IDKTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<IDKType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG), (Js5ConfigGroup*)Js5ConfigGroup::IDKTYPE, 32) {
    }

    // 0x1005a6a70: IDKTypeList::~IDKTypeList() has the same machine code as BaseTemplateConfigTypeList<IDKType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
