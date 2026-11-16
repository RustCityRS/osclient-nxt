// libs/oldscape/rs2lib/script/var/ScriptVarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ScriptVarType.h"

namespace jag::oldscape {
    // 0x100fd5738
    eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                     eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                     eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                     eastl::prime_rehash_policy, false, true, true>
        ScriptVarType::LOOKUP_MAP;

    // 0x100fd5770
    int64_t ScriptVarType::INT;

    // 0x100fd5778
    int64_t ScriptVarType::BOOLEAN;

    // 0x100fd5780
    int64_t ScriptVarType::HASH32;

    // 0x100fd5788
    int64_t ScriptVarType::QUEST;

    // 0x100fd5790
    int64_t ScriptVarType::QUESTHELP;

    // 0x100fd5798
    int64_t ScriptVarType::CURSOR;

    // 0x100fd57a0
    int64_t ScriptVarType::SEQ;

    // 0x100fd57a8
    int64_t ScriptVarType::COLOUR;

    // 0x100fd57b0
    int64_t ScriptVarType::LOC_SHAPE;

    // 0x100fd57b8
    int64_t ScriptVarType::COMPONENT;

    // 0x100fd57c0
    int64_t ScriptVarType::IDKIT;

    // 0x100fd57c8
    int64_t ScriptVarType::MIDI;

    // 0x100fd57d0
    int64_t ScriptVarType::NPC_MODE;

    // 0x100fd57d8
    int64_t ScriptVarType::NAMEDOBJ;

    // 0x100fd57e0
    int64_t ScriptVarType::SYNTH;

    // 0x100fd57e8
    int64_t ScriptVarType::AI_QUEUE;

    // 0x100fd57f0
    int64_t ScriptVarType::AREA;

    // 0x100fd57f8
    int64_t ScriptVarType::STAT;

    // 0x100fd5800
    int64_t ScriptVarType::NPC_STAT;

    // 0x100fd5808
    int64_t ScriptVarType::WRITEINV;

    // 0x100fd5810
    int64_t ScriptVarType::MESH;

    // 0x100fd5818
    int64_t ScriptVarType::MAPAREA;

    // 0x100fd5820
    int64_t ScriptVarType::COORDGRID;

    // 0x100fd5828
    int64_t ScriptVarType::GRAPHIC;

    // 0x100fd5830
    int64_t ScriptVarType::CHATPHRASE;

    // 0x100fd5838
    int64_t ScriptVarType::FONTMETRICS;

    // 0x100fd5840
    int64_t ScriptVarType::ENUM;

    // 0x100fd5848
    int64_t ScriptVarType::HUNT;

    // 0x100fd5850
    int64_t ScriptVarType::JINGLE;

    // 0x100fd5858
    int64_t ScriptVarType::CHATCAT;

    // 0x100fd5860
    int64_t ScriptVarType::LOC;

    // 0x100fd5868
    int64_t ScriptVarType::MODEL;

    // 0x100fd5870
    int64_t ScriptVarType::NPC;

    // 0x100fd5878
    int64_t ScriptVarType::OBJ;

    // 0x100fd5880
    int64_t ScriptVarType::PLAYER_UID;

    // 0x100fd5888
    int64_t ScriptVarType::REGION_UID;

    // 0x100fd5890
    int64_t ScriptVarType::STRING;

    // 0x100fd5898
    int64_t ScriptVarType::SPOTANIM;

    // 0x100fd58a0
    int64_t ScriptVarType::NPC_UID;

    // 0x100fd58a8
    int64_t ScriptVarType::INV;

    // 0x100fd58b0
    int64_t ScriptVarType::TEXTURE;

    // 0x100fd58b8
    int64_t ScriptVarType::CATEGORY;

    // 0x100fd58c0
    int64_t ScriptVarType::CHAR;

    // 0x100fd58c8
    int64_t ScriptVarType::LASER;

    // 0x100fd58d0
    int64_t ScriptVarType::BAS;

    // 0x100fd58d8
    int64_t ScriptVarType::CONTROLLER;

