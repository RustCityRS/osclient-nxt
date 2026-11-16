// libs/game/runetek5/config/flotype/FloorOverlayTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100597920
    game::FloorOverlayType*
    placement_new<game::FloorOverlayType, game::BaseTemplateConfigTypeList<game::FloorOverlayType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::FloorOverlayType>*& arg2, int& arg3) {
        new (arg1) game::FloorOverlayType(arg2, arg3);
        return arg1;
    }

    // 0x100597940
    MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>*
    placement_new<MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>,
                  MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData*&, game::FloorOverlayType*>(
        void* arg1, MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData*& arg2,
        game::FloorOverlayType*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>(arg2, arg3);
        return arg1;
    }

    // 0x100597960
    void shared_ptr_do_enable_shared_from_this<game::FloorOverlayType>(
        ref_counter_base* ref_counter_base, game::FloorOverlayType* floorOverlayType,
        game::FloorOverlayType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)floorOverlayType);
            local_38 = weak_ptr(local_48);
            floorOverlayType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100598c70
    MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>::
        MakeSharedPoolRefCounter(void* arg1, game::FloorOverlayType* floorOverlayType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a50 + 16;
        *(void**)(this + 16) = arg1;
        *(FloorOverlayType**)(this + 24) = floorOverlayType;
    }

    // 0x100598cb0
    void MakeSharedPoolRefCounter<game::FloorOverlayType, MakeSharedPool<game::FloorOverlayType, 128>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::FloorOverlayType, 128>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class FloorOverlayTypeList {
    public:
        // virtual methods in vtable order
        virtual ~FloorOverlayTypeList();
        FloorOverlayTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x1005967c0
    FloorOverlayTypeList::FloorOverlayTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                               const ModeGame* modeGame, const Language* language,
                                               Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<FloorOverlayType>(configTypeListContainerStrategy, modeGame, language,
                                                       js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                       (Js5ConfigGroup*)Js5ConfigGroup::FLOTYPE, 128) {}

    // 0x100596cb0: FloorOverlayTypeList::~FloorOverlayTypeList() has the same machine code as BaseTemplateConfigTypeList<FloorOverlayType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
