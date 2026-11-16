// libs/graphics/runetek7/particles/ModularParticleSystemVisuals.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ModularParticleSystemVisuals.h"

namespace jag::graphics {
    // 0x10082abf0
    void ModularParticleSystemDrawable::UpdateMaterials(const MaterialManager& materialManager,
                                                        TextureAtlasManager& textureAtlasManager) {
        unsigned int uVar2;
        int iVar3;
        int iVar4;
        MSIType* pMVar6;
        Material** ppMVar7;
        Material** ppMVar8;
        ReturnValue this_04;
        TextureAtlasReference* this_06;
        unsigned short arg1;
        short sVar10;
        bool bVar11;
        vector<Material const*, BucketAllocatorEASTL> local_78[24];
        ReturnValue local_40;

        new (local_78) eastl::vector<Material const*, BucketAllocatorEASTL>();
        m_viewportMapID = -1;
        ModularParticleSystemDrawable* local_48 = this;
        auto pLVar5 = field_16->GetImmediateThreadPool();
        auto this_03 = pLVar5->HeapBeginPtr();
        auto local_60 = pLVar5->end();
        if (this_03 != local_60) {
            sVar10 = 0;
            do {
                pMVar6 = (MSIType*)this_03->HeapBeginPtr();
                uVar2 = pMVar6->GetSpriteID();
                ppMVar7 = (Material**)local_78->HeapBeginPtr();
                ppMVar8 = (Material**)local_78->end();
                ppMVar7 = eastl::find_if<Material const**,
                                         (MaterialManager const&)->UpdateMaterials(TextureAtlasManager&)::__9>(
                    ppMVar7, ppMVar8, (__9*)(unsigned long)uVar2);
                ppMVar8 = (Material**)local_78->end();
                if (ppMVar7 == ppMVar8) {
                    this_04 = (ReturnValue)materialManager.GetMaterial(uVar2);
                    if (this_04->ShowSkybox()) {
                        if (!(this_04->IsRT7())) {
                            bVar11 = 0 < sVar10;
                            sVar10 = -1;
                            if (bVar11) {
                                LogAssert("rt7flag <= 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ModularParticleSystemVisuals.cpp",
                                          258, "ParticleSystem cannot mix RT5 materials with RT7 materials");
                            }
                        } else {
                            bVar11 = sVar10 < 0;
                            sVar10 = 1;
                            if (bVar11) {
                                LogAssert("rt7flag >= 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ModularParticleSystemVisuals.cpp",
                                          253, "ParticleSystem cannot mix RT5 materials with RT7 materials");
                            }
                        }
                        iVar3 = this_04->GetSeqDelay();
                        if (iVar3 != -1) {
                            iVar3 = local_48->m_viewportMapID;
                            if ((iVar3 != -1) && (iVar4 = this_04->GetSeqDelay(), iVar3 != iVar4)) {
                                LogAssert("m_viewportMapID == -1 || m_viewportMapID == material.GetViewportMapID()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ModularParticleSystemVisuals.cpp",
                                          263, nullptr);
                            }
                            iVar3 = this_04->GetSeqDelay();
                            local_48->m_viewportMapID = iVar3;
                        }
                        local_40[0] = this_04;
                        local_78->push_back(local_40);
                    }
                }
                this_03 = this_03 + 320;
            } while (this_03 != local_60);
        }
        local_40.GetSharedAtlasRefFromMaterials(
            textureAtlasManager,
            *((vector<Material const*, BucketAllocatorEASTL>*)graphicutils::TextureAtlasUsage::USAGE_COMPRESSED));
        uint8_t* this_00 = &local_48->field_24;
        *this_00 = local_40;
        if (!(this_00->operator_cast_to_bool())) {
            local_40 = textureAtlasManager.GetDummySharedMaterialReference(
                (TextureAtlasUsage*)graphicutils::TextureAtlasUsage::USAGE_COMPRESSED);
            *this_00 = local_40;
            bVar11 = *this_00 != nullptr;
            if (!bVar11) {
                LogAssert("m_textureAtlasRef != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ModularParticleSystemVisuals.cpp",
                          278, nullptr);
            }
        }
        pLVar5 = (Layout*)local_48->field_16->GetImmediateThreadPool();
        auto this_05 = pLVar5->HeapBeginPtr();
        auto pMVar9 = pLVar5->end();
        for (; this_05 != pMVar9; this_05 = (ModularParticleEmitter*)(this_05[1].field_12 + 12)) {
            pMVar6 = (MSIType*)this_05->HeapBeginPtr();
            uVar2 = pMVar6->GetSpriteID();
            if (!(materialManager.IsValidMaterial(uVar2))) {
                arg1 = 0;
            } else {
                this_06 = (TextureAtlasReference*)(*this_00).operator->();
                ((TextureAtlas*)this_06->GetTextureAtlas())->GetMaterialSettingsSlotXY(local_40, uVar2);
                arg1 = local_40[0]._0_2_;
            }
            this_05->SetAtlasMaterialSettingsSlotXY(arg1);
        }
    }

