// libs/game/runetek5/config/Js5Archive.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag {
    class Js5Archive {
    public:
        void Initialise(Array<bool, eastl::allocator>*);
        void InitialiseArchive(Js5ArchiveSettings*&, unsigned int, Priority const*, bool, EncodeType const*, bool,
                               Js5DiskCacheFormat, char const*);
        void InitialiseArchive(Js5ArchiveSettings*&, unsigned int, Priority const*, int, bool, EncodeType const*, bool,
                               Js5DiskCacheFormat, char const*);
        void Destroy();
        static /* 8 bytes */ JS5_ANIMS;
        static /* 8 bytes */ JS5_BASES;
        static /* 8 bytes */ JS5_CONFIG;
        static /* 8 bytes */ JS5_INTERFACES;
        static /* 8 bytes */ JS5_MAPS;
        static /* 8 bytes */ JS5_MODELS;
        static /* 8 bytes */ JS5_SPRITES;
        static /* 8 bytes */ JS5_BINARY;
        static /* 8 bytes */ JS5_CLIENTSCRIPTS;
        static /* 8 bytes */ JS5_VORBIS;
        static /* 8 bytes */ JS5_CONFIG_ACHIEVEMENT;
        static /* 8 bytes */ JS5_CONFIG_LOC;
        static /* 8 bytes */ JS5_CONFIG_ENUM;
        static /* 8 bytes */ JS5_CONFIG_NPC;
        static /* 8 bytes */ JS5_CONFIG_OBJ;
        static /* 8 bytes */ JS5_CONFIG_SEQ;
        static /* 8 bytes */ JS5_CONFIG_SPOT;
        static /* 8 bytes */ JS5_CONFIG_STRUCT;
        static /* 8 bytes */ JS5_WORLDMAPDATA;
        static /* 8 bytes */ JS5_QUICKCHAT;
        static /* 8 bytes */ JS5_MATERIALS;
        static /* 8 bytes */ JS5_CONFIG_PARTICLE;
        static /* 8 bytes */ JS5_DEFAULTS;
        static /* 8 bytes */ JS5_CONFIG_BILLBOARD;
        static /* 8 bytes */ JS5_LOADING_SPRITES;
        static /* 8 bytes */ JS5_LOADING_SCREENS;
        static /* 8 bytes */ JS5_LOADING_SPRITES_RAW;
        static /* 8 bytes */ JS5_CUTSCENES;
        static /* 8 bytes */ JS5_AUDIOSTREAMS;
        static /* 8 bytes */ JS5_WORLDMAPAREADATA;
        static /* 8 bytes */ JS5_WORLDMAPLABELS;
        static /* 8 bytes */ JS5_TEXTURES_DIFFUSE_PNG;
        static /* 8 bytes */ JS5_TEXTURES_HDR_PNG;
        static /* 8 bytes */ JS5_TEXTURES_DIFFUSE_DXT;
        static /* 8 bytes */ JS5_TEXTURES_HDR_NORMAL_PNG;
        static /* 8 bytes */ JS5_MODELSRT7;
        static /* 8 bytes */ JS5_ANIMSRT7;
        static /* 8 bytes */ JS5_DBTABLEINDEX;
        static /* 8 bytes */ JS5_TEXTURES_HDR_NORMAL_DXT;
        static /* 8 bytes */ JS5_TEXTURES_DIFFUSE_PNG_MIPPED;
        static /* 8 bytes */ JS5_TEXTURES_DXT;
        static /* 8 bytes */ JS5_TEXTURES_PNG_MIPPED;
        static /* 8 bytes */ JS5_TEXTURES_ETC;
        static /* 8 bytes */ JS5_KEYFRAMES;
        static /* 8 bytes */ JS5_FONTMETRICS;
        static /* 8 bytes */ JS5_FONTMETRICSRT7;
        static /* 8 bytes */ JS5_TRUETYPEFONTS;
        static /* 8 bytes */ JS5_STYLESHEETS;
        static /* 8 bytes */ JS5_VFX;
        static /* 8 bytes */ JS5_ANIMSTATEMACHINES;
        static /* 8 bytes */ JS5_DEBUG_STRINGS;
        static /* 8 bytes */ JS5_UI_ANIMATIONS;
        static /* 8 bytes */ JS5_CUTSCENES2D;
        static /* 8 bytes */ JS5_ARCHIVESET;
        static /* 8 bytes */ archivesToLoad;
    };

    // 0x1039bbc88, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_ANIMS;

    // 0x1039bbc90, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_BASES;

    // 0x1039bbc98, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG;

    // 0x1039bbca0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_INTERFACES;

    // 0x1039bbca8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_MAPS;

    // 0x1039bbcb0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_MODELS;

    // 0x1039bbcb8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_SPRITES;

    // 0x1039bbcc0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_BINARY;

    // 0x1039bbcc8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CLIENTSCRIPTS;

    // 0x1039bbcd0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_VORBIS;

    // 0x1039bbcd8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_ACHIEVEMENT;

    // 0x1039bbce0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_LOC;

    // 0x1039bbce8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_ENUM;

    // 0x1039bbcf0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_NPC;

    // 0x1039bbcf8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_OBJ;

    // 0x1039bbd00, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_SEQ;

    // 0x1039bbd08, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_SPOT;

    // 0x1039bbd10, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_STRUCT;

    // 0x1039bbd18, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_WORLDMAPDATA;

    // 0x1039bbd20, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_QUICKCHAT;

    // 0x1039bbd28, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_MATERIALS;

    // 0x1039bbd30, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_PARTICLE;

    // 0x1039bbd38, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_DEFAULTS;

    // 0x1039bbd40, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CONFIG_BILLBOARD;

    // 0x1039bbd48, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_LOADING_SPRITES;

    // 0x1039bbd50, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_LOADING_SCREENS;

    // 0x1039bbd58, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_LOADING_SPRITES_RAW;

    // 0x1039bbd60, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CUTSCENES;

    // 0x1039bbd68, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_AUDIOSTREAMS;

    // 0x1039bbd70, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_WORLDMAPAREADATA;

    // 0x1039bbd78, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_WORLDMAPLABELS;

    // 0x1039bbd80, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_DIFFUSE_PNG;

    // 0x1039bbd88, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_HDR_PNG;

    // 0x1039bbd90, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_DIFFUSE_DXT;

    // 0x1039bbd98, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_HDR_NORMAL_PNG;

    // 0x1039bbda0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_MODELSRT7;

    // 0x1039bbda8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_ANIMSRT7;

    // 0x1039bbdb0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_DBTABLEINDEX;

    // 0x1039bbdb8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_HDR_NORMAL_DXT;

    // 0x1039bbdc0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_DIFFUSE_PNG_MIPPED;

    // 0x1039bbdc8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_DXT;

    // 0x1039bbdd0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_PNG_MIPPED;

    // 0x1039bbdd8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TEXTURES_ETC;

    // 0x1039bbde0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_KEYFRAMES;

    // 0x1039bbde8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_FONTMETRICS;

    // 0x1039bbdf0, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_FONTMETRICSRT7;

    // 0x1039bbdf8, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_TRUETYPEFONTS;

    // 0x1039bbe00, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_STYLESHEETS;

    // 0x1039bbe08, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_VFX;

    // 0x1039bbe10, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_ANIMSTATEMACHINES;

    // 0x1039bbe18, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_DEBUG_STRINGS;

    // 0x1039bbe20, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_UI_ANIMATIONS;

    // 0x1039bbe28, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_CUTSCENES2D;

    // 0x1039bbe30, 8 bytes, __common; zero-initialised
    Js5Archive::JS5_ARCHIVESET;

    // 0x1039bbe38, 8 bytes, __common; zero-initialised
    Js5Archive::archivesToLoad;

    // 0x100561e10, 2368 bytes, placed by class name and debug map
    // Js5Archive::Initialise(Array<bool, eastl::allocator>*)
    void Js5Archive::Initialise(Array* param_1) {
        undefined* puVar1;
        char cVar2;
        long lVar3;
        MapArea* pMVar4;
        undefined** ppuVar5;
        Js5ArchiveSetSettings* this;
        undefined* puVar6;
        undefined* puVar7;
        undefined4 uVar8;

        puVar6 = Priority::NONE;
        puVar1 = Priority::LOW;
        lVar3 = Singleton<render::RenderDevice>::InstancePtr();
        puVar7 = puVar6;
        if (lVar3 != 0) {
            pMVar4 = (MapArea*)param_1->Instance();
            lVar3 = pMVar4->GetOrigin();
            ppuVar5 = &Priority::LOW;
            if (*(char*)(lVar3 + 161) == '\0') {
                ppuVar5 = &Priority::NONE;
            }
            puVar6 = *ppuVar5;
            pMVar4 = (MapArea*)pMVar4->Instance();
            lVar3 = pMVar4->GetOrigin();
            ppuVar5 = &Priority::LOW;
            if (*(char*)(lVar3 + 162) == '\0') {
                ppuVar5 = &Priority::NONE;
            }
            puVar7 = *ppuVar5;
        }
        this = operator_new(48);
        *(undefined8*)this = 0;
        *(undefined8*)&field_8 = 0;
        *(undefined8*)&field_16 = 0;
        *(undefined8*)&field_24 = 0;
        *(undefined8*)&field_32 = 0;
        *(undefined8*)&field_40 = 0;
        Js5ArchiveSetSettings::Js5ArchiveSetSettings(this);
        uVar8 = 1;
        JS5_ARCHIVESET = this;
        archivesToLoad = param_1;
        InitialiseArchive(&JS5_BASES, 1, Priority::HIGHEST, 0, EncodeType::NONE, 0, 1, "client.bases.js5");
        InitialiseArchive(&JS5_CONFIG, 2, Priority::HIGHEST, 16, 1, EncodeType::NONE, 0, CONCAT44(uVar8, 1),
                          "client.config.js5");
        InitialiseArchive(&JS5_INTERFACES, 3, Priority::HIGHEST, 11, 1, EncodeType::NONE, 0, 1,
                          "client.interfaces.js5");
        uVar8 = 1;
        InitialiseArchive(&JS5_MAPS, 5, Priority::HIGHEST, 0, EncodeType::NONE, 0, 1, "client.mapsv2.js5");
        InitialiseArchive(&JS5_SPRITES, 8, Priority::LOW, 15, 0, EncodeType::NONE, 0, CONCAT44(uVar8, 2),
                          "client.sprites.js5");
        uVar8 = 1;
        InitialiseArchive(&JS5_BINARY, 10, Priority::HIGHEST, 0, EncodeType::NONE, 0, 1, "client.binary.js5");
        InitialiseArchive(&JS5_CLIENTSCRIPTS, 12, Priority::HIGHEST, 10, 1, EncodeType::NONE, 0, CONCAT44(uVar8, 1),
                          "client.scripts.js5");
        InitialiseArchive(&JS5_FONTMETRICS, 13, Priority::HIGHEST, 13, 0, EncodeType::NONE, 0, 1,
                          "client.fontmetrics.js5");
        InitialiseArchive(&JS5_VORBIS, 14, Priority::NONE, 0, EncodeType::NONE, 0, 1, "client.vorbis");
        InitialiseArchive(&JS5_CONFIG_LOC, 16, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1, "client.loc.config.js5");
        InitialiseArchive(&JS5_CONFIG_ENUM, 17, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1, "client.enum.config.js5");
        InitialiseArchive(&JS5_CONFIG_NPC, 18, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1, "client.npc.config.js5");
        InitialiseArchive(&JS5_CONFIG_OBJ, 19, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1, "client.obj.config.js5");
        InitialiseArchive(&JS5_CONFIG_SEQ, 20, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1, "client.seq.config.js5");
        InitialiseArchive(&JS5_CONFIG_SPOT, 21, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1, "client.spot.config.js5");
        InitialiseArchive(&JS5_CONFIG_STRUCT, 22, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1,
                          "client.struct.config.js5");
        InitialiseArchive(&JS5_WORLDMAPDATA, 23, Priority::LOW, 1, EncodeType::NONE, 0, 1, "client.worldmap.js5");
        InitialiseArchive(&JS5_QUICKCHAT, 24, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1, "client.quickchat.js5");
        InitialiseArchive(&JS5_MATERIALS, 26, Priority::HIGHEST, 0, EncodeType::NONE, 0, 1, "client.materials.js5");
        uVar8 = 1;
        InitialiseArchive(&JS5_CONFIG_PARTICLE, 27, Priority::HIGHEST, 0, EncodeType::NONE, 0, 1,
                          "client.particles.js5");
        InitialiseArchive(&JS5_DEFAULTS, 28, Priority::HIGHEST, 14, 0, EncodeType::NONE, 0, CONCAT44(uVar8, 1),
                          "client.defaults.js5");
        InitialiseArchive(&JS5_CONFIG_BILLBOARD, 29, Priority::HIGHEST, 0, EncodeType::NONE, 0, 1,
                          "client.billboards.js5");
        InitialiseArchive(&JS5_AUDIOSTREAMS, 40, Priority::NONE, 0, EncodeType::NONE, 1, 1, "client.audiostreams");
        InitialiseArchive(&JS5_WORLDMAPAREADATA, 41, Priority::HIGH, 1, EncodeType::NONE, 0, 1,
                          "client.worldmapareas.js5");
        InitialiseArchive(&JS5_WORLDMAPLABELS, 42, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1,
                          "client.worldmaplabels.js5");
        InitialiseArchive(&JS5_MODELSRT7, 47, Priority::HIGH, 0, EncodeType::NONE, 0, 2, "client.modelsrt7.js5");
        InitialiseArchive(&JS5_ANIMSRT7, 48, Priority::HIGH, 0, EncodeType::NONE, 0, 1, "client.animsrt7.js5");
        InitialiseArchive(&JS5_DBTABLEINDEX, 49, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1,
                          "client.dbtableindex.js5");
        InitialiseArchive(&JS5_TEXTURES_DXT, 52, puVar6, 0, EncodeType::DXT, 0, 1, "client.textures.dxt.js5");
        InitialiseArchive(&JS5_TEXTURES_PNG_MIPPED, 54, puVar1, 0, EncodeType::PNG_MIPPED, 0, 1,
                          "client.textures.png.mipped.js5");
        InitialiseArchive(&JS5_TEXTURES_ETC, 55, puVar7, 0, EncodeType::ETC, 0, 1, "client.textures.etc.js5");
        InitialiseArchive(&JS5_KEYFRAMES, 56, Priority::HIGH, 0, EncodeType::NONE, 0, 1, "client.anims.keyframes.js5");
        uVar8 = 1;
        InitialiseArchive(&JS5_CONFIG_ACHIEVEMENT, 57, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1,
                          "client.achievement.config.js5");
        InitialiseArchive(&JS5_FONTMETRICSRT7, 58, Priority::HIGHEST, 13, 0, EncodeType::NONE, 0, CONCAT44(uVar8, 1),
                          "client.fonts.metrics.js5");
        InitialiseArchive(&JS5_TRUETYPEFONTS, 59, Priority::HIGHEST, 0, EncodeType::NONE, 0, 1,
                          "client.fonts.truetype.js5");
        InitialiseArchive(&JS5_STYLESHEETS, 60, Priority::HIGH, 0, EncodeType::NONE, 0, 1, "client.stylesheets.js5");
        InitialiseArchive(&JS5_VFX, 61, Priority::LOW, 0, EncodeType::NONE, 0, 1, "client.vfx.js5");
        InitialiseArchive(&JS5_ANIMSTATEMACHINES, 62, Priority::HIGH, 0, EncodeType::NONE, 0, 1,
                          "client.anims.animstatemachines.js5");
        cVar2 = game::Version::ConnectedServerMeetsVersion(928);
        if (cVar2 != '\0') {
            InitialiseArchive(&JS5_UI_ANIMATIONS, 65, Priority::HIGHEST, 1, EncodeType::NONE, 0, 1,
                              "client.interfaces.animations.js5");
            InitialiseArchive(&JS5_CUTSCENES2D, 66, Priority::LOW, 0, EncodeType::NONE, 0, 1,
                              "client.cutscenes.2d.js5");
        }
        cVar2 = game::Version::ConnectedServerMeetsVersion(928);
        if (cVar2 != '\0') {
            InitialiseArchive(&JS5_DEBUG_STRINGS, 64, Priority::HIGHEST, 0, EncodeType::NONE, 0, 1,
                              "debug.strings.js5");
        }
    }

    // 0x100562750, 48 bytes, placed by class name and debug map
    // Js5Archive::InitialiseArchive(Js5ArchiveSettings*&, unsigned int, Priority const*, bool, EncodeType const*, bool, Js5DiskCacheFormat, char const*)
    void Js5Archive::InitialiseArchive() {
        InitialiseArchive();
    }

    // 0x100562780, 240 bytes, placed by class name and debug map
    // Js5Archive::InitialiseArchive(Js5ArchiveSettings*&, unsigned int, Priority const*, int, bool, EncodeType const*, bool, Js5DiskCacheFormat, char const*)
    void Js5Archive::InitialiseArchive(undefined8* param_1, uint param_2, undefined8 param_3, undefined4 param_4,
                                       undefined1 param_5, undefined8 param_6, undefined1 param_7, char param_8,
                                       undefined8 param_9) {
        ulong uVar1;
        char* pcVar2;
        Js5ArchiveSettings* pJVar3;

        if (66 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("archiveID < Js5Constants::NUM_FIXED_ARCHIVES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "Js5Archive.cpp",
                      182, (char*)0);
        }
        if (archivesToLoad != (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
            uVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(archivesToLoad);
            if (uVar1 <= (ulong)param_2) {
                return;
            }
            pcVar2 = (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)archivesToLoad,
                                                                      (ulong)param_2);
            if (*pcVar2 == '\0') {
                return;
            }
        }
        pJVar3 = operator_new(64);
        Js5ArchiveSettings::Js5ArchiveSettings(pJVar3, (ulong)param_2, param_3, param_4, param_5, param_6, param_7,
                                               (int)param_8, param_9);
        *param_1 = pJVar3;
        JS5_ARCHIVESET->Add(pJVar3);
    }

    // 0x100562890, 32 bytes, placed by class name
    // Js5Archive::Destroy()
    void Js5Archive::Destroy() {
        safe_delete<Js5ArchiveSetSettings>((Js5ArchiveSetSettings**)&JS5_ARCHIVESET);
        safe_delete<Array<bool, eastl::allocator>>((Array**)&archivesToLoad);
    }

} // namespace jag
