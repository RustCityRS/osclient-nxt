// libs/graphics/runetek7/materials/textures/TextureManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TextureManager.h"

namespace jag::graphics {
    // 0x100f43e84
    int32_t TextureManager::DEBUG_ATLAS_RESOLUTION[5] = {256, 0, 0, 0, 0};

    // 0x103bbdec0, set at startup by ___cxx_global_var_init.188
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> TextureManager::NullTextureData =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x103bbded0, set at startup by ___cxx_global_var_init.189
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> TextureManager::NullTexture =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x103bbdee0, set at startup by ___cxx_global_var_init.190
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> TextureManager::NullTextureCube =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x103bbdef0
    bool TextureManager::DEBUG_ATLASES;

    // 0x103bbdef1
    uint8_t TextureManager::DEBUG_SPRITE_ATLASES[15];

    // 0x103bbdf00
    math::Vector4T<float> TextureManager::DEBUG_ATLAS_BACKGROUND_COLOUR;

    // 0x103bbdf10
    bool TextureManager::DEBUG_SPRITE_ATLAS_USAGE;

    // 0x103bbdf11
    bool TextureManager::DEBUG_TEXTURE_ATLAS_USAGE;

    // 0x103bbdf12
    bool TextureManager::DEBUG_TEXTURE_ATLAS_MATERIAL_SETTINGS;

    // 0x1002eeed0: TextureManager::GetTextureAtlasManager() has the same machine code as Model::GetLabelCentres() const

