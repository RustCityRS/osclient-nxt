// libs/oldscape/rs2lib/script/var/ScriptVarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ScriptVarType {
    public:
        void GetBaseVarType() const;
        uint8_t* GetDefaultValue() const;
        unsigned int GetID() const;
        void GetByID(unsigned int arg1);
        ScriptVarType(unsigned int arg1, const game::BaseVarType* baseVarType, game::VarValue varValue);
        void Initialise();
        void Destroy();
        ~ScriptVarType();
        static eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>
            LOOKUP_MAP;
        static int64_t INT;
        static int64_t BOOLEAN;
        static int64_t HASH32;
        static int64_t QUEST;
        static int64_t QUESTHELP;
        static int64_t CURSOR;
        static int64_t SEQ;
        static int64_t COLOUR;
        static int64_t LOC_SHAPE;
        static int64_t COMPONENT;
        static int64_t IDKIT;
        static int64_t MIDI;
        static int64_t NPC_MODE;
        static int64_t NAMEDOBJ;
        static int64_t SYNTH;
        static int64_t AI_QUEUE;
        static int64_t AREA;
        static int64_t STAT;
        static int64_t NPC_STAT;
        static int64_t WRITEINV;
        static int64_t MESH;
        static int64_t MAPAREA;
        static int64_t COORDGRID;
        static int64_t GRAPHIC;
        static int64_t CHATPHRASE;
        static int64_t FONTMETRICS;
        static int64_t ENUM;
        static int64_t HUNT;
        static int64_t JINGLE;
        static int64_t CHATCAT;
        static int64_t LOC;
        static int64_t MODEL;
        static int64_t NPC;
        static int64_t OBJ;
        static int64_t PLAYER_UID;
        static int64_t REGION_UID;
        static int64_t STRING;
        static int64_t SPOTANIM;
        static int64_t NPC_UID;
        static int64_t INV;
        static int64_t TEXTURE;
        static int64_t CATEGORY;
        static int64_t CHAR;
        static int64_t LASER;
        static int64_t BAS;
        static int64_t CONTROLLER;
        static int64_t COLLISION_GEOMETRY;
        static int64_t PHYSICS_MODEL;
        static int64_t PHYSICS_CONTROL_MODIFIER;
        static int64_t CLANHASH;
        static int64_t CUTSCENE;
        static int64_t ITEMCODE;
        static int64_t PVPKILLS;
        static int64_t MAPSCENEICON;
        static int64_t CLANFORUMQFC;
        static int64_t VORBIS;
        static int64_t VERIFY_OBJECT;
        static int64_t MAPELEMENT;
        static int64_t CATEGORYTYPE;
        static int64_t SOCIAL_NETWORK;
        static int64_t HITMARK;
        static int64_t PACKAGE;
        static int64_t PARTICLE_EFFECTOR;
        static int64_t CONTROLLER_UID;
        static int64_t PARTICLE_EMITTER;
        static int64_t PLOGTYPE;
        static int64_t UNSIGNED_INT;
        static int64_t SKYBOX;
        static int64_t SKYDECOR;
        static int64_t HASH64;
        static int64_t INPUTTYPE;
        static int64_t STRUCT;
        static int64_t DBROW;
        static int64_t STORABLELABEL;
        static int64_t STORABLEPROC;
        static int64_t GAMELOGEVENT;
        static int64_t ANIMATIONCLIP;
        static int64_t SKELETON;
        static int64_t REGIONVISIBILITY;
        static int64_t FMODHANDLE;
        static int64_t REGION_ALLOWLOGIN;
        static int64_t REGION_INFO;
        static int64_t REGION_INFO_FAILURE;
        static int64_t SERVER_ACCOUNT_CREATION_STEP;
        static int64_t CLIENT_ACCOUNT_CREATION_STEP;
        static int64_t LOBBY_ACCOUNT_CREATION_STEP;
        static int64_t GWC_PLATFORM;
        static int64_t CURRENCY;
        static int64_t KEYBOARD_KEY;
        static int64_t MOUSEEVENT;
        static int64_t HEADBAR;
        static int64_t BUG_TEMPLATE;
        static int64_t BILLING_AUTH_FLAG;
        static int64_t ACCOUNT_FEATURE_FLAG;
        static int64_t INTERFACE;
        static int64_t TOPLEVELINTERFACE;
        static int64_t OVERLAYINTERFACE;
        static int64_t CLIENTINTERFACE;
        static int64_t MOVESPEED;
        static int64_t MATERIAL;
        static int64_t SEQGROUP;
        static int64_t TEMP_HISCORE;
        static int64_t TEMP_HISCORE_LENGTH_TYPE;
        static int64_t TEMP_HISCORE_DISPLAY_TYPE;
        static int64_t TEMP_HISCORE_CONTRIBUTE_RESULT;
        static int64_t AUDIOGROUP;
        static int64_t AUDIOMIXBUSS;
        static int64_t LONG;
        static int64_t CRM_CHANNEL;
        static int64_t HTTP_IMAGE;
        static int64_t POP_UP_DISPLAY_BEHAVIOUR;
        static int64_t POLL;
        static int64_t MTXN_PACKAGE;
        static int64_t MTXN_PRICE_POINT;
        static int64_t ENTITYOVERLAY;
        static int64_t DBTABLE;
        static int64_t COMPONENTARRAY;
        static int64_t INTARRAY;
        static int64_t LABEL;
        static int64_t QUEUE;
        static int64_t TIMER;
        static int64_t WEAKQUEUE;
        static int64_t SOFTTIMER;
        static int64_t OBJVAR;
        static int64_t WALKTRIGGER;
        static int64_t VARP;

    private:
        unsigned int m_iD;
        uint8_t _unknown_4[4];
        BaseVarType* field_8;
        uint8_t _unknown_16[8];
    };

    // 0x1000b9950
    uint8_t* ScriptVarType::GetDefaultValue() const {
        return m_screen;
    }

    // 0x1000b9960
    unsigned int ScriptVarType::GetID() const {
        return m_x;
    }

    // 0x10018bb50
    void ScriptVarType::GetByID(unsigned int arg1) {
        uint64_t uVar3;

        long lVar2 = LOOKUP_MAP.size();
        if (lVar2 == 0) {
            LogAssert("LOOKUP_MAP.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/script/"
                      "var/ScriptVarType.h",
                      168, "ScriptVarType has not been initialised");
        }
        auto local_38 = LOOKUP_MAP.find(arg1);
        auto local_48 = LOOKUP_MAP.end();
        if (local_38 != local_48 == '\0') {
            uVar3 = 0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            uVar3 = *(uint64_t*)(lVar2 + 8);
        }
        return uVar3;
    }

    // 0x100223850
    ScriptVarType::~ScriptVarType() {
        field_16.~VarValue();
    }

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x1000b9950: AnimState::GetResources() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9950: PointLightGridTexture::GetEffect() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9960: RenderPassBitSet::GetBits() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000b9960: ScriptedPointLight::GetRadius() const has the same machine code as oldscape::ScriptVarType::GetID() const

} // namespace jag::graphics

namespace jag {
    // 0x1000b9950: EntityWaypoint::GetMoveSpeed() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9960: EntityWaypoint::GetLevel() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000b9960: Error::GetCode() const has the same machine code as oldscape::ScriptVarType::GetID() const

} // namespace jag

namespace jag::game {
    // 0x1000b9960: EnvSkySettings::GetSkyBoxID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000b9960: ServerSyncingCycle::GetCycle() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000b9960: EnvLightingSettings::GetSunRGBA() const has the same machine code as oldscape::ScriptVarType::GetID() const

} // namespace jag::game

namespace jag::render {
    // 0x1000b9960: VertexArrayObject::GetNativeVAO() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000b9960: TextureFormatBitSet::GetBits() const has the same machine code as oldscape::ScriptVarType::GetID() const

} // namespace jag::render

namespace jag::input::gesture {
    // 0x1000b9960: GestureManager::GetNumTouches() const has the same machine code as oldscape::ScriptVarType::GetID() const

} // namespace jag::input::gesture

namespace jag::tweak {
    // 0x1000b9960: EditLine::GetDrawOffset() const has the same machine code as oldscape::ScriptVarType::GetID() const

} // namespace jag::tweak
