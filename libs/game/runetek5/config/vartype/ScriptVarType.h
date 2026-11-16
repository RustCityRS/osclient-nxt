// libs/game/runetek5/config/vartype/ScriptVarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ScriptVarType {
    public:
        GetDefaultValue() const;
        ~ScriptVarType();
        void Initialise();
        ScriptVarType(unsigned int, unsigned char, BaseVarType const*, VarValue const&);
        void Destroy();
        GetByID(unsigned int);
        GetByChar(unsigned char);
        static /* 56 bytes */ LOOKUP_MAP;
        static /* 56 bytes */ CHAR_LOOKUP_MAP;
        static /* 8 bytes */ INT;
        static /* 8 bytes */ BOOLEAN;
        static /* 8 bytes */ QUEST;
        static /* 8 bytes */ QUESTHELP;
        static /* 8 bytes */ CURSOR;
        static /* 8 bytes */ SEQ;
        static /* 8 bytes */ COLOUR;
        static /* 8 bytes */ LOC_SHAPE;
        static /* 8 bytes */ COMPONENT;
        static /* 8 bytes */ IDKIT;
        static /* 8 bytes */ MIDI;
        static /* 8 bytes */ NPC_MODE;
        static /* 8 bytes */ SYNTH;
        static /* 8 bytes */ AREA;
        static /* 8 bytes */ STAT;
        static /* 8 bytes */ NPC_STAT;
        static /* 8 bytes */ WRITEINV;
        static /* 8 bytes */ MESH;
        static /* 8 bytes */ MAPAREA;
        static /* 8 bytes */ COORDGRID;
        static /* 8 bytes */ GRAPHIC;
        static /* 8 bytes */ CHATPHRASE;
        static /* 8 bytes */ FONTMETRICS;
        static /* 8 bytes */ ENUM;
        static /* 8 bytes */ JINGLE;
        static /* 8 bytes */ CHATCAT;
        static /* 8 bytes */ LOC;
        static /* 8 bytes */ MODEL;
        static /* 8 bytes */ NPC;
        static /* 8 bytes */ OBJ;
        static /* 8 bytes */ PLAYER_UID;
        static /* 8 bytes */ STRING;
        static /* 8 bytes */ SPOTANIM;
        static /* 8 bytes */ NPC_UID;
        static /* 8 bytes */ INV;
        static /* 8 bytes */ TEXTURE;
        static /* 8 bytes */ CATEGORY;
        static /* 8 bytes */ CHAR;
        static /* 8 bytes */ LASER;
        static /* 8 bytes */ BAS;
        static /* 8 bytes */ COLLISION_GEOMETRY;
        static /* 8 bytes */ PHYSICS_MODEL;
        static /* 8 bytes */ PHYSICS_CONTROL_MODIFIER;
        static /* 8 bytes */ CLANHASH;
        static /* 8 bytes */ COORDFINE;
        static /* 8 bytes */ CUTSCENE;
        static /* 8 bytes */ ITEMCODE;
        static /* 8 bytes */ MAPSCENEICON;
        static /* 8 bytes */ CLANFORUMQFC;
        static /* 8 bytes */ VORBIS;
        static /* 8 bytes */ VERIFY_OBJECT;
        static /* 8 bytes */ MAPELEMENT;
        static /* 8 bytes */ CATEGORYTYPE;
        static /* 8 bytes */ SOCIAL_NETWORK;
        static /* 8 bytes */ HITMARK;
        static /* 8 bytes */ PACKAGE;
        static /* 8 bytes */ PARTICLE_EFFECTOR;
        static /* 8 bytes */ PARTICLE_EMITTER;
        static /* 8 bytes */ PLOGTYPE;
        static /* 8 bytes */ UNSIGNED_INT;
        static /* 8 bytes */ SKYBOX;
        static /* 8 bytes */ SKYDECOR;
        static /* 8 bytes */ HASH64;
        static /* 8 bytes */ INPUTTYPE;
        static /* 8 bytes */ STRUCT;
        static /* 8 bytes */ DBROW;
        static /* 8 bytes */ GWC_PLATFORM;
        static /* 8 bytes */ BUG_TEMPLATE;
        static /* 8 bytes */ BILLING_AUTH_FLAG;
        static /* 8 bytes */ ACCOUNT_FEATURE_FLAG;
        static /* 8 bytes */ INTERFACE;
        static /* 8 bytes */ TOPLEVELINTERFACE;
        static /* 8 bytes */ OVERLAYINTERFACE;
        static /* 8 bytes */ CLIENTINTERFACE;
        static /* 8 bytes */ MOVESPEED;
        static /* 8 bytes */ MATERIAL;
        static /* 8 bytes */ SEQGROUP;
        static /* 8 bytes */ TEMP_HISCORE;
        static /* 8 bytes */ TEMP_HISCORE_LENGTH_TYPE;
        static /* 8 bytes */ TEMP_HISCORE_DISPLAY_TYPE;
        static /* 8 bytes */ TEMP_HISCORE_CONTRIBUTE_RESULT;
        static /* 8 bytes */ AUDIOGROUP;
        static /* 8 bytes */ AUDIOMIXBUSS;
        static /* 8 bytes */ LONG;
        static /* 8 bytes */ CRM_CHANNEL;
        static /* 8 bytes */ HTTP_IMAGE;
        static /* 8 bytes */ POP_UP_DISPLAY_BEHAVIOUR;
        static /* 8 bytes */ POLL;
        static /* 8 bytes */ POINTLIGHT;
        static /* 8 bytes */ PLAYER_GROUP;
        static /* 8 bytes */ PLAYER_GROUP_STATUS;
        static /* 8 bytes */ PLAYER_GROUP_INVITE_RESULT;
        static /* 8 bytes */ PLAYER_GROUP_MODIFY_RESULT;
        static /* 8 bytes */ PLAYER_GROUP_JOIN_OR_CREATE_RESULT;
        static /* 8 bytes */ PLAYER_GROUP_AFFINITY_MODIFY_RESULT;
        static /* 8 bytes */ PLAYER_GROUP_DELTA_TYPE;
        static /* 8 bytes */ CLIENT_TYPE;
        static /* 8 bytes */ TELEMETRY_INTERVAL;
        static /* 8 bytes */ WORLD_AREA;
        static /* 8 bytes */ DBTABLE;
        static /* 8 bytes */ ACHIEVEMENT;
        static /* 8 bytes */ STYLESHEET;
        static /* 8 bytes */ UI_ANIM_CURVE;
        static /* 8 bytes */ UI_ANIM;
        static /* 8 bytes */ ANIM_STATE_MACHINE;
        static /* 8 bytes */ CUTSCENE2D;
        static /* 8 bytes */ VAR_INT;
        static /* 8 bytes */ VAR_LONG;
        static /* 8 bytes */ VAR_STRING;

        // data members, from how the methods use this: 24 bytes
        uint field_0;  // offset 0
        uchar field_4; // offset 4
        char _unknown_5[3];
        BaseVarType* field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x1004d0ff0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ScriptVarType::ScriptVarType(unsigned int, unsigned char, BaseVarType const*, VarValue const&): jumps straight to the base-object constructor

    // 0x1004d1a30, 112 bytes, inline, placed by class name
    // ScriptVarType::GetByID(unsigned int)
    undefined8 ScriptVarType::GetByID(uint param_1) {
        long lVar2;
        undefined8 uVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[20];
        uint local_24;

        local_24 = param_1;
        eastl::hashtable<unsigned int, eastl::pair<unsigned int const, ScriptVarType*>, eastl::allocator,
                         eastl::use_first<eastl::pair<unsigned int const, ScriptVarType*>>,
                         eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uint*)
                                                                                                              local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            uVar3 = *(undefined8*)(lVar2 + 8);
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1004d2ee0, 192 bytes, base-object constructor, inline, placed by class name
    // ScriptVarType::ScriptVarType(unsigned int, unsigned char, BaseVarType const*, VarValue const&)
    void ScriptVarType::ScriptVarType(uint param_1, uchar param_2, BaseVarType* param_3, VarValue* param_4) {
        undefined1 uVar1;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        pair local_60[24];
        pair<unsigned int const, VarDomainType*> local_48[16];
        undefined4 local_38[2];
        undefined8 local_30;
        ScriptVarType* local_28;
        uchar local_19;

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        local_19 = param_2;
        new (&field_16, param_4) VarValue();
        local_28 = this;
        local_38[0] = eastl::make_pair<unsigned int const&, ScriptVarType*>(&field_0, &local_28);
        local_30 = extraout_RDX;
        eastl::pair<unsigned int const, VarDomainType*>::pair<unsigned int, VarDomainType*, void>(local_48,
                                                                                                  (pair*)local_38);
        eastl::hashtable<unsigned int, eastl::pair<unsigned int const, ScriptVarType*>, eastl::allocator,
                         eastl::use_first<eastl::pair<unsigned int const, ScriptVarType*>>,
                         eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::insert(local_60);
        local_28 = this;
        uVar1 = eastl::make_pair<unsigned char&, ScriptVarType*>(&local_19, &local_28);
        local_38[0] = CONCAT31(local_38[0]._1_3_, uVar1);
        local_30 = extraout_RDX_00;
        eastl::pair<unsigned char const, unsigned long>::pair<unsigned char, unsigned long, void>(
            (pair<unsigned char const, unsigned long>*)local_48, (pair*)local_38);
        eastl::hashtable<unsigned char, eastl::pair<unsigned char const, ScriptVarType*>, eastl::allocator,
                         eastl::use_first<eastl::pair<unsigned char const, ScriptVarType*>>,
                         eastl::equal_to<unsigned char>, eastl::hash<unsigned char>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::insert(local_60);
    }

    // 0x1004f3860, 112 bytes, inline, placed by class name
    // ScriptVarType::GetByChar(unsigned char)
    undefined8 ScriptVarType::GetByChar(uchar param_1) {
        long lVar2;
        undefined8 uVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[23];
        uchar local_21;

        local_21 = param_1;
        eastl::hashtable<unsigned char, eastl::pair<unsigned char const, ScriptVarType*>, eastl::allocator,
                         eastl::use_first<eastl::pair<unsigned char const, ScriptVarType*>>,
                         eastl::equal_to<unsigned char>, eastl::hash<unsigned char>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uchar*)
                                                                                                              local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            uVar3 = *(undefined8*)(lVar2 + 8);
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

} // namespace jag::game