    // 0x10085b7b0
    uint32_t TextureManager::GetMaterialSettings(TextureAtlasMaterialSettings& textureAtlasMaterialSettings,
                                                 unsigned int arg2) {
        uint32_t uVar2;
        Material* material;

        auto this_00 = field_0->GetMaterialManager();
        if (this_00->MaterialsReady() == '\0') {
            uVar2 = 0;
        } else {
            material = this_00->GetMaterial(arg2);
            uVar2 = material->ShowSkybox();
            if ((char)uVar2 == '\0') {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureManager.cpp",
                                550, "TextureManager::GetMaterialSettings - Missing material with ID %u",
                                (unsigned long)arg2);
            }
            textureAtlasMaterialSettings.Initialise(*material);
        }
        return uVar2;
    }

    // 0x10085e040
    auto TextureManager::GetTextureData(const TextureType* textureType, unsigned int arg2,
                                        render::TextureFormatBitSet textureFormatBitSet) {
        unique_ptr<unsigned char[]>* this_00;
        long lVar3;
        TextureData local_68;
        ReturnValue local_48;
        TextureFormatBitSet local_38;

        local_38[0].m_bits = textureFormatBitSet.m_bits;
        unsigned long long local_50 = GetTextureCacheKey(&result, arg2, textureType, &local_38, false);
        unsigned long long* local_70 = (unsigned long long*)&field_552;
        shared_ptr local_80 = local_70->Find(local_50);
        if (shared_ptr::operator_cast_to_bool(&local_80) == '\0') {
            local_68 = TextureData();
            if ((uint8_t*)field_16->GetTextureData(local_68, textureType, arg2, local_38[0]) == DataStatus::READY) {
                make_shared<TextureData>(&local_48);
                this_00 = (unique_ptr<unsigned char[]>*)local_48.operator->();
                *this_00 = (*((unique_ptr<unsigned_char_[], std::default_delete<unsigned_char_[]> _>*)&local_68));
                lVar3 = local_48.operator->();
                *(uint32_t*)(lVar3 + 8) = (uint32_t)local_68.field_8;
                lVar3 = local_48.operator->();
                *(uint32_t*)(lVar3 + 12) = local_68.field_8._4_4_;
                lVar3 = local_48.operator->();
                *(uint32_t*)(lVar3 + 16) = (uint32_t)local_68.field_16;
                lVar3 = local_48.operator->();
                *(uint32_t*)(lVar3 + 20) = local_68.field_16._4_4_;
                result.Insert(*local_70, local_50);
            } else {
                auto result(&NullTextureData);
            }
        } else {
            new (&result) shared_ptr(&local_80);
        }
        return result;
    }

    // 0x1008600b0
    void TextureManager::AllocateImageData(unsigned int arg1) {
        operator_new__((unsigned long)arg1);
    }

    // 0x1008600c0
    void TextureManager::Initialise(RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                                    TextureDataProvider* textureDataProvider) {
        if (((rt7Core == nullptr) || (js5ResourceProvider == nullptr)) || (textureDataProvider == nullptr)) {
            LogAssert("rt7Core && resourceProvider && textureDataProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureManager.cpp",
                      43, nullptr);
        }
        field_0 = rt7Core;
        field_8 = js5ResourceProvider;
        field_16 = textureDataProvider;
        m_textureAtlasManager->Initialise(rt7Core->GetMaterialManager(), this);
        (*textureDataProvider->_vptr[2]._x7e___2)(textureDataProvider);
    }

    // 0x100860160
    void TextureManager::Destroy() {
        field_24.clear();
        field_288.clear();
        field_552.clear();
        field_3704.Destroy();
        m_textureAtlasManager->Destroy();
    }

    // 0x100860210
    void TextureManager::CreateRenderingResources() {
        m_textureAtlasManager->CreateRenderingResources();
        (*field_16->_vptr[2]._x7e___2)();
    }

    // 0x100860260
    void TextureManager::DestroyRenderingResources() {
        field_24.clear();
        field_288.clear();
        field_552.clear();
        field_3704.DestroyRenderingResources();
        m_textureAtlasManager->DestroyRenderingResources();
    }

    // 0x1008602b0
    void TextureManager::MainLogic() {
        m_textureAtlasManager->MainLogic();
        field_3704.MainLogic();
    }

    // 0x1008602e0
    void TextureManager::MainDraw() {
        m_textureAtlasManager->MainDraw();
        field_3704.MainDraw();
        UpdateCaches();
    }

    // 0x100860310
    void TextureManager::UpdateCaches() {
        float arg1 = (float)FrameTime::GetSecondsSinceProgramStart();
        field_24.Update(arg1);
        field_288.Update(arg1);
        field_552.Update(arg1);
    }

    // 0x1008605d0
    void TextureManager::RenderDebug(const render::DrawCallState& drawCallState, int arg2, int arg3,
                                     std::function<char const*(int, int)> const& callback1,
                                     const std::function<bool()>& callback2, FontHelpers& fontHelpers,
                                     TextProperties& textProperties) {
        uint8_t* this_00;
        uint8_t uVar1;
        bool bVar2;
        bool cVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        long lVar9;
        int* piVar10;
        int* arg2_00;
        int* arg3_00;
        unsigned long uVar11;
        EffectManager* this_03;
        uint32_t* puVar12;
        shared_ptr<SpriteAtlas>* this_04;
        MapArea* pMVar13;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar14;
        Texture* texture;
        SpriteAtlas* pSVar15;
        EntityHighlightGlobalState* pEVar16;
        EntityHighlightGlobalState* pEVar17;
        unsigned int* puVar18;
        uint64_t uVar19;
        int iVar20;
        uint32_t uVar21;
        int iVar22;
        __19* arg1;
        uint64_t* puVar23;
        int iVar24;
        TextureManager* pTVar25;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float fVar32;
        float fVar33;
        uint64_t auStackY_708[128];
        uint8_t local_270[184];
        StringView local_1b8;
        StringView local_1a8;
        GUIManager* local_198;
        int* local_190;
        int* local_188;
        int* local_180;
        int* local_178;
        TextureManager* local_170;
        int* local_168;
        int* local_160;
        Texture** local_158;
        int* local_150;
        int* local_148;
        basic_string<char, BucketAllocatorEASTL>* local_140;
        function<char const * _(int, int)>* local_138;
        SpriteAtlasUsageType* local_130;
        vector<int>* local_128;
        int* local_120;
        long local_118;
        int* local_110;
        int* local_108;
        shared_ptr<SpriteAtlas>* local_100;
        function<char const * _(int, int)>* local_c8;
        shared_ptr<SpriteAtlas>* local_c0;
        float local_ac;
        SpriteAtlasUsageType local_9c;
        function<bool(shared_ptr<TextureAtlas>&)> local_68[48];
        long local_38;

        uint8_t bVar26 = 0;
        local_c8 = callback1;
        int local_b8 = arg2;
        int local_b4 = arg3;
        if (DEBUG_ATLASES == '\0' && DEBUG_SPRITE_ATLASES == '\0')
            goto LAB_100860c5c;
        auto pLVar7 = field_3704.get_overflow_allocator();
        auto this_01 = drawCallState.GetOutputMergerState();
        auto this_02 = this_01->SSOBeginPtr();
        long lVar8 = (*this_02)[0];
        field_0->SetClippingRectToViewport();
        auto local_80 = field_0->GetGUIManager();
        local_80->Begin(drawCallState);
        int local_6c = DEBUG_ATLAS_RESOLUTION;
        int local_b0 = 8;
        int local_a0 = 2;
        int local_70 = 32;
        int local_74 = (*(int*)(lVar8 + 12) - DEBUG_ATLAS_RESOLUTION) - 64;
        Texture* local_a8 = nullptr;
        int local_8c = -1;
        int local_88 = -1;
        int local_84 = -1;
        int local_78 = -1;
        long local_d0 = lVar8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_e0;
        basic_string<char, BucketAllocatorEASTL> local_f8;
        *(uint32_t*)((long)&field_3960 + 4) = 4294967295;
        TextureManager* local_98 = this;
        if (DEBUG_ATLASES != '\0') {
            uVar1 = std::function<bool()>::operator()((function<bool()>*)callback2);
            local_9c = (((uint32_t)local_9c._1_3_ << 8) | (uint8_t)uVar1);
            new (local_270) eastl::vector<int>();
            local_198 = local_80;
            local_190 = &local_70;
            local_188 = &local_74;
            local_180 = &local_6c;
            local_178 = &local_a0;
            local_170 = local_98;
            local_168 = &local_b8;
            local_160 = &local_b4;
            local_158 = &local_a8;
            local_150 = &local_84;
            local_148 = &local_78;
            local_140 = &local_f8;
            local_138 = local_c8;
            local_130 = &local_9c;
            local_128 = (vector<int>*)local_270;
            local_120 = &local_b0;
            local_118 = local_d0;
            local_110 = &local_8c;
            local_108 = &local_88;
            arg1 = (__19*)&local_198;
            puVar23 = auStackY_708 + 128;
            for (lVar8 = 19; lVar8 != 0; lVar8 = lVar8 - 1) {
                *puVar23 = *(uint64_t*)arg1;
                arg1 = arg1 + (unsigned long)bVar26 * -16 + 8;
                puVar23 = puVar23 + (unsigned long)bVar26 * -2 + 1;
            }
            std::function<bool(shared_ptr<TextureAtlas>&)>::function<
                TextureManager::RenderDebug(render::DrawCallState const&, int, int,
                                            std::function<char const*(int, int)> const&, std::function<bool()> const&,
                                            FontHelpers&, TextProperties&)::__19,
                void>(local_68, arg1);
            local_98->m_textureAtlasManager->IterateAtlases(local_68);
            if ((uint8_t)local_9c != 0) {
                this_00 = &local_98->field_3928;
                lVar8 = this_00->size();
                lVar9 = local_270->size();
                if (lVar8 == lVar9) {
                    piVar10 = (int*)this_00->HeapBeginPtr();
                    arg2_00 = (int*)this_00->end();
                    arg3_00 = (int*)local_270->HeapBeginPtr();
                    bVar2 = eastl::equal<int*, int*>(piVar10, arg2_00, arg3_00);
                    if (!bVar2)
                        goto LAB_1008608ee;
                    cVar3 = this_00->empty();
                    pTVar25 = local_98;
                    if (!cVar3) {
                        iVar20 = *(int*)&local_98->field_3960;
                        uVar11 = this_00->size();
                        *(int*)&pTVar25->field_3960 = (int)(((long)iVar20 + 1U) % uVar11);
                    }
                } else {
                LAB_1008608ee:
                    *this_00 = *local_270;
                    *(uint32_t*)&local_98->field_3960 = 0;
                    pTVar25 = local_98;
                }
                cVar3 = this_00->empty();
                this_03 = pTVar25->field_0->GetEffectManager();
                if (!cVar3) {
                    this_03->EnableEffect(19, true);
                    puVar12 = (uint32_t*)(*this_00)[(long)*(int*)&local_98->field_3960];
                    uVar21 = *puVar12;
                } else {
                    uVar21 = 4294967295;
                    this_03->DisableEffect(19);
                }
                DebugMaterialHighlightEffect::m_materialHighlightID = uVar21;
            }
        }
        if (DEBUG_SPRITE_ATLASES != '\0') {
            this_04 = (shared_ptr<SpriteAtlas>*)pLVar7->HeapBeginPtr();
            local_100 = (shared_ptr<SpriteAtlas>*)pLVar7->end();
            if (this_04 != local_100) {
                do {
                    iVar5 = local_6c;
                    iVar24 = local_70;
                    iVar20 = local_74;
                    uVar4 = math::R8G8B8A8FromColour4(DEBUG_ATLAS_BACKGROUND_COLOUR);
                    local_80->AddColouredRectangle(iVar24, iVar20, iVar5, iVar5, uVar4, 1);
                    iVar5 = local_6c;
                    iVar24 = local_70;
                    iVar20 = local_74;
                    pMVar13 = (MapArea*)(*this_04).operator->();
                    pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar13->GetOrigin();
                    texture = (Texture*)pvVar14->end();
                    local_80->AddElement(iVar24, iVar20, iVar5 + iVar24, iVar5 + iVar20, 4294967295, 0.0, 0.0, 1.0, 1.0,
                                         texture, 1);
                    iVar20 = local_6c + local_a0 * 2 - 1;
                    local_80->AddOutline(local_70 - local_a0, local_74 - local_a0, iVar20, iVar20, local_a0, 865665279,
                                         1);
                    if (DEBUG_SPRITE_ATLAS_USAGE != '\0') {
                        new (local_270) SpriteAtlasUsageMap();
                        local_c0 = this_04;
                        pSVar15 = (SpriteAtlas*)(*this_04).operator->();
                        pSVar15->GetUsageMap(*local_270);
                        pLVar7 = (Layout*)local_270->GetCursorMutex();
                        pEVar16 = (EntityHighlightGlobalState*)pLVar7->HeapBeginPtr();
                        pEVar17 = (EntityHighlightGlobalState*)pLVar7->end();
                        iVar20 = local_70;
                        for (; local_70 = iVar20, pEVar16 != pEVar17;
                             pEVar16 = (EntityHighlightGlobalState*)&pEVar16->m_playerNPCAttackOpPriority) {
                            fVar27 = (float)pEVar16->GetOverbright();
                            iVar24 = local_74;
                            fVar31 = (float)local_6c;
                            fVar28 = (float)pEVar16->GetAlpha();
                            fVar32 = (float)local_6c;
                            fVar29 = (float)pEVar16->GetBrightpassThreshold();
                            fVar33 = (float)local_6c;
                            fVar30 = (float)pEVar16->GetOutlineRadiusAdjustment();
                            local_80->AddColouredRectangle((int)(fVar31 * fVar27) + iVar20,
                                                           (int)(fVar32 * fVar28) + iVar24, (int)(fVar33 * fVar29),
                                                           (int)((float)local_6c * fVar30), 16711782, 1);
                            iVar20 = local_70;
                        }
                        pLVar7 = (Layout*)local_270->GetImmediateThreadPool();
                        pEVar16 = (EntityHighlightGlobalState*)pLVar7->HeapBeginPtr();
                        pEVar17 = (EntityHighlightGlobalState*)pLVar7->end();
                        iVar20 = local_70;
                        for (; local_70 = iVar20, pEVar16 != pEVar17;
                             pEVar16 = (EntityHighlightGlobalState*)&pEVar16->m_playerNPCAttackOpPriority) {
                            fVar27 = (float)pEVar16->GetOverbright();
                            iVar24 = local_74;
                            fVar31 = (float)local_6c;
                            fVar28 = (float)pEVar16->GetAlpha();
                            fVar32 = (float)local_6c;
                            fVar29 = (float)pEVar16->GetBrightpassThreshold();
                            fVar33 = (float)local_6c;
                            fVar30 = (float)pEVar16->GetOutlineRadiusAdjustment();
                            local_80->AddColouredRectangle((int)(fVar31 * fVar27) + iVar20,
                                                           (int)(fVar32 * fVar28) + iVar24, (int)(fVar33 * fVar29),
                                                           (int)((float)local_6c * fVar30), 4278255462, 1);
                            iVar20 = local_70;
                        }
                        pLVar7 = (Layout*)local_270->GetBodyModelCache();
                        pEVar16 = (EntityHighlightGlobalState*)pLVar7->HeapBeginPtr();
                        pEVar17 = (EntityHighlightGlobalState*)pLVar7->end();
                        iVar20 = local_70;
                        for (; local_70 = iVar20, pEVar16 != pEVar17;
                             pEVar16 = (EntityHighlightGlobalState*)&pEVar16->m_playerNPCAttackOpPriority) {
                            fVar27 = (float)pEVar16->GetOverbright();
                            iVar24 = local_74;
                            fVar31 = (float)local_6c;
                            fVar28 = (float)pEVar16->GetAlpha();
                            fVar32 = (float)local_6c;
                            fVar29 = (float)pEVar16->GetBrightpassThreshold();
                            fVar33 = (float)local_6c;
                            fVar30 = (float)pEVar16->GetOutlineRadiusAdjustment();
                            local_80->AddColouredRectangle((int)(fVar31 * fVar27) + iVar20,
                                                           (int)(fVar32 * fVar28) + iVar24, (int)(fVar33 * fVar29),
                                                           (int)((float)local_6c * fVar30), 4278190182, 1);
                            iVar20 = local_70;
                        }
                        this_04 = local_c0;
                    }
                    if ((((local_70 <= local_b8) && (local_b8 <= local_70 + local_6c)) && (local_74 <= local_b4)) &&
                        (local_b4 <= local_74 + local_6c)) {
                        pMVar13 = (MapArea*)(*this_04).operator->();
                        pvVar14 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar13->GetOrigin();
                        local_a8 = (Texture*)pvVar14->end();
                        local_ac = (float)(local_b8 - local_70);
                        local_c0._0_4_ = (float)local_6c;
                        puVar18 = (unsigned int*)local_a8->second();
                        local_84 = (int)(((float)*puVar18 * local_ac) / local_c0._0_4_);
                        local_ac = (float)(local_b4 - local_74);
                        local_c0 =
                            (shared_ptr<SpriteAtlas>*)(((uint64_t)local_c0._4_4_ << 32) | (uint32_t)((float)local_6c));
                        lVar8 = local_a8->second();
                        local_78 = (int)(((float)*(unsigned int*)(lVar8 + 4) * local_ac) / local_c0._0_4_);
                        pSVar15 = (SpriteAtlas*)(*this_04).operator->();
                        cVar3 = pSVar15->GetDetailsAtPosition(*local_270, local_9c, local_e0, local_84, local_78);
                        if (cVar3) {
                            if (local_9c == 1) {
                                uVar19 = std::function<char const*(int, int)>::operator()(
                                    (function<char const*(int, int)>*)local_c8, 36, local_270._0_4_);
                            } else {
                                uVar19 = std::function<char const*(int, int)>::operator()(
                                    (function<char const*(int, int)>*)local_c8, 49, local_270._0_4_);
                            }
                            uVar21 = local_270._0_4_;
                            puVar18 = (unsigned int*)local_e0.second();
                            uVar4 = *puVar18;
                            puVar18 = (unsigned int*)local_e0.qw();
                            local_f8.sprintf("Sprite: %s (%d)<br>Resolution: %ux%u", uVar19,
                                             (unsigned long)(unsigned int)uVar21, (unsigned long)uVar4,
                                             (unsigned long)*puVar18);
                            *(uint32_t*)((long)&local_98->field_3960 + 4) = local_270._0_4_;
                        }
                        local_70 = local_70 + local_b0 + local_6c;
                        if (*(int*)(local_d0 + 8) < local_70 + local_6c) {
                            local_70 = 32;
                            local_74 = local_74 - (local_b0 + local_6c);
                        }
                        local_8c = local_70;
                        local_88 = local_74;
                        local_84 = (local_70 + local_6c / 2) - local_84;
                        local_78 = (local_6c / 2 + local_74) - local_78;
                    }
                    local_70 = local_70 + local_b0 + local_6c;
                    if (*(int*)(local_d0 + 8) < local_70 + local_6c) {
                        local_70 = 32;
                        local_74 = local_74 - (local_b0 + local_6c);
                    }
                    this_04 = this_04 + 16;
                } while (this_04 != local_100);
            }
        }
        if (local_a8 != nullptr) {
            local_80->Render(nullptr);
            local_98->field_0->SetClippingRectangle(local_8c, local_88, local_6c, local_6c, true);
            iVar5 = local_6c;
            iVar24 = local_88;
            iVar20 = local_8c;
            uVar4 = math::R8G8B8A8FromColour4(DEBUG_ATLAS_BACKGROUND_COLOUR);
            local_80->AddColouredRectangle(iVar20, iVar24, iVar5, iVar5, uVar4, 1);
            iVar5 = local_78;
            iVar24 = local_84;
            piVar10 = (int*)local_a8->second();
            iVar6 = local_78;
            iVar20 = *piVar10;
            lVar8 = local_a8->second();
            local_80->AddElement(iVar24, iVar5, iVar20 + iVar24, iVar6 + *(int*)(lVar8 + 4), 4294967295, 0.0, 0.0, 1.0,
                                 1.0, local_a8, 1);
            piVar10 = (int*)local_e0.second();
            if (0 < *piVar10) {
                local_e0.Grow(2);
                iVar6 = local_84;
                piVar10 = (int*)local_e0.SSOBeginPtr();
                iVar22 = local_78;
                iVar20 = *piVar10;
                piVar10 = (int*)local_e0.y();
                iVar24 = *piVar10;
                piVar10 = (int*)local_e0.second();
                iVar5 = *piVar10;
                piVar10 = (int*)local_e0.qw();
                local_80->AddOutline(iVar6 + iVar20, iVar22 + iVar24, iVar5, *piVar10, 2, 16711935, 1);
            }
            local_80->Render(nullptr);
            local_98->field_0->SetClippingRectToViewport();
            iVar20 = local_6c + local_a0 * 2 - 1;
            local_80->AddOutline(local_8c - local_a0, local_88 - local_a0, iVar20, iVar20, local_a0, 865730559, 1);
        }
        cVar3 = local_f8.empty();
        if (!cVar3) {
            ((local_270 + 168))->StringView<eastl::fixed_string<char, 40>>(local_f8);
            iVar5 = FontHelpers::PredictHeightAndLines((local_270 + 168), 1024, textProperties);
            iVar24 = local_88;
            iVar20 = local_8c;
            iVar22 = local_a0 + iVar5;
            local_1b8.StringView<eastl::fixed_string<char, 40>>(local_f8);
            iVar6 = FontHelpers::PredictWidthMultiLine(&local_1b8, 1024, textProperties);
            iVar24 = iVar24 - iVar22;
            local_80->AddColouredRectangle(iVar20, iVar24, iVar6, iVar5, 255, 1);
            local_1a8.StringView<eastl::fixed_string<char, 40>>(local_f8);
            fontHelpers.DrawStringMultiline(&local_1a8, iVar20, iVar24, iVar6, iVar5, nullptr, textProperties);
        }
        local_80->Render(nullptr);
        local_80->End();
    LAB_100860c5c:
    }

    // 0x1008614f0
    auto TextureManager::GetHALTexture(const TextureType* textureType, unsigned int arg2,
                                       render::TextureFormatBitSet textureFormatBitSet, bool arg4, bool arg5) {
        unsigned int uVar1;
        unsigned int arg5_00;
        unsigned char* arg4_00;
        unsigned int arg4_01;
        long lVar4;
        TextureManager* textureManager;
        unsigned char* arg1;
        uint32_t in_register_00000014;
        unsigned int uVar5;
        uint64_t in_register_00000081;
        uint64_t in_register_00000089;
        bool in_stack_00000008;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_78;
        shared_ptr<render::Texture3D> local_60;
        ReturnValue local_48;
        TextureFormatBitSet local_38;

        TextureType* textureType_00 = (TextureType*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        uint32_t local_4c = (uint32_t)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
        local_38[0].m_bits = (unsigned int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        if ((TextureType*)TextureType::CUBEMAP == textureType_00) {
            LogAssert("textureType != TextureType::CUBEMAP",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureManager.cpp",
                      461, nullptr);
        }
        unsigned long long local_80 =
            GetTextureCacheKey(&result, textureFormatBitSet.m_bits, textureType_00, &local_38, in_stack_00000008);
        KeepAliveCache<unsigned long long, render::Texture,
                       eastl::map<unsigned long long, shared_ptr<render::Texture>>>* local_68 =
            (KeepAliveCache<unsigned long long, render::Texture,
                            eastl::map<unsigned long long, shared_ptr<render::Texture>>>*)(textureType + 24);
        shared_ptr local_90 = local_68->Find(local_80);
        if (shared_ptr::operator_cast_to_bool(&local_90) == '\0') {
            GetTextureData(&local_48, (TextureManager*)textureType, textureType_00, textureFormatBitSet.m_bits,
                           local_38[0]);
            if (local_48 == nullptr) {
                auto result(&NullTexture);
            } else {
                local_78 = shared_ptr();
                if (in_stack_00000008 == false) {
                    lVar4 = local_48.operator->();
                    uVar1 = *(unsigned int*)(lVar4 + 16);
                    lVar4 = local_48.operator->();
                    uVar5 = *(unsigned int*)(lVar4 + 20);
                    arg4_01 = ((unique_ptr<unsigned char[]>*)local_48.operator->())->get();
                    lVar4 = local_48.operator->();
                    arg5_00 = *(unsigned int*)(lVar4 + 12);
                    lVar4 = local_48.operator->();
                    graphicutils::CreateHALTexture2D<render::Texture2D>(
                        (unsigned int)&local_60, uVar1, (unsigned char*)(unsigned long)uVar5, arg4_01, arg5_00,
                        (uint8_t)(*(uint32_t*)(lVar4 + 8)), (uint8_t)local_4c, true, (TextureFormatBitSet)1,
                        local_38[0].m_bits);
                    local_78 = local_60;
                } else {
                    lVar4 = local_48.operator->();
                    uVar1 = *(unsigned int*)(lVar4 + 16);
                    lVar4 = local_48.operator->();
                    arg4_00 = (unsigned char*)((unsigned long)uVar1 / (unsigned long)*(unsigned int*)(lVar4 + 20));
                    textureManager = (TextureManager*)local_48.operator->();
                    arg1 = (unsigned char*)((unique_ptr<unsigned char[]>*)textureManager)->get();
                    uVar5 = (unsigned int)arg4_00;
                    Rebuild2DTo3D(textureManager, arg1, uVar5, uVar5, uVar5);
                    lVar4 = local_48.operator->();
                    uVar1 = *(unsigned int*)(lVar4 + 12);
                    lVar4 = local_48.operator->();
                    graphicutils::CreateHALTexture3D((unsigned int)&local_60, uVar5, uVar5, arg4_00, (unsigned int)arg1,
                                                     uVar1, (uint8_t)(*(uint32_t*)(lVar4 + 8)), (uint8_t)local_4c, true,
                                                     (TextureFormatBitSet)1);
                    local_78 = local_60;
                }
                result.Insert(*local_68, local_80);
            }
        } else {
            new (&result) shared_ptr(&local_90);
        }
        return result;
    }

    // 0x1008617e0
    unsigned long TextureManager::GetTextureCacheKey(unsigned int arg1, const TextureType* textureType,
                                                     render::TextureFormatBitSet& textureFormatBitSet, bool arg4) {
        uint64_t in_register_00000081;

        TextureType TVar1 = textureType[8];
        unsigned int uVar2 = textureFormatBitSet.GetX();
        return (unsigned long)(uVar2 & 2097151) << 42 | (unsigned long)(uint8_t)TVar1 << 33 | (unsigned long)arg1 |
               (((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) << 32;
    }

    // 0x100861880
    void TextureManager::Rebuild2DTo3D(unsigned char* arg1, int arg2, int arg3, int arg4) {
        unsigned char uVar1;
        unsigned long uVar3;
        uint8_t* puVar4;
        unsigned char* puVar5;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        unsigned long uVar11;
        unique_ptr<unsigned char[]> local_88[8];
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        unsigned char local_31;

        unsigned int local_50 = arg2 * arg3 * arg4 * 4;
        auto puVar2 = AllocateImageData(local_50);
        local_88->unique_ptr<unsigned char*, true, void, void>(puVar2);
        unsigned long local_78 = (unsigned long)(unsigned int)arg2;
        if (0 < arg2) {
            local_58 = (unsigned int)arg4 * arg2 * 4;
            iVar7 = arg2 * 4;
            local_6c = arg2 * arg3 * 4;
            uVar3 = (unsigned long)(unsigned int)arg4;
            iVar9 = 0;
            local_44 = 3;
            local_68 = iVar7;
            do {
                local_54 = iVar9;
                if (0 < arg3) {
                    iVar8 = 0;
                    iVar9 = local_44;
                    iVar10 = local_44;
                    do {
                        uVar11 = uVar3;
                        local_64 = iVar8;
                        local_60 = iVar10;
                        local_5c = iVar9;
                        if (0 < (int)(unsigned int)arg4) {
                            do {
                                puVar2 = arg1;
                                local_40 = iVar9 - 2;
                                local_38 = (((uint32_t)local_38._1_3_ << 8) | (uint8_t)(arg1[iVar9 - 3]));
                                local_3c = iVar10 - 2;
                                puVar4 = (uint8_t*)(*local_88)[(long)(iVar10 - 3)];
                                *puVar4 = (uint8_t)local_38;
                                local_38 = iVar9 - 1;
                                local_31 = puVar2[local_40];
                                local_40 = iVar10 - 1;
                                puVar5 = (unsigned char*)(*local_88)[(long)local_3c];
                                *puVar5 = local_31;
                                local_3c = (((uint32_t)local_3c._1_3_ << 8) | (uint8_t)puVar2[local_38]);
                                puVar4 = (uint8_t*)(*local_88)[(long)local_40];
                                *puVar4 = (uint8_t)local_3c;
                                uVar1 = puVar2[iVar9];
                                puVar2 = (unsigned char*)(*local_88)[(long)iVar10];
                                *puVar2 = uVar1;
                                iVar9 = iVar9 + local_68;
                                iVar10 = iVar10 + local_6c;
                                uVar11 = uVar11 - 1;
                                iVar7 = local_68;
                            } while (uVar11 != 0);
                        }
                        iVar8 = local_64 + 1;
                        iVar9 = local_5c + local_58;
                        iVar10 = local_60 + iVar7;
                    } while (iVar8 != arg3);
                }
                iVar9 = local_54 + 1;
                local_44 = local_44 + 4;
            } while (iVar9 != (int)local_78);
        }
        auto pvVar6 = local_88->get();
        _memcpy(arg1, pvVar6, (long)(int)local_50);
    }

    // 0x100861b50
    auto TextureManager::GetCubeTextureData(unsigned int arg1, render::TextureFormatBitSet textureFormatBitSet) {
        unsigned int arg2;
        ModularParticleEmitter* this_01;

        auto this_00 = field_0->GetMaterialManager();
        if (!(this_00->MaterialsReady())) {
            auto result(&NullTextureData);
        } else {
            this_01 = (ModularParticleEmitter*)this_00->GetMaterial(arg1);
            if (!(this_01->ShowSkybox())) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureManager.cpp",
                                567, "TextureManager.getCubeMap: Missing material with ID %u", (unsigned long)arg1);
            }
            if (this_01->IsRT7()) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureManager.cpp",
                                572,
                                "TextureManager.getCubeMap: Material with ID %u must be an RT5 material but is not",
                                (unsigned long)arg1);
            }
            if (!(this_01->IsEmitting())) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureManager.cpp",
                                577, "TextureManager.getCubeMap: Material with ID %u does not have a cubemap defined",
                                (unsigned long)arg1);
            }
            arg2 = this_01->GetCompletedGold();
            GetTextureData(&result, this, (TextureType*)TextureType::CUBEMAP, arg2, textureFormatBitSet);
        }
        return result;
    }

    // 0x100861c60
    auto TextureManager::GetHALTextureCube(unsigned int arg1, render::TextureFormatBitSet textureFormatBitSet,
                                           bool arg3) {
        unsigned int arg2;
        unsigned int arg5;
        unsigned int arg4;
        long lVar3;
        uint64_t in_register_00000081;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_68;
        unsigned int local_4c;
        ReturnValue local_48;
        TextureFormatBitSet local_38;

        uint32_t local_50 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg3);
        local_38[0].m_bits = textureFormatBitSet.m_bits;
        unsigned long long local_58 =
            GetTextureCacheKey(&result, arg1, (TextureType*)TextureType::CUBEMAP, &local_38, false);
        shared_ptr local_78 = field_288.Find(local_58);
        bool cVar1 = shared_ptr::operator_cast_to_bool(&local_78);
        if (cVar1) {
            auto result(&local_78);
            goto LAB_100861dbe;
        }
        GetCubeTextureData(&local_48, this, arg1, local_38[0]);
        if (local_48 != nullptr) {
            cVar1 = (local_48.operator->())->operator_cast_to_bool();
            if (!cVar1)
                goto LAB_100861da6;
            lVar3 = local_48.operator->();
            arg2 = *(unsigned int*)(lVar3 + 16);
            lVar3 = local_48.operator->();
            local_4c = *(unsigned int*)(lVar3 + 20);
            arg4 = ((unique_ptr<unsigned char[]>*)local_48.operator->())->get();
            lVar3 = local_48.operator->();
            arg5 = *(unsigned int*)(lVar3 + 12);
            lVar3 = local_48.operator->();
            graphicutils::CreateHALTextureCube((unsigned int)&local_68, arg2, (unsigned char*)(unsigned long)local_4c,
                                               arg4, arg5, (uint8_t)(*(uint32_t*)(lVar3 + 8)), (uint8_t)local_50,
                                               (TextureFormatBitSet)1);
            result.Insert(field_288, local_58);
        } else {
        LAB_100861da6:
            new (&result) shared_ptr(&NullTextureCube);
        }
    LAB_100861dbe:
        return result;
    }

    // 0x100862060
    auto TextureManager::GetDefaultTextureCube(int arg1, bool arg2) {
        auto result;
        MapArea* pMVar2;
        long lVar3;
        unsigned int arg1_00;

        if (arg1 < 0) {
            LogAssert("materialID > -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureManager.cpp",
                      681, nullptr);
        }
        TextureFormatBitSet local_30;
        if (UseCompressedTextures() == '\0') {
            arg1_00 = 5;
        } else {
            pMVar2 = (MapArea*)Instance();
            lVar3 = pMVar2->GetOrigin();
            if (*(char*)(lVar3 + 161) == '\0') {
                pMVar2 = (MapArea*)pMVar2->Instance();
                lVar3 = pMVar2->GetOrigin();
                if (*(char*)(lVar3 + 162) == '\0') {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/textures/TextureManager.cpp",
                                    696, nullptr);
                }
                arg1_00 = 2;
            } else {
                arg1_00 = 0;
            }
        }
        &local_30->AddFormatType(arg1_00);
        pMVar2 = (MapArea*)&local_30->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 147) != '\0') {
            local_30.AddFormatType(7);
        }
        GetHALTextureCube(&result, this, arg1, local_30[0], arg2);
        return result;
    }

} // namespace jag::graphics
