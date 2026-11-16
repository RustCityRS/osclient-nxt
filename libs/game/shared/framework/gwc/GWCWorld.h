// libs/game/shared/framework/gwc/GWCWorld.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class GWCWorld {
    public:
        void SetPlayers(int bussType);
        GWCWorld(int arg1, const GWCLocation& gwcLocation, unsigned int arg3, unsigned int arg4,
                 const eastl::string& str1, unsigned int arg6, const eastl::string& str2, const eastl::string& str3,
                 int arg9);
        GWCWorld* operator=(GWCWorld&& gwcWorld);
        ~GWCWorld();
        GWCWorld();

    private:
        int field_0;
        uint8_t _unknown_4[4];
        GWCLocation field_8;
        uint8_t _unknown_24[24];
        unsigned int field_48;
        unsigned int field_52;
        uint8_t _unknown_56[32];
        unsigned int field_88;
        uint8_t _unknown_92[68];
        BussType m_players;
        uint32_t field_164;
        uint8_t _unknown_168[4];
    };

    // 0x1006650b0: GWCWorld::SetPlayers(int) has the same machine code as audio::SoundInstance::SetBussID(hal::audio::BussType)

    // 0x1006e2010
    GWCLocation* GWCLocation::operator=(GWCLocation&& gwcLocation) {
        field_0 = gwcLocation.field_0;
        field_8 = &gwcLocation.field_8;
        return this;
    }

    // 0x1006e20b0
    GWCWorld* GWCWorld::operator=(GWCWorld&& gwcWorld) {
        field_0 = gwcWorld.field_0;
        *field_8 = gwcWorld.field_8;
        unsigned int uVar1 = gwcWorld.field_52;
        field_48 = gwcWorld.field_48;
        field_52 = uVar1;
        field_56 = &gwcWorld.field_56;
        field_88 = gwcWorld.field_88;
        field_96 = &gwcWorld.field_96;
        field_128 = &gwcWorld.field_128;
        uint32_t uVar2 = gwcWorld.field_164;
        m_players = gwcWorld.m_players;
        field_164 = uVar2;
        return this;
    }

    // 0x1006e9060
    GWCWorld::GWCWorld(int arg1, const GWCLocation& gwcLocation, unsigned int arg3, unsigned int arg4,
                       const eastl::string& str1, unsigned int arg6, const eastl::string& str2,
                       const eastl::string& str3, int arg9)
        : field_0(arg1), field_8(gwcLocation), field_48(arg3), field_52(arg4), field_56(str1), field_88(arg6),
          field_96(str2), field_128(str3), m_players(arg9), field_164(0) {}

    // 0x1006e9150
    GWCWorld::~GWCWorld() {
        field_128.~basic_string();
        field_96.~basic_string();
        field_56.~basic_string();
        field_8->~LanguageMessage();
    }

    // 0x100715de0
    GWCWorld::GWCWorld()
        : field_0(-1), field_48(0), field_52(4294967295), field_88(0), m_players(4294967295), field_164(0) {}

} // namespace jag::game
