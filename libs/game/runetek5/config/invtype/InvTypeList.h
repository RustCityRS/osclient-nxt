// libs/game/runetek5/config/invtype/InvTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100583070
    game::InvType* placement_new<game::InvType, game::BaseTemplateConfigTypeList<game::InvType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::InvType>*& arg2, int& arg3) {
        new (arg1) game::InvType(arg2, arg3);
        return arg1;
    }

    // 0x100583090
    MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>*
    placement_new<MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>,
                  MakeSharedPool<game::InvType, 32>::RefCounterAndData*&, game::InvType*>(
        void* arg1, MakeSharedPool<game::InvType, 32>::RefCounterAndData*& arg2, game::InvType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x1005830b0
    void shared_ptr_do_enable_shared_from_this<game::InvType>(ref_counter_base* ref_counter_base,
                                                              game::InvType* invType,
                                                              game::InvType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)invType);
            local_38 = weak_ptr(local_48);
            invType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005843e0
    MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>::MakeSharedPoolRefCounter(
        void* arg1, game::InvType* invType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7af0 + 16;
        *(void**)(this + 16) = arg1;
        *(InvType**)(this + 24) = invType;
    }

    // 0x100584420
    void MakeSharedPoolRefCounter<game::InvType, MakeSharedPool<game::InvType, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::InvType, 32>::deallocate(arg1);
    }

    // 0x100588630
    game::VarBitType* placement_new<game::VarBitType, game::BaseTemplateConfigTypeList<game::VarBitType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::VarBitType>*& arg2, int& arg3) {
        new (arg1) game::VarBitType(arg2, arg3);
        return arg1;
    }

    // 0x100588650
    MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>*
    placement_new<MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>,
                  MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData*&, game::VarBitType*>(
        void* arg1, MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData*& arg2, game::VarBitType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>(arg2, arg3);
        return arg1;
    }

    // 0x100588670
    void
    shared_ptr_do_enable_shared_from_this<game::VarBitType>(ref_counter_base* ref_counter_base,
                                                            game::VarBitType* varBitType,
                                                            game::VarBitType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)varBitType);
            local_38 = weak_ptr(local_48);
            varBitType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100588770
    MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>::MakeSharedPoolRefCounter(
        void* arg1, game::VarBitType* varBitType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee79f0 + 16;
        *(void**)(this + 16) = arg1;
        *(VarBitType**)(this + 24) = varBitType;
    }

    // 0x1005887b0
    void MakeSharedPoolRefCounter<game::VarBitType, MakeSharedPool<game::VarBitType, 2048>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::VarBitType, 2048>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class InvTypeList {
    public:
        // virtual methods in vtable order
        virtual ~InvTypeList();
        InvTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x100581f10
    InvTypeList::InvTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<InvType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG), (Js5ConfigGroup*)Js5ConfigGroup::INVTYPE, 32) {
    }

    // 0x100582400: InvTypeList::~InvTypeList() has the same machine code as BaseTemplateConfigTypeList<InvType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
