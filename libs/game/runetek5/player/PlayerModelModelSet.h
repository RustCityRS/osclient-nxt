// libs/game/runetek5/player/PlayerModelModelSet.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10049d050
    MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>::
        MakeSharedPoolRefCounter(void* arg1, game::PlayerModelModelSet* playerModelModelSet)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a80 + 16;
        *(void**)(this + 16) = arg1;
        *(PlayerModelModelSet**)(this + 24) = playerModelModelSet;
    }

    // 0x10049d090
    void
    MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>::DeleteData() {
        if (*(PlayerModelModelSet**)(this + 24) != nullptr) {
            (*(PlayerModelModelSet**)(this + 24))->~PlayerModelModelSet();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10049d0c0
    void
    MakeSharedPoolRefCounter<game::PlayerModelModelSet, MakeSharedPool<game::PlayerModelModelSet, 256>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::PlayerModelModelSet, 256>::deallocate(arg1);
    }

    // 0x10049de50
    MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>*
    placement_new<MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>,
                  MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData*&, game::StaticPointLight*>(
        void* arg1, MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData*& arg2,
        game::StaticPointLight*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>(arg2, arg3);
        return arg1;
    }

    // 0x10049dee0
    MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>::
        MakeSharedPoolRefCounter(void* arg1, game::StaticPointLight* staticPointLight)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a58 + 16;
        *(void**)(this + 16) = arg1;
        *(StaticPointLight**)(this + 24) = staticPointLight;
    }

    // 0x10049df20
    void MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>::DeleteData() {
        if (*(StaticPointLight**)(this + 24) != nullptr) {
            (*(StaticPointLight**)(this + 24))->~StaticPointLight();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10049df50
    void MakeSharedPoolRefCounter<game::StaticPointLight, MakeSharedPool<game::StaticPointLight, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::StaticPointLight, 64>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class PlayerModelModelSet {
    public:
        void GetModel();
        PlayerModelModelSet(const BuildRequest<graphics::Model, BuildModelMain>& buildRequest);
        ~PlayerModelModelSet();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullPlayerModelSet; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

        uint8_t _unknown_0[1];
    };

    // 0x10049ce70
    PlayerModelModelSet::~PlayerModelModelSet() {}

} // namespace jag::game
