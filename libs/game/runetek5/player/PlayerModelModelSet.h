// libs/game/runetek5/player/PlayerModelModelSet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10049d040, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256> >::MakeSharedPoolRefCounter(void*, game::PlayerModelModelSet*): jumps straight to the base-object constructor

    // 0x10049d050, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256> >::MakeSharedPoolRefCounter(void*, game::PlayerModelModelSet*)
    void jag::MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>* this,
            void* param_1, PlayerModelModelSet* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a80 + 16;
        *(void**)(this + 16) = param_1;
        *(PlayerModelModelSet**)(this + 24) = param_2;
    }

    // 0x10049d090, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>::
        DeleteData(
            MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>* this) {
        if (*(PlayerModelModelSet**)(this + 24) != (PlayerModelModelSet*)0) {
            (*(PlayerModelModelSet**)(this + 24))->~PlayerModelModelSet();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10049d0c0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>::
        DeleteSelf(
            MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::PlayerModelModelSet, 256>::deallocate(pvVar1);
    }

    // 0x10049de50, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64> >* placement_new<MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64> >, MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData*&, game::StaticPointLight*>(void*, MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData*&, game::StaticPointLight*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>,
                       MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData*&, game::StaticPointLight*>(
        void* param_1, RefCounterAndData** param_2, StaticPointLight** param_3) {
        MakeSharedPoolRefCounter<game::StaticPointLight,
                                 MakeSharedPool<game::StaticPointLight, 64>>::MakeSharedPoolRefCounter(param_1,
                                                                                                       *param_2,
                                                                                                       *param_3);
        return param_1;
    }

    // 0x10049ded0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64> >::MakeSharedPoolRefCounter(void*, game::StaticPointLight*): jumps straight to the base-object constructor

    // 0x10049dee0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64> >::MakeSharedPoolRefCounter(void*, game::StaticPointLight*)
    void jag::MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>* this,
            void* param_1, StaticPointLight* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a58 + 16;
        *(void**)(this + 16) = param_1;
        *(StaticPointLight**)(this + 24) = param_2;
    }

    // 0x10049df20, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>::DeleteData(
        MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>* this) {
        if (*(StaticPointLight**)(this + 24) != (StaticPointLight*)0) {
            (*(StaticPointLight**)(this + 24))->~StaticPointLight();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10049df50, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::StaticPointLight, 64>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::game {
    class PlayerModelModelSet {
    public:
        GetModel();
        PlayerModelModelSet(BuildRequest<graphics::Model, BuildModelMain> const&);
        ~PlayerModelModelSet();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullPlayerModelSet;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x10049ce60, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // PlayerModelModelSet::~PlayerModelModelSet(): jumps straight to the base-object destructor

    // 0x10049ce70, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // PlayerModelModelSet::~PlayerModelModelSet()
    void PlayerModelModelSet::~PlayerModelModelSet() {
        ~ActiveComponent();
    }

} // namespace jag::game
