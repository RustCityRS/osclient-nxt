// libs/ui/utils/ScrollBar.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ScrollBar.h"

namespace jag::ui {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ScrollBar::GetBackgroundSprite();

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    SpriteData ScrollBar::GetButtonSprite();

    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    SpriteData ScrollBar::GetHandleSprite();

    // 0x1006776e0, 192 bytes, base-object constructor, placed by class name
    // ScrollBar::ScrollBar()
    void ScrollBar::ScrollBar() {
        undefined1* this_00;

        new (this) SpriteData();
        new (m_buttonSprite) SpriteData();
        new (m_handleSprite) SpriteData();
        m_size = 16;
        field_145 = 10;
        this_00 = &field_146;
        new (this_00) eastl::bitset<4ul, unsigned char>();
        field_148 = 0;
        field_152 = 0;
        field_156 = 0;
        field_160 = 0;
        field_164 = 0;
        this_00->set(0, true);
        this_00->set(1, true);
    }

    // 0x1006777a0, 16 bytes, complete-object constructor, placed by class name
    // ScrollBar::ScrollBar(): jumps straight to the base-object constructor

    // 0x1006777b0, 176 bytes, placed by class name
    // ScrollBar::Decode(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void ScrollBar::Decode(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;

        cVar1 = param_1->g1();
        (&field_146, 0, cVar1 == '\x01')->set();
        cVar1 = param_1->g1();
        (&field_146, 1, cVar1 == '\x01')->set();
        bVar2 = param_1->g1();
        m_size = bVar2;
        bVar2 = param_1->g1();
        field_145 = bVar2;
        DecodeSpriteData(param_1, param_2);
        (m_buttonSprite, param_1, param_2)->DecodeSpriteData();
        (m_handleSprite, param_1, param_2)->DecodeSpriteData();
    }

    // 0x100677980, 2128 bytes, placed by class name
    // ScrollBar::Draw(graphics::RT7Core&, int, int, int, int, int, int, bool, unsigned char)
    void ScrollBar::Draw(RT7Core* param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                         bool param_8, uchar param_9) {
        int iVar1;
        uint uVar2;
        ScrollBar* pSVar3;
        char cVar4;
        byte bVar5;
        byte bVar6;
        bool bVar7;
        bool bVar8;
        byte extraout_AH;
        int iVar9;
        byte extraout_AH_00;
        TextureManager* this_00;
        SpriteAtlasManager* pSVar10;
        undefined* puVar11;
        shared_ptr* psVar12;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar13;
        shared_ptr* psVar14;
        MapArea* pMVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        SpriteAtlasReference* pSVar16;
        long lVar17;
        Texture* pTVar18;
        undefined8 uVar19;
        uint uVar20;
        undefined1* puVar21;
        float fVar22;
        undefined1 local_e8[16];
        Rect local_d8[16];
        SpriteData* local_c8;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_c0;
        shared_ptr local_b8;
        shared_ptr local_a8;
        shared_ptr local_98;
        int local_84;
        shared_ptr* local_80;
        RT7Core* local_78;
        SpriteData* local_70;
        uint local_68;
        uint local_64;
        shared_ptr* local_60;
        undefined8 local_58;
        uint local_50;
        int local_4c;
        int local_48;
        float local_44;
        int local_40;
        int local_3c;
        int local_38;
        float local_34;

        local_40 = param_3;
        local_3c = param_2;
        cVar4 = GetVisible(this);
        if (cVar4 == '\0') {
            return;
        }
        local_80 = (shared_ptr*)CONCAT44(local_80._4_4_, (uint)field_145);
        local_50 = (uint)m_size;
        local_58 = this;
        bVar5 = GetAutoHide(this);
        pSVar3 = local_58;
        local_84 = param_5;
        local_78 = param_1;
        local_38 = param_4;
        if (param_5 < param_4) {
            if ((byte)(bVar5 ^ 1 | param_4 < param_7) != 1) {
                return;
            }
            local_68 = (uint)local_58->m_size;
            bVar5 = local_58->field_145;
            puVar21 = local_58->m_handleSprite;
            local_98._0_4_ = puVar21->GetVisualMargin();
            bVar6 = local_98.GetWidth();
            uVar20 = (uint)bVar6 + param_4 + (uint)bVar5 * -2;
            if (param_7 < 1) {
                cVar4 = GetAutoHide(pSVar3);
                if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "!GetAutoHide()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ScrollBar.cpp",
                        81, (char*)0);
                }
                bVar5 = pSVar3->field_145;
                bVar6 = puVar21->GetVisualMargin();
                local_44 = (float)(((uint)bVar5 + local_3c) - (uint)bVar6);
                local_70 = (SpriteData*)CONCAT44(local_70._4_4_, local_50);
                local_34 = (float)local_40;
                local_64 = (uint)local_80;
                local_50 = uVar20;
            } else {
                local_34 = (float)(int)uVar20;
                local_70._0_4_ = 1.0 / (float)param_7;
                fVar22 = (float)eastl::min<float>(1.0, (float)param_4 * local_70._0_4_);
                fVar22 = fVar22 * local_34;
                bVar5 = pSVar3->field_145;
                iVar9 = eastl::min<graphics::GraphicsQuality>(uVar20 - (int)fVar22,
                                                              (int)((float)param_6 * local_34 * local_70._0_4_));
                bVar6 = puVar21->GetVisualMargin();
                local_44 = (float)(((uint)bVar5 + local_3c + iVar9) - (uint)bVar6);
                local_70 = (SpriteData*)CONCAT44(local_70._4_4_, local_50);
                local_34 = (float)local_40;
                local_64 = (uint)local_80;
                local_50 = (int)fVar22;
            }
        } else {
            if ((byte)(bVar5 ^ 1 | param_5 < param_7) != 1) {
                return;
            }
            local_64 = (uint)local_58->m_size;
            bVar5 = local_58->field_145;
            puVar21 = local_58->m_handleSprite;
            local_98._0_4_ = puVar21->GetVisualMargin();
            bVar6 = local_98.GetHeight();
            iVar9 = (uint)bVar6 + param_5 + (uint)bVar5 * -2;
            if (param_7 < 1) {
                local_70 = (SpriteData*)CONCAT44(local_70._4_4_, iVar9);
                cVar4 = GetAutoHide(pSVar3);
                if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "!GetAutoHide()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ScrollBar.cpp",
                        58, (char*)0);
                }
                bVar5 = pSVar3->field_145;
                puVar21->GetVisualMargin();
                local_34 = (float)(((uint)bVar5 + local_40) - (uint)extraout_AH_00);
            } else {
                local_44 = (float)iVar9;
                local_34 = 1.0 / (float)param_7;
                fVar22 = (float)eastl::min<float>(1.0, (float)param_5 * local_34);
                fVar22 = fVar22 * local_44;
                bVar5 = pSVar3->field_145;
                local_70 = (SpriteData*)puVar21;
                iVar9 = eastl::min<graphics::GraphicsQuality>(iVar9 - (int)fVar22,
                                                              (int)((float)param_6 * local_44 * local_34));
                local_70->GetVisualMargin();
                local_34 = (float)(((uint)bVar5 + local_40 + iVar9) - (uint)extraout_AH);
                local_70 = (SpriteData*)CONCAT44(local_70._4_4_, (int)fVar22);
            }
            local_44 = (float)local_3c;
            local_68 = (uint)local_80;
        }
        this_00 = (TextureManager*)local_78->GetTextureManager();
        pSVar10 = (SpriteAtlasManager*)this_00->GetSpriteAtlasManager();
        puVar11 = (undefined*)pSVar3->LoadSpriteAtlasReference(pSVar10, false);
        iVar9 = local_38;
        if (puVar11 != DataStatus::READY) {
            return;
        }
        puVar21 = pSVar3->m_handleSprite;
        puVar11 = (undefined*)puVar21->LoadSpriteAtlasReference(pSVar10, false);
        if (puVar11 != DataStatus::READY) {
            return;
        }
        psVar12 = (shared_ptr*)pSVar3->GetDefaultValue();
        local_80 = (shared_ptr*)puVar21->GetDefaultValue();
        bVar7 = shared_ptr::operator_cast_to_bool(psVar12);
        if (bVar7) {
            pcVar13 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                              (shared_ptr<graphics::SpriteAtlasReference>*)psVar12);
            psVar14 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar13);
            new (&local_98) shared_ptr<oldscape::dash3d::Decor>(psVar14);
        } else {
            new (&local_98) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        psVar14 = local_80;
        bVar7 = shared_ptr::operator_cast_to_bool(local_80);
        if (bVar7) {
            pcVar13 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                              (shared_ptr<graphics::SpriteAtlasReference>*)psVar14);
            psVar14 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(pcVar13);
            new (&local_b8) shared_ptr<oldscape::dash3d::Decor>(psVar14);
        } else {
            new (&local_b8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        bVar7 = shared_ptr::operator_cast_to_bool(&local_98);
        if ((!bVar7) || (bVar7 = shared_ptr::operator_cast_to_bool(&local_b8), !bVar7)) {
            uVar19 = logger::default_logger();
            logger::Logger::Log(
                uVar19, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ScrollBar.cpp", 103,
                "Invalid sprite atlas reference!");
            goto LAB_100677e69;
        }
        pMVar15 =
            (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)&local_98);
        local_c8 = (SpriteData*)puVar21;
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar15->GetOrigin();
        pMVar15 =
            (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)&local_b8);
        local_c0 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar15->GetOrigin();
        pSVar3 = local_58;
        local_48 = (uint)!param_8 * 3;
        local_4c = local_48;
        if (param_8) {
            iVar1 = local_58->field_160;
            if (iVar1 - 3U < 2) {
                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, local_48);
                local_4c = local_58->field_164;
            } else if (iVar1 == 1) {
                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, local_48);
                local_48 = local_58->field_164;
            } else if (iVar1 == 2) {
                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, local_58->field_164);
            } else {
                local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, local_48);
            }
        } else {
            local_60 = (shared_ptr*)CONCAT44(local_60._4_4_, local_48);
        }
        local_38 = iVar9;
        pSVar16 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)psVar12);
        lVar17 = pSVar16->GetRenderMapping();
        pTVar18 = (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        local_58 = (ScrollBar*)(CONCAT44(local_58._4_4_, (uint)param_9) | 4294967040);
        pSVar3->DrawSpriteSlice(local_78, local_3c, local_40, local_38, local_84, param_9 | 4294967040,
                                (Rect*)(lVar17 + 88), pTVar18, 0.0);
        if (pSVar3->field_145 != 0) {
            puVar21 = pSVar3->m_buttonSprite;
            puVar11 = (undefined*)puVar21->LoadSpriteAtlasReference(pSVar10, false);
            if (puVar11 != DataStatus::READY)
                goto LAB_100677e69;
            psVar12 = (shared_ptr*)puVar21->GetDefaultValue();
            bVar7 = shared_ptr::operator_cast_to_bool(psVar12);
            if (bVar7) {
                pcVar13 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)psVar12);
                psVar14 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar13);
                new (&local_a8) shared_ptr<oldscape::dash3d::Decor>(psVar14);
            } else {
                new (&local_a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            }
            bVar7 = shared_ptr::operator_cast_to_bool(&local_a8);
            if (bVar7) {
                pMVar15 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                    (shared_ptr<graphics::SpriteAtlas>*)&local_a8);
                local_60 = (shared_ptr*)pMVar15->GetOrigin();
                bVar8 = shared_ptr::operator_cast_to_bool(local_60);
                if (bVar8) {
                    pSVar16 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                        (shared_ptr<graphics::SpriteAtlasReference>*)psVar12);
                    pSVar16->GetRenderMapping();
                    GetVisualUV((ScrollBar*)local_e8);
                    pSVar16 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                        (shared_ptr<graphics::SpriteAtlasReference>*)psVar12);
                    pSVar16->GetRenderMapping();
                    GetVisualUV((ScrollBar*)local_d8);
                    pTVar18 = (Texture*)local_60->end();
                    puVar21->DrawSpriteSlice(local_78, local_3c, local_40, local_64, local_68, (uint)local_58, local_e8,
                                             pTVar18, 0.0);
                    uVar2 = local_64;
                    uVar20 = local_68;
                    local_38 = (local_38 + local_3c) - local_64;
                    iVar9 = (local_84 + local_40) - local_68;
                    pTVar18 = (Texture*)local_60->end();
                    puVar21->DrawSpriteSlice(local_78, local_38, iVar9, uVar2, uVar20, (uint)local_58, local_d8,
                                             pTVar18, 3.1415927);
                }
            } else {
                uVar19 = logger::default_logger();
                logger::Logger::Log(
                    uVar19, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ScrollBar.cpp", 170,
                    "Invalid sprite atlas reference!");
            }
            local_a8.~shared_ptr();
            if (!bVar7)
                goto LAB_100677e69;
        }
        pSVar16 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
            (shared_ptr<graphics::SpriteAtlasReference>*)local_80);
        pSVar16->GetRenderMapping();
        GetVisualUV((ScrollBar*)&local_a8);
        pTVar18 = (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_c0);
        local_c8->DrawSpriteSlice(local_78, (int)local_44, (int)local_34, local_50, (int)local_70._0_4_, (uint)local_58,
                                  (Rect*)&local_a8, pTVar18, 0.0);
    LAB_100677e69:
        local_b8.~shared_ptr();
        local_98.~shared_ptr();
    }

    // 0x100678350, 144 bytes, placed by class name
    // ScrollBar::GetVisualUV(math::Rect<float> const&, ScrollBar::VisualState) const
    ScrollBar* ScrollBar::GetVisualUV(undefined8 param_2, Vector4T* param_3, undefined4 param_4) {
        float fVar1;
        float fVar2;
        float* pfVar3;
        float fVar4;
        float fVar5;

        new (this) math::Float4(param_3);
        pfVar3 = (float*)qw();
        fVar1 = *pfVar3;
        pfVar3 = (float*)y();
        fVar2 = *pfVar3;
        fVar4 = (float)GetGraphicSliceOffset(param_4);
        fVar5 = (float)GetGraphicSliceHeightPercent();
        pfVar3 = (float*)y();
        *pfVar3 = fVar4 * fVar1 + fVar2;
        SetVerticalFov(fVar5 * fVar1);
        return this;
    }

    // 0x1006783e0, 1712 bytes, placed by class name
    // ScrollBar::ProcessInputImpl(MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int)
    undefined8 ScrollBar::ProcessInputImpl(MouseState* param_1, int param_2, int param_3, int param_4, int param_5,
                                           Rect* param_6, int param_7, int param_8, int param_9) {
        char cVar2;
        byte bVar3;
        byte bVar4;
        byte extraout_AH;
        uint uVar5;
        int iVar6;
        byte extraout_AH_00;
        int iVar7;
        uint uVar8;
        uint* puVar9;
        int iVar10;
        bool* pbVar11;
        float fVar12;
        float fVar13;
        int local_80;
        int local_7c;
        MouseState* local_78;
        undefined8 local_70;
        float local_68;
        float local_64;
        uint local_60;
        uint local_5c;
        uint local_58;
        int local_54;
        int local_50;
        uint local_4c;
        float local_48;
        float local_44;
        float local_40;
        uint local_3c;
        int local_38;
        uint local_34;

        local_78 = param_1;
        cVar2 = GetVisible(this);
        iVar6 = param_8;
        if (cVar2 == '\0') {
        LAB_1006785f0:
            local_34 = local_34 & 4294967040;
            pbVar11 = (bool*)&local_34;
        } else {
            local_58 = (uint)field_145;
            bVar4 = m_size;
            local_68 = (float)param_2;
            local_64 = (float)param_3;
            bVar3 = GetAutoHide(this);
            if (param_5 < param_4) {
                if ((bVar3 ^ 1) == 0 && iVar6 <= param_4)
                    goto LAB_1006785f0;
                local_4c = (uint)bVar4;
                local_44 = (float)(uint)m_size;
                bVar4 = field_145;
                local_38 = param_5;
                bVar3 = m_handleSprite->GetVisualMargin();
                uVar5 = (uint)bVar3 + param_4 + (uint)bVar4 * -2;
                local_60 = uVar5;
                if (iVar6 < 1) {
                    cVar2 = GetAutoHide(this);
                    if (cVar2 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!GetAutoHide()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                                  "ScrollBar.cpp",
                                  252, (char*)0);
                    }
                    bVar4 = field_145;
                    bVar3 = m_handleSprite->GetVisualMargin();
                    local_40 = (float)((uint)bVar4 - (uint)bVar3);
                    uVar5 = local_60;
                } else {
                    local_40 = (float)(int)uVar5;
                    local_48 = 1.0 / (float)iVar6;
                    fVar12 = (float)eastl::min<float>(1.0, (float)param_4 * local_48);
                    fVar12 = fVar12 * local_40;
                    bVar4 = field_145;
                    iVar6 = eastl::min<graphics::GraphicsQuality>(uVar5 - (int)fVar12,
                                                                  (int)((float)param_7 * local_40 * local_48));
                    local_40 = (float)(iVar6 + (uint)bVar4);
                    uVar5 = (int)fVar12;
                }
                local_54 = 0;
                local_48 = (float)local_58;
                param_5 = local_38;
                local_5c = local_4c;
                local_50 = param_4;
            } else {
                if ((bVar3 ^ 1) == 0 && iVar6 <= param_5)
                    goto LAB_1006785f0;
                local_48 = (float)(uint)m_size;
                uVar8 = param_5 + (uint)field_145 * -2;
                uVar5 = (uint)bVar4;
                local_60 = uVar8;
                local_50 = param_5;
                if (iVar6 < 1) {
                    cVar2 = GetAutoHide(this);
                    if (cVar2 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("!GetAutoHide()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/"
                                  "ScrollBar.cpp",
                                  228, (char*)0);
                    }
                    bVar4 = field_145;
                    m_handleSprite->GetVisualMargin();
                    local_54 = (uint)bVar4 - (uint)extraout_AH_00;
                    local_40 = 0.0;
                    local_5c = local_60;
                    local_44 = (float)local_58;
                } else {
                    local_40 = (float)(int)uVar8;
                    local_44 = 1.0 / (float)iVar6;
                    fVar12 = (float)eastl::min<float>(1.0, (float)param_5 * local_44);
                    local_5c = (uint)(fVar12 * local_40);
                    bVar4 = field_145;
                    local_4c = uVar5;
                    local_38 = param_4;
                    iVar6 = eastl::min<graphics::GraphicsQuality>(uVar8 - local_5c,
                                                                  (int)((float)param_7 * local_40 * local_44));
                    param_4 = local_38;
                    uVar5 = local_4c;
                    m_handleSprite->GetVisualMargin();
                    local_54 = (iVar6 + (uint)bVar4) - (uint)extraout_AH;
                    local_40 = 0.0;
                    local_44 = (float)local_58;
                }
            }
            bVar4 = GetInteractionHeld(this);
            local_34 = param_7;
            bVar3 = local_78[1] == (MouseState)0 & bVar4;
            iVar6 = param_4;
            iVar7 = param_5;
            local_4c = uVar5;
            if ((bVar4 == 0) || (bVar3 != 0)) {
            } else if (field_160 - 3U < 2) {
                local_38 = CONCAT31(local_38._1_3_, bVar4);
                local_68 = (float)param_6->GetX();
                local_64 = (float)param_6->GetZ();
                iVar6 = param_6->GetPos();
                iVar7 = param_6->GetLevel();
                bVar4 = (byte)local_38;
            }
            iVar10 = param_8;
            fVar12 = *(float*)(local_78 + 4) - (float)(int)local_68;
            if (fVar12 < 0.0) {
            LAB_100678776:
                if (bVar3 != 0) {
                    ClearInteractionState(this);
                    goto LAB_100678787;
                }
                if (field_164 == 1) {
                    field_160 = 0;
                }
                local_3c = local_3c & 4294967040;
            } else {
                fVar13 = *(float*)(local_78 + 8) - (float)(int)local_64;
                if (((fVar13 < 0.0) || ((float)iVar6 <= fVar12)) || ((float)iVar7 <= fVar13))
                    goto LAB_100678776;
                if (bVar3 == 0) {
                    if (((m_size == 0) || ((float)(int)local_48 < fVar12)) || ((float)(int)local_44 < fVar13)) {
                        local_38 = param_4;
                        if (((m_size == 0) || (fVar12 < (float)(iVar6 - (int)local_48))) ||
                            (fVar13 < (float)(iVar7 - (int)local_44))) {
                            if (bVar4 == 0) {
                            LAB_100678942:
                                if (*local_78 == (MouseState)0) {
                                    field_160 = 4;
                                    field_164 = 1;
                                } else {
                                    if (((fVar12 < (float)(int)local_40) || (fVar13 < (float)local_54)) ||
                                        ((float)(int)((int)local_40 + local_4c) < fVar12)) {
                                        (&field_146, 2, true)->set();
                                        field_164 = 2;
                                    } else {
                                        local_68 = (float)(int)(local_54 + local_5c);
                                        local_78 = (MouseState*)CONCAT44(local_78._4_4_, fVar13);
                                        local_64 = fVar12;
                                        (&field_146, 2, true)->set();
                                        field_164 = 2;
                                        if (local_78._0_4_ <= local_68) {
                                            field_160 = 3;
                                            if (param_5 < local_38) {
                                                fVar12 = local_64;
                                            } else {
                                                fVar12 = local_78._0_4_;
                                            }
                                            field_148 = (int)fVar12 - (int)local_44;
                                            field_152 = param_7;
                                            goto LAB_100678a73;
                                        }
                                    }
                                    field_160 = 4;
                                    field_148 = 0;
                                    field_152 = 0;
                                }
                            } else if (field_160 - 3U < 2) {
                                if (bVar4 == 0)
                                    goto LAB_100678942;
                                if (param_4 <= param_5) {
                                    fVar12 = fVar13;
                                }
                                iVar6 = 0;
                                if (field_160 == 4) {
                                    iVar6 = -(param_9 / 2);
                                }
                                local_3c = (int)(((fVar12 - (float)(int)(local_58 + field_148)) * (float)param_8) /
                                                 (float)(int)local_60) +
                                           iVar6 + field_152;
                                local_80 = 0;
                                local_7c = param_8 - local_50;
                                local_34 = math::Clamp<int>((int*)&local_3c, &local_80, &local_7c);
                            }
                        } else {
                            cVar2 = UpdateButtonState(this, 2, *local_78);
                            if (cVar2 != '\0') {
                                local_34 = eastl::min<graphics::GraphicsQuality>(iVar10 - local_50, param_9 + param_7);
                            }
                        }
                    } else {
                        cVar2 = UpdateButtonState(this, 1, *local_78);
                        iVar10 = param_8;
                        if (cVar2 != '\0') {
                            local_34 = eastl::max<int>(0, param_7 - param_9);
                        }
                    }
                LAB_100678a73:
                    local_3c = CONCAT31(local_3c._1_3_, iVar10 != 0);
                    pbVar11 = (bool*)&local_3c;
                    puVar9 = &local_34;
                    goto LAB_100678600;
                }
                (&field_146, 2)->reset();
            LAB_100678787:
                local_3c = CONCAT31(local_3c._1_3_, 1);
            }
            pbVar11 = (bool*)&local_3c;
        }
        puVar9 = (uint*)&param_7;
    LAB_100678600:
        eastl::pair<bool, unsigned int>::pair<bool, unsigned int, void>((pair<bool, unsigned int>*)&local_70, pbVar11,
                                                                        puVar9);
        return local_70;
    }

    // 0x100678ac0, 160 bytes, placed by class name
    // ScrollBar::UpdateButtonState(ScrollBar::InteractionTarget, bool)
    bool ScrollBar::UpdateButtonState(int param_2, char param_3) {
        char cVar1;
        int iVar2;
        int iVar3;
        bool bVar4;

        cVar1 = GetInteractionHeld(this);
        if ((cVar1 == '\0') || (bVar4 = true, field_160 == param_2)) {
            field_160 = param_2;
            if (param_3 == '\0') {
                cVar1 = GetInteractionHeld(this);
                if (cVar1 == '\0') {
                    field_164 = 1;
                    bVar4 = false;
                } else {
                    iVar2 = field_156 + -1;
                    bVar4 = iVar2 == 0;
                    iVar3 = 5;
                    if (!bVar4) {
                        iVar3 = iVar2;
                    }
                    field_156 = iVar3;
                }
            } else {
                (&field_146, 2, true)->set();
                field_156 = 20;
                field_164 = 2;
                bVar4 = true;
            }
        }
        return bVar4;
    }

} // namespace jag::ui
