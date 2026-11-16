// libs/game/runetek5/scene/minimap/MiniMap.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MiniMap.h"

namespace jag::game {
    // 0x100d42bb0
    int32_t MiniMap::TILES_PER_UPDATE = 9;

    // 0x100f38370
    bool MiniMap::ENABLE_TERRAIN_PASS = 1;

    // 0x100f38371
    bool MiniMap::ENABLE_LOC_PASS = 1;

    // 0x100f38372
    bool MiniMap::ENABLE_LINES_PASS = 1;

    // 0x100f38373
    bool MiniMap::ENABLE_BASE_LAYER = 1;

    // 0x100f38374
    bool MiniMap::ENABLE_CUSTOM_LAYER = 1;

    // 0x100f38378
    uint8_t MiniMap::DEBUG_ISOLATE_X = 50;

    // 0x100f3837c
    uint8_t MiniMap::DEBUG_ISOLATE_Z = 50;

    // 0x100f38380
    uint8_t MiniMap::MINIMAP_RENDER_FORMAT = 18;

    // 0x100f38384
    uint8_t MiniMap::MINIMAP_COMPOSITING_FORMAT = 18;

    // 0x100f38388
    bool MiniMap::DRAW_MINIMAP = 1;

    // 0x1039b4aa8
    bool MiniMap::ENABLE_ENVIRONMENT_TINTING;

    // 0x1039b4aa9
    bool MiniMap::DEBUG_BASE_RT;

    // 0x1039b4aaa
    bool MiniMap::DEBUG_BASE_DEPTH_BUFFER;

    // 0x1039b4aab
    bool MiniMap::DEBUG_COMPOSITE_RT;

    // 0x1039b4aac
    bool MiniMap::DEBUG_TILE_PROGRESS;

    // 0x1039b4aad
    bool MiniMap::FORCE_TERRAIN_REDRAWS;

    // 0x1039b4aae
    bool MiniMap::FORCE_LINE_REDRAWS;

    // 0x1039b4aaf
    bool MiniMap::FORCE_TOTAL_REBUILD;

    // 0x1039b4ab0
    bool MiniMap::DEBUG_ISOLATE_TILE;

    // 0x1003bbd50
    void MiniMap::RegisterTweakVars(tweak::ContainerGroup& containerGroup) {
        shared_ptr<tweak::Container> local_a0;

        eastl::string local_90("MiniMap");
        (containerGroup._vptr[7].Clear)(&local_a0, containerGroup, &local_90);
        auto pCVar1 = local_a0.operator->();
        pCVar1->AddCheckBox("Draw MiniMap", DRAW_MINIMAP);
        pCVar1 = (Container*)local_a0.operator->();
        pCVar1->AddCheckBox("Enable Terrain", ENABLE_TERRAIN_PASS);
        pCVar1 = (Container*)local_a0.operator->();
        pCVar1->AddCheckBox("Enable Locations", ENABLE_LOC_PASS);
        pCVar1 = (Container*)local_a0.operator->();
        pCVar1->AddCheckBox("Enable Lines", ENABLE_LINES_PASS);
        pCVar1 = (Container*)local_a0.operator->();
        pCVar1->AddCheckBox("Enable Base", ENABLE_BASE_LAYER);
        pCVar1 = (Container*)local_a0.operator->();
        pCVar1->AddCheckBox("Enable Custom Layer", ENABLE_CUSTOM_LAYER);
        pCVar1 = (Container*)local_a0.operator->();
        pCVar1->AddCheckBox("Force Terrain Redraws", FORCE_TERRAIN_REDRAWS);
        pCVar1 = (Container*)local_a0.operator->();
        pCVar1->AddCheckBox("Force Line Redraws", FORCE_LINE_REDRAWS);
        pCVar1 = (Container*)local_a0.operator->();
        pCVar1->AddCheckBox("Force Total Rebuild", FORCE_TOTAL_REBUILD);
        local_90 = eastl::fixed_string<char, 64>();
        local_90.sprintf("Enable Isolated Tile (%d,%d)", (unsigned long)DEBUG_ISOLATE_X,
                         (unsigned long)DEBUG_ISOLATE_Z);
        pCVar1 = (Container*)local_a0.operator->();
        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pCVar1->AddCheckBox(pcVar2, DEBUG_ISOLATE_TILE);
        pcVar2 = (char*)local_a0.operator->();
        local_b0.AddGroup(pcVar2);
        pCVar1 = (Container*)local_b0.operator->();
        pCVar1->AddCheckBox("Debug Base RT", DEBUG_BASE_RT);
        pCVar1 = (Container*)local_b0.operator->();
        pCVar1->AddCheckBox("Show Tile Progress", DEBUG_TILE_PROGRESS);
        pCVar1 = (Container*)local_b0.operator->();
        pCVar1->AddCheckBox("Debug Depth Buffer", DEBUG_BASE_DEPTH_BUFFER);
        pCVar1 = (Container*)local_b0.operator->();
        pCVar1->AddCheckBox("Debug Composite RT", DEBUG_COMPOSITE_RT);
    }

    // 0x1003bc0a0
    MiniMap::MiniMap(graphics::RT7Core& rt7Core, ConfigProvider& configProvider, SceneManager& sceneManager,
                     PlayerVarDomain* playerVarDomain, int arg5, int arg6, int arg7)
        : field_8(rt7Core), field_16(configProvider), field_24(sceneManager), field_32(playerVarDomain), field_40(0) {
        LogStream local_158;

        new (&field_48) shared_ptr();
        RenderPass* local_190 = (RenderPass*)&field_64;
        new (local_190) MiniMapRenderPass();
        SceneViewData* local_188 = (SceneViewData*)field_80;
        new (local_188) graphics::SceneViewData();
        new (&field_752) math::Matrix44T<float>();
        uint8_t* this_00 = field_816;
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
        new (&field_1072) eastl::stack<math::Rect<int>, eastl::vector<math::Rect<int>>>();
        field_1104 = 1;
        field_1108 = 0;
        field_1112 = 0;
        field_1116 = arg5;
        field_1120 = arg6;
        field_1124 = 0;
        field_1128 = arg7;
        field_1136 = (RenderTargetsManager*)rt7Core.GetRenderTargetsManager();
        new (field_1144) shared_ptr();
        field_1160 = 0;
        new (&field_1168) shared_ptr();
        new (&field_1184) CoordFine();
        field_1200 = 0.0;
        new (&field_1208) eastl::vector<shared_ptr<ChangeLocationRequest>>();
        new (&field_1240) CoordFine(-1, 0.0, 0.0);
        new (&field_1256) CoordFine(-1, 0.0, 0.0);
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
        vector<MiniMap::MapElementListEntry>* local_180 = (vector<MiniMap::MapElementListEntry>*)&field_1312;
        new (local_180) eastl::vector<MiniMap::MapElementListEntry>();
        vector<MiniMap::MapElementListEntry>* local_178 = (vector<MiniMap::MapElementListEntry>*)&field_1344;
        new (local_178) eastl::vector<MiniMap::MapElementListEntry>();
        MiniMap* local_170 = (MiniMap*)&field_1376;
        new (local_170) eastl::vector<MiniMap::MapElementListEntry>();
        field_1408 = -1;
        field_1412 = 4294967295;
        field_1416 = 4294967295;
        field_1420 = -1;
        new (&field_1424) eastl::fixed_list<MiniMap::MapSquareState, 16ul>();
        new (&field_99696) eastl::fixed_list<MiniMap::MapSquareState, 16ul>();
        if (field_1128 < 2) {
            LogAssert("m_miniMapElementScale > 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      119, nullptr);
        }
        local_168.field_0 = 1.0;
        field_1016.SetValue(local_168.field_0, 0, 0);
        ColourHSL local_168(0.5391639f, -0.6469966, 0.5391639f);
        this_00->SetDirection(local_168, 0, 0);
        float fVar7 = 1.6156863f;
        ColourHSL local_1a0(1.7333333f, 1.6156863f, 1.4666667f);
        local_168._0_8_ = *0.5 * local_1a0;
        local_168.field_8 = fVar7;
        this_00->SetColour(local_168, 0, 0);
        local_168 = math::ColourHSL(0.690625, 0.64375, 0.584375);
        this_00->SetAntiColour(local_168, 0, 0);
        fVar7 = 1.1297182f;
        local_1a0 = math::ColourHSL(1.2119792f, 1.1297182f, 1.0255208f);
        local_168._0_8_ = *0.5 * local_1a0;
        local_168.field_8 = fVar7;
        this_00->SetAmbientColour(local_168, 0, 0);
        local_180->set_capacity(50);
        local_178->set_capacity(50);
        MiniMap* this_03 = local_170;
        local_170->set_capacity(50);
        int iVar1 = CalcBuildMapSquares(this_03, arg5, arg6);
        SceneViewData* this_01 = local_188;
        field_1108 = iVar1;
        local_188->SetRenderFlags(20);
        this_01->RenderPassPushBack(local_190);
        unsigned int uVar6 = field_1108 << 9;
        field_1112 = uVar6;
        unsigned int uVar2 = math::RoundUpToPowerOf2(uVar6);
        field_1112 = uVar2;
        uVar6 = uVar2 + 511;
        if (-1 < (int)uVar2) {
            uVar6 = uVar2;
        }
        field_1108 = (int)uVar6 >> 9;
        auto pLVar4 = logger::default_logger();
        LogStream local_c8(LOGGER_MINIMAP);
        ((uint8_t)pLVar4)
            ->Log(nullptr, (LogLevel)&local_c8, 8, 14416868, 148, "%s: Map square build size now: %d", "MiniMap",
                  field_1108);
        field_1160 = field_1112;
        long lVar5 = ((MapArea*)local_c8.Instance())->GetOrigin();
        if (*(int*)(lVar5 + 308) < 4) {
            pLVar4 = logger::default_logger();
            local_158 = logger::LogStream(LOGGER_MINIMAP);
            ((uint8_t)pLVar4)
                ->Log(nullptr, (LogLevel)&local_158, 8, 14416868, 157,
                      "%s: Old GPU detected, falling back to R8G8B8 texture format", "MiniMap");
            MINIMAP_RENDER_FORMAT = 16;
            MINIMAP_COMPOSITING_FORMAT = 16;
        }
        CreateRenderingResources();
    }

    // 0x1003bc880
    void MiniMap::CalcBuildMapSquares(int arg1, int arg2) const {
        uint64_t extraout_XMM1_Qa;
        uint64_t extraout_XMM1_Qb;
        uint8_t auVar3[16];

        int iVar1 = eastl::max<int>(arg1, arg2);
        float fVar2 = (float)_ceilf((float)iVar1 * 0.001953125f);
        auVar3._8_8_ = extraout_XMM1_Qb;
        auVar3._0_8_ = extraout_XMM1_Qa;
        fVar2 = (float)((int)fVar2 * (int)fVar2 * 2);
        auVar3 = rsqrtss(auVar3, (unsigned __int128)((unsigned int)fVar2));
        float fVar4 = fVar2 * auVar3._0_4_;
        fVar2 = (float)_ceilf(~-(unsigned int)(ABS(fVar2) < 1.1754944e-38) &
                              (unsigned int)((fVar4 * auVar3._0_4_ - 3.0) * fVar4 * -0.5));
        eastl::min<graphics::GraphicsQuality>(4, (int)fVar2 + 1);
    }

    // 0x1003bc900
    void MiniMap::CreateRenderingResources() {
        uint8_t local_118[64];
        uint8_t local_d8[24];

        ((local_d8 + 16))->~AutoSingleton();
        auto pLVar2 = logger::default_logger();
        LogStream local_c0(LOGGER_MINIMAP);
        ((uint8_t)pLVar2)
            ->Log(nullptr, (LogLevel)&local_c0, 8, 14416868, 177, "%s: Need to redraw everything",
                  "CreateRenderingResources");
        array<render::Texture::Desc, 2ul> local_198;
        unsigned int uVar1 = field_1112;
        unsigned int* puVar3 = &local_198[0];
        *puVar3 = uVar1;
        puVar3[1] = uVar1;
        *(uint8_t*)(puVar3 + 8) = 1;
        puVar3[3] = MINIMAP_RENDER_FORMAT;
        new (local_118) render::Texture::Desc();
        local_118._0_4_ = field_1112;
        local_118[32] = 0;
        local_118._12_4_ = 22;
        local_118._4_4_ = local_118._0_4_;
        local_d8->Register(field_1136, 14417127, *3553, (int)&local_198, DAT_00000001, (unsigned int)(Desc*)local_118,
                           true);
        *field_1144 = *local_d8;
        field_1309 = 1;
        CreateCompositingRT();
    }

    // 0x1003bcb30
    MiniMap::~MiniMap() {
        DestroyRenderingResources();
        field_99696.~fixed_list();
        field_1424.~fixed_list();
        field_1376.~vector();
        field_1344.~vector();
        field_1312.~vector();
        field_1208.~vector();
        field_1168.~shared_ptr();
        field_1144->~shared_ptr();
        field_1072.~stack();
        field_80->~SceneViewData();
        field_64.~MiniMapRenderPass();
        field_48.~weak_ptr();
    }

    // 0x1003bcc70
    void MiniMap::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        field_1136->Unregister(*field_1144);
        DestroyCompositingRT();
    }

    // 0x1003bccf0
    void MiniMap::CreateCompositingRT() {
        uint8_t local_70[80];

        unsigned long arg1 = (unsigned long)(unsigned int)field_1120;
        unsigned int uVar1 = eastl::max<int>(field_1116, field_1120);
        field_1124 = uVar1;
        uVar1 = math::RoundUpToPowerOf2(uVar1);
        field_1124 = uVar1;
        array<render::Texture::Desc, 2ul> local_f0;
        uVar1 = field_1124;
        unsigned int* puVar2 = &local_f0[arg1];
        *puVar2 = uVar1;
        puVar2[1] = uVar1;
        *(uint8_t*)(puVar2 + 8) = 0;
        puVar2[3] = MINIMAP_COMPOSITING_FORMAT;
        new (local_70) render::Texture::Desc();
        local_70._0_4_ = field_1124;
        local_70._12_4_ = 0;
        local_70._4_4_ = local_70._0_4_;
        ((local_70 + 64))
            ->Register(field_1136, 14417142, *3553, (int)&local_f0, DAT_00000001, (unsigned int)(Desc*)local_70, false);
        field_1168 = (*((local_70 + 64)));
        ((local_70 + 64))->~shared_ptr();
    }

    // 0x1003bce00
    void MiniMap::DestroyCompositingRT() {
        field_1136->Unregister(field_1168);
    }

    // 0x1003bce20
    void MiniMap::RenderToGUI(graphics::GUIManager& guiManager, const math::Rect<int>& rect) {
        auto texture = GetMiniMapRenderTexture();
        unsigned int uVar1 = field_1124;
        float arg1 = (float)((int)(uVar1 - field_1116) / 2) * (1.0 / (float)(int)uVar1);
        float local_30 = (float)((int)(uVar1 - field_1120) / 2) * (1.0 / (float)(int)uVar1);
        float local_2c = 1.0 - arg1;
        ImVec4 local_40(arg1, 1.0 - local_30, 0.0, 0.0);
        local_40.SetRight(local_2c);
        local_40.SetBottom(local_30);
        auto drawCallState = guiManager.GetCurrentState();
        DrawCallState local_70(*drawCallState);
        guiManager.Begin(local_70);
        guiManager.AddElement(rect, 4294967295, local_40, texture, 1);
        guiManager.Render(nullptr);
        guiManager.End();
    }

    // 0x1003bd060
    void MiniMap::ForceBaseUpdate() {
        field_1012 = 0;
        uint8_t* this_00 = &field_1256;
        int arg2 = this_00->GetMapSquareX();
        int arg3 = this_00->GetMapSquareZ();
        RebuildTileListAndReprioritise(*this_00, arg2, arg3);
        UpdateBaseRT(field_1108);
        field_1013 = 1;
        field_1014 = 1;
    }