    // 0x100fd58e0
    int64_t ScriptVarType::COLLISION_GEOMETRY;

    // 0x100fd58e8
    int64_t ScriptVarType::PHYSICS_MODEL;

    // 0x100fd58f0
    int64_t ScriptVarType::PHYSICS_CONTROL_MODIFIER;

    // 0x100fd58f8
    int64_t ScriptVarType::CLANHASH;

    // 0x100fd5900
    int64_t ScriptVarType::CUTSCENE;

    // 0x100fd5908
    int64_t ScriptVarType::ITEMCODE;

    // 0x100fd5910
    int64_t ScriptVarType::PVPKILLS;

    // 0x100fd5918
    int64_t ScriptVarType::MAPSCENEICON;

    // 0x100fd5920
    int64_t ScriptVarType::CLANFORUMQFC;

    // 0x100fd5928
    int64_t ScriptVarType::VORBIS;

    // 0x100fd5930
    int64_t ScriptVarType::VERIFY_OBJECT;

    // 0x100fd5938
    int64_t ScriptVarType::MAPELEMENT;

    // 0x100fd5940
    int64_t ScriptVarType::CATEGORYTYPE;

    // 0x100fd5948
    int64_t ScriptVarType::SOCIAL_NETWORK;

    // 0x100fd5950
    int64_t ScriptVarType::HITMARK;

    // 0x100fd5958
    int64_t ScriptVarType::PACKAGE;

    // 0x100fd5960
    int64_t ScriptVarType::PARTICLE_EFFECTOR;

    // 0x100fd5968
    int64_t ScriptVarType::CONTROLLER_UID;

    // 0x100fd5970
    int64_t ScriptVarType::PARTICLE_EMITTER;

    // 0x100fd5978
    int64_t ScriptVarType::PLOGTYPE;

    // 0x100fd5980
    int64_t ScriptVarType::UNSIGNED_INT;

    // 0x100fd5988
    int64_t ScriptVarType::SKYBOX;

    // 0x100fd5990
    int64_t ScriptVarType::SKYDECOR;

    // 0x100fd5998
    int64_t ScriptVarType::HASH64;

    // 0x100fd59a0
    int64_t ScriptVarType::INPUTTYPE;

    // 0x100fd59a8
    int64_t ScriptVarType::STRUCT;

    // 0x100fd59b0
    int64_t ScriptVarType::DBROW;

    // 0x100fd59b8
    int64_t ScriptVarType::STORABLELABEL;

    // 0x100fd59c0
    int64_t ScriptVarType::STORABLEPROC;

    // 0x100fd59c8
    int64_t ScriptVarType::GAMELOGEVENT;

    // 0x100fd59d0
    int64_t ScriptVarType::ANIMATIONCLIP;

    // 0x100fd59d8
    int64_t ScriptVarType::SKELETON;

    // 0x100fd59e0
    int64_t ScriptVarType::REGIONVISIBILITY;

    // 0x100fd59e8
    int64_t ScriptVarType::FMODHANDLE;

    // 0x100fd59f0
    int64_t ScriptVarType::REGION_ALLOWLOGIN;

    // 0x100fd59f8
    int64_t ScriptVarType::REGION_INFO;

    // 0x100fd5a00
    int64_t ScriptVarType::REGION_INFO_FAILURE;

    // 0x100fd5a08
    int64_t ScriptVarType::SERVER_ACCOUNT_CREATION_STEP;

    // 0x100fd5a10
    int64_t ScriptVarType::CLIENT_ACCOUNT_CREATION_STEP;

    // 0x100fd5a18
    int64_t ScriptVarType::LOBBY_ACCOUNT_CREATION_STEP;

    // 0x100fd5a20
    int64_t ScriptVarType::GWC_PLATFORM;

    // 0x100fd5a28
    int64_t ScriptVarType::CURRENCY;

    // 0x100fd5a30
    int64_t ScriptVarType::KEYBOARD_KEY;

    // 0x100fd5a38
    int64_t ScriptVarType::MOUSEEVENT;

    // 0x100fd5a40
    int64_t ScriptVarType::HEADBAR;

