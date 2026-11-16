// libs/game/runetek5/config/vartype/ScriptVarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ScriptVarType.h"

namespace jag::game {
    // 0x1039bb7f0
    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                     eastl::prime_rehash_policy, false, true, true>
        ScriptVarType::LOOKUP_MAP;

    // 0x1039bb828
    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                     eastl::prime_rehash_policy, false, true, true>
        ScriptVarType::CHAR_LOOKUP_MAP;

    // 0x1039bb860
    int64_t ScriptVarType::INT;

    // 0x1039bb868
    int64_t ScriptVarType::BOOLEAN;

    // 0x1039bb870
    int64_t ScriptVarType::QUEST;

    // 0x1039bb878
    int64_t ScriptVarType::QUESTHELP;

    // 0x1039bb880
    int64_t ScriptVarType::CURSOR;

    // 0x1039bb888
    int64_t ScriptVarType::SEQ;

    // 0x1039bb890
    int64_t ScriptVarType::COLOUR;

    // 0x1039bb898
    int64_t ScriptVarType::LOC_SHAPE;

    // 0x1039bb8a0
    int64_t ScriptVarType::COMPONENT;

    // 0x1039bb8a8
    int64_t ScriptVarType::IDKIT;

    // 0x1039bb8b0
    int64_t ScriptVarType::MIDI;

    // 0x1039bb8b8
    int64_t ScriptVarType::NPC_MODE;

    // 0x1039bb8c0
    int64_t ScriptVarType::SYNTH;

    // 0x1039bb8c8
    int64_t ScriptVarType::AREA;

    // 0x1039bb8d0
    int64_t ScriptVarType::STAT;

    // 0x1039bb8d8
    int64_t ScriptVarType::NPC_STAT;

    // 0x1039bb8e0
    int64_t ScriptVarType::WRITEINV;

    // 0x1039bb8e8
    int64_t ScriptVarType::MESH;

    // 0x1039bb8f0
    int64_t ScriptVarType::MAPAREA;

    // 0x1039bb8f8
    int64_t ScriptVarType::COORDGRID;

    // 0x1039bb900
    int64_t ScriptVarType::GRAPHIC;

    // 0x1039bb908
    int64_t ScriptVarType::CHATPHRASE;

    // 0x1039bb910
    int64_t ScriptVarType::FONTMETRICS;

    // 0x1039bb918
    int64_t ScriptVarType::ENUM;

    // 0x1039bb920
    int64_t ScriptVarType::JINGLE;

    // 0x1039bb928
    int64_t ScriptVarType::CHATCAT;

    // 0x1039bb930
    int64_t ScriptVarType::LOC;

    // 0x1039bb938
    int64_t ScriptVarType::MODEL;

    // 0x1039bb940
    int64_t ScriptVarType::NPC;

    // 0x1039bb948
    int64_t ScriptVarType::OBJ;

    // 0x1039bb950
    int64_t ScriptVarType::PLAYER_UID;

    // 0x1039bb958
    int64_t ScriptVarType::STRING;

    // 0x1039bb960
    int64_t ScriptVarType::SPOTANIM;

    // 0x1039bb968
    int64_t ScriptVarType::NPC_UID;

    // 0x1039bb970
    int64_t ScriptVarType::INV;

    // 0x1039bb978
    int64_t ScriptVarType::TEXTURE;

    // 0x1039bb980
    int64_t ScriptVarType::CATEGORY;

    // 0x1039bb988
    int64_t ScriptVarType::CHAR;

    // 0x1039bb990
    int64_t ScriptVarType::LASER;

    // 0x1039bb998
    int64_t ScriptVarType::BAS;

    // 0x1039bb9a0
    int64_t ScriptVarType::COLLISION_GEOMETRY;

    // 0x1039bb9a8
    int64_t ScriptVarType::PHYSICS_MODEL;

    // 0x1039bb9b0
    int64_t ScriptVarType::PHYSICS_CONTROL_MODIFIER;

    // 0x1039bb9b8
    int64_t ScriptVarType::CLANHASH;

    // 0x1039bb9c0
    int64_t ScriptVarType::COORDFINE;

    // 0x1039bb9c8
    int64_t ScriptVarType::CUTSCENE;

    // 0x1039bb9d0
    int64_t ScriptVarType::ITEMCODE;

    // 0x1039bb9d8
    int64_t ScriptVarType::MAPSCENEICON;

