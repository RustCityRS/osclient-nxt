// libs/graphics/runetek7/particles/ModularParticleSystemVisuals.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ModularParticleSystemVisuals.h"

namespace jag::graphics {
    // 0x10082abf0, 816 bytes, placed by __FILE__ string
    // ModularParticleSystemDrawable::UpdateMaterials(MaterialManager const&, TextureAtlasManager&)
    void ModularParticleSystemDrawable::UpdateMaterials(MaterialManager* param_1, TextureAtlasManager* param_2) {
        undefined1* this_00;
        char cVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        Layout* pLVar6;
        Layout* this_01;
        MSIType* pMVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        Material** ppMVar10;
        Material** ppMVar11;
        MaterialManager* pMVar12;
        ModularParticleEmitter* this_02;
        ModularParticleEmitter* pMVar13;
        TextureAtlasReference* this_03;
        TextureAtlas* this_04;
        ushort uVar14;
        short sVar15;
        bool bVar16;
        Layout local_78[24];
        Layout* local_60;
        ModularParticleSystemDrawable* local_48;
        shared_ptr local_40;

        eastl::vector<Material_const*, BucketAllocatorEASTL>::vector();
        m_viewportMapID = -1;
        local_48 = this;
        pLVar6 = (Layout*)field_16->GetImmediateThreadPool();
        this_01 = (Layout*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar6);
        local_60 = (Layout*)pLVar6->end();
        if (this_01 != local_60) {
            sVar15 = 0;
            do {
                pMVar7 = (MSIType*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                iVar3 = pMVar7->GetSpriteID();
                uVar8 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(local_78);
                uVar9 = local_78->end();
                ppMVar10 = eastl::find_if<Material_const**,
                                          (MaterialManager_const&)->UpdateMaterials(TextureAtlasManager&)::__9>(
                    uVar8, uVar9, iVar3);
                ppMVar11 = (Material**)local_78->end();
                if (ppMVar10 == ppMVar11) {
                    pMVar12 = (MaterialManager*)param_1->GetMaterial(iVar3);
                    cVar2 = pMVar12->ShowSkybox();
                    if (cVar2 != '\0') {
                        cVar2 = pMVar12->IsRT7();
                        if (cVar2 == '\0') {
                            bVar16 = 0 < sVar15;
                            sVar15 = -1;
                            if (bVar16) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("rt7flag <= 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ModularParticleSystemVisuals.cpp",
                                          258, "ParticleSystem cannot mix RT5 materials with RT7 materials");
                            }
                        } else {
                            bVar16 = sVar15 < 0;
                            sVar15 = 1;
                            if (bVar16) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("rt7flag >= 0",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ModularParticleSystemVisuals.cpp",
                                          253, "ParticleSystem cannot mix RT5 materials with RT7 materials");
                            }
                        }
                        iVar3 = pMVar12->GetSeqDelay();
                        if (iVar3 != -1) {
                            iVar3 = local_48->m_viewportMapID;
                            if ((iVar3 != -1) && (iVar4 = pMVar12->GetSeqDelay(), iVar3 != iVar4)) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("m_viewportMapID == -1 || m_viewportMapID == material.GetViewportMapID()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/runetek7/particles/ModularParticleSystemVisuals.cpp",
                                          263, (char*)0);
                            }
                            iVar3 = pMVar12->GetSeqDelay();
                            local_48->m_viewportMapID = iVar3;
                        }
                        local_40._0_8_ = pMVar12;
                        local_78->push_back((Material**)&local_40);
                    }
                }
                this_01 = this_01 + 320;
            } while (this_01 != local_60);
        }
        local_40.GetSharedAtlasRefFromMaterials(param_2, (vector*)graphicutils::TextureAtlasUsage::USAGE_COMPRESSED);
        this_00 = &local_48->field_24;
        shared_ptr<TextureAtlasReference>::operator=((shared_ptr<TextureAtlasReference>*)this_00, &local_40);
        pMVar12 = param_1;
        local_40.~shared_ptr();
        bVar16 = this_00->operator_cast_to_bool();
        if (!bVar16) {
            local_40.GetDummySharedMaterialReference(param_2);
            shared_ptr<TextureAtlasReference>::operator=((shared_ptr<TextureAtlasReference>*)this_00, &local_40);
            local_40.~shared_ptr();
            bVar16 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
            if (!bVar16) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_textureAtlasRef != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ModularParticleSystemVisuals.cpp",
                          278, (char*)0);
            }
        }
        pLVar6 = (Layout*)local_48->field_16->GetImmediateThreadPool();
        this_02 = (ModularParticleEmitter*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar6);
        pMVar13 = (ModularParticleEmitter*)pLVar6->end();
        for (; this_02 != pMVar13; this_02 = (ModularParticleEmitter*)(this_02[1].field_12 + 12)) {
            pMVar7 = (MSIType*)this_02->HeapBeginPtr();
            uVar5 = pMVar7->GetSpriteID();
            cVar2 = pMVar12->IsValidMaterial(uVar5);
            if (cVar2 == '\0') {
                uVar14 = 0;
            } else {
                this_03 = (TextureAtlasReference*)shared_ptr<TextureAtlasReference>::operator->(
                    (shared_ptr<TextureAtlasReference>*)this_00);
                this_04 = (TextureAtlas*)this_03->GetTextureAtlas();
                this_04->GetMaterialSettingsSlotXY((ushort*)&local_40, uVar5);
                uVar14 = local_40._0_2_;
            }
            this_02->SetAtlasMaterialSettingsSlotXY(uVar14);
        }
        local_78->~vector();
    }

    // 0x10082af30, 3056 bytes, placed by __FILE__ string
    // ModularParticleSystemDrawable::GatherParticleDrawables(DrawableQueue&, SceneViewData const&, EffectManager const&, math::OBB const&, float)
    void ModularParticleSystemDrawable::GatherParticleDrawables(DrawableQueue* param_1, SceneViewData* param_2,
                                                                EffectManager* param_3, OBB* param_4, float param_5) {
        undefined8 uVar1;
        char cVar2;
        undefined4 uVar3;
        uint uVar4;
        uint uVar5;
        long lVar6;
        CommandLine* pCVar7;
        long* plVar8;
        long* plVar9;
        vector* pvVar10;
        ModularParticleSystemTemplate* pMVar11;
        ulong uVar12;
        ulong uVar13;
        ParticleSystem_DE* pPVar14;
        BucketAllocatorEASTL* extraout_RDX;
        BucketAllocatorEASTL* extraout_RDX_00;
        BucketAllocatorEASTL* extraout_RDX_01;
        BucketAllocatorEASTL* pBVar15;
        DrawableQueue* pDVar16;
        DrawableQueue* pDVar17;
        BucketAllocatorEASTL* pBVar18;
        float fVar19;
        float local_44;
        uint local_40;
        undefined4 uStack_3c;
        bool local_32;
        bool local_31;

        local_44 = param_5;
        if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
            pDVar16 = param_1;
            plVar8 = (long*)(&param_2->field_520)->HeapBeginPtr();
            plVar9 = (long*)(&param_2->field_520)->end();
            for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
                if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderPass",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "particles/ModularParticleSystemVisuals.cpp",
                              109, (char*)0);
                }
                uVar4 = (*plVar8)->GetPos();
                switch (uVar4) {
                case 0:
                    cVar2 = CastsShadow(this);
                    if (cVar2 == '\0')
                        goto switchD_10082b0b5_caseD_3;
                    pvVar10 = (field_16, (type*)pDVar16)->SSOBeginPtr();
                    pMVar11 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                        (shared_ptr<ModularParticleSystemTemplate>*)pvVar10);
                    cVar2 = pMVar11->HasAlphaParticles();
                    if (cVar2 == '\0')
                        goto switchD_10082b0b5_caseD_3;
                    pDVar16 = (DrawableQueue*)37;
                    cVar2 = param_3->IsEnabled();
                    if (cVar2 == '\0')
                        goto switchD_10082b0b5_caseD_3;
                    fVar19 = (float)(-(uint)(0.0 < local_44) & (uint)(local_44 + 0.5));
                    lVar6 = (long)fVar19;
                    uVar4 = (uint)(long)(fVar19 - 9.223372e+18) & (uint)(lVar6 >> 63);
                    pDVar16 = (DrawableQueue*)((ulong)((uint)lVar6 | uVar4) * -16777216 + 72057594021150720 &
                                                   72057594021150720 |
                                               144115188075855872);
                    new (&local_40) eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(
                        pDVar16, (BucketAllocatorEASTL*)(ulong)uVar4);
                    pDVar17 = (DrawableQueue*)CONCAT44(uStack_3c, local_40);
                    pvVar10 = (field_16, (type*)pDVar16)->SSOBeginPtr();
                    pMVar11 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                        (shared_ptr<ModularParticleSystemTemplate>*)pvVar10);
                    cVar2 = pMVar11->HasAlphaEarlyParticles();
                    if (cVar2 != '\0') {
                        local_40 = GetPos();
                        local_32 = false;
                        local_31 = true;
                        pPVar14 = DrawableElementPool<ParticleSystem_DE>::Create<
                            ModularParticleSystemDrawable&, math::OBB_const&, float&, unsigned int, bool, bool>(
                            this, param_4, &local_44, &local_40, &local_32, &local_31);
                        std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                            (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, (DrawableElement*)pPVar14);
                        pDVar16 = pDVar17;
                        param_1->AddDrawable(
                            pDVar17,
                            (compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>*)&local_40,
                            this, 4, 0);
                        local_40.~unique_ptr();
                    }
                    pvVar10 = (field_16, (type*)pDVar16)->SSOBeginPtr();
                    pMVar11 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                        (shared_ptr<ModularParticleSystemTemplate>*)pvVar10);
                    cVar2 = pMVar11->HasAlphaLateParticles();
                    if (cVar2 == '\0')
                        goto switchD_10082b0b5_caseD_3;
                    local_40 = GetPos();
                    local_32 = false;
                    local_31 = false;
                    pPVar14 =
                        DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB_const&,
                                                                       float&, unsigned int, bool, bool>(
                            this, param_4, &local_44, &local_40, &local_32, &local_31);
                    std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, (DrawableElement*)pPVar14);
                    param_1->AddDrawable(pDVar17, (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, this,
                                         5, 0);
                    goto LAB_10082b83c;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/particles/ModularParticleSystemVisuals.cpp",
                                    172, "Unknown render pass (%d)", (ulong)uVar4);
                case 2:
                    goto switchD_10082b0b5_caseD_2;
                case 3:
                case 9:
                case 12:
                case 14:
                    goto switchD_10082b0b5_caseD_3;
                case 4:
                    pvVar10 = (field_16, (type*)pDVar16)->SSOBeginPtr();
                    pMVar11 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                        (shared_ptr<ModularParticleSystemTemplate>*)pvVar10);
                    cVar2 = pMVar11->HasDistortionParticles();
                    if (cVar2 == '\0')
                        goto switchD_10082b0b5_caseD_2;
                    pDVar16 = (DrawableQueue*)104;
                    cVar2 = param_3->IsEnabled();
                    if (cVar2 == '\0')
                        goto switchD_10082b0b5_caseD_2;
                    pCVar7 = (CommandLine*)param_1->GetDrawableGroup(4, 6);
                    uVar5 = pCVar7->GetPos();
                    if (5 < uVar5) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/renderer/DrawableSortKey.h",
                                        177, "Unknown sort key type");
                    }
                }
                pBVar15 = extraout_RDX_00;
                switch (uVar5) {
                case 0:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    uVar13 = (ulong)fVar19;
                    pBVar15 =
                        (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13) << 24);
                    pBVar18 = (BucketAllocatorEASTL*)((ulong)pBVar15 | 144115188092567552);
                    break;
                case 1:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    lVar6 = (long)fVar19;
                    uVar5 = (uint)(long)(fVar19 - 9.223372e+18) & (uint)(lVar6 >> 63);
                    pBVar15 = (BucketAllocatorEASTL*)(ulong)uVar5;
                    uVar13 = (ulong)((uint)lVar6 | uVar5) * -16777216 + 72057594021150720 & 72057594021150720;
                    goto LAB_10082b3fe;
                case 2:
                    uVar12 = ((long)(float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44)) & 4294967295U) << 8;
                    uVar13 = 144115188075856127;
                    goto LAB_10082b408;
                case 3:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    uVar13 = (ulong)fVar19;
                    uVar13 = (long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13;
                    pBVar15 = (BucketAllocatorEASTL*)(uVar13 * 256);
                    uVar13 = uVar13 * -256 + 1099511627520;
                LAB_10082b3fe:
                    uVar12 = 144115188075855872;
                LAB_10082b408:
                    pBVar18 = (BucketAllocatorEASTL*)(uVar13 | uVar12);
                    break;
                case 4:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    lVar6 = (long)fVar19;
                    pBVar18 = (BucketAllocatorEASTL*)((ulong)((uint)lVar6 |
                                                              (uint)(long)(fVar19 - 9.223372e+18) & (uint)(lVar6 >> 63))
                                                          << 32 |
                                                      50266112);
                    break;
                case 5:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    uVar13 = (ulong)fVar19;
                    pBVar15 = (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13) *
                                                      -4294967296);
                    pBVar18 = pBVar15 + -4261412864;
                }
                new (&local_40)
                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar18, pBVar15);
                pDVar16 = (DrawableQueue*)CONCAT44(uStack_3c, local_40);
                local_40 = GetPos();
                local_32 = true;
                local_31 = false;
                pPVar14 =
                    DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB_const&,
                                                                   float&, unsigned int, bool, bool>(
                        this, param_4, &local_44, &local_40, &local_32, &local_31);
                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, (DrawableElement*)pPVar14);
                param_1->AddDrawable(
                    pDVar16, (compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>*)&local_40,
                    this, 6, 4);
                local_40.~unique_ptr();
            switchD_10082b0b5_caseD_2:
                pvVar10 = (field_16, (type*)pDVar16)->SSOBeginPtr();
                pMVar11 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                    (shared_ptr<ModularParticleSystemTemplate>*)pvVar10);
                cVar2 = pMVar11->HasAlphaParticles();
                if (cVar2 == '\0')
                    goto switchD_10082b0b5_caseD_3;
                pCVar7 = (CommandLine*)param_1->GetDrawableGroup(uVar4, 5);
                uVar5 = pCVar7->GetPos();
                if (5 < uVar5) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/renderer/DrawableSortKey.h",
                                    177, "Unknown sort key type");
                }
                pBVar15 = extraout_RDX_01;
                switch (uVar5) {
                case 0:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    uVar13 = (ulong)fVar19;
                    pBVar15 =
                        (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13) << 24);
                    pDVar16 = (DrawableQueue*)((ulong)pBVar15 | 144115188092567552);
                    break;
                case 1:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    lVar6 = (long)fVar19;
                    uVar5 = (uint)(long)(fVar19 - 9.223372e+18) & (uint)(lVar6 >> 63);
                    pBVar15 = (BucketAllocatorEASTL*)(ulong)uVar5;
                    uVar13 = (ulong)((uint)lVar6 | uVar5) * -16777216 + 72057594021150720 & 72057594021150720;
                    goto LAB_10082b6a3;
                case 2:
                    pDVar16 =
                        (DrawableQueue*)(((long)(float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44)) & 4294967295U)
                                             << 8 |
                                         144115188075856127);
                    break;
                case 3:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    uVar13 = (ulong)fVar19;
                    uVar13 = (long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13;
                    pBVar15 = (BucketAllocatorEASTL*)(uVar13 * 256);
                    uVar13 = uVar13 * -256 + 1099511627520;
                LAB_10082b6a3:
                    pDVar16 = (DrawableQueue*)(uVar13 | 144115188075855872);
                    break;
                case 4:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    lVar6 = (long)fVar19;
                    pDVar16 = (DrawableQueue*)((ulong)((uint)lVar6 |
                                                       (uint)(long)(fVar19 - 9.223372e+18) & (uint)(lVar6 >> 63))
                                                   << 32 |
                                               50266112);
                    break;
                case 5:
                    fVar19 = (float)((uint)(local_44 + 0.5) & -(uint)(0.0 < local_44));
                    uVar13 = (ulong)fVar19;
                    pBVar15 = (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13) *
                                                      -4294967296);
                    pDVar16 = (DrawableQueue*)(pBVar15 + -4261412864);
                }
                new (&local_40)
                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pDVar16, pBVar15);
                pDVar17 = (DrawableQueue*)CONCAT44(uStack_3c, local_40);
                pvVar10 = (field_16, (type*)pDVar16)->SSOBeginPtr();
                pMVar11 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                    (shared_ptr<ModularParticleSystemTemplate>*)pvVar10);
                cVar2 = pMVar11->HasAlphaEarlyParticles();
                if (cVar2 != '\0') {
                    local_40 = GetPos();
                    local_32 = false;
                    local_31 = true;
                    pPVar14 =
                        DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB_const&,
                                                                       float&, unsigned int, bool, bool>(
                            this, param_4, &local_44, &local_40, &local_32, &local_31);
                    std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, (DrawableElement*)pPVar14);
                    pDVar16 = pDVar17;
                    param_1->AddDrawable(pDVar17, (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, this,
                                         4, uVar4);
                    local_40.~unique_ptr();
                }
                pvVar10 = (field_16, (type*)pDVar16)->SSOBeginPtr();
                pMVar11 = (ModularParticleSystemTemplate*)shared_ptr<ModularParticleSystemTemplate>::operator->(
                    (shared_ptr<ModularParticleSystemTemplate>*)pvVar10);
                cVar2 = pMVar11->HasAlphaLateParticles();
                if (cVar2 != '\0') {
                    local_40 = GetPos();
                    local_32 = false;
                    local_31 = false;
                    pPVar14 =
                        DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB_const&,
                                                                       float&, unsigned int, bool, bool>(
                            this, param_4, &local_44, &local_40, &local_32, &local_31);
                    std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                        (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, (DrawableElement*)pPVar14);
                    param_1->AddDrawable(pDVar17, (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, this,
                                         5, uVar4);
                LAB_10082b83c:
                    local_40.~unique_ptr();
                    pDVar16 = pDVar17;
                }
            switchD_10082b0b5_caseD_3:
            }
        } else {
            lVar6 = param_2->GetRenderPass(4);
            if (lVar6 != 0) {
                pCVar7 = (CommandLine*)param_1->GetDrawableGroup(4, 5);
                uVar3 = pCVar7->GetPos();
                pBVar15 = extraout_RDX;
                switch (uVar3) {
                case 0:
                    fVar19 = (float)(-(uint)(0.0 < local_44) & (uint)(local_44 + 0.5));
                    uVar13 = (ulong)fVar19;
                    pBVar15 =
                        (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13) << 24);
                    pBVar18 = (BucketAllocatorEASTL*)((ulong)pBVar15 | 144115188092567552);
                    break;
                case 1:
                    fVar19 = (float)(-(uint)(0.0 < local_44) & (uint)(local_44 + 0.5));
                    lVar6 = (long)fVar19;
                    pBVar15 = (BucketAllocatorEASTL*)((ulong)((uint)lVar6 | (uint)(long)(fVar19 - 9.223372e+18) &
                                                                                (uint)(lVar6 >> 63)) *
                                                              -16777216 +
                                                          72057594021150720 &
                                                      72057594021150720);
                    pBVar18 = (BucketAllocatorEASTL*)((ulong)pBVar15 | 144115188075855872);
                    break;
                case 2:
                    pBVar18 = (BucketAllocatorEASTL*)(((long)(float)(-(uint)(0.0 < local_44) & (uint)(local_44 + 0.5)) &
                                                       4294967295U) *
                                                          256 +
                                                      144115188075856127);
                    break;
                case 3:
                    fVar19 = (float)(-(uint)(0.0 < local_44) & (uint)(local_44 + 0.5));
                    uVar13 = (ulong)fVar19;
                    uVar13 = (long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13;
                    pBVar15 = (BucketAllocatorEASTL*)(uVar13 * 256);
                    pBVar18 = (BucketAllocatorEASTL*)(uVar13 * -256 + 1099511627520 | 144115188075855872);
                    break;
                case 4:
                    fVar19 = (float)(-(uint)(0.0 < local_44) & (uint)(local_44 + 0.5));
                    lVar6 = (long)fVar19;
                    pBVar18 = (BucketAllocatorEASTL*)((ulong)((uint)lVar6 |
                                                              (uint)(long)(fVar19 - 9.223372e+18) & (uint)(lVar6 >> 63))
                                                          << 32 |
                                                      50266112);
                    break;
                case 5:
                    fVar19 = (float)(-(uint)(0.0 < local_44) & (uint)(local_44 + 0.5));
                    uVar13 = (ulong)fVar19;
                    pBVar15 = (BucketAllocatorEASTL*)(((long)(fVar19 - 9.223372e+18) & (long)uVar13 >> 63 | uVar13) *
                                                      -4294967296);
                    pBVar18 = pBVar15 + -4261412864;
                    break;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/renderer/DrawableSortKey.h",
                                    177, "Unknown sort key type");
                }
                new (&local_40)
                    eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar18, pBVar15);
                uVar1 = CONCAT44(uStack_3c, local_40);
                local_40 = GetPos();
                local_32 = true;
                local_31 = false;
                pPVar14 =
                    DrawableElementPool<ParticleSystem_DE>::Create<ModularParticleSystemDrawable&, math::OBB_const&,
                                                                   float&, unsigned int, bool, bool>(
                        this, param_4, &local_44, &local_40, &local_32, &local_31);
                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, (DrawableElement*)pPVar14);
                param_1->AddDrawable(uVar1, (unique_ptr<DrawableElement, DrawableElementDeleter>*)&local_40, this, 5,
                                     4);
                local_40.~unique_ptr();
            }
        }
    }

} // namespace jag::graphics
