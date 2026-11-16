// libs/game/runetek5/load/MessageBox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class MessageBox {
    public:
        void SetupSprites(int, int, int, int, int, int, int, int, int, int, int);
        byte DownloadSprites();
        void DrawBox(int, int, int, int);
        void MainDraw(render::DrawCallState const&, math::Rect<int> const&);

        // data members, from how the methods use this: 320 bytes
        RT7Core* field_0;             // offset 0
        Js5ResourceProvider* field_8; // offset 8
        FontHelpers* field_16;        // offset 16
        FontManager* field_24;        // offset 24
        char _unknown_32[172];
        int field_204;  // offset 204
        int field_208;  // offset 208
        int field_212;  // offset 212
        int field_216;  // offset 216
        int field_220;  // offset 220
        int field_224;  // offset 224
        uint field_228; // offset 228
        uint field_232; // offset 232
        uint field_236; // offset 236
        int field_240;  // offset 240
        char _unknown_244[4];
        shared_ptr field_248; // offset 248
        shared_ptr field_264; // offset 264
        shared_ptr field_280; // offset 280
        shared_ptr field_296; // offset 296
        int field_312;        // offset 312
        undefined1 field_316; // offset 316
        char _unknown_317[3];
    };

    // 0x1004b3840, 384 bytes, placed by class name and debug map
    // MessageBox::SetupSprites(int, int, int, int, int, int, int, int, int, int, int)
    void MessageBox::SetupSprites(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  int param_7, int param_8, int param_9, int param_10, int param_11) {
        shared_ptr local_30;

        field_204 = param_1;
        field_208 = param_2;
        field_212 = param_3;
        field_216 = param_4;
        field_220 = param_5;
        field_224 = param_6;
        field_228 = param_7;
        field_232 = param_8;
        field_236 = param_9;
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)field_248,
                                                              &local_30);
        local_30.~shared_ptr();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)field_264,
                                                              &local_30);
        local_30.~shared_ptr();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)field_280,
                                                              &local_30);
        local_30.~shared_ptr();
        field_312 = param_10;
        field_240 = param_11;
        (field_8, Js5Archive::JS5_SPRITES, field_228, (Priority*)Priority::HIGH, true)->GroupReady();
        (field_8, Js5Archive::JS5_SPRITES, field_232, (Priority*)Priority::HIGH, true)->GroupReady();
        (field_8, Js5Archive::JS5_SPRITES, field_236, (Priority*)Priority::HIGH, true)->GroupReady();
        DownloadSprites(this);
        field_316 = 1;
    }

    // 0x1004b39c0, 560 bytes, placed by class name and debug map
    // MessageBox::DownloadSprites()
    byte MessageBox::DownloadSprites() {
        undefined1* puVar1;
        uint uVar2;
        int iVar3;
        FontManager* this_00;
        bool bVar4;
        byte bVar5;
        byte bVar6;
        TextureManager* this_01;
        undefined8 uVar8;
        SpriteAtlasReference* pSVar9;
        shared_ptr* psVar10;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_50[16];
        shared_ptr local_40;

        this_01 = (TextureManager*)field_0->GetTextureManager();
        uVar8 = this_01->GetSpriteAtlasManager();
        puVar1 = field_248;
        bVar4 = puVar1->operator_cast_to_bool();
        if (!bVar4) {
            uVar2 = field_228;
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_50,
                                                                                     (_func_decltype_nullptr*)0);
            graphics::SpriteAtlasManager::GetSpriteReference(&local_40, uVar8, (long)(int)uVar2, local_50, 2);
            shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)puVar1,
                                                                  &local_40);
            local_40.~shared_ptr();
            local_50->~shared_ptr();
        }
        pSVar9 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)puVar1);
        bVar5 = pSVar9->IsReady();
        puVar1 = field_264;
        bVar4 = puVar1->operator_cast_to_bool();
        if (!bVar4) {
            uVar2 = field_232;
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_50,
                                                                                     (_func_decltype_nullptr*)0);
            graphics::SpriteAtlasManager::GetSpriteReference(&local_40, uVar8, (long)(int)uVar2, local_50, 2);
            shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)puVar1,
                                                                  &local_40);
            local_40.~shared_ptr();
            local_50->~shared_ptr();
        }
        pSVar9 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)puVar1);
        bVar6 = pSVar9->IsReady();
        puVar1 = field_280;
        bVar4 = puVar1->operator_cast_to_bool();
        if (!bVar4) {
            uVar2 = field_236;
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_50,
                                                                                     (_func_decltype_nullptr*)0);
            graphics::SpriteAtlasManager::GetSpriteReference(&local_40, uVar8, (long)(int)uVar2, local_50, 2);
            shared_ptr<graphics::SpriteAtlasReference>::operator=((shared_ptr<graphics::SpriteAtlasReference>*)puVar1,
                                                                  &local_40);
            local_40.~shared_ptr();
            local_50->~shared_ptr();
        }
        pSVar9 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)puVar1);
        bVar5 = pSVar9->IsReady() & bVar6 & bVar5;
        puVar1 = field_296;
        bVar4 = puVar1->operator_cast_to_bool();
        bVar6 = bVar5;
        if (!bVar4) {
            this_00 = field_24;
            iVar3 = field_240;
            new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            psVar10 = (shared_ptr*)this_00->GetFont(iVar3, &local_40);
            shared_ptr<graphics::Font>::operator=((shared_ptr<graphics::Font>*)puVar1, psVar10);
            local_40.~shared_ptr();
            bVar4 = puVar1->operator_cast_to_bool();
            bVar6 = 0;
            if (bVar4) {
                bVar6 = bVar5;
            }
        }
        return bVar6;
    }

    // 0x1004b3bf0, 1760 bytes, placed by class name and debug map
    // MessageBox::DrawBox(int, int, int, int)
    void MessageBox::DrawBox(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        uint uVar1;
        ulong uVar2;
        GUIManager* pGVar3;
        bool bVar4;
        int iVar5;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar6;
        shared_ptr* psVar7;
        shared_ptr<graphics::SpriteAtlas>* psVar8;
        SpriteAtlas* pSVar9;
        FastPool<audio::SoundInstance, int>* pFVar10;
        long lVar11;
        long lVar12;
        uint* puVar13;
        MapArea* pMVar14;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar15;
        undefined8 uVar16;
        undefined8 uVar17;
        int iVar18;
        undefined4 in_register_00000034;
        int iVar19;
        int iVar20;
        int iVar21;
        EntityHighlightState* pEVar22;
        undefined4 uVar23;
        undefined4 uVar24;
        undefined8 in_stack_fffffffffffffef0;
        undefined1 local_d8[32];
        ulong local_b8;
        long local_b0;
        ulong local_a8;
        ulong local_a0;
        int local_94;
        int local_90;
        int local_8c;
        ulong local_88;
        ulong local_80;
        undefined8 local_78;
        GUIManager* local_70;
        shared_ptr<graphics::SpriteAtlasReference>* local_68;
        undefined8 local_60;
        int local_54;
        undefined8 local_50;
        long local_48;
        GUIManager* local_40;
        int local_38;
        int local_34;

        uVar24 = (undefined4)((ulong)in_stack_fffffffffffffef0 >> 32);
        local_78 = CONCAT44(in_register_00000034, param_1);
        local_d8._24_8_ = field_264;
        pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)
                     shared_ptr<graphics::SpriteAtlasReference>::operator->(
                         (shared_ptr<graphics::SpriteAtlasReference>*)local_d8._24_8_);
        psVar7 = (shared_ptr*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(pcVar6);
        bVar4 = shared_ptr::operator_cast_to_bool(psVar7);
        if (bVar4) {
            this_00 = field_248;
            pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                          eastl::allocator, 0>*)
                         shared_ptr<graphics::SpriteAtlasReference>::operator->(
                             (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
            psVar7 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar6);
            bVar4 = shared_ptr::operator_cast_to_bool(psVar7);
            if (bVar4) {
                local_40 = (GUIManager*)field_280;
                pcVar6 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                              eastl::allocator, 0>*)
                             shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                 (shared_ptr<graphics::SpriteAtlasReference>*)local_40);
                psVar7 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar6);
                bVar4 = shared_ptr::operator_cast_to_bool(psVar7);
                uVar16 = local_d8._24_8_;
                if (bVar4) {
                    local_88 = (ulong)(uint)param_3;
                    local_80 = (ulong)(uint)param_2;
                    pcVar6 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)local_d8._24_8_);
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar6);
                    pSVar9 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(psVar8);
                    local_b8 = (ulong)(uint)param_4;
                    pFVar10 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)uVar16);
                    iVar5 = FastPool<audio::SoundInstance, int>::capacity(pFVar10);
                    local_b0 = pSVar9->GetSpriteRenderMapping(iVar5);
                    pcVar6 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar6);
                    pSVar9 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(psVar8);
                    local_68 = (shared_ptr<graphics::SpriteAtlasReference>*)this_00;
                    pFVar10 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
                    iVar5 = FastPool<audio::SoundInstance, int>::capacity(pFVar10);
                    lVar11 = pSVar9->GetSpriteRenderMapping(iVar5);
                    pGVar3 = local_40;
                    pcVar6 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)local_40);
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar6);
                    pSVar9 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(psVar8);
                    pFVar10 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)pGVar3);
                    iVar5 = FastPool<audio::SoundInstance, int>::capacity(pFVar10);
                    lVar12 = pSVar9->GetSpriteRenderMapping(iVar5);
                    puVar13 = (uint*)std::array<int, 2ul>::operator[](local_b0 + 104);
                    uVar1 = *puVar13;
                    local_48 = lVar11;
                    puVar13 = (uint*)std::array<int, 2ul>::operator[](lVar11 + 104);
                    local_a0 = (ulong)*puVar13;
                    local_70 = (GUIManager*)field_0->GetGUIManager();
                    iVar18 = uVar1 + (int)local_78 + -1;
                    local_38 = (uVar1 - 1) + (int)local_80;
                    iVar19 = (int)local_88 + uVar1 * -2 + 2;
                    iVar20 = (int)local_b8 + uVar1 * -2 + 2;
                    local_a8 = (ulong)uVar1;
                    new (local_d8) graphics::ClippingState(field_0);
                    iVar5 = local_38;
                    local_34 = iVar18;
                    (field_0, iVar18, local_38, iVar19, iVar20, true)->SetClippingRectangle();
                    pEVar22 = (EntityHighlightState*)(lVar12 + 88);
                    local_50._0_4_ = (GUIManager*)pEVar22->GetOverbright();
                    local_50._4_4_ = pEVar22->GetAlpha();
                    uVar23 = pEVar22->MaxU();
                    local_60 = CONCAT44(local_60._4_4_, uVar23);
                    local_54 = pEVar22->MaxV();
                    pcVar6 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)local_40);
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar6);
                    pMVar14 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(psVar8);
                    pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar14->GetOrigin();
                    uVar16 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar15);
                    local_50->AddElementTiled(local_50._4_4_, (undefined4)local_60, local_54, local_70, local_34, iVar5,
                                              iVar19 + local_34, iVar20 + iVar5, 4294967295, uVar16,
                                              CONCAT44(uVar24, 1), 0, 0, 0, 0, 0, 0);
                    uVar16 = local_78;
                    uVar2 = local_80;
                    iVar5 = (int)local_78;
                    local_94 = (int)local_a8 + iVar5;
                    iVar20 = (int)local_80;
                    local_54 = (int)local_a8 + iVar20;
                    local_d8->~ClippingState();
                    pEVar22 = (EntityHighlightState*)(local_48 + 88);
                    uVar24 = pEVar22->GetOverbright();
                    local_40._0_4_ = (GUIManager*)uVar24;
                    local_38 = pEVar22->GetAlpha();
                    local_34 = pEVar22->MaxU();
                    uVar24 = pEVar22->MaxV();
                    local_48._0_4_ = uVar24;
                    pcVar6 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(local_68);
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar6);
                    pMVar14 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(psVar8);
                    pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar14->GetOrigin();
                    uVar17 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar15);
                    iVar18 = (int)local_a0;
                    local_50._0_4_ = (GUIManager*)(iVar18 + iVar5);
                    iVar19 = iVar18 + iVar20;
                    local_60 = uVar17;
                    local_50._4_4_ = iVar19;
                    local_70->AddElement(uVar16, uVar2 & 4294967295, (undefined4)(GUIManager*)local_50, iVar19,
                                         4294967295, pEVar22, uVar17, 1);
                    pGVar3 = local_70;
                    iVar5 = (int)local_88 + iVar5;
                    local_68 = (shared_ptr<graphics::SpriteAtlasReference>*)CONCAT44(local_68._4_4_, iVar5);
                    uVar17 = CONCAT44((int)((ulong)uVar17 >> 32), 1);
                    local_34->AddElement(local_38, (undefined4)local_40._0_4_, (undefined4)local_48, local_70,
                                         iVar5 - iVar18, uVar2 & 4294967295, iVar5, iVar19, 4294967295, local_60,
                                         uVar17);
                    uVar16 = local_60;
                    iVar19 = (int)local_b8;
                    iVar20 = iVar19 + iVar20;
                    iVar21 = iVar20 - iVar18;
                    uVar17 = CONCAT44((int)((ulong)uVar17 >> 32), 1);
                    local_90 = iVar20;
                    local_8c = iVar21;
                    ((undefined4)local_40._0_4_)
                        ->AddElement((undefined4)local_48, local_34, local_38, pGVar3, local_78, iVar21,
                                     (undefined4)(GUIManager*)local_50, iVar20, 4294967295, local_60, uVar17);
                    pGVar3 = local_70;
                    uVar17 = CONCAT44((int)((ulong)uVar17 >> 32), 1);
                    local_34->AddElement((undefined4)local_48, (undefined4)local_40._0_4_, local_38, local_70,
                                         iVar5 - iVar18, iVar21, (ulong)local_68 & 4294967295, iVar20, 4294967295,
                                         uVar16, uVar17);
                    uVar23 = (undefined4)((ulong)uVar17 >> 32);
                    pEVar22 = (EntityHighlightState*)(local_b0 + 88);
                    uVar24 = pEVar22->GetOverbright();
                    local_40 = (GUIManager*)CONCAT44(local_40._4_4_, uVar24);
                    local_38 = pEVar22->GetAlpha();
                    local_34 = pEVar22->MaxU();
                    uVar24 = pEVar22->MaxV();
                    local_48 = CONCAT44(local_48._4_4_, uVar24);
                    pcVar6 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)local_d8._24_8_);
                    psVar8 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar6);
                    pMVar14 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(psVar8);
                    pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar14->GetOrigin();
                    uVar16 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar15);
                    iVar18 = (int)local_a0;
                    local_40._0_4_->AddElementTiled(local_38, local_34, (undefined4)local_48, pGVar3, local_78,
                                                    local_50._4_4_, local_94, iVar19 + local_50._4_4_ + iVar18 * -2,
                                                    4294967295, uVar16, CONCAT44(uVar23, 1), 0, 0, 0, 0, 0, 0);
                    iVar5 = (int)(GUIManager*)local_50;
                    iVar19 = (int)local_88 + (int)(GUIManager*)local_50 + iVar18 * -2;
                    local_40._0_4_->AddElementRotatedTiled(local_38, local_34, (undefined4)local_48, 1083624420, pGVar3,
                                                           (undefined4)(GUIManager*)local_50, local_80, iVar19,
                                                           local_54, 4294967295, uVar16, 1, 4293967297, 4293967297);
                    iVar18 = (int)local_a8;
                    local_40._0_4_->AddElementRotatedTiled(local_38, local_34, (undefined4)local_48, 1078530011, pGVar3,
                                                           (int)local_68 - iVar18, local_50._4_4_,
                                                           (ulong)local_68 & 4294967295, local_8c, 4294967295, uVar16,
                                                           1, 4293967297, 4293967297);
                    local_40._0_4_->AddElementRotatedTiled(local_38, local_34, (undefined4)local_48, 1070141403, pGVar3,
                                                           iVar5, local_90 - iVar18, iVar19, local_90, 4294967295,
                                                           uVar16, 1, 4293967297, 4293967297);
                }
            }
        }
    }

    // 0x1004b4380, 832 bytes, placed by class name and debug map
    // MessageBox::MainDraw(render::DrawCallState const&, math::Rect<int> const&)
    void MessageBox::MainDraw(DrawCallState* param_1, Rect* param_2) {
        undefined1* puVar1;
        undefined1* this_00;
        FontHelpers* this_01;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar9;
        shared_ptr* this_02;
        shared_ptr<graphics::SpriteAtlas>* this_03;
        SpriteAtlas* this_04;
        FastPool<audio::SoundInstance, int>* this_05;
        long lVar10;
        FontMetrics* pFVar11;
        StringView SVar12;
        StringView SVar13;
        StringView SVar14;
        TextFlags in_stack_ffffffffffffff28;
        undefined7 in_stack_ffffffffffffff29;
        StringView local_d0;
        StringView local_c0;
        TextProperties local_b0;
        optional<int> local_88[8];
        StringView local_80;
        fixed_string* local_70;
        DrawCallState* local_68;
        int local_60;
        int local_5c;
        ulong local_58;
        int local_50;
        int local_4c;
        GUIManager* local_48;
        uint local_3c;
        uint local_38[2];

        if (field_316 != '\0') {
            puVar1 = &field_32;
            cVar2 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar2 == '\0') {
                cVar2 = DownloadSprites(this);
                if (cVar2 != '\0') {
                    this_00 = field_264;
                    pcVar9 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
                    this_02 = (shared_ptr*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(pcVar9);
                    bVar3 = shared_ptr::operator_cast_to_bool(this_02);
                    if (bVar3) {
                        local_68 = param_1;
                        pcVar9 = (compressed_pair_imp<
                                  std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                  eastl::allocator, 0>*)
                                     shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                         (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
                        this_03 = (shared_ptr<graphics::SpriteAtlas>*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(pcVar9);
                        this_04 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(this_03);
                        this_05 = (FastPool<audio::SoundInstance, int>*)
                                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                          (shared_ptr<graphics::SpriteAtlasReference>*)this_00);
                        iVar4 = FastPool<audio::SoundInstance, int>::capacity(this_05);
                        lVar10 = this_04->GetSpriteRenderMapping(iVar4);
                        local_3c = ((lVar10 + 72))->GetPos();
                        new (&local_b0) graphics::TextProperties(field_296);
                        local_b0.SetAlignment(1, 1);
                        iVar4 = field_312;
                        local_60 = 255;
                        eastl::optional<int>::optional(local_88, &local_60);
                        local_b0.SetColours(iVar4 << 8 | 255, local_88);
                        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                            &local_d0, (fixed_string*)puVar1);
                        iVar4 = local_b0.GetFontMetrics();
                        new (local_38) oldscape::configdecoder::VeccType();
                        pFVar11 = (FontMetrics*)(ulong)local_38[0];
                        SVar12.field_8 = (uchar*)250;
                        SVar12.field_0 = (ulong)&local_d0;
                        iVar4 = graphics::FontHelpers::PredictWidthMultiLine(SVar12, iVar4, pFVar11,
                                                                             in_stack_ffffffffffffff28);
                        local_70 = (fixed_string*)puVar1;
                        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                            &local_c0, (fixed_string*)puVar1);
                        SVar13.field_8 = (uchar*)250;
                        SVar13.field_0 = (ulong)&local_c0;
                        iVar5 = graphics::FontHelpers::PredictHeightAndLines(SVar13, (int)&local_b0,
                                                                             (TextProperties*)pFVar11);
                        local_58 = (ulong)local_3c;
                        local_4c = iVar4 + local_3c * 2 + 4;
                        local_50 = iVar5 + local_3c * 2 + 4;
                        if (local_4c < field_220) {
                            local_4c = field_220;
                        }
                        if (local_50 < field_224) {
                            local_50 = field_224;
                        }
                        local_48._0_4_ = field_212;
                        local_5c = field_216;
                        iVar5 = field_0->GetInterfaceWidth();
                        iVar4 = param_2->GetX();
                        iVar6 = param_2->GetPos();
                        iVar5 = iVar5 - (iVar6 + iVar4);
                        iVar6 = field_0->GetInterfaceHeight();
                        iVar7 = param_2->GetZ();
                        iVar8 = param_2->GetLevel();
                        iVar4 = local_4c;
                        if (field_204 == 1) {
                            local_48._0_4_ = (iVar5 - local_4c) / 2;
                        } else if (field_204 == 2) {
                            local_48._0_4_ = iVar5 - local_4c;
                        }
                        local_3c = local_3c + 2;
                        local_58 = CONCAT44(local_58._4_4_, (int)local_58 * 2 + 4);
                        iVar6 = iVar6 - (iVar8 + iVar7);
                        if (field_208 == 1) {
                            iVar5 = (iVar6 - local_50) / 2;
                        } else {
                            iVar5 = local_5c;
                            if (field_208 == 2) {
                                iVar5 = iVar6 - local_50;
                            }
                        }
                        iVar7 = param_2->GetX();
                        iVar7 = iVar7 + (int)local_48;
                        iVar8 = param_2->GetZ();
                        local_48 = (GUIManager*)field_0->GetGUIManager();
                        local_48->Begin(local_68);
                        iVar6 = local_50;
                        DrawBox(this, iVar7, iVar8 + iVar5, iVar4, local_50);
                        this_01 = field_16;
                        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_80,
                                                                                                      local_70);
                        SVar14.field_8._0_4_ = iVar7 + local_3c;
                        SVar14.field_0 = (ulong)&local_80;
                        SVar14.field_8._4_4_ = 0;
                        this_01->DrawStringMultiline(
                            SVar14, iVar8 + iVar5 + local_3c, iVar4 - (int)local_58, iVar6 - (int)local_58, 0,
                            (uint*)&local_b0,
                            (TextProperties*)CONCAT71(in_stack_ffffffffffffff29, in_stack_ffffffffffffff28));
                        local_48->End();
                    }
                }
            }
        }
    }

} // namespace jag::game