    // 0x100fd5a48
    int64_t ScriptVarType::BUG_TEMPLATE;

    // 0x100fd5a50
    int64_t ScriptVarType::BILLING_AUTH_FLAG;

    // 0x100fd5a58
    int64_t ScriptVarType::ACCOUNT_FEATURE_FLAG;

    // 0x100fd5a60
    int64_t ScriptVarType::INTERFACE;

    // 0x100fd5a68
    int64_t ScriptVarType::TOPLEVELINTERFACE;

    // 0x100fd5a70
    int64_t ScriptVarType::OVERLAYINTERFACE;

    // 0x100fd5a78
    int64_t ScriptVarType::CLIENTINTERFACE;

    // 0x100fd5a80
    int64_t ScriptVarType::MOVESPEED;

    // 0x100fd5a88
    int64_t ScriptVarType::MATERIAL;

    // 0x100fd5a90
    int64_t ScriptVarType::SEQGROUP;

    // 0x100fd5a98
    int64_t ScriptVarType::TEMP_HISCORE;

    // 0x100fd5aa0
    int64_t ScriptVarType::TEMP_HISCORE_LENGTH_TYPE;

    // 0x100fd5aa8
    int64_t ScriptVarType::TEMP_HISCORE_DISPLAY_TYPE;

    // 0x100fd5ab0
    int64_t ScriptVarType::TEMP_HISCORE_CONTRIBUTE_RESULT;

    // 0x100fd5ab8
    int64_t ScriptVarType::AUDIOGROUP;

    // 0x100fd5ac0
    int64_t ScriptVarType::AUDIOMIXBUSS;

    // 0x100fd5ac8
    int64_t ScriptVarType::LONG;

    // 0x100fd5ad0
    int64_t ScriptVarType::CRM_CHANNEL;

    // 0x100fd5ad8
    int64_t ScriptVarType::HTTP_IMAGE;

    // 0x100fd5ae0
    int64_t ScriptVarType::POP_UP_DISPLAY_BEHAVIOUR;

    // 0x100fd5ae8
    int64_t ScriptVarType::POLL;

    // 0x100fd5af0
    int64_t ScriptVarType::MTXN_PACKAGE;

    // 0x100fd5af8
    int64_t ScriptVarType::MTXN_PRICE_POINT;

    // 0x100fd5b00
    int64_t ScriptVarType::ENTITYOVERLAY;

    // 0x100fd5b08
    int64_t ScriptVarType::DBTABLE;

    // 0x100fd5b10
    int64_t ScriptVarType::COMPONENTARRAY;

    // 0x100fd5b18
    int64_t ScriptVarType::INTARRAY;

    // 0x100fd5b20
    int64_t ScriptVarType::LABEL;

    // 0x100fd5b28
    int64_t ScriptVarType::QUEUE;

    // 0x100fd5b30
    int64_t ScriptVarType::TIMER;

    // 0x100fd5b38
    int64_t ScriptVarType::WEAKQUEUE;

    // 0x100fd5b40
    int64_t ScriptVarType::SOFTTIMER;

    // 0x100fd5b48
    int64_t ScriptVarType::OBJVAR;

    // 0x100fd5b50
    int64_t ScriptVarType::WALKTRIGGER;

    // 0x100fd5b58
    int64_t ScriptVarType::VARP;

    // 0x10000b2a0: ScriptVarType::GetBaseVarType() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x100207870
    ScriptVarType::ScriptVarType(unsigned int arg1, const game::BaseVarType* baseVarType, game::VarValue varValue)
        : m_iD(arg1), field_8(baseVarType), field_16(varValue) {
        uint64_t extraout_RDX;
        pair<unsigned int const, game::VarDomainType*> local_48[16];
        uint32_t local_38[2];

        local_38[0] = eastl::make_pair<unsigned int const&, game::ScriptVarType*>(*this, (Material*)this);
        uint64_t local_30 = extraout_RDX;
        local_48->pair<unsigned int, game::VarDomainType*, void>(*local_38);
        auto local_60 = LOOKUP_MAP.insert(*local_48);
    }

