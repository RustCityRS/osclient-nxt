// libs/game/runetek5/config/iftype/components/ObjTypeHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ObjTypeHelpers.h"

namespace jag::game {
    // 0x100f3c9f8, set at startup by ___cxx_global_var_init.16
    math::ColourHSL ObjSpriteBuilder::m_ambientColour = ColourHSL(1.0, 1.0, 1.0);

    // 0x100f3ca10, set at startup by ___cxx_global_var_init.17
    math::ColourHSL ObjSpriteBuilder::m_sunlightColour = ColourHSL(1.25, 1.25, 1.25);

    // 0x100f3ca28
    float ObjSpriteBuilder::m_lightDirection[4] = {0, 0, 0, 0};

    // 0x100f3ca40, set at startup by ___cxx_global_var_init.19
    math::ColourHSL ObjSpriteBuilder::m_cameraOffset = ColourHSL(-6.0, 0.0, 0.0);

    // 0x1005382e0
    unsigned long ObjSpriteBuilder::GetObjSpriteCacheKey(int arg1, bool arg2, bool arg3, unsigned int arg4,
                                                         unsigned int arg5) {
        uint64_t in_register_00000011;
        uint64_t in_register_00000031;

        return (unsigned long)arg5 << 22 | (unsigned long)arg4 << 18 |
               ((((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3) & 4294967295) << 21 |
               ((((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2) & 4294967295) << 20 | (long)arg1 |
               (unsigned long)(arg1 != -1) << 17;
    }

    // 0x100538320
    uint8_t* ObjSpriteBuilder::BuildObjectSprite(ui::SpriteData& spriteData, int arg2, unsigned long long arg3,
                                                 graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                                 ConfigProvider* configProvider, const PlayerModel* playerModel,
                                                 int arg8, int arg9, bool& arg10) {
        PlayerModel* pPVar1;
        bool bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        char cVar6;
        int iVar9;
        long lVar13;
        uint8_t* puVar14;
        shared_ptr<graphics::Model>* psVar15;
        Model* pMVar16;
        uint8_t* puVar17;
        shared_ptr* psVar18;
        int* piVar19;
        RenderTargets* pRVar20;
        RenderTargets* pRVar21;
        Texture* pTVar22;
        SunlightDirectLighting* sunlightDirectLighting;
        uint8_t* puVar23;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        Layout* this_02;
        OutputMergerState* this_03;
        PostProcessManager* this_04;
        RenderToTextureHelper* this_05;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_06;
        uint64_t* puVar24;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_07;
        shared_ptr* psVar25;
        long lVar26;
        MapArea* this_09;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_10;
        uint8_t** ppuVar27;
        PlayerModel* pPVar28;
        SpriteData* pSVar29;
        RenderContext* pRVar30;
        ObjSpriteBuilder* pOVar31;
        DrawCallState* pDVar32;
        RT7Core* pRVar33;
        AssetBuilder* pAVar34;
        RenderContext* this_11;
        bool arg2_00;
        SunlightEffectSaveRestore local_28d0;
        ImVec4 local_27d8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_27c0;
        uint8_t local_27b0[48];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_2770;
        EffectManager* local_2760;
        int local_2758;
        int local_2754;
        int local_2750;
        int local_274c;
        int local_2748;
        int local_2744;
        ObjType* local_2740;
        long local_2728;
        unsigned int local_2714;
        unsigned int local_2704;
        uint32_t local_26e4;
        shared_ptr* local_26d8;
        ObjSpriteBuilder local_26d0;
        fixed_map<graphics::EffectType, bool, 121ul> local_1380;

        arg10 = false;
        ObjSpriteBuilder* local_2720 = this;
        ObjType* local_2710 = (ObjType*)arg3;
        AssetBuilder* local_26f8 = assetBuilder;
        auto local_2730 = GetRenderContext();
        SpriteAtlasManager* local_2738 = rt7Core.GetTextureManager()->GetSpriteAtlasManager();
        auto pGVar10 = rt7Core.GetGUIManager();
        GUIProjectionSaveRestore local_2808(*pGVar10);
        char cVar2 = spriteData.GetUsePlayerModelRecolours();
        if (!cVar2) {
            playerModel = nullptr;
        }
        PlayerModel* local_26f0 = playerModel;
        unsigned int uVar7 = spriteData.GetSpriteOutline();
        unsigned int uVar8 = spriteData.GetZ();
        auto psVar11 = configProvider->GetConfig<ObjType>(arg2, nullptr);
        auto pOVar12 = psVar11->end();
        if (pOVar12 == nullptr) {
            ppuVar27 = &DataStatus::MISSING;
        } else {
            local_2740 = pOVar12->GetStackSizeAlt((long long)local_2710);
            local_2714 = uVar8;
            iVar9 = local_2740->GetStatus();
            pSVar29 = spriteData;
            bVar3 = (bool)spriteData.GetObjSpriteIsHighRes();
            arg2_00 = local_26f0 != nullptr;
            uVar8 = pSVar29->GetZ();
            local_2704 = uVar7 & 255;
            lVar13 = GetObjSpriteCacheKey(iVar9, arg2_00, bVar3, local_2704, uVar8);
            local_2728 = lVar13;
            if (lVar13 == 0) {
                pRVar33 = rt7Core;
                pOVar31 = local_2720;
                pOVar12 = local_2740;
            } else {
                if (lVar13 == -1) {
                    LogAssert("key != -1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/iftype/components/ObjTypeHelpers.cpp",
                              235, nullptr);
                }
                cVar2 = spriteData.GetObjSpriteIsHighRes();
                if (!cVar2) {
                    local_27c0 = shared_ptr();
                    local_26d0 = local_2738->GetSpriteReference(lVar13, local_27c0, 2);
                    pRVar33 = rt7Core;
                    pOVar31 = local_2720;
                    pOVar12 = local_2740;
                } else {
                    local_26d0 = shared_ptr();
                    pOVar12 = local_2740;
                    pOVar31 = local_2720;
                    pRVar33 = rt7Core;
                }
                cVar2 = shared_ptr::operator_cast_to_bool(&local_26d0);
                if ((!cVar2) && (cVar2 = spriteData.GetObjSpriteIsHighRes(), !cVar2)) {
                    cVar2 = '\x01';
                } else {
                    lVar13 = spriteData.size();
                    pSVar29 = spriteData;
                    if (lVar13 != local_2728) {
                        arg10 = true;
                    }
                    spriteData.SetSpriteAtlasReference(local_2728, local_26d0);
                    cVar2 = pSVar29->GetObjSpriteIsHighRes();
                    local_26d8 = (shared_ptr*)DataStatus::READY;
                }
                if (!cVar2)
                    goto LAB_10053861e;
            }
            local_2760 = pRVar33->GetEffectManager();
            puVar14 = (uint8_t*)pOVar12->GetModel(pRVar33, *local_26f8, *pOVar31, local_26f0);
            ppuVar27 = &DataStatus::READY;
            if (puVar14 != DataStatus::READY) {
                local_26d8 = (shared_ptr*)puVar14;
                goto LAB_10053861e;
            }
            cVar2 = pOVar31->IsTaskDone();
            if (!cVar2) {
                bVar4 = 0;
            } else {
                psVar15 = (shared_ptr<graphics::Model>*)pOVar31->SSOBeginPtr();
                pMVar16 = (Model*)(*psVar15).operator->();
                bVar4 = pMVar16->IsReadyToRender();
            }
            iVar9 = pOVar12->GetCertTemplate();
            if (iVar9 == -1) {
                iVar9 = pOVar12->GetShardTemplate();
                if (iVar9 != -1) {
                    iVar9 = pOVar12->GetShardLink();
                    goto LAB_1005386b3;
                }
                iVar9 = pOVar12->GetLentTemplate();
                if (iVar9 == -1) {
                    iVar9 = pOVar12->GetBoughtTemplate();
                    local_26e4 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)ppuVar27 >> 8)) << 8) | (uint8_t)1);
                    if (iVar9 == -1) {
                        iVar9 = -1;
                    } else {
                        iVar9 = pOVar12->GetBoughtLink();
                    }
                } else {
                    iVar9 = pOVar12->GetLentLink();
                    local_26e4 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)ppuVar27 >> 8)) << 8) | (uint8_t)1);
                }
            } else {
                iVar9 = pOVar12->GetCertLink();
            LAB_1005386b3:
                local_26e4 = 0;
            }
            if (iVar9 == -1) {
                local_2710 = nullptr;
            } else {
                psVar11 = configProvider->GetConfig<ObjType>(iVar9, nullptr);
                pOVar12 = (ObjType*)psVar11->end();
                local_2710 = pOVar12->GetStackSizeAlt((long long)local_2710);
                puVar23 = &pOVar31->field_32;
                puVar17 = (uint8_t*)local_2710->GetModel(pRVar33, *local_26f8, *puVar23, local_26f0);
                puVar14 = DataStatus::READY;
                psVar18 = (shared_ptr*)puVar17;
                if (puVar17 == DataStatus::READY) {
                    cVar2 = puVar23->IsTaskDone();
                    if (!cVar2) {
                        bVar5 = 0;
                    } else {
                        psVar15 = (shared_ptr<graphics::Model>*)puVar23->SSOBeginPtr();
                        pMVar16 = (Model*)(*psVar15).operator->();
                        bVar5 = pMVar16->IsReadyToRender();
                    }
                    bVar4 = bVar4 & bVar5;
                    psVar18 = local_26d8;
                }
                local_26d8 = psVar18;
                if (puVar17 != puVar14)
                    goto LAB_10053861e;
            }
            if (bVar4 != 0) {
                pGVar10 = pRVar33->GetGUIManager();
                pGVar10->Render(nullptr);
                pSVar29 = spriteData;
                cVar2 = spriteData.GetObjSpriteIsHighRes();
                uVar7 = local_2714;
                iVar9 = 0;
                pAVar34 = (AssetBuilder*)32;
                if (cVar2) {
                    pAVar34 = (AssetBuilder*)(unsigned long)(unsigned int)arg9;
                }
                pPVar28 = (PlayerModel*)36;
                if (cVar2) {
                    pPVar28 = (PlayerModel*)(unsigned long)(unsigned int)arg8;
                    local_2704 = 0;
                }
                bVar4 = pSVar29->GetObjSpriteIsHighRes();
                local_2714 = uVar7 | 4278190081;
                uVar7 = (unsigned int)bVar4 * 2;
                bVar3 = true;
                local_26f8 = pAVar34;
                local_26f0 = pPVar28;
                do {
                    cVar2 = CreateObjectSpriteRT((ObjSpriteBuilder*)pSVar29, rt7Core, uVar7 + iVar9, (int)pPVar28 + 2,
                                                 (int)pAVar34 + 2);
                    pRVar33 = rt7Core;
                    pPVar1 = local_26f0;
                    if (!cVar2) {
                        local_26d8 = (shared_ptr*)DataStatus::NOTLOADED;
                        break;
                    }
                    bVar3 = iVar9 == 0;
                    iVar9 = 1;
                } while (bVar3);
                if (bVar3)
                    goto LAB_10053861e;
                psVar18 = rt7Core.GetObjectSpriteRT((unsigned long)uVar7);
                local_26d8 = pRVar33->GetObjectSpriteRT((unsigned long)(uVar7 | 1));
                piVar19 = (int*)pRVar33->GetPixelBuffer();
                local_2758 = *piVar19;
                local_2754 = piVar19[1];
                local_2750 = piVar19[2];
                local_274c = piVar19[3];
                pRVar33->SetClippingRectangle(1, 1, (int)pPVar1, (int)local_26f8, true);
                pGVar10 = pRVar33->GetGUIManager();
                iVar9 = pGVar10->GetStatus();
                pGVar10 = pRVar33->GetGUIManager();
                local_2748 = pGVar10->GetAliveCount();
                pGVar10 = pRVar33->GetGUIManager();
                pGVar10->SetProjection(2, 36, 32);
                this_11 = local_2730;
                lVar13 = pGVar10->Instance();
                pRVar30 = this_11;
                this_11->SetBlendState((lVar13 + 1524));
                lVar13 = pRVar30->Instance();
                this_11->SetDepthStencilState((lVar13 + 720));
                local_27d8 = ImVec4(0.0, 0.0, 0.0, 0.0);
                uVar7 = local_2714;
                pRVar20 = (RenderTargets*)psVar18->end();
                this_11->ClearRenderTargets(pRVar20, &local_27d8, 1);
                pRVar20 = (RenderTargets*)psVar18->end();
                pRVar21 = (RenderTargets*)(*psVar18).operator->();
                pTVar22 = (Texture*)pRVar21->GetDepthStencilTargetTexture();
                uVar8 = render::GetDepthTextureClearFlags(pTVar22);
                this_11->ClearDepthStencilTarget(pRVar20, 1.0, 0, uVar8);
                sunlightDirectLighting =
                    (SunlightDirectLighting*)local_2760->GetEffect<graphics::SunlightDirectLighting>(29);
                local_28d0 = graphics::SunlightEffectSaveRestore(*sunlightDirectLighting);
                sunlightDirectLighting->SetAmbientColour(*PTR_m_ambientColour_100ee6608, 0, 0);
                sunlightDirectLighting->SetColour(*PTR_m_sunlightColour_100ee6618, 0, 0);
                sunlightDirectLighting->SetDirection(*PTR_m_lightDirection_100ee6610, 0, 0);
                local_1380 = eastl::fixed_map<graphics::EffectType, bool, 121ul>();
                local_26d0[0]._0_1_ = 51;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 29;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 1;
                local_26d0[0]._0_1_ = 7;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 1;
                local_26d0[0]._0_1_ = 48;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 50;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 57;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 110;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 30;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 35;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 21;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 107;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 108;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 24;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 63;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 27;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 44;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 42;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 1;
                local_26d0[0]._0_1_ = 94;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 85;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 49;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 116;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 117;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                local_26d0[0]._0_1_ = 26;
                local_2744 = iVar9;
                puVar23 = &local_1380[local_26d0];
                *puVar23 = 0;
                pOVar31 = &local_26d0;
                new (pOVar31) graphics::EffectStateSaveRestore(*local_2760, local_1380);
                cVar2 = '\x01';
                if ((char)local_26e4 == '\x01' && local_2710 != nullptr) {
                    pOVar31 = (ObjSpriteBuilder*)&local_2720->field_32;
                    psVar15 = (shared_ptr<graphics::Model>*)pOVar31->SSOBeginPtr();
                    cVar2 = RenderObjectSpriteModel(pOVar31, rt7Core, local_2710, psVar15, (int)local_26f0,
                                                    (int)local_26f8, 1, local_2704, uVar7, false,
                                                    (shared_ptr<render::RenderTargets>*)psVar18, false);
                }
                cVar6 = '\0';
                if (cVar2) {
                    pOVar31 = local_2720;
                    psVar15 = (shared_ptr<graphics::Model>*)local_2720->SSOBeginPtr();
                    cVar6 = RenderObjectSpriteModel(pOVar31, rt7Core, local_2740, psVar15, (int)local_26f0,
                                                    (int)local_26f8, 1, local_2704, uVar7, false,
                                                    (shared_ptr<render::RenderTargets>*)psVar18, true);
                }
                if ((char)local_26e4 == '\0' && (cVar6 && local_2710 != nullptr)) {
                    lVar13 = pOVar31->Instance();
                    pRVar30 = this_11;
                    this_11->SetDepthStencilState((lVar13 + 720));
                    lVar13 = pRVar30->Instance();
                    this_11->SetBlendState((lVar13 + 1524));
                    pRVar20 = (RenderTargets*)local_26d8->end();
                    this_11->ClearRenderTargets(pRVar20, &local_27d8, 1);
                    psVar25 = local_26d8;
                    pRVar20 = (RenderTargets*)local_26d8->end();
                    pRVar21 = (RenderTargets*)(*psVar25).operator->();
                    pTVar22 = (Texture*)pRVar21->GetDepthStencilTargetTexture();
                    uVar7 = render::GetDepthTextureClearFlags(pTVar22);
                    this_11->ClearDepthStencilTarget(pRVar20, 1.0, 0, uVar7);
                    pOVar31 = (ObjSpriteBuilder*)&local_2720->field_32;
                    psVar15 = (shared_ptr<graphics::Model>*)pOVar31->SSOBeginPtr();
                    cVar6 =
                        RenderObjectSpriteModel(pOVar31, rt7Core, local_2710, psVar15, (int)local_26f0, (int)local_26f8,
                                                1, 1, 0, true, (shared_ptr<render::RenderTargets>*)local_26d8, true);
                    new (local_27b0) render::DrawCallState();
                    pDVar32 = (DrawCallState*)local_27b0;
                    this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  pDVar32->GetRenderPipelineState();
                    lVar13 = pDVar32->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(this_01,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar13 + 1676));
                    pDVar32 = (DrawCallState*)local_27b0;
                    this_02 = (Layout*)pDVar32->GetRenderPipelineState();
                    lVar13 = pDVar32->Instance();
                    this_02->SetHeapSize((lVar13 + 1080));
                    this_03 = local_27b0->GetOutputMergerState();
                    pRVar20 = (RenderTargets*)local_26d8->end();
                    this_03->SetRenderTargets(pRVar20);
                    this_04 = (PostProcessManager*)rt7Core.GetVertexDataBuffer();
                    this_05 = (RenderToTextureHelper*)this_04->GetRenderToTexture();
                    pRVar20 = (RenderTargets*)psVar18->end();
                    pRVar21 = (RenderTargets*)(*local_26d8).operator->();
                    this_06 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar21->GetColourTargetTextures();
                    puVar24 = (uint64_t*)(*this_06)[0];
                    this_05->RenderTextureToQuad(*local_2730, *local_27b0, pRVar20, *puVar24, nullptr, nullptr, -1);
                    this_11 = local_2730;
                }
                rt7Core.SetClippingRectangle(local_2758, local_2754, local_2750 - local_2758, local_274c - local_2754,
                                             true);
                pGVar10 = rt7Core.GetGUIManager();
                pGVar10->SetProjection(2, local_2744, local_2748);
                if (!cVar6) {
                    ppuVar27 = &DataStatus::NOTLOADED;
                LAB_100539091:
                    local_26d8 = (shared_ptr*)*ppuVar27;
                } else {
                    cVar2 = spriteData.GetObjSpriteIsHighRes();
                    if (cVar2) {
                        ppuVar27 = &DataStatus::READY;
                        goto LAB_100539091;
                    }
                    local_27b0->AddObjSpriteReference((long long)local_2738, (unsigned int)local_2728,
                                                      (unsigned int)local_26f0);
                    this_07 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_27b0)
                            .operator->();
                    psVar25 = (shared_ptr*)this_07->second();
                    cVar2 = shared_ptr::operator_cast_to_bool(psVar25);
                    lVar13 = local_2728;
                    if (!cVar2) {
                        LogAssert("atlas",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "config/iftype/components/ObjTypeHelpers.cpp",
                                  441, nullptr);
                    }
                    lVar26 = ((SpriteAtlasReference*)(*local_27b0).operator->())->GetRenderMapping();
                    pRVar20 = (RenderTargets*)psVar18->end();
                    this_11->SetRenderTargets(pRVar20);
                    this_09 = (MapArea*)(*psVar25).operator->();
                    this_10 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_09->GetOrigin();
                    pTVar22 = (Texture*)this_10->end();
                    uVar7 = ((lVar26 + 72))->GetX();
                    uVar8 = ((lVar26 + 72))->GetZ();
                    this_11->CopyColourTargetData(pTVar22, 0, 0, uVar7, uVar8, 0, 0, (unsigned int)local_26f0,
                                                  (unsigned int)local_26f8, 4294967295);
                    lVar26 = spriteData.size();
                    arg10 = (bool)(arg10 | lVar26 != lVar13);
                    local_2770 = shared_ptr();
                    *((local_27b0 + 48)) = local_2738->GetSpriteReference(lVar13, local_2770, 2);
                    spriteData.SetSpriteAtlasReference(lVar13, *((local_27b0 + 48)));
                    ((local_27b0 + 48))->~shared_ptr();
                    pGVar10 = rt7Core.GetGUIManager();
                    pGVar10->SetProjection(1, -1, -1);
                    ClearCache(local_2720);
                    local_26d8 = (shared_ptr*)DataStatus::READY;
                }
                goto LAB_10053861e;
            }
            ppuVar27 = &DataStatus::NOTLOADED;
        }
        local_26d8 = (shared_ptr*)*ppuVar27;
    LAB_10053861e:
        return (uint8_t*)local_26d8;
    }

    // 0x1005394b0
    void ObjSpriteBuilder::CreateObjectSpriteRT(graphics::RT7Core& rt7Core, int arg2, unsigned int arg3,
                                                unsigned int arg4) {
        unsigned int uVar1;
        TextureType textureType;
        RenderTargets* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar4;
        uint64_t* puVar5;
        unsigned int* puVar6;
        long lVar7;
        RenderTargetsManager* this_01;
        char* str;
        array<render::Texture::Desc, 2ul> local_120;
        uint8_t local_a0[88];
        shared_ptr<render::RenderTargets> local_48;

        unsigned int local_38 = arg3;
        unsigned int local_34 = arg4;
        local_38 = math::RoundUpToPowerOf2(arg3);
        local_34 = math::RoundUpToPowerOf2(local_34);
        shared_ptr* arg1 = (shared_ptr*)(long)arg2;
        auto this_00 = rt7Core.GetObjectSpriteRT((unsigned long)arg1);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            pRVar3 = (RenderTargets*)(*this_00).operator->();
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar3->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            puVar6 = (unsigned int*)(*puVar5)->second();
            if (local_38 <= *puVar6) {
                pRVar3 = (RenderTargets*)(*this_00).operator->();
                pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar3->GetColourTargetTextures();
                arg1 = nullptr;
                puVar5 = (uint64_t*)(*pvVar4)[0];
                lVar7 = (*puVar5)->second();
                if (local_34 <= *(unsigned int*)(lVar7 + 4))
                    goto LAB_1005395d1;
            }
            pRVar3 = (RenderTargets*)(*this_00).operator->();
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar3->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            puVar6 = (unsigned int*)(*puVar5)->second();
            puVar6 = std::max<unsigned int>(*puVar6, local_38);
            local_38 = *puVar6;
            pRVar3 = (RenderTargets*)(*this_00).operator->();
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar3->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            lVar7 = (*puVar5)->second();
            puVar6 = std::max<unsigned int>(*((lVar7 + 4)), local_34);
            local_34 = *puVar6;
            this_01 = (RenderTargetsManager*)rt7Core.GetRenderTargetsManager();
            arg1 = this_00;
            this_01->Unregister(*this_00);
        }
    LAB_1005395d1:
        if (!(shared_ptr::operator_cast_to_bool(this_00))) {
            local_120 = std::array<render::Texture::Desc, 2ul>();
            uVar1 = local_38;
            puVar6 = &local_120[(unsigned long)arg1];
            *puVar6 = uVar1;
            puVar6[1] = local_34;
            puVar6[6] = 0;
            *(uint8_t*)(puVar6 + 8) = 0;
            puVar6[3] = 7;
            new (local_a0) render::Texture::Desc();
            local_a0._0_4_ = local_38;
            local_a0._4_4_ = local_34;
            local_a0._12_4_ = render::GetFormatFromDepthStencilBits(16, 0, false);
            local_a0._24_4_ = 0;
            local_a0[32] = 0;
            new ((local_a0 + 64)) eastl::basic_string<char, BucketAllocatorEASTL>();
            ((local_a0 + 64))->sprintf("ObjectSprite%i", (unsigned long)(unsigned int)arg2);
            str = (char*)rt7Core.GetRenderTargetsManager();
            textureType = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_48.Register(str, textureType, *3553, (int)&local_120, DAT_00000001, (unsigned int)(Desc*)local_a0,
                              true);
            *this_00 = local_48;
            ((local_a0 + 64))->~basic_string();
        }
        shared_ptr::operator_cast_to_bool(this_00);
    }

    // 0x100539730
    uint32_t ObjSpriteBuilder::RenderObjectSpriteModel(graphics::RT7Core& rt7Core, const ObjType* objType,
                                                       const shared_ptr<graphics::Model>& model, int arg4, int arg5,
                                                       int arg6, unsigned int arg7, unsigned int arg8, bool arg9,
                                                       shared_ptr<render::RenderTargets>& renderTargets, bool arg11) {
        int arg3;
        Texture* texture1;
        PostProcessManager* this_03;
        Config* config;
        RenderTargets* pRVar15;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_04;
        uint64_t* puVar16;
        long lVar17;
        ViewTransforms* viewTransforms;
        float fVar18;
        uint8_t local_1ec8[32];
        uint8_t local_1e28[136];
        Transitionable<float> local_1da0;
        uint8_t local_1d4c;
        uint8_t local_1d48;
        uint8_t local_1c54;
        uint8_t local_1c20;
        uint8_t local_1c18;
        uint8_t local_1c10;
        unsigned int local_1c0c;
        uint32_t local_1c08;
        unsigned int local_1c04;
        uint16_t local_1c00;
        uint8_t local_1bb0[24];
        WorldmapAreaMetadata local_1b98;
        uint8_t local_2d8[672];

        RT7Core* local_1e40 = rt7Core;
        auto plVar4 = GraphicsApp::Instance();
        if ((**(void (**)(...))(*plVar4 + 224))(plVar4) != '\0') {
            LogAssert("!GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/components/ObjTypeHelpers.cpp",
                      530, nullptr);
        }
        if (!model != nullptr) {
            LogAssert("model != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "iftype/components/ObjTypeHelpers.cpp",
                      532, nullptr);
        }
        graphics::Model::DeferredRenderKeepAlive(model);
        float local_1e2c = (float)objType->GetZoom2D();
        if (arg9) {
            fVar18 = (float)(int)local_1e2c * 1.5;
        } else {
            if (arg7 < 2)
                goto LAB_100539813;
            fVar18 = (float)(int)local_1e2c * 1.08;
        }
        local_1e2c = (float)(int)fVar18;
    LAB_100539813:
        auto pNVar5 = model.operator->();
        pNVar5 = (NXTPixToolkit*)pNVar5->GetScreen();
        auto pVVar6 = objType->GetOffset2D();
        int* piVar7 = (int*)(*pVVar6)[1];
        float local_1e30 = (float)*piVar7;
        pVVar6 = (Vector3T<int>*)objType->GetOffset2D();
        piVar7 = (int*)(*pVVar6)[0];
        float local_1e4c = (float)*piVar7;
        auto pVVar8 = pNVar5->GetScreen();
        float* pfVar9 = (float*)(*pVVar8)[1];
        float arg2 = *pfVar9 * -0.5 - local_1e30;
        ColourHSL local_1e68(local_1e4c, arg2, local_1e30);
        auto pVVar10 = objType->GetLightProbe();
        short* psVar11 = (short*)(*pVVar10)[2];
        fVar18 = (float)math::conversion::OldJagexAngleToRadians((int)*psVar11);
        math::Matrix33RotationZ<float>(fVar18);
        uint8_t* vector3 = PTR_ZERO_100ee66e8;
        Matrix44T<float> local_1f08(*((local_1bb0 + 24)), *PTR_ZERO_100ee66e8);
        pVVar10 = (Vector3T<short>*)objType->GetLightProbe();
        psVar11 = (short*)(*pVVar10)[1];
        fVar18 = (float)math::conversion::OldJagexAngleToRadians((int)*psVar11);
        math::Matrix33RotationY<float>(fVar18);
        new ((local_1bb0 + 24)) math::Matrix44T<float>(*local_2d8, *vector3);
        local_1f08 *= ((local_1bb0 + 24));
        local_2d8._0_8_ = local_1e68 + *PTR_m_cameraOffset_100ee6600;
        local_2d8._8_4_ = arg2;
        new ((local_1bb0 + 24)) math::Matrix44T<float>(*PTR_IDENTITY_100ee6718, *local_2d8);
        local_1f08 *= ((local_1bb0 + 24));
        pVVar10 = (Vector3T<short>*)objType->GetLightProbe();
        psVar11 = (short*)(*pVVar10)[0];
        fVar18 = (float)math::conversion::OldJagexAngleToRadians((int)*psVar11);
        math::Matrix33RotationX<float>(-fVar18);
        new ((local_1bb0 + 24)) math::Matrix44T<float>(*local_2d8, *vector3);
        local_1f08 *= ((local_1bb0 + 24));
        local_1e2c = (float)(int)local_1e2c;
        Vector4T<float>* this_02 = &local_1f08[3];
        pfVar9 = (float*)(*this_02)[2];
        *pfVar9 = local_1e2c + *pfVar9;
        auto pMVar12 = model.operator->();
        pMVar12->SetWorldTransform(*PTR_IDENTITY_100ee6730);
        pMVar12 = (Model*)model.operator->();
        unsigned long long arg3_00 = FrameTime::GetCurrentTimeMS();
        RT7Core* this_00 = local_1e40;
        pMVar12->Update(*local_1e40, 0, arg3_00);
        pNVar5 = (NXTPixToolkit*)model.operator->();
        auto aabb = pNVar5->GetScreen();
        new (local_1ec8) math::AABB(*aabb);
        local_1ec8->Transform(local_1f08);
        pVVar8 = (Vector3T<float>*)local_1ec8->SSOBeginPtr();
        pfVar9 = (float*)(*pVVar8)[2];
        local_1e2c = (float)eastl::max_alt(*pfVar9 - 10.0, 0.1);
        pVVar8 = (Vector3T<float>*)local_1ec8->GetScreen();
        pfVar9 = (float*)(*pVVar8)[2];
        local_1e30 = *pfVar9 + 10.0;
        Matrix44T<float> local_1ea8;
        math::Matrix44JagexPerspective<float>(local_1ea8, 16.0, 16.0, 512.0, 512.0, local_1e2c, local_1e30, 36.0, 32.0);
        new (local_2d8) graphics::SceneViewData();
        new ((local_1bb0 + 24)) eastl::fixed_vector<render::Viewport, 2ul>();
        new (local_1e28) render::Viewport(arg6, arg6, arg4, arg5, 0.0, 1.0);
        ((local_1bb0 + 24))->push_back(*local_1e28);
        local_2d8->SetRenderTargetViewports(*((local_1bb0 + 24)));
        ((local_1bb0 + 24))->~fixed_vector();
        new ((local_1bb0 + 24)) ViewTransforms(local_1f08, local_1ea8);
        local_2d8->SetTransforms(*((local_1bb0 + 24)));
        new (local_1e28) ImVec4(0.0, 0.0, 0.0, 1.0);
        new ((local_1bb0 + 24)) render::RenderTargetData(nullptr, *local_1e28, 1, 1.0, 0);
        local_1b98[0]._48_4_ = 0;
        local_1b98[0]._0_8_ = renderTargets.end();
        local_2d8->SetRenderTargets(*((local_1bb0 + 24)));
        local_2d8->RenderPassPushBack((RenderPass*)this_00->GetForwardLightingPass());
        new (local_1bb0) graphics::DrawableQueue::RenderPassDrawableGroupsConfig(4, 16, 2);
        new (local_1e28) eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>(
            local_1bb0, DAT_00000001);
        new ((local_1bb0 + 24)) graphics::Renderer(this_00, *local_1e28, 16, 0);
        auto effectManager = this_00->GetEffectManager();
        auto pRVar13 = model.operator->();
        DrawableQueue* pDVar14 = (DrawableQueue*)((local_1bb0 + 24))->GetOrigin();
        pRVar13->GatherDrawableElements(*pDVar14, *this_00, *local_2d8, *effectManager);
        auto renderContext = pRVar13->GetRenderContext();
        local_1e28._0_4_ = 0;
        new (local_1e28) callstack::Callstack();
        ((local_1bb0 + 24))->RenderViewBegin(*renderContext, *local_2d8, *effectManager, *local_1e28);
        local_1e28._0_4_ = 0;
        new (local_1e28) callstack::Callstack();
        ((local_1bb0 + 24))->RenderViewRenderPasses(*local_2d8, *renderContext, false, *effectManager, *local_1e28);
        pDVar14 = (DrawableQueue*)((local_1bb0 + 24))->GetOrigin();
        pDVar14->ClearAllGroupsInAllPasses();
        if (arg11) {
            pRVar13 = (RT7Core*)this_00->GetPostProcessController();
            this_03 = (PostProcessManager*)this_00->GetVertexDataBuffer();
            config = (Config*)pRVar13->GetCurrentConfig();
            new (local_1e28) graphics::PostProcessController::Config(config);
            local_1bb0._0_4_ = 1.0;
            (*((local_1e28 + 72))) = *local_1bb0;
            local_1bb0._0_4_ = 1.5;
            local_1da0 = *local_1bb0;
            local_1c20 = 0;
            local_1c54 = 0;
            local_1d4c = 1;
            local_1d48 = 0;
            local_1c18 = 0;
            local_1c10 = arg7 != 0 || arg8 != 0;
            local_1c0c = arg7;
            local_1c08 = 1;
            local_1c04 = arg8;
            local_1c00 = 0;
            pRVar13->PushConfig(*local_1e28);
            pRVar15 = (RenderTargets*)renderTargets.operator->();
            this_04 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar15->GetColourTargetTextures();
            puVar16 = (uint64_t*)(*this_04)[0];
            texture1 = (Texture*)*puVar16;
            if (texture1 == nullptr) {
                LogAssert("renderTargetTexture != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "iftype/components/ObjTypeHelpers.cpp",
                          637, nullptr);
            }
            local_1e40 = pRVar13;
            pRVar15 = (RenderTargets*)renderTargets.end();
            piVar7 = (int*)texture1->second();
            arg3 = *piVar7;
            lVar17 = texture1->second();
            new (local_1bb0) render::Viewport(0, 0, arg3, *(int*)(lVar17 + 4), 0.0, 1.0);
            viewTransforms = (ViewTransforms*)local_2d8->SSOBeginPtr();
            this_03->RenderEffects(*renderContext, pRVar15, texture1, nullptr, *local_1bb0, *viewTransforms, 0.0, 2,
                                   false, nullptr);
            local_1e40->PopConfig();
        }
        ((local_1bb0 + 24))->RenderViewEnd(*renderContext);
        pMVar12 = (Model*)model.operator->();
        uint32_t uVar3 = pMVar12->ShadersReady();
        ((local_1bb0 + 24))->~Renderer();
        return uVar3;
    }

} // namespace jag::game