    // 0x10082af30
    void ModularParticleSystemDrawable::GatherParticleDrawables(DrawableQueue& drawableQueue,
                                                                const SceneViewData& sceneViewData,
                                                                const EffectManager& effectManager,
                                                                const math::OBB& obb, float arg5) {
        unique_ptr<DrawableElement, DrawableElementDeleter>* puVar1;
        bool cVar2;
        RenderPassType renderPassType;
        unsigned int uVar4;
        long lVar5;
        CommandLine* pCVar6;
        DrawableSortKey DVar7;
        DrawableSortKey drawableSortKey;
        shared_ptr<ModularParticleSystemTemplate>* psVar8;
        ModularParticleSystemTemplate* pMVar9;
        unsigned long uVar10;
        unsigned long uVar11;
        ParticleSystem_DE* pPVar12;
        PlayerDataComparator<oldscape::social::FriendChatUser>* pPVar13;
        float fVar14;
        DrawableSortKey in_stack_ffffffffffffff98;
        uint8_t local_40[14];
        bool local_32;
        bool local_31;

        if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
            DVar7 = (DrawableSortKey)sceneViewData.field_520.HeapBeginPtr();
            drawableSortKey = (DrawableSortKey)sceneViewData.field_520.end();
            if (DVar7 != drawableSortKey) {
                do {
                    if (*(long*)DVar7 == 0) {
                        LogAssert("renderPass",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ModularParticleSystemVisuals.cpp",
                                  109, nullptr);
                    }
                    renderPassType = (*(CommandLine**)DVar7)->GetPos();
                    switch (renderPassType) {
                    case 0:
                        cVar2 = CastsShadow();
                        if (!cVar2)
                            goto switchD_10082b0b5_caseD_3;
                        psVar8 = (shared_ptr<ModularParticleSystemTemplate>*)field_16->SSOBeginPtr();
                        pMVar9 = (ModularParticleSystemTemplate*)(*psVar8).operator->();
                        cVar2 = pMVar9->HasAlphaParticles();
                        if ((!cVar2) || (cVar2 = effectManager.IsEnabled(37), !cVar2))
                            goto switchD_10082b0b5_caseD_3;
                        fVar14 = (float)(-(unsigned int)(0.0 < arg5) & (unsigned int)(arg5 + 0.5));
                        lVar5 = (long)fVar14;
                        new (local_40) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**,
                                                              BucketAllocatorEASTL>(
                            (PlayerDataComparator<
                                oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                                    (unsigned int)(long)(fVar14 -
                                                                                                         9.223372e+18) &
                                                                                        (unsigned int)(lVar5 >> 63)) *
                                                                                -16777216 +
                                                                            72057594021150720 &
                                                                        72057594021150720 |
                                                                    144115188075855872));
                        puVar1 =
                            (unique_ptr<DrawableElement, DrawableElementDeleter>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                                   (uint32_t)local_40._0_4_);
                        psVar8 = (shared_ptr<ModularParticleSystemTemplate>*)field_16->SSOBeginPtr();
                        pMVar9 = (ModularParticleSystemTemplate*)(*psVar8).operator->();
                        cVar2 = pMVar9->HasAlphaEarlyParticles();
                        if (cVar2) {
                            local_40._0_4_ = GetPos();
                            local_32 = false;
                            local_31 = true;
                            pPVar12 = DrawableElementPool<ParticleSystem_DE>::Create<
                                ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(
                                *this, obb, arg5, *local_40, local_32, local_31);
                            local_40->unique_ptr<true, void>(pPVar12);
                            drawableQueue.AddDrawable(drawableSortKey, *puVar1, local_40, (DrawableGroupType)this, 4);
                        }
                        psVar8 = (shared_ptr<ModularParticleSystemTemplate>*)field_16->SSOBeginPtr();
                        pMVar9 = (ModularParticleSystemTemplate*)(*psVar8).operator->();
                        cVar2 = pMVar9->HasAlphaLateParticles();
                        if (!cVar2)
                            goto switchD_10082b0b5_caseD_3;
                        local_40._0_4_ = GetPos();
                        local_32 = false;
                        local_31 = false;
                        pPVar12 = DrawableElementPool<ParticleSystem_DE>::Create<
                            ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(
                            *this, obb, arg5, *local_40, local_32, local_31);
                        local_40->unique_ptr<true, void>(pPVar12);
                        drawableQueue.AddDrawable(drawableSortKey, *puVar1, local_40, (DrawableGroupType)this, 5);
                        goto LAB_10082b83c;
                    default:
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/particles/ModularParticleSystemVisuals.cpp",
                                        172, "Unknown render pass (%d)", (unsigned long)renderPassType);
                    case 2:
                        goto switchD_10082b0b5_caseD_2;
                    case 3:
                    case 9:
                    case 12:
                    case 14:
                        goto switchD_10082b0b5_caseD_3;
                    case 4:
                        psVar8 = (shared_ptr<ModularParticleSystemTemplate>*)field_16->SSOBeginPtr();
                        pMVar9 = (ModularParticleSystemTemplate*)(*psVar8).operator->();
                        cVar2 = pMVar9->HasDistortionParticles();
                        if ((!cVar2) || (cVar2 = effectManager.IsEnabled(104), !cVar2))
                            goto switchD_10082b0b5_caseD_2;
                        pCVar6 = drawableQueue.GetDrawableGroup(4, 6);
                        uVar4 = pCVar6->GetPos();
                        if (5 < uVar4) {
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/renderer/DrawableSortKey.h",
                                            177, "Unknown sort key type");
                        }
                    }
                    switch (uVar4) {
                    case 0:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        uVar11 = (unsigned long)fVar14;
                        pPVar13 =
                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar14 - 9.223372e+18) &
                                                                                           (long)uVar11 >> 63 |
                                                                                       uVar11)
                                                                                          << 24 |
                                                                                      144115188092567552);
                        break;
                    case 1:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        lVar5 = (long)fVar14;
                        uVar11 = (unsigned long)((unsigned int)lVar5 | (unsigned int)(long)(fVar14 - 9.223372e+18) &
                                                                           (unsigned int)(lVar5 >> 63)) *
                                         -16777216 +
                                     72057594021150720 &
                                 72057594021150720;
                        goto LAB_10082b3fe;
                    case 2:
                        uVar10 = ((long)(float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5)) & 4294967295U)
                                 << 8;
                        uVar11 = 144115188075856127;
                        goto LAB_10082b408;
                    case 3:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        uVar11 = (unsigned long)fVar14;
                        uVar11 = ((long)(fVar14 - 9.223372e+18) & (long)uVar11 >> 63 | uVar11) * -256 + 1099511627520;
                    LAB_10082b3fe:
                        uVar10 = 144115188075855872;
                    LAB_10082b408:
                        pPVar13 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar11 | uVar10);
                        break;
                    case 4:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        lVar5 = (long)fVar14;
                        pPVar13 =
                            (PlayerDataComparator<
                                oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                                    (unsigned int)(long)(fVar14 -
                                                                                                         9.223372e+18) &
                                                                                        (unsigned int)(lVar5 >> 63))
                                                                        << 32 |
                                                                    50266112);
                        break;
                    case 5:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        uVar11 = (unsigned long)fVar14;
                        pPVar13 =
                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar14 - 9.223372e+18) &
                                                                                           (long)uVar11 >> 63 |
                                                                                       uVar11) *
                                                                                          -4294967296 -
                                                                                      4261412864);
                    }
                    new (local_40)
                        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pPVar13);
                    puVar1 = (unique_ptr<DrawableElement, DrawableElementDeleter>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                                    (uint32_t)local_40._0_4_);
                    local_40._0_4_ = GetPos();
                    local_32 = true;
                    local_31 = false;
                    pPVar12 =
                        DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB const&,
                                                                       float&, unsigned int, bool, bool>(
                            *this, obb, arg5, *local_40, local_32, local_31);
                    local_40->unique_ptr<true, void>(pPVar12);
                    drawableQueue.AddDrawable(drawableSortKey, *puVar1, local_40, (DrawableGroupType)this, 6);
                switchD_10082b0b5_caseD_2:
                    psVar8 = (shared_ptr<ModularParticleSystemTemplate>*)field_16->SSOBeginPtr();
                    pMVar9 = (ModularParticleSystemTemplate*)(*psVar8).operator->();
                    cVar2 = pMVar9->HasAlphaParticles();
                    if (!cVar2)
                        goto switchD_10082b0b5_caseD_3;
                    pCVar6 = drawableQueue.GetDrawableGroup(renderPassType, 5);
                    uVar4 = pCVar6->GetPos();
                    if (5 < uVar4) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/renderer/DrawableSortKey.h",
                                        177, "Unknown sort key type");
                    }
                    switch (uVar4) {
                    case 0:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        uVar11 = (unsigned long)fVar14;
                        pPVar13 =
                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar14 - 9.223372e+18) &
                                                                                           (long)uVar11 >> 63 |
                                                                                       uVar11)
                                                                                          << 24 |
                                                                                      144115188092567552);
                        break;
                    case 1:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        lVar5 = (long)fVar14;
                        uVar11 = (unsigned long)((unsigned int)lVar5 | (unsigned int)(long)(fVar14 - 9.223372e+18) &
                                                                           (unsigned int)(lVar5 >> 63)) *
                                         -16777216 +
                                     72057594021150720 &
                                 72057594021150720;
                        goto LAB_10082b6a3;
                    case 2:
                        pPVar13 = (PlayerDataComparator<
                                   oldscape::social::FriendChatUser>*)(((long)(float)((unsigned int)(arg5 + 0.5) &
                                                                                      -(unsigned int)(0.0 < arg5)) &
                                                                        4294967295U)
                                                                           << 8 |
                                                                       144115188075856127);
                        break;
                    case 3:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        uVar11 = (unsigned long)fVar14;
                        uVar11 = ((long)(fVar14 - 9.223372e+18) & (long)uVar11 >> 63 | uVar11) * -256 + 1099511627520;
                    LAB_10082b6a3:
                        pPVar13 =
                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar11 | 144115188075855872);
                        break;
                    case 4:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        lVar5 = (long)fVar14;
                        pPVar13 =
                            (PlayerDataComparator<
                                oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                                    (unsigned int)(long)(fVar14 -
                                                                                                         9.223372e+18) &
                                                                                        (unsigned int)(lVar5 >> 63))
                                                                        << 32 |
                                                                    50266112);
                        break;
                    case 5:
                        fVar14 = (float)((unsigned int)(arg5 + 0.5) & -(unsigned int)(0.0 < arg5));
                        uVar11 = (unsigned long)fVar14;
                        pPVar13 =
                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar14 - 9.223372e+18) &
                                                                                           (long)uVar11 >> 63 |
                                                                                       uVar11) *
                                                                                          -4294967296 -
                                                                                      4261412864);
                    }
                    new (local_40)
                        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pPVar13);
                    puVar1 = (unique_ptr<DrawableElement, DrawableElementDeleter>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                                    (uint32_t)local_40._0_4_);
                    psVar8 = (shared_ptr<ModularParticleSystemTemplate>*)field_16->SSOBeginPtr();
                    pMVar9 = (ModularParticleSystemTemplate*)(*psVar8).operator->();
                    cVar2 = pMVar9->HasAlphaEarlyParticles();
                    if (cVar2) {
                        local_40._0_4_ = GetPos();
                        local_32 = false;
                        local_31 = true;
                        pPVar12 = DrawableElementPool<ParticleSystem_DE>::Create<
                            ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(
                            *this, obb, arg5, *local_40, local_32, local_31);
                        local_40->unique_ptr<true, void>(pPVar12);
                        drawableQueue.AddDrawable(drawableSortKey, *puVar1, local_40, (DrawableGroupType)this, 4);
                    }
                    psVar8 = (shared_ptr<ModularParticleSystemTemplate>*)field_16->SSOBeginPtr();
                    pMVar9 = (ModularParticleSystemTemplate*)(*psVar8).operator->();
                    cVar2 = pMVar9->HasAlphaLateParticles();
                    if (cVar2) {
                        local_40._0_4_ = GetPos();
                        local_32 = false;
                        local_31 = false;
                        pPVar12 = DrawableElementPool<ParticleSystem_DE>::Create<
                            ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(
                            *this, obb, arg5, *local_40, local_32, local_31);
                        local_40->unique_ptr<true, void>(pPVar12);
                        drawableQueue.AddDrawable(drawableSortKey, *puVar1, local_40, (DrawableGroupType)this, 5);
                    LAB_10082b83c:
                    }
                switchD_10082b0b5_caseD_3:
                    DVar7 = (DrawableSortKey)((long)DVar7 + 8);
                } while (DVar7 != drawableSortKey);
            }
        } else {
            lVar5 = sceneViewData.GetRenderPass(4);
            if (lVar5 != 0) {
                pCVar6 = drawableQueue.GetDrawableGroup(4, 5);
                switch (pCVar6->GetPos()) {
                case 0:
                    fVar14 = (float)(-(unsigned int)(0.0 < arg5) & (unsigned int)(arg5 + 0.5));
                    uVar11 = (unsigned long)fVar14;
                    pPVar13 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar14 - 9.223372e+18) &
                                                                                             (long)uVar11 >> 63 |
                                                                                         uVar11)
                                                                                            << 24 |
                                                                                        144115188092567552);
                    break;
                case 1:
                    fVar14 = (float)(-(unsigned int)(0.0 < arg5) & (unsigned int)(arg5 + 0.5));
                    lVar5 = (long)fVar14;
                    pPVar13 = (PlayerDataComparator<
                               oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                                   (unsigned int)(long)(fVar14 -
                                                                                                        9.223372e+18) &
                                                                                       (unsigned int)(lVar5 >> 63)) *
                                                                               -16777216 +
                                                                           72057594021150720 &
                                                                       72057594021150720 |
                                                                   144115188075855872);
                    break;
                case 2:
                    pPVar13 =
                        (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 <
                                                                                                                 arg5) &
                                                                                                 (unsigned int)(arg5 +
                                                                                                                0.5)) &
                                                                                   4294967295U) *
                                                                                      256 +
                                                                                  144115188075856127);
                    break;
                case 3:
                    fVar14 = (float)(-(unsigned int)(0.0 < arg5) & (unsigned int)(arg5 + 0.5));
                    uVar11 = (unsigned long)fVar14;
                    pPVar13 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar14 - 9.223372e+18) &
                                                                                             (long)uVar11 >> 63 |
                                                                                         uVar11) *
                                                                                                -256 +
                                                                                            1099511627520 |
                                                                                        144115188075855872);
                    break;
                case 4:
                    fVar14 = (float)(-(unsigned int)(0.0 < arg5) & (unsigned int)(arg5 + 0.5));
                    lVar5 = (long)fVar14;
                    pPVar13 = (PlayerDataComparator<
                               oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar5 |
                                                                                   (unsigned int)(long)(fVar14 -
                                                                                                        9.223372e+18) &
                                                                                       (unsigned int)(lVar5 >> 63))
                                                                       << 32 |
                                                                   50266112);
                    break;
                case 5:
                    fVar14 = (float)(-(unsigned int)(0.0 < arg5) & (unsigned int)(arg5 + 0.5));
                    uVar11 = (unsigned long)fVar14;
                    pPVar13 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar14 - 9.223372e+18) &
                                                                                             (long)uVar11 >> 63 |
                                                                                         uVar11) *
                                                                                            -4294967296 -
                                                                                        4261412864);
                    break;
                default:
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/renderer/DrawableSortKey.h",
                                    177, "Unknown sort key type");
                }
                new (local_40)
                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pPVar13);
                puVar1 = (unique_ptr<DrawableElement, DrawableElementDeleter>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                                (uint32_t)local_40._0_4_);
                local_40._0_4_ = GetPos();
                local_32 = true;
                local_31 = false;
                pPVar12 =
                    DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB const&,
                                                                   float&, unsigned int, bool, bool>(
                        *this, obb, arg5, *local_40, local_32, local_31);
                local_40->unique_ptr<true, void>(pPVar12);
                drawableQueue.AddDrawable(in_stack_ffffffffffffff98, *puVar1, local_40, (DrawableGroupType)this, 5);
            }
        }
    }

} // namespace jag::graphics