    // 0x100207980
    void ScriptVarType::Initialise() {
        eastl local_30;

        ScriptVarType* pSVar2 = (ScriptVarType*)operator new(48);
        BaseVarType* pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_1008(0);
        ScriptVarType(pSVar2, 0, pBVar1, &local_1008);
        INT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_fe8(0);
        ScriptVarType(pSVar2, 1, pBVar1, &local_fe8);
        BOOLEAN = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_fc8(-1);
        ScriptVarType(pSVar2, 2, pBVar1, &local_fc8);
        HASH32 = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_fa8(-1);
        ScriptVarType(pSVar2, 3, pBVar1, &local_fa8);
        QUEST = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_f88(-1);
        ScriptVarType(pSVar2, 4, pBVar1, &local_f88);
        QUESTHELP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_f68(-1);
        ScriptVarType(pSVar2, 5, pBVar1, &local_f68);
        CURSOR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_f48(-1);
        ScriptVarType(pSVar2, 6, pBVar1, &local_f48);
        SEQ = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_f28(-1);
        ScriptVarType(pSVar2, 7, pBVar1, &local_f28);
        COLOUR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_f08(-1);
        ScriptVarType(pSVar2, 8, pBVar1, &local_f08);
        LOC_SHAPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_ee8(-1);
        ScriptVarType(pSVar2, 9, pBVar1, &local_ee8);
        COMPONENT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_ec8(-1);
        ScriptVarType(pSVar2, 10, pBVar1, &local_ec8);
        IDKIT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_ea8(-1);
        ScriptVarType(pSVar2, 11, pBVar1, &local_ea8);
        MIDI = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_e88(-1);
        ScriptVarType(pSVar2, 12, pBVar1, &local_e88);
        NPC_MODE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_e68(-1);
        ScriptVarType(pSVar2, 13, pBVar1, &local_e68);
        NAMEDOBJ = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_e48(-1);
        ScriptVarType(pSVar2, 14, pBVar1, &local_e48);
        SYNTH = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_e28(-1);
        ScriptVarType(pSVar2, 15, pBVar1, &local_e28);
        AI_QUEUE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_e08(-1);
        ScriptVarType(pSVar2, 16, pBVar1, &local_e08);
        AREA = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_de8(-1);
        ScriptVarType(pSVar2, 17, pBVar1, &local_de8);
        STAT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_dc8(-1);
        ScriptVarType(pSVar2, 18, pBVar1, &local_dc8);
        NPC_STAT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_da8(-1);
        ScriptVarType(pSVar2, 19, pBVar1, &local_da8);
        WRITEINV = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_d88(-1);
        ScriptVarType(pSVar2, 20, pBVar1, &local_d88);
        MESH = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_d68(-1);
        ScriptVarType(pSVar2, 21, pBVar1, &local_d68);
        MAPAREA = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_d48(-1);
        ScriptVarType(pSVar2, 22, pBVar1, &local_d48);
        COORDGRID = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_d28(-1);
        ScriptVarType(pSVar2, 23, pBVar1, &local_d28);
        GRAPHIC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_d08(-1);
        ScriptVarType(pSVar2, 24, pBVar1, &local_d08);
        CHATPHRASE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_ce8(-1);
        ScriptVarType(pSVar2, 25, pBVar1, &local_ce8);
        FONTMETRICS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_cc8(-1);
        ScriptVarType(pSVar2, 26, pBVar1, &local_cc8);
        ENUM = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_ca8(-1);
        ScriptVarType(pSVar2, 27, pBVar1, &local_ca8);
        HUNT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_c88(-1);
        ScriptVarType(pSVar2, 28, pBVar1, &local_c88);
        JINGLE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_c68(-1);
        ScriptVarType(pSVar2, 29, pBVar1, &local_c68);
        CHATCAT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_c48(-1);
        ScriptVarType(pSVar2, 30, pBVar1, &local_c48);
        LOC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_c28(-1);
        ScriptVarType(pSVar2, 31, pBVar1, &local_c28);
        MODEL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_c08(-1);
        ScriptVarType(pSVar2, 32, pBVar1, &local_c08);
        NPC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_be8(-1);
        ScriptVarType(pSVar2, 33, pBVar1, &local_be8);
        OBJ = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_bc8(-1);
        ScriptVarType(pSVar2, 34, pBVar1, &local_bc8);
        PLAYER_UID = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::LONG;
        VarValue local_ba8(-1);
        ScriptVarType(pSVar2, 35, pBVar1, &local_ba8);
        REGION_UID = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::STRING;
        eastl::destruct<highlight::NpcUID*>(&local_30);
        basic_string<char, BucketAllocatorEASTL> local_48("", &local_30);
        VarValue local_b88(&local_48);
        ScriptVarType(pSVar2, 36, pBVar1, &local_b88);
        STRING = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_b68(-1);
        ScriptVarType(pSVar2, 37, pBVar1, &local_b68);
        SPOTANIM = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_b48(-1);
        ScriptVarType(pSVar2, 38, pBVar1, &local_b48);
        NPC_UID = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_b28(-1);
        ScriptVarType(pSVar2, 39, pBVar1, &local_b28);
        INV = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_b08(-1);
        ScriptVarType(pSVar2, 40, pBVar1, &local_b08);
        TEXTURE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_ae8(-1);
        ScriptVarType(pSVar2, 41, pBVar1, &local_ae8);
        CATEGORY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_ac8(-1);
        ScriptVarType(pSVar2, 42, pBVar1, &local_ac8);
        CHAR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_aa8(-1);
        ScriptVarType(pSVar2, 43, pBVar1, &local_aa8);
        LASER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_a88(-1);
        ScriptVarType(pSVar2, 44, pBVar1, &local_a88);
        BAS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_a68(-1);
        ScriptVarType(pSVar2, 45, pBVar1, &local_a68);
        CONTROLLER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_a48(-1);
        ScriptVarType(pSVar2, 46, pBVar1, &local_a48);
        COLLISION_GEOMETRY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_a28(-1);
        ScriptVarType(pSVar2, 47, pBVar1, &local_a28);
        PHYSICS_MODEL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_a08(-1);
        ScriptVarType(pSVar2, 48, pBVar1, &local_a08);
        PHYSICS_CONTROL_MODIFIER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::LONG;
        VarValue local_9e8(-1);
        ScriptVarType(pSVar2, 49, pBVar1, &local_9e8);
        CLANHASH = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_9c8(-1);
        ScriptVarType(pSVar2, 51, pBVar1, &local_9c8);
        CUTSCENE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_9a8(-1);
        ScriptVarType(pSVar2, 53, pBVar1, &local_9a8);
        ITEMCODE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_988(-1);
        ScriptVarType(pSVar2, 54, pBVar1, &local_988);
        PVPKILLS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_968(-1);
        ScriptVarType(pSVar2, 55, pBVar1, &local_968);
        MAPSCENEICON = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::LONG;
        VarValue local_948(-1);
        ScriptVarType(pSVar2, 56, pBVar1, &local_948);
        CLANFORUMQFC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_928(-1);
        ScriptVarType(pSVar2, 57, pBVar1, &local_928);
        VORBIS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_908(-1);
        ScriptVarType(pSVar2, 58, pBVar1, &local_908);
        VERIFY_OBJECT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_8e8(-1);
        ScriptVarType(pSVar2, 59, pBVar1, &local_8e8);
        MAPELEMENT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_8c8(-1);
        ScriptVarType(pSVar2, 60, pBVar1, &local_8c8);
        CATEGORYTYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_8a8(-1);
        ScriptVarType(pSVar2, 61, pBVar1, &local_8a8);
        SOCIAL_NETWORK = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_888(-1);
        ScriptVarType(pSVar2, 62, pBVar1, &local_888);
        HITMARK = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_868(-1);
        ScriptVarType(pSVar2, 63, pBVar1, &local_868);
        PACKAGE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_848(-1);
        ScriptVarType(pSVar2, 64, pBVar1, &local_848);
        PARTICLE_EFFECTOR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_828(-1);
        ScriptVarType(pSVar2, 65, pBVar1, &local_828);
        CONTROLLER_UID = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_808(-1);
        ScriptVarType(pSVar2, 66, pBVar1, &local_808);
        PARTICLE_EMITTER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_7e8(-1);
        ScriptVarType(pSVar2, 67, pBVar1, &local_7e8);
        PLOGTYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_7c8(-1);
        ScriptVarType(pSVar2, 68, pBVar1, &local_7c8);
        UNSIGNED_INT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_7a8(-1);
        ScriptVarType(pSVar2, 69, pBVar1, &local_7a8);
        SKYBOX = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_788(-1);
        ScriptVarType(pSVar2, 70, pBVar1, &local_788);
        SKYDECOR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::LONG;
        VarValue local_768(-1);
        ScriptVarType(pSVar2, 71, pBVar1, &local_768);
        HASH64 = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_748(-1);
        ScriptVarType(pSVar2, 72, pBVar1, &local_748);
        INPUTTYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_728(-1);
        ScriptVarType(pSVar2, 73, pBVar1, &local_728);
        STRUCT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_708(-1);
        ScriptVarType(pSVar2, 74, pBVar1, &local_708);
        DBROW = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_6e8(-1);
        ScriptVarType(pSVar2, 75, pBVar1, &local_6e8);
        STORABLELABEL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_6c8(-1);
        ScriptVarType(pSVar2, 76, pBVar1, &local_6c8);
        STORABLEPROC = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_6a8(-1);
        ScriptVarType(pSVar2, 77, pBVar1, &local_6a8);
        GAMELOGEVENT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_688(-1);
        ScriptVarType(pSVar2, 78, pBVar1, &local_688);
        ANIMATIONCLIP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_668(-1);
        ScriptVarType(pSVar2, 79, pBVar1, &local_668);
        SKELETON = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_648(-1);
        ScriptVarType(pSVar2, 80, pBVar1, &local_648);
        REGIONVISIBILITY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_628(-1);
        ScriptVarType(pSVar2, 81, pBVar1, &local_628);
        FMODHANDLE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_608(-1);
        ScriptVarType(pSVar2, 83, pBVar1, &local_608);
        REGION_ALLOWLOGIN = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_5e8(-1);
        ScriptVarType(pSVar2, 84, pBVar1, &local_5e8);
        REGION_INFO = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_5c8(-1);
        ScriptVarType(pSVar2, 85, pBVar1, &local_5c8);
        REGION_INFO_FAILURE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_5a8(-1);
        ScriptVarType(pSVar2, 86, pBVar1, &local_5a8);
        SERVER_ACCOUNT_CREATION_STEP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_588(-1);
        ScriptVarType(pSVar2, 87, pBVar1, &local_588);
        CLIENT_ACCOUNT_CREATION_STEP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_568(-1);
        ScriptVarType(pSVar2, 88, pBVar1, &local_568);
        LOBBY_ACCOUNT_CREATION_STEP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_548(-1);
        ScriptVarType(pSVar2, 89, pBVar1, &local_548);
        GWC_PLATFORM = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_528(-1);
        ScriptVarType(pSVar2, 90, pBVar1, &local_528);
        CURRENCY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_508(-1);
        ScriptVarType(pSVar2, 91, pBVar1, &local_508);
        KEYBOARD_KEY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_4e8(-1);
        ScriptVarType(pSVar2, 92, pBVar1, &local_4e8);
        MOUSEEVENT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_4c8(-1);
        ScriptVarType(pSVar2, 93, pBVar1, &local_4c8);
        HEADBAR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_4a8(-1);
        ScriptVarType(pSVar2, 94, pBVar1, &local_4a8);
        BUG_TEMPLATE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_488(-1);
        ScriptVarType(pSVar2, 95, pBVar1, &local_488);
        BILLING_AUTH_FLAG = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_468(-1);
        ScriptVarType(pSVar2, 96, pBVar1, &local_468);
        ACCOUNT_FEATURE_FLAG = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_448(-1);
        ScriptVarType(pSVar2, 97, pBVar1, &local_448);
        INTERFACE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_428(-1);
        ScriptVarType(pSVar2, 98, pBVar1, &local_428);
        TOPLEVELINTERFACE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_408(-1);
        ScriptVarType(pSVar2, 99, pBVar1, &local_408);
        OVERLAYINTERFACE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_3e8(-1);
        ScriptVarType(pSVar2, 100, pBVar1, &local_3e8);
        CLIENTINTERFACE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_3c8(-1);
        ScriptVarType(pSVar2, 101, pBVar1, &local_3c8);
        MOVESPEED = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_3a8(-1);
        ScriptVarType(pSVar2, 102, pBVar1, &local_3a8);
        MATERIAL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_388(-1);
        ScriptVarType(pSVar2, 103, pBVar1, &local_388);
        SEQGROUP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_368(-1);
        ScriptVarType(pSVar2, 104, pBVar1, &local_368);
        TEMP_HISCORE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_348(-1);
        ScriptVarType(pSVar2, 105, pBVar1, &local_348);
        TEMP_HISCORE_LENGTH_TYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_328(-1);
        ScriptVarType(pSVar2, 106, pBVar1, &local_328);
        TEMP_HISCORE_DISPLAY_TYPE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_308(-1);
        ScriptVarType(pSVar2, 107, pBVar1, &local_308);
        TEMP_HISCORE_CONTRIBUTE_RESULT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_2e8(-1);
        ScriptVarType(pSVar2, 108, pBVar1, &local_2e8);
        AUDIOGROUP = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_2c8(-1);
        ScriptVarType(pSVar2, 109, pBVar1, &local_2c8);
        AUDIOMIXBUSS = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::LONG;
        VarValue local_2a8(0);
        ScriptVarType(pSVar2, 110, pBVar1, &local_2a8);
        LONG = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_288(-1);
        ScriptVarType(pSVar2, 111, pBVar1, &local_288);
        CRM_CHANNEL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_268(-1);
        ScriptVarType(pSVar2, 112, pBVar1, &local_268);
        HTTP_IMAGE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_248(-1);
        ScriptVarType(pSVar2, 113, pBVar1, &local_248);
        POP_UP_DISPLAY_BEHAVIOUR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_228(-1);
        ScriptVarType(pSVar2, 114, pBVar1, &local_228);
        POLL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::LONG;
        VarValue local_208(-1);
        ScriptVarType(pSVar2, 115, pBVar1, &local_208);
        MTXN_PACKAGE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::LONG;
        VarValue local_1e8(-1);
        ScriptVarType(pSVar2, 116, pBVar1, &local_1e8);
        MTXN_PRICE_POINT = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_1c8(-1);
        ScriptVarType(pSVar2, 117, pBVar1, &local_1c8);
        ENTITYOVERLAY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_1a8(-1);
        ScriptVarType(pSVar2, 118, pBVar1, &local_1a8);
        DBTABLE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_188(-1);
        ScriptVarType(pSVar2, 200, pBVar1, &local_188);
        COMPONENTARRAY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_168(-1);
        ScriptVarType(pSVar2, 201, pBVar1, &local_168);
        INTARRAY = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_148(-1);
        ScriptVarType(pSVar2, 202, pBVar1, &local_148);
        LABEL = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_128(-1);
        ScriptVarType(pSVar2, 203, pBVar1, &local_128);
        QUEUE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_108(-1);
        ScriptVarType(pSVar2, 204, pBVar1, &local_108);
        TIMER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_e8(-1);
        ScriptVarType(pSVar2, 205, pBVar1, &local_e8);
        WEAKQUEUE = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_c8(-1);
        ScriptVarType(pSVar2, 206, pBVar1, &local_c8);
        SOFTTIMER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_a8(-1);
        ScriptVarType(pSVar2, 207, pBVar1, &local_a8);
        OBJVAR = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_88(-1);
        ScriptVarType(pSVar2, 208, pBVar1, &local_88);
        WALKTRIGGER = pSVar2;
        pSVar2 = (ScriptVarType*)operator new(48);
        pBVar1 = game::BaseVarType::INTEGER;
        VarValue local_68(-1);
        ScriptVarType(pSVar2, 209, pBVar1, &local_68);
        VARP = pSVar2;
    }

