// libs/game/runetek5/config/bastype/BASTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x10058caf0
    game::BASType* placement_new<game::BASType, game::BaseTemplateConfigTypeList<game::BASType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::BASType>*& arg2, int& arg3) {
        new (arg1) game::BASType(arg2, arg3);
        return arg1;
    }

    // 0x10058cb10
    MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>*
    placement_new<MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>,
                  MakeSharedPool<game::BASType, 96>::RefCounterAndData*&, game::BASType*>(
        void* arg1, MakeSharedPool<game::BASType, 96>::RefCounterAndData*& arg2, game::BASType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>(arg2, arg3);
        return arg1;
    }

    // 0x10058cb30
    void shared_ptr_do_enable_shared_from_this<game::BASType>(ref_counter_base* ref_counter_base,
                                                              game::BASType* basType,
                                                              game::BASType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)basType);
            local_38 = weak_ptr(local_48);
            basType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x10058df20
    MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>::MakeSharedPoolRefCounter(
        void* arg1, game::BASType* basType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ae0 + 16;
        *(void**)(this + 16) = arg1;
        *(BASType**)(this + 24) = basType;
    }

    // 0x10058df60
    void MakeSharedPoolRefCounter<game::BASType, MakeSharedPool<game::BASType, 96>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BASType, 96>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class BASTypeList {
    public:
        // virtual methods in vtable order
        virtual ~BASTypeList();
        BASTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x10058b9b0
    BASTypeList::BASTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<BASType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG), (Js5ConfigGroup*)Js5ConfigGroup::BASTYPE, 64) {
    }

    // 0x10058bea0: BASTypeList::~BASTypeList() has the same machine code as BaseTemplateConfigTypeList<BASType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
