// libs/game/runetek5/scene/worldmap/WorldMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "WorldMap.h"

namespace jag::game {
    // 0x100d42bb4, 4 bytes, __const
    WorldMap::ZOOMLEVEL_CONTENT_MIN = 25;

    // 0x100d42bb8, 4 bytes, __const
    WorldMap::ZOOMLEVEL_CONTENT_MAX = 200;

    // 0x100d42bbc, 4 bytes, __const
    float WorldMap::ZOOMLEVEL_ENGINE_MIN = 2.0f;

    // 0x100d42bc0, 4 bytes, __const
    float WorldMap::ZOOMLEVEL_ENGINE_MAX = 16.0f;

    // 0x100d42bc4, 4 bytes, __const
    float WorldMap::ZOOMLEVEL_ENGINE_DEFAULT = 8.0f;

    // 0x100d42bc8, 112 bytes, __const
    WorldMap::MSI_MIN_SIZE = {
        3, 0, 3, 0, 2, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 10, 20, 50, 60, 70, 80, 90, 100, 1007192201,
    };

    // 0x100f38398, 8 bytes, __data
    WorldMap::INV_MAPZONE_TEXEL_SIZE = 1040187392;

    // 0x1039b4ab4, 36 bytes, __common; set at startup by ___cxx_global_var_init.60
    WorldMap::MapElementInstance WorldMap::DUMMY_MEL_INSTANCE = MapElementInstance();

