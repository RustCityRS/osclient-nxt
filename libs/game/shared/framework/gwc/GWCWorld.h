// libs/game/shared/framework/gwc/GWCWorld.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class GWCWorld {
    public:
        void SetPlayers(int);
        GWCWorld(int, GWCLocation const&, unsigned int, unsigned int, eastl::string const&, unsigned int,
                 eastl::string const&, eastl::string const&, int);
        GWCWorld* operator=(GWCWorld&&);
        ~GWCWorld();
        GWCWorld();

        // data members, from how the methods use this: 172 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        GWCLocation field_8; // offset 8
        char _unknown_24[24];
        uint field_48; // offset 48
        uint field_52; // offset 52
        char _unknown_56[32];
        uint field_88; // offset 88
        char _unknown_92[68];
        int m_players;        // offset 160
        undefined4 field_164; // offset 164
        char _unknown_168[4];
    };

    // 0x1006650b0: the linker folded this into audio::SoundInstance::SetBussID(hal::audio::BussType), which has identical code
    GWCWorld::SetPlayers(int);

    // 0x1006e2010, 48 bytes, inline, placed by debug map only (low confidence)
    // GWCLocation::operator=(GWCLocation&&)
    /* GWCLocation::TEMPNAMEPLACEHOLDERVALUE(GWCLocation&&) */

    GWCLocation* GWCLocation::operator=(GWCLocation* param_1) {
        field_0 = param_1->field_0;
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)&param_1->field_8);
        return this;
    }

    // 0x1006e2040, 48 bytes, complete-object constructor, inline, placed by class name and debug map
    // GWCWorld::GWCWorld(int, GWCLocation const&, unsigned int, unsigned int, eastl::string const&, unsigned int, eastl::string const&, eastl::string const&, int)
    void GWCWorld::GWCWorld(int param_1, GWCLocation* param_2, uint param_3, uint param_4, basic_string* param_5,
                            uint param_6, basic_string* param_7, basic_string* param_8, int param_9) {
        GWCWorld(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
    }

    // 0x1006e20b0, 112 bytes, inline, placed by class name and debug map
    // GWCWorld::operator=(GWCWorld&&)
    /* GWCWorld::TEMPNAMEPLACEHOLDERVALUE(GWCWorld&&) */

    GWCWorld* GWCWorld::operator=(GWCWorld* param_1) {
        uint uVar1;
        undefined4 uVar2;

        field_0 = param_1->field_0;
        GWCLocation::operator=((GWCLocation*)field_8, (GWCLocation*)param_1->field_8);
        uVar1 = param_1->field_52;
        field_48 = param_1->field_48;
        field_52 = uVar1;
        eastl::string::operator=((eastl::string*)&field_56, (basic_string*)&param_1->field_56);
        field_88 = param_1->field_88;
        eastl::string::operator=((eastl::string*)&field_96, (basic_string*)&param_1->field_96);
        eastl::string::operator=((eastl::string*)&field_128, (basic_string*)&param_1->field_128);
        uVar2 = param_1->field_164;
        m_players = param_1->m_players;
        field_164 = uVar2;
        return this;
    }

    // 0x1006e2120, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // GWCWorld::~GWCWorld(): jumps straight to the base-object destructor

    // 0x1006e9060, 192 bytes, base-object constructor, inline, placed by class name
    // GWCWorld::GWCWorld(int, GWCLocation const&, unsigned int, unsigned int, eastl::string const&, unsigned int, eastl::string const&, eastl::string const&, int)
    void GWCWorld::GWCWorld(int param_1, GWCLocation* param_2, uint param_3, uint param_4, basic_string* param_5,
                            uint param_6, basic_string* param_7, basic_string* param_8, int param_9) {
        field_0 = param_1;
        new (field_8, (pair*)param_2) eastl::pair<unsigned int const, eastl::string>();
        field_48 = param_3;
        field_52 = param_4;
        new (&field_56, param_5) eastl::string();
        field_88 = param_6;
        new (&field_96, param_7) eastl::string();
        new (&field_128, param_8) eastl::string();
        m_players = param_9;
        field_164 = 0;
    }

    // 0x1006e9150, 64 bytes, base-object destructor, inline, placed by class name
    // GWCWorld::~GWCWorld()
    void GWCWorld::~GWCWorld() {
        (&field_128)->~basic_string();
        (&field_96)->~basic_string();
        (&field_56)->~basic_string();
        field_8->~LanguageMessage();
    }

    // 0x100715dd0, 16 bytes, complete-object constructor, inline, placed by class name
    // GWCWorld::GWCWorld(): jumps straight to the base-object constructor

    // 0x100715de0, 160 bytes, base-object constructor, inline, placed by class name
    // GWCWorld::GWCWorld()
    void GWCWorld::GWCWorld() {
        field_0 = -1;
        new (field_8) GWCLocation();
        field_48 = 0;
        field_52 = 4294967295;
        new (&field_56) eastl::string();
        field_88 = 0;
        new (&field_96) eastl::string();
        new (&field_128) eastl::string();
        m_players = -1;
        field_164 = 0;
    }

} // namespace jag::game
