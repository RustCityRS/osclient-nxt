// libs/game/runetek5/config/Js5Archive.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag {
    class Js5Archive {
    public:
        void Initialise(Array<bool>* arg1);
        void InitialiseArchive(Js5ArchiveSettings*& arg1, unsigned int arg2, const Priority* priority, bool arg4,
                               const EncodeType* encodeType, bool arg6, Js5DiskCacheFormat js5DiskCacheFormat,
                               const char* str);
        void InitialiseArchive(Js5ArchiveSettings*& arg1, unsigned int arg2, const Priority* priority, int arg4,
                               bool arg5, const EncodeType* encodeType, bool arg7,
                               Js5DiskCacheFormat js5DiskCacheFormat, const char* str);
        void Destroy();
        static int64_t JS5_ANIMS;
        static Js5Archive JS5_BASES;
        static Js5Archive JS5_CONFIG;
        static Js5Archive JS5_INTERFACES;
        static Js5Archive JS5_MAPS;
        static int64_t JS5_MODELS;
        static Js5Archive JS5_SPRITES;
        static Js5Archive JS5_BINARY;
        static Js5Archive JS5_CLIENTSCRIPTS;
        static Js5Archive JS5_VORBIS;
        static Js5Archive JS5_CONFIG_ACHIEVEMENT;
        static Js5Archive JS5_CONFIG_LOC;
        static Js5Archive JS5_CONFIG_ENUM;
        static Js5Archive JS5_CONFIG_NPC;
        static Js5Archive JS5_CONFIG_OBJ;
        static Js5Archive JS5_CONFIG_SEQ;
        static Js5Archive JS5_CONFIG_SPOT;
        static Js5Archive JS5_CONFIG_STRUCT;
        static Js5Archive JS5_WORLDMAPDATA;
        static Js5Archive JS5_QUICKCHAT;
        static Js5Archive JS5_MATERIALS;
        static Js5Archive JS5_CONFIG_PARTICLE;
        static Js5Archive JS5_DEFAULTS;
        static Js5Archive JS5_CONFIG_BILLBOARD;
        static int64_t JS5_LOADING_SPRITES;
        static int64_t JS5_LOADING_SCREENS;
        static int64_t JS5_LOADING_SPRITES_RAW;
        static int64_t JS5_CUTSCENES;
        static Js5Archive JS5_AUDIOSTREAMS;
        static Js5Archive JS5_WORLDMAPAREADATA;
        static Js5Archive JS5_WORLDMAPLABELS;
        static int64_t JS5_TEXTURES_DIFFUSE_PNG;
        static int64_t JS5_TEXTURES_HDR_PNG;
        static int64_t JS5_TEXTURES_DIFFUSE_DXT;
        static int64_t JS5_TEXTURES_HDR_NORMAL_PNG;
        static Js5Archive JS5_MODELSRT7;
        static Js5Archive JS5_ANIMSRT7;
        static Js5Archive JS5_DBTABLEINDEX;
        static int64_t JS5_TEXTURES_HDR_NORMAL_DXT;
        static int64_t JS5_TEXTURES_DIFFUSE_PNG_MIPPED;
        static Js5Archive JS5_TEXTURES_DXT;
        static Js5Archive JS5_TEXTURES_PNG_MIPPED;
        static Js5Archive JS5_TEXTURES_ETC;
        static Js5Archive JS5_KEYFRAMES;
        static Js5Archive JS5_FONTMETRICS;
        static Js5Archive JS5_FONTMETRICSRT7;
        static Js5Archive JS5_TRUETYPEFONTS;
        static Js5Archive JS5_STYLESHEETS;
        static Js5Archive JS5_VFX;
        static Js5Archive JS5_ANIMSTATEMACHINES;
        static Js5Archive JS5_DEBUG_STRINGS;
        static Js5Archive JS5_UI_ANIMATIONS;
        static Js5Archive JS5_CUTSCENES2D;
        static int64_t JS5_ARCHIVESET;
        static int64_t archivesToLoad;

    private:
        Js5ArchiveSettings* field_0;
    };

    // 0x1039bbc88
    int64_t Js5Archive::JS5_ANIMS;

    // 0x1039bbc90
    Js5Archive Js5Archive::JS5_BASES;

    // 0x1039bbc98
    Js5Archive Js5Archive::JS5_CONFIG;

    // 0x1039bbca0
    Js5Archive Js5Archive::JS5_INTERFACES;

    // 0x1039bbca8
    Js5Archive Js5Archive::JS5_MAPS;

    // 0x1039bbcb0
    int64_t Js5Archive::JS5_MODELS;

    // 0x1039bbcb8
    Js5Archive Js5Archive::JS5_SPRITES;

    // 0x1039bbcc0
    Js5Archive Js5Archive::JS5_BINARY;

    // 0x1039bbcc8
    Js5Archive Js5Archive::JS5_CLIENTSCRIPTS;

    // 0x1039bbcd0
    Js5Archive Js5Archive::JS5_VORBIS;

    // 0x1039bbcd8
    Js5Archive Js5Archive::JS5_CONFIG_ACHIEVEMENT;

    // 0x1039bbce0
    Js5Archive Js5Archive::JS5_CONFIG_LOC;

    // 0x1039bbce8
    Js5Archive Js5Archive::JS5_CONFIG_ENUM;

    // 0x1039bbcf0
    Js5Archive Js5Archive::JS5_CONFIG_NPC;

    // 0x1039bbcf8
    Js5Archive Js5Archive::JS5_CONFIG_OBJ;

    // 0x1039bbd00
    Js5Archive Js5Archive::JS5_CONFIG_SEQ;

    // 0x1039bbd08
    Js5Archive Js5Archive::JS5_CONFIG_SPOT;

    // 0x1039bbd10
    Js5Archive Js5Archive::JS5_CONFIG_STRUCT;

    // 0x1039bbd18
    Js5Archive Js5Archive::JS5_WORLDMAPDATA;

    // 0x1039bbd20
    Js5Archive Js5Archive::JS5_QUICKCHAT;

    // 0x1039bbd28
    Js5Archive Js5Archive::JS5_MATERIALS;

    // 0x1039bbd30
    Js5Archive Js5Archive::JS5_CONFIG_PARTICLE;

    // 0x1039bbd38
    Js5Archive Js5Archive::JS5_DEFAULTS;

    // 0x1039bbd40
    Js5Archive Js5Archive::JS5_CONFIG_BILLBOARD;

    // 0x1039bbd48
    int64_t Js5Archive::JS5_LOADING_SPRITES;

    // 0x1039bbd50
    int64_t Js5Archive::JS5_LOADING_SCREENS;

    // 0x1039bbd58
    int64_t Js5Archive::JS5_LOADING_SPRITES_RAW;

    // 0x1039bbd60
    int64_t Js5Archive::JS5_CUTSCENES;

    // 0x1039bbd68
    Js5Archive Js5Archive::JS5_AUDIOSTREAMS;

    // 0x1039bbd70
    Js5Archive Js5Archive::JS5_WORLDMAPAREADATA;

    // 0x1039bbd78
    Js5Archive Js5Archive::JS5_WORLDMAPLABELS;

    // 0x1039bbd80
    int64_t Js5Archive::JS5_TEXTURES_DIFFUSE_PNG;

    // 0x1039bbd88
    int64_t Js5Archive::JS5_TEXTURES_HDR_PNG;

    // 0x1039bbd90
    int64_t Js5Archive::JS5_TEXTURES_DIFFUSE_DXT;

    // 0x1039bbd98
    int64_t Js5Archive::JS5_TEXTURES_HDR_NORMAL_PNG;

    // 0x1039bbda0
    Js5Archive Js5Archive::JS5_MODELSRT7;

    // 0x1039bbda8
    Js5Archive Js5Archive::JS5_ANIMSRT7;

    // 0x1039bbdb0
    Js5Archive Js5Archive::JS5_DBTABLEINDEX;

    // 0x1039bbdb8
    int64_t Js5Archive::JS5_TEXTURES_HDR_NORMAL_DXT;

    // 0x1039bbdc0
    int64_t Js5Archive::JS5_TEXTURES_DIFFUSE_PNG_MIPPED;

    // 0x1039bbdc8
    Js5Archive Js5Archive::JS5_TEXTURES_DXT;

    // 0x1039bbdd0
    Js5Archive Js5Archive::JS5_TEXTURES_PNG_MIPPED;

    // 0x1039bbdd8
    Js5Archive Js5Archive::JS5_TEXTURES_ETC;

    // 0x1039bbde0
    Js5Archive Js5Archive::JS5_KEYFRAMES;

    // 0x1039bbde8
    Js5Archive Js5Archive::JS5_FONTMETRICS;

    // 0x1039bbdf0
    Js5Archive Js5Archive::JS5_FONTMETRICSRT7;

    // 0x1039bbdf8
    Js5Archive Js5Archive::JS5_TRUETYPEFONTS;

    // 0x1039bbe00
    Js5Archive Js5Archive::JS5_STYLESHEETS;

    // 0x1039bbe08
    Js5Archive Js5Archive::JS5_VFX;

    // 0x1039bbe10
    Js5Archive Js5Archive::JS5_ANIMSTATEMACHINES;

    // 0x1039bbe18
    Js5Archive Js5Archive::JS5_DEBUG_STRINGS;

    // 0x1039bbe20
    Js5Archive Js5Archive::JS5_UI_ANIMATIONS;

    // 0x1039bbe28
    Js5Archive Js5Archive::JS5_CUTSCENES2D;

    // 0x1039bbe30
    int64_t Js5Archive::JS5_ARCHIVESET;

    // 0x1039bbe38
    int64_t Js5Archive::archivesToLoad;

    // 0x100561e10
    void Js5Archive::Initialise(Array<bool>* arg1) {
        MapArea* pMVar3;
        long lVar4;
        uint8_t** ppuVar5;
        unsigned int in_stack_ffffffffffffffac;
        char* in_stack_ffffffffffffffb8;

        uint8_t* puVar6 = Priority::NONE;
        char* str = Priority::LOW;
        auto pRVar2 = arg1->InstancePtr();
        uint8_t* puVar7 = puVar6;
        if (pRVar2 != nullptr) {
            pMVar3 = (MapArea*)arg1->Instance();
            lVar4 = pMVar3->GetOrigin();
            ppuVar5 = &Priority::LOW;
            if (*(char*)(lVar4 + 161) == '\0') {
                ppuVar5 = &Priority::NONE;
            }
            puVar6 = *ppuVar5;
            pMVar3 = (MapArea*)pMVar3->Instance();
            lVar4 = pMVar3->GetOrigin();
            ppuVar5 = &Priority::LOW;
            if (*(char*)(lVar4 + 162) == '\0') {
                ppuVar5 = &Priority::NONE;
            }
            puVar7 = *ppuVar5;
        }
        Js5ArchiveSetSettings* js5ArchiveSetSettings = (Js5ArchiveSetSettings*)operator new(48);
        *(uint64_t*)js5ArchiveSetSettings = 0;
        *(uint64_t*)&js5ArchiveSetSettings->field_8 = 0;
        *(uint64_t*)&js5ArchiveSetSettings->field_16 = 0;
        *(uint64_t*)&js5ArchiveSetSettings->field_24 = 0;
        *(uint64_t*)&js5ArchiveSetSettings->field_32 = 0;
        *(uint64_t*)&js5ArchiveSetSettings->field_40 = 0;
        new (js5ArchiveSetSettings) Js5ArchiveSetSettings();
        JS5_ARCHIVESET = js5ArchiveSetSettings;
        archivesToLoad = arg1;
        InitialiseArchive((Js5Archive*)&JS5_BASES, (Js5ArchiveSettings**)&DAT_00000001, (unsigned int)Priority::HIGHEST,
                          nullptr, (uint8_t)(EncodeType::NONE), nullptr, true, 14501334, in_stack_ffffffffffffffb8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG, (Js5ArchiveSettings**)2, (unsigned int)Priority::HIGHEST,
                          (Priority*)16, 1, (uint8_t)(EncodeType::NONE),
                          (EncodeType*)((unsigned long)in_stack_ffffffffffffffac << 32), true, 14501351, str);
        char* pcVar8 = "client.interfaces.js5";
        InitialiseArchive((Js5Archive*)&JS5_INTERFACES, (Js5ArchiveSettings**)3, (unsigned int)Priority::HIGHEST,
                          (Priority*)11, 1, (uint8_t)(EncodeType::NONE),
                          (EncodeType*)((unsigned long)in_stack_ffffffffffffffac << 32), true, 14501369, str);
        InitialiseArchive((Js5Archive*)&JS5_MAPS, (Js5ArchiveSettings**)5, (unsigned int)Priority::HIGHEST, nullptr,
                          (uint8_t)(EncodeType::NONE), nullptr, true, 14501391, pcVar8);
        pcVar8 = "client.sprites.js5";
        InitialiseArchive((Js5Archive*)&JS5_SPRITES, (Js5ArchiveSettings**)8, (unsigned int)Priority::LOW,
                          (Priority*)15, 0, (uint8_t)(EncodeType::NONE),
                          (EncodeType*)((unsigned long)in_stack_ffffffffffffffac << 32), true, 14501409, str);
        InitialiseArchive((Js5Archive*)&JS5_BINARY, (Js5ArchiveSettings**)10, (unsigned int)Priority::HIGHEST, nullptr,
                          (uint8_t)(EncodeType::NONE), nullptr, true, 14501428, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CLIENTSCRIPTS, (Js5ArchiveSettings**)12, (unsigned int)Priority::HIGHEST,
                          (Priority*)10, 1, (uint8_t)(EncodeType::NONE),
                          (EncodeType*)((unsigned long)in_stack_ffffffffffffffac << 32), true, 14501446, str);
        pcVar8 = "client.fontmetrics.js5";
        InitialiseArchive((Js5Archive*)&JS5_FONTMETRICS, (Js5ArchiveSettings**)13, (unsigned int)Priority::HIGHEST,
                          (Priority*)13, 0, (uint8_t)(EncodeType::NONE),
                          (EncodeType*)((unsigned long)in_stack_ffffffffffffffac << 32), true, 14501465, str);
        InitialiseArchive((Js5Archive*)&JS5_VORBIS, (Js5ArchiveSettings**)14, (unsigned int)Priority::NONE, nullptr,
                          (uint8_t)(EncodeType::NONE), nullptr, true, 14501488, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_LOC, (Js5ArchiveSettings**)16, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501502, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_ENUM, (Js5ArchiveSettings**)17, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501524, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_NPC, (Js5ArchiveSettings**)18, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501547, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_OBJ, (Js5ArchiveSettings**)19, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501569, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_SEQ, (Js5ArchiveSettings**)20, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501591, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_SPOT, (Js5ArchiveSettings**)21, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501613, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_STRUCT, (Js5ArchiveSettings**)22, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501636, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_WORLDMAPDATA, (Js5ArchiveSettings**)23, (unsigned int)Priority::LOW,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501661, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_QUICKCHAT, (Js5ArchiveSettings**)24, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501681, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_MATERIALS, (Js5ArchiveSettings**)26, (unsigned int)Priority::HIGHEST,
                          nullptr, (uint8_t)(EncodeType::NONE), nullptr, true, 14501702, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_PARTICLE, (Js5ArchiveSettings**)27, (unsigned int)Priority::HIGHEST,
                          nullptr, (uint8_t)(EncodeType::NONE), nullptr, true, 14501723, pcVar8);
        pcVar8 = "client.defaults.js5";
        InitialiseArchive((Js5Archive*)&JS5_DEFAULTS, (Js5ArchiveSettings**)28, (unsigned int)Priority::HIGHEST,
                          (Priority*)14, 0, (uint8_t)(EncodeType::NONE),
                          (EncodeType*)((unsigned long)in_stack_ffffffffffffffac << 32), true, 14501744, str);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_BILLBOARD, (Js5ArchiveSettings**)29, (unsigned int)Priority::HIGHEST,
                          nullptr, (uint8_t)(EncodeType::NONE), nullptr, true, 14501764, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_AUDIOSTREAMS, (Js5ArchiveSettings**)40, (unsigned int)Priority::NONE,
                          nullptr, (uint8_t)(EncodeType::NONE), (EncodeType*)&DAT_00000001, true, 14501786, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_WORLDMAPAREADATA, (Js5ArchiveSettings**)41, (unsigned int)Priority::HIGH,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501806, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_WORLDMAPLABELS, (Js5ArchiveSettings**)42, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501831, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_MODELSRT7, (Js5ArchiveSettings**)47, (unsigned int)Priority::HIGH, nullptr,
                          (uint8_t)(EncodeType::NONE), nullptr, true, 14501857, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_ANIMSRT7, (Js5ArchiveSettings**)48, (unsigned int)Priority::HIGH, nullptr,
                          (uint8_t)(EncodeType::NONE), nullptr, true, 14501878, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_DBTABLEINDEX, (Js5ArchiveSettings**)49, (unsigned int)Priority::HIGHEST,
                          (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE), nullptr, true, 14501898, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_TEXTURES_DXT, (Js5ArchiveSettings**)52, (unsigned int)puVar6, nullptr,
                          (uint8_t)(EncodeType::DXT), nullptr, true, 14501922, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_TEXTURES_PNG_MIPPED, (Js5ArchiveSettings**)54, (unsigned int)str, nullptr,
                          (uint8_t)(EncodeType::PNG_MIPPED), nullptr, true, 14501946, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_TEXTURES_ETC, (Js5ArchiveSettings**)55, (unsigned int)puVar7, nullptr,
                          (uint8_t)(EncodeType::ETC), nullptr, true, 14501977, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_KEYFRAMES, (Js5ArchiveSettings**)56, (unsigned int)Priority::HIGH, nullptr,
                          (uint8_t)(EncodeType::NONE), nullptr, true, 14502001, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_CONFIG_ACHIEVEMENT, (Js5ArchiveSettings**)57,
                          (unsigned int)Priority::HIGHEST, (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE),
                          nullptr, true, 14502028, pcVar8);
        pcVar8 = "client.fonts.metrics.js5";
        InitialiseArchive((Js5Archive*)&JS5_FONTMETRICSRT7, (Js5ArchiveSettings**)58, (unsigned int)Priority::HIGHEST,
                          (Priority*)13, 0, (uint8_t)(EncodeType::NONE),
                          (EncodeType*)((unsigned long)in_stack_ffffffffffffffac << 32), true, 14502058, str);
        InitialiseArchive((Js5Archive*)&JS5_TRUETYPEFONTS, (Js5ArchiveSettings**)59, (unsigned int)Priority::HIGHEST,
                          nullptr, (uint8_t)(EncodeType::NONE), nullptr, true, 14502083, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_STYLESHEETS, (Js5ArchiveSettings**)60, (unsigned int)Priority::HIGH,
                          nullptr, (uint8_t)(EncodeType::NONE), nullptr, true, 14502109, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_VFX, (Js5ArchiveSettings**)61, (unsigned int)Priority::LOW, nullptr,
                          (uint8_t)(EncodeType::NONE), nullptr, true, 14502132, pcVar8);
        InitialiseArchive((Js5Archive*)&JS5_ANIMSTATEMACHINES, (Js5ArchiveSettings**)62, (unsigned int)Priority::HIGH,
                          nullptr, (uint8_t)(EncodeType::NONE), nullptr, true, 14502147, pcVar8);
        if (game::Version::ConnectedServerMeetsVersion(928)) {
            InitialiseArchive((Js5Archive*)&JS5_UI_ANIMATIONS, (Js5ArchiveSettings**)65,
                              (unsigned int)Priority::HIGHEST, (Priority*)&DAT_00000001, (uint8_t)(EncodeType::NONE),
                              nullptr, true, 14502182, pcVar8);
            InitialiseArchive((Js5Archive*)&JS5_CUTSCENES2D, (Js5ArchiveSettings**)66, (unsigned int)Priority::LOW,
                              nullptr, (uint8_t)(EncodeType::NONE), nullptr, true, 14502215, pcVar8);
        }
        if (game::Version::ConnectedServerMeetsVersion(928)) {
            InitialiseArchive((Js5Archive*)&JS5_DEBUG_STRINGS, (Js5ArchiveSettings**)64,
                              (unsigned int)Priority::HIGHEST, nullptr, (uint8_t)(EncodeType::NONE), nullptr, true,
                              14502239, pcVar8);
        }
    }

    // 0x100562750
    void Js5Archive::InitialiseArchive(Js5ArchiveSettings*& arg1, unsigned int arg2, const Priority* priority,
                                       bool arg4, const EncodeType* encodeType, bool arg6,
                                       Js5DiskCacheFormat js5DiskCacheFormat, const char* str) {
        char* in_stack_fffffffffffffff0;

        InitialiseArchive(arg1, arg2, 99, (int)priority, arg4, (EncodeType*)((unsigned long)encodeType & 4294967295),
                          arg6, js5DiskCacheFormat, in_stack_fffffffffffffff0);
    }

    // 0x100562780
    void Js5Archive::InitialiseArchive(Js5ArchiveSettings*& arg1, unsigned int arg2, const Priority* priority, int arg4,
                                       bool arg5, const EncodeType* encodeType, bool arg7,
                                       Js5DiskCacheFormat js5DiskCacheFormat, const char* str) {
        char* pcVar2;
        uint32_t in_register_00000014;
        uint64_t in_register_00000089;
        uint32_t in_stack_0000001c;

        if (66 < (unsigned int)arg1) {
            LogAssert("archiveID < Js5Constants::NUM_FIXED_ARCHIVES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "Js5Archive.cpp",
                      182, nullptr);
        }
        if (archivesToLoad != (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
            if (archivesToLoad->end() <= ((unsigned long)arg1 & 4294967295)) {
                return;
            }
            pcVar2 = (char*)(*archivesToLoad)[(unsigned long)arg1 & 4294967295];
            if (*pcVar2 == '\0') {
                return;
            }
        }
        Js5ArchiveSettings* this_00 = (Js5ArchiveSettings*)operator new(64);
        new (this_00) Js5ArchiveSettings(
            (unsigned int)arg1, (Priority*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2), (int)priority,
            (uint8_t)arg4, (EncodeType*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5), encodeType._0_1_,
            (int)arg7, (char*)(((uint64_t)in_stack_0000001c << 32) | (uint32_t)js5DiskCacheFormat));
        field_0 = this_00;
        JS5_ARCHIVESET->Add(*this_00);
    }

    // 0x100562890
    void Js5Archive::Destroy() {
        safe_delete<Js5ArchiveSetSettings>((Js5ArchiveSetSettings**)&JS5_ARCHIVESET);
        safe_delete<Array<bool>>((Array<bool>**)&archivesToLoad);
    }

} // namespace jag
