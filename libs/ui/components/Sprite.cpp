// libs/ui/components/Sprite.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Sprite.h"

namespace jag::ui {
    // 0x100f3e9d2, 1 bytes, __data
    Sprite::m_debugObjSpriteShowLoading = 0;

    // 0x100f3e9d3, 1 bytes, __data
    Sprite::m_debugObjSpritePrintHashKey = 0;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Sprite::UpdateObjQuantityText();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Sprite::GetObjQuantityFontID() const;

    // 0x1001d21f0: the linker folded this into oldscape::NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&), which has identical code
    Sprite::GetObjSprite();

    // 0x1002699a0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const, which has identical code
    Sprite::GetType() const;

    // 0x1004c6a70: the linker folded this into game::WaterType::GetBaseRGBA() const, which has identical code
    Sprite::GetHTTPImage() const;

    // 0x1006ab660, 64 bytes, placed by class name and debug map
    // Sprite::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Sprite::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* this_00;

        this_00 = field_392;
        this_00->DecodeSpriteData(param_1, param_2);
        field_96 = this_00->GetLevel();
        field_100 = this_00->GetSpriteAlpha();
    }

    // 0x1006ab6a0, 80 bytes, placed by class name and debug map
    // Sprite::MainDrawClipped(ComponentDependencies const&)
    void Sprite::MainDrawClipped(ComponentDependencies* param_1) {
        shared_ptr* this_00;

        if (GetLinkObjType(this) != -1) {
            if (field_392->GetObjSpriteIsHighRes() == '\0') {
                this_00 = (shared_ptr*)field_392->GetDefaultValue();
                if (!shared_ptr::operator_cast_to_bool(this_00)) {
                    (*(code*)field_0[35])(this);
                }
            }
        }
    }

    // 0x1006ab720, 4144 bytes, placed by class name
    // Sprite::DrawSprite(ComponentDependencies const&, int, int)
    /* WARNING: Removing unreachable block (ram,4301961814) */
    /* WARNING: Removing unreachable block (ram,4301961858) */
    /* Sprite::DrawSprite(ComponentDependencies const&, int, int) */

    undefined* Sprite::DrawSprite(ComponentDependencies* param_1, int param_2, int param_3) {
        EntityHighlightState* this_00;
        undefined1* puVar1;
        jag* this_01;
        RT7Core* this_02;
        FontManager* this_03;
        FontHelpers* this_04;
        GUIManager* this_05;
        AnimBase* this_06;
        ComponentDependencies* pCVar2;
        char cVar3;
        bool bVar4;
        byte bVar5;
        ushort uVar6;
        int iVar7;
        undefined4 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        longlong lVar11;
        shared_ptr* psVar12;
        RenderTargets* this_07;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_08;
        long* plVar13;
        HTTPSpriteData* this_09;
        fixed_string* pfVar14;
        TextureManager* this_10;
        SpriteAtlasManager* pSVar15;
        Logger* this_11;
        TextProperties* pTVar16;
        TextProperties* this_12;
        DragState* this_13;
        SpriteAtlas* this_14;
        long lVar17;
        uint* puVar18;
        MapArea* this_15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar19;
        TextProperties* pTVar20;
        vector* pvVar21;
        int* piVar22;
        DrawCallState* pDVar23;
        Rect* pRVar24;
        undefined4 in_register_00000014;
        TextProperties* pTVar25;
        uchar* extraout_RDX;
        ulong uVar26;
        uint uVar27;
        vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>* this_16;
        ulong uVar28;
        int iVar29;
        uint uVar30;
        _func_decltype_nullptr* p_Var31;
        ulong uVar32;
        int iVar33;
        int iVar34;
        uint uVar35;
        float fVar36;
        undefined4 extraout_XMM0_Db;
        undefined4 extraout_XMM0_Dc;
        undefined4 extraout_XMM0_Dd;
        float fVar37;
        undefined1 auVar38[16];
        StringView SVar39;
        StringView SVar40;
        TextProperties* in_stack_fffffffffffffe68;
        undefined4 uVar41;
        undefined8 in_stack_fffffffffffffe70;
        undefined4 uVar42;
        undefined8 in_stack_fffffffffffffe78;
        undefined4 uVar43;
        StringView local_158;
        StringView local_148;
        undefined1 local_138[24];
        undefined1 local_120[16];
        DrawCallState local_110;
        int local_dc;
        uint local_d8[4];
        undefined* local_c8;
        ulong local_c0;
        undefined1 local_b8[24];
        ulong local_a0;
        GUIManager* local_98;
        AnimBase* local_90;
        uint local_88;
        int local_84;
        TextProperties* local_80;
        ulong local_78;
        int local_6c;
        ulong local_68;
        TextProperties* local_60;
        uint local_58;
        uint local_54;
        ComponentDependencies* local_50;
        uint local_48;
        undefined8 local_44;
        float local_3c;
        float local_38;
        uint local_34;

        uVar42 = (undefined4)((ulong)in_stack_fffffffffffffe70 >> 32);
        uVar43 = (undefined4)((ulong)in_stack_fffffffffffffe78 >> 32);
        local_b8._16_8_ = CONCAT44(in_register_00000014, param_2);
        uVar28 = (ulong)(uint)param_3;
        iVar7 = GetLinkObjType(this);
        if (iVar7 == -1) {
            iVar7 = GetHTTPImage(this);
            if (iVar7 == -1) {
                this_10 = (TextureManager*)(*(RT7Core**)(param_1 + 16))->GetTextureManager();
                pSVar15 = (SpriteAtlasManager*)this_10->GetSpriteAtlasManager();
                local_c8 = (undefined*)LoadSpriteAtlasReference(this, pSVar15);
                pTVar25 = (TextProperties*)0;
                if (local_c8 != DataStatus::READY)
                    goto LAB_1006aba4c;
                goto LAB_1006aba8b;
            }
            puVar1 = &field_464;
            local_68 = uVar28;
            bVar4 = puVar1->operator_cast_to_bool();
            if (!bVar4) {
                local_b8._0_4_ = GetHTTPImage(this);
                this_01 = (jag*)(local_120 + 16);
                bucket_make_unique<HTTPSpriteData, int>(this_01, (int*)local_b8);
                std::unique_ptr<HTTPSpriteData, BucketDeleter<HTTPSpriteData>>::operator=(
                    (unique_ptr<HTTPSpriteData, BucketDeleter<HTTPSpriteData>>*)puVar1, (unique_ptr*)this_01);
                this_01->~unique_ptr();
            }
            this_09 = (HTTPSpriteData*)std::unique_ptr<HTTPSpriteData, BucketDeleter<HTTPSpriteData>>::operator->(
                (unique_ptr<HTTPSpriteData, BucketDeleter<HTTPSpriteData>>*)puVar1);
            local_50 = param_1;
            pfVar14 = (fixed_string*)(**(code**)(**(long**)(param_1 + 48) + 24))();
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_158, pfVar14);
            SVar39.field_8 = extraout_RDX;
            SVar39.field_0 = (ulong)&local_158;
            local_c8 = (undefined*)this_09->Service(SVar39);
            if (local_c8 == DataStatus::READY) {
                this_11 = (Logger*)std::unique_ptr<HTTPSpriteData, BucketDeleter<HTTPSpriteData>>::operator->(
                    (unique_ptr<HTTPSpriteData, BucketDeleter<HTTPSpriteData>>*)puVar1);
                pvVar19 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_11->GetLogStreams();
                pTVar16 = (TextProperties*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                    pvVar19);
            } else {
                pTVar16 = (TextProperties*)0;
            }
            pTVar25 = (TextProperties*)0;
            this_12 = (TextProperties*)0;
            uVar28 = local_68;
            param_1 = local_50;
        LAB_1006abaa4:
            if ((pTVar16 == (TextProperties*)0) && (pTVar25 == (TextProperties*)0))
                goto LAB_1006ac5eb;
        } else {
            local_c8 = (undefined*)(*(code*)field_0[35])(this);
            if ((*PTR_m_debugObjSpriteShowLoading_100ee6470 != '\0') && (local_c8 != DataStatus::READY)) {
                uVar9 = (*(RT7Core**)(param_1 + 16))->GetGUIManager();
                uVar41 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 32);
                uVar8 = GetStreamCountLastMix();
                GetMinMapX();
                in_stack_fffffffffffffe68 = (TextProperties*)CONCAT44(uVar41, 1);
                uVar9->AddColouredRectangle(local_b8._16_8_, uVar28, uVar8);
            }
            if (*PTR_m_debugObjSpritePrintHashKey_100ee6478 != '\0') {
                ((local_120 + 16))->GetBounds();
                cVar3 = ((local_120 + 16))->IsInside((int)*(float*)(param_1 + 60), (int)*(float*)(param_1 + 64));
                if (cVar3 != '\0') {
                    uVar9 = logger::default_logger();
                    uVar10 = field_392->size();
                    logger::Logger::Log(uVar9, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                        "components/Sprite.cpp",
                                        52, "ObjSprite Hash Key: %lld", uVar10);
                    uVar8 = (undefined4)((ulong)uVar10 >> 32);
                    lVar11 = field_392->size();
                    SpriteData::ObjSpriteCacheKeyDetails(lVar11, (int*)(local_120 + 16), (bool*)local_120,
                                                         (bool*)&local_34, (uint*)local_b8, local_d8);
                    uVar9 = logger::default_logger();
                    uVar42 = 1;
                    uVar43 = 1;
                    in_stack_fffffffffffffe68 =
                        (TextProperties*)CONCAT44(uVar8, local_110.m_pInputAssemblerState._0_4_);
                    logger::Logger::Log(uVar9, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                        "components/Sprite.cpp");
                }
            }
            if (local_c8 == DataStatus::NOTLOADED) {
                return local_c8;
            }
            cVar3 = field_392->GetObjSpriteIsHighRes();
            if (cVar3 != '\0') {
                psVar12 = (shared_ptr*)(*(RT7Core**)(param_1 + 16))->GetObjectSpriteRT(2);
                bVar4 = shared_ptr::operator_cast_to_bool(psVar12);
                pTVar25 = (TextProperties*)0;
                if (bVar4) {
                    this_07 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)psVar12);
                    this_08 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  this_07->GetColourTargetTextures();
                    plVar13 = (long*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_08,
                                                                                                               0);
                    pTVar25 = (TextProperties*)*plVar13;
                }
            LAB_1006aba4c:
                pTVar16 = (TextProperties*)0;
                this_12 = (TextProperties*)0;
                goto LAB_1006abaa4;
            }
        LAB_1006aba8b:
            pvVar19 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_392->GetDefaultValue();
            this_12 =
                (TextProperties*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar19);
            pTVar25 = (TextProperties*)0;
            pTVar16 = (TextProperties*)0;
            if (this_12 == (TextProperties*)0)
                goto LAB_1006abaa4;
        }
        local_80 = pTVar25;
        local_60 = pTVar16;
        bVar5 = GetAlpha();
        local_c0 = (ulong)bVar5;
        local_50 = param_1;
        this_13 = (DragState*)(**(code**)(**(long**)(param_1 + 48) + 80))();
        cVar3 = this_13->IsDraggedComponent(this);
        local_68 = uVar28;
        if (cVar3 == '\0') {
            if ((int)local_c0 != 0)
                goto LAB_1006abb36;
        LAB_1006abccb:
            uVar28 = local_68;
            param_1 = local_50;
        } else {
            cVar3 = field_264->GetSpriteAlpha();
            if (cVar3 == '\0') {
                local_c0 = (ulong)((float)(int)local_c0 * 0.5);
            }
            if ((int)local_c0 == 0)
                goto LAB_1006abccb;
        LAB_1006abb36:
            iVar7 = GetUIHeight();
            local_88 = 4294967040;
            if (iVar7 != 0) {
                local_88 = iVar7 << 8;
            }
            local_34 = 0;
            local_58 = 0;
            local_48 = 0;
            local_54 = 0;
            local_44._0_4_ = (GUIManager*)0;
            local_44._4_4_ = 0.0;
            local_3c = 1.0;
            local_38 = 1.0;
            puVar1 = field_392;
            bVar5 = puVar1->GetSpriteVFlip();
            param_1 = local_50;
            pTVar16 = local_80;
            local_90 = (AnimBase*)puVar1;
            if (this_12 == (TextProperties*)0) {
                local_78 = CONCAT71(local_78._1_7_, bVar5);
                pTVar20 = local_60;
                pTVar25 = local_60;
                if ((local_60 == (TextProperties*)0) && (local_80 != (TextProperties*)0)) {
                    local_34 = 0;
                    local_48 = 0;
                    local_58 = 0;
                    local_54 = 0;
                    puVar18 = (uint*)local_80->second();
                    local_44._0_4_ = (GUIManager*)(1.0 / (float)*puVar18);
                    lVar17 = pTVar16->second();
                    local_44._4_4_ = 1.0 / (float)*(uint*)(lVar17 + 4);
                    iVar7 = GetStreamCountLastMix();
                    local_60._0_4_ = (float)iVar7 + 1.0;
                    puVar18 = (uint*)pTVar16->second();
                    local_3c = local_60._0_4_ / (float)*puVar18;
                    iVar7 = GetMinMapX();
                    local_60 = (TextProperties*)CONCAT44(local_60._4_4_, (float)iVar7 + 1.0);
                    lVar17 = pTVar16->second();
                    local_38 = local_60._0_4_ / (float)*(uint*)(lVar17 + 4);
                    local_78 = local_78 ^ 1;
                    pTVar20 = pTVar16;
                    pTVar25 = local_60;
                }
            } else {
                iVar7 = GetLinkObjType(this);
                local_78 = CONCAT71(local_78._1_7_, bVar5 ^ iVar7 != -1);
                psVar12 = (shared_ptr*)this_12->second();
                bVar4 = shared_ptr::operator_cast_to_bool(psVar12);
                if (bVar4) {
                    this_14 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)psVar12);
                    local_80 = this_12;
                    iVar7 = this_12->capacity();
                    lVar17 = this_14->GetSpriteRenderMapping(iVar7);
                    this_00 = (EntityHighlightState*)(lVar17 + 88);
                    local_44._0_4_ = (GUIManager*)this_00->GetOverbright();
                    local_44._4_4_ = (float)this_00->GetAlpha();
                    local_3c = (float)this_00->MaxU();
                    param_1 = local_50;
                    local_38 = (float)this_00->MaxV();
                    this_16 =
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar17 +
                                                                                                             8);
                    puVar18 =
                        (uint*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](this_16,
                                                                                                               0);
                    local_34 = *puVar18;
                    puVar18 =
                        (uint*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](this_16,
                                                                                                               1);
                    local_48 = *puVar18;
                    puVar18 =
                        (uint*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](this_16,
                                                                                                               2);
                    this_12 = local_80;
                    local_58 = *puVar18;
                    puVar18 =
                        (uint*)eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](this_16,
                                                                                                               3);
                    local_54 = *puVar18;
                    this_15 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)psVar12);
                    pvVar19 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_15->GetOrigin();
                    pTVar20 =
                        (TextProperties*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            pvVar19);
                    pTVar25 = local_60;
                } else {
                    pTVar20 = (TextProperties*)0;
                    pTVar25 = local_60;
                    param_1 = local_50;
                }
            }
            local_60 = pTVar20;
            if (local_60 == (TextProperties*)0) {
                uVar28 = local_68;
                local_60 = pTVar25;
            } else {
                local_98 = (GUIManager*)(*(RT7Core**)(param_1 + 16))->GetGUIManager();
                cVar3 = local_90->GetSpriteHFlip();
                if (cVar3 != '\0') {
                    eastl::swap<float>((float*)&local_44, &local_3c);
                    eastl::swap<unsigned int>(&local_34, &local_58);
                }
                if ((char)local_78 != '\0') {
                    eastl::swap<float>((float*)((long)&local_44 + 4), &local_38);
                    eastl::swap<unsigned int>(&local_48, &local_54);
                }
                local_88 = local_88 | (uint)local_c0;
                iVar33 = local_b8._16_4_;
                local_78 = (ulong)(local_34 + iVar33);
                iVar7 = GetStreamCountLastMix();
                local_6c = (iVar7 + iVar33) - local_58;
                iVar7 = GetMinMapX();
                uVar28 = local_68;
                this_06 = local_90;
                iVar33 = (int)local_68;
                local_84 = (iVar7 + iVar33) - local_54;
                local_a0 = (ulong)(local_48 + iVar33);
                uVar6 = local_90->GetTransformCount();
                if (uVar6 == 0) {
                    cVar3 = this_06->GetSpriteTiling();
                    pTVar16 = local_60;
                    if (cVar3 != '\0') {
                        local_80 = this_12;
                        new ((local_120 + 16)) graphics::ClippingState(*(RT7Core**)(param_1 + 16));
                        this_02 = *(RT7Core**)(param_1 + 16);
                        iVar7 = GetStreamCountLastMix();
                        iVar34 = GetMinMapX();
                        uVar9 = local_b8._16_8_;
                        iVar29 = local_b8._16_4_;
                        this_02->SetClippingRectangle(iVar29, iVar33, iVar7, iVar34, false);
                        iVar7 = GetStreamCountLastMix();
                        iVar34 = GetMinMapX();
                        in_stack_fffffffffffffe68 = local_60;
                        local_44->AddElementTiled(local_98, uVar9 & 4294967295, uVar28 & 4294967295, iVar7 + iVar29,
                                                  iVar34 + iVar33, local_88, local_60, CONCAT44(uVar42, 1),
                                                  CONCAT44(uVar43, local_34), local_58, local_54, local_48, 0, 0);
                        ((local_120 + 16))->~ClippingState();
                        goto LAB_1006ac5d3;
                    }
                    if ((((local_34 == 0) && (local_58 == 0)) && (local_48 == 0)) && (local_54 == 0)) {
                        uVar26 = local_a0;
                        uVar32 = local_78;
                        iVar7 = local_84;
                        iVar33 = local_6c;
                    } else {
                        local_80 = this_12;
                        puVar18 = (uint*)local_60->second();
                        local_90._0_4_ = (float)*puVar18;
                        fVar36 = (float)::abs(local_3c - (float)(GUIManager*)local_44);
                        uVar27 = (uint)(fVar36 * local_90._0_4_);
                        lVar17 = pTVar16->second();
                        local_90 = (AnimBase*)CONCAT44(local_90._4_4_, (float)*(uint*)(lVar17 + 4));
                        fVar36 = (float)::abs(local_38 - local_44._4_4_);
                        uVar35 = (uint)(fVar36 * local_90._0_4_);
                        iVar33 = local_34 + uVar27 + local_58;
                        iVar7 = local_48 + uVar35 + local_54;
                        iVar34 = GetStreamCountLastMix();
                        if ((iVar33 == iVar34) && (iVar34 = GetMinMapX(), iVar7 == iVar34)) {
                            uVar26 = local_a0;
                            uVar28 = local_68;
                            uVar32 = local_78;
                            param_1 = local_50;
                            this_12 = local_80;
                            iVar7 = local_84;
                            iVar33 = local_6c;
                        } else {
                            iVar34 = GetStreamCountLastMix();
                            iVar33 = (int)(iVar34 * uVar27) / iVar33;
                            iVar34 = GetMinMapX();
                            iVar7 = (int)(iVar34 * uVar35) / iVar7;
                            uVar30 = (local_34 * iVar33) / uVar27 + local_b8._16_4_;
                            uVar32 = (ulong)uVar30;
                            uVar27 = (local_48 * iVar7) / uVar35 + (int)local_68;
                            uVar26 = (ulong)uVar27;
                            iVar33 = iVar33 + uVar30;
                            iVar7 = iVar7 + uVar27;
                            uVar28 = (ulong)uVar27;
                            local_b8._16_8_ = ZEXT48(uVar30);
                            param_1 = local_50;
                            this_12 = local_80;
                        }
                    }
                    in_stack_fffffffffffffe68 = local_60;
                    ((undefined4)(GUIManager*)local_44)
                        ->AddElement(local_98, uVar32, uVar26, iVar33, iVar7, local_88, local_60, CONCAT44(uVar42, 1));
                } else if (graphics::GUIManager::m_skipRotatedElements == '\0') {
                    local_90 = (AnimBase*)CONCAT44(local_90._4_4_, (uint)uVar6);
                    local_80 = this_12;
                    puVar18 = (uint*)(*(NXTRenderCanvas**)(param_1 + 16))->GetPixelBuffer();
                    iVar7 = local_6c;
                    iVar33 = local_6c - (int)local_78;
                    iVar34 = local_84 - (int)local_a0;
                    uVar27 = *puVar18;
                    p_Var31 = (_func_decltype_nullptr*)(ulong)uVar27;
                    new (local_b8)
                        oldscape::dash3d::GridRect(uVar27, puVar18[1], puVar18[2] - uVar27, puVar18[3] - puVar18[1]);
                    new (local_d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var31);
                    if (local_90._0_4_ == 4.59177e-41) {
                        new ((local_120 + 16)) oldscape::dash3d::GridRect((int)local_78, (int)local_a0, iVar33, iVar34);
                        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)local_d8, (Rect*)(local_120 + 16));
                    } else {
                        fVar37 = (float)iVar33 * 0.5;
                        fVar36 = (float)iVar34 * 0.5;
                        iVar29 = (int)local_78 + (int)fVar37;
                        iVar7 = (int)local_a0 + (int)fVar36;
                        if (((uint)local_90._0_4_ & 32767) == 16384) {
                            new ((local_120 + 16))
                                oldscape::dash3d::GridRect(iVar29 - (int)fVar36, iVar7 - (int)fVar37, iVar34, iVar33);
                            iVar7 = local_6c;
                            math::Rect<unsigned int>::operator=((Rect<unsigned int>*)local_d8, (Rect*)(local_120 + 16));
                        } else {
                            fVar36 = fVar36 * fVar36 + fVar37 * fVar37;
                            auVar38._4_4_ = extraout_XMM0_Db;
                            auVar38._0_4_ = fVar36;
                            auVar38._8_4_ = extraout_XMM0_Dc;
                            auVar38._12_4_ = extraout_XMM0_Dd;
                            auVar38 = rsqrtss(ZEXT816(0), auVar38);
                            fVar37 = fVar36 * auVar38._0_4_;
                            iVar33 = (int)(float)(~-(uint)(ABS(fVar36) < 1.1754944e-38) &
                                                  (uint)((fVar37 * auVar38._0_4_ + -3.0) * fVar37 * -0.5));
                            new ((local_120 + 16))
                                oldscape::dash3d::GridRect(iVar29 - iVar33, iVar7 - iVar33, iVar33 * 2, iVar33 * 2);
                            math::Rect<unsigned int>::operator=((Rect<unsigned int>*)local_d8, (Rect*)(local_120 + 16));
                            iVar7 = local_6c;
                        }
                    }
                    cVar3 = local_b8->Contains(local_d8);
                    if (cVar3 == '\0') {
                        pRVar24 = (Rect*)local_b8;
                        (*(ScaleManager**)(local_50 + 24))->InterfaceToScreenRect(local_b8, true);
                        iVar7 = local_b8->Right();
                        uVar28 = local_68;
                        if ((-1 < iVar7) && (iVar7 = local_b8->MaxZ(), -1 < iVar7)) {
                            pvVar21 = local_b8->SSOBeginPtr(pRVar24);
                            iVar7 = *(int*)pvVar21;
                            iVar33 = (*(RT7Core**)(local_50 + 16))->GetBackBufferWidth();
                            if (iVar7 < iVar33) {
                                piVar22 = (int*)local_b8->y();
                                iVar7 = *piVar22;
                                iVar33 = (*(RT7Core**)(local_50 + 16))->GetBackBufferHeight();
                                pCVar2 = local_50;
                                if (iVar7 < iVar33) {
                                    iVar7 = (*(RT7Core**)(local_50 + 16))->GetBackBufferWidth();
                                    iVar33 = (*(RT7Core**)(pCVar2 + 16))->GetBackBufferHeight();
                                    new (local_138) oldscape::dash3d::GridRect(0, 0, iVar7, iVar33);
                                    ((local_120 + 16))->Intersection(local_b8, local_138);
                                    math::Rect<unsigned int>::operator=((Rect<unsigned int>*)local_b8,
                                                                        (Rect*)(local_120 + 16));
                                    pDVar23 = (DrawCallState*)local_98->GetCurrentState();
                                    new ((local_120 + 16)) render::DrawCallState(pDVar23);
                                    pvVar21 = local_b8->SSOBeginPtr(pDVar23);
                                    local_dc = *(int*)pvVar21;
                                    iVar33 = (*(RT7Core**)(pCVar2 + 16))->GetBackBufferHeight();
                                    iVar34 = local_b8->MaxZ();
                                    piVar22 = (int*)local_b8->second();
                                    iVar7 = *piVar22;
                                    piVar22 = (int*)local_b8->qw();
                                    new (local_120)
                                        oldscape::dash3d::GridRect(local_dc, iVar33 - iVar34, iVar7, *piVar22);
                                    pRVar24 = (Rect*)((local_120 + 16))->GetOutputMergerState();
                                    render::OutputMergerState::SetScissorRects(pRVar24, (uint)local_120);
                                    local_98->Begin((DrawCallState*)(local_120 + 16));
                                    ((local_120 + 16))->~DrawCallState();
                                    this_05 = local_98;
                                    in_stack_fffffffffffffe68 = local_60;
                                    local_44->AddElementRotated(local_98, local_78, local_a0, local_6c, local_84,
                                                                local_88, local_60, CONCAT44(uVar42, 1),
                                                                CONCAT44(uVar43, 4293967297), 4293967297);
                                    uVar28 = local_68;
                                    this_05->End();
                                }
                            }
                        }
                    } else {
                        in_stack_fffffffffffffe68 = local_60;
                        local_44->AddElementRotated(local_98, local_78, local_a0, iVar7, local_84, local_88, local_60,
                                                    CONCAT44(uVar42, 1), CONCAT44(uVar43, 4293967297), 4293967297);
                        uVar28 = local_68;
                    }
                LAB_1006ac5d3:
                    param_1 = local_50;
                    this_12 = local_80;
                }
            }
        }
        if ((int)local_c0 == 0) {
            return local_c8;
        }
    LAB_1006ac5eb:
        iVar7 = GetLinkObjType(this);
        if ((iVar7 != -1) && (this_12 != (TextProperties*)0)) {
            local_68 = uVar28;
            (*(code*)field_0[34])(this);
            (*(code*)field_0[32])(
                (SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                             std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>*)local_b8,
                this);
            cVar3 = local_b8->empty();
            if (cVar3 == '\0') {
                this_03 = *(FontManager**)(param_1 + 8);
                iVar7 = (*(code*)field_0[33])(this);
                psVar12 = (shared_ptr*)this_12->second();
                psVar12 = (shared_ptr*)this_03->GetFont(iVar7, psVar12);
                bVar4 = shared_ptr::operator_cast_to_bool(psVar12);
                if (bVar4) {
                    local_d8[0] = 511;
                    pTVar16 = (TextProperties*)(local_120 + 16);
                    graphics::TextProperties::TextProperties(pTVar16, psVar12);
                    bVar5 = GetAlpha();
                    new ((local_138 + 16)) eastl::optional<unsigned int>(local_d8);
                    pTVar16->SetColours(bVar5 | 4294967040, (optional<unsigned int>*)(local_138 + 16));
                    this_04 = *(FontHelpers**)param_1;
                    new (&local_148) StringView(local_b8);
                    SVar40.field_8 = (uchar*)local_b8._16_8_;
                    SVar40.field_0 = (ulong)&local_148;
                    this_04->DrawString(SVar40, (int)local_68, 0, (uint)pTVar16, in_stack_fffffffffffffe68);
                }
            }
        }
        return local_c8;
    }

} // namespace jag::ui
