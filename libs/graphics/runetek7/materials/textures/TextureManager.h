// libs/graphics/runetek7/materials/textures/TextureManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class TextureManager {
    public:
        void ClearCache();
        TextureAtlasManager GetTextureAtlasManager();
        SpriteAtlasManager* GetSpriteAtlasManager();
        bool UseCompressedTextures() const;
        uint32_t GetMaterialSettings(TextureAtlasMaterialSettings& textureAtlasMaterialSettings, unsigned int arg2);
        auto GetTextureData(const TextureType* textureType, unsigned int arg2,
                            render::TextureFormatBitSet textureFormatBitSet);
        void AllocateImageData(unsigned int arg1);
        void Initialise(RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                        TextureDataProvider* textureDataProvider);
        void Destroy();
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void MainLogic();
        void MainDraw();
        void UpdateCaches();
        void RenderDebug(const render::DrawCallState& drawCallState, int arg2, int arg3,
                         std::function<char const*(int, int)> const& callback1, const std::function<bool()>& callback2,
                         FontHelpers& fontHelpers, TextProperties& textProperties);
        auto GetHALTexture(const TextureType* textureType, unsigned int arg2,
                           render::TextureFormatBitSet textureFormatBitSet, bool arg4, bool arg5);
        unsigned long GetTextureCacheKey(unsigned int arg1, const TextureType* textureType,
                                         render::TextureFormatBitSet& textureFormatBitSet, bool arg4);
        void Rebuild2DTo3D(unsigned char* arg1, int arg2, int arg3, int arg4);
        auto GetCubeTextureData(unsigned int arg1, render::TextureFormatBitSet textureFormatBitSet);
        auto GetHALTextureCube(unsigned int arg1, render::TextureFormatBitSet textureFormatBitSet, bool arg3);
        auto GetDefaultTextureCube(int arg1, bool arg2);
        TextureManager();
        ~TextureManager();
        static int32_t DEBUG_ATLAS_RESOLUTION[5]; // = { 256, 0, 0, 0, 0 }
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullTextureData; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullTexture; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullTextureCube; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static bool DEBUG_ATLASES;
        static uint8_t DEBUG_SPRITE_ATLASES[15];
        static math::Vector4T<float> DEBUG_ATLAS_BACKGROUND_COLOUR;
        static bool DEBUG_SPRITE_ATLAS_USAGE;
        static bool DEBUG_TEXTURE_ATLAS_USAGE;
        static bool DEBUG_TEXTURE_ATLAS_MATERIAL_SETTINGS;

    private:
        RT7Core* field_0;
        Js5ResourceProvider* field_8;
        TextureDataProvider* field_16;
        uint8_t _unknown_24[264];
        unsigned long long field_288;
        uint8_t _unknown_296[520];
        TextureAtlasManager m_textureAtlasManager;
        uint8_t _unknown_3704[256];
        uint64_t field_3960;
        uint8_t _unknown_3968[4];
    };

    // 0x1001c4530
    void TextureManager::ClearCache() {
        field_552.clear();
    }

    // 0x100428210
    SpriteAtlasManager* TextureManager::GetSpriteAtlasManager() {
        return (SpriteAtlasManager*)&field_3704;
    }

    // 0x1007ba5a0
    bool TextureManager::UseCompressedTextures() const {
        auto this_00 = Instance();
        if (((RenderDeviceCaps*)this_00->GetOrigin())->GetCompressedTextures() == '\0') {
            return false;
        }
        return TextureAtlasManager::GetTargetTextureMode() != 2;
    }

    // 0x10087d800
    void TextureManager::RenderDebug(render::DrawCallState const&, int, int,
                                     std::function<char const*(int, int)> const&, std::function<bool()> const&,
                                     FontHelpers&,
                                     TextProperties&)::$_19::operator()(shared_ptr<TextureAtlas>& textureAtlas) const {
        int iVar2;
        int iVar3;
        int* piVar4;
        int* piVar5;
        int* piVar6;
        bool cVar7;
        Layout* pLVar12;
        EntityHighlightGlobalState* this_00;
        unsigned int* puVar14;
        pair<int, eastl::vector<int, BucketAllocatorEASTL> _>* ppVar15;
        pair<int, eastl::vector<int, BucketAllocatorEASTL> _>* ppVar16;
        vector<math::Rect<float>, BucketAllocatorEASTL>* pvVar17;
        Rect<float>* rect;
        float* pfVar18;
        long lVar20;
        unsigned int* puVar21;
        unsigned long arg1;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        uint32_t uVar28;
        Float4 local_b0;
        GUIManager* local_90;
        unsigned long local_88;
        Layout* local_80;
        vector<unsigned int>* local_78;
        unsigned int local_6c;
        unsigned int local_68;
        unsigned int local_64;
        unsigned int local_60;
        unsigned int local_5c;
        GUIManager* local_48;

        long local_58 = *(long*)(this + 40);
        GUIManager* pGVar13 = *(GUIManager**)this;
        int iVar9 = **(int**)(this + 8);
        int iVar22 = **(int**)(this + 16);
        int iVar1 = **(int**)(this + 24);
        unsigned int uVar8 = math::R8G8B8A8FromColour4(DEBUG_ATLAS_BACKGROUND_COLOUR);
        pGVar13->AddColouredRectangle(iVar9, iVar22, iVar1, iVar1, uVar8, 1);
        GUIManager* local_40 = *(GUIManager**)this;
        iVar9 = **(int**)(this + 8);
        iVar22 = **(int**)(this + 16);
        iVar1 = **(int**)(this + 24);
        auto pTVar10 = textureAtlas.operator->();
        auto pTVar11 = pTVar10->GetTexture();
        local_40->AddElement(iVar9, iVar22, iVar1 + iVar9, iVar1 + iVar22, 4294967295, 0.0, 0.0, 1.0, 1.0, pTVar11, 1);
        iVar9 = **(int**)(this + 32);
        iVar22 = **(int**)(this + 24) + iVar9 * 2 - 1;
        uint64_t uVar19 = (((uint64_t)((int)((unsigned long)pTVar11 >> 32)) << 32) | (uint32_t)865730559);
        __19* local_38 = this;
        (*(GUIManager**)this)
            ->AddOutline(**(int**)(this + 8) - iVar9, **(int**)(this + 16) - iVar9, iVar22, iVar22, iVar9, 865730559,
                         1);
        TextureAtlasUsageMap local_f8;
        if ((DEBUG_TEXTURE_ATLAS_USAGE != '\0') || (cVar7 = ((local_58 + 3928))->empty(), !cVar7)) {
            pTVar10 = (TextureAtlas*)textureAtlas.operator->();
            pTVar10->GetUsageMap(local_f8);
        }
        __19* p_Var23 = local_38;
        if (DEBUG_TEXTURE_ATLAS_USAGE != '\0') {
            pLVar12 = (Layout*)local_f8.SSOBeginPtr();
            this_00 = (EntityHighlightGlobalState*)pLVar12->HeapBeginPtr();
            local_48 = (GUIManager*)pLVar12->end();
            if ((GUIManager*)this_00 != local_48) {
                do {
                    uVar28 = (uint32_t)((unsigned long)uVar19 >> 32);
                    local_40 = *(GUIManager**)p_Var23;
                    iVar9 = **(int**)(p_Var23 + 8);
                    fVar24 = (float)this_00->GetOverbright();
                    iVar22 = **(int**)(p_Var23 + 24);
                    iVar1 = **(int**)(p_Var23 + 16);
                    fVar25 = (float)this_00->GetAlpha();
                    iVar2 = **(int**)(p_Var23 + 24);
                    fVar26 = (float)this_00->GetBrightpassThreshold();
                    iVar3 = **(int**)(p_Var23 + 24);
                    fVar27 = (float)this_00->GetOutlineRadiusAdjustment();
                    uVar19 = (((uint64_t)uVar28 << 32) | (uint32_t)1);
                    local_40->AddColouredRectangle((int)((float)iVar22 * fVar24) + iVar9,
                                                   (int)((float)iVar2 * fVar25) + iVar1, (int)((float)iVar3 * fVar26),
                                                   (int)((float)**(int**)(p_Var23 + 24) * fVar27), 16711782, 1);
                    this_00 = (EntityHighlightGlobalState*)&this_00->m_playerNPCAttackOpPriority;
                    p_Var23 = local_38;
                } while ((GUIManager*)this_00 != local_48);
            }
            pLVar12 = (Layout*)local_f8.second();
            pGVar13 = (GUIManager*)pLVar12->HeapBeginPtr();
            local_48 = (GUIManager*)pLVar12->end();
            if (pGVar13 != local_48) {
                do {
                    uVar28 = (uint32_t)((unsigned long)uVar19 >> 32);
                    local_40 = *(GUIManager**)p_Var23;
                    iVar9 = **(int**)(p_Var23 + 8);
                    fVar24 = (float)pGVar13->GetOverbright();
                    iVar22 = **(int**)(p_Var23 + 24);
                    iVar1 = **(int**)(p_Var23 + 16);
                    fVar25 = (float)pGVar13->GetAlpha();
                    iVar2 = **(int**)(p_Var23 + 24);
                    fVar26 = (float)pGVar13->GetBrightpassThreshold();
                    iVar3 = **(int**)(p_Var23 + 24);
                    fVar27 = (float)pGVar13->GetOutlineRadiusAdjustment();
                    uVar19 = (((uint64_t)uVar28 << 32) | (uint32_t)1);
                    local_40->AddColouredRectangle((int)((float)iVar22 * fVar24) + iVar9,
                                                   (int)((float)iVar2 * fVar25) + iVar1, (int)((float)iVar3 * fVar26),
                                                   (int)((float)**(int**)(p_Var23 + 24) * fVar27), 4278190182, 1);
                    pGVar13 = (GUIManager*)&pGVar13->field_16;
                    p_Var23 = local_38;
                } while (pGVar13 != local_48);
            }
        }
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(local_58 + 3928);
        cVar7 = this_01->empty();
        uVar28 = (uint32_t)((unsigned long)uVar19 >> 32);
        if (!cVar7) {
            local_80 = (Layout*)local_f8.GetMaterial();
            iVar9 = this_01->size();
            uVar28 = (uint32_t)((unsigned long)uVar19 >> 32);
            if (0 < iVar9) {
                arg1 = 0;
                local_78 = (vector<unsigned int>*)this_01;
                do {
                    puVar14 = (unsigned int*)(*this_01)[arg1];
                    pLVar12 = local_80;
                    uVar8 = *puVar14;
                    local_5c = 8913151;
                    if (arg1 == *(unsigned int*)(local_58 + 3960)) {
                        local_5c = 16711935;
                    }
                    local_88 = arg1;
                    ppVar15 = (pair<int, eastl::vector<int, BucketAllocatorEASTL> _>*)local_80->HeapBeginPtr();
                    ppVar16 = (pair<int, eastl::vector<int, BucketAllocatorEASTL> _>*)pLVar12->end();
                    ppVar15 = std::operator()(
                        ppVar15, ppVar16,
                        (_lambda_eastl__pair<
                            int, eastl::vector<int, BucketAllocatorEASTL> _> _const___1_*)(unsigned long)uVar8);
                    ppVar16 = (pair<int, eastl::vector<int, BucketAllocatorEASTL> _>*)pLVar12->end();
                    if (ppVar15 != ppVar16) {
                        pGVar13 = (GUIManager*)((ppVar15 + 8))->HeapBeginPtr();
                        local_90 = (GUIManager*)((ppVar15 + 8))->end();
                        if (pGVar13 != local_90) {
                            do {
                                uVar28 = (uint32_t)((unsigned long)uVar19 >> 32);
                                uVar8 = *(unsigned int*)&pGVar13->field_0;
                                if ((long)(int)uVar8 < 0) {
                                    pvVar17 = (vector<math::Rect<float>, BucketAllocatorEASTL>*)local_f8.SSOBeginPtr();
                                    rect = (Rect<float>*)(*pvVar17)[(unsigned long)~uVar8];
                                } else {
                                    pvVar17 = (vector<math::Rect<float>, BucketAllocatorEASTL>*)local_f8.second();
                                    rect = (Rect<float>*)(*pvVar17)[(long)(int)uVar8 - 1];
                                }
                                local_b0 = math::Float4(*rect);
                                local_40 = pGVar13;
                                local_b0.Scale((float)**(int**)(p_Var23 + 24));
                                local_b0.Grow(2.0);
                                local_48 = *(GUIManager**)p_Var23;
                                iVar9 = **(int**)(p_Var23 + 8);
                                pfVar18 = (float*)local_b0.SSOBeginPtr();
                                fVar24 = *pfVar18;
                                iVar22 = **(int**)(p_Var23 + 16);
                                pfVar18 = (float*)local_b0.y();
                                fVar25 = *pfVar18;
                                pfVar18 = (float*)local_b0.second();
                                fVar26 = *pfVar18;
                                pfVar18 = (float*)local_b0.qw();
                                p_Var23 = local_38;
                                uVar19 = (((uint64_t)uVar28 << 32) | (uint32_t)local_5c);
                                local_48->AddOutline((int)fVar24 + iVar9, (int)fVar25 + iVar22, (int)fVar26,
                                                     (int)*pfVar18, 2, local_5c, 1);
                                pGVar13 = (GUIManager*)((long)&local_40->field_0 + 4);
                            } while (pGVar13 != local_90);
                        }
                    }
                    this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)local_78;
                    arg1 = local_88 + 1;
                    iVar9 = local_78->size();
                    uVar28 = (uint32_t)((unsigned long)uVar19 >> 32);
                } while ((long)arg1 < (long)iVar9);
            }
        }
        if ((**(int**)(p_Var23 + 8) <= **(int**)(p_Var23 + 48)) &&
            (**(int**)(p_Var23 + 48) <= **(int**)(p_Var23 + 8) + **(int**)(p_Var23 + 24))) {
            if ((**(int**)(p_Var23 + 16) <= **(int**)(p_Var23 + 56)) &&
                (**(int**)(p_Var23 + 56) <= **(int**)(p_Var23 + 16) + **(int**)(p_Var23 + 24))) {
                pTVar10 = (TextureAtlas*)textureAtlas.operator->();
                uVar19 = pTVar10->GetTexture();
                p_Var23 = local_38;
                **(uint64_t**)(local_38 + 64) = uVar19;
                local_48._0_4_ = (float)(**(int**)(local_38 + 48) - **(int**)(local_38 + 8));
                local_40._0_4_ = (float)**(int**)(local_38 + 24);
                puVar14 =
                    (unsigned int*)((compressed_pair_imp<
                                        eastl::basic_string<
                                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>,
                                        0>*)**(uint64_t**)(local_38 + 64))
                        ->second();
                **(int**)(p_Var23 + 72) = (int)(((float)*puVar14 * local_48._0_4_) / local_40._0_4_);
                local_48 = (GUIManager*)(((uint64_t)local_48._4_4_ << 32) |
                                         (uint32_t)((float)(**(int**)(p_Var23 + 56) - **(int**)(p_Var23 + 16))));
                local_40 = (GUIManager*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)**(int**)(p_Var23 + 24)));
                lVar20 =
                    ((compressed_pair_imp<
                         eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                         eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)**(uint64_t**)(p_Var23 + 64))
                        ->second();
                **(int**)(p_Var23 + 80) =
                    (int)(((float)*(unsigned int*)(lVar20 + 4) * local_48._0_4_) / local_40._0_4_);
                local_b0 = eastl::vector<eastl::pair<int, int>>();
                pTVar10 = (TextureAtlas*)textureAtlas.operator->();
                cVar7 = pTVar10->GetDetailsAtPosition(local_6c, local_68, local_64, local_60, local_b0,
                                                      **(int**)(local_38 + 72), **(int**)(local_38 + 80));
                if (!cVar7) {
                    (*(*(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88))) = "Slot: Empty";
                } else {
                    (*(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88))
                        ->sprintf("Slot: %d,%d<br>Texture ID: %d (Resolution: %ux%u)<br>Materials:",
                                  (unsigned long)local_6c, (unsigned long)local_68, (unsigned long)local_64,
                                  (unsigned long)local_60, (((uint64_t)uVar28 << 32) | (uint32_t)local_60));
                    puVar14 = (unsigned int*)local_b0.HeapBeginPtr();
                    puVar21 = (unsigned int*)local_b0.end();
                    p_Var23 = local_38;
                    for (; local_38 = p_Var23, puVar14 != puVar21; puVar14 = puVar14 + 2) {
                        uVar19 = std::function<char const*(int, int)>::operator()(
                            *(function<char const*(int, int)>**)(p_Var23 + 96), 32, *puVar14);
                        (*(basic_string<char, BucketAllocatorEASTL>**)(p_Var23 + 88))
                            ->append_sprintf("<br>\t%s<br>\t\tID: %d<br>\t\tUsage: ", uVar19, (unsigned long)*puVar14);
                        p_Var23 = local_38;
                        uVar8 = puVar14[1];
                        if (uVar8 == 0) {
                            (*(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88))->append("Albedo");
                        } else if (uVar8 == 1) {
                            (*(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88))->append("Normal/HDR");
                        } else if (uVar8 == 2) {
                            (*(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88))
                                ->append("Metalness/Roughness");
                        }
                        if (**(char**)(p_Var23 + 104) != '\0') {
                            (*(vector<int>**)(p_Var23 + 112))->push_back(*puVar14);
                        }
                        p_Var23 = local_38;
                    }
                }
                p_Var23 = local_38;
                piVar4 = *(int**)(local_38 + 8);
                piVar5 = *(int**)(local_38 + 24);
                piVar6 = *(int**)(local_38 + 120);
                iVar9 = *piVar6 + *piVar5 + *piVar4;
                *piVar4 = iVar9;
                if (*(int*)(*(long*)(local_38 + 128) + 8) < iVar9 + *piVar5) {
                    *piVar4 = 32;
                    **(int**)(local_38 + 16) = **(int**)(local_38 + 16) - (*piVar6 + *piVar5);
                }
                piVar6 = *(int**)(local_38 + 136);
                *piVar6 = *piVar4;
                piVar4 = *(int**)(local_38 + 144);
                *piVar4 = **(int**)(local_38 + 16);
                **(int**)(local_38 + 72) = *piVar5 / 2 + (*piVar6 - **(int**)(local_38 + 72));
                **(int**)(local_38 + 80) = *piVar5 / 2 + (*piVar4 - **(int**)(local_38 + 80));
            }
        }
        piVar4 = *(int**)(p_Var23 + 8);
        piVar5 = *(int**)(p_Var23 + 24);
        piVar6 = *(int**)(p_Var23 + 120);
        iVar9 = *piVar6 + *piVar5 + *piVar4;
        *piVar4 = iVar9;
        if (*(int*)(*(long*)(p_Var23 + 128) + 8) < iVar9 + *piVar5) {
            *piVar4 = 32;
            **(int**)(p_Var23 + 16) = **(int**)(p_Var23 + 16) - (*piVar6 + *piVar5);
        }
        if (DEBUG_TEXTURE_ATLAS_MATERIAL_SETTINGS != '\0') {
            iVar9 = *piVar4;
            pGVar13 = *(GUIManager**)p_Var23;
            iVar22 = **(int**)(p_Var23 + 16);
            iVar1 = *piVar5;
            uVar8 = math::R8G8B8A8FromColour4(DEBUG_ATLAS_BACKGROUND_COLOUR);
            pGVar13->AddColouredRectangle(iVar9, iVar22, iVar1, iVar1, uVar8, 1);
            pGVar13 = *(GUIManager**)local_38;
            iVar9 = **(int**)(local_38 + 8);
            iVar22 = **(int**)(local_38 + 16);
            iVar1 = **(int**)(local_38 + 24);
            pTVar10 = (TextureAtlas*)textureAtlas.operator->();
            pTVar11 = (Texture*)pTVar10->GetSettingsTexture();
            pGVar13->AddElement(iVar9, iVar22, iVar1 + iVar9, iVar1 + iVar22, 4294967295, 0.0, 0.0, 1.0, 1.0, pTVar11,
                                1);
            iVar9 = **(int**)(local_38 + 32);
            iVar22 = **(int**)(local_38 + 24) + iVar9 * 2 - 1;
            (*(GUIManager**)local_38)
                ->AddOutline(**(int**)(local_38 + 8) - iVar9, **(int**)(local_38 + 16) - iVar9, iVar22, iVar22, iVar9,
                             865730559, 1);
            piVar4 = *(int**)(local_38 + 8);
            piVar5 = *(int**)(local_38 + 24);
            piVar6 = *(int**)(local_38 + 120);
            iVar9 = *piVar6 + *piVar5 + *piVar4;
            *piVar4 = iVar9;
            if (*(int*)(*(long*)(local_38 + 128) + 8) < iVar9 + *piVar5) {
                *piVar4 = 32;
                **(int**)(local_38 + 16) = **(int**)(local_38 + 16) - (*piVar6 + *piVar5);
            }
        }
    }

    // 0x10087e400
    uint32_t TextureManager::RenderDebug(render::DrawCallState const&, int, int,
                                         std::function<char const*(int, int)> const&, std::function<bool()> const&,
                                         FontHelpers&,
                                         TextProperties&)::$_19::operator()(shared_ptr<TextureAtlas>&) const ::{
        lambda(eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL>> const&) #1
    }
    ::operator()(const eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL>>& arg1) const {
        return *(int*)arg1 == *(int*)this;
    }

    // 0x10098e260
    TextureManager::TextureManager() {

        eastl::string local_58("HAL Texture Cache");
        new (&field_24) KeepAliveCache<unsigned long long, render::Texture,
                                       eastl::map<unsigned long long, shared_ptr<render::Texture>>>(local_58, 32, 30.0);
        local_58 = eastl::string("HAL Texture Cube Cache");
        new (&field_288)
            KeepAliveCache<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>(local_58, 32, 30.0);
        local_58 = eastl::string("Texture Data Cache");
        new (&field_552)
            KeepAliveCache<unsigned long long, TextureData, eastl::map<unsigned long long, shared_ptr<TextureData>>>(
                local_58, 1024, 30.0);
        new (m_textureAtlasManager) TextureAtlasManager();
        new (&field_3704) SpriteAtlasManager();
        new (&field_3928) eastl::vector<int>();
        field_3960 = 18446744073709551615;
    }

    // 0x100991050
    TextureManager::~TextureManager() {
        field_3928.~vector();
        field_3704.~SpriteAtlasManager();
        m_textureAtlasManager->~TextureAtlasManager();
        field_552.~KeepAliveCache();
        field_24.~KeepAliveCache();
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001c4550
    void OSRenderCore_RenderThread_RSeven::UpdateGBufferRenderTargets() {
        unsigned long local_38[3];

        uint8_t* this_02 = &field_8;
        RT7Core* pRVar1 = (RT7Core*)(*this_02).operator->();
        auto pEVar2 = pRVar1->GetEffectManager();
        bool arg2 = (bool)pEVar2->IsEnabled(110);
        pRVar1 = (RT7Core*)(*this_02).operator->();
        pEVar2 = pRVar1->GetEffectManager();
        pEVar2->EnableEffect(115, arg2);
        local_38[0] = 0;
        local_38[1] = 1;
        pRVar1 = (RT7Core*)(*this_02).operator->();
        auto this_00 = pRVar1->GetGBufferRT();
        ((RenderTargets*)(*this_00).operator->())->SetEnabledRenderTargets((unsigned long)arg2 + 1, local_38);
    }

} // namespace jag::oldscape
