// libs/game/runetek5/scene/worldmap/WorldMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "WorldMap.h"

namespace jag::game {
    // 0x100d42bb4
    int32_t WorldMap::ZOOMLEVEL_CONTENT_MIN = 25;

    // 0x100d42bb8
    int32_t WorldMap::ZOOMLEVEL_CONTENT_MAX = 200;

    // 0x100d42bbc
    float WorldMap::ZOOMLEVEL_ENGINE_MIN = 2.0f;

    // 0x100d42bc0
    float WorldMap::ZOOMLEVEL_ENGINE_MAX = 16.0f;

    // 0x100d42bc4
    float WorldMap::ZOOMLEVEL_ENGINE_DEFAULT = 8.0f;

    // 0x100d42bc8
    int32_t WorldMap::MSI_MIN_SIZE[28] = {
        3, 0, 3, 0, 2, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 10, 20, 50, 60, 70, 80, 90, 100, 1007192201,
    };

    // 0x100f38398
    int64_t WorldMap::INV_MAPZONE_TEXEL_SIZE = 1040187392;

    // 0x1039b4ab4, set at startup by ___cxx_global_var_init.60
    WorldMap::MapElementInstance WorldMap::DUMMY_MEL_INSTANCE = MapElementInstance();

    // 0x1003c6720
    WorldMap::WorldMap(graphics::RT7Core& rt7Core, SceneManager& sceneManager, ConfigProvider& configProvider,
                       Js5ResourceProvider& js5ResourceProvider, graphics::FontManager& fontManager,
                       graphics::FontHelpers& fontHelpers)
        : field_8(rt7Core), field_16(sceneManager), field_24(configProvider), field_32(js5ResourceProvider),
          field_40(fontManager), field_48(fontHelpers), field_56(0), field_60(0), field_120(-1) {
        int local_38[2];

        new (&field_168) shared_ptr();
        field_184 = 0;
        field_188 = 0;
        field_192 = -1;
        field_196 = -1;
        field_200 = 4294967295;
        field_204 = 4294967295;
        field_208 = 4294967295;
        field_212 = 4294967295;
        field_216 = 4294967295;
        field_220 = 4294967295;
        field_224 = -1;
        field_228 = -1;
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 4294967295;
        field_244 = 4294967295;
        field_248 = 0.8;
        field_252 = 0.8;
        field_256 = false;
        new (&field_264) std::array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>();
        field_504 = -1;
        field_512 = nullptr;
        field_520 = 0;
        new (&field_528) Array<bool>();
        new (local_38) eastl::allocator("EASTL map");
        new (&field_552) eastl::map(*local_38);
        new (&field_600) eastl::vector_map<int, WorldMap::FlashState>();
        new (&field_640) eastl::vector_map<int, WorldMap::FlashState>();
        m_flashPerpetual = false;
        m_flashTicks = 50;
        m_flashLoops = 3;
        field_692 = false;
        field_693 = false;
        field_694 = false;
        field_695 = false;
        field_696 = false;
        field_697 = false;
        new (&field_704) eastl::vector<WorldMap::PendingLocationType>();
        field_736 = 0;
        new (&field_744) Array<bool>();
        new (&field_768) eastl::vector<WorldMap::ZoneDetails>();
        new (&field_800) Array<shared_ptr<MapElementType>>();
        field_824 = 0;
        new (&field_832) eastl::vector<WorldMap::TerrainUnderlayTexture>();
        new (&field_864) eastl::vector<unsigned char>();
        new (&field_912) eastl::vector<eastl::vector<WorldMap::OverlayTileData>>();
        new (&field_944) OverlayShapeData();
        new (field_4016) shared_ptr();
        field_4032 = true;
        new (&field_4040) eastl::vector<bool>();
        new (&field_4080) eastl::vector<int>();
        uint8_t* this_00 = &field_4112;
        new (this_00) eastl::vector<int>();
        new (&field_4144) eastl::vector<int>();
        uint8_t* this_01 = &field_4176;
        new (this_01) eastl::vector<int>();
        new (&field_4208) eastl::vector<bool>();
        *(uint8_t*)&this[1].field_24 = 1;
        _DAT_1039b4ac8 = 4294967295;
        field_4080.resize(6);
        local_38[0] = 0;
        this_00->push_back(*local_38);
        local_38[0] = 1;
        this_00->push_back(*local_38);
        local_38[0] = 2;
        this_00->push_back(*local_38);
        field_4144.resize(8);
        local_38[0] = 0;
        this_01->push_back(*local_38);
        local_38[0] = 1;
        this_01->push_back(*local_38);
        local_38[0] = 2;
        this_01->push_back(*local_38);
        local_38[0] = 0;
        this_01->push_back(*local_38);
        local_38[0] = 2;
        this_01->push_back(*local_38);
        local_38[0] = 3;
        this_01->push_back(*local_38);
        CreateRenderingResources();
    }

