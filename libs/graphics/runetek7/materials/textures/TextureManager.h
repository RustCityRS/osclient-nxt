// libs/graphics/runetek7/materials/textures/TextureManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class TextureManager {
    public:
        void ClearCache();
        TextureAtlasManager GetTextureAtlasManager();
        GetSpriteAtlasManager();
        bool UseCompressedTextures() const;
        GetMaterialSettings(TextureAtlasMaterialSettings&, unsigned int);
        TextureType* GetTextureData(TextureType const*, unsigned int, render::TextureFormatBitSet);
        void AllocateImageData(unsigned int);
        void Initialise(RT7Core*, Js5ResourceProvider*, TextureDataProvider*);
        void Destroy();
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void MainLogic();
        void MainDraw();
        void UpdateCaches();
        void RenderDebug(render::DrawCallState const&, int, int, std::function<char const*(int, int)> const&,
                         std::function<bool()> const&, FontHelpers&, TextProperties&);
        TextureType* GetHALTexture(TextureType const*, unsigned int, render::TextureFormatBitSet, bool, bool);
        ulong GetTextureCacheKey(unsigned int, TextureType const*, render::TextureFormatBitSet&, bool);
        void Rebuild2DTo3D(unsigned char*, int, int, int);
        TextureType* GetCubeTextureData(unsigned int, render::TextureFormatBitSet);
        TextureManager* GetHALTextureCube(unsigned int, render::TextureFormatBitSet, bool);
        GetDefaultTextureCube(int, bool);
        TextureManager();
        ~TextureManager();
        static /* 20 bytes */ DEBUG_ATLAS_RESOLUTION; // = { 256, 0, 0, 0, 0 }
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullTextureData;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullTexture;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullTextureCube;
        static /* 1 bytes */ DEBUG_ATLASES;
        static /* 15 bytes */ DEBUG_SPRITE_ATLASES;
        static /* 16 bytes */ DEBUG_ATLAS_BACKGROUND_COLOUR;
        static /* 1 bytes */ DEBUG_SPRITE_ATLAS_USAGE;
        static /* 1 bytes */ DEBUG_TEXTURE_ATLAS_USAGE;
        static /* 1 bytes */ DEBUG_TEXTURE_ATLAS_MATERIAL_SETTINGS;

        // data members, from how the methods use this: 3972 bytes
        RT7Core* field_0;              // offset 0
        Js5ResourceProvider* field_8;  // offset 8
        TextureDataProvider* field_16; // offset 16
        char _unknown_24[792];
        TextureAtlasManager m_textureAtlasManager; // offset 816
        char _unknown_3704[256];
        undefined8 field_3960; // offset 3960
        char _unknown_3968[4];
    };

    // 0x1001c4530, 32 bytes, inline, placed by class name and debug map
    // TextureManager::ClearCache()
    void TextureManager::ClearCache() {
        (&field_552)->clear();
    }

    // 0x100428210, 16 bytes, inline, placed by class name
    // TextureManager::GetSpriteAtlasManager()
    undefined1* TextureManager::GetSpriteAtlasManager() {
        return &field_3704;
    }

    // 0x1007ba5a0, 48 bytes, inline, placed by class name
    // TextureManager::UseCompressedTextures() const
    bool TextureManager::UseCompressedTextures() {
        MapArea* this_00;
        RenderDeviceCaps* this_01;

        this_00 = (MapArea*)Instance();
        this_01 = (RenderDeviceCaps*)this_00->GetOrigin();
        if (this_01->GetCompressedTextures() == '\0') {
            return false;
        }
        return TextureAtlasManager::GetTargetTextureMode() != 2;
    }

    // 0x10087d800, 2576 bytes, inline, placed by class name
    // TextureManager::RenderDebug(render::DrawCallState const&, int, int, std::function<char const* (int, int)> const&, std::function<bool ()> const&, FontHelpers&, TextProperties&)::$_19::operator()(shared_ptr<TextureAtlas>&) const
    /* TextureManager::RenderDebug(render::DrawCallState const&, int, int,
   std::function<char const* (int, int)> const&, std::function<bool ()> const&,
   FontHelpers&,
   TextProperties&)::$_19::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&)
   const */

    void TextureManager::RenderDebug(render::DrawCallState_const&, int, int,
                                     std::function<char const*(int, int)> const&, std::function<bool()> const&,
                                     FontHelpers&, TextProperties&)::$_19::operator()(shared_ptr* param_1) {
        undefined4 uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int* piVar6;
        int* piVar7;
        int* piVar8;
        char cVar9;
        undefined4 uVar10;
        int iVar11;
        undefined4 uVar12;
        TextureAtlas* pTVar13;
        undefined8 uVar14;
        vector* pvVar15;
        EntityHighlightGlobalState* this_00;
        Layout* pLVar16;
        GUIManager* this_01;
        undefined4* puVar17;
        undefined8 uVar18;
        type* ptVar19;
        pair* ppVar20;
        pair* ppVar21;
        uint* puVar22;
        vector<math::Rect<float>, BucketAllocatorEASTL>* this_02;
        Vector4T* pVVar23;
        float* pfVar24;
        long lVar25;
        uint* puVar26;
        int iVar27;
        ulong uVar28;
        TextureAtlasUsageMap* pTVar29;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_03;
        __19* p_Var30;
        float fVar31;
        float fVar32;
        float fVar33;
        float fVar34;
        undefined8 in_stack_fffffffffffffef8;
        undefined4 uVar35;
        undefined4 uVar36;
        TextureAtlasUsageMap local_f8;
        Float4 local_b0;
        uint* local_90;
        ulong local_88;
        Layout* local_80;
        vector<unsigned int, eastl::allocator>* local_78;
        uint local_6c;
        uint local_68;
        uint local_64;
        uint local_60[2];
        long local_58;
        GUIManager* local_48;
        uint* local_40;
        __19* local_38;

        uVar35 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 32);
        local_58 = *(long*)(this + 40);
        uVar14 = *(undefined8*)this;
        uVar36 = **(undefined4**)(this + 8);
        uVar1 = **(undefined4**)(this + 16);
        uVar12 = **(undefined4**)(this + 24);
        uVar10 = math::R8G8B8A8FromColour4((Vector4T*)&DEBUG_ATLAS_BACKGROUND_COLOUR);
        uVar14->AddColouredRectangle(uVar36, uVar1, uVar12, uVar12, uVar10, CONCAT44(uVar35, 1));
        local_40 = *(uint**)this;
        iVar11 = **(int**)(this + 8);
        iVar27 = **(int**)(this + 16);
        iVar2 = **(int**)(this + 24);
        pTVar13 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
        uVar14 = pTVar13->GetTexture();
        0->AddElement(0, 1065353216, 1065353216, local_40, iVar11, iVar27, iVar2 + iVar11, iVar2 + iVar27, 4294967295,
                      uVar14, 1);
        iVar11 = **(int**)(this + 32);
        pTVar29 = (TextureAtlasUsageMap*)(ulong)(uint)(**(int**)(this + 8) - iVar11);
        iVar27 = **(int**)(this + 24) + iVar11 * 2 + -1;
        uVar14 = CONCAT44((int)((ulong)uVar14 >> 32), 865730559);
        local_38 = this;
        (*(GUIManager**)this)->AddOutline(pTVar29, **(int**)(this + 16) - iVar11, iVar27, iVar27, iVar11, uVar14, 1);
        new (&local_f8) TextureAtlasUsageMap();
        if ((DEBUG_TEXTURE_ATLAS_USAGE != '\0') || (cVar9 = ((local_58 + 3928))->empty(), cVar9 == '\0')) {
            pTVar13 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
            pTVar29 = &local_f8;
            pTVar13->GetUsageMap(pTVar29);
        }
        p_Var30 = local_38;
        if (DEBUG_TEXTURE_ATLAS_USAGE != '\0') {
            pvVar15 = local_f8.SSOBeginPtr(pTVar29);
            this_00 = (EntityHighlightGlobalState*)pvVar15->HeapBeginPtr();
            local_48 = (GUIManager*)pvVar15->end();
            if ((GUIManager*)this_00 != local_48) {
                do {
                    uVar36 = (undefined4)((ulong)uVar14 >> 32);
                    local_40 = *(uint**)p_Var30;
                    iVar11 = **(int**)(p_Var30 + 8);
                    fVar31 = (float)this_00->GetOverbright();
                    iVar27 = **(int**)(p_Var30 + 24);
                    iVar2 = **(int**)(p_Var30 + 16);
                    fVar32 = (float)this_00->GetAlpha();
                    iVar3 = **(int**)(p_Var30 + 24);
                    fVar33 = (float)this_00->GetBrightpassThreshold();
                    iVar4 = **(int**)(p_Var30 + 24);
                    fVar34 = (float)this_00->GetOutlineRadiusAdjustment();
                    uVar14 = CONCAT44(uVar36, 1);
                    local_40->AddColouredRectangle((int)((float)iVar27 * fVar31) + iVar11,
                                                   (int)((float)iVar3 * fVar32) + iVar2, (int)((float)iVar4 * fVar33),
                                                   (int)((float)**(int**)(p_Var30 + 24) * fVar34), 16711782, uVar14);
                    this_00 = (EntityHighlightGlobalState*)&this_00->m_playerNPCAttackOpPriority;
                    p_Var30 = local_38;
                } while ((GUIManager*)this_00 != local_48);
            }
            pLVar16 = (Layout*)local_f8.second();
            this_01 = (GUIManager*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar16);
            local_48 = (GUIManager*)pLVar16->end();
            if (this_01 != local_48) {
                do {
                    uVar36 = (undefined4)((ulong)uVar14 >> 32);
                    local_40 = *(uint**)p_Var30;
                    iVar11 = **(int**)(p_Var30 + 8);
                    fVar31 = (float)this_01->GetOverbright();
                    iVar27 = **(int**)(p_Var30 + 24);
                    iVar2 = **(int**)(p_Var30 + 16);
                    fVar32 = (float)this_01->GetAlpha();
                    iVar3 = **(int**)(p_Var30 + 24);
                    fVar33 = (float)this_01->GetBrightpassThreshold();
                    iVar4 = **(int**)(p_Var30 + 24);
                    fVar34 = (float)this_01->GetOutlineRadiusAdjustment();
                    uVar14 = CONCAT44(uVar36, 1);
                    local_40->AddColouredRectangle((int)((float)iVar27 * fVar31) + iVar11,
                                                   (int)((float)iVar3 * fVar32) + iVar2, (int)((float)iVar4 * fVar33),
                                                   (int)((float)**(int**)(p_Var30 + 24) * fVar34), 4278190182, uVar14);
                    this_01 = (GUIManager*)&this_01->field_16;
                    p_Var30 = local_38;
                } while (this_01 != local_48);
            }
        }
        this_03 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(local_58 + 3928);
        cVar9 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_03);
        uVar36 = (undefined4)((ulong)uVar14 >> 32);
        if (cVar9 == '\0') {
            local_80 = (Layout*)local_f8.GetMaterial();
            iVar11 = this_03->size();
            uVar36 = (undefined4)((ulong)uVar14 >> 32);
            if (0 < iVar11) {
                uVar28 = 0;
                local_78 = (vector<unsigned int, eastl::allocator>*)this_03;
                do {
                    puVar17 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_03, uVar28);
                    pLVar16 = local_80;
                    uVar36 = *puVar17;
                    local_60[1] = 8913151;
                    if (uVar28 == *(uint*)(local_58 + 3960)) {
                        local_60[1] = 16711935;
                    }
                    local_88 = uVar28;
                    uVar18 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_80);
                    ptVar19 = (type*)pLVar16->end();
                    ppVar20 = std::operator()(uVar18, ptVar19, uVar36);
                    ppVar21 = (pair*)pLVar16->end();
                    if (ppVar20 != ppVar21) {
                        puVar22 = (uint*)((ppVar20 + 8))->HeapBeginPtr();
                        local_90 = (uint*)((ppVar20 + 8))->end();
                        if (puVar22 != local_90) {
                            do {
                                uVar36 = (undefined4)((ulong)uVar14 >> 32);
                                uVar5 = *puVar22;
                                if ((long)(int)uVar5 < 0) {
                                    pvVar15 = local_f8.SSOBeginPtr(ptVar19);
                                    pVVar23 =
                                        (Vector4T*)eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::operator[](
                                            (vector<math::Rect<float>, BucketAllocatorEASTL>*)pvVar15, (ulong)~uVar5);
                                } else {
                                    this_02 = (vector<math::Rect<float>, BucketAllocatorEASTL>*)local_f8.second();
                                    pVVar23 =
                                        (Vector4T*)eastl::vector<math::Rect<float>, BucketAllocatorEASTL>::operator[](
                                            this_02, (long)(int)uVar5 - 1);
                                }
                                new (&local_b0) math::Float4(pVVar23);
                                local_40 = puVar22;
                                local_b0.Scale((float)**(int**)(p_Var30 + 24));
                                local_b0.Grow(2.0);
                                local_48 = *(GUIManager**)p_Var30;
                                iVar11 = **(int**)(p_Var30 + 8);
                                pvVar15 = local_b0.SSOBeginPtr(pVVar23);
                                fVar31 = *(float*)pvVar15;
                                iVar27 = **(int**)(p_Var30 + 16);
                                pfVar24 = (float*)local_b0.y();
                                fVar32 = *pfVar24;
                                pfVar24 = (float*)local_b0.second();
                                fVar33 = *pfVar24;
                                pfVar24 = (float*)local_b0.qw();
                                p_Var30 = local_38;
                                uVar14 = CONCAT44(uVar36, local_60[1]);
                                ptVar19 = (type*)(ulong)(uint)((int)fVar31 + iVar11);
                                local_48->AddOutline(ptVar19, (int)fVar32 + iVar27, (int)fVar33, (int)*pfVar24, 2,
                                                     uVar14, 1);
                                puVar22 = local_40 + 1;
                            } while (puVar22 != local_90);
                        }
                    }
                    this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        local_78;
                    uVar28 = local_88 + 1;
                    iVar11 = eastl::vector<unsigned int, eastl::allocator>::size(local_78);
                    uVar36 = (undefined4)((ulong)uVar14 >> 32);
                } while ((long)uVar28 < (long)iVar11);
            }
        }
        if ((**(int**)(p_Var30 + 8) <= **(int**)(p_Var30 + 48)) &&
            (**(int**)(p_Var30 + 48) <= **(int**)(p_Var30 + 8) + **(int**)(p_Var30 + 24))) {
            if ((**(int**)(p_Var30 + 16) <= **(int**)(p_Var30 + 56)) &&
                (**(int**)(p_Var30 + 56) <= **(int**)(p_Var30 + 16) + **(int**)(p_Var30 + 24))) {
                pTVar13 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
                uVar14 = pTVar13->GetTexture();
                p_Var30 = local_38;
                **(undefined8**)(local_38 + 64) = uVar14;
                local_48._0_4_ = (float)(**(int**)(local_38 + 48) - **(int**)(local_38 + 8));
                local_40._0_4_ = (float)**(int**)(local_38 + 24);
                puVar22 = (uint*)(**(undefined8**)(local_38 + 64))->second();
                **(int**)(p_Var30 + 72) = (int)(((float)*puVar22 * local_48._0_4_) / local_40._0_4_);
                local_48 =
                    (GUIManager*)CONCAT44(local_48._4_4_, (float)(**(int**)(p_Var30 + 56) - **(int**)(p_Var30 + 16)));
                local_40 = (uint*)CONCAT44(local_40._4_4_, (float)**(int**)(p_Var30 + 24));
                lVar25 = (**(undefined8**)(p_Var30 + 64))->second();
                **(int**)(p_Var30 + 80) = (int)(((float)*(uint*)(lVar25 + 4) * local_48._0_4_) / local_40._0_4_);
                new (&local_b0) eastl::vector<eastl::pair<int, int>, eastl::allocator>();
                pTVar13 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
                cVar9 = pTVar13->GetDetailsAtPosition((int*)&local_6c, (int*)&local_68, (int*)&local_64, local_60,
                                                      (vector*)&local_b0, **(int**)(local_38 + 72),
                                                      **(int**)(local_38 + 80));
                if (cVar9 == '\0') {
                    eastl::basic_string<char, BucketAllocatorEASTL>::operator=(
                        *(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88), "Slot: Empty");
                } else {
                    uVar14 = CONCAT44(uVar36, local_60[0]);
                    eastl::basic_string<char, BucketAllocatorEASTL>::sprintf(
                        (char*)*(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88),
                        "Slot: %d,%d<br>Texture ID: %d (Resolution: %ux%u)<br>Materials:", (ulong)local_6c,
                        (ulong)local_68, (ulong)local_64, (ulong)local_60[0], uVar14);
                    puVar22 = (uint*)local_b0.HeapBeginPtr();
                    puVar26 = (uint*)local_b0.end();
                    uVar36 = (undefined4)((ulong)uVar14 >> 32);
                    p_Var30 = local_38;
                    for (; local_38 = p_Var30, puVar22 != puVar26; puVar22 = puVar22 + 2) {
                        uVar18 = std::function<char const*(int, int)>::operator()(
                            *(function<char const*(int, int)>**)(p_Var30 + 96), 32, *puVar22);
                        eastl::basic_string<char, BucketAllocatorEASTL>::append_sprintf(
                            *(char**)(p_Var30 + 88), "<br>\t%s<br>\t\tID: %d<br>\t\tUsage: ", uVar18, (ulong)*puVar22);
                        p_Var30 = local_38;
                        uVar5 = puVar22[1];
                        if (uVar5 == 0) {
                            eastl::basic_string<char, BucketAllocatorEASTL>::append(
                                *(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88), "Albedo");
                        } else if (uVar5 == 1) {
                            eastl::basic_string<char, BucketAllocatorEASTL>::append(
                                *(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88), "Normal/HDR");
                        } else if (uVar5 == 2) {
                            eastl::basic_string<char, BucketAllocatorEASTL>::append(
                                *(basic_string<char, BucketAllocatorEASTL>**)(local_38 + 88), "Metalness/Roughness");
                        }
                        if (**(char**)(p_Var30 + 104) != '\0') {
                            eastl::vector<int, eastl::allocator>::push_back(
                                *(vector<int, eastl::allocator>**)(p_Var30 + 112), (int*)puVar22);
                        }
                        uVar36 = (undefined4)((ulong)uVar14 >> 32);
                        p_Var30 = local_38;
                    }
                }
                p_Var30 = local_38;
                piVar6 = *(int**)(local_38 + 8);
                piVar7 = *(int**)(local_38 + 24);
                piVar8 = *(int**)(local_38 + 120);
                iVar11 = *piVar8 + *piVar7 + *piVar6;
                *piVar6 = iVar11;
                if (*(int*)(*(long*)(local_38 + 128) + 8) < iVar11 + *piVar7) {
                    *piVar6 = 32;
                    **(int**)(local_38 + 16) = **(int**)(local_38 + 16) - (*piVar8 + *piVar7);
                }
                piVar8 = *(int**)(local_38 + 136);
                *piVar8 = *piVar6;
                piVar6 = *(int**)(local_38 + 144);
                *piVar6 = **(int**)(local_38 + 16);
                **(int**)(local_38 + 72) = *piVar7 / 2 + (*piVar8 - **(int**)(local_38 + 72));
                **(int**)(local_38 + 80) = *piVar7 / 2 + (*piVar6 - **(int**)(local_38 + 80));
                local_b0.~vector();
            }
        }
        piVar6 = *(int**)(p_Var30 + 8);
        piVar7 = *(int**)(p_Var30 + 24);
        piVar8 = *(int**)(p_Var30 + 120);
        iVar11 = *piVar8 + *piVar7 + *piVar6;
        *piVar6 = iVar11;
        if (*(int*)(*(long*)(p_Var30 + 128) + 8) < iVar11 + *piVar7) {
            *piVar6 = 32;
            **(int**)(p_Var30 + 16) = **(int**)(p_Var30 + 16) - (*piVar8 + *piVar7);
        }
        if (DEBUG_TEXTURE_ATLAS_MATERIAL_SETTINGS != '\0') {
            iVar11 = *piVar6;
            uVar14 = *(undefined8*)p_Var30;
            uVar1 = **(undefined4**)(p_Var30 + 16);
            iVar27 = *piVar7;
            uVar12 = math::R8G8B8A8FromColour4((Vector4T*)&DEBUG_ATLAS_BACKGROUND_COLOUR);
            uVar14->AddColouredRectangle(iVar11, uVar1, iVar27, iVar27, uVar12, CONCAT44(uVar36, 1));
            uVar14 = *(undefined8*)local_38;
            iVar11 = **(int**)(local_38 + 8);
            iVar27 = **(int**)(local_38 + 16);
            iVar2 = **(int**)(local_38 + 24);
            pTVar13 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)param_1);
            uVar18 = pTVar13->GetSettingsTexture();
            0->AddElement(0, 1065353216, 1065353216, uVar14, iVar11, iVar27, iVar2 + iVar11, iVar2 + iVar27, 4294967295,
                          uVar18, 1);
            iVar11 = **(int**)(local_38 + 32);
            iVar27 = **(int**)(local_38 + 24) + iVar11 * 2 + -1;
            (*(GUIManager**)local_38)
                ->AddOutline(**(int**)(local_38 + 8) - iVar11, **(int**)(local_38 + 16) - iVar11, iVar27, iVar27,
                             iVar11, 865730559, 1);
            piVar6 = *(int**)(local_38 + 8);
            piVar7 = *(int**)(local_38 + 24);
            piVar8 = *(int**)(local_38 + 120);
            iVar11 = *piVar8 + *piVar7 + *piVar6;
            *piVar6 = iVar11;
            if (*(int*)(*(long*)(local_38 + 128) + 8) < iVar11 + *piVar7) {
                *piVar6 = 32;
                **(int**)(local_38 + 16) = **(int**)(local_38 + 16) - (*piVar8 + *piVar7);
            }
        }
        local_f8.~TextureAtlasUsageMap();
    }

    // 0x10087e400, 16 bytes, inline, placed by class name
    // TextureManager::RenderDebug(render::DrawCallState const&, int, int, std::function<char const* (int, int)> const&, std::function<bool ()> const&, FontHelpers&, TextProperties&)::$_19::operator()(shared_ptr<TextureAtlas>&) const::{lambda(eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL> > const&)#1}::operator()(eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL> > const&) const
    /* TextureManager::RenderDebug(render::DrawCallState const&, int, int,
   std::function<char const* (int, int)> const&, std::function<bool ()> const&,
   FontHelpers&,
   TextProperties&)::$_19::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<TextureAtlas>&)
   const::{lambda(eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL> >
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int, eastl::vector<int,
   BucketAllocatorEASTL> > const&) const */

    _func_TEMPNAMEPLACEHOLDERVALUE_shared_ptr_ptr* const ::{
        lambda(eastl::pair<int, eastl::vector<int, BucketAllocatorEASTL>> const&) #1
    }
    ::operator()(_lambda_eastl__pair<int, eastl::vector<int, BucketAllocatorEASTL>> const___1_* this, pair * param_1) {
        return (_func_TEMPNAMEPLACEHOLDERVALUE_shared_ptr_ptr*)(ulong)CONCAT31((int3)((uint) * (int*)param_1 >> 8),
                                                                               *(int*)param_1 == *(int*)this);
    }

    // 0x10097ed20, 16 bytes, complete-object constructor, inline, placed by class name
    // TextureManager::TextureManager(): jumps straight to the base-object constructor

    // 0x10097ee70, 16 bytes, complete-object destructor, inline, placed by class name
    // TextureManager::~TextureManager(): jumps straight to the base-object destructor

    // 0x10098e260, 448 bytes, base-object constructor, inline, placed by class name
    // TextureManager::TextureManager()
    void TextureManager::TextureManager() {
        eastl::string local_58[32];
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, "HAL Texture Cache", local_38);
        new (&field_24, (basic_string*)local_58, 32, 30.0)
            KeepAliveCache<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                      eastl::allocator>>();
        eastl::string::~basic_string(local_58);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, "HAL Texture Cube Cache", local_38);
        new (&field_288, (basic_string*)local_58, 32, 30.0)
            KeepAliveCache<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>();
        eastl::string::~basic_string(local_58);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, "Texture Data Cache", local_38);
        new (&field_552, (basic_string*)local_58, 1024, 30.0)
            KeepAliveCache<unsigned long long, TextureData,
                           eastl::map<unsigned long long, shared_ptr<TextureData>, eastl::less<unsigned long long>,
                                      eastl::allocator>>();
        eastl::string::~basic_string(local_58);
        new (m_textureAtlasManager) TextureAtlasManager();
        new (&field_3704) SpriteAtlasManager();
        new (&field_3928) eastl::vector<int, eastl::allocator>();
        field_3960 = 18446744073709551615;
    }

    // 0x100991050, 96 bytes, base-object destructor, inline, placed by class name
    // TextureManager::~TextureManager()
    void TextureManager::~TextureManager() {
        (&field_3928)->~vector();
        (&field_3704)->~SpriteAtlasManager();
        m_textureAtlasManager->~TextureAtlasManager();
        (&field_552)->~KeepAliveCache();
        (&field_288)->~KeepAliveCache();
        (&field_24)->~KeepAliveCache();
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001c4550, 192 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::UpdateGBufferRenderTargets()
    void OSRenderCore_RenderThread_RSeven::UpdateGBufferRenderTargets() {
        byte bVar1;
        RT7Core* pRVar2;
        EffectManager* pEVar3;
        shared_ptr<render::RenderTargets>* this_00;
        RenderTargets* this_01;
        undefined1* this_02;
        ulong local_38[3];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_02 = &field_8;
        pRVar2 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_02);
        pEVar3 = (EffectManager*)pRVar2->GetEffectManager();
        bVar1 = pEVar3->IsEnabled(110);
        pRVar2 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_02);
        pEVar3 = (EffectManager*)pRVar2->GetEffectManager();
        pEVar3->EnableEffect(115, (ulong)bVar1);
        local_38[0] = 0;
        local_38[1] = 1;
        pRVar2 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_02);
        this_00 = (shared_ptr<render::RenderTargets>*)pRVar2->GetGBufferRT();
        this_01 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_00);
        this_01->SetEnabledRenderTargets((ulong)bVar1 + 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape
