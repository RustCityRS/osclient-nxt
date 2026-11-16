// libs/game/runetek5/config/watertype/WaterTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005cfa80
    game::WaterType* placement_new<game::WaterType, game::BaseTemplateConfigTypeList<game::WaterType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::WaterType>*& arg2, int& arg3) {
        new (arg1) game::WaterType(arg2, arg3);
        return arg1;
    }

    // 0x1005cfaa0
    MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>*
    placement_new<MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>,
                  MakeSharedPool<game::WaterType, 16>::RefCounterAndData*&, game::WaterType*>(
        void* arg1, MakeSharedPool<game::WaterType, 16>::RefCounterAndData*& arg2, game::WaterType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>(arg2, arg3);
        return arg1;
    }

    // 0x1005cfac0
    void
    shared_ptr_do_enable_shared_from_this<game::WaterType>(ref_counter_base* ref_counter_base,
                                                           game::WaterType* waterType,
                                                           game::WaterType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)waterType);
            local_38 = weak_ptr(local_48);
            waterType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005cfbc0
    MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>::MakeSharedPoolRefCounter(
        void* arg1, game::WaterType* waterType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b68 + 16;
        *(void**)(this + 16) = arg1;
        *(WaterType**)(this + 24) = waterType;
    }

    // 0x1005cfc00
    void MakeSharedPoolRefCounter<game::WaterType, MakeSharedPool<game::WaterType, 16>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::WaterType, 16>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class WaterTypeList {
    public:
        // virtual methods in vtable order
        virtual ~WaterTypeList();
        WaterTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                      const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x1005ce9f0
    WaterTypeList::WaterTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                 const ModeGame* modeGame, const Language* language,
                                 Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<WaterType>(configTypeListContainerStrategy, modeGame, language,
                                                js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                (Js5ConfigGroup*)Js5ConfigGroup::WATERTYPE, 16) {}

    // 0x1005ceee0: WaterTypeList::~WaterTypeList() has the same machine code as BaseTemplateConfigTypeList<WaterType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
