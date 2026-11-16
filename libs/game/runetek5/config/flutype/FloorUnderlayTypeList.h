// libs/game/runetek5/config/flutype/FloorUnderlayTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100592260
    game::FloorUnderlayType*
    placement_new<game::FloorUnderlayType, game::BaseTemplateConfigTypeList<game::FloorUnderlayType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::FloorUnderlayType>*& arg2, int& arg3) {
        new (arg1) game::FloorUnderlayType(arg2, arg3);
        return arg1;
    }

    // 0x100592280
    MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>*
    placement_new<MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>,
                  MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData*&, game::FloorUnderlayType*>(
        void* arg1, MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData*& arg2,
        game::FloorUnderlayType*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>(arg2, arg3);
        return arg1;
    }

    // 0x1005922a0
    void shared_ptr_do_enable_shared_from_this<game::FloorUnderlayType>(
        ref_counter_base* ref_counter_base, game::FloorUnderlayType* floorUnderlayType,
        game::FloorUnderlayType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)floorUnderlayType);
            local_38 = weak_ptr(local_48);
            floorUnderlayType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005935b0
    MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>::
        MakeSharedPoolRefCounter(void* arg1, game::FloorUnderlayType* floorUnderlayType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a68 + 16;
        *(void**)(this + 16) = arg1;
        *(FloorUnderlayType**)(this + 24) = floorUnderlayType;
    }

    // 0x1005935f0
    void MakeSharedPoolRefCounter<game::FloorUnderlayType, MakeSharedPool<game::FloorUnderlayType, 128>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::FloorUnderlayType, 128>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class FloorUnderlayTypeList {
    public:
        // virtual methods in vtable order
        virtual ~FloorUnderlayTypeList();
        FloorUnderlayTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                              const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x100591110
    FloorUnderlayTypeList::FloorUnderlayTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                                 const ModeGame* modeGame, const Language* language,
                                                 Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<FloorUnderlayType>(configTypeListContainerStrategy, modeGame, language,
                                                        js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                        (Js5ConfigGroup*)Js5ConfigGroup::FLUTYPE, 128) {}

    // 0x100591600: FloorUnderlayTypeList::~FloorUnderlayTypeList() has the same machine code as BaseTemplateConfigTypeList<FloorUnderlayType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