    // 0x1003bd0c0
    void MiniMap::RebuildTileListAndReprioritise(CoordFine& coordFine, int arg2, int arg3) {
        int* piVar2;
        uint32_t in_register_0000000c;
        int iVar5;
        LogStream local_158;

        uint64_t uVar3 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        auto pLVar1 = logger::default_logger();
        LogStream local_c8(LOGGER_MINIMAP);
        ((uint8_t)pLVar1)
            ->Log(nullptr, (LogLevel)&local_c8, 8, 14416868, 1038, "%s: MapBase now: %d,%d - %d,%d (%dx%d)",
                  "RebuildTileListAndReprioritise", field_1304, field_1288, field_1296, field_1280,
                  field_1296 - field_1304, field_1280 - field_1288, coordFine, uVar3);
        uint8_t* this_00 = &field_1424;
        this_00->clear();
        field_99696.clear();
        int iVar4 = field_1304;
        if (iVar4 < field_1296) {
            do {
                for (iVar5 = field_1288; iVar5 < field_1280; iVar5 = iVar5 + 1) {
                    if ((DEBUG_ISOLATE_TILE == '\0') || ((iVar4 == DEBUG_ISOLATE_X && (iVar5 == DEBUG_ISOLATE_Z)))) {
                        pLVar1 = logger::default_logger();
                        local_158 = logger::LogStream(LOGGER_MINIMAP);
                        ((uint8_t)pLVar1)
                            ->Log(nullptr, (LogLevel)&local_158, 8, 14416868, 1057,
                                  "%s: Adding new MapSquareState @ %d,%d", "RebuildTileListAndReprioritise", iVar4,
                                  iVar5);
                        piVar2 = (int*)this_00->push_back();
                        piVar2[2] = coordFine.field_0;
                        *piVar2 = iVar4;
                        piVar2[1] = iVar5;
                    }
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < field_1296);
        }
        this_00->sort<MiniMap::RebuildTileListAndReprioritise(CoordFine&, int, int)::__0>(this);
        field_1309 = 1;
    }

    // 0x1003bd320
    void MiniMap::UpdateBaseRT(int arg1) {
        field_1108 = arg1;
        field_1112 = arg1 << 9;
        unsigned int uVar1 = math::RoundUpToPowerOf2(arg1 << 9);
        field_1112 = uVar1;
        unsigned int uVar3 = uVar1 + 511;
        if (-1 < (int)uVar1) {
            uVar3 = uVar1;
        }
        field_1108 = (int)uVar3 >> 9;
        auto pLVar2 = logger::default_logger();
        LogStream local_b8(LOGGER_MINIMAP);
        ((uint8_t)pLVar2)
            ->Log(nullptr, (LogLevel)&local_b8, 8, 14416868, 411, "%s: Map square build size now: %d", "UpdateBaseRT",
                  field_1108);
        field_1308 = '\x01';
    }

    // 0x1003bd420
    void MiniMap::ClearMinimapDepth(const render::RenderTargets& renderTargets, const math::Rect<int>& rect,
                                    float arg3) {
        auto this_00 = GetRenderContext();
        this_00->SetRenderTargets(renderTargets);
        ScissorRectStateSaveRestore local_68(*this_00);
        int arg2 = rect.GetX();
        int arg3_00 = rect.GetZ();
        int arg4 = rect.GetPos();
        int arg5 = rect.GetLevel();
        RenderContext* this_01 = this_00;
        this_00->SetScissorRectangle(true, arg2, arg3_00, arg4, arg5);
        long lVar1 = this_01->Instance();
        this_00->SetDepthStencilState((lVar1 + 720));
        unsigned int arg3_01 =
            render::GetDepthTextureClearFlags((Texture*)renderTargets.GetDepthStencilTargetTexture());
        this_00->ClearDepthStencilTarget(arg3, 0, arg3_01);
    }

    // 0x1003bd510
    void MiniMap::CheckPendingLocationChangeRequests() {
        shared_ptr<ChangeLocationRequest>* psVar2;
        shared_ptr<ChangeLocationRequest>* changeLocationRequest;
        vector<shared_ptr<ChangeLocationRequest>> local_40;

        if (field_1208.empty() == '\0') {
            local_40 = eastl::vector<shared_ptr<ChangeLocationRequest>>();
            local_40.swap(field_1208);
            changeLocationRequest = (shared_ptr<ChangeLocationRequest>*)local_40.HeapBeginPtr();
            psVar2 = (shared_ptr<ChangeLocationRequest>*)local_40.end();
            for (; changeLocationRequest != psVar2; changeLocationRequest = changeLocationRequest + 16) {
                ForceBaseUpdate(*changeLocationRequest);
            }
        }
    }

    // 0x1003bd5b0
    void MiniMap::ForceBaseUpdate(const shared_ptr<ChangeLocationRequest>& changeLocationRequest) {
        uint8_t* this_00;
        ConfigProvider* this_01;
        uint8_t bVar2;
        shared_ptr* psVar5;
        LocType* pLVar6;
        LocData* pLVar7;
        int iVar8;
        int iVar9;
        uint8_t local_68[20];
        float local_54;
        float local_4c;
        MapSquareState* local_48;
        shared_ptr* local_40;
        int local_34;

        CoordGrid* this_03 = (CoordGrid*)((HeadbarType*)changeLocationRequest)->second();
        int iVar3 = this_03->GetMapSquareX();
        int iVar4 = this_03->GetMapSquareZ();
        if (FindMapSquareState(local_48, iVar3, iVar4)) {
            this_01 = field_16;
            iVar3 = ((HeadbarType*)changeLocationRequest)->GetStickTime();
            psVar5 = (shared_ptr*)this_01->GetConfig<LocType>(iVar3, nullptr);
            if (!(shared_ptr::operator_cast_to_bool(psVar5))) {
                field_1208.push_back(changeLocationRequest);
            } else {
                iVar3 = this_03->GetMapSquareX();
                local_40 = psVar5;
                iVar4 = this_03->GetMapSquareZ();
                MakeMapSquareStatePending(iVar3, iVar4);
                this_00 = &field_1256;
                iVar3 = this_00->GetMapSquareX();
                iVar4 = this_00->GetMapSquareZ();
                RebuildTileListAndReprioritise(*this_00, iVar3, iVar4);
                new ((local_68 + 16)) CoordFine(this_03, false);
                psVar5 = local_40;
                pLVar6 = (LocType*)(*local_40).operator->();
                pLVar7 = (LocData*)((HeadbarType*)changeLocationRequest)->GetOffset();
                bVar2 = pLVar7->GetRot();
                local_34 = pLVar6->GetGridLength((unsigned int)bVar2);
                pLVar6 = (LocType*)(*psVar5).operator->();
                pLVar7 = (LocData*)((HeadbarType*)changeLocationRequest)->GetOffset();
                bVar2 = pLVar7->GetRot();
                iVar4 = pLVar6->GetGridWidth((unsigned int)bVar2);
                iVar9 = (int)(local_54 - (float)(field_1304 << 13));
                iVar8 = (int)(local_4c - (float)(field_1288 << 13));
                iVar3 = iVar9 + 15;
                if (-1 < iVar9) {
                    iVar3 = iVar9;
                }
                iVar9 = iVar8 + 15;
                if (-1 < iVar8) {
                    iVar9 = iVar8;
                }
                new (local_68) oldscape::dash3d::GridRect(iVar3 >> 4, iVar9 >> 4, iVar4 * 8, local_34 << 3);
                field_1072.push(*local_68);
                local_48->field_1592->SetProgress(*this_03, 5);
                local_48->field_12 = 5;
                field_1056 = 1;
            }
        }
    }

    // 0x1003bd7b0
    uint32_t MiniMap::FindMapSquareState(MiniMap::MapSquareState*& arg1, int arg2, int arg3) {
        bool cVar1 = FindMapSquareStateInList(arg1, arg2, arg3, field_1424);
        uint32_t uVar2 = 1;
        if (!cVar1) {
            uVar2 = FindMapSquareStateInList(arg1, arg2, arg3, field_99696);
        }
        return uVar2;
    }

    // 0x1003bd850
    void MiniMap::MakeMapSquareStatePending(int arg1, int arg2) {
        MapSquareState* this_01;
        MapSquareState* mapSquareState;
        ListIterator<MiniMap::MapSquareState, MiniMap::MapSquareState const*, MiniMap::MapSquareState const&>* local_58;

        uint8_t* this_00 = &field_99696;
        auto local_48 = this_00->begin();
        auto local_40 = this_00->end();
        bool cVar1 = local_48 != local_40;
        if (cVar1) {
            do {
                this_01 = (MapSquareState*)*local_48;
                if ((this_01->field_0 == arg1) && (this_01->field_4 == arg2)) {
                    mapSquareState = (MapSquareState*)field_1424.push_back();
                    this_01->swap(*mapSquareState);
                    new (&local_58) eastl::ListIterator(&local_48);
                    local_40 = this_00->erase(local_58);
                    return;
                }
                ++local_48;
                local_40 = this_00->end();
                cVar1 = local_48 != local_40;
            } while (cVar1);
        }
    }

    // 0x1003bd970
    void MiniMap::MapSquareState::TileState::SetProgress(const CoordGrid& coordGrid, LODLevel lodLevel) {
        unsigned int uVar1 = GetKey(coordGrid);
        (&field_0)[uVar1] = (char)lodLevel;
    }

    // 0x1003bd990
    void MiniMap::ResizeRenderBuffer(int arg1, int arg2) {
        int iVar1;
        Logger* pLVar2;
        GUIManager* this_00;
        RenderTargets* this_01;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_02;
        uint64_t* puVar3;
        int iVar4;
        LogStream local_c8;

        if ((field_1116 != arg1) || (field_1120 != arg2)) {
            pLVar2 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_MINIMAP);
            ((uint8_t)pLVar2)
                ->Log(nullptr, (LogLevel)&local_c8, 8, 14416868, 372, "%s: %d x %d", "ResizeRenderBuffer", arg1, arg2);
            field_1116 = arg1;
            field_1120 = arg2;
            this_00 = field_8->GetGUIManager();
            this_01 = (RenderTargets*)field_1168.operator->();
            this_02 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          this_01->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*this_02)[0];
            this_00->RemoveCurrentTexture(*puVar3);
            DestroyCompositingRT();
            CreateCompositingRT();
            CalcBuildMapSquares(field_1116, field_1120);
            iVar1 = math::RoundUpToPowerOf2(field_1108 << 9);
            iVar4 = iVar1 + 511;
            if (-1 < iVar1) {
                iVar4 = iVar1;
            }
            if (iVar4 >> 9 != field_1108) {
                field_1108 = iVar4 >> 9;
                ForceBaseUpdate();
            }
            field_1309 = 1;
        }
    }

    // 0x1003bdb20
    void MiniMap::MainDraw(unsigned int arg1, unsigned int arg2, const shared_ptr<World>& world,
                           const CoordFine& coordFine, float arg5, float arg6,
                           std::function<void(MiniMap&, CoordFine const&)> const& callback) {
        bool bVar1;
        bool bVar2;
        bool cVar3;
        bool cVar4;
        int iVar5;
        World* this_00;
        GUIManager* guiManager;
        unsigned long long arg3;
        Logger* pLVar6;
        RenderTargets* renderTargets;
        Rect<int>* rect;
        float fVar7;
        GUIProjectionSaveRestore local_120;
        function<void_(MiniMap&, CoordFine const&)>* local_f0;
        float local_e8;
        World* local_e0;
        CoordFine* local_d0;
        LogStream local_c8;
        long local_38;

        local_d0 = (CoordFine*)(((uint64_t)local_d0._4_4_ << 32) | (uint32_t)arg6);
        local_f0 = callback;
        unsigned int local_e4 = arg1;
        float local_d4 = arg5;
        if (DRAW_MINIMAP != '\0') {
            this_00 = (World*)*world;
            iVar5 = coordFine.GetMapSquareX();
            if (((iVar5 != 0) || (iVar5 = coordFine.GetMapSquareZ(), iVar5 != 0)) &&
                (cVar3 = this_00->GetMainSceneDrawn(), cVar3)) {
                local_e0 = this_00;
                guiManager = field_8->GetGUIManager();
                local_120 = graphics::GUIProjectionSaveRestore(*guiManager);
                if (FORCE_TOTAL_REBUILD != '\0') {
                    ForceBaseUpdate();
                    FORCE_TOTAL_REBUILD = '\0';
                }
                arg3 = FrameTime::GetCurrentTimeMS();
                if ((local_d0._0_4_ != field_1052) || (field_1052 == 0.0)) {
                    field_1052 = local_d0._0_4_;
                    local_e8 = local_d0._0_4_ * 0.5;
                    field_1016.SetValue(local_e8, 200, arg3);
                }
                fVar7 = (float)field_1016.GetValue(arg3);
                field_1048 = fVar7;
                local_d0 = coordFine;
                if (coordFine.field_0 != 4294967295) {
                    if (*(unsigned int*)&field_1184 != coordFine.field_0) {
                        pLVar6 = logger::default_logger();
                        local_c8 = logger::LogStream(LOGGER_MINIMAP);
                        ((uint8_t)pLVar6)
                            ->Log(nullptr, (LogLevel)&local_c8, 8, 14416868, 465,
                                  "%s: Level changed, need to clerar redraw everything", "MainDraw");
                        field_1012 = 1;
                        UpdateBaseRT(field_1108);
                    }
                    field_1184 = coordFine;
                    field_1200 = local_d4;
                    if (field_1240 != -1) {
                        iVar5 = coordFine.GetMapSquareX();
                        bVar1 = true;
                        if (((field_1304 <= iVar5) && (iVar5 = coordFine.GetMapSquareX(), iVar5 < field_1296)) &&
                            ((iVar5 = coordFine.GetMapSquareZ(),
                              iVar5 < field_1280 && (iVar5 = coordFine.GetMapSquareZ(), field_1288 <= iVar5)))) {
                            iVar5 = coordFine.GetMapSquareX();
                            if (iVar5 == field_1304) {
                                iVar5 = coordFine.GetLocalX();
                                bVar1 = iVar5 < 32;
                            } else {
                                iVar5 = coordFine.GetMapSquareX();
                                if (iVar5 == field_1296 - 1) {
                                    iVar5 = coordFine.GetLocalX();
                                    bVar1 = 32 < iVar5;
                                } else {
                                    bVar1 = false;
                                }
                            }
                        }
                        iVar5 = coordFine.GetMapSquareZ();
                        if (iVar5 == field_1288) {
                            iVar5 = coordFine.GetLocalZ();
                            bVar2 = true;
                            if (31 < iVar5) {
                                bVar2 = bVar1;
                            }
                        } else {
                            iVar5 = coordFine.GetMapSquareZ();
                            bVar2 = bVar1;
                            if (iVar5 == field_1280 - 1) {
                                iVar5 = coordFine.GetLocalZ();
                                bVar2 = true;
                                if (iVar5 < 33) {
                                    bVar2 = bVar1;
                                }
                            }
                        }
                        if (bVar2) {
                            UpdateBaseRT(field_1108);
                        } else {
                            *(float*)&field_1248 = coordFine.field_8;
                        }
                    }
                    if ((*(int*)&field_1256 != -1) && (250 < arg2 - field_1064)) {
                        field_1064 = arg2;
                        SetAllSquaresIncomplete();
                    }
                    CheckMapElementList(*local_e0);
                    if ((field_1240 != -1) && (field_1309 != 0)) {
                        UpdateBase(local_e4, *local_e0, field_1240);
                    }
                    cVar3 = field_1308;
                    if (cVar3) {
                        BuildBase(*local_d0);
                    }
                    while (cVar4 = field_1072.empty(), !cVar4) {
                        renderTargets = (RenderTargets*)**field_1144;
                        rect = (Rect<int>*)eastl::stack<math::Rect<int>, eastl::vector<math::Rect<int>>>::top();
                        ClearMinimapDepth(*renderTargets, *rect, 1.0);
                        eastl::stack<math::Rect<int>, eastl::vector<math::Rect<int>>>::pop();
                    }
                    if (!cVar3) {
                        RenderLayers(*local_e0, *local_d0, local_d4, *local_f0);
                    }
                }
            }
        }
    }

    // 0x1003bdf90
    void MiniMap::SetAllSquaresIncomplete() {
        uint8_t* this_01;
        MapSquareState* mapSquareState;

        uint8_t* this_00 = &field_99696;
        MiniMap* local_38 = this;
        auto local_48 = this_00->begin();
        auto local_40 = this_00->end();
        bool cVar1 = local_48 != local_40;
        if (cVar1) {
            this_01 = &local_38->field_1424;
            do {
                mapSquareState = (MapSquareState*)*local_48;
                ((MapSquareState*)this_01->push_back())->swap(*mapSquareState);
                ++local_48;
                cVar1 = local_48 != local_40;
            } while (cVar1);
        }
        this_00->clear();
        local_38->field_1309 = 1;
    }

    // 0x1003be050
    void MiniMap::CheckMapElementList(const World& world) {
        uint8_t* this_00;
        MapElementListEntry* mapElementListEntry1;
        MapElementListEntry* mapElementListEntry2;
        MapElementListEntry* mapElementListEntry3;
        uint8_t* this_01;

        if ((((field_1408 != field_1280) || (field_1412 != field_1288)) || (field_1416 != field_1296)) ||
            (field_1420 != field_1304)) {
            if (BuildMapElementList(world, field_1240) != '\0') {
                field_1408 = field_1280;
                field_1412 = field_1288;
                field_1416 = field_1296;
                field_1420 = field_1304;
                this_00 = &field_1312;
                this_00->clear();
                mapElementListEntry1 = (MapElementListEntry*)this_00->end();
                this_01 = &field_1376;
                mapElementListEntry2 = (MapElementListEntry*)this_01->HeapBeginPtr();
                mapElementListEntry3 = (MapElementListEntry*)this_01->end();
                this_00->insert<MiniMap::MapElementListEntry*>(mapElementListEntry1, mapElementListEntry2,
                                                               mapElementListEntry3);
                this_01->clear();
            }
        }
    }

    // 0x1003be140
    void MiniMap::UpdateBase(unsigned int arg1, World& world, const CoordFine& coordFine) {
        int iVar4;
        int iVar5;
        CoordFine* coordFine_00;
        MapSquareState* pMVar9;
        Logger* pLVar10;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_03;
        uint64_t* puVar11;
        int* piVar12;
        MapElementListEntry* pMVar14;
        MapElementListEntry* pMVar15;
        MapElementListEntry* pMVar16;
        long lVar17;
        uint8_t local_17d0[72];
        LogStream local_1748;

        CheckPendingLocationChangeRequests();
        new (local_17d0) graphics::ClippingState(field_8);
        field_8->SetClippingRectangle(0, 0, field_1112, field_1112, true);
        SetupBaseCameraFrameBuffer(*field_80, coordFine);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1788 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_1344;
        local_1788->clear();
        if (field_1056 != '\0') {
            iVar4 = field_1184.GetMapSquareX();
            iVar5 = field_1184.GetMapSquareZ();
            PutSquareAtTopOfPendingList(iVar4, iVar5);
        }
        auto this_02 = field_8->GetGUIManager();
        RT7Core* local_1760 = this_02;
        this_02->SetProjection(2, field_1112, field_1112);
        auto renderContext = this_02->GetRenderContext();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1778 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_1144;
        auto pRVar7 = local_1778->end();
        CheckClearingRequirements(*renderContext, pRVar7);
        new ((local_17d0 + 24)) render::DrawCallState();
        OutputMergerState* pOVar8 = ((local_17d0 + 24))->GetOutputMergerState();
        pOVar8->SetViewports((Viewport*)((field_80 + 432))->HeapBeginPtr(), 1);
        pOVar8 = ((local_17d0 + 24))->GetOutputMergerState();
        pRVar7 = (RenderTargets*)local_1778->end();
        pOVar8->SetRenderTargets(pRVar7);
        local_1760->Begin(*((local_17d0 + 24)));
        field_1060 = 0;
        uint8_t* this_00 = &field_1424;
        MapSquareState local_16b8 = this_00->begin();
        auto local_1750 = this_00->end();
        bool cVar2 = local_16b8 != local_1750;
        if (cVar2) {
            do {
                coordFine_00 = (CoordFine*)*local_16b8;
                RenderMapSquareIntoBase((unsigned int)this, (World*)(unsigned long)arg1, (MapSquareState*)world,
                                        coordFine_00, (uint8_t)coordFine, true);
                ++local_16b8;
                cVar2 = local_16b8 != local_1750;
            } while (cVar2);
        }
        list<MiniMap::MapSquareState, eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true>>* local_1780 =
            (list<MiniMap::MapSquareState, eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true>>*)&field_99696;
        auto EVar6 = this_00->size();
        iVar4 = eastl::min<graphics::GraphicsQuality>(EVar6, 9);
        if (0 < iVar4) {
            iVar4 = 0;
            do {
                local_16b8 = MapSquareState();
                pMVar9 = (MapSquareState*)this_00->front();
                local_16b8.swap(*pMVar9);
                this_00->pop_front();
                cVar2 = RenderMapSquareIntoBase((unsigned int)this, (World*)(unsigned long)arg1, (MapSquareState*)world,
                                                (CoordFine*)&local_16b8, (uint8_t)coordFine, false);
                if (!cVar2) {
                    pMVar9 = (MapSquareState*)this_00->push_back();
                    local_16b8.swap(*pMVar9);
                } else {
                    pLVar10 = logger::default_logger();
                    local_1748 = logger::LogStream(LOGGER_MINIMAP);
                    ((uint8_t)pLVar10)
                        ->Log(nullptr, (LogLevel)&local_1748, 8, 14416868, 637, "%s: Map square completed: %d,%d",
                              "UpdateBase", local_16b8.field_0, local_16b8.field_4);
                    pMVar9 = (MapSquareState*)local_1780->push_back();
                    local_16b8.swap(*pMVar9);
                }
                iVar4 = iVar4 + 1;
                EVar6 = this_00->size();
                iVar5 = eastl::min<graphics::GraphicsQuality>(EVar6, 9);
            } while (iVar4 < iVar5);
        }
        if (field_1310 != '\0') {
            field_1310 = 0;
            pRVar7 = (RenderTargets*)(*local_1778).operator->();
            this_03 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar7->GetColourTargetTextures();
            puVar11 = (uint64_t*)(*this_03)[0];
            (*puVar11)->GenerateMipMaps();
        }
        field_1309 = this_00->empty() ^ 1;
        local_16b8 = this_00->begin();
        local_1750 = this_00->end();
        cVar2 = local_16b8 != local_1750;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar1 = local_1788;
        if (cVar2) {
            do {
                piVar12 = (int*)*local_16b8;
                if ((uint8_t*)world.GetMapSquareStatus(*piVar12, piVar12[1]) != DataStatus::MISSING) {
                    pMVar14 = (MapElementListEntry*)pvVar1->end();
                    pMVar15 = (MapElementListEntry*)((piVar12 + 4))->HeapBeginPtr();
                    pMVar16 = (MapElementListEntry*)((piVar12 + 4))->end();
                    pvVar1->insert<MiniMap::MapElementListEntry*>(pMVar14, pMVar15, pMVar16);
                }
                ++local_16b8;
                cVar2 = local_16b8 != local_1750;
            } while (cVar2);
        }
        list<MiniMap::MapSquareState, eastl::fixed_node_allocator<5776ul, 16ul, 8ul, 0ul, true>>* this_01 = local_1780;
        local_16b8 = local_1780->begin();
        local_1750 = this_01->end();
        cVar2 = local_16b8 != local_1750;
        pvVar1 = local_1788;
        if (cVar2) {
            do {
                lVar17 = *local_16b8;
                pMVar14 = (MapElementListEntry*)pvVar1->end();
                pMVar15 = (MapElementListEntry*)((lVar17 + 16))->HeapBeginPtr();
                pMVar16 = (MapElementListEntry*)((lVar17 + 16))->end();
                pvVar1->insert<MiniMap::MapElementListEntry*>(pMVar14, pMVar15, pMVar16);
                ++local_16b8;
                cVar2 = local_16b8 != local_1750;
            } while (cVar2);
        }
        local_1760->Render(nullptr);
        local_1760->End();
        ((local_17d0 + 24))->~DrawCallState();
    }

    // 0x1003be750
    void MiniMap::BuildBase(const CoordFine& coordFine) {
        float arg1;
        RT7Core* this_03;
        RenderContext* this_04;
        OutputMergerState* pOVar6;
        RenderTargets* renderTargets;
        long lVar7;
        float fVar15;
        uint8_t local_268[48];
        ImVec4 local_238;
        DrawCallState local_228;
        ReturnValue local_1f8;
        ReturnValue local_1f0;
        uint8_t local_1e8[28];
        LogStream local_1c0;

        fixed_string<char, 64> local_a0;
        new ((local_268 + 24)) graphics::ClippingState(field_8);
        field_8->SetClippingRectangle(0, 0, field_1112, field_1112, true);
        auto guiManager = field_8->GetGUIManager();
        GUIProjectionSaveRestore local_298(*guiManager);
        auto pLVar3 = logger::default_logger();
        LogStream local_130(LOGGER_MINIMAP);
        auto pcVar4 = coordFine.ToString<64, true>(local_a0);
        ((uint8_t)pLVar3)->Log(nullptr, (LogLevel)&local_130, 8, 14416868, 758, "%s: %s", "BuildBase", pcVar4);
        local_1e8._0_4_ = coordFine.field_0;
        local_1e8._4_4_ = coordFine.field_4;
        local_1e8._8_4_ = coordFine.field_8;
        local_1e8._12_4_ = coordFine.field_12;
        int iVar10 = field_1108;
        Vector3T<float>* this_00 = (Vector3T<float>*)(local_1e8 + 4);
        float* pfVar5 = (float*)(*this_00)[2];
        float local_1c8 = (float)(iVar10 << 13);
        float local_1c4 = (float)(int)local_1c8 * 0.5;
        int iVar12 = (int)((*pfVar5 + local_1c4) * 0.0078125f + 32.0);
        iVar10 = iVar12 + 63;
        if (-1 < iVar12) {
            iVar10 = iVar12;
        }
        pfVar5 = (float*)(*this_00)[2];
        int iVar13 = (int)((*pfVar5 - local_1c4) * 0.0078125f + 32.0);
        int iVar14 = iVar13 + 63;
        if (-1 < iVar13) {
            iVar14 = iVar13;
        }
        pfVar5 = (float*)(*this_00)[0];
        float local_1cc = *pfVar5 + local_1c4;
        pfVar5 = (float*)(*((local_1e8 + 4)))[0];
        int iVar9 = (int)(local_1cc * 0.0078125f + 32.0);
        int iVar8 = iVar9 + 63;
        if (-1 < iVar9) {
            iVar8 = iVar9;
        }
        int iVar2 = (int)((*pfVar5 - local_1c4) * 0.0078125f + 32.0);
        int iVar11 = iVar2 + 63;
        if (-1 < iVar2) {
            iVar11 = iVar2;
        }
        field_1272 = local_1c8;
        field_1276 = iVar12;
        field_1280 = iVar10 >> 6;
        field_1284 = iVar13;
        field_1288 = iVar14 >> 6;
        field_1292 = iVar9;
        field_1296 = iVar8 >> 6;
        field_1300 = iVar2;
        field_1304 = iVar11 >> 6;
        Layout* this_01 = (Layout*)(local_1e8 + 4);
        if (field_1108 < (iVar8 >> 6) - (iVar11 >> 6)) {
            LogAssert("(m_baseMapSquareEast - m_baseMapSquareWest) <= m_buildMapSquares",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      787, nullptr);
        }
        local_1c4 = ((float)field_1108 * 0.5 + (float)field_1304) * 8192.0;
        pfVar5 = (float*)this_01->SSOBeginPtr();
        *pfVar5 = local_1c4;
        local_1c4 = ((float)field_1108 * 0.5 + (float)field_1288) * 8192.0;
        pfVar5 = (float*)this_01->second();
        *pfVar5 = local_1c4;
        pfVar5 = (float*)(*this_01)[0];
        local_1c4 = *pfVar5;
        pfVar5 = (float*)(*this_01)[2];
        local_1c8 = *pfVar5;
        uint8_t* this_02 = field_1144;
        bool cVar1 = this_02->operator_cast_to_bool();
        if (cVar1) {
            this_03 = (RT7Core*)(*this_02).operator->();
            cVar1 = this_03->HasColourTargets();
            if (cVar1) {
                this_04 = (RenderContext*)this_03->GetRenderContext();
                local_228 = render::DrawCallState();
                local_238 = ImVec4(0.0, 0.0, 0.0, 1.0);
                new (local_268) render::Viewport(0, 0, field_1112, field_1112, 0.0, 1.0);
                pOVar6 = local_228.GetOutputMergerState();
                pOVar6->SetViewports(local_268, 1);
                pOVar6 = local_228.GetOutputMergerState();
                renderTargets = (RenderTargets*)this_02->end();
                pOVar6->SetRenderTargets(renderTargets);
                pOVar6 = local_228.GetOutputMergerState();
                pOVar6->SetClearColours(&local_238, 1);
                pOVar6 = local_228.GetOutputMergerState();
                pOVar6->SetClearFlags(3);
                this_04->BindDrawCallState(local_228);
                local_1c4 = (float)(int)(local_1c4 * 0.00012207031f);
                fVar15 = local_1c8 * 0.00012207031f;
                local_1f8 = field_1424.begin();
                local_1f0 = field_1424.end();
                cVar1 = local_1f8 != local_1f0;
                if (cVar1) {
                    do {
                        lVar7 = *local_1f8;
                        *(uint8_t*)(lVar7 + 12) = 5;
                        ++local_1f8;
                        cVar1 = local_1f8 != local_1f0;
                    } while (cVar1);
                }
                arg1 = local_1c4;
                RebuildTileListAndReprioritise(*local_1e8, (int)local_1c4, (int)fVar15);
                PrepareRebuildList((int)arg1, (int)fVar15);
                field_1308 = '\0';
                field_1309 = 1;
                field_1310 = 1;
                field_1240 = *local_1e8;
                field_1256 = *local_1e8;
                pLVar3 = logger::default_logger();
                local_1c0 = logger::LogStream(LOGGER_MINIMAP);
                ((uint8_t)pLVar3)
                    ->Log(nullptr, (LogLevel)&local_1c0, 8, 14416868, 844, "%s: Base build complete!", "BuildBase");
                ((local_268 + 24))->~ClippingState();
            }
        }
        LogAssert("m_baseRT && m_baseRT->HasColourTargets()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/minimap/"
                  "MiniMap.cpp",
                  795, nullptr);
    }

    // 0x1003bee50
    void MiniMap::RenderLayers(const World& world, const CoordFine& coordFine, float arg3,
                               std::function<void(MiniMap&, CoordFine const&)> const& callback) {
        uint8_t* puVar1;
        int iVar2;
        bool cVar3;
        int iVar4;
        unsigned int uVar5;
        DrawCallState* drawCallState;
        RenderTargets* pRVar7;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar8;
        long* plVar9;
        uint64_t* puVar10;
        int* piVar11;
        long lVar12;
        Texture* texture;
        FogEffect* this_03;
        float* pfVar14;
        int iVar18;
        float fVar21;
        float fVar22;
        uint8_t local_138[24];
        uint64_t local_c0[2];
        CoordMapSquare local_98;
        ImVec4 local_88;
        float local_74;
        float local_70;
        float local_6c;
        CoordFine* local_50;
        World* local_48;

        function* local_b0 = (function*)callback;
        float local_a8 = arg3;
        auto this_00 = GetRenderContext();
        auto pGVar6 = field_8->GetGUIManager();
        MiniMap* local_38 = this;
        new (local_138) graphics::ClippingState(field_8);
        GUIManager* local_40 = pGVar6;
        GUIProjectionSaveRestore local_168(*pGVar6);
        if (((DEBUG_BASE_RT != '\0') || (DEBUG_COMPOSITE_RT != '\0')) || (DEBUG_BASE_DEPTH_BUFFER != '\0')) {
            local_f0 = render::DrawCallState();
            local_38->field_8->SetClippingRectToViewport();
            drawCallState = local_40->GetCurrentState();
            new ((local_138 + 24)) render::DrawCallState(*drawCallState);
            local_40->Begin(*((local_138 + 24)));
            iVar4 = local_38->field_8->GetInterfaceWidth();
            iVar18 = iVar4 + 3;
            if (-1 < iVar4) {
                iVar18 = iVar4;
            }
            iVar18 = iVar18 >> 2;
            local_68 = oldscape::dash3d::GridRect(0, 100, iVar18, iVar18);
            local_88 = ImVec4(0.0, 1.0, 0.0, 0.0);
            local_88.SetRight(1.0);
            local_88.SetBottom(0.0);
            if (DEBUG_BASE_RT != '\0') {
                puVar1 = local_38->field_1144;
                pRVar7 = (RenderTargets*)(*puVar1).operator->();
                pvVar8 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar7->GetColourTargetTextures();
                plVar9 = (long*)(*pvVar8)[0];
                if (*plVar9 != 0) {
                    pRVar7 = (RenderTargets*)(*puVar1).operator->();
                    pvVar8 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 pRVar7->GetColourTargetTextures();
                    puVar10 = (uint64_t*)(*pvVar8)[0];
                    local_40->AddElement(local_68, 4294967295, local_88, *puVar10, 0);
                    piVar11 = (int*)local_68.SSOBeginPtr();
                    *piVar11 = *piVar11 + iVar18 + 10;
                }
            }
            if (DEBUG_BASE_DEPTH_BUFFER != '\0') {
                puVar1 = local_38->field_1144;
                pRVar7 = (RenderTargets*)(*puVar1).operator->();
                lVar12 = pRVar7->GetDepthStencilTargetTexture();
                if (lVar12 != 0) {
                    pRVar7 = (RenderTargets*)(*puVar1).operator->();
                    texture = (Texture*)pRVar7->GetDepthStencilTargetTexture();
                    local_40->AddElement(local_68, 4294967295, local_88, texture, 0);
                    piVar11 = (int*)local_68.SSOBeginPtr();
                    *piVar11 = *piVar11 + iVar18 + 10;
                }
            }
            if (DEBUG_COMPOSITE_RT != '\0') {
                puVar1 = &local_38->field_1168;
                pRVar7 = (RenderTargets*)(*puVar1).operator->();
                pvVar8 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar7->GetColourTargetTextures();
                plVar9 = (long*)(*pvVar8)[0];
                if (*plVar9 != 0) {
                    piVar11 = (int*)local_68.second();
                    *piVar11 = *piVar11 / 2;
                    piVar11 = (int*)local_68.qw();
                    *piVar11 = *piVar11 / 2;
                    pRVar7 = (RenderTargets*)(*puVar1).operator->();
                    pvVar8 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 pRVar7->GetColourTargetTextures();
                    puVar10 = (uint64_t*)(*pvVar8)[0];
                    local_40->AddElement(local_68, 4294967295, local_88, *puVar10, 0);
                }
            }
            local_40->Render(nullptr);
            local_40->End();
            ((local_138 + 24))->~DrawCallState();
        }
        DrawCallState local_f0;
        new ((local_138 + 24)) render::Viewport(0, 0, local_38->field_1124, local_38->field_1124, 0.0, 1.0);
        auto pOVar13 = local_f0.GetOutputMergerState();
        pOVar13->SetViewports((local_138 + 24), 1);
        pOVar13 = local_f0.GetOutputMergerState();
        puVar1 = &local_38->field_1168;
        pRVar7 = (RenderTargets*)puVar1->end();
        pOVar13->SetRenderTargets(pRVar7);
        local_40->Begin(local_f0);
        local_38->field_8->SetClippingRectangle(0, 0, local_38->field_1124, local_38->field_1124, true);
        GridRect local_68(0.0, 0.0, 0.0, 1.0);
        lVar12 = local_68.Instance();
        this_00->SetBlendState((lVar12 + 1524));
        pRVar7 = (RenderTargets*)puVar1->end();
        this_00->ClearRenderTargets(pRVar7, &local_68, 1);
        local_40->SetProjection(2, local_38->field_1124, local_38->field_1124);
        if (ENABLE_BASE_LAYER != '\0') {
            if (ENABLE_ENVIRONMENT_TINTING == '\0') {
                uVar5 = 4294967295;
            } else {
                this_03 = (((SceneManager*)world.size())->GetEffectManager())
                              ->GetEffect<graphics::SunlightDirectLighting>(29);
                local_c0[0] =
                    ((DirectionalLight*)this_03->GetDefaultValue())->GetAmbientColour(FrameTime::GetCurrentTimeMS());
                local_c0[1]._0_4_ = 0;
                local_98._0_8_ = *4.0 * *local_c0;
                local_98._8_4_ = 0;
                local_88 = math::Vector4T(local_98, 1.0);
                local_98 = math::ColourStorage8888(&local_88);
                uVar5 = local_98.GetX();
            }
            pfVar14 = &coordFine.field_4[0];
            local_50._0_4_ = *pfVar14;
            puVar1 = &local_38->field_1244;
            pfVar14 = (float*)(*puVar1)[0];
            local_50 = (CoordFine*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(local_50._0_4_ - *pfVar14));
            pfVar14 = (float*)(*puVar1)[2];
            local_48._0_4_ = *pfVar14;
            pfVar14 = &coordFine.field_4[2];
            local_70 = (float)(int)local_38->field_1124;
            local_74 = (float)(int)local_38->field_1112;
            local_48 = (World*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)(local_48._0_4_ - *pfVar14));
            local_6c = local_38->field_1048;
            pRVar7 = (RenderTargets*)(*local_38->field_1144).operator->();
            pvVar8 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar7->GetColourTargetTextures();
            puVar10 = (uint64_t*)(*pvVar8)[0];
            fVar22 = local_70 * 0.5;
            fVar21 = local_74 * 0.5;
            iVar18 = (int)local_38->field_1124 / 2;
            local_40->AddElementRotated((int)(fVar22 - (fVar21 + local_50._0_4_ * 0.0625) * local_6c),
                                        (int)(fVar22 - (fVar21 + local_48._0_4_ * 0.0625) * local_6c),
                                        (int)((fVar21 - local_50._0_4_ * 0.0625) * local_6c + fVar22),
                                        (int)((fVar21 - local_48._0_4_ * 0.0625) * local_6c + fVar22), uVar5, 0.0, 1.0,
                                        1.0, 0.0, *puVar10, 0, -local_a8, iVar18, iVar18);
            local_40->Render(nullptr);
        }
        SetupMiniMapCameraCompositeBuffer(local_38, (SceneViewData*)local_38->field_80, coordFine, local_a8);
        uVar5 = local_38->field_1124;
        pfVar14 = &coordFine.field_4;
        local_50 = coordFine;
        local_48 = world;
        auto pfVar15 = pfVar14->SSOBeginPtr();
        iVar4 = (int)*pfVar15 + uVar5 * -1024;
        pfVar15 = (float*)pfVar14->SSOBeginPtr();
        iVar18 = (int)*pfVar15 + uVar5 * 1024;
        pfVar15 = (float*)pfVar14->second();
        int iVar19 = (int)*pfVar15 + uVar5 * -1024;
        pfVar14 = (float*)pfVar14->second();
        local_a8 = (float)((int)*pfVar14 + uVar5 * 1024);
        puVar1 = &local_38->field_1312;
        auto pMVar16 = puVar1->HeapBeginPtr();
        auto pMVar17 = puVar1->end();
        for (; pMVar16 != pMVar17; pMVar16 = (MapElementListEntry*)&pMVar16[1].field_8) {
            if (((iVar4 <= *(int*)&pMVar16->field_0) && (*(int*)&pMVar16->field_0 < iVar18)) &&
                ((iVar2 = *(int*)((long)&pMVar16->field_0 + 4), iVar19 <= iVar2 && (iVar2 < (int)local_a8)))) {
                DrawMapElement(local_38, pMVar16);
            }
        }
        puVar1 = &local_38->field_1344;
        pMVar16 = (MapElementListEntry*)puVar1->HeapBeginPtr();
        pMVar17 = (MapElementListEntry*)puVar1->end();
        CoordFine* coordFine_00 = local_50;
        for (; local_50 = coordFine_00, pMVar16 != pMVar17; pMVar16 = (MapElementListEntry*)&pMVar16[1].field_8) {
            if (((iVar4 <= *(int*)&pMVar16->field_0) && (*(int*)&pMVar16->field_0 < iVar18)) &&
                ((iVar2 = *(int*)((long)&pMVar16->field_0 + 4), iVar19 <= iVar2 && (iVar2 < (int)local_a8)))) {
                DrawMapElement(local_38, pMVar16);
            }
            coordFine_00 = local_50;
        }
        if ((ENABLE_CUSTOM_LAYER != '\0') && (cVar3 = std::function::operator_cast_to_bool(local_b0), cVar3)) {
            std::function<void(MiniMap&, CoordFine const&)>::operator()(
                (function<void(MiniMap&, CoordFine const&)>*)local_b0, local_38, coordFine_00);
        }
        pGVar6 = local_40;
        local_40->Render(nullptr);
        World* world_00 = local_48;
        pGVar6->End();
        DrawDebugTileProgress(local_38, world_00, coordFine_00);
    }

    // 0x1003bf6e0
    void MiniMap::SetupBaseCameraFrameBuffer(graphics::SceneViewData& sceneViewData, const CoordFine& coordFine) {
        RenderTargets* renderTargets;
        uint8_t local_148[96];
        Vector2T<int> local_e8;
        uint8_t local_78[48];
        uint64_t local_48;

        QuaternionT<float> local_158;
        local_158.FromAxisAngle(*PTR_RIGHT_100ee66f0, -1.5707964);
        float local_e0 = coordFine.field_12;
        local_e8._0_4_ = coordFine.field_4;
        local_e8._4_4_ = coordFine.field_8;
        auto pfVar2 = local_e8.y();
        *pfVar2 = *pfVar2 + 4096.0;
        new (local_148) jag::Camera(0);
        local_148->SetRot(local_158);
        local_148->SetPos(local_e8);
        local_148->SetTopClip((float)-(int)field_1272 * 0.5);
        local_148->SetMainRenderTargetScaleFactor((float)(int)field_1272 * 0.5);
        local_148->SetOrientationXMovement((float)-(int)field_1272 * 0.5);
        local_148->SetOrientationZMovement((float)(int)field_1272 * 0.5);
        local_148->SetNearClip(-128.0);
        int iVar1 = eastl::max<int>(8192, (int)coordFine.field_8 + 4096);
        local_148->SetFarClip(-(float)iVar1);
        new (local_148) oldscape::ServerConnectionWorkItem(1);
        sceneViewData.Set(*local_148);
        renderTargets = (RenderTargets*)field_1144->end();
        ImVec4 local_d8(0.0, 0.0, 0.0, 1.0);
        new (local_78) render::RenderTargetData(renderTargets, local_d8, 1, 1.0, 0);
        local_d8 = ImVec4(0.0, 0.0, 0.0, 1.0);
        Vector4T<float> local_c8;
        (*((local_78 + 16))) = local_d8;
        local_48._0_4_ = 0;
        local_48._4_4_ = 1.0;
        sceneViewData.SetRenderTargets(*local_78);
        local_d8 = eastl::fixed_vector<render::Viewport, 2ul>();
        new ((local_148 + 72)) render::Viewport(0, 0, field_1112, field_1112, 0.0, 1.0);
        local_d8.push_back(*((local_148 + 72)));
        sceneViewData.SetRenderTargetViewports(local_d8);
    }

    // 0x1003bfa00
    void MiniMap::PutSquareAtTopOfPendingList(int arg1, int arg2) {
        bool cVar1;
        int* piVar3;
        long lVar4;
        MapSquareState* this_00;
        MapSquareState* mapSquareState;
        ReturnValue local_40;
        ReturnValue local_38;

        uint8_t* this_01 = &field_1424;
        unsigned long uVar2 = this_01->size();
        if (((1 < uVar2) && (piVar3 = (int*)this_01->front(), *piVar3 != arg1)) &&
            (lVar4 = this_01->front(), *(int*)(lVar4 + 4) != arg2)) {
            local_40 = this_01->begin();
            local_38 = this_01->end();
            cVar1 = local_40 != local_38;
            if (cVar1) {
                do {
                    this_00 = (MapSquareState*)*local_40;
                    if ((this_00->field_0 == arg1) && (this_00->field_4 == arg2)) {
                        mapSquareState = (MapSquareState*)this_01->front();
                        this_00->swap(*mapSquareState);
                        return;
                    }
                    ++local_40;
                    cVar1 = local_40 != local_38;
                } while (cVar1);
            }
        }
    }

    // 0x1003bfae0
    void MiniMap::CheckClearingRequirements(render::RenderContext& renderContext,
                                            const render::RenderTargets* renderTargets) {
        unsigned int arg4;
        Logger* pLVar1;
        long lVar2;
        ImVec4 local_168;
        LogStream local_158;
        LogStream local_c8;

        if (field_1013 != '\0') {
            pLVar1 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_MINIMAP);
            ((uint8_t)pLVar1)
                ->Log(nullptr, (LogLevel)&local_c8, 8, 14416868, 2424, "%s: Clearing Depth Buffer",
                      "CheckClearingRequirements");
            field_1013 = 0;
            lVar2 = local_c8.Instance();
            renderContext.SetDepthStencilState((lVar2 + 720));
            arg4 = render::GetDepthTextureClearFlags((Texture*)renderTargets->GetDepthStencilTargetTexture());
            renderContext.ClearDepthStencilTarget(renderTargets, 1.0, 0, arg4);
        }
        if (field_1014 != '\0') {
            pLVar1 = logger::default_logger();
            local_158 = logger::LogStream(LOGGER_MINIMAP);
            ((uint8_t)pLVar1)
                ->Log(nullptr, (LogLevel)&local_158, 8, 14416868, 2431, "%s: Clearing base colour",
                      "CheckClearingRequirements");
            field_1014 = 0;
            local_168 = ImVec4(0.0, 0.0, 0.0, 1.0);
            lVar2 = &local_168->Instance();
            renderContext.SetBlendState((lVar2 + 1524));
            renderContext.ClearRenderTargets(renderTargets, &local_168, 1);
        }
    }

    // 0x1003bfcc0
    unsigned long MiniMap::RenderMapSquareIntoBase(unsigned int arg1, World& world,
                                                   MiniMap::MapSquareState& mapSquareState, const CoordFine& coordFine,
                                                   bool arg5, bool arg6) {
        uint8_t* puVar4;
        shared_ptr* shared_ptr;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* puVar5;
        Terrain* pTVar6;
        uint32_t in_register_0000003c;
        uint64_t in_register_00000081;
        unsigned long unaff_R14;
        char in_stack_00000008;

        CoordFine* coordFine_00 = (CoordFine*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        MiniMap* this_02 = (MiniMap*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        unsigned int uVar3 = coordFine.field_0;
        float arg2 = coordFine.field_4;
        if ((DEBUG_ISOLATE_TILE != '\0') && ((unaff_R14 = (((uint64_t)((int64_t)(unaff_R14 >> 8)) << 8) | (uint8_t)1),
                                              uVar3 != DEBUG_ISOLATE_X || (arg2 != DEBUG_ISOLATE_Z))))
            goto LAB_1003bfe99;
        int iVar2 = mapSquareState.GetMapSquareMinX();
        unaff_R14 = (((uint64_t)((int64_t)(unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if ((((int)uVar3 < iVar2) ||
             (((iVar2 = mapSquareState.GetMapSquareMaxX(),
                iVar2 < (int)uVar3 || (iVar2 = mapSquareState.GetMapSquareMinZ(), (int)arg2 < iVar2)) ||
               (iVar2 = mapSquareState.GetMapSquareMaxZ(), iVar2 < (int)arg2)))) ||
            (puVar4 = (uint8_t*)mapSquareState.GetMapSquareStatus(uVar3, (int)arg2), puVar4 == DataStatus::MISSING))
            goto LAB_1003bfe99;
        shared_ptr = (shared_ptr*)mapSquareState.GetMapSquare(uVar3, (int)arg2);
        if (!(shared_ptr::operator_cast_to_bool(shared_ptr))) {
            unaff_R14 = 0;
            goto LAB_1003bfe99;
        }
        MapSquare* mapSquare = (MapSquare*)**shared_ptr;
        if ((!arg6) || (ENABLE_TERRAIN_PASS == '\0')) {
            if ((mapSquare->GetParentLocationType())->operator_cast_to_bool()) {
                puVar5 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                             mapSquare->GetParentLocationType();
                if (((Entity*)(*puVar5).operator->())->IsAtTargetLOD()) {
                    puVar5 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                 mapSquare->GetParentLocationType();
                    pTVar6 = (Terrain*)(*puVar5).operator->();
                    if (!(pTVar6->GetHasFade())) {
                        puVar5 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                     mapSquare->GetParentLocationType();
                        pTVar6 = (Terrain*)(*puVar5).operator->();
                        uVar3 = pTVar6->IsReadyToRender();
                        goto LAB_1003bfdc8;
                    }
                }
            }
            unaff_R14 = 0;
        } else {
            uVar3 = RenderTerrainIntoBase(this_02, (unsigned int)world, (World*)mapSquareState,
                                          (MapSquareState*)coordFine, coordFine_00, mapSquare);
        LAB_1003bfdc8:
            unaff_R14 = (unsigned long)uVar3;
        }
        if ((((char)unaff_R14 != '\0') && (in_stack_00000008 != '\0')) && (ENABLE_LOC_PASS != '\0')) {
            uVar3 = RenderLocationsIntoBase(this_02, (unsigned int)world, (World*)mapSquareState,
                                            (MapSquareState*)coordFine, coordFine_00, mapSquare);
            unaff_R14 = (unsigned long)uVar3;
        }
        if ((((char)unaff_R14 != '\0') && (in_stack_00000008 != '\0')) && (ENABLE_LINES_PASS != '\0')) {
            uVar3 = RenderLocationLinesIntoBase(this_02, (World*)mapSquareState, (MapSquareState*)coordFine,
                                                coordFine_00, mapSquare);
            unaff_R14 = (unsigned long)uVar3;
        }
    LAB_1003bfe99:
        return unaff_R14 & 4294967295;
    }

    // 0x1003c00d0
    void MiniMap::SetupMiniMapCameraCompositeBuffer(graphics::SceneViewData& sceneViewData, const CoordFine& coordFine,
                                                    float arg3) {
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dc_00;
        unsigned int extraout_XMM0_Dd;
        unsigned int extraout_XMM0_Dd_00;
        Vector2T<int> aVStack_74;

        float local_34 = (float)(int)(field_1124 << 4) / field_1048;
        float local_48 = arg3;
        QuaternionT<float> local_e0;
        local_e0.FromAxisAngle(*PTR_RIGHT_100ee66f0, -1.5707964);
        QuaternionT<float> local_d0;
        local_d0.FromAxisAngle(*PTR_LOOK_100ee66e0, local_48);
        local_e0 *= &local_d0;
        local_c0.m_pos._12_4_ = (float)coordFine.field_0;
        unique0x1000038d = coordFine.field_4;
        aVStack_74._4_4_ = coordFine.field_8;
        aVStack_74._8_4_ = coordFine.field_12;
        auto puVar1 = aVStack_74.y();
        *puVar1 = 1166016512;
        Camera local_c0(0);
        local_c0.SetRot(local_e0);
        local_c0.SetPos(aVStack_74);
        int iVar2 = (int)local_34;
        local_48 = (float)-iVar2;
        local_c0.SetTopClip(local_48);
        local_34 = (float)iVar2;
        local_c0.SetMainRenderTargetScaleFactor(local_34);
        local_c0.SetOrientationXMovement(local_48);
        local_c0.SetOrientationZMovement(local_34);
        local_c0.SetNearClip(-128.0);
        local_c0.SetFarClip(-8192.0);
        local_c0 = oldscape::ServerConnectionWorkItem(1);
        sceneViewData.Set(local_c0);
        local_34 = (float)local_c0.GetFogDepthAngleFalloff();
        float local_50 = (float)local_c0.GetRightClip();
        unsigned long local_68 = local_c0.GetMainRenderTargetScaleFactor();
        local_48 = -0.0;
        unsigned int uStack_44 = 2147483648;
        unsigned int uStack_40 = 2147483648;
        unsigned int uStack_3c = 2147483648;
        local_68 = local_68 ^ 9223372039002259456;
        unsigned int uStack_60 = extraout_XMM0_Dc ^ 2147483648;
        unsigned int uStack_5c = extraout_XMM0_Dd ^ 2147483648;
        uint64_t uVar3 = local_c0.GetEnvMapIrradianceScale();
        local_48 = (float)((unsigned int)local_48 ^ (unsigned int)uVar3);
        uStack_44 = uStack_44 ^ (unsigned int)((unsigned long)uVar3 >> 32);
        uStack_40 = uStack_40 ^ extraout_XMM0_Dc_00;
        uStack_3c = uStack_3c ^ extraout_XMM0_Dd_00;
        float local_4c = (float)local_c0.GetGameScale();
        float arg7 = (float)local_c0.GetFarClip();
        math::Matrix44OrthographicLH<float>(field_752, local_34, local_50, (float)local_68, local_48, local_4c, arg7,
                                            0);
    }

    // 0x1003c0300
    void MiniMap::PrepareRebuildList(int arg1, int arg2) {
        uint8_t* this_00;
        uint8_t* this_01;
        bool cVar1;
        Logger* pLVar2;
        MapSquareState* this_02;
        MapSquareState* mapSquareState;
        long lVar3;
        ReturnValue local_e0;
        ReturnValue local_d8;
        LogStream local_c8;

        if (field_1012 != '\0') {
            pLVar2 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_MINIMAP);
            ((uint8_t)pLVar2)
                ->Log(nullptr, (LogLevel)&local_c8, 8, 14416868, 1016, "%s: Terrain rebuild! Need to redraw everything",
                      "PrepareRebuildList");
            this_00 = &field_99696;
            this_01 = &field_1424;
            while (true) {
                cVar1 = this_00->empty();
                if (cVar1)
                    break;
                this_02 = (MapSquareState*)this_01->push_back();
                mapSquareState = (MapSquareState*)this_00->back();
                this_02->swap(*mapSquareState);
                this_00->pop_back();
            }
            local_e0 = this_01->begin();
            local_d8 = this_01->end();
            cVar1 = local_e0 != local_d8;
            if (cVar1) {
                do {
                    lVar3 = *local_e0;
                    *(uint8_t*)(lVar3 + 12) = 5;
                    ++local_e0;
                    cVar1 = local_e0 != local_d8;
                } while (cVar1);
            }
            PutSquareAtTopOfPendingList(arg1, arg2);
            field_1012 = 0;
            field_1013 = 1;
            field_1014 = 1;
        }
    }

    // 0x1003c04d0
    unsigned int MiniMap::BuildMapElementList(const World& world, int arg2) {
        int iVar1;
        int iVar2;
        unsigned long uVar3;
        bool cVar4;
        unsigned int uVar5;
        shared_ptr* psVar6;
        uint8_t* puVar7;
        HTTPRequest* this_01;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>* this_02;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>* this_03;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true>>* this_04;
        uint64_t* puVar8;
        MapAreaList* pMVar9;
        MapArea* pMVar10;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer> _>>*
            pAVar11;
        StaticMapElement* staticMapElement;
        StaticMapElement* pSVar12;
        CoordGrid* this_05;
        CoordGrid* pCVar13;
        unsigned int uVar14;
        uint64_t in_RCX;
        int iVar15;
        unsigned int uVar16;
        int arg1;
        unsigned long uVar17;
        unsigned long arg1_00;
        unsigned int uVar18;
        CoordGrid local_c0;
        unsigned long local_b0;
        unsigned long local_a0;
        unsigned int local_94;
        unsigned int local_90;
        unsigned int local_8c;
        ClientCompositeZone local_88;
        unsigned long local_68;
        unsigned long local_60;
        shared_ptr* local_48;
        unsigned int local_40;
        int local_3c;

        field_1376.clear();
        int local_38 = field_1304;
        unsigned int local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)in_RCX >> 8)) << 8) | (uint8_t)1);
        if (local_38 < field_1296) {
            local_b0 = (unsigned long)(int)(unsigned int)arg2;
            local_34 = (unsigned int)(((uint64_t)((int64_t)(int32_t)((unsigned int)arg2 >> 8)) << 8) | (uint8_t)1);
            do {
                iVar15 = field_1288;
                if (iVar15 < field_1280) {
                    local_8c = local_38 << 6;
                    do {
                        iVar1 = local_38;
                        psVar6 = (shared_ptr*)world.GetMapSquare(local_38, iVar15);
                        local_3c = iVar15;
                        puVar7 = (uint8_t*)world.GetMapSquareStatus(iVar1, iVar15);
                        cVar4 = shared_ptr::operator_cast_to_bool(psVar6);
                        if (!cVar4) {
                            local_34 = local_34 & 255;
                            if (puVar7 != DataStatus::MISSING) {
                                local_34 = 0;
                            }
                        } else {
                            this_01 = (HTTPRequest*)(*psVar6).operator->();
                            psVar6 = (shared_ptr*)this_01->GetContentType();
                            cVar4 = shared_ptr::operator_cast_to_bool(psVar6);
                            if (!cVar4) {
                                pMVar9 = (MapAreaList*)field_24->GetLogStreams();
                                local_88 = oldscape::rs2lib::worldmap::LocationData(0, local_8c, local_3c << 6);
                                pMVar10 = pMVar9->GetAreaByCoordinate(local_88);
                                if (pMVar10 != nullptr) {
                                    cVar4 = pMVar10->LoadStaticMapElements();
                                    if (!cVar4) {
                                        local_34 = 0;
                                    } else {
                                        pAVar11 = pMVar10->GetStaticMapElements();
                                        this_05 = (CoordGrid*)pAVar11->data();
                                        pCVar13 = (CoordGrid*)pAVar11->end();
                                        for (; this_05 != pCVar13; this_05 = (CoordGrid*)&this_05[1].field_4) {
                                            if (((this_05->field_0 == (unsigned int)arg2) &&
                                                 (iVar15 = this_05->GetMapSquareX(), iVar15 == local_38)) &&
                                                (iVar15 = this_05->GetMapSquareZ(), iVar15 == local_3c)) {
                                                cVar4 = AddPendingMapElement(this_05->field_4, this_05->field_8,
                                                                             *this_05, field_1304, field_1296,
                                                                             field_1288, field_1280);
                                                local_34 = local_34 & 255;
                                                if (!cVar4) {
                                                    local_34 = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                local_a0 = 0;
                                local_48 = psVar6;
                                do {
                                    uVar17 = 0;
                                    uVar3 = local_a0 + 1;
                                    local_60 = local_a0;
                                    do {
                                        local_a0 = uVar3;
                                        this_02 =
                                            (vector<
                                                eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                                                                    10ul>,
                                                eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)(*psVar6)
                                                .operator->();
                                        this_03 = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                                                          eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul,
                                                                                        true>>*)(*this_02)[local_b0];
                                        this_04 = (vector<ClientCompositeZone,
                                                          eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul,
                                                                                        true>>*)(*this_03)[local_a0];
                                        arg1_00 = uVar17 + 1;
                                        puVar8 = (uint64_t*)(*this_04)[arg1_00];
                                        local_88._0_8_ = *puVar8;
                                        local_88._8_8_ = puVar8[1];
                                        local_88.field_16 = *(uint32_t*)(puVar8 + 2);
                                        cVar4 = local_88.IsValid();
                                        if (cVar4) {
                                            pMVar9 = (MapAreaList*)field_24->GetLogStreams();
                                            local_c0 = oldscape::rs2lib::worldmap::LocationData(
                                                0, local_88.field_4 << 3, local_88.field_8 << 3);
                                            pMVar10 = pMVar9->GetAreaByCoordinate(local_c0);
                                            if (pMVar10 != nullptr) {
                                                cVar4 = pMVar10->LoadStaticMapElements();
                                                if (!cVar4) {
                                                    local_34 = 0;
                                                } else {
                                                    local_68 = uVar17;
                                                    pAVar11 = pMVar10->GetStaticMapElements();
                                                    local_40 = local_88.field_4;
                                                    iVar15 = local_88.field_8;
                                                    staticMapElement = (StaticMapElement*)pAVar11->data();
                                                    pSVar12 = (StaticMapElement*)pAVar11->end();
                                                    if (staticMapElement != pSVar12) {
                                                        uVar16 = local_40 << 3;
                                                        iVar1 = local_40 * 8;
                                                        uVar18 = iVar15 << 3;
                                                        local_94 = iVar15 * 8 + 8;
                                                        psVar6 = local_48;
                                                        local_90 = uVar18;
                                                        local_40 = uVar16;
                                                        do {
                                                            if (*(int*)staticMapElement == local_88.field_0) {
                                                                uVar5 = *(unsigned int*)(staticMapElement + 4);
                                                                if (uVar16 <= uVar5) {
                                                                    if (uVar5 < iVar1 + 8U) {
                                                                        uVar14 = *(unsigned int*)(staticMapElement + 8);
                                                                        if (uVar18 <= uVar14) {
                                                                            if (uVar14 < local_94) {
                                                                                uVar5 = uVar5 & 7;
                                                                                uVar14 = uVar14 & 7;
                                                                                iVar15 = (int)local_60;
                                                                                iVar2 = (int)local_68;
                                                                                if (local_88.field_12 == '\x02') {
                                                                                    arg1 = (iVar15 * 8 - uVar5) + 8;
                                                                                    iVar15 = iVar2 * 8 - uVar14;
                                                                                LAB_1003c0777:
                                                                                    iVar15 = iVar15 + 8;
                                                                                } else {
                                                                                    if ((local_88.field_12 == '\x01') ||
                                                                                        (local_88.field_12 != '\0')) {
                                                                                        arg1 = uVar14 + iVar15 * 8;
                                                                                        iVar15 = iVar2 * 8 - uVar5;
                                                                                        goto LAB_1003c0777;
                                                                                    }
                                                                                    arg1 = uVar5 + iVar15 * 8;
                                                                                    iVar15 = uVar14 + iVar2 * 8;
                                                                                }
                                                                                cVar4 = AddPendingMapElement(
                                                                                    arg1, iVar15, *staticMapElement,
                                                                                    field_1304, field_1296, field_1288,
                                                                                    field_1280);
                                                                                local_34 = local_34 & 255;
                                                                                if (!cVar4) {
                                                                                    local_34 = 0;
                                                                                }
                                                                                psVar6 = local_48;
                                                                                uVar16 = local_40;
                                                                                uVar18 = local_90;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            staticMapElement = staticMapElement + 20;
                                                        } while (staticMapElement != pSVar12);
                                                        goto LAB_1003c0646;
                                                    }
                                                }
                                            }
                                            psVar6 = local_48;
                                        }
                                    LAB_1003c0646:
                                        uVar17 = arg1_00;
                                        uVar3 = local_a0;
                                    } while (arg1_00 != 8);
                                } while (local_a0 != 8);
                            }
                        }
                        iVar15 = local_3c + 1;
                        this = this;
                    } while (iVar15 < field_1280);
                }
                local_38 = local_38 + 1;
            } while (local_38 < field_1296);
        }
        return local_34 & 4294967041;
    }

    // 0x1003c09f0
    uint32_t MiniMap::AddPendingMapElement(int arg1, int arg2, const StaticMapElement& staticMapElement, int arg4,
                                           int arg5, int arg6, int arg7) {
        long lVar2;
        int* piVar3;

        auto this_00 = field_16->GetConfig<MapElementType>(*(int*)(staticMapElement + 12), nullptr);
        uint32_t uVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if ((char)uVar1 != '\0') {
            lVar2 = ((MapElementType*)(*this_00).operator->())->GetPolygon();
            if ((lVar2 == 0) ||
                ((((arg4 * 64 <= *(int*)(lVar2 + 40) + arg1 && (*(int*)(lVar2 + 32) + arg1 <= arg5 * 64)) &&
                   (arg6 * 64 <= *(int*)(lVar2 + 44) + arg2)) &&
                  (*(int*)(lVar2 + 36) + arg2 <= arg7 * 64)))) {
                piVar3 = (int*)field_1376.push_back();
                piVar3[2] = *(int*)(staticMapElement + 12);
                *piVar3 = arg1 << 7;
                piVar3[1] = arg2 << 7;
            }
        }
        return uVar1;
    }

    // 0x1003c0d60
    uint32_t MiniMap::FindMapSquareStateInList(MiniMap::MapSquareState*& arg1, int arg2, int arg3,
                                               eastl::fixed_list<MiniMap::MapSquareState, 16ul>& fixed_list) {
        int iVar1;
        MapSquareState** ppMVar2;
        MapSquareState* pMVar4;

        auto local_38 = fixed_list.begin();
        auto local_48 = fixed_list.end();
        uint32_t uVar3 = local_38 != local_48;
        if ((char)uVar3 != '\0') {
            pMVar4 = (MapSquareState*)*local_38;
            ppMVar2 = arg1;
            iVar1 = pMVar4->field_0;
            while ((iVar1 != arg2 || (pMVar4->field_4 != arg3))) {
                ++local_38;
                uVar3 = local_38 != local_48;
                if ((char)uVar3 == '\0') {
                    return uVar3;
                }
                pMVar4 = (MapSquareState*)*local_38;
                iVar1 = pMVar4->field_0;
            }
            *ppMVar2 = pMVar4;
        }
        return uVar3;
    }

    // 0x1003c0e60
    unsigned int MiniMap::NeighboursLODLevel(const MiniMap::MapSquareState& mapSquareState) {
        bool bVar1;
        bool cVar2;
        int iVar3;
        MapSquareState* in_RAX;
        int arg3;
        uint8_t bVar4;

        unsigned int uVar5 = 0;
        int arg2 = mapSquareState.field_0 - 1;
        MapSquareState* local_38 = in_RAX;
        do {
            iVar3 = mapSquareState.field_4;
            arg3 = iVar3 - 2;
            do {
                arg3 = arg3 + 1;
                if (((arg2 != mapSquareState.field_0) && (arg3 != iVar3)) &&
                    (cVar2 = FindMapSquareState(local_38, arg2, arg3), cVar2)) {
                    bVar4 = (uint8_t)uVar5;
                    uVar5 = uVar5 & 255;
                    if (bVar4 < (uint8_t)*(unsigned int*)&local_38->field_12) {
                        uVar5 = *(unsigned int*)&local_38->field_12;
                    }
                }
                iVar3 = mapSquareState.field_4;
            } while (arg3 <= iVar3);
            bVar1 = arg2 <= mapSquareState.field_0;
            arg2 = arg2 + 1;
        } while (bVar1);
        return uVar5 & 255;
    }

    // 0x1003c0f00
    bool MiniMap::NeighboursTerrainDrawn(const MiniMap::MapSquareState& mapSquareState) {
        return NeighboursLODLevel(mapSquareState) < 5;
    }

    // 0x1003c0f10
    uint64_t MiniMap::RenderTerrainIntoBase(unsigned int arg1, World& world, MiniMap::MapSquareState& mapSquareState,
                                            const CoordFine& coordFine, const MapSquare& mapSquare) {
        uint8_t bVar1;
        EffectManager* this_00;
        long* plVar6;
        uint8_t* puVar7;
        SunlightDirectLighting* sunlightDirectLighting;
        Entity* pEVar8;
        GraphNode* this_04;
        ModularParticleEmitterTemplate* pMVar9;
        Terrain* pTVar10;
        SunlightEffectSaveRestore local_27b8;
        uint64_t local_26f0;
        EffectStateSaveRestore local_26d0;
        fixed_map<graphics::EffectType, bool, 121ul> local_1380;

        uint64_t uVar5 = world.GetWorldRenderer()->GetMainSceneRenderer();
        EffectManager* local_26e8 = ((SceneManager*)world.size())->GetEffectManager();
        field_64.SetStartingRenderLevel(coordFine.field_0);
        auto this_03 = mapSquare.GetParentLocationType();
        bool cVar2 = std::unique_ptr::operator_cast_to_bool(this_03);
        if (cVar2) {
            plVar6 = (long*)(*this_03).operator->();
            cVar2 = (**(void (**)(...))(*plVar6 + 280))(plVar6);
            if (cVar2) {
                if (FORCE_TERRAIN_REDRAWS == '\0') {
                    bVar1 = mapSquareState.field_12;
                    pMVar9 = (ModularParticleEmitterTemplate*)(*this_03).operator->();
                    if (pMVar9->GetNumTilesPerRow() < bVar1) {
                    LAB_1003c1136:
                        pTVar10 = (Terrain*)(*this_03).operator->();
                        cVar2 = pTVar10->IsReadyToRender();
                        if (cVar2)
                            goto LAB_1003c0fc5;
                    } else {
                        pTVar10 = (Terrain*)(*this_03).operator->();
                        cVar2 = pTVar10->GetHasFade();
                        if (cVar2)
                            goto LAB_1003c1136;
                    }
                } else {
                LAB_1003c0fc5:
                    local_1380 = eastl::fixed_map<graphics::EffectType, bool, 121ul>();
                    local_26d0[0].field_0._0_1_ = 94;
                    puVar7 = &local_1380[local_26d0];
                    this_00 = local_26e8;
                    *puVar7 = 0;
                    local_26d0 = graphics::EffectStateSaveRestore(*local_26e8, local_1380);
                    local_26f0 = uVar5;
                    sunlightDirectLighting =
                        (SunlightDirectLighting*)this_00->GetEffect<graphics::SunlightDirectLighting>(29);
                    local_27b8 = graphics::SunlightEffectSaveRestore(*sunlightDirectLighting, *field_816);
                    pEVar8 = (Entity*)(*this_03).operator->();
                    this_04 = pEVar8->GetNode();
                    this_04->VisibilityTrue(arg1, 8, 8);
                    graphics::Renderer::RenderView((unsigned int)local_26f0, arg1, 8, field_80, this_04,
                                                   (uint8_t)local_26e8);
                    field_1310 = 1;
                    pMVar9 = (ModularParticleEmitterTemplate*)(*this_03).operator->();
                    mapSquareState.field_12 = pMVar9->GetNumTilesPerRow();
                    mapSquareState.field_1592->ResetProgress();
                    ((mapSquareState.field_1592 + 64))->ResetProgress();
                    mapSquareState.field_5752 = 5;
                    cVar2 = NeighboursTerrainDrawn(mapSquareState);
                    if (!cVar2)
                        goto LAB_1003c1176;
                }
                pEVar8 = (Entity*)(*this_03).operator->();
                cVar2 = pEVar8->IsAtTargetLOD();
                if (cVar2) {
                    pTVar10 = (Terrain*)(*this_03).operator->();
                    cVar2 = pTVar10->GetHasFade();
                    if (!cVar2) {
                        pTVar10 = (Terrain*)(*this_03).operator->();
                        uVar5 = pTVar10->IsReadyToRender();
                        goto LAB_1003c1178;
                    }
                }
            }
        }
    LAB_1003c1176:
        uVar5 = 0;
    LAB_1003c1178:
        return uVar5;
    }

    // 0x1003c12a0
    void MiniMap::MapSquareState::TileState::ResetProgress() {
        eastl::fill<bool*, bool>(this, &field_64, 5);
    }

    // 0x1003c12c0
    void MiniMap::MapSquareState::IconState::ResetProgress() {
        eastl::fill<bool*, bool>(this, &field_4096, 5);
    }

    // 0x1003c12f0
    unsigned long MiniMap::RenderLocationsIntoBase(unsigned int arg1, World& world,
                                                   MiniMap::MapSquareState& mapSquareState, const CoordFine& coordFine,
                                                   const MapSquare& mapSquare) {
        EffectManager* this_00;
        MiniMap* pMVar1;
        uint8_t bVar2;
        bool cVar3;
        int iVar5;
        uint32_t uVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* pvVar7;
        Logger* pLVar8;
        Model* this_04;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* pvVar9;
        long lVar10;
        Component* this_05;
        uint8_t* puVar11;
        SunlightDirectLighting* sunlightDirectLighting;
        shared_ptr* psVar12;
        LocationContainer* pLVar13;
        LocType* pLVar14;
        int* piVar15;
        GUIManager* this_06;
        MSIType* pMVar16;
        GraphNode* this_07;
        uint64_t uVar17;
        unsigned long uVar18;
        unsigned int uVar19;
        char* pcVar20;
        int iVar21;
        uint64_t uVar23;
        unsigned long uVar22;
        unsigned int uVar24;
        int iVar25;
        bool bVar26;
        SunlightEffectSaveRestore local_2aa8;
        unsigned long local_29e0;
        unsigned long local_29d8;
        unsigned long local_29d0;
        unsigned long local_29c8;
        GUIManager* local_29b8;
        GraphNode* local_29a8;
        vector<int, eastl::fixed_vector_allocator<4ul, _8ul, _4ul, _0ul, true> _>* local_29a0;
        LinkMap* local_2988;
        IconState* local_2980;
        shared_ptr* local_2960;
        TileState* local_2950;
        Logger* local_2940;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_2938;
        Logger* local_2930;
        LocationContainer* local_2920;
        unsigned int local_2914;
        LogStream local_2910;
        LogStream local_2880;
        LogStream local_27f0;
        EffectStateSaveRestore local_2760;
        fixed_map<graphics::EffectType, bool, 121ul> local_1410;
        LogStream local_c8;

        int local_2948 = mapSquareState.field_0;
        int local_2944 = mapSquareState.field_4;
        MapSquare* local_2970 = mapSquare;
        auto local_2990 = field_8->GetGUIManager();
        uint64_t local_29c0 = world.GetWorldRenderer()->GetMainSceneRenderer();
        EffectManager* local_2998 = ((SceneManager*)world.size())->GetEffectManager();
        auto this_03 = world.GetLODSettings();
        uint8_t bVar4 = mapSquareState.field_12;
        MapSquareState* local_2958 = mapSquareState;
        if ((bVar4 != 5) && (bVar2 = this_03->GetLowestUsableLOD(), bVar4 <= bVar2)) {
            local_2988 = world.GetLinkMap();
            &local_2958->field_16->clear();
            pvVar7 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                         local_2970->GetParticleEffectors();
            cVar3 = pvVar7->empty();
            if (!cVar3) {
                pLVar8 = (Logger*)pvVar7->HeapBeginPtr();
                local_2930 = (Logger*)pvVar7->end();
                pcVar20 = (char*)coordFine;
                if (pLVar8 != local_2930) {
                    do {
                        pvVar7 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                                     pLVar8->HeapBeginPtr();
                        local_2940 = pLVar8;
                        local_2938 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)pLVar8->end();
                        uVar17 = 0;
                        iVar25 = 0;
                        bVar26 = pvVar7 == local_2938;
                        if (!bVar26) {
                            do {
                                cVar3 = pvVar7->operator_cast_to_bool();
                                if (!cVar3) {
                                    pLVar8 = logger::default_logger();
                                    local_c8 = logger::LogStream(LOGGER_MINIMAP);
                                    uVar17 = 8;
                                    pcVar20 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/scene/minimap/MiniMap.cpp";
                                    mapSquare = (MapSquare*)1236;
                                    ((uint8_t)pLVar8)
                                        ->Log(nullptr, (LogLevel)&local_c8, 8, 14416868, 1236,
                                              "%s: Location conainter at %d,%d not loaded", "RenderLocationsIntoBase",
                                              local_2948, local_2944);
                                } else {
                                    this_04 = (Model*)(*pvVar7).operator->();
                                    pvVar9 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                                                 this_04->GetPointLightBounds();
                                    lVar10 = pvVar9->size();
                                    if (lVar10 != 0) {
                                        RenderMiniMapIcons(*pvVar9, *local_2958, (int)uVar17, (int)pcVar20, mapSquare,
                                                           false);
                                    }
                                    this_05 = (Component*)(*pvVar7).operator->();
                                    pvVar9 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                                                 this_05->GetSwipeConfig();
                                    lVar10 = pvVar9->size();
                                    if (lVar10 != 0) {
                                        RenderMiniMapIcons(*pvVar9, *local_2958, (int)uVar17, (int)pcVar20, mapSquare,
                                                           false);
                                    }
                                }
                                if (!cVar3) {
                                    iVar25 = 1;
                                    goto LAB_1003c1595;
                                }
                                pvVar7 = pvVar7 + 8;
                                bVar26 = pvVar7 == local_2938;
                            } while (!bVar26);
                            iVar25 = 0;
                        }
                    LAB_1003c1595:
                        if (!bVar26)
                            goto LAB_1003c15b8;
                        pLVar8 = (Logger*)&local_2940->field_32;
                    } while (pLVar8 != local_2930);
                    iVar25 = 2;
                LAB_1003c15b8:
                    if (iVar25 != 2)
                        goto LAB_1003c15e8;
                }
            }
            local_29a0 = local_2970->GetLocations();
            cVar3 = local_29a0->empty();
            if (!cVar3) {
                local_1410 = eastl::fixed_map<graphics::EffectType, bool, 121ul>();
                local_2760[0].field_0._0_1_ = 94;
                puVar11 = &local_1410[local_2760];
                this_00 = local_2998;
                *puVar11 = 0;
                local_2760 = graphics::EffectStateSaveRestore(*local_2998, local_1410);
                sunlightDirectLighting =
                    (SunlightDirectLighting*)this_00->GetEffect<graphics::SunlightDirectLighting>(29);
                pMVar1 = this;
                local_2aa8 = graphics::SunlightEffectSaveRestore(*sunlightDirectLighting, *field_816);
                pMVar1->field_64.SetStartingRenderLevel(coordFine.field_0);
                local_29d8 = local_29a0->size();
                uVar23 = (uint64_t)((unsigned long)pvVar7 >> 8);
                if (local_29d8 != 0) {
                    local_29d0 = (unsigned long)(unsigned int)(local_2948 << 6);
                    local_29c8 = (unsigned long)(unsigned int)(local_2944 << 6);
                    local_2950 = (TileState*)local_2958->field_1592;
                    local_29a8 = (GraphNode*)field_80;
                    local_2980 = (IconState*)(local_2958->field_1592 + 64);
                    uVar22 = (((uint64_t)uVar23 << 8) | (uint8_t)1);
                    uVar18 = 1;
                    do {
                        local_29e0 = uVar18;
                        psVar12 = (shared_ptr*)(*local_29a0)[uVar18 - 1];
                        cVar3 = shared_ptr::operator_cast_to_bool(psVar12);
                        if (!cVar3) {
                            LogAssert("_mapSquareLocation",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/minimap/MiniMap.cpp",
                                      1288, nullptr);
                        }
                        local_2938 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul,
                                                                       true>>*)(((uint64_t)local_2938._4_4_ << 32) |
                                                                                (uint32_t)((int)uVar22));
                        pLVar8 = (Logger*)**psVar12;
                        uVar24 = (int)local_29d0 + (int)(char)pLVar8->field_5;
                        local_2914 = (int)local_29c8 + (int)(char)pLVar8->field_6;
                        uVar19 = (int)local_29d0 + (int)(char)pLVar8->field_5 + 63;
                        if (-1 < (int)uVar24) {
                            uVar19 = uVar24;
                        }
                        local_2930 = (Logger*)(((uint64_t)local_2930._4_4_ << 32) | (uint32_t)uVar24);
                        iVar25 = uVar24 - (uVar19 & 4294967232);
                        uVar19 = (int)local_29c8 + (int)(char)pLVar8->field_6 + 63;
                        if (-1 < (int)local_2914) {
                            uVar19 = local_2914;
                        }
                        iVar21 = local_2914 - (uVar19 & 4294967232);
                        pLVar13 = (LocationContainer*)local_2970->GetLocationContainer(iVar25, iVar21);
                        local_2940 = pLVar8;
                        if (coordFine.field_0 == (int)(char)pLVar8->field_4) {
                        LAB_1003c1806:
                            pLVar14 = (LocType*)local_2940->field_72.operator->();
                            iVar5 = pLVar14->GetMapElement();
                            if ((((iVar5 != -1) && (field_1300 <= (int)(unsigned int)local_2930)) &&
                                 ((int)(unsigned int)local_2930 <= field_1292)) &&
                                ((field_1284 <= (int)local_2914 && ((int)local_2914 <= field_1276)))) {
                                piVar15 = (int*)eastl::fixed_vector<MiniMap::MapElementListEntry, 32ul>::push_back();
                                piVar15[2] = iVar5;
                                *piVar15 = (unsigned int)local_2930 << 7;
                                piVar15[1] = local_2914 << 7;
                            }
                        } else {
                            cVar3 = local_2988->IsVisibleFromLevel(coordFine.field_0, (int)(char)pLVar8->field_4,
                                                                   (unsigned int)local_2930, local_2914);
                            if (cVar3)
                                goto LAB_1003c1806;
                        }
                        this_06 = (GUIManager*)*local_2940->field_72;
                        local_2920 = pLVar13;
                        iVar5 = this_06->GetMapSceneIcon();
                        psVar12 = (shared_ptr*)PTR_NullConfigType_100ee6558;
                        if (iVar5 == -1) {
                        LAB_1003c1913:
                            pLVar13 = local_2920;
                            lVar10 = 6;
                            local_29b8 = this_06;
                            local_2960 = psVar12;
                            if ((int)field_1060 < 1000) {
                                cVar3 = local_2920->operator_cast_to_bool();
                                if (!cVar3) {
                                    local_2938 =
                                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul,
                                                                                   true>>*)((unsigned long)local_2938 &
                                                                                            18446744069414584320);
                                    lVar10 = 6;
                                } else {
                                    pLVar13 = (LocationContainer*)**pLVar13;
                                    cVar3 = pLVar13->IsAtTargetLOD();
                                    local_2920 = pLVar13;
                                    if ((!cVar3) || (cVar3 = pLVar13->AllStaticLocationsReady(), !cVar3)) {
                                        bVar4 = local_2950->GetProgress(*local_2920);
                                        lVar10 = 0;
                                        if (bVar4 < 5) {
                                            local_2950->SetProgress(*local_2920, 5);
                                            pLVar8 = logger::default_logger();
                                            local_2910 = logger::LogStream(LOGGER_MINIMAP);
                                            ((uint8_t)pLVar8)
                                                ->Log(nullptr, (LogLevel)&local_2910, 8, 14416868, 1403,
                                                      "%s: [%d,%d] Locations in container for %d,%d not built yet",
                                                      "RenderLocationsIntoBase", local_2948, local_2944, iVar25,
                                                      iVar21);
                                            goto LAB_1003c1c89;
                                        }
                                    } else if (field_1104 == '\0') {
                                    LAB_1003c1cda:
                                        lVar10 = 0;
                                        if (iVar5 != -1) {
                                            pMVar16 = (MSIType*)(*local_2960).operator->();
                                            iVar25 = pMVar16->GetSpriteID();
                                            if (iVar25 != -1) {
                                                if (coordFine.field_0 == (int)(char)local_2940->field_4) {
                                                    cVar3 = local_2988->IsVisibleFromLevel(
                                                        coordFine.field_0, (int)(char)local_2940->field_4,
                                                        (unsigned int)local_2930, local_2914);
                                                    if (cVar3) {
                                                        uVar24 = (unsigned int)local_2930 & 63;
                                                        uVar19 = local_2914 & 63;
                                                        bVar4 = local_2980->GetProgress(uVar24, uVar19);
                                                        bVar2 = local_2920->GetNumTilesPerRow();
                                                        if (bVar2 < bVar4) {
                                                            pLVar8 = logger::default_logger();
                                                            local_2880 = logger::LogStream(LOGGER_MINIMAP);
                                                            ((uint8_t)pLVar8)
                                                                ->Log(nullptr, (LogLevel)&local_2880, 8, 14416868, 1383,
                                                                      "%s: Drawing MSI for %d,%d,%d,%d",
                                                                      "RenderLocationsIntoBase",
                                                                      (int)(unsigned int)local_2930 >> 6,
                                                                      (int)local_2914 >> 6, uVar24, uVar19);
                                                            pLVar14 = (LocType*)**local_2960;
                                                            uVar6 =
                                                                DrawMSI((int)this, (unsigned int)local_2930,
                                                                        (MapSquareLocation*)(unsigned long)local_2914,
                                                                        (MSIType*)local_2940, pLVar14, local_29b8);
                                                            local_2938 =
                                                                (vector<int, eastl::fixed_vector_allocator<
                                                                                 4ul, 8ul, 4ul, 0ul,
                                                                                 true>>*)(((uint64_t)local_2938._4_4_
                                                                                           << 32) |
                                                                                          (uint32_t)uVar6);
                                                            pvVar7 = local_2938;
                                                            local_2938._0_1_ = (char)uVar6;
                                                            bVar26 = (char)local_2938 != '\0';
                                                            local_2938 = pvVar7;
                                                            if (bVar26) {
                                                                field_1310 = 1;
                                                                field_1060 = field_1060 + 1;
                                                                bVar4 = local_2920->GetNumTilesPerRow();
                                                                local_2980->SetProgress(uVar24, uVar19,
                                                                                        (unsigned int)bVar4);
                                                                local_2958->field_5752 = 5;
                                                            }
                                                        }
                                                        goto LAB_1003c1ca0;
                                                    }
                                                }
                                                lVar10 = 0;
                                            }
                                        }
                                    } else {
                                        if (iVar5 != -1) {
                                            pMVar16 = (MSIType*)(*local_2960).operator->();
                                            cVar3 = pMVar16->GetHideOnMinimap();
                                            if (!cVar3)
                                                goto LAB_1003c1cda;
                                        }
                                        bVar4 = local_2950->GetProgress(*local_2920);
                                        bVar2 = local_2920->GetNumTilesPerRow();
                                        if (bVar2 < bVar4) {
                                            local_2940 = logger::default_logger();
                                            local_27f0 = logger::LogStream(LOGGER_MINIMAP);
                                            pLVar13 = local_2920;
                                            iVar21 = (int)(unsigned int)local_2930 >> 6;
                                            iVar25 = (int)local_2914 >> 6;
                                            uVar24 = (unsigned int)local_2930 & 63;
                                            uVar19 = local_2914 & 63;
                                            bVar4 = local_2920->GetNumTilesPerRow();
                                            ((uint8_t)local_2940)
                                                ->Log(nullptr, (LogLevel)&local_27f0, 8, 14416868, 1352,
                                                      "%s: Drawing LOCs for %d,%d,%d,%d at LOD %d",
                                                      "RenderLocationsIntoBase", iVar21, iVar25, uVar24, uVar19,
                                                      (unsigned int)bVar4);
                                            this_07 = pLVar13->GetNode();
                                            uVar19 = arg1;
                                            this_07->VisibilityTrue(arg1, 8, 8);
                                            graphics::Renderer::RenderView((unsigned int)local_29c0, uVar19, 8,
                                                                           local_29a8, this_07, (uint8_t)local_2998);
                                            pMVar1 = this;
                                            field_1310 = 1;
                                            iVar25 = ((vector<eastl::pair<int, int>>*)this_07->GetChildren())->size();
                                            pMVar1->field_1060 = pMVar1->field_1060 + iVar25;
                                            local_2950->SetProgress(*local_2920);
                                            local_2958->field_5752 = 5;
                                        }
                                        bVar4 = local_2950->GetProgress(*local_2920);
                                        bVar2 = local_2920->GetNumTilesPerRow();
                                        if (bVar4 <= bVar2) {
                                            bVar4 = local_2950->GetProgress(*local_2920);
                                            lVar10 = 0;
                                            if ((bVar4 < 5) || (bVar4 = local_2920->GetTargetLOD(), 4 < bVar4))
                                                goto LAB_1003c1ca0;
                                        }
                                    LAB_1003c1c89:
                                        local_2938 =
                                            (vector<int, eastl::fixed_vector_allocator<
                                                             4ul, 8ul, 4ul, 0ul, true>>*)((unsigned long)local_2938 &
                                                                                          18446744069414584320);
                                        lVar10 = 0;
                                    }
                                }
                            } else {
                                local_2938 =
                                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul,
                                                                               true>>*)((unsigned long)local_2938 &
                                                                                        18446744069414584320);
                            }
                        } else {
                            psVar12 = (shared_ptr*)field_16->GetConfig<MSIType>(iVar5, nullptr);
                            cVar3 = shared_ptr::operator_cast_to_bool(psVar12);
                            if (cVar3)
                                goto LAB_1003c1913;
                            lVar10 = 6;
                            local_2938 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul,
                                                                                    true>>*)((unsigned long)local_2938 &
                                                                                             18446744069414584320);
                        }
                    LAB_1003c1ca0:
                        if (lVar10 != 0) {
                            uVar22 = (unsigned long)local_2938 & 4294967295;
                            goto LAB_1003c1eb0;
                        }
                        uVar22 = (unsigned long)local_2938 & 4294967295;
                        if ((local_29d8 <= local_29e0) ||
                            (uVar18 = local_29e0 + 1, ((unsigned long)local_2938 & 1) == 0))
                            goto LAB_1003c1eb0;
                    } while (true);
                }
                uVar22 = (((uint64_t)uVar23 << 8) | (uint8_t)1);
            LAB_1003c1eb0:
                local_2990->Render(nullptr);
                uVar22 = uVar22 & 18446744073709551361;
                goto LAB_1003c15eb;
            }
        }
    LAB_1003c15e8:
        uVar22 = 0;
    LAB_1003c15eb:
        return uVar22 & 4294967295;
    }

    // 0x1003c1fd0
    uint64_t MiniMap::RenderMiniMapIcons(const eastl::vector<shared_ptr<Location>>& locations,
                                         MiniMap::MapSquareState& mapSquareState, int arg3, int arg4,
                                         const LinkMap& linkMap, bool arg6) {
        int iVar1;
        int iVar2;
        uint8_t uVar3;
        int iVar5;
        Location* this_01;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        long lVar7;
        int* piVar8;

        auto this_00 = locations.HeapBeginPtr();
        auto psVar6 = locations.end();
        for (; this_00 != psVar6; this_00 = this_00 + 16) {
            this_01 = (Location*)**this_00;
            uVar3 = this_01->GetLocationType();
            if (((((uint64_t)extraout_var << 8) | (uint8_t)uVar3))->operator_cast_to_bool() != '\0') {
                uVar3 = this_01->GetLocationType();
                iVar5 = ((LocType*)(*((shared_ptr<LocType>*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3)))
                             .operator->())
                            ->GetMapElement();
                if (iVar5 != -1) {
                    lVar7 = this_01->GetServerPosition();
                    iVar1 = *(int*)(lVar7 + 4);
                    lVar7 = this_01->GetServerPosition();
                    if ((((field_1300 <= iVar1) && (iVar1 <= field_1292)) &&
                         (iVar2 = *(int*)(lVar7 + 8), field_1284 <= iVar2)) &&
                        (iVar2 <= field_1276)) {
                        piVar8 = (int*)eastl::fixed_vector<MiniMap::MapElementListEntry, 32ul>::push_back();
                        piVar8[2] = iVar5;
                        *piVar8 = iVar1 << 7;
                        piVar8[1] = iVar2 << 7;
                    }
                }
            }
        }
        return 1;
    }

    // 0x1003c22a0
    uint8_t MiniMap::MapSquareState::TileState::GetProgress(const LocationContainer& locationContainer) const {
        unsigned int uVar1 = GetKey(locationContainer);
        return (&field_0)[uVar1];
    }

    // 0x1003c22c0
    void MiniMap::MapSquareState::TileState::SetProgress(const LocationContainer& locationContainer) {
        uint8_t bVar1 = locationContainer.GetNumTilesPerRow();
        SetProgress(locationContainer, (unsigned int)bVar1);
    }

    // 0x1003c22f0
    uint8_t MiniMap::MapSquareState::IconState::GetProgress(int arg1, int arg2) const {
        unsigned int uVar1 = GetKey(arg1, arg2);
        return (&field_0)[uVar1];
    }

    // 0x1003c2310
    void MiniMap::DrawMSI(int arg1, int arg2, const MapSquareLocation& mapSquareLocation, MSIType& msiType,
                          const LocType& locType, graphics::GUIManager& guiManager) {
        bool cVar2;
        int iVar4;
        int iVar5;
        shared_ptr* shared_ptr;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00;
        shared_ptr* this_01;
        SpriteAtlas* this_02;
        long lVar6;
        uint64_t* puVar7;
        Vector4T<float>* this_04;
        unsigned int* puVar8;
        SpriteAtlasReference* pSVar9;
        Matrix44T<float>* matrix442;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        Rotation90 rotation90;
        uint32_t in_register_0000003c;
        NXTPixToolkit* this_07;
        GUIManager* in_stack_00000008;
        uint64_t local_98;
        uint64_t uStack_90;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        uint64_t uStack_70;
        uint64_t local_68;
        uint64_t uStack_60;
        shared_ptr* local_40;
        long local_38;

        ColourHSL local_50((float)(arg2 << 7), 0.0, (float)((int)mapSquareLocation << 7));
        bool cVar1 = guiManager.ShouldMapSceneIconRotate();
        if (!cVar1) {
            rotation90 = 0;
        } else {
            cVar1 = msiType.field_8.GetRot();
            cVar2 = guiManager.GetMapSceneIconRotate90Offset();
            rotation90 = (uint8_t)(cVar2 + cVar1) & 4294967043;
        }
        RT7Core* rt7Core = *(RT7Core**)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) + 8);
        bool arg3 = (bool)guiManager.ShouldMapSceneIconMirror();
        shared_ptr = (shared_ptr*)locType.GetSprite(*rt7Core, rotation90, arg3);
        uint32_t uVar3 = shared_ptr::operator_cast_to_bool(shared_ptr);
        uint32_t uVar10 = uVar3;
        if ((char)uVar3 != '\0') {
            local_38 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
            iVar4 = locType.GetTint();
            this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*shared_ptr)
                          .operator->();
            this_01 = (shared_ptr*)this_00->second();
            cVar1 = shared_ptr::operator_cast_to_bool(this_01);
            uVar10 = 0;
            if (cVar1) {
                local_40 = this_01;
                this_02 = (SpriteAtlas*)(*this_01).operator->();
                iVar5 = ((FastPool<audio::SoundInstance, int>*)(*shared_ptr).operator->())->capacity();
                lVar6 = this_02->GetSpriteRenderMapping(iVar5);
                this_07 = (NXTPixToolkit*)(local_38 + 80);
                puVar7 = (uint64_t*)this_07->GetOrigin();
                local_98 = *puVar7;
                uStack_90 = puVar7[1];
                local_88 = puVar7[2];
                uStack_80 = puVar7[3];
                local_78 = puVar7[4];
                uStack_70 = puVar7[5];
                local_68 = puVar7[6];
                uStack_60 = puVar7[7];
                this_04 = &local_98[1];
                puVar8 = (unsigned int*)(*this_04)[1];
                *puVar8 = *puVar8 ^ 2147483648;
                pSVar9 = (SpriteAtlasReference*)(*shared_ptr).operator->();
                iVar5 = pSVar9->GetWidth();
                local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)((float)iVar5 * 1.8)));
                pSVar9 = (SpriteAtlasReference*)(*shared_ptr).operator->();
                iVar5 = pSVar9->GetHeight();
                matrix442 = (Matrix44T<float>*)this_07->GetScreen();
                this_05 = (MapArea*)(*local_40).operator->();
                this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                texture = (Texture*)this_06->end();
                in_stack_00000008->AddElementIn3DSpace(local_50, (int)local_38, (int)((float)iVar5 * 1.8), local_98,
                                                       *matrix442, -(unsigned int)(iVar4 == 0) | iVar4 << 8 | 255,
                                                       *((lVar6 + 88)), texture, 1, true, 0, (int)((float)iVar5 * 1.8));
                uVar10 = uVar3;
            }
        }
        return uVar10;
    }

    // 0x1003c2580
    void MiniMap::MapSquareState::IconState::SetProgress(int arg1, int arg2, LODLevel lodLevel) {
        unsigned int uVar1 = GetKey(arg1, arg2);
        (&field_0)[uVar1] = (char)lodLevel;
    }

    // 0x1003c25a0
    void MiniMap::MapSquareState::TileState::SetProgress(const LocationContainer& locationContainer,
                                                         LODLevel lodLevel) {
        unsigned int uVar1 = GetKey(locationContainer);
        (&field_0)[uVar1] = (char)lodLevel;
    }

    // 0x1003c25c0
    unsigned long MiniMap::RenderLocationLinesIntoBase(World& world, MiniMap::MapSquareState& mapSquareState,
                                                       const CoordFine& coordFine, const MapSquare& mapSquare) {
        MapSquareState* pMVar1;
        bool cVar2;
        uint8_t bVar3;
        uint8_t uVar4;
        uint32_t uVar5;
        uint32_t uVar6;
        unsigned int uVar7;
        Logger* pLVar10;
        vector<int, eastl::fixed_vector_allocator<4ul, _8ul, _4ul, _0ul, true> _>* this_01;
        shared_ptr<MapSquareLocation>* this_02;
        long lVar11;
        LocType* pLVar12;
        float* pfVar13;
        unsigned int* matrix441;
        unsigned long uVar14;
        int arg4;
        float fVar15;
        Vector3T<float> local_140;
        unsigned long local_128;
        vector<shared_ptr<MapSquareLocation>>* local_120;
        LinkMap* local_118;
        NXTPixToolkit* local_108;
        ColourHSL local_100;
        GUIManager* local_f0;
        unsigned int local_dc;
        char local_cd;
        float local_cc;
        LogStream local_c8;

        int local_d8 = mapSquareState.field_0;
        int local_d4 = mapSquareState.field_4;
        auto pGVar9 = field_8->GetGUIManager();
        if (((uint8_t)mapSquareState.field_12 < (uint8_t)mapSquareState.field_5752) ||
            (uVar14 = (((uint64_t)((int64_t)((unsigned long)coordFine >> 8)) << 8) | (uint8_t)1),
             FORCE_LINE_REDRAWS != '\0')) {
            local_f0 = pGVar9;
            local_118 = world.GetLinkMap();
            pLVar10 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_MINIMAP);
            uVar5 = mapSquare.GetMapSquareX();
            uVar6 = mapSquare.GetMapSquareZ();
            ((uint8_t)pLVar10)
                ->Log(nullptr, (LogLevel)&local_c8, 8, 14416868, 1434, "%s: Drawing lines for %u,%u",
                      "RenderLocationLinesIntoBase", uVar5, uVar6);
            this_01 = mapSquare.GetLocations();
            uVar7 = this_01->empty();
            matrix441 = (unsigned int*)(unsigned long)uVar7;
            if ((char)uVar7 == '\0') {
                local_cd = (char)uVar7;
                local_128 = this_01->size();
                if (local_128 != 0) {
                    local_d8 = local_d8 << 6;
                    local_d4 = local_d4 << 6;
                    local_108 = (NXTPixToolkit*)field_80;
                    uVar14 = 0;
                    local_120 = (vector<shared_ptr<MapSquareLocation>>*)this_01;
                LAB_1003c2818:
                    this_02 = (shared_ptr<MapSquareLocation>*)(*local_120)[uVar14];
                    lVar11 = **this_02;
                    if (coordFine.field_0 == (int)*(char*)(lVar11 + 4)) {
                        uVar7 = *(char*)(lVar11 + 5) + local_d8;
                        arg4 = *(char*)(lVar11 + 6) + local_d4;
                        matrix441 = (unsigned int*)(unsigned long)uVar7;
                        cVar2 =
                            local_118->IsVisibleFromLevel(coordFine.field_0, (int)*(char*)(lVar11 + 4), uVar7, arg4);
                        if (!cVar2)
                            goto LAB_1003c2800;
                        pLVar12 = (LocType*)(*((lVar11 + 72))).operator->();
                        if (pLVar12->GetMapSceneIcon() != -1)
                            goto LAB_1003c2800;
                        local_100 = math::ColourHSL((float)(int)(uVar7 * 128), 0.0, (float)(arg4 * 128));
                        local_140 = math::Vector3T();
                        pLVar12 = (LocType*)(*((lVar11 + 72))).operator->();
                        cVar2 = pLVar12->IsActive();
                        local_dc = 4294967295;
                        if (cVar2) {
                            local_dc = 4278190335;
                        }
                        bVar3 = ((lVar11 + 8))->GetRot();
                        uVar4 = ((lVar11 + 8))->GetShape();
                        pMVar1 = mapSquareState;
                        matrix441 = &switchD_1003c2918::switchdataD_1003c2c00;
                        switch (uVar4) {
                        case 0:
                        case 2:
                        case 23:
                            switch (bVar3) {
                            case 0:
                                pfVar13 = &local_100[0];
                                local_cc = *pfVar13;
                                break;
                            case 1:
                                pfVar13 = &local_100[0];
                                local_cc = *pfVar13 + 128.0;
                                goto LAB_1003c2b44;
                            case 2:
                                pfVar13 = &local_100[0];
                                local_cc = *pfVar13 + 128.0;
                                pfVar13 = &local_100[0];
                                *pfVar13 = local_cc;
                                break;
                            case 3:
                                pfVar13 = &local_100[0];
                                local_cc = *pfVar13 + 128.0;
                                goto LAB_1003c2a92;
                            default:
                                goto switchD_1003c293d_default;
                            }
                            pfVar13 = &local_140[0];
                            *pfVar13 = local_cc;
                            pfVar13 = &local_100[2];
                            local_cc = *pfVar13;
                        LAB_1003c2770:
                            local_cc = local_cc + 128.0;
                            goto LAB_1003c2780;
                        default:
                            goto switchD_1003c2918_caseD_1;
                        case 3:
                            goto switchD_1003c2918_caseD_3;
                        case 9:
                            pfVar13 = &local_100[0];
                            local_cc = *pfVar13 + 128.0;
                            pfVar13 = &local_140[0];
                            *pfVar13 = local_cc;
                            pfVar13 = &local_100[2];
                            local_cc = *pfVar13;
                            if ((bVar3 & 253) == 0)
                                goto LAB_1003c2770;
                            pfVar13 = &local_140[2];
                            *pfVar13 = local_cc;
                            pfVar13 = &local_100[2];
                            fVar15 = *pfVar13 + 128.0;
                            goto LAB_1003c2795;
                        }
                    }
                    goto LAB_1003c2800;
                }
            LAB_1003c2b99:
                local_f0->Render(nullptr);
                field_1310 = 1;
                matrix441 =
                    (unsigned int*)(((uint64_t)((int64_t)((unsigned long)matrix441 >> 8)) << 8) | (uint8_t)local_cd);
            }
            uVar14 = (unsigned long)matrix441 ^ 1;
        }
        return uVar14 & 4294967295;
    switchD_1003c2918_caseD_3:
        switch (bVar3) {
        case 0:
            pfVar13 = &local_100[0];
            local_cc = *pfVar13;
            goto LAB_1003c2a92;
        case 1:
            pfVar13 = &local_100[0];
            local_cc = *pfVar13 + 128.0;
            pfVar13 = &local_100[0];
            *pfVar13 = local_cc;
        LAB_1003c2a92:
            pfVar13 = &local_140[0];
            *pfVar13 = local_cc;
            pfVar13 = &local_100[2];
            local_cc = *pfVar13;
            goto LAB_1003c2780;
        case 2:
            pfVar13 = &local_100[0];
            local_cc = *pfVar13 + 128.0;
            pfVar13 = &local_100[0];
            *pfVar13 = local_cc;
            break;
        case 3:
            pfVar13 = &local_100[0];
            local_cc = *pfVar13;
            break;
        default:
            goto switchD_1003c293d_default;
        }
    LAB_1003c2b44:
        pfVar13 = &local_140[0];
        *pfVar13 = local_cc;
        pfVar13 = &local_100[2];
        local_cc = *pfVar13 + 128.0;
        pfVar13 = &local_100[2];
        *pfVar13 = local_cc;
    LAB_1003c2780:
        pfVar13 = &local_140[2];
        fVar15 = local_cc;
    LAB_1003c2795:
        *pfVar13 = fVar15;
    switchD_1003c293d_default:
        NXTPixToolkit* this_00 = local_108;
        matrix441 = (unsigned int*)local_108->GetOrigin();
        auto matrix442 = this_00->GetScreen();
        local_f0->AddLineIn3DSpace(local_100, local_140, 1.5, *matrix441, *matrix442, local_dc, 1, true);
    switchD_1003c2918_caseD_1:
        pMVar1->field_5752 = 0;
    LAB_1003c2800:
        uVar14 = uVar14 + 1;
        if (local_128 == uVar14)
            goto LAB_1003c2b99;
        goto LAB_1003c2818;
    }

    // 0x1003c2c80
    void MiniMap::DrawMapElement(MiniMap::MapElementListEntry& mapElementListEntry) {
        shared_ptr<MapElementType>* mapElementType;

        uint8_t* this_00 = &mapElementListEntry.field_16;
        if (!(this_00->operator_cast_to_bool())) {
            mapElementType = field_16->GetConfig<MapElementType>(mapElementListEntry.field_8, nullptr);
            *this_00 = *mapElementType;
        }
        if (this_00->operator_cast_to_bool()) {
            DrawMapElement(*this_00, *(int*)&mapElementListEntry.field_0,
                           *(int*)((long)&mapElementListEntry.field_0 + 4), mapElementListEntry);
        }
    }

    // 0x1003c2d10
    void MiniMap::DrawDebugTileProgress(const World& world, const CoordFine& coordFine) {
        __1 local_50;
        GUIManager* local_48;
        World* local_40;

        if (DEBUG_TILE_PROGRESS == '\0') {
            return;
        }
        auto this_01 = field_8->GetGUIManager();
        field_8->SetClippingRectToViewport();
        int iVar2 = field_8->GetInterfaceWidth();
        int iVar4 = iVar2 + 3;
        if (-1 < iVar2) {
            iVar4 = iVar2;
        }
        iVar4 = iVar4 >> 2;
        uint8_t* this_00 = &field_1424;
        bool cVar1 = this_00->empty();
        if ((!cVar1) || (cVar1 = field_99696.empty(), !cVar1)) {
            local_50.field_0 = this;
            local_48 = this_01;
            local_40 = world;
            cVar1 = this_00->empty();
            if (!cVar1) {
                DrawDebugTileProgress(World const&, CoordFine const&)::$_1::operator()(
                    &local_50, 16711759, (fixed_list<MiniMap::MapSquareState, _16ul>*)this_00, 0, 0);
                DrawDebugTileProgress(World const&, CoordFine const&)::$_1::operator()(
                    &local_50, 4278190159, (fixed_list<MiniMap::MapSquareState, _16ul>*)this_00, 1, -1);
            }
            cVar1 = field_99696.empty();
            if (!cVar1) {
                DrawDebugTileProgress(World const&, CoordFine const&)::$_1::operator()(
                    &local_50, 4294967295, (fixed_list<MiniMap::MapSquareState, _16ul>*)&field_99696, -1, -1);
            }
        }
        int iVar3 = field_1108 << 13;
        iVar2 = ((int)(coordFine.field_4 - (float)(field_1304 << 13)) * iVar4) / iVar3;
        iVar3 = (iVar4 - ((int)(coordFine.field_12 - (float)(field_1288 << 13)) * iVar4) / iVar3) + 100;
        this_01->AddGeneralLine(iVar2, 100, iVar2, iVar4 + 100, 1.0, 4278190208, 1, false);
        this_01->AddGeneralLine(0, iVar3, iVar4, iVar3, 1.0, 4278190208, 1, false);
        this_01->Render(nullptr);
    }

    // 0x1003c36a0
    void MiniMap::DrawMapElement(const shared_ptr<MapElementType>& mapElementType, int arg2, int arg3,
                                 MiniMap::MapElementListEntry* mapElementListEntry) {
        int iVar10;
        int arg5;
        ReturnValue local_68;
        bool local_31;

        shared_ptr local_48(mapElementType);
        auto pMVar5 = local_48.operator->();
        auto puVar6 = pMVar5->VariableTest(local_31, field_32, field_16);
        bool bVar11 = puVar6 != DataStatus::READY;
        bool bVar12 = local_31 == false;
        if ((bVar12 || bVar11) && (field_32 != nullptr))
            goto LAB_1003c39a2;
        pMVar5 = (MapElementType*)local_48.operator->();
        bool cVar1 = pMVar5->IsMultiME();
        if (cVar1) {
            pMVar5 = (MapElementType*)local_48.operator->();
            local_68 = pMVar5->GetMultiME(field_32, field_16);
            local_48 = local_68;
            if (mapElementListEntry != nullptr) {
                mapElementListEntry->field_32 = local_48;
            }
            cVar1 = shared_ptr::operator_cast_to_bool(&local_48);
            if (!cVar1)
                goto LAB_1003c39a2;
            pMVar5 = (MapElementType*)local_48.operator->();
            pMVar5->VariableTest(local_31, field_32, field_16);
            if (((puVar6 != DataStatus::READY) || (local_31 == false)) && (field_32 != nullptr))
                goto LAB_1003c39a2;
        }
        pMVar5 = (MapElementType*)local_48.operator->();
        cVar1 = pMVar5->GetShowOnMiniMap();
        if (!cVar1)
            goto LAB_1003c39a2;
        pMVar5 = (MapElementType*)local_48.operator->();
        if (pMVar5->GetPolygon() != 0) {
            if (!bVar12 && !bVar11) {
                pMVar5 = (MapElementType*)local_48.operator->();
                DrawPolygon((Polygon*)pMVar5->GetPolygon(), arg2, arg3);
            }
            goto LAB_1003c39a2;
        }
        pMVar5 = (MapElementType*)local_48.operator->();
        auto this_00 = pMVar5->GetSprite(field_8, false);
        cVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar1)
            goto LAB_1003c39a2;
        SpriteAtlasReference* pSVar8 = (SpriteAtlasReference*)(*this_00).operator->();
        cVar1 = pSVar8->IsReady();
        if (!cVar1)
            goto LAB_1003c39a2;
        int iVar3 = field_1128;
        auto pMVar9 = local_48.operator->();
        int iVar2 = pMVar9->GetExternalID();
        if (0 < iVar2) {
            pMVar9 = (Model*)local_48.operator->();
            iVar3 = pMVar9->GetExternalID();
        }
        if (iVar3 < 2) {
            LogAssert("miniMEScale > 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      2017, nullptr);
        }
        float local_4c = field_1048;
        pSVar8 = (SpriteAtlasReference*)(*this_00).operator->();
        iVar2 = pSVar8->GetWidth();
        pSVar8 = (SpriteAtlasReference*)(*this_00).operator->();
        int iVar4 = pSVar8->GetHeight();
        auto this_01 = local_48.operator->();
        local_4c = (local_4c + 0.5) * (float)iVar3 * 0.011;
        iVar2 = (int)((float)iVar2 * local_4c);
        iVar3 = this_01->GetEmissiveMapMaterialID();
        if (iVar3 == 1) {
            iVar10 = iVar2 >> 1;
        LAB_1003c3938:
            iVar10 = -iVar10;
        } else {
            iVar10 = 0;
            if (iVar3 == 2) {
                iVar10 = iVar2;
                goto LAB_1003c3938;
            }
        }
        pMVar5 = (MapElementType*)local_48.operator->();
        iVar4 = (int)(local_4c * (float)iVar4);
        iVar3 = pMVar5->GetVAlign();
        if (iVar3 == 2) {
            arg5 = -iVar4;
        } else {
            arg5 = 0;
            if (iVar3 == 1) {
                arg5 = -(iVar4 >> 1);
            }
        }
        DrawSprite(*this_00, arg2, arg3, iVar10, arg5, iVar2, iVar4);
    LAB_1003c39a2:
    }

    // 0x1003c39f0
    void MiniMap::DrawMapElement(int arg1, int arg2, int arg3) {
        auto groundDecor = field_16->GetConfig<MapElementType>(arg1, nullptr);
        shared_ptr local_38(groundDecor);
        if (shared_ptr::operator_cast_to_bool(&local_38) != '\0') {
            DrawMapElement(local_38, arg2, arg3, nullptr);
        }
    }

    // 0x1003c3aa0
    void MiniMap::DrawPolygon(const MapElementType::Polygon* polygon, int arg2, int arg3) {
        uint32_t uVar1;
        int iVar2;
        int iVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        CoordMapSquare* pCVar8;
        uint32_t* puVar9;
        unsigned long uVar10;
        int* piVar12;
        unsigned int* puVar13;
        uint32_t in_register_0000000c;
        unsigned long arg1;
        unsigned long uVar14;
        uint8_t local_88[8];
        Array<int>* local_40;

        GUIManager* local_58 = (GUIManager*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
        int local_34 = arg2;
        vector<int> local_78;
        long lVar7 = polygon->size();
        local_78.resize(lVar7 * 2);
        lVar7 = polygon->size();
        Polygon* local_48 = polygon;
        if (lVar7 != 0) {
            local_40 = (Array<int>*)field_80;
            arg1 = 0;
            uVar10 = 0;
            uVar14 = 1;
            do {
                pCVar8 = (CoordMapSquare*)(*polygon)[uVar10];
                iVar5 = pCVar8->GetX();
                pCVar8 = (CoordMapSquare*)(*local_48)[uVar10];
                iVar5 = iVar5 + local_34;
                iVar6 = pCVar8->GetZ();
                GetScreenPosition((MiniMap*)local_88, (int)this, iVar5,
                                  (SceneViewData*)(unsigned long)(unsigned int)((int)local_58 + iVar6));
                puVar9 = (uint32_t*)local_88->SSOBeginPtr();
                uVar1 = *puVar9;
                puVar9 = &local_78[arg1];
                *puVar9 = uVar1;
                puVar9 = (uint32_t*)local_88->y();
                uVar1 = *puVar9;
                puVar9 = &local_78[(unsigned long)((int)arg1 + 1)];
                polygon = local_48;
                arg1 = (unsigned long)((int)arg1 + 2);
                *puVar9 = uVar1;
                uVar10 = local_48->size();
                bVar4 = uVar14 < uVar10;
                uVar10 = uVar14;
                uVar14 = (unsigned long)((int)uVar14 + 1);
            } while (bVar4);
        }
        auto pGVar11 = field_8->GetGUIManager();
        pGVar11->AddColouredTriangleList(local_78, polygon->field_112, *(unsigned int*)&polygon->field_48, 1, false);
        local_40 = (Array<int>*)&local_48->field_88;
        RT7Core* local_80 = (RT7Core*)&local_48->field_64;
        uVar10 = 0;
        while (true) {
            lVar7 = local_78.size();
            pGVar11 = field_8->GetGUIManager();
            if (lVar7 - 2U <= uVar10)
                break;
            local_58 = pGVar11;
            piVar12 = &local_78[uVar10];
            local_34 = *piVar12;
            iVar3 = (int)uVar10;
            piVar12 = &local_78[(unsigned long)(iVar3 + 1)];
            iVar5 = *piVar12;
            piVar12 = &local_78[(unsigned long)(iVar3 + 2)];
            iVar6 = *piVar12;
            piVar12 = &local_78[(unsigned long)(iVar3 + 3)];
            iVar2 = *piVar12;
            piVar12 = (int*)(*local_40)[uVar10 >> 1];
            puVar13 = (unsigned int*)(*local_80)[(long)*piVar12];
            local_58->AddGeneralLine(local_34, iVar5, iVar6, iVar2, 1.0, *puVar13, 1, false);
            uVar10 = (unsigned long)(iVar3 + 2);
        }
        lVar7 = local_78.size();
        piVar12 = &local_78[lVar7 - 2];
        iVar5 = *piVar12;
        lVar7 = local_78.size();
        piVar12 = &local_78[lVar7 - 1];
        iVar6 = *piVar12;
        piVar12 = &local_78[0];
        iVar2 = *piVar12;
        piVar12 = &local_78[1];
        iVar3 = *piVar12;
        lVar7 = local_48->size();
        piVar12 = (int*)(*local_40)[lVar7 - 1];
        puVar13 = (unsigned int*)(*local_80)[(long)*piVar12];
        pGVar11->AddGeneralLine(iVar5, iVar6, iVar2, iVar3, 1.0, *puVar13, 1, false);
    }

    // 0x1003c3e40
    void MiniMap::DrawSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2, int arg3,
                             int arg4, int arg5, int arg6, int arg7) {
        uint32_t in_register_0000000c;
        uint8_t local_38[8];

        GetScreenPosition((MiniMap*)local_38, (int)this, arg2,
                          (SceneViewData*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3));
        auto this_00 = field_8->GetGUIManager();
        auto piVar2 = local_38->SSOBeginPtr();
        int iVar1 = *piVar2;
        piVar2 = (int*)local_38->y();
        this_00->AddSprite(arg4 + iVar1, arg5 + *piVar2, arg6, arg7, 4294967295, spriteAtlasReference, 1);
    }

    // 0x1003c3ec0
    MiniMap* MiniMap::GetScreenPosition(int arg1, int arg2, const graphics::SceneViewData& sceneViewData) {
        uint32_t in_register_00000034;
        NXTPixToolkit* in_R8;
        Matrix44T<float> local_88;

        auto matrix442 = in_R8->GetScreen();
        local_88** matrix442;
        ImVec4 local_48((float)arg2, 0.0, (float)(int)sceneViewData, 1.0);
        local_48 *= &local_88;
        auto pfVar1 = local_48.second();
        float local_34 = *pfVar1;
        pfVar1 = (float*)local_48.SSOBeginPtr();
        *pfVar1 = *pfVar1 / local_34;
        pfVar1 = (float*)local_48.second();
        local_34 = *pfVar1;
        pfVar1 = (float*)local_48.y();
        *pfVar1 = *pfVar1 / local_34;
        pfVar1 = (float*)local_48.SSOBeginPtr();
        local_34 =
            (float)*(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 1124) * (*pfVar1 * 0.5 + 0.5);
        pfVar1 = (float*)local_48.y();
        float local_38 =
            (float)*(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 1124) * (*pfVar1 * 0.5 + 0.5);
        int arg1_00 = math::RoundFloatToInt(local_34);
        int arg2_00 = math::RoundFloatToInt(local_38);
        new (this) oldscape::sidebars::SideBarData(arg1_00, arg2_00);
        return this;
    }

    // 0x1003c4010
    void MiniMap::DrawSpriteReference(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2,
                                      int arg3) {
        long lVar4;
        int* piVar5;
        GUIManager* this_04;
        Matrix44T<float>* matrix442;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        Matrix44T<float>* local_40;
        int local_38;

        Vector3T<int> local_50;
        float local_34 = (float)arg2;
        auto pfVar2 = local_50.SSOBeginPtr();
        *pfVar2 = local_34;
        auto puVar3 = local_50.y();
        *puVar3 = 0;
        local_34 = (float)arg3;
        pfVar2 = (float*)local_50.second();
        *pfVar2 = local_34;
        auto this_00 = spriteAtlasReference.operator->();
        auto this_01 = this_00->second();
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            lVar4 = ((SpriteAtlas*)(*this_01).operator->())
                        ->GetSpriteRenderMapping(
                            ((FastPool<audio::SoundInstance, int>*)spriteAtlasReference.operator->())->capacity());
            local_34 = field_1052 * 0.33333334f + 0.6666666f;
            piVar5 = (int*)(*((lVar4 + 104)))[0];
            local_38 = (int)((float)*piVar5 * local_34);
            piVar5 = (int*)(*((lVar4 + 104)))[1];
            local_34 = (float)(int)((float)*piVar5 * local_34);
            this_04 = field_8->GetGUIManager();
            local_40 = (Matrix44T<float>*)&field_752;
            matrix442 = (Matrix44T<float>*)field_80->GetScreen();
            this_05 = (MapArea*)(*this_01).operator->();
            this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
            texture = (Texture*)this_06->end();
            this_04->AddElementIn3DSpace(local_50, local_38, (int)local_34, *local_40, *matrix442, 4294967295,
                                         *((lVar4 + 88)), texture, 1, false);
        }
    }

    // 0x1003c4280
    void MiniMap::DrawSquare(int arg1, int arg2) {
        Vector3T<int> local_50;
        Vector3T<int> local_40;
        float local_34 = (float)arg1 - 25.0;
        auto pfVar1 = local_50.SSOBeginPtr();
        *pfVar1 = local_34;
        auto puVar2 = local_50.y();
        *puVar2 = 0;
        local_34 = (float)arg2 - 25.0;
        pfVar1 = (float*)local_50.second();
        *pfVar1 = local_34;
        local_40.SetXYZ(local_50);
        pfVar1 = (float*)local_40.SSOBeginPtr();
        *pfVar1 = *pfVar1 + 50.0;
        pfVar1 = (float*)local_40.second();
        *pfVar1 = *pfVar1 + 50.0;
        auto this_00 = field_8->GetGUIManager();
        auto matrix442 = field_80->GetScreen();
        this_00->AddLineIn3DSpace(local_50, local_40, 50.0, field_752, *matrix442, 4294967295, 1, true);
    }

    // 0x1003c43a0
    void MiniMap::DrawSpriteReference(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2,
                                      int arg3, int arg4, int arg5) {
        long lVar4;
        int* piVar5;
        GUIManager* this_04;
        Matrix44T<float>* matrix442;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        uint32_t in_register_00000084;
        uint32_t in_register_0000008c;
        Matrix44T<float>* local_40;
        int local_38;

        uint64_t local_48 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        uint64_t local_50 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        Vector3T<int> local_60;
        float local_34 = (float)arg2;
        auto pfVar2 = local_60.SSOBeginPtr();
        *pfVar2 = local_34;
        auto puVar3 = local_60.y();
        *puVar3 = 0;
        local_34 = (float)arg3;
        pfVar2 = (float*)local_60.second();
        *pfVar2 = local_34;
        auto this_00 = spriteAtlasReference.operator->();
        auto this_01 = this_00->second();
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            lVar4 = ((SpriteAtlas*)(*this_01).operator->())
                        ->GetSpriteRenderMapping(
                            ((FastPool<audio::SoundInstance, int>*)spriteAtlasReference.operator->())->capacity());
            local_34 = field_1052 * 0.33333334f + 0.6666666f;
            piVar5 = (int*)(*((lVar4 + 104)))[0];
            local_38 = (int)((float)*piVar5 * local_34);
            piVar5 = (int*)(*((lVar4 + 104)))[1];
            local_34 = (float)(int)((float)*piVar5 * local_34);
            this_04 = field_8->GetGUIManager();
            local_40 = (Matrix44T<float>*)&field_752;
            matrix442 = (Matrix44T<float>*)field_80->GetScreen();
            this_05 = (MapArea*)(*this_01).operator->();
            this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
            texture = (Texture*)this_06->end();
            this_04->AddElementIn3DSpace(local_60, local_38, (int)local_34, *local_40, *matrix442, 4294967295,
                                         *((lVar4 + 88)), texture, 1, false, (int)local_50, (int)local_48);
        }
    }

    // 0x1003c4600
    void MiniMap::DrawMapArrowEdge(float arg1, const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference,
                                   int arg3, int arg4, const math::Vector3T<float>& vector3) {
        SpriteAtlas* this_01;
        long lVar6;
        GUIManager* this_03;
        MapArea* this_04;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_05;
        Texture* texture;
        int iVar9;
        int iVar10;
        shared_ptr* local_68;
        uint64_t local_58;

        uint32_t local_70 = *(uint32_t*)(vector3 + 8);
        uint64_t local_78 = *(uint64_t*)vector3;
        float local_38 = (float)arg4;
        float local_34 = (float)arg3;
        RotateAroundOrigin(local_78, field_1188, field_1200);
        unsigned int uVar1 = field_1116;
        int iVar3 = field_1120;
        unsigned int uVar8 = uVar1 + 7;
        if (-1 < (int)uVar1) {
            uVar8 = uVar1;
        }
        int iVar7 = iVar3 + 7;
        if (-1 < iVar3) {
            iVar7 = iVar3;
        }
        float* pfVar4 = &local_78[2];
        uint32_t uVar11 = fabs(*pfVar4);
        local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar11);
        pfVar4 = &local_78[0];
        float fVar12 = (float)fabs(*pfVar4);
        local_58 = atan((float)local_58 / fVar12);
        float local_40 = (float)atan(
            (float)(int)((long)((long)(iVar7 << 3) & 18446744073709551552U) / (long)(int)((uVar8 & 536870904) << 3)));
        fVar12 = field_1200;
        iVar3 = *(int*)(field_1144 + (unsigned long)(local_40 <= (float)local_58) * 4 - 28);
        uVar1 = field_1124;
        auto this_00 = spriteAtlasReference.operator->();
        auto psVar5 = this_00->second();
        if (shared_ptr::operator_cast_to_bool(psVar5) != '\0') {
            iVar10 = (int)uVar1 / 2;
            iVar9 = (int)local_34 / 2;
            iVar7 = (int)local_38 / 2;
            local_38 = (float)iVar7;
            local_68 = psVar5;
            local_34 = (float)::sin(1.5707964f);
            local_34 = local_34 * (float)(iVar3 / 2);
            fVar12 = (float)::sin(
                (float)(~-(unsigned int)((float)local_58 < local_40) & (unsigned int)((arg1 + 1.5707964f) - fVar12) |
                        (unsigned int)(fVar12 - arg1) & -(unsigned int)((float)local_58 < local_40)));
            fVar12 = (float)::abs(local_34 / fVar12);
            psVar5 = local_68;
            fVar12 = local_38 - fVar12;
            local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)((int)((float)(iVar7 + iVar10) + fVar12)));
            local_38 = (float)(iVar9 + iVar10);
            local_34 = (float)(int)((float)(iVar10 - iVar7) + fVar12);
            this_01 = (SpriteAtlas*)(*local_68).operator->();
            iVar3 = ((FastPool<audio::SoundInstance, int>*)spriteAtlasReference.operator->())->capacity();
            lVar6 = this_01->GetSpriteRenderMapping(iVar3);
            this_03 = field_8->GetGUIManager();
            this_04 = (MapArea*)(*psVar5).operator->();
            this_05 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_04->GetOrigin();
            texture = (Texture*)this_05->end();
            iVar3 = (int)field_1124 / 2;
            this_03->AddElementRotated(iVar10 - iVar9, (int)local_34, (int)local_38, (int)(float)local_58, 4294967295,
                                       *((lVar6 + 88)), texture, 1, arg1 - field_1200, iVar3, iVar3);
        }
    }

    // 0x1003c48c0
    void MiniMap::RotateAroundOrigin(math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                     float arg3) {
        float fVar6 = (float)::sin(arg3);
        float fVar7 = (float)::cos(arg3);
        float* pfVar5 = &vector32[0];
        float fVar1 = *pfVar5;
        pfVar5 = &vector31[0];
        *pfVar5 = *pfVar5 - fVar1;
        pfVar5 = &vector32[2];
        fVar1 = *pfVar5;
        pfVar5 = &vector31[2];
        *pfVar5 = *pfVar5 - fVar1;
        pfVar5 = &vector31[0];
        fVar1 = *pfVar5;
        pfVar5 = &vector31[2];
        float fVar2 = *pfVar5;
        pfVar5 = &vector31[0];
        float fVar3 = *pfVar5;
        pfVar5 = &vector31[2];
        float fVar4 = *pfVar5;
        pfVar5 = &vector31[0];
        *pfVar5 = fVar1 * fVar7 - fVar2 * fVar6;
        pfVar5 = &vector31[2];
        *pfVar5 = fVar7 * fVar4 + fVar6 * fVar3;
    }

    // 0x1003c4af0
    bool MiniMap::IsWithinMap(const CoordFine& coordFine) {
        uint64_t local_30;

        float local_28 = coordFine.field_12;
        local_30._0_4_ = coordFine.field_4;
        local_30._4_4_ = coordFine.field_8;
        RotateAroundOrigin(local_30, field_1188, field_1200);
        float fVar2 = ((float)(int)field_1116 * 8.0) / field_1048;
        float* pfVar1 = &local_30[0];
        if ((*pfVar1 <= fVar2) && (pfVar1 = (float*)local_30[0], fVar2 = -fVar2, fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
            fVar2 = ((float)field_1120 * 8.0) / field_1048;
            pfVar1 = &local_30[2];
            if ((*pfVar1 <= fVar2) &&
                (pfVar1 = (float*)local_30[2], fVar2 = -fVar2, fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
                return 1;
            }
        }
        return 0;
    }

    // 0x1003c4c20
    void MiniMap::DrawLoggedInPlayer() {
        float local_34 = field_1052 * 0.6666667f + 1.3333333f;
        auto this_00 = field_8->GetGUIManager();
        int arg1 = math::RoundFloatToInt((float)(int)field_1124 * 0.5 - local_34);
        int arg2 = math::RoundFloatToInt((float)(int)field_1124 * 0.5 - local_34);
        local_34 = local_34 + local_34;
        int arg3 = math::RoundFloatToInt(local_34);
        int arg4 = math::RoundFloatToInt(local_34);
        GridRect local_48(arg1, arg2, arg3, arg4);
        this_00->AddColouredRectangle(local_48, 4294967295, 1);
    }

    // 0x1003c4d00
    MiniMap::MapSquareState::TileState::TileState() {
        ResetProgress();
    }

    // 0x1003c4d30
    void MiniMap::MapSquareState::TileState::GetKey(const LocationContainer& locationContainer) const {
        int arg1 = locationContainer.GetEffectAnimID();
        int arg2 = locationContainer.GetMinGridZ();
        GetKey((TileState*)locationContainer, arg1, arg2);
    }

    // 0x1003c4d60
    void MiniMap::MapSquareState::TileState::GetKey(const CoordGrid& coordGrid) const {
        int arg1 = coordGrid.GetLocalX();
        int arg2 = coordGrid.GetLocalZ();
        GetKey((TileState*)coordGrid, arg1, arg2);
    }

    // 0x1003c4d90
    uint8_t MiniMap::MapSquareState::TileState::GetProgress(const CoordGrid& coordGrid) const {
        unsigned int uVar1 = GetKey(coordGrid);
        return (&field_0)[uVar1];
    }

    // 0x1003c4db0
    unsigned int MiniMap::MapSquareState::TileState::GetKey(int arg1, int arg2) const {
        unsigned int uVar1 = arg2 >> 3 | arg1 & 4294967288U;
        if (63 < uVar1) {
            LogAssert("ret < ARRAY_SIZE(m_tiles)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      2530, nullptr);
        }
        return uVar1;
    }

    // 0x1003c4df0
    MiniMap::MapSquareState::IconState::IconState() {
        ResetProgress();
    }

    // 0x1003c4e10
    unsigned int MiniMap::MapSquareState::IconState::GetKey(int arg1, int arg2) const {
        unsigned int uVar1 = arg1 << 6 | arg2;
        if (4095 < uVar1) {
            LogAssert("ret < ARRAY_SIZE(m_tiles)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMap.cpp",
                      2557, nullptr);
        }
        return uVar1;
    }

    // 0x1003d4e70
    unsigned int MiniMap::RebuildTileListAndReprioritise(CoordFine&, int, int)::$_0::operator()(
        const MiniMap::MapSquareState& mapSquareState1, const MiniMap::MapSquareState& mapSquareState2) const {
        int iVar1 = mapSquareState1.field_0 - field_8;
        int iVar5 = -iVar1;
        if (iVar5 < 0) {
            iVar5 = iVar1;
        }
        int iVar2 = mapSquareState1.field_4 - field_12;
        iVar1 = -iVar2;
        if (iVar1 < 0) {
            iVar1 = iVar2;
        }
        int iVar4 = mapSquareState2.field_0 - field_8;
        iVar2 = -iVar4;
        if (iVar2 < 0) {
            iVar2 = iVar4;
        }
        int iVar3 = mapSquareState2.field_4 - field_12;
        iVar4 = -iVar3;
        if (iVar4 < 0) {
            iVar4 = iVar3;
        }
        return ((iVar1 + iVar5) - (iVar4 + iVar2)) +
                   ((unsigned int)(uint8_t)mapSquareState2.field_12 - (unsigned int)(uint8_t)mapSquareState1.field_12) *
                       *(int*)(field_0 + 1108) * 7 >>
               31;
    }

} // namespace jag::game

// 0x1003c49f0
void atan(float arg1) {
    _atanf();
}

// 0x1003c4a00
unsigned long fabs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x1003c4a10
void sin(float arg1) {
    _sinf();
}

// 0x1003c4a20
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x1003c4ae0
void cos(float arg1) {
    _cosf();
}
