// libs/graphics/runetek7/materials/textures/TextureManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TextureManager.h"

namespace jag::graphics {
    // 0x100f43e84, 20 bytes, __data
    TextureManager::DEBUG_ATLAS_RESOLUTION = {256, 0, 0, 0, 0};

    // 0x103bbdec0, 16 bytes, __common; set at startup by ___cxx_global_var_init.188
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> TextureManager::NullTextureData;

    // 0x103bbded0, 16 bytes, __common; set at startup by ___cxx_global_var_init.189
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> TextureManager::NullTexture;

    // 0x103bbdee0, 16 bytes, __common; set at startup by ___cxx_global_var_init.190
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> TextureManager::NullTextureCube;

    // 0x103bbdef0, 1 bytes, __common; zero-initialised
    TextureManager::DEBUG_ATLASES;

    // 0x103bbdef1, 15 bytes, __common; zero-initialised
    TextureManager::DEBUG_SPRITE_ATLASES;

    // 0x103bbdf00, 16 bytes, __common; zero-initialised
    TextureManager::DEBUG_ATLAS_BACKGROUND_COLOUR;

    // 0x103bbdf10, 1 bytes, __common; zero-initialised
    TextureManager::DEBUG_SPRITE_ATLAS_USAGE;

    // 0x103bbdf11, 1 bytes, __common; zero-initialised
    TextureManager::DEBUG_TEXTURE_ATLAS_USAGE;

    // 0x103bbdf12, 1 bytes, __common; zero-initialised
    TextureManager::DEBUG_TEXTURE_ATLAS_MATERIAL_SETTINGS;

    // 0x1002eeed0: the linker folded this into Model::GetLabelCentres() const, which has identical code
    TextureAtlasManager TextureManager::GetTextureAtlasManager();

