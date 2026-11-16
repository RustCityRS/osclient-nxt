// libs/game/runetek5/config/vartype/ScriptVarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ScriptVarType {
    public:
        uint8_t* GetDefaultValue() const;
        ~ScriptVarType();
        void Initialise();
        ScriptVarType(unsigned int arg1, unsigned char arg2, const BaseVarType* baseVarType, const VarValue& varValue);
        void Destroy();
        void GetByID(unsigned int arg1);
        void GetByChar(unsigned char arg1);
        static eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>
            LOOKUP_MAP;
        static eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>
            CHAR_LOOKUP_MAP;
        static int64_t INT;
        static int64_t BOOLEAN;
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
        static int64_t SYNTH;
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
        static int64_t JINGLE;
        static int64_t CHATCAT;
        static int64_t LOC;
        static int64_t MODEL;
        static int64_t NPC;
        static int64_t OBJ;
        static int64_t PLAYER_UID;
        static int64_t STRING;
        static int64_t SPOTANIM;
        static int64_t NPC_UID;
        static int64_t INV;
        static int64_t TEXTURE;
        static int64_t CATEGORY;
        static int64_t CHAR;
        static int64_t LASER;
        static int64_t BAS;
        static int64_t COLLISION_GEOMETRY;
        static int64_t PHYSICS_MODEL;
        static int64_t PHYSICS_CONTROL_MODIFIER;
        static int64_t CLANHASH;
        static int64_t COORDFINE;
        static int64_t CUTSCENE;
        static int64_t ITEMCODE;
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
        static int64_t PARTICLE_EMITTER;
        static int64_t PLOGTYPE;
        static int64_t UNSIGNED_INT;
        static int64_t SKYBOX;
        static int64_t SKYDECOR;
        static int64_t HASH64;
        static int64_t INPUTTYPE;
        static int64_t STRUCT;
        static int64_t DBROW;
        static int64_t GWC_PLATFORM;
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
        static int64_t POINTLIGHT;
        static int64_t PLAYER_GROUP;
        static int64_t PLAYER_GROUP_STATUS;
        static int64_t PLAYER_GROUP_INVITE_RESULT;
        static int64_t PLAYER_GROUP_MODIFY_RESULT;
        static int64_t PLAYER_GROUP_JOIN_OR_CREATE_RESULT;
        static int64_t PLAYER_GROUP_AFFINITY_MODIFY_RESULT;
        static int64_t PLAYER_GROUP_DELTA_TYPE;
        static int64_t CLIENT_TYPE;
        static int64_t TELEMETRY_INTERVAL;
        static int64_t WORLD_AREA;
        static int64_t DBTABLE;
        static int64_t ACHIEVEMENT;
        static int64_t STYLESHEET;
        static int64_t UI_ANIM_CURVE;
        static int64_t UI_ANIM;
        static int64_t ANIM_STATE_MACHINE;
        static int64_t CUTSCENE2D;
        static int64_t VAR_INT;
        static int64_t VAR_LONG;
        static int64_t VAR_STRING;

    private:
        unsigned int field_0;
        unsigned char field_4;
        uint8_t _unknown_5[3];
        BaseVarType* field_8;
        uint8_t _unknown_16[8];
    };

    // 0x1004d1a30
    void ScriptVarType::GetByID(unsigned int arg1) {
        long lVar2;
        uint64_t uVar3;

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

    // 0x1004d2ee0
    ScriptVarType::ScriptVarType(unsigned int arg1, unsigned char arg2, const BaseVarType* baseVarType,
                                 const VarValue& varValue)
        : field_0(arg1), field_4(arg2), field_8(baseVarType), field_16(varValue) {
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;
        pair<unsigned int const, VarDomainType*> local_48[16];
        uint32_t local_38[2];

        Material* local_28 = (Material*)this;
        local_38[0] = eastl::make_pair<unsigned int const&, ScriptVarType*>(*this, local_28);
        uint64_t local_30 = extraout_RDX;
        local_48->pair<unsigned int, VarDomainType*, void>(*local_38);
        auto local_60 = LOOKUP_MAP.insert(*local_48);
        local_28 = (Material*)this;
        uint8_t uVar1 = eastl::make_pair<unsigned char&, ScriptVarType*>(arg2, local_28);
        local_38[0] = (((uint32_t)local_38[0]._1_3_ << 8) | (uint8_t)uVar1);
        local_30 = extraout_RDX_00;
        local_48->pair<unsigned char, unsigned long, void>(*local_38);
        local_60 = CHAR_LOOKUP_MAP.insert(*local_48);
    }

    // 0x1004f3860
    void ScriptVarType::GetByChar(unsigned char arg1) {
        long lVar2;
        uint64_t uVar3;

        auto local_38 = CHAR_LOOKUP_MAP.find(arg1);
        auto local_48 = CHAR_LOOKUP_MAP.end();
        if (local_38 != local_48 == '\0') {
            uVar3 = 0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            uVar3 = *(uint64_t*)(lVar2 + 8);
        }
        return uVar3;
    }

} // namespace jag::game
