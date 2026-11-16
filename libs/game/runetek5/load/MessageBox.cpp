// libs/game/runetek5/load/MessageBox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class MessageBox {
    public:
        void SetupSprites(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                          int arg10, int arg11);
        uint8_t DownloadSprites();
        void DrawBox(int arg1, int arg2, int arg3, int arg4);
        void MainDraw(const render::DrawCallState& drawCallState, const math::Rect<int>& rect);

    private:
        RT7Core* field_0;
        Js5ResourceProvider* field_8;
        FontHelpers* field_16;
        FontManager* field_24;
        uint8_t _unknown_32[172];
        int field_204;
        int field_208;
        int field_212;
        int field_216;
        int field_220;
        int field_224;
        unsigned int field_228;
        unsigned int field_232;
        unsigned int field_236;
        int field_240;
        uint8_t _unknown_244[4];
        shared_ptr field_248;
        shared_ptr field_264;
        shared_ptr field_280;
        shared_ptr field_296;
        int field_312;
        uint8_t field_316;
        uint8_t _unknown_317[3];
    };

    // 0x1004b3840
    void MessageBox::SetupSprites(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                  int arg9, int arg10, int arg11) {

        field_204 = arg1;
        field_208 = arg2;
        field_212 = arg3;
        field_216 = arg4;
        field_220 = arg5;
        field_224 = arg6;
        field_228 = arg7;
        field_232 = arg8;
        field_236 = arg9;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        *field_248 = local_30;
        local_30 = shared_ptr();
        *field_264 = local_30;
        local_30 = shared_ptr();
        *field_280 = local_30;
        field_312 = arg10;
        field_240 = arg11;
        field_8->GroupReady(*(Js5Archive::JS5_SPRITES), field_228, (Priority*)Priority::HIGH, true);
        field_8->GroupReady(*(Js5Archive::JS5_SPRITES), field_232, (Priority*)Priority::HIGH, true);
        field_8->GroupReady(*(Js5Archive::JS5_SPRITES), field_236, (Priority*)Priority::HIGH, true);
        DownloadSprites();
        field_316 = 1;
    }

    // 0x1004b39c0
    uint8_t MessageBox::DownloadSprites() {
        unsigned int uVar2;
        int arg1;
        FontManager* this_00;
        shared_ptr<graphics::Font>* font;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        ReturnValue local_40;

        SpriteAtlasManager* this_02 = field_0->GetTextureManager()->GetSpriteAtlasManager();
        uint8_t* puVar1 = field_248;
        bool cVar3 = puVar1->operator_cast_to_bool();
        if (!cVar3) {
            uVar2 = field_228;
            local_50 = shared_ptr();
            local_40 = this_02->GetSpriteReference((long)(int)uVar2, local_50, 2);
            *puVar1 = local_40;
        }
        SpriteAtlasReference* pSVar7 = (SpriteAtlasReference*)(*puVar1).operator->();
        uint8_t bVar4 = pSVar7->IsReady();
        puVar1 = field_264;
        cVar3 = puVar1->operator_cast_to_bool();
        if (!cVar3) {
            uVar2 = field_232;
            local_50 = shared_ptr();
            local_40 = this_02->GetSpriteReference((long)(int)uVar2, local_50, 2);
            *puVar1 = local_40;
        }
        pSVar7 = (SpriteAtlasReference*)(*puVar1).operator->();
        uint8_t bVar5 = pSVar7->IsReady();
        puVar1 = field_280;
        cVar3 = puVar1->operator_cast_to_bool();
        if (!cVar3) {
            uVar2 = field_236;
            local_50 = shared_ptr();
            local_40 = this_02->GetSpriteReference((long)(int)uVar2, local_50, 2);
            *puVar1 = local_40;
        }
        pSVar7 = (SpriteAtlasReference*)(*puVar1).operator->();
        bVar4 = pSVar7->IsReady() & bVar5 & bVar4;
        puVar1 = field_296;
        cVar3 = puVar1->operator_cast_to_bool();
        bVar5 = bVar4;
        if (!cVar3) {
            this_00 = field_24;
            arg1 = field_240;
            local_40 = shared_ptr();
            font = (shared_ptr<graphics::Font>*)this_00->GetFont(arg1, local_40);
            *puVar1 = *font;
            cVar3 = puVar1->operator_cast_to_bool();
            bVar5 = 0;
            if (cVar3) {
                bVar5 = bVar4;
            }
        }
        return bVar5;
    }

    // 0x1004b3bf0
    void MessageBox::DrawBox(int arg1, int arg2, int arg3, int arg4) {
        uint8_t* this_00;
        uint64_t this_01;
        GUIManager* pGVar1;
        shared_ptr<graphics::SpriteAtlasReference>* this_02;
        int iVar3;
        unsigned int uVar4;
        int iVar5;
        shared_ptr<graphics::SpriteAtlas>* psVar8;
        SpriteAtlas* pSVar9;
        FastPool<audio::SoundInstance, int>* pFVar10;
        long lVar11;
        long lVar12;
        unsigned int* puVar13;
        MapArea* pMVar14;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar15;
        Texture* pTVar16;
        uint32_t in_register_00000034;
        unsigned long arg1_00;
        int iVar17;
        int iVar18;
        int arg2_00;
        EntityHighlightState* pEVar19;
        uint32_t uVar20;
        float fVar21;
        uint8_t local_d8[32];
        unsigned long local_b8;
        long local_b0;
        unsigned long local_a8;
        unsigned long local_a0;
        int local_94;
        int local_90;
        int local_8c;
        unsigned long local_88;
        unsigned long local_80;
        GUIManager* local_70;
        shared_ptr<graphics::SpriteAtlasReference>* local_68;
        Texture* local_60;
        float local_54;
        float local_50;
        float local_4c;
        long local_48;
        shared_ptr<graphics::SpriteAtlasReference>* local_40;
        float local_38;
        float local_34;

        uint64_t local_78 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        local_d8._24_8_ = field_264;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar6 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_d8._24_8_)
                .operator->();
        auto psVar7 = pcVar6->second();
        bool cVar2 = shared_ptr::operator_cast_to_bool(psVar7);
        if (cVar2) {
            this_00 = field_248;
            pcVar6 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
            psVar7 = (shared_ptr*)pcVar6->second();
            cVar2 = shared_ptr::operator_cast_to_bool(psVar7);
            if (cVar2) {
                local_40 = (shared_ptr<graphics::SpriteAtlasReference>*)field_280;
                pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_40)
                             .operator->();
                psVar7 = (shared_ptr*)pcVar6->second();
                cVar2 = shared_ptr::operator_cast_to_bool(psVar7);
                this_01 = local_d8._24_8_;
                if (cVar2) {
                    local_88 = (unsigned long)(unsigned int)arg3;
                    local_80 = (unsigned long)(unsigned int)arg2;
                    pcVar6 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_d8._24_8_)
                            .operator->();
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)pcVar6->second();
                    pSVar9 = (SpriteAtlas*)(*psVar8).operator->();
                    local_b8 = (unsigned long)(unsigned int)arg4;
                    pFVar10 = (FastPool<audio::SoundInstance, int>*)(*this_01).operator->();
                    iVar3 = pFVar10->capacity();
                    local_b0 = pSVar9->GetSpriteRenderMapping(iVar3);
                    pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00)
                                 .operator->();
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)pcVar6->second();
                    pSVar9 = (SpriteAtlas*)(*psVar8).operator->();
                    local_68 = (shared_ptr<graphics::SpriteAtlasReference>*)this_00;
                    pFVar10 = (FastPool<audio::SoundInstance, int>*)(*this_00).operator->();
                    iVar3 = pFVar10->capacity();
                    lVar11 = pSVar9->GetSpriteRenderMapping(iVar3);
                    this_02 = local_40;
                    pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_40)
                                 .operator->();
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)pcVar6->second();
                    pSVar9 = (SpriteAtlas*)(*psVar8).operator->();
                    pFVar10 = (FastPool<audio::SoundInstance, int>*)(*this_02).operator->();
                    uVar4 = pFVar10->capacity();
                    arg1_00 = (unsigned long)uVar4;
                    lVar12 = pSVar9->GetSpriteRenderMapping(uVar4);
                    puVar13 = (unsigned int*)(*((local_b0 + 104)))[arg1_00];
                    uVar4 = *puVar13;
                    local_48 = lVar11;
                    puVar13 = (unsigned int*)(*((lVar11 + 104)))[arg1_00];
                    local_a0 = (unsigned long)*puVar13;
                    local_70 = field_0->GetGUIManager();
                    iVar3 = uVar4 + (int)local_78 - 1;
                    local_38 = (float)((uVar4 - 1) + (int)local_80);
                    iVar17 = (int)local_88 + uVar4 * -2 + 2;
                    iVar18 = (int)local_b8 + uVar4 * -2 + 2;
                    local_a8 = (unsigned long)uVar4;
                    new (local_d8) graphics::ClippingState(field_0);
                    fVar21 = local_38;
                    local_34 = (float)iVar3;
                    field_0->SetClippingRectangle(iVar3, (int)local_38, iVar17, iVar18, true);
                    pEVar19 = (EntityHighlightState*)(lVar12 + 88);
                    local_50 = (float)pEVar19->GetOverbright();
                    local_4c = (float)pEVar19->GetAlpha();
                    uVar20 = pEVar19->MaxU();
                    local_60 = (Texture*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar20);
                    local_54 = (float)pEVar19->MaxV();
                    pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_40)
                                 .operator->();
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)pcVar6->second();
                    pMVar14 = (MapArea*)(*psVar8).operator->();
                    pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar14->GetOrigin();
                    pTVar16 = (Texture*)pvVar15->end();
                    local_70->AddElementTiled((int)local_34, (int)fVar21, iVar17 + (int)local_34, iVar18 + (int)fVar21,
                                              4294967295, local_50, local_4c, local_60._0_4_, local_54, pTVar16, 1, 0,
                                              0, 0, 0, 0, 0);
                    iVar3 = (int)local_78;
                    local_94 = (int)local_a8 + iVar3;
                    iVar5 = (int)local_80;
                    local_54 = (float)((int)local_a8 + iVar5);
                    pEVar19 = (EntityHighlightState*)(local_48 + 88);
                    fVar21 = (float)pEVar19->GetOverbright();
                    local_40._0_4_ = fVar21;
                    local_38 = (float)pEVar19->GetAlpha();
                    local_34 = (float)pEVar19->MaxU();
                    fVar21 = (float)pEVar19->MaxV();
                    local_48._0_4_ = fVar21;
                    pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_68)
                                 .operator->();
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)pcVar6->second();
                    pMVar14 = (MapArea*)(*psVar8).operator->();
                    pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar14->GetOrigin();
                    local_60 = (Texture*)pvVar15->end();
                    iVar17 = (int)local_a0;
                    local_50 = (float)(iVar17 + iVar3);
                    iVar18 = iVar17 + iVar5;
                    local_4c = (float)iVar18;
                    local_70->AddElement(iVar3, iVar5, (int)local_50, iVar18, 4294967295, *pEVar19, local_60, 1);
                    pGVar1 = local_70;
                    iVar3 = (int)local_88 + iVar3;
                    local_68 = (shared_ptr<graphics::SpriteAtlasReference>*)(((uint64_t)local_68._4_4_ << 32) |
                                                                             (uint32_t)iVar3);
                    local_70->AddElement(iVar3 - iVar17, iVar5, iVar3, iVar18, 4294967295, local_34, local_38,
                                         local_40._0_4_, (float)local_48, local_60, 1);
                    pTVar16 = local_60;
                    iVar18 = (int)local_b8;
                    iVar5 = iVar18 + iVar5;
                    arg2_00 = iVar5 - iVar17;
                    local_90 = iVar5;
                    local_8c = arg2_00;
                    pGVar1->AddElement((int)local_78, arg2_00, (int)local_50, iVar5, 4294967295, local_40._0_4_,
                                       (float)local_48, local_34, local_38, local_60, 1);
                    pGVar1 = local_70;
                    local_70->AddElement(iVar3 - iVar17, arg2_00, (int)local_68, iVar5, 4294967295, local_34,
                                         (float)local_48, local_40._0_4_, local_38, pTVar16, 1);
                    pEVar19 = (EntityHighlightState*)(local_b0 + 88);
                    uVar20 = pEVar19->GetOverbright();
                    local_40 = (shared_ptr<graphics::SpriteAtlasReference>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                             (uint32_t)uVar20);
                    local_38 = (float)pEVar19->GetAlpha();
                    local_34 = (float)pEVar19->MaxU();
                    uVar20 = pEVar19->MaxV();
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar20);
                    pcVar6 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*local_d8._24_8_)
                            .operator->();
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)pcVar6->second();
                    pMVar14 = (MapArea*)(*psVar8).operator->();
                    pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar14->GetOrigin();
                    pTVar16 = (Texture*)pvVar15->end();
                    iVar3 = (int)local_a0;
                    pGVar1->AddElementTiled((int)local_78, (int)local_4c, local_94, iVar18 + (int)local_4c + iVar3 * -2,
                                            4294967295, local_40._0_4_, local_38, local_34, (float)local_48, pTVar16, 1,
                                            0, 0, 0, 0, 0, 0);
                    fVar21 = local_50;
                    iVar17 = (int)local_88 + (int)local_50 + iVar3 * -2;
                    pGVar1->AddElementRotatedTiled((int)local_50, (int)local_80, iVar17, (int)local_54, 4294967295,
                                                   local_40._0_4_, local_38, local_34, (float)local_48, pTVar16, 1,
                                                   4.712389f, -999999, -999999);
                    iVar3 = (int)local_a8;
                    pGVar1->AddElementRotatedTiled((int)local_68 - iVar3, (int)local_4c, (int)local_68, local_8c,
                                                   4294967295, local_40._0_4_, local_38, local_34, (float)local_48,
                                                   pTVar16, 1, 3.1415927f, -999999, -999999);
                    pGVar1->AddElementRotatedTiled((int)fVar21, local_90 - iVar3, iVar17, local_90, 4294967295,
                                                   local_40._0_4_, local_38, local_34, (float)local_48, pTVar16, 1,
                                                   1.5707964f, -999999, -999999);
                }
            }
        }
    }

    // 0x1004b4380
    void MessageBox::MainDraw(const render::DrawCallState& drawCallState, const math::Rect<int>& rect) {
        uint8_t* this_00;
        uint8_t* this_01;
        FontHelpers* this_02;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar7;
        shared_ptr<graphics::SpriteAtlas>* this_04;
        SpriteAtlas* this_05;
        long lVar8;
        FontMetrics* fontMetrics;
        StringView local_d0;
        StringView local_c0;
        TextProperties local_b0;
        optional<int> local_88;
        StringView local_80;
        basic_string<char, BucketAllocatorEASTL>* local_70;
        int local_5c;
        unsigned long local_58;
        int local_50;
        int local_4c;
        GUIManager* local_48;
        unsigned int local_3c;
        TextFlags local_38;

        if (field_316 != '\0') {
            this_00 = &field_32;
            if (!(this_00->empty())) {
                if (DownloadSprites()) {
                    this_01 = field_264;
                    pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_01)
                                 .operator->();
                    if ((pcVar7->second())->operator_cast_to_bool()) {
                        pcVar7 =
                            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_01)
                                .operator->();
                        this_04 = (shared_ptr<graphics::SpriteAtlas>*)pcVar7->second();
                        this_05 = (SpriteAtlas*)(*this_04).operator->();
                        iVar2 = ((FastPool<audio::SoundInstance, int>*)(*this_01).operator->())->capacity();
                        lVar8 = this_05->GetSpriteRenderMapping(iVar2);
                        local_3c = ((lVar8 + 72))->GetPos();
                        local_b0 = graphics::TextProperties(*field_296);
                        local_b0.SetAlignment(1, 1);
                        iVar2 = field_312;
                        local_88 = eastl::optional(255);
                        local_b0.SetColours(iVar2 << 8 | 255, &local_88);
                        local_d0.StringView<eastl::fixed_string<char, 40>>(*this_00);
                        fontMetrics = local_b0.GetFontMetrics();
                        local_38 = oldscape::configdecoder::VeccType();
                        iVar2 = graphics::FontHelpers::PredictWidthMultiLine(&local_d0, 250, *fontMetrics, local_38[0]);
                        local_70 = (basic_string<char, BucketAllocatorEASTL>*)this_00;
                        local_c0.StringView<eastl::fixed_string<char, 40>>(*this_00);
                        iVar3 = graphics::FontHelpers::PredictHeightAndLines(&local_c0, 250, local_b0);
                        local_58 = (unsigned long)local_3c;
                        local_4c = iVar2 + local_3c * 2 + 4;
                        local_50 = iVar3 + local_3c * 2 + 4;
                        if (local_4c < field_220) {
                            local_4c = field_220;
                        }
                        if (local_50 < field_224) {
                            local_50 = field_224;
                        }
                        local_48._0_4_ = field_212;
                        local_5c = field_216;
                        iVar3 = field_0->GetInterfaceWidth();
                        iVar2 = rect.GetX();
                        iVar4 = rect.GetPos();
                        iVar3 = iVar3 - (iVar4 + iVar2);
                        iVar4 = field_0->GetInterfaceHeight();
                        iVar5 = rect.GetZ();
                        iVar6 = rect.GetLevel();
                        iVar2 = local_4c;
                        if (field_204 == 1) {
                            local_48._0_4_ = (iVar3 - local_4c) / 2;
                        } else if (field_204 == 2) {
                            local_48._0_4_ = iVar3 - local_4c;
                        }
                        local_3c = local_3c + 2;
                        local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)((int)local_58 * 2 + 4));
                        iVar4 = iVar4 - (iVar6 + iVar5);
                        if (field_208 == 1) {
                            iVar3 = (iVar4 - local_50) / 2;
                        } else {
                            iVar3 = local_5c;
                            if (field_208 == 2) {
                                iVar3 = iVar4 - local_50;
                            }
                        }
                        iVar5 = rect.GetX();
                        iVar5 = iVar5 + (int)local_48;
                        iVar6 = rect.GetZ();
                        local_48 = field_0->GetGUIManager();
                        local_48->Begin(drawCallState);
                        iVar4 = local_50;
                        DrawBox(iVar5, iVar6 + iVar3, iVar2, local_50);
                        this_02 = field_16;
                        local_80.StringView<eastl::fixed_string<char, 40>>(*local_70);
                        this_02->DrawStringMultiline(&local_80, iVar5 + local_3c, iVar6 + iVar3 + local_3c,
                                                     iVar2 - (int)local_58, iVar4 - (int)local_58, nullptr, local_b0);
                        local_48->End();
                    }
                }
            }
        }
    }

} // namespace jag::game
