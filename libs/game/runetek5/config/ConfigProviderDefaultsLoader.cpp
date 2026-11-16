// libs/game/runetek5/config/ConfigProviderDefaultsLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ConfigProviderDefaultsLoader.h"

namespace jag::game {
    // 0x100022b10: ConfigProviderDefaultsLoader::~ConfigProviderDefaultsLoader() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ConfigProviderDefaultsLoader::~ConfigProviderDefaultsLoader() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10056ae10
    uint64_t ConfigProviderDefaultsLoader::Service() {
        int* piVar1;
        DefaultsGroup defaultsGroup;
        ConfigProvider* pCVar2;
        uint8_t uVar4;
        uint32_t uVar6;
        uint64_t extraout_var;
        LODLevel* lodLevel1;
        LODLevel* lodLevel2;
        char* pcVar7;
        DefaultsGroup* pDVar8;
        PacketT<Array<unsigned char> _>* arg2;
        Logger* this_00;
        uint64_t uVar10;
        unsigned long arg1;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_50;
        unsigned int local_34;

        if (field_32 == 0) {
            uVar4 = (**(void (**)(...)) & ((Js5Index*)field_16->_vptr)->m_indexVersion)((Js5Index**)field_16,
                                                                                        (Js5ArchiveSettings*)&field_32);
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4) == DataStatus::NOTLOADED) {
                return 0;
            }
            lodLevel1 = (LODLevel*)std::array<bool, 8ul>::begin();
            lodLevel2 = (LODLevel*)std::array<bool, 8ul>::end();
            local_50[0] = (shared_ptr<oldscape::RSevenDebugPresetProvider>)0;
            eastl::fill<bool*, bool>(lodLevel1, lodLevel2, local_50);
            pCVar2 = field_8;
            piVar1 = &pCVar2->field_744;
            *piVar1 = *piVar1 + 8;
            piVar1 = &pCVar2->field_752;
            *piVar1 = *piVar1 - 1;
        }
        if (field_16->EnsureArchiveLoadedIfAvailableOnDisk() != '\0') {
            local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)&field_48 >> 8)) << 8) | (uint8_t)1);
            arg1 = 0;
            do {
                pcVar7 = &field_80[arg1];
                if (*pcVar7 == '\0') {
                    pDVar8 = &field_48[arg1];
                    defaultsGroup = *pDVar8;
                    local_50 = shared_ptr();
                    if ((uint8_t*)field_16->GetFile(local_50, *field_24, defaultsGroup, 0, (Priority*)Priority::HIGHEST,
                                                    true, false, false) == DataStatus::READY) {
                        arg2 = (PacketT<Array<unsigned char> _>*)*local_50;
                        ProvideDefault(defaultsGroup, *arg2);
                        *pcVar7 = '\x01';
                    } else {
                        local_34 = 0;
                    }
                }
                arg1 = arg1 + 1;
            } while (arg1 != 8);
            if ((local_34 & 1) != 0) {
                this_00 = logger::default_logger();
                uVar6 = field_24->GetX();
                uVar10 = field_24->GetSpritesArchive();
                this_00->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "config/ConfigProviderDefaultsLoader.cpp",
                             66, "ConfigProvider: Loaded all data for archive: %u (%s)", uVar6, uVar10);
                return 1;
            }
        }
        return 0;
    }

    // 0x10056b040
    void ConfigProviderDefaultsLoader::ProvideDefault(DefaultsGroup defaultsGroup,
                                                      PacketT<Array<unsigned char>>& arg2) {
        ReturnValue local_28;

        IncrementLoaded();
        switch (defaultsGroup) {
        case 1:
            local_28 = std::make_unique<MapDefaults, PacketT<Array<unsigned char>>&>(arg2);
            field_8->field_520 = local_28;
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/ConfigProviderDefaultsLoader.cpp",
                            113, nullptr);
        case 3:
            local_28 = std::make_unique<GraphicsDefaults, PacketT<Array<unsigned char>>&>(arg2);
            field_8->field_512 = local_28;
            break;
        case 4:
            local_28 = std::make_unique<AudioDefaults, PacketT<Array<unsigned char>>&>(arg2);
            field_8->field_504 = local_28;
            break;
        case 6:
            local_28 = std::make_unique<WearposDefaults, PacketT<Array<unsigned char>>&>(arg2);
            field_8->field_544 = local_28;
            break;
        case 7:
            local_28 = std::make_unique<MiniMenuDefaults, PacketT<Array<unsigned char>>&>(arg2);
            field_8->field_528 = local_28;
            break;
        case 9:
            local_28 = std::make_unique<SkillDefaults, PacketT<Array<unsigned char>>&>(arg2);
            field_8->field_536 = local_28;
            break;
        case 10:
            local_28 = std::make_unique<WorldMapDefaults, PacketT<Array<unsigned char>>&>(arg2);
            field_8->field_552 = local_28;
            break;
        case 12:
            local_28 = std::make_unique<CustomizationDefaults, PacketT<Array<unsigned char>>&>(arg2);
            field_8->field_560 = local_28;
        }
    }

} // namespace jag::game
