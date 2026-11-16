// libs/game/runetek5/scene/minimap/MiniMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MiniMap.h"

namespace jag::game {
    // 0x100d42bb0, 4 bytes, __const
    MiniMap::TILES_PER_UPDATE = 9;

    // 0x100f38370, 1 bytes, __data
    MiniMap::ENABLE_TERRAIN_PASS = 1;

    // 0x100f38371, 1 bytes, __data
    MiniMap::ENABLE_LOC_PASS = 1;

    // 0x100f38372, 1 bytes, __data
    MiniMap::ENABLE_LINES_PASS = 1;

    // 0x100f38373, 1 bytes, __data
    MiniMap::ENABLE_BASE_LAYER = 1;

    // 0x100f38374, 1 bytes, __data
    MiniMap::ENABLE_CUSTOM_LAYER = 1;

    // 0x100f38378, 1 bytes, __data
    MiniMap::DEBUG_ISOLATE_X = 50;

    // 0x100f3837c, 1 bytes, __data
    MiniMap::DEBUG_ISOLATE_Z = 50;

    // 0x100f38380, 1 bytes, __data
    MiniMap::MINIMAP_RENDER_FORMAT = 18;

    // 0x100f38384, 1 bytes, __data
    MiniMap::MINIMAP_COMPOSITING_FORMAT = 18;

    // 0x100f38388, 1 bytes, __data
    MiniMap::DRAW_MINIMAP = 1;

    // 0x1039b4aa8, 1 bytes, __common; zero-initialised
    MiniMap::ENABLE_ENVIRONMENT_TINTING;

    // 0x1039b4aa9, 1 bytes, __common; zero-initialised
    MiniMap::DEBUG_BASE_RT;

    // 0x1039b4aaa, 1 bytes, __common; zero-initialised
    MiniMap::DEBUG_BASE_DEPTH_BUFFER;

    // 0x1039b4aab, 1 bytes, __common; zero-initialised
    MiniMap::DEBUG_COMPOSITE_RT;

    // 0x1039b4aac, 1 bytes, __common; zero-initialised
    MiniMap::DEBUG_TILE_PROGRESS;

    // 0x1039b4aad, 1 bytes, __common; zero-initialised
    MiniMap::FORCE_TERRAIN_REDRAWS;

    // 0x1039b4aae, 1 bytes, __common; zero-initialised
    MiniMap::FORCE_LINE_REDRAWS;

    // 0x1039b4aaf, 1 bytes, __common; zero-initialised
    MiniMap::FORCE_TOTAL_REBUILD;

    // 0x1039b4ab0, 4 bytes, __common; zero-initialised
    MiniMap::DEBUG_ISOLATE_TILE;