    // 0x1039bb9e0
    int64_t ScriptVarType::CLANFORUMQFC;

    // 0x1039bb9e8
    int64_t ScriptVarType::VORBIS;

    // 0x1039bb9f0
    int64_t ScriptVarType::VERIFY_OBJECT;

    // 0x1039bb9f8
    int64_t ScriptVarType::MAPELEMENT;

    // 0x1039bba00
    int64_t ScriptVarType::CATEGORYTYPE;

    // 0x1039bba08
    int64_t ScriptVarType::SOCIAL_NETWORK;

    // 0x1039bba10
    int64_t ScriptVarType::HITMARK;

    // 0x1039bba18
    int64_t ScriptVarType::PACKAGE;

    // 0x1039bba20
    int64_t ScriptVarType::PARTICLE_EFFECTOR;

    // 0x1039bba28
    int64_t ScriptVarType::PARTICLE_EMITTER;

    // 0x1039bba30
    int64_t ScriptVarType::PLOGTYPE;

    // 0x1039bba38
    int64_t ScriptVarType::UNSIGNED_INT;

    // 0x1039bba40
    int64_t ScriptVarType::SKYBOX;

    // 0x1039bba48
    int64_t ScriptVarType::SKYDECOR;

    // 0x1039bba50
    int64_t ScriptVarType::HASH64;

    // 0x1039bba58
    int64_t ScriptVarType::INPUTTYPE;

    // 0x1039bba60
    int64_t ScriptVarType::STRUCT;

    // 0x1039bba68
    int64_t ScriptVarType::DBROW;

    // 0x1039bba70
    int64_t ScriptVarType::GWC_PLATFORM;

    // 0x1039bba78
    int64_t ScriptVarType::BUG_TEMPLATE;

    // 0x1039bba80
    int64_t ScriptVarType::BILLING_AUTH_FLAG;

    // 0x1039bba88
    int64_t ScriptVarType::ACCOUNT_FEATURE_FLAG;

    // 0x1039bba90
    int64_t ScriptVarType::INTERFACE;

    // 0x1039bba98
    int64_t ScriptVarType::TOPLEVELINTERFACE;

    // 0x1039bbaa0
    int64_t ScriptVarType::OVERLAYINTERFACE;

    // 0x1039bbaa8
    int64_t ScriptVarType::CLIENTINTERFACE;

    // 0x1039bbab0
    int64_t ScriptVarType::MOVESPEED;

    // 0x1039bbab8
    int64_t ScriptVarType::MATERIAL;

    // 0x1039bbac0
    int64_t ScriptVarType::SEQGROUP;

    // 0x1039bbac8
    int64_t ScriptVarType::TEMP_HISCORE;

    // 0x1039bbad0
    int64_t ScriptVarType::TEMP_HISCORE_LENGTH_TYPE;

    // 0x1039bbad8
    int64_t ScriptVarType::TEMP_HISCORE_DISPLAY_TYPE;

    // 0x1039bbae0
    int64_t ScriptVarType::TEMP_HISCORE_CONTRIBUTE_RESULT;

    // 0x1039bbae8
    int64_t ScriptVarType::AUDIOGROUP;

    // 0x1039bbaf0
    int64_t ScriptVarType::AUDIOMIXBUSS;

    // 0x1039bbaf8
    int64_t ScriptVarType::LONG;

    // 0x1039bbb00
    int64_t ScriptVarType::CRM_CHANNEL;

    // 0x1039bbb08
    int64_t ScriptVarType::HTTP_IMAGE;

    // 0x1039bbb10
    int64_t ScriptVarType::POP_UP_DISPLAY_BEHAVIOUR;

    // 0x1039bbb18
    int64_t ScriptVarType::POLL;

    // 0x1039bbb20
    int64_t ScriptVarType::POINTLIGHT;

    // 0x1039bbb28
    int64_t ScriptVarType::PLAYER_GROUP;

    // 0x1039bbb30
    int64_t ScriptVarType::PLAYER_GROUP_STATUS;

    // 0x1039bbb38
    int64_t ScriptVarType::PLAYER_GROUP_INVITE_RESULT;

    // 0x1039bbb40
    int64_t ScriptVarType::PLAYER_GROUP_MODIFY_RESULT;

    // 0x1039bbb48
    int64_t ScriptVarType::PLAYER_GROUP_JOIN_OR_CREATE_RESULT;

