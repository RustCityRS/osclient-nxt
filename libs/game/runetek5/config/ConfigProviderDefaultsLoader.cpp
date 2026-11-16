// libs/game/runetek5/config/ConfigProviderDefaultsLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ConfigProviderDefaultsLoader.h"

namespace jag::game {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ConfigProviderDefaultsLoader::~ConfigProviderDefaultsLoader();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ConfigProviderDefaultsLoader::~ConfigProviderDefaultsLoader();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ConfigProviderDefaultsLoader::~ConfigProviderDefaultsLoader();

    // 0x10056ae10, 496 bytes, placed by class name and debug map
    // ConfigProviderDefaultsLoader::Service()
    undefined8 ConfigProviderDefaultsLoader::Service() {
        int* piVar1;
        uint uVar2;
        ConfigProvider* pCVar3;
        undefined4 uVar6;
        undefined* puVar7;
        bool* pbVar8;
        bool* pbVar9;
        char* pcVar10;
        uint* puVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        _func_decltype_nullptr* p_Var14;
        _func_decltype_nullptr* p_Var15;
        shared_ptr local_50;
        uint local_34;

        if (field_32 == 0) {
            puVar7 = (undefined*)(*(code*)field_16->field_0[4])(field_16, &field_32, field_24);
            if (puVar7 == DataStatus::NOTLOADED) {
                return 0;
            }
            pbVar8 = (bool*)(&field_80)->begin();
            pbVar9 = (bool*)(&field_80)->end();
            local_50._0_1_ = 0;
            eastl::fill<bool*, bool>(pbVar8, pbVar9, (bool*)&local_50);
            pCVar3 = field_8;
            piVar1 = &pCVar3->field_744;
            *piVar1 = *piVar1 + 8;
            piVar1 = &pCVar3->field_752;
            *piVar1 = *piVar1 + -1;
        }
        if ((*(code*)field_16->field_0[8])(field_16, field_24) != '\0') {
            local_34 = (uint)CONCAT71((int7)((ulong)&field_48 >> 8), 1);
            p_Var14 = (_func_decltype_nullptr*)0;
            do {
                pcVar10 = (char*)std::array<bool, 8ul>::operator[]((array<bool, 8ul>*)&field_80, (ulong)p_Var14);
                if (*pcVar10 == '\0') {
                    p_Var15 = p_Var14;
                    puVar11 = (uint*)std::array<DefaultsGroup, 8ul>::operator[]((array<DefaultsGroup, 8ul>*)&field_48,
                                                                                (ulong)p_Var14);
                    uVar2 = *puVar11;
                    new (&local_50) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var15);
                    puVar7 = (undefined*)(((ConfigProviderDefaultsLoader*)this)->field_16, &local_50,
                                          ((ConfigProviderDefaultsLoader*)this)->field_24, uVar2, 0,
                                          (Priority*)Priority::HIGHEST, true, false, false)
                                 ->GetFile();
                    if (puVar7 == DataStatus::READY) {
                        uVar12 = shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_50);
                        ProvideDefault((ConfigProviderDefaultsLoader*)this, uVar2, uVar12);
                        *pcVar10 = '\x01';
                    } else {
                        local_34 = 0;
                    }
                    local_50.~shared_ptr();
                }
                p_Var14 = p_Var14 + 1;
            } while (p_Var14 != (_func_decltype_nullptr*)8);
            if ((local_34 & 1) != 0) {
                uVar12 = logger::default_logger();
                uVar6 = (((ConfigProviderDefaultsLoader*)this)->field_24)->GetX();
                uVar13 = (((ConfigProviderDefaultsLoader*)this)->field_24)->GetSpritesArchive();
                logger::Logger::Log(uVar12, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/ConfigProviderDefaultsLoader.cpp",
                                    66, "ConfigProvider: Loaded all data for archive: %u (%s)", uVar6, uVar13);
                return 1;
            }
        }
        return 0;
    }

    // 0x10056b040, 480 bytes, placed by class name and debug map
    // ConfigProviderDefaultsLoader::ProvideDefault(DefaultsGroup, PacketT<Array<unsigned char, eastl::allocator> >&)
    void ConfigProviderDefaultsLoader::ProvideDefault(ConfigProviderBatchInterface* param_1, undefined4 param_2) {
        PacketT local_28[8];

        param_1->IncrementLoaded();
        switch (param_2) {
        case 1:
            std::make_unique<MapDefaults, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<MapDefaults, std::default_delete<MapDefaults>>::operator=(
                (unique_ptr<MapDefaults, std::default_delete<MapDefaults>>*)&param_1->field_8->field_520,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/ConfigProviderDefaultsLoader.cpp",
                            113, (char*)0);
        case 3:
            std::make_unique<GraphicsDefaults, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<GraphicsDefaults, std::default_delete<GraphicsDefaults>>::operator=(
                (unique_ptr<GraphicsDefaults, std::default_delete<GraphicsDefaults>>*)&param_1->field_8->field_512,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 4:
            std::make_unique<AudioDefaults, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<AudioDefaults, std::default_delete<AudioDefaults>>::operator=(
                (unique_ptr<AudioDefaults, std::default_delete<AudioDefaults>>*)&param_1->field_8->field_504,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 6:
            std::make_unique<WearposDefaults, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<WearposDefaults, std::default_delete<WearposDefaults>>::operator=(
                (unique_ptr<WearposDefaults, std::default_delete<WearposDefaults>>*)&param_1->field_8->field_544,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 7:
            std::make_unique<MiniMenuDefaults, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<MiniMenuDefaults, std::default_delete<MiniMenuDefaults>>::operator=(
                (unique_ptr<MiniMenuDefaults, std::default_delete<MiniMenuDefaults>>*)&param_1->field_8->field_528,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 9:
            std::make_unique<SkillDefaults, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<SkillDefaults, std::default_delete<SkillDefaults>>::operator=(
                (unique_ptr<SkillDefaults, std::default_delete<SkillDefaults>>*)&param_1->field_8->field_536,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 10:
            std::make_unique<WorldMapDefaults, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<WorldMapDefaults, std::default_delete<WorldMapDefaults>>::operator=(
                (unique_ptr<WorldMapDefaults, std::default_delete<WorldMapDefaults>>*)&param_1->field_8->field_552,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            break;
        case 12:
            std::make_unique<CustomizationDefaults, PacketT<Array<unsigned char, eastl::allocator>>&>(local_28);
            std::unique_ptr<CustomizationDefaults, std::default_delete<CustomizationDefaults>>::operator=(
                (unique_ptr<CustomizationDefaults, std::default_delete<CustomizationDefaults>>*)&param_1->field_8
                    ->field_560,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
        }
    }

} // namespace jag::game
