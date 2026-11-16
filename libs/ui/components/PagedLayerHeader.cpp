// libs/ui/components/PagedLayerHeader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "PagedLayerHeader.h"

namespace jag::ui {
    // 0x100269b20: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted::GetID() const, which has identical code
    PagedLayerHeader::GetType() const;

    // 0x1006a3e40, 384 bytes, base-object constructor, placed by class name
    // PagedLayerHeader::PagedLayerHeader()
    void PagedLayerHeader::PagedLayerHeader() {
        undefined1* this_00;
        _func_decltype_nullptr* in_RSI;

        new (this) Component();
        field_0 = &PTR__PagedLayerHeader_100f0f7c8;
        new (field_392) SpriteData();
        new ((field_392 + 48)) SpriteData();
        new ((field_392 + 96)) SpriteData();
        this_00 = field_536;
        new (this_00) TextData();
        field_600 = 50;
        field_602 = 10;
        field_604 = 20;
        field_606 = 10;
        field_608 = 2;
        field_610 = false;
        field_612 = 65535;
        new (&field_616, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        eastl::vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>::vector();
        new (&field_656, 255) Margin();
        new (&field_660, 255) Margin();
        (*(code*)field_0[4])(this, 1);
        this_00->SetTextHAlign(1);
        this_00->SetTextVAlign(1);
    }

    // 0x1006a3fe0, 16 bytes, complete-object constructor, placed by class name
    // PagedLayerHeader::PagedLayerHeader(): jumps straight to the base-object constructor

    // 0x1006a3ff0, 784 bytes, placed by class name
    // PagedLayerHeader::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void PagedLayerHeader::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4,
                                     bool param_5, bool param_6, bool param_7) {
        undefined1* this_00;
        int iVar1;
        char cVar2;
        byte bVar3;
        bool bVar4;
        uchar uVar5;
        undefined1 uVar6;
        int iVar7;
        long lVar8;
        ulong uVar9;
        char* pcVar10;
        PagedLayer* pPVar11;
        undefined8 uVar12;
        ulong uVar13;
        int iVar14;
        bool bVar15;
        ButtonElement* pBVar16;
        float local_88;
        int local_74;
        int local_70;
        float local_6c;
        undefined4 local_68[2];
        ulong local_60;
        ulong local_58;
        shared_ptr local_50;
        int local_40;
        int local_3c;
        Margin local_38;
        float local_34;

        local_40 = param_2;
        local_3c = param_3;
        cVar2 = IsEnabled();
        if (cVar2 != '\0') {
            local_74 = GetStreamCountLastMix();
            local_70 = GetMinMapX();
            local_50._0_4_ = field_392->GetVisualMargin();
            local_38 = (Margin)(&field_656, (Margin*)&local_50)->GetValidOr();
            local_38.ApplyTo(&local_40, &local_3c, &local_74, &local_70);
            local_6c = (float)local_40;
            uVar12 = *(undefined8*)(param_1 + 60);
            local_34 = (float)local_3c;
            cVar2 = IsHorizontal(this);
            if (cVar2 == '\0') {
                iVar7 = GetStreamCountLastMix();
                bVar3 = local_38.GetWidth();
                local_60 = (ulong)(iVar7 - (uint)bVar3);
                local_58 = (ulong)field_600;
            } else {
                local_60 = (ulong)field_600;
                iVar7 = GetMinMapX();
                bVar3 = local_38.GetHeight();
                local_58 = (ulong)(iVar7 - (uint)bVar3);
            }
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            this_00 = &field_632;
            lVar8 = this_00->size();
            if (lVar8 != 0) {
                local_88 = (float)uVar12;
                pBVar16._0_4_ = (ButtonElement*)(local_88 - local_6c);
                local_34 = (float)(uint)param_4;
                uVar13 = 0;
                iVar14 = 0;
                iVar7 = 0;
                do {
                    pcVar10 = (char*)eastl::vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>::operator[](
                        (vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>*)this_00, uVar13);
                    bVar4 = shared_ptr::operator_cast_to_bool(&local_50);
                    bVar15 = false;
                    if ((bVar4) && (*pcVar10 != '\0')) {
                        pPVar11 = (PagedLayer*)shared_ptr<PagedLayer>::operator->((shared_ptr<PagedLayer>*)&local_50);
                        uVar5 = pPVar11->GetCurrentValue();
                        bVar15 = (uchar)uVar13 != uVar5;
                    }
                    local_68[0] = pBVar16._0_4_->UpdateLogic(pcVar10 + 56, iVar7, iVar14, local_60, local_58,
                                                             bVar15 & param_6, local_34, 0);
                    bVar4 = local_68->empty();
                    if (bVar4) {
                        bVar4 = shared_ptr::operator_cast_to_bool(&local_50);
                        if (!bVar4) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("linkedPagedLayer",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                      "components/PagedLayerHeader.cpp",
                                      63, (char*)0);
                        }
                        pPVar11 = (PagedLayer*)shared_ptr<PagedLayer>::operator->((shared_ptr<PagedLayer>*)&local_50);
                        cVar2 = pPVar11->SetActivePage((uchar)uVar13);
                        if (cVar2 == '\0') {
                            uVar12 = logger::default_logger();
                            pPVar11 =
                                (PagedLayer*)shared_ptr<PagedLayer>::operator->((shared_ptr<PagedLayer>*)&local_50);
                            uVar6 = pPVar11->GetPageCount();
                            logger::Logger::Log(uVar12, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "ui/components/PagedLayerHeader.cpp",
                                                67, "Cannot change page to %d because the parent only has %d pages",
                                                (int)uVar13, uVar6);
                        }
                    }
                    cVar2 = IsHorizontal(this);
                    iVar1 = iVar14 + (int)local_58 + (uint)field_602;
                    if (cVar2 != '\0') {
                        iVar1 = iVar14;
                        iVar7 = (int)local_60 + iVar7 + (uint)field_602;
                    }
                    iVar14 = iVar1;
                    uVar13 = uVar13 + 1;
                    uVar9 = this_00->size();
                } while (uVar13 < uVar9);
            }
            local_50.~shared_ptr();
        }
    }

    // 0x1006a43c0, 80 bytes, placed by class name
    // PagedLayerHeader::MainDraw(ComponentDependencies const&, int, int, float)
    void PagedLayerHeader::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        UpdateAnimations(this, param_4);
        DrawBackground(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
        DrawPageHeaders(this, *(RT7Core**)(param_1 + 16), *(FontManager**)(param_1 + 8), *(FontHelpers**)param_1,
                        param_2, param_3);
    }

    // 0x1006a4410, 96 bytes, placed by class name
    // PagedLayerHeader::UpdateAnimations(float)
    void PagedLayerHeader::UpdateAnimations(float param_1) {
        long lVar2;
        long lVar3;

        if (IsEnabled() != '\0') {
            lVar3 = (&field_632)->HeapBeginPtr();
            lVar2 = (&field_632)->end();
            for (; lVar3 != lVar2; lVar3 = lVar3 + 88) {
                ((lVar3 + 56))->UpdateAnimations(param_1);
            }
        }
    }

    // 0x1006a4470, 400 bytes, placed by class name
    // PagedLayerHeader::DrawBackground(graphics::RT7Core*, int, int)
    void PagedLayerHeader::DrawBackground(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar5;
        undefined* puVar6;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* pTVar7;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        long lVar8;
        undefined8 uVar9;
        undefined8 uVar10;

        this_00 = field_392;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar5 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar6 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar5, false);
        if (puVar6 == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            bVar1 = shared_ptr::operator_cast_to_bool(this_02);
            if (bVar1) {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                this_04 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_03);
                bVar1 = shared_ptr::operator_cast_to_bool(this_04);
                if (bVar1) {
                    this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    pTVar7 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    if (pTVar7 == (Texture*)0) {
                        return;
                    }
                    this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_08 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    iVar2 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                    lVar8 = this_07->GetSpriteRenderMapping(iVar2);
                    iVar2 = GetStreamCountLastMix();
                    iVar3 = GetMinMapX();
                    uVar4 = GetRGBA();
                    this_00->DrawSpriteSlice(param_1, param_2, param_3, iVar2, iVar3, uVar4, (Rect*)(lVar8 + 88),
                                             pTVar7, 0.0);
                    return;
                }
                uVar9 = logger::default_logger();
                uVar10 = 209;
            } else {
                uVar9 = logger::default_logger();
                uVar10 = 201;
            }
            logger::Logger::Log(uVar9, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                "PagedLayerHeader.cpp",
                                uVar10, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a4600, 1328 bytes, placed by class name
    // PagedLayerHeader::DrawPageHeaders(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int)
    /* WARNING: Removing unreachable block (ram,4301932758) */
    /* WARNING: Removing unreachable block (ram,4301932443) */
    /* PagedLayerHeader::DrawPageHeaders(graphics::RT7Core*, graphics::FontManager*,
   graphics::FontHelpers*, int, int) */

    void PagedLayerHeader::DrawPageHeaders(RT7Core* param_1, FontManager* param_2, FontHelpers* param_3, int param_4,
                                           int param_5) {
        ushort uVar1;
        PagedLayerHeader* pPVar2;
        bool bVar3;
        char cVar4;
        byte bVar5;
        Margin MVar6;
        int iVar7;
        PagedLayer* pPVar8;
        TextureManager* pTVar9;
        SpriteAtlasManager* pSVar10;
        undefined* puVar11;
        undefined8 uVar12;
        shared_ptr* psVar13;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar14;
        shared_ptr* psVar15;
        MapArea* pMVar16;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        SpriteAtlas* pSVar18;
        FastPool<audio::SoundInstance, int>* pFVar19;
        long lVar20;
        undefined8 uVar21;
        uint uVar22;
        int iVar23;
        int iVar24;
        uint uVar25;
        undefined8 in_stack_ffffffffffffff18;
        undefined4 uVar26;
        undefined8 in_stack_ffffffffffffff20;
        undefined4 uVar27;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_a0[16];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_90[16];
        FontHelpers* local_80;
        FontManager* local_78;
        shared_ptr local_70;
        PagedLayerHeader* local_60;
        Margin local_58;
        int local_54;
        RT7Core* local_50;
        Texture* local_48;
        Texture* local_40;
        Margin local_38;
        int local_34;

        uVar26 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 32);
        uVar27 = (undefined4)((ulong)in_stack_ffffffffffffff20 >> 32);
        local_80 = param_3;
        local_78 = param_2;
        local_50 = param_1;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar3 = shared_ptr::operator_cast_to_bool(&local_70);
        if (!bVar3) {
            uVar21 = logger::default_logger();
            GetChildren();
            uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar21, 1, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                "PagedLayerHeader.cpp",
                                228, "No tab associated with header %p (\'%s\')", this, uVar12);
            goto LAB_1006a4aea;
        }
        pPVar8 = (PagedLayer*)shared_ptr<PagedLayer>::operator*((shared_ptr<PagedLayer>*)&local_70);
        UpdatePageHeaders(this, pPVar8);
        local_34 = param_4;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_a0,
                                                                                 (_func_decltype_nullptr*)pPVar8);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_90,
                                                                                 (_func_decltype_nullptr*)pPVar8);
        pTVar9 = (TextureManager*)local_50->GetTextureManager();
        pSVar10 = (SpriteAtlasManager*)pTVar9->GetSpriteAtlasManager();
        puVar11 = (undefined*)((field_392 + 96), pSVar10, false)->LoadSpriteAtlasReference();
        if (puVar11 == DataStatus::READY) {
            psVar13 = (shared_ptr*)((field_392 + 96))->GetDefaultValue();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar13);
            if (bVar3) {
                pcVar14 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)psVar13);
                psVar15 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar14);
                bVar3 = shared_ptr::operator_cast_to_bool(psVar15);
                if (bVar3) {
                    pMVar16 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)psVar15);
                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar16->GetOrigin();
                    local_48 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
                    pSVar18 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)psVar15);
                    pFVar19 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)psVar13);
                    iVar7 = FastPool<audio::SoundInstance, int>::capacity(pFVar19);
                    lVar20 = pSVar18->GetSpriteRenderMapping(iVar7);
                    math::Rect<float>::operator=((Rect<float>*)local_a0, (Rect*)(lVar20 + 88));
                    goto LAB_1006a4808;
                }
                uVar21 = logger::default_logger();
                logger::Logger::Log(uVar21, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedLayerHeader.cpp",
                                    254, "Invalid sprite atlas reference!");
            } else {
                uVar21 = logger::default_logger();
                logger::Logger::Log(uVar21, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedLayerHeader.cpp",
                                    246, "Invalid sprite atlas reference!");
            }
            local_48 = (Texture*)0;
            goto LAB_1006a4aea;
        }
        local_48 = (Texture*)0;
    LAB_1006a4808:
        pTVar9 = (TextureManager*)local_50->GetTextureManager();
        pSVar10 = (SpriteAtlasManager*)pTVar9->GetSpriteAtlasManager();
        puVar11 = (undefined*)((field_392 + 48), pSVar10, false)->LoadSpriteAtlasReference();
        if (puVar11 == DataStatus::READY) {
            psVar13 = (shared_ptr*)((field_392 + 48))->GetDefaultValue();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar13);
            if (bVar3) {
                pcVar14 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)psVar13);
                psVar15 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar14);
                bVar3 = shared_ptr::operator_cast_to_bool(psVar15);
                if (bVar3) {
                    pMVar16 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)psVar15);
                    pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pMVar16->GetOrigin();
                    local_40 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar17);
                    pSVar18 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)psVar15);
                    pFVar19 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)psVar13);
                    iVar7 = FastPool<audio::SoundInstance, int>::capacity(pFVar19);
                    lVar20 = pSVar18->GetSpriteRenderMapping(iVar7);
                    math::Rect<float>::operator=((Rect<float>*)local_90, (Rect*)(lVar20 + 88));
                    goto LAB_1006a4943;
                }
                uVar21 = logger::default_logger();
                logger::Logger::Log(uVar21, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedLayerHeader.cpp",
                                    276, "Invalid sprite atlas reference!");
            } else {
                uVar21 = logger::default_logger();
                logger::Logger::Log(uVar21, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedLayerHeader.cpp",
                                    268, "Invalid sprite atlas reference!");
            }
            local_40 = (Texture*)0;
            goto LAB_1006a4aea;
        }
        local_40 = (Texture*)0;
    LAB_1006a4943:
        local_54 = param_5;
        local_58 = (Margin)field_392->GetVisualMargin();
        MVar6 = (Margin)(&field_656, &local_58)->GetValidOr();
        local_38 = MVar6;
        cVar4 = IsHorizontal(this);
        if (cVar4 == '\0') {
            iVar7 = GetStreamCountLastMix();
            bVar5 = local_38.GetWidth();
            uVar22 = iVar7 - (uint)bVar5;
            uVar25 = (uint)field_600;
            if (0 < (int)uVar22)
                goto LAB_1006a49d3;
        } else {
            uVar1 = field_600;
            uVar22 = (uint)uVar1;
            iVar7 = GetMinMapX();
            bVar5 = local_38.GetHeight();
            uVar25 = iVar7 - (uint)bVar5;
            if (uVar1 != 0) {
            LAB_1006a49d3:
                if (0 < (int)uVar25) {
                    iVar24 = (uint)MVar6.field_0 + local_34;
                    iVar23 = ((uint)MVar6 >> 8 & 255) + local_54;
                    iVar7 = 0;
                    local_60 = this;
                    while (true) {
                        pPVar8 = (PagedLayer*)shared_ptr<PagedLayer>::operator->((shared_ptr<PagedLayer>*)&local_70);
                        bVar5 = pPVar8->GetPageCount();
                        if (bVar5 <= (byte)iVar7)
                            break;
                        pPVar8 = (PagedLayer*)shared_ptr<PagedLayer>::operator*((shared_ptr<PagedLayer>*)&local_70);
                        DrawPageHeader(local_60, local_50, local_78, local_80, pPVar8, (byte)iVar7, iVar24, iVar23,
                                       uVar22, uVar25, local_48, (Rect*)local_a0, local_40, (Rect*)local_90);
                        pPVar2 = local_60;
                        local_34 = iVar7;
                        cVar4 = IsHorizontal(local_60);
                        iVar7 = iVar23 + uVar25 + (uint)pPVar2->field_602;
                        if (cVar4 != '\0') {
                            iVar7 = iVar23;
                            iVar24 = iVar24 + uVar22 + (uint)pPVar2->field_602;
                        }
                        iVar23 = iVar7;
                        iVar7 = CONCAT31((int3)((uint)local_34 >> 8), (char)local_34 + '\x01');
                    }
                    goto LAB_1006a4aea;
                }
            }
        }
        uVar21 = logger::default_logger();
        logger::Logger::Log(
            uVar21, 1, 3,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayerHeader.cpp",
            321, "Paged layer size is invalid (width=%d height=%d)", CONCAT44(uVar26, uVar22),
            CONCAT44(uVar27, uVar25));
    LAB_1006a4aea:
        local_70.~shared_ptr();
    }

    // 0x1006a4b30, 32 bytes, placed by class name
    // PagedLayerHeader::SetMargin(Component::MarginType, Margin)
    void PagedLayerHeader::SetMargin(int param_2, undefined4 param_3) {
        if (param_2 == 2) {
            field_660 = param_3;
        } else if (param_2 == 0) {
            field_656 = param_3;
            return;
        }
    }

    // 0x1006a4b50, 64 bytes, placed by class name
    // PagedLayerHeader::GetMargin(Component::MarginType) const
    Margin PagedLayerHeader::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 2) {
            local_c = (Margin)field_660;
        } else if (param_2 == 0) {
            local_c = (Margin)field_656;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x1006a4b90, 304 bytes, placed by class name
    // PagedLayerHeader::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void PagedLayerHeader::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        undefined2 uVar4;
        undefined4 uVar5;
        undefined8 in_RAX;
        undefined8 local_28;

        local_28 = in_RAX;
        cVar1 = param_1->g1();
        (*(code*)field_0[4])(this, cVar1 == '\x01');
        uVar3 = param_1->g2();
        field_600 = uVar3;
        uVar3 = param_1->g2();
        field_602 = uVar3;
        uVar4 = param_1->g2();
        field_604 = uVar4;
        uVar3 = param_1->g2();
        field_606 = uVar3;
        uVar3 = param_1->g2();
        field_608 = uVar3;
        cVar1 = param_1->g1();
        field_610 = cVar1 == '\x01';
        new (&local_28) Margin(param_1);
        field_656 = local_28._0_4_;
        new (((long)&local_28 + 4)) Margin(param_1);
        field_660 = local_28._4_4_;
        uVar3 = param_1->g2();
        field_612 = uVar3;
        bVar2 = param_1->g1();
        field_100 = ~bVar2;
        uVar5 = param_1->g4();
        field_96 = uVar5;
        (field_392, param_1, param_2)->DecodeSpriteData();
        ((field_392 + 48), param_1, param_2)->DecodeSpriteData();
        ((field_392 + 96), param_1, param_2)->DecodeSpriteData();
        (field_536, param_1, param_2)->DecodeTextData();
    }

    // 0x1006a4cc0, 288 bytes, placed by class name
    // PagedLayerHeader::LoadStyleSheetVisuals(StyleSheet const&)
    void PagedLayerHeader::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 296, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 295, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_600, 298, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_604, 299, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_602, 297, 1);
        StyleSheet::LoadPropertyValueIfSet<bool>(param_1, &field_610, 300, 1);
        (&field_656, 339, param_1)->LoadFromStylesheet();
        (&field_660, 345, param_1)->LoadFromStylesheet();
        (field_536, 331, param_1)->LoadStyleSheetTextData();
        (field_392, 301, param_1)->LoadStyleSheetSpriteData();
        ((field_392 + 48), 321, param_1)->LoadStyleSheetSpriteData();
        ((field_392 + 96), 311, param_1)->LoadStyleSheetSpriteData();
    }

    // 0x1006a4de0, 32 bytes, placed by class name
    // PagedLayerHeader::LinkPagedLayer(shared_ptr<PagedLayer> const&)
    void PagedLayerHeader::LinkPagedLayer(shared_ptr* param_1) {
        weak_ptr<PagedLayer>::operator=((weak_ptr<PagedLayer>*)&field_616, param_1);
    }

    // 0x1006a4e40, 448 bytes, placed by class name
    // PagedLayerHeader::LinkStaticComponent(shared_ptr<Component> const&)
    ulong PagedLayerHeader::LinkStaticComponent(shared_ptr* param_1) {
        bool bVar1;
        uint uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        uint uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        Component* this_00;
        long* plVar9;
        undefined8 uVar10;
        shared_ptr* extraout_RDX;
        shared_ptr local_40;

        if (field_612 == 65535) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_staticLinkedPagedLayerID != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "PagedLayerHeader.cpp",
                      170, (char*)0);
        }
        bVar1 = shared_ptr::operator_cast_to_bool(param_1);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("linkComponent",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "PagedLayerHeader.cpp",
                      171, (char*)0);
        }
        this_00 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
        uVar3 = this_00->GetStaticID();
        uVar6 = 4294967295;
        if (field_612 != 65535) {
            uVar6 = (uint)field_612;
        }
        if (uVar3 != uVar6) {
            /* WARNING: Subroutine does not return */
            LogAssert("linkComponent->GetStaticID() == m_staticLinkedPagedLayerID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "PagedLayerHeader.cpp",
                      172, (char*)0);
        }
        bVar1 = shared_ptr::operator_cast_to_bool(param_1);
        if (bVar1) {
            plVar9 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)param_1);
            if ((**(code**)(*plVar9 + 16))(plVar9) == '\x16') {
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_40, (jag*)param_1,
                                                                                             extraout_RDX);
                weak_ptr<PagedLayer>::operator=((weak_ptr<PagedLayer>*)&field_616, &local_40);
                local_40.~shared_ptr();
                return CONCAT71((int7)((ulong)&field_616 >> 8), 1) & 4294967295;
            }
        }
        uVar10 = logger::default_logger();
        uVar4 = GetInterfaceID();
        uVar5 = GetStaticID();
        uVar6 = GetDynamicID();
        uVar7 = ComponentHelpers::GetCategoryID(uVar6);
        uVar6 = GetDynamicID();
        uVar8 = ComponentHelpers::GetDynamicID(uVar6);
        logger::Logger::Log(
            uVar10, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayerHeader.cpp",
            182,
            "Attempting to link a non-paged layer or null component to paged layer header %d:%d (Cat %d Dyn ID %d)",
            uVar4, uVar5, uVar7, uVar8);
        /* WARNING: Subroutine does not return */
        LogAssertAlways(
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedLayerHeader.cpp",
            184, (char*)0);
    }

    // 0x1006a5000, 272 bytes, placed by class name
    // PagedLayerHeader::UpdatePageHeaders(PagedLayer&)
    void PagedLayerHeader::UpdatePageHeaders(PagedLayer* param_1) {
        undefined1* this_00;
        byte bVar1;
        byte bVar2;
        undefined1 uVar4;
        int iVar5;
        PageHeader* this_01;
        undefined1* puVar6;
        long lVar7;
        ulong uVar8;

        this_00 = &field_632;
        bVar1 = this_00->size();
        bVar2 = param_1->GetPageCount();
        this_00->resize_uninitialized((ulong)bVar2);
        bVar2 = param_1->GetPageCount();
        if (bVar1 < bVar2) {
            uVar8 = (ulong)bVar1;
            do {
                this_01 = (PageHeader*)eastl::vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>::operator[](
                    (vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>*)this_00, uVar8);
                PageHeader::PageHeader(this_01, field_610);
                uVar8 = uVar8 + 1;
                bVar1 = param_1->GetPageCount();
            } while (uVar8 < bVar1);
        }
        if (param_1->GetPageCount() != '\0') {
            uVar8 = 0;
            do {
                puVar6 = (undefined1*)eastl::vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>::operator[](
                    (vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>*)this_00, uVar8);
                uVar4 = param_1->GetPageEnabled((uchar)uVar8);
                *puVar6 = uVar4;
                iVar5 = param_1->GetPageIcon((uchar)uVar8);
                lVar7 = eastl::vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>::operator[](
                    (vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>*)this_00, uVar8);
                if (iVar5 == -1) {
                    ((lVar7 + 8))->Reset();
                } else {
                    ((lVar7 + 8))->SetSpriteID(iVar5);
                }
                uVar8 = uVar8 + 1;
                bVar1 = param_1->GetPageCount();
            } while (uVar8 < bVar1);
        }
    }

    // 0x1006a5150, 1376 bytes, placed by class name
    // PagedLayerHeader::DrawPageHeader(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, PagedLayer&, unsigned char, int, int, int, int, render::Texture const*, math::Rect<float> const&, render::Texture const*, math::Rect<float> const&)
    void PagedLayerHeader::DrawPageHeader(RT7Core* param_1, FontManager* param_2, FontHelpers* param_3,
                                          PagedLayer* param_4, uchar param_5, int param_6, int param_7, int param_8,
                                          int param_9, Texture* param_10, Rect* param_11, Texture* param_12,
                                          Rect* param_13) {
        undefined1* this_00;
        ushort uVar1;
        ushort uVar2;
        uchar uVar3;
        bool bVar4;
        char cVar5;
        uint uVar6;
        undefined4 uVar7;
        SpriteData* pSVar8;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar9;
        undefined* puVar10;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        long lVar11;
        PagedLayer* this_09;
        fixed_string* pfVar12;
        undefined8 uVar13;
        ushort* this_10;
        undefined8 uVar14;
        undefined7 in_register_00000089;
        int iVar15;
        TextData* this_11;
        int iVar16;
        int iVar17;
        int iVar18;
        StringView SVar19;
        Texture* in_stack_ffffffffffffff28;
        StringView local_b0;
        TextProperties local_a0;
        ButtonElement* local_78;
        FontHelpers* local_70;
        Margin local_68;
        int local_64;
        uint local_60;
        uint local_5c;
        FontManager* local_58;
        RT7Core* local_50;
        PagedLayer* local_48;
        SpriteData* local_40;
        TextData* local_38;

        local_70 = param_3;
        local_58 = param_2;
        local_48 = param_4;
        pSVar8 = (SpriteData*)eastl::vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>::operator[](
            (vector<PagedLayerHeader::PageHeader, BucketAllocatorEASTL>*)&field_632,
            CONCAT71(in_register_00000089, param_5) & 4294967295);
        local_40 = pSVar8;
        if (param_10 != (Texture*)0) {
            uVar3 = local_48->GetCurrentValue();
            local_78 = (ButtonElement*)&pSVar8[1].m_spriteRotate;
            local_38 = (TextData*)CONCAT44(local_38._4_4_, param_6);
            local_64 = param_7;
            local_60 = param_8 & 65535;
            local_5c = param_9 & 65535;
            uVar6 = GetRGBA();
            bVar4 = (bool)IsEnabled();
            pSVar8 = local_40;
            in_stack_ffffffffffffff28 = param_10;
            local_78->Draw(param_1, (int)local_38, local_64, (ushort)local_60, (ushort)local_5c, uVar6, bVar4, param_10,
                           param_11, (SpriteData*)(field_392 + 96), uVar3 == param_5);
        }
        local_a0.m_pFont._0_4_ = ((field_392 + 96))->GetVisualMargin();
        local_68 = (Margin)(&field_660, (Margin*)&local_a0)->GetValidOr();
        local_68.ApplyTo(&param_6, &param_7, &param_8, &param_9);
        this_10 = &pSVar8->m_spriteRotate;
        cVar5 = this_10->IsSpriteValid();
        local_50 = param_1;
        if (cVar5 == '\0') {
            this_00 = field_536;
            iVar16 = this_00->GetEndPosition();
            if (iVar16 != -1) {
                local_38 = (TextData*)this_00;
                iVar16 = this_00->GetEndPosition();
                new (&local_a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                this_09 = (PagedLayer*)local_58->GetFont(iVar16, (shared_ptr*)&local_a0);
                local_a0.~shared_ptr();
                bVar4 = this_09->operator_cast_to_bool();
                this_11 = local_38;
                if (bVar4) {
                    pfVar12 = (fixed_string*)local_48->GetPageLabel(param_5);
                    iVar15 = param_7;
                    iVar16 = param_6;
                    if ((param_12 != (Texture*)0) && ((char)local_40->m_spriteID == '\0')) {
                        local_48 = this_09;
                        IsHorizontal(this);
                        uVar1 = field_606;
                        uVar2 = field_608;
                        iVar18 = param_8 - (uint)uVar1;
                        iVar17 = param_9 - (uint)uVar1;
                        param_8 = (param_8 - (uint)uVar1) - ((uint)uVar2 + (uint)uVar2);
                        local_40 = (SpriteData*)(field_392 + 48);
                        uVar1 = field_606;
                        uVar6 = GetRGBA();
                        this_11 = local_38;
                        this_09 = local_48;
                        in_stack_ffffffffffffff28 = param_12;
                        local_40->DrawSpriteSlice(local_50, (iVar18 - (uint)uVar2) + iVar16, iVar17 / 2 + iVar15,
                                                  (uint)uVar1, (uint)uVar1, uVar6, param_13, param_12, 0.0);
                    }
                    new (&local_a0) graphics::TextProperties(this_09);
                    uVar6 = GetRGBA();
                    this_11->PopulateTextProperties(&local_a0, uVar6, field_100);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_b0, pfVar12);
                    SVar19.field_8._0_4_ = param_6;
                    SVar19.field_0 = (ulong)&local_b0;
                    SVar19.field_8._4_4_ = 0;
                    local_70->DrawStringMultiline(SVar19, param_7, param_8, param_9, 0, (uint*)&local_a0,
                                                  in_stack_ffffffffffffff28);
                }
            }
        } else {
            this_01 = (TextureManager*)param_1->GetTextureManager();
            pSVar9 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
            puVar10 = (undefined*)this_10->LoadSpriteAtlasReference(pSVar9, false);
            if (puVar10 == DataStatus::READY) {
                this_02 = (shared_ptr*)this_10->GetDefaultValue();
                bVar4 = shared_ptr::operator_cast_to_bool(this_02);
                if (bVar4) {
                    this_03 =
                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>*)
                            shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    this_04 = (shared_ptr*)eastl::compressed_pair_imp<
                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                        0>::second(this_03);
                    bVar4 = shared_ptr::operator_cast_to_bool(this_04);
                    if (bVar4) {
                        this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                            (shared_ptr<graphics::SpriteAtlas>*)this_04);
                        this_06 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                        local_48 =
                            (PagedLayer*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                this_06);
                        iVar16 = param_6;
                        if ((param_12 != (Texture*)0) && ((char)local_40->m_spriteID == '\0')) {
                            local_38 = (TextData*)CONCAT44(local_38._4_4_, param_7);
                            IsHorizontal(this);
                            uVar1 = field_606;
                            local_58 = (FontManager*)CONCAT44(local_58._4_4_, (uint)uVar1);
                            local_40 = (SpriteData*)CONCAT44(local_40._4_4_,
                                                             (param_8 - ((uint)field_608 + (uint)uVar1)) + iVar16);
                            iVar16 = (int)(param_9 - (uint)uVar1) / 2 + (int)local_38;
                            local_38 = (TextData*)(field_392 + 48);
                            uVar6 = GetRGBA();
                            local_38->DrawSpriteSlice(local_50, (int)local_40, iVar16, (int)local_58, (int)local_58,
                                                      uVar6, param_13, param_12, 0.0);
                        }
                        if (local_48 == (PagedLayer*)0) {
                            return;
                        }
                        this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                            (shared_ptr<graphics::SpriteAtlas>*)this_04);
                        this_08 = (FastPool<audio::SoundInstance, int>*)
                                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                          (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                        iVar16 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                        lVar11 = this_07->GetSpriteRenderMapping(iVar16);
                        iVar16 = param_8;
                        uVar7 = eastl::min<graphics::GraphicsQuality>(param_9, field_604);
                        iVar16 = eastl::min<graphics::GraphicsQuality>(iVar16, uVar7);
                        iVar15 = (param_8 - iVar16) / 2 + param_6;
                        iVar17 = (param_9 - iVar16) / 2 + param_7;
                        param_6 = iVar15;
                        param_7 = iVar17;
                        uVar6 = GetRGBA();
                        this_10->DrawSpriteSlice(local_50, iVar15, iVar17, iVar16, iVar16, uVar6, (Rect*)(lVar11 + 88),
                                                 local_48, 0.0);
                        return;
                    }
                    uVar13 = logger::default_logger();
                    uVar14 = 375;
                } else {
                    uVar13 = logger::default_logger();
                    uVar14 = 367;
                }
                logger::Logger::Log(uVar13, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedLayerHeader.cpp",
                                    uVar14, "Invalid sprite atlas reference!");
            }
        }
    }

} // namespace jag::ui