    // 0x1039bbb50
    int64_t ScriptVarType::PLAYER_GROUP_AFFINITY_MODIFY_RESULT;

    // 0x1039bbb58
    int64_t ScriptVarType::PLAYER_GROUP_DELTA_TYPE;

    // 0x1039bbb60
    int64_t ScriptVarType::CLIENT_TYPE;

    // 0x1039bbb68
    int64_t ScriptVarType::TELEMETRY_INTERVAL;

    // 0x1039bbb70
    int64_t ScriptVarType::WORLD_AREA;

    // 0x1039bbb78
    int64_t ScriptVarType::DBTABLE;

    // 0x1039bbb80
    int64_t ScriptVarType::ACHIEVEMENT;

    // 0x1039bbb88
    int64_t ScriptVarType::STYLESHEET;

    // 0x1039bbb90
    int64_t ScriptVarType::UI_ANIM_CURVE;

    // 0x1039bbb98
    int64_t ScriptVarType::UI_ANIM;

    // 0x1039bbba0
    int64_t ScriptVarType::ANIM_STATE_MACHINE;

    // 0x1039bbba8
    int64_t ScriptVarType::CUTSCENE2D;

    // 0x1039bbbb0
    int64_t ScriptVarType::VAR_INT;

    // 0x1039bbbb8
    int64_t ScriptVarType::VAR_LONG;

    // 0x1039bbbc0
    int64_t ScriptVarType::VAR_STRING;

    // 0x1000b9950: ScriptVarType::GetDefaultValue() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100223850: ScriptVarType::~ScriptVarType() has the same machine code as oldscape::ScriptVarType::~ScriptVarType()

