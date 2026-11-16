// libs/game/runetek5/scene/PointLightShadowRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PointLightShadowRenderer.h"

namespace jag::game {
    // 0x10047cf70
    void PointLightShadowRenderer::RenderPointLightShadows(unsigned int arg1, int arg2,
                                                           graphics::EffectManager& effectManager,
                                                           const graphics::SceneViewData& sceneViewData,
                                                           graphics::GraphRoot* graphRoot) {
        Layout* this_00;
        PointLightShadowPassVisTestFunctor* pPVar1;
        Renderer* pairs;
        uint8_t bVar3;
        int iVar4;
        int arg4;
        CubeFace cubeFace;
        RT7Core* pRVar5;
        RenderContext* this_01;
        unique_ptr<graphicutils::TextureAtlasSlotPacker>* puVar6;
        Material* pMVar7;
        long lVar8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        RenderTargets* renderTargets;
        VisibleShadowCastingLightInfo* visibleShadowCastingLightInfo1;
        unsigned long uVar10;
        weak_ptr<oldscape::rs2lib::IfType>* pwVar11;
        LightSource* pLVar12;
        PointLightSM* pPVar13;
        long* plVar14;
        Vector3T<float>* pVVar15;
        ViewTransforms* viewTransforms;
        QuaternionT<float>* quaternion;
        Frustum* pFVar16;
        Frustum* frustum;
        SceneViewData* pSVar17;
        vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>* this_03;
        unsigned long uVar18;
        char* pcVar19;
        weak_ptr<oldscape::rs2lib::IfType>* pwVar20;
        EffectManager* effectManager_00;
        CoordMapSquare* pCVar21;
        Layout* this_05;
        RT7Core* this_06;
        RenderContext* this_07;
        PointLightShadowRenderer* pPVar22;
        float fVar23;
        uint64_t uVar24;
        float in_XMM1_Da;
        float in_XMM1_Db;
        uint8_t auVar25[16];
        Camera local_14f0;
        weak_ptr<oldscape::rs2lib::IfType>* local_14a0;
        PointLightShadows* local_1498;
        CoordMapSquare local_1490;
        int iStack_1484;
        uint64_t local_1480;
        vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL> local_1478;
        shared_ptr local_1460;
        uint8_t local_1450[40];
        weak_ptr<oldscape::rs2lib::IfType>* local_1428;
        RT7Core* local_1408;
        PointLightSM* local_1400;
        PointLightSM_vtbl* local_13f8[4];
        uint8_t local_13d8[12];
        float fStack_13cc;
        SceneViewData local_1378;
        uint8_t local_10d8[8];
        ColourStorage8888<math::ARGB8StorageLayout> local_10d0;
        ColourStorage8888<math::ARGB8StorageLayout> local_10cc;
        array<graphics::SceneViewData, 6ul> local_10c8;
        ColourStorage8888<math::ARGB8StorageLayout> local_10c4;
        array<eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>, 6ul> local_108[192];
        array<bool, 6ul> local_48;

        local_1450._32_4_ = arg1;
        local_1450._24_8_ = graphRoot;
        SceneViewData* local_1418 = sceneViewData;
        char cVar2 = effectManager.IsEnabled(35);
        uVar24._4_4_ = local_1450._4_4_;
        uVar24._0_1_ = local_1450[0];
        uVar24._1_1_ = local_1450[1];
        uVar24._2_1_ = local_1450[2];
        uVar24._3_1_ = local_1450[3];
        if (!cVar2) {
            RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                                    graphics::GraphRoot*)::clearAtlas = '\0';
        } else {
            local_1498 = (PointLightShadows*)effectManager.GetEffect<graphics::SunlightDirectLighting>(35);
            pRVar5 = (RT7Core*)local_1498->GetPointLightSMManager();
            local_1408 = pRVar5;
            if ((graphics::PointLightSMManager::m_ClearShadowMapDepthAtlas != '\0') ||
                (RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                                         graphics::GraphRoot*)::clearAtlas == '\0')) {
                this_06 = pRVar5;
                pRVar5->ResetActivePointLightSMPasses();
                this_01 = (RenderContext*)this_06->GetRenderContext();
                cVar2 = (pRVar5->GetPixelBuffer())->operator_cast_to_bool();
                pRVar5 = local_1408;
                if (!cVar2) {
                    LogAssert("pointLightSMManager.GetShadowCubeMapAtlasPacker()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/PointLightShadowRenderer.cpp",
                              44, nullptr);
                }
                puVar6 = (unique_ptr<graphicutils::TextureAtlasSlotPacker>*)local_1408->GetPixelBuffer();
                pMVar7 = (Material*)(*puVar6).operator->();
                iVar4 = pMVar7->GetNormalEmissiveMapID();
                puVar6 = (unique_ptr<graphicutils::TextureAtlasSlotPacker>*)pRVar5->GetPixelBuffer();
                pMVar7 = (Material*)(*puVar6).operator->();
                arg4 = pMVar7->GetNormalEmissiveMapID();
                in_XMM1_Da = 1.0;
                in_XMM1_Db = 0.0;
                new (local_10d8) render::Viewport(0, 0, iVar4, arg4, 0.0, 1.0);
                this_01->SetViewports(local_10d8, 1);
                this_07 = this_01;
                this_01->SetScissorRectangle(false, *local_10d8);
                lVar8 = this_07->Instance();
                this_01->SetDepthStencilState((lVar8 + 720));
                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pRVar5->GetCursorMutex();
                renderTargets = (RenderTargets*)pvVar9->end();
                this_01->ClearDepthStencilTarget(renderTargets, 1.0, 0, 2);
                RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                                        graphics::GraphRoot*)::clearAtlas = '\x01';
                graphics::PointLightSMManager::m_ClearShadowMapDepthAtlas = '\0';
            }
            pPVar22 = this;
            visibleShadowCastingLightInfo1 = (VisibleShadowCastingLightInfo*)field_32->HeapBeginPtr();
            auVar25 = pPVar22->field_32->end();
            eastl::sort<VisibleShadowCastingLightInfo*,
                        unsigned int->RenderPointLightShadows(
                            int, graphics::EffectManager&, graphics::SceneViewData const&, graphics::GraphRoot*)::__9>(
                visibleShadowCastingLightInfo1, auVar25._0_8_, auVar25._8_8_);
            pPVar22->field_16->field_8 = (GraphNode*)local_1418;
            local_1478 = eastl::vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL>();
            uVar10 = pPVar22->field_32->size();
            local_1478.reserve(uVar10);
            bVar3 = pPVar22->field_32->empty();
            effectManager.EnableEffect(36, (bool)(bVar3 ^ 1));
            this_00 = (Layout*)pPVar22->field_32;
            pwVar11 = (weak_ptr<oldscape::rs2lib::IfType>*)this_00->HeapBeginPtr();
            local_14a0 = (weak_ptr<oldscape::rs2lib::IfType>*)this_00->end();
            if (pwVar11 != local_14a0) {
                local_1450._16_8_ = 0;
                do {
                    local_1428 = pwVar11;
                    local_1460 = pwVar11->lock();
                    cVar2 = shared_ptr::operator_cast_to_bool(&local_1460);
                    if (cVar2) {
                        pLVar12 = (LightSource*)local_1460.operator->();
                        pPVar13 = pLVar12->GetPointLightSM();
                        if (pPVar13 == nullptr) {
                            pPVar13 = (PointLightSM*)local_1408->AllocPointLightSM();
                            pLVar12 = (LightSource*)local_1460.operator->();
                            pLVar12->SetPointLightSM(pPVar13);
                        }
                        local_1400 = pPVar13;
                        if (pPVar13 != nullptr) {
                            new (local_10d8) PointLightSMJobData();
                            pPVar13 = local_1400;
                            local_10d8 = (uint8_t[8])local_1400;
                            pLVar12 = (LightSource*)local_1460.operator->();
                            uVar24 = pLVar12->GetWorldSphere();
                            local_1450._8_4_ = in_XMM1_Da;
                            local_1450._12_4_ = in_XMM1_Db;
                            local_1450._0_8_ = uVar24;
                            if (graphics::PointLightSMManager::m_showShadowCastingLights != '\0') {
                                plVar14 = DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar14 != nullptr) {
                                    pVVar15 = (Vector3T<float>*)local_1450->SSOBeginPtr();
                                    fVar23 = (float)local_1450->GetOutlineRadiusAdjustment();
                                    local_1378 = math::Sphere(*pVVar15, fVar23);
                                    pLVar12 = (LightSource*)local_1460.operator->();
                                    pPVar13 = pLVar12->GetPointLightSM();
                                    iVar4 = pPVar13->GetLODLevel();
                                    uVar24 = graphics::GetShadowMapLodColour(iVar4);
                                    local_13d8._8_4_ = in_XMM1_Da;
                                    fStack_13cc = in_XMM1_Db;
                                    local_13d8._0_8_ = uVar24;
                                    local_1490 = math::ColourStorage8888(local_13d8);
                                    iVar4 = local_1490.GetX();
                                    local_14f0 = oldscape::sidebars::SideBarData(iVar4, 2);
                                    (**(void (**)(...))(*plVar14 + 32))(plVar14, &local_1378, &local_14f0);
                                    pPVar22 = this;
                                    pPVar13 = local_1400;
                                }
                            }
                            if (graphics::PointLightSMManager::m_showShadowCastingLightDst != '\0') {
                                plVar14 = DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar14 != nullptr) {
                                    pVVar15 = pPVar22->field_40;
                                    uVar24 = local_1450->SSOBeginPtr();
                                    local_1378 = oldscape::sidebars::SideBarData(-1, 2);
                                    (**(void (**)(...))(*plVar14 + 24))(plVar14, pVVar15, uVar24);
                                    pPVar13 = local_1400;
                                }
                            }
                            viewTransforms = (ViewTransforms*)local_1418->SSOBeginPtr();
                            lVar8 = local_1408->SSOBeginPtr();
                            iVar4 = pPVar13->ComputeLinearLightLODLevel(*local_1450, *viewTransforms,
                                                                        *(float*)(lVar8 + 28));
                            if (iVar4 == -1) {
                                LogAssert("lodLevel != -1",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/PointLightShadowRenderer.cpp",
                                          113, nullptr);
                            }
                            pPVar13->SetLODLevel(iVar4);
                            uVar10 = 0;
                            do {
                                render::GetCubeMapFace((int)uVar10);
                                local_1490.GetShadowCubeMapFaceViewport((CubeFace)local_1400);
                                local_14f0 = jag::Camera(0);
                                fVar23 = (float)math::Deg2Rad(90.0);
                                local_14f0.SetVerticalFov(fVar23);
                                local_14f0.SetAspect((float)((int)local_1490._8_4_ / iStack_1484));
                                local_14f0.SetNearClip(0.1);
                                fVar23 = (float)local_1450->GetOutlineRadiusAdjustment();
                                local_14f0.SetFarClip(fVar23);
                                pVVar15 = (Vector3T<float>*)local_1450->SSOBeginPtr();
                                local_14f0.SetPos(*pVVar15);
                                in_XMM1_Da = -1.0;
                                in_XMM1_Db = 0.0;
                                new (local_13d8) math::QuaternionT<float>(0.0, -1.0, 0.0, 0.0);
                                local_1378 = graphicutils::CUBEMAP_FACE_CAMERA_ROTATIONS(*local_13d8);
                                quaternion = &local_1378[uVar10];
                                local_14f0.SetRot(*quaternion);
                                local_1378 = graphics::SceneViewData();
                                local_1378.SetTransforms(local_14f0);
                                local_13f8[2] = (PointLightSM_vtbl*)local_1480;
                                local_13f8[0] = (PointLightSM_vtbl*)local_1490._0_8_;
                                new ((local_14f0.m_pos + 12)) eastl::allocator("EASTL fixed_vector");
                                new (local_13d8) eastl::fixed_vector<render::Viewport, 2ul>(local_13f8, DAT_00000001);
                                local_1378.SetRenderTargetViewports(*local_13d8);
                                pvVar9 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                             local_1408->GetCursorMutex();
                                local_1378._368_8_ = pvVar9->end();
                                pFVar16 = (Frustum*)local_1418->GetTranslation();
                                frustum = (Frustum*)local_1378.GetTranslation();
                                cVar2 = pFVar16->TestIntersection(*frustum);
                                uVar24 = local_48[uVar10];
                                *(bool*)uVar24 = cVar2;
                                if (cVar2) {
                                    pSVar17 = &local_10c8[uVar10];
                                    *pSVar17 = local_1378;
                                    pPVar1 = field_16;
                                    pPVar1->field_0 = (Layout*)&local_1378;
                                    *pPVar1->field_16 = *local_1450;
                                    if ((GraphRoot*)local_1450._24_8_ != nullptr) {
                                        this_03 = (vector<
                                                   std::pair<graphics::GraphEntity*,
                                                             graphics::GraphEntityTransformData>>*)(*local_108)[uVar10];
                                        this_03->reserve(768);
                                        pFVar16 = (Frustum*)local_1378.GetTranslation();
                                        local_1450._24_8_->VisibilityTest(*this_03, local_1450._32_4_, *pFVar16, 6, 6,
                                                                          *field_24, nullptr, nullptr);
                                        uVar18 = this_03->size();
                                        if (768 < uVar18) {
                                            (logger::default_logger())
                                                ->Log(
                                                    false, 3,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/scene/PointLightShadowRenderer.cpp",
                                                    164, "POINT_LIGHT_FACE_ENTITY_COUNT initial capacity exceeded");
                                        }
                                    }
                                }
                                uVar10 = uVar10 + 1;
                            } while (uVar10 != 6);
                            local_1478.push_back(*local_10d8);
                            if (graphics::PointLightSMManager::m_cullOccludedShadowCasters != '\0') {
                                lVar8 = local_1478[local_1450._16_8_];
                                uVar10 = 0;
                                do {
                                    pcVar19 = (char*)(*((lVar8 + 4240)))[uVar10];
                                    if (*pcVar19 != '\0') {
                                        CullOccludedShadowCasters((
                                            vector<std::pair<graphics::GraphEntity*,
                                                             graphics::GraphEntityTransformData>>*)(*((lVar8 +
                                                                                                       4048)))[uVar10]);
                                    }
                                    uVar10 = uVar10 + 1;
                                } while (uVar10 != 6);
                            }
                            local_1450._16_8_ = local_1450._16_8_ + 1;
                            pPVar22 = this;
                        }
                    }
                    pwVar11 = local_1428 + 24;
                } while (pwVar11 != local_14a0);
            }
            lVar8 = local_1478.size();
            if (lVar8 != 0) {
                pwVar11 = nullptr;
                do {
                    local_1408 = &local_1478[(unsigned long)pwVar11];
                    local_1418 = (SceneViewData*)&local_1408->field_16;
                    local_1450._32_8_ = &local_1408->field_4048;
                    uVar10 = 0;
                    local_1428 = pwVar11;
                    do {
                        lVar8 = local_1478[(unsigned long)pwVar11];
                        pcVar19 = (char*)(*((lVar8 + 4240)))[uVar10];
                        if (*pcVar19 != '\0') {
                            local_1400 = (PointLightSM*)(*local_1418)[uVar10];
                            pPVar13 = (PointLightSM*)local_1408->_vptr;
                            cubeFace = render::GetCubeMapFace((int)uVar10);
                            local_1400->RenderPassPushBack((RenderPass*)pPVar13->GetShadowCubeMapFacePass(cubeFace));
                            pairs = field_8;
                            pSVar17 = (SceneViewData*)(*local_1450._32_8_)[uVar10];
                            if ((GraphRoot*)local_1450._24_8_ == nullptr) {
                                effectManager_00 = nullptr;
                            } else {
                                effectManager_00 = (EffectManager*)local_1450._24_8_->GetRoot();
                            }
                            local_10d8 = (uint8_t[8])((unsigned long)local_10d8 & 18446744069414584320);
                            new (local_10d8) callstack::Callstack();
                            graphics::Renderer::RenderView(pairs, pSVar17, local_1400, effectManager_00,
                                                           (uint8_t)effectManager, &DAT_00000001);
                            pwVar11 = local_1428;
                            if (graphics::PointLightSMManager::m_showPointLightFaceCameraFrustums != '\0') {
                                new (local_10d8) math::ColourStorage8888(1.0, 1.0, 0.0, 0.0);
                                new ((local_10d8 + 4)) math::ColourStorage8888(1.0, 0.0, 1.0, 0.0);
                                local_10d0 = math::ColourStorage8888(1.0, 0.0, 0.0, 1.0);
                                local_10cc = math::ColourStorage8888(1.0, 1.0, 1.0, 0.0);
                                local_10c8 = math::ColourStorage8888(1.0, 0.0, 1.0, 1.0);
                                local_10c4 = math::ColourStorage8888(1.0, 1.0, 0.0, 1.0);
                                plVar14 = DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar14 != nullptr) {
                                    uVar24 = local_1400->GetTranslation();
                                    pCVar21 = (CoordMapSquare*)(*local_10d8)[uVar10];
                                    iVar4 = pCVar21->GetX();
                                    local_1378 = oldscape::sidebars::SideBarData(iVar4, 3);
                                    (**(void (**)(...))(*plVar14 + 96))(plVar14, uVar24, PTR_IDENTITY_100ee6730,
                                                                        &local_1378);
                                }
                                plVar14 = DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar14 != nullptr) {
                                    this_05 = (Layout*)local_1400->SSOBeginPtr();
                                    pVVar15 = (Vector3T<float>*)this_05->SSOBeginPtr();
                                    local_1378 = math::Sphere(*pVVar15, 50.0);
                                    pCVar21 = (CoordMapSquare*)(*local_10d8)[uVar10];
                                    iVar4 = pCVar21->GetX();
                                    new (local_13d8) oldscape::sidebars::SideBarData(iVar4, 3);
                                    (**(void (**)(...))(*plVar14 + 32))(plVar14, &local_1378, (SideBarData*)local_13d8);
                                }
                            }
                            local_1400->RenderPassPopBack();
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 != 6);
                    pwVar11 = pwVar11 + 1;
                    pwVar20 = (weak_ptr<oldscape::rs2lib::IfType>*)local_1478.size();
                } while (pwVar11 < pwVar20);
            }
            effectManager.EnableEffect(36, false);
            local_1498->Update();
            uVar24 = local_1450._0_8_;
        }
    }

    // 0x10047e080
    void PointLightShadowRenderer::CullOccludedShadowCasters(
        eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>& pairs) {
        if (graphics::PointLightSMManager::m_cullOccludedShadowCasters == '\0') {
            LogAssert("graphics::PointLightSMManager::m_cullOccludedShadowCasters",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "PointLightShadowRenderer.cpp",
                      263, nullptr);
        }
        auto ppVar1 = pairs.HeapBeginPtr();
        auto ppVar2 = pairs.end();
        ppVar1 = std::remove_if<
            std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>*,
            PointLightShadowRenderer::CullOccludedShadowCasters(
                *(eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>&))::__10>(
            ppVar1, ppVar2, (__10*)pairs);
        ppVar2 = (pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>*)pairs.end();
        pairs.erase(ppVar1, ppVar2);
    }

    // 0x10048bfb0
    uint64_t PointLightShadowRenderer::RenderPointLightShadows(
        unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
        graphics::GraphRoot*)::$_9::operator()(const VisibleShadowCastingLightInfo& visibleShadowCastingLightInfo1,
                                               const VisibleShadowCastingLightInfo& visibleShadowCastingLightInfo2)
        const {
        return visibleShadowCastingLightInfo1.field_16 < field_16;
    }

} // namespace jag::game
