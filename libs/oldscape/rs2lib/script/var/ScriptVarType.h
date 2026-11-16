// libs/oldscape/rs2lib/script/var/ScriptVarType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class ScriptVarType {
    public:
        GetBaseVarType() const;
        GetDefaultValue() const;
        uint GetID() const;
        GetByID(unsigned int);
        ScriptVarType(unsigned int, game::BaseVarType const*, game::VarValue);
        void Initialise();
        void Destroy();
        ~ScriptVarType();
        static /* 56 bytes */ LOOKUP_MAP;
        static /* 8 bytes */ INT;
        static /* 8 bytes */ BOOLEAN;
        static /* 8 bytes */ HASH32;
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
        static /* 8 bytes */ NAMEDOBJ;
        static /* 8 bytes */ SYNTH;
        static /* 8 bytes */ AI_QUEUE;
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
        static /* 8 bytes */ HUNT;
        static /* 8 bytes */ JINGLE;
        static /* 8 bytes */ CHATCAT;
        static /* 8 bytes */ LOC;
        static /* 8 bytes */ MODEL;
        static /* 8 bytes */ NPC;
        static /* 8 bytes */ OBJ;
        static /* 8 bytes */ PLAYER_UID;
        static /* 8 bytes */ REGION_UID;
        static /* 8 bytes */ STRING;
        static /* 8 bytes */ SPOTANIM;
        static /* 8 bytes */ NPC_UID;
        static /* 8 bytes */ INV;
        static /* 8 bytes */ TEXTURE;
        static /* 8 bytes */ CATEGORY;
        static /* 8 bytes */ CHAR;
        static /* 8 bytes */ LASER;
        static /* 8 bytes */ BAS;
        static /* 8 bytes */ CONTROLLER;
        static /* 8 bytes */ COLLISION_GEOMETRY;
        static /* 8 bytes */ PHYSICS_MODEL;
        static /* 8 bytes */ PHYSICS_CONTROL_MODIFIER;
        static /* 8 bytes */ CLANHASH;
        static /* 8 bytes */ CUTSCENE;
        static /* 8 bytes */ ITEMCODE;
        static /* 8 bytes */ PVPKILLS;
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
        static /* 8 bytes */ CONTROLLER_UID;
        static /* 8 bytes */ PARTICLE_EMITTER;
        static /* 8 bytes */ PLOGTYPE;
        static /* 8 bytes */ UNSIGNED_INT;
        static /* 8 bytes */ SKYBOX;
        static /* 8 bytes */ SKYDECOR;
        static /* 8 bytes */ HASH64;
        static /* 8 bytes */ INPUTTYPE;
        static /* 8 bytes */ STRUCT;
        static /* 8 bytes */ DBROW;
        static /* 8 bytes */ STORABLELABEL;
        static /* 8 bytes */ STORABLEPROC;
        static /* 8 bytes */ GAMELOGEVENT;
        static /* 8 bytes */ ANIMATIONCLIP;
        static /* 8 bytes */ SKELETON;
        static /* 8 bytes */ REGIONVISIBILITY;
        static /* 8 bytes */ FMODHANDLE;
        static /* 8 bytes */ REGION_ALLOWLOGIN;
        static /* 8 bytes */ REGION_INFO;
        static /* 8 bytes */ REGION_INFO_FAILURE;
        static /* 8 bytes */ SERVER_ACCOUNT_CREATION_STEP;
        static /* 8 bytes */ CLIENT_ACCOUNT_CREATION_STEP;
        static /* 8 bytes */ LOBBY_ACCOUNT_CREATION_STEP;
        static /* 8 bytes */ GWC_PLATFORM;
        static /* 8 bytes */ CURRENCY;
        static /* 8 bytes */ KEYBOARD_KEY;
        static /* 8 bytes */ MOUSEEVENT;
        static /* 8 bytes */ HEADBAR;
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
        static /* 8 bytes */ MTXN_PACKAGE;
        static /* 8 bytes */ MTXN_PRICE_POINT;
        static /* 8 bytes */ ENTITYOVERLAY;
        static /* 8 bytes */ DBTABLE;
        static /* 8 bytes */ COMPONENTARRAY;
        static /* 8 bytes */ INTARRAY;
        static /* 8 bytes */ LABEL;
        static /* 8 bytes */ QUEUE;
        static /* 8 bytes */ TIMER;
        static /* 8 bytes */ WEAKQUEUE;
        static /* 8 bytes */ SOFTTIMER;
        static /* 8 bytes */ OBJVAR;
        static /* 8 bytes */ WALKTRIGGER;
        static /* 8 bytes */ VARP;

        // data members, from how the methods use this: 24 bytes
        uint m_iD; // offset 0
        char _unknown_4[4];
        BaseVarType* field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x1000b9950, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ScriptVarType::GetDefaultValue() const
    /* graphics::NXTPixToolkit::GetScreen() const */

    undefined1* graphics::NXTPixToolkit::GetScreen() {
        return &field_16;
    }

    // 0x1000b9960, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ScriptVarType::GetID() const
    /* rs2lib::CoordMapSquare::GetX() const */

    uint rs2lib::CoordMapSquare::GetX() {
        return m_x;
    }

    // 0x10018bb50, 160 bytes, inline, placed by class name
    // ScriptVarType::GetByID(unsigned int)
    undefined8 ScriptVarType::GetByID(uint param_1) {
        long lVar2;
        undefined8 uVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[20];
        uint local_24;

        local_24 = param_1;
        lVar2 = LOOKUP_MAP.size();
        if (lVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("LOOKUP_MAP.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/script/"
                      "var/ScriptVarType.h",
                      168, "ScriptVarType has not been initialised");
        }
        eastl::hashtable<unsigned int, eastl::pair<unsigned int const, game::ScriptVarType*>, eastl::allocator,
                         eastl::use_first<eastl::pair<unsigned int const, game::ScriptVarType*>>,
                         eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((uint*)
                                                                                                              local_38);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            uVar3 = *(undefined8*)(lVar2 + 8);
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100223840, 16 bytes, complete-object destructor, inline, placed by class name
    // ScriptVarType::~ScriptVarType(): jumps straight to the base-object destructor

    // 0x100223850, 16 bytes, base-object destructor, inline, placed by class name
    // ScriptVarType::~ScriptVarType()
    /* game::ScriptVarType::~ScriptVarType() */

    void game::ScriptVarType::~ScriptVarType() {
        (&field_16)->~VarValue();
    }

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    AnimationStateResourceList AnimState::GetResources();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    shared_ptr PointLightGridTexture::GetEffect() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint RenderPassBitSet::GetBits() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint ScriptedPointLight::GetRadius() const;

} // namespace jag::graphics

namespace jag {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    MoveSpeed* EntityWaypoint::GetMoveSpeed() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint EntityWaypoint::GetLevel() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int Error::GetCode() const;

} // namespace jag

namespace jag::game {
    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint EnvSkySettings::GetSkyBoxID() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint ServerSyncingCycle::GetCycle() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint EnvLightingSettings::GetSunRGBA() const;

} // namespace jag::game

namespace jag::render {
    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint VertexArrayObject::GetNativeVAO() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint TextureFormatBitSet::GetBits() const;

} // namespace jag::render

namespace jag::input::gesture {
    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int GestureManager::GetNumTouches() const;

} // namespace jag::input::gesture

namespace jag::tweak {
    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int EditLine::GetDrawOffset() const;

} // namespace jag::tweak