    // 0x1003c6d10
    void WorldMap::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10;
    }

    // 0x1003c6df0
    WorldMap::~WorldMap() {
        Reset(true);
        DestroyRenderingResources();
        field_4208.~vector();
        field_4176.~vector();
        field_4144.~vector();
        field_4112.~vector();
        field_4080.~vector();
        field_4040.~vector();
        field_4016->~shared_ptr();
        field_944.~OverlayShapeData();
        field_912.~vector();
        field_864.~vector();
        field_832.~vector();
        field_800.~Array();
        field_768.~vector();
        field_744.~Array();
        field_704.~vector();
        field_640.~vector_map();
        field_600.~vector_map();
        field_552.~map();
        field_528.~Array();
        field_264.~array();
        field_128.~Array();
        field_88.~vector();
        field_64.~Array();
    }

    // 0x1003c7050
    void WorldMap::Reset(bool arg1) {
        array<shared_ptr<graphics::Font>, 5ul>* this_01;
        long* plVar2;
        unsigned long arg1_00;
        uint64_t in_register_00000031;
        unsigned long arg1_01;

        field_56 = 0;
        field_600.clear();
        field_640.clear();
        field_4040.clear();
        field_64.clear();
        field_128.clear();
        field_768.clear();
        field_704.clear();
        field_736 = 0;
        field_744.clear();
        field_184 = 0;
        field_188 = 0;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) {
            arg1_01 = 0;
            do {
                this_01 = &field_264[arg1_01];
                arg1_00 = 0;
                do {
                    ((shared_ptr<graphics::Font>*)(*this_01)[arg1_00])->reset();
                    arg1_00 = arg1_00 + 1;
                } while (arg1_00 != 5);
                arg1_01 = arg1_01 + 1;
            } while (arg1_01 != 3);
        }
        field_88.clear();
        field_120 = -1;
        field_832.clear();
        field_912.clear();
        field_864.clear();
        uint8_t* this_00 = field_4016;
        if (this_00->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 16))(plVar2);
            this_00->reset();
        }
        field_800.clear();
        field_824 = 0;
    }

    // 0x1003c71b0
    void WorldMap::DestroyRenderingResources() {
        long* plVar2;
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        field_832.clear();
        uint8_t* this_00 = field_4016;
        if (this_00->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 16))(plVar2);
            this_00->reset();
        }
    }

    // 0x1003c73c0
    void WorldMap::CloseMap() {
        Reset(true);
    }

    // 0x1003c73d0
    void WorldMap::GetMapArea(CoordGrid& coordGrid) const {
        ((MapAreaList*)field_16->GetLogStreams())->GetAreaByCoordinate(coordGrid);
    }

    // 0x1003c7400
    void WorldMap::GetMapArea(int arg1) const {
        ((MapAreaList*)field_16->GetLogStreams())->GetAreaByID(arg1);
    }

    // 0x1003c7430
    void WorldMap::GetMapAreas(eastl::vector<MapArea*, BucketAllocatorEASTL>& mapAreas, CoordGrid& coordGrid) const {
        ((MapAreaList*)field_16->GetLogStreams())->GetAreasByCoordinate(mapAreas, coordGrid);
    }

    // 0x1003c7460
    void WorldMap::SetMap(int arg1, int arg2, int arg3, bool arg4) {
        int iVar1;
        int iVar2;
        int iVar3;
        MapAreaList* this_00;
        CommandLine* pCVar5;
        CoordMapSquare* this_01;

        if (field_24->GetWorldMapDefaults() != 0) {
            iVar1 = field_504;
            this_00 = (MapAreaList*)field_16->GetLogStreams();
            pCVar5 = (CommandLine*)this_00->GetAreaByID(arg1);
            if ((pCVar5 != nullptr) && (pCVar5 != field_512)) {
                field_504 = arg1;
                field_512 = pCVar5;
                this_01 = (CoordMapSquare*)field_24->GetWorldMapDefaults();
                iVar2 = field_512->GetPos();
                iVar3 = this_01->GetX();
                field_4032 = iVar2 == iVar3;
            }
            if (iVar1 != field_504) {
                Reset(false);
            }
            field_192 = arg2;
            field_196 = arg3;
            field_256 = arg4;
        }
    }

    // 0x1003c7560
    void WorldMap::ContentZoomToEngineZoom(int arg1) const {
        int local_c = arg1;
        local_c = math::Clamp<int>(local_c, ZOOMLEVEL_CONTENT_MIN, ZOOMLEVEL_CONTENT_MAX);
        math::Lerp<float, float>(ZOOMLEVEL_ENGINE_MIN, ZOOMLEVEL_ENGINE_MAX, (float)(local_c - 25) * 0.0057142857f);
    }

    // 0x1003c75b0
    int WorldMap::EngineZoomToContentZoom(float arg1) const {
        float fVar1 = math::Lerp<float, float>(25.0, 200.0, arg1 * 0.071428575f - 0.14285715f);
        fVar1 = (float)::floor(fVar1);
        return (int)fVar1;
    }

    // 0x1003c7610
    void WorldMap::SetZoomLevel(int arg1) {
        float fVar1 = (float)ContentZoomToEngineZoom(arg1);
        field_252 = fVar1;
        if (fVar1 != field_248) {
            field_208 = field_200;
            field_212 = field_204;
        }
    }

    // 0x1003c7650
    void WorldMap::GetZoomLevel() const {
        EngineZoomToContentZoom(field_252);
    }

    // 0x1003c7670
    void WorldMap::MainLogic(const CoordGrid& coordGrid, const PlayerVarDomain* playerVarDomain, bool arg3, bool arg4) {
        bool bVar4;
        int* piVar6;
        int local_34;
        int local_30[2];

        if (HandleLoading(coordGrid, playerVarDomain, arg3, arg4) == '\0') {
            return;
        }
        float fVar1 = field_248;
        float fVar2 = field_252;
        if (fVar1 == fVar2) {
        LAB_1003c76be:
            bVar4 = false;
        } else {
            if (fVar2 <= fVar1) {
                field_248 = fVar1 * 0.9;
                if (fVar2 <= fVar1 * 0.9)
                    goto LAB_1003c76be;
            } else {
                field_248 = fVar1 * 1.1;
                if (fVar1 * 1.1 <= fVar2)
                    goto LAB_1003c76be;
            }
            field_248 = fVar2;
            bVar4 = true;
        }
        local_30[1] = 8;
        unsigned int uVar3 = field_200;
        int iVar7 = field_208 - uVar3;
        if (iVar7 != 0) {
            local_34 = -iVar7;
            if (-iVar7 < 0) {
                local_34 = iVar7;
            }
            piVar6 = std::min<int>(*(local_30 + 1), local_34);
            field_200 = iVar7 / *piVar6 + uVar3;
            bVar4 = true;
        }
        uVar3 = field_204;
        iVar7 = field_212 - uVar3;
        if (iVar7 == 0) {
            if (!bVar4)
                goto LAB_1003c7774;
        } else {
            local_30[0] = -iVar7;
            if (-iVar7 < 0) {
                local_30[0] = iVar7;
            }
            piVar6 = std::min<int>(*(local_30 + 1), *local_30);
            field_204 = iVar7 / *piVar6 + uVar3;
        }
        CheckGridPosition();
    LAB_1003c7774:
        UpdateFlashList(field_600);
        UpdateFlashList(field_640);
        UpdateShouldRenderMapElementsList(playerVarDomain);
    }

    // 0x1003c77b0
    unsigned long WorldMap::HandleLoading(const CoordGrid& coordGrid, const PlayerVarDomain* playerVarDomain, bool arg3,
                                          bool arg4) {
        uint64_t unaff_R14;

        unsigned long uVar2 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (field_56 != 8) {
            if (field_512 != nullptr) {
                switch (field_56) {
                case 0:
                    if (LoadState_DataRequest()) {
                        field_56 = 1;
                    }
                    break;
                case 1:
                    LoadState_MapAreaInit(coordGrid);
                    field_56 = 2;
                    break;
                case 2:
                    if (LoadState_MapAreaLoad(playerVarDomain)) {
                        field_56 = 3;
                    }
                    break;
                case 3:
                    LoadState_F2POverlay();
                    field_56 = 4;
                    break;
                case 4:
                    if (LoadState_StaticElements(arg4, arg3)) {
                        field_56 = 5;
                    }
                    break;
                case 5:
                    if (LoadState_Fonts()) {
                        field_56 = 6;
                    }
                    break;
                case 6:
                    if (LoadState_CompositeMap()) {
                        field_56 = 7;
                    }
                    break;
                case 7:
                    if (LoadState_Underlay()) {
                        field_56 = 8;
                    }
                    break;
                default:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/worldmap/WorldMap.cpp",
                                    460, nullptr);
                }
            }
            uVar2 = 0;
        }
        return uVar2 & 4294967295;
    }

    // 0x1003c7910
    void WorldMap::CheckGridPosition() {
        unsigned int uVar1;

        if ((int)field_200 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = field_216;
            if ((int)field_200 <= (int)uVar1)
                goto LAB_1003c7938;
        }
        field_208 = uVar1;
        field_200 = uVar1;
    LAB_1003c7938:
        if ((int)field_204 < 0) {
            uVar1 = 0;
        } else {
            uVar1 = field_220;
            if ((int)field_204 <= (int)uVar1) {
                return;
            }
        }
        field_212 = uVar1;
        field_204 = uVar1;
    }

    // 0x1003c7960
    void WorldMap::UpdateFlashList(eastl::vector_map<int, WorldMap::FlashState>& arg1) {
        int iVar1;

        fixed_vector<int, 32ul> local_e0;
        auto arg1_00 = arg1.HeapBeginPtr();
        auto piVar2 = arg1.end();
        if (arg1_00 != piVar2) {
            do {
                iVar1 = arg1_00[2];
                arg1_00[2] = iVar1 - 1;
                if (iVar1 < 2) {
                    if ((arg1_00[1] < 2) && (m_flashPerpetual == false)) {
                        local_e0.push_back(*arg1_00);
                    } else {
                        arg1_00[1] = arg1_00[1] - 1;
                        arg1_00[2] = m_flashTicks;
                    }
                }
                arg1_00 = arg1_00 + 3;
            } while (arg1_00 != piVar2);
        }
        long lVar3 = local_e0.HeapBeginPtr();
        long lVar4 = local_e0.end();
        for (; lVar3 != lVar4; lVar3 = lVar3 + 4) {
            eastl::vector_map<int, WorldMap::FlashState>::erase(arg1);
        }
    }

    // 0x1003c7a90
    void WorldMap::UpdateShouldRenderMapElementsList(const PlayerVarDomain* playerVarDomain) {
        uint8_t* this_00;
        shared_ptr<MapElementType>* psVar3;
        shared_ptr<MapElementType>* psVar4;
        long lVar5;
        long lVar6;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_48;

        unsigned long long uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        if (9999 < uVar2 - field_824) {
            field_824 = uVar2;
            this_00 = &field_800;
            psVar3 = (shared_ptr<MapElementType>*)this_00->data();
            psVar4 = (shared_ptr<MapElementType>*)this_00->end();
            for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
                psVar3->reset();
            }
            lVar5 = field_88.HeapBeginPtr();
            lVar6 = field_88.end();
            if (lVar5 != lVar6) {
                do {
                    if (!(((*this_00)[(long)*(int*)(lVar5 + 32)])->operator_cast_to_bool())) {
                        local_48 = shared_ptr();
                        if (!(ShouldRenderMapElementType(local_48, playerVarDomain, *(int*)(lVar5 + 32)))) {
                            psVar3 = (shared_ptr<MapElementType>*)(*this_00)[(long)*(int*)(lVar5 + 32)];
                            psVar3->reset();
                        } else {
                            psVar3 = (shared_ptr<MapElementType>*)(*this_00)[(long)*(int*)(lVar5 + 32)];
                            *psVar3 = local_48;
                        }
                    }
                    lVar5 = lVar5 + 36;
                } while (lVar5 != lVar6);
            }
        }
    }

    // 0x1003c7c40
    void WorldMap::DoOverviewClick(float arg1, float arg2) {
        float* pfVar2;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;
        float local_18;
        float local_14;

        float fVar4 = (float)(int)field_216;
        float fVar3 = (float)(int)field_220;
        float fVar5 = fVar4 / fVar3;
        if (fVar5 <= 1.0) {
            if (fVar5 < 1.0) {
                local_28 = (1.0 / fVar5) * (arg1 - 0.5) + 0.5;
                local_24 = 1.0;
                local_1c = fVar3;
                local_18 = fVar4;
                local_14 = arg2;
                pfVar2 = std::min<float>(local_28, local_24);
                local_20 = 0.0;
                pfVar2 = std::max<float>(*pfVar2, local_20);
                arg1 = *pfVar2;
                arg2 = local_14;
                fVar3 = local_1c;
                fVar4 = local_18;
            }
        } else {
            local_28 = (1.0 / fVar5) * (arg2 - 0.5) + 0.5;
            local_24 = 1.0;
            local_1c = fVar3;
            local_18 = fVar4;
            local_14 = arg1;
            pfVar2 = std::min<float>(local_28, local_24);
            local_20 = 0.0;
            pfVar2 = std::max<float>(*pfVar2, local_20);
            arg2 = *pfVar2;
            arg1 = local_14;
            fVar3 = local_1c;
            fVar4 = local_18;
        }
        field_208 = (int)(arg1 * fVar4);
        field_200 = (int)(arg1 * fVar4);
        unsigned int uVar1 = (unsigned int)((1.0 - arg2) * fVar3);
        field_212 = uVar1;
        field_204 = uVar1;
        CheckGridPosition();
    }

    // 0x1003c7dc0
    uint32_t WorldMap::GetLoadPercentage() const {
        if (8 < (unsigned long)(long)field_56) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "worldmap/WorldMap.cpp",
                            371, nullptr);
        }
        return *(uint32_t*)(&reinterpret_cast<const uint64_t*>(&MSI_MIN_SIZE)[9] + (long)field_56 * 4);
    }

    // 0x1003c7e00
    bool WorldMap::LoadState_DataRequest() {
        uint8_t* this_00;
        FontManager* this_01;
        Js5ResourceProvider* pJVar1;
        uint64_t uVar2;
        WorldMap* pWVar3;
        int arg1;
        uint32_t uVar5;
        uint64_t extraout_var;
        eastl::string* str;
        uint8_t* puVar7;
        uint64_t extraout_var_00;
        shared_ptr<MapElementType>* this_03;
        uint8_t* puVar8;
        uint64_t extraout_var_01;
        int arg2;
        unsigned long arg1_00;
        bool bVar9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_60;

        WorldMap* local_40 = this;
        auto local_48 = field_24->GetWorldMapDefaults();
        int arg1_01 = 0;
        do {
            arg2 = 0;
            do {
                arg1 = local_48->GetFontID(arg1_01, arg2);
                this_01 = local_40->field_40;
                local_60 = shared_ptr();
                this_01->GetFont(arg1, local_60);
                pWVar3 = local_40;
                arg2 = arg2 + 1;
            } while (arg2 != 5);
            arg1_01 = arg1_01 + 1;
        } while (arg1_01 != 3);
        Js5Index* local_50 = nullptr;
        uint8_t uVar4 = (**(void (**)(...)) & ((Js5Index*)local_40->field_32->_vptr)->field_24)(
            (Js5Index**)local_40->field_32, (Js5ArchiveSettings*)&local_50);
        Js5Index* this_02 = local_50;
        if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4) == DataStatus::NOTLOADED) {
            bVar9 = false;
        } else {
            if ((uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar4) == DataStatus::MISSING) {
                LogAssert("status != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          486, nullptr);
            }
            str = (eastl::string*)pWVar3->field_512->GetScreen();
            if (this_02->GetGroupID<eastl::string>(pWVar3->field_60, *str) == (DataStatus*)DataStatus::MISSING) {
                LogAssert("status != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          489, nullptr);
            }
            puVar7 = (uint8_t*)pWVar3->field_32->GroupReady(*(Js5Archive::JS5_WORLDMAPAREADATA), pWVar3->field_60,
                                                            (Priority*)Priority::HIGHEST, true);
            uVar2 = Js5Archive::JS5_WORLDMAPDATA;
            if (puVar7 == DataStatus::MISSING) {
                LogAssert("status != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          493, nullptr);
            }
            pJVar1 = pWVar3->field_32;
            uVar5 = pWVar3->field_512->GetPos();
            uVar4 = pJVar1->FileReady((unsigned int)uVar2, 4, (Priority*)uVar5, (uint8_t)(Priority::HIGHEST));
            if ((uint8_t*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar4) == DataStatus::MISSING) {
                LogAssert("status != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          496, nullptr);
            }
            local_48 = (WorldMapDefaults*)pWVar3->field_24->GetConfigSize<MapElementType>(0);
            pWVar3 = local_40;
            puVar7 = DataStatus::NOTLOADED;
            if (local_48 != (WorldMapDefaults*)DataStatus::NOTLOADED) {
                if (local_48 == (WorldMapDefaults*)DataStatus::MISSING) {
                    LogAssert("status != DataStatus::MISSING",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/worldmap/WorldMap.cpp",
                              504, nullptr);
                }
                this_00 = &local_40->field_800;
                this_00->set_max_size((unsigned long)0, 0);
                pWVar3->field_528.set_max_size((unsigned long)0, 0);
                if (0 != 0) {
                    arg1_00 = 0;
                    do {
                        local_60 = shared_ptr();
                        this_03 = (shared_ptr<MapElementType>*)(*this_00)[arg1_00];
                        *this_03 = local_60;
                        puVar8 = &pWVar3->field_528[arg1_00];
                        *puVar8 = 0;
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 < 0);
                }
                uVar2 = Js5Archive::JS5_WORLDMAPDATA;
                pJVar1 = local_40->field_32;
                uVar5 = local_40->field_512->GetPos();
                uVar4 = pJVar1->FileReady((unsigned int)uVar2, 2, (Priority*)uVar5, (uint8_t)(Priority::HIGHEST));
                if ((uint8_t*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar4) == DataStatus::MISSING) {
                    LogAssert("status != DataStatus::MISSING",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/worldmap/WorldMap.cpp",
                              514, nullptr);
                }
            }
            bVar9 = local_48 != (WorldMapDefaults*)puVar7;
        }
        return bVar9;
    }

    // 0x1003c8160
    uint64_t WorldMap::LoadState_MapAreaInit(const CoordGrid& coordGrid) {
        unsigned int uVar1;
        MapArea* this_00;
        CoordGrid* coordGrid2;
        uint8_t* pbVar8;
        unsigned long uVar9;
        unsigned long arg1_00;
        CoordGrid local_48;
        CoordGrid local_38;

        auto pCVar5 = field_512->GetDefaultMaterial();
        unsigned int uVar3 = pCVar5->GetX();
        field_232 = uVar3 & 4294967232;
        pCVar5 = (CoordMapSquare*)field_512->GetDefaultMaterial();
        uVar3 = pCVar5->GetZ();
        field_236 = uVar3 & 4294967232;
        auto pRVar6 = field_512->GetDefaultMaterial();
        uVar3 = pRVar6->Right();
        field_216 = ((uVar3 & 4294967232) - field_232) + 64;
        pRVar6 = (Rect<int>*)field_512->GetDefaultMaterial();
        uVar3 = pRVar6->MaxZ();
        uVar3 = ((uVar3 & 4294967232) - field_236) + 64;
        field_220 = uVar3;
        int iVar10 = (int)field_216 >> 3;
        field_224 = iVar10;
        int iVar4 = (int)uVar3 >> 3;
        field_228 = iVar4;
        unsigned long uVar11 = (unsigned long)(iVar4 * iVar10);
        field_64.set_max_size(uVar11, 0);
        field_128.set_max_size(uVar11, 0);
        field_240 = 4294967295;
        field_244 = 4294967295;
        CoordGrid local_58;
        if (field_512->GetTargetCoord(local_58, coordGrid)) {
            field_240 = local_58.field_4 - field_232;
            field_244 = local_58.field_8 - field_236;
        }
        if (field_256 == false) {
            uVar3 = field_240;
            if (((((int)uVar3 < 0) || ((int)field_216 <= (int)uVar3)) || (uVar1 = field_244, (int)uVar1 < 0)) ||
                ((int)field_220 <= (int)uVar1)) {
                local_38 = game::CoordGrid();
                this_00 = (MapArea*)field_512;
                coordGrid2 = (CoordGrid*)this_00->GetOrigin();
                if (this_00->GetTargetCoord(local_38, *coordGrid2)) {
                    field_200 = local_38.field_4 - field_232;
                    field_204 = local_38.field_8 - field_236;
                }
            } else {
                field_200 = uVar3;
                field_204 = uVar1;
            }
        } else {
            if ((field_192 == -1) || (field_196 == -1)) {
                LogAssert("m_loadOverrideMapGridX != -1 && m_loadOverrideMapGridZ != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          549, nullptr);
            }
            local_38 = oldscape::rs2lib::worldmap::LocationData(0, field_192, field_196);
            local_48 = game::CoordGrid();
            if (field_512->GetTargetCoord(local_48, local_38)) {
                field_200 = local_48.field_4 - field_232;
                field_204 = local_48.field_8 - field_236;
            }
            field_192 = -1;
            field_196 = -1;
            field_256 = false;
        }
        field_208 = field_200;
        field_212 = field_204;
        field_252 = 8.0;
        iVar4 = field_512->GetAdvisedZoom();
        if (iVar4 < 25) {
            iVar4 = field_512->GetAdvisedZoom();
            if (200 < iVar4)
                goto LAB_1003c8428;
        }
        WorldMap* this_01 = (WorldMap*)field_512;
        iVar4 = this_01->GetAdvisedZoom();
        field_252 = (float)ContentZoomToEngineZoom(this_01, iVar4);
    LAB_1003c8428:
        field_248 = field_252;
        CheckGridPosition();
        uint8_t* arg1 = &field_744;
        field_512->GetValidZones(*arg1, (int)field_232 >> 3, (int)field_236 >> 3, field_224, field_228);
        long lVar7 = arg1->end();
        uVar11 = 0;
        if (lVar7 != 0) {
            arg1_00 = 0;
            do {
                pbVar8 = (uint8_t*)(*arg1)[arg1_00];
                uVar3 = (int)uVar11 + (unsigned int)*pbVar8;
                uVar11 = (unsigned long)uVar3;
                arg1_00 = arg1_00 + 1;
                uVar9 = arg1->end();
            } while (arg1_00 < uVar9);
            uVar11 = (unsigned long)uVar3;
        }
        field_768.resize(uVar11);
        field_4040.resize((long)field_228 * (long)field_224);
        return 1;
    }

    // 0x1003c8500
    uint64_t WorldMap::LoadState_MapAreaLoad(const PlayerVarDomain* playerVarDomain) {
        PacketT<Array<unsigned char> _>* arg1;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;

        if (field_704.empty() != '\0') {
            local_38 = shared_ptr();
            if ((uint8_t*)field_32->GetFile(local_38, *(Js5Archive::JS5_WORLDMAPAREADATA), field_60, 0,
                                            (Priority*)Priority::HIGH, true, false, false) == DataStatus::NOTLOADED) {
                return 0;
            }
            arg1 = (PacketT<Array<unsigned char> _>*)*local_38;
            LoadAreaData(*arg1);
        }
        ProcessingPendingLocations(playerVarDomain);
        return field_704.empty();
    }

    // 0x1003c85e0
    uint64_t WorldMap::LoadState_F2POverlay() {
        char* pcVar3;
        unsigned long uVar4;
        int* piVar5;
        unsigned int uVar6;
        char cVar7;
        unsigned long uVar11;
        int local_44[3];
        int local_38;
        int local_34;

        int iVar8 = (int)field_216 >> 6;
        int iVar10 = (int)field_220 >> 6;
        field_4208.resize((long)(iVar10 * iVar8));
        unsigned int uVar9 = iVar8 - (unsigned int)(iVar8 * 8 != field_224);
        unsigned long uVar2 = 0;
        if (0 < (int)uVar9) {
            uVar6 = iVar10 - (unsigned int)(iVar10 * 8 != field_228);
            uVar11 = 0;
            uVar2 = (unsigned long)uVar6;
            do {
                if (0 < (int)uVar6) {
                    uVar4 = 0;
                    do {
                        local_44[0] = (int)uVar11 * 8 - 1;
                        local_44[2] = (int)uVar4 * 8 - 1;
                        local_38 = (int)uVar11 * 8 + 9;
                        uVar2 = uVar4 + 1;
                        local_34 = (int)uVar2 * 8 + 1;
                        local_44[1] = 0;
                        piVar5 = std::max<int>(*(local_44 + 1), *local_44);
                        iVar8 = *piVar5;
                        local_44[1] = 0;
                        local_44[0] = iVar8;
                        piVar5 = std::max<int>(*(local_44 + 1), *(local_44 + 2));
                        local_44[2] = *piVar5;
                        piVar5 = std::min<int>(field_224, local_38);
                        iVar10 = *piVar5;
                        local_38 = iVar10;
                        piVar5 = std::min<int>(field_228, local_34);
                        local_34 = *piVar5;
                        cVar7 = '\x01';
                        if (iVar8 < iVar10) {
                            cVar7 = '\x01';
                            do {
                                iVar10 = local_44[2];
                                if (local_44[2] < local_34) {
                                    do {
                                        if (IsF2PZone(iVar8, iVar10) != '\0') {
                                            cVar7 = '\0';
                                            break;
                                        }
                                        iVar10 = iVar10 + 1;
                                    } while (iVar10 < local_34);
                                }
                                iVar8 = iVar8 + 1;
                            } while ((iVar8 < local_38) && (cVar7));
                        }
                        pcVar3 = &field_4208[uVar4 * (long)(int)uVar9 + uVar11];
                        *pcVar3 = cVar7;
                        uVar4 = uVar2;
                    } while (uVar2 != uVar6);
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 != uVar9);
        }
        return 1;
    }

    // 0x1003c8800
    void WorldMap::LoadState_StaticElements(bool arg1, bool arg2) {
        LoadStaticMapElements(arg1 && arg2);
    }

    // 0x1003c8810
    bool WorldMap::LoadState_Fonts() {
        FontManager* this_00;
        bool cVar1;
        int iVar2;
        array<shared_ptr<graphics::Font>, 5ul>* this_01;
        shared_ptr* this_02;
        shared_ptr<graphics::Font>* font;
        unsigned long arg1_00;
        bool bVar3;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_68;
        array<shared_ptr<graphics::Font>, 5ul>* local_58;
        uint8_t local_31;

        auto local_48 = field_24->GetWorldMapDefaults();
        array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>* local_40 =
            (array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>*)&field_264;
        unsigned long arg1 = 0;
        do {
            this_01 = (array<shared_ptr<graphics::Font>, 5ul>*)(*local_40)[arg1];
            bVar3 = true;
            arg1_00 = 0;
            local_58 = this_01;
            do {
                this_02 = (shared_ptr*)(*this_01)[arg1_00];
                cVar1 = shared_ptr::operator_cast_to_bool(this_02);
                if (!cVar1) {
                    local_31 = bVar3;
                    iVar2 = local_48->GetFontID((int)arg1, (int)arg1_00);
                    this_00 = field_40;
                    local_68 = shared_ptr();
                    font = (shared_ptr<graphics::Font>*)this_00->GetFont(iVar2, local_68);
                    *this_02 = *font;
                    cVar1 = shared_ptr::operator_cast_to_bool(this_02);
                    this_01 = local_58;
                    if (!cVar1) {
                        iVar2 = 1;
                        if ((local_31 & 1) != 0)
                            goto LAB_1003c893d;
                        goto LAB_1003c892a;
                    }
                }
                bVar3 = arg1_00 < 4;
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 5);
            iVar2 = 5;
            if (bVar3)
                goto LAB_1003c893d;
        LAB_1003c892a:
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        iVar2 = 2;
    LAB_1003c893d:
        return iVar2 == 2;
    }

    // 0x1003c8970
    unsigned long WorldMap::LoadState_CompositeMap() {
        bool cVar2;
        char cVar3;
        uint64_t uVar5;
        shared_ptr<render::Texture2D> local_148;
        uint64_t local_138;
        unsigned int local_130;
        unsigned int local_12c;
        uint8_t local_128[152];
        RGBAImage local_90;

        PacketView local_170;
        Js5ArchiveSettings* js5ArchiveSettings = Js5Archive::JS5_WORLDMAPDATA;
        Js5ResourceProvider* this_01 = field_32;
        unsigned int arg4 = field_512->GetPos();
        auto puVar4 =
            this_01->GetFile(local_170, *js5ArchiveSettings, 2, arg4, (Priority*)Priority::HIGH, true, false, false);
        uint8_t* puVar1 = DataStatus::NOTLOADED;
        if (puVar4 != DataStatus::NOTLOADED) {
            if (puVar4 == DataStatus::MISSING) {
                LogAssert("dataStatus != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          724, nullptr);
            }
            local_90 = RGBAImage();
            cVar2 = PNGDecoder::LoadFromPacket(local_90, local_170);
            if (!cVar2) {
                this_01 = (Js5ResourceProvider*)logger::default_logger();
                new ((local_128 + 8)) logger::LogStream(LOGGER_WORLDMAP);
                field_512->GetScreen();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                ((uint8_t)this_01)
                    ->Log(nullptr, (int)local_128 + 8, 8, 14418213, 736,
                          "Failed to decode composite map PNG for map area %s", uVar5);
                ((local_128 + 8))->~LogStream();
            } else {
                new (local_128) callstack::Callstack();
                local_128->AddFormatType(5);
                this_01 = (Js5ResourceProvider*)&local_90;
                local_130 = this_01->GetX();
                local_12c = this_01->GetZ();
                local_138 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                                 this_01->GetDevCredentialsOutputDirectory())
                                ->data();
                cVar2 = this_01->GetX();
                cVar3 = this_01->GetZ();
                graphicutils::CreateHALTexture2D<render::Texture2D>(
                    (unsigned int)&local_148, local_130, (unsigned char*)(unsigned long)local_12c,
                    (unsigned int)local_138, 1, (bool)(cVar2 * cVar3 * '\x04'), false, true, (TextureFormatBitSet)0,
                    local_128._0_4_);
                *field_4016 = local_148;
            }
        }
        return puVar4 != puVar1 & 4294967295;
    }

    // 0x1003c8c50
    unsigned long WorldMap::LoadState_Underlay() {
        unsigned long uVar1;
        char cVar2;
        uint8_t bVar3;
        uint32_t uVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        long lVar9;
        unsigned long uVar11;
        void* pvVar12;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_02;
        void* pvVar13;
        Logger* pLVar14;
        uint64_t uVar15;
        WorldMap* pWVar16;
        vector<WorldMap::OverlayTileData>* this_03;
        uint8_t* pbVar17;
        vector<eastl::vector<WorldMap::OverlayTileData>>* local_150;
        uint8_t* local_148;
        uint8_t* local_140;
        unsigned int local_12c;
        unsigned int local_128;
        uint8_t local_121;
        LogStream local_120;
        RGBAImage local_90;

        PacketView local_178;
        Js5ArchiveSettings* js5ArchiveSettings = Js5Archive::JS5_WORLDMAPDATA;
        Js5ResourceProvider* this_00 = field_32;
        WorldMap* local_138 = this;
        unsigned int uVar4 = field_512->GetPos();
        auto puVar8 =
            this_00->GetFile(local_178, *js5ArchiveSettings, 4, uVar4, (Priority*)Priority::HIGH, true, false, false);
        uint8_t* puVar18 = DataStatus::NOTLOADED;
        if (puVar8 != DataStatus::NOTLOADED) {
            local_140 = DataStatus::NOTLOADED;
            if (puVar8 == DataStatus::MISSING) {
                LogAssert("dataStatus != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          751, nullptr);
            }
            uVar4 = local_178.g4();
            lVar9 = local_178.data();
            local_90 = RGBAImage();
            cVar2 = PNGDecoder::LoadFromPacket(local_90, local_178);
            if (!cVar2) {
                pLVar14 = logger::default_logger();
                local_120 = logger::LogStream(LOGGER_WORLDMAP);
                local_138->field_512->GetScreen();
                uVar15 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                ((uint8_t)pLVar14)
                    ->Log(nullptr, (LogLevel)&local_120, 8, 14418213, 771,
                          "Failed to decode underlay data PNG for map area %s", uVar15);
            } else {
                if (local_178.data() != lVar9 + (unsigned long)uVar4) {
                    LogAssert("underlayData.GetPos() == (pngDecodeStart + pngByteCount)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/worldmap/WorldMap.cpp",
                              758, nullptr);
                }
                uVar5 = local_90.GetX();
                pWVar16 = local_138;
                *(uint32_t*)&local_138->field_896 = uVar5;
                uVar4 = local_90.GetZ();
                *(unsigned int*)&pWVar16->field_900 = uVar4;
                pWVar16->field_904 = *(unsigned int*)&pWVar16->field_896 >> 6;
                pWVar16->field_908 = uVar4 >> 6;
                uVar11 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              local_90.GetDevCredentialsOutputDirectory())
                             ->end();
                pWVar16->field_864.resize(uVar11);
                pvVar12 = (void*)pWVar16->field_864.HeapBeginPtr();
                this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)
                              local_90.GetDevCredentialsOutputDirectory();
                pvVar13 = (void*)this_02->data();
                _memcpy(pvVar12, pvVar13, uVar11);
            }
            local_150 = (vector<eastl::vector<WorldMap::OverlayTileData>>*)&local_138->field_912;
            local_150->resize((long)local_138->field_908 * (long)local_138->field_904);
            local_148 = puVar8;
            while (true) {
                puVar8 = local_148;
                this = (WorldMap*)local_178.data();
                pWVar16 = (WorldMap*)ShuffledPacketFactory::p2_alt2();
                if (pWVar16 <= this)
                    break;
                uVar4 = local_178.g4();
                uVar6 = local_178.g4();
                uVar7 = local_178.g4();
                cVar2 = local_178.g1();
                local_121 = cVar2;
                bVar3 = local_178.g1();
                local_12c = uVar6 << 8 | uVar6 >> 24;
                local_128 = uVar7 << 8 | uVar7 >> 24;
                cVar2 = IsLittleEndian();
                if (cVar2) {
                    DoByteReorder<EndianSwap, int>(&local_12c);
                    DoByteReorder<EndianSwap, int>(&local_128);
                }
                uVar11 = (unsigned long)uVar4 / (unsigned long)local_138->field_216;
                uVar1 = (unsigned long)uVar4 % (unsigned long)local_138->field_216;
                this_03 = (vector<WorldMap::OverlayTileData>*)(*local_150)[(
                    unsigned long)(((unsigned int)uVar11 >> 6) * local_138->field_904 + ((unsigned int)uVar1 >> 6))];
                pbVar17 = (uint8_t*)this_03->push_back();
                *pbVar17 = (uint8_t)uVar1 & 63;
                pbVar17[1] = (uint8_t)uVar11 & 63;
                *(unsigned int*)(pbVar17 + 4) = local_12c;
                *(unsigned int*)(pbVar17 + 8) = local_128;
                pbVar17[12] = local_121;
                pbVar17[13] = bVar3;
            }
            puVar18 = local_140;
        }
        return puVar8 != puVar18 & 4294967295;
    }

    // 0x1003c9400
    void WorldMap::LoadAreaData(PacketT<Array<unsigned char>>& arg1) {
        unsigned int uVar1;
        uint8_t bVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        uint64_t uVar9;
        int iVar10;
        int iVar11;
        unsigned int uVar12;

        char cVar2 = arg1.g1();
        if (cVar2) {
            do {
                arg1.gSmart1or2();
                cVar2 = cVar2 - 1;
            } while (cVar2);
        }
        cVar2 = arg1.g1();
        if (cVar2) {
            do {
                arg1.gSmart1or2();
                cVar2 = cVar2 - 1;
            } while (cVar2);
        }
        unsigned long uVar7 = arg1.size();
        unsigned long uVar8 = arg1.GetTextureAtlas();
        if (uVar7 < uVar8) {
            do {
                cVar2 = arg1.g1();
                uVar4 = arg1.g1();
                uVar5 = arg1.g1();
                if (!cVar2) {
                    iVar10 = 0;
                    do {
                        bVar3 = arg1.g1();
                        uVar1 = field_232;
                        uVar12 = 0;
                        do {
                            uVar9 = field_4040[(unsigned long)((((uVar5 & 255) * 8 + uVar12) - ((int)field_236 >> 3)) *
                                                                   field_224 +
                                                               (((uVar4 & 255) * 8 + iVar10) - ((int)uVar1 >> 3)))];
                            *(bool*)uVar9 = (bVar3 >> (uVar12 & 31) & 1) != 0;
                            uVar12 = uVar12 + 1;
                        } while (uVar12 != 8);
                        iVar10 = iVar10 + 1;
                    } while (iVar10 != 8);
                    iVar10 = 0;
                    do {
                        iVar11 = 0;
                        do {
                            LoadTileData(arg1, '\0', '\0', (iVar10 + (uVar4 & 255) * 64) - field_232,
                                         ((uVar5 & 255) * 64 + iVar11) - field_236);
                            iVar11 = iVar11 + 1;
                        } while (iVar11 != 64);
                        iVar10 = iVar10 + 1;
                    } while (iVar10 != 64);
                } else {
                    uVar6 = arg1.g1();
                    bVar3 = arg1.g1();
                    uVar1 = field_232;
                    uVar12 = field_236;
                    cVar2 = arg1.g1();
                    uVar9 = field_4040[(long)(int)((((unsigned int)bVar3 + (uVar5 & 255) * 8) - ((int)uVar12 >> 3)) *
                                                       field_224 +
                                                   (((uVar6 & 255) + (uVar4 & 255) * 8) - ((int)uVar1 >> 3)))];
                    *(bool*)uVar9 = cVar2;
                    iVar10 = 0;
                    do {
                        iVar11 = 0;
                        do {
                            LoadTileData(arg1, '\0', '\0',
                                         ((uVar4 & 255) * 64 + (uVar6 & 255) * 8 + iVar10) - field_232,
                                         (iVar11 + (uVar5 & 255) * 64 + (unsigned int)bVar3 * 8) - field_236);
                            iVar11 = iVar11 + 1;
                        } while (iVar11 != 8);
                        iVar10 = iVar10 + 1;
                    } while (iVar10 != 8);
                }
                uVar7 = arg1.size();
                uVar8 = arg1.GetTextureAtlas();
            } while (uVar7 < uVar8);
        }
    }

    // 0x1003c9720
    void WorldMap::ProcessingPendingLocations(const PlayerVarDomain* playerVarDomain) {
        uint8_t* this_00;
        uint8_t bVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        uint8_t uVar5;
        uint8_t bVar6;
        int iVar7;
        unsigned long uVar8;
        shared_ptr<LocType>* groundDecor;
        LocType* pLVar9;
        shared_ptr<MapElementType>* groundDecor_00;
        vector<WorldMap::MSIInstance>* this_01;
        int* piVar10;
        unsigned int uVar11;
        int iVar12;
        shared_ptr local_98;
        shared_ptr local_88;
        ZoneLine local_78;
        DataStatus* local_60;
        CoordGrid* local_58;
        vector<WorldMap::ZoneLine>* local_50;
        uint8_t local_45;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        uint8_t local_31;

        char cVar4 = field_24->Ready();
        if (cVar4) {
            this_00 = &field_704;
            uVar11 = field_736;
            uVar8 = this_00->size();
            if (uVar11 < uVar8) {
                do {
                    local_58 = (CoordGrid*)(*this_00)[(unsigned long)field_736];
                    groundDecor = field_24->GetConfig<LocType>(*(int*)&local_58->field_12, &local_60);
                    local_88 = shared_ptr(groundDecor);
                    if (local_60 == (DataStatus*)DataStatus::MISSING) {
                        LogAssert("dataStatus != DataStatus::MISSING",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/worldmap/WorldMap.cpp",
                                  1007, nullptr);
                    }
                    cVar4 = shared_ptr::operator_cast_to_bool(&local_88);
                    iVar7 = 2;
                    if (cVar4) {
                        pLVar9 = (LocType*)local_88.operator->();
                        iVar7 = pLVar9->GetMapElement();
                        pLVar9 = (LocType*)local_88.operator->();
                        cVar4 = pLVar9->IsMultiLoc();
                        if (cVar4) {
                            local_78 = shared_ptr();
                            pLVar9 = (LocType*)local_88.operator->();
                            pLVar9->GetMultiLoc(local_78, playerVarDomain, field_24);
                            cVar4 = local_78.operator_cast_to_bool();
                            if (cVar4) {
                                pLVar9 = (LocType*)local_78.operator->();
                                iVar7 = pLVar9->GetMapElement();
                            }
                        }
                        if (iVar7 == -1) {
                            local_98 = shared_ptr();
                        LAB_1003c9904:
                            uVar11 = local_58->field_4;
                            uVar2 = local_58->field_8;
                            iVar7 = field_224;
                            pLVar9 = (LocType*)local_88.operator->();
                            iVar12 = ((int)uVar2 >> 3) * iVar7 + ((int)uVar11 >> 3);
                            iVar7 = pLVar9->GetMapSceneIcon();
                            if (iVar7 == -1) {
                                bVar1 = (uint8_t)local_58[1].field_0;
                                bVar6 = bVar1 & 63;
                                if (bVar6 != 3) {
                                    local_45 = bVar6;
                                    iVar7 = field_128.end();
                                    if (iVar7 <= iVar12) {
                                        LogAssert("mapZoneIndex < (int)m_linesByMapZone.size()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/game/runetek5/scene/worldmap/WorldMap.cpp",
                                                  1078, nullptr);
                                    }
                                    local_31 = bVar1;
                                    local_50 = &field_128[(long)iVar12];
                                    pLVar9 = (LocType*)local_88.operator->();
                                    local_31 = local_31 >> 6;
                                    local_3c = (float)((int)uVar11 % 8) * 0.125;
                                    local_44 = (float)((int)uVar2 % 8) * 0.125;
                                    local_38 = local_3c + 0.125;
                                    local_40 = local_44 + 0.125;
                                    cVar4 = pLVar9->IsActive();
                                    iVar7 = -858993409;
                                    if (cVar4) {
                                        iVar7 = -872414977;
                                    }
                                    if (local_45 == 9) {
                                        switch (local_31) {
                                        default:
                                            local_78 = ZoneLine(local_3c, local_38, local_44, local_40, iVar7);
                                            local_50->push_back(local_78);
                                            break;
                                        case 1:
                                        case 3:
                                            local_78 = ZoneLine(local_38, local_3c, local_44, local_40, iVar7);
                                            local_50->push_back(local_78);
                                        }
                                    } else if (local_45 == 2) {
                                        switch (local_31) {
                                        case 0:
                                            local_78 = ZoneLine(local_3c, local_3c, local_44, local_40, iVar7);
                                            local_50->push_back(local_78);
                                            local_78 = ZoneLine(local_3c, local_38, local_40, local_40, iVar7);
                                            local_50->push_back(local_78);
                                            break;
                                        case 1:
                                            local_78 = ZoneLine(local_3c, local_38, local_40, local_40, iVar7);
                                            local_50->push_back(local_78);
                                            local_78 = ZoneLine(local_38, local_38, local_40, local_44, iVar7);
                                            local_50->push_back(local_78);
                                            break;
                                        case 2:
                                            local_78 = ZoneLine(local_38, local_38, local_44, local_40, iVar7);
                                            local_50->push_back(local_78);
                                            local_78 = ZoneLine(local_3c, local_38, local_44, local_44, iVar7);
                                            local_50->push_back(local_78);
                                            break;
                                        case 3:
                                            local_78 = ZoneLine(local_3c, local_38, local_44, local_44, iVar7);
                                            local_50->push_back(local_78);
                                            local_78 = ZoneLine(local_3c, local_3c, local_44, local_40, iVar7);
                                            local_50->push_back(local_78);
                                        }
                                    } else if (local_45 == 0) {
                                        switch (local_31) {
                                        case 0:
                                            local_78 = ZoneLine(local_3c, local_3c, local_44, local_40, iVar7);
                                            local_50->push_back(local_78);
                                            break;
                                        case 1:
                                            local_78 = ZoneLine(local_3c, local_38, local_40, local_40, iVar7);
                                            local_50->push_back(local_78);
                                            break;
                                        case 2:
                                            local_78 = ZoneLine(local_38, local_38, local_44, local_40, iVar7);
                                            local_50->push_back(local_78);
                                            break;
                                        case 3:
                                            local_78 = ZoneLine(local_3c, local_38, local_44, local_44, iVar7);
                                            local_50->push_back(local_78);
                                        }
                                    }
                                }
                            } else {
                                this_01 = &field_64[(long)iVar12];
                                piVar10 = (int*)this_01->push_back();
                                piVar10[4] = local_58->field_8;
                                uVar3 = local_58->field_4;
                                piVar10[2] = local_58->field_0;
                                piVar10[3] = uVar3;
                                *piVar10 = (int)uVar11 % 8;
                                piVar10[1] = (int)uVar2 % 8;
                                pLVar9 = (LocType*)local_88.operator->();
                                iVar7 = pLVar9->GetMapSceneIcon();
                                piVar10[5] = iVar7;
                                piVar10[6] = *(int*)&local_58->field_12;
                                field_24->GetConfig<MSIType>(iVar7, &local_60);
                                if (local_60 == (DataStatus*)DataStatus::MISSING) {
                                    LogAssert("dataStatus != DataStatus::MISSING",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/scene/worldmap/WorldMap.cpp",
                                              1053, nullptr);
                                }
                                pLVar9 = (LocType*)local_88.operator->();
                                uVar5 = pLVar9->ShouldMapSceneIconMirror();
                                *(uint8_t*)((long)piVar10 + 29) = uVar5;
                                pLVar9 = (LocType*)local_88.operator->();
                                cVar4 = pLVar9->ShouldMapSceneIconRotate();
                                if (cVar4) {
                                    uVar11 = local_58[1].field_0;
                                    pLVar9 = (LocType*)local_88.operator->();
                                    cVar4 = pLVar9->GetMapSceneIconRotate90Offset();
                                    *(uint8_t*)(piVar10 + 7) = ((uint8_t)uVar11 >> 6) + cVar4 & 3;
                                }
                            }
                            cVar4 = shared_ptr::operator_cast_to_bool(&local_98);
                            iVar7 = 0;
                            if (cVar4) {
                                cVar4 = ((StaticPointLight*)local_98.operator->())->IsValid();
                                iVar7 = 4;
                                if (cVar4) {
                                    iVar7 = 0;
                                    AddMapElement(local_98, *local_58, false);
                                }
                            }
                        } else {
                            groundDecor_00 = field_24->GetConfig<MapElementType>(iVar7, &local_60);
                            local_98 = shared_ptr(groundDecor_00);
                            if (local_60 == (DataStatus*)DataStatus::MISSING) {
                                LogAssert("dataStatus != DataStatus::MISSING",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/worldmap/WorldMap.cpp",
                                          1029, nullptr);
                            }
                            cVar4 = shared_ptr::operator_cast_to_bool(&local_98);
                            iVar7 = 2;
                            if (cVar4)
                                goto LAB_1003c9904;
                        }
                    }
                    if (iVar7 == 2)
                        break;
                    uVar11 = field_736 + 1;
                    field_736 = uVar11;
                    uVar8 = this_00->size();
                } while (uVar11 < uVar8);
            }
            uVar11 = field_736;
            uVar8 = this_00->size();
            if (uVar8 <= uVar11) {
                this_00->clear();
            }
        }
    }

    // 0x1003c9f90
    bool WorldMap::IsF2PZone(int arg1, int arg2) {
        uint8_t* puVar1 = &field_4040[(long)(arg2 * field_224 + arg1)];
        return *puVar1;
    }

    // 0x1003c9fb0
    unsigned long WorldMap::LoadStaticMapElements(bool arg1) {
        bool bVar1;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer> _>>*
            pAVar3;
        long lVar4;
        long lVar5;
        CoordGrid* coordGrid2;
        shared_ptr* this_00;
        Logger* pLVar6;
        uint64_t uVar7;
        uint64_t in_register_00000031;
        uint64_t uVar9;
        LogStream* this_02;
        CoordGrid local_180;
        CoordGrid* local_170;
        DataStatus* local_168;
        unsigned int local_15c;
        LogStream local_158;
        LogStream local_c8;

        unsigned long uVar8 = (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295;
        if (!(field_512->AreStaticMapElementsLoaded())) {
            field_512->LoadStaticMapElements();
            uVar8 = 0;
        } else {
            pAVar3 = field_512->GetStaticMapElements();
            lVar4 = pAVar3->data();
            lVar5 = pAVar3->end();
            uVar9 = (uint64_t)((unsigned long)pAVar3 >> 8);
            if (lVar4 == lVar5) {
                bVar1 = true;
            } else {
                bVar1 = true;
                do {
                    if (((char)uVar8 != '\0') || (*(char*)(lVar4 + 16) == '\0')) {
                        field_24->GetConfig<MapElementType>(*(int*)(lVar4 + 12), &local_168);
                        if (local_168 == (DataStatus*)DataStatus::MISSING) {
                            LogAssert("dataStatus != DataStatus::MISSING",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/worldmap/WorldMap.cpp",
                                      1189, nullptr);
                        }
                        uVar9 = 0;
                        if (local_168 != (DataStatus*)DataStatus::READY) {
                            uVar9 = 0;
                            bVar1 = false;
                        }
                    }
                    lVar4 = lVar4 + 20;
                } while (lVar4 != lVar5);
            }
            if (bVar1) {
                pAVar3 = field_512->GetStaticMapElements();
                coordGrid2 = (CoordGrid*)pAVar3->data();
                local_170 = (CoordGrid*)pAVar3->end();
                if (coordGrid2 != local_170) {
                    local_15c = (unsigned int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
                    do {
                        if (((char)uVar8 != '\0') || ((char)coordGrid2[1].field_0 == '\0')) {
                            this_00 =
                                (shared_ptr*)field_24->GetConfig<MapElementType>(*(int*)&coordGrid2->field_12, nullptr);
                            if (!(shared_ptr::operator_cast_to_bool(this_00))) {
                                pLVar6 = logger::default_logger();
                                this_02 = &local_c8;
                                new (this_02) logger::LogStream(LOGGER_WORLDMAP);
                                field_512->GetScreen();
                                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                ((uint8_t)pLVar6)
                                    ->Log(nullptr, (LogLevel)this_02, 8, 14418213, 1211,
                                          "Invalid (STATIC) map element in map area %s at coord %d,%u,%u,%u,%u - "
                                          "unknown type %d",
                                          uVar7, coordGrid2->field_0, coordGrid2->field_4 >> 6,
                                          coordGrid2->field_8 >> 6, coordGrid2->field_4 & 63, coordGrid2->field_8 & 63,
                                          *(uint32_t*)&coordGrid2->field_12);
                            LAB_1003ca23a:
                                this_02->~LogStream();
                            } else {
                                if (((StaticPointLight*)(*this_00).operator->())->IsValid()) {
                                    local_180 = game::CoordGrid();
                                    if (!(field_512->GetTargetCoord(local_180, *coordGrid2))) {
                                        pLVar6 = logger::default_logger();
                                        this_02 = &local_158;
                                        new (this_02) logger::LogStream(LOGGER_WORLDMAP);
                                        field_512->GetScreen();
                                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                        ((uint8_t)pLVar6)
                                            ->Log(nullptr, (LogLevel)this_02, 8, 14418213, 1228,
                                                  "Invalid map element in map area %s at coord %d,%u,%u,%u,%u - not "
                                                  "within target area",
                                                  uVar7, coordGrid2->field_0, coordGrid2->field_4 >> 6,
                                                  coordGrid2->field_8 >> 6, coordGrid2->field_4 & 63,
                                                  coordGrid2->field_8 & 63);
                                        goto LAB_1003ca23a;
                                    }
                                    AddMapElement(*this_00, local_180, true);
                                }
                            }
                        }
                        coordGrid2 = (CoordGrid*)&coordGrid2[1].field_4;
                        uVar8 = (unsigned long)local_15c;
                    } while (coordGrid2 != local_170);
                }
            }
            uVar8 = (((uint64_t)uVar9 << 8) | (uint8_t)bVar1);
        }
        return uVar8 & 4294967295;
    }

    // 0x1003ca420
    void WorldMap::LoadTileData(PacketT<Array<unsigned char>>& arg1, unsigned char arg2, unsigned char arg3,
                                unsigned int arg4, unsigned int arg5) {
        uint8_t bVar1;
        bool cVar2;
        int iVar4;
        unsigned int arg1_00;
        CoordGrid local_60;
        unsigned int local_44;
        unsigned int local_38;

        unsigned int uVar3 = arg1.g1();
        unsigned long uVar5 = (unsigned long)uVar3;
        uint8_t local_31 = (uint8_t)uVar3;
        if ((uVar3 & 1) == 0) {
            iVar4 = (int)((uVar5 & 255) >> 2);
            if (iVar4 != 62) {
                if (iVar4 == 63) {
                    arg1.gSmart1or2();
                }
                if ((uVar3 & 2) != 0) {
                    arg1.gSmart1or2s();
                }
            }
        } else {
            bVar1 = (local_31 >> 1 & 3) + 1;
            uVar3 = (unsigned int)bVar1;
            arg1_00 = 0;
            local_38 = (unsigned int)bVar1;
            do {
                arg1.gSmart1or2s();
                if ((uVar5 & 8) != 0) {
                    arg1.gSmart1or2s();
                    arg1.g1();
                }
                if ((uVar5 & 16) != 0) {
                    bVar1 = arg1.g1();
                    local_60 = oldscape::rs2lib::worldmap::LocationData(arg1_00, arg4, arg5);
                    uVar3 = (unsigned int)bVar1;
                    local_44 = arg1_00;
                    if (arg1_00 == 0) {
                        if (uVar3 != 0) {
                            if (bVar1 == 1) {
                                iVar4 = arg1.gSmart2or4s();
                                cVar2 = arg1.g1s();
                                AddPendingLocation(local_60, iVar4, (int)cVar2);
                            } else {
                                do {
                                    iVar4 = arg1.gSmart2or4s();
                                    cVar2 = arg1.g1s();
                                    AddPendingLocation(local_60, iVar4, (int)cVar2);
                                    uVar3 = uVar3 - 1;
                                } while (uVar3 != 0);
                            }
                        }
                    } else {
                        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                            iVar4 = arg1.gSmart2or4s();
                            cVar2 = arg1.g1s();
                            AddPendingLocation(local_60, iVar4, (int)cVar2);
                        }
                    }
                    uVar5 = (unsigned long)local_31;
                    uVar3 = local_38;
                    arg1_00 = local_44;
                }
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != uVar3);
        }
    }

    // 0x1003ca5c0
    void WorldMap::AddPendingLocation(const CoordGrid& coordGrid, int arg2, int arg3) {
        PendingLocationType* pendingLocationType;

        pendingLocationType = (PendingLocationType*)field_704.push_back();
        *(uint64_t*)pendingLocationType = *(uint64_t*)coordGrid;
        *(unsigned int*)(pendingLocationType + 8) = coordGrid.field_8;
        *(int*)(pendingLocationType + 12) = arg2;
        *(int*)(pendingLocationType + 16) = arg3;
        field_704.push_back(*pendingLocationType);
    }

    // 0x1003ca930
    void WorldMap::AddMapElement(const shared_ptr<MapElementType>& mapElementType, const CoordGrid& coordGrid,
                                 bool arg3) {
        uint64_t in_register_00000009;
        long lVar5;
        CoordGrid local_40;

        int iVar2 = ((GameToken*)mapElementType.operator->())->GetStatus();
        local_40.field_8 = coordGrid.field_8;
        local_40.field_0 = coordGrid.field_0;
        local_40.field_4 = coordGrid.field_4;
        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) != 0) {
            local_40.field_4 = local_40.field_4 - field_232;
            local_40.field_8 = local_40.field_8 - field_236;
        }
        uint8_t* this_01 = &field_88;
        long lVar3 = this_01->HeapBeginPtr();
        long lVar4 = this_01->end();
        if (lVar3 != lVar4) {
            lVar3 = lVar3 + 16;
            do {
                if ((local_40 == (*((lVar3 + 4))) != '\0') && (*(int*)(lVar3 + 16) == iVar2)) {
                    return;
                }
                lVar5 = lVar3 + 20;
                lVar3 = lVar3 + 36;
            } while (lVar5 != lVar4);
        }
        lVar3 = this_01->push_back();
        *(uint64_t*)(lVar3 + 20) = local_40._0_8_;
        *(unsigned int*)(lVar3 + 28) = local_40.field_8;
        *(int*)(lVar3 + 32) = iVar2;
        *(uint16_t*)(lVar3 + 16) = 256;
    }

    // 0x1003caaa0
    uint8_t* WorldMap::GetLabelFont(int arg1) const {
        float fVar1;
        array<shared_ptr<graphics::Font>, 5ul>* this_00;
        unsigned long arg1_00;

        uint8_t* puVar2 = &graphics::Font::NullFont;
        if ((unsigned int)arg1 < 3) {
            fVar1 = field_252;
            arg1_00 = 4;
            if ((((fVar1 < 8.0) && (arg1_00 = 3, fVar1 < 6.0)) && (arg1_00 = 2, fVar1 < 4.0)) &&
                (arg1_00 = 1, fVar1 < 3.0)) {
                if (fVar1 < 2.0) {
                    return &graphics::Font::NullFont;
                }
                arg1_00 = 0;
            }
            this_00 = &field_264[(long)arg1];
            puVar2 = (uint8_t*)(*this_00)[arg1_00];
        }
        return puVar2;
    }

    // 0x1003cab60
    void WorldMap::MainDrawLoading(graphics::GUIManager& guiManager, math::Rect<int>& rect, const Language* language,
                                   int arg4) {
        TextProperties* this_00;
        int iVar1;
        FontManager* this_01;
        int iVar3;
        int iVar4;
        int iVar5;
        shared_ptr* this_02;
        char** arg1;
        uint8_t local_a8[16];
        uint8_t local_70[32];
        uint32_t local_48;
        float local_44;
        FontHelpers* local_40;
        TextFlags local_38;

        auto piVar6 = rect.second();
        field_184 = (int)((float)(*piVar6 * 2) / field_248);
        piVar6 = (int*)rect.qw();
        field_188 = (int)((float)(*piVar6 * 2) / field_248);
        if (field_512 != nullptr) {
            if (!(field_744.empty())) {
                guiManager.AddColouredRectangle(rect, 255, 0);
                iVar3 = GetLoadPercentage();
                local_44 = (float)iVar3;
                piVar6 = (int*)rect.SSOBeginPtr();
                iVar3 = *piVar6;
                iVar4 = rect.Right();
                piVar6 = (int*)rect.y();
                local_40 = (FontHelpers*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg4);
                iVar1 = *piVar6;
                iVar5 = rect.MaxZ();
                new (local_70) oldscape::dash3d::GridRect((iVar4 + iVar3) / 2 - 152, (iVar5 + iVar1) / 2 - 17, 304, 34);
                piVar6 = (int*)local_70->SSOBeginPtr();
                iVar3 = *piVar6;
                piVar6 = (int*)local_70->y();
                new (local_a8) oldscape::dash3d::GridRect(iVar3 + 2, *piVar6 + 2, (int)(local_44 * 3.0), 31);
                iVar3 = (int)local_40;
                guiManager.AddOutline(*local_70, 2, 2349928959, 0);
                guiManager.AddColouredRectangle(*local_a8, 2349928959, 0);
                if (iVar3 != -1) {
                    this_01 = field_40;
                    new ((local_a8 + 16)) shared_ptr();
                    this_02 = (shared_ptr*)this_01->GetFont(iVar3, *((local_a8 + 16)));
                    this_00 = (TextProperties*)(local_a8 + 16);
                    this_00->~shared_ptr();
                    if (shared_ptr::operator_cast_to_bool(this_02)) {
                        local_48 = 1;
                        local_38 = graphics::TextFlags(&local_48);
                        new (this_00) graphics::TextProperties(*this_02, local_38[0]);
                        this_00->SetAlignment(1, 1);
                        this_00->SetColour(4294967295);
                        local_40 = field_48;
                        arg1 = (char**)(*((array<char const*, 7ul>*)(unsigned long)language->field_8))[4294967295];
                        ((local_70 + 16))->StringView<char const*>(*arg1);
                        piVar6 = (int*)local_70->SSOBeginPtr();
                        iVar3 = *piVar6;
                        piVar6 = (int*)local_70->y();
                        iVar1 = *piVar6;
                        piVar6 = (int*)local_70->second();
                        iVar4 = *piVar6;
                        piVar6 = (int*)local_70->qw();
                        local_40->DrawStringMultiline((local_70 + 16), iVar3, iVar1, iVar4, *piVar6, nullptr, *this_00);
                    }
                }
            }
        }
    }

    // 0x1003cae50
    void WorldMap::MainDraw(graphics::GUIManager& guiManager, math::Rect<int>& rect, bool arg3) {
        uint8_t* this_00;
        bool bVar1;
        uint8_t* arg2;
        uint8_t auVar2[16];
        uint8_t uVar4;
        bool cVar5;
        unsigned int uVar6;
        int iVar7;
        uint32_t uVar8;
        int* piVar9;
        Array<bool>* pAVar10;
        Array<bool>* pAVar11;
        Texture* texture;
        Layout* this_01;
        float* pfVar12;
        float* pfVar13;
        WorldMap* this_02;
        vector<bool>* pvVar14;
        SpriteAtlasReference* pSVar15;
        WorldMap* pWVar16;
        MSIType* pMVar17;
        WorldMap* this_03;
        long lVar18;
        char* pcVar19;
        uint64_t in_register_00000009;
        int iVar20;
        unsigned int uVar21;
        shared_ptr* arg1;
        unsigned long uVar22;
        Vector2T<int>* pVVar23;
        Array<eastl::vector<WorldMap::MSIInstance>>* pAVar24;
        int iVar25;
        int iVar26;
        vector<bool>* pvVar27;
        unsigned long uVar28;
        int iVar29;
        float extraout_XMM0_Dc;
        float extraout_XMM0_Dd;
        float fVar30;
        ImVec4 local_120;
        uint8_t local_110[24];
        uint64_t local_f8;
        float fStack_f0;
        float fStack_ec;
        uint8_t local_e8[16];
        float local_d8;
        uint32_t uStack_d4;
        uint32_t uStack_d0;
        uint32_t uStack_cc;
        int* local_c0;
        uint64_t local_b8;
        float fStack_b0;
        float fStack_ac;
        int local_9c;
        unsigned long local_98;
        long local_90;
        WorldMap* local_80;
        int local_6c;
        shared_ptr* local_68;
        WorldMap* local_60;
        unsigned int local_54;
        unsigned long long local_50;
        WorldMap* local_40;
        float local_38;
        bool local_31;

        local_c0 = (int*)(((uint64_t)local_c0._4_4_ << 32) |
                          (uint32_t)((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3)));
        Array<bool>* local_48 = (Array<bool>*)&field_744;
        char cVar3 = local_48->empty();
        if (!cVar3) {
            piVar9 = (int*)rect.second();
            field_184 = (int)((float)(*piVar9 * 2) / field_248);
            piVar9 = (int*)rect.qw();
            field_188 = (int)((float)(*piVar9 * 2) / field_248);
            uVar6 = field_512->GetPickingPrepassType();
            iVar25 = 0;
            guiManager.AddColouredRectangle(rect, uVar6, 0);
            local_b8 = ceil(field_248 * 4.0);
            uVar6 = (unsigned int)(float)local_b8;
            uVar22 = (unsigned long)uVar6;
            local_80._0_4_ = (float)(int)field_200 * 0.125;
            local_40 =
                (WorldMap*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)(int)field_204 * 0.125 + 0.0625));
            fStack_b0 = extraout_XMM0_Dc;
            fStack_ac = extraout_XMM0_Dd;
            piVar9 = (int*)rect.SSOBeginPtr();
            iVar29 = *piVar9;
            piVar9 = (int*)rect.second();
            fStack_f0 = (float)(int)fStack_b0;
            fStack_ec = (float)(int)fStack_ac;
            local_f8 = (vector<bool>*)(((uint64_t)((float)(int)local_b8._4_4_) << 32) |
                                       (uint32_t)((float)(int)(float)local_b8));
            iVar29 = (int)((float)*piVar9 * 0.5 - local_80._0_4_ * (float)(int)(float)local_b8) + iVar29;
            piVar9 = (int*)rect.y();
            iVar26 = *piVar9;
            piVar9 = (int*)((QuaternionT<float>*)(Vector2T<int>*)rect)->qw();
            iVar7 = (int)field_216 >> 3;
            iVar20 = (int)field_220 >> 3;
            local_68 = (shared_ptr*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)iVar7);
            local_e8._0_4_ = iVar20;
            fVar30 = (float)(int)(iVar20 * uVar6);
            local_54 = (int)(local_40._0_4_ * (float)local_f8 + (float)*piVar9 * 0.5) + iVar26;
            local_50._0_4_ = 1.0 / (float)(int)(iVar7 * uVar6);
            local_b8 = (((uint64_t)local_b8._4_4_ << 32) | (uint32_t)((float)-iVar29 * (float)local_50));
            local_38 = 1.0 / fVar30;
            local_80 =
                (WorldMap*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)((fVar30 - (float)(int)local_54) * local_38));
            local_40 = this;
            piVar9 =
                (int*)((compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(Vector2T<int>*)
                           rect)
                    ->second();
            local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)((float)*piVar9 * (float)local_50));
            piVar9 = (int*)((QuaternionT<float>*)(Vector2T<int>*)rect)->qw();
            pVVar23 = (Vector2T<int>*)rect;
            field_168.Set((float)local_b8, local_80._0_4_, (float)local_50, (float)*piVar9 * local_38);
            piVar9 = (int*)pVVar23->SSOBeginPtr();
            fVar30 = 0.0;
            local_6c = iVar29;
            if (iVar29 <= (int)(*piVar9 - uVar6)) {
                fVar30 = 0.0;
                do {
                    fVar30 = (float)((int)fVar30 + 1);
                    iVar29 = iVar29 + uVar6;
                    piVar9 = (int*)pVVar23->SSOBeginPtr();
                } while (iVar29 <= (int)(*piVar9 - uVar6));
            }
            local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)iVar29);
            iVar29 = pVVar23->MaxZ();
            uVar21 = local_54;
            if ((int)(iVar29 + uVar6) <= (int)local_54) {
                iVar25 = 0;
                do {
                    iVar25 = iVar25 + 1;
                    uVar21 = uVar21 - uVar6;
                    iVar29 = pVVar23->MaxZ();
                } while ((int)(iVar29 + uVar6) <= (int)uVar21);
            }
            local_98 = (unsigned long)(uVar6 * 8);
            local_80 = (WorldMap*)&local_40->field_768;
            local_38 = 0.0;
            local_b8 = uVar22;
            if (iVar25 < (int)local_e8._0_4_) {
                local_38 = 0.0;
                local_d8 = fVar30;
                do {
                    fVar30 = local_d8;
                    piVar9 = (int*)pVVar23->y();
                    if ((int)uVar21 <= *piVar9)
                        break;
                    local_60 = (WorldMap*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar21);
                    local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)iVar25);
                    iVar29 = (int)(float)local_90;
                    if ((int)fVar30 < (int)local_68._0_4_) {
                        do {
                            iVar26 = pVVar23->Right();
                            pWVar16 = local_40;
                            if (iVar26 <= iVar29)
                                break;
                            iVar26 = (int)(float)local_50;
                            pcVar19 =
                                (char*)(*local_48)[(long)(local_40->field_224 * (int)(float)local_50 + (int)fVar30)];
                            if (*pcVar19 == '\0') {
                            } else {
                                uVar22 = (unsigned long)(int)local_38;
                                local_38 = (float)((int)local_38 + 1);
                                piVar9 = (int*)(*local_80)[uVar22];
                                *piVar9 = iVar29;
                                piVar9[1] = (int)local_60._0_4_;
                                piVar9[2] = (int)fVar30;
                                piVar9[3] = iVar26;
                                piVar9[4] = pWVar16->field_224 * iVar26 + (int)fVar30;
                                uVar4 = IsF2PZone(pWVar16, (int)fVar30, iVar26);
                                *(uint8_t*)((long)piVar9 + 25) = uVar4;
                                pVVar23 = (Vector2T<int>*)rect;
                            }
                            fVar30 = (float)((int)fVar30 + 1);
                            iVar29 = iVar29 + (int)local_b8;
                            uVar22 = local_b8;
                        } while (local_68._0_4_ != fVar30);
                    }
                    iVar25 = (int)(float)local_50 + 1;
                    uVar21 = (int)local_60._0_4_ - (int)uVar22;
                } while (iVar25 != local_e8._0_4_);
            }
            local_50 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            pWVar16 = local_40;
            UpdateTerrainTextures(local_40, local_50, local_6c, local_54, (int)local_98, (Rect<int>*)pVVar23);
            local_120 = ImVec4(0.0, 0.0, 1.0, 1.0);
            if (*(char*)&pWVar16[1].field_24 != '\0') {
                local_60 = (WorldMap*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)((float)local_40->field_904));
                local_68 = (shared_ptr*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)((float)local_40->field_908));
                this_00 = &local_40->field_832;
                pAVar10 = (Array<bool>*)this_00->HeapBeginPtr();
                pAVar11 = (Array<bool>*)this_00->end();
                if (pAVar10 != pAVar11) {
                    local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)(1.0 / local_60._0_4_));
                    local_d8 = 1.0 / local_68._0_4_;
                    local_68 = (shared_ptr*)local_40->field_4016;
                    local_e8 = (unsigned __int128)((unsigned int)local_d8);
                    local_d8 = -local_d8;
                    uStack_d4 = 2147483648;
                    uStack_d0 = 2147483648;
                    uStack_cc = 2147483648;
                    local_48 = pAVar11;
                    do {
                        if (*(unsigned long long*)(pAVar10 + 8) == local_50) {
                            iVar29 = (int)local_98;
                            iVar26 = *(int*)pAVar10 * iVar29 + local_6c;
                            iVar7 = local_54 - *(int*)(pAVar10 + 4) * iVar29;
                            cVar3 = ((pAVar10 + 24))->operator_cast_to_bool();
                            if (!cVar3) {
                                cVar3 = shared_ptr::operator_cast_to_bool(local_68);
                                if (!cVar3) {
                                    LoadState_CompositeMap(local_40);
                                }
                                cVar3 = shared_ptr::operator_cast_to_bool(local_68);
                                pAVar11 = local_48;
                                if (cVar3) {
                                    new (local_110) ImVec4((float)*(int*)pAVar10 * (float)local_90,
                                                           (float)*(int*)(pAVar10 + 4) * (float)local_e8._0_4_ +
                                                               (float)local_e8._0_4_,
                                                           (float)local_90, local_d8);
                                    iVar29 = (int)local_98;
                                    local_60 =
                                        (WorldMap*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)(iVar29 + iVar26));
                                    texture = (Texture*)local_68->end();
                                    ((GUIManager*)(WorldMap*)guiManager)
                                        ->AddElement(iVar26, iVar7 - iVar29, (int)local_60._0_4_, iVar7, 4294967295,
                                                     *local_110, texture, 0);
                                }
                            } else {
                                ((GUIManager*)(WorldMap*)guiManager)
                                    ->AddSprite(iVar26, iVar7 - iVar29, iVar29, iVar29, 4294967295, *((pAVar10 + 24)),
                                                0);
                                pAVar11 = local_48;
                            }
                        }
                        pAVar10 = pAVar10 + 40;
                    } while (pAVar10 != pAVar11);
                }
            }
            local_31 = false;
            local_50 = local_50 & 18446744069414584320;
            new (local_110) oldscape::dash3d::GridRect(0, 0, (int)local_b8, (int)local_b8);
            pWVar16 = (WorldMap*)guiManager;
            if ((char)local_c0 == '\0') {
                local_50 = (((uint64_t)local_50._4_4_ << 32) |
                            (uint32_t)((int)(((uint64_t)((int64_t)((unsigned long)local_40 >> 8)) << 8) |
                                             (uint8_t)(local_40->field_4032 != false))));
            }
            if (0 < (int)local_38) {
                local_48 = (Array<bool>*)&local_40->field_128;
                local_68 = (shared_ptr*)(unsigned long)(unsigned int)local_38;
                uVar22 = 0;
                do {
                    piVar9 = (int*)(*local_80)[uVar22];
                    if ((((uint8_t)local_50 & *(char*)((long)piVar9 + 25) == '\0') == 0) &&
                        ((cVar3 = GetTypeDisabled(local_40, &local_31, 1), !cVar3 || (local_31 == false)))) {
                        this_01 = (Layout*)(*local_48)[(long)piVar9[4]];
                        pfVar12 = (float*)this_01->HeapBeginPtr();
                        pfVar13 = (float*)this_01->end();
                        for (; pfVar12 != pfVar13; pfVar12 = pfVar12 + 5) {
                            pWVar16->AddGeneralLine(*pfVar12 * (float)local_f8 + (float)*piVar9,
                                                    (float)piVar9[1] - pfVar12[1] * (float)local_f8,
                                                    pfVar12[2] * (float)local_f8 + (float)*piVar9,
                                                    (float)piVar9[1] - pfVar12[3] * (float)local_f8, 1.0,
                                                    (unsigned int)pfVar12[4], 0, true);
                        }
                    }
                    uVar22 = uVar22 + 1;
                } while ((shared_ptr*)uVar22 != local_68);
            }
            pWVar16 = (WorldMap*)guiManager;
            this_02 = (WorldMap*)guiManager;
            ((GUIManager*)(WorldMap*)guiManager)->Render(nullptr);
            auVar2 = local_e8;
            if (0 < (int)local_38) {
                local_110._16_8_ = &local_40->field_64;
                local_e8._4_4_ = 0;
                local_e8._0_4_ = local_38;
                local_e8._8_8_ = auVar2._8_8_;
                arg1 = nullptr;
                do {
                    this_02 = local_80;
                    piVar9 = (int*)(*local_80)[(unsigned long)arg1];
                    local_68 = arg1;
                    if ((((uint8_t)local_50 & *(char*)((long)piVar9 + 25) == '\0') == 0) &&
                        ((this_02 = local_40, cVar3 = GetTypeDisabled(local_40, &local_31, 2),
                          !cVar3 || (local_31 == false)))) {
                        this_02 = (WorldMap*)(*local_110._16_8_)[(long)piVar9[4]];
                        pvVar14 = (vector<bool>*)this_02->HeapBeginPtr();
                        local_f8 = (vector<bool>*)this_02->end();
                        if (pvVar14 != local_f8) {
                            pvVar14 = pvVar14 + 29;
                            local_c0 = piVar9;
                            do {
                                iVar29 = *(int*)(pvVar14 - 29) * (int)(float)local_b8;
                                uVar8 = *(uint32_t*)(pvVar14 - 25);
                                pWVar16 =
                                    (WorldMap*)local_40->field_24->GetConfig<MSIType>(*(int*)(pvVar14 - 9), nullptr);
                                this_02 = pWVar16;
                                cVar3 = pWVar16->operator_cast_to_bool();
                                if (cVar3) {
                                    this_02 = (WorldMap*)(*pWVar16).operator->();
                                    iVar26 = this_02->GetSpriteID();
                                    if (iVar26 != -1) {
                                        local_48 = (Array<bool>*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar8);
                                        pMVar17 = (MSIType*)(*pWVar16).operator->();
                                        this_03 = (WorldMap*)pMVar17->GetSprite(
                                            *local_40->field_8, (unsigned int)(uint8_t)pvVar14[-1], (bool)*pvVar14);
                                        this_02 = this_03;
                                        cVar3 = this_03->operator_cast_to_bool();
                                        if (cVar3) {
                                            local_60 = this_03;
                                            this_02 = (WorldMap*)(*this_03).operator->();
                                            cVar3 = this_02->IsReady();
                                            if (cVar3) {
                                                iVar26 = ((int)local_48 + 1) * (int)(float)local_b8 >> 3;
                                                pMVar17 = (MSIType*)(*pWVar16).operator->();
                                                cVar3 = pMVar17->GetResize();
                                                if (!cVar3) {
                                                    pSVar15 = (SpriteAtlasReference*)(*local_60).operator->();
                                                    iVar7 = pSVar15->GetWidth();
                                                    pSVar15 = (SpriteAtlasReference*)(*local_60).operator->();
                                                    uVar8 = pSVar15->GetHeight();
                                                    arg2 = PTR_MSI_MIN_SIZE_100ee6660;
                                                    local_48 = (Array<bool>*)(((uint64_t)local_48._4_4_ << 32) |
                                                                              (uint32_t)uVar8);
                                                    local_9c = (int)((float)(iVar7 * (int)(float)local_b8 >> 3) * 0.25);
                                                    piVar9 = std::max<int>(local_9c, *PTR_MSI_MIN_SIZE_100ee6660);
                                                    local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)(*piVar9));
                                                    local_9c =
                                                        (int)((float)((int)local_48 * (int)(float)local_b8 >> 3) *
                                                              0.25);
                                                    pfVar12 = (float*)std::max<int>(local_9c, *arg2);
                                                    local_d8 = *pfVar12;
                                                } else {
                                                    pWVar16 = (WorldMap*)local_40->field_24->GetConfig<LocType>(
                                                        *(int*)(pvVar14 - 5), nullptr);
                                                    this_02 = pWVar16;
                                                    cVar5 = pWVar16->operator_cast_to_bool();
                                                    cVar3 = '\0';
                                                    if (cVar5) {
                                                        local_48 = (Array<bool>*)(((uint64_t)local_48._1_7_ << 8) |
                                                                                  (uint8_t)cVar5);
                                                        iVar7 = ((LocType*)(*pWVar16).operator->())
                                                                    ->GetGridWidth((unsigned int)(uint8_t)pvVar14[-1]);
                                                        this_02 = (WorldMap*)(*pWVar16).operator->();
                                                        iVar20 =
                                                            this_02->GetGridLength((unsigned int)(uint8_t)pvVar14[-1]);
                                                        local_90 = (((uint64_t)local_90._4_4_ << 32) |
                                                                    (uint32_t)(iVar7 * (int)local_b8 >> 3));
                                                        local_d8 = (float)(iVar20 * (int)local_b8 >> 3);
                                                        iVar26 = iVar26 + (int)((float)(int)local_d8 * 0.35);
                                                        cVar3 = (char)local_48;
                                                    }
                                                    if (!cVar3)
                                                        goto LAB_1003cb7c0;
                                                }
                                                this_02 = (WorldMap*)guiManager;
                                                ((GUIManager*)(WorldMap*)guiManager)
                                                    ->AddSprite((iVar29 >> 3) + *local_c0 - 1,
                                                                (local_c0[1] - (((int)local_d8 >> 1) + iVar26)) + 2,
                                                                (int)(float)local_90, (int)local_d8, 4294967295,
                                                                *local_60, 1);
                                            }
                                        }
                                    }
                                }
                            LAB_1003cb7c0:
                                pvVar27 = pvVar14 + 3;
                                pvVar14 = pvVar14 + 32;
                            } while (pvVar27 != local_f8);
                        }
                    }
                    arg1 = (shared_ptr*)&local_68->field_1;
                    pWVar16 = (WorldMap*)guiManager;
                } while (arg1 != (shared_ptr*)local_e8._0_8_);
            }
            lVar18 = this_02->Instance();
            pWVar16->Render((lVar18 + 80));
            pWVar16 = local_40;
            if ((uint8_t)local_50 != '\0') {
                local_f8 = (vector<bool>*)&local_40->field_4208;
                if (0 < (int)local_38) {
                    uVar28 = (unsigned long)(unsigned int)local_38;
                    uVar22 = 0;
                    do {
                        piVar9 = (int*)(*local_80)[uVar22];
                        if (*(char*)((long)piVar9 + 25) == '\0') {
                            uVar6 = pWVar16->field_216;
                            uVar21 = uVar6 + 63;
                            if (-1 < (int)uVar6) {
                                uVar21 = uVar6;
                            }
                            pcVar19 =
                                (char*)(*local_f8)[(long)((piVar9[2] >> 3) + (piVar9[3] >> 3) * ((int)uVar21 >> 6))];
                            if (*pcVar19 == '\0') {
                                RenderF2POverlay((GUIManager*)pWVar16, (int)(WorldMap*)guiManager, *piVar9, piVar9[1],
                                                 (int)local_b8, piVar9[2]);
                            }
                        }
                        uVar22 = uVar22 + 1;
                    } while (uVar28 != uVar22);
                }
                pVVar23 = (Vector2T<int>*)rect;
                if ((uint8_t)local_50 != '\0') {
                    piVar9 = (int*)((Layout*)(Vector2T<int>*)rect)->SSOBeginPtr();
                    iVar26 = 0;
                    iVar7 = 0;
                    iVar29 = local_6c;
                    if (local_6c <= *piVar9 - (int)local_98) {
                        iVar7 = 0;
                        do {
                            iVar7 = iVar7 + 1;
                            iVar29 = iVar29 + (int)local_98;
                            piVar9 = (int*)pVVar23->SSOBeginPtr();
                        } while (iVar29 <= *piVar9 - (int)local_98);
                    }
                    local_e8._0_4_ = iVar29;
                    local_c0 = (int*)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)iVar7);
                    iVar29 = pVVar23->MaxZ();
                    pWVar16 = local_40;
                    uVar6 = local_54;
                    if (iVar29 + (int)local_98 <= (int)local_54) {
                        iVar26 = 0;
                        do {
                            iVar26 = iVar26 + 1;
                            uVar6 = uVar6 - (int)local_98;
                            iVar29 = pVVar23->MaxZ();
                        } while (iVar29 + (int)local_98 <= (int)uVar6);
                    }
                    uVar8 = ((CoordMapSquare*)pWVar16->field_24->GetWorldMapDefaults())->GetZ();
                    local_68 = (shared_ptr*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)uVar8);
                    local_d8 = (float)pWVar16->field_216;
                    uVar21 = pWVar16->field_220;
                    piVar9 = (int*)pVVar23->y();
                    uVar22 = local_98;
                    if ((*piVar9 < (int)uVar6) && (iVar29 = (int)uVar21 >> 6, iVar26 < iVar29)) {
                        local_d8 = (float)((int)local_d8 >> 6);
                        local_80 = (WorldMap*)(long)(int)local_d8;
                        local_60 = (WorldMap*)(long)iVar26;
                        local_90 = (long)iVar29;
                        local_48 = (Array<bool>*)((long)local_60 * (long)local_80 + (long)(int)local_c0);
                        local_110._16_8_ = (long)(int)local_c0 + 1;
                        local_38 = (float)uVar6;
                        do {
                            iVar26 = (int)uVar22;
                            local_38 = (float)((int)local_38 - iVar26);
                            iVar29 = ((Rect<int>*)(Vector2T<int>*)rect)->Right();
                            if (((int)local_e8._0_4_ < iVar29) && ((int)local_c0 < (int)local_d8)) {
                                pAVar24 = (Array<eastl::vector<WorldMap::MSIInstance>>*)local_110._16_8_;
                                pAVar11 = local_48;
                                iVar29 = local_e8._0_4_;
                                do {
                                    pcVar19 = (char*)(*local_f8)[(unsigned long)pAVar11];
                                    if (*pcVar19 != '\0') {
                                        ((GUIManager*)(WorldMap*)guiManager)
                                            ->AddColouredRectangle(iVar29, (int)local_38, iVar26, iVar26,
                                                                   (unsigned int)local_68._0_4_, 1);
                                    }
                                    iVar7 = ((Rect<int>*)(Vector2T<int>*)rect)->Right();
                                    if (iVar7 <= iVar29 + iVar26)
                                        break;
                                    iVar29 = iVar29 + iVar26;
                                    pAVar11 = pAVar11 + 1;
                                    bVar1 = (long)pAVar24 < (long)local_80;
                                    pAVar24 = pAVar24 + 1;
                                } while (bVar1);
                            }
                            piVar9 = (int*)rect.y();
                            if ((int)local_38 <= *piVar9)
                                break;
                            local_60 = (WorldMap*)((long)&local_60->_vptr + 1);
                            local_48 = local_48 + (long)local_80;
                        } while ((long)local_60 < local_90);
                    }
                }
            }
            RenderMapElements((GUIManager*)local_40, (Rect<int>*)(WorldMap*)guiManager, (int)(Vector2T<int>*)rect,
                              local_6c, local_54, (uint8_t)local_b8);
        }
    }

    // 0x1003cbcd0
    void WorldMap::UpdateTerrainTextures(unsigned long long arg1, int arg2, int arg3, int arg4, math::Rect<int>& rect) {
        long lVar1;
        Layout* pLVar2;
        bool cVar3;
        int iVar4;
        int iVar5;
        int* piVar6;
        int* piVar7;
        TerrainUnderlayTexture* terrainUnderlayTexture;
        GeometryBatch* this_01;
        bool bVar10;
        int iVar11;
        uint32_t in_register_00000084;
        int arg2_00;
        int iVar12;
        unsigned int arg4_00;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_b8;
        TerrainUnderlayTexture* local_a8;
        ReturnValue local_a0;
        vector<WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                               math::Rect<int>&)::TerrainTextureUpdate,
               BucketAllocatorEASTL>
            local_88[28];

        SpriteAtlasManager* local_58 = (SpriteAtlasManager*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        int local_6c = arg2;
        unsigned long long local_68 = arg1;
        int local_4c = arg3;
        Rect<int>* local_48 = rect;
        unsigned short local_32 = GetDesiredTerrainTextureSize();
        Layout* local_40 = (Layout*)&field_832;
        WorldMap* local_60 = this;
        if (0 < field_908) {
            arg2_00 = 0;
            do {
                iVar12 = local_4c;
                iVar11 = local_4c - (int)local_58;
                iVar4 = local_48->MaxZ();
                local_4c = iVar11;
                if (iVar11 <= iVar4) {
                    piVar6 = (int*)local_48->y();
                    if (iVar12 < *piVar6)
                        break;
                    if (0 < field_904) {
                        iVar4 = 0;
                        iVar12 = local_6c;
                        do {
                            iVar11 = iVar12 + (int)local_58;
                            piVar6 = (int*)local_48->SSOBeginPtr();
                            if (*piVar6 <= iVar11) {
                                iVar5 = local_48->Right();
                                if (iVar5 < iVar12)
                                    break;
                                cVar3 = IsMapSquareValid(iVar4, arg2_00);
                                pLVar2 = local_40;
                                if (cVar3) {
                                    piVar6 = (int*)local_40->HeapBeginPtr();
                                    piVar7 = (int*)pLVar2->end();
                                    this = local_60;
                                    bVar10 = false;
                                    for (; piVar6 != piVar7; piVar6 = piVar6 + 10) {
                                        if ((*piVar6 == iVar4) && (piVar6[1] == arg2_00)) {
                                            *(unsigned long long*)(piVar6 + 2) = local_68;
                                            bVar10 = true;
                                        }
                                    }
                                    if (!bVar10) {
                                        piVar6 = (int*)local_40->push_back();
                                        *piVar6 = iVar4;
                                        piVar6[1] = arg2_00;
                                        *(unsigned long long*)(piVar6 + 2) = local_68;
                                    }
                                }
                            }
                            iVar4 = iVar4 + 1;
                            iVar12 = iVar11;
                        } while (iVar4 < field_904);
                    }
                }
                arg2_00 = arg2_00 + 1;
            } while (arg2_00 < field_908);
        }
        new (local_88) eastl::vector<WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                                                     math::Rect<int>&)::TerrainTextureUpdate,
                                     BucketAllocatorEASTL>();
        pLVar2 = local_40;
        terrainUnderlayTexture = (TerrainUnderlayTexture*)local_40->HeapBeginPtr();
        auto pTVar8 = pLVar2->end();
        unsigned short arg3_00 = local_32;
        if (terrainUnderlayTexture != pTVar8) {
            do {
                if (local_68 - terrainUnderlayTexture->field_8 < 201) {
                    if ((local_68 == terrainUnderlayTexture->field_8) &&
                        ((int)(short)terrainUnderlayTexture->field_16 != (unsigned int)arg3_00)) {
                        terrainUnderlayTexture->field_16 = local_32;
                        local_a8 = terrainUnderlayTexture;
                        GenerateTerrainTexture(&local_a0, local_60, *(unsigned int*)&terrainUnderlayTexture->field_0,
                                               *(unsigned int*)((long)&terrainUnderlayTexture->field_0 + 4), arg3_00);
                        local_88->push_back(local_a8);
                        UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)
                            local_a8.~TerrainTextureUpdate();
                    }
                    terrainUnderlayTexture = (TerrainUnderlayTexture*)&terrainUnderlayTexture[1].field_8;
                } else {
                    terrainUnderlayTexture = (TerrainUnderlayTexture*)local_40->erase(terrainUnderlayTexture);
                }
                pTVar8 = (TerrainUnderlayTexture*)local_40->end();
            } while (terrainUnderlayTexture != pTVar8);
        }
        auto this_00 = local_60->field_8->GetTextureManager();
        local_58 = this_00->GetSpriteAtlasManager();
        auto plVar9 = local_88->begin();
        local_40 = (Layout*)local_88->end();
        if ((Layout*)plVar9 != local_40) {
            do {
                lVar1 = *plVar9;
                local_48 = (Rect<int>*)((plVar9 + 1))->data();
                arg4_00 = (unsigned int)*(short*)(lVar1 + 16);
                math::GetEmptyMargins();
                local_b8 = shared_ptr();
                graphics::SpriteAtlasManager::AddRuntimeSprite(
                    &local_a8, (unsigned int)local_58, (unsigned int)local_48, arg4_00,
                    *((fixed_vector<int, _4ul>*)(unsigned long)arg4_00), DAT_00000001);
                this_01 = (GeometryBatch*)local_a8.operator->();
                this_01->SetShareLight(true);
                (*((lVar1 + 24))) = local_a8;
                plVar9 = plVar9 + 4;
            } while ((Layout*)plVar9 != local_40);
        }
    }

    // 0x1003cc060
    uint64_t WorldMap::GetTypeDisabled(bool& arg1, int arg2) const {
        bool* pbVar1;

        if (arg2 == 2) {
            pbVar1 = &field_697;
        } else if (arg2 == 1) {
            pbVar1 = &field_696;
        } else {
            if (arg2 != 0) {
                return 0;
            }
            pbVar1 = &field_695;
        }
        arg1 = *pbVar1;
        return 1;
    }

    // 0x1003cc0a0
    void WorldMap::RenderF2POverlay(graphics::GUIManager& guiManager, int arg2, int arg3, int arg4, int arg5,
                                    int arg6) {
        vector<int>* pvVar1;
        GUIManager* pGVar2;
        unsigned long uVar3;
        uint8_t bVar4;
        uint8_t bVar6;
        char cVar7;
        unsigned int uVar8;
        unsigned int uVar10;
        int* piVar12;
        unsigned int* puVar13;
        uint32_t* puVar14;
        uint32_t uVar17;
        int iVar18;
        int iVar20;
        char cVar21;
        uint32_t in_register_00000034;
        uint32_t in_register_00000084;
        unsigned int arg2_00;
        int iVar26;
        int iVar27;
        int in_stack_00000008;
        unsigned int local_98;
        unsigned int local_94;
        unsigned int local_90;
        GUIManager* local_88;
        int local_7c;
        unsigned long local_70;
        int local_64;
        int local_3c;

        unsigned long local_78 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg5);
        int local_a0 = 10;
        int iVar23 = arg5 + 3;
        if (-1 < arg5) {
            iVar23 = arg5;
        }
        unsigned int local_9c = iVar23 >> 2;
        auto pbVar11 = std::min<int>(local_a0, local_9c);
        unsigned long local_60 = (unsigned long)*pbVar11;
        local_a0 = 1;
        local_9c = (unsigned int)(*pbVar11 >> 2);
        pbVar11 = (uint8_t*)std::max<int>(local_a0, local_9c);
        unsigned long local_50 = (unsigned long)*pbVar11;
        unsigned int local_38 =
            ((CoordMapSquare*)(*(ConfigProvider**)&guiManager.field_24)->GetWorldMapDefaults())->GetZ();
        unsigned int local_34 =
            ((CommandLine*)(*(ConfigProvider**)&guiManager.field_24)->GetWorldMapDefaults())->GetPos();
        unsigned long local_58 = (unsigned long)(unsigned int)arg3;
        if (in_stack_00000008 < *(int*)&guiManager.field_228 - 1) {
            uVar8 = IsF2PZone((WorldMap*)guiManager, arg6, in_stack_00000008 + 1);
        } else {
            uVar8 = 0;
        }
        GUIManager* local_48 = (GUIManager*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if ((arg6 < *(int*)&guiManager.field_224 - 1) && (in_stack_00000008 < *(int*)&guiManager.field_228 - 1)) {
            bVar4 = IsF2PZone((WorldMap*)guiManager, arg6 + 1, in_stack_00000008 + 1);
        } else {
            bVar4 = 0;
        }
        if (arg6 < *(int*)&guiManager.field_224 - 1) {
            local_90 = IsF2PZone((WorldMap*)guiManager, arg6 + 1, in_stack_00000008);
        } else {
            local_90 = 0;
        }
        unsigned int uVar19 = (uVar8 & 255) + (unsigned int)bVar4 * 2 + (local_90 & 255) * 4;
        uint8_t bVar5 = 0;
        if ((arg6 < *(int*)&guiManager.field_224 - 1) && (0 < in_stack_00000008)) {
            bVar5 = IsF2PZone((WorldMap*)guiManager, arg6 + 1, in_stack_00000008 - 1);
        }
        if (in_stack_00000008 < 1) {
            local_94 = 0;
        } else {
            local_94 = IsF2PZone((WorldMap*)guiManager, arg6, in_stack_00000008 - 1);
        }
        unsigned int uVar15 = uVar19 + (unsigned int)bVar5 * 8;
        unsigned int uVar22 = (local_94 & 255) << 4;
        unsigned int uVar9 = 0;
        unsigned int local_8c = uVar8;
        if ((0 < arg6) && (0 < in_stack_00000008)) {
            uVar9 = IsF2PZone((WorldMap*)guiManager, arg6 - 1, in_stack_00000008 - 1);
        }
        uVar8 = uVar15 | uVar22;
        if (arg6 < 1) {
            uVar10 = 0;
        } else {
            uVar10 = IsF2PZone((WorldMap*)guiManager, arg6 - 1, in_stack_00000008);
        }
        unsigned long uVar25 = local_58;
        uVar9 = (uVar9 & 255) << 5 | uVar8;
        if ((arg6 < 1) || (*(int*)&guiManager.field_228 - 1 <= in_stack_00000008)) {
            bVar6 = 0;
        } else {
            bVar6 = IsF2PZone((WorldMap*)guiManager, arg6 - 1, in_stack_00000008 + 1);
        }
        GUIManager* pGVar24 = local_48;
        unsigned int uVar16 = (uVar10 & 255) << 6 | uVar9;
        uVar10 = (unsigned int)bVar6 << 7 | uVar16;
        iVar23 = (int)uVar25;
        int iVar28 = (int)local_78;
        if (uVar10 == 0) {
            iVar26 = arg4 - iVar28;
        } else {
            iVar26 = (int)local_60;
            local_64 = iVar23 + iVar26;
            arg2_00 = arg4 - iVar28;
            uVar25 = (unsigned long)arg2_00;
            iVar27 = iVar28 + iVar26 * -2;
            local_98 = uVar16;
            local_88 = guiManager;
            local_48->AddColouredRectangle(local_64, arg2_00, iVar27, iVar28, local_38, 1);
            uVar16 = local_38;
            local_78 = (unsigned long)(unsigned int)(iVar28 + (int)local_58);
            local_3c = (iVar28 + (int)local_58) - iVar26;
            iVar23 = arg2_00 + iVar26;
            pGVar24->AddColouredRectangle(local_3c, iVar23, iVar26, iVar27, local_38, 1);
            local_7c = iVar23;
            local_48->AddColouredRectangle((int)local_58, iVar23, iVar26, iVar27, uVar16, 1);
            iVar23 = (int)local_50;
            if ((char)local_8c != '\0') {
                local_48->AddColouredRectangle(local_64, arg2_00, iVar27, iVar23, local_34, 1);
            }
            if ((char)local_90 != '\0') {
                local_48->AddColouredRectangle((int)local_78 - iVar23, local_7c, iVar23, iVar27, local_34, 1);
            }
            iVar28 = local_3c;
            uVar3 = local_58;
            if ((uint8_t)local_94 != '\0') {
                local_48->AddColouredRectangle(local_64, arg4 - iVar23, iVar27, iVar23, local_34, 1);
            }
            iVar26 = (int)uVar3;
            if ((local_98 & 64) != 0) {
                local_48->AddColouredRectangle(iVar26, local_7c, iVar23, iVar27, local_34, 1);
            }
            pGVar24 = local_48;
            pGVar2 = local_88;
            iVar27 = (int)local_60;
            local_70 = uVar25;
            if ((uVar10 & 193) == 0) {
                local_48->AddColouredRectangle(iVar26, arg2_00, iVar27, iVar27, local_38, 1);
                if (uVar19 == 0)
                    goto LAB_1003cc649;
            LAB_1003cc746:
                pGVar2 = local_88;
                if ((uVar19 & 4294967293) == 5) {
                    pvVar1 = (vector<int>*)(local_88[1].field_1768 + 48);
                    piVar12 = (int*)(*pvVar1)[0];
                    *piVar12 = iVar28;
                    puVar13 = (unsigned int*)(*pvVar1)[1];
                    *puVar13 = arg2_00;
                    piVar12 = (int*)(*pvVar1)[2];
                    iVar26 = (int)local_78;
                    *piVar12 = iVar26;
                    piVar12 = (int*)(*pvVar1)[3];
                    iVar23 = local_7c;
                    *piVar12 = local_7c;
                    piVar12 = (int*)(*pvVar1)[4];
                    *piVar12 = local_3c;
                    piVar12 = (int*)(*pvVar1)[5];
                    *piVar12 = iVar23;
                    local_48->AddColouredTriangleList(*pvVar1, *((pGVar2[1].field_1768 + 80)), local_38, 1, true);
                    pvVar1 = (vector<int>*)(pGVar2[1].field_1768 + 112);
                    piVar12 = (int*)(*pvVar1)[0];
                    *piVar12 = local_3c;
                    puVar14 = (uint32_t*)(*pvVar1)[1];
                    *puVar14 = (int)local_70;
                    piVar12 = (int*)(*pvVar1)[2];
                    *piVar12 = iVar26;
                    piVar12 = (int*)(*pvVar1)[3];
                    iVar28 = local_3c;
                    *piVar12 = iVar23;
                    iVar27 = (int)local_50;
                    piVar12 = (int*)(*pvVar1)[4];
                    pGVar24 = local_48;
                    *piVar12 = iVar26 - iVar27;
                    piVar12 = (int*)(*pvVar1)[5];
                    *piVar12 = local_7c;
                    piVar12 = (int*)(*pvVar1)[6];
                    *piVar12 = iVar28;
                    iVar23 = (int)local_70;
                    piVar12 = (int*)(*pvVar1)[7];
                    *piVar12 = iVar23 + iVar27;
                    pGVar24->AddColouredTriangleList(*pvVar1, *((local_88[1].field_1768 + 144)), local_34, 1, true);
                    iVar27 = arg4;
                } else {
                    iVar23 = (int)local_60;
                    if ((bVar4 & (uVar19 & 4294967293) == 0) == 1) {
                        pGVar24->AddColouredRectangle(iVar28, arg2_00, iVar23, iVar23, local_38, 1);
                        iVar26 = (int)local_50;
                        uVar19 = local_34;
                        iVar23 = (int)local_78 - iVar26;
                        goto LAB_1003cc90e;
                    }
                    cVar21 = (char)local_8c;
                    cVar7 = (char)local_90;
                    pGVar24->AddColouredRectangle(iVar28, arg2_00, iVar23, iVar23, local_38, 1);
                    iVar27 = arg4;
                    iVar18 = (int)local_50;
                    iVar20 = iVar23;
                    iVar26 = iVar28;
                    if (cVar21 != '\x01' || cVar7) {
                        iVar26 = (int)local_78 - iVar18;
                        iVar20 = iVar18;
                        iVar18 = iVar23;
                    }
                    pGVar24->AddColouredRectangle(iVar26, (int)local_70, iVar20, iVar18, local_34, 1);
                }
            } else {
                if ((local_98 & 4294967233) == 65) {
                    pvVar1 = (vector<int>*)(local_88[1].field_1768 + 48);
                    piVar12 = (int*)(*pvVar1)[0];
                    *piVar12 = iVar26;
                    piVar12 = (int*)(*pvVar1)[1];
                    iVar27 = local_7c;
                    *piVar12 = local_7c;
                    piVar12 = (int*)(*pvVar1)[2];
                    iVar23 = local_64;
                    *piVar12 = local_64;
                    puVar13 = (unsigned int*)(*pvVar1)[3];
                    *puVar13 = arg2_00;
                    piVar12 = (int*)(*pvVar1)[4];
                    *piVar12 = iVar23;
                    piVar12 = (int*)(*pvVar1)[5];
                    *piVar12 = iVar27;
                    local_48->AddColouredTriangleList(*pvVar1, *((pGVar2[1].field_1768 + 80)), local_38, 1, true);
                    pvVar1 = (vector<int>*)(pGVar2[1].field_1768 + 112);
                    puVar14 = (uint32_t*)(*pvVar1)[0];
                    *puVar14 = (int)local_58;
                    piVar12 = (int*)(*pvVar1)[1];
                    *piVar12 = iVar27;
                    piVar12 = (int*)(*pvVar1)[2];
                    *piVar12 = iVar23;
                    puVar14 = (uint32_t*)(*pvVar1)[3];
                    *puVar14 = (int)local_70;
                    piVar12 = (int*)(*pvVar1)[4];
                    *piVar12 = iVar23;
                    iVar23 = (int)local_50;
                    iVar26 = (int)local_70;
                    piVar12 = (int*)(*pvVar1)[5];
                    iVar28 = local_3c;
                    *piVar12 = iVar23 + iVar26;
                    iVar26 = (int)local_58;
                    piVar12 = (int*)(*pvVar1)[6];
                    *piVar12 = iVar23 + iVar26;
                    piVar12 = (int*)(*pvVar1)[7];
                    pGVar24 = local_48;
                    *piVar12 = iVar27;
                    arg2_00 = (unsigned int)local_70;
                    local_48->AddColouredTriangleList(*pvVar1, *((local_88[1].field_1768 + 144)), local_34, 1, true);
                } else if (((char)uVar10 < '\0') && ((local_98 & 4294967233) == 0)) {
                    local_48->AddColouredRectangle(iVar26, arg2_00, iVar27, iVar27, local_38, 1);
                    iVar28 = local_3c;
                    pGVar24->AddColouredRectangle(iVar26, arg2_00, iVar23, iVar23, local_34, 1);
                } else {
                    bVar6 = (local_98 & 64) == 0 & (uint8_t)local_8c;
                    local_48->AddColouredRectangle(iVar26, arg2_00, iVar27, iVar27, local_38, 1);
                    iVar28 = iVar23;
                    if (bVar6 == 1) {
                        iVar28 = iVar27;
                        iVar27 = iVar23;
                    }
                    pGVar24->AddColouredRectangle(iVar26, (int)local_70, iVar28, iVar27, local_34, 1);
                    arg2_00 = (unsigned int)local_70;
                    iVar28 = local_3c;
                }
                if (uVar19 != 0)
                    goto LAB_1003cc746;
            LAB_1003cc649:
                iVar26 = (int)local_60;
                uVar19 = local_38;
                iVar23 = iVar28;
            LAB_1003cc90e:
                pGVar24->AddColouredRectangle(iVar23, arg2_00, iVar26, iVar26, uVar19, 1);
                iVar27 = arg4;
            }
            iVar23 = (int)local_60;
            if ((uVar8 & 28) == 0) {
                iVar20 = iVar27 - iVar23;
                uVar8 = local_38;
                iVar26 = iVar23;
            LAB_1003ccbff:
                pGVar24->AddColouredRectangle(iVar28, iVar20, iVar23, iVar26, uVar8, 1);
            } else {
                uVar22 = uVar15 & 4294967284 | uVar22;
                if (uVar22 != 20) {
                    if ((bVar5 & uVar22 == 0) == 1) {
                        pGVar24->AddColouredRectangle(iVar28, iVar27 - iVar23, iVar23, iVar23, local_38, 1);
                        iVar18 = (int)local_50;
                        iVar20 = iVar27 - iVar18;
                        iVar26 = iVar18;
                        iVar28 = (int)local_78 - iVar18;
                    } else {
                        cVar7 = (char)local_94;
                        cVar21 = (char)local_90;
                        iVar20 = iVar27 - iVar23;
                        pGVar24->AddColouredRectangle(iVar28, iVar20, iVar23, iVar23, local_38, 1);
                        iVar26 = (int)local_50;
                        if (!cVar21 && cVar7 == '\x01') {
                            iVar20 = iVar27 - iVar26;
                            iVar18 = iVar23;
                            iVar28 = local_3c;
                        } else {
                            iVar28 = (int)local_78 - iVar26;
                            iVar18 = iVar26;
                            iVar26 = iVar23;
                        }
                    }
                    iVar23 = iVar18;
                    uVar8 = local_34;
                    goto LAB_1003ccbff;
                }
                pvVar1 = (vector<int>*)(local_88[1].field_1768 + 48);
                puVar14 = (uint32_t*)(*pvVar1)[0];
                uVar17 = (uint32_t)local_78;
                *puVar14 = uVar17;
                iVar26 = iVar27 - (int)local_60;
                piVar12 = (int*)(*pvVar1)[1];
                *piVar12 = iVar26;
                piVar12 = (int*)(*pvVar1)[2];
                *piVar12 = iVar28;
                piVar12 = (int*)(*pvVar1)[3];
                *piVar12 = iVar27;
                piVar12 = (int*)(*pvVar1)[4];
                *piVar12 = iVar28;
                piVar12 = (int*)(*pvVar1)[5];
                *piVar12 = iVar26;
                local_48->AddColouredTriangleList(*pvVar1, *((local_88[1].field_1768 + 80)), local_38, 1, true);
                pvVar1 = (vector<int>*)(local_88[1].field_1768 + 112);
                puVar14 = (uint32_t*)(*pvVar1)[0];
                *puVar14 = uVar17;
                piVar12 = (int*)(*pvVar1)[1];
                *piVar12 = iVar26;
                piVar12 = (int*)(*pvVar1)[2];
                *piVar12 = iVar28;
                piVar12 = (int*)(*pvVar1)[3];
                *piVar12 = arg4;
                piVar12 = (int*)(*pvVar1)[4];
                *piVar12 = iVar28;
                iVar28 = (int)local_50;
                iVar23 = arg4 - iVar28;
                piVar12 = (int*)(*pvVar1)[5];
                pGVar24 = local_48;
                *piVar12 = iVar23;
                iVar23 = (int)local_78;
                piVar12 = (int*)(*pvVar1)[6];
                *piVar12 = iVar23 - iVar28;
                piVar12 = (int*)(*pvVar1)[7];
                iVar27 = arg4;
                *piVar12 = iVar26;
                pGVar24->AddColouredTriangleList(*pvVar1, *((local_88[1].field_1768 + 144)), local_34, 1, true);
            }
            pGVar2 = local_88;
            iVar28 = (int)local_60;
            iVar23 = (int)local_58;
            if ((local_98 & 112) != 0) {
                if ((local_98 & 4294967248) == 80) {
                    pvVar1 = (vector<int>*)(local_88[1].field_1768 + 48);
                    piVar12 = (int*)(*pvVar1)[0];
                    *piVar12 = local_64;
                    piVar12 = (int*)(*pvVar1)[1];
                    *piVar12 = iVar27;
                    puVar14 = (uint32_t*)(*pvVar1)[2];
                    *puVar14 = (int)local_58;
                    iVar28 = iVar27 - iVar28;
                    piVar12 = (int*)(*pvVar1)[3];
                    *piVar12 = iVar28;
                    piVar12 = (int*)(*pvVar1)[4];
                    iVar23 = local_64;
                    *piVar12 = local_64;
                    piVar12 = (int*)(*pvVar1)[5];
                    *piVar12 = iVar28;
                    local_48->AddColouredTriangleList(*pvVar1, *((pGVar2[1].field_1768 + 80)), local_38, 1, true);
                    pvVar1 = (vector<int>*)(pGVar2[1].field_1768 + 112);
                    piVar12 = (int*)(*pvVar1)[0];
                    *piVar12 = iVar23;
                    piVar12 = (int*)(*pvVar1)[1];
                    *piVar12 = iVar27;
                    piVar12 = (int*)(*pvVar1)[2];
                    iVar23 = (int)local_58;
                    *piVar12 = iVar23;
                    piVar12 = (int*)(*pvVar1)[3];
                    *piVar12 = iVar28;
                    iVar26 = (int)local_50;
                    piVar12 = (int*)(*pvVar1)[4];
                    *piVar12 = iVar23 + iVar26;
                    piVar12 = (int*)(*pvVar1)[5];
                    *piVar12 = iVar28;
                    piVar12 = (int*)(*pvVar1)[6];
                    *piVar12 = local_64;
                    piVar12 = (int*)(*pvVar1)[7];
                    *piVar12 = iVar27 - iVar26;
                    local_48->AddColouredTriangleList(*pvVar1, *((local_88[1].field_1768 + 144)), local_34, 1, true);
                    return;
                }
                if (((uVar9 & 32) == 0) || ((local_98 & 4294967248) != 0)) {
                    bVar4 = (local_98 & 64) == 0 & (uint8_t)local_94;
                    iVar26 = iVar27 - iVar28;
                    pGVar24->AddColouredRectangle(iVar23, iVar26, iVar28, iVar28, local_38, 1);
                    iVar23 = (int)local_58;
                    iVar20 = (int)local_50;
                    if (bVar4 == 1) {
                        iVar26 = iVar27 - iVar20;
                        iVar18 = iVar28;
                    } else {
                        iVar18 = iVar20;
                        iVar20 = iVar28;
                    }
                } else {
                    pGVar24->AddColouredRectangle(iVar23, iVar27 - iVar28, iVar28, iVar28, local_38, 1);
                    iVar18 = (int)local_50;
                    iVar26 = iVar27 - iVar18;
                    iVar20 = iVar18;
                }
                iVar28 = iVar18;
                uVar8 = local_34;
                goto LAB_1003cce64;
            }
            iVar26 = iVar27 - iVar28;
        }
        uVar8 = local_38;
        iVar20 = iVar28;
    LAB_1003cce64:
        pGVar24->AddColouredRectangle(iVar23, iVar26, iVar28, iVar20, uVar8, 1);
    }

    // 0x1003cce80
    void WorldMap::RenderMapElements(graphics::GUIManager& guiManager, math::Rect<int>& rect, int arg3, int arg4,
                                     int arg5, bool arg6) {
        MapElementInstance* pMVar2;
        uint32_t in_register_00000014;
        uint64_t in_register_00000089;
        MapElementInstance* mapElementInstance;
        bool in_stack_00000008;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_60;
        bool local_31;

        Rect<int>* local_50 = (Rect<int>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        int local_40 = (int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        bool cVar1 = GetTypeDisabled((WorldMap*)guiManager, &local_31, 0);
        if ((!cVar1) || (local_31 == false)) {
            mapElementInstance = (MapElementInstance*)guiManager.field_88.HeapBeginPtr();
            pMVar2 = (MapElementInstance*)guiManager.field_88.end();
            if (mapElementInstance != pMVar2) {
                do {
                    local_60 = shared_ptr();
                    cVar1 = ShouldRenderMapElementTypeCache((WorldMap*)guiManager, &local_60,
                                                            *(int*)(mapElementInstance->field_20 + 12));
                    if (!cVar1) {
                        *(uint8_t*)((long)&mapElementInstance->field_16 + 1) = 1;
                    } else {
                        *(uint8_t*)((long)&mapElementInstance->field_16 + 1) = 0;
                        RenderMapElement((WorldMap*)guiManager, (GUIManager*)rect, local_50, arg4, arg5, local_40,
                                         &local_60, mapElementInstance, in_stack_00000008);
                    }
                    mapElementInstance = (MapElementInstance*)&mapElementInstance->field_36;
                } while (mapElementInstance != pMVar2);
            }
        }
    }

    // 0x1003ccf80
    void WorldMap::MainDrawOverview(graphics::GUIManager& guiManager, math::Rect<int>& rect) {
        uint8_t* puVar1;
        int iVar2;
        int iVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        WorldMap* pWVar4;
        bool cVar5;
        unsigned int* puVar6;
        int* piVar7;
        uint32_t* puVar8;
        Texture* texture;
        float* pfVar9;
        long lVar10;
        long lVar11;
        MapElementType* pMVar12;
        int* piVar13;
        int iVar14;
        int iVar15;
        unsigned int uVar16;
        unsigned int arg1;
        float fVar17;
        float fVar18;
        uint8_t local_a0[32];
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_80;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_70;
        unsigned long local_60;
        float local_58;
        float local_54;
        WorldMap* local_50;
        int local_44;
        int* local_40;
        unsigned long local_38;

        guiManager.AddColouredRectangle(rect, 255, 1);
        if (field_56 == 8) {
            local_40 =
                (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)(int)field_220 / (float)(int)field_216));
            puVar6 = (unsigned int*)rect.second();
            uVar16 = *puVar6;
            piVar7 = (int*)rect.qw();
            if (1.0 <= local_40._0_4_) {
                iVar15 = *piVar7;
                uVar16 = (unsigned int)((float)iVar15 / local_40._0_4_);
            } else {
                iVar15 = (int)(local_40._0_4_ * (float)(int)uVar16);
            }
            local_50 = this;
            puVar8 = (uint32_t*)rect.SSOBeginPtr();
            local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar8));
            piVar7 = (int*)rect.second();
            iVar2 = *piVar7;
            local_40 = (int*)(unsigned long)uVar16;
            piVar7 = (int*)rect.y();
            iVar14 = *piVar7;
            piVar7 = (int*)rect.qw();
            iVar3 = *piVar7;
            new ((local_a0 + 16)) ImVec4(0.0, 1.0, 1.0, -1.0);
            puVar1 = local_50->field_4016;
            cVar5 = puVar1->operator_cast_to_bool();
            if (!cVar5) {
                LoadState_CompositeMap(local_50);
            }
            arg1 = ((int)(iVar2 - uVar16) >> 1) + (int)local_38;
            uVar16 = (iVar3 - iVar15 >> 1) + iVar14;
            cVar5 = puVar1->operator_cast_to_bool();
            local_38 = (unsigned long)uVar16;
            if (cVar5) {
                iVar2 = (int)local_40;
                iVar14 = uVar16 + iVar15;
                texture = (Texture*)puVar1->end();
                uVar16 = (unsigned int)local_38;
                guiManager.AddElement(arg1, uVar16, arg1 + iVar2, iVar14, 4294967295, *((local_a0 + 16)), texture, 1);
            }
            pWVar4 = local_50;
            puVar1 = &local_50->field_168;
            pfVar9 = (float*)puVar1->SSOBeginPtr();
            local_58 = (float)(int)local_40._0_4_;
            local_40 =
                (int*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((int)((float)(int)arg1 + *pfVar9 * local_58)));
            local_60 = (unsigned long)arg1;
            pfVar9 = (float*)puVar1->y();
            local_54 = (float)iVar15;
            fVar17 = *pfVar9 * local_54;
            pfVar9 = (float*)puVar1->second();
            fVar18 = *pfVar9 * local_58;
            pfVar9 = (float*)puVar1->qw();
            new (local_a0) oldscape::dash3d::GridRect((int)local_40._0_4_, (int)((float)(int)uVar16 + fVar17),
                                                      (int)fVar18, (int)(*pfVar9 * local_54));
            guiManager.AddColouredRectangle(*local_a0, 4278190216, 1);
            guiManager.AddOutline(*local_a0, 1, 4278190216, 1);
            piVar7 = (int*)pWVar4->field_88.HeapBeginPtr();
            local_40 = (int*)pWVar4->field_88.end();
            if (piVar7 != local_40) {
                puVar1 = &local_50->field_600;
                local_70 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_50->field_640;
                local_60 = (unsigned long)((int)local_60 - 2);
                local_38 = (unsigned long)((int)local_38 - 2);
                piVar7 = piVar7 + 8;
                do {
                    local_80 = shared_ptr();
                    cVar5 = ShouldRenderMapElementTypeCache(local_50, &local_80, *piVar7);
                    if (cVar5) {
                        lVar10 = eastl::vector_map<int, WorldMap::FlashState>::find(*puVar1);
                        lVar11 = puVar1->end();
                        if (lVar10 == lVar11) {
                            pMVar12 = (MapElementType*)local_80.operator->();
                            this_00 = local_70;
                            local_44 = pMVar12->GetCategory();
                            lVar10 = eastl::vector_map<int, WorldMap::FlashState>::find(*this_00);
                            lVar11 = this_00->end();
                            if (lVar10 == lVar11)
                                goto LAB_1003cd2f1;
                            pMVar12 = (MapElementType*)local_80.operator->();
                            local_44 = pMVar12->GetCategory();
                            lVar10 = (*local_70)[local_44];
                        } else {
                            lVar10 = (*puVar1)[*piVar7];
                        }
                        iVar15 = *(int*)(lVar10 + 4);
                        iVar2 = local_50->m_flashTicks;
                        iVar14 = iVar2 - iVar15;
                        if (iVar15 <= iVar2 >> 1) {
                            iVar14 = iVar15;
                        }
                        guiManager.AddColouredRectangle(
                            (int)(((float)(unsigned int)piVar7[-2] * local_58) / (float)(int)local_50->field_216) +
                                (int)local_60,
                            (int)((1.0 - (float)(unsigned int)piVar7[-1] / (float)(int)local_50->field_220) *
                                  local_54) +
                                (int)local_38,
                            4, 4, (iVar14 * 255) / iVar2 | 4294901760, 1);
                    }
                LAB_1003cd2f1:
                    piVar13 = piVar7 + 1;
                    piVar7 = piVar7 + 9;
                } while (piVar13 != local_40);
            }
        }
    }

    // 0x1003cd3e0
    bool WorldMap::ShouldRenderMapElementTypeCache(shared_ptr<MapElementType>& mapElementType, int arg2) {
        bool bVar2;
        shared_ptr<MapElementType>* mapElementType_00;

        if (field_704.empty() == '\0') {
            bVar2 = false;
        } else {
            mapElementType_00 = (shared_ptr<MapElementType>*)field_800[(long)arg2];
            mapElementType = *mapElementType_00;
            bVar2 = mapElementType != nullptr;
        }
        return bVar2;
    }

    // 0x1003cd5a0
    void WorldMap::StopCurrentFlashes() {
        field_600.clear();
        field_640.clear();
    }

    // 0x1003cd5d0
    void WorldMap::SetFlashPerpetual(bool arg1) {
        m_flashPerpetual = arg1;
    }

    // 0x1003cd5e0
    void WorldMap::SetFlashTicks(int arg1) {
        m_flashTicks = arg1;
    }

    // 0x1003cd5f0
    void WorldMap::SetFlashLoops(int arg1) {
        m_flashLoops = arg1;
    }

    // 0x1003cd600
    void WorldMap::JumpToTargetCoord(const CoordGrid& coordGrid, bool arg2) {
        uint32_t in_register_00000011;

        unsigned int uVar1 = coordGrid.field_4 - field_232;
        field_208 = uVar1;
        unsigned int uVar2 = coordGrid.field_8 - field_236;
        field_212 = uVar2;
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            field_200 = uVar1;
            field_204 = uVar2;
            CheckGridPosition();
        }
    }

    // 0x1003cd640
    int WorldMap::FindNearestMapElement(CoordGrid& coordGrid1, int arg2, const CoordGrid& coordGrid2) const {
        unsigned int uVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        uint64_t uVar5;
        long lVar7;
        long lVar8;
        int iVar9;
        int iVar10;

        int iVar6 = -2;
        if (field_56 == 8) {
            uVar1 = coordGrid2.field_4;
            uVar2 = coordGrid2.field_8;
            uVar3 = field_232;
            uVar4 = field_236;
            lVar7 = field_88.HeapBeginPtr();
            lVar8 = field_88.end();
            iVar6 = 2147483647;
            for (; lVar7 != lVar8; lVar7 = lVar7 + 36) {
                if ((*(int*)(lVar7 + 32) == arg2) &&
                    (iVar10 = uVar1 - (*(int*)(lVar7 + 24) + uVar3), iVar9 = uVar2 - (*(int*)(lVar7 + 28) + uVar4),
                     iVar9 = iVar9 * iVar9 + iVar10 * iVar10, iVar9 < iVar6)) {
                    coordGrid1.field_8 = *(unsigned int*)(lVar7 + 28);
                    uVar5 = *(uint64_t*)(lVar7 + 20);
                    coordGrid1.field_0 = (int)uVar5;
                    coordGrid1.field_4 = (int)((unsigned long)uVar5 >> 32);
                    iVar6 = iVar9;
                }
            }
            iVar6 = -(unsigned int)(iVar6 == 2147483647);
        }
        return iVar6;
    }

    // 0x1003cd720
    void WorldMap::GetMapElementListStart(PlayerVarDomain& playerVarDomain) {
        field_120 = -1;
        GetMapElementListNext(playerVarDomain);
    }

    // 0x1003cd740
    uint8_t* WorldMap::GetMapElementListNext(PlayerVarDomain& playerVarDomain) {
        ConfigProvider* this_00;
        uint64_t in_RAX;
        long lVar3;
        shared_ptr* this_01;
        MapElementType* pMVar4;

        bool local_31 = (uint8_t)((unsigned long)in_RAX >> 56);
        int iVar7 = field_120 + 1;
        field_120 = iVar7;
        uint8_t* puVar6 = &field_88;
        int iVar2 = puVar6->size();
        if (iVar7 < iVar2) {
            this_00 = field_24;
            lVar3 = (*puVar6)[(long)field_120];
            this_01 = (shared_ptr*)this_00->GetConfig<MapElementType>(*(int*)(lVar3 + 32), nullptr);
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                pMVar4 = (MapElementType*)(*this_01).operator->();
                if (pMVar4->GetListable()) {
                    pMVar4 = (MapElementType*)(*this_01).operator->();
                    if (((uint8_t*)pMVar4->VariableTest(local_31, playerVarDomain, field_24) == DataStatus::READY) &&
                        (local_31 != false)) {
                        puVar6 = (uint8_t*)(*puVar6)[(long)field_120];
                        return puVar6;
                    }
                }
            }
            puVar6 = (uint8_t*)GetMapElementListNext(playerVarDomain);
        } else {
            puVar6 = &DUMMY_MEL_INSTANCE;
        }
        return puVar6;
    }

    // 0x1003cd870
    void WorldMap::SetMapElementDisabled(int arg1, bool arg2) {
        int iVar1;
        uint64_t uVar2;

        if (-1 < arg1) {
            iVar1 = field_528.end();
            if (arg1 < iVar1) {
                field_824 = 0;
                uVar2 = field_528[(long)arg1];
                *(bool*)uVar2 = arg2;
                return;
            }
        }
        LogAssert("mapElementID >= 0 && mapElementID < (int)m_disabledMapElements.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/worldmap/"
                  "WorldMap.cpp",
                  1851, nullptr);
    }

    // 0x1003cd8f0
    void WorldMap::SetMapElementCategoryDisabled(int arg1, bool arg2) {
        int local_14;

        field_824 = 0;
        uint64_t uVar1 = field_552[local_14];
        *(bool*)uVar1 = arg2;
    }

    // 0x1003cd9d0
    void WorldMap::SetMapElementFlashing(int arg1) {
        uint32_t in_register_0000003c;
        int local_14;

        long lVar2 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        uint32_t* puVar1 = (uint32_t*)(*((lVar2 + 600)))[local_14];
        *puVar1 = *(uint32_t*)(lVar2 + 688);
        puVar1[1] = *(uint32_t*)(lVar2 + 684);
    }

    // 0x1003cda10
    void WorldMap::SetMapElementCategoryFlashing(int arg1) {
        uint32_t in_register_0000003c;
        int local_14;

        long lVar2 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        uint32_t* puVar1 = (uint32_t*)(*((lVar2 + 640)))[local_14];
        *puVar1 = *(uint32_t*)(lVar2 + 688);
        puVar1[1] = *(uint32_t*)(lVar2 + 684);
    }

    // 0x1003cda50
    uint64_t WorldMap::SetTextSizeDisabled(int arg1, bool arg2) {
        field_824 = 0;
        if (arg1 == 2) {
            field_694 = arg2;
        } else if (arg1 == 1) {
            field_693 = arg2;
        } else {
            if (arg1 != 0) {
                return 0;
            }
            field_692 = arg2;
        }
        return 1;
    }

    // 0x1003cda90
    uint64_t WorldMap::SetTypeDisabled(int arg1, bool arg2) {
        field_824 = 0;
        if (arg1 == 2) {
            field_697 = arg2;
        } else if (arg1 == 1) {
            field_696 = arg2;
        } else {
            if (arg1 != 0) {
                return 0;
            }
            field_695 = arg2;
        }
        return 1;
    }

    // 0x1003cdad0
    uint64_t WorldMap::GetTextSizeDisabled(bool& arg1, int arg2) const {
        bool* pbVar1;

        if (arg2 == 2) {
            pbVar1 = &field_694;
        } else if (arg2 == 1) {
            pbVar1 = &field_693;
        } else {
            if (arg2 != 0) {
                return 0;
            }
            pbVar1 = &field_692;
        }
        arg1 = *pbVar1;
        return 1;
    }

    // 0x1003cdb10
    void WorldMap::DoDragStart(int arg1, int arg2) {
        field_152 = field_200;
        field_156 = field_204;
        field_160 = arg1;
        field_164 = arg2;
    }

    // 0x1003cdb30
    void WorldMap::DoDrag(int arg1, int arg2) {
        int local_34[3];

        float fVar5 = (float)ceil(field_248 * 4.0);
        int iVar1 = field_164;
        float fVar6 = 1.0 / (fVar5 * 0.125);
        fVar5 = (float)::floor((float)(field_160 - arg1) * fVar6);
        fVar6 = (float)::floor((float)(iVar1 - arg2) * fVar6);
        local_34[0] = (int)fVar5 + field_152;
        local_34[1] = 0;
        auto piVar3 = std::max<int>(*local_34, *(local_34 + 1));
        local_34[2] = field_216 - 1;
        auto puVar4 = std::min<int>(*piVar3, *(local_34 + 2));
        unsigned int uVar2 = *puVar4;
        field_208 = uVar2;
        field_200 = uVar2;
        local_34[0] = field_156 - (int)fVar6;
        local_34[1] = 0;
        piVar3 = std::max<int>(*local_34, *(local_34 + 1));
        local_34[2] = field_220 - 1;
        puVar4 = (unsigned int*)std::min<int>(*piVar3, *(local_34 + 2));
        uVar2 = *puVar4;
        field_212 = uVar2;
        field_204 = uVar2;
        CheckGridPosition();
    }

    // 0x1003cdc60
    uint64_t WorldMap::GetSourceCoordAtScreenPosition(CoordGrid& coordGrid, int arg2, int arg3, math::Rect<int> rect) {
        float fVar5;
        float fVar6;
        float extraout_XMM0_Dc;
        float extraout_XMM0_Dd;
        CoordGrid local_88;

        uint64_t local_58 = ceil(field_248 * 4.0);
        float local_34 = (float)(int)field_200 * 0.125;
        float local_38 = (float)(int)field_204;
        float fStack_50 = extraout_XMM0_Dc;
        float fStack_4c = extraout_XMM0_Dd;
        auto piVar1 = rect->SSOBeginPtr();
        int iVar4 = *piVar1;
        piVar1 = (int*)rect->second();
        float local_78 = (float)(int)(float)local_58;
        float fStack_74 = (float)(int)local_58._4_4_;
        float fStack_70 = (float)(int)fStack_50;
        float fStack_6c = (float)(int)fStack_4c;
        iVar4 = (int)((float)*piVar1 * 0.5 - local_34 * local_78) + iVar4;
        piVar1 = (int*)rect->y();
        int iVar3 = *piVar1;
        piVar1 = (int*)rect->qw();
        uint64_t uVar2 = 0;
        if (iVar4 <= arg2) {
            iVar3 = iVar3 + (int)((local_38 * 0.125 + 0.0625) * local_78 + (float)*piVar1 * 0.5);
            if (((arg3 <= iVar3) && (arg2 <= (int)((float)(int)field_216 * 0.125) * (int)(float)local_58 + iVar4)) &&
                (iVar3 - (int)((float)(int)field_220 * 0.125) * (int)(float)local_58 <= arg3)) {
                local_58._0_4_ = (float)(iVar3 - arg3);
                local_34 = (1.0 / local_78) * 8.0;
                fVar5 = (float)::floor((float)(arg2 - iVar4) * local_34 + 0.5);
                fVar6 = (float)::floor(local_34 * (float)local_58 + 0.5);
                local_88 = oldscape::rs2lib::worldmap::LocationData(0, (int)fVar5 + field_232, (int)fVar6 + field_236);
                uVar2 = field_512->GetSourceCoord(coordGrid, local_88);
            }
        }
        return uVar2;
    }

    // 0x1003cde60
    void WorldMap::RenderMapElement(graphics::GUIManager& guiManager, math::Rect<int>& rect, int arg3, int arg4,
                                    int arg5, shared_ptr<MapElementType>& mapElementType,
                                    WorldMap::MapElementInstance& mapElementInstance, bool arg8) {
        uint8_t* puVar1;
        bool bVar2;
        bool cVar3;
        int iVar4;
        int iVar5;
        uint32_t uVar6;
        int* piVar9;
        shared_ptr<oldscape::dash3d::GroundDecor>* psVar11;
        SpriteAtlasReference* pSVar12;
        WaterType* pWVar13;
        vector<eastl::pair<int, int>>* pvVar16;
        CoordMapSquare* pCVar17;
        uint32_t* puVar18;
        unsigned int* puVar19;
        unsigned long uVar20;
        GameToken* this_03;
        long lVar21;
        Model* pMVar22;
        shared_ptr* this_04;
        AchievementType* pAVar24;
        Histogram<unsigned int, 30>* pHVar25;
        unsigned long arg1;
        WorldMap* pWVar29;
        unsigned long uVar30;
        StringView local_168;
        StringView local_158;
        StringView local_148;
        vector<eastl::pair<int, int>>* local_130;
        vector<eastl::pair<int, int>>* local_128;
        shared_ptr local_100;
        shared_ptr local_a8;
        unsigned long local_90;
        unsigned int local_84;
        char* local_50;

        FlashState* local_78 = (FlashState*)rect;
        WorldMap* local_70 = this;
        if (((field_4032 != false) && (arg8)) &&
            (cVar3 = IsF2PTile(*(int*)(mapElementInstance.field_20 + 4), *(int*)(mapElementInstance.field_20 + 8)),
             !cVar3)) {
            return;
        }
        unsigned int uVar28 = ((unsigned int)(*(int*)(mapElementInstance.field_20 + 4) * arg5) >> 3) + arg3;
        int iVar27 = arg4 - ((unsigned int)(*(int*)(mapElementInstance.field_20 + 8) * arg5) >> 3);
        int local_40 = 2147483647;
        int local_3c = -2147483648;
        int local_38 = 2147483647;
        int local_34 = -2147483648;
        auto pMVar7 = mapElementType.operator->();
        long lVar8 = pMVar7->GetPolygon();
        if (lVar8 != 0) {
            pMVar7 = (MapElementType*)mapElementType.operator->();
            lVar8 = pMVar7->GetPolygon();
            local_d8.m_pFont._0_4_ = (*(int*)(lVar8 + 32) * arg5 >> 12) + uVar28;
            local_a8._0_4_ = (*(int*)(lVar8 + 40) * arg5 >> 12) + uVar28;
            local_100._0_4_ = iVar27 - (*(int*)(lVar8 + 44) * arg5 >> 12);
            local_50 =
                (char*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(iVar27 - (*(int*)(lVar8 + 36) * arg5 >> 12)));
            piVar9 = std::min<int>(local_40, local_d8);
            local_40 = *piVar9;
            piVar9 = std::max<int>(local_3c, local_a8);
            local_3c = *piVar9;
            piVar9 = std::min<int>(local_38, local_100);
            local_38 = *piVar9;
            piVar9 = std::max<int>(local_34, local_50);
            local_34 = *piVar9;
        }
        local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)arg5);
        int local_60 = 0;
        int local_5c = 0;
        int local_58 = 0;
        int local_54 = 0;
        unsigned long local_b0 = (unsigned long)uVar28;
        int local_44 = iVar27;
        auto pMVar10 = mapElementType.operator->();
        iVar27 = pMVar10->GetSpriteID();
        if (iVar27 == -1) {
            local_a8 = shared_ptr();
            iVar27 = (int)local_b0;
            pWVar29 = local_70;
        } else {
            pMVar7 = (MapElementType*)mapElementType.operator->();
            pWVar29 = local_70;
            psVar11 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pMVar7->GetSprite(
                local_70->field_8, *(bool*)&mapElementInstance.field_16);
            local_a8 = shared_ptr(psVar11);
            iVar27 = (int)local_b0;
        }
        FlashState* this_01 = local_78;
        cVar3 = shared_ptr::operator_cast_to_bool(&local_a8);
        int iVar26 = 0;
        unsigned long local_68 = 0;
        if (cVar3) {
            pSVar12 = (SpriteAtlasReference*)local_a8.operator->();
            local_68 = pSVar12->GetWidth();
            pSVar12 = (SpriteAtlasReference*)local_a8.operator->();
            iVar4 = pSVar12->GetHeight();
            pSVar12 = (SpriteAtlasReference*)local_a8.operator->();
            pSVar12->GetTotalWidth();
            pSVar12 = (SpriteAtlasReference*)local_a8.operator->();
            iVar26 = pSVar12->GetTotalHeight();
            pWVar13 = (WaterType*)mapElementType.operator->();
            iVar5 = pWVar13->GetEmissiveMapMaterialID();
            if (iVar5 == 0) {
                local_5c = (int)local_68 + iVar27;
                local_60 = iVar27;
            } else if (iVar5 == 1) {
                local_60 = iVar27 - ((int)local_68 + 1 >> 1);
                local_5c = local_60 + (int)local_68;
            } else if (iVar5 == 2) {
                local_60 = iVar27 - (int)local_68;
                local_5c = iVar27;
            }
            pMVar7 = (MapElementType*)mapElementType.operator->();
            iVar5 = pMVar7->GetVAlign();
            if (iVar5 == 2) {
                local_58 = local_44 - iVar4;
                local_54 = local_44;
            } else if (iVar5 == 1) {
                local_58 = local_44 - (iVar4 + 1 >> 1);
                local_54 = local_58 + iVar4;
            } else if (iVar5 == 0) {
                local_58 = local_44;
                local_54 = iVar4 + local_44;
            }
            piVar9 = std::min<int>(local_40, local_60);
            local_40 = *piVar9;
            piVar9 = std::max<int>(local_3c, local_5c);
            local_3c = *piVar9;
            piVar9 = std::min<int>(local_38, local_58);
            local_38 = *piVar9;
            piVar9 = std::max<int>(local_34, local_54);
            local_34 = *piVar9;
        }
        unsigned int local_e8 = 0;
        int local_e4 = 0;
        unsigned int local_e0 = 0;
        int local_dc = 0;
        pMVar7 = (MapElementType*)mapElementType.operator->();
        if (pMVar7->GetText() == nullptr) {
            local_100 = shared_ptr();
        } else {
            iVar4 = ((NXTRenderCanvas*)mapElementType.operator->())->GetLastNumVerts();
            psVar11 = (shared_ptr<oldscape::dash3d::GroundDecor>*)GetLabelFont(pWVar29, iVar4);
            local_100 = shared_ptr(psVar11);
        }
        int local_94 = iVar26;
        cVar3 = shared_ptr::operator_cast_to_bool(&local_100);
        uint64_t uVar15 = 0;
        uint64_t local_f0 = 0;
        unsigned long local_110 = 0;
        unsigned long local_118 = 0;
        if (cVar3) {
            local_d8 = graphics::TextProperties(local_100);
            pMVar7 = (MapElementType*)mapElementType.operator->();
            local_50 = pMVar7->GetText();
            local_168.StringView<char const*>(local_50);
            piVar9 = (int*)this_01->second();
            uVar15 = graphics::FontHelpers::PredictHeightAndLines(&local_168, *piVar9, local_d8);
            pMVar7 = (MapElementType*)mapElementType.operator->();
            local_50 = pMVar7->GetText();
            local_158.StringView<char const*>(local_50);
            piVar9 = (int*)this_01->second();
            local_f0 = graphics::FontHelpers::PredictWidthMultiLine(&local_158, *piVar9, local_d8);
            pMVar10 = (MSIType*)mapElementType.operator->();
            iVar4 = (int)local_f0;
            uVar28 = iVar27 - (iVar4 >> 1);
            iVar26 = pMVar10->GetSpriteID();
            local_dc = (int)uVar15;
            iVar27 = local_dc >> 1;
            if (iVar26 != -1) {
                iVar27 = (local_94 >> 1) + local_dc;
            }
            local_e0 = local_44 - iVar27;
            local_110 = (unsigned long)local_e0;
            local_e4 = iVar4 + uVar28;
            local_dc = local_e0 + local_dc;
            local_118 = (unsigned long)uVar28;
            local_e8 = uVar28;
            piVar9 = std::min<int>(local_40, local_e8);
            local_40 = *piVar9;
            piVar9 = std::max<int>(local_3c, local_e4);
            local_3c = *piVar9;
            piVar9 = std::min<int>(local_38, local_e0);
            local_38 = *piVar9;
            piVar9 = std::max<int>(local_34, local_dc);
            local_34 = *piVar9;
        }
        uint64_t local_108 = uVar15;
        new (mapElementInstance)
            oldscape::dash3d::GridRect(local_40, local_38, local_3c - local_40, local_34 - local_38);
        cVar3 = this_01->Excludes(mapElementInstance);
        if (cVar3)
            goto LAB_1003cec9d;
        pMVar7 = (MapElementType*)mapElementType.operator->();
        lVar8 = pMVar7->GetPolygon();
        if (lVar8 != 0) {
            pMVar7 = (MapElementType*)mapElementType.operator->();
            pvVar16 = (vector<eastl::pair<int, int>>*)pMVar7->GetPolygon();
            local_d8 = eastl::vector<int>();
            lVar8 = pvVar16->size();
            local_d8.resize(lVar8 * 2);
            lVar8 = pvVar16->size();
            if (lVar8 != 0) {
                arg1 = 0;
                uVar20 = 0;
                uVar30 = 1;
                do {
                    pCVar17 = (CoordMapSquare*)(*pvVar16)[uVar20];
                    iVar27 = pCVar17->GetX();
                    local_50 = (char*)(((uint64_t)local_50._4_4_ << 32) |
                                       (uint32_t)((iVar27 * (int)local_90 >> 12) + (int)local_b0));
                    pCVar17 = (CoordMapSquare*)(*pvVar16)[uVar20];
                    iVar27 = pCVar17->GetZ();
                    local_84 = local_44 - (iVar27 * (int)local_90 >> 12);
                    piVar9 = std::min<int>(local_40, local_50);
                    local_40 = *piVar9;
                    piVar9 = std::max<int>(local_3c, local_50);
                    local_3c = *piVar9;
                    piVar9 = std::min<int>(local_38, local_84);
                    local_38 = *piVar9;
                    piVar9 = std::max<int>(local_34, local_84);
                    local_34 = *piVar9;
                    uVar6 = local_50._0_4_;
                    puVar18 = &local_d8[arg1];
                    uVar28 = local_84;
                    *puVar18 = uVar6;
                    puVar19 = &local_d8[(unsigned long)((int)arg1 + 1)];
                    arg1 = (unsigned long)((int)arg1 + 2);
                    *puVar19 = uVar28;
                    uVar20 = pvVar16->size();
                    bVar2 = uVar30 < uVar20;
                    uVar20 = uVar30;
                    uVar30 = (unsigned long)((int)uVar30 + 1);
                } while (bVar2);
            }
            guiManager.AddColouredTriangleList(local_d8, *((pvVar16 + 112)), *(unsigned int*)(pvVar16 + 48), 1, true);
            guiManager.Render(nullptr);
            local_78 = (FlashState*)(pvVar16 + 88);
            local_128 = pvVar16 + 64;
            uVar20 = 1;
            local_130 = pvVar16;
            while (true) {
                iVar27 = (int)uVar20;
                uVar28 = iVar27 - 1;
                lVar8 = local_d8.size();
                if (lVar8 - 2U <= (unsigned long)uVar28)
                    break;
                puVar18 = &local_d8[(unsigned long)uVar28];
                local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)(*puVar18));
                piVar9 = &local_d8[uVar20];
                iVar26 = *piVar9;
                piVar9 = &local_d8[(unsigned long)(iVar27 + 1)];
                iVar4 = *piVar9;
                uVar20 = (unsigned long)(iVar27 + 2);
                piVar9 = &local_d8[uVar20];
                iVar27 = *piVar9;
                piVar9 = (int*)(*local_78)[(unsigned long)(uVar28 >> 1)];
                puVar19 = (unsigned int*)(*local_128)[(long)*piVar9];
                guiManager.AddGeneralLine((int)local_90, iVar26, iVar4, iVar27, 1.0, *puVar19, 1, true);
            }
            lVar8 = local_d8.size();
            piVar9 = &local_d8[lVar8 - 2];
            pvVar16 = local_130;
            iVar27 = *piVar9;
            lVar8 = local_d8.size();
            piVar9 = &local_d8[lVar8 - 1];
            iVar26 = *piVar9;
            piVar9 = &local_d8[0];
            iVar4 = *piVar9;
            piVar9 = &local_d8[1];
            iVar5 = *piVar9;
            lVar8 = pvVar16->size();
            piVar9 = (int*)(*local_78)[lVar8 - 1];
            puVar19 = (unsigned int*)(*local_128)[(long)*piVar9];
            guiManager.AddGeneralLine(iVar27, iVar26, iVar4, iVar5, 1.0, *puVar19, 1, true);
        }
        cVar3 = shared_ptr::operator_cast_to_bool(&local_a8);
        if (cVar3) {
            pSVar12 = (SpriteAtlasReference*)local_a8.operator->();
            cVar3 = pSVar12->IsReady();
            if (cVar3) {
                pWVar13 = (WaterType*)mapElementType.operator->();
                iVar27 = pWVar13->GetEmissiveMapMaterialID();
                if (iVar27 == 1) {
                    local_90 = (unsigned long)(unsigned int)((int)local_68 >> 1);
                } else {
                    local_90 = 0;
                    if (iVar27 == 2) {
                        local_90 = local_68;
                    }
                }
                pMVar7 = (MapElementType*)mapElementType.operator->();
                iVar27 = pMVar7->GetVAlign();
                if (iVar27 == 2) {
                    iVar26 = (int)local_68;
                } else {
                    iVar26 = 0;
                    if (iVar27 == 1) {
                        iVar26 = (int)local_68 >> 1;
                    }
                }
                this_03 = (GameToken*)mapElementType.operator->();
                puVar1 = &local_70->field_600;
                local_d8.m_pFont._0_4_ = this_03->GetStatus();
                lVar8 = eastl::vector_map<int, WorldMap::FlashState>::find(*puVar1);
                lVar21 = puVar1->end();
                if (lVar8 == lVar21) {
                    pMVar7 = (MapElementType*)mapElementType.operator->();
                    puVar1 = &local_70->field_640;
                    uVar6 = pMVar7->GetCategory();
                    local_50 = (char*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar6);
                    lVar8 = eastl::vector_map<int, WorldMap::FlashState>::find(*puVar1);
                    lVar21 = puVar1->end();
                    if (lVar8 != lVar21)
                        goto LAB_1003ce858;
                    local_78 = nullptr;
                } else {
                LAB_1003ce858:
                    local_78 = (FlashState*)(lVar8 + 4);
                }
                if (local_78 != nullptr) {
                    pMVar22 = (Model*)mapElementType.operator->();
                    iVar27 = pMVar22->GetModelRawUniqueID();
                    if (iVar27 == -1) {
                        uVar28 = local_78->GetFlashColourRGBA(local_70->m_flashTicks);
                        iVar27 = -1;
                        do {
                            local_d8.m_pFont._0_4_ = 0;
                            local_50 = (char*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)iVar27);
                            piVar9 = std::max<int>(local_d8, local_50);
                            iVar4 = *piVar9;
                            iVar5 = (int)local_68 + iVar4 * 2;
                            guiManager.AddColouredRectangle((int)local_b0 - ((int)local_90 + iVar4),
                                                            (local_44 - iVar26) - iVar4, iVar5, iVar5, uVar28, 1);
                            iVar27 = iVar27 + 2;
                        } while (iVar27 != 9);
                    }
                }
                guiManager.AddSprite(local_60, local_58, local_5c - local_60, local_54 - local_58, 4294967295, local_a8,
                                     1);
                if (local_78 != nullptr) {
                    pMVar22 = (Model*)mapElementType.operator->();
                    iVar27 = pMVar22->GetModelRawUniqueID();
                    if (iVar27 != -1) {
                        pMVar7 = (MapElementType*)mapElementType.operator->();
                        this_04 = (shared_ptr*)pMVar7->GetFlashSprite(local_70->field_8);
                        cVar3 = shared_ptr::operator_cast_to_bool(this_04);
                        if (cVar3) {
                            pSVar12 = (SpriteAtlasReference*)(*this_04).operator->();
                            cVar3 = pSVar12->IsReady();
                            if (cVar3) {
                                pSVar12 = (SpriteAtlasReference*)(*this_04).operator->();
                                iVar27 = pSVar12->GetTotalWidth();
                                pSVar12 = (SpriteAtlasReference*)(*this_04).operator->();
                                iVar26 = pSVar12->GetTotalHeight();
                                pWVar13 = (WaterType*)mapElementType.operator->();
                                iVar4 = pWVar13->GetEmissiveMapMaterialID();
                                if (iVar4 == 0) {
                                LAB_1003ce9ef:
                                    iVar5 = iVar27;
                                } else {
                                    iVar5 = 0;
                                    if (iVar4 == 1) {
                                        iVar27 = iVar27 >> 1;
                                        goto LAB_1003ce9ef;
                                    }
                                }
                                pMVar7 = (MapElementType*)mapElementType.operator->();
                                iVar27 = pMVar7->GetVAlign();
                                if (iVar27 == 2) {
                                LAB_1003cea13:
                                    iVar4 = iVar26 + local_94 >> 1;
                                } else {
                                    iVar4 = 0;
                                    if (iVar27 == 1) {
                                        iVar26 = iVar26 >> 1;
                                        goto LAB_1003cea13;
                                    }
                                }
                                uVar28 = local_78->GetFlashColourRGBA(local_70->m_flashTicks);
                                pSVar12 = (SpriteAtlasReference*)(*this_04).operator->();
                                iVar27 = pSVar12->GetWidth();
                                pSVar12 = (SpriteAtlasReference*)(*this_04).operator->();
                                iVar26 = pSVar12->GetHeight();
                                guiManager.AddSprite((int)local_b0 - iVar5, local_44 - iVar4, iVar27, iVar26, uVar28,
                                                     *this_04, 1);
                            }
                        }
                    }
                }
            }
        }
        cVar3 = shared_ptr::operator_cast_to_bool(&local_100);
        pWVar29 = local_70;
        if (!cVar3)
            goto LAB_1003cec9d;
        AnimationParameters* pAVar23 = (AnimationParameters*)mapElementType.operator->();
        iVar26 = pAVar23->GetAnimationLength();
        iVar27 = (int)local_108;
        if (iVar26 == 0) {
            pAVar24 = (AchievementType*)mapElementType.operator->();
            iVar26 = pAVar24->GetRuneScore();
            iVar27 = (int)local_108;
            if (iVar26 != 0)
                goto LAB_1003cead9;
        } else {
        LAB_1003cead9:
            local_d8 =
                oldscape::dash3d::GridRect((int)local_118 - 5, (int)local_110 + 2, (int)local_f0 + 10, iVar27 - 1);
            pAVar23 = (AnimationParameters*)mapElementType.operator->();
            iVar27 = pAVar23->GetAnimationLength();
            if (iVar27 != 0) {
                pAVar23 = (AnimationParameters*)mapElementType.operator->();
                uVar28 = pAVar23->GetAnimationLength();
                guiManager.AddColouredRectangle(local_d8, uVar28, 1);
            }
            pAVar24 = (AchievementType*)mapElementType.operator->();
            iVar27 = pAVar24->GetRuneScore();
            if (iVar27 != 0) {
                pAVar24 = (AchievementType*)mapElementType.operator->();
                uVar28 = pAVar24->GetRuneScore();
                guiManager.AddOutline(local_d8, 1, uVar28, 1);
            }
        }
        local_84 = ((Option<option::EnumBrightness>*)pWVar29->field_24->GetWorldMapDefaults())->GetValue();
        if (*(char*)&mapElementInstance.field_16 == '\0') {
        LAB_1003cebce:
            uVar28 = ((HitmarkType*)mapElementType.operator->())->GetOverride();
        } else {
            pHVar25 = (Histogram<unsigned int, 30>*)mapElementType.operator->();
            iVar27 = pHVar25->GetMean();
            if (iVar27 == -1)
                goto LAB_1003cebce;
            pHVar25 = (Histogram<unsigned int, 30>*)mapElementType.operator->();
            uVar28 = pHVar25->GetMean();
        }
        unsigned int local_11c = 0;
        TextProperties local_d8(local_100);
        local_d8.SetAlignment(1, 0);
        optional<unsigned int> local_138(local_84);
        local_d8.SetColours(uVar28, &local_138);
        FontHelpers* this_00 = pWVar29->field_48;
        pMVar7 = (MapElementType*)mapElementType.operator->();
        local_50 = pMVar7->GetText();
        local_148.StringView<char const*>(local_50);
        this_00->DrawStringMultiline(&local_148, (int)local_118, (int)local_110, (int)local_f0, (int)local_108,
                                     &local_11c, local_d8);
    LAB_1003cec9d:
    }

    // 0x1003ced40
    unsigned long WorldMap::ShouldRenderMapElementType(shared_ptr<MapElementType>& mapElementType,
                                                       const PlayerVarDomain* playerVarDomain, int arg3) {
        uint8_t* this_00;
        int iVar2;
        uint8_t* puVar5;
        GameToken* pGVar6;
        char* pcVar7;
        NXTRenderCanvas* pNVar8;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_58;
        ReturnValue local_50;
        int local_38;
        bool local_31;

        unsigned long uVar9 = 0;
        auto mapElementType_00 = field_24->GetConfig<MapElementType>(arg3, nullptr);
        mapElementType = *mapElementType_00;
        bool cVar1 = mapElementType.operator_cast_to_bool();
        if (!cVar1)
            goto LAB_1003ceea2;
        auto pMVar4 = mapElementType.operator->();
        cVar1 = pMVar4->IsMultiME();
        if (!cVar1) {
        LAB_1003cedda:
            cVar1 = ((StaticPointLight*)mapElementType.operator->())->IsValid();
            if (cVar1) {
                pMVar4 = (MapElementType*)mapElementType.operator->();
                puVar5 = (uint8_t*)pMVar4->VariableTest(local_31, playerVarDomain, field_24);
                uVar9 = 0;
                if ((puVar5 != DataStatus::READY) || (local_31 == false))
                    goto LAB_1003ceea2;
                pGVar6 = (GameToken*)mapElementType.operator->();
                iVar2 = pGVar6->GetStatus();
                if (iVar2 < 0) {
                LAB_1003cee5b:
                    LogAssert("mapElementTypeOut->GetMyID() >= 0 && mapElementTypeOut->GetMyID() < "
                              "(int)m_disabledMapElements.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/worldmap/WorldMap.cpp",
                              2155, nullptr);
                }
                pGVar6 = (GameToken*)mapElementType.operator->();
                iVar2 = pGVar6->GetStatus();
                if (field_528.end() <= iVar2)
                    goto LAB_1003cee5b;
                pGVar6 = (GameToken*)mapElementType.operator->();
                iVar2 = pGVar6->GetStatus();
                pcVar7 = &field_528[(long)iVar2];
                if (*pcVar7 == '\0') {
                    this_00 = &field_552;
                    pMVar4 = (MapElementType*)mapElementType.operator->();
                    local_50 = this_00->find(pMVar4->GetCategory());
                    local_58.end();
                    cVar1 = local_50 != local_58;
                    if (cVar1) {
                        pMVar4 = (MapElementType*)mapElementType.operator->();
                        local_38 = pMVar4->GetCategory();
                        pcVar7 = (char*)(*this_00)[local_38];
                        if (*pcVar7 != '\0')
                            goto LAB_1003ceea0;
                    }
                    pMVar4 = (MapElementType*)mapElementType.operator->();
                    pcVar7 = pMVar4->GetText();
                    if (pcVar7 == nullptr) {
                    LAB_1003cef95:
                        uVar9 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
                        goto LAB_1003ceea2;
                    }
                    pNVar8 = (NXTRenderCanvas*)mapElementType.operator->();
                    iVar2 = pNVar8->GetLastNumVerts();
                    if ((iVar2 != 0) || (field_692 == false)) {
                        pNVar8 = (NXTRenderCanvas*)mapElementType.operator->();
                        iVar2 = pNVar8->GetLastNumVerts();
                        if ((iVar2 != 1) || (field_693 == false)) {
                            pNVar8 = (NXTRenderCanvas*)mapElementType.operator->();
                            iVar2 = pNVar8->GetLastNumVerts();
                            if ((iVar2 != 2) || (field_694 == false))
                                goto LAB_1003cef95;
                        }
                    }
                }
            }
        } else {
            pMVar4 = (MapElementType*)mapElementType.operator->();
            local_50 = pMVar4->GetMultiME(playerVarDomain, field_24);
            mapElementType = local_50;
            cVar1 = mapElementType.operator_cast_to_bool();
            if (cVar1)
                goto LAB_1003cedda;
        }
    LAB_1003ceea0:
        uVar9 = 0;
    LAB_1003ceea2:
        return uVar9 & 4294967295;
    }

    // 0x1003cf190
    bool WorldMap::IsF2PTile(int arg1, int arg2) {
        uint8_t* puVar1 = &field_4040[(long)((arg2 >> 3) * field_224 + (arg1 >> 3))];
        return *puVar1;
    }

    // 0x1003cf2d0
    int WorldMap::GetDesiredTerrainTextureSize() const {
        float fVar1 = field_248;
        int iVar2 = 512;
        if (((fVar1 <= 8.0) && (iVar2 = 256, fVar1 <= 6.0)) && (iVar2 = 128, fVar1 <= 4.0)) {
            iVar2 = (unsigned int)(3.0 <= fVar1) * 32 + 32;
        }
        return iVar2;
    }

    // 0x1003cf320
    bool WorldMap::IsMapSquareValid(int arg1, int arg2) const {
        unsigned int uVar2;
        char* pcVar3;
        int iVar4;
        int iVar5;
        unsigned int uVar6;
        long lVar7;
        bool bVar8;

        uint8_t* this_00 = &field_744;
        if (this_00->empty() == '\0') {
            uVar6 = arg1 * 8;
            uVar2 = arg2 << 3;
            do {
                iVar5 = field_224 * uVar2;
                pcVar3 = (char*)(*this_00)[(long)(int)(uVar6 + iVar5)];
                iVar4 = 1;
                bVar8 = true;
                if (*pcVar3 == '\0') {
                    lVar7 = 0;
                    do {
                        bVar8 = (int)(uVar6 + (int)lVar7) < (int)(uVar6 | 7);
                        if ((int)lVar7 == 7) {
                            iVar4 = 0;
                            goto LAB_1003cf410;
                        }
                        pcVar3 = (char*)(*this_00)[(long)(int)(iVar5 + uVar6) + 1 + lVar7];
                        lVar7 = lVar7 + 1;
                    } while (*pcVar3 == '\0');
                    iVar4 = 1;
                }
            LAB_1003cf410:
                if (bVar8)
                    goto LAB_1003cf42f;
                bVar8 = uVar2 != (arg2 << 3 | 7U);
                uVar2 = uVar2 + 1;
            } while (bVar8);
            iVar4 = 2;
        LAB_1003cf42f:
            bVar8 = iVar4 != 2;
        } else {
            bVar8 = false;
        }
        return bVar8;
    }

    // 0x1003cf560
    auto WorldMap::GenerateTerrainTexture(unsigned int arg1, unsigned int arg2, short arg3) {
        bool cVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        WorldMap* pWVar7;
        char* pcVar10;
        unsigned int* puVar11;
        unsigned int uVar12;
        unsigned int uVar13;
        Array<bool>* pAVar14;
        unsigned long uVar15;
        uint64_t in_register_00000082;
        unsigned long uVar16;
        unsigned long uVar17;
        unsigned int uVar18;
        unsigned int uVar20;
        long lVar21;
        Array<bool>* pAVar22;
        int iVar23;
        int iVar24;
        unsigned int local_84;
        unsigned int local_80;
        int local_7c;
        Array<bool>* local_78;
        uint64_t local_70;
        long local_68;
        unsigned int* local_60;
        unsigned int* local_58;
        unsigned long local_50;
        Array<bool>* local_40;

        auto result;
        unsigned int uVar19 = (unsigned int)(((uint64_t)in_register_00000082 << 16) | (uint16_t)arg3);
        result.set_max_size((unsigned long)(uVar19 * uVar19), 0);
        WorldMap* local_48 = this;
        long lVar5 = field_864.HeapBeginPtr();
        if (lVar5 == 0) {
            LogAssert("sourceDataRGBA != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "worldmap/WorldMap.cpp",
                      2909, nullptr);
        }
        auto pAVar6 = result.data();
        local_68 = (((uint64_t)local_68._4_4_ << 32) | (uint32_t)arg1);
        unsigned long local_38 = lVar5;
        if (arg3 < 64) {
            local_78 = (Array<bool>*)((unsigned long)local_78 & 18446744069414584320);
            uVar15 = 64 / (long)(int)uVar19 & 4294967295;
            local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)(arg2 << 6)) | 63;
            iVar24 = (int)(64 / (long)(int)uVar19);
            uVar2 = iVar24 * iVar24;
            local_40 = (Array<bool>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar24);
            do {
                local_50 = (unsigned long)(arg1 << 6);
                uVar12 = 0;
                do {
                    local_58 = (unsigned int*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar12);
                    if ((int)uVar15 == 0) {
                        uVar20 = 0;
                        uVar18 = 0;
                        uVar13 = 0;
                        uVar4 = 0;
                    } else {
                        uVar13 = 0;
                        uVar18 = 0;
                        uVar20 = 0;
                        uVar12 = 0;
                        pWVar7 = local_48;
                        iVar24 = (int)local_70;
                        do {
                            local_60 = (unsigned int*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar12);
                            if ((int)uVar15 != 0) {
                                iVar23 = 0;
                                do {
                                    local_84 =
                                        *(unsigned int*)(local_38 +
                                                         (unsigned long)(unsigned int)(*(int*)&pWVar7->field_896 *
                                                                                           iVar24 +
                                                                                       (int)local_50 + iVar23) *
                                                             4);
                                    cVar1 = IsLittleEndian();
                                    if (cVar1) {
                                        DoByteReorder<EndianSwap, int>(&local_84);
                                    }
                                    uVar13 = uVar13 + (local_84 >> 24);
                                    uVar18 = uVar18 + (local_84 >> 16 & 255);
                                    uVar20 = uVar20 + (local_84 >> 8 & 255);
                                    iVar23 = iVar23 + 1;
                                    uVar15 = (unsigned long)local_40 & 4294967295;
                                    pWVar7 = local_48;
                                } while ((int)local_40 != iVar23);
                            }
                            uVar12 = (int)local_60 + 1;
                            iVar24 = iVar24 - 1;
                            uVar4 = (unsigned int)uVar15;
                        } while (uVar12 != uVar4);
                    }
                    uVar3 = (unsigned int)local_78 / uVar4;
                    uVar12 = (unsigned int)local_58;
                    uVar4 = (unsigned int)local_58 / uVar4;
                    local_80 = uVar20 / uVar2 << 8 | uVar18 / uVar2 << 16 | uVar13 / uVar2 << 24 | 255;
                    cVar1 = IsLittleEndian();
                    if (cVar1) {
                        DoByteReorder<EndianSwap, int>(&local_80);
                    }
                    *(unsigned int*)(pAVar6 + (long)(int)(uVar3 * uVar19 + uVar4) * 4) = local_80;
                    uVar15 = (unsigned long)local_40 & 4294967295;
                    local_50 = (unsigned long)(unsigned int)((int)local_50 + (int)local_40);
                    uVar12 = uVar12 + (int)local_40;
                } while (uVar12 < 64);
                local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)((int)local_70 - (int)local_40));
                uVar12 = (unsigned int)local_78 + (int)local_40;
                local_78 = (Array<bool>*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)uVar12);
            } while (uVar12 < 64);
        } else if (arg3 == 64) {
            uVar2 = arg2 << 6 | 63;
            lVar5 = 0;
            do {
                _memcpy(pAVar6 + lVar5,
                        (void*)(local_38 + (unsigned long)(*(int*)&local_48->field_896 * uVar2 + arg1 * 64) * 4), 256);
                uVar2 = uVar2 - 1;
                lVar5 = lVar5 + 256;
            } while (lVar5 != 16384);
        } else {
            uVar2 = uVar19;
            if ((int)uVar19 < 0) {
                uVar2 = uVar19 + 63;
            }
            uVar2 = (int)uVar2 >> 6;
            uVar12 = arg2 << 6 | 63;
            local_60 = (unsigned int*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)(arg1 << 6));
            uVar15 = 1;
            if (1 < uVar2) {
                uVar15 = (unsigned long)uVar2;
            }
            local_58 = (unsigned int*)((long)arg3 * (unsigned long)uVar2 * 4);
            uVar16 = 0;
            pAVar22 = pAVar6;
            do {
                local_40 = pAVar22;
                local_50 = uVar16;
                lVar21 = 0;
                pAVar22 = local_40;
                iVar24 = arg1 << 6;
                do {
                    if (126 < uVar19 + 63) {
                        iVar23 = *(int*)&local_48->field_896;
                        uVar16 = 0;
                        pAVar14 = pAVar22;
                        do {
                            uVar17 = 0;
                            do {
                                *(uint32_t*)(pAVar14 + uVar17 * 4) =
                                    *(uint32_t*)(lVar5 + (unsigned long)(iVar23 * uVar12 + iVar24) * 4);
                                uVar17 = uVar17 + 1;
                            } while (uVar15 != uVar17);
                            uVar16 = uVar16 + 1;
                            pAVar14 = pAVar14 + (long)arg3 * 4;
                        } while (uVar16 != uVar15);
                    }
                    iVar24 = iVar24 + 1;
                    lVar21 = lVar21 + 1;
                    pAVar22 = pAVar22 + (unsigned long)uVar2 * 4;
                } while (lVar21 != 64);
                uVar12 = uVar12 - 1;
                uVar16 = local_50 + 1;
                pAVar22 = local_40 + (long)local_58;
            } while (local_50 + 1 != 64);
        }
        Layout* this_00 = &local_48->field_912[(unsigned long)(arg2 * local_48->field_904 + (int)local_68)];
        if ((unsigned short)arg3 < 64) {
            local_7c = (int)(64 / (long)(int)uVar19);
            uVar2 = 1;
        } else {
            uVar2 = (int)uVar19 >> 6;
            local_7c = 1;
        }
        auto pbVar8 = this_00->HeapBeginPtr();
        auto pbVar9 = this_00->end();
        if (pbVar8 != pbVar9) {
            local_38 = (unsigned long)uVar2;
            local_48 = (WorldMap*)&local_48->field_944;
            do {
                local_40 = (Array<bool>*)local_48->GetShapeData((pbVar8[13] & 63) - 1, (unsigned int)(pbVar8[13] >> 6),
                                                                (unsigned int)local_38);
                if (local_7c < 2) {
                    iVar24 = (unsigned int)*pbVar8 + (63 - (unsigned int)pbVar8[1]) * uVar19;
                } else {
                    iVar24 = (int)((long)(unsigned long)*pbVar8 / (long)local_7c) +
                             ((int)(63 - (unsigned int)pbVar8[1]) / local_7c) * uVar19;
                }
                if (0 < (int)(unsigned int)local_38) {
                    local_60 = (unsigned int*)(pbVar8 + 8);
                    local_58 = (unsigned int*)(pbVar8 + 4);
                    iVar24 = iVar24 * (unsigned int)local_38;
                    local_70 = 0;
                    lVar5 = 0;
                    do {
                        pAVar22 = pAVar6 + (long)iVar24 * 4;
                        local_50 = (unsigned long)(int)lVar5;
                        lVar21 = 0;
                        local_78 = pAVar22;
                        local_68 = lVar5;
                        do {
                            if (pbVar8[12] == 0) {
                                pcVar10 = (char*)(*local_40)[local_50 + lVar21];
                                puVar11 = local_60;
                                if (*pcVar10 == '\0') {
                                    puVar11 = local_58;
                                }
                                *(unsigned int*)(pAVar22 + lVar21 * 4) = *puVar11;
                            } else {
                                pcVar10 = (char*)(*local_40)[local_50 + lVar21];
                                puVar11 = local_60;
                                if (*pcVar10 == '\0') {
                                    puVar11 = local_58;
                                }
                                uVar12 = *puVar11;
                                uVar4 = *(unsigned int*)(pAVar22 + lVar21 * 4);
                                cVar1 = IsLittleEndian();
                                uVar13 = uVar12 >> 24;
                                if (!cVar1) {
                                    uVar13 = uVar12;
                                }
                                cVar1 = IsLittleEndian();
                                uVar18 = uVar12 >> 8;
                                if (cVar1) {
                                    uVar18 = uVar12;
                                }
                                cVar1 = IsLittleEndian();
                                uVar12 = uVar4 >> 8;
                                if (cVar1) {
                                    uVar12 = uVar4;
                                }
                                cVar1 = IsLittleEndian();
                                uVar13 = uVar13 & 255;
                                uVar4 =
                                    (uVar12 & 65280) * (uVar13 ^ 255) + (uVar18 & 65280) * uVar13 & 16711680 |
                                    (uVar12 & 16711935) * (uVar13 ^ 255) + (uVar18 & 16711935) * uVar13 & 4278255360;
                                uVar12 = uVar4 | 255;
                                if (cVar1) {
                                    uVar12 = uVar4 >> 8 | 4278190080;
                                }
                                *(unsigned int*)(local_78 + lVar21 * 4) = uVar12;
                                pAVar22 = local_78;
                            }
                            lVar21 = lVar21 + 1;
                        } while ((unsigned int)local_38 != (unsigned int)lVar21);
                        iVar24 = iVar24 + (uVar19 - uVar2) + (unsigned int)lVar21;
                        uVar12 = (int)local_70 + 1;
                        local_70 = (unsigned long)uVar12;
                        lVar5 = (int)local_68 + lVar21;
                    } while (uVar12 != (unsigned int)local_38);
                }
                pbVar8 = pbVar8 + 16;
            } while (pbVar8 != pbVar9);
        }
        return result;
    }

} // namespace jag::game

// 0x1003c7600
void floor(float arg1) {
    _floorf();
}
