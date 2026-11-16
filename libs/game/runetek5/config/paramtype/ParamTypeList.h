// libs/game/runetek5/config/paramtype/ParamTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100572510
    game::ParamType* placement_new<game::ParamType, game::BaseTemplateConfigTypeList<game::ParamType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::ParamType>*& arg2, int& arg3) {
        new (arg1) game::ParamType(arg2, arg3);
        return arg1;
    }

    // 0x100572530
    MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>*
    placement_new<MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>,
                  MakeSharedPool<game::ParamType, 640>::RefCounterAndData*&, game::ParamType*>(
        void* arg1, MakeSharedPool<game::ParamType, 640>::RefCounterAndData*& arg2, game::ParamType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>(arg2, arg3);
        return arg1;
    }

    // 0x100572550
    void
    shared_ptr_do_enable_shared_from_this<game::ParamType>(ref_counter_base* ref_counter_base,
                                                           game::ParamType* paramType,
                                                           game::ParamType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)paramType);
            local_38 = weak_ptr(local_48);
            paramType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100573980
    MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>::MakeSharedPoolRefCounter(
        void* arg1, game::ParamType* paramType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b58 + 16;
        *(void**)(this + 16) = arg1;
        *(ParamType**)(this + 24) = paramType;
    }

    // 0x1005739c0
    void MakeSharedPoolRefCounter<game::ParamType, MakeSharedPool<game::ParamType, 640>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::ParamType, 640>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class ParamTypeList {
    public:
        // virtual methods in vtable order
        virtual ~ParamTypeList();
        ParamTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                      const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x100571380
    ParamTypeList::ParamTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                 const ModeGame* modeGame, const Language* language,
                                 Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<ParamType>(configTypeListContainerStrategy, modeGame, language,
                                                js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                (Js5ConfigGroup*)Js5ConfigGroup::PARAMTYPE, 640) {}

    // 0x100571870: ParamTypeList::~ParamTypeList() has the same machine code as BaseTemplateConfigTypeList<ParamType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