    // 0x1003bbd50, 848 bytes, placed by class name and debug map
    // MiniMap::RegisterTweakVars(tweak::ContainerGroup&)
    void MiniMap::RegisterTweakVars(ContainerGroup* param_1) {
        Container* pCVar1;
        char* pcVar2;
        allocator local_b0[16];
        shared_ptr<tweak::Container> local_a0[16];
        eastl::string local_90[112];

        local_90._104_8_ = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        eastl::string::basic_string(local_90, "MiniMap", local_b0);
        (*(code*)param_1->field_0[30])(local_a0, param_1, local_90);
        eastl::string::~basic_string(local_90);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Draw MiniMap", (bool*)&DRAW_MINIMAP);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Enable Terrain", (bool*)&ENABLE_TERRAIN_PASS);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Enable Locations", (bool*)&ENABLE_LOC_PASS);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Enable Lines", (bool*)&ENABLE_LINES_PASS);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Enable Base", (bool*)&ENABLE_BASE_LAYER);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Enable Custom Layer", (bool*)&ENABLE_CUSTOM_LAYER);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Force Terrain Redraws", (bool*)&FORCE_TERRAIN_REDRAWS);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Force Line Redraws", (bool*)&FORCE_LINE_REDRAWS);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pCVar1->AddCheckBox("Force Total Rebuild", (bool*)&FORCE_TOTAL_REBUILD);
        new (local_90) eastl::fixed_string<char, 64, true, eastl::allocator>();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_90, "Enable Isolated Tile (%d,%d)", (ulong)DEBUG_ISOLATE_X, (ulong)DEBUG_ISOLATE_Z);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_a0);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pCVar1->AddCheckBox(pcVar2, (bool*)&DEBUG_ISOLATE_TILE);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_a0);
        local_b0->AddGroup(pcVar2);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_b0);
        pCVar1->AddCheckBox("Debug Base RT", (bool*)&DEBUG_BASE_RT);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_b0);
        pCVar1->AddCheckBox("Show Tile Progress", (bool*)&DEBUG_TILE_PROGRESS);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_b0);
        pCVar1->AddCheckBox("Debug Depth Buffer", (bool*)&DEBUG_BASE_DEPTH_BUFFER);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_b0);
        pCVar1->AddCheckBox("Debug Composite RT", (bool*)&DEBUG_COMPOSITE_RT);
        local_b0->~shared_ptr();
        /* WARNING: Subroutine does not return */
        local_90->~fixed_string();
    }

    // 0x1003bc0a0, 1696 bytes, base-object constructor, placed by class name
    // MiniMap::MiniMap(graphics::RT7Core&, ConfigProvider&, SceneManager&, PlayerVarDomain*, int, int, int)
    void MiniMap::MiniMap(RT7Core* param_1, ConfigProvider* param_2, SceneManager* param_3, PlayerVarDomain* param_4,
                          int param_5, int param_6, int param_7) {
        undefined1* this_00;
        SceneViewData* this_01;
        int iVar1;
        uint uVar2;
        undefined8 uVar4;
        MapArea* this_02;
        long lVar5;
        uint uVar7;
        MiniMap* this_03;
        float fVar8;
        ColourHSL local_1a0;
        RenderPass* local_190;
        SceneViewData* local_188;
        vector<MiniMap::MapElementListEntry, eastl::allocator>* local_180;
        vector<MiniMap::MapElementListEntry, eastl::allocator>* local_178;
        MiniMap* local_170;
        ColourHSL local_168;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = &PTR__MiniMap_100efe550;
        field_8 = param_1;
        field_16 = param_2;
        field_24 = param_3;
        field_32 = param_4;
        field_40 = 0;
        new (&field_48, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_190 = (RenderPass*)&field_64;
        new (local_190) MiniMapRenderPass();
        local_188 = (SceneViewData*)field_80;
        graphics::SceneViewData::SceneViewData(local_188);
        new (&field_752) math::Matrix44T<float>();
        this_00 = field_816;
        new (this_00) graphics::DirectionalLight();
        field_1008 = 0;
        field_1012 = 0;
        field_1013 = 1;
        field_1014 = 1;
        new (&field_1016) math::Transitionable<float>();
        field_1048 = 0.0;
        field_1052 = 0.0;
        field_1056 = 1;
        field_1060 = 0;
        field_1064 = 0;
        new (&field_1072) eastl::stack<math::Rect<int>, eastl::vector<math::Rect<int>, eastl::allocator>>();
        field_1104 = 1;
        field_1108 = 0;
        field_1112 = 0;
        field_1116 = param_5;
        field_1120 = param_6;
        field_1124 = 0;
        field_1128 = param_7;
        field_1136 = (RenderTargetsManager*)param_1->GetRenderTargetsManager();
        new (field_1144, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_1160 = 0;
        new (field_1168, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_1184) CoordFine();
        field_1200 = 0.0;
        new (&field_1208) eastl::vector<shared_ptr<ChangeLocationRequest>, eastl::allocator>();
        new (&field_1240, -1, 0.0, 0.0) CoordFine();
        new (&field_1256, -1, 0.0, 0.0) CoordFine();
        field_1288 = 0;
        field_1292 = 0;
        field_1296 = 0;
        field_1300 = 0;
        field_1272 = 0.0;
        field_1276 = 0;
        field_1280 = 0;
        field_1284 = 0;
        field_1304 = 0;
        field_1308 = '\x01';
        field_1309 = 0;
        field_1310 = 0;
        field_1311 = 0;
        local_180 = (vector<MiniMap::MapElementListEntry, eastl::allocator>*)&field_1312;
        eastl::vector<MiniMap::MapElementListEntry, eastl::allocator>::vector(local_180);
        local_178 = (vector<MiniMap::MapElementListEntry, eastl::allocator>*)&field_1344;
        eastl::vector<MiniMap::MapElementListEntry, eastl::allocator>::vector(local_178);
        local_170 = (MiniMap*)&field_1376;
        new (local_170) eastl::vector<MiniMap::MapElementListEntry, eastl::allocator>();
        field_1408 = -1;
        field_1412 = 4294967295;
        field_1416 = 4294967295;
        field_1420 = 4294967295;
        new (&field_1424) eastl::fixed_list<MiniMap::MapSquareState, 16ul, true, eastl::allocator>();
        new (&field_99696) eastl::fixed_list<MiniMap::MapSquareState, 16ul, true, eastl::allocator>();
        if (field_1128 < 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_miniMapElementScale > 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      119, (char*)0);
        }
        local_168.field_0 = 1.0;
        (&field_1016, &local_168.field_0, 0, 0)->SetValue();
        new (&local_168) math::ColourHSL(0.5391639, -0.6469966, 0.5391639);
        graphics::DirectionalLight::SetDirection((Vector3T*)this_00, (longlong)&local_168, 0);
        fVar8 = 1.6156863;
        new (&local_1a0) math::ColourHSL(1.7333333, 1.6156863, 1.4666667);
        local_168._0_8_ = math::operator*((Vector3T*)&local_1a0, 0.5);
        local_168.field_8 = fVar8;
        graphics::DirectionalLight::SetColour((Vector3T*)this_00, (longlong)&local_168, 0);
        new (&local_168) math::ColourHSL(0.690625, 0.64375, 0.584375);
        graphics::DirectionalLight::SetAntiColour((Vector3T*)this_00, (longlong)&local_168, 0);
        fVar8 = 1.1297182;
        new (&local_1a0) math::ColourHSL(1.2119792, 1.1297182, 1.0255208);
        local_168._0_8_ = math::operator*((Vector3T*)&local_1a0, 0.5);
        local_168.field_8 = fVar8;
        graphics::DirectionalLight::SetAmbientColour((Vector3T*)this_00, (longlong)&local_168, 0);
        eastl::vector<MiniMap::MapElementListEntry, eastl::allocator>::set_capacity(local_180, 50);
        eastl::vector<MiniMap::MapElementListEntry, eastl::allocator>::set_capacity(local_178, 50);
        this_03 = local_170;
        local_170->set_capacity(50);
        iVar1 = CalcBuildMapSquares(this_03, param_5, param_6);
        this_01 = local_188;
        field_1108 = iVar1;
        local_188->SetRenderFlags(20);
        this_01->RenderPassPushBack(local_190);
        uVar7 = field_1108 << 9;
        field_1112 = uVar7;
        uVar2 = math::RoundUpToPowerOf2(uVar7);
        field_1112 = uVar2;
        uVar7 = uVar2 + 511;
        if (-1 < (int)uVar2) {
            uVar7 = uVar2;
        }
        field_1108 = (int)uVar7 >> 9;
        uVar4 = logger::default_logger();
        new (&local_c8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
        logger::Logger::Log(uVar4, 0, &local_c8, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "minimap/MiniMap.cpp",
                            148, "%s: Map square build size now: %d", "MiniMap", field_1108);
        local_c8.~LogStream();
        field_1160 = field_1112;
        this_02 = (MapArea*)local_c8.Instance();
        lVar5 = this_02->GetOrigin();
        if (*(int*)(lVar5 + 308) < 4) {
            uVar4 = logger::default_logger();
            new (&local_158) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
            logger::Logger::Log(uVar4, 0, &local_158, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/minimap/MiniMap.cpp",
                                157, "%s: Old GPU detected, falling back to R8G8B8 texture format", "MiniMap");
            local_158.~LogStream();
            MINIMAP_RENDER_FORMAT = 16;
            MINIMAP_COMPOSITING_FORMAT = 16;
        }
        CreateRenderingResources(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003bc880, 128 bytes, placed by class name
    // MiniMap::CalcBuildMapSquares(int, int) const
    void MiniMap::CalcBuildMapSquares(int param_1, int param_2) {
        int iVar1;
        float fVar2;
        undefined8 extraout_XMM1_Qa;
        undefined8 extraout_XMM1_Qb;
        undefined1 auVar3[16];
        float fVar4;

        iVar1 = eastl::max<int>(param_1, param_2);
        fVar2 = (float)_ceilf((float)iVar1 * 0.001953125);
        auVar3._8_8_ = extraout_XMM1_Qb;
        auVar3._0_8_ = extraout_XMM1_Qa;
        fVar2 = (float)((int)fVar2 * (int)fVar2 * 2);
        auVar3 = rsqrtss(auVar3, ZEXT416((uint)fVar2));
        fVar4 = fVar2 * auVar3._0_4_;
        fVar2 =
            (float)_ceilf(~-(uint)(ABS(fVar2) < 1.1754944e-38) & (uint)((fVar4 * auVar3._0_4_ + -3.0) * fVar4 * -0.5));
        eastl::min<graphics::GraphicsQuality>(4, (int)fVar2 + 1);
    }

    // 0x1003bc900, 448 bytes, placed by class name
    // MiniMap::CreateRenderingResources()
    void MiniMap::CreateRenderingResources() {
        uint uVar1;
        undefined8 uVar2;
        uint* puVar3;
        array<render::Texture::Desc, 2ul> local_198[128];
        undefined1 local_118[64];
        undefined1 local_d8[24];
        LogStream local_c0;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ((local_d8 + 16))->~AutoSingleton("MiniMap");
        uVar2 = logger::default_logger();
        new (&local_c0) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
        logger::Logger::Log(uVar2, 0, &local_c0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "minimap/MiniMap.cpp",
                            177, "%s: Need to redraw everything", "CreateRenderingResources");
        local_c0.~LogStream();
        std::array<render::Texture::Desc, 2ul>::array(local_198);
        uVar1 = field_1112;
        puVar3 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_198);
        *puVar3 = uVar1;
        puVar3[1] = uVar1;
        *(undefined1*)(puVar3 + 8) = 1;
        puVar3[3] = MINIMAP_RENDER_FORMAT;
        new (local_118) render::Texture::Desc();
        local_118._0_4_ = field_1112;
        local_118[32] = 0;
        local_118._12_4_ = 22;
        local_118._4_4_ = local_118._0_4_;
        local_d8->Register(field_1136, "MinimapBaseRT1", 3553, local_198, 1, (Desc*)local_118, CONCAT44(1, 1), 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_1144,
                                                     (shared_ptr*)local_d8);
        local_d8->~shared_ptr();
        field_1309 = 1;
        CreateCompositingRT(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003bcb10, 32 bytes, complete-object constructor, placed by class name
    // MiniMap::MiniMap(graphics::RT7Core&, ConfigProvider&, SceneManager&, PlayerVarDomain*, int, int, int)
    void MiniMap::MiniMap(RT7Core* param_1, ConfigProvider* param_2, SceneManager* param_3, PlayerVarDomain* param_4,
                          int param_5, int param_6, int param_7) {
        MiniMap(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x1003bcb30, 320 bytes, base-object destructor, placed by class name
    // MiniMap::~MiniMap()
    void MiniMap::~MiniMap() {
        field_0 = &PTR__MiniMap_100efe550;
        DestroyRenderingResources(this);
        (&field_99696)->~fixed_list();
        (&field_1424)->~fixed_list();
        (&field_1376)->~vector();
        (&field_1344)->~vector();
        (&field_1312)->~vector();
        (&field_1208)->~vector();
        field_1168->~shared_ptr();
        field_1144->~shared_ptr();
        (&field_1072)->~stack();
        field_80->~SceneViewData();
        (&field_64)->~MiniMapRenderPass();
        (&field_48)->~weak_ptr();
    }

    // 0x1003bcc70, 64 bytes, placed by class name
    // MiniMap::DestroyRenderingResources()
    void MiniMap::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("MiniMap");
        (field_1136, (shared_ptr*)field_1144)->Unregister();
        DestroyCompositingRT(this);
    }

    // 0x1003bccb0, 16 bytes, complete-object destructor, placed by class name
    // MiniMap::~MiniMap(): jumps straight to the base-object destructor

    // 0x1003bccc0, 32 bytes, deleting destructor, placed by class name
    // MiniMap::~MiniMap()
    void MiniMap::~MiniMap() {
        ~MiniMap(this);
        operator_delete(this);
    }

    // 0x1003bccf0, 272 bytes, placed by class name
    // MiniMap::CreateCompositingRT()
    void MiniMap::CreateCompositingRT() {
        uint uVar1;
        uint* puVar2;
        array<render::Texture::Desc, 2ul> local_f0[128];
        undefined1 local_70[80];

        uVar1 = eastl::max<int>(field_1116, field_1120);
        field_1124 = uVar1;
        uVar1 = math::RoundUpToPowerOf2(uVar1);
        field_1124 = uVar1;
        std::array<render::Texture::Desc, 2ul>::array(local_f0);
        uVar1 = field_1124;
        puVar2 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_f0);
        *puVar2 = uVar1;
        puVar2[1] = uVar1;
        *(undefined1*)(puVar2 + 8) = 0;
        puVar2[3] = MINIMAP_COMPOSITING_FORMAT;
        new (local_70) render::Texture::Desc();
        local_70._0_4_ = field_1124;
        local_70._12_4_ = 0;
        local_70._4_4_ = local_70._0_4_;
        ((local_70 + 64))->Register(field_1136, "MinimapCompositingRT", 3553, local_f0, 1, (Desc*)local_70, 0, 1);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_1168,
                                                     (shared_ptr*)(local_70 + 64));
        ((local_70 + 64))->~shared_ptr();
    }

    // 0x1003bce00, 32 bytes, placed by class name
    // MiniMap::DestroyCompositingRT()
    void MiniMap::DestroyCompositingRT() {
        (field_1136, (shared_ptr*)field_1168)->Unregister();
    }

    // 0x1003bce20, 304 bytes, placed by class name
    // MiniMap::RenderToGUI(graphics::GUIManager&, math::Rect<int> const&)
    void MiniMap::RenderToGUI(GUIManager* param_1, Rect* param_2) {
        uint uVar1;
        undefined8 uVar2;
        DrawCallState* pDVar3;
        float fVar4;
        DrawCallState local_70;
        ImVec4 local_40[16];
        float local_30;
        float local_2c;

        uVar2 = GetMiniMapRenderTexture(this);
        uVar1 = field_1124;
        fVar4 = (float)((int)(uVar1 - field_1116) / 2) * (1.0 / (float)(int)uVar1);
        local_30 = (float)((int)(uVar1 - field_1120) / 2) * (1.0 / (float)(int)uVar1);
        local_2c = 1.0 - fVar4;
        ImVec4::ImVec4(local_40, fVar4, 1.0 - local_30, 0.0, 0.0);
        local_40->SetRight(local_2c);
        local_40->SetBottom(local_30);
        pDVar3 = (DrawCallState*)param_1->GetCurrentState();
        new (&local_70) render::DrawCallState(pDVar3);
        param_1->Begin(&local_70);
        param_1->AddElement(param_2, 4294967295, local_40, uVar2, 1);
        param_1->Render(0);
        param_1->End();
        local_70.~DrawCallState();
    }

    // 0x1003bd060, 96 bytes, placed by class name
    // MiniMap::ForceBaseUpdate()
    void MiniMap::ForceBaseUpdate() {
        undefined1* this_00;
        int iVar1;
        int iVar2;

        field_1012 = 0;
        this_00 = &field_1256;
        iVar1 = this_00->GetMapSquareX();
        iVar2 = this_00->GetMapSquareZ();
        RebuildTileListAndReprioritise(this, (CoordFine*)this_00, iVar1, iVar2);
        UpdateBaseRT(this, field_1108);
        field_1013 = 1;
        field_1014 = 1;
    }

    // 0x1003bd0c0, 608 bytes, placed by class name
    // MiniMap::RebuildTileListAndReprioritise(CoordFine&, int, int)
    void MiniMap::RebuildTileListAndReprioritise(CoordFine* param_1, int param_2, int param_3) {
        undefined1* this_00;
        undefined8 uVar1;
        uint* puVar2;
        uint uVar3;
        uint uVar4;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = logger::default_logger();
        new (&local_c8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
        logger::Logger::Log(uVar1, 0, &local_c8, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "minimap/MiniMap.cpp",
                            1038, "%s: MapBase now: %d,%d - %d,%d (%dx%d)", "RebuildTileListAndReprioritise",
                            field_1304, field_1288, field_1296, field_1280, field_1296 - field_1304,
                            field_1280 - field_1288);
        local_c8.~LogStream();
        this_00 = &field_1424;
        this_00->clear();
        (&field_99696)->clear();
        uVar3 = field_1304;
        if ((int)uVar3 < field_1296) {
            do {
                for (uVar4 = field_1288; (int)uVar4 < field_1280; uVar4 = uVar4 + 1) {
                    if ((DEBUG_ISOLATE_TILE == '\0') || ((uVar3 == DEBUG_ISOLATE_X && (uVar4 == DEBUG_ISOLATE_Z)))) {
                        uVar1 = logger::default_logger();
                        new (&local_158) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
                        logger::Logger::Log(uVar1, 0, &local_158, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/minimap/MiniMap.cpp",
                                            1057, "%s: Adding new MapSquareState @ %d,%d",
                                            "RebuildTileListAndReprioritise", uVar3, uVar4);
                        local_158.~LogStream();
                        puVar2 = (uint*)this_00->push_back();
                        puVar2[2] = param_1->field_0;
                        *puVar2 = uVar3;
                        puVar2[1] = uVar4;
                    }
                }
                uVar3 = uVar3 + 1;
            } while ((int)uVar3 < field_1296);
        }
        eastl::list<MiniMap::MapSquareState,
                    eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
            sort<MiniMap::RebuildTileListAndReprioritise(CoordFine&, int, int)::__0>(this_00, this,
                                                                                     CONCAT44(param_3, param_2));
        field_1309 = 1;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003bd320, 256 bytes, placed by class name
    // MiniMap::UpdateBaseRT(int)
    void MiniMap::UpdateBaseRT(int param_1) {
        uint uVar1;
        undefined8 uVar2;
        uint uVar3;
        LogStream local_b8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_1108 = param_1;
        field_1112 = param_1 << 9;
        uVar1 = math::RoundUpToPowerOf2(param_1 << 9);
        field_1112 = uVar1;
        uVar3 = uVar1 + 511;
        if (-1 < (int)uVar1) {
            uVar3 = uVar1;
        }
        field_1108 = (int)uVar3 >> 9;
        uVar2 = logger::default_logger();
        new (&local_b8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
        logger::Logger::Log(uVar2, 0, &local_b8, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "minimap/MiniMap.cpp",
                            411, "%s: Map square build size now: %d", "UpdateBaseRT", field_1108);
        local_b8.~LogStream();
        field_1308 = '\x01';
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003bd420, 240 bytes, placed by class name
    // MiniMap::ClearMinimapDepth(render::RenderTargets const&, math::Rect<int> const&, float)
    void MiniMap::ClearMinimapDepth(RenderTargets* param_1, Rect* param_2, float param_3) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        RenderContext* this_00;
        long lVar6;
        Texture* pTVar7;
        RenderContext* this_01;
        ScissorRectStateSaveRestore local_68;

        this_00 = (RenderContext*)GetRenderContext();
        this_00->SetRenderTargets(param_1);
        new (&local_68) render::ScissorRectStateSaveRestore(this_00);
        iVar1 = param_2->GetX();
        iVar2 = param_2->GetZ();
        iVar3 = param_2->GetPos();
        iVar4 = param_2->GetLevel();
        this_01 = this_00;
        this_00->SetScissorRectangle(true, iVar1, iVar2, iVar3, iVar4);
        lVar6 = this_01->Instance();
        this_00->SetDepthStencilState((DepthStencilState*)(lVar6 + 720));
        pTVar7 = (Texture*)param_1->GetDepthStencilTargetTexture();
        uVar5 = render::GetDepthTextureClearFlags(pTVar7);
        this_00->ClearDepthStencilTarget(param_3, 0, uVar5);
        local_68.~ScissorRectStateSaveRestore();
    }

    // 0x1003bd510, 160 bytes, placed by class name
    // MiniMap::CheckPendingLocationChangeRequests()
    void MiniMap::CheckPendingLocationChangeRequests() {
        char cVar1;
        shared_ptr* psVar2;
        shared_ptr* psVar3;
        vector<shared_ptr<ChangeLocationRequest>, eastl::allocator> local_40[32];

        cVar1 = (&field_1208)->empty();
        if (cVar1 == '\0') {
            eastl::vector<shared_ptr<ChangeLocationRequest>, eastl::allocator>::vector(local_40);
            local_40->swap((vector*)&field_1208);
            psVar3 = (shared_ptr*)local_40->HeapBeginPtr();
            psVar2 = (shared_ptr*)local_40->end();
            for (; psVar3 != psVar2; psVar3 = psVar3 + 1) {
                ForceBaseUpdate(this, psVar3);
            }
            eastl::vector<shared_ptr<ChangeLocationRequest>, eastl::allocator>::~vector(local_40);
        }
    }

    // 0x1003bd5b0, 512 bytes, placed by class name
    // MiniMap::ForceBaseUpdate(shared_ptr<ChangeLocationRequest> const&)
    void MiniMap::ForceBaseUpdate(shared_ptr* param_1) {
        undefined1* this_00;
        ConfigProvider* this_01;
        undefined1 uVar3;
        int iVar4;
        int iVar5;
        HeadbarType* this_02;
        CoordGrid* this_03;
        shared_ptr* psVar6;
        LocType* pLVar7;
        LocData* pLVar8;
        int iVar9;
        int iVar10;
        undefined1 local_68[20];
        float local_54;
        float local_4c;
        MapSquareState* local_48;
        shared_ptr* local_40;
        int local_34;

        this_02 =
            (HeadbarType*)shared_ptr<ChangeLocationRequest>::operator*((shared_ptr<ChangeLocationRequest>*)param_1);
        this_03 = (CoordGrid*)this_02->second();
        iVar4 = this_03->GetMapSquareX();
        iVar5 = this_03->GetMapSquareZ();
        if (FindMapSquareState(this, &local_48, iVar4, iVar5) != '\0') {
            this_01 = field_16;
            iVar4 = this_02->GetStickTime();
            psVar6 = ConfigProvider::GetConfig<LocType>(this_01, iVar4, (DataStatus**)0);
            if (shared_ptr::operator_cast_to_bool(psVar6)) {
                iVar4 = this_03->GetMapSquareX();
                local_40 = psVar6;
                iVar5 = this_03->GetMapSquareZ();
                MakeMapSquareStatePending(this, iVar4, iVar5);
                this_00 = &field_1256;
                iVar4 = this_00->GetMapSquareX();
                iVar5 = this_00->GetMapSquareZ();
                RebuildTileListAndReprioritise(this, (CoordFine*)this_00, iVar4, iVar5);
                new ((local_68 + 16)) CoordFine(this_03, false);
                psVar6 = local_40;
                pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)local_40);
                pLVar8 = (LocData*)this_02->GetOffset();
                uVar3 = pLVar8->GetRot();
                local_34 = pLVar7->GetGridLength(uVar3);
                pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)psVar6);
                pLVar8 = (LocData*)this_02->GetOffset();
                uVar3 = pLVar8->GetRot();
                iVar5 = pLVar7->GetGridWidth(uVar3);
                iVar10 = (int)(local_54 - (float)(int)(field_1304 << 13));
                iVar9 = (int)(local_4c - (float)(int)(field_1288 << 13));
                iVar4 = iVar10 + 15;
                if (-1 < iVar10) {
                    iVar4 = iVar10;
                }
                iVar10 = iVar9 + 15;
                if (-1 < iVar9) {
                    iVar10 = iVar9;
                }
                new (local_68) oldscape::dash3d::GridRect(iVar4 >> 4, iVar10 >> 4, iVar5 * 8, local_34 << 3);
                (&field_1072, (Rect*)local_68)->push();
                (local_48->field_1592, this_03, 5)->SetProgress();
                local_48->field_12 = 5;
                field_1056 = 1;
            } else {
                (&field_1208, param_1)->push_back();
            }
        }
    }

    // 0x1003bd7b0, 80 bytes, placed by class name
    // MiniMap::FindMapSquareState(MiniMap::MapSquareState*&, int, int)
    undefined4 MiniMap::FindMapSquareState(MapSquareState** param_1, int param_2, int param_3) {
        char cVar1;
        undefined4 uVar2;
        undefined4 in_register_0000000c;

        cVar1 = FindMapSquareStateInList((MapSquareState**)this, (int)param_1, param_2,
                                         (fixed_list*)CONCAT44(in_register_0000000c, param_3));
        uVar2 = 1;
        if (cVar1 == '\0') {
            uVar2 = FindMapSquareStateInList((MapSquareState**)this, (int)param_1, param_2,
                                             (fixed_list*)(ulong)(uint)param_3);
        }
        return uVar2;
    }

    // 0x1003bd850, 240 bytes, placed by class name
    // MiniMap::MakeMapSquareStatePending(int, int)
    void MiniMap::MakeMapSquareStatePending(int param_1, int param_2) {
        bool bVar1;
        MapSquareState* this_00;
        MapSquareState* pMVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_58;
        MiniMap* local_50;
        list<jag::console::Line, eastl::allocator> local_48[8];
        list<jag::console::Line, eastl::allocator> local_40[12];

        local_50 = this;
        eastl::list<jag::console::Line, eastl::allocator>::begin(local_48);
        eastl::list<jag::console::Line, eastl::allocator>::end(local_40);
        bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX);
        if (bVar1) {
            do {
                this_00 = (MapSquareState*)
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_48);
                if ((this_00->field_0 == param_1) && (this_00->field_4 == (uint)param_2)) {
                    pMVar2 = (MapSquareState*)(&local_50->field_1424)->push_back();
                    this_00->swap(pMVar2);
                    new (&local_58)
                        eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                            shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_48);
                    eastl::list<MiniMap::MapSquareState,
                                eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true,
                                                            eastl::allocator>>::erase(local_40, &field_99696, local_58);
                    return;
                }
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_48);
                eastl::list<jag::console::Line, eastl::allocator>::end(local_40);
                bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            } while (bVar1);
        }
    }

    // 0x1003bd970, 32 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::SetProgress(CoordGrid const&, LODLevel)
    void MiniMap::MapSquareState::TileState::SetProgress(CoordGrid* param_1, undefined1 param_3) {
        uint uVar1;

        uVar1 = GetKey(this, param_1);
        (&field_0)[uVar1] = param_3;
    }

    // 0x1003bd990, 400 bytes, placed by class name
    // MiniMap::ResizeRenderBuffer(int, int)
    void MiniMap::ResizeRenderBuffer(int param_1, int param_2) {
        int iVar1;
        undefined8 uVar2;
        GUIManager* this_00;
        RenderTargets* this_01;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        undefined8* puVar3;
        int iVar4;
        MiniMap* this_03;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((field_1116 != param_1) || (field_1120 != param_2)) {
            uVar2 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
            logger::Logger::Log(uVar2, 0, &local_c8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/minimap/MiniMap.cpp",
                                372, "%s: %d x %d", "ResizeRenderBuffer", param_1, param_2);
            local_c8.~LogStream();
            field_1116 = param_1;
            field_1120 = param_2;
            this_00 = (GUIManager*)field_8->GetGUIManager();
            this_01 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_1168);
            this_02 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    this_01->GetColourTargetTextures();
            puVar3 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_02, 0);
            this_00->RemoveCurrentTexture((Texture*)*puVar3);
            DestroyCompositingRT(this);
            this_03 = this;
            CreateCompositingRT(this);
            CalcBuildMapSquares(this_03, field_1116, field_1120);
            iVar1 = math::RoundUpToPowerOf2(field_1108 << 9);
            iVar4 = iVar1 + 511;
            if (-1 < iVar1) {
                iVar4 = iVar1;
            }
            if (iVar4 >> 9 != field_1108) {
                field_1108 = iVar4 >> 9;
                ForceBaseUpdate(this);
            }
            field_1309 = 1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003bdb20, 1136 bytes, placed by class name
    // MiniMap::MainDraw(unsigned int, unsigned int, shared_ptr<World> const&, CoordFine const&, float, float, std::function<void (MiniMap&, CoordFine const&)> const&)
    /* MiniMap::MainDraw(unsigned int, unsigned int, shared_ptr<World>
   const&, CoordFine const&, float, float, std::function<void (MiniMap&,
   CoordFine const&)> const&) */

    void MiniMap::MainDraw(uint param_1, uint param_2, shared_ptr* param_3, CoordFine* param_4, float param_5,
                           float param_6, function* param_7) {
        undefined1* this_00;
        bool bVar1;
        bool bVar2;
        char cVar3;
        char cVar4;
        int iVar5;
        uint uVar6;
        World* this_01;
        GUIManager* pGVar7;
        ulonglong uVar8;
        undefined8 uVar9;
        RenderTargets* pRVar10;
        Rect* pRVar11;
        float fVar12;
        GUIProjectionSaveRestore local_120;
        float local_e8;
        World* local_e0;
        CoordFine* local_d0;
        LogStream local_c8;
        long local_38;

        local_d0 = (CoordFine*)CONCAT44(local_d0._4_4_, param_6);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (DRAW_MINIMAP != '\0') {
            this_01 = (World*)shared_ptr<World>::operator*((shared_ptr<World>*)param_3);
            iVar5 = param_4->GetMapSquareX();
            if (((iVar5 != 0) || (iVar5 = param_4->GetMapSquareZ(), iVar5 != 0)) &&
                (cVar3 = this_01->GetMainSceneDrawn(), cVar3 != '\0')) {
                local_e0 = this_01;
                pGVar7 = (GUIManager*)field_8->GetGUIManager();
                new (&local_120) graphics::GUIProjectionSaveRestore(pGVar7);
                if (FORCE_TOTAL_REBUILD != '\0') {
                    ForceBaseUpdate(this);
                    FORCE_TOTAL_REBUILD = '\0';
                }
                uVar8 = FrameTime::GetCurrentTimeMS();
                if ((local_d0._0_4_ != field_1052) || (field_1052 == 0.0)) {
                    field_1052 = local_d0._0_4_;
                    local_e8 = local_d0._0_4_ * 0.5;
                    (&field_1016, &local_e8, 200, uVar8)->SetValue();
                }
                fVar12 = (float)(&field_1016, uVar8)->GetValue();
                field_1048 = fVar12;
                local_d0 = param_4;
                if (param_4->field_0 != 4294967295) {
                    if (*(uint*)&field_1184 != param_4->field_0) {
                        uVar9 = logger::default_logger();
                        new (&local_c8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
                        logger::Logger::Log(uVar9, 0, &local_c8, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/minimap/MiniMap.cpp",
                                            465, "%s: Level changed, need to clerar redraw everything", "MainDraw");
                        local_c8.~LogStream();
                        field_1012 = 1;
                        UpdateBaseRT(this, field_1108);
                    }
                    CoordFine::operator=((CoordFine*)&field_1184, param_4);
                    field_1200 = param_5;
                    if (field_1240 != -1) {
                        iVar5 = param_4->GetMapSquareX();
                        bVar1 = true;
                        if ((((int)field_1304 <= iVar5) && (iVar5 = param_4->GetMapSquareX(), iVar5 < field_1296)) &&
                            ((iVar5 = param_4->GetMapSquareZ(),
                              iVar5 < field_1280 && (iVar5 = param_4->GetMapSquareZ(), (int)field_1288 <= iVar5)))) {
                            uVar6 = param_4->GetMapSquareX();
                            if (uVar6 == field_1304) {
                                iVar5 = param_4->GetLocalX();
                                bVar1 = iVar5 < 32;
                            } else {
                                iVar5 = param_4->GetMapSquareX();
                                if (iVar5 == field_1296 + -1) {
                                    iVar5 = param_4->GetLocalX();
                                    bVar1 = 32 < iVar5;
                                } else {
                                    bVar1 = false;
                                }
                            }
                        }
                        uVar6 = param_4->GetMapSquareZ();
                        if (uVar6 == field_1288) {
                            iVar5 = param_4->GetLocalZ();
                            bVar2 = true;
                            if (31 < iVar5) {
                                bVar2 = bVar1;
                            }
                        } else {
                            iVar5 = param_4->GetMapSquareZ();
                            bVar2 = bVar1;
                            if (iVar5 == field_1280 + -1) {
                                iVar5 = param_4->GetLocalZ();
                                bVar2 = true;
                                if (iVar5 < 33) {
                                    bVar2 = bVar1;
                                }
                            }
                        }
                        if (bVar2) {
                            UpdateBaseRT(this, field_1108);
                        } else {
                            *(float*)&field_1248 = param_4->field_8;
                        }
                    }
                    if ((*(int*)&field_1256 != -1) && (250 < param_2 - field_1064)) {
                        field_1064 = param_2;
                        SetAllSquaresIncomplete(this);
                    }
                    CheckMapElementList(this, local_e0);
                    if ((field_1240 != -1) && (field_1309 != 0)) {
                        UpdateBase(this, param_1, local_e0, (CoordFine*)&field_1240);
                    }
                    cVar3 = field_1308;
                    if (cVar3 != '\0') {
                        BuildBase(this, local_d0);
                    }
                    this_00 = &field_1072;
                    while (cVar4 = this_00->empty(), cVar4 == '\0') {
                        pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator*(
                            (shared_ptr<render::RenderTargets>*)field_1144);
                        pRVar11 = (Rect*)this_00->top();
                        ClearMinimapDepth(this, pRVar10, pRVar11, 1.0);
                        this_00->pop();
                    }
                    if (cVar3 == '\0') {
                        RenderLayers(this, local_e0, local_d0, param_5, param_7);
                    }
                }
                local_120.~GUIProjectionSaveRestore();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003bdf90, 192 bytes, placed by class name
    // MiniMap::SetAllSquaresIncomplete()
    void MiniMap::SetAllSquaresIncomplete() {
        undefined1* this_00;
        bool bVar1;
        MapSquareState* pMVar2;
        MapSquareState* this_01;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<jag::console::Line, eastl::allocator> local_48[8];
        list<jag::console::Line, eastl::allocator> local_40[8];
        MiniMap* local_38;

        local_38 = this;
        eastl::list<jag::console::Line, eastl::allocator>::begin(local_48);
        eastl::list<jag::console::Line, eastl::allocator>::end(local_40);
        bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX);
        if (bVar1) {
            this_00 = &local_38->field_1424;
            do {
                pMVar2 = (MapSquareState*)
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_48);
                this_01 = (MapSquareState*)this_00->push_back();
                this_01->swap(pMVar2);
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_48);
                bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            } while (bVar1);
        }
        (&field_99696)->clear();
        local_38->field_1309 = 1;
    }

    // 0x1003be050, 240 bytes, placed by class name
    // MiniMap::CheckMapElementList(World const&)
    void MiniMap::CheckMapElementList(World* param_1) {
        undefined1* this_00;
        MapElementListEntry* pMVar2;
        MapElementListEntry* pMVar3;
        undefined1* this_01;

        if ((((field_1408 != field_1280) || (field_1412 != field_1288)) || (field_1416 != field_1296)) ||
            (field_1420 != field_1304)) {
            if (BuildMapElementList(this, param_1, field_1240) != '\0') {
                field_1408 = field_1280;
                field_1412 = field_1288;
                field_1416 = field_1296;
                field_1420 = field_1304;
                this_00 = &field_1312;
                this_00->clear();
                pMVar2 = (MapElementListEntry*)this_00->end();
                this_01 = &field_1376;
                pMVar3 = (MapElementListEntry*)this_01->HeapBeginPtr();
                this_01->end();
                eastl::vector<MiniMap::MapElementListEntry, eastl::allocator>::insert<MiniMap::MapElementListEntry*>(
                    (MapElementListEntry*)this_00, pMVar2, pMVar3);
                this_01->clear();
            }
        }
    }

    // 0x1003be140, 1552 bytes, placed by class name
    // MiniMap::UpdateBase(unsigned int, World&, CoordFine const&)
    void MiniMap::UpdateBase(uint param_1, World* param_2, CoordFine* param_3) {
        undefined1* this_00;
        MapElementListEntry* pMVar1;
        bool bVar2;
        char cVar3;
        byte bVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        undefined4 uVar8;
        RT7Core* this_01;
        RenderContext* pRVar9;
        RenderTargets* pRVar10;
        Viewport* pVVar11;
        OutputMergerState* this_02;
        MapSquareState* pMVar12;
        undefined8 uVar13;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined8* puVar14;
        int* piVar15;
        undefined* puVar16;
        MapElementListEntry* pMVar17;
        MapElementListEntry* pMVar18;
        long lVar19;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        hashtable_iterator_base* extraout_RDX_03;
        hashtable_iterator_base* extraout_RDX_04;
        undefined1 local_17d0[72];
        MapElementListEntry* local_1788;
        list<MiniMap::MapSquareState, eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*
            local_1780;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1778;
        World* local_1770;
        CoordFine* local_1768;
        RT7Core* local_1760;
        uint local_1754;
        list<jag::console::Line, eastl::allocator> local_1750[8];
        LogStream local_1748;
        MapSquareState local_16b8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1770 = param_2;
        local_1768 = param_3;
        local_1754 = param_1;
        CheckPendingLocationChangeRequests(this);
        new (local_17d0) graphics::ClippingState(field_8);
        (field_8, 0, 0, field_1112, field_1112, true)->SetClippingRectangle();
        SetupBaseCameraFrameBuffer(this, (SceneViewData*)field_80, local_1768);
        local_1788 = (MapElementListEntry*)&field_1344;
        local_1788->clear();
        if (field_1056 != '\0') {
            iVar5 = (&field_1184)->GetMapSquareX();
            iVar6 = (&field_1184)->GetMapSquareZ();
            PutSquareAtTopOfPendingList(this, iVar5, iVar6);
        }
        this_01 = (RT7Core*)field_8->GetGUIManager();
        local_1760 = this_01;
        this_01->SetProjection(2, field_1112);
        pRVar9 = (RenderContext*)this_01->GetRenderContext();
        local_1778 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_1144;
        pRVar10 =
            (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_1778);
        CheckClearingRequirements(this, pRVar9, pRVar10);
        new ((local_17d0 + 24)) render::DrawCallState();
        pVVar11 = (Viewport*)((local_17d0 + 24))->GetOutputMergerState();
        uVar7 = ((field_80 + 432))->HeapBeginPtr();
        render::OutputMergerState::SetViewports(pVVar11, uVar7);
        this_02 = (OutputMergerState*)((local_17d0 + 24))->GetOutputMergerState();
        pRVar10 =
            (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_1778);
        this_02->SetRenderTargets(pRVar10);
        local_1760->Begin((DrawCallState*)(local_17d0 + 24));
        field_1060 = 0;
        this_00 = &field_1424;
        local_16b8.begin();
        eastl::list<jag::console::Line, eastl::allocator>::end(local_1750);
        bVar2 = eastl::operator!=((eastl*)&local_16b8, (hashtable_iterator_base*)local_1750, extraout_RDX);
        if (bVar2) {
            do {
                pMVar12 = (MapSquareState*)
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)&local_16b8);
                RenderMapSquareIntoBase(this, local_1754, local_1770, pMVar12, local_1768, true, false);
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)&local_16b8);
                bVar2 = eastl::operator!=((eastl*)&local_16b8, (hashtable_iterator_base*)local_1750, extraout_RDX_00);
            } while (bVar2);
        }
        local_1780 = (list<MiniMap::MapSquareState,
                           eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)&field_99696;
        uVar8 = this_00->size();
        iVar5 = eastl::min<graphics::GraphicsQuality>(uVar8);
        if (0 < iVar5) {
            iVar5 = 0;
            do {
                new (&local_16b8) MapSquareState();
                pMVar12 = (MapSquareState*)
                    eastl::list<MiniMap::MapSquareState,
                                eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::front();
                local_16b8.swap(pMVar12);
                this_00->pop_front();
                cVar3 = RenderMapSquareIntoBase(this, local_1754, local_1770, &local_16b8, local_1768, false, true);
                if (cVar3 == '\0') {
                    pMVar12 = (MapSquareState*)this_00->push_back();
                    local_16b8.swap(pMVar12);
                } else {
                    uVar13 = logger::default_logger();
                    new (&local_1748) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
                    logger::Logger::Log(uVar13, 0, &local_1748, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/minimap/MiniMap.cpp",
                                        637, "%s: Map square completed: %d,%d", "UpdateBase", local_16b8.field_0,
                                        local_16b8.field_4);
                    local_1748.~LogStream();
                    pMVar12 = (MapSquareState*)eastl::list<
                        MiniMap::MapSquareState, eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>::push_back(local_1780);
                    local_16b8.swap(pMVar12);
                }
                local_16b8.~MapSquareState();
                iVar5 = iVar5 + 1;
                uVar8 = this_00->size();
                iVar6 = eastl::min<graphics::GraphicsQuality>(uVar8);
            } while (iVar5 < iVar6);
        }
        if (field_1310 != '\0') {
            field_1310 = 0;
            pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_1778);
            this_03 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar10->GetColourTargetTextures();
            puVar14 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_03, 0);
            (*puVar14)->GenerateMipMaps();
        }
        bVar4 = this_00->empty();
        field_1309 = bVar4 ^ 1;
        local_16b8.begin();
        eastl::list<jag::console::Line, eastl::allocator>::end(local_1750);
        bVar2 = eastl::operator!=((eastl*)&local_16b8, (hashtable_iterator_base*)local_1750, extraout_RDX_01);
        pMVar1 = local_1788;
        if (bVar2) {
            do {
                piVar15 =
                    (int*)eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)&local_16b8);
                puVar16 = (undefined*)local_1770->GetMapSquareStatus(*piVar15, piVar15[1]);
                if (puVar16 != DataStatus::MISSING) {
                    pMVar17 = (MapElementListEntry*)pMVar1->end();
                    pMVar18 = (MapElementListEntry*)((piVar15 + 4))->HeapBeginPtr();
                    ((piVar15 + 4))->end();
                    eastl::vector<MiniMap::MapElementListEntry,
                                  eastl::allocator>::insert<MiniMap::MapElementListEntry*>(pMVar1, pMVar17, pMVar18);
                }
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)&local_16b8);
                bVar2 = eastl::operator!=((eastl*)&local_16b8, (hashtable_iterator_base*)local_1750, extraout_RDX_02);
            } while (bVar2);
        }
        local_16b8.begin();
        eastl::list<jag::console::Line, eastl::allocator>::end(local_1750);
        bVar2 = eastl::operator!=((eastl*)&local_16b8, (hashtable_iterator_base*)local_1750, extraout_RDX_03);
        pMVar1 = local_1788;
        if (bVar2) {
            do {
                lVar19 = eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)&local_16b8);
                pMVar17 = (MapElementListEntry*)pMVar1->end();
                pMVar18 = (MapElementListEntry*)((lVar19 + 16))->HeapBeginPtr();
                ((lVar19 + 16))->end();
                eastl::vector<MiniMap::MapElementListEntry, eastl::allocator>::insert<MiniMap::MapElementListEntry*>(
                    pMVar1, pMVar17, pMVar18);
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)&local_16b8);
                bVar2 = eastl::operator!=((eastl*)&local_16b8, (hashtable_iterator_base*)local_1750, extraout_RDX_04);
            } while (bVar2);
        }
        local_1760->Render(0);
        local_1760->End();
        ((local_17d0 + 24))->~DrawCallState();
        local_17d0->~ClippingState();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003be750, 1760 bytes, placed by class name
    // MiniMap::BuildBase(CoordFine const&)
    void MiniMap::BuildBase(CoordFine* param_1) {
        Vector3T<float>* this_00;
        Layout* this_01;
        undefined1* this_02;
        float fVar1;
        bool bVar2;
        int iVar4;
        GUIManager* pGVar5;
        undefined8 uVar6;
        char* pcVar7;
        float* pfVar8;
        vector* pvVar9;
        RT7Core* this_03;
        RenderContext* this_04;
        Viewport* pVVar10;
        OutputMergerState* pOVar11;
        RenderTargets* pRVar12;
        Vector4T* pVVar13;
        long lVar14;
        int iVar15;
        int iVar16;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        int iVar17;
        int iVar19;
        uint uVar18;
        int iVar20;
        int iVar21;
        int iVar22;
        float fVar23;
        GUIProjectionSaveRestore local_298;
        undefined1 local_268[48];
        ImVec4 local_238[16];
        DrawCallState local_228;
        list<jag::console::Line, eastl::allocator> local_1f8[8];
        list<jag::console::Line, eastl::allocator> local_1f0[8];
        undefined1 local_1e8[28];
        float local_1cc;
        float local_1c8;
        float local_1c4;
        LogStream local_1c0;
        LogStream local_130;
        fixed_string<char, 64, true, eastl::allocator> local_a0[104];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_a0);
        new ((local_268 + 24)) graphics::ClippingState(field_8);
        (field_8, 0, 0, field_1112, field_1112, true)->SetClippingRectangle();
        pGVar5 = (GUIManager*)field_8->GetGUIManager();
        new (&local_298) graphics::GUIProjectionSaveRestore(pGVar5);
        uVar6 = logger::default_logger();
        new (&local_130) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
        pcVar7 = CoordFine::ToString<64, true>(param_1, (fixed_string*)local_a0);
        logger::Logger::Log(uVar6, 0, &local_130, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "minimap/MiniMap.cpp",
                            758, "%s: %s", "BuildBase", pcVar7);
        local_130.~LogStream();
        local_1e8._0_4_ = param_1->field_0;
        local_1e8._4_4_ = param_1->field_4;
        local_1e8._8_4_ = param_1->field_8;
        local_1e8._12_4_ = param_1->field_12;
        iVar17 = field_1108;
        this_00 = (Vector3T<float>*)(local_1e8 + 4);
        pfVar8 = (float*)math::Vector3T<float>::operator[](this_00, 2);
        local_1c8 = (float)(iVar17 << 13);
        local_1c4 = (float)(int)local_1c8 * 0.5;
        iVar20 = (int)((*pfVar8 + local_1c4) * 0.0078125 + 32.0);
        iVar17 = iVar20 + 63;
        if (-1 < iVar20) {
            iVar17 = iVar20;
        }
        pfVar8 = (float*)math::Vector3T<float>::operator[](this_00, 2);
        iVar21 = (int)((*pfVar8 - local_1c4) * 0.0078125 + 32.0);
        iVar22 = iVar21 + 63;
        if (-1 < iVar21) {
            iVar22 = iVar21;
        }
        pfVar8 = (float*)math::Vector3T<float>::operator[](this_00, 0);
        local_1cc = *pfVar8 + local_1c4;
        pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)(local_1e8 + 4), 0);
        iVar16 = (int)(local_1cc * 0.0078125 + 32.0);
        iVar15 = iVar16 + 63;
        if (-1 < iVar16) {
            iVar15 = iVar16;
        }
        iVar4 = (int)((*pfVar8 - local_1c4) * 0.0078125 + 32.0);
        iVar19 = iVar4 + 63;
        if (-1 < iVar4) {
            iVar19 = iVar4;
        }
        uVar18 = iVar19 >> 6;
        field_1272 = local_1c8;
        field_1276 = iVar20;
        field_1280 = iVar17 >> 6;
        field_1284 = iVar21;
        field_1288 = iVar22 >> 6;
        field_1292 = iVar16;
        field_1296 = iVar15 >> 6;
        field_1300 = iVar4;
        field_1304 = uVar18;
        this_01 = (Layout*)(local_1e8 + 4);
        if (field_1108 < (int)((iVar15 >> 6) - uVar18)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_baseMapSquareEast - m_baseMapSquareWest) <= m_buildMapSquares",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      787, (char*)0);
        }
        local_1c4 = ((float)field_1108 * 0.5 + (float)(int)field_1304) * 8192.0;
        pvVar9 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)(ulong)uVar18);
        *(float*)pvVar9 = local_1c4;
        local_1c4 = ((float)field_1108 * 0.5 + (float)(int)field_1288) * 8192.0;
        pfVar8 = (float*)this_01->second();
        *pfVar8 = local_1c4;
        pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_01, 0);
        local_1c4 = *pfVar8;
        pfVar8 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)this_01, 2);
        local_1c8 = *pfVar8;
        this_02 = field_1144;
        bVar2 = this_02->operator_cast_to_bool();
        if (bVar2) {
            this_03 =
                (RT7Core*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)this_02);
            if (this_03->HasColourTargets() != '\0') {
                this_04 = (RenderContext*)this_03->GetRenderContext();
                new (&local_228) render::DrawCallState();
                ImVec4::ImVec4(local_238, 0.0, 0.0, 0.0, 1.0);
                new (local_268) render::Viewport(0, 0, field_1112, field_1112, 0.0, 1.0);
                pVVar10 = (Viewport*)local_228.GetOutputMergerState();
                render::OutputMergerState::SetViewports(pVVar10, (uint)local_268);
                pOVar11 = (OutputMergerState*)local_228.GetOutputMergerState();
                pRVar12 = (RenderTargets*)this_02->end();
                pOVar11->SetRenderTargets(pRVar12);
                pVVar13 = (Vector4T*)local_228.GetOutputMergerState();
                render::OutputMergerState::SetClearColours(pVVar13, (uint)local_238);
                pOVar11 = (OutputMergerState*)local_228.GetOutputMergerState();
                pOVar11->SetClearFlags(3);
                this_04->BindDrawCallState(&local_228);
                local_1c4 = (float)(int)(local_1c4 * 0.00012207031);
                fVar23 = local_1c8 * 0.00012207031;
                eastl::list<jag::console::Line, eastl::allocator>::begin(local_1f8);
                eastl::list<jag::console::Line, eastl::allocator>::end(local_1f0);
                bVar2 = eastl::operator!=((eastl*)local_1f8, (hashtable_iterator_base*)local_1f0, extraout_RDX);
                if (bVar2) {
                    do {
                        lVar14 = eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::
                        operator*(
                            (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                        *(undefined1*)(lVar14 + 12) = 5;
                        eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                            (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_1f8);
                        bVar2 =
                            eastl::operator!=((eastl*)local_1f8, (hashtable_iterator_base*)local_1f0, extraout_RDX_00);
                    } while (bVar2);
                }
                local_228.~DrawCallState();
                fVar1 = local_1c4;
                RebuildTileListAndReprioritise(this, (CoordFine*)local_1e8, (int)local_1c4, (int)fVar23);
                PrepareRebuildList(this, (int)fVar1, (int)fVar23);
                field_1308 = '\0';
                field_1309 = 1;
                field_1310 = 1;
                CoordFine::operator=((CoordFine*)&field_1240, (CoordFine*)local_1e8);
                CoordFine::operator=((CoordFine*)&field_1256, (CoordFine*)local_1e8);
                uVar6 = logger::default_logger();
                new (&local_1c0) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
                logger::Logger::Log(uVar6, 0, &local_1c0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/minimap/MiniMap.cpp",
                                    844, "%s: Base build complete!", "BuildBase");
                local_1c0.~LogStream();
                local_298.~GUIProjectionSaveRestore();
                ((local_268 + 24))->~ClippingState();
                /* WARNING: Subroutine does not return */
                local_a0->~fixed_string();
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_baseRT && m_baseRT->HasColourTargets()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/minimap/"
                  "MiniMap.cpp",
                  795, (char*)0);
    }

    // 0x1003bee50, 2192 bytes, placed by class name
    // MiniMap::RenderLayers(World const&, CoordFine const&, float, std::function<void (MiniMap&, CoordFine const&)> const&)
    /* MiniMap::RenderLayers(World const&, CoordFine const&, float,
   std::function<void (MiniMap&, CoordFine const&)> const&) */

    void MiniMap::RenderLayers(World* param_1, CoordFine* param_2, float param_3, function* param_4) {
        undefined1* puVar1;
        uint uVar2;
        int iVar3;
        CoordFine* pCVar4;
        World* pWVar5;
        bool bVar6;
        int iVar7;
        RenderContext* this_00;
        GUIManager* pGVar8;
        DrawCallState* pDVar9;
        RenderTargets* pRVar10;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar11;
        long* plVar12;
        undefined8* puVar13;
        vector* pvVar14;
        long lVar15;
        undefined8 uVar16;
        int* piVar17;
        Viewport* pVVar18;
        OutputMergerState* this_01;
        SceneManager* this_02;
        EffectManager* pEVar19;
        SunlightDirectLighting* this_03;
        DirectionalLight* this_04;
        ulonglong uVar20;
        float* pfVar21;
        float* pfVar22;
        MapElementListEntry* pMVar23;
        MapElementListEntry* pMVar24;
        GridRect* pGVar25;
        type* ptVar26;
        int iVar27;
        int iVar28;
        undefined4 uVar29;
        float fVar30;
        float fVar31;
        GUIProjectionSaveRestore local_168;
        undefined1 local_138[24];
        DrawCallState local_120;
        DrawCallState local_f0;
        undefined8 local_c0[2];
        MiniMap* local_b0;
        float local_a8;
        CoordMapSquare local_98;
        ImVec4 local_88[20];
        float local_74;
        float local_70;
        float local_6c;
        GridRect local_68;
        CoordFine* local_50;
        World* local_48;
        GUIManager* local_40;
        MiniMap* local_38;

        local_b0 = (MiniMap*)param_4;
        local_a8 = param_3;
        this_00 = (RenderContext*)GetRenderContext();
        pGVar8 = (GUIManager*)field_8->GetGUIManager();
        local_38 = this;
        new (local_138) graphics::ClippingState(field_8);
        local_40 = pGVar8;
        new (&local_168) graphics::GUIProjectionSaveRestore(pGVar8);
        if (((DEBUG_BASE_RT != '\0') || (DEBUG_COMPOSITE_RT != '\0')) || (DEBUG_BASE_DEPTH_BUFFER != '\0')) {
            new (&local_f0) render::DrawCallState();
            local_38->field_8->SetClippingRectToViewport();
            pDVar9 = (DrawCallState*)local_40->GetCurrentState();
            new ((local_138 + 24)) render::DrawCallState(pDVar9);
            local_40->Begin((DrawCallState*)(local_138 + 24));
            iVar7 = local_38->field_8->GetInterfaceWidth();
            iVar27 = iVar7 + 3;
            if (-1 < iVar7) {
                iVar27 = iVar7;
            }
            iVar27 = iVar27 >> 2;
            new (&local_68) oldscape::dash3d::GridRect(0, 100, iVar27, iVar27);
            ImVec4::ImVec4(local_88, 0.0, 1.0, 0.0, 0.0);
            local_88->SetRight(1.0);
            local_88->SetBottom(0.0);
            if (DEBUG_BASE_RT != '\0') {
                puVar1 = local_38->field_1144;
                pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                pvVar11 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar10->GetColourTargetTextures();
                plVar12 = (long*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar11, 0);
                if (*plVar12 != 0) {
                    pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)puVar1);
                    pvVar11 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar10->GetColourTargetTextures();
                    puVar13 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar11,
                                                                                                               0);
                    pGVar25 = &local_68;
                    local_40->AddElement(pGVar25, 4294967295, local_88, *puVar13, 0);
                    pvVar14 = local_68.SSOBeginPtr(pGVar25);
                    *(int*)pvVar14 = *(int*)pvVar14 + iVar27 + 10;
                }
            }
            if (DEBUG_BASE_DEPTH_BUFFER != '\0') {
                puVar1 = local_38->field_1144;
                pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                lVar15 = pRVar10->GetDepthStencilTargetTexture();
                if (lVar15 != 0) {
                    pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)puVar1);
                    uVar16 = pRVar10->GetDepthStencilTargetTexture();
                    pGVar25 = &local_68;
                    local_40->AddElement(pGVar25, 4294967295, local_88, uVar16, 0);
                    pvVar14 = local_68.SSOBeginPtr(pGVar25);
                    *(int*)pvVar14 = *(int*)pvVar14 + iVar27 + 10;
                }
            }
            if (DEBUG_COMPOSITE_RT != '\0') {
                puVar1 = local_38->field_1168;
                pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)puVar1);
                pvVar11 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar10->GetColourTargetTextures();
                plVar12 = (long*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar11, 0);
                if (*plVar12 != 0) {
                    piVar17 = (int*)local_68.second();
                    *piVar17 = *piVar17 / 2;
                    piVar17 = (int*)local_68.qw();
                    *piVar17 = *piVar17 / 2;
                    pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)puVar1);
                    pvVar11 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar10->GetColourTargetTextures();
                    puVar13 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar11,
                                                                                                               0);
                    local_40->AddElement(&local_68, 4294967295, local_88, *puVar13, 0);
                }
            }
            local_40->Render(0);
            local_40->End();
            ((local_138 + 24))->~DrawCallState();
            local_f0.~DrawCallState();
        }
        new (&local_f0) render::DrawCallState();
        new ((local_138 + 24)) render::Viewport(0, 0, local_38->field_1124, local_38->field_1124, 0.0, 1.0);
        pVVar18 = (Viewport*)local_f0.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar18, (int)local_138 + 24);
        this_01 = (OutputMergerState*)local_f0.GetOutputMergerState();
        puVar1 = local_38->field_1168;
        pRVar10 = (RenderTargets*)puVar1->end();
        this_01->SetRenderTargets(pRVar10);
        local_40->Begin(&local_f0);
        (local_38->field_8, 0, 0, local_38->field_1124, local_38->field_1124, true)->SetClippingRectangle();
        pGVar25 = &local_68;
        uVar29 = 0;
        new (pGVar25) ImVec4(0.0, 0.0, 0.0, 1.0);
        lVar15 = pGVar25->Instance();
        this_00->SetBlendState((BlendState*)(lVar15 + 1524));
        pRVar10 = (RenderTargets*)puVar1->end();
        this_00->ClearRenderTargets(pRVar10, (Vector4T*)&local_68, 1);
        local_40->SetProjection(2, local_38->field_1124);
        if (ENABLE_BASE_LAYER != '\0') {
            if (ENABLE_ENVIRONMENT_TINTING == '\0') {
                uVar29 = 4294967295;
            } else {
                this_02 = (SceneManager*)param_1->size();
                pEVar19 = (EffectManager*)this_02->GetEffectManager();
                this_03 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar19, 29);
                this_04 = (DirectionalLight*)this_03->GetDefaultValue();
                uVar20 = FrameTime::GetCurrentTimeMS();
                local_c0[0] = this_04->GetAmbientColour(uVar20);
                local_c0[1]._0_4_ = uVar29;
                local_98._0_8_ = math::operator*((Vector3T*)local_c0, 4.0);
                local_98._8_4_ = uVar29;
                new (local_88) math::Vector4T<float>((Vector3T*)&local_98, 1.0);
                new (&local_98) math::ColourStorage8888<math::RGBA8StorageLayout>(local_88);
                uVar29 = local_98.GetX();
            }
            pfVar21 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&param_2->field_4, 0);
            local_50._0_4_ = *pfVar21;
            puVar1 = &local_38->field_1244;
            pfVar21 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)puVar1, 0);
            local_50 = (CoordFine*)CONCAT44(local_50._4_4_, local_50._0_4_ - *pfVar21);
            pfVar21 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)puVar1, 2);
            local_48._0_4_ = *pfVar21;
            pfVar21 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&param_2->field_4, 2);
            local_70 = (float)(int)local_38->field_1124;
            local_74 = (float)(int)local_38->field_1112;
            local_48 = (World*)CONCAT44(local_48._4_4_, local_48._0_4_ - *pfVar21);
            local_6c = local_38->field_1048;
            pRVar10 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)local_38->field_1144);
            pvVar11 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar10->GetColourTargetTextures();
            puVar13 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar11, 0);
            fVar31 = local_70 * 0.5;
            fVar30 = local_74 * 0.5;
            iVar27 = (int)local_38->field_1124 / 2;
            0->AddElementRotated(1065353216, 1065353216, 0, -local_a8, local_40,
                                 (int)(fVar31 - (fVar30 + local_50._0_4_ * 0.0625) * local_6c),
                                 (int)(fVar31 - (fVar30 + local_48._0_4_ * 0.0625) * local_6c),
                                 (int)((fVar30 - local_50._0_4_ * 0.0625) * local_6c + fVar31),
                                 (int)((fVar30 - local_48._0_4_ * 0.0625) * local_6c + fVar31), uVar29, *puVar13, 0,
                                 iVar27, iVar27);
            local_40->Render(0);
        }
        ptVar26 = (type*)local_38->field_80;
        SetupMiniMapCameraCompositeBuffer(local_38, (SceneViewData*)ptVar26, param_2, local_a8);
        uVar2 = local_38->field_1124;
        pfVar21 = &param_2->field_4;
        local_50 = param_2;
        local_48 = param_1;
        pvVar14 = pfVar21->SSOBeginPtr(ptVar26);
        iVar7 = (int)*(float*)pvVar14 + uVar2 * -1024;
        pvVar14 = pfVar21->SSOBeginPtr(ptVar26);
        iVar27 = (int)*(float*)pvVar14 + uVar2 * 1024;
        pfVar22 = (float*)pfVar21->second();
        iVar28 = (int)*pfVar22 + uVar2 * -1024;
        pfVar21 = (float*)pfVar21->second();
        local_a8 = (float)((int)*pfVar21 + uVar2 * 1024);
        puVar1 = &local_38->field_1312;
        pMVar23 = (MapElementListEntry*)puVar1->HeapBeginPtr();
        pMVar24 = (MapElementListEntry*)puVar1->end();
        for (; pMVar23 != pMVar24; pMVar23 = (MapElementListEntry*)&pMVar23[1].field_8) {
            if (((iVar7 <= *(int*)&pMVar23->field_0) && (*(int*)&pMVar23->field_0 < iVar27)) &&
                ((iVar3 = *(int*)((long)&pMVar23->field_0 + 4), iVar28 <= iVar3 && (iVar3 < (int)local_a8)))) {
                DrawMapElement(local_38, pMVar23);
            }
        }
        puVar1 = &local_38->field_1344;
        pMVar23 = (MapElementListEntry*)puVar1->HeapBeginPtr();
        pMVar24 = (MapElementListEntry*)puVar1->end();
        pCVar4 = local_50;
        for (; local_50 = pCVar4, pMVar23 != pMVar24; pMVar23 = (MapElementListEntry*)&pMVar23[1].field_8) {
            if (((iVar7 <= *(int*)&pMVar23->field_0) && (*(int*)&pMVar23->field_0 < iVar27)) &&
                ((iVar3 = *(int*)((long)&pMVar23->field_0 + 4), iVar28 <= iVar3 && (iVar3 < (int)local_a8)))) {
                DrawMapElement(local_38, pMVar23);
            }
            pCVar4 = local_50;
        }
        if ((ENABLE_CUSTOM_LAYER != '\0') && (bVar6 = local_b0->operator_cast_to_bool(), bVar6)) {
            std::function<void(MiniMap&, CoordFine_const&)>::operator()(local_b0, (CoordFine*)local_38);
        }
        local_f0.~DrawCallState();
        pGVar8 = local_40;
        local_40->Render(0);
        pWVar5 = local_48;
        pGVar8->End();
        DrawDebugTileProgress(local_38, pWVar5, pCVar4);
        local_168.~GUIProjectionSaveRestore();
        local_138->~ClippingState();
    }

    // 0x1003bf6e0, 752 bytes, placed by class name
    // MiniMap::SetupBaseCameraFrameBuffer(graphics::SceneViewData&, CoordFine const&)
    void MiniMap::SetupBaseCameraFrameBuffer(SceneViewData* param_1, CoordFine* param_2) {
        int iVar1;
        float* pfVar2;
        RenderTargets* pRVar3;
        QuaternionT<float> local_158[16];
        undefined1 local_148[96];
        Vector2T<int> local_e8[8];
        float local_e0;
        ImVec4 local_d8[16];
        Vector4T<float> local_c8[80];
        undefined1 local_78[48];
        undefined8 local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        math::QuaternionT<float>::QuaternionT(local_158);
        local_158->FromAxisAngle(PTR_RIGHT_100ee66f0, -1.5707964);
        local_e0 = param_2->field_12;
        local_e8._0_4_ = param_2->field_4;
        local_e8._4_4_ = param_2->field_8;
        pfVar2 = (float*)local_e8->y();
        *pfVar2 = *pfVar2 + 4096.0;
        new (local_148) jag::Camera(0);
        local_148->SetRot(local_158);
        local_148->SetPos(local_e8);
        local_148->SetTopClip((float)-(int)field_1272 * 0.5);
        local_148->SetMainRenderTargetScaleFactor((float)(int)field_1272 * 0.5);
        local_148->SetOrientationXMovement((float)-(int)field_1272 * 0.5);
        local_148->SetOrientationZMovement((float)(int)field_1272 * 0.5);
        local_148->SetNearClip(-128.0);
        iVar1 = eastl::max<int>(8192, (int)param_2->field_8 + 4096);
        local_148->SetFarClip(-(float)iVar1);
        new (local_148) oldscape::ServerConnectionWorkItem(1);
        param_1->Set(local_148);
        pRVar3 = (RenderTargets*)field_1144->end();
        ImVec4::ImVec4(local_d8, 0.0, 0.0, 0.0, 1.0);
        new (local_78) render::RenderTargetData(pRVar3, local_d8, 1, 1.0, 0);
        ImVec4::ImVec4(local_d8, 0.0, 0.0, 0.0, 1.0);
        math::Vector4T<float>::Vector4T(local_c8);
        std::array<math::Vector4T<float>, 2ul>::operator=((array<math::Vector4T<float>, 2ul>*)(local_78 + 16),
                                                          (array*)local_d8);
        local_48._0_4_ = 0;
        local_48._4_4_ = 1.0;
        param_1->SetRenderTargets(local_78);
        new (local_d8) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
        new ((local_148 + 72)) render::Viewport(0, 0, field_1112, field_1112, 0.0, 1.0);
        local_d8->push_back((Viewport*)(local_148 + 72));
        param_1->SetRenderTargetViewports(local_d8);
        local_d8->~fixed_vector();
        local_148->~Camera();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003bfa00, 224 bytes, placed by class name
    // MiniMap::PutSquareAtTopOfPendingList(int, int)
    void MiniMap::PutSquareAtTopOfPendingList(int param_1, int param_2) {
        ulong uVar1;
        int* piVar2;
        long lVar3;
        MapSquareState* pMVar4;
        bool bVar5;
        MapSquareState* this_00;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        list<jag::console::Line, eastl::allocator> local_40[8];
        list<jag::console::Line, eastl::allocator> local_38[8];

        uVar1 = (&field_1424)->size();
        if (((1 < uVar1) &&
             (piVar2 = (int*)
                  eastl::list<MiniMap::MapSquareState,
                              eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::front(),
              *piVar2 != param_1)) &&
            (lVar3 = eastl::list<MiniMap::MapSquareState,
                                 eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::front(),
             *(int*)(lVar3 + 4) != param_2)) {
            eastl::list<jag::console::Line, eastl::allocator>::begin(local_40);
            eastl::list<jag::console::Line, eastl::allocator>::end(local_38);
            bVar5 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_38,
                                      (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
            if (bVar5) {
                do {
                    this_00 = (MapSquareState*)
                        eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                            (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_40);
                    if ((this_00->field_0 == param_1) && (this_00->field_4 == param_2)) {
                        pMVar4 = (MapSquareState*)eastl::list<
                            MiniMap::MapSquareState,
                            eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::front();
                        this_00->swap(pMVar4);
                        return;
                    }
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_40);
                    bVar5 = eastl::operator!=((eastl*)local_40, (hashtable_iterator_base*)local_38,
                                              (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
                } while (bVar5);
            }
        }
    }

    // 0x1003bfae0, 480 bytes, placed by class name
    // MiniMap::CheckClearingRequirements(render::RenderContext&, render::RenderTargets const*)
    void MiniMap::CheckClearingRequirements(RenderContext* param_1, RenderTargets* param_2) {
        uint uVar1;
        undefined8 uVar2;
        long lVar3;
        Texture* pTVar4;
        ImVec4* this_01;
        ImVec4 local_168[16];
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_1013 != '\0') {
            uVar2 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
            logger::Logger::Log(uVar2, 0, &local_c8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/minimap/MiniMap.cpp",
                                2424, "%s: Clearing Depth Buffer", "CheckClearingRequirements");
            local_c8.~LogStream();
            field_1013 = 0;
            lVar3 = local_c8.Instance();
            param_1->SetDepthStencilState((DepthStencilState*)(lVar3 + 720));
            pTVar4 = (Texture*)param_2->GetDepthStencilTargetTexture();
            uVar1 = render::GetDepthTextureClearFlags(pTVar4);
            param_1->ClearDepthStencilTarget(param_2, 1.0, 0, uVar1);
        }
        if (field_1014 != '\0') {
            uVar2 = logger::default_logger();
            new (&local_158) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
            logger::Logger::Log(uVar2, 0, &local_158, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/minimap/MiniMap.cpp",
                                2431, "%s: Clearing base colour", "CheckClearingRequirements");
            local_158.~LogStream();
            field_1014 = 0;
            this_01 = local_168;
            ImVec4::ImVec4(local_168, 0.0, 0.0, 0.0, 1.0);
            lVar3 = this_01->Instance();
            param_1->SetBlendState((BlendState*)(lVar3 + 1524));
            param_1->ClearRenderTargets(param_2, local_168, 1);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003bfcc0, 528 bytes, placed by class name
    // MiniMap::RenderMapSquareIntoBase(unsigned int, World&, MiniMap::MapSquareState&, CoordFine const&, bool, bool)
    ulong MiniMap::RenderMapSquareIntoBase(uint param_1, World* param_2, MapSquareState* param_3, CoordFine* param_4,
                                           bool param_5, bool param_6) {
        uint uVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        uint uVar5;
        undefined* puVar6;
        shared_ptr* this_00;
        MapSquare* this_01;
        unique_ptr* this_02;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* puVar7;
        Entity* this_03;
        Terrain* pTVar8;
        ulong unaff_R14;

        uVar5 = param_3->field_0;
        uVar1 = param_3->field_4;
        if ((DEBUG_ISOLATE_TILE != '\0') &&
            ((unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8), 1), uVar5 != DEBUG_ISOLATE_X || (uVar1 != DEBUG_ISOLATE_Z))))
            goto LAB_1003bfe99;
        iVar4 = param_2->GetMapSquareMinX();
        unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8), 1);
        if ((((int)uVar5 < iVar4) ||
             (((iVar4 = param_2->GetMapSquareMaxX(),
                iVar4 < (int)uVar5 || (iVar4 = param_2->GetMapSquareMinZ(), (int)uVar1 < iVar4)) ||
               (iVar4 = param_2->GetMapSquareMaxZ(), iVar4 < (int)uVar1)))) ||
            (puVar6 = (undefined*)param_2->GetMapSquareStatus(uVar5, uVar1), puVar6 == DataStatus::MISSING))
            goto LAB_1003bfe99;
        this_00 = (shared_ptr*)param_2->GetMapSquare(uVar5, uVar1);
        bVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (!bVar2) {
            unaff_R14 = 0;
            goto LAB_1003bfe99;
        }
        this_01 = (MapSquare*)shared_ptr<MapSquare>::operator*((shared_ptr<MapSquare>*)this_00);
        if ((!param_5) || (ENABLE_TERRAIN_PASS == '\0')) {
            this_02 = (unique_ptr*)this_01->GetParentLocationType();
            bVar2 = std::unique_ptr::operator_cast_to_bool(this_02);
            if (bVar2) {
                puVar7 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                             this_01->GetParentLocationType();
                this_03 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    puVar7);
                cVar3 = this_03->IsAtTargetLOD();
                if (cVar3 != '\0') {
                    puVar7 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                 this_01->GetParentLocationType();
                    pTVar8 =
                        (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                            puVar7);
                    cVar3 = pTVar8->GetHasFade();
                    if (cVar3 == '\0') {
                        puVar7 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                     this_01->GetParentLocationType();
                        pTVar8 =
                            (Terrain*)
                                std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                    puVar7);
                        uVar5 = pTVar8->IsReadyToRender();
                        goto LAB_1003bfdc8;
                    }
                }
            }
            unaff_R14 = 0;
        } else {
            uVar5 = RenderTerrainIntoBase(this, param_1, param_2, param_3, param_4, this_01);
        LAB_1003bfdc8:
            unaff_R14 = (ulong)uVar5;
        }
        if ((((char)unaff_R14 != '\0') && (param_6)) && (ENABLE_LOC_PASS != '\0')) {
            uVar5 = RenderLocationsIntoBase(this, param_1, param_2, param_3, param_4, this_01);
            unaff_R14 = (ulong)uVar5;
        }
        if ((((char)unaff_R14 != '\0') && (param_6)) && (ENABLE_LINES_PASS != '\0')) {
            uVar5 = RenderLocationLinesIntoBase(this, param_2, param_3, param_4, this_01);
            unaff_R14 = (ulong)uVar5;
        }
    LAB_1003bfe99:
        return unaff_R14 & 4294967295;
    }

    // 0x1003c00d0, 560 bytes, placed by class name
    // MiniMap::SetupMiniMapCameraCompositeBuffer(graphics::SceneViewData&, CoordFine const&, float)
    void MiniMap::SetupMiniMapCameraCompositeBuffer(SceneViewData* param_1, CoordFine* param_2, float param_3) {
        undefined4* puVar1;
        int iVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dc_00;
        uint extraout_XMM0_Dd;
        uint extraout_XMM0_Dd_00;
        QuaternionT<float> local_e0[16];
        QuaternionT<float> local_d0[16];
        Camera local_c0;
        Vector2T<int> aVStack_74[12];
        ulong local_68;
        uint uStack_60;
        uint uStack_5c;
        undefined4 local_50;
        undefined4 local_4c;
        float local_48;
        uint uStack_44;
        uint uStack_40;
        uint uStack_3c;
        float local_34;

        local_34 = (float)(int)(field_1124 << 4) / field_1048;
        local_48 = param_3;
        math::QuaternionT<float>::QuaternionT(local_e0);
        local_e0->FromAxisAngle(PTR_RIGHT_100ee66f0, -1.5707964);
        math::QuaternionT<float>::QuaternionT(local_d0);
        local_d0->FromAxisAngle(PTR_LOOK_100ee66e0, local_48);
        math::QuaternionT<float>::operator*=(local_e0, (QuaternionT*)local_d0);
        local_c0.m_pos._12_4_ = (float)param_2->field_0;
        unique0x1000038d = param_2->field_4;
        aVStack_74._4_4_ = param_2->field_8;
        aVStack_74._8_4_ = param_2->field_12;
        puVar1 = (undefined4*)aVStack_74->y();
        *puVar1 = 1166016512;
        new (&local_c0) jag::Camera(0);
        local_c0.SetRot(local_e0);
        local_c0.SetPos(aVStack_74);
        iVar2 = (int)local_34;
        local_48 = (float)-iVar2;
        local_c0.SetTopClip(local_48);
        local_34 = (float)iVar2;
        local_c0.SetMainRenderTargetScaleFactor(local_34);
        local_c0.SetOrientationXMovement(local_48);
        local_c0.SetOrientationZMovement(local_34);
        local_c0.SetNearClip(-128.0);
        local_c0.SetFarClip(-8192.0);
        new (&local_c0) oldscape::ServerConnectionWorkItem(1);
        param_1->Set(&local_c0);
        local_34 = (float)local_c0.GetFogDepthAngleFalloff();
        local_50 = local_c0.GetRightClip();
        local_68 = local_c0.GetMainRenderTargetScaleFactor();
        local_48 = -0.0;
        uStack_44 = 2147483648;
        uStack_40 = 2147483648;
        uStack_3c = 2147483648;
        local_68 = local_68 ^ 9223372039002259456;
        uStack_60 = extraout_XMM0_Dc ^ 2147483648;
        uStack_5c = extraout_XMM0_Dd ^ 2147483648;
        uVar4 = local_c0.GetEnvMapIrradianceScale();
        local_48 = (float)((uint)local_48 ^ (uint)uVar4);
        uStack_44 = uStack_44 ^ (uint)((ulong)uVar4 >> 32);
        uStack_40 = uStack_40 ^ extraout_XMM0_Dc_00;
        uStack_3c = uStack_3c ^ extraout_XMM0_Dd_00;
        local_4c = local_c0.GetGameScale();
        uVar3 = local_c0.GetFarClip();
        math::Matrix44OrthographicLH<float>(local_34, local_50, (float)local_68, local_48, local_4c, uVar3, &field_752,
                                            0);
        local_c0.~Camera();
    }

    // 0x1003c0300, 464 bytes, placed by class name
    // MiniMap::PrepareRebuildList(int, int)
    void MiniMap::PrepareRebuildList(int param_1, int param_2) {
        char cVar1;
        bool bVar2;
        undefined8 uVar3;
        MapSquareState* this_00;
        MapSquareState* pMVar4;
        long lVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        list<jag::console::Line, eastl::allocator> local_e0[8];
        list<jag::console::Line, eastl::allocator> local_d8[12];
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_1012 != '\0') {
            uVar3 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
            logger::Logger::Log(uVar3, 0, &local_c8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/minimap/MiniMap.cpp",
                                1016, "%s: Terrain rebuild! Need to redraw everything", "PrepareRebuildList");
            local_c8.~LogStream();
            while (true) {
                cVar1 = (&field_99696)->empty();
                if (cVar1 != '\0')
                    break;
                this_00 = (MapSquareState*)(&field_1424)->push_back();
                pMVar4 = (MapSquareState*)
                    eastl::list<MiniMap::MapSquareState,
                                eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::back();
                this_00->swap(pMVar4);
                (&field_99696)->pop_back();
            }
            eastl::list<jag::console::Line, eastl::allocator>::begin(local_e0);
            eastl::list<jag::console::Line, eastl::allocator>::end(local_d8);
            bVar2 = eastl::operator!=((eastl*)local_e0, (hashtable_iterator_base*)local_d8, extraout_RDX);
            if (bVar2) {
                do {
                    lVar5 =
                        eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                            (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_e0);
                    *(undefined1*)(lVar5 + 12) = 5;
                    eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_e0);
                    bVar2 = eastl::operator!=((eastl*)local_e0, (hashtable_iterator_base*)local_d8, extraout_RDX_00);
                } while (bVar2);
            }
            PutSquareAtTopOfPendingList(this, param_1, param_2);
            field_1012 = 0;
            field_1013 = 1;
            field_1014 = 1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003c04d0, 1200 bytes, placed by class name
    // MiniMap::BuildMapElementList(World const&, int)
    uint MiniMap::BuildMapElementList(World* param_1, int param_2) {
        int iVar1;
        int iVar2;
        World* this_00;
        ulong uVar3;
        bool bVar4;
        char cVar5;
        uint uVar6;
        shared_ptr* psVar7;
        undefined* puVar8;
        HTTPRequest* this_01;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                   eastl::allocator>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*
            this_04;
        undefined8* puVar9;
        MapAreaList* pMVar10;
        MapArea* pMVar11;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar12;
        StaticMapElement* pSVar13;
        StaticMapElement* pSVar14;
        CoordGrid* this_05;
        CoordGrid* pCVar15;
        uint uVar16;
        undefined8 in_RCX;
        int iVar17;
        uint uVar18;
        int iVar19;
        ulong uVar20;
        ulong uVar21;
        uint uVar22;
        CoordGrid local_c0;
        ulong local_b0;
        World* local_a8;
        ulong local_a0;
        uint local_94;
        uint local_90;
        int local_8c;
        ClientCompositeZone local_88;
        ulong local_68;
        ulong local_60;
        uint local_54;
        MiniMap* local_50;
        shared_ptr* local_48;
        uint local_40;
        uint local_3c;
        uint local_38;
        uint local_34;

        local_a8 = param_1;
        local_54 = param_2;
        (&field_1376)->clear();
        local_38 = field_1304;
        local_34 = (uint)CONCAT71((int7)((ulong)in_RCX >> 8), 1);
        if ((int)local_38 < field_1296) {
            local_b0 = (ulong)(int)local_54;
            local_34 = (uint)CONCAT71((int7)(int3)(local_54 >> 8), 1);
            local_50 = this;
            do {
                uVar18 = field_1288;
                if ((int)uVar18 < field_1280) {
                    local_8c = local_38 << 6;
                    do {
                        uVar22 = local_38;
                        this_00 = local_a8;
                        psVar7 = (shared_ptr*)local_a8->GetMapSquare(local_38, uVar18);
                        local_3c = uVar18;
                        puVar8 = (undefined*)this_00->GetMapSquareStatus(uVar22, uVar18);
                        bVar4 = shared_ptr::operator_cast_to_bool(psVar7);
                        if (bVar4) {
                            this_01 = (HTTPRequest*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar7);
                            psVar7 = (shared_ptr*)this_01->GetContentType();
                            bVar4 = shared_ptr::operator_cast_to_bool(psVar7);
                            if (bVar4) {
                                local_a0 = 0;
                                local_48 = psVar7;
                                do {
                                    uVar20 = 0;
                                    uVar3 = local_a0 + 1;
                                    local_60 = local_a0;
                                    do {
                                        local_a0 = uVar3;
                                        this_02 =
                                            (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul,
                                                                                            true, eastl::allocator>,
                                                                        10ul, true, eastl::allocator>,
                                                    eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>*)
                                                shared_ptr<ClientCompositeData>::operator->(
                                                    (shared_ptr<ClientCompositeData>*)psVar7);
                                        this_03 = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true,
                                                                              eastl::allocator>,
                                                          eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>*)
                                            eastl::vector<
                                                eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true,
                                                                                        eastl::allocator>,
                                                                    10ul, true, eastl::allocator>,
                                                eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](this_02,
                                                                                                             local_b0);
                                        this_04 = (vector<ClientCompositeZone,
                                                          eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true,
                                                                                        eastl::allocator>>*)
                                            eastl::vector<
                                                eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](this_03,
                                                                                                             local_a0);
                                        uVar21 = uVar20 + 1;
                                        puVar9 = (undefined8*)eastl::vector<
                                            ClientCompositeZone,
                                            eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_04,
                                                                                                         uVar21);
                                        local_88._0_8_ = *puVar9;
                                        local_88._8_8_ = puVar9[1];
                                        local_88.field_16 = *(undefined4*)(puVar9 + 2);
                                        cVar5 = local_88.IsValid();
                                        if (cVar5 != '\0') {
                                            pMVar10 = (MapAreaList*)local_50->field_24->GetLogStreams();
                                            new (&local_c0) oldscape::rs2lib::worldmap::LocationData(
                                                0, local_88.field_4 << 3, local_88.field_8 << 3);
                                            pMVar11 = (MapArea*)pMVar10->GetAreaByCoordinate(&local_c0);
                                            if (pMVar11 != (MapArea*)0) {
                                                cVar5 = pMVar11->LoadStaticMapElements();
                                                if (cVar5 == '\0') {
                                                    local_34 = 0;
                                                } else {
                                                    local_68 = uVar20;
                                                    pAVar12 =
                                                        (Array<std::unique_ptr<
                                                                   LoadingScreenScript::AnimLayer,
                                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                                               eastl::allocator>*)pMVar11->GetStaticMapElements();
                                                    local_40 = local_88.field_4;
                                                    iVar17 = local_88.field_8;
                                                    pSVar13 = (StaticMapElement*)pAVar12->data();
                                                    pSVar14 = (StaticMapElement*)pAVar12->end();
                                                    if (pSVar13 != pSVar14) {
                                                        uVar18 = local_40 << 3;
                                                        iVar1 = local_40 * 8;
                                                        uVar22 = iVar17 << 3;
                                                        local_94 = iVar17 * 8 + 8;
                                                        psVar7 = local_48;
                                                        local_90 = uVar22;
                                                        local_40 = uVar18;
                                                        do {
                                                            if (*(int*)pSVar13 == local_88.field_0) {
                                                                uVar6 = *(uint*)(pSVar13 + 4);
                                                                if (uVar18 <= uVar6) {
                                                                    if (uVar6 < iVar1 + 8U) {
                                                                        uVar16 = *(uint*)(pSVar13 + 8);
                                                                        if (uVar22 <= uVar16) {
                                                                            if (uVar16 < local_94) {
                                                                                uVar6 = uVar6 & 7;
                                                                                uVar16 = uVar16 & 7;
                                                                                iVar17 = (int)local_60;
                                                                                iVar2 = (int)local_68;
                                                                                if (local_88.field_12 == '\x02') {
                                                                                    iVar19 = (iVar17 * 8 - uVar6) + 8;
                                                                                    iVar17 = iVar2 * 8 - uVar16;
                                                                                LAB_1003c0777:
                                                                                    iVar17 = iVar17 + 8;
                                                                                } else {
                                                                                    if ((local_88.field_12 == '\x01') ||
                                                                                        (local_88.field_12 != '\0')) {
                                                                                        iVar19 = uVar16 + iVar17 * 8;
                                                                                        iVar17 = iVar2 * 8 - uVar6;
                                                                                        goto LAB_1003c0777;
                                                                                    }
                                                                                    iVar19 = uVar6 + iVar17 * 8;
                                                                                    iVar17 = uVar16 + iVar2 * 8;
                                                                                }
                                                                                cVar5 = AddPendingMapElement(
                                                                                    local_50, iVar19, iVar17, pSVar13,
                                                                                    local_50->field_1304,
                                                                                    local_50->field_1296,
                                                                                    local_50->field_1288,
                                                                                    local_50->field_1280);
                                                                                local_34 = local_34 & 255;
                                                                                if (cVar5 == '\0') {
                                                                                    local_34 = 0;
                                                                                }
                                                                                psVar7 = local_48;
                                                                                uVar18 = local_40;
                                                                                uVar22 = local_90;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            pSVar13 = pSVar13 + 20;
                                                        } while (pSVar13 != pSVar14);
                                                        goto LAB_1003c0646;
                                                    }
                                                }
                                            }
                                            psVar7 = local_48;
                                        }
                                    LAB_1003c0646:
                                        uVar20 = uVar21;
                                        uVar3 = local_a0;
                                    } while (uVar21 != 8);
                                } while (local_a0 != 8);
                            } else {
                                pMVar10 = (MapAreaList*)local_50->field_24->GetLogStreams();
                                new (&local_88) oldscape::rs2lib::worldmap::LocationData(0, local_8c, local_3c << 6);
                                pMVar11 = (MapArea*)pMVar10->GetAreaByCoordinate((CoordGrid*)&local_88);
                                if (pMVar11 != (MapArea*)0) {
                                    cVar5 = pMVar11->LoadStaticMapElements();
                                    if (cVar5 == '\0') {
                                        local_34 = 0;
                                    } else {
                                        pAVar12 =
                                            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                                   std::default_delete<LoadingScreenScript::AnimLayer>>,
                                                   eastl::allocator>*)pMVar11->GetStaticMapElements();
                                        this_05 = (CoordGrid*)pAVar12->data();
                                        pCVar15 = (CoordGrid*)pAVar12->end();
                                        for (; this_05 != pCVar15; this_05 = (CoordGrid*)&this_05[1].field_4) {
                                            if (((this_05->field_0 == local_54) &&
                                                 (uVar18 = this_05->GetMapSquareX(), uVar18 == local_38)) &&
                                                (uVar18 = this_05->GetMapSquareZ(), uVar18 == local_3c)) {
                                                cVar5 = AddPendingMapElement(
                                                    local_50, this_05->field_4, this_05->field_8,
                                                    (StaticMapElement*)this_05, local_50->field_1304,
                                                    local_50->field_1296, local_50->field_1288, local_50->field_1280);
                                                local_34 = local_34 & 255;
                                                if (cVar5 == '\0') {
                                                    local_34 = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            local_34 = local_34 & 255;
                            if (puVar8 != DataStatus::MISSING) {
                                local_34 = 0;
                            }
                        }
                        uVar18 = local_3c + 1;
                        this = local_50;
                    } while ((int)uVar18 < local_50->field_1280);
                }
                local_38 = local_38 + 1;
            } while ((int)local_38 < field_1296);
        }
        return local_34 & 4294967041;
    }

    // 0x1003c09f0, 208 bytes, placed by class name
    // MiniMap::AddPendingMapElement(int, int, StaticMapElement const&, int, int, int, int)
    ulong MiniMap::AddPendingMapElement(int param_1, int param_2, StaticMapElement* param_3, int param_4, int param_5,
                                        int param_6, int param_7) {
        bool bVar1;
        shared_ptr* this_00;
        undefined7 extraout_var;
        MapElementType* this_01;
        long lVar2;
        int* piVar3;

        this_00 = ConfigProvider::GetConfig<MapElementType>(field_16, *(int*)(param_3 + 12), (DataStatus**)0);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            this_01 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)this_00);
            lVar2 = this_01->GetPolygon();
            if ((lVar2 == 0) ||
                ((((param_4 * 64 <= *(int*)(lVar2 + 40) + param_1 && (*(int*)(lVar2 + 32) + param_1 <= param_5 * 64)) &&
                   (param_6 * 64 <= *(int*)(lVar2 + 44) + param_2)) &&
                  (*(int*)(lVar2 + 36) + param_2 <= param_7 * 64)))) {
                piVar3 = (int*)(&field_1376)->push_back();
                piVar3[2] = *(int*)(param_3 + 12);
                *piVar3 = param_1 << 7;
                piVar3[1] = param_2 << 7;
            }
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x1003c0d60, 176 bytes, placed by class name
    // MiniMap::FindMapSquareStateInList(MiniMap::MapSquareState*&, int, int, eastl::fixed_list<MiniMap::MapSquareState, 16ul, true, eastl::allocator>&)
    ulong MiniMap::FindMapSquareStateInList(MapSquareState** param_1, int param_2, int param_3, fixed_list* param_4) {
        int iVar1;
        undefined8* puVar2;
        bool bVar3;
        undefined7 extraout_var;
        int* piVar4;
        undefined7 extraout_var_00;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_var_01;
        undefined4 extraout_var_02;
        ulong uVar5;
        undefined4 in_register_00000034;
        list<jag::console::Line, eastl::allocator> local_48[8];
        undefined8* local_40;
        list<jag::console::Line, eastl::allocator> local_38[8];

        local_40 = (undefined8*)CONCAT44(in_register_00000034, param_2);
        eastl::list<jag::console::Line, eastl::allocator>::begin(local_38);
        eastl::list<jag::console::Line, eastl::allocator>::end(local_48);
        bVar3 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_48,
                                  (hashtable_iterator_base*)CONCAT44(extraout_var_01, extraout_EDX));
        uVar5 = CONCAT71(extraout_var, bVar3) & 4294967295;
        if (bVar3) {
            piVar4 = (int*)eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_38);
            puVar2 = local_40;
            iVar1 = *piVar4;
            while ((iVar1 != param_3 || (piVar4[1] != (int)param_4))) {
                eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator++(
                    (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_38);
                bVar3 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_48,
                                          (hashtable_iterator_base*)CONCAT44(extraout_var_02, extraout_EDX_00));
                uVar5 = CONCAT71(extraout_var_00, bVar3) & 4294967295;
                if (!bVar3) {
                    return uVar5;
                }
                piVar4 =
                    (int*)eastl::ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>::operator*(
                        (ListIterator<jag::console::Line, jag::console::Line*, jag::console::Line&>*)local_38);
                iVar1 = *piVar4;
            }
            *puVar2 = piVar4;
        }
        return uVar5;
    }

    // 0x1003c0e60, 160 bytes, placed by class name
    // MiniMap::NeighboursLODLevel(MiniMap::MapSquareState const&)
    uint MiniMap::NeighboursLODLevel(MapSquareState* param_1) {
        bool bVar1;
        char cVar2;
        uint uVar3;
        MapSquareState* in_RAX;
        uint uVar4;
        byte bVar5;
        uint uVar6;
        uint uVar7;
        MapSquareState* local_38;

        uVar6 = 0;
        uVar7 = param_1->field_0 - 1;
        local_38 = in_RAX;
        do {
            uVar3 = param_1->field_4;
            uVar4 = uVar3 - 2;
            do {
                uVar4 = uVar4 + 1;
                if (((uVar7 != param_1->field_0) && (uVar4 != uVar3)) &&
                    (cVar2 = FindMapSquareState(this, &local_38, uVar7, uVar4), cVar2 != '\0')) {
                    bVar5 = (byte)uVar6;
                    uVar6 = uVar6 & 255;
                    if (bVar5 < (byte) * (uint*)&local_38->field_12) {
                        uVar6 = *(uint*)&local_38->field_12;
                    }
                }
                uVar3 = param_1->field_4;
            } while ((int)uVar4 <= (int)uVar3);
            bVar1 = (int)uVar7 <= (int)param_1->field_0;
            uVar7 = uVar7 + 1;
        } while (bVar1);
        return uVar6 & 255;
    }

    // 0x1003c0f00, 16 bytes, placed by class name
    // MiniMap::NeighboursTerrainDrawn(MiniMap::MapSquareState const&)
    bool MiniMap::NeighboursTerrainDrawn(MapSquareState* param_1) {
        return NeighboursLODLevel(this, param_1) < 5;
    }

    // 0x1003c0f10, 736 bytes, placed by class name
    // MiniMap::RenderTerrainIntoBase(unsigned int, World&, MiniMap::MapSquareState&, CoordFine const&, MapSquare const&)
    undefined8 MiniMap::RenderTerrainIntoBase(uint param_1, World* param_2, MapSquareState* param_3, CoordFine* param_4,
                                              MapSquare* param_5) {
        byte bVar1;
        EffectManager* pEVar2;
        MapSquareState* pMVar3;
        uint uVar4;
        bool bVar5;
        char cVar6;
        undefined1 uVar7;
        byte bVar8;
        SceneRenderManager* this_00;
        Renderer* pRVar9;
        SceneManager* this_01;
        unique_ptr* this_02;
        long* plVar10;
        undefined1* puVar11;
        SunlightDirectLighting* pSVar12;
        Entity* pEVar13;
        GraphNode* this_03;
        ModularParticleEmitterTemplate* pMVar14;
        Terrain* pTVar15;
        undefined8 uVar16;
        SunlightEffectSaveRestore local_27b8;
        Renderer* local_26f0;
        EffectManager* local_26e8;
        MapSquareState* local_26e0;
        uint local_26d4;
        EffectStateSaveRestore local_26d0[309];
        fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>, eastl::allocator>
            local_1380[4936];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_26e0 = param_3;
        local_26d4 = param_1;
        this_00 = (SceneRenderManager*)param_2->GetWorldRenderer();
        pRVar9 = (Renderer*)this_00->GetMainSceneRenderer();
        this_01 = (SceneManager*)param_2->size();
        local_26e8 = (EffectManager*)this_01->GetEffectManager();
        (&field_64, param_4->field_0)->SetStartingRenderLevel();
        this_02 = (unique_ptr*)param_5->GetParentLocationType();
        bVar5 = std::unique_ptr::operator_cast_to_bool(this_02);
        if (bVar5) {
            plVar10 = (long*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
            cVar6 = (**(code**)(*plVar10 + 280))(plVar10);
            if (cVar6 != '\0') {
                if (FORCE_TERRAIN_REDRAWS == '\0') {
                    bVar1 = local_26e0->field_12;
                    pMVar14 = (ModularParticleEmitterTemplate*)
                                  std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                      (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
                    bVar8 = pMVar14->GetNumTilesPerRow();
                    if (bVar8 < bVar1) {
                    LAB_1003c1136:
                        pTVar15 =
                            (Terrain*)
                                std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
                        cVar6 = pTVar15->IsReadyToRender();
                        if (cVar6 != '\0')
                            goto LAB_1003c0fc5;
                    } else {
                        pTVar15 =
                            (Terrain*)
                                std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
                        cVar6 = pTVar15->GetHasFade();
                        if (cVar6 != '\0')
                            goto LAB_1003c1136;
                    }
                } else {
                LAB_1003c0fc5:
                    eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                                     eastl::allocator>::fixed_map(local_1380);
                    local_26d0[0].field_0._0_1_ = 94;
                    puVar11 = (undefined1*)
                        eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                   eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator[]((map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                        eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)
                                       local_1380,
                                   (EffectType*)local_26d0);
                    pEVar2 = local_26e8;
                    *puVar11 = 0;
                    graphics::EffectStateSaveRestore::EffectStateSaveRestore(local_26d0, local_26e8,
                                                                             (fixed_map*)local_1380);
                    local_26f0 = pRVar9;
                    pSVar12 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar2, 29);
                    new (&local_27b8) graphics::SunlightEffectSaveRestore(pSVar12, field_816);
                    pEVar13 =
                        (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
                    this_03 = (GraphNode*)pEVar13->GetNode();
                    uVar4 = local_26d4;
                    this_03->VisibilityTrue(local_26d4, 8, 8);
                    pMVar3 = local_26e0;
                    local_26f0->RenderView(uVar4, 8, (SceneViewData*)field_80, this_03, local_26e8, false);
                    field_1310 = 1;
                    pMVar14 = (ModularParticleEmitterTemplate*)
                                  std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                      (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
                    uVar7 = pMVar14->GetNumTilesPerRow();
                    pMVar3->field_12 = uVar7;
                    pMVar3->field_1592->ResetProgress();
                    ((pMVar3->field_1592 + 64))->ResetProgress();
                    pMVar3->field_5752 = 5;
                    cVar6 = NeighboursTerrainDrawn(this, pMVar3);
                    local_27b8.~SunlightEffectSaveRestore();
                    local_26d0->~EffectStateSaveRestore();
                    eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                                     eastl::allocator>::~fixed_map(local_1380);
                    if (cVar6 == '\0')
                        goto LAB_1003c1176;
                }
                pEVar13 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
                cVar6 = pEVar13->IsAtTargetLOD();
                if (cVar6 != '\0') {
                    pTVar15 =
                        (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
                    cVar6 = pTVar15->GetHasFade();
                    if (cVar6 == '\0') {
                        pTVar15 =
                            (Terrain*)
                                std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_02);
                        uVar16 = pTVar15->IsReadyToRender();
                        goto LAB_1003c1178;
                    }
                }
            }
        }
    LAB_1003c1176:
        uVar16 = 0;
    LAB_1003c1178:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar16;
    }

    // 0x1003c12a0, 32 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::ResetProgress()
    void MiniMap::MapSquareState::TileState::ResetProgress() {
        bool local_9;

        local_9 = true;
        eastl::fill<bool*, bool>((bool*)this, &field_64, &local_9);
    }

    // 0x1003c12c0, 48 bytes, placed by class name
    // MiniMap::MapSquareState::IconState::ResetProgress()
    void MiniMap::MapSquareState::IconState::ResetProgress() {
        bool local_9;

        local_9 = true;
        eastl::fill<bool*, bool>((bool*)this, &field_4096, &local_9);
    }

    // 0x1003c12f0, 3232 bytes, placed by class name
    // MiniMap::RenderLocationsIntoBase(unsigned int, World&, MiniMap::MapSquareState&, CoordFine const&, MapSquare const&)
    ulong MiniMap::RenderLocationsIntoBase(uint param_1, World* param_2, MapSquareState* param_3, CoordFine* param_4,
                                           MapSquare* param_5) {
        EffectManager* pEVar1;
        MiniMap* pMVar2;
        byte bVar3;
        char cVar4;
        bool bVar5;
        byte bVar6;
        undefined1 uVar7;
        int iVar8;
        undefined4 uVar9;
        SceneRenderManager* this_00;
        SceneManager* this_01;
        LODSettings* this_02;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar10;
        MapSquareLocation* pMVar11;
        Model* this_03;
        MapSquareState* pMVar12;
        long lVar13;
        Component* this_04;
        undefined8 uVar14;
        undefined1* puVar15;
        SunlightDirectLighting* pSVar16;
        shared_ptr* psVar17;
        LocationContainer* pLVar18;
        LocType* pLVar19;
        int* piVar20;
        MSIType* pMVar21;
        GraphNode* this_05;
        vector<eastl::pair<int, int>, eastl::allocator>* this_06;
        undefined8 uVar22;
        ulong uVar23;
        uint uVar24;
        char* pcVar25;
        int iVar26;
        undefined7 uVar28;
        ulong uVar27;
        uint uVar29;
        int iVar30;
        bool bVar31;
        SunlightEffectSaveRestore local_2aa8;
        ulong local_29e0;
        ulong local_29d8;
        ulong local_29d0;
        ulong local_29c8;
        Renderer* local_29c0;
        LocType* local_29b8;
        undefined1* local_29b0;
        SceneViewData* local_29a8;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_29a0;
        EffectManager* local_2998;
        GUIManager* local_2990;
        LinkMap* local_2988;
        IconState* local_2980;
        uint local_2974;
        MapSquare* local_2970;
        CoordFine* local_2968;
        shared_ptr* local_2960;
        MapSquareState* local_2958;
        TileState* local_2950;
        uint local_2948;
        uint local_2944;
        MapSquareLocation* local_2940;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_2938;
        MapSquareLocation* local_2930;
        MiniMap* local_2928;
        LocationContainer* local_2920;
        uint local_2914;
        LogStream local_2910;
        LogStream local_2880;
        LogStream local_27f0;
        EffectStateSaveRestore local_2760[309];
        fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>, eastl::allocator>
            local_1410[4936];
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2948 = param_3->field_0;
        local_2944 = param_3->field_4;
        local_2974 = param_1;
        local_2970 = param_5;
        local_2968 = param_4;
        local_2928 = this;
        local_2990 = (GUIManager*)field_8->GetGUIManager();
        this_00 = (SceneRenderManager*)param_2->GetWorldRenderer();
        local_29c0 = (Renderer*)this_00->GetMainSceneRenderer();
        this_01 = (SceneManager*)param_2->size();
        local_2998 = (EffectManager*)this_01->GetEffectManager();
        this_02 = (LODSettings*)param_2->GetLODSettings();
        bVar6 = param_3->field_12;
        local_2958 = param_3;
        if ((bVar6 != 5) && (bVar3 = this_02->GetLowestUsableLOD(), bVar6 <= bVar3)) {
            local_2988 = (LinkMap*)param_2->GetLinkMap();
            local_29b0 = &local_2958->field_16;
            local_29b0->clear();
            pvVar10 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          local_2970->GetParticleEffectors();
            cVar4 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    pvVar10);
            if (cVar4 == '\0') {
                pMVar11 = (MapSquareLocation*)pvVar10->HeapBeginPtr();
                local_2930 = (MapSquareLocation*)pvVar10->end();
                pcVar25 = (char*)param_4;
                if (pMVar11 != local_2930) {
                    do {
                        pvVar10 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                pMVar11->HeapBeginPtr();
                        local_2940 = pMVar11;
                        local_2938 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                pMVar11->end();
                        uVar22 = 0;
                        iVar30 = 0;
                        bVar31 = pvVar10 == local_2938;
                        if (!bVar31) {
                            do {
                                bVar5 = pvVar10->operator_cast_to_bool();
                                if (bVar5) {
                                    this_03 =
                                        (Model*)
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::
                                            operator->(
                                                (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                                    pvVar10);
                                    pMVar12 = (MapSquareState*)this_03->GetPointLightBounds();
                                    lVar13 = pMVar12->size();
                                    if (lVar13 != 0) {
                                        RenderMiniMapIcons((vector*)local_2928, pMVar12, (int)local_2958, (int)uVar22,
                                                           (LinkMap*)pcVar25, SUB81(param_5, 0));
                                    }
                                    this_04 =
                                        (Component*)
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::
                                            operator->(
                                                (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                                    pvVar10);
                                    pMVar12 = (MapSquareState*)this_04->GetSwipeConfig();
                                    lVar13 = pMVar12->size();
                                    if (lVar13 != 0) {
                                        RenderMiniMapIcons((vector*)local_2928, pMVar12, (int)local_2958, (int)uVar22,
                                                           (LinkMap*)pcVar25, SUB81(param_5, 0));
                                    }
                                } else {
                                    uVar14 = logger::default_logger();
                                    new (&local_c8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
                                    uVar22 = 8;
                                    pcVar25 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/scene/minimap/MiniMap.cpp";
                                    param_5 = (MapSquare*)1236;
                                    logger::Logger::Log(uVar14, 0, &local_c8);
                                    local_c8.~LogStream();
                                }
                                if (!bVar5) {
                                    iVar30 = 1;
                                    goto LAB_1003c1595;
                                }
                                pvVar10 = pvVar10 + 8;
                                bVar31 = pvVar10 == local_2938;
                            } while (!bVar31);
                            iVar30 = 0;
                        }
                    LAB_1003c1595:
                        if (!bVar31)
                            goto LAB_1003c15b8;
                        pMVar11 = (MapSquareLocation*)(local_2940->field_8 + 24);
                    } while (pMVar11 != local_2930);
                    iVar30 = 2;
                LAB_1003c15b8:
                    if (iVar30 != 2)
                        goto LAB_1003c15e8;
                }
            }
            local_29a0 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                             local_2970->GetLocations();
            cVar4 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    local_29a0);
            if (cVar4 == '\0') {
                eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                                 eastl::allocator>::fixed_map(local_1410);
                local_2760[0].field_0._0_1_ = 94;
                puVar15 = (undefined1*)
                    eastl::map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                               eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                             eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)local_1410,
                        (EffectType*)local_2760);
                pEVar1 = local_2998;
                *puVar15 = 0;
                graphics::EffectStateSaveRestore::EffectStateSaveRestore(local_2760, local_2998,
                                                                         (fixed_map*)local_1410);
                pSVar16 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar1, 29);
                pMVar2 = local_2928;
                new (&local_2aa8) graphics::SunlightEffectSaveRestore(pSVar16, local_2928->field_816);
                (&pMVar2->field_64, local_2968->field_0)->SetStartingRenderLevel();
                local_29d8 = local_29a0->size();
                uVar28 = (undefined7)((ulong)pvVar10 >> 8);
                if (local_29d8 != 0) {
                    local_29d0 = (ulong)(local_2948 << 6);
                    local_29c8 = (ulong)(local_2944 << 6);
                    local_2950 = (TileState*)local_2958->field_1592;
                    local_29a8 = (SceneViewData*)local_2928->field_80;
                    local_2980 = (IconState*)(local_2958->field_1592 + 64);
                    uVar27 = CONCAT71(uVar28, 1);
                    uVar23 = 1;
                    do {
                        local_29e0 = uVar23;
                        psVar17 =
                            (shared_ptr*)eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>::operator[](
                                (vector<shared_ptr<MapSquareLocation>, eastl::allocator>*)local_29a0, uVar23 - 1);
                        bVar31 = shared_ptr::operator_cast_to_bool(psVar17);
                        if (!bVar31) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("_mapSquareLocation",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/minimap/MiniMap.cpp",
                                      1288, (char*)0);
                        }
                        local_2938 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                CONCAT44(local_2938._4_4_, (int)uVar27);
                        pMVar11 = (MapSquareLocation*)shared_ptr<MapSquareLocation>::operator*(
                            (shared_ptr<MapSquareLocation>*)psVar17);
                        uVar29 = (int)local_29d0 + (int)(char)pMVar11->field_5;
                        local_2914 = (int)local_29c8 + (int)(char)pMVar11->field_6;
                        uVar24 = (int)local_29d0 + (int)(char)pMVar11->field_5 + 63;
                        if (-1 < (int)uVar29) {
                            uVar24 = uVar29;
                        }
                        local_2930 = (MapSquareLocation*)CONCAT44(local_2930._4_4_, uVar29);
                        iVar30 = uVar29 - (uVar24 & 4294967232);
                        uVar24 = (int)local_29c8 + (int)(char)pMVar11->field_6 + 63;
                        if (-1 < (int)local_2914) {
                            uVar24 = local_2914;
                        }
                        iVar26 = local_2914 - (uVar24 & 4294967232);
                        pLVar18 = (LocationContainer*)local_2970->GetLocationContainer(iVar30, iVar26);
                        local_2940 = pMVar11;
                        if (local_2968->field_0 == (int)(char)pMVar11->field_4) {
                        LAB_1003c1806:
                            pLVar19 =
                                (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&local_2940->field_72);
                            iVar8 = pLVar19->GetMapElement();
                            if ((((iVar8 != -1) && (local_2928->field_1300 <= (int)(uint)local_2930)) &&
                                 ((int)(uint)local_2930 <= local_2928->field_1292)) &&
                                ((local_2928->field_1284 <= (int)local_2914 &&
                                  ((int)local_2914 <= local_2928->field_1276)))) {
                                piVar20 = (int*)eastl::fixed_vector<MiniMap::MapElementListEntry, 32ul, true,
                                                                    eastl::allocator>::push_back();
                                piVar20[2] = iVar8;
                                *piVar20 = (uint)local_2930 << 7;
                                piVar20[1] = local_2914 << 7;
                            }
                        } else {
                            cVar4 = local_2988->IsVisibleFromLevel(local_2968->field_0, (int)(char)pMVar11->field_4,
                                                                   (uint)local_2930, local_2914);
                            if (cVar4 != '\0')
                                goto LAB_1003c1806;
                        }
                        pLVar19 = (LocType*)shared_ptr<LocType>::operator*((shared_ptr<LocType>*)&local_2940->field_72);
                        local_2920 = pLVar18;
                        iVar8 = pLVar19->GetMapSceneIcon();
                        psVar17 = (shared_ptr*)PTR_NullConfigType_100ee6558;
                        if (iVar8 == -1) {
                        LAB_1003c1913:
                            pLVar18 = local_2920;
                            lVar13 = 6;
                            local_29b8 = pLVar19;
                            local_2960 = psVar17;
                            if ((int)local_2928->field_1060 < 1000) {
                                bVar31 = local_2920->operator_cast_to_bool();
                                if (bVar31) {
                                    pLVar18 = (LocationContainer*)
                                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::
                                        operator*(
                                            (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                                pLVar18);
                                    cVar4 = pLVar18->IsAtTargetLOD();
                                    local_2920 = pLVar18;
                                    if ((cVar4 == '\0') ||
                                        (cVar4 = pLVar18->AllStaticLocationsReady(), cVar4 == '\0')) {
                                        bVar6 = local_2950->GetProgress(local_2920);
                                        lVar13 = 0;
                                        if (bVar6 < 5) {
                                            local_2950->SetProgress(local_2920, 5);
                                            uVar22 = logger::default_logger();
                                            new (&local_2910) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
                                            logger::Logger::Log(
                                                uVar22, 0, &local_2910, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/scene/minimap/MiniMap.cpp",
                                                1403, "%s: [%d,%d] Locations in container for %d,%d not built yet",
                                                "RenderLocationsIntoBase", local_2948, local_2944, iVar30, iVar26);
                                            local_2910.~LogStream();
                                            goto LAB_1003c1c89;
                                        }
                                    } else if (local_2928->field_1104 == '\0') {
                                    LAB_1003c1cda:
                                        lVar13 = 0;
                                        if (iVar8 != -1) {
                                            pMVar21 = (MSIType*)shared_ptr<MSIType>::operator->(
                                                (shared_ptr<MSIType>*)local_2960);
                                            iVar30 = pMVar21->GetSpriteID();
                                            if (iVar30 != -1) {
                                                if (local_2968->field_0 == (int)(char)local_2940->field_4) {
                                                    cVar4 = local_2988->IsVisibleFromLevel(
                                                        local_2968->field_0, (int)(char)local_2940->field_4,
                                                        (uint)local_2930, local_2914);
                                                    if (cVar4 != '\0') {
                                                        uVar29 = (uint)local_2930 & 63;
                                                        uVar24 = local_2914 & 63;
                                                        bVar6 = local_2980->GetProgress(uVar29, uVar24);
                                                        bVar3 = local_2920->GetNumTilesPerRow();
                                                        if (bVar3 < bVar6) {
                                                            uVar22 = logger::default_logger();
                                                            new (&local_2880)
                                                                logger::LogStream((LogStream*)&LOGGER_MINIMAP);
                                                            logger::Logger::Log(uVar22, 0, &local_2880, 8,
                                                                                "/Users/bamboo/bamboo-home-01/xml-data/"
                                                                                "build-dir/OSRS-OS1669-BOXR/libs/game/"
                                                                                "runetek5/scene/minimap/MiniMap.cpp",
                                                                                1383, "%s: Drawing MSI for %d,%d,%d,%d",
                                                                                "RenderLocationsIntoBase",
                                                                                (int)(uint)local_2930 >> 6,
                                                                                (int)local_2914 >> 6, uVar29, uVar24);
                                                            local_2880.~LogStream();
                                                            pMVar21 = (MSIType*)shared_ptr<MSIType>::operator*(
                                                                (shared_ptr<MSIType>*)local_2960);
                                                            uVar9 =
                                                                DrawMSI(local_2928, (uint)local_2930, local_2914,
                                                                        local_2940, pMVar21, local_29b8, local_2990);
                                                            local_2938 = (vector<int, eastl::fixed_vector_allocator<
                                                                                          4ul, 8ul, 4ul, 0ul, true,
                                                                                          eastl::allocator>>*)
                                                                CONCAT44(local_2938._4_4_, uVar9);
                                                            pvVar10 = local_2938;
                                                            local_2938._0_1_ = (char)uVar9;
                                                            bVar31 = (char)local_2938 != '\0';
                                                            local_2938 = pvVar10;
                                                            if (bVar31) {
                                                                local_2928->field_1310 = 1;
                                                                local_2928->field_1060 = local_2928->field_1060 + 1;
                                                                uVar7 = local_2920->GetNumTilesPerRow();
                                                                local_2980->SetProgress(uVar29, uVar24, uVar7);
                                                                local_2958->field_5752 = 5;
                                                            }
                                                        }
                                                        goto LAB_1003c1ca0;
                                                    }
                                                }
                                                lVar13 = 0;
                                            }
                                        }
                                    } else {
                                        if (iVar8 != -1) {
                                            pMVar21 = (MSIType*)shared_ptr<MSIType>::operator->(
                                                (shared_ptr<MSIType>*)local_2960);
                                            cVar4 = pMVar21->GetHideOnMinimap();
                                            if (cVar4 == '\0')
                                                goto LAB_1003c1cda;
                                        }
                                        bVar6 = local_2950->GetProgress(local_2920);
                                        bVar3 = local_2920->GetNumTilesPerRow();
                                        if (bVar3 < bVar6) {
                                            local_2940 = (MapSquareLocation*)logger::default_logger();
                                            new (&local_27f0) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
                                            pLVar18 = local_2920;
                                            iVar26 = (int)(uint)local_2930 >> 6;
                                            iVar30 = (int)local_2914 >> 6;
                                            uVar29 = (uint)local_2930 & 63;
                                            uVar24 = local_2914 & 63;
                                            uVar7 = local_2920->GetNumTilesPerRow();
                                            logger::Logger::Log(
                                                local_2940, 0, &local_27f0, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/scene/minimap/MiniMap.cpp",
                                                1352, "%s: Drawing LOCs for %d,%d,%d,%d at LOD %d",
                                                "RenderLocationsIntoBase", iVar26, iVar30, uVar29, uVar24, uVar7);
                                            local_27f0.~LogStream();
                                            this_05 = (GraphNode*)pLVar18->GetNode();
                                            uVar24 = local_2974;
                                            this_05->VisibilityTrue(local_2974, 8, 8);
                                            local_29c0->RenderView(uVar24, 8, local_29a8, this_05, local_2998, false);
                                            pMVar2 = local_2928;
                                            local_2928->field_1310 = 1;
                                            this_06 = (vector<eastl::pair<int, int>, eastl::allocator>*)
                                                          this_05->GetChildren();
                                            iVar30 =
                                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_06);
                                            pMVar2->field_1060 = pMVar2->field_1060 + iVar30;
                                            local_2950->SetProgress(local_2920);
                                            local_2958->field_5752 = 5;
                                        }
                                        bVar6 = local_2950->GetProgress(local_2920);
                                        bVar3 = local_2920->GetNumTilesPerRow();
                                        if (bVar6 <= bVar3) {
                                            bVar6 = local_2950->GetProgress(local_2920);
                                            lVar13 = 0;
                                            if ((bVar6 < 5) || (bVar6 = local_2920->GetTargetLOD(), 4 < bVar6))
                                                goto LAB_1003c1ca0;
                                        }
                                    LAB_1003c1c89:
                                        local_2938 = (vector<int, eastl::fixed_vector_allocator<
                                                                      4ul, 8ul, 4ul, 0ul, true,
                                                                      eastl::allocator>>*)((ulong)local_2938 &
                                                                                           18446744069414584320);
                                        lVar13 = 0;
                                    }
                                } else {
                                    local_2938 =
                                        (vector<int, eastl::fixed_vector_allocator<
                                                         4ul, 8ul, 4ul, 0ul, true,
                                                         eastl::allocator>>*)((ulong)local_2938 & 18446744069414584320);
                                    lVar13 = 6;
                                }
                            } else {
                                local_2938 =
                                    (vector<int,
                                            eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)((ulong)local_2938 &
                                                                                               18446744069414584320);
                            }
                        } else {
                            psVar17 = ConfigProvider::GetConfig<MSIType>(local_2928->field_16, iVar8, (DataStatus**)0);
                            bVar31 = shared_ptr::operator_cast_to_bool(psVar17);
                            if (bVar31)
                                goto LAB_1003c1913;
                            lVar13 = 6;
                            local_2938 =
                                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                           eastl::allocator>>*)((ulong)local_2938 &
                                                                                                18446744069414584320);
                        }
                    LAB_1003c1ca0:
                        if (lVar13 != 0) {
                            uVar27 = (ulong)local_2938 & 4294967295;
                            goto LAB_1003c1eb0;
                        }
                        uVar27 = (ulong)local_2938 & 4294967295;
                        if ((local_29d8 <= local_29e0) || (uVar23 = local_29e0 + 1, ((ulong)local_2938 & 1) == 0))
                            goto LAB_1003c1eb0;
                    } while (true);
                }
                uVar27 = CONCAT71(uVar28, 1);
            LAB_1003c1eb0:
                local_2990->Render(0);
                uVar27 = uVar27 & 18446744073709551361;
                local_2aa8.~SunlightEffectSaveRestore();
                local_2760->~EffectStateSaveRestore();
                eastl::fixed_map<graphics::EffectType, bool, 121ul, true, eastl::less<graphics::EffectType>,
                                 eastl::allocator>::~fixed_map(local_1410);
                goto LAB_1003c15eb;
            }
        }
    LAB_1003c15e8:
        uVar27 = 0;
    LAB_1003c15eb:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar27 & 4294967295;
    }

    // 0x1003c1fd0, 304 bytes, placed by class name
    // MiniMap::RenderMiniMapIcons(eastl::vector<shared_ptr<Location>, eastl::allocator> const&, MiniMap::MapSquareState&, int, int, LinkMap const&, bool)
    undefined8 MiniMap::RenderMiniMapIcons(vector* param_1, MapSquareState* param_2, int param_3, int param_4,
                                           LinkMap* param_5, bool param_6) {
        int iVar1;
        int iVar2;
        int iVar4;
        shared_ptr<Location>* this;
        shared_ptr<Location>* psVar5;
        Location* this_00;
        shared_ptr* this_01;
        shared_ptr<LocType>* this_02;
        LocType* this_03;
        long lVar6;
        int* piVar7;

        this = (shared_ptr<Location>*)param_2->HeapBeginPtr();
        psVar5 = (shared_ptr<Location>*)param_2->end();
        for (; this != psVar5; this = this + 16) {
            this_00 = (Location*)shared_ptr<Location>::operator*(this);
            this_01 = (shared_ptr*)(*(code*)this_00->field_0[41])(this_00);
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                this_02 = (shared_ptr<LocType>*)(*(code*)this_00->field_0[41])(this_00);
                this_03 = (LocType*)shared_ptr<LocType>::operator->(this_02);
                iVar4 = this_03->GetMapElement();
                if (iVar4 != -1) {
                    lVar6 = this_00->GetServerPosition();
                    iVar1 = *(int*)(lVar6 + 4);
                    lVar6 = this_00->GetServerPosition();
                    if ((((*(int*)(param_1 + 1300) <= iVar1) && (iVar1 <= *(int*)(param_1 + 1292))) &&
                         (iVar2 = *(int*)(lVar6 + 8), *(int*)(param_1 + 1284) <= iVar2)) &&
                        (iVar2 <= *(int*)(param_1 + 1276))) {
                        piVar7 = (int*)eastl::fixed_vector<MiniMap::MapElementListEntry, 32ul, true,
                                                           eastl::allocator>::push_back();
                        piVar7[2] = iVar4;
                        *piVar7 = iVar1 << 7;
                        piVar7[1] = iVar2 << 7;
                    }
                }
            }
        }
        return 1;
    }

    // 0x1003c22a0, 32 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::GetProgress(LocationContainer const&) const
    undefined1 MiniMap::MapSquareState::TileState::GetProgress(LocationContainer* param_1) {
        uint uVar1;

        uVar1 = GetKey(this, param_1);
        return (&field_0)[uVar1];
    }

    // 0x1003c22c0, 48 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::SetProgress(LocationContainer const&)
    void MiniMap::MapSquareState::TileState::SetProgress(LocationContainer* param_1) {
        undefined1 uVar1;

        uVar1 = param_1->GetNumTilesPerRow();
        SetProgress(this, param_1, uVar1);
    }

    // 0x1003c22f0, 32 bytes, placed by class name
    // MiniMap::MapSquareState::IconState::GetProgress(int, int) const
    undefined1 MiniMap::MapSquareState::IconState::GetProgress(int param_1, int param_2) {
        uint uVar1;

        uVar1 = GetKey(this, param_1, param_2);
        return (&field_0)[uVar1];
    }

    // 0x1003c2310, 560 bytes, placed by class name
    // MiniMap::DrawMSI(int, int, MapSquareLocation const&, MSIType&, LocType const&, graphics::GUIManager&)
    ulong MiniMap::DrawMSI(int param_1, int param_2, MapSquareLocation* param_3, MSIType* param_4, LocType* param_5,
                           GUIManager* param_6) {
        RT7Core* pRVar1;
        char cVar2;
        char cVar3;
        undefined1 uVar4;
        bool bVar5;
        bool bVar6;
        int iVar7;
        int iVar8;
        shared_ptr* this_00;
        undefined7 extraout_var;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        shared_ptr* this_02;
        SpriteAtlas* this_03;
        FastPool<audio::SoundInstance, int>* this_04;
        long lVar9;
        undefined8* puVar10;
        Vector4T<float>* this_05;
        uint* puVar11;
        SpriteAtlasReference* pSVar12;
        undefined8 uVar13;
        MapArea* this_06;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_07;
        undefined8 uVar14;
        byte bVar15;
        undefined1* this_08;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        ColourHSL local_50;
        shared_ptr* local_40;
        MiniMap* local_38;

        new (&local_50) math::ColourHSL((float)(param_1 << 7), 0.0, (float)(param_2 << 7));
        cVar2 = param_5->ShouldMapSceneIconRotate();
        if (cVar2 == '\0') {
            bVar15 = 0;
        } else {
            cVar2 = param_3->field_8->GetRot();
            cVar3 = param_5->GetMapSceneIconRotate90Offset();
            bVar15 = cVar3 + cVar2 & 3;
        }
        pRVar1 = field_8;
        uVar4 = param_5->ShouldMapSceneIconMirror();
        this_00 = (shared_ptr*)param_4->GetSprite(pRVar1, bVar15, uVar4);
        bVar5 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar5) {
            local_38 = this;
            iVar7 = param_4->GetTint();
            this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                              (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
            this_02 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_01);
            bVar6 = shared_ptr::operator_cast_to_bool(this_02);
            if (!bVar6) {
                return 0;
            }
            local_40 = this_02;
            this_03 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                (shared_ptr<graphics::SpriteAtlas>*)this_02);
            this_04 = (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
            iVar8 = FastPool<audio::SoundInstance, int>::capacity(this_04);
            lVar9 = this_03->GetSpriteRenderMapping(iVar8);
            this_08 = local_38->field_80;
            puVar10 = (undefined8*)this_08->GetOrigin();
            local_98 = *puVar10;
            uStack_90 = puVar10[1];
            local_88 = puVar10[2];
            uStack_80 = puVar10[3];
            local_78 = puVar10[4];
            uStack_70 = puVar10[5];
            local_68 = puVar10[6];
            uStack_60 = puVar10[7];
            this_05 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)&local_98, 1);
            puVar11 = (uint*)math::Vector4T<float>::operator[](this_05, 1);
            *puVar11 = *puVar11 ^ 2147483648;
            pSVar12 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
            iVar8 = pSVar12->GetWidth();
            local_38 = (MiniMap*)CONCAT44(local_38._4_4_, (int)((float)iVar8 * 1.8));
            pSVar12 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
            iVar8 = pSVar12->GetHeight();
            uVar13 = this_08->GetScreen();
            this_06 =
                (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)local_40);
            this_07 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_06->GetOrigin();
            uVar14 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_07);
            param_6->AddElementIn3DSpace(&local_50, (ulong)local_38 & 4294967295, (int)((float)iVar8 * 1.8), &local_98,
                                         uVar13, -(uint)(iVar7 == 0) | iVar7 << 8 | 255, lVar9 + 88, uVar14, 1, 1, 0,
                                         (int)((float)iVar8 * 1.8));
        }
        return CONCAT71(extraout_var, bVar5) & 4294967295;
    }

    // 0x1003c2580, 32 bytes, placed by class name
    // MiniMap::MapSquareState::IconState::SetProgress(int, int, LODLevel)
    void MiniMap::MapSquareState::IconState::SetProgress(int param_1, int param_2, undefined1 param_4) {
        uint uVar1;

        uVar1 = GetKey(this, param_1, param_2);
        (&field_0)[uVar1] = param_4;
    }

    // 0x1003c25a0, 32 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::SetProgress(LocationContainer const&, LODLevel)
    void MiniMap::MapSquareState::TileState::SetProgress(LocationContainer* param_1, undefined1 param_3) {
        uint uVar1;

        uVar1 = GetKey(this, param_1);
        (&field_0)[uVar1] = param_3;
    }

    // 0x1003c25c0, 1728 bytes, placed by class name
    // MiniMap::RenderLocationLinesIntoBase(World&, MiniMap::MapSquareState&, CoordFine const&, MapSquare const&)
    ulong MiniMap::RenderLocationLinesIntoBase(World* param_1, MapSquareState* param_2, CoordFine* param_3,
                                               MapSquare* param_4) {
        MapSquareState* pMVar1;
        NXTPixToolkit* this_00;
        char cVar2;
        byte bVar3;
        undefined1 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        uint uVar7;
        GUIManager* pGVar9;
        undefined8 uVar10;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        shared_ptr<MapSquareLocation>* this_02;
        long lVar11;
        LocType* pLVar12;
        float* pfVar13;
        uint* puVar14;
        ulong uVar15;
        int iVar16;
        float fVar17;
        char* pcVar18;
        char* pcVar19;
        Vector3T<float> local_140[16];
        ulong local_128;
        vector<shared_ptr<MapSquareLocation>, eastl::allocator>* local_120;
        LinkMap* local_118;
        NXTPixToolkit* local_108;
        ColourHSL local_100;
        GUIManager* local_f0;
        undefined4 local_dc;
        uint local_d8;
        uint local_d4;
        char local_cd;
        float local_cc;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_d8 = param_2->field_0;
        local_d4 = param_2->field_4;
        pGVar9 = (GUIManager*)field_8->GetGUIManager();
        if (((byte)param_2->field_12 < (byte)param_2->field_5752) ||
            (uVar15 = CONCAT71((int7)((ulong)param_3 >> 8), 1), FORCE_LINE_REDRAWS != '\0')) {
            local_f0 = pGVar9;
            local_118 = (LinkMap*)param_1->GetLinkMap();
            uVar10 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_MINIMAP);
            uVar5 = param_4->GetMapSquareX();
            uVar6 = param_4->GetMapSquareZ();
            pcVar19 = "RenderLocationLinesIntoBase";
            pcVar18 = "%s: Drawing lines for %u,%u";
            logger::Logger::Log(uVar10, 0, &local_c8, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/minimap/MiniMap.cpp",
                                1434, "%s: Drawing lines for %u,%u", "RenderLocationLinesIntoBase", uVar5, uVar6);
            local_c8.~LogStream();
            this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          param_4->GetLocations();
            uVar7 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_01);
            puVar14 = (uint*)(ulong)uVar7;
            if ((char)uVar7 == '\0') {
                local_cd = (char)uVar7;
                local_128 = this_01->size();
                if (local_128 != 0) {
                    local_d8 = local_d8 << 6;
                    local_d4 = local_d4 << 6;
                    local_108 = (NXTPixToolkit*)((MiniMap*)this)->field_80;
                    uVar15 = 0;
                    local_120 = (vector<shared_ptr<MapSquareLocation>, eastl::allocator>*)this_01;
                LAB_1003c2818:
                    this_02 = (shared_ptr<MapSquareLocation>*)
                        eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>::operator[](local_120, uVar15);
                    lVar11 = shared_ptr<MapSquareLocation>::operator*(this_02);
                    if (param_3->field_0 == (int)*(char*)(lVar11 + 4)) {
                        uVar7 = (int)*(char*)(lVar11 + 5) + local_d8;
                        iVar16 = (int)*(char*)(lVar11 + 6) + local_d4;
                        puVar14 = (uint*)(ulong)uVar7;
                        cVar2 =
                            local_118->IsVisibleFromLevel(param_3->field_0, (int)*(char*)(lVar11 + 4), uVar7, iVar16);
                        if (cVar2 == '\0')
                            goto LAB_1003c2800;
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar11 + 72));
                        if (pLVar12->GetMapSceneIcon() != -1)
                            goto LAB_1003c2800;
                        new (&local_100) math::ColourHSL((float)(int)(uVar7 * 128), 0.0, (float)(iVar16 * 128));
                        new (local_140) math::Vector3T<int>();
                        pLVar12 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar11 + 72));
                        cVar2 = pLVar12->IsActive();
                        local_dc = 4294967295;
                        if (cVar2 != '\0') {
                            local_dc = 4278190335;
                        }
                        bVar3 = ((lVar11 + 8))->GetRot();
                        uVar4 = ((lVar11 + 8))->GetShape();
                        pMVar1 = param_2;
                        uVar5 = (undefined4)((ulong)pcVar18 >> 32);
                        uVar6 = (undefined4)((ulong)pcVar19 >> 32);
                        puVar14 = &switchD_1003c2918::switchdataD_1003c2c00;
                        switch (uVar4) {
                        case 0:
                        case 2:
                        case 23:
                            switch (bVar3) {
                            case 0:
                                pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
                                local_cc = *pfVar13;
                                break;
                            case 1:
                                pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
                                local_cc = *pfVar13 + 128.0;
                                goto LAB_1003c2b44;
                            case 2:
                                pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
                                local_cc = *pfVar13 + 128.0;
                                pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
                                *pfVar13 = local_cc;
                                break;
                            case 3:
                                pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
                                local_cc = *pfVar13 + 128.0;
                                goto LAB_1003c2a92;
                            default:
                                goto switchD_1003c293d_default;
                            }
                            pfVar13 = (float*)math::Vector3T<float>::operator[](local_140, 0);
                            *pfVar13 = local_cc;
                            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 2);
                            local_cc = *pfVar13;
                        LAB_1003c2770:
                            local_cc = local_cc + 128.0;
                            goto LAB_1003c2780;
                        default:
                            goto switchD_1003c2918_caseD_1;
                        case 3:
                            goto switchD_1003c2918_caseD_3;
                        case 9:
                            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
                            local_cc = *pfVar13 + 128.0;
                            pfVar13 = (float*)math::Vector3T<float>::operator[](local_140, 0);
                            *pfVar13 = local_cc;
                            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 2);
                            local_cc = *pfVar13;
                            if ((bVar3 & 253) == 0)
                                goto LAB_1003c2770;
                            pfVar13 = (float*)math::Vector3T<float>::operator[](local_140, 2);
                            *pfVar13 = local_cc;
                            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 2);
                            fVar17 = *pfVar13 + 128.0;
                            goto LAB_1003c2795;
                        }
                    }
                    goto LAB_1003c2800;
                }
            LAB_1003c2b99:
                local_f0->Render(0);
                ((MiniMap*)this)->field_1310 = 1;
                puVar14 = (uint*)CONCAT71((int7)((ulong)puVar14 >> 8), local_cd);
            }
            uVar15 = (ulong)puVar14 ^ 1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar15 & 4294967295;
    switchD_1003c2918_caseD_3:
        switch (bVar3) {
        case 0:
            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
            local_cc = *pfVar13;
            goto LAB_1003c2a92;
        case 1:
            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
            local_cc = *pfVar13 + 128.0;
            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
            *pfVar13 = local_cc;
        LAB_1003c2a92:
            pfVar13 = (float*)math::Vector3T<float>::operator[](local_140, 0);
            *pfVar13 = local_cc;
            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 2);
            local_cc = *pfVar13;
            goto LAB_1003c2780;
        case 2:
            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
            local_cc = *pfVar13 + 128.0;
            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
            *pfVar13 = local_cc;
            break;
        case 3:
            pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 0);
            local_cc = *pfVar13;
            break;
        default:
            goto switchD_1003c293d_default;
        }
    LAB_1003c2b44:
        pfVar13 = (float*)math::Vector3T<float>::operator[](local_140, 0);
        *pfVar13 = local_cc;
        pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 2);
        local_cc = *pfVar13 + 128.0;
        pfVar13 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_100, 2);
        *pfVar13 = local_cc;
    LAB_1003c2780:
        pfVar13 = (float*)math::Vector3T<float>::operator[](local_140, 2);
        fVar17 = local_cc;
    LAB_1003c2795:
        *pfVar13 = fVar17;
    switchD_1003c293d_default:
        this_00 = local_108;
        puVar14 = (uint*)local_108->GetOrigin();
        uVar10 = this_00->GetScreen();
        pcVar19 = (char*)CONCAT44(uVar6, 1);
        pcVar18 = (char*)CONCAT44(uVar5, 1);
        1069547520->AddLineIn3DSpace(local_f0, &local_100, local_140, puVar14, uVar10, local_dc, pcVar18, pcVar19);
    switchD_1003c2918_caseD_1:
        pMVar1->field_5752 = 0;
    LAB_1003c2800:
        uVar15 = uVar15 + 1;
        if (local_128 == uVar15)
            goto LAB_1003c2b99;
        goto LAB_1003c2818;
    }

    // 0x1003c2c80, 112 bytes, placed by class name
    // MiniMap::DrawMapElement(MiniMap::MapElementListEntry&)
    void MiniMap::DrawMapElement(MapElementListEntry* param_1) {
        undefined1* this_00;
        bool bVar1;
        shared_ptr* psVar2;

        this_00 = &param_1->field_16;
        bVar1 = this_00->operator_cast_to_bool();
        if (!bVar1) {
            psVar2 = ConfigProvider::GetConfig<MapElementType>(field_16, param_1->field_8, (DataStatus**)0);
            shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)this_00, psVar2);
        }
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            DrawMapElement(this, (shared_ptr*)this_00, *(int*)&param_1->field_0, *(int*)((long)&param_1->field_0 + 4),
                           param_1);
        }
    }

    // 0x1003c2d10, 448 bytes, placed by class name
    // MiniMap::DrawDebugTileProgress(World const&, CoordFine const&)
    void MiniMap::DrawDebugTileProgress(World* param_1, CoordFine* param_2) {
        undefined1* this_00;
        ulong uVar1;
        char cVar2;
        int iVar3;
        GUIManager* this_01;
        int iVar4;
        __1 local_50;
        GUIManager* local_48;
        World* local_40;

        if (DEBUG_TILE_PROGRESS == '\0') {
            return;
        }
        this_01 = (GUIManager*)field_8->GetGUIManager();
        field_8->SetClippingRectToViewport();
        iVar3 = field_8->GetInterfaceWidth();
        iVar4 = iVar3 + 3;
        if (-1 < iVar3) {
            iVar4 = iVar3;
        }
        iVar4 = iVar4 >> 2;
        this_00 = &field_1424;
        cVar2 = this_00->empty();
        if ((cVar2 == '\0') || (cVar2 = (&field_99696)->empty(), cVar2 == '\0')) {
            local_50.field_0 = this;
            local_48 = this_01;
            local_40 = param_1;
            cVar2 = this_00->empty();
            if (cVar2 == '\0') {
                DrawDebugTileProgress(World_const&, CoordFine_const&)::$_1::operator()(&local_50, 16711759,
                                                                                       (fixed_list*)this_00, 0, 0);
                DrawDebugTileProgress(World_const&, CoordFine_const&)::$_1::operator()(&local_50, 4278190159,
                                                                                       (fixed_list*)this_00, 1, -1);
            }
            cVar2 = (&field_99696)->empty();
            if (cVar2 == '\0') {
                DrawDebugTileProgress(World_const&, CoordFine_const&)::$_1::operator()(
                    &local_50, 4294967295, (fixed_list*)&field_99696, -1, -1);
            }
        }
        iVar3 = field_1108 << 13;
        uVar1 = (long)((int)(param_2->field_4 - (float)(int)(field_1304 << 13)) * iVar4) / (long)iVar3;
        iVar3 = (iVar4 - ((int)(param_2->field_12 - (float)(int)(field_1288 << 13)) * iVar4) / iVar3) + 100;
        1065353216->AddGeneralLine(this_01, uVar1 & 4294967295, 100, uVar1 & 4294967295, iVar4 + 100, 4278190208, 1, 0);
        1065353216->AddGeneralLine(this_01, 0, iVar3, iVar4, iVar3, 4278190208, 1, 0);
        this_01->Render(0);
    }

    // 0x1003c36a0, 848 bytes, placed by class name
    // MiniMap::DrawMapElement(shared_ptr<MapElementType> const&, int, int, MiniMap::MapElementListEntry*)
    void MiniMap::DrawMapElement(shared_ptr* param_1, int param_2, int param_3, MapElementListEntry* param_4) {
        char cVar1;
        int iVar3;
        int iVar4;
        int iVar5;
        MapElementType* pMVar6;
        undefined* puVar7;
        PlayerVarDomain* pPVar8;
        Polygon* pPVar10;
        shared_ptr* this_00;
        SpriteAtlasReference* pSVar11;
        Model* pMVar12;
        WaterType* this_01;
        int iVar13;
        int iVar14;
        bool bVar15;
        bool bVar16;
        shared_ptr local_68;
        float local_4c;
        shared_ptr local_48;
        bool local_31;

        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(param_1);
        pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
        puVar7 = (undefined*)pMVar6->VariableTest(&local_31, field_32, field_16);
        bVar15 = puVar7 != DataStatus::READY;
        bVar16 = local_31 == false;
        if ((bVar16 || bVar15) && (field_32 != (PlayerVarDomain*)0))
            goto LAB_1003c39a2;
        pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
        cVar1 = pMVar6->IsMultiME();
        if (cVar1 != '\0') {
            pPVar8 = (PlayerVarDomain*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
            local_68.GetMultiME(pPVar8, field_32);
            shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)&local_48, &local_68);
            local_68.~shared_ptr();
            if (param_4 != (MapElementListEntry*)0) {
                shared_ptr<MapElementType>::operator=((shared_ptr<MapElementType>*)&param_4->field_32, &local_48);
            }
            if (!shared_ptr::operator_cast_to_bool(&local_48))
                goto LAB_1003c39a2;
            pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
            pMVar6->VariableTest(&local_31, field_32, field_16);
            if (((puVar7 != DataStatus::READY) || (local_31 == false)) && (field_32 != (PlayerVarDomain*)0))
                goto LAB_1003c39a2;
        }
        pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
        cVar1 = pMVar6->GetShowOnMiniMap();
        if (cVar1 == '\0')
            goto LAB_1003c39a2;
        pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
        if (pMVar6->GetPolygon() != 0) {
            if (!bVar16 && !bVar15) {
                pMVar6 =
                    (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
                pPVar10 = (Polygon*)pMVar6->GetPolygon();
                DrawPolygon(this, pPVar10, param_2, param_3);
            }
            goto LAB_1003c39a2;
        }
        pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
        this_00 = (shared_ptr*)pMVar6->GetSprite(field_8, false);
        bVar15 = shared_ptr::operator_cast_to_bool(this_00);
        if (!bVar15)
            goto LAB_1003c39a2;
        pSVar11 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
        cVar1 = pSVar11->IsReady();
        if (cVar1 == '\0')
            goto LAB_1003c39a2;
        iVar4 = field_1128;
        pMVar12 = (Model*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
        iVar3 = pMVar12->GetExternalID();
        if (0 < iVar3) {
            pMVar12 = (Model*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
            iVar4 = pMVar12->GetExternalID();
        }
        if (iVar4 < 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("miniMEScale > 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      2017, (char*)0);
        }
        local_4c = field_1048;
        pSVar11 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
        iVar3 = pSVar11->GetWidth();
        pSVar11 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
        iVar5 = pSVar11->GetHeight();
        this_01 = (WaterType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
        local_4c = (local_4c + 0.5) * (float)iVar4 * 0.011;
        iVar3 = (int)((float)iVar3 * local_4c);
        iVar4 = this_01->GetEmissiveMapMaterialID();
        if (iVar4 == 1) {
            iVar13 = iVar3 >> 1;
        LAB_1003c3938:
            iVar13 = -iVar13;
        } else {
            iVar13 = 0;
            if (iVar4 == 2) {
                iVar13 = iVar3;
                goto LAB_1003c3938;
            }
        }
        pMVar6 = (MapElementType*)shared_ptr<MapElementType>::operator->((shared_ptr<MapElementType>*)&local_48);
        iVar5 = (int)(local_4c * (float)iVar5);
        iVar4 = pMVar6->GetVAlign();
        if (iVar4 == 2) {
            iVar14 = -iVar5;
        } else {
            iVar14 = 0;
            if (iVar4 == 1) {
                iVar14 = -(iVar5 >> 1);
            }
        }
        DrawSprite(this, this_00, param_2, param_3, iVar13, iVar14, iVar3, iVar5);
    LAB_1003c39a2:
        local_48.~shared_ptr();
    }

    // 0x1003c39f0, 128 bytes, placed by class name
    // MiniMap::DrawMapElement(int, int, int)
    void MiniMap::DrawMapElement(int param_1, int param_2, int param_3) {
        shared_ptr* psVar2;
        shared_ptr local_38;

        psVar2 = ConfigProvider::GetConfig<MapElementType>(field_16, param_1, (DataStatus**)0);
        new (&local_38) shared_ptr<oldscape::dash3d::Decor>(psVar2);
        if (shared_ptr::operator_cast_to_bool(&local_38)) {
            DrawMapElement(this, &local_38, param_2, param_3, (MapElementListEntry*)0);
        }
        local_38.~shared_ptr();
    }

    // 0x1003c3aa0, 752 bytes, placed by class name
    // MiniMap::DrawPolygon(MapElementType::Polygon const*, int, int)
    void MiniMap::DrawPolygon(Polygon* param_1, int param_2, int param_3) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        long lVar8;
        CoordMapSquare* pCVar9;
        vector* pvVar10;
        undefined4* puVar11;
        ulong uVar12;
        undefined8 uVar13;
        int* piVar14;
        undefined4 in_register_0000000c;
        ulong uVar16;
        ulong uVar17;
        undefined1 local_88[8];
        RT7Core* local_80;
        vector<int, eastl::allocator> local_78[40];
        Polygon* local_48;
        Array<int, eastl::allocator>* local_40;
        int local_34;

        local_78._36_4_ = in_register_0000000c;
        local_78._32_4_ = param_3;
        local_34 = param_2;
        eastl::vector<int, eastl::allocator>::vector(local_78);
        param_1->size();
        eastl::vector<int, eastl::allocator>::resize((ulong)local_78);
        lVar8 = param_1->size();
        local_48 = param_1;
        if (lVar8 != 0) {
            local_40 = (Array<int, eastl::allocator>*)((MiniMap*)this)->field_80;
            uVar16 = 0;
            uVar12 = 0;
            uVar17 = 1;
            do {
                pCVar9 = (CoordMapSquare*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                    (vector<math::Point<int>, eastl::allocator>*)param_1, uVar12);
                iVar6 = pCVar9->GetX();
                pCVar9 = (CoordMapSquare*)eastl::vector<math::Point<int>, eastl::allocator>::operator[](
                    (vector<math::Point<int>, eastl::allocator>*)local_48, uVar12);
                iVar6 = iVar6 + local_34;
                iVar7 = pCVar9->GetZ();
                GetScreenPosition((MiniMap*)local_88, (int)(MiniMap*)this, iVar6,
                                  (SceneViewData*)(ulong)(uint)(local_78._32_4_ + iVar7));
                pvVar10 = local_88->SSOBeginPtr((type*)(MiniMap*)this);
                uVar1 = *(undefined4*)pvVar10;
                puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, uVar16);
                *puVar11 = uVar1;
                puVar11 = (undefined4*)local_88->y();
                uVar1 = *puVar11;
                puVar11 =
                    (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, (ulong)((int)uVar16 + 1));
                param_1 = local_48;
                uVar16 = (ulong)((int)uVar16 + 2);
                *puVar11 = uVar1;
                uVar12 = local_48->size();
                bVar5 = uVar17 < uVar12;
                uVar12 = uVar17;
                uVar17 = (ulong)((int)uVar17 + 1);
            } while (bVar5);
        }
        uVar13 = (((MiniMap*)this)->field_8)->GetGUIManager();
        graphics::GUIManager::AddColouredTriangleList(uVar13, local_78, &param_1->field_112,
                                                      *(undefined4*)&param_1->field_48, 1, 0);
        local_40 = (Array<int, eastl::allocator>*)&local_48->field_88;
        local_80 = (RT7Core*)&local_48->field_64;
        uVar12 = 0;
        while (true) {
            lVar8 = local_78->size();
            uVar13 = (((MiniMap*)this)->field_8)->GetGUIManager();
            if (lVar8 - 2U <= uVar12)
                break;
            local_78._32_8_ = uVar13;
            piVar14 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_78, uVar12);
            local_34 = *piVar14;
            iVar6 = (int)uVar12;
            puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, (ulong)(iVar6 + 1));
            uVar1 = *puVar11;
            puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, (ulong)(iVar6 + 2));
            uVar2 = *puVar11;
            puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, (ulong)(iVar6 + 3));
            uVar3 = *puVar11;
            piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar12 >> 1);
            puVar11 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                (Array<unsigned int, eastl::allocator>*)local_80, (long)*piVar14);
            1065353216->AddGeneralLine(local_78._32_8_, local_34, uVar1, uVar2, uVar3, *puVar11, 1, 0);
            uVar12 = (ulong)(iVar6 + 2);
        }
        lVar8 = local_78->size();
        puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, lVar8 - 2);
        uVar1 = *puVar11;
        lVar8 = local_78->size();
        puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, lVar8 - 1);
        uVar2 = *puVar11;
        puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, 0);
        uVar3 = *puVar11;
        puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_78, 1);
        uVar4 = *puVar11;
        lVar8 = local_48->size();
        piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_40, lVar8 - 1);
        puVar11 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
            (Array<unsigned int, eastl::allocator>*)local_80, (long)*piVar14);
        1065353216->AddGeneralLine(uVar13, uVar1, uVar2, uVar3, uVar4, *puVar11, 1, 0);
        eastl::vector<int, eastl::allocator>::~vector(local_78);
    }

    // 0x1003c3e40, 128 bytes, placed by class name
    // MiniMap::DrawSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int, int, int, int, int, int)
    void MiniMap::DrawSprite(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                             int param_7) {
        int iVar1;
        GUIManager* pGVar2;
        vector* pvVar3;
        int* piVar4;
        undefined4 in_register_0000000c;
        undefined1 local_38[8];

        GetScreenPosition((MiniMap*)local_38, (int)this, param_2,
                          (SceneViewData*)CONCAT44(in_register_0000000c, param_3));
        pGVar2 = (GUIManager*)field_8->GetGUIManager();
        pvVar3 = local_38->SSOBeginPtr((type*)(MiniMap*)this);
        iVar1 = *(int*)pvVar3;
        piVar4 = (int*)local_38->y();
        pGVar2->AddSprite(param_4 + iVar1, param_5 + *piVar4, param_6, param_7, 4294967295, param_1, 1);
    }

    // 0x1003c3ec0, 336 bytes, placed by class name
    // MiniMap::GetScreenPosition(int, int, graphics::SceneViewData const&)
    MiniMap* MiniMap::GetScreenPosition(int param_1, int param_2, SceneViewData* param_3) {
        int iVar1;
        int iVar2;
        Matrix44T* pMVar3;
        float* pfVar4;
        vector* pvVar5;
        undefined4 in_register_00000034;
        long lVar6;
        math* this_00;
        NXTPixToolkit* in_R8;
        undefined1 local_88[64];
        ImVec4 local_48[16];
        float local_38;
        float local_34;

        lVar6 = CONCAT44(in_register_00000034, param_1);
        pMVar3 = (Matrix44T*)in_R8->GetScreen();
        this_00 = (math*)local_88;
        math::operator*(this_00, pMVar3, (Matrix44T*)(lVar6 + 752));
        ImVec4::ImVec4(local_48, (float)param_2, 0.0, (float)(int)param_3, 1.0);
        math::Vector4T<float>::operator*=((Vector4T<float>*)local_48, (Matrix44T*)this_00);
        pfVar4 = (float*)local_48->second();
        local_34 = *pfVar4;
        pvVar5 = local_48->SSOBeginPtr(this_00);
        *(float*)pvVar5 = *(float*)pvVar5 / local_34;
        pfVar4 = (float*)local_48->second();
        local_34 = *pfVar4;
        pfVar4 = (float*)local_48->y();
        *pfVar4 = *pfVar4 / local_34;
        pvVar5 = local_48->SSOBeginPtr(this_00);
        local_34 = (float)*(int*)(lVar6 + 1124) * (*(float*)pvVar5 * 0.5 + 0.5);
        pfVar4 = (float*)local_48->y();
        local_38 = (float)*(int*)(lVar6 + 1124) * (*pfVar4 * 0.5 + 0.5);
        iVar1 = math::RoundFloatToInt(local_34);
        iVar2 = math::RoundFloatToInt(local_38);
        new (this) oldscape::sidebars::SideBarData(iVar1, iVar2);
        return this;
    }

    // 0x1003c4010, 416 bytes, placed by class name
    // MiniMap::DrawSpriteReference(shared_ptr<graphics::SpriteAtlasReference> const&, int, int)
    void MiniMap::DrawSpriteReference(shared_ptr* param_1, int param_2, int param_3) {
        bool bVar1;
        int iVar2;
        vector* pvVar3;
        undefined4* puVar4;
        float* pfVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr* psVar6;
        SpriteAtlas* this_01;
        FastPool<audio::SoundInstance, int>* this_02;
        long lVar7;
        int* piVar8;
        GUIManager* pGVar9;
        undefined8 uVar10;
        MapArea* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        undefined8 uVar11;
        Vector3T<int> local_50[16];
        undefined1* local_40;
        int local_38;
        float local_34;

        psVar6 = param_1;
        math::Vector3T<int>::Vector3T(local_50);
        local_34 = (float)param_2;
        pvVar3 = local_50->SSOBeginPtr(psVar6);
        *(float*)pvVar3 = local_34;
        puVar4 = (undefined4*)local_50->y();
        *puVar4 = 0;
        local_34 = (float)param_3;
        pfVar5 = (float*)local_50->second();
        *pfVar5 = local_34;
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                          (shared_ptr<graphics::SpriteAtlasReference>*)param_1);
        psVar6 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_00);
        bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
        if (bVar1) {
            this_01 =
                (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)psVar6);
            this_02 = (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)param_1);
            iVar2 = FastPool<audio::SoundInstance, int>::capacity(this_02);
            lVar7 = this_01->GetSpriteRenderMapping(iVar2);
            local_34 = field_1052 * 0.33333334 + 0.6666666;
            piVar8 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(lVar7 + 104), 0);
            local_38 = (int)((float)*piVar8 * local_34);
            piVar8 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(lVar7 + 104), 1);
            local_34 = (float)(int)((float)*piVar8 * local_34);
            pGVar9 = (GUIManager*)field_8->GetGUIManager();
            local_40 = &field_752;
            uVar10 = field_80->GetScreen();
            this_03 =
                (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)psVar6);
            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetOrigin();
            uVar11 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
            pGVar9->AddElementIn3DSpace(local_50, local_38, local_34, local_40, uVar10, 18446744073709551615,
                                        lVar7 + 88, uVar11, 1, 0);
        }
    }

    // 0x1003c4280, 288 bytes, placed by class name
    // MiniMap::DrawSquare(int, int)
    void MiniMap::DrawSquare(int param_1, int param_2) {
        vector* pvVar1;
        undefined4* puVar2;
        float* pfVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined4 in_register_00000034;
        type* ptVar6;
        Vector3T<int>* pVVar7;
        Vector3T<int> local_50[16];
        Vector3T<int> local_40[12];
        float local_34;

        ptVar6 = (type*)CONCAT44(in_register_00000034, param_1);
        math::Vector3T<int>::Vector3T(local_50);
        math::Vector3T<int>::Vector3T(local_40);
        local_34 = (float)param_1 + -25.0;
        pvVar1 = local_50->SSOBeginPtr(ptVar6);
        *(float*)pvVar1 = local_34;
        puVar2 = (undefined4*)local_50->y();
        *puVar2 = 0;
        local_34 = (float)param_2 + -25.0;
        pfVar3 = (float*)local_50->second();
        *pfVar3 = local_34;
        pVVar7 = local_50;
        local_40->SetXYZ(local_50);
        pvVar1 = local_40->SSOBeginPtr(pVVar7);
        *(float*)pvVar1 = *(float*)pvVar1 + 50.0;
        pfVar3 = (float*)local_40->second();
        *pfVar3 = *pfVar3 + 50.0;
        uVar4 = field_8->GetGUIManager();
        uVar5 = field_80->GetScreen();
        1112014848->AddLineIn3DSpace(uVar4, local_50, local_40, &field_752, uVar5, 4294967295, 1, 1);
    }

    // 0x1003c43a0, 432 bytes, placed by class name
    // MiniMap::DrawSpriteReference(shared_ptr<graphics::SpriteAtlasReference> const&, int, int, int, int)
    void MiniMap::DrawSpriteReference(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5) {
        bool bVar1;
        int iVar2;
        vector* pvVar3;
        undefined4* puVar4;
        float* pfVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr* psVar6;
        SpriteAtlas* this_01;
        FastPool<audio::SoundInstance, int>* this_02;
        long lVar7;
        int* piVar8;
        GUIManager* pGVar9;
        undefined8 uVar10;
        MapArea* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        undefined8 uVar11;
        undefined4 in_register_00000084;
        undefined4 in_register_0000008c;
        Vector3T<int> local_60[16];
        undefined8 local_50;
        undefined8 local_48;
        undefined1* local_40;
        int local_38;
        float local_34;

        local_48 = CONCAT44(in_register_0000008c, param_5);
        local_50 = CONCAT44(in_register_00000084, param_4);
        psVar6 = param_1;
        math::Vector3T<int>::Vector3T(local_60);
        local_34 = (float)param_2;
        pvVar3 = local_60->SSOBeginPtr(psVar6);
        *(float*)pvVar3 = local_34;
        puVar4 = (undefined4*)local_60->y();
        *puVar4 = 0;
        local_34 = (float)param_3;
        pfVar5 = (float*)local_60->second();
        *pfVar5 = local_34;
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                          (shared_ptr<graphics::SpriteAtlasReference>*)param_1);
        psVar6 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_00);
        bVar1 = shared_ptr::operator_cast_to_bool(psVar6);
        if (bVar1) {
            this_01 =
                (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)psVar6);
            this_02 = (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)param_1);
            iVar2 = FastPool<audio::SoundInstance, int>::capacity(this_02);
            lVar7 = this_01->GetSpriteRenderMapping(iVar2);
            local_34 = field_1052 * 0.33333334 + 0.6666666;
            piVar8 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(lVar7 + 104), 0);
            local_38 = (int)((float)*piVar8 * local_34);
            piVar8 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(lVar7 + 104), 1);
            local_34 = (float)(int)((float)*piVar8 * local_34);
            pGVar9 = (GUIManager*)field_8->GetGUIManager();
            local_40 = &field_752;
            uVar10 = field_80->GetScreen();
            this_03 =
                (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)psVar6);
            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetOrigin();
            uVar11 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
            pGVar9->AddElementIn3DSpace(local_60, local_38, local_34, local_40, uVar10, 18446744073709551615,
                                        lVar7 + 88, uVar11, 1, 0, local_50, local_48);
        }
    }

    // 0x1003c4600, 704 bytes, placed by class name
    // MiniMap::DrawMapArrowEdge(float, shared_ptr<graphics::SpriteAtlasReference> const&, int, int, math::Vector3T<float> const&)
    void MiniMap::DrawMapArrowEdge(float param_1, shared_ptr* param_2, int param_3, int param_4, Vector3T* param_5) {
        uint uVar1;
        bool bVar2;
        int iVar3;
        float* pfVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr* psVar5;
        SpriteAtlas* this_01;
        FastPool<audio::SoundInstance, int>* this_02;
        long lVar6;
        undefined8 uVar7;
        MapArea* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        undefined8 uVar8;
        int iVar9;
        uint uVar10;
        int iVar11;
        int iVar12;
        undefined4 uVar13;
        float fVar14;
        undefined8 local_78;
        undefined4 local_70;
        shared_ptr* local_68;
        shared_ptr* local_60;
        ulong local_58;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_70 = *(undefined4*)(param_5 + 8);
        local_78 = *(undefined8*)param_5;
        local_60 = param_2;
        local_3c = param_1;
        local_38 = (float)param_4;
        local_34 = (float)param_3;
        RotateAroundOrigin(this, (Vector3T*)&local_78, (Vector3T*)&field_1188, field_1200);
        uVar1 = field_1116;
        iVar3 = field_1120;
        uVar10 = uVar1 + 7;
        if (-1 < (int)uVar1) {
            uVar10 = uVar1;
        }
        iVar9 = iVar3 + 7;
        if (-1 < iVar3) {
            iVar9 = iVar3;
        }
        pfVar4 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 2);
        uVar13 = fabs(*pfVar4);
        local_58 = CONCAT44(local_58._4_4_, uVar13);
        pfVar4 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_78, 0);
        fVar14 = (float)fabs(*pfVar4);
        local_58 = atan((float)local_58 / fVar14);
        local_40 = (float)atan(
            (float)(int)((long)((long)(iVar9 << 3) & 18446744073709551552U) / (long)(int)((uVar10 & 536870904) << 3)));
        fVar14 = field_1200;
        iVar3 = *(int*)(field_1144 + (ulong)(local_40 <= (float)local_58) * 4 + -28);
        uVar1 = field_1124;
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)
                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                          (shared_ptr<graphics::SpriteAtlasReference>*)local_60);
        psVar5 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_00);
        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
        if (bVar2) {
            iVar12 = (int)uVar1 / 2;
            iVar11 = (int)local_34 / 2;
            iVar9 = (int)local_38 / 2;
            local_38 = (float)iVar9;
            local_68 = psVar5;
            local_34 = (float)::sin(1.5707964);
            local_34 = local_34 * (float)(iVar3 / 2);
            fVar14 =
                (float)::sin((float)(~-(uint)((float)local_58 < local_40) & (uint)((local_3c + 1.5707964) - fVar14) |
                                     (uint)(fVar14 - local_3c) & -(uint)((float)local_58 < local_40)));
            fVar14 = (float)::abs(local_34 / fVar14);
            psVar5 = local_68;
            fVar14 = local_38 - fVar14;
            local_58 = CONCAT44(local_58._4_4_, (int)((float)(iVar9 + iVar12) + fVar14));
            local_38 = (float)(iVar11 + iVar12);
            local_34 = (float)(int)((float)(iVar12 - iVar9) + fVar14);
            this_01 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                (shared_ptr<graphics::SpriteAtlas>*)local_68);
            this_02 = (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)local_60);
            iVar3 = FastPool<audio::SoundInstance, int>::capacity(this_02);
            lVar6 = this_01->GetSpriteRenderMapping(iVar3);
            uVar7 = field_8->GetGUIManager();
            this_03 =
                (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)psVar5);
            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetOrigin();
            uVar8 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
            iVar3 = (int)field_1124 / 2;
            ((local_3c - field_1200), uVar7, iVar12 - iVar11, local_34, local_38, local_58 & 4294967295, 4294967295,
             lVar6 + 88, uVar8, 1, iVar3, iVar3)
                ->AddElementRotated();
        }
    }

    // 0x1003c48c0, 304 bytes, placed by class name
    // MiniMap::RotateAroundOrigin(math::Vector3T<float>&, math::Vector3T<float> const&, float)
    void MiniMap::RotateAroundOrigin(Vector3T* param_1, Vector3T* param_2, float param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float* pfVar5;
        float fVar6;
        float fVar7;

        fVar6 = (float)::sin(param_3);
        fVar7 = (float)::cos(param_3);
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_2, 0);
        fVar1 = *pfVar5;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        *pfVar5 = *pfVar5 - fVar1;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_2, 2);
        fVar1 = *pfVar5;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        *pfVar5 = *pfVar5 - fVar1;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar1 = *pfVar5;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        fVar2 = *pfVar5;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar3 = *pfVar5;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        fVar4 = *pfVar5;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        *pfVar5 = fVar1 * fVar7 - fVar2 * fVar6;
        pfVar5 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        *pfVar5 = fVar7 * fVar4 + fVar6 * fVar3;
    }

    // 0x1003c4af0, 256 bytes, placed by class name
    // MiniMap::IsWithinMap(CoordFine const&)
    undefined8 MiniMap::IsWithinMap(CoordFine* param_1) {
        float* pfVar1;
        float fVar2;
        undefined8 local_30;
        float local_28;

        local_28 = param_1->field_12;
        local_30._0_4_ = param_1->field_4;
        local_30._4_4_ = param_1->field_8;
        RotateAroundOrigin(this, (Vector3T*)&local_30, (Vector3T*)&field_1188, field_1200);
        fVar2 = ((float)(int)field_1116 * 8.0) / field_1048;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_30, 0);
        if ((*pfVar1 <= fVar2) && (pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_30, 0),
                                   fVar2 = -fVar2, fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
            fVar2 = ((float)field_1120 * 8.0) / field_1048;
            pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_30, 2);
            if ((*pfVar1 <= fVar2) &&
                (pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_30, 2), fVar2 = -fVar2,
                 fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
                return 1;
            }
        }
        return 0;
    }

    // 0x1003c4c20, 224 bytes, placed by class name
    // MiniMap::DrawLoggedInPlayer()
    void MiniMap::DrawLoggedInPlayer() {
        GUIManager* pGVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        GridRect local_48;
        float local_34;

        local_34 = field_1052 * 0.6666667 + 1.3333333;
        pGVar1 = (GUIManager*)field_8->GetGUIManager();
        iVar2 = math::RoundFloatToInt((float)(int)field_1124 * 0.5 - local_34);
        iVar3 = math::RoundFloatToInt((float)(int)field_1124 * 0.5 - local_34);
        local_34 = local_34 + local_34;
        iVar4 = math::RoundFloatToInt(local_34);
        iVar5 = math::RoundFloatToInt(local_34);
        new (&local_48) oldscape::dash3d::GridRect(iVar2, iVar3, iVar4, iVar5);
        pGVar1->AddColouredRectangle(&local_48, 4294967295, 1);
    }

    // 0x1003c4d00, 16 bytes, base-object constructor, placed by class name
    // MiniMap::MapSquareState::TileState::TileState()
    void MiniMap::MapSquareState::TileState::TileState() {
        ResetProgress(this);
    }

    // 0x1003c4d10, 16 bytes, complete-object constructor, placed by class name
    // MiniMap::MapSquareState::TileState::TileState(): jumps straight to the base-object constructor

    // 0x1003c4d30, 48 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::GetKey(LocationContainer const&) const
    void MiniMap::MapSquareState::TileState::GetKey(LocationContainer* param_1) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetEffectAnimID();
        iVar2 = param_1->GetMinGridZ();
        GetKey((TileState*)param_1, iVar1, iVar2);
    }

    // 0x1003c4d60, 48 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::GetKey(CoordGrid const&) const
    void MiniMap::MapSquareState::TileState::GetKey(CoordGrid* param_1) {
        int iVar1;
        int iVar2;

        iVar1 = param_1->GetLocalX();
        iVar2 = param_1->GetLocalZ();
        GetKey((TileState*)param_1, iVar1, iVar2);
    }

    // 0x1003c4d90, 32 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::GetProgress(CoordGrid const&) const
    undefined1 MiniMap::MapSquareState::TileState::GetProgress(CoordGrid* param_1) {
        uint uVar1;

        uVar1 = GetKey(this, param_1);
        return (&field_0)[uVar1];
    }

    // 0x1003c4db0, 64 bytes, placed by class name
    // MiniMap::MapSquareState::TileState::GetKey(int, int) const
    uint MiniMap::MapSquareState::TileState::GetKey(int param_1, int param_2) {
        uint uVar1;

        uVar1 = param_2 >> 3 | param_1 & 4294967288U;
        if (63 < uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("ret < ARRAY_SIZE(m_tiles)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      2530, (char*)0);
        }
        return uVar1;
    }

    // 0x1003c4df0, 16 bytes, base-object constructor, placed by class name
    // MiniMap::MapSquareState::IconState::IconState()
    void MiniMap::MapSquareState::IconState::IconState() {
        ResetProgress(this);
    }

    // 0x1003c4e00, 16 bytes, complete-object constructor, placed by class name
    // MiniMap::MapSquareState::IconState::IconState(): jumps straight to the base-object constructor

    // 0x1003c4e10, 64 bytes, placed by class name
    // MiniMap::MapSquareState::IconState::GetKey(int, int) const
    uint MiniMap::MapSquareState::IconState::GetKey(int param_1, int param_2) {
        uint uVar1;

        uVar1 = param_1 << 6 | param_2;
        if (4095 < uVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("ret < ARRAY_SIZE(m_tiles)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      2557, (char*)0);
        }
        return uVar1;
    }

    // 0x1003d4e70, 128 bytes, placed by class name
    // MiniMap::RebuildTileListAndReprioritise(CoordFine&, int, int)::$_0::operator()(MiniMap::MapSquareState const&, MiniMap::MapSquareState const&) const
    /* MiniMap::RebuildTileListAndReprioritise(CoordFine&, int,
   int)::$_0::TEMPNAMEPLACEHOLDERVALUE(MiniMap::MapSquareState const&,
   MiniMap::MapSquareState const&) const */

    uint MiniMap::RebuildTileListAndReprioritise(CoordFine&, int, int)::$_0::operator()(MapSquareState* param_1,
                                                                                        MapSquareState* param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        iVar1 = param_1->field_0 - field_8;
        iVar5 = -iVar1;
        if (iVar5 < 0) {
            iVar5 = iVar1;
        }
        iVar2 = param_1->field_4 - field_12;
        iVar1 = -iVar2;
        if (iVar1 < 0) {
            iVar1 = iVar2;
        }
        iVar4 = param_2->field_0 - field_8;
        iVar2 = -iVar4;
        if (iVar2 < 0) {
            iVar2 = iVar4;
        }
        iVar3 = param_2->field_4 - field_12;
        iVar4 = -iVar3;
        if (iVar4 < 0) {
            iVar4 = iVar3;
        }
        return ((iVar1 + iVar5) - (iVar4 + iVar2)) +
                   ((uint)(byte)param_2->field_12 - (uint)(byte)param_1->field_12) * *(int*)(field_0 + 1108) * 7 >>
               31;
    }

} // namespace jag::game

// 0x1003c49f0, 16 bytes, placed by neighbouring functions
// atan(float)
void atan(float param_1) {
    _atanf();
}

// 0x1003c4a00, 16 bytes, placed by neighbouring functions
// fabs(float)
ulong fabs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x1003c4a10, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x1003c4a20, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x1003c4ae0, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}
