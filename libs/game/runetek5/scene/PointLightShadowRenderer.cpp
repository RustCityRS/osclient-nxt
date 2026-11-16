// libs/game/runetek5/scene/PointLightShadowRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PointLightShadowRenderer.h"

namespace jag::game {
    // 0x10047cf70, 3152 bytes, placed by class name and debug map
    // PointLightShadowRenderer::RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&, graphics::GraphRoot*)
    void PointLightShadowRenderer::RenderPointLightShadows(uint param_1, int param_2, EffectManager* param_3,
                                                           SceneViewData* param_4, GraphRoot* param_5) {
        Layout* this_00;
        PointLightShadowPassVisTestFunctor* pPVar1;
        Renderer* this_01;
        char cVar2;
        bool bVar3;
        byte bVar4;
        int iVar5;
        int iVar6;
        undefined4 uVar7;
        RT7Core* pRVar8;
        RenderContext* this_02;
        unique_ptr* this_03;
        unique_ptr<graphicutils::TextureAtlasSlotPacker, std::default_delete<graphicutils::TextureAtlasSlotPacker>>*
            puVar9;
        Material* pMVar10;
        long lVar11;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar12;
        RenderTargets* pRVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        ulong uVar16;
        PointLightSM* pPVar17;
        LightSource* pLVar18;
        PointLightSM* pPVar19;
        long* plVar20;
        vector* pvVar21;
        ViewTransforms* pVVar22;
        QuaternionT* pQVar23;
        Frustum* pFVar24;
        Frustum* pFVar25;
        SceneViewData* this_04;
        vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>* this_05;
        ulong uVar26;
        char* pcVar27;
        RenderPass* pRVar28;
        GraphNode* pGVar29;
        CoordMapSquare* pCVar30;
        vector* this_06;
        undefined4 in_register_00000014;
        PointLightSM* pPVar31;
        type* ptVar32;
        RT7Core* this_07;
        RenderContext* this_08;
        PointLightShadowRenderer* pPVar33;
        float fVar34;
        float in_XMM1_Da;
        float in_XMM1_Db;
        Camera local_14f0;
        PointLightSM* local_14a0;
        PointLightShadows* local_1498;
        CoordMapSquare local_1490;
        int iStack_1484;
        undefined8 local_1480;
        vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL> local_1478[24];
        shared_ptr local_1460;
        undefined1 local_1450[40];
        PointLightSM* local_1428;
        EffectManager* local_1420;
        SceneViewData* local_1418;
        PointLightShadowRenderer* local_1410;
        RT7Core* local_1408;
        PointLightSM* local_1400;
        undefined** local_13f8[4];
        undefined1 local_13d8[12];
        float fStack_13cc;
        Sphere local_1378[33];
        undefined1 local_10d8[8];
        ColourStorage8888<math::ARGB8StorageLayout> local_10d0[4];
        ColourStorage8888<math::ARGB8StorageLayout> local_10cc[4];
        array<graphics::SceneViewData, 6ul> local_10c8[4];
        ColourStorage8888<math::ARGB8StorageLayout> local_10c4[4028];
        array<eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>,
              6ul>
            local_108[192];
        array<bool, 6ul> local_48[16];
        long local_38;

        local_1450._32_4_ = param_1;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1450._24_8_ = param_5;
        local_1418 = param_4;
        cVar2 = param_3->IsEnabled(35, CONCAT44(in_register_00000014, param_2));
        uVar14._4_4_ = local_1450._4_4_;
        uVar14._0_1_ = local_1450[0];
        uVar14._1_1_ = local_1450[1];
        uVar14._2_1_ = local_1450[2];
        uVar14._3_1_ = local_1450[3];
        if (cVar2 == '\0') {
            RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData_const&,
                                    graphics::GraphRoot*)::clearAtlas = '\0';
        } else {
            local_1420 = param_3;
            local_1498 =
                (PointLightShadows*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(param_3);
            pRVar8 = (RT7Core*)local_1498->GetPointLightSMManager();
            local_1410 = this;
            local_1408 = pRVar8;
            if ((graphics::PointLightSMManager::m_ClearShadowMapDepthAtlas != '\0') ||
                (RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData_const&,
                                         graphics::GraphRoot*)::clearAtlas == '\0')) {
                this_07 = pRVar8;
                pRVar8->ResetActivePointLightSMPasses();
                this_02 = (RenderContext*)this_07->GetRenderContext();
                this_03 = (unique_ptr*)pRVar8->GetPixelBuffer();
                bVar3 = std::unique_ptr::operator_cast_to_bool(this_03);
                pRVar8 = local_1408;
                if (!bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pointLightSMManager.GetShadowCubeMapAtlasPacker()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/PointLightShadowRenderer.cpp",
                              44, (char*)0);
                }
                puVar9 = (unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                     std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)
                             local_1408->GetPixelBuffer();
                pMVar10 =
                    (Material*)
                        std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>::operator->(puVar9);
                iVar5 = pMVar10->GetNormalEmissiveMapID();
                puVar9 =
                    (unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)pRVar8->GetPixelBuffer();
                pMVar10 =
                    (Material*)
                        std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>::operator->(puVar9);
                iVar6 = pMVar10->GetNormalEmissiveMapID();
                in_XMM1_Da = 1.0;
                in_XMM1_Db = 0.0;
                new (local_10d8) render::Viewport(0, 0, iVar5, iVar6, 0.0, 1.0);
                this_02->SetViewports(local_10d8, 1);
                this_08 = this_02;
                this_02->SetScissorRectangle(false, local_10d8);
                lVar11 = this_08->Instance();
                this_02->SetDepthStencilState((DepthStencilState*)(lVar11 + 720));
                pvVar12 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pRVar8->GetCursorMutex();
                pRVar13 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar12);
                this_02->ClearDepthStencilTarget(pRVar13, 1.0, 0, 2);
                RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData_const&,
                                        graphics::GraphRoot*)::clearAtlas = '\x01';
                graphics::PointLightSMManager::m_ClearShadowMapDepthAtlas = '\0';
            }
            pPVar33 = local_1410;
            uVar14 = local_1410->field_32->HeapBeginPtr();
            uVar15 = pPVar33->field_32->end();
            eastl::sort<VisibleShadowCastingLightInfo*,
                        unsigned int->RenderPointLightShadows(
                            int, graphics::EffectManager&, graphics::SceneViewData_const&, graphics::GraphRoot*)::__9>(
                uVar14, uVar15);
            pPVar33->field_16->field_8 = (GraphNode*)local_1418;
            eastl::vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL>::vector();
            uVar16 = pPVar33->field_32->size();
            eastl::vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL>::reserve(local_1478,
                                                                                                        uVar16);
            bVar4 = pPVar33->field_32->empty();
            local_1420->EnableEffect(36, bVar4 ^ 1);
            this_00 = (Layout*)pPVar33->field_32;
            pPVar17 = (PointLightSM*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            local_14a0 = (PointLightSM*)this_00->end();
            if (pPVar17 != local_14a0) {
                local_1450._16_8_ = 0;
                do {
                    local_1428 = pPVar17;
                    weak_ptr<oldscape::rs2lib::IfType>::lock();
                    bVar3 = shared_ptr::operator_cast_to_bool(&local_1460);
                    if (bVar3) {
                        pLVar18 =
                            (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)&local_1460);
                        pPVar19 = (PointLightSM*)pLVar18->GetPointLightSM();
                        if (pPVar19 == (PointLightSM*)0) {
                            pPVar19 = (PointLightSM*)local_1408->AllocPointLightSM();
                            pLVar18 = (LightSource*)shared_ptr<LightSource>::operator->(
                                (shared_ptr<LightSource>*)&local_1460);
                            pPVar17 = pPVar19;
                            pLVar18->SetPointLightSM(pPVar19);
                        }
                        local_1400 = pPVar19;
                        if (pPVar19 != (PointLightSM*)0) {
                            new (local_10d8) PointLightSMJobData();
                            pPVar19 = local_1400;
                            local_10d8 = (undefined1[8])local_1400;
                            pLVar18 = (LightSource*)shared_ptr<LightSource>::operator->(
                                (shared_ptr<LightSource>*)&local_1460);
                            uVar14 = pLVar18->GetWorldSphere();
                            local_1450._8_4_ = in_XMM1_Da;
                            local_1450._12_4_ = in_XMM1_Db;
                            local_1450._0_8_ = uVar14;
                            if (graphics::PointLightSMManager::m_showShadowCastingLights != '\0') {
                                plVar20 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar20 != (long*)0) {
                                    pvVar21 = local_1450->SSOBeginPtr(pPVar17);
                                    fVar34 = (float)local_1450->GetOutlineRadiusAdjustment();
                                    math::Sphere::Sphere(local_1378, (Vector3T*)pvVar21, fVar34);
                                    pLVar18 = (LightSource*)shared_ptr<LightSource>::operator->(
                                        (shared_ptr<LightSource>*)&local_1460);
                                    pPVar17 = (PointLightSM*)pLVar18->GetPointLightSM();
                                    iVar5 = pPVar17->GetLODLevel();
                                    uVar14 = graphics::GetShadowMapLodColour(iVar5);
                                    local_13d8._8_4_ = in_XMM1_Da;
                                    fStack_13cc = in_XMM1_Db;
                                    local_13d8._0_8_ = uVar14;
                                    new (&local_1490) math::ColourStorage8888<math::ARGB8StorageLayout>(local_13d8);
                                    iVar5 = local_1490.GetX();
                                    new (&local_14f0) oldscape::sidebars::SideBarData(iVar5, 2);
                                    pPVar17 = (PointLightSM*)local_1378;
                                    (**(code**)(*plVar20 + 32))(plVar20, (PointLightSM*)local_1378, &local_14f0);
                                    pPVar33 = local_1410;
                                    pPVar19 = local_1400;
                                }
                            }
                            pPVar31 = pPVar17;
                            if (graphics::PointLightSMManager::m_showShadowCastingLightDst != '\0') {
                                plVar20 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                pPVar31 = pPVar17;
                                if (plVar20 != (long*)0) {
                                    pPVar31 = (PointLightSM*)pPVar33->field_40;
                                    pvVar21 = local_1450->SSOBeginPtr(pPVar17);
                                    new (local_1378) oldscape::sidebars::SideBarData(-1, 2);
                                    (**(code**)(*plVar20 + 24))(plVar20, pPVar31, pvVar21);
                                    pPVar19 = local_1400;
                                }
                            }
                            pVVar22 = (ViewTransforms*)local_1418->SSOBeginPtr(pPVar31);
                            pvVar21 = local_1408->SSOBeginPtr(pPVar31);
                            iVar5 = pPVar19->ComputeLinearLightLODLevel(local_1450, pVVar22, *(float*)(pvVar21 + 28));
                            if (iVar5 == -1) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("lodLevel != -1",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/PointLightShadowRenderer.cpp",
                                          113, (char*)0);
                            }
                            pPVar19->SetLODLevel(iVar5);
                            uVar16 = 0;
                            do {
                                uVar7 = render::GetCubeMapFace((int)uVar16);
                                local_1490.GetShadowCubeMapFaceViewport(local_1400, uVar7);
                                ptVar32 = (type*)0;
                                new (&local_14f0) jag::Camera();
                                fVar34 = (float)math::Deg2Rad(90.0);
                                local_14f0.SetVerticalFov(fVar34);
                                local_14f0.SetAspect((float)((int)local_1490._8_4_ / iStack_1484));
                                local_14f0.SetNearClip(0.1);
                                fVar34 = (float)local_1450->GetOutlineRadiusAdjustment();
                                local_14f0.SetFarClip(fVar34);
                                pvVar21 = local_1450->SSOBeginPtr(ptVar32);
                                local_14f0.SetPos(pvVar21);
                                in_XMM1_Da = -1.0;
                                in_XMM1_Db = 0.0;
                                new (local_13d8) math::QuaternionT<float>(0.0, -1.0, 0.0, 0.0);
                                local_1378->CUBEMAP_FACE_CAMERA_ROTATIONS(local_13d8);
                                pQVar23 = (QuaternionT*)std::array<math::QuaternionT<float>, 6ul>::operator[](
                                    (array<math::QuaternionT<float>, 6ul>*)local_1378, uVar16);
                                local_14f0.SetRot(pQVar23);
                                new (local_1378) graphics::SceneViewData();
                                local_1378->SetTransforms(&local_14f0);
                                local_13f8[2] = (undefined**)local_1480;
                                local_13f8[0] = (undefined**)local_1490._0_8_;
                                new ((local_14f0.m_pos + 12)) eastl::allocator("EASTL fixed_vector");
                                eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::fixed_vector(
                                    (QuaternionT<float>*)local_13d8, local_13f8, 1);
                                local_1378->SetRenderTargetViewports(local_13d8);
                                local_13d8->~fixed_vector();
                                pvVar12 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                              local_1408->GetCursorMutex();
                                local_1378[18]._8_8_ =
                                    eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                        pvVar12);
                                pFVar24 = (Frustum*)local_1418->GetTranslation();
                                pFVar25 = (Frustum*)local_1378->GetTranslation();
                                cVar2 = pFVar24->TestIntersection(pFVar25);
                                uVar14 = std::array<bool, 6ul>::operator[](local_48, uVar16);
                                *(bool*)uVar14 = cVar2 != '\0';
                                if (cVar2 != '\0') {
                                    this_04 = (SceneViewData*)std::array<graphics::SceneViewData, 6ul>::operator[](
                                        local_10c8, uVar16);
                                    graphics::SceneViewData::operator=(this_04, (SceneViewData*)local_1378);
                                    pPVar1 = local_1410->field_16;
                                    pPVar1->field_0 = (Layout*)local_1378;
                                    math::PlaneT<float>::operator=((PlaneT<float>*)pPVar1->field_16,
                                                                   (PlaneT*)local_1450);
                                    if ((GraphRoot*)local_1450._24_8_ != (GraphRoot*)0) {
                                        this_05 =
                                            (vector<
                                                std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>,
                                                eastl::allocator>*)
                                                std::array<eastl::vector<std::pair<graphics::GraphEntity*,
                                                                                   graphics::GraphEntityTransformData>,
                                                                         eastl::allocator>,
                                                           6ul>::operator[](local_108, uVar16);
                                        eastl::vector<
                                            std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>,
                                            eastl::allocator>::reserve(this_05, 768);
                                        pFVar24 = (Frustum*)local_1378->GetTranslation();
                                        local_1450._24_8_->VisibilityTest(this_05, local_1450._32_4_, pFVar24, 6, 6,
                                                                          local_1410->field_24, (AABB*)0, (Frustum*)0);
                                        uVar26 = eastl::vector<
                                            std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>,
                                            eastl::allocator>::size(this_05);
                                        if (768 < uVar26) {
                                            uVar14 = logger::default_logger();
                                            logger::Logger::Log(
                                                uVar14, 0, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/scene/PointLightShadowRenderer.cpp",
                                                164, "POINT_LIGHT_FACE_ENTITY_COUNT initial capacity exceeded");
                                        }
                                    }
                                }
                                local_1378->~SceneViewData();
                                local_14f0.~Camera();
                                uVar16 = uVar16 + 1;
                            } while (uVar16 != 6);
                            eastl::vector<PointLightShadowRenderer::PointLightSMJobData,
                                          BucketAllocatorEASTL>::push_back(local_1478,
                                                                           (PointLightSMJobData*)local_10d8);
                            if (graphics::PointLightSMManager::m_cullOccludedShadowCasters != '\0') {
                                lVar11 = eastl::vector<PointLightShadowRenderer::PointLightSMJobData,
                                                       BucketAllocatorEASTL>::operator[](local_1478, local_1450._16_8_);
                                uVar16 = 0;
                                do {
                                    pcVar27 = (char*)std::array<bool, 6ul>::operator[](
                                        (array<bool, 6ul>*)(lVar11 + 4240), uVar16);
                                    if (*pcVar27 != '\0') {
                                        pvVar21 = (vector*)
                                            std::array<eastl::vector<std::pair<graphics::GraphEntity*,
                                                                               graphics::GraphEntityTransformData>,
                                                                     eastl::allocator>,
                                                       6ul>::
                                            operator[](
                                                (array<eastl::vector<std::pair<graphics::GraphEntity*,
                                                                               graphics::GraphEntityTransformData>,
                                                                     eastl::allocator>,
                                                       6ul>*)(lVar11 + 4048),
                                                uVar16);
                                        CullOccludedShadowCasters(pvVar21);
                                    }
                                    uVar16 = uVar16 + 1;
                                } while (uVar16 != 6);
                            }
                            local_1450._16_8_ = local_1450._16_8_ + 1;
                            local_10d8->~PointLightSMJobData();
                            pPVar33 = local_1410;
                        }
                    }
                    local_1460.~shared_ptr();
                    pPVar17 = (PointLightSM*)&local_1428->field_24;
                } while (pPVar17 != local_14a0);
            }
            lVar11 =
                eastl::vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL>::size(local_1478);
            if (lVar11 != 0) {
                pPVar17 = (PointLightSM*)0;
                do {
                    local_1408 = (RT7Core*)
                        eastl::vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL>::operator[](
                            local_1478, (ulong)pPVar17);
                    local_1418 = (SceneViewData*)&local_1408->field_16;
                    local_1450._32_8_ = &local_1408->field_4048;
                    uVar16 = 0;
                    local_1428 = pPVar17;
                    do {
                        lVar11 = eastl::vector<PointLightShadowRenderer::PointLightSMJobData,
                                               BucketAllocatorEASTL>::operator[](local_1478, (ulong)pPVar17);
                        pcVar27 = (char*)std::array<bool, 6ul>::operator[]((array<bool, 6ul>*)(lVar11 + 4240), uVar16);
                        if (*pcVar27 != '\0') {
                            local_1400 = (PointLightSM*)std::array<graphics::SceneViewData, 6ul>::operator[](
                                (array<graphics::SceneViewData, 6ul>*)local_1418, uVar16);
                            pPVar17 = (PointLightSM*)local_1408->field_0;
                            uVar7 = render::GetCubeMapFace((int)uVar16);
                            pRVar28 = (RenderPass*)pPVar17->GetShadowCubeMapFacePass(uVar7);
                            local_1400->RenderPassPushBack(pRVar28);
                            this_01 = local_1410->field_8;
                            pvVar21 = (vector*)std::array<
                                eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>,
                                              eastl::allocator>,
                                6ul>::operator[]((array<eastl::vector<std::pair<graphics::GraphEntity*,
                                                                                graphics::GraphEntityTransformData>,
                                                                      eastl::allocator>,
                                                        6ul>*)local_1450._32_8_,
                                                 uVar16);
                            if ((GraphRoot*)local_1450._24_8_ == (GraphRoot*)0) {
                                pGVar29 = (GraphNode*)0;
                            } else {
                                pGVar29 = (GraphNode*)local_1450._24_8_->GetRoot();
                            }
                            local_10d8 = (undefined1[8])((ulong)local_10d8 & 18446744069414584320);
                            new (local_10d8) callstack::Callstack();
                            this_01->RenderView(pvVar21, local_1400, pGVar29, local_1420, true, local_10d8);
                            pPVar17 = local_1428;
                            if (graphics::PointLightSMManager::m_showPointLightFaceCameraFrustums != '\0') {
                                new (local_10d8) math::ColourStorage8888<math::ARGB8StorageLayout>(1.0, 1.0, 0.0, 0.0);
                                new ((local_10d8 + 4))
                                    math::ColourStorage8888<math::ARGB8StorageLayout>(1.0, 0.0, 1.0, 0.0);
                                math::ColourStorage8888<math::ARGB8StorageLayout>::ColourStorage8888(local_10d0, 1.0,
                                                                                                     0.0, 0.0, 1.0);
                                math::ColourStorage8888<math::ARGB8StorageLayout>::ColourStorage8888(local_10cc, 1.0,
                                                                                                     1.0, 1.0, 0.0);
                                new (local_10c8) math::ColourStorage8888<math::ARGB8StorageLayout>(1.0, 0.0, 1.0, 1.0);
                                math::ColourStorage8888<math::ARGB8StorageLayout>::ColourStorage8888(local_10c4, 1.0,
                                                                                                     1.0, 0.0, 1.0);
                                plVar20 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar20 != (long*)0) {
                                    pvVar21 = (vector*)local_1400->GetTranslation();
                                    pCVar30 = (CoordMapSquare*)
                                        std::array<math::ColourStorage8888<math::ARGB8StorageLayout>, 6ul>::operator[](
                                            (array<math::ColourStorage8888<math::ARGB8StorageLayout>, 6ul>*)local_10d8,
                                            uVar16);
                                    iVar5 = pCVar30->GetX();
                                    new (local_1378) oldscape::sidebars::SideBarData(iVar5, 3);
                                    (**(code**)(*plVar20 + 96))(plVar20, pvVar21, PTR_IDENTITY_100ee6730, local_1378);
                                }
                                plVar20 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                if (plVar20 != (long*)0) {
                                    this_06 = local_1400->SSOBeginPtr(pvVar21);
                                    pvVar21 = this_06->SSOBeginPtr(pvVar21);
                                    math::Sphere::Sphere(local_1378, (Vector3T*)pvVar21, 50.0);
                                    pCVar30 = (CoordMapSquare*)
                                        std::array<math::ColourStorage8888<math::ARGB8StorageLayout>, 6ul>::operator[](
                                            (array<math::ColourStorage8888<math::ARGB8StorageLayout>, 6ul>*)local_10d8,
                                            uVar16);
                                    iVar5 = pCVar30->GetX();
                                    new (local_13d8) oldscape::sidebars::SideBarData(iVar5, 3);
                                    (**(code**)(*plVar20 + 32))(plVar20, local_1378, (SideBarData*)local_13d8);
                                }
                            }
                            local_1400->RenderPassPopBack();
                        }
                        uVar16 = uVar16 + 1;
                    } while (uVar16 != 6);
                    pPVar17 = (PointLightSM*)((long)&pPVar17->field_0 + 1);
                    pPVar19 = (PointLightSM*)
                        eastl::vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL>::size(
                            local_1478);
                } while (pPVar17 < pPVar19);
            }
            local_1420->EnableEffect(36, 0);
            local_1498->Update();
            eastl::vector<PointLightShadowRenderer::PointLightSMJobData, BucketAllocatorEASTL>::~vector(local_1478);
            uVar14 = local_1450._0_8_;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            local_1450._0_8_ = uVar14;
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10047e080, 128 bytes, placed by class name
    // PointLightShadowRenderer::CullOccludedShadowCasters(eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>, eastl::allocator>&)
    /* PointLightShadowRenderer::CullOccludedShadowCasters(eastl::vector<std::pair<graphics::GraphEntity*,
   graphics::GraphEntityTransformData>, eastl::allocator>&) */

    void PointLightShadowRenderer::CullOccludedShadowCasters(vector* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        pair* ppVar3;
        pair* ppVar4;

        if (graphics::PointLightSMManager::m_cullOccludedShadowCasters == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("graphics::PointLightSMManager::m_cullOccludedShadowCasters",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "PointLightShadowRenderer.cpp",
                      263, (char*)0);
        }
        uVar1 = param_1->HeapBeginPtr();
        uVar2 = param_1->end();
        ppVar3 = std::remove_if<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>*,
                                PointLightShadowRenderer::CullOccludedShadowCasters(
                                    eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>,
                                                  eastl::allocator>&)::__10>(uVar1, uVar2, param_1);
        ppVar4 = (pair*)param_1->end();
        param_1->erase(ppVar3, ppVar4);
    }

    // 0x10048bfb0, 32 bytes, placed by class name
    // PointLightShadowRenderer::RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&, graphics::GraphRoot*)::$_9::operator()(VisibleShadowCastingLightInfo const&, VisibleShadowCastingLightInfo const&) const
    /* PointLightShadowRenderer::RenderPointLightShadows(unsigned int, int,
   graphics::EffectManager&, graphics::SceneViewData const&,
   graphics::GraphRoot*)::$_9::TEMPNAMEPLACEHOLDERVALUE(VisibleShadowCastingLightInfo
   const&, VisibleShadowCastingLightInfo const&) const */

    undefined8 PointLightShadowRenderer::RenderPointLightShadows(
        unsigned int, int, graphics::EffectManager&, graphics::SceneViewData_const&,
        graphics::GraphRoot*)::$_9::operator()(VisibleShadowCastingLightInfo* param_1,
                                               VisibleShadowCastingLightInfo* param_2) {
        return CONCAT71((int7)(param_1->field_16 >> 8), param_2->field_16 < param_1->field_16);
    }

} // namespace jag::game