    // 0x1004cea60
    void ScriptVarType::Initialise() {
        basic_string<char, BucketAllocatorEASTL> abStackY_e8[128];
        CoordFine in_stack_ffffffffffffff98;
        uint8_t local_50[24];

        ScriptVarType* pSVar2 = (ScriptVarType*)operator new(48);
        BaseVarType* pBVar1 = BaseVarType::INTEGER;
        VarValue local_38(0);
        ScriptVarType(pSVar2, 0, 'i', pBVar1, &local_38);
        INT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(0);
        ScriptVarType(pSVar2, 1, '1', pBVar1, &local_38);
        BOOLEAN = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 3, ':', pBVar1, &local_38);
        QUEST = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 4, ';', pBVar1, &local_38);
        QUESTHELP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 5, '@', pBVar1, &local_38);
        CURSOR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 6, 'A', pBVar1, &local_38);
        SEQ = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 7, 'C', pBVar1, &local_38);
        COLOUR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 8, 'H', pBVar1, &local_38);
        LOC_SHAPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 9, 'I', pBVar1, &local_38);
        COMPONENT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 10, 'K', pBVar1, &local_38);
        IDKIT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 11, 'M', pBVar1, &local_38);
        MIDI = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 12, 'N', pBVar1, &local_38);
        NPC_MODE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 14, 'P', pBVar1, &local_38);
        SYNTH = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 16, 'R', pBVar1, &local_38);
        AREA = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 17, 'S', pBVar1, &local_38);
        STAT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 18, 'T', pBVar1, &local_38);
        NPC_STAT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 19, 'V', pBVar1, &local_38);
        WRITEINV = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 20, '^', pBVar1, &local_38);
        MESH = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 21, '`', pBVar1, &local_38);
        MAPAREA = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 22, 'c', pBVar1, &local_38);
        COORDGRID = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 23, 'd', pBVar1, &local_38);
        GRAPHIC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 24, 'e', pBVar1, &local_38);
        CHATPHRASE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 25, 'f', pBVar1, &local_38);
        FONTMETRICS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 26, 'g', pBVar1, &local_38);
        ENUM = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 28, 'j', pBVar1, &local_38);
        JINGLE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 29, 'k', pBVar1, &local_38);
        CHATCAT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 30, 'l', pBVar1, &local_38);
        LOC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 31, 'm', pBVar1, &local_38);
        MODEL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 32, 'n', pBVar1, &local_38);
        NPC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 33, 'o', pBVar1, &local_38);
        OBJ = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 34, 'p', pBVar1, &local_38);
        PLAYER_UID = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::STRING;
        ((local_50 + 16))->destruct<oldscape::highlight::NpcUID*>();
        new (abStackY_e8 + 128) eastl::basic_string<char, BucketAllocatorEASTL>("", (local_50 + 16));
        new (&local_38) VarValue((abStackY_e8 + 128));
        ScriptVarType(pSVar2, 36, 's', pBVar1, &local_38);
        STRING = pSVar2;
        (abStackY_e8 + 128)->~basic_string();
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 37, 't', pBVar1, &local_38);
        SPOTANIM = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 38, 'u', pBVar1, &local_38);
        NPC_UID = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 39, 'v', pBVar1, &local_38);
        INV = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 40, 'x', pBVar1, &local_38);
        TEXTURE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 41, 'y', pBVar1, &local_38);
        CATEGORY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 42, 'z', pBVar1, &local_38);
        CHAR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 43, '|', pBVar1, &local_38);
        LASER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 44, 128, pBVar1, &local_38);
        BAS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 46, 135, pBVar1, &local_38);
        COLLISION_GEOMETRY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 47, 137, pBVar1, &local_38);
        PHYSICS_MODEL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 48, 138, pBVar1, &local_38);
        PHYSICS_CONTROL_MODIFIER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::LONG;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 49, 140, pBVar1, &local_38);
        CLANHASH = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::COORDFINE;
        new (local_50) CoordFine(-1, 0.0, 0.0, 0.0);
        local_38 = VarValue(in_stack_ffffffffffffff98);
        ScriptVarType(pSVar2, 50, 142, pBVar1, &local_38);
        COORDFINE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 51, 154, pBVar1, &local_38);
        CUTSCENE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 53, 161, pBVar1, &local_38);
        ITEMCODE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 55, 163, pBVar1, &local_38);
        MAPSCENEICON = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::LONG;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 56, 167, pBVar1, &local_38);
        CLANFORUMQFC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 57, 171, pBVar1, &local_38);
        VORBIS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 58, 174, pBVar1, &local_38);
        VERIFY_OBJECT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 59, 181, pBVar1, &local_38);
        MAPELEMENT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 60, 182, pBVar1, &local_38);
        CATEGORYTYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 61, 198, pBVar1, &local_38);
        SOCIAL_NETWORK = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 62, 215, pBVar1, &local_38);
        HITMARK = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 63, 222, pBVar1, &local_38);
        PACKAGE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 64, 225, pBVar1, &local_38);
        PARTICLE_EFFECTOR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 66, 233, pBVar1, &local_38);
        PARTICLE_EMITTER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 67, 237, pBVar1, &local_38);
        PLOGTYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 68, 238, pBVar1, &local_38);
        UNSIGNED_INT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 69, 243, pBVar1, &local_38);
        SKYBOX = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 70, 250, pBVar1, &local_38);
        SKYDECOR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::LONG;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 71, 251, pBVar1, &local_38);
        HASH64 = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 72, 206, pBVar1, &local_38);
        INPUTTYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 73, 'J', pBVar1, &local_38);
        STRUCT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 74, 208, pBVar1, &local_38);
        DBROW = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 89, 242, pBVar1, &local_38);
        GWC_PLATFORM = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 94, 234, pBVar1, &local_38);
        BUG_TEMPLATE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 95, 240, pBVar1, &local_38);
        BILLING_AUTH_FLAG = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 96, 229, pBVar1, &local_38);
        ACCOUNT_FEATURE_FLAG = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 97, 'a', pBVar1, &local_38);
        INTERFACE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 98, 'F', pBVar1, &local_38);
        TOPLEVELINTERFACE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 99, 'L', pBVar1, &local_38);
        OVERLAYINTERFACE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 100, 169, pBVar1, &local_38);
        CLIENTINTERFACE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 101, 221, pBVar1, &local_38);
        MOVESPEED = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 102, 172, pBVar1, &local_38);
        MATERIAL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 103, 248, pBVar1, &local_38);
        SEQGROUP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 104, 228, pBVar1, &local_38);
        TEMP_HISCORE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 105, 227, pBVar1, &local_38);
        TEMP_HISCORE_LENGTH_TYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 106, 226, pBVar1, &local_38);
        TEMP_HISCORE_DISPLAY_TYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 107, 224, pBVar1, &local_38);
        TEMP_HISCORE_CONTRIBUTE_RESULT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 108, 192, pBVar1, &local_38);
        AUDIOGROUP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 109, 210, pBVar1, &local_38);
        AUDIOMIXBUSS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::LONG;
        local_38 = VarValue(0);
        ScriptVarType(pSVar2, 110, 207, pBVar1, &local_38);
        LONG = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 111, 204, pBVar1, &local_38);
        CRM_CHANNEL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 112, 201, pBVar1, &local_38);
        HTTP_IMAGE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 113, 202, pBVar1, &local_38);
        POP_UP_DISPLAY_BEHAVIOUR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 114, 247, pBVar1, &local_38);
        POLL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 117, 149, pBVar1, &local_38);
        POINTLIGHT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::LONG;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 118, 194, pBVar1, &local_38);
        PLAYER_GROUP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 119, 195, pBVar1, &local_38);
        PLAYER_GROUP_STATUS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 120, 197, pBVar1, &local_38);
        PLAYER_GROUP_INVITE_RESULT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 121, 203, pBVar1, &local_38);
        PLAYER_GROUP_MODIFY_RESULT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 122, 205, pBVar1, &local_38);
        PLAYER_GROUP_JOIN_OR_CREATE_RESULT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 123, 213, pBVar1, &local_38);
        PLAYER_GROUP_AFFINITY_MODIFY_RESULT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 124, 178, pBVar1, &local_38);
        PLAYER_GROUP_DELTA_TYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 125, 170, pBVar1, &local_38);
        CLIENT_TYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(0);
        ScriptVarType(pSVar2, 126, '?', pBVar1, &local_38);
        TELEMETRY_INTERVAL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 127, '?', pBVar1, &local_38);
        WORLD_AREA = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 129, 216, pBVar1, &local_38);
        DBTABLE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 131, 152, pBVar1, &local_38);
        ACHIEVEMENT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 133, 153, pBVar1, &local_38);
        STYLESHEET = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 135, 132, pBVar1, &local_38);
        ANIM_STATE_MACHINE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 136, 150, pBVar1, &local_38);
        UI_ANIM_CURVE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 137, 139, pBVar1, &local_38);
        UI_ANIM = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 138, '/', pBVar1, &local_38);
        CUTSCENE2D = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 209, '-', pBVar1, &local_38);
        VAR_INT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 210, '=', pBVar1, &local_38);
        VAR_LONG = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = BaseVarType::INTEGER;
        local_38 = VarValue(-1);
        ScriptVarType(pSVar2, 211, '_', pBVar1, &local_38);
        VAR_STRING = pSVar2;
    }

    // 0x1004d1030
    void ScriptVarType::Destroy() {
        safe_delete<ScriptVarType const>((ScriptVarType**)&INT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&BOOLEAN);
        safe_delete<ScriptVarType const>((ScriptVarType**)&QUEST);
        safe_delete<ScriptVarType const>((ScriptVarType**)&QUESTHELP);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CURSOR);
        safe_delete<ScriptVarType const>((ScriptVarType**)&SEQ);
        safe_delete<ScriptVarType const>((ScriptVarType**)&COLOUR);
        safe_delete<ScriptVarType const>((ScriptVarType**)&LOC_SHAPE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&COMPONENT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&IDKIT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&MIDI);
        safe_delete<ScriptVarType const>((ScriptVarType**)&NPC_MODE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&SYNTH);
        safe_delete<ScriptVarType const>((ScriptVarType**)&AREA);
        safe_delete<ScriptVarType const>((ScriptVarType**)&STAT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&NPC_STAT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&WRITEINV);
        safe_delete<ScriptVarType const>((ScriptVarType**)&MESH);
        safe_delete<ScriptVarType const>((ScriptVarType**)&MAPAREA);
        safe_delete<ScriptVarType const>((ScriptVarType**)&COORDGRID);
        safe_delete<ScriptVarType const>((ScriptVarType**)&GRAPHIC);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CHATPHRASE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&FONTMETRICS);
        safe_delete<ScriptVarType const>((ScriptVarType**)&ENUM);
        safe_delete<ScriptVarType const>((ScriptVarType**)&JINGLE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CHATCAT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&LOC);
        safe_delete<ScriptVarType const>((ScriptVarType**)&MODEL);
        safe_delete<ScriptVarType const>((ScriptVarType**)&NPC);
        safe_delete<ScriptVarType const>((ScriptVarType**)&OBJ);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLAYER_UID);
        safe_delete<ScriptVarType const>((ScriptVarType**)&STRING);
        safe_delete<ScriptVarType const>((ScriptVarType**)&SPOTANIM);
        safe_delete<ScriptVarType const>((ScriptVarType**)&NPC_UID);
        safe_delete<ScriptVarType const>((ScriptVarType**)&INV);
        safe_delete<ScriptVarType const>((ScriptVarType**)&TEXTURE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CATEGORY);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CHAR);
        safe_delete<ScriptVarType const>((ScriptVarType**)&LASER);
        safe_delete<ScriptVarType const>((ScriptVarType**)&BAS);
        safe_delete<ScriptVarType const>((ScriptVarType**)&COLLISION_GEOMETRY);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PHYSICS_MODEL);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PHYSICS_CONTROL_MODIFIER);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CLANHASH);
        safe_delete<ScriptVarType const>((ScriptVarType**)&COORDFINE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CUTSCENE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&ITEMCODE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&MAPSCENEICON);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CLANFORUMQFC);
        safe_delete<ScriptVarType const>((ScriptVarType**)&VORBIS);
        safe_delete<ScriptVarType const>((ScriptVarType**)&VERIFY_OBJECT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&MAPELEMENT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CATEGORYTYPE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&SOCIAL_NETWORK);
        safe_delete<ScriptVarType const>((ScriptVarType**)&HITMARK);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PACKAGE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PARTICLE_EFFECTOR);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PARTICLE_EMITTER);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLOGTYPE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&UNSIGNED_INT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&SKYBOX);
        safe_delete<ScriptVarType const>((ScriptVarType**)&SKYDECOR);
        safe_delete<ScriptVarType const>((ScriptVarType**)&HASH64);
        safe_delete<ScriptVarType const>((ScriptVarType**)&INPUTTYPE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&STRUCT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&DBROW);
        safe_delete<ScriptVarType const>((ScriptVarType**)&GWC_PLATFORM);
        safe_delete<ScriptVarType const>((ScriptVarType**)&BUG_TEMPLATE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&BILLING_AUTH_FLAG);
        safe_delete<ScriptVarType const>((ScriptVarType**)&ACCOUNT_FEATURE_FLAG);
        safe_delete<ScriptVarType const>((ScriptVarType**)&INTERFACE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&TOPLEVELINTERFACE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&OVERLAYINTERFACE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CLIENTINTERFACE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&MOVESPEED);
        safe_delete<ScriptVarType const>((ScriptVarType**)&MATERIAL);
        safe_delete<ScriptVarType const>((ScriptVarType**)&SEQGROUP);
        safe_delete<ScriptVarType const>((ScriptVarType**)&TEMP_HISCORE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&TEMP_HISCORE_LENGTH_TYPE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&TEMP_HISCORE_DISPLAY_TYPE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&TEMP_HISCORE_CONTRIBUTE_RESULT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&AUDIOGROUP);
        safe_delete<ScriptVarType const>((ScriptVarType**)&AUDIOMIXBUSS);
        safe_delete<ScriptVarType const>((ScriptVarType**)&LONG);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CRM_CHANNEL);
        safe_delete<ScriptVarType const>((ScriptVarType**)&HTTP_IMAGE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&POP_UP_DISPLAY_BEHAVIOUR);
        safe_delete<ScriptVarType const>((ScriptVarType**)&POLL);
        safe_delete<ScriptVarType const>((ScriptVarType**)&POINTLIGHT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLAYER_GROUP);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLAYER_GROUP_STATUS);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLAYER_GROUP_INVITE_RESULT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLAYER_GROUP_MODIFY_RESULT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLAYER_GROUP_JOIN_OR_CREATE_RESULT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLAYER_GROUP_AFFINITY_MODIFY_RESULT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&PLAYER_GROUP_DELTA_TYPE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CLIENT_TYPE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&TELEMETRY_INTERVAL);
        safe_delete<ScriptVarType const>((ScriptVarType**)&WORLD_AREA);
        safe_delete<ScriptVarType const>((ScriptVarType**)&DBTABLE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&ACHIEVEMENT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&STYLESHEET);
        safe_delete<ScriptVarType const>((ScriptVarType**)&ANIM_STATE_MACHINE);
        safe_delete<ScriptVarType const>((ScriptVarType**)&CUTSCENE2D);
        safe_delete<ScriptVarType const>((ScriptVarType**)&VAR_INT);
        safe_delete<ScriptVarType const>((ScriptVarType**)&VAR_LONG);
        safe_delete<ScriptVarType const>((ScriptVarType**)&VAR_STRING);
    }

} // namespace jag::game
