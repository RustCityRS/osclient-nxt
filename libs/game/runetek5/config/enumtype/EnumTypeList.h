// libs/game/runetek5/config/enumtype/EnumTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005dedd0
    game::EnumType* placement_new<game::EnumType, game::BaseTemplateConfigTypeList<game::EnumType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::EnumType>*& arg2, int& arg3) {
        new (arg1) game::EnumType(arg2, arg3);
        return arg1;
    }

    // 0x1005dedf0
    MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>*
    placement_new<MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>,
                  MakeSharedPool<game::EnumType, 128>::RefCounterAndData*&, game::EnumType*>(
        void* arg1, MakeSharedPool<game::EnumType, 128>::RefCounterAndData*& arg2, game::EnumType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>(arg2, arg3);
        return arg1;
    }

    // 0x1005dee10
    void shared_ptr_do_enable_shared_from_this<game::EnumType>(ref_counter_base* ref_counter_base,
                                                               game::EnumType* enumType,
                                                               game::EnumType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)enumType);
            local_38 = weak_ptr(local_48);
            enumType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005e0b60
    MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>::MakeSharedPoolRefCounter(
        void* arg1, game::EnumType* enumType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b30 + 16;
        *(void**)(this + 16) = arg1;
        *(EnumType**)(this + 24) = enumType;
    }

    // 0x1005e0ba0
    void MakeSharedPoolRefCounter<game::EnumType, MakeSharedPool<game::EnumType, 128>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::EnumType, 128>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class EnumTypeList {
    public:
        // virtual methods in vtable order
        virtual ~EnumTypeList();
        EnumTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                     const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x1005ddc90
    EnumTypeList::EnumTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                               const ModeGame* modeGame, const Language* language,
                               Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<EnumType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                               *(Js5Archive::JS5_CONFIG_ENUM),
                                               (Js5ConfigGroup*)Js5ConfigGroup::ENUMTYPE, 128) {}

    // 0x1005de180: EnumTypeList::~EnumTypeList() has the same machine code as BaseTemplateConfigTypeList<EnumType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