    // 0x10085b7b0, 128 bytes, placed by class name and debug map
    // TextureManager::GetMaterialSettings(TextureAtlasMaterialSettings&, unsigned int)
    undefined4 TextureManager::GetMaterialSettings(TextureAtlasMaterialSettings* param_1, uint param_2) {
        undefined4 uVar2;
        MaterialManager* this_00;
        Material* this_01;

        this_00 = (MaterialManager*)field_0->GetMaterialManager();
        if (this_00->MaterialsReady() == '\0') {
            uVar2 = 0;
        } else {
            this_01 = (Material*)this_00->GetMaterial(param_2);
            uVar2 = this_01->ShowSkybox();
            if ((char)uVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureManager.cpp",
                                550, "TextureManager::GetMaterialSettings - Missing material with ID %u",
                                (ulong)param_2);
            }
            param_1->Initialise(this_01);
        }
        return uVar2;
    }

    // 0x10085e040, 384 bytes, placed by class name
    // TextureManager::GetTextureData(TextureType const*, unsigned int, render::TextureFormatBitSet)
    TextureType* TextureManager::GetTextureData(TextureType* param_1, uint param_2, TextureFormatBitSet param_3) {
        undefined* puVar2;
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* this;
        long lVar3;
        uint in_ECX;
        undefined4 in_register_00000014;
        undefined4 in_register_00000034;
        TextureFormatBitSet in_R8D;
        shared_ptr local_80;
        shared_ptr* local_70;
        TextureData local_68;
        undefined8 local_50;
        jag local_48[16];
        TextureFormatBitSet local_38[2];

        local_38[0].m_bits = in_R8D.m_bits;
        local_50 = GetTextureCacheKey((TextureManager*)param_1, in_ECX,
                                      (TextureType*)CONCAT44(in_register_00000014, param_3.m_bits), local_38, false);
        local_70 = (shared_ptr*)(CONCAT44(in_register_00000034, param_2) + 552);
        local_80.Find(local_70);
        if (shared_ptr::operator_cast_to_bool(&local_80)) {
            new (param_1) shared_ptr<oldscape::dash3d::Decor>(&local_80);
        } else {
            new (&local_68) TextureData();
            puVar2 = (undefined*)(*(TextureDataProvider**)(CONCAT44(in_register_00000034, param_2) + 16))
                         ->GetTextureData(&local_68, (TextureType*)CONCAT44(in_register_00000014, param_3.m_bits),
                                          in_ECX, local_38[0]);
            if (puVar2 == DataStatus::READY) {
                make_shared<TextureData>(local_48);
                this = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)
                           shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)local_48);
                std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::operator=(
                    this, (unique_ptr*)&local_68);
                lVar3 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)local_48);
                *(undefined4*)(lVar3 + 8) = (undefined4)local_68.field_8;
                lVar3 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)local_48);
                *(undefined4*)(lVar3 + 12) = local_68.field_8._4_4_;
                lVar3 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)local_48);
                *(undefined4*)(lVar3 + 16) = (undefined4)local_68.field_16;
                lVar3 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)local_48);
                *(undefined4*)(lVar3 + 20) = local_68.field_16._4_4_;
                KeepAliveCache<unsigned long long, TextureData,
                               eastl::map<unsigned long long, shared_ptr<TextureData>, eastl::less<unsigned long long>,
                                          eastl::allocator>>::Insert((ulonglong*)param_1, local_70);
                local_48->~shared_ptr();
            } else {
                new (param_1) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&NullTextureData);
            }
            local_68.~TextureData();
        }
        local_80.~shared_ptr();
        return param_1;
    }

    // 0x1008600b0, 16 bytes, placed by class name
    // TextureManager::AllocateImageData(unsigned int)
    void TextureManager::AllocateImageData(uint param_1) {
        operator_new__((ulong)param_1);
    }

    // 0x1008600c0, 160 bytes, placed by class name
    // TextureManager::Initialise(RT7Core*, Js5ResourceProvider*, TextureDataProvider*)
    void TextureManager::Initialise(RT7Core* param_1, Js5ResourceProvider* param_2, TextureDataProvider* param_3) {
        Js5ResourceProvider* pJVar1;
        MaterialManager* pMVar2;
        Js5ArchiveSettings* pJVar3;

        if (((param_1 == (RT7Core*)0) || (param_2 == (Js5ResourceProvider*)0)) ||
            (param_3 == (TextureDataProvider*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("rt7Core && resourceProvider && textureDataProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureManager.cpp",
                      43, (char*)0);
        }
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        pMVar2 = (MaterialManager*)param_1->GetMaterialManager();
        (m_textureAtlasManager, pMVar2, this)->Initialise();
        pJVar1 = field_8;
        pJVar3 = (Js5ArchiveSettings*)(*(code*)param_3->field_0[5])(param_3);
        (&field_3704, this, pJVar1, pJVar3)->Initialise();
    }

    // 0x100860160, 80 bytes, placed by class name
    // TextureManager::Destroy()
    void TextureManager::Destroy() {
        (&field_24)->clear();
        (&field_288)->clear();
        (&field_552)->clear();
        (&field_3704)->Destroy();
        m_textureAtlasManager->Destroy();
    }

    // 0x100860210, 80 bytes, placed by class name
    // TextureManager::CreateRenderingResources()
    void TextureManager::CreateRenderingResources() {
        Js5ResourceProvider* pJVar1;
        Js5ArchiveSettings* pJVar2;

        m_textureAtlasManager->CreateRenderingResources();
        pJVar1 = field_8;
        pJVar2 = (Js5ArchiveSettings*)(*(code*)field_16->field_0[5])();
        (&field_3704, this, pJVar1, pJVar2)->Initialise();
    }

    // 0x100860260, 80 bytes, placed by class name
    // TextureManager::DestroyRenderingResources()
    void TextureManager::DestroyRenderingResources() {
        (&field_24)->clear();
        (&field_288)->clear();
        (&field_552)->clear();
        (&field_3704)->DestroyRenderingResources();
        m_textureAtlasManager->DestroyRenderingResources();
    }

    // 0x1008602b0, 48 bytes, placed by class name
    // TextureManager::MainLogic()
    void TextureManager::MainLogic() {
        m_textureAtlasManager->MainLogic();
        (&field_3704)->MainLogic();
    }

    // 0x1008602e0, 48 bytes, placed by class name
    // TextureManager::MainDraw()
    void TextureManager::MainDraw() {
        m_textureAtlasManager->MainDraw();
        (&field_3704)->MainDraw();
        UpdateCaches(this);
    }

    // 0x100860310, 80 bytes, placed by class name
    // TextureManager::UpdateCaches()
    void TextureManager::UpdateCaches() {
        float fVar1;

        fVar1 = (float)FrameTime::GetSecondsSinceProgramStart();
        (&field_24, fVar1)->Update();
        (&field_288, fVar1)->Update();
        (&field_552, fVar1)->Update();
    }

    // 0x1008605d0, 3344 bytes, placed by class name
    // TextureManager::RenderDebug(render::DrawCallState const&, int, int, std::function<char const* (int, int)> const&, std::function<bool ()> const&, FontHelpers&, TextProperties&)
    /* TextureManager::RenderDebug(render::DrawCallState const&, int, int,
   std::function<char const* (int, int)> const&, std::function<bool ()> const&,
   FontHelpers&, TextProperties&) */

    void TextureManager::RenderDebug(DrawCallState* param_1, int param_2, int param_3, function* param_4,
                                     function* param_5, FontHelpers* param_6, TextProperties* param_7) {
        undefined1* this_00;
        undefined1 uVar1;
        bool bVar2;
        char cVar3;
        undefined4 uVar4;
        int iVar5;
        int iVar6;
        Layout* pLVar7;
        Layout* this_01;
        vector* pvVar8;
        TextProperties* pTVar9;
        long lVar10;
        long lVar11;
        int* piVar12;
        int* piVar13;
        int* piVar14;
        EffectManager* pEVar15;
        shared_ptr<SpriteAtlas>* this_02;
        undefined4* puVar16;
        MapArea* pMVar17;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar18;
        SpriteAtlas* pSVar19;
        EntityHighlightGlobalState* pEVar20;
        EntityHighlightGlobalState* pEVar21;
        uint* puVar22;
        undefined8 uVar23;
        uint uVar24;
        int iVar25;
        TextProperties* pTVar26;
        int iVar27;
        DrawCallState* pDVar28;
        GUIManager** ppGVar29;
        type* ptVar30;
        undefined8* puVar31;
        TextureManager* pTVar32;
        byte bVar33;
        float fVar34;
        float fVar35;
        float fVar36;
        float fVar37;
        float fVar38;
        float fVar39;
        float fVar40;
        StringView SVar41;
        StringView SVar42;
        StringView SVar43;
        undefined8 auStackY_708[128];
        TextProperties* in_stack_fffffffffffffd08;
        undefined1 local_270[184];
        StringView local_1b8;
        StringView local_1a8;
        GUIManager* local_198;
        int* local_190;
        uint* local_188;
        int* local_180;
        int* local_178;
        TextureManager* local_170;
        int* local_168;
        int* local_160;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>** local_158;
        int* local_150;
        int* local_148;
        fixed_string* local_140;
        function* local_138;
        int* local_130;
        vector<int, eastl::allocator>* local_128;
        int* local_120;
        TextProperties* local_118;
        int* local_110;
        uint* local_108;
        shared_ptr<SpriteAtlas>* local_100;
        fixed_string local_f8[24];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_e0[16];
        TextProperties* local_d0;
        function* local_c8;
        shared_ptr<SpriteAtlas>* local_c0;
        int local_b8;
        int local_b4;
        int local_b0;
        float local_ac;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* local_a8;
        int local_a0;
        int local_9c;
        TextureManager* local_98;
        int local_8c;
        uint local_88;
        int local_84;
        GUIManager* local_80;
        int local_78;
        uint local_74;
        int local_70;
        int local_6c;
        function<bool(shared_ptr<TextureAtlas>&)> local_68[48];
        long local_38;

        bVar33 = 0;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_c8 = param_4;
        local_b8 = param_2;
        local_b4 = param_3;
        if (DEBUG_ATLASES == '\0' && DEBUG_SPRITE_ATLASES == '\0')
            goto LAB_100860c5c;
        pDVar28 = param_1;
        pLVar7 = (Layout*)(&field_3704)->get_overflow_allocator();
        this_01 = (Layout*)param_1->GetOutputMergerState();
        pvVar8 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)pDVar28);
        pTVar9 =
            (TextProperties*)eastl::vector<render::Viewport,
                                           eastl::fixed_vector_allocator<24ul, 1ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 1ul, 4ul, 0ul, true, eastl::allocator>>*)
                    pvVar8,
                0);
        field_0->SetClippingRectToViewport();
        local_80 = (GUIManager*)field_0->GetGUIManager();
        local_80->Begin(param_1);
        local_6c = DEBUG_ATLAS_RESOLUTION;
        local_b0 = 8;
        local_a0 = 2;
        local_70 = 32;
        local_74 = (pTVar9->m_colours - DEBUG_ATLAS_RESOLUTION) - 64;
        pTVar26 = (TextProperties*)(ulong)local_74;
        local_a8 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)0;
        local_8c = -1;
        local_88 = 4294967295;
        local_84 = -1;
        local_78 = -1;
        local_d0 = pTVar9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_e0,
                                                                                 (_func_decltype_nullptr*)param_1);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        *(undefined4*)((long)&field_3960 + 4) = 4294967295;
        local_98 = this;
        if (DEBUG_ATLASES != '\0') {
            uVar1 = std::function<bool()>::operator()((function<bool()>*)param_5);
            local_9c = CONCAT31(local_9c._1_3_, uVar1);
            new (local_270) eastl::vector<int, eastl::allocator>();
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
            local_140 = local_f8;
            local_138 = local_c8;
            local_130 = &local_9c;
            local_128 = (vector<int, eastl::allocator>*)local_270;
            local_120 = &local_b0;
            local_118 = local_d0;
            local_110 = &local_8c;
            local_108 = &local_88;
            ppGVar29 = &local_198;
            puVar31 = auStackY_708 + 128;
            for (pTVar26 = (TextProperties*)19; pTVar26 != (TextProperties*)0;
                 pTVar26 = (TextProperties*)&pTVar26[-1].field_35) {
                *puVar31 = *ppGVar29;
                ppGVar29 = ppGVar29 + (ulong)bVar33 * -2 + 1;
                puVar31 = puVar31 + (ulong)bVar33 * -2 + 1;
            }
            std::function<bool(shared_ptr<TextureAtlas>&)>::function<
                TextureManager::RenderDebug(render::DrawCallState_const&, int, int,
                                            std::function<char const*(int, int)> const&, std::function<bool()> const&,
                                            FontHelpers&, TextProperties&)::__19,
                void>(local_68);
            local_98->m_textureAtlasManager->IterateAtlases();
            std::function<bool(shared_ptr<TextureAtlas>&)>::~function(local_68);
            if ((char)local_9c != '\0') {
                this_00 = &local_98->field_3928;
                lVar10 = this_00->size();
                lVar11 = local_270->size();
                if (lVar10 == lVar11) {
                    piVar12 = (int*)this_00->HeapBeginPtr();
                    piVar13 = (int*)this_00->end();
                    piVar14 = (int*)local_270->HeapBeginPtr();
                    bVar2 = eastl::equal<int*, int*>(piVar12, piVar13, piVar14);
                    if (!bVar2)
                        goto LAB_1008608ee;
                    cVar3 = this_00->empty();
                    pTVar32 = local_98;
                    if (cVar3 == '\0') {
                        iVar25 = *(int*)&local_98->field_3960;
                        pTVar26 = (TextProperties*)this_00->size();
                        *(int*)&pTVar32->field_3960 = (int)(((long)iVar25 + 1U) % (ulong)pTVar26);
                    }
                } else {
                LAB_1008608ee:
                    eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)this_00,
                                                                    (vector*)local_270);
                    *(undefined4*)&local_98->field_3960 = 0;
                    pTVar32 = local_98;
                }
                cVar3 = this_00->empty();
                pEVar15 = (EffectManager*)pTVar32->field_0->GetEffectManager();
                if (cVar3 == '\0') {
                    pEVar15->EnableEffect(19, 1);
                    puVar16 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_00, (long)*(int*)&local_98->field_3960);
                    uVar4 = *puVar16;
                } else {
                    uVar4 = 4294967295;
                    pEVar15->DisableEffect();
                }
                DebugMaterialHighlightEffect::m_materialHighlightID = uVar4;
            }
            local_270->~vector();
        }
        if (DEBUG_SPRITE_ATLASES != '\0') {
            this_02 = (shared_ptr<SpriteAtlas>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar7);
            local_100 = (shared_ptr<SpriteAtlas>*)pLVar7->end();
            if (this_02 != local_100) {
                do {
                    iVar5 = local_6c;
                    iVar25 = local_70;
                    uVar24 = local_74;
                    uVar4 = math::R8G8B8A8FromColour4((Vector4T*)&DEBUG_ATLAS_BACKGROUND_COLOUR);
                    local_80->AddColouredRectangle(iVar25, uVar24, iVar5, iVar5, uVar4);
                    iVar5 = local_6c;
                    iVar25 = local_70;
                    uVar24 = local_74;
                    pMVar17 = (MapArea*)shared_ptr<SpriteAtlas>::operator->(this_02);
                    pvVar18 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar17->GetOrigin();
                    eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar18);
                    0->AddElement(0, 1065353216, 1065353216, local_80, iVar25, uVar24, iVar5 + iVar25, iVar5 + uVar24,
                                  4294967295);
                    iVar25 = local_6c + local_a0 * 2 + -1;
                    local_80->AddOutline(local_70 - local_a0, local_74 - local_a0, iVar25, iVar25);
                    if (DEBUG_SPRITE_ATLAS_USAGE != '\0') {
                        new (local_270) SpriteAtlasUsageMap();
                        local_c0 = this_02;
                        pSVar19 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(this_02);
                        pSVar19->GetUsageMap(local_270);
                        pLVar7 = (Layout*)local_270->GetCursorMutex();
                        pEVar20 = (EntityHighlightGlobalState*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar7);
                        pEVar21 = (EntityHighlightGlobalState*)pLVar7->end();
                        iVar25 = local_70;
                        for (; local_70 = iVar25, pEVar20 != pEVar21;
                             pEVar20 = (EntityHighlightGlobalState*)&pEVar20->m_playerNPCAttackOpPriority) {
                            fVar34 = (float)pEVar20->GetOverbright();
                            uVar24 = local_74;
                            fVar38 = (float)local_6c;
                            fVar35 = (float)pEVar20->GetAlpha();
                            fVar39 = (float)local_6c;
                            fVar36 = (float)pEVar20->GetBrightpassThreshold();
                            fVar40 = (float)local_6c;
                            fVar37 = (float)pEVar20->GetOutlineRadiusAdjustment();
                            local_80->AddColouredRectangle((int)(fVar38 * fVar34) + iVar25,
                                                           (int)(fVar39 * fVar35) + uVar24, (int)(fVar40 * fVar36),
                                                           (int)((float)local_6c * fVar37), 16711782);
                            iVar25 = local_70;
                        }
                        pLVar7 = (Layout*)local_270->GetImmediateThreadPool();
                        pEVar20 = (EntityHighlightGlobalState*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar7);
                        pEVar21 = (EntityHighlightGlobalState*)pLVar7->end();
                        iVar25 = local_70;
                        for (; local_70 = iVar25, pEVar20 != pEVar21;
                             pEVar20 = (EntityHighlightGlobalState*)&pEVar20->m_playerNPCAttackOpPriority) {
                            fVar34 = (float)pEVar20->GetOverbright();
                            uVar24 = local_74;
                            fVar38 = (float)local_6c;
                            fVar35 = (float)pEVar20->GetAlpha();
                            fVar39 = (float)local_6c;
                            fVar36 = (float)pEVar20->GetBrightpassThreshold();
                            fVar40 = (float)local_6c;
                            fVar37 = (float)pEVar20->GetOutlineRadiusAdjustment();
                            local_80->AddColouredRectangle((int)(fVar38 * fVar34) + iVar25,
                                                           (int)(fVar39 * fVar35) + uVar24, (int)(fVar40 * fVar36),
                                                           (int)((float)local_6c * fVar37), 4278255462);
                            iVar25 = local_70;
                        }
                        pLVar7 = (Layout*)local_270->GetBodyModelCache();
                        pEVar20 = (EntityHighlightGlobalState*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(pLVar7);
                        pEVar21 = (EntityHighlightGlobalState*)pLVar7->end();
                        iVar25 = local_70;
                        for (; local_70 = iVar25, pEVar20 != pEVar21;
                             pEVar20 = (EntityHighlightGlobalState*)&pEVar20->m_playerNPCAttackOpPriority) {
                            fVar34 = (float)pEVar20->GetOverbright();
                            uVar24 = local_74;
                            fVar38 = (float)local_6c;
                            fVar35 = (float)pEVar20->GetAlpha();
                            fVar39 = (float)local_6c;
                            fVar36 = (float)pEVar20->GetBrightpassThreshold();
                            fVar40 = (float)local_6c;
                            fVar37 = (float)pEVar20->GetOutlineRadiusAdjustment();
                            local_80->AddColouredRectangle((int)(fVar38 * fVar34) + iVar25,
                                                           (int)(fVar39 * fVar35) + uVar24, (int)(fVar40 * fVar36),
                                                           (int)((float)local_6c * fVar37), 4278190182);
                            iVar25 = local_70;
                        }
                        local_270->~SpriteAtlasUsageMap();
                        this_02 = local_c0;
                    }
                    if ((((local_70 <= local_b8) && (local_b8 <= local_70 + local_6c)) &&
                         ((int)local_74 <= local_b4)) &&
                        (local_b4 <= (int)(local_74 + local_6c))) {
                        pMVar17 = (MapArea*)shared_ptr<SpriteAtlas>::operator->(this_02);
                        pvVar18 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar17->GetOrigin();
                        local_a8 = (compressed_pair_imp<
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::Layout,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar18);
                        local_ac = (float)(local_b8 - local_70);
                        local_c0._0_4_ = (float)local_6c;
                        puVar22 = (uint*)eastl::compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>,
                            0>::second(local_a8);
                        local_84 = (int)(((float)*puVar22 * local_ac) / local_c0._0_4_);
                        local_ac = (float)(int)(local_b4 - local_74);
                        local_c0 = (shared_ptr<SpriteAtlas>*)CONCAT44(local_c0._4_4_, (float)local_6c);
                        lVar10 = eastl::compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>,
                            0>::second(local_a8);
                        local_78 = (int)(((float)*(uint*)(lVar10 + 4) * local_ac) / local_c0._0_4_);
                        pSVar19 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(this_02);
                        cVar3 = pSVar19->GetDetailsAtPosition(local_270, (SpriteAtlasUsageType*)&local_9c, local_e0,
                                                              local_84, local_78);
                        if (cVar3 != '\0') {
                            if (local_9c == 1) {
                                uVar23 = std::function<char const*(int, int)>::operator()(
                                    (function<char const*(int, int)>*)local_c8, 36, local_270._0_4_);
                            } else {
                                uVar23 = std::function<char const*(int, int)>::operator()(
                                    (function<char const*(int, int)>*)local_c8, 49, local_270._0_4_);
                            }
                            uVar4 = local_270._0_4_;
                            puVar22 = (uint*)local_e0->second();
                            uVar24 = *puVar22;
                            puVar22 = (uint*)local_e0->qw();
                            eastl::basic_string<char, BucketAllocatorEASTL>::sprintf(
                                (char*)local_f8, "Sprite: %s (%d)<br>Resolution: %ux%u", uVar23, (ulong)(uint)uVar4,
                                (ulong)uVar24, (ulong)*puVar22);
                            *(undefined4*)((long)&local_98->field_3960 + 4) = local_270._0_4_;
                        }
                        local_70 = local_70 + local_b0 + local_6c;
                        iVar25._0_1_ = local_d0->m_horizontalAlignment;
                        iVar25._1_1_ = local_d0->m_verticalAlignment;
                        iVar25._2_2_ = local_d0->field_10;
                        if (iVar25 < local_70 + local_6c) {
                            local_70 = 32;
                            local_74 = local_74 - (local_b0 + local_6c);
                        }
                        local_8c = local_70;
                        local_88 = local_74;
                        local_84 = (local_70 + local_6c / 2) - local_84;
                        local_78 = (local_6c / 2 + local_74) - local_78;
                    }
                    local_70 = local_70 + local_b0 + local_6c;
                    iVar5._0_1_ = local_d0->m_horizontalAlignment;
                    iVar5._1_1_ = local_d0->m_verticalAlignment;
                    iVar5._2_2_ = local_d0->field_10;
                    if (iVar5 < local_70 + local_6c) {
                        local_70 = 32;
                        local_74 = local_74 - (local_b0 + local_6c);
                    }
                    this_02 = this_02 + 16;
                    pTVar26 = local_d0;
                } while (this_02 != local_100);
            }
        }
        if (local_a8 !=
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)0) {
            local_80->Render(0);
            (local_98->field_0, local_8c, local_88, local_6c, local_6c, true)->SetClippingRectangle();
            iVar5 = local_6c;
            uVar24 = local_88;
            iVar25 = local_8c;
            uVar4 = math::R8G8B8A8FromColour4((Vector4T*)&DEBUG_ATLAS_BACKGROUND_COLOUR);
            local_80->AddColouredRectangle(iVar25, uVar24, iVar5, iVar5, uVar4);
            iVar6 = local_78;
            iVar5 = local_84;
            piVar12 = (int*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(local_a8);
            iVar27 = local_78;
            iVar25 = *piVar12;
            lVar10 = eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(local_a8);
            0->AddElement(0, 1065353216, 1065353216, local_80, iVar5, iVar6, iVar25 + iVar5,
                          iVar27 + *(int*)(lVar10 + 4), 4294967295);
            piVar12 = (int*)local_e0->second();
            if (0 < *piVar12) {
                ptVar30 = (type*)2;
                local_e0->Grow(2);
                iVar6 = local_84;
                pvVar8 = local_e0->SSOBeginPtr(ptVar30);
                iVar27 = local_78;
                iVar25 = *(int*)pvVar8;
                piVar12 = (int*)local_e0->y();
                iVar5 = *piVar12;
                puVar16 = (undefined4*)local_e0->second();
                uVar4 = *puVar16;
                puVar16 = (undefined4*)local_e0->qw();
                local_80->AddOutline(iVar6 + iVar25, iVar27 + iVar5, uVar4, *puVar16, 2);
            }
            local_80->Render(0);
            local_98->field_0->SetClippingRectToViewport();
            uVar24 = (local_6c + local_a0 * 2) - 1;
            pTVar26 = (TextProperties*)(ulong)uVar24;
            local_80->AddOutline(local_8c - local_a0, local_88 - local_a0, pTVar26, uVar24);
        }
        cVar3 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar3 == '\0') {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                (StringView*)(local_270 + 168), local_f8);
            SVar41.field_8 = (uchar*)1024;
            SVar41.field_0 = (ulong)(local_270 + 168);
            iVar5 = FontHelpers::PredictHeightAndLines(SVar41, (int)param_7, pTVar26);
            uVar24 = local_88;
            iVar25 = local_8c;
            iVar27 = local_a0 + iVar5;
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1b8, local_f8);
            SVar42.field_8 = (uchar*)1024;
            SVar42.field_0 = (ulong)&local_1b8;
            iVar6 = FontHelpers::PredictWidthMultiLine(SVar42, (int)param_7, pTVar26);
            iVar27 = uVar24 - iVar27;
            local_80->AddColouredRectangle(iVar25, iVar27, iVar6, iVar5, 255);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1a8, local_f8);
            SVar43.field_8._0_4_ = iVar25;
            SVar43.field_0 = (ulong)&local_1a8;
            SVar43.field_8._4_4_ = 0;
            param_6->DrawStringMultiline(SVar43, iVar27, iVar6, iVar5, 0, param_7, in_stack_fffffffffffffd08);
        }
        local_80->Render(0);
        local_80->End();
        local_f8->~basic_string();
    LAB_100860c5c:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008614f0, 752 bytes, placed by class name
    // TextureManager::GetHALTexture(TextureType const*, unsigned int, render::TextureFormatBitSet, bool, bool)
    TextureType* TextureManager::GetHALTexture(TextureType* param_1, uint param_2, TextureFormatBitSet param_3,
                                               bool param_4, bool param_5) {
        uint uVar1;
        uint uVar2;
        bool bVar3;
        uint uVar4;
        long lVar5;
        TextureManager* this;
        uchar* puVar6;
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* this_00;
        undefined7 in_register_00000009;
        undefined4 in_register_00000014;
        uint uVar7;
        undefined4 in_register_00000034;
        undefined7 in_register_00000081;
        uint in_R9D;
        bool in_stack_00000008;
        shared_ptr<oldscape::RSevenDebugPresetProvider> asStack_94[4];
        uint in_stack_ffffffffffffff70;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_78[16];
        shared_ptr* local_68;
        shared_ptr local_60;
        uint local_4c;
        shared_ptr local_48;
        TextureFormatBitSet local_38[2];

        local_38[0].m_bits = (uint)CONCAT71(in_register_00000081, param_5);
        if ((TextureType*)TextureType::CUBEMAP == (TextureType*)CONCAT44(in_register_00000014, param_3.m_bits)) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureType != TextureType::CUBEMAP",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureManager.cpp",
                      461, (char*)0);
        }
        local_4c = in_R9D;
        GetTextureCacheKey((TextureManager*)param_1, (uint)CONCAT71(in_register_00000009, param_4),
                           (TextureType*)CONCAT44(in_register_00000014, param_3.m_bits), local_38, in_stack_00000008);
        local_68 = (shared_ptr*)(CONCAT44(in_register_00000034, param_2) + 24);
        ((asStack_94 + 4))->Find(local_68);
        bVar3 = ((asStack_94 + 4))->operator_cast_to_bool();
        if (bVar3) {
            new (param_1) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(asStack_94 + 4));
        } else {
            GetTextureData((TextureType*)&local_48, param_2, param_3);
            bVar3 = operator==(&local_48, (_func_decltype_nullptr*)0);
            if (bVar3) {
                new (param_1) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&NullTexture);
            } else {
                shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_78,
                                                                                         (_func_decltype_nullptr*)0);
                if (in_stack_00000008 == false) {
                    lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    uVar7 = *(uint*)(lVar5 + 16);
                    lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    uVar1 = *(uint*)(lVar5 + 20);
                    this_00 = (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)
                                  shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    uVar4 = std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(this_00);
                    lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    uVar2 = *(uint*)(lVar5 + 12);
                    lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    graphicutils::CreateHALTexture2D<render::Texture2D>(
                        &local_60, (graphicutils*)(ulong)uVar7, uVar1, uVar4, (uchar*)(ulong)uVar2, *(uint*)(lVar5 + 8),
                        local_4c & 255, true, true, SUB41(local_38[0].m_bits, 0), (TextureFormatBitSet)0,
                        in_stack_ffffffffffffff70);
                    shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)local_78, &local_60);
                    local_60.~shared_ptr();
                } else {
                    lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    uVar7 = *(uint*)(lVar5 + 16);
                    lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    uVar7 = uVar7 / *(uint*)(lVar5 + 20);
                    this = (TextureManager*)shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    puVar6 = (uchar*)get();
                    Rebuild2DTo3D(this, puVar6, uVar7, uVar7, uVar7);
                    lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    uVar1 = *(uint*)(lVar5 + 12);
                    lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
                    local_60.CreateHALTexture3D(uVar7, uVar7, uVar7, puVar6, uVar1, *(uint*)(lVar5 + 8),
                                                (bool)(undefined1)local_4c, true, true, local_38[0]);
                    shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)local_78, &local_60);
                    local_60.~shared_ptr();
                }
                KeepAliveCache<unsigned long long, render::Texture,
                               eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                          eastl::less<unsigned long long>, eastl::allocator>>::Insert((ulonglong*)
                                                                                                          param_1,
                                                                                                      local_68);
                local_78->~shared_ptr();
            }
            local_48.~shared_ptr();
        }
        (asStack_94 + 4)->~shared_ptr();
        return param_1;
    }

    // 0x1008617e0, 64 bytes, placed by class name
    // TextureManager::GetTextureCacheKey(unsigned int, TextureType const*, render::TextureFormatBitSet&, bool)
    ulong TextureManager::GetTextureCacheKey(uint param_1, TextureType* param_2, TextureFormatBitSet* param_3,
                                             bool param_4) {
        TextureType TVar1;
        uint uVar2;
        undefined7 in_register_00000081;

        TVar1 = param_2[8];
        uVar2 = param_3->GetX();
        return (ulong)(uVar2 & 2097151) << 42 | (ulong)(byte)TVar1 << 33 | (ulong)param_1 |
               CONCAT71(in_register_00000081, param_4) << 32;
    }

    // 0x100861880, 496 bytes, placed by class name
    // TextureManager::Rebuild2DTo3D(unsigned char*, int, int, int)
    void TextureManager::Rebuild2DTo3D(uchar* param_1, int param_2, int param_3, int param_4) {
        uchar uVar1;
        uchar* puVar2;
        ulong uVar3;
        undefined1* puVar4;
        uchar* puVar5;
        void* pvVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        ulong uVar11;
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> local_88[8];
        ulong local_78;
        int local_6c;
        int local_68;
        int local_64;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        uint local_50;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        uchar local_31;

        local_50 = param_2 * param_3 * param_4 * 4;
        puVar2 = (uchar*)AllocateImageData(local_50);
        std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::unique_ptr<unsigned char*, true, void,
                                                                                           void>(local_88, puVar2);
        local_78 = (ulong)(uint)param_2;
        if (0 < param_2) {
            local_58 = (uint)param_4 * param_2 * 4;
            iVar7 = param_2 * 4;
            local_6c = param_2 * param_3 * 4;
            uVar3 = (ulong)(uint)param_4;
            iVar9 = 0;
            local_44 = 3;
            local_68 = iVar7;
            do {
                local_54 = iVar9;
                if (0 < param_3) {
                    iVar8 = 0;
                    iVar9 = local_44;
                    iVar10 = local_44;
                    do {
                        uVar11 = uVar3;
                        local_64 = iVar8;
                        local_60 = iVar10;
                        local_5c = iVar9;
                        if (0 < (int)(uint)param_4) {
                            do {
                                puVar2 = param_1;
                                local_40 = iVar9 + -2;
                                local_38 = CONCAT31(local_38._1_3_, param_1[iVar9 + -3]);
                                local_3c = iVar10 + -2;
                                puVar4 = (undefined1*)
                                    std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::operator[](
                                        local_88, (long)(iVar10 + -3));
                                *puVar4 = (undefined1)local_38;
                                local_38 = iVar9 + -1;
                                local_31 = puVar2[local_40];
                                local_40 = iVar10 + -1;
                                puVar5 = (uchar*)
                                    std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::operator[](
                                        local_88, (long)local_3c);
                                *puVar5 = local_31;
                                local_3c = CONCAT31(local_3c._1_3_, puVar2[local_38]);
                                puVar4 = (undefined1*)
                                    std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::operator[](
                                        local_88, (long)local_40);
                                *puVar4 = (undefined1)local_3c;
                                uVar1 = puVar2[iVar9];
                                puVar2 = (uchar*)
                                    std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::operator[](
                                        local_88, (long)iVar10);
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
                    } while (iVar8 != param_3);
                }
                iVar9 = local_54 + 1;
                local_44 = local_44 + 4;
            } while (iVar9 != (int)local_78);
        }
        pvVar6 = (void*)std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(local_88);
        _memcpy(param_1, pvVar6, (long)(int)local_50);
        std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::~unique_ptr(local_88);
    }

    // 0x100861b50, 272 bytes, placed by class name
    // TextureManager::GetCubeTextureData(unsigned int, render::TextureFormatBitSet)
    TextureType* TextureManager::GetCubeTextureData(uint param_1, TextureFormatBitSet param_2) {
        char cVar1;
        MaterialManager* this;
        ModularParticleEmitter* this_00;
        uint in_EDX;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        TextureType* this_01;

        this_01 = (TextureType*)CONCAT44(in_register_0000003c, param_1);
        this = (MaterialManager*)(*(RT7Core**)CONCAT44(in_register_00000034, param_2.m_bits))->GetMaterialManager();
        cVar1 = MaterialsReady();
        if (cVar1 == '\0') {
            new (this_01) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&NullTextureData);
        } else {
            this_00 = (ModularParticleEmitter*)GetMaterial(in_EDX);
            cVar1 = this_00->ShowSkybox();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureManager.cpp",
                                567, "TextureManager.getCubeMap: Missing material with ID %u", (ulong)in_EDX);
            }
            cVar1 = this_00->IsRT7();
            if (cVar1 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureManager.cpp",
                                572,
                                "TextureManager.getCubeMap: Material with ID %u must be an RT5 material but is not",
                                (ulong)in_EDX);
            }
            cVar1 = this_00->IsEmitting();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/materials/textures/TextureManager.cpp",
                                577, "TextureManager.getCubeMap: Material with ID %u does not have a cubemap defined",
                                (ulong)in_EDX);
            }
            this_00->GetCompletedGold();
            GetTextureData(this_01, param_2.m_bits, (TextureFormatBitSet)(uint)TextureType::CUBEMAP);
        }
        return this_01;
    }

    // 0x100861c60, 432 bytes, placed by class name
    // TextureManager::GetHALTextureCube(unsigned int, render::TextureFormatBitSet, bool)
    TextureManager* TextureManager::GetHALTextureCube(uint param_1, TextureFormatBitSet param_2, bool param_3) {
        shared_ptr* psVar1;
        uint uVar2;
        uint uVar3;
        bool bVar4;
        unique_ptr* this;
        long lVar5;
        unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>* this_00;
        uchar* puVar6;
        TextureFormatBitSet in_ECX;
        undefined7 in_register_00000011;
        undefined4 in_register_00000034;
        undefined4 in_register_0000003c;
        TextureManager* this_01;
        undefined1 in_R8B;
        shared_ptr local_78;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_68[24];
        bool local_50;
        uint local_4c;
        shared_ptr local_48;
        TextureFormatBitSet local_38[2];

        this_01 = (TextureManager*)CONCAT44(in_register_0000003c, param_1);
        local_38[0].m_bits = in_ECX.m_bits;
        local_50 = (bool)in_R8B;
        local_68._16_8_ = GetTextureCacheKey(this_01, (uint)CONCAT71(in_register_00000011, param_3),
                                             (TextureType*)TextureType::CUBEMAP, local_38, false);
        psVar1 = (shared_ptr*)(CONCAT44(in_register_00000034, param_2.m_bits) + 288);
        local_78.Find(psVar1);
        bVar4 = shared_ptr::operator_cast_to_bool(&local_78);
        if (bVar4) {
            new (this_01) shared_ptr<oldscape::dash3d::Decor>(&local_78);
            goto LAB_100861dbe;
        }
        GetCubeTextureData((uint)&local_48, param_2);
        bVar4 = operator!=(&local_48, (_func_decltype_nullptr*)0);
        if (bVar4) {
            this = (unique_ptr*)shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
            bVar4 = std::unique_ptr::operator_cast_to_bool(this);
            if (!bVar4)
                goto LAB_100861da6;
            lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
            uVar2 = *(uint*)(lVar5 + 16);
            lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
            local_4c = *(uint*)(lVar5 + 20);
            this_00 =
                (unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>*)shared_ptr<TextureData>::operator->(
                    (shared_ptr<TextureData>*)&local_48);
            puVar6 = (uchar*)std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(this_00);
            lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
            uVar3 = *(uint*)(lVar5 + 12);
            lVar5 = shared_ptr<TextureData>::operator->((shared_ptr<TextureData>*)&local_48);
            local_68->CreateHALTextureCube(uVar2, local_4c, puVar6, uVar3, *(uint*)(lVar5 + 8), local_50, true,
                                           local_38[0]);
            KeepAliveCache<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::Insert((ulonglong*)this_01,
                                                                                                  psVar1);
            local_68->~shared_ptr();
        } else {
        LAB_100861da6:
            new (this_01) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&NullTextureCube);
        }
        local_48.~shared_ptr();
    LAB_100861dbe:
        local_78.~shared_ptr();
        return this_01;
    }

    // 0x100862060, 272 bytes, placed by class name
    // TextureManager::GetDefaultTextureCube(int, bool)
    TextureManager* TextureManager::GetDefaultTextureCube(int param_1, bool param_2) {
        MapArea* pMVar2;
        long lVar3;
        undefined7 in_register_00000011;
        undefined4 in_register_00000034;
        TextureManager* this_00;
        undefined8 uVar4;
        Singleton<render::RenderDevice>* this_01;
        TextureFormatBitSet local_30[2];

        this_00 = (TextureManager*)CONCAT44(in_register_00000034, param_1);
        if ((int)CONCAT71(in_register_00000011, param_2) < 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("materialID > -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "materials/textures/TextureManager.cpp",
                      681, (char*)0);
        }
        new (local_30) callstack::Callstack();
        if (UseCompressedTextures(this_00) == '\0') {
            uVar4 = 5;
        } else {
            pMVar2 = (MapArea*)this_00->Instance();
            lVar3 = pMVar2->GetOrigin();
            if (*(char*)(lVar3 + 161) == '\0') {
                pMVar2 = (MapArea*)pMVar2->Instance();
                lVar3 = pMVar2->GetOrigin();
                if (*(char*)(lVar3 + 162) == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/textures/TextureManager.cpp",
                                    696, (char*)0);
                }
                uVar4 = 2;
            } else {
                uVar4 = 0;
            }
        }
        this_01 = (Singleton<render::RenderDevice>*)local_30;
        this_01->AddFormatType(uVar4);
        pMVar2 = (MapArea*)this_01->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 147) != '\0') {
            local_30->AddFormatType(7);
        }
        GetHALTextureCube((uint)this, (TextureFormatBitSet)param_1, param_2);
        return this;
    }

    // 0x100889380, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.188
    void ___cxx_global_var_init_188(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TextureManager::NullTextureData) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5348, &TextureManager::NullTextureData, 4294967296);
    }

    // 0x1008893c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.189
    void ___cxx_global_var_init_189(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TextureManager::NullTexture) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5328, &TextureManager::NullTexture, 4294967296);
    }

    // 0x100889400, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.190
    void ___cxx_global_var_init_190(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&TextureManager::NullTextureCube) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5310, &TextureManager::NullTextureCube, 4294967296);
    }

} // namespace jag::graphics