    // 0x1003c6720, 1376 bytes, base-object constructor, placed by class name and debug map
    // WorldMap::WorldMap(graphics::RT7Core&, SceneManager&, ConfigProvider&, Js5ResourceProvider&, graphics::FontManager&, graphics::FontHelpers&)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* WorldMap::WorldMap(graphics::RT7Core&, SceneManager&,
   ConfigProvider&, Js5ResourceProvider&, graphics::FontManager&,
   graphics::FontHelpers&) */

    void WorldMap::WorldMap(RT7Core* param_1, SceneManager* param_2, ConfigProvider* param_3,
                            Js5ResourceProvider* param_4, FontManager* param_5, FontHelpers* param_6) {
        undefined1* this_00;
        undefined1* this_01;
        int local_38[2];

        field_0 = &PTR__WorldMap_100efe5c0;
        field_8 = param_1;
        field_16 = param_2;
        field_24 = param_3;
        field_32 = param_4;
        field_40 = param_5;
        field_48 = param_6;
        field_56 = 0;
        field_60 = 0;
        new (&field_64) Array<eastl::vector<WorldMap::MSIInstance, eastl::allocator>, eastl::allocator>();
        new (&field_88) eastl::vector<WorldMap::MapElementInstance, eastl::allocator>();
        field_120 = -1;
        new (&field_128) Array<eastl::vector<WorldMap::ZoneLine, eastl::allocator>, eastl::allocator>();
        new (&field_168, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
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
        std::array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>::array();
        field_504 = -1;
        field_512 = (CommandLine*)0;
        field_520 = 0;
        new (&field_528) Array<bool, eastl::allocator>();
        new (local_38) eastl::allocator("EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_552);
        new (&field_600) eastl::vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                                           eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>();
        new (&field_640) eastl::vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                                           eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>();
        m_flashPerpetual = false;
        m_flashTicks = 50;
        m_flashLoops = 3;
        field_692 = false;
        field_693 = false;
        field_694 = false;
        field_695 = false;
        field_696 = false;
        field_697 = false;
        new (&field_704) eastl::vector<WorldMap::PendingLocationType, eastl::allocator>();
        field_736 = 0;
        new (&field_744) Array<bool, eastl::allocator>();
        new (&field_768) eastl::vector<WorldMap::ZoneDetails, eastl::allocator>();
        new (&field_800) Array<shared_ptr<MapElementType>, eastl::allocator>();
        field_824 = 0;
        new (&field_832) eastl::vector<WorldMap::TerrainUnderlayTexture, eastl::allocator>();
        new (&field_864) eastl::vector<unsigned char, eastl::allocator>();
        new (&field_912) eastl::vector<eastl::vector<WorldMap::OverlayTileData, eastl::allocator>, eastl::allocator>();
        new (&field_944) OverlayShapeData();
        new (field_4016, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_4032 = true;
        new (&field_4040) eastl::vector<bool, eastl::allocator>();
        new (&field_4080) eastl::vector<int, eastl::allocator>();
        this_00 = &field_4112;
        new (this_00) eastl::vector<int, eastl::allocator>();
        new (&field_4144) eastl::vector<int, eastl::allocator>();
        this_01 = &field_4176;
        new (this_01) eastl::vector<int, eastl::allocator>();
        new (&field_4208) eastl::vector<bool, eastl::allocator>();
        *(undefined1*)&this[1].field_24 = 1;
        _DAT_1039b4ac8 = 4294967295;
        eastl::vector<int, eastl::allocator>::resize((ulong)&field_4080);
        local_38[0] = 0;
        this_00->push_back(local_38);
        local_38[0] = 1;
        this_00->push_back(local_38);
        local_38[0] = 2;
        this_00->push_back(local_38);
        eastl::vector<int, eastl::allocator>::resize((ulong)&field_4144);
        local_38[0] = 0;
        this_01->push_back(local_38);
        local_38[0] = 1;
        this_01->push_back(local_38);
        local_38[0] = 2;
        this_01->push_back(local_38);
        local_38[0] = 0;
        this_01->push_back(local_38);
        local_38[0] = 2;
        this_01->push_back(local_38);
        local_38[0] = 3;
        this_01->push_back(local_38);
        CreateRenderingResources();
    }

    // 0x1003c6d10, 32 bytes, placed by class name and debug map
    // WorldMap::CreateRenderingResources()
    void WorldMap::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10[8];

        local_10->~AutoSingleton("WorldMap");
    }

    // 0x1003c6dd0, 32 bytes, complete-object constructor, placed by class name
    // WorldMap::WorldMap(graphics::RT7Core&, SceneManager&, ConfigProvider&, Js5ResourceProvider&, graphics::FontManager&, graphics::FontHelpers&)
    void WorldMap::WorldMap(RT7Core* param_1, SceneManager* param_2, ConfigProvider* param_3,
                            Js5ResourceProvider* param_4, FontManager* param_5, FontHelpers* param_6) {
        WorldMap(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x1003c6df0, 608 bytes, base-object destructor, placed by class name
    // WorldMap::~WorldMap()
    void WorldMap::~WorldMap() {
        field_0 = &PTR__WorldMap_100efe5c0;
        Reset(this, true);
        DestroyRenderingResources(this);
        (&field_4208)->~vector();
        (&field_4176)->~vector();
        (&field_4144)->~vector();
        (&field_4112)->~vector();
        (&field_4080)->~vector();
        (&field_4040)->~vector();
        field_4016->~shared_ptr();
        (&field_944)->~OverlayShapeData();
        (&field_912)->~vector();
        (&field_864)->~vector();
        (&field_832)->~vector();
        (&field_800)->~Array();
        (&field_768)->~vector();
        (&field_744)->~Array();
        (&field_704)->~vector();
        (&field_640)->~vector_map();
        (&field_600)->~vector_map();
        (&field_552)->~map();
        (&field_528)->~Array();
        (&field_264)->~array();
        (&field_128)->~Array();
        (&field_88)->~vector();
        (&field_64)->~Array();
    }

    // 0x1003c7050, 352 bytes, placed by class name
    // WorldMap::Reset(bool)
    void WorldMap::Reset(bool param_1) {
        array<shared_ptr<graphics::Font>, 5ul>* this_00;
        long* plVar2;
        ulong uVar3;
        undefined7 in_register_00000031;
        ulong uVar4;

        field_56 = 0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        (&field_64)->clear();
        (&field_128)->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_736 = 0;
        (&field_744)->clear();
        field_184 = 0;
        field_188 = 0;
        if ((int)CONCAT71(in_register_00000031, param_1) != 0) {
            uVar4 = 0;
            do {
                this_00 = (array<shared_ptr<graphics::Font>, 5ul>*)
                    std::array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>::operator[](
                        (array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>*)&field_264, uVar4);
                uVar3 = 0;
                do {
                    std::array<shared_ptr<graphics::Font>, 5ul>::operator[](this_00, uVar3);
                    shared_ptr<graphics::Font>::reset();
                    uVar3 = uVar3 + 1;
                } while (uVar3 != 5);
                uVar4 = uVar4 + 1;
            } while (uVar4 != 3);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_120 = -1;
        (&field_832)->clear();
        (&field_912)->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if (field_4016->operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<render::Texture2D>::operator->((shared_ptr<render::Texture2D>*)field_4016);
            (**(code**)(*plVar2 + 16))(plVar2);
            shared_ptr<render::Texture2D>::reset();
        }
        (&field_800)->clear();
        field_824 = 0;
    }

    // 0x1003c71b0, 96 bytes, placed by class name
    // WorldMap::DestroyRenderingResources()
    void WorldMap::DestroyRenderingResources() {
        long* plVar2;
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("WorldMap");
        (&field_832)->clear();
        if (field_4016->operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<render::Texture2D>::operator->((shared_ptr<render::Texture2D>*)field_4016);
            (**(code**)(*plVar2 + 16))(plVar2);
            shared_ptr<render::Texture2D>::reset();
        }
    }

    // 0x1003c7210, 16 bytes, complete-object destructor, placed by class name
    // WorldMap::~WorldMap(): jumps straight to the base-object destructor

    // 0x1003c7220, 32 bytes, deleting destructor, placed by class name
    // WorldMap::~WorldMap()
    void WorldMap::~WorldMap() {
        ~WorldMap(this);
        operator_delete(this);
    }

    // 0x1003c73c0, 16 bytes, placed by class name
    // WorldMap::CloseMap()
    void WorldMap::CloseMap() {
        Reset(this, true);
    }

    // 0x1003c73d0, 48 bytes, placed by class name
    // WorldMap::GetMapArea(CoordGrid&) const
    void WorldMap::GetMapArea(CoordGrid* param_1) {
        MapAreaList* this_00;

        this_00 = (MapAreaList*)field_16->GetLogStreams();
        this_00->GetAreaByCoordinate(param_1);
    }

    // 0x1003c7400, 48 bytes, placed by class name
    // WorldMap::GetMapArea(int) const
    void WorldMap::GetMapArea(int param_1) {
        MapAreaList* this_00;

        this_00 = (MapAreaList*)field_16->GetLogStreams();
        this_00->GetAreaByID(param_1);
    }

    // 0x1003c7430, 48 bytes, placed by class name
    // WorldMap::GetMapAreas(eastl::vector<MapArea*, BucketAllocatorEASTL>&, CoordGrid&) const
    void WorldMap::GetMapAreas(vector* param_1, CoordGrid* param_2) {
        MapAreaList* this_00;

        this_00 = (MapAreaList*)field_16->GetLogStreams();
        this_00->GetAreasByCoordinate(param_1, param_2);
    }

    // 0x1003c7460, 224 bytes, placed by class name
    // WorldMap::SetMap(int, int, int, bool)
    void WorldMap::SetMap(int param_1, int param_2, int param_3, bool param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        MapAreaList* this_00;
        CommandLine* pCVar5;
        CoordMapSquare* this_01;

        if (field_24->GetWorldMapDefaults() != 0) {
            iVar1 = field_504;
            this_00 = (MapAreaList*)field_16->GetLogStreams();
            pCVar5 = (CommandLine*)this_00->GetAreaByID(param_1);
            if ((pCVar5 != (CommandLine*)0) && (pCVar5 != field_512)) {
                field_504 = param_1;
                field_512 = pCVar5;
                this_01 = (CoordMapSquare*)field_24->GetWorldMapDefaults();
                iVar2 = field_512->GetPos();
                iVar3 = this_01->GetX();
                field_4032 = iVar2 == iVar3;
            }
            if (iVar1 != field_504) {
                Reset(this, false);
            }
            field_192 = param_2;
            field_196 = param_3;
            field_256 = param_4;
        }
    }

    // 0x1003c7560, 80 bytes, placed by class name
    // WorldMap::ContentZoomToEngineZoom(int) const
    void WorldMap::ContentZoomToEngineZoom(int param_1) {
        int local_c;

        local_c = param_1;
        local_c = math::Clamp<int>(&local_c, &ZOOMLEVEL_CONTENT_MIN, &ZOOMLEVEL_CONTENT_MAX);
        math::Lerp<float, float>((float*)&ZOOMLEVEL_ENGINE_MIN, (float*)&ZOOMLEVEL_ENGINE_MAX,
                                 (float)(local_c + -25) * 0.0057142857);
    }

    // 0x1003c75b0, 80 bytes, placed by class name
    // WorldMap::EngineZoomToContentZoom(float) const
    int WorldMap::EngineZoomToContentZoom(float param_1) {
        float fVar1;
        float local_10;
        float local_c;

        local_10 = 25.0;
        local_c = 200.0;
        fVar1 = math::Lerp<float, float>(&local_10, &local_c, param_1 * 0.071428575 + -0.14285715);
        fVar1 = (float)floor(fVar1);
        return (int)fVar1;
    }

    // 0x1003c7610, 64 bytes, placed by class name
    // WorldMap::SetZoomLevel(int)
    void WorldMap::SetZoomLevel(int param_1) {
        float fVar1;

        fVar1 = (float)ContentZoomToEngineZoom(this, param_1);
        field_252 = fVar1;
        if (fVar1 != field_248) {
            field_208 = field_200;
            field_212 = field_204;
        }
    }

    // 0x1003c7650, 32 bytes, placed by class name
    // WorldMap::GetZoomLevel() const
    void WorldMap::GetZoomLevel() {
        EngineZoomToContentZoom(this, field_252);
    }

    // 0x1003c7670, 320 bytes, placed by class name
    // WorldMap::MainLogic(CoordGrid const&, PlayerVarDomain const*, bool, bool)
    void WorldMap::MainLogic(CoordGrid* param_1, PlayerVarDomain* param_2, bool param_3, bool param_4) {
        float fVar1;
        float fVar2;
        uint uVar3;
        bool bVar4;
        int* piVar6;
        int iVar7;
        int local_34;
        int local_30[2];

        if (HandleLoading(this, param_1, param_2, param_3, param_4) == '\0') {
            return;
        }
        fVar1 = field_248;
        fVar2 = field_252;
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
        uVar3 = field_200;
        iVar7 = field_208 - uVar3;
        if (iVar7 != 0) {
            local_34 = -iVar7;
            if (-iVar7 < 0) {
                local_34 = iVar7;
            }
            piVar6 = std::min<int>(local_30 + 1, &local_34);
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
            piVar6 = std::min<int>(local_30 + 1, local_30);
            field_204 = iVar7 / *piVar6 + uVar3;
        }
        CheckGridPosition(this);
    LAB_1003c7774:
        UpdateFlashList(this, (vector_map*)&field_600);
        UpdateFlashList(this, (vector_map*)&field_640);
        UpdateShouldRenderMapElementsList(this, param_2);
    }

    // 0x1003c77b0, 336 bytes, placed by class name
    // WorldMap::HandleLoading(CoordGrid const&, PlayerVarDomain const*, bool, bool)
    ulong WorldMap::HandleLoading(CoordGrid* param_1, PlayerVarDomain* param_2, bool param_3, bool param_4) {
        char cVar1;
        undefined8 unaff_R14;
        ulong uVar2;

        uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (field_56 != 8) {
            if (field_512 != (CommandLine*)0) {
                switch (field_56) {
                case 0:
                    cVar1 = LoadState_DataRequest(this);
                    if (cVar1 != '\0') {
                        field_56 = 1;
                    }
                    break;
                case 1:
                    LoadState_MapAreaInit(this, param_1);
                    field_56 = 2;
                    break;
                case 2:
                    cVar1 = LoadState_MapAreaLoad(this, param_2);
                    if (cVar1 != '\0') {
                        field_56 = 3;
                    }
                    break;
                case 3:
                    LoadState_F2POverlay(this);
                    field_56 = 4;
                    break;
                case 4:
                    cVar1 = LoadState_StaticElements(this, param_4, param_3);
                    if (cVar1 != '\0') {
                        field_56 = 5;
                    }
                    break;
                case 5:
                    cVar1 = LoadState_Fonts(this);
                    if (cVar1 != '\0') {
                        field_56 = 6;
                    }
                    break;
                case 6:
                    cVar1 = LoadState_CompositeMap(this);
                    if (cVar1 != '\0') {
                        field_56 = 7;
                    }
                    break;
                case 7:
                    cVar1 = LoadState_Underlay(this);
                    if (cVar1 != '\0') {
                        field_56 = 8;
                    }
                    break;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/worldmap/WorldMap.cpp",
                                    460, (char*)0);
                }
            }
            uVar2 = 0;
        }
        return uVar2 & 4294967295;
    }

    // 0x1003c7910, 80 bytes, placed by class name
    // WorldMap::CheckGridPosition()
    void WorldMap::CheckGridPosition() {
        uint uVar1;

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

    // 0x1003c7960, 304 bytes, placed by class name
    // WorldMap::UpdateFlashList(eastl::vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator> >&)
    void WorldMap::UpdateFlashList(vector_map* param_1) {
        int iVar1;
        long lVar2;
        long lVar3;
        int* piVar4;
        int* piVar5;
        fixed_vector<int, 32ul, true, eastl::allocator> local_e0[168];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<int, 32ul, true, eastl::allocator>::fixed_vector(local_e0);
        lVar2 = param_1->HeapBeginPtr();
        lVar3 = param_1->end();
        if (lVar2 != lVar3) {
            do {
                iVar1 = *(int*)(lVar2 + 8);
                *(int*)(lVar2 + 8) = iVar1 + -1;
                if (iVar1 < 2) {
                    if ((*(int*)(lVar2 + 4) < 2) && (m_flashPerpetual == false)) {
                        eastl::fixed_vector<int, 32ul, true, eastl::allocator>::push_back((int*)local_e0);
                    } else {
                        *(int*)(lVar2 + 4) = *(int*)(lVar2 + 4) + -1;
                        *(int*)(lVar2 + 8) = m_flashTicks;
                    }
                }
                lVar2 = lVar2 + 12;
            } while (lVar2 != lVar3);
        }
        piVar4 = (int*)local_e0->HeapBeginPtr();
        piVar5 = (int*)local_e0->end();
        for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
            param_1->erase(piVar4);
        }
        eastl::fixed_vector<int, 32ul, true, eastl::allocator>::~fixed_vector(local_e0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003c7a90, 320 bytes, placed by class name
    // WorldMap::UpdateShouldRenderMapElementsList(PlayerVarDomain const*)
    void WorldMap::UpdateShouldRenderMapElementsList(PlayerVarDomain* param_1) {
        undefined1* this_00;
        ulonglong uVar3;
        long lVar4;
        long lVar5;
        shared_ptr* this_01;
        shared_ptr<MapElementType>* this_02;
        _func_decltype_nullptr* p_Var6;
        shared_ptr local_48;

        uVar3 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        if (9999 < uVar3 - field_824) {
            field_824 = uVar3;
            this_00 = &field_800;
            lVar4 = this_00->data();
            lVar5 = this_00->end();
            for (; lVar4 != lVar5; lVar4 = lVar4 + 16) {
                shared_ptr<MapElementType>::reset();
            }
            lVar4 = (&field_88)->HeapBeginPtr();
            lVar5 = (&field_88)->end();
            if (lVar4 != lVar5) {
                do {
                    p_Var6 = (_func_decltype_nullptr*)(long)*(int*)(lVar4 + 32);
                    this_01 = (shared_ptr*)Array<shared_ptr<MapElementType>, eastl::allocator>::operator[](
                        (Array<shared_ptr<MapElementType>, eastl::allocator>*)this_00, (ulong)p_Var6);
                    if (!shared_ptr::operator_cast_to_bool(this_01)) {
                        new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var6);
                        if (ShouldRenderMapElementType(this, &local_48, param_1, *(int*)(lVar4 + 32)) == '\0') {
                            Array<shared_ptr<MapElementType>, eastl::allocator>::operator[](
                                (Array<shared_ptr<MapElementType>, eastl::allocator>*)this_00,
                                (long)*(int*)(lVar4 + 32));
                            shared_ptr<MapElementType>::reset();
                        } else {
                            this_02 = (shared_ptr<MapElementType>*)
                                Array<shared_ptr<MapElementType>, eastl::allocator>::operator[](
                                    (Array<shared_ptr<MapElementType>, eastl::allocator>*)this_00,
                                    (long)*(int*)(lVar4 + 32));
                            shared_ptr<MapElementType>::operator=(this_02, &local_48);
                        }
                        local_48.~shared_ptr();
                    }
                    lVar4 = lVar4 + 36;
                } while (lVar4 != lVar5);
            }
        }
    }

    // 0x1003c7c40, 352 bytes, placed by class name
    // WorldMap::DoOverviewClick(float, float)
    void WorldMap::DoOverviewClick(float param_1, float param_2) {
        uint uVar1;
        float* pfVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;
        float local_18;
        float local_14;

        fVar4 = (float)(int)field_216;
        fVar3 = (float)(int)field_220;
        fVar5 = fVar4 / fVar3;
        if (fVar5 <= 1.0) {
            if (fVar5 < 1.0) {
                local_28 = (1.0 / fVar5) * (param_1 + -0.5) + 0.5;
                local_24 = 1.0;
                local_1c = fVar3;
                local_18 = fVar4;
                local_14 = param_2;
                pfVar2 = std::min<float>(&local_28, &local_24);
                local_20 = 0.0;
                pfVar2 = std::max<float>(pfVar2, &local_20);
                param_1 = *pfVar2;
                param_2 = local_14;
                fVar3 = local_1c;
                fVar4 = local_18;
            }
        } else {
            local_28 = (1.0 / fVar5) * (param_2 + -0.5) + 0.5;
            local_24 = 1.0;
            local_1c = fVar3;
            local_18 = fVar4;
            local_14 = param_1;
            pfVar2 = std::min<float>(&local_28, &local_24);
            local_20 = 0.0;
            pfVar2 = std::max<float>(pfVar2, &local_20);
            param_2 = *pfVar2;
            param_1 = local_14;
            fVar3 = local_1c;
            fVar4 = local_18;
        }
        field_208 = (int)(param_1 * fVar4);
        field_200 = (int)(param_1 * fVar4);
        uVar1 = (uint)((1.0 - param_2) * fVar3);
        field_212 = uVar1;
        field_204 = uVar1;
        CheckGridPosition(this);
    }

    // 0x1003c7dc0, 64 bytes, placed by class name
    // WorldMap::GetLoadPercentage() const
    undefined4 WorldMap::GetLoadPercentage() {
        if (8 < (ulong)(long)field_56) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "worldmap/WorldMap.cpp",
                            371, (char*)0);
        }
        return *(undefined4*)(&DAT_100d42c10 + (long)field_56 * 4);
    }

    // 0x1003c7e00, 864 bytes, placed by class name
    // WorldMap::LoadState_DataRequest()
    bool WorldMap::LoadState_DataRequest() {
        undefined1* this_00;
        FontManager* this_01;
        Js5ResourceProvider* pJVar1;
        undefined8 uVar2;
        Js5Index* this_02;
        WorldMap* pWVar3;
        int iVar4;
        undefined4 uVar5;
        undefined* puVar6;
        basic_string* pbVar7;
        DataStatus* pDVar8;
        shared_ptr<MapElementType>* this_03;
        undefined1* puVar9;
        undefined* puVar10;
        int iVar11;
        ulong uVar12;
        int iVar13;
        bool bVar14;
        shared_ptr local_60;
        Js5Index* local_50;
        WorldMapDefaults* local_48;
        WorldMap* local_40;
        uint local_34;

        local_40 = this;
        local_48 = (WorldMapDefaults*)field_24->GetWorldMapDefaults();
        iVar13 = 0;
        do {
            iVar11 = 0;
            do {
                iVar4 = local_48->GetFontID(iVar13, iVar11);
                this_01 = local_40->field_40;
                new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                this_01->GetFont(iVar4, &local_60);
                local_60.~shared_ptr();
                pWVar3 = local_40;
                iVar11 = iVar11 + 1;
            } while (iVar11 != 5);
            iVar13 = iVar13 + 1;
        } while (iVar13 != 3);
        local_50 = (Js5Index*)0;
        puVar6 = (undefined*)(*(code*)local_40->field_32->field_0[3])(local_40->field_32, &local_50,
                                                                      Js5Archive::JS5_WORLDMAPAREADATA);
        this_02 = local_50;
        if (puVar6 == DataStatus::NOTLOADED) {
            bVar14 = false;
        } else {
            if (puVar6 == DataStatus::MISSING) {
                /* WARNING: Subroutine does not return */
                LogAssert("status != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          486, (char*)0);
            }
            pbVar7 = (basic_string*)pWVar3->field_512->GetScreen();
            pDVar8 = Js5Index::GetGroupID<eastl::string>(this_02, &pWVar3->field_60, pbVar7);
            if (pDVar8 == (DataStatus*)DataStatus::MISSING) {
                /* WARNING: Subroutine does not return */
                LogAssert("status != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          489, (char*)0);
            }
            puVar6 = (undefined*)(pWVar3->field_32, Js5Archive::JS5_WORLDMAPAREADATA, pWVar3->field_60,
                                  (Priority*)Priority::HIGHEST, true)
                         ->GroupReady();
            uVar2 = Js5Archive::JS5_WORLDMAPDATA;
            if (puVar6 == DataStatus::MISSING) {
                /* WARNING: Subroutine does not return */
                LogAssert("status != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          493, (char*)0);
            }
            pJVar1 = pWVar3->field_32;
            uVar5 = pWVar3->field_512->GetPos();
            puVar6 = (undefined*)(*(code*)pJVar1->field_0[6])(pJVar1, uVar2, 4, uVar5, Priority::HIGHEST, 1);
            if (puVar6 == DataStatus::MISSING) {
                /* WARNING: Subroutine does not return */
                LogAssert("status != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          496, (char*)0);
            }
            local_34 = 0;
            local_48 = (WorldMapDefaults*)ConfigProvider::GetConfigSize<MapElementType>(pWVar3->field_24, &local_34);
            pWVar3 = local_40;
            puVar6 = DataStatus::NOTLOADED;
            if (local_48 != (WorldMapDefaults*)DataStatus::NOTLOADED) {
                if (local_48 == (WorldMapDefaults*)DataStatus::MISSING) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("status != DataStatus::MISSING",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/worldmap/WorldMap.cpp",
                              504, (char*)0);
                }
                this_00 = &local_40->field_800;
                this_00->set_max_size((ulong)local_34, 0);
                (&pWVar3->field_528, (ulong)local_34, 0)->set_max_size();
                if (local_34 != 0) {
                    uVar12 = 0;
                    do {
                        new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        this_03 = (shared_ptr<MapElementType>*)
                            Array<shared_ptr<MapElementType>, eastl::allocator>::operator[](
                                (Array<shared_ptr<MapElementType>, eastl::allocator>*)this_00, uVar12);
                        shared_ptr<MapElementType>::operator=(this_03, &local_60);
                        local_60.~shared_ptr();
                        puVar9 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                            (Array<bool, eastl::allocator>*)&pWVar3->field_528, uVar12);
                        *puVar9 = 0;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < local_34);
                }
                uVar2 = Js5Archive::JS5_WORLDMAPDATA;
                pJVar1 = local_40->field_32;
                uVar5 = local_40->field_512->GetPos();
                puVar10 = (undefined*)(*(code*)pJVar1->field_0[6])(pJVar1, uVar2, 2, uVar5, Priority::HIGHEST, 1);
                if (puVar10 == DataStatus::MISSING) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("status != DataStatus::MISSING",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/worldmap/WorldMap.cpp",
                              514, (char*)0);
                }
            }
            bVar14 = local_48 != (WorldMapDefaults*)puVar6;
        }
        return bVar14;
    }

    // 0x1003c8160, 928 bytes, placed by class name
    // WorldMap::LoadState_MapAreaInit(CoordGrid const&)
    undefined8 WorldMap::LoadState_MapAreaInit(CoordGrid* param_1) {
        undefined1* this_00;
        uint uVar1;
        MapArea* this_01;
        char cVar2;
        uint uVar3;
        int iVar4;
        CoordMapSquare* pCVar5;
        Rect<int>* pRVar6;
        CoordGrid* pCVar7;
        long lVar8;
        byte* pbVar9;
        ulong uVar10;
        int iVar11;
        ulong uVar12;
        ulong uVar13;
        WorldMap* this_02;
        CoordGrid local_58;
        CoordGrid local_48;
        CoordGrid local_38;

        pCVar5 = (CoordMapSquare*)field_512->GetDefaultMaterial();
        uVar3 = pCVar5->GetX();
        field_232 = uVar3 & 4294967232;
        pCVar5 = (CoordMapSquare*)field_512->GetDefaultMaterial();
        uVar3 = pCVar5->GetZ();
        field_236 = uVar3 & 4294967232;
        pRVar6 = (Rect<int>*)field_512->GetDefaultMaterial();
        uVar3 = pRVar6->Right();
        field_216 = ((uVar3 & 4294967232) - field_232) + 64;
        pRVar6 = (Rect<int>*)field_512->GetDefaultMaterial();
        uVar3 = math::Rect<int>::MaxZ(pRVar6);
        uVar3 = ((uVar3 & 4294967232) - field_236) + 64;
        field_220 = uVar3;
        iVar11 = (int)field_216 >> 3;
        field_224 = iVar11;
        iVar4 = (int)uVar3 >> 3;
        field_228 = iVar4;
        uVar12 = (ulong)(iVar4 * iVar11);
        (&field_64, uVar12, 0)->set_max_size();
        (&field_128, uVar12, 0)->set_max_size();
        field_240 = 4294967295;
        field_244 = 4294967295;
        new (&local_58) game::CoordGrid();
        cVar2 = (field_512, &local_58, param_1)->GetTargetCoord();
        if (cVar2 != '\0') {
            field_240 = local_58.field_4 - field_232;
            field_244 = local_58.field_8 - field_236;
        }
        if (field_256 == false) {
            uVar3 = field_240;
            if (((((int)uVar3 < 0) || ((int)field_216 <= (int)uVar3)) || (uVar1 = field_244, (int)uVar1 < 0)) ||
                ((int)field_220 <= (int)uVar1)) {
                new (&local_38) game::CoordGrid();
                this_01 = (MapArea*)field_512;
                pCVar7 = (CoordGrid*)this_01->GetOrigin();
                cVar2 = this_01->GetTargetCoord(&local_38, pCVar7);
                if (cVar2 != '\0') {
                    field_200 = local_38.field_4 - field_232;
                    field_204 = local_38.field_8 - field_236;
                }
            } else {
                field_200 = uVar3;
                field_204 = uVar1;
            }
        } else {
            if ((field_192 == -1) || (field_196 == -1)) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_loadOverrideMapGridX != -1 && m_loadOverrideMapGridZ != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          549, (char*)0);
            }
            new (&local_38) oldscape::rs2lib::worldmap::LocationData(0, field_192, field_196);
            new (&local_48) game::CoordGrid();
            cVar2 = (field_512, &local_48, &local_38)->GetTargetCoord();
            if (cVar2 != '\0') {
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
        this_02 = (WorldMap*)field_512;
        iVar4 = this_02->GetAdvisedZoom();
        field_252 = (float)ContentZoomToEngineZoom(this_02, iVar4);
    LAB_1003c8428:
        field_248 = field_252;
        CheckGridPosition(this);
        this_00 = &field_744;
        (field_512, (Array*)this_00, (int)field_232 >> 3, (int)field_236 >> 3, field_224, field_228)->GetValidZones();
        lVar8 = this_00->end();
        uVar12 = 0;
        if (lVar8 != 0) {
            uVar13 = 0;
            do {
                pbVar9 =
                    (byte*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this_00, uVar13);
                uVar3 = (int)uVar12 + (uint)*pbVar9;
                uVar12 = (ulong)uVar3;
                uVar13 = uVar13 + 1;
                uVar10 = this_00->end();
            } while (uVar13 < uVar10);
            uVar12 = (ulong)uVar3;
        }
        (&field_768, uVar12)->resize();
        eastl::vector<bool, eastl::allocator>::resize((ulong)&field_4040);
        return 1;
    }

    // 0x1003c8500, 224 bytes, placed by class name
    // WorldMap::LoadState_MapAreaLoad(PlayerVarDomain const*)
    undefined8 WorldMap::LoadState_MapAreaLoad(PlayerVarDomain* param_1) {
        char cVar1;
        undefined* puVar2;
        PacketT* pPVar3;
        undefined8 uVar4;
        shared_ptr local_38;

        cVar1 = (&field_704)->empty();
        if (cVar1 != '\0') {
            new (&local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
            puVar2 = (undefined*)(field_32, &local_38, Js5Archive::JS5_WORLDMAPAREADATA, field_60, 0,
                                  (Priority*)Priority::HIGH, true, false, false)
                         ->GetFile();
            if (puVar2 == DataStatus::NOTLOADED) {
                local_38.~shared_ptr();
                return 0;
            }
            pPVar3 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_38);
            LoadAreaData(this, pPVar3);
            local_38.~shared_ptr();
        }
        ProcessingPendingLocations(this, param_1);
        uVar4 = (&field_704)->empty();
        return uVar4;
    }

    // 0x1003c85e0, 544 bytes, placed by class name
    // WorldMap::LoadState_F2POverlay()
    undefined8 WorldMap::LoadState_F2POverlay() {
        ulong uVar2;
        char* pcVar3;
        ulong uVar4;
        int* piVar5;
        uint uVar6;
        char cVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        ulong uVar11;
        int local_44[3];
        int local_38;
        int local_34;

        iVar8 = (int)field_216 >> 6;
        iVar10 = (int)field_220 >> 6;
        eastl::vector<bool, eastl::allocator>::resize((ulong)&field_4208);
        uVar9 = iVar8 - (uint)(iVar8 * 8 != field_224);
        uVar2 = 0;
        if (0 < (int)uVar9) {
            uVar6 = iVar10 - (uint)(iVar10 * 8 != field_228);
            uVar11 = 0;
            uVar2 = (ulong)uVar6;
            do {
                if (0 < (int)uVar6) {
                    uVar4 = 0;
                    do {
                        local_44[0] = (int)uVar11 * 8 + -1;
                        local_44[2] = (int)uVar4 * 8 + -1;
                        local_38 = (int)uVar11 * 8 + 9;
                        uVar2 = uVar4 + 1;
                        local_34 = (int)uVar2 * 8 + 1;
                        local_44[1] = 0;
                        piVar5 = std::max<int>(local_44 + 1, local_44);
                        iVar8 = *piVar5;
                        local_44[1] = 0;
                        local_44[0] = iVar8;
                        piVar5 = std::max<int>(local_44 + 1, local_44 + 2);
                        local_44[2] = *piVar5;
                        piVar5 = std::min<int>(&field_224, &local_38);
                        iVar10 = *piVar5;
                        local_38 = iVar10;
                        piVar5 = std::min<int>(&field_228, &local_34);
                        local_34 = *piVar5;
                        cVar7 = '\x01';
                        if (iVar8 < iVar10) {
                            cVar7 = '\x01';
                            do {
                                iVar10 = local_44[2];
                                if (local_44[2] < local_34) {
                                    do {
                                        if (IsF2PZone(this, iVar8, iVar10) != '\0') {
                                            cVar7 = '\0';
                                            break;
                                        }
                                        iVar10 = iVar10 + 1;
                                    } while (iVar10 < local_34);
                                }
                                iVar8 = iVar8 + 1;
                            } while ((iVar8 < local_38) && (cVar7 != '\0'));
                        }
                        pcVar3 = (char*)eastl::vector<bool, eastl::allocator>::operator[](
                            (vector<bool, eastl::allocator>*)&field_4208, uVar4*(long)(int)uVar9 + uVar11);
                        *pcVar3 = cVar7;
                        uVar4 = uVar2;
                    } while (uVar2 != uVar6);
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 != uVar9);
        }
        return CONCAT71((int7)(uVar2 >> 8), 1);
    }

    // 0x1003c8800, 16 bytes, placed by class name
    // WorldMap::LoadState_StaticElements(bool, bool)
    void WorldMap::LoadState_StaticElements(bool param_1, bool param_2) {
        LoadStaticMapElements(this, param_1 && param_2);
    }

    // 0x1003c8810, 352 bytes, placed by class name
    // WorldMap::LoadState_Fonts()
    bool WorldMap::LoadState_Fonts() {
        FontManager* this_00;
        bool bVar2;
        int iVar3;
        array<shared_ptr<graphics::Font>, 5ul>* this_01;
        shared_ptr* this_02;
        shared_ptr* psVar4;
        ulong uVar5;
        ulong uVar6;
        shared_ptr local_68;
        array<shared_ptr<graphics::Font>, 5ul>* local_58;
        WorldMapDefaults* local_48;
        array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>* local_40;
        byte local_31;

        local_48 = (WorldMapDefaults*)field_24->GetWorldMapDefaults();
        local_40 = (array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>*)&field_264;
        uVar5 = 0;
        do {
            this_01 = (array<shared_ptr<graphics::Font>, 5ul>*)
                std::array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>::operator[](local_40, uVar5);
            bVar2 = true;
            uVar6 = 0;
            local_58 = this_01;
            do {
                this_02 = (shared_ptr*)std::array<shared_ptr<graphics::Font>, 5ul>::operator[](this_01, uVar6);
                if (!shared_ptr::operator_cast_to_bool(this_02)) {
                    local_31 = bVar2;
                    iVar3 = local_48->GetFontID((int)uVar5, (int)uVar6);
                    this_00 = ((WorldMap*)this)->field_40;
                    new (&local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    psVar4 = (shared_ptr*)this_00->GetFont(iVar3, &local_68);
                    shared_ptr<graphics::Font>::operator=((shared_ptr<graphics::Font>*)this_02, psVar4);
                    local_68.~shared_ptr();
                    bVar2 = shared_ptr::operator_cast_to_bool(this_02);
                    this_01 = local_58;
                    if (!bVar2) {
                        iVar3 = 1;
                        if ((local_31 & 1) != 0)
                            goto LAB_1003c893d;
                        goto LAB_1003c892a;
                    }
                }
                bVar2 = uVar6 < 4;
                uVar6 = uVar6 + 1;
            } while (uVar6 != 5);
            iVar3 = 5;
            if (bVar2)
                goto LAB_1003c893d;
        LAB_1003c892a:
            uVar5 = uVar5 + 1;
        } while (uVar5 != 3);
        iVar3 = 2;
    LAB_1003c893d:
        return iVar3 == 2;
    }

    // 0x1003c8970, 736 bytes, placed by class name
    // WorldMap::LoadState_CompositeMap()
    ulong WorldMap::LoadState_CompositeMap() {
        undefined* puVar1;
        Js5ArchiveSettings* pJVar2;
        char cVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        undefined* puVar7;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        Js5ResourceProvider* this_01;
        undefined8 uVar8;
        uint in_stack_fffffffffffffe90;
        shared_ptr local_148;
        undefined8 local_138;
        uint local_130;
        uint local_12c;
        undefined1 local_128[152];
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new ((local_128 + -72)) PacketView();
        pJVar2 = Js5Archive::JS5_WORLDMAPDATA;
        this_01 = field_32;
        uVar4 = field_512->GetPos();
        puVar7 = (undefined*)this_01->GetFile((PacketView*)(local_128 + -72), pJVar2, 2, uVar4,
                                              (Priority*)Priority::HIGH, true, false, false);
        puVar1 = DataStatus::NOTLOADED;
        if (puVar7 != DataStatus::NOTLOADED) {
            if (puVar7 == DataStatus::MISSING) {
                /* WARNING: Subroutine does not return */
                LogAssert("dataStatus != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          724, (char*)0);
            }
            new (&local_90) RGBAImage();
            cVar3 = PNGDecoder::LoadFromPacket(&local_90, (PacketView*)(local_128 + -72));
            if (cVar3 == '\0') {
                this_01 = (Js5ResourceProvider*)logger::default_logger();
                new ((local_128 + 8)) logger::LogStream((LogStream*)&LOGGER_WORLDMAP);
                field_512->GetScreen();
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(this_01, 0, local_128 + 8, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/worldmap/WorldMap.cpp",
                                    736, "Failed to decode composite map PNG for map area %s", uVar8);
                ((local_128 + 8))->~LogStream();
            } else {
                new (local_128) callstack::Callstack();
                local_128->AddFormatType(5);
                this_01 = (Js5ResourceProvider*)&local_90;
                local_130 = this_01->GetX();
                local_12c = this_01->GetZ();
                this_00 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_01->GetDevCredentialsOutputDirectory();
                local_138 = this_00->data();
                iVar5 = this_01->GetX();
                iVar6 = this_01->GetZ();
                graphicutils::CreateHALTexture2D<render::Texture2D>(
                    &local_148, (graphicutils*)(ulong)local_130, local_12c, (uint)local_138, &DAT_00000001,
                    iVar5 * iVar6 * 4, 0, true, false, (bool)local_128[0], (TextureFormatBitSet)0,
                    in_stack_fffffffffffffe90);
                shared_ptr<render::Texture2D>::operator=((shared_ptr<render::Texture2D>*)field_4016, &local_148);
                local_148.~shared_ptr();
            }
            local_90.~RGBAImage();
        }
        ((local_128 + -72))->~PacketView();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong)this_01 >> 8), puVar7 != puVar1) & 4294967295;
    }

    // 0x1003c8c50, 1104 bytes, placed by class name
    // WorldMap::LoadState_Underlay()
    ulong WorldMap::LoadState_Underlay() {
        Js5ResourceProvider* this_00;
        ulong uVar1;
        ulong uVar2;
        Js5ArchiveSettings* pJVar3;
        char cVar4;
        byte bVar5;
        uint uVar6;
        undefined4 uVar7;
        uint uVar8;
        uint uVar9;
        undefined* puVar10;
        long lVar11;
        long lVar12;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        size_t sVar13;
        void* pvVar14;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_02;
        void* pvVar15;
        undefined8 uVar16;
        undefined8 uVar17;
        WorldMap* pWVar18;
        vector<WorldMap::OverlayTileData, eastl::allocator>* this_03;
        byte* pbVar19;
        undefined* puVar20;
        PacketView local_178;
        vector<eastl::vector<WorldMap::OverlayTileData, eastl::allocator>, eastl::allocator>* local_150;
        undefined* local_148;
        undefined* local_140;
        WorldMap* local_138;
        uint local_12c;
        uint local_128;
        byte local_121;
        LogStream local_120;
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_178) PacketView();
        pJVar3 = Js5Archive::JS5_WORLDMAPDATA;
        this_00 = field_32;
        local_138 = this;
        uVar6 = field_512->GetPos();
        puVar10 =
            (undefined*)this_00->GetFile(&local_178, pJVar3, 4, uVar6, (Priority*)Priority::HIGH, true, false, false);
        puVar20 = DataStatus::NOTLOADED;
        if (puVar10 != DataStatus::NOTLOADED) {
            local_140 = DataStatus::NOTLOADED;
            if (puVar10 == DataStatus::MISSING) {
                /* WARNING: Subroutine does not return */
                LogAssert("dataStatus != DataStatus::MISSING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "worldmap/WorldMap.cpp",
                          751, (char*)0);
            }
            uVar6 = local_178.g4();
            lVar11 = local_178.data();
            new (&local_90) RGBAImage();
            cVar4 = PNGDecoder::LoadFromPacket(&local_90, &local_178);
            if (cVar4 == '\0') {
                uVar16 = logger::default_logger();
                new (&local_120) logger::LogStream((LogStream*)&LOGGER_WORLDMAP);
                local_138->field_512->GetScreen();
                uVar17 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar16, 0, &local_120, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/worldmap/WorldMap.cpp",
                                    771, "Failed to decode underlay data PNG for map area %s", uVar17);
                local_120.~LogStream();
            } else {
                lVar12 = local_178.data();
                if (lVar12 != lVar11 + (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("underlayData.GetPos() == (pngDecodeStart + pngByteCount)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/worldmap/WorldMap.cpp",
                              758, (char*)0);
                }
                uVar7 = local_90.GetX();
                pWVar18 = local_138;
                *(undefined4*)&local_138->field_896 = uVar7;
                uVar6 = local_90.GetZ();
                *(uint*)&pWVar18->field_900 = uVar6;
                pWVar18->field_904 = *(uint*)&pWVar18->field_896 >> 6;
                pWVar18->field_908 = uVar6 >> 6;
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              local_90.GetDevCredentialsOutputDirectory();
                sVar13 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                eastl::vector<unsigned char, eastl::allocator>::resize((ulong)&pWVar18->field_864);
                pvVar14 = (void*)(&pWVar18->field_864)->HeapBeginPtr();
                this_02 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)local_90.GetDevCredentialsOutputDirectory();
                pvVar15 = (void*)this_02->data();
                _memcpy(pvVar14, pvVar15, sVar13);
            }
            local_150 =
                (vector<eastl::vector<WorldMap::OverlayTileData, eastl::allocator>, eastl::allocator>*)&local_138
                    ->field_912;
            eastl::vector<eastl::vector<WorldMap::OverlayTileData, eastl::allocator>, eastl::allocator>::resize(
                local_150, (long)local_138->field_908 * (long)local_138->field_904);
            local_148 = puVar10;
            while (true) {
                puVar10 = local_148;
                this = (WorldMap*)local_178.data();
                pWVar18 = (WorldMap*)local_178.p2_alt2();
                if (pWVar18 <= this)
                    break;
                uVar6 = local_178.g4();
                uVar8 = local_178.g4();
                uVar9 = local_178.g4();
                cVar4 = local_178.g1();
                local_121 = cVar4 != '\0';
                bVar5 = local_178.g1();
                local_12c = uVar8 << 8 | uVar8 >> 24;
                local_128 = uVar9 << 8 | uVar9 >> 24;
                cVar4 = IsLittleEndian();
                if (cVar4 != '\0') {
                    DoByteReorder<EndianSwap, int>((int*)&local_12c);
                    DoByteReorder<EndianSwap, int>((int*)&local_128);
                }
                uVar1 = (ulong)uVar6 / (ulong)local_138->field_216;
                uVar2 = (ulong)uVar6 % (ulong)local_138->field_216;
                this_03 = (vector<WorldMap::OverlayTileData, eastl::allocator>*)
                    eastl::vector<eastl::vector<WorldMap::OverlayTileData, eastl::allocator>,
                                  eastl::allocator>::operator[](local_150,
                                                                (ulong)(((uint)uVar1 >> 6) * local_138->field_904 +
                                                                        ((uint)uVar2 >> 6)));
                pbVar19 = (byte*)eastl::vector<WorldMap::OverlayTileData, eastl::allocator>::push_back(this_03);
                *pbVar19 = (byte)uVar2 & 63;
                pbVar19[1] = (byte)uVar1 & 63;
                *(uint*)(pbVar19 + 4) = local_12c;
                *(uint*)(pbVar19 + 8) = local_128;
                pbVar19[12] = local_121;
                pbVar19[13] = bVar5;
            }
            local_90.~RGBAImage();
            puVar20 = local_140;
        }
        local_178.~PacketView();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong)this >> 8), puVar10 != puVar20) & 4294967295;
    }

    // 0x1003c9400, 800 bytes, placed by class name
    // WorldMap::LoadAreaData(PacketT<Array<unsigned char, eastl::allocator> >&)
    void WorldMap::LoadAreaData(PacketT* param_1) {
        uint uVar1;
        char cVar2;
        byte bVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        ulong uVar7;
        ulong uVar8;
        undefined8 uVar9;
        int iVar10;
        int iVar11;
        uint uVar12;

        cVar2 = param_1->g1();
        if (cVar2 != '\0') {
            do {
                param_1->gSmart1or2();
                cVar2 = cVar2 + -1;
            } while (cVar2 != '\0');
        }
        cVar2 = param_1->g1();
        if (cVar2 != '\0') {
            do {
                param_1->gSmart1or2();
                cVar2 = cVar2 + -1;
            } while (cVar2 != '\0');
        }
        uVar7 = param_1->size();
        uVar8 = param_1->GetTextureAtlas();
        if (uVar7 < uVar8) {
            do {
                cVar2 = param_1->g1();
                uVar4 = param_1->g1();
                uVar5 = param_1->g1();
                if (cVar2 == '\0') {
                    iVar10 = 0;
                    do {
                        bVar3 = param_1->g1();
                        uVar1 = field_232;
                        uVar12 = 0;
                        do {
                            uVar9 = eastl::vector<bool, eastl::allocator>::operator[](
                                (vector<bool, eastl::allocator>*)&field_4040,
                                (ulong)((((uVar5 & 255) * 8 + uVar12) - ((int)field_236 >> 3)) * field_224 +
                                        (((uVar4 & 255) * 8 + iVar10) - ((int)uVar1 >> 3))));
                            *(bool*)uVar9 = (bVar3 >> (uVar12 & 31) & 1) != 0;
                            uVar12 = uVar12 + 1;
                        } while (uVar12 != 8);
                        iVar10 = iVar10 + 1;
                    } while (iVar10 != 8);
                    iVar10 = 0;
                    do {
                        iVar11 = 0;
                        do {
                            LoadTileData(this, param_1, '\0', '\0', (iVar10 + (uVar4 & 255) * 64) - field_232,
                                         ((uVar5 & 255) * 64 + iVar11) - field_236);
                            iVar11 = iVar11 + 1;
                        } while (iVar11 != 64);
                        iVar10 = iVar10 + 1;
                    } while (iVar10 != 64);
                } else {
                    uVar6 = param_1->g1();
                    bVar3 = param_1->g1();
                    uVar1 = field_232;
                    uVar12 = field_236;
                    cVar2 = param_1->g1();
                    uVar9 = eastl::vector<bool, eastl::allocator>::operator[](
                        (vector<bool, eastl::allocator>*)&field_4040,
                        (long)(int)((((uint)bVar3 + (uVar5 & 255) * 8) - ((int)uVar12 >> 3)) * field_224 +
                                    (((uVar6 & 255) + (uVar4 & 255) * 8) - ((int)uVar1 >> 3))));
                    *(bool*)uVar9 = cVar2 != '\0';
                    iVar10 = 0;
                    do {
                        iVar11 = 0;
                        do {
                            LoadTileData(this, param_1, '\0', '\0',
                                         ((uVar4 & 255) * 64 + (uVar6 & 255) * 8 + iVar10) - field_232,
                                         (iVar11 + (uVar5 & 255) * 64 + (uint)bVar3 * 8) - field_236);
                            iVar11 = iVar11 + 1;
                        } while (iVar11 != 8);
                        iVar10 = iVar10 + 1;
                    } while (iVar10 != 8);
                }
                uVar7 = param_1->size();
                uVar8 = param_1->GetTextureAtlas();
            } while (uVar7 < uVar8);
        }
    }

    // 0x1003c9720, 2144 bytes, placed by class name
    // WorldMap::ProcessingPendingLocations(PlayerVarDomain const*)
    void WorldMap::ProcessingPendingLocations(PlayerVarDomain* param_1) {
        undefined1* this_00;
        byte bVar1;
        uint uVar2;
        uint uVar3;
        char cVar4;
        bool bVar5;
        undefined1 uVar6;
        byte bVar7;
        int iVar8;
        ulong uVar9;
        shared_ptr* psVar10;
        LocType* pLVar11;
        vector<WorldMap::MSIInstance, eastl::allocator>* this_01;
        int* piVar12;
        StaticPointLight* this_02;
        uint uVar13;
        int iVar14;
        shared_ptr local_98;
        shared_ptr local_88;
        ZoneLine local_78;
        DataStatus* local_60;
        CoordGrid* local_58;
        vector<WorldMap::ZoneLine, eastl::allocator>* local_50;
        byte local_45;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        byte local_31;

        cVar4 = field_24->Ready();
        if (cVar4 != '\0') {
            this_00 = &field_704;
            uVar13 = field_736;
            uVar9 = this_00->size();
            if (uVar13 < uVar9) {
                do {
                    local_58 = (CoordGrid*)eastl::vector<WorldMap::PendingLocationType, eastl::allocator>::operator[](
                        (vector<WorldMap::PendingLocationType, eastl::allocator>*)this_00, (ulong)field_736);
                    psVar10 = ConfigProvider::GetConfig<LocType>(field_24, *(int*)&local_58->field_12, &local_60);
                    new (&local_88) shared_ptr<oldscape::dash3d::Decor>(psVar10);
                    if (local_60 == (DataStatus*)DataStatus::MISSING) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("dataStatus != DataStatus::MISSING",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/worldmap/WorldMap.cpp",
                                  1007, (char*)0);
                    }
                    bVar5 = shared_ptr::operator_cast_to_bool(&local_88);
                    iVar8 = 2;
                    if (bVar5) {
                        pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                        iVar8 = pLVar11->GetMapElement();
                        pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                        cVar4 = pLVar11->IsMultiLoc();
                        if (cVar4 != '\0') {
                            new (&local_78) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar10);
                            pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                            pLVar11->GetMultiLoc((shared_ptr*)&local_78, param_1, field_24);
                            bVar5 = local_78.operator_cast_to_bool();
                            if (bVar5) {
                                pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_78);
                                iVar8 = pLVar11->GetMapElement();
                            }
                            local_78.~shared_ptr();
                        }
                        if (iVar8 == -1) {
                            new (&local_98) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                        LAB_1003c9904:
                            uVar13 = local_58->field_4;
                            uVar2 = local_58->field_8;
                            iVar8 = field_224;
                            pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                            iVar14 = ((int)uVar2 >> 3) * iVar8 + ((int)uVar13 >> 3);
                            iVar8 = pLVar11->GetMapSceneIcon();
                            if (iVar8 == -1) {
                                bVar1 = (byte)local_58[1].field_0;
                                bVar7 = bVar1 & 63;
                                if (bVar7 != 3) {
                                    local_45 = bVar7;
                                    iVar8 = (&field_128)->end();
                                    if (iVar8 <= iVar14) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("mapZoneIndex < (int)m_linesByMapZone.size()",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/game/runetek5/scene/worldmap/WorldMap.cpp",
                                                  1078, (char*)0);
                                    }
                                    local_31 = bVar1;
                                    local_50 = (vector<WorldMap::ZoneLine, eastl::allocator>*)
                                        Array<eastl::vector<WorldMap::ZoneLine, eastl::allocator>, eastl::allocator>::
                                        operator[]((Array<eastl::vector<WorldMap::ZoneLine, eastl::allocator>,
                                                          eastl::allocator>*)&field_128,
                                                   (long)iVar14);
                                    pLVar11 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                                    local_31 = local_31 >> 6;
                                    local_3c = (float)((int)uVar13 % 8) * 0.125;
                                    local_44 = (float)((int)uVar2 % 8) * 0.125;
                                    local_38 = local_3c + 0.125;
                                    local_40 = local_44 + 0.125;
                                    cVar4 = pLVar11->IsActive();
                                    iVar8 = -858993409;
                                    if (cVar4 != '\0') {
                                        iVar8 = -872414977;
                                    }
                                    if (local_45 == 9) {
                                        /* WARNING: Could not find normalized switch variable to match jumptable */
                                        switch (local_31) {
                                        default:
                                            new (&local_78) ZoneLine(local_3c, local_38, local_44, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            break;
                                        case 1:
                                        case 3:
                                            new (&local_78) ZoneLine(local_38, local_3c, local_44, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                        }
                                    } else if (local_45 == 2) {
                                        /* WARNING: Could not find normalized switch variable to match jumptable */
                                        switch (local_31) {
                                        case 0:
                                            new (&local_78) ZoneLine(local_3c, local_3c, local_44, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            new (&local_78) ZoneLine(local_3c, local_38, local_40, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            break;
                                        case 1:
                                            new (&local_78) ZoneLine(local_3c, local_38, local_40, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            new (&local_78) ZoneLine(local_38, local_38, local_40, local_44, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            break;
                                        case 2:
                                            new (&local_78) ZoneLine(local_38, local_38, local_44, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            new (&local_78) ZoneLine(local_3c, local_38, local_44, local_44, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            break;
                                        case 3:
                                            new (&local_78) ZoneLine(local_3c, local_38, local_44, local_44, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            new (&local_78) ZoneLine(local_3c, local_3c, local_44, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                        }
                                    } else if (local_45 == 0) {
                                        /* WARNING: Could not find normalized switch variable to match jumptable */
                                        switch (local_31) {
                                        case 0:
                                            new (&local_78) ZoneLine(local_3c, local_3c, local_44, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            break;
                                        case 1:
                                            new (&local_78) ZoneLine(local_3c, local_38, local_40, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            break;
                                        case 2:
                                            new (&local_78) ZoneLine(local_38, local_38, local_44, local_40, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                            break;
                                        case 3:
                                            new (&local_78) ZoneLine(local_3c, local_38, local_44, local_44, iVar8);
                                            eastl::vector<WorldMap::ZoneLine, eastl::allocator>::push_back(local_50,
                                                                                                           &local_78);
                                        }
                                    }
                                }
                            } else {
                                this_01 = (vector<WorldMap::MSIInstance, eastl::allocator>*)
                                    Array<eastl::vector<WorldMap::MSIInstance, eastl::allocator>, eastl::allocator>::
                                    operator[]((Array<eastl::vector<WorldMap::MSIInstance, eastl::allocator>,
                                                      eastl::allocator>*)&field_64,
                                               (long)iVar14);
                                piVar12 =
                                    (int*)eastl::vector<WorldMap::MSIInstance, eastl::allocator>::push_back(this_01);
                                piVar12[4] = local_58->field_8;
                                uVar3 = local_58->field_4;
                                piVar12[2] = local_58->field_0;
                                piVar12[3] = uVar3;
                                *piVar12 = (int)uVar13 % 8;
                                piVar12[1] = (int)uVar2 % 8;
                                pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                                iVar8 = pLVar11->GetMapSceneIcon();
                                piVar12[5] = iVar8;
                                piVar12[6] = *(int*)&local_58->field_12;
                                ConfigProvider::GetConfig<MSIType>(field_24, iVar8, &local_60);
                                if (local_60 == (DataStatus*)DataStatus::MISSING) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("dataStatus != DataStatus::MISSING",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/scene/worldmap/WorldMap.cpp",
                                              1053, (char*)0);
                                }
                                pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                                uVar6 = pLVar11->ShouldMapSceneIconMirror();
                                *(undefined1*)((long)piVar12 + 29) = uVar6;
                                pLVar11 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                                cVar4 = pLVar11->ShouldMapSceneIconRotate();
                                if (cVar4 != '\0') {
                                    uVar13 = local_58[1].field_0;
                                    pLVar11 =
                                        (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_88);
                                    cVar4 = pLVar11->GetMapSceneIconRotate90Offset();
                                    *(byte*)(piVar12 + 7) = ((byte)uVar13 >> 6) + cVar4 & 3;
                                }
                            }
                            bVar5 = shared_ptr::operator_cast_to_bool(&local_98);
                            iVar8 = 0;
                            if (bVar5) {
                                this_02 = (StaticPointLight*)shared_ptr<MapElementType>::operator->(
                                    (shared_ptr<MapElementType>*)&local_98);
                                cVar4 = this_02->IsValid();
                                iVar8 = 4;
                                if (cVar4 != '\0') {
                                    iVar8 = 0;
                                    AddMapElement(this, &local_98, local_58, false);
                                }
                            }
                        } else {
                            psVar10 = ConfigProvider::GetConfig<MapElementType>(field_24, iVar8, &local_60);
                            new (&local_98) shared_ptr<oldscape::dash3d::Decor>(psVar10);
                            if (local_60 == (DataStatus*)DataStatus::MISSING) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("dataStatus != DataStatus::MISSING",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/worldmap/WorldMap.cpp",
                                          1029, (char*)0);
                            }
                            bVar5 = shared_ptr::operator_cast_to_bool(&local_98);
                            iVar8 = 2;
                            if (bVar5)
                                goto LAB_1003c9904;
                        }
                        local_98.~shared_ptr();
                    }
                    local_88.~shared_ptr();
                    if (iVar8 == 2)
                        break;
                    uVar13 = field_736 + 1;
                    field_736 = uVar13;
                    uVar9 = this_00->size();
                } while (uVar13 < uVar9);
            }
            uVar13 = field_736;
            uVar9 = this_00->size();
            if (uVar9 <= uVar13) {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            }
        }
    }

    // 0x1003c9f90, 32 bytes, placed by class name
    // WorldMap::IsF2PZone(int, int)
    undefined1 WorldMap::IsF2PZone(int param_1, int param_2) {
        undefined1* puVar1;

        puVar1 = (undefined1*)eastl::vector<bool, eastl::allocator>::operator[](
            (vector<bool, eastl::allocator>*)&field_4040, (long)(param_2 * field_224 + param_1));
        return *puVar1;
    }

    // 0x1003c9fb0, 896 bytes, placed by class name
    // WorldMap::LoadStaticMapElements(bool)
    ulong WorldMap::LoadStaticMapElements(bool param_1) {
        bool bVar1;
        char cVar2;
        bool bVar3;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar4;
        long lVar5;
        long lVar6;
        CoordGrid* pCVar7;
        shared_ptr* this_00;
        StaticPointLight* this_01;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined7 in_register_00000031;
        undefined7 uVar11;
        ulong uVar10;
        LogStream* this_02;
        CoordGrid local_180;
        CoordGrid* local_170;
        DataStatus* local_168;
        uint local_15c;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        uVar10 = CONCAT71(in_register_00000031, param_1) & 4294967295;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar2 = field_512->AreStaticMapElementsLoaded();
        if (cVar2 == '\0') {
            field_512->LoadStaticMapElements();
            uVar10 = 0;
        } else {
            pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                            std::default_delete<LoadingScreenScript::AnimLayer>>,
                            eastl::allocator>*)field_512->GetStaticMapElements();
            lVar5 = pAVar4->data();
            lVar6 = pAVar4->end();
            uVar11 = (undefined7)((ulong)pAVar4 >> 8);
            if (lVar5 == lVar6) {
                bVar1 = true;
            } else {
                bVar1 = true;
                do {
                    if (((char)uVar10 != '\0') || (*(char*)(lVar5 + 16) == '\0')) {
                        ConfigProvider::GetConfig<MapElementType>(field_24, *(int*)(lVar5 + 12), &local_168);
                        if (local_168 == (DataStatus*)DataStatus::MISSING) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("dataStatus != DataStatus::MISSING",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/worldmap/WorldMap.cpp",
                                      1189, (char*)0);
                        }
                        uVar11 = 0;
                        if (local_168 != (DataStatus*)DataStatus::READY) {
                            uVar11 = 0;
                            bVar1 = false;
                        }
                    }
                    lVar5 = lVar5 + 20;
                } while (lVar5 != lVar6);
            }
            if (bVar1) {
                pAVar4 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                std::default_delete<LoadingScreenScript::AnimLayer>>,
                                eastl::allocator>*)field_512->GetStaticMapElements();
                pCVar7 = (CoordGrid*)pAVar4->data();
                local_170 = (CoordGrid*)pAVar4->end();
                if (pCVar7 != local_170) {
                    local_15c = (uint)CONCAT71(in_register_00000031, param_1);
                    do {
                        if (((char)uVar10 != '\0') || ((char)pCVar7[1].field_0 == '\0')) {
                            this_00 = ConfigProvider::GetConfig<MapElementType>(field_24, *(int*)&pCVar7->field_12,
                                                                                (DataStatus**)0);
                            bVar3 = shared_ptr::operator_cast_to_bool(this_00);
                            if (bVar3) {
                                this_01 = (StaticPointLight*)shared_ptr<MapElementType>::operator->(
                                    (shared_ptr<MapElementType>*)this_00);
                                cVar2 = this_01->IsValid();
                                if (cVar2 != '\0') {
                                    new (&local_180) game::CoordGrid();
                                    cVar2 = (field_512, &local_180, pCVar7)->GetTargetCoord();
                                    if (cVar2 == '\0') {
                                        uVar8 = logger::default_logger();
                                        this_02 = &local_158;
                                        logger::LogStream::LogStream(this_02, (LogStream*)&LOGGER_WORLDMAP);
                                        field_512->GetScreen();
                                        uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                        logger::Logger::Log(
                                            uVar8, 0, this_02, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/worldmap/WorldMap.cpp",
                                            1228,
                                            "Invalid map element in map area %s at coord %d,%u,%u,%u,%u - not within "
                                            "target area",
                                            uVar9, pCVar7->field_0, pCVar7->field_4 >> 6, pCVar7->field_8 >> 6,
                                            pCVar7->field_4 & 63, pCVar7->field_8 & 63);
                                        goto LAB_1003ca23a;
                                    }
                                    AddMapElement(this, this_00, &local_180, true);
                                }
                            } else {
                                uVar8 = logger::default_logger();
                                this_02 = &local_c8;
                                logger::LogStream::LogStream(this_02, (LogStream*)&LOGGER_WORLDMAP);
                                field_512->GetScreen();
                                uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                logger::Logger::Log(uVar8, 0, this_02, 8,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/scene/worldmap/WorldMap.cpp",
                                                    1211,
                                                    "Invalid (STATIC) map element in map area %s at coord "
                                                    "%d,%u,%u,%u,%u - unknown type %d",
                                                    uVar9, pCVar7->field_0, pCVar7->field_4 >> 6, pCVar7->field_8 >> 6,
                                                    pCVar7->field_4 & 63, pCVar7->field_8 & 63,
                                                    *(undefined4*)&pCVar7->field_12);
                            LAB_1003ca23a:
                                this_02->~LogStream();
                            }
                        }
                        pCVar7 = (CoordGrid*)&pCVar7[1].field_4;
                        uVar10 = (ulong)local_15c;
                    } while (pCVar7 != local_170);
                }
            }
            uVar10 = CONCAT71(uVar11, bVar1);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar10 & 4294967295;
    }

    // 0x1003ca420, 416 bytes, placed by class name
    // WorldMap::LoadTileData(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned char, unsigned char, unsigned int, unsigned int)
    void WorldMap::LoadTileData(PacketT* param_1, uchar param_2, uchar param_3, uint param_4, uint param_5) {
        byte bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        uint uVar5;
        ulong uVar6;
        CoordGrid local_60;
        uint local_44;
        uint local_38;
        byte local_31;

        uVar3 = param_1->g1();
        uVar6 = (ulong)uVar3;
        local_31 = (byte)uVar3;
        if ((uVar3 & 1) == 0) {
            iVar4 = (int)((uVar6 & 255) >> 2);
            if (iVar4 != 62) {
                if (iVar4 == 63) {
                    param_1->gSmart1or2();
                }
                if ((uVar3 & 2) != 0) {
                    param_1->gSmart1or2s();
                }
            }
        } else {
            bVar1 = (local_31 >> 1 & 3) + 1;
            uVar3 = (uint)bVar1;
            uVar5 = 0;
            local_38 = (uint)bVar1;
            do {
                param_1->gSmart1or2s();
                if ((uVar6 & 8) != 0) {
                    param_1->gSmart1or2s();
                    param_1->g1();
                }
                if ((uVar6 & 16) != 0) {
                    bVar1 = param_1->g1();
                    new (&local_60) oldscape::rs2lib::worldmap::LocationData(uVar5, param_4, param_5);
                    uVar3 = (uint)bVar1;
                    local_44 = uVar5;
                    if (uVar5 == 0) {
                        if (uVar3 != 0) {
                            if (bVar1 == 1) {
                                iVar4 = param_1->gSmart2or4s();
                                cVar2 = param_1->g1s();
                                AddPendingLocation((WorldMap*)this, &local_60, iVar4, (int)cVar2);
                            } else {
                                do {
                                    iVar4 = param_1->gSmart2or4s();
                                    cVar2 = param_1->g1s();
                                    AddPendingLocation((WorldMap*)this, &local_60, iVar4, (int)cVar2);
                                    uVar3 = uVar3 - 1;
                                } while (uVar3 != 0);
                            }
                        }
                    } else {
                        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                            iVar4 = param_1->gSmart2or4s();
                            cVar2 = param_1->g1s();
                            AddPendingLocation((WorldMap*)this, &local_60, iVar4, (int)cVar2);
                        }
                    }
                    uVar6 = (ulong)local_31;
                    uVar3 = local_38;
                    uVar5 = local_44;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
        }
    }

    // 0x1003ca5c0, 96 bytes, placed by class name
    // WorldMap::AddPendingLocation(CoordGrid const&, int, int)
    void WorldMap::AddPendingLocation(CoordGrid* param_1, int param_2, int param_3) {
        PendingLocationType* pPVar1;

        pPVar1 = (PendingLocationType*)(&field_704)->push_back();
        *(undefined8*)pPVar1 = *(undefined8*)param_1;
        *(uint*)(pPVar1 + 8) = param_1->field_8;
        *(int*)(pPVar1 + 12) = param_2;
        *(int*)(pPVar1 + 16) = param_3;
        (&field_704, pPVar1)->push_back();
    }

    // 0x1003ca930, 224 bytes, placed by class name
    // WorldMap::AddMapElement(shared_ptr<MapElementType> const&, CoordGrid const&, bool)
    void WorldMap::AddMapElement(shared_ptr* param_1, CoordGrid* param_2, bool param_3) {
        int iVar2;
        GameToken* this_00;
        long lVar3;
        long lVar4;
        undefined7 in_register_00000009;
        long lVar5;
        undefined1* this_01;
        CoordGrid local_40;

        this_00 = (GameToken*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
        iVar2 = this_00->GetStatus();
        local_40.field_8 = param_2->field_8;
        local_40.field_0 = param_2->field_0;
        local_40.field_4 = param_2->field_4;
        if ((int)CONCAT71(in_register_00000009, param_3) != 0) {
            local_40.field_4 = local_40.field_4 - field_232;
            local_40.field_8 = local_40.field_8 - field_236;
        }
        this_01 = &field_88;
        lVar3 = this_01->HeapBeginPtr();
        lVar4 = this_01->end();
        if (lVar3 != lVar4) {
            lVar3 = lVar3 + 16;
            do {
                if ((game::CoordGrid::operator==(&local_40, (CoordGrid*)(lVar3 + 4)) != '\0') &&
                    (*(int*)(lVar3 + 16) == iVar2)) {
                    return;
                }
                lVar5 = lVar3 + 20;
                lVar3 = lVar3 + 36;
            } while (lVar5 != lVar4);
        }
        lVar3 = this_01->push_back();
        *(undefined8*)(lVar3 + 20) = local_40._0_8_;
        *(uint*)(lVar3 + 28) = local_40.field_8;
        *(int*)(lVar3 + 32) = iVar2;
        *(undefined2*)(lVar3 + 16) = 256;
    }

    // 0x1003caaa0, 144 bytes, placed by class name
    // WorldMap::GetLabelFont(int) const
    undefined1* WorldMap::GetLabelFont(int param_1) {
        float fVar1;
        undefined1* puVar2;
        array<shared_ptr<graphics::Font>, 5ul>* this_00;
        ulong uVar3;

        puVar2 = &graphics::Font::NullFont;
        if ((uint)param_1 < 3) {
            fVar1 = field_252;
            uVar3 = 4;
            if ((((fVar1 < 8.0) && (uVar3 = 3, fVar1 < 6.0)) && (uVar3 = 2, fVar1 < 4.0)) && (uVar3 = 1, fVar1 < 3.0)) {
                if (fVar1 < 2.0) {
                    return &graphics::Font::NullFont;
                }
                uVar3 = 0;
            }
            this_00 = (array<shared_ptr<graphics::Font>, 5ul>*)
                std::array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>::operator[](
                    (array<std::array<shared_ptr<graphics::Font>, 5ul>, 3ul>*)&field_264, (long)param_1);
            puVar2 = (undefined1*)std::array<shared_ptr<graphics::Font>, 5ul>::operator[](this_00, uVar3);
        }
        return puVar2;
    }

    // 0x1003cab60, 720 bytes, placed by class name
    // WorldMap::MainDrawLoading(graphics::GUIManager&, math::Rect<int>&, Language const*, int)
    void WorldMap::MainDrawLoading(GUIManager* param_1, Rect* param_2, Language* param_3, int param_4) {
        int iVar1;
        undefined4 uVar2;
        FontManager* this_00;
        char cVar3;
        int iVar5;
        int iVar6;
        int iVar7;
        int* piVar8;
        vector* pvVar9;
        shared_ptr* this_01;
        type* ptVar10;
        uint uVar12;
        StringView SVar13;
        TextFlags in_stack_ffffffffffffff48;
        TextProperties* in_stack_ffffffffffffff58;
        undefined1 local_98[40];
        undefined1 local_70[32];
        undefined4 local_48;
        float local_44;
        FontHelpers* local_40;
        TextFlags local_38[8];

        piVar8 = (int*)param_2->second();
        field_184 = (int)((float)(*piVar8 * 2) / field_248);
        piVar8 = (int*)param_2->qw();
        field_188 = (int)((float)(*piVar8 * 2) / field_248);
        if (field_512 != (CommandLine*)0) {
            cVar3 = (&field_744)->empty();
            if (cVar3 == '\0') {
                param_1->AddColouredRectangle(param_2, 255, 0);
                iVar5 = GetLoadPercentage(this);
                local_44 = (float)iVar5;
                pvVar9 = param_2->SSOBeginPtr(param_2);
                iVar5 = *(int*)pvVar9;
                iVar6 = param_2->Right();
                piVar8 = (int*)param_2->y();
                local_40 = (FontHelpers*)CONCAT44(local_40._4_4_, param_4);
                iVar1 = *piVar8;
                iVar7 = param_2->MaxZ();
                uVar12 = (iVar6 + iVar5) / 2 - 152;
                ptVar10 = (type*)(ulong)uVar12;
                new (local_70) oldscape::dash3d::GridRect(uVar12, (iVar7 + iVar1) / 2 + -17, 304, 34);
                pvVar9 = local_70->SSOBeginPtr(ptVar10);
                iVar5 = *(int*)pvVar9;
                piVar8 = (int*)local_70->y();
                new ((local_98 + -16)) oldscape::dash3d::GridRect(iVar5 + 2, *piVar8 + 2, (int)(local_44 * 3.0), 31);
                iVar5 = (int)local_40;
                param_1->AddOutline(local_70, 2, 2349928959, 0);
                param_1->AddColouredRectangle((GridRect*)(local_98 + -16), 2349928959, 0);
                if (iVar5 != -1) {
                    this_00 = field_40;
                    new (local_98) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    this_01 = (shared_ptr*)this_00->GetFont(iVar5, local_98);
                    local_98->~shared_ptr();
                    if (shared_ptr::operator_cast_to_bool(this_01)) {
                        local_48 = 1;
                        graphics::TextFlags::TextFlags(local_38, &local_48, 1);
                        new (local_98) graphics::TextProperties(this_01, in_stack_ffffffffffffff48);
                        local_98->SetAlignment(1, 1);
                        local_98->SetColour(4294967295);
                        local_40 = field_48;
                        ptVar10 = (type*)std::array<char const*, 7ul>::operator[]((ulong)param_3->field_8);
                        StringView::StringView<char const*>((StringView*)(local_70 + 16), (char**)ptVar10);
                        pvVar9 = local_70->SSOBeginPtr(ptVar10);
                        uVar2 = *(undefined4*)pvVar9;
                        piVar8 = (int*)local_70->y();
                        iVar5 = *piVar8;
                        piVar8 = (int*)local_70->second();
                        iVar1 = *piVar8;
                        piVar8 = (int*)local_70->qw();
                        SVar13.field_8._0_4_ = uVar2;
                        SVar13.field_0 = (ulong)(local_70 + 16);
                        SVar13.field_8._4_4_ = 0;
                        local_40->DrawStringMultiline(SVar13, iVar5, iVar1, *piVar8, 0, local_98,
                                                      in_stack_ffffffffffffff58);
                    }
                }
            }
        }
    }

    // 0x1003cae50, 3600 bytes, placed by class name
    // WorldMap::MainDraw(graphics::GUIManager&, math::Rect<int>&, bool)
    void WorldMap::MainDraw(GUIManager* param_1, Rect* param_2, bool param_3) {
        undefined1* this_00;
        undefined* puVar1;
        undefined1 auVar2[16];
        char cVar3;
        undefined1 uVar4;
        bool bVar5;
        undefined4 uVar6;
        int iVar7;
        int* piVar8;
        vector* pvVar9;
        WorldMap* pWVar10;
        WorldMap* pWVar11;
        undefined8 uVar12;
        Layout* this_01;
        float* pfVar13;
        float* pfVar14;
        vector<bool, eastl::allocator>* pvVar15;
        SpriteAtlasReference* pSVar16;
        MSIType* pMVar17;
        WorldMap* pWVar18;
        LocType* pLVar19;
        long lVar20;
        char* pcVar21;
        CoordMapSquare* this_02;
        undefined7 in_register_00000009;
        int iVar22;
        uint uVar23;
        shared_ptr* psVar24;
        ulong uVar26;
        Array<eastl::vector<WorldMap::MSIInstance, eastl::allocator>, eastl::allocator>* pAVar27;
        int iVar28;
        int iVar29;
        uint uVar30;
        vector<bool, eastl::allocator>* pvVar31;
        WorldMap* pWVar32;
        int iVar33;
        float extraout_XMM0_Dc;
        float extraout_XMM0_Dd;
        float fVar34;
        ImVec4 local_120[16];
        undefined1 local_110[24];
        undefined8 local_f8;
        float fStack_f0;
        float fStack_ec;
        undefined1 local_e8[16];
        float local_d8;
        undefined4 uStack_d4;
        undefined4 uStack_d0;
        undefined4 uStack_cc;
        int* local_c0;
        undefined8 local_b8;
        float fStack_b0;
        float fStack_ac;
        int local_9c;
        ulong local_98;
        ulong local_90;
        WorldMap* local_80;
        int local_6c;
        shared_ptr* local_68;
        WorldMap* local_60;
        uint local_54;
        RT7Core* local_50;
        WorldMap* local_48;
        WorldMap* local_40;
        float local_38;
        bool local_31;

        local_c0 = (int*)CONCAT44(local_c0._4_4_, (int)CONCAT71(in_register_00000009, param_3));
        local_48 = (WorldMap*)&field_744;
        cVar3 = local_48->empty();
        if (cVar3 == '\0') {
            piVar8 = (int*)param_2->second();
            field_184 = (int)((float)(*piVar8 * 2) / field_248);
            piVar8 = (int*)param_2->qw();
            field_188 = (int)((float)(*piVar8 * 2) / field_248);
            uVar6 = field_512->GetPickingPrepassType();
            iVar28 = 0;
            param_1->AddColouredRectangle(param_2, uVar6, 0);
            local_b8 = ceil(field_248 * 4.0);
            uVar30 = (uint)(float)local_b8;
            uVar26 = (ulong)uVar30;
            local_80._0_4_ = (float)(int)field_200 * 0.125;
            local_40 = (WorldMap*)CONCAT44(local_40._4_4_, (float)(int)field_204 * 0.125 + 0.0625);
            fStack_b0 = extraout_XMM0_Dc;
            fStack_ac = extraout_XMM0_Dd;
            pvVar9 = param_2->SSOBeginPtr(param_2);
            iVar33 = *(int*)pvVar9;
            piVar8 = (int*)param_2->second();
            fStack_f0 = (float)(int)fStack_b0;
            fStack_ec = (float)(int)fStack_ac;
            local_f8 =
                (vector<bool, eastl::allocator>*)CONCAT44((float)(int)local_b8._4_4_, (float)(int)(float)local_b8);
            iVar33 = (int)((float)*piVar8 * 0.5 - local_80._0_4_ * (float)(int)(float)local_b8) + iVar33;
            piVar8 = (int*)((WorldMap*)param_2)->y();
            iVar29 = *piVar8;
            piVar8 = (int*)((WorldMap*)param_2)->qw();
            iVar7 = (int)field_216 >> 3;
            iVar22 = (int)field_220 >> 3;
            local_68 = (shared_ptr*)CONCAT44(local_68._4_4_, iVar7);
            local_e8._0_4_ = iVar22;
            fVar34 = (float)(int)(iVar22 * uVar30);
            local_54 = (int)(local_40._0_4_ * (float)local_f8 + (float)*piVar8 * 0.5) + iVar29;
            local_50._0_4_ = 1.0 / (float)(int)(iVar7 * uVar30);
            local_b8 = CONCAT44(local_b8._4_4_, (float)-iVar33 * local_50._0_4_);
            local_38 = 1.0 / fVar34;
            local_80 = (WorldMap*)CONCAT44(local_80._4_4_, (fVar34 - (float)(int)local_54) * local_38);
            local_40 = this;
            piVar8 = (int*)((WorldMap*)param_2)->second();
            local_50 = (RT7Core*)CONCAT44(local_50._4_4_, (float)*piVar8 * local_50._0_4_);
            piVar8 = (int*)((WorldMap*)param_2)->qw();
            pWVar11 = (WorldMap*)param_2;
            (&field_168, (float)local_b8, local_80._0_4_, local_50._0_4_, (float)*piVar8 * local_38)->Set();
            pvVar9 = pWVar11->SSOBeginPtr(param_2);
            fVar34 = 0.0;
            local_6c = iVar33;
            if (iVar33 <= (int)(*(int*)pvVar9 - uVar30)) {
                fVar34 = 0.0;
                do {
                    fVar34 = (float)((int)fVar34 + 1);
                    iVar33 = iVar33 + uVar30;
                    pvVar9 = pWVar11->SSOBeginPtr(param_2);
                } while (iVar33 <= (int)(*(int*)pvVar9 - uVar30));
            }
            local_90 = CONCAT44(local_90._4_4_, iVar33);
            pWVar10 = pWVar11;
            iVar33 = pWVar11->MaxZ();
            uVar23 = local_54;
            if ((int)(iVar33 + uVar30) <= (int)local_54) {
                iVar28 = 0;
                do {
                    iVar28 = iVar28 + 1;
                    uVar23 = uVar23 - uVar30;
                    pWVar10 = pWVar11;
                    iVar33 = pWVar11->MaxZ();
                } while ((int)(iVar33 + uVar30) <= (int)uVar23);
            }
            local_98 = (ulong)(uVar30 * 8);
            local_80 = (WorldMap*)&local_40->field_768;
            local_38 = 0.0;
            local_b8 = uVar26;
            if (iVar28 < (int)local_e8._0_4_) {
                local_38 = 0.0;
                local_d8 = fVar34;
                do {
                    fVar34 = local_d8;
                    pWVar10 = pWVar11;
                    piVar8 = (int*)pWVar11->y();
                    if ((int)uVar23 <= *piVar8)
                        break;
                    local_60 = (WorldMap*)CONCAT44(local_60._4_4_, uVar23);
                    local_50 = (RT7Core*)CONCAT44(local_50._4_4_, iVar28);
                    iVar33 = (int)(float)local_90;
                    if ((int)fVar34 < (int)local_68._0_4_) {
                        do {
                            pWVar10 = pWVar11;
                            iVar29 = pWVar11->Right();
                            pWVar18 = local_40;
                            if (iVar29 <= iVar33)
                                break;
                            iVar29 = (int)local_50._0_4_;
                            pWVar10 = local_48;
                            pcVar21 = (char*)Array<bool, eastl::allocator>::operator[](
                                (Array<bool, eastl::allocator>*)local_48,
                                (long)(local_40->field_224 * (int)local_50._0_4_ + (int)fVar34));
                            if (*pcVar21 == '\0') {
                                pWVar18 = pWVar10;
                            } else {
                                uVar26 = (ulong)(int)local_38;
                                local_38 = (float)((int)local_38 + 1);
                                piVar8 = (int*)eastl::vector<WorldMap::ZoneDetails, eastl::allocator>::operator[](
                                    (vector<WorldMap::ZoneDetails, eastl::allocator>*)local_80, uVar26);
                                *piVar8 = iVar33;
                                piVar8[1] = (int)local_60._0_4_;
                                piVar8[2] = (int)fVar34;
                                piVar8[3] = iVar29;
                                piVar8[4] = pWVar18->field_224 * iVar29 + (int)fVar34;
                                uVar4 = IsF2PZone(pWVar18, (int)fVar34, iVar29);
                                *(undefined1*)((long)piVar8 + 25) = uVar4;
                                pWVar11 = (WorldMap*)param_2;
                            }
                            fVar34 = (float)((int)fVar34 + 1);
                            iVar33 = iVar33 + (int)local_b8;
                            pWVar10 = pWVar18;
                            uVar26 = local_b8;
                        } while (local_68._0_4_ != fVar34);
                    }
                    iVar28 = (int)local_50._0_4_ + 1;
                    uVar23 = (int)local_60._0_4_ - (int)uVar26;
                } while (iVar28 != local_e8._0_4_);
            }
            local_50 = (RT7Core*)SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)pWVar10);
            pWVar10 = local_40;
            UpdateTerrainTextures(local_40, (ulonglong)local_50, local_6c, local_54, (int)local_98, (Rect*)pWVar11);
            ImVec4::ImVec4(local_120, 0.0, 0.0, 1.0, 1.0);
            if (*(char*)&pWVar10[1].field_24 != '\0') {
                local_60 = (WorldMap*)CONCAT44(local_60._4_4_, (float)local_40->field_904);
                local_68 = (shared_ptr*)CONCAT44(local_68._4_4_, (float)local_40->field_908);
                this_00 = &local_40->field_832;
                pWVar10 = (WorldMap*)this_00->HeapBeginPtr();
                pWVar11 = (WorldMap*)this_00->end();
                if (pWVar10 != pWVar11) {
                    local_90 = CONCAT44(local_90._4_4_, 1.0 / local_60._0_4_);
                    local_d8 = 1.0 / local_68._0_4_;
                    local_68 = (shared_ptr*)local_40->field_4016;
                    local_e8 = ZEXT416((uint)local_d8);
                    local_d8 = -local_d8;
                    uStack_d4 = 2147483648;
                    uStack_d0 = 2147483648;
                    uStack_cc = 2147483648;
                    local_48 = pWVar11;
                    do {
                        uVar26 = local_98;
                        if (pWVar10->field_8 == local_50) {
                            iVar33 = (int)local_98;
                            iVar29 = *(int*)&pWVar10->field_0 * iVar33 + local_6c;
                            iVar7 = local_54 - *(int*)((long)&pWVar10->field_0 + 4) * iVar33;
                            bVar5 = (&pWVar10->field_24)->operator_cast_to_bool();
                            if (bVar5) {
                                ((WorldMap*)param_1)
                                    ->AddSprite(iVar29, iVar7 - iVar33, uVar26 & 4294967295, uVar26 & 4294967295,
                                                4294967295, &pWVar10->field_24, 0);
                                pWVar11 = local_48;
                            } else {
                                bVar5 = shared_ptr::operator_cast_to_bool(local_68);
                                if (!bVar5) {
                                    LoadState_CompositeMap(local_40);
                                }
                                bVar5 = shared_ptr::operator_cast_to_bool(local_68);
                                pWVar11 = local_48;
                                if (bVar5) {
                                    new (local_110)
                                        ImVec4((float)*(int*)&pWVar10->field_0 * (float)local_90,
                                               (float)*(int*)((long)&pWVar10->field_0 + 4) * (float)local_e8._0_4_ +
                                                   (float)local_e8._0_4_,
                                               (float)local_90, local_d8);
                                    iVar33 = (int)local_98;
                                    local_60 = (WorldMap*)CONCAT44(local_60._4_4_, iVar33 + iVar29);
                                    uVar12 = local_68->end();
                                    ((WorldMap*)param_1)
                                        ->AddElement(iVar29, iVar7 - iVar33, (ulong)local_60 & 4294967295, iVar7,
                                                     4294967295, local_110, uVar12, 0);
                                }
                            }
                        }
                        pWVar10 = (WorldMap*)&pWVar10->field_40;
                    } while (pWVar10 != pWVar11);
                }
            }
            local_31 = false;
            local_50 = (RT7Core*)((ulong)local_50 & 18446744069414584320);
            new (local_110) oldscape::dash3d::GridRect(0, 0, (int)local_b8, (int)local_b8);
            pWVar11 = (WorldMap*)param_1;
            if ((char)local_c0 == '\0') {
                local_50 = (RT7Core*)CONCAT44(
                    local_50._4_4_, (int)CONCAT71((int7)((ulong)local_40 >> 8), local_40->field_4032 != false));
            }
            if (0 < (int)local_38) {
                local_48 = (WorldMap*)&local_40->field_128;
                local_68 = (shared_ptr*)(ulong)(uint)local_38;
                uVar26 = 0;
                do {
                    piVar8 = (int*)eastl::vector<WorldMap::ZoneDetails, eastl::allocator>::operator[](
                        (vector<WorldMap::ZoneDetails, eastl::allocator>*)local_80, uVar26);
                    if ((((byte)local_50 & *(char*)((long)piVar8 + 25) == '\0') == 0) &&
                        ((cVar3 = GetTypeDisabled(local_40, &local_31, 1), cVar3 == '\0' || (local_31 == false)))) {
                        this_01 = (Layout*)
                            Array<eastl::vector<WorldMap::ZoneLine, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<eastl::vector<WorldMap::ZoneLine, eastl::allocator>, eastl::allocator>*)local_48,
                                (long)piVar8[4]);
                        pfVar13 = (float*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                        pfVar14 = (float*)this_01->end();
                        for (; pfVar13 != pfVar14; pfVar13 = pfVar13 + 5) {
                            ((*pfVar13 * (float)local_f8 + (float)*piVar8))
                                ->AddGeneralLine((float)piVar8[1] - pfVar13[1] * (float)local_f8,
                                                 pfVar13[2] * (float)local_f8 + (float)*piVar8,
                                                 (float)piVar8[1] - pfVar13[3] * (float)local_f8, 1065353216, pWVar11,
                                                 pfVar13[4], 0, 1);
                        }
                    }
                    uVar26 = uVar26 + 1;
                } while ((shared_ptr*)uVar26 != local_68);
            }
            pWVar11 = (WorldMap*)param_1;
            pWVar10 = (WorldMap*)param_1;
            ((WorldMap*)param_1)->Render(0);
            auVar2 = local_e8;
            if (0 < (int)local_38) {
                local_110._16_8_ = &local_40->field_64;
                local_e8._4_4_ = 0;
                local_e8._0_4_ = local_38;
                local_e8._8_8_ = auVar2._8_8_;
                psVar24 = (shared_ptr*)0;
                do {
                    pWVar10 = local_80;
                    piVar8 = (int*)eastl::vector<WorldMap::ZoneDetails, eastl::allocator>::operator[](
                        (vector<WorldMap::ZoneDetails, eastl::allocator>*)local_80, (ulong)psVar24);
                    local_68 = psVar24;
                    if ((((byte)local_50 & *(char*)((long)piVar8 + 25) == '\0') == 0) &&
                        ((pWVar10 = local_40, cVar3 = GetTypeDisabled(local_40, &local_31, 2),
                          cVar3 == '\0' || (local_31 == false)))) {
                        pWVar10 = (WorldMap*)
                            Array<eastl::vector<WorldMap::MSIInstance, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<eastl::vector<WorldMap::MSIInstance, eastl::allocator>, eastl::allocator>*)
                                    local_110._16_8_,
                                (long)piVar8[4]);
                        pvVar15 = (vector<bool, eastl::allocator>*)pWVar10->HeapBeginPtr();
                        local_f8 = (vector<bool, eastl::allocator>*)pWVar10->end();
                        if (pvVar15 != local_f8) {
                            pvVar15 = pvVar15 + 29;
                            local_c0 = piVar8;
                            do {
                                iVar33 = *(int*)(pvVar15 + -29) * (int)(float)local_b8;
                                uVar6 = *(undefined4*)(pvVar15 + -25);
                                pWVar11 = (WorldMap*)ConfigProvider::GetConfig<MSIType>(
                                    local_40->field_24, *(int*)(pvVar15 + -9), (DataStatus**)0);
                                pWVar10 = pWVar11;
                                bVar5 = pWVar11->operator_cast_to_bool();
                                if (bVar5) {
                                    pWVar10 = (WorldMap*)shared_ptr<MSIType>::operator->((shared_ptr<MSIType>*)pWVar11);
                                    iVar29 = pWVar10->GetSpriteID();
                                    if (iVar29 != -1) {
                                        local_48 = (WorldMap*)CONCAT44(local_48._4_4_, uVar6);
                                        pMVar17 =
                                            (MSIType*)shared_ptr<MSIType>::operator->((shared_ptr<MSIType>*)pWVar11);
                                        pWVar18 =
                                            (WorldMap*)pMVar17->GetSprite(local_40->field_8, pvVar15[-1], *pvVar15);
                                        pWVar10 = pWVar18;
                                        bVar5 = pWVar18->operator_cast_to_bool();
                                        if (bVar5) {
                                            local_60 = pWVar18;
                                            pWVar10 = (WorldMap*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                (shared_ptr<graphics::SpriteAtlasReference>*)pWVar18);
                                            cVar3 = pWVar10->IsReady();
                                            if (cVar3 != '\0') {
                                                iVar29 = ((int)local_48 + 1) * (int)(float)local_b8 >> 3;
                                                pMVar17 = (MSIType*)shared_ptr<MSIType>::operator->(
                                                    (shared_ptr<MSIType>*)pWVar11);
                                                bVar5 = pMVar17->GetResize();
                                                if (bVar5) {
                                                    pWVar11 = (WorldMap*)ConfigProvider::GetConfig<LocType>(
                                                        local_40->field_24, *(int*)(pvVar15 + -5), (DataStatus**)0);
                                                    pWVar10 = pWVar11;
                                                    bVar5 = pWVar11->operator_cast_to_bool();
                                                    cVar3 = '\0';
                                                    if (bVar5) {
                                                        local_48 = (WorldMap*)CONCAT71(local_48._1_7_, 1);
                                                        pLVar19 = (LocType*)shared_ptr<LocType>::operator->(
                                                            (shared_ptr<LocType>*)pWVar11);
                                                        iVar7 = pLVar19->GetGridWidth(pvVar15[-1]);
                                                        pWVar10 = (WorldMap*)shared_ptr<LocType>::operator->(
                                                            (shared_ptr<LocType>*)pWVar11);
                                                        iVar22 = pWVar10->GetGridLength(pvVar15[-1]);
                                                        local_90 = CONCAT44(local_90._4_4_, iVar7 * (int)local_b8 >> 3);
                                                        local_d8 = (float)(iVar22 * (int)local_b8 >> 3);
                                                        iVar29 = iVar29 + (int)((float)(int)local_d8 * 0.35);
                                                        cVar3 = (char)local_48;
                                                    }
                                                    if (cVar3 == '\0')
                                                        goto LAB_1003cb7c0;
                                                } else {
                                                    pSVar16 =
                                                        (SpriteAtlasReference*)
                                                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                                (shared_ptr<graphics::SpriteAtlasReference>*)local_60);
                                                    iVar7 = pSVar16->GetWidth();
                                                    pSVar16 =
                                                        (SpriteAtlasReference*)
                                                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                                                (shared_ptr<graphics::SpriteAtlasReference>*)local_60);
                                                    uVar6 = pSVar16->GetHeight();
                                                    puVar1 = PTR_MSI_MIN_SIZE_100ee6660;
                                                    local_48 = (WorldMap*)CONCAT44(local_48._4_4_, uVar6);
                                                    local_9c = (int)((float)(iVar7 * (int)(float)local_b8 >> 3) * 0.25);
                                                    piVar8 = std::max<int>(&local_9c, (int*)PTR_MSI_MIN_SIZE_100ee6660);
                                                    local_90 = CONCAT44(local_90._4_4_, *piVar8);
                                                    local_9c =
                                                        (int)((float)((int)local_48 * (int)(float)local_b8 >> 3) *
                                                              0.25);
                                                    pfVar13 = (float*)std::max<int>(&local_9c, (int*)puVar1);
                                                    local_d8 = *pfVar13;
                                                }
                                                pWVar10 = (WorldMap*)param_1;
                                                ((WorldMap*)param_1)
                                                    ->AddSprite((iVar33 >> 3) + *local_c0 + -1,
                                                                (local_c0[1] - (((int)local_d8 >> 1) + iVar29)) + 2,
                                                                local_90 & 4294967295, local_d8, 4294967295, local_60,
                                                                1);
                                            }
                                        }
                                    }
                                }
                            LAB_1003cb7c0:
                                pvVar31 = pvVar15 + 3;
                                pvVar15 = pvVar15 + 32;
                            } while (pvVar31 != local_f8);
                        }
                    }
                    psVar24 = (shared_ptr*)&local_68->field_1;
                    pWVar11 = (WorldMap*)param_1;
                } while (psVar24 != (shared_ptr*)local_e8._0_8_);
            }
            lVar20 = pWVar10->Instance();
            pWVar10 = (WorldMap*)(lVar20 + 80);
            pWVar11->Render(pWVar10);
            pWVar11 = local_40;
            if ((byte)local_50 != '\0') {
                local_f8 = (vector<bool, eastl::allocator>*)&local_40->field_4208;
                if (0 < (int)local_38) {
                    pWVar32 = (WorldMap*)(ulong)(uint)local_38;
                    pWVar18 = (WorldMap*)0;
                    do {
                        pWVar10 = pWVar18;
                        piVar8 = (int*)eastl::vector<WorldMap::ZoneDetails, eastl::allocator>::operator[](
                            (vector<WorldMap::ZoneDetails, eastl::allocator>*)local_80, (ulong)pWVar18);
                        if (*(char*)((long)piVar8 + 25) == '\0') {
                            uVar30 = pWVar11->field_216;
                            uVar23 = uVar30 + 63;
                            if (-1 < (int)uVar30) {
                                uVar23 = uVar30;
                            }
                            pWVar10 = (WorldMap*)(long)((piVar8[2] >> 3) + (piVar8[3] >> 3) * ((int)uVar23 >> 6));
                            pcVar21 =
                                (char*)eastl::vector<bool, eastl::allocator>::operator[](local_f8, (ulong)pWVar10);
                            if (*pcVar21 == '\0') {
                                pWVar10 = (WorldMap*)param_1;
                                RenderF2POverlay(pWVar11, (GUIManager*)(WorldMap*)param_1, *piVar8, piVar8[1],
                                                 (int)local_b8, piVar8[2], piVar8[3]);
                            }
                        }
                        pWVar18 = (WorldMap*)((long)&pWVar18->field_0 + 1);
                    } while (pWVar32 != pWVar18);
                }
                pWVar11 = (WorldMap*)param_2;
                if ((byte)local_50 != '\0') {
                    pvVar9 = ((WorldMap*)param_2)->SSOBeginPtr(pWVar10);
                    iVar29 = 0;
                    iVar7 = 0;
                    iVar33 = local_6c;
                    if (local_6c <= *(int*)pvVar9 - (int)local_98) {
                        iVar7 = 0;
                        do {
                            iVar7 = iVar7 + 1;
                            iVar33 = iVar33 + (int)local_98;
                            pvVar9 = pWVar11->SSOBeginPtr(pWVar10);
                        } while (iVar33 <= *(int*)pvVar9 - (int)local_98);
                    }
                    local_e8._0_4_ = iVar33;
                    local_c0 = (int*)CONCAT44(local_c0._4_4_, iVar7);
                    iVar33 = pWVar11->MaxZ();
                    pWVar10 = local_40;
                    uVar30 = local_54;
                    if (iVar33 + (int)local_98 <= (int)local_54) {
                        iVar29 = 0;
                        do {
                            iVar29 = iVar29 + 1;
                            uVar30 = uVar30 - (int)local_98;
                            iVar33 = pWVar11->MaxZ();
                        } while (iVar33 + (int)local_98 <= (int)uVar30);
                    }
                    this_02 = (CoordMapSquare*)pWVar10->field_24->GetWorldMapDefaults();
                    uVar6 = this_02->GetZ();
                    local_68 = (shared_ptr*)CONCAT44(local_68._4_4_, uVar6);
                    local_d8 = (float)pWVar10->field_216;
                    uVar23 = pWVar10->field_220;
                    piVar8 = (int*)pWVar11->y();
                    uVar26 = local_98;
                    if ((*piVar8 < (int)uVar30) && (iVar33 = (int)uVar23 >> 6, iVar29 < iVar33)) {
                        local_d8 = (float)((int)local_d8 >> 6);
                        local_80 = (WorldMap*)(long)(int)local_d8;
                        local_60 = (WorldMap*)(long)iVar29;
                        local_90 = (ulong)iVar33;
                        local_48 = (WorldMap*)((long)local_60 * (long)local_80 + (long)(int)local_c0);
                        local_110._16_8_ = (long)(int)local_c0 + 1;
                        local_38 = (float)uVar30;
                        do {
                            iVar29 = (int)uVar26;
                            local_38 = (float)((int)local_38 - iVar29);
                            iVar33 = ((WorldMap*)param_2)->Right();
                            if (((int)local_e8._0_4_ < iVar33) && ((int)local_c0 < (int)local_d8)) {
                                pAVar27 =
                                    (Array<eastl::vector<WorldMap::MSIInstance, eastl::allocator>, eastl::allocator>*)
                                        local_110._16_8_;
                                pWVar11 = local_48;
                                iVar33 = local_e8._0_4_;
                                do {
                                    pcVar21 = (char*)eastl::vector<bool, eastl::allocator>::operator[](local_f8,
                                                                                                       (ulong)pWVar11);
                                    if (*pcVar21 != '\0') {
                                        ((WorldMap*)param_1)
                                            ->AddColouredRectangle(iVar33, local_38, uVar26 & 4294967295,
                                                                   uVar26 & 4294967295, (ulong)local_68 & 4294967295,
                                                                   1);
                                    }
                                    iVar7 = ((WorldMap*)param_2)->Right();
                                    if (iVar7 <= iVar33 + iVar29)
                                        break;
                                    iVar33 = iVar33 + iVar29;
                                    pWVar11 = (WorldMap*)((long)&pWVar11->field_0 + 1);
                                    bVar5 = (long)pAVar27 < (long)local_80;
                                    pAVar27 = pAVar27 + 1;
                                } while (bVar5);
                            }
                            piVar8 = (int*)((WorldMap*)param_2)->y();
                            if ((int)local_38 <= *piVar8)
                                break;
                            local_60 = (WorldMap*)((long)&local_60->field_0 + 1);
                            local_48 = (WorldMap*)(local_80->field_4016 + (long)(local_48->field_4016 + -8032));
                        } while ((long)local_60 < (long)local_90);
                    }
                }
            }
            RenderMapElements(local_40, (GUIManager*)(WorldMap*)param_1, (Rect*)(WorldMap*)param_2, local_6c, local_54,
                              (int)local_b8, SUB81(local_50, 0));
        }
    }

    // 0x1003cbcd0, 912 bytes, placed by class name
    // WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)
    void WorldMap::UpdateTerrainTextures(ulonglong param_1, int param_2, int param_3, int param_4, Rect* param_5) {
        long lVar1;
        Layout* pLVar2;
        ushort uVar3;
        char cVar4;
        int iVar5;
        int* piVar6;
        vector* pvVar7;
        uint* puVar8;
        uint* puVar9;
        TerrainUnderlayTexture* pTVar10;
        TerrainUnderlayTexture* pTVar11;
        TextureManager* this_00;
        long* plVar12;
        shared_ptr* psVar13;
        GeometryBatch* this_01;
        bool bVar14;
        int iVar15;
        undefined4 in_register_00000084;
        uint uVar16;
        uint uVar17;
        int iVar18;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_b8[16];
        TerrainUnderlayTexture* local_a8;
        undefined1 local_a0[24];
        vector<WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                               math::Rect<int>&)::TerrainTextureUpdate,
               BucketAllocatorEASTL>
            local_88[28];
        int local_6c;
        ulonglong local_68;
        WorldMap* local_60;
        void* local_58;
        int local_4c;
        Rect* local_48;
        Layout* local_40;
        ushort local_32;

        local_58._4_4_ = in_register_00000084;
        local_58._0_4_ = param_4;
        local_6c = param_2;
        local_68 = param_1;
        local_4c = param_3;
        local_48 = param_5;
        local_32 = GetDesiredTerrainTextureSize(this);
        local_40 = (Layout*)&field_832;
        local_60 = this;
        if (0 < field_908) {
            uVar16 = 0;
            do {
                iVar18 = local_4c;
                iVar15 = local_4c - (int)local_58;
                iVar5 = local_48->MaxZ();
                local_4c = iVar15;
                if (iVar15 <= iVar5) {
                    piVar6 = (int*)local_48->y();
                    if (iVar18 < *piVar6)
                        break;
                    if (0 < field_904) {
                        uVar17 = 0;
                        iVar18 = local_6c;
                        do {
                            iVar5 = iVar18 + (int)local_58;
                            pvVar7 = local_48->SSOBeginPtr(param_1);
                            if (*(int*)pvVar7 <= iVar5) {
                                iVar15 = local_48->Right();
                                if (iVar15 < iVar18)
                                    break;
                                param_1 = (ulonglong)uVar17;
                                cVar4 = IsMapSquareValid(this, uVar17, uVar16);
                                pLVar2 = local_40;
                                if (cVar4 != '\0') {
                                    puVar8 = (uint*)eastl::basic_string<
                                        char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                        Layout::HeapBeginPtr(local_40);
                                    puVar9 = (uint*)pLVar2->end();
                                    this = local_60;
                                    bVar14 = false;
                                    for (; puVar8 != puVar9; puVar8 = puVar8 + 10) {
                                        if ((*puVar8 == uVar17) && (puVar8[1] == uVar16)) {
                                            *(ulonglong*)(puVar8 + 2) = local_68;
                                            bVar14 = true;
                                        }
                                    }
                                    if (!bVar14) {
                                        puVar8 = (uint*)local_40->push_back();
                                        *puVar8 = uVar17;
                                        puVar8[1] = uVar16;
                                        *(ulonglong*)(puVar8 + 2) = local_68;
                                    }
                                }
                            }
                            uVar17 = uVar17 + 1;
                            iVar18 = iVar5;
                        } while ((int)uVar17 < field_904);
                    }
                }
                uVar16 = uVar16 + 1;
            } while ((int)uVar16 < field_908);
        }
        eastl::vector<WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                                      math::Rect<int>&)::TerrainTextureUpdate,
                      BucketAllocatorEASTL>::vector();
        pLVar2 = local_40;
        pTVar10 = (TerrainUnderlayTexture*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_40);
        pTVar11 = (TerrainUnderlayTexture*)pLVar2->end();
        uVar3 = local_32;
        if (pTVar10 != pTVar11) {
            do {
                if (local_68 - pTVar10->field_8 < 201) {
                    if ((local_68 == pTVar10->field_8) && ((int)(short)pTVar10->field_16 != (uint)uVar3)) {
                        pTVar10->field_16 = local_32;
                        local_a8 = pTVar10;
                        GenerateTerrainTexture((WorldMap*)local_a0, (uint)local_60, *(uint*)&pTVar10->field_0,
                                               (short)*(undefined4*)((long)&pTVar10->field_0 + 4));
                        eastl::vector<WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                                                      math::Rect<int>&)::TerrainTextureUpdate,
                                      BucketAllocatorEASTL>::push_back(local_88, (TerrainTextureUpdate*)&local_a8);
                        UpdateTerrainTextures(unsigned long long, int, int, int, math::Rect<int>&)
                            local_a8.~TerrainTextureUpdate();
                    }
                    pTVar10 = (TerrainUnderlayTexture*)&pTVar10[1].field_8;
                } else {
                    pTVar10 = (TerrainUnderlayTexture*)local_40->erase(pTVar10);
                }
                pTVar11 = (TerrainUnderlayTexture*)local_40->end();
            } while (pTVar10 != pTVar11);
        }
        this_00 = (TextureManager*)local_60->field_8->GetTextureManager();
        local_58 = (void*)this_00->GetSpriteAtlasManager();
        plVar12 = (long*)eastl::vector<WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                                                       math::Rect<int>&)::TerrainTextureUpdate,
                                       BucketAllocatorEASTL>::begin(local_88);
        local_40 = (Layout*)eastl::vector<WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                                                          math::Rect<int>&)::TerrainTextureUpdate,
                                          BucketAllocatorEASTL>::end(local_88);
        if ((Layout*)plVar12 != local_40) {
            do {
                lVar1 = *plVar12;
                local_48 = (Rect*)((plVar12 + 1))->data();
                uVar16 = (uint) * (short*)(lVar1 + 16);
                psVar13 = (shared_ptr*)math::GetEmptyMargins();
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_b8,
                                                                                         (_func_decltype_nullptr*)0);
                local_a8.AddRuntimeSprite(local_58, (uint)local_48, uVar16, uVar16, (fixed_vector*)&DAT_00000001,
                                          psVar13);
                local_b8->~shared_ptr();
                this_01 = (GeometryBatch*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                    (shared_ptr<graphics::SpriteAtlasReference>*)&local_a8);
                this_01->SetShareLight(true);
                shared_ptr<graphics::SpriteAtlasReference>::operator=(
                    (shared_ptr<graphics::SpriteAtlasReference>*)(lVar1 + 24), (shared_ptr*)&local_a8);
                local_a8.~shared_ptr();
                plVar12 = plVar12 + 4;
            } while ((Layout*)plVar12 != local_40);
        }
        eastl::vector<WorldMap::UpdateTerrainTextures(unsigned long long, int, int, int,
                                                      math::Rect<int>&)::TerrainTextureUpdate,
                      BucketAllocatorEASTL>::~vector(local_88);
    }

    // 0x1003cc060, 64 bytes, placed by class name
    // WorldMap::GetTypeDisabled(bool&, int) const
    undefined8 WorldMap::GetTypeDisabled(bool* param_1, int param_2) {
        bool* pbVar1;

        if (param_2 == 2) {
            pbVar1 = &field_697;
        } else if (param_2 == 1) {
            pbVar1 = &field_696;
        } else {
            if (param_2 != 0) {
                return 0;
            }
            pbVar1 = &field_695;
        }
        *param_1 = *pbVar1;
        return 1;
    }

    // 0x1003cc0a0, 3552 bytes, placed by class name
    // WorldMap::RenderF2POverlay(graphics::GUIManager&, int, int, int, int, int)
    void WorldMap::RenderF2POverlay(GUIManager* param_1, int param_2, int param_3, int param_4, int param_5,
                                    int param_6) {
        undefined1* puVar1;
        ulong uVar2;
        WorldMap* pWVar3;
        byte bVar4;
        byte bVar5;
        byte bVar6;
        char cVar7;
        uint uVar8;
        uint uVar9;
        uint uVar10;
        byte* pbVar11;
        CoordMapSquare* this_00;
        CommandLine* this_01;
        undefined4* puVar12;
        int* piVar13;
        uint* puVar14;
        uint uVar15;
        uint uVar16;
        undefined4 uVar17;
        ulong uVar18;
        ulong uVar19;
        uint uVar20;
        char cVar21;
        uint uVar22;
        int iVar23;
        int iVar24;
        GUIManager* pGVar25;
        undefined4 in_register_00000084;
        ulong uVar26;
        uint uVar27;
        int iVar28;
        int iVar29;
        int local_a0;
        uint local_9c;
        uint local_98;
        uint local_94;
        uint local_90;
        uint local_8c;
        WorldMap* local_88;
        int local_7c;
        ulong local_78;
        ulong local_70;
        int local_64;
        ulong local_60;
        ulong local_58;
        ulong local_50;
        int local_3c;
        undefined4 local_38;
        undefined4 local_34;

        local_78 = CONCAT44(in_register_00000084, param_4);
        local_a0 = 10;
        iVar24 = param_4 + 3;
        if (-1 < param_4) {
            iVar24 = param_4;
        }
        local_9c = iVar24 >> 2;
        pbVar11 = (byte*)std::min<int>(&local_a0, (int*)&local_9c);
        local_60 = (ulong)*pbVar11;
        local_a0 = 1;
        local_9c = (uint)(*pbVar11 >> 2);
        pbVar11 = (byte*)std::max<int>(&local_a0, (int*)&local_9c);
        local_50 = (ulong)*pbVar11;
        this_00 = (CoordMapSquare*)field_24->GetWorldMapDefaults();
        local_38 = this_00->GetZ();
        this_01 = (CommandLine*)field_24->GetWorldMapDefaults();
        local_34 = this_01->GetPos();
        local_58 = (ulong)(uint)param_2;
        if (param_6 < field_228 + -1) {
            uVar8 = IsF2PZone(this, param_5, param_6 + 1);
        } else {
            uVar8 = 0;
        }
        if ((param_5 < field_224 + -1) && (param_6 < field_228 + -1)) {
            bVar4 = IsF2PZone(this, param_5 + 1, param_6 + 1);
        } else {
            bVar4 = 0;
        }
        if (param_5 < field_224 + -1) {
            local_90 = IsF2PZone(this, param_5 + 1, param_6);
        } else {
            local_90 = 0;
        }
        uVar20 = (uVar8 & 255) + (uint)bVar4 * 2 + (local_90 & 255) * 4;
        bVar5 = 0;
        if ((param_5 < field_224 + -1) && (0 < param_6)) {
            bVar5 = IsF2PZone(this, param_5 + 1, param_6 + -1);
        }
        if (param_6 < 1) {
            local_94 = 0;
        } else {
            local_94 = IsF2PZone(this, param_5, param_6 + -1);
        }
        uVar15 = uVar20 + (uint)bVar5 * 8;
        uVar22 = (local_94 & 255) << 4;
        uVar9 = 0;
        local_8c = uVar8;
        if ((0 < param_5) && (0 < param_6)) {
            uVar9 = IsF2PZone(this, param_5 + -1, param_6 + -1);
        }
        uVar8 = uVar15 | uVar22;
        if (param_5 < 1) {
            uVar10 = 0;
        } else {
            uVar10 = IsF2PZone(this, param_5 + -1, param_6);
        }
        uVar18 = local_58;
        uVar9 = (uVar9 & 255) << 5 | uVar8;
        if ((param_5 < 1) || (field_228 + -1 <= param_6)) {
            bVar6 = 0;
        } else {
            bVar6 = IsF2PZone(this, param_5 + -1, param_6 + 1);
        }
        pGVar25 = param_1;
        uVar19 = local_60;
        uVar16 = (uVar10 & 255) << 6 | uVar9;
        uVar10 = (uint)bVar6 << 7 | uVar16;
        iVar24 = (int)local_78;
        if (uVar10 == 0) {
            iVar24 = param_3 - iVar24;
            uVar18 = uVar18 & 4294967295;
            uVar19 = local_78;
        } else {
            iVar23 = (int)local_60;
            local_64 = (int)uVar18 + iVar23;
            uVar27 = param_3 - iVar24;
            uVar18 = (ulong)uVar27;
            iVar29 = iVar24 + iVar23 * -2;
            local_98 = uVar16;
            local_88 = this;
            param_1->AddColouredRectangle(local_64, uVar18, iVar29, local_78 & 4294967295, local_38, 1);
            uVar17 = local_38;
            local_78 = (ulong)(uint)(iVar24 + (int)local_58);
            local_3c = (iVar24 + (int)local_58) - iVar23;
            iVar23 = uVar27 + iVar23;
            pGVar25->AddColouredRectangle(local_3c, iVar23, uVar19 & 4294967295, iVar29, local_38, 1);
            local_7c = iVar23;
            param_1->AddColouredRectangle(local_58, iVar23, uVar19 & 4294967295, iVar29, uVar17, 1);
            uVar19 = local_50;
            iVar24 = (int)local_50;
            if ((char)local_8c != '\0') {
                param_1->AddColouredRectangle(local_64, uVar18, iVar29, local_50 & 4294967295, local_34, 1);
            }
            if ((char)local_90 != '\0') {
                param_1->AddColouredRectangle((int)local_78 - iVar24, local_7c, uVar19 & 4294967295, iVar29, local_34,
                                              1);
            }
            iVar23 = local_3c;
            uVar26 = local_58;
            if ((byte)local_94 != '\0') {
                param_1->AddColouredRectangle(local_64, param_3 - iVar24, iVar29, uVar19 & 4294967295, local_34, 1);
            }
            if ((local_98 & 64) != 0) {
                param_1->AddColouredRectangle(uVar26 & 4294967295, local_7c, uVar19 & 4294967295, iVar29, local_34, 1);
            }
            pGVar25 = param_1;
            uVar2 = local_60;
            pWVar3 = local_88;
            local_70 = uVar18;
            if ((uVar10 & 193) == 0) {
                param_1->AddColouredRectangle(uVar26 & 4294967295, uVar18, local_60, local_60 & 4294967295, local_38,
                                              1);
                if (uVar20 == 0)
                    goto LAB_1003cc649;
            LAB_1003cc746:
                uVar19 = local_60;
                pWVar3 = local_88;
                if ((uVar20 & 4294967293) == 5) {
                    puVar1 = &local_88->field_4080;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 0);
                    *piVar13 = iVar23;
                    puVar12 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 1);
                    *puVar12 = (int)uVar18;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 2);
                    iVar29 = (int)local_78;
                    *piVar13 = iVar29;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 3);
                    iVar24 = local_7c;
                    *piVar13 = local_7c;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 4);
                    *piVar13 = local_3c;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 5);
                    *piVar13 = iVar24;
                    graphics::GUIManager::AddColouredTriangleList(param_1, puVar1, &pWVar3->field_4112, local_38, 1, 1);
                    puVar1 = &pWVar3->field_4144;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 0);
                    *piVar13 = local_3c;
                    puVar12 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 1);
                    *puVar12 = (int)local_70;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 2);
                    *piVar13 = iVar29;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 3);
                    iVar23 = local_3c;
                    *piVar13 = iVar24;
                    iVar28 = (int)local_50;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 4);
                    pGVar25 = param_1;
                    *piVar13 = iVar29 - iVar28;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 5);
                    *piVar13 = local_7c;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 6);
                    *piVar13 = iVar23;
                    iVar24 = (int)local_70;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 7);
                    *piVar13 = iVar24 + iVar28;
                    graphics::GUIManager::AddColouredTriangleList(pGVar25, puVar1, &local_88->field_4176, local_34, 1,
                                                                  1);
                    iVar29 = param_3;
                } else {
                    if ((bVar4 & (uVar20 & 4294967293) == 0) == 1) {
                        pGVar25->AddColouredRectangle(iVar23, uVar18 & 4294967295, local_60, local_60 & 4294967295,
                                                      local_38, 1);
                        uVar19 = local_50;
                        iVar24 = (int)local_78 - (int)local_50;
                        uVar17 = local_34;
                        goto LAB_1003cc90e;
                    }
                    cVar21 = (char)local_8c;
                    cVar7 = (char)local_90;
                    pGVar25->AddColouredRectangle(iVar23, uVar18 & 4294967295, local_60 & 4294967295,
                                                  local_60 & 4294967295, local_38, 1);
                    iVar29 = param_3;
                    if (cVar21 == '\x01' && cVar7 == '\0') {
                        uVar18 = uVar19 & 4294967295;
                        uVar19 = local_50;
                        iVar24 = iVar23;
                    } else {
                        uVar18 = local_50;
                        uVar19 = uVar19 & 4294967295;
                        iVar24 = (int)local_78 - (int)local_50;
                    }
                    pGVar25->AddColouredRectangle(iVar24, local_70, uVar18, uVar19, local_34, 1);
                }
            } else {
                if ((local_98 & 4294967233) == 65) {
                    puVar1 = &local_88->field_4080;
                    puVar12 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 0);
                    *puVar12 = (int)uVar26;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 1);
                    iVar28 = local_7c;
                    *piVar13 = local_7c;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 2);
                    iVar24 = local_64;
                    *piVar13 = local_64;
                    puVar14 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 3);
                    *puVar14 = uVar27;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 4);
                    *piVar13 = iVar24;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 5);
                    *piVar13 = iVar28;
                    graphics::GUIManager::AddColouredTriangleList(param_1, puVar1, &pWVar3->field_4112, local_38, 1, 1);
                    puVar1 = &pWVar3->field_4144;
                    puVar12 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 0);
                    *puVar12 = (int)local_58;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 1);
                    *piVar13 = iVar28;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 2);
                    *piVar13 = iVar24;
                    puVar12 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 3);
                    *puVar12 = (int)local_70;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 4);
                    *piVar13 = iVar24;
                    iVar24 = (int)local_50;
                    iVar29 = (int)local_70;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 5);
                    iVar23 = local_3c;
                    *piVar13 = iVar24 + iVar29;
                    iVar29 = (int)local_58;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 6);
                    *piVar13 = iVar24 + iVar29;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 7);
                    pGVar25 = param_1;
                    uVar18 = local_70;
                    *piVar13 = iVar28;
                    graphics::GUIManager::AddColouredTriangleList(param_1, puVar1, &local_88->field_4176, local_34, 1,
                                                                  1);
                } else if (((char)uVar10 < '\0') && ((local_98 & 4294967233) == 0)) {
                    param_1->AddColouredRectangle(uVar26 & 4294967295, uVar18, local_60, local_60 & 4294967295,
                                                  local_38, 1);
                    iVar23 = local_3c;
                    pGVar25->AddColouredRectangle(uVar26 & 4294967295, uVar18, uVar19 & 4294967295, uVar19 & 4294967295,
                                                  local_34, 1);
                } else {
                    bVar6 = (local_98 & 64) == 0 & (byte)local_8c;
                    param_1->AddColouredRectangle(uVar26 & 4294967295, uVar18, local_60 & 4294967295,
                                                  local_60 & 4294967295, local_38, 1);
                    uVar18 = uVar19;
                    if (bVar6 == 1) {
                        uVar18 = uVar2;
                        uVar2 = uVar19;
                    }
                    pGVar25->AddColouredRectangle(uVar26 & 4294967295, local_70, uVar18 & 4294967295,
                                                  uVar2 & 4294967295, local_34, 1);
                    uVar18 = local_70;
                    iVar23 = local_3c;
                }
                if (uVar20 != 0)
                    goto LAB_1003cc746;
            LAB_1003cc649:
                uVar19 = local_60;
                iVar24 = iVar23;
                uVar17 = local_38;
            LAB_1003cc90e:
                pGVar25->AddColouredRectangle(iVar24, uVar18 & 4294967295, uVar19, uVar19 & 4294967295, uVar17, 1);
                iVar29 = param_3;
            }
            uVar18 = local_60;
            iVar24 = (int)local_60;
            if ((uVar8 & 28) == 0) {
                iVar24 = iVar29 - iVar24;
                uVar18 = local_60 & 4294967295;
                uVar19 = local_60;
                uVar17 = local_38;
            LAB_1003ccbff:
                pGVar25->AddColouredRectangle(iVar23, iVar24, uVar19, uVar18, uVar17, 1);
            } else {
                uVar22 = uVar15 & 4294967284 | uVar22;
                if (uVar22 != 20) {
                    if ((bVar5 & uVar22 == 0) == 1) {
                        pGVar25->AddColouredRectangle(iVar23, iVar29 - iVar24, local_60, local_60 & 4294967295,
                                                      local_38, 1);
                        iVar24 = iVar29 - (int)local_50;
                        uVar19 = local_50;
                        uVar18 = local_50 & 4294967295;
                        iVar23 = (int)local_78 - (int)local_50;
                    } else {
                        cVar7 = (char)local_94;
                        cVar21 = (char)local_90;
                        iVar24 = iVar29 - iVar24;
                        pGVar25->AddColouredRectangle(iVar23, iVar24, local_60 & 4294967295, local_60 & 4294967295,
                                                      local_38, 1);
                        if (cVar21 == '\0' && cVar7 == '\x01') {
                            iVar24 = iVar29 - (int)local_50;
                            uVar19 = uVar18 & 4294967295;
                            uVar18 = local_50;
                            iVar23 = local_3c;
                        } else {
                            uVar19 = local_50;
                            uVar18 = uVar18 & 4294967295;
                            iVar23 = (int)local_78 - (int)local_50;
                        }
                    }
                    uVar17 = local_34;
                    goto LAB_1003ccbff;
                }
                puVar1 = &local_88->field_4080;
                puVar12 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)puVar1, 0);
                uVar17 = (undefined4)local_78;
                *puVar12 = uVar17;
                iVar28 = iVar29 - (int)local_60;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 1);
                *piVar13 = iVar28;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 2);
                *piVar13 = iVar23;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 3);
                *piVar13 = iVar29;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 4);
                *piVar13 = iVar23;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 5);
                *piVar13 = iVar28;
                graphics::GUIManager::AddColouredTriangleList(param_1, puVar1, &local_88->field_4112, local_38, 1, 1);
                puVar1 = &local_88->field_4144;
                puVar12 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)puVar1, 0);
                *puVar12 = uVar17;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 1);
                *piVar13 = iVar28;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 2);
                *piVar13 = iVar23;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 3);
                *piVar13 = param_3;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 4);
                *piVar13 = iVar23;
                iVar23 = (int)local_50;
                iVar24 = param_3 - iVar23;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 5);
                pGVar25 = param_1;
                *piVar13 = iVar24;
                iVar24 = (int)local_78;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 6);
                *piVar13 = iVar24 - iVar23;
                piVar13 =
                    (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar1, 7);
                iVar29 = param_3;
                *piVar13 = iVar28;
                graphics::GUIManager::AddColouredTriangleList(pGVar25, puVar1, &local_88->field_4176, local_34, 1, 1);
            }
            uVar18 = local_58;
            uVar26 = local_60;
            pWVar3 = local_88;
            iVar24 = (int)local_60;
            if ((local_98 & 112) != 0) {
                if ((local_98 & 4294967248) == 80) {
                    puVar1 = &local_88->field_4080;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 0);
                    *piVar13 = local_64;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 1);
                    *piVar13 = iVar29;
                    puVar12 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 2);
                    *puVar12 = (int)local_58;
                    iVar24 = iVar29 - iVar24;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 3);
                    *piVar13 = iVar24;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 4);
                    iVar23 = local_64;
                    *piVar13 = local_64;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 5);
                    *piVar13 = iVar24;
                    graphics::GUIManager::AddColouredTriangleList(param_1, puVar1, &pWVar3->field_4112, local_38, 1, 1);
                    puVar1 = &pWVar3->field_4144;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 0);
                    *piVar13 = iVar23;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 1);
                    *piVar13 = iVar29;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 2);
                    iVar23 = (int)local_58;
                    *piVar13 = iVar23;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 3);
                    *piVar13 = iVar24;
                    iVar28 = (int)local_50;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 4);
                    *piVar13 = iVar23 + iVar28;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 5);
                    *piVar13 = iVar24;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 6);
                    *piVar13 = local_64;
                    piVar13 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)puVar1, 7);
                    *piVar13 = iVar29 - iVar28;
                    graphics::GUIManager::AddColouredTriangleList(param_1, puVar1, &local_88->field_4176, local_34, 1,
                                                                  1);
                    return;
                }
                if (((uVar9 & 32) == 0) || ((local_98 & 4294967248) != 0)) {
                    bVar4 = (local_98 & 64) == 0 & (byte)local_94;
                    iVar24 = iVar29 - iVar24;
                    pGVar25->AddColouredRectangle(local_58, iVar24, local_60 & 4294967295, local_60 & 4294967295,
                                                  local_38, 1);
                    uVar18 = local_58;
                    if (bVar4 == 1) {
                        iVar24 = iVar29 - (int)local_50;
                        uVar19 = uVar26 & 4294967295;
                        uVar26 = local_50;
                    } else {
                        uVar26 = uVar26 & 4294967295;
                        uVar19 = local_50;
                    }
                } else {
                    pGVar25->AddColouredRectangle(local_58 & 4294967295, iVar29 - iVar24, local_60 & 4294967295,
                                                  local_60 & 4294967295, local_38, 1);
                    iVar24 = iVar29 - (int)local_50;
                    uVar19 = local_50;
                    uVar18 = uVar18 & 4294967295;
                    uVar26 = local_50 & 4294967295;
                }
                uVar17 = local_34;
                goto LAB_1003cce64;
            }
            iVar24 = iVar29 - iVar24;
            uVar19 = local_60;
        }
        uVar26 = uVar19 & 4294967295;
        uVar17 = local_38;
    LAB_1003cce64:
        pGVar25->AddColouredRectangle(uVar18, iVar24, uVar19, uVar26, uVar17, 1);
    }

    // 0x1003cce80, 256 bytes, placed by class name
    // WorldMap::RenderMapElements(graphics::GUIManager&, math::Rect<int>&, int, int, int, bool)
    void WorldMap::RenderMapElements(GUIManager* param_1, Rect* param_2, int param_3, int param_4, int param_5,
                                     bool param_6) {
        char cVar1;
        MapElementInstance* pMVar2;
        GUIManager* pGVar3;
        MapElementInstance* pMVar4;
        undefined1 local_60[16];
        char local_31;

        pGVar3 = (GUIManager*)&local_31;
        cVar1 = GetTypeDisabled(this, (bool*)pGVar3, 0);
        if ((cVar1 == '\0') || (local_31 == '\0')) {
            pMVar4 = (MapElementInstance*)(&field_88)->HeapBeginPtr();
            pMVar2 = (MapElementInstance*)(&field_88)->end();
            if (pMVar4 != pMVar2) {
                do {
                    new (local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pGVar3);
                    pGVar3 = (GUIManager*)local_60;
                    cVar1 =
                        ShouldRenderMapElementTypeCache(this, (shared_ptr*)local_60, *(int*)(pMVar4->field_20 + 12));
                    if (cVar1 == '\0') {
                        *(undefined1*)((long)&pMVar4->field_16 + 1) = 1;
                    } else {
                        *(undefined1*)((long)&pMVar4->field_16 + 1) = 0;
                        pGVar3 = param_1;
                        RenderMapElement(this, param_1, param_2, param_3, (uint)param_4, (uint)param_5,
                                         (shared_ptr*)local_60, pMVar4, param_6);
                    }
                    local_60->~shared_ptr();
                    pMVar4 = (MapElementInstance*)&pMVar4->field_36;
                } while (pMVar4 != pMVar2);
            }
        }
    }

    // 0x1003ccf80, 1120 bytes, placed by class name
    // WorldMap::MainDrawOverview(graphics::GUIManager&, math::Rect<int>&)
    void WorldMap::MainDrawOverview(GUIManager* param_1, Rect* param_2) {
        undefined1* puVar1;
        int iVar2;
        int iVar3;
        WorldMap* pWVar5;
        bool bVar6;
        uint* puVar8;
        int* piVar9;
        vector* pvVar10;
        undefined8 uVar11;
        float* pfVar12;
        long lVar13;
        long lVar14;
        MapElementType* pMVar15;
        int* piVar16;
        Rect* pRVar17;
        GridRect* this_00;
        int iVar18;
        int iVar19;
        uint uVar20;
        uint uVar21;
        type* ptVar22;
        float fVar23;
        float fVar24;
        undefined1* in_stack_ffffffffffffff48;
        undefined4 uVar25;
        undefined1 local_a0[32];
        undefined1 local_80[24];
        type* local_60;
        float local_58;
        float local_54;
        WorldMap* local_50;
        undefined1 local_44[12];
        ulong local_38;

        pRVar17 = param_2;
        param_1->AddColouredRectangle(param_2, 255, 1);
        if (field_56 == 8) {
            local_44._4_4_ = (float)(int)field_220 / (float)(int)field_216;
            puVar8 = (uint*)param_2->second();
            uVar20 = *puVar8;
            piVar9 = (int*)param_2->qw();
            if (1.0 <= (float)local_44._4_4_) {
                iVar19 = *piVar9;
                uVar20 = (uint)((float)iVar19 / (float)local_44._4_4_);
            } else {
                iVar19 = (int)((float)local_44._4_4_ * (float)(int)uVar20);
            }
            local_50 = this;
            pvVar10 = param_2->SSOBeginPtr(pRVar17);
            local_38 = CONCAT44(local_38._4_4_, *(int*)pvVar10);
            piVar9 = (int*)param_2->second();
            iVar2 = *piVar9;
            local_44._4_8_ = (ulong)uVar20;
            piVar9 = (int*)param_2->y();
            iVar18 = *piVar9;
            piVar9 = (int*)param_2->qw();
            iVar3 = *piVar9;
            new ((local_a0 + 16)) ImVec4(0.0, 1.0, 1.0, -1.0);
            puVar1 = local_50->field_4016;
            bVar6 = puVar1->operator_cast_to_bool();
            if (!bVar6) {
                LoadState_CompositeMap(local_50);
            }
            uVar21 = ((int)(iVar2 - uVar20) >> 1) + (int)local_38;
            ptVar22 = (type*)(ulong)uVar21;
            uVar20 = (iVar3 - iVar19 >> 1) + iVar18;
            bVar6 = puVar1->operator_cast_to_bool();
            local_38 = (ulong)uVar20;
            if (bVar6) {
                iVar2 = local_44._4_4_;
                iVar18 = uVar20 + iVar19;
                uVar11 = puVar1->end();
                in_stack_ffffffffffffff48 = local_a0 + 16;
                uVar20 = (uint)local_38;
                pRVar17 = (Rect*)ptVar22;
                param_1->AddElement(ptVar22, local_38, uVar21 + iVar2, iVar18, 4294967295, in_stack_ffffffffffffff48,
                                    uVar11, 1);
            }
            pWVar5 = local_50;
            puVar1 = &local_50->field_168;
            pvVar10 = puVar1->SSOBeginPtr(pRVar17);
            local_58 = (float)(int)local_44._4_4_;
            local_44._4_4_ = (int)((float)(int)uVar21 + *(float*)pvVar10 * local_58);
            local_60 = ptVar22;
            pfVar12 = (float*)puVar1->y();
            local_54 = (float)iVar19;
            fVar23 = *pfVar12 * local_54;
            pfVar12 = (float*)puVar1->second();
            fVar24 = *pfVar12 * local_58;
            pfVar12 = (float*)puVar1->qw();
            this_00 = (GridRect*)local_a0;
            oldscape::dash3d::GridRect::GridRect(this_00, local_44._4_4_, (int)((float)(int)uVar20 + fVar23),
                                                 (int)fVar24, (int)(*pfVar12 * local_54));
            param_1->AddColouredRectangle(this_00, 4278190216, 1);
            param_1->AddOutline(this_00, 1, 4278190216, 1);
            piVar9 = (int*)(&pWVar5->field_88)->HeapBeginPtr();
            local_44._4_8_ = (&pWVar5->field_88)->end();
            if (piVar9 != (int*)local_44._4_8_) {
                puVar1 = &local_50->field_600;
                local_80._16_8_ = &local_50->field_640;
                local_60 = (type*)(ulong)((int)local_60 - 2);
                local_38 = (ulong)((int)local_38 - 2);
                piVar9 = piVar9 + 8;
                do {
                    new (local_80) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(this_00);
                    this_00 = (GridRect*)local_80;
                    if (ShouldRenderMapElementTypeCache(local_50, (shared_ptr*)local_80, *piVar9) != '\0') {
                        lVar13 = puVar1->find(piVar9);
                        lVar14 = puVar1->end();
                        uVar25 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 32);
                        if (lVar13 == lVar14) {
                            pMVar15 = (MapElementType*)shared_ptr<MapElementType>::operator->(
                                (shared_ptr<MapElementType>*)local_80);
                            uVar11 = local_80._16_8_;
                            local_44._0_4_ = pMVar15->GetCategory();
                            this_00 = (GridRect*)local_44;
                            lVar13 = uVar11->find(this_00);
                            lVar14 = uVar11->end();
                            uVar25 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 32);
                            if (lVar13 == lVar14)
                                goto LAB_1003cd2f1;
                            pMVar15 = (MapElementType*)shared_ptr<MapElementType>::operator->(
                                (shared_ptr<MapElementType>*)local_80);
                            local_44._0_4_ = pMVar15->GetCategory();
                            lVar13 = eastl::vector_map<
                                int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>::
                            operator[](
                                (vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                                            eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>*)
                                    local_80._16_8_,
                                (int*)local_44);
                        } else {
                            lVar13 = eastl::vector_map<
                                int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>::
                            operator[](
                                (vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                                            eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>*)
                                    puVar1,
                                piVar9);
                        }
                        iVar19 = *(int*)(lVar13 + 4);
                        iVar2 = local_50->m_flashTicks;
                        iVar18 = iVar2 - iVar19;
                        if (iVar19 <= iVar2 >> 1) {
                            iVar18 = iVar19;
                        }
                        this_00 = (GridRect*)(ulong)(uint)((int)(((float)(uint)piVar9[-2] * local_58) /
                                                                 (float)(int)local_50->field_216) +
                                                           (int)local_60);
                        in_stack_ffffffffffffff48 = (undefined1*)CONCAT44(uVar25, 1);
                        param_1->AddColouredRectangle(
                            this_00,
                            (int)((1.0 - (float)(uint)piVar9[-1] / (float)(int)local_50->field_220) * local_54) +
                                (int)local_38,
                            4, 4, (iVar18 * 255) / iVar2 | 4294901760, in_stack_ffffffffffffff48);
                    }
                LAB_1003cd2f1:
                    local_80->~shared_ptr();
                    piVar16 = piVar9 + 1;
                    piVar9 = piVar9 + 9;
                } while (piVar16 != (int*)local_44._4_8_);
            }
        }
    }

    // 0x1003cd3e0, 96 bytes, placed by class name
    // WorldMap::ShouldRenderMapElementTypeCache(shared_ptr<MapElementType>&, int)
    bool WorldMap::ShouldRenderMapElementTypeCache(shared_ptr* param_1, int param_2) {
        char cVar1;
        bool bVar2;
        shared_ptr* psVar3;

        cVar1 = (&field_704)->empty();
        if (cVar1 == '\0') {
            bVar2 = false;
        } else {
            psVar3 = (shared_ptr*)Array<shared_ptr<MapElementType>, eastl::allocator>::operator[](
                (Array<shared_ptr<MapElementType>, eastl::allocator>*)&field_800, (long)param_2);
            shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)param_1, psVar3);
            bVar2 = operator!=(param_1, (_func_decltype_nullptr*)0);
        }
        return bVar2;
    }

    // 0x1003cd5a0, 48 bytes, placed by class name
    // WorldMap::StopCurrentFlashes()
    void WorldMap::StopCurrentFlashes() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1003cd5d0, 16 bytes, placed by class name
    // WorldMap::SetFlashPerpetual(bool)
    void WorldMap::SetFlashPerpetual(bool param_1) {
        m_flashPerpetual = param_1;
    }

    // 0x1003cd5e0, 16 bytes, placed by class name
    // WorldMap::SetFlashTicks(int)
    void WorldMap::SetFlashTicks(int param_1) {
        m_flashTicks = param_1;
    }

    // 0x1003cd5f0, 16 bytes, placed by class name
    // WorldMap::SetFlashLoops(int)
    void WorldMap::SetFlashLoops(int param_1) {
        m_flashLoops = param_1;
    }

    // 0x1003cd600, 64 bytes, placed by class name
    // WorldMap::JumpToTargetCoord(CoordGrid const&, bool)
    void WorldMap::JumpToTargetCoord(CoordGrid* param_1, bool param_2) {
        uint uVar1;
        uint uVar2;
        undefined3 in_register_00000011;

        uVar1 = param_1->field_4 - field_232;
        field_208 = uVar1;
        uVar2 = param_1->field_8 - field_236;
        field_212 = uVar2;
        if (CONCAT31(in_register_00000011, param_2) != 0) {
            field_200 = uVar1;
            field_204 = uVar2;
            CheckGridPosition(this);
        }
    }

    // 0x1003cd640, 224 bytes, placed by class name
    // WorldMap::FindNearestMapElement(CoordGrid&, int, CoordGrid const&) const
    int WorldMap::FindNearestMapElement(CoordGrid* param_1, int param_2, CoordGrid* param_3) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        undefined8 uVar5;
        int iVar6;
        long lVar7;
        long lVar8;
        int iVar9;
        int iVar10;

        iVar6 = -2;
        if (field_56 == 8) {
            uVar1 = param_3->field_4;
            uVar2 = param_3->field_8;
            uVar3 = field_232;
            uVar4 = field_236;
            lVar7 = (&field_88)->HeapBeginPtr();
            lVar8 = (&field_88)->end();
            iVar6 = 2147483647;
            for (; lVar7 != lVar8; lVar7 = lVar7 + 36) {
                if ((*(int*)(lVar7 + 32) == param_2) &&
                    (iVar10 = uVar1 - (*(int*)(lVar7 + 24) + uVar3), iVar9 = uVar2 - (*(int*)(lVar7 + 28) + uVar4),
                     iVar9 = iVar9 * iVar9 + iVar10 * iVar10, iVar9 < iVar6)) {
                    param_1->field_8 = *(uint*)(lVar7 + 28);
                    uVar5 = *(undefined8*)(lVar7 + 20);
                    param_1->field_0 = (int)uVar5;
                    param_1->field_4 = (int)((ulong)uVar5 >> 32);
                    iVar6 = iVar9;
                }
            }
            iVar6 = -(uint)(iVar6 == 2147483647);
        }
        return iVar6;
    }

    // 0x1003cd720, 32 bytes, placed by class name
    // WorldMap::GetMapElementListStart(PlayerVarDomain&)
    void WorldMap::GetMapElementListStart(PlayerVarDomain* param_1) {
        field_120 = -1;
        GetMapElementListNext(this, param_1);
    }

    // 0x1003cd740, 208 bytes, placed by class name
    // WorldMap::GetMapElementListNext(PlayerVarDomain&)
    undefined1* WorldMap::GetMapElementListNext(PlayerVarDomain* param_1) {
        ConfigProvider* this_00;
        int iVar3;
        undefined8 in_RAX;
        long lVar4;
        shared_ptr* this_01;
        MapElementType* pMVar5;
        undefined* puVar6;
        undefined1* puVar7;
        int iVar8;
        bool local_31;

        local_31 = SUB81((ulong)in_RAX >> 56, 0);
        iVar8 = field_120 + 1;
        field_120 = iVar8;
        puVar7 = &field_88;
        iVar3 = puVar7->size();
        if (iVar8 < iVar3) {
            this_00 = field_24;
            lVar4 = eastl::vector<WorldMap::MapElementInstance, eastl::allocator>::operator[](
                (vector<WorldMap::MapElementInstance, eastl::allocator>*)puVar7, (long)field_120);
            this_01 = ConfigProvider::GetConfig<MapElementType>(this_00, *(int*)(lVar4 + 32), (DataStatus**)0);
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                pMVar5 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)this_01);
                if (pMVar5->GetListable() != '\0') {
                    pMVar5 =
                        (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)this_01);
                    puVar6 = (undefined*)pMVar5->VariableTest(&local_31, param_1, field_24);
                    if ((puVar6 == DataStatus::READY) && (local_31 != false)) {
                        puVar7 = (undefined1*)eastl::vector<WorldMap::MapElementInstance, eastl::allocator>::operator[](
                            (vector<WorldMap::MapElementInstance, eastl::allocator>*)puVar7, (long)field_120);
                        return puVar7;
                    }
                }
            }
            puVar7 = (undefined1*)GetMapElementListNext(this, param_1);
        } else {
            puVar7 = &DUMMY_MEL_INSTANCE;
        }
        return puVar7;
    }

    // 0x1003cd870, 128 bytes, placed by class name
    // WorldMap::SetMapElementDisabled(int, bool)
    void WorldMap::SetMapElementDisabled(int param_1, bool param_2) {
        int iVar1;
        undefined8 uVar2;

        if (-1 < param_1) {
            iVar1 = (&field_528)->end();
            if (param_1 < iVar1) {
                field_824 = 0;
                uVar2 = Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)&field_528,
                                                                  (long)param_1);
                *(bool*)uVar2 = param_2;
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("mapElementID >= 0 && mapElementID < (int)m_disabledMapElements.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/worldmap/"
                  "WorldMap.cpp",
                  1851, (char*)0);
    }

    // 0x1003cd8f0, 48 bytes, placed by class name
    // WorldMap::SetMapElementCategoryDisabled(int, bool)
    void WorldMap::SetMapElementCategoryDisabled(int param_1, bool param_2) {
        undefined8 uVar1;
        int local_14;

        field_824 = 0;
        uVar1 = eastl::map<int, bool, eastl::less<int>, eastl::allocator>::operator[](
            (map<int, bool, eastl::less<int>, eastl::allocator>*)&field_552, &local_14);
        *(bool*)uVar1 = param_2;
    }

    // 0x1003cd9d0, 64 bytes, placed by class name
    // WorldMap::SetMapElementFlashing(int)
    void WorldMap::SetMapElementFlashing(int param_1) {
        undefined4* puVar1;
        undefined4 in_register_0000003c;
        long lVar2;
        int local_14;

        lVar2 = CONCAT44(in_register_0000003c, param_1);
        puVar1 =
            (undefined4*)eastl::vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                                           eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>::
            operator[](
                (vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>*)(lVar2 + 600),
                &local_14);
        *puVar1 = *(undefined4*)(lVar2 + 688);
        puVar1[1] = *(undefined4*)(lVar2 + 684);
    }

    // 0x1003cda10, 64 bytes, placed by class name
    // WorldMap::SetMapElementCategoryFlashing(int)
    void WorldMap::SetMapElementCategoryFlashing(int param_1) {
        undefined4* puVar1;
        undefined4 in_register_0000003c;
        long lVar2;
        int local_14;

        lVar2 = CONCAT44(in_register_0000003c, param_1);
        puVar1 =
            (undefined4*)eastl::vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                                           eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>::
            operator[](
                (vector_map<int, WorldMap::FlashState, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, WorldMap::FlashState>, eastl::allocator>>*)(lVar2 + 640),
                &local_14);
        *puVar1 = *(undefined4*)(lVar2 + 688);
        puVar1[1] = *(undefined4*)(lVar2 + 684);
    }

    // 0x1003cda50, 64 bytes, placed by class name
    // WorldMap::SetTextSizeDisabled(int, bool)
    undefined8 WorldMap::SetTextSizeDisabled(int param_1, bool param_2) {
        field_824 = 0;
        if (param_1 == 2) {
            field_694 = param_2;
        } else if (param_1 == 1) {
            field_693 = param_2;
        } else {
            if (param_1 != 0) {
                return 0;
            }
            field_692 = param_2;
        }
        return 1;
    }

    // 0x1003cda90, 64 bytes, placed by class name
    // WorldMap::SetTypeDisabled(int, bool)
    undefined8 WorldMap::SetTypeDisabled(int param_1, bool param_2) {
        field_824 = 0;
        if (param_1 == 2) {
            field_697 = param_2;
        } else if (param_1 == 1) {
            field_696 = param_2;
        } else {
            if (param_1 != 0) {
                return 0;
            }
            field_695 = param_2;
        }
        return 1;
    }

    // 0x1003cdad0, 64 bytes, placed by class name
    // WorldMap::GetTextSizeDisabled(bool&, int) const
    undefined8 WorldMap::GetTextSizeDisabled(bool* param_1, int param_2) {
        bool* pbVar1;

        if (param_2 == 2) {
            pbVar1 = &field_694;
        } else if (param_2 == 1) {
            pbVar1 = &field_693;
        } else {
            if (param_2 != 0) {
                return 0;
            }
            pbVar1 = &field_692;
        }
        *param_1 = *pbVar1;
        return 1;
    }

    // 0x1003cdb10, 32 bytes, placed by class name
    // WorldMap::DoDragStart(int, int)
    void WorldMap::DoDragStart(int param_1, int param_2) {
        field_152 = field_200;
        field_156 = field_204;
        field_160 = param_1;
        field_164 = param_2;
    }

    // 0x1003cdb30, 304 bytes, placed by class name
    // WorldMap::DoDrag(int, int)
    void WorldMap::DoDrag(int param_1, int param_2) {
        int iVar1;
        uint uVar2;
        int* piVar3;
        uint* puVar4;
        float fVar5;
        float fVar6;
        int local_34[3];

        fVar5 = (float)ceil(field_248 * 4.0);
        iVar1 = field_164;
        fVar6 = 1.0 / (fVar5 * 0.125);
        fVar5 = (float)floor((float)(field_160 - param_1) * fVar6);
        fVar6 = (float)floor((float)(iVar1 - param_2) * fVar6);
        local_34[0] = (int)fVar5 + field_152;
        local_34[1] = 0;
        piVar3 = std::max<int>(local_34, local_34 + 1);
        local_34[2] = field_216 - 1;
        puVar4 = (uint*)std::min<int>(piVar3, local_34 + 2);
        uVar2 = *puVar4;
        field_208 = uVar2;
        field_200 = uVar2;
        local_34[0] = field_156 - (int)fVar6;
        local_34[1] = 0;
        piVar3 = std::max<int>(local_34, local_34 + 1);
        local_34[2] = field_220 - 1;
        puVar4 = (uint*)std::min<int>(piVar3, local_34 + 2);
        uVar2 = *puVar4;
        field_212 = uVar2;
        field_204 = uVar2;
        CheckGridPosition(this);
    }

    // 0x1003cdc60, 512 bytes, placed by class name
    // WorldMap::GetSourceCoordAtScreenPosition(CoordGrid&, int, int, math::Rect<int>)
    undefined8 WorldMap::GetSourceCoordAtScreenPosition(CoordGrid* param_1, int param_2, int param_3, Layout* param_5) {
        vector* pvVar1;
        int* piVar2;
        undefined8 uVar3;
        int iVar4;
        int iVar5;
        float fVar6;
        float fVar7;
        float extraout_XMM0_Dc;
        float extraout_XMM0_Dd;
        CoordGrid local_88;
        float local_78;
        float fStack_74;
        float fStack_70;
        float fStack_6c;
        undefined8 local_58;
        float fStack_50;
        float fStack_4c;
        float local_38;
        float local_34;

        local_58 = ceil(field_248 * 4.0);
        local_34 = (float)(int)field_200 * 0.125;
        local_38 = (float)(int)field_204;
        fStack_50 = extraout_XMM0_Dc;
        fStack_4c = extraout_XMM0_Dd;
        pvVar1 = eastl::string::Layout::SSOBeginPtr(param_5, (type*)param_1);
        iVar5 = *(int*)pvVar1;
        piVar2 = (int*)param_5->second();
        local_78 = (float)(int)(float)local_58;
        fStack_74 = (float)(int)local_58._4_4_;
        fStack_70 = (float)(int)fStack_50;
        fStack_6c = (float)(int)fStack_4c;
        iVar5 = (int)((float)*piVar2 * 0.5 - local_34 * local_78) + iVar5;
        piVar2 = (int*)param_5->y();
        iVar4 = *piVar2;
        piVar2 = (int*)param_5->qw();
        uVar3 = 0;
        if (iVar5 <= param_2) {
            iVar4 = iVar4 + (int)((local_38 * 0.125 + 0.0625) * local_78 + (float)*piVar2 * 0.5);
            if (((param_3 <= iVar4) &&
                 (param_2 <= (int)((float)(int)field_216 * 0.125) * (int)(float)local_58 + iVar5)) &&
                (iVar4 - (int)((float)(int)field_220 * 0.125) * (int)(float)local_58 <= param_3)) {
                local_58._0_4_ = (float)(iVar4 - param_3);
                local_34 = (1.0 / local_78) * 8.0;
                fVar6 = (float)floor((float)(param_2 - iVar5) * local_34 + 0.5);
                fVar7 = (float)floor(local_34 * (float)local_58 + 0.5);
                new (&local_88)
                    oldscape::rs2lib::worldmap::LocationData(0, (int)fVar6 + field_232, (int)fVar7 + field_236);
                uVar3 = (field_512, param_1, &local_88)->GetSourceCoord();
            }
        }
        return uVar3;
    }

    // 0x1003cde60, 3808 bytes, placed by class name
    // WorldMap::RenderMapElement(graphics::GUIManager&, math::Rect<int>&, int, int, int, shared_ptr<MapElementType>&, WorldMap::MapElementInstance&, bool)
    void WorldMap::RenderMapElement(GUIManager* param_1, Rect* param_2, int param_3, int param_4, int param_5,
                                    shared_ptr* param_6, MapElementInstance* param_7, bool param_8) {
        undefined1* puVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        FontHelpers* this_00;
        FlashState* this_01;
        char cVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        MapElementType* pMVar12;
        long lVar13;
        int* piVar14;
        MSIType* pMVar15;
        shared_ptr* psVar16;
        SpriteAtlasReference* pSVar17;
        WaterType* pWVar18;
        NXTRenderCanvas* this_02;
        undefined4* puVar19;
        undefined8 uVar20;
        vector<eastl::pair<int, int>, eastl::allocator>* pvVar21;
        CoordMapSquare* pCVar22;
        uint* puVar23;
        ulong uVar24;
        GameToken* this_03;
        long lVar25;
        Model* pMVar26;
        AnimationParameters* pAVar27;
        AchievementType* pAVar28;
        Option<option::EnumBrightness>* this_04;
        Histogram<unsigned int, 30>* pHVar29;
        HitmarkType* this_05;
        int iVar31;
        ulong uVar32;
        int iVar33;
        uint uVar34;
        WorldMap* pWVar35;
        ulong uVar36;
        StringView SVar37;
        StringView SVar38;
        StringView SVar39;
        undefined8 in_stack_fffffffffffffe88;
        undefined8 in_stack_fffffffffffffe90;
        TextProperties* in_stack_fffffffffffffe98;
        undefined1 auStack_15e[6];
        StringView local_158;
        StringView local_148;
        optional<unsigned int> local_138[8];
        vector<eastl::pair<int, int>, eastl::allocator>* local_130;
        vector<eastl::pair<int, int>, eastl::allocator>* local_128;
        undefined4 local_11c;
        uchar* local_118;
        ulong local_110;
        undefined8 local_108;
        shared_ptr local_100;
        undefined8 local_f0;
        uint local_e8;
        int local_e4;
        uint local_e0;
        int local_dc;
        TextProperties local_d8;
        ulong local_b0;
        shared_ptr local_a8;
        int local_94;
        ulong local_90;
        uint local_84;
        FlashState* local_78;
        WorldMap* local_70;
        ulong local_68;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        char* local_50;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_78 = (FlashState*)param_2;
        local_70 = this;
        if (((field_4032 != false) && (param_8)) &&
            (cVar4 = IsF2PTile(this, *(int*)(param_7->field_20 + 4), *(int*)(param_7->field_20 + 8)), cVar4 == '\0')) {
            return;
        }
        uVar34 = ((uint)(*(int*)(param_7->field_20 + 4) * param_5) >> 3) + param_3;
        iVar33 = param_4 - ((uint)(*(int*)(param_7->field_20 + 8) * param_5) >> 3);
        local_40 = 2147483647;
        local_3c = -2147483648;
        local_38 = 2147483647;
        local_34 = -2147483648;
        pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
        lVar13 = pMVar12->GetPolygon();
        if (lVar13 != 0) {
            pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            lVar13 = pMVar12->GetPolygon();
            local_d8.m_pFont._0_4_ = (*(int*)(lVar13 + 32) * param_5 >> 12) + uVar34;
            local_a8._0_4_ = (*(int*)(lVar13 + 40) * param_5 >> 12) + uVar34;
            local_100._0_4_ = iVar33 - (*(int*)(lVar13 + 44) * param_5 >> 12);
            local_50 = (char*)CONCAT44(local_50._4_4_, iVar33 - (*(int*)(lVar13 + 36) * param_5 >> 12));
            piVar14 = std::min<int>(&local_40, (int*)&local_d8);
            local_40 = *piVar14;
            piVar14 = std::max<int>(&local_3c, (int*)&local_a8);
            local_3c = *piVar14;
            piVar14 = std::min<int>(&local_38, (int*)&local_100);
            local_38 = *piVar14;
            piVar14 = std::max<int>(&local_34, (int*)&local_50);
            local_34 = *piVar14;
        }
        local_90 = CONCAT44(local_90._4_4_, param_5);
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        local_b0 = (ulong)uVar34;
        local_44 = iVar33;
        pMVar15 = (MSIType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
        iVar33 = pMVar15->GetSpriteID();
        if (iVar33 == -1) {
            new (&local_a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            iVar33 = (int)local_b0;
            pWVar35 = local_70;
        } else {
            pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            pWVar35 = local_70;
            psVar16 = (shared_ptr*)pMVar12->GetSprite(local_70->field_8, *(bool*)&param_7->field_16);
            new (&local_a8) shared_ptr<oldscape::dash3d::Decor>(psVar16);
            iVar33 = (int)local_b0;
        }
        this_01 = local_78;
        bVar5 = shared_ptr::operator_cast_to_bool(&local_a8);
        iVar31 = 0;
        local_68 = 0;
        if (bVar5) {
            pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)&local_a8);
            local_68 = pSVar17->GetWidth();
            pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)&local_a8);
            iVar6 = pSVar17->GetHeight();
            pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)&local_a8);
            pSVar17->GetTotalWidth();
            pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)&local_a8);
            iVar31 = pSVar17->GetTotalHeight();
            pWVar18 = (WaterType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            iVar7 = pWVar18->GetEmissiveMapMaterialID();
            if (iVar7 == 0) {
                local_5c = (int)local_68 + iVar33;
                local_60 = iVar33;
            } else if (iVar7 == 1) {
                local_60 = iVar33 - ((int)local_68 + 1 >> 1);
                local_5c = local_60 + (int)local_68;
            } else if (iVar7 == 2) {
                local_60 = iVar33 - (int)local_68;
                local_5c = iVar33;
            }
            pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            iVar7 = pMVar12->GetVAlign();
            if (iVar7 == 2) {
                local_58 = local_44 - iVar6;
                local_54 = local_44;
            } else if (iVar7 == 1) {
                local_58 = local_44 - (iVar6 + 1 >> 1);
                local_54 = local_58 + iVar6;
            } else if (iVar7 == 0) {
                local_58 = local_44;
                local_54 = iVar6 + local_44;
            }
            piVar14 = std::min<int>(&local_40, &local_60);
            local_40 = *piVar14;
            piVar14 = std::max<int>(&local_3c, &local_5c);
            local_3c = *piVar14;
            piVar14 = std::min<int>(&local_38, &local_58);
            local_38 = *piVar14;
            piVar14 = std::max<int>(&local_34, &local_54);
            local_34 = *piVar14;
        }
        local_e8 = 0;
        local_e4 = 0;
        local_e0 = 0;
        local_dc = 0;
        pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
        lVar13 = pMVar12->GetText();
        if (lVar13 == 0) {
            new (&local_100) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            this_02 = (NXTRenderCanvas*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            iVar6 = this_02->GetLastNumVerts();
            psVar16 = (shared_ptr*)GetLabelFont(pWVar35, iVar6);
            new (&local_100) shared_ptr<oldscape::dash3d::Decor>(psVar16);
        }
        local_94 = iVar31;
        bVar5 = shared_ptr::operator_cast_to_bool(&local_100);
        uVar20 = 0;
        local_f0 = 0;
        local_110 = 0;
        local_118 = (uchar*)0;
        if (bVar5) {
            new (&local_d8) graphics::TextProperties(&local_100);
            pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            local_50 = (char*)pMVar12->GetText();
            StringView::StringView<char const*>((StringView*)(auStack_15e + -10), &local_50);
            puVar19 = (undefined4*)this_01->second();
            SVar38.field_8._0_4_ = *puVar19;
            SVar38.field_0 = (ulong)(auStack_15e + -10);
            SVar38.field_8._4_4_ = 0;
            uVar20 = graphics::FontHelpers::PredictHeightAndLines(SVar38, (int)&local_d8, (TextProperties*)0);
            pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            local_50 = (char*)pMVar12->GetText();
            StringView::StringView<char const*>(&local_158, &local_50);
            puVar19 = (undefined4*)this_01->second();
            SVar39.field_8._0_4_ = *puVar19;
            SVar39.field_0 = (ulong)&local_158;
            SVar39.field_8._4_4_ = 0;
            local_f0 = graphics::FontHelpers::PredictWidthMultiLine(SVar39, (int)&local_d8, (TextProperties*)0);
            pMVar15 = (MSIType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            iVar6 = (int)local_f0;
            uVar34 = iVar33 - (iVar6 >> 1);
            iVar31 = pMVar15->GetSpriteID();
            local_dc = (int)uVar20;
            iVar33 = local_dc >> 1;
            if (iVar31 != -1) {
                iVar33 = (local_94 >> 1) + local_dc;
            }
            local_e0 = local_44 - iVar33;
            local_110 = (ulong)local_e0;
            local_e4 = iVar6 + uVar34;
            local_dc = local_e0 + local_dc;
            local_118 = (uchar*)(ulong)uVar34;
            local_e8 = uVar34;
            piVar14 = std::min<int>(&local_40, (int*)&local_e8);
            local_40 = *piVar14;
            piVar14 = std::max<int>(&local_3c, &local_e4);
            local_3c = *piVar14;
            piVar14 = std::min<int>(&local_38, (int*)&local_e0);
            local_38 = *piVar14;
            piVar14 = std::max<int>(&local_34, &local_dc);
            local_34 = *piVar14;
        }
        local_108 = uVar20;
        new (param_7) oldscape::dash3d::GridRect(local_40, local_38, local_3c - local_40, local_34 - local_38);
        cVar4 = this_01->Excludes(param_7);
        if (cVar4 != '\0')
            goto LAB_1003cec9d;
        pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
        lVar13 = pMVar12->GetPolygon();
        if (lVar13 != 0) {
            pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            pvVar21 = (vector<eastl::pair<int, int>, eastl::allocator>*)pMVar12->GetPolygon();
            new (&local_d8) eastl::vector<int, eastl::allocator>();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar21);
            eastl::vector<int, eastl::allocator>::resize((ulong)&local_d8);
            lVar13 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar21);
            if (lVar13 != 0) {
                uVar32 = 0;
                uVar24 = 0;
                uVar36 = 1;
                do {
                    pCVar22 = (CoordMapSquare*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                        (vector<math::Point<int>, eastl::allocator>*)pvVar21, uVar24);
                    iVar33 = pCVar22->GetX();
                    local_50 = (char*)CONCAT44(local_50._4_4_, (iVar33 * (int)local_90 >> 12) + (int)local_b0);
                    pCVar22 = (CoordMapSquare*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                        (vector<math::Point<int>, eastl::allocator>*)pvVar21, uVar24);
                    iVar33 = pCVar22->GetZ();
                    local_84 = local_44 - (iVar33 * (int)local_90 >> 12);
                    piVar14 = std::min<int>(&local_40, (int*)&local_50);
                    local_40 = *piVar14;
                    piVar14 = std::max<int>(&local_3c, (int*)&local_50);
                    local_3c = *piVar14;
                    piVar14 = std::min<int>(&local_38, (int*)&local_84);
                    local_38 = *piVar14;
                    piVar14 = std::max<int>(&local_34, (int*)&local_84);
                    local_34 = *piVar14;
                    uVar8 = local_50._0_4_;
                    puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)&local_d8, uVar32);
                    uVar34 = local_84;
                    *puVar19 = uVar8;
                    puVar23 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)&local_d8, (ulong)((int)uVar32 + 1));
                    uVar32 = (ulong)((int)uVar32 + 2);
                    *puVar23 = uVar34;
                    uVar24 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar21);
                    bVar5 = uVar36 < uVar24;
                    uVar24 = uVar36;
                    uVar36 = (ulong)((int)uVar36 + 1);
                } while (bVar5);
            }
            graphics::GUIManager::AddColouredTriangleList(param_1, &local_d8, pvVar21 + 112,
                                                          *(undefined4*)(pvVar21 + 48), 1, 1);
            param_1->Render(0);
            local_78 = (FlashState*)(pvVar21 + 88);
            local_128 = pvVar21 + 64;
            uVar24 = 1;
            local_130 = pvVar21;
            while (true) {
                uVar8 = (undefined4)((ulong)in_stack_fffffffffffffe88 >> 32);
                uVar9 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 32);
                iVar33 = (int)uVar24;
                uVar34 = iVar33 - 1;
                lVar13 = local_d8.size();
                if (lVar13 - 2U <= (ulong)uVar34)
                    break;
                puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)&local_d8, (ulong)uVar34);
                local_90 = CONCAT44(local_90._4_4_, *puVar19);
                puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)&local_d8, uVar24);
                uVar10 = *puVar19;
                puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)&local_d8, (ulong)(iVar33 + 1));
                uVar11 = *puVar19;
                uVar24 = (ulong)(iVar33 + 2);
                puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)&local_d8, uVar24);
                uVar2 = *puVar19;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_78,
                                                                         (ulong)(uVar34 >> 1));
                puVar19 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)local_128, (long)*piVar14);
                in_stack_fffffffffffffe90 = CONCAT44(uVar9, 1);
                in_stack_fffffffffffffe88 = CONCAT44(uVar8, 1);
                1065353216->AddGeneralLine(param_1, local_90 & 4294967295, uVar10, uVar11, uVar2, *puVar19,
                                           in_stack_fffffffffffffe88, in_stack_fffffffffffffe90);
            }
            lVar13 = local_d8.size();
            puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)&local_d8, lVar13 - 2);
            pvVar21 = local_130;
            uVar10 = *puVar19;
            lVar13 = local_d8.size();
            puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)&local_d8, lVar13 - 1);
            uVar11 = *puVar19;
            puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)&local_d8, 0);
            uVar2 = *puVar19;
            puVar19 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)&local_d8, 1);
            uVar3 = *puVar19;
            lVar13 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar21);
            piVar14 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_78, lVar13 - 1);
            puVar19 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                (Array<unsigned int, eastl::allocator>*)local_128, (long)*piVar14);
            in_stack_fffffffffffffe90 = CONCAT44(uVar9, 1);
            1065353216->AddGeneralLine(param_1, uVar10, uVar11, uVar2, uVar3, *puVar19, CONCAT44(uVar8, 1),
                                       in_stack_fffffffffffffe90);
            local_d8.~vector();
        }
        bVar5 = shared_ptr::operator_cast_to_bool(&local_a8);
        if (bVar5) {
            pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)&local_a8);
            cVar4 = pSVar17->IsReady();
            if (cVar4 != '\0') {
                pWVar18 = (WaterType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
                iVar33 = pWVar18->GetEmissiveMapMaterialID();
                if (iVar33 == 1) {
                    local_90 = (ulong)(uint)((int)local_68 >> 1);
                } else {
                    local_90 = 0;
                    if (iVar33 == 2) {
                        local_90 = local_68;
                    }
                }
                pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
                iVar33 = pMVar12->GetVAlign();
                if (iVar33 == 2) {
                    iVar31 = (int)local_68;
                } else {
                    iVar31 = 0;
                    if (iVar33 == 1) {
                        iVar31 = (int)local_68 >> 1;
                    }
                }
                this_03 = (GameToken*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
                puVar1 = &local_70->field_600;
                local_d8.m_pFont._0_4_ = this_03->GetStatus();
                lVar13 = puVar1->find((int*)&local_d8);
                lVar25 = puVar1->end();
                if (lVar13 == lVar25) {
                    pMVar12 =
                        (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
                    puVar1 = &local_70->field_640;
                    uVar8 = pMVar12->GetCategory();
                    local_50 = (char*)CONCAT44(local_50._4_4_, uVar8);
                    lVar13 = puVar1->find((int*)&local_50);
                    lVar25 = puVar1->end();
                    if (lVar13 != lVar25)
                        goto LAB_1003ce858;
                    local_78 = (FlashState*)0;
                } else {
                LAB_1003ce858:
                    local_78 = (FlashState*)(lVar13 + 4);
                }
                uVar8 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 32);
                if (local_78 != (FlashState*)0) {
                    pMVar26 = (Model*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
                    iVar33 = pMVar26->GetModelRawUniqueID();
                    uVar8 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 32);
                    if (iVar33 == -1) {
                        uVar9 = local_78->GetFlashColourRGBA(local_70->m_flashTicks);
                        iVar33 = -1;
                        do {
                            local_d8.m_pFont._0_4_ = 0;
                            local_50 = (char*)CONCAT44(local_50._4_4_, iVar33);
                            piVar14 = std::max<int>((int*)&local_d8, (int*)&local_50);
                            iVar6 = *piVar14;
                            iVar7 = (int)local_68 + iVar6 * 2;
                            param_1->AddColouredRectangle((int)local_b0 - ((int)local_90 + iVar6),
                                                          (local_44 - iVar31) - iVar6, iVar7, iVar7, uVar9, 1);
                            uVar8 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 32);
                            iVar33 = iVar33 + 2;
                        } while (iVar33 != 9);
                    }
                }
                uVar20 = CONCAT44(uVar8, 1);
                param_1->AddSprite(local_60, local_58, local_5c - local_60, local_54 - local_58, 4294967295, &local_a8,
                                   uVar20);
                uVar8 = (undefined4)((ulong)uVar20 >> 32);
                if (local_78 != (FlashState*)0) {
                    pMVar26 = (Model*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
                    iVar33 = pMVar26->GetModelRawUniqueID();
                    if (iVar33 != -1) {
                        pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->(
                            (shared_ptr<MapElementType>*)param_6);
                        psVar16 = (shared_ptr*)pMVar12->GetFlashSprite(local_70->field_8);
                        bVar5 = shared_ptr::operator_cast_to_bool(psVar16);
                        if (bVar5) {
                            pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)psVar16);
                            cVar4 = pSVar17->IsReady();
                            if (cVar4 != '\0') {
                                pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                    (shared_ptr<graphics::SpriteAtlasReference>*)psVar16);
                                iVar33 = pSVar17->GetTotalWidth();
                                pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                    (shared_ptr<graphics::SpriteAtlasReference>*)psVar16);
                                iVar31 = pSVar17->GetTotalHeight();
                                pWVar18 = (WaterType*)shared_ptr<MapElementType>::operator->(
                                    (shared_ptr<MapElementType>*)param_6);
                                iVar6 = pWVar18->GetEmissiveMapMaterialID();
                                if (iVar6 == 0) {
                                LAB_1003ce9ef:
                                    iVar7 = iVar33;
                                } else {
                                    iVar7 = 0;
                                    if (iVar6 == 1) {
                                        iVar33 = iVar33 >> 1;
                                        goto LAB_1003ce9ef;
                                    }
                                }
                                pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->(
                                    (shared_ptr<MapElementType>*)param_6);
                                iVar33 = pMVar12->GetVAlign();
                                if (iVar33 == 2) {
                                LAB_1003cea13:
                                    iVar6 = iVar31 + local_94 >> 1;
                                } else {
                                    iVar6 = 0;
                                    if (iVar33 == 1) {
                                        iVar31 = iVar31 >> 1;
                                        goto LAB_1003cea13;
                                    }
                                }
                                uVar9 = local_78->GetFlashColourRGBA(local_70->m_flashTicks);
                                pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                    (shared_ptr<graphics::SpriteAtlasReference>*)psVar16);
                                uVar10 = pSVar17->GetWidth();
                                pSVar17 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                    (shared_ptr<graphics::SpriteAtlasReference>*)psVar16);
                                uVar11 = pSVar17->GetHeight();
                                param_1->AddSprite((int)local_b0 - iVar7, local_44 - iVar6, uVar10, uVar11, uVar9,
                                                   psVar16, CONCAT44(uVar8, 1));
                            }
                        }
                    }
                }
            }
        }
        bVar5 = shared_ptr::operator_cast_to_bool(&local_100);
        pWVar35 = local_70;
        if (!bVar5)
            goto LAB_1003cec9d;
        pAVar27 = (AnimationParameters*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
        iVar31 = pAVar27->GetAnimationLength();
        iVar33 = (int)local_108;
        if (iVar31 == 0) {
            pAVar28 = (AchievementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            iVar31 = pAVar28->GetRuneScore();
            iVar33 = (int)local_108;
            if (iVar31 != 0)
                goto LAB_1003cead9;
        } else {
        LAB_1003cead9:
            new (&local_d8)
                oldscape::dash3d::GridRect((int)local_118 + -5, (int)local_110 + 2, (int)local_f0 + 10, iVar33 + -1);
            pAVar27 =
                (AnimationParameters*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            iVar33 = pAVar27->GetAnimationLength();
            if (iVar33 != 0) {
                pAVar27 =
                    (AnimationParameters*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
                uVar8 = pAVar27->GetAnimationLength();
                param_1->AddColouredRectangle(&local_d8, uVar8, 1);
            }
            pAVar28 = (AchievementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            iVar33 = pAVar28->GetRuneScore();
            if (iVar33 != 0) {
                pAVar28 =
                    (AchievementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
                uVar8 = pAVar28->GetRuneScore();
                param_1->AddOutline(&local_d8, 1, uVar8, 1);
            }
        }
        this_04 = (Option<option::EnumBrightness>*)pWVar35->field_24->GetWorldMapDefaults();
        local_84 = this_04->GetValue();
        if (*(char*)&param_7->field_16 == '\0') {
        LAB_1003cebce:
            this_05 = (HitmarkType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
            uVar8 = this_05->GetOverride();
        } else {
            pHVar29 = (Histogram<unsigned int, 30>*)shared_ptr<MapElementType>::operator->(
                (shared_ptr<MapElementType>*)param_6);
            iVar33 = math::Histogram<unsigned int, 30>::GetMean(pHVar29);
            if (iVar33 == -1)
                goto LAB_1003cebce;
            pHVar29 = (Histogram<unsigned int, 30>*)shared_ptr<MapElementType>::operator->(
                (shared_ptr<MapElementType>*)param_6);
            uVar8 = math::Histogram<unsigned int, 30>::GetMean(pHVar29);
        }
        local_11c = 0;
        new (&local_d8) graphics::TextProperties(&local_100);
        local_d8.SetAlignment(1, 0);
        eastl::optional<unsigned int>::optional(local_138, &local_84);
        local_d8.SetColours(uVar8, local_138);
        this_00 = pWVar35->field_48;
        pMVar12 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_6);
        local_50 = (char*)pMVar12->GetText();
        StringView::StringView<char const*>(&local_148, &local_50);
        SVar37.field_8 = local_118;
        SVar37.field_0 = (ulong)&local_148;
        this_00->DrawStringMultiline(SVar37, (int)local_110, (int)local_f0, (int)local_108, (int)&local_11c,
                                     (uint*)&local_d8, in_stack_fffffffffffffe98);
    LAB_1003cec9d:
        local_100.~shared_ptr();
        local_a8.~shared_ptr();
    }

    // 0x1003ced40, 640 bytes, placed by class name
    // WorldMap::ShouldRenderMapElementType(shared_ptr<MapElementType>&, PlayerVarDomain const*, int)
    ulong WorldMap::ShouldRenderMapElementType(shared_ptr* param_1, PlayerVarDomain* param_2, int param_3) {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        shared_ptr* psVar5;
        MapElementType* pMVar6;
        PlayerVarDomain* pPVar7;
        StaticPointLight* this_00;
        undefined* puVar8;
        GameToken* pGVar9;
        char* pcVar10;
        NXTRenderCanvas* pNVar12;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar13;
        hashtable_iterator_base local_58[8];
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_50[24];
        int local_38;
        bool local_31;

        uVar13 = 0;
        psVar5 = ConfigProvider::GetConfig<MapElementType>(field_24, param_3, (DataStatus**)0);
        shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)param_1, psVar5);
        bVar1 = shared_ptr::operator_cast_to_bool(param_1);
        if (!bVar1)
            goto LAB_1003ceea2;
        pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
        cVar2 = pMVar6->IsMultiME();
        if (cVar2 == '\0') {
        LAB_1003cedda:
            this_00 = (StaticPointLight*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
            cVar2 = this_00->IsValid();
            if (cVar2 != '\0') {
                pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
                puVar8 = (undefined*)pMVar6->VariableTest(&local_31, param_2, field_24);
                uVar13 = 0;
                if ((puVar8 != DataStatus::READY) || (local_31 == false))
                    goto LAB_1003ceea2;
                pGVar9 = (GameToken*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
                iVar3 = pGVar9->GetStatus();
                if (iVar3 < 0) {
                LAB_1003cee5b:
                    /* WARNING: Subroutine does not return */
                    LogAssert("mapElementTypeOut->GetMyID() >= 0 && mapElementTypeOut->GetMyID() < "
                              "(int)m_disabledMapElements.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/worldmap/WorldMap.cpp",
                              2155, (char*)0);
                }
                pGVar9 = (GameToken*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
                iVar3 = pGVar9->GetStatus();
                iVar4 = (&field_528)->end();
                if (iVar4 <= iVar3)
                    goto LAB_1003cee5b;
                pGVar9 = (GameToken*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
                iVar3 = pGVar9->GetStatus();
                pcVar10 = (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)&field_528,
                                                                           (long)iVar3);
                if (*pcVar10 == '\0') {
                    pMVar6 =
                        (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
                    local_50._20_4_ = pMVar6->GetCategory();
                    eastl::rbtree<int, eastl::pair<int const, bool>, eastl::less<int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<int const, bool>>, true, true>::find((int*)local_50);
                    eastl::rbtree<
                        unsigned int,
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::less<unsigned int>, eastl::allocator,
                        eastl::use_first<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                        true, true>::end();
                    bVar1 = eastl::operator!=((eastl*)local_50, local_58, extraout_RDX);
                    if (bVar1) {
                        pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->(
                            (shared_ptr<MapElementType>*)param_1);
                        local_38 = pMVar6->GetCategory();
                        pcVar10 = (char*)eastl::map<int, bool, eastl::less<int>, eastl::allocator>::operator[](
                            (map<int, bool, eastl::less<int>, eastl::allocator>*)&field_552, &local_38);
                        if (*pcVar10 != '\0')
                            goto LAB_1003ceea0;
                    }
                    pMVar6 =
                        (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
                    if (pMVar6->GetText() == 0) {
                    LAB_1003cef95:
                        uVar13 = CONCAT71((int7)((ulong)&field_552 >> 8), 1);
                        goto LAB_1003ceea2;
                    }
                    pNVar12 =
                        (NXTRenderCanvas*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
                    iVar3 = pNVar12->GetLastNumVerts();
                    if ((iVar3 != 0) || (field_692 == false)) {
                        pNVar12 = (NXTRenderCanvas*)shared_ptr<MapElementType>::operator->(
                            (shared_ptr<MapElementType>*)param_1);
                        iVar3 = pNVar12->GetLastNumVerts();
                        if ((iVar3 != 1) || (field_693 == false)) {
                            pNVar12 = (NXTRenderCanvas*)shared_ptr<MapElementType>::operator->(
                                (shared_ptr<MapElementType>*)param_1);
                            iVar3 = pNVar12->GetLastNumVerts();
                            if ((iVar3 != 2) || (field_694 == false))
                                goto LAB_1003cef95;
                        }
                    }
                }
            }
        } else {
            pPVar7 = (PlayerVarDomain*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)param_1);
            local_50->GetMultiME(pPVar7, param_2);
            shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)param_1, (shared_ptr*)local_50);
            local_50->~shared_ptr();
            bVar1 = shared_ptr::operator_cast_to_bool(param_1);
            if (bVar1)
                goto LAB_1003cedda;
        }
    LAB_1003ceea0:
        uVar13 = 0;
    LAB_1003ceea2:
        return uVar13 & 4294967295;
    }

    // 0x1003cf190, 48 bytes, placed by class name
    // WorldMap::IsF2PTile(int, int)
    undefined1 WorldMap::IsF2PTile(int param_1, int param_2) {
        undefined1* puVar1;

        puVar1 = (undefined1*)eastl::vector<bool, eastl::allocator>::operator[](
            (vector<bool, eastl::allocator>*)&field_4040, (long)((param_2 >> 3) * field_224 + (param_1 >> 3)));
        return *puVar1;
    }

    // 0x1003cf2d0, 80 bytes, placed by class name
    // WorldMap::GetDesiredTerrainTextureSize() const
    int WorldMap::GetDesiredTerrainTextureSize() {
        float fVar1;
        int iVar2;

        fVar1 = field_248;
        iVar2 = 512;
        if (((fVar1 <= 8.0) && (iVar2 = 256, fVar1 <= 6.0)) && (iVar2 = 128, fVar1 <= 4.0)) {
            iVar2 = (uint)(3.0 <= fVar1) * 32 + 32;
        }
        return iVar2;
    }

    // 0x1003cf320, 304 bytes, placed by class name
    // WorldMap::IsMapSquareValid(int, int) const
    bool WorldMap::IsMapSquareValid(int param_1, int param_2) {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        char* pcVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        long lVar7;
        bool bVar8;

        this_00 = &field_744;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            uVar6 = param_1 * 8;
            uVar2 = param_2 << 3;
            do {
                iVar5 = field_224 * uVar2;
                pcVar3 = (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this_00,
                                                                          (long)(int)(uVar6 + iVar5));
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
                        pcVar3 = (char*)Array<bool, eastl::allocator>::operator[](
                            (Array<bool, eastl::allocator>*)this_00, (long)(int)(iVar5 + uVar6) + 1 + lVar7);
                        lVar7 = lVar7 + 1;
                    } while (*pcVar3 == '\0');
                    iVar4 = 1;
                }
            LAB_1003cf410:
                if (bVar8)
                    goto LAB_1003cf42f;
                bVar8 = uVar2 != (param_2 << 3 | 7U);
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

    // 0x1003cf560, 1760 bytes, placed by class name
    // WorldMap::GenerateTerrainTexture(unsigned int, unsigned int, short)
    WorldMap* WorldMap::GenerateTerrainTexture(uint param_1, uint param_2, short param_3) {
        char cVar1;
        uint uVar2;
        uint uVar3;
        uint uVar4;
        long lVar5;
        Array<bool, eastl::allocator>* pAVar6;
        OverlayShapeData* pOVar7;
        Layout* this_00;
        byte* pbVar8;
        byte* pbVar9;
        char* pcVar10;
        uint* puVar11;
        undefined6 in_register_0000000a;
        uint uVar12;
        uint uVar13;
        Array<bool, eastl::allocator>* pAVar14;
        int iVar15;
        undefined4 in_register_00000034;
        ulong uVar16;
        uint in_R8D;
        ulong uVar17;
        ulong uVar18;
        uint uVar19;
        ushort uVar20;
        uint uVar21;
        long lVar22;
        Array<bool, eastl::allocator>* pAVar23;
        int iVar24;
        int iVar25;
        uint local_84;
        uint local_80;
        int local_7c;
        Array<bool, eastl::allocator>* local_78;
        undefined8 local_70;
        long local_68;
        uint* local_60;
        uint* local_58;
        ulong local_50;
        OverlayShapeData* local_48;
        Array<bool, eastl::allocator>* local_40;
        ulong local_38;

        new (this) Array<unsigned int, eastl::allocator>();
        set_max_size((ulong)(in_R8D * in_R8D), 0);
        local_48 = (OverlayShapeData*)CONCAT44(in_register_00000034, param_1);
        lVar5 = ((CONCAT44(in_register_00000034, param_1) + 864))->HeapBeginPtr();
        if (lVar5 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("sourceDataRGBA != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "worldmap/WorldMap.cpp",
                      2909, (char*)0);
        }
        pAVar6 = (Array<bool, eastl::allocator>*)data();
        uVar20 = (ushort)in_R8D;
        local_68 = CONCAT44(local_68._4_4_, param_2);
        iVar15 = (int)CONCAT62(in_register_0000000a, param_3);
        local_38 = lVar5;
        if ((short)uVar20 < 64) {
            local_78 = (Array<bool, eastl::allocator>*)((ulong)local_78 & 18446744069414584320);
            uVar16 = 64 / (long)(int)in_R8D & 4294967295;
            local_70 = CONCAT44(local_70._4_4_, iVar15 << 6) | 63;
            iVar25 = (int)(64 / (long)(int)in_R8D);
            uVar2 = iVar25 * iVar25;
            local_40 = (Array<bool, eastl::allocator>*)CONCAT44(local_40._4_4_, iVar25);
            do {
                local_50 = (ulong)(param_2 << 6);
                uVar12 = 0;
                do {
                    local_58 = (uint*)CONCAT44(local_58._4_4_, uVar12);
                    if ((int)uVar16 == 0) {
                        uVar21 = 0;
                        uVar19 = 0;
                        uVar13 = 0;
                        uVar4 = 0;
                    } else {
                        uVar13 = 0;
                        uVar19 = 0;
                        uVar21 = 0;
                        uVar12 = 0;
                        pOVar7 = local_48;
                        iVar25 = (int)local_70;
                        do {
                            local_60 = (uint*)CONCAT44(local_60._4_4_, uVar12);
                            if ((int)uVar16 != 0) {
                                iVar24 = 0;
                                do {
                                    local_84 = *(uint*)(local_38 + (ulong)(uint)(*(int*)((long)pOVar7 + 896) * iVar25 +
                                                                                 (int)local_50 + iVar24) *
                                                                       4);
                                    cVar1 = IsLittleEndian();
                                    if (cVar1 != '\0') {
                                        DoByteReorder<EndianSwap, int>((int*)&local_84);
                                    }
                                    uVar13 = uVar13 + (local_84 >> 24);
                                    uVar19 = uVar19 + (local_84 >> 16 & 255);
                                    uVar21 = uVar21 + (local_84 >> 8 & 255);
                                    iVar24 = iVar24 + 1;
                                    uVar16 = (ulong)local_40 & 4294967295;
                                    pOVar7 = local_48;
                                } while ((int)local_40 != iVar24);
                            }
                            uVar12 = (int)local_60 + 1;
                            iVar25 = iVar25 + -1;
                            uVar4 = (uint)uVar16;
                        } while (uVar12 != uVar4);
                    }
                    uVar3 = (uint)local_78 / uVar4;
                    uVar12 = (uint)local_58;
                    uVar4 = (uint)local_58 / uVar4;
                    local_80 = uVar21 / uVar2 << 8 | uVar19 / uVar2 << 16 | uVar13 / uVar2 << 24 | 255;
                    cVar1 = IsLittleEndian();
                    if (cVar1 != '\0') {
                        DoByteReorder<EndianSwap, int>((int*)&local_80);
                    }
                    *(uint*)(pAVar6 + (long)(int)(uVar3 * in_R8D + uVar4) * 4) = local_80;
                    uVar16 = (ulong)local_40 & 4294967295;
                    local_50 = (ulong)(uint)((int)local_50 + (int)local_40);
                    uVar12 = uVar12 + (int)local_40;
                } while (uVar12 < 64);
                local_70 = CONCAT44(local_70._4_4_, (int)local_70 - (int)local_40);
                uVar12 = (uint)local_78 + (int)local_40;
                local_78 = (Array<bool, eastl::allocator>*)CONCAT44(local_78._4_4_, uVar12);
            } while (uVar12 < 64);
        } else if (uVar20 == 64) {
            uVar2 = iVar15 << 6 | 63;
            lVar5 = 0;
            do {
                _memcpy(pAVar6 + lVar5,
                        (void*)(local_38 + (ulong)(*(int*)((long)local_48 + 896) * uVar2 + param_2 * 64) * 4), 256);
                uVar2 = uVar2 - 1;
                lVar5 = lVar5 + 256;
            } while (lVar5 != 16384);
        } else {
            uVar2 = in_R8D;
            if ((int)in_R8D < 0) {
                uVar2 = in_R8D + 63;
            }
            uVar2 = (int)uVar2 >> 6;
            uVar12 = iVar15 << 6 | 63;
            local_60 = (uint*)CONCAT44(local_60._4_4_, param_2 << 6);
            uVar16 = 1;
            if (1 < uVar2) {
                uVar16 = (ulong)uVar2;
            }
            local_58 = (uint*)((long)(short)uVar20 * (ulong)uVar2 * 4);
            uVar17 = 0;
            pAVar23 = pAVar6;
            do {
                local_40 = pAVar23;
                local_50 = uVar17;
                lVar22 = 0;
                pAVar23 = local_40;
                iVar25 = param_2 << 6;
                do {
                    if (126 < in_R8D + 63) {
                        iVar24 = *(int*)((long)local_48 + 896);
                        uVar17 = 0;
                        pAVar14 = pAVar23;
                        do {
                            uVar18 = 0;
                            do {
                                *(undefined4*)(pAVar14 + uVar18 * 4) =
                                    *(undefined4*)(lVar5 + (ulong)(iVar24 * uVar12 + iVar25) * 4);
                                uVar18 = uVar18 + 1;
                            } while (uVar16 != uVar18);
                            uVar17 = uVar17 + 1;
                            pAVar14 = pAVar14 + (long)(short)uVar20 * 4;
                        } while (uVar17 != uVar16);
                    }
                    iVar25 = iVar25 + 1;
                    lVar22 = lVar22 + 1;
                    pAVar23 = pAVar23 + (ulong)uVar2 * 4;
                } while (lVar22 != 64);
                uVar12 = uVar12 - 1;
                uVar17 = local_50 + 1;
                pAVar23 = local_40 + (long)local_58;
            } while (local_50 + 1 != 64);
        }
        this_00 = (Layout*)
            eastl::vector<eastl::vector<WorldMap::OverlayTileData, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<WorldMap::OverlayTileData, eastl::allocator>, eastl::allocator>*)((long)local_48 +
                                                                                                        912),
                (ulong)(uint)(iVar15 * *(int*)((long)local_48 + 904) + (int)local_68));
        if (uVar20 < 64) {
            local_7c = (int)(64 / (long)(int)in_R8D);
            uVar2 = 1;
        } else {
            uVar2 = (int)in_R8D >> 6;
            local_7c = 1;
        }
        pbVar8 = (byte*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        pbVar9 = (byte*)this_00->end();
        if (pbVar8 != pbVar9) {
            local_38 = (ulong)uVar2;
            local_48 = (OverlayShapeData*)((long)local_48 + 944);
            do {
                local_40 = (Array<bool, eastl::allocator>*)local_48->GetShapeData(
                    (pbVar8[13] & 63) - 1, (uint)(pbVar8[13] >> 6), (uint)local_38);
                if (local_7c < 2) {
                    iVar15 = (uint)*pbVar8 + (63 - (uint)pbVar8[1]) * in_R8D;
                } else {
                    iVar15 = (int)((long)(ulong)*pbVar8 / (long)local_7c) +
                             ((int)(63 - (uint)pbVar8[1]) / local_7c) * in_R8D;
                }
                if (0 < (int)(uint)local_38) {
                    local_60 = (uint*)(pbVar8 + 8);
                    local_58 = (uint*)(pbVar8 + 4);
                    iVar15 = iVar15 * (uint)local_38;
                    local_70 = 0;
                    lVar5 = 0;
                    do {
                        pAVar23 = pAVar6 + (long)iVar15 * 4;
                        local_50 = (ulong)(int)lVar5;
                        lVar22 = 0;
                        local_78 = pAVar23;
                        local_68 = lVar5;
                        do {
                            if (pbVar8[12] == 0) {
                                pcVar10 = (char*)Array<bool, eastl::allocator>::operator[](local_40, local_50 + lVar22);
                                puVar11 = local_60;
                                if (*pcVar10 == '\0') {
                                    puVar11 = local_58;
                                }
                                *(uint*)(pAVar23 + lVar22 * 4) = *puVar11;
                            } else {
                                pcVar10 = (char*)Array<bool, eastl::allocator>::operator[](local_40, local_50 + lVar22);
                                puVar11 = local_60;
                                if (*pcVar10 == '\0') {
                                    puVar11 = local_58;
                                }
                                uVar12 = *puVar11;
                                uVar4 = *(uint*)(pAVar23 + lVar22 * 4);
                                cVar1 = IsLittleEndian();
                                uVar13 = uVar12 >> 24;
                                if (cVar1 == '\0') {
                                    uVar13 = uVar12;
                                }
                                cVar1 = IsLittleEndian();
                                uVar19 = uVar12 >> 8;
                                if (cVar1 != '\0') {
                                    uVar19 = uVar12;
                                }
                                cVar1 = IsLittleEndian();
                                uVar12 = uVar4 >> 8;
                                if (cVar1 != '\0') {
                                    uVar12 = uVar4;
                                }
                                cVar1 = IsLittleEndian();
                                uVar13 = uVar13 & 255;
                                uVar4 =
                                    (uVar12 & 65280) * (uVar13 ^ 255) + (uVar19 & 65280) * uVar13 & 16711680 |
                                    (uVar12 & 16711935) * (uVar13 ^ 255) + (uVar19 & 16711935) * uVar13 & 4278255360;
                                uVar12 = uVar4 | 255;
                                if (cVar1 != '\0') {
                                    uVar12 = uVar4 >> 8 | 4278190080;
                                }
                                *(uint*)(local_78 + lVar22 * 4) = uVar12;
                                pAVar23 = local_78;
                            }
                            lVar22 = lVar22 + 1;
                        } while ((uint)local_38 != (uint)lVar22);
                        iVar15 = iVar15 + (in_R8D - uVar2) + (uint)lVar22;
                        uVar12 = (int)local_70 + 1;
                        local_70 = (ulong)uVar12;
                        lVar5 = (int)local_68 + lVar22;
                    } while (uVar12 != (uint)local_38);
                }
                pbVar8 = pbVar8 + 16;
            } while (pbVar8 != pbVar9);
        }
        return this;
    }

    // 0x1003d9db0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60() {
        new (&WorldMap::DUMMY_MEL_INSTANCE) WorldMap::MapElementInstance();
    }

} // namespace jag::game

// 0x1003c7600, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}
