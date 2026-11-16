// libs/ui/components/Sprite.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Sprite.h"

namespace jag::ui {
    // 0x100f3e9d2
    bool Sprite::m_debugObjSpriteShowLoading = 0;

    // 0x100f3e9d3
    bool Sprite::m_debugObjSpritePrintHashKey = 0;

    // 0x100009e70: Sprite::UpdateObjQuantityText() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: Sprite::GetObjQuantityFontID() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1001d21f0: Sprite::GetObjSprite() has the same machine code as oldscape::NoJs5ResourceProvider::IndexReady(Js5ArchiveSettings const&)

    // 0x1002699a0: Sprite::GetType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const

    // 0x1004c6a70: Sprite::GetHTTPImage() const has the same machine code as game::WaterType::GetBaseRGBA() const

    // 0x1006ab660
    void Sprite::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint8_t* this_00 = &field_392;
        this_00->DecodeSpriteData(arg1, arg2);
        field_96 = this_00->GetLevel();
        field_100 = this_00->GetSpriteAlpha();
    }

    // 0x1006ab6a0
    void Sprite::MainDrawClipped(const ComponentDependencies& componentDependencies) {

        if (GetLinkObjType() != -1) {
            if (!(field_392.GetObjSpriteIsHighRes())) {
                if (!((field_392.GetDefaultValue())->operator_cast_to_bool())) {
                    GetObjSprite();
                }
            }
        }
    }

    // 0x1006ab720
    uint8_t* Sprite::DrawSprite(const ComponentDependencies& componentDependencies, int arg2, int arg3) {
        uint8_t* result;
        EntityHighlightState* this_00;
        uint8_t* puVar1;
        ReturnValue result;
        TextProperties* this_01;
        RT7Core* this_02;
        FontManager* this_03;
        FontHelpers* this_04;
        AnimBase* this_05;
        ComponentDependencies* pCVar2;
        uint8_t uVar3;
        bool cVar4;
        unsigned short uVar6;
        int iVar8;
        uint64_t extraout_var;
        GUIManager* pGVar9;
        Logger* pLVar10;
        uint64_t uVar11;
        shared_ptr* psVar12;
        RenderTargets* this_06;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_07;
        long* plVar13;
        HTTPSpriteData* this_08;
        basic_string<char, BucketAllocatorEASTL>* str;
        SpriteAtlasManager* spriteAtlasManager;
        Texture* pTVar14;
        Texture* this_10;
        SpriteAtlas* this_12;
        long lVar15;
        unsigned int* puVar16;
        MapArea* this_13;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        Texture* pTVar18;
        int* piVar19;
        DrawCallState* drawCallState;
        uint64_t extraout_var_00;
        shared_ptr<graphics::SpriteAtlas>* spriteAtlas;
        uint32_t in_register_00000014;
        Texture* pTVar20;
        unsigned int uVar21;
        vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true>>* this_15;
        int iVar23;
        char* pcVar24;
        char* pcVar25;
        int iVar26;
        unsigned int uVar27;
        float fVar28;
        uint32_t extraout_XMM0_Db;
        uint32_t extraout_XMM0_Dc;
        uint32_t extraout_XMM0_Dd;
        float fVar29;
        uint8_t auVar30[16];
        uint32_t uVar31;
        StringView local_158;
        StringView local_148;
        uint8_t local_138[24];
        uint8_t local_120[16];
        DrawCallState local_110;
        int local_dc;
        unsigned int local_d8[4];
        uint8_t* local_c8;
        uint8_t local_b8[24];
        unsigned long local_a0;
        GUIManager* local_98;
        AnimBase* local_90;
        unsigned int local_88;
        int local_84;
        unsigned long local_78;
        int local_6c;
        unsigned long local_68;
        unsigned int local_58;
        unsigned int local_54;
        ComponentDependencies* local_50;
        unsigned int local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        unsigned int local_34;

        local_b8._16_8_ = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long uVar22 = (unsigned long)(unsigned int)arg3;
        int iVar7 = GetLinkObjType();
        if (iVar7 == -1) {
            iVar7 = GetHTTPImage();
            if (iVar7 == -1) {
                spriteAtlasManager =
                    ((*(RT7Core**)(componentDependencies + 16))->GetTextureManager())->GetSpriteAtlasManager();
                return local_c8 = (uint8_t*)LoadSpriteAtlasReference(*spriteAtlasManager);
                pTVar20 = nullptr;
                if (local_c8 != DataStatus::READY)
                    goto LAB_1006aba4c;
                goto LAB_1006aba8b;
            }
            puVar1 = &field_464;
            local_68 = uVar22;
            cVar4 = puVar1->operator_cast_to_bool();
            if (!cVar4) {
                local_b8._0_4_ = GetHTTPImage();
                &result = (ReturnValue*)(local_120 + 16);
                bucket_make_unique<HTTPSpriteData, int>(&result, (int*)local_b8);
                *puVar1 = result;
                result.~unique_ptr();
            }
            this_08 = (HTTPSpriteData*)(*puVar1).operator->();
            local_50 = componentDependencies;
            str = (basic_string<char, BucketAllocatorEASTL>*)(**(void (**)(...))(
                **(long**)(componentDependencies + 48) + 24))();
            local_158.StringView<eastl::fixed_string<char, 40>>(*str);
            local_c8 = (uint8_t*)this_08->Service(&local_158);
            if (local_c8 == DataStatus::READY) {
                pLVar10 = (Logger*)(*puVar1).operator->();
                pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pLVar10->GetLogStreams();
                pTVar14 = (Texture*)pvVar17->end();
            } else {
                pTVar14 = nullptr;
            }
            pTVar20 = nullptr;
            this_10 = nullptr;
            uVar22 = local_68;
            componentDependencies = local_50;
        LAB_1006abaa4:
            if ((pTVar14 == nullptr) && (pTVar20 == nullptr))
                goto LAB_1006ac5eb;
        } else {
            uVar3 = GetObjSprite();
            local_c8 = (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
            if ((*PTR_m_debugObjSpriteShowLoading_100ee6470 != '\0') && (local_c8 != DataStatus::READY)) {
                pGVar9 = (*(RT7Core**)(componentDependencies + 16))->GetGUIManager();
                iVar7 = GetStreamCountLastMix();
                iVar8 = GetMinMapX();
                pGVar9->AddColouredRectangle(local_b8._16_4_, arg3, iVar7, iVar8, 4278255615, 1);
            }
            if (*PTR_m_debugObjSpritePrintHashKey_100ee6478 != '\0') {
                *((local_120 + 16)) = GetBounds();
                cVar4 = ((local_120 + 16))
                            ->IsInside((int)*(float*)(componentDependencies + 60),
                                       (int)*(float*)(componentDependencies + 64));
                if (cVar4) {
                    pLVar10 = logger::default_logger();
                    uVar11 = field_392.size();
                    pLVar10->Log(false, 8,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                 "Sprite.cpp",
                                 52, "ObjSprite Hash Key: %lld", uVar11);
                    uVar31 = (uint32_t)((unsigned long)uVar11 >> 32);
                    SpriteData::ObjSpriteCacheKeyDetails(field_392.size(), *((local_120 + 16)), *local_120, local_34,
                                                         *local_b8, *local_d8);
                    pLVar10 = logger::default_logger();
                    pcVar24 = "true";
                    pcVar25 = "true";
                    if (local_120[0] == (Rect<unsigned int>)0) {
                        pcVar25 = "false";
                    }
                    if (local_34._0_1_ == false) {
                        pcVar24 = "false";
                    }
                    pLVar10->Log(false, 8,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                 "Sprite.cpp",
                                 57,
                                 "ObjSprite Details: type %d, useRecolour %s, isHighRes %s, outline %u, shadowRGBA %u",
                                 (((uint64_t)uVar31 << 32) | (uint32_t)local_110.m_pInputAssemblerState._0_4_), pcVar25,
                                 pcVar24, local_b8._0_4_, local_d8[0]);
                }
            }
            if (local_c8 == DataStatus::NOTLOADED) {
            }
            cVar4 = field_392.GetObjSpriteIsHighRes();
            if (cVar4) {
                psVar12 = (*(RT7Core**)(componentDependencies + 16))->GetObjectSpriteRT(2);
                cVar4 = shared_ptr::operator_cast_to_bool(psVar12);
                pTVar20 = nullptr;
                if (cVar4) {
                    this_06 = (RenderTargets*)(*psVar12).operator->();
                    this_07 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  this_06->GetColourTargetTextures();
                    plVar13 = (long*)(*this_07)[0];
                    pTVar20 = (Texture*)*plVar13;
                }
            LAB_1006aba4c:
                pTVar14 = nullptr;
                this_10 = nullptr;
                goto LAB_1006abaa4;
            }
        LAB_1006aba8b:
            pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_392.GetDefaultValue();
            this_10 = (Texture*)pvVar17->end();
            pTVar20 = nullptr;
            pTVar14 = nullptr;
            if (this_10 == nullptr)
                goto LAB_1006abaa4;
        }
        Texture* local_80 = pTVar20;
        Texture* local_60 = pTVar14;
        uint8_t bVar5 = GetAlpha();
        unsigned long local_c0 = (unsigned long)bVar5;
        local_50 = componentDependencies;
        cVar4 =
            ((DragState*)(**(void (**)(...))(**(long**)(componentDependencies + 48) + 80))())->IsDraggedComponent(this);
        local_68 = uVar22;
        if (!cVar4) {
            if ((int)local_c0 != 0)
                goto LAB_1006abb36;
        LAB_1006abccb:
            uVar22 = local_68;
            componentDependencies = local_50;
        } else {
            cVar4 = field_264->GetSpriteAlpha();
            if (!cVar4) {
                local_c0 = (unsigned long)((float)(int)local_c0 * 0.5);
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
            local_44 = 0.0;
            local_40 = 0.0;
            local_3c = 1.0;
            local_38 = 1.0;
            puVar1 = &field_392;
            bVar5 = puVar1->GetSpriteVFlip();
            componentDependencies = local_50;
            pTVar14 = local_80;
            local_90 = (AnimBase*)puVar1;
            if (this_10 == nullptr) {
                local_78 = (((uint64_t)local_78._1_7_ << 8) | (uint8_t)bVar5);
                pTVar18 = local_60;
                pTVar20 = local_60;
                if ((local_60 == nullptr) && (local_80 != nullptr)) {
                    local_34 = 0;
                    local_48 = 0;
                    local_58 = 0;
                    local_54 = 0;
                    puVar16 = (unsigned int*)local_80->second();
                    local_44 = 1.0 / (float)*puVar16;
                    lVar15 = pTVar14->second();
                    local_40 = 1.0 / (float)*(unsigned int*)(lVar15 + 4);
                    iVar7 = GetStreamCountLastMix();
                    local_60._0_4_ = (float)iVar7 + 1.0;
                    puVar16 = (unsigned int*)pTVar14->second();
                    local_3c = local_60._0_4_ / (float)*puVar16;
                    iVar7 = GetMinMapX();
                    local_60 = (Texture*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)((float)iVar7 + 1.0));
                    lVar15 = pTVar14->second();
                    local_38 = local_60._0_4_ / (float)*(unsigned int*)(lVar15 + 4);
                    local_78 = local_78 ^ 1;
                    pTVar18 = pTVar14;
                    pTVar20 = local_60;
                }
            } else {
                iVar7 = GetLinkObjType();
                local_78 = (((uint64_t)local_78._1_7_ << 8) | (uint8_t)(bVar5 ^ iVar7 != -1));
                psVar12 = (shared_ptr*)this_10->second();
                cVar4 = shared_ptr::operator_cast_to_bool(psVar12);
                if (!cVar4) {
                    pTVar18 = nullptr;
                    pTVar20 = local_60;
                    componentDependencies = local_50;
                } else {
                    this_12 = (SpriteAtlas*)(*psVar12).operator->();
                    local_80 = this_10;
                    iVar7 = this_10->capacity();
                    lVar15 = this_12->GetSpriteRenderMapping(iVar7);
                    this_00 = (EntityHighlightState*)(lVar15 + 88);
                    local_44 = (float)this_00->GetOverbright();
                    local_40 = (float)this_00->GetAlpha();
                    local_3c = (float)this_00->MaxU();
                    componentDependencies = local_50;
                    local_38 = (float)this_00->MaxV();
                    this_15 = (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true>>*)(lVar15 + 8);
                    puVar16 = (unsigned int*)(*this_15)[0];
                    local_34 = *puVar16;
                    puVar16 = (unsigned int*)(*this_15)[1];
                    local_48 = *puVar16;
                    puVar16 = (unsigned int*)(*this_15)[2];
                    this_10 = local_80;
                    local_58 = *puVar16;
                    puVar16 = (unsigned int*)(*this_15)[3];
                    local_54 = *puVar16;
                    this_13 = (MapArea*)(*psVar12).operator->();
                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_13->GetOrigin();
                    pTVar18 = (Texture*)pvVar17->end();
                    pTVar20 = local_60;
                }
            }
            local_60 = pTVar18;
            if (local_60 == nullptr) {
                uVar22 = local_68;
                local_60 = pTVar20;
            } else {
                local_98 = (*(RT7Core**)(componentDependencies + 16))->GetGUIManager();
                cVar4 = local_90->GetSpriteHFlip();
                if (cVar4) {
                    eastl::swap<float>(local_44, local_3c);
                    eastl::swap<unsigned int>(local_34, local_58);
                }
                if ((char)local_78 != '\0') {
                    eastl::swap<float>(local_40, local_38);
                    eastl::swap<unsigned int>(local_48, local_54);
                }
                local_88 = local_88 | (unsigned int)local_c0;
                iVar8 = local_b8._16_4_;
                local_78 = (unsigned long)(local_34 + iVar8);
                iVar7 = GetStreamCountLastMix();
                local_6c = (iVar7 + iVar8) - local_58;
                iVar7 = GetMinMapX();
                uVar22 = local_68;
                this_05 = local_90;
                iVar8 = (int)local_68;
                local_84 = (iVar7 + iVar8) - local_54;
                local_a0 = (unsigned long)(local_48 + iVar8);
                uVar6 = local_90->GetTransformCount();
                if (uVar6 == 0) {
                    cVar4 = this_05->GetSpriteTiling();
                    pTVar14 = local_60;
                    if (cVar4) {
                        local_80 = this_10;
                        new ((local_120 + 16)) graphics::ClippingState(*(RT7Core**)(componentDependencies + 16));
                        this_02 = *(RT7Core**)(componentDependencies + 16);
                        iVar7 = GetStreamCountLastMix();
                        iVar26 = GetMinMapX();
                        iVar23 = local_b8._16_4_;
                        this_02->SetClippingRectangle(iVar23, iVar8, iVar7, iVar26, false);
                        iVar7 = GetStreamCountLastMix();
                        iVar26 = GetMinMapX();
                        local_98->AddElementTiled(iVar23, iVar8, iVar7 + iVar23, iVar26 + iVar8, local_88, local_44,
                                                  local_40, local_3c, local_38, local_60, 1, local_34, local_58,
                                                  local_54, local_48, 0, 0);
                        ((local_120 + 16))->~ClippingState();
                        goto LAB_1006ac5d3;
                    }
                    if ((((local_34 == 0) && (local_58 == 0)) && (local_48 == 0)) && (local_54 == 0)) {
                        uVar21 = (unsigned int)local_78;
                        uVar27 = (unsigned int)local_a0;
                        iVar7 = local_6c;
                        iVar8 = local_84;
                    } else {
                        local_80 = this_10;
                        puVar16 = (unsigned int*)local_60->second();
                        local_90._0_4_ = (float)*puVar16;
                        fVar28 = (float)::abs(local_3c - local_44);
                        uVar21 = (unsigned int)(fVar28 * local_90._0_4_);
                        lVar15 = pTVar14->second();
                        local_90 = (AnimBase*)(((uint64_t)local_90._4_4_ << 32) |
                                               (uint32_t)((float)*(unsigned int*)(lVar15 + 4)));
                        fVar28 = (float)::abs(local_38 - local_40);
                        uVar27 = (unsigned int)(fVar28 * local_90._0_4_);
                        iVar7 = local_34 + uVar21 + local_58;
                        iVar8 = local_48 + uVar27 + local_54;
                        iVar26 = GetStreamCountLastMix();
                        if ((iVar7 == iVar26) && (iVar26 = GetMinMapX(), iVar8 == iVar26)) {
                            uVar21 = (unsigned int)local_78;
                            uVar27 = (unsigned int)local_a0;
                            uVar22 = local_68;
                            componentDependencies = local_50;
                            this_10 = local_80;
                            iVar7 = local_6c;
                            iVar8 = local_84;
                        } else {
                            iVar26 = GetStreamCountLastMix();
                            iVar7 = (int)(iVar26 * uVar21) / iVar7;
                            iVar26 = GetMinMapX();
                            iVar8 = (int)(iVar26 * uVar27) / iVar8;
                            uVar21 = (local_34 * iVar7) / uVar21 + local_b8._16_4_;
                            uVar27 = (local_48 * iVar8) / uVar27 + (int)local_68;
                            iVar7 = iVar7 + uVar21;
                            iVar8 = iVar8 + uVar27;
                            uVar22 = (unsigned long)uVar27;
                            local_b8._16_8_ = (uint64_t)uVar21;
                            componentDependencies = local_50;
                            this_10 = local_80;
                        }
                    }
                    local_98->AddElement(uVar21, uVar27, iVar7, iVar8, local_88, local_44, local_40, local_3c, local_38,
                                         local_60, 1);
                } else if (graphics::GUIManager::m_skipRotatedElements == '\0') {
                    local_90 = (AnimBase*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)((unsigned int)uVar6));
                    local_80 = this_10;
                    piVar19 = (int*)(*(NXTRenderCanvas**)(componentDependencies + 16))->GetPixelBuffer();
                    iVar7 = local_6c;
                    iVar8 = local_6c - (int)local_78;
                    iVar26 = local_84 - (int)local_a0;
                    new (local_b8) oldscape::dash3d::GridRect(*piVar19, piVar19[1], piVar19[2] - *piVar19,
                                                              piVar19[3] - piVar19[1]);
                    new (local_d8) shared_ptr();
                    if (local_90._0_4_ == 4.59177e-41) {
                        new ((local_120 + 16)) oldscape::dash3d::GridRect((int)local_78, (int)local_a0, iVar8, iVar26);
                        *local_d8 = (*((local_120 + 16)));
                    } else {
                        fVar29 = (float)iVar8 * 0.5;
                        fVar28 = (float)iVar26 * 0.5;
                        iVar23 = (int)local_78 + (int)fVar29;
                        iVar7 = (int)local_a0 + (int)fVar28;
                        if (((unsigned int)local_90._0_4_ & 32767) == 16384) {
                            new ((local_120 + 16))
                                oldscape::dash3d::GridRect(iVar23 - (int)fVar28, iVar7 - (int)fVar29, iVar26, iVar8);
                            iVar7 = local_6c;
                            *local_d8 = (*((local_120 + 16)));
                        } else {
                            fVar28 = fVar28 * fVar28 + fVar29 * fVar29;
                            auVar30._4_4_ = extraout_XMM0_Db;
                            auVar30._0_4_ = fVar28;
                            auVar30._8_4_ = extraout_XMM0_Dc;
                            auVar30._12_4_ = extraout_XMM0_Dd;
                            auVar30 = rsqrtss((unsigned __int128)0, auVar30);
                            fVar29 = fVar28 * auVar30._0_4_;
                            iVar8 = (int)(float)(~-(unsigned int)(ABS(fVar28) < 1.1754944e-38) &
                                                 (unsigned int)((fVar29 * auVar30._0_4_ - 3.0) * fVar29 * -0.5));
                            new ((local_120 + 16))
                                oldscape::dash3d::GridRect(iVar23 - iVar8, iVar7 - iVar8, iVar8 * 2, iVar8 * 2);
                            *local_d8 = (*((local_120 + 16)));
                            iVar7 = local_6c;
                        }
                    }
                    cVar4 = local_b8->Contains(*local_d8);
                    if (!cVar4) {
                        (*(ScaleManager**)(local_50 + 24))->InterfaceToScreenRect(*local_b8, true);
                        iVar7 = local_b8->Right();
                        uVar22 = local_68;
                        if ((-1 < iVar7) && (iVar7 = local_b8->MaxZ(), -1 < iVar7)) {
                            piVar19 = (int*)local_b8->SSOBeginPtr();
                            iVar7 = *piVar19;
                            iVar8 = (*(RT7Core**)(local_50 + 16))->GetBackBufferWidth();
                            if (iVar7 < iVar8) {
                                piVar19 = (int*)local_b8->y();
                                iVar7 = *piVar19;
                                iVar8 = (*(RT7Core**)(local_50 + 16))->GetBackBufferHeight();
                                pCVar2 = local_50;
                                if (iVar7 < iVar8) {
                                    iVar7 = (*(RT7Core**)(local_50 + 16))->GetBackBufferWidth();
                                    iVar8 = (*(RT7Core**)(pCVar2 + 16))->GetBackBufferHeight();
                                    new (local_138) oldscape::dash3d::GridRect(0, 0, iVar7, iVar8);
                                    *((local_120 + 16)) = local_b8->Intersection(local_138);
                                    *local_b8 = (*((local_120 + 16)));
                                    drawCallState = local_98->GetCurrentState();
                                    new ((local_120 + 16)) render::DrawCallState(*drawCallState);
                                    piVar19 = (int*)local_b8->SSOBeginPtr();
                                    local_dc = *piVar19;
                                    iVar8 = (*(RT7Core**)(pCVar2 + 16))->GetBackBufferHeight();
                                    iVar26 = local_b8->MaxZ();
                                    piVar19 = (int*)local_b8->second();
                                    iVar7 = *piVar19;
                                    piVar19 = (int*)local_b8->qw();
                                    new (local_120)
                                        oldscape::dash3d::GridRect(local_dc, iVar8 - iVar26, iVar7, *piVar19);
                                    (((local_120 + 16))->GetOutputMergerState())->SetScissorRects(local_120, 1);
                                    local_98->Begin(*((local_120 + 16)));
                                    ((local_120 + 16))->~DrawCallState();
                                    pGVar9 = local_98;
                                    local_98->AddElementRotated((int)local_78, (int)local_a0, local_6c, local_84,
                                                                local_88, local_44, local_40, local_3c, local_38,
                                                                local_60, 1, (float)-(int)local_90._0_4_ * 9.58738e-05,
                                                                -999999, -999999);
                                    uVar22 = local_68;
                                    pGVar9->End();
                                }
                            }
                        }
                    } else {
                        local_98->AddElementRotated((int)local_78, (int)local_a0, iVar7, local_84, local_88, local_44,
                                                    local_40, local_3c, local_38, local_60, 1,
                                                    (float)-(int)local_90._0_4_ * 9.58738e-05, -999999, -999999);
                        uVar22 = local_68;
                    }
                LAB_1006ac5d3:
                    componentDependencies = local_50;
                    this_10 = local_80;
                }
            }
        }
        if ((int)local_c0 == 0) {
            return local_c8;
        }
    LAB_1006ac5eb:
        iVar7 = GetLinkObjType();
        if ((iVar7 != -1) && (this_10 != nullptr)) {
            local_68 = uVar22;
            UpdateObjQuantityText();
            GetObjQuantityText((SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>*)local_b8, this);
            cVar4 = local_b8->empty();
            if (!cVar4) {
                this_03 = *(FontManager**)(componentDependencies + 8);
                uVar3 = GetObjQuantityFontID();
                spriteAtlas = (shared_ptr<graphics::SpriteAtlas>*)this_10->second();
                psVar12 = (shared_ptr*)this_03->GetFont((int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3),
                                                        *spriteAtlas);
                cVar4 = shared_ptr::operator_cast_to_bool(psVar12);
                if (cVar4) {
                    local_d8[0] = 511;
                    this_01 = (TextProperties*)(local_120 + 16);
                    new (this_01) graphics::TextProperties(*psVar12);
                    bVar5 = GetAlpha();
                    new ((local_138 + 16)) eastl::optional(*local_d8);
                    this_01->SetColours(bVar5 | 4294967040, (local_138 + 16));
                    this_04 = *(FontHelpers**)componentDependencies;
                    local_148 = StringView(*local_b8);
                    this_04->DrawString(&local_148, local_b8._16_4_, (int)local_68, 0, *this_01);
                }
            }
        }
        return local_c8;
    }

} // namespace jag::ui