    // 0x10020ad60
    void ScriptVarType::Destroy() {
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&INT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&BOOLEAN);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&HASH32);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&QUEST);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&QUESTHELP);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CURSOR);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SEQ);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&COLOUR);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&LOC_SHAPE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&COMPONENT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&IDKIT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MIDI);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&NPC_MODE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&NAMEDOBJ);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SYNTH);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&AI_QUEUE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&AREA);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&STAT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&NPC_STAT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&WRITEINV);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MESH);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MAPAREA);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&COORDGRID);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&GRAPHIC);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CHATPHRASE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&FONTMETRICS);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&ENUM);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&HUNT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&JINGLE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CHATCAT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&LOC);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MODEL);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&NPC);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&OBJ);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&PLAYER_UID);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&REGION_UID);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&STRING);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SPOTANIM);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&NPC_UID);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&INV);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&TEXTURE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CATEGORY);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CHAR);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&LASER);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&BAS);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CONTROLLER);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&COLLISION_GEOMETRY);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&PHYSICS_MODEL);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&PHYSICS_CONTROL_MODIFIER);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CLANHASH);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CUTSCENE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&ITEMCODE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&PVPKILLS);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MAPSCENEICON);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CLANFORUMQFC);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&VORBIS);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&VERIFY_OBJECT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MAPELEMENT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CATEGORYTYPE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SOCIAL_NETWORK);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&HITMARK);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&PACKAGE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&PARTICLE_EFFECTOR);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CONTROLLER_UID);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&PARTICLE_EMITTER);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&PLOGTYPE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&UNSIGNED_INT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SKYBOX);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SKYDECOR);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&HASH64);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&INPUTTYPE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&STRUCT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&DBROW);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&STORABLELABEL);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&STORABLEPROC);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&GAMELOGEVENT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&ANIMATIONCLIP);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SKELETON);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&REGIONVISIBILITY);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&FMODHANDLE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&REGION_ALLOWLOGIN);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&REGION_INFO);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&REGION_INFO_FAILURE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SERVER_ACCOUNT_CREATION_STEP);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CLIENT_ACCOUNT_CREATION_STEP);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&LOBBY_ACCOUNT_CREATION_STEP);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&GWC_PLATFORM);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CURRENCY);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&KEYBOARD_KEY);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MOUSEEVENT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&HEADBAR);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&BUG_TEMPLATE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&BILLING_AUTH_FLAG);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&ACCOUNT_FEATURE_FLAG);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&INTERFACE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&TOPLEVELINTERFACE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&OVERLAYINTERFACE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CLIENTINTERFACE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MOVESPEED);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MATERIAL);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SEQGROUP);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&TEMP_HISCORE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&TEMP_HISCORE_LENGTH_TYPE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&TEMP_HISCORE_DISPLAY_TYPE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&TEMP_HISCORE_CONTRIBUTE_RESULT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&AUDIOGROUP);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&AUDIOMIXBUSS);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&LONG);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&CRM_CHANNEL);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&HTTP_IMAGE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&POP_UP_DISPLAY_BEHAVIOUR);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&POLL);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MTXN_PACKAGE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&MTXN_PRICE_POINT);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&ENTITYOVERLAY);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&DBTABLE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&COMPONENTARRAY);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&INTARRAY);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&LABEL);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&QUEUE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&TIMER);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&WEAKQUEUE);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&SOFTTIMER);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&OBJVAR);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&WALKTRIGGER);
        safe_delete<game::ScriptVarType const>((ScriptVarType**)&VARP);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10020b350
    void safe_delete<oldscape::ScriptVarType>(oldscape::ScriptVarType*& arg1) {
        ScriptVarType* scriptVarType = (ScriptVarType*)*arg1;
        if (scriptVarType != nullptr) {
            scriptVarType->~ScriptVarType();
            operator delete(scriptVarType);
        }
        arg1 = nullptr;
    }

} // namespace jag
