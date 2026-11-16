// libs/ui/components/PagedCarousel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "PagedCarousel.h"

namespace jag::ui {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PagedCarousel::OnActivePageChanged();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PagedCarousel::GetSwipeable() const;

    // 0x10069ff30, 336 bytes, base-object constructor, placed by class name
    // PagedCarousel::PagedCarousel(InterfaceManager*)
    void PagedCarousel::PagedCarousel(InterfaceManager* param_1) {
        new (this) PagedLayer(param_1);
        field_0 = &PTR__PagedCarousel_100f0f2f8;
        *(undefined***)field_424 = &PTR__PagedCarousel_100f0f510;
        m_layoutDirty = 0;
        field_1092 = 0.0;
        field_1096 = 1.25;
        field_1100 = 0.8;
        field_1104 = 60;
        field_1108 = 10;
        field_1112 = 0;
        field_1116 = 40;
        field_1118 = 40;
        field_1120 = 30;
        field_1122 = false;
        new (field_1128) SpriteData();
        new (field_1176) SpriteData();
        new (&field_1224) eastl::fixed_vector<eastl::pair<int, int>, 5ul, true, eastl::allocator>();
        new (field_1304, 255) Margin();
        field_1308 = 0.0;
        field_1312 = 0;
        new (&field_1316, 0, 3) ButtonElement();
        new (field_1344, 0, 3) ButtonElement();
        (*(code*)field_0[4])(this);
        SetClickthrough(false);
    }

    // 0x1006a02b0, 16 bytes, complete-object constructor, placed by class name
    // PagedCarousel::PagedCarousel(InterfaceManager*): jumps straight to the base-object constructor

    // 0x1006a02c0, 512 bytes, placed by class name
    // PagedCarousel::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void PagedCarousel::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                                  bool param_6, bool param_7) {
        ushort uVar1;
        ushort uVar2;
        byte bVar4;
        bool bVar5;
        uchar uVar6;
        int iVar7;
        int iVar8;
        undefined7 in_register_00000089;
        ulong uVar9;
        ButtonElement* pBVar10;
        Margin local_48;
        uint local_44;
        ulong local_40;
        Margin local_38[2];

        local_40 = CONCAT44(local_40._4_4_, (int)CONCAT71(in_register_00000089, param_5));
        if (IsEnabled() != '\0') {
            pBVar10._0_4_ = (ButtonElement*)((float)*(undefined8*)(param_1 + 60) - (float)param_2);
            local_38[0] = (Margin)field_1024->GetVisualMargin();
            local_48 = (Margin)(&field_1072, local_38)->GetValidOr();
            local_44 = (uint)field_1120;
            iVar7 = GetStreamCountLastMix();
            uVar1 = field_1120;
            uVar2 = field_1116;
            iVar8 = GetMinMapX();
            bVar4 = local_48.GetHeight();
            iVar8 = (int)(((uint)bVar4 + iVar8) - (uint)field_1118) / 2;
            uVar9 = local_40 & 255;
            local_40 = (ulong)param_4;
            local_38[0] = (Margin)pBVar10._0_4_->UpdateLogic(&field_1316, local_44, iVar8, field_1116, field_1118,
                                                             param_6, local_40, uVar9);
            bVar5 = local_38->empty();
            if (bVar5) {
                field_1092 = field_1092 + -1.0;
                uVar6 = WrapActivePageOffset(this, -1);
                SetActivePage(uVar6);
            }
            local_38[0] = (Margin)pBVar10._0_4_->UpdateLogic(field_1344, iVar7 - ((uint)uVar2 + (uint)uVar1), iVar8,
                                                             field_1116, field_1118, param_6, local_40, uVar9);
            bVar5 = local_38->empty();
            if (bVar5) {
                field_1092 = field_1092 + 1.0;
                uVar6 = WrapActivePageOffset(this, 1);
                SetActivePage(uVar6);
            }
            if (param_6) {
                ApplyScroll(this, (float)*(int*)(param_1 + 68) * 0.2);
            }
        }
    }

    // 0x1006a0590, 192 bytes, placed by class name
    // PagedCarousel::WrapActivePageOffset(int) const
    ulong PagedCarousel::WrapActivePageOffset(int param_1) {
        ulong uVar1;
        byte bVar3;
        byte bVar4;
        int iVar5;
        ulong uVar6;

        if (GetPageCount() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "GetPageCount() > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                709, (char*)0);
        }
        if (510 < param_1 + 255U) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "(offset >= -0xFF) && (offset <= 0xFF)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                710, (char*)0);
        }
        bVar3 = GetCurrentValue();
        bVar4 = GetPageCount();
        uVar1 = (long)(int)((uint)bVar3 + param_1) % (long)(int)(uint)bVar4;
        uVar6 = uVar1 & 4294967295;
        bVar3 = GetPageCount();
        iVar5 = (int)uVar1;
        if (iVar5 < 0) {
            uVar6 = (ulong)(iVar5 + (uint)bVar3);
        } else if ((int)(uint)bVar3 < iVar5) {
            bVar3 = GetPageCount();
            uVar6 = (ulong)(iVar5 - (uint)bVar3);
        }
        return uVar6 & 255;
    }

    // 0x1006a0650, 256 bytes, placed by class name
    // PagedCarousel::ApplyScroll(float)
    void PagedCarousel::ApplyScroll(float param_1) {
        uchar uVar1;
        float fVar2;

        fVar2 = param_1 + field_1308;
        field_1308 = fVar2;
        while (1.0 <= fVar2) {
            uVar1 = WrapActivePageOffset(this, 1);
            SetActivePage(uVar1);
            field_1092 = field_1092 + 1.0;
            fVar2 = field_1308 + -1.0;
            field_1308 = fVar2;
        }
        fVar2 = field_1308;
        while (fVar2 <= -1.0) {
            uVar1 = WrapActivePageOffset(this, -1);
            SetActivePage(uVar1);
            field_1092 = field_1092 + -1.0;
            fVar2 = field_1308 + 1.0;
            field_1308 = fVar2;
        }
    }

    // 0x1006a0750, 224 bytes, placed by class name
    // PagedCarousel::MainDraw(ComponentDependencies const&, int, int, float)
    void PagedCarousel::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        if (field_1112 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_displayMode == ButtonDisplayMode::SIDES",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                59, (char*)0);
        }
        if (GetAlpha() != '\0') {
            UpdateAnimations(this, param_4);
            DrawBackground(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
            if (field_1096 == 0.0) {
                DrawActivePage(this, *(RT7Core**)(param_1 + 16), param_2, param_3, param_4);
            } else {
                DrawPages(this, *(RT7Core**)(param_1 + 16), param_2, param_3, param_4);
            }
            DrawFadeGradients(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
            DrawButtons(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
        }
    }

    // 0x1006a0830, 176 bytes, placed by class name
    // PagedCarousel::UpdateAnimations(float)
    void PagedCarousel::UpdateAnimations(float param_1) {
        float fVar2;

        if (IsEnabled() == '\0') {
            return;
        }
        fVar2 = field_1092;
        if (0.0 <= fVar2) {
            if (fVar2 <= 0.0)
                goto LAB_1006a08a9;
            fVar2 = (float)eastl::max_alt(fVar2 - param_1 * 5.0, 0.0);
        } else {
            fVar2 = (float)eastl::min<float>(fVar2 + param_1 * 5.0, 0.0);
        }
        field_1092 = fVar2;
        (*(code*)field_0[33])(this, 1);
    LAB_1006a08a9:
        (&field_1316, param_1)->UpdateAnimations();
        (field_1344, param_1)->UpdateAnimations();
    }

    // 0x1006a08e0, 400 bytes, placed by class name
    // PagedCarousel::DrawBackground(graphics::RT7Core*, int, int)
    void PagedCarousel::DrawBackground(RT7Core* param_1, int param_2, int param_3) {
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

        this_00 = field_1024;
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
                uVar10 = 362;
            } else {
                uVar9 = logger::default_logger();
                uVar10 = 354;
            }
            logger::Logger::Log(
                uVar9, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                uVar10, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a0a70, 816 bytes, placed by class name
    // PagedCarousel::DrawActivePage(graphics::RT7Core*, int, int, float)
    /* WARNING: Removing unreachable block (ram,4301917085) */
    /* PagedCarousel::DrawActivePage(graphics::RT7Core*, int, int, float) */

    void PagedCarousel::DrawActivePage(RT7Core* param_1, int param_2, int param_3, float param_4) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        byte bVar3;
        uchar uVar4;
        int iVar5;
        uint uVar6;
        shared_ptr* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        shared_ptr* this_03;
        MapArea* this_04;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_05;
        FastPool<audio::SoundInstance, int>* this_06;
        long lVar7;
        undefined8 uVar8;
        int* piVar9;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar10;
        Texture* pTVar11;
        _func_decltype_nullptr* p_Var12;
        undefined8 uVar13;
        undefined8 in_stack_ffffffffffffff60;
        Rect* pRVar14;
        undefined4 uVar15;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_88[16];
        undefined1 local_78[24];
        Margin local_60;
        int local_5c;
        SpriteAtlas* local_58;
        Texture* local_50;
        float local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff60 >> 32);
        local_44 = param_4;
        local_40 = param_3;
        local_38 = param_2;
        local_34 = GetStreamCountLastMix();
        local_3c = GetMinMapX();
        this_00 = field_1024;
        local_78._0_4_ = this_00->GetVisualMargin();
        local_60 = (Margin)(&field_1072, (Margin*)local_78)->GetValidOr();
        p_Var12 = (_func_decltype_nullptr*)&local_38;
        local_60.ApplyTo(p_Var12, &local_40, &local_34, &local_3c);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_88, p_Var12);
        cVar1 = field_1176->IsSpriteValid();
        if (cVar1 == '\0') {
            pTVar11 = (Texture*)0;
        LAB_1006a0c06:
            local_34 = local_34 + field_1108 * -2;
            local_38 = local_38 + field_1108;
            new (local_78) graphics::ClippingState(param_1);
            param_1->SetClippingRectangle(local_38, local_40, local_34, local_3c, false);
            iVar5 = local_3c;
            if (pTVar11 != (Texture*)0) {
                local_58 = (SpriteAtlas*)CONCAT44(local_58._4_4_, local_38);
                local_50 = (Texture*)CONCAT44(local_50._4_4_, local_40);
                local_5c = local_34;
                uVar6 = GetRGBA();
                pRVar14 = (Rect*)local_88;
                this_00->DrawSpriteSlice(param_1, (int)local_58, (int)local_50, local_5c, iVar5, uVar6, pRVar14,
                                         pTVar11, 0.0);
                uVar15 = (undefined4)((ulong)pRVar14 >> 32);
            }
            bVar3 = GetCurrentValue();
            piVar9 = (int*)eastl::vector<eastl::pair<int, int>,
                                         eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<eastl::pair<int, int>,
                               eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)&field_1224,
                       (ulong)bVar3);
            local_38 = local_38 - *piVar9;
            bVar3 = GetCurrentValue();
            piVar9 = (int*)eastl::vector<eastl::pair<int, int>,
                                         eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<eastl::pair<int, int>,
                               eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)&field_1224,
                       (ulong)bVar3);
            local_34 = local_34 + *piVar9;
            uVar4 = GetCurrentValue();
            pvVar10 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                GetPageStaticChildren(uVar4);
            cVar1 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    pvVar10);
            if (cVar1 == '\0') {
                uVar8 = CONCAT44(uVar15, local_3c);
                (**(code**)(*(long*)field_1080 + 8))(local_44, field_1080, pvVar10, local_38, local_40, local_38,
                                                     local_40, local_34, uVar8);
                uVar15 = (undefined4)((ulong)uVar8 >> 32);
            }
            uVar4 = GetCurrentValue();
            pvVar10 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                GetPageDynamicChildren(uVar4);
            cVar1 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    pvVar10);
            if (cVar1 == '\0') {
                (**(code**)(*(long*)field_1080 + 8))(local_44, field_1080, pvVar10, local_38, local_40, local_38,
                                                     local_40, local_34, CONCAT44(uVar15, local_3c));
            }
            local_78->~ClippingState();
        } else {
            this_01 = (shared_ptr*)this_00->GetDefaultValue();
            bVar2 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar2) {
                this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
                this_03 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_02);
                bVar2 = shared_ptr::operator_cast_to_bool(this_03);
                if (bVar2) {
                    this_04 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_03);
                    this_05 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_04->GetOrigin();
                    local_50 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_05);
                    local_58 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_03);
                    pTVar11 = local_50;
                    this_06 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
                    iVar5 = FastPool<audio::SoundInstance, int>::capacity(this_06);
                    lVar7 = local_58->GetSpriteRenderMapping(iVar5);
                    math::Rect<float>::operator=((Rect<float>*)local_88, (Rect*)(lVar7 + 88));
                    goto LAB_1006a0c06;
                }
                uVar8 = logger::default_logger();
                uVar13 = 600;
            } else {
                uVar8 = logger::default_logger();
                uVar13 = 592;
            }
            logger::Logger::Log(
                uVar8, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                uVar13);
        }
    }

    // 0x1006a0da0, 1744 bytes, placed by class name
    // PagedCarousel::DrawPages(graphics::RT7Core*, int, int, float)
    void PagedCarousel::DrawPages(RT7Core* param_1, int param_2, int param_3, float param_4) {
        undefined1* this_00;
        RT7Core* pRVar1;
        char cVar2;
        bool bVar3;
        byte bVar4;
        byte bVar5;
        int iVar6;
        uint uVar7;
        shared_ptr* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        shared_ptr* this_03;
        MapArea* this_04;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_05;
        SpriteAtlas* this_06;
        FastPool<audio::SoundInstance, int>* this_07;
        long lVar8;
        undefined8 uVar9;
        undefined8* puVar10;
        int* piVar11;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar12;
        int iVar13;
        int iVar14;
        _func_decltype_nullptr* p_Var15;
        int iVar16;
        ulong uVar17;
        int iVar18;
        float fVar19;
        float fVar20;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_100[16];
        undefined1 local_f0[32];
        SpriteData* local_d0;
        ClippingRectangle local_c8;
        Margin local_ac;
        int local_a8;
        uint local_a4;
        PagedCarousel* local_a0;
        undefined1 local_98[16];
        float local_7c;
        Texture* local_78;
        RT7Core* local_70;
        uint local_68;
        int local_64;
        int local_60;
        Margin local_5c;
        int local_58;
        uint local_54;
        uint local_50;
        int local_4c;
        SpriteData* local_48;
        ulong local_40;
        byte local_35;
        int local_34;

        local_7c = param_4;
        local_68 = param_2;
        local_64 = param_3;
        local_60 = GetStreamCountLastMix();
        local_34 = GetMinMapX();
        this_00 = field_1024;
        local_f0._0_4_ = this_00->GetVisualMargin();
        local_ac = (Margin)(&field_1072, (Margin*)local_f0)->GetValidOr();
        p_Var15 = (_func_decltype_nullptr*)&local_68;
        local_ac.ApplyTo(p_Var15, &local_64, &local_60, &local_34);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_100, p_Var15);
        cVar2 = field_1176->IsSpriteValid();
        local_70 = param_1;
        if (cVar2 == '\0') {
            local_78 = (Texture*)0;
        } else {
            this_01 = (shared_ptr*)this_00->GetDefaultValue();
            bVar3 = shared_ptr::operator_cast_to_bool(this_01);
            if (!bVar3) {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedCarousel.cpp",
                                    433);
                return;
            }
            this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                              (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
            this_03 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_02);
            bVar3 = shared_ptr::operator_cast_to_bool(this_03);
            if (!bVar3) {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                    "components/PagedCarousel.cpp",
                                    441);
                return;
            }
            this_04 =
                (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)this_03);
            this_05 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_04->GetOrigin();
            local_78 = (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_05);
            this_06 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                (shared_ptr<graphics::SpriteAtlas>*)this_03);
            this_07 = (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
            iVar6 = FastPool<audio::SoundInstance, int>::capacity(this_07);
            lVar8 = this_06->GetSpriteRenderMapping(iVar6);
            math::Rect<float>::operator=((Rect<float>*)local_100, (Rect*)(lVar8 + 88));
        }
        pRVar1 = local_70;
        local_98._0_4_ = field_1096;
        local_d0 = (SpriteData*)this_00;
        local_48 = (SpriteData*)field_1176;
        local_40._0_4_ = (float)fmod(field_1096, 1.0);
        iVar18 = (uint)(0.0 < (float)local_40) + (int)(float)local_98._0_4_;
        iVar6 = local_60 + field_1108 * iVar18 * -2;
        local_54 = (uint)((float)iVar6 / (((float)local_98._0_4_ + (float)local_98._0_4_ + 1.0) * field_1100));
        fVar19 = (float)(int)(iVar6 - local_54) / ((float)local_98._0_4_ + (float)local_98._0_4_);
        local_98 = ZEXT416((uint)fVar19);
        local_50 = (uint)fVar19;
        new (local_f0) graphics::ClippingState(pRVar1);
        iVar6 = field_1108;
        uVar7 = 0;
        if (0.0 < (float)local_40) {
            uVar7 = local_50;
        }
        iVar13 = local_50 + iVar6;
        fVar20 = (float)iVar13;
        fVar19 = field_1092;
        iVar16 = ((int)(fVar19 * fVar20) - uVar7) + (int)((float)(int)(float)local_98._0_4_ * (float)local_40);
        local_4c = iVar18;
        if (fVar19 < 0.0) {
            local_40._0_4_ = fVar20;
            fVar19 = (float)ceil(-fVar19);
            local_4c = (int)fVar19 + iVar18;
            fVar20 = (float)local_40;
        }
        iVar18 = -iVar18;
        if (iVar6 < iVar16) {
            fVar19 = (float)ceil((float)iVar16 / fVar20);
            iVar16 = iVar16 - iVar13 * (int)fVar19;
            iVar18 = iVar18 - (int)fVar19;
        }
        local_40 = (ulong)local_68;
        local_5c = (Margin)local_48->GetVisualMargin();
        pRVar1 = local_70;
        local_70->SetClippingRectangle(local_68, local_64, local_60, local_34, false);
        puVar10 = (undefined8*)pRVar1->GetPixelBuffer();
        local_c8._0_8_ = *puVar10;
        local_c8._8_8_ = puVar10[1];
        if (iVar18 <= local_4c) {
            local_f0._24_8_ = &field_1224;
            local_40 = (ulong)(uint)((int)local_40 + iVar16);
            local_4c = local_4c + 1;
            local_a0 = this;
            do {
                local_58 = iVar18;
                local_35 = WrapActivePageOffset(this, iVar18);
                if (field_1100 == 1.0) {
                LAB_1006a11c0:
                    uVar17 = (ulong)local_54;
                    iVar6 = local_34;
                } else {
                    if (field_1092 == 0.0) {
                        if (local_58 == 0)
                            goto LAB_1006a11c0;
                    } else {
                        fVar19 = field_1092 + (float)local_58;
                        if ((fVar19 < 1.0) && (-1.0 < fVar19)) {
                            fVar19 = (float)::abs(fVar19);
                            local_48 = (SpriteData*)CONCAT44(local_48._4_4_, fVar19);
                            uVar7 = math::Lerp<int, float>((int*)&local_54, (int*)&local_50, fVar19);
                            uVar17 = (ulong)uVar7;
                            local_a8 = (int)((float)local_34 * field_1100);
                            iVar6 = math::Lerp<int, float>(&local_34, &local_a8, local_48._0_4_);
                            goto LAB_1006a11c7;
                        }
                    }
                    uVar17 = (ulong)local_50;
                    iVar6 = (int)(field_1100 * (float)local_34);
                }
            LAB_1006a11c7:
                local_98._0_4_ = iVar6;
                iVar14 = (local_34 - iVar6) / 2 + local_64;
                local_a4 = (int)local_40 + (int)uVar17 + field_1108;
                iVar6 = local_c8.field_0;
                iVar18 = local_c8.field_4;
                local_48 = (SpriteData*)uVar17;
                iVar13 = local_c8.GetWidth();
                iVar16 = local_c8.GetHeight();
                local_70->SetClippingRectangle(iVar6, iVar18, iVar13, iVar16, true);
                if (local_78 != (Texture*)0) {
                    uVar7 = local_a0->GetRGBA();
                    local_d0->DrawSpriteSlice(local_70, (int)local_40, iVar14, (int)local_48, local_98._0_4_, uVar7,
                                              local_100, local_78, 0.0);
                }
                iVar18 = (uint)local_5c.field_0 + (int)(float)local_40;
                uVar7 = (uint)local_5c >> 16;
                bVar4 = local_5c.GetWidth();
                iVar6 = (int)local_48;
                bVar5 = local_5c.GetHeight();
                local_70->SetClippingRectangle(iVar18, (uVar7 & 255) + iVar14, iVar6 - (uint)bVar4,
                                               local_98._0_4_ - (uint)bVar5, false);
                bVar4 = local_35;
                piVar11 = (int*)eastl::vector<
                    eastl::pair<int, int>, eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::pair<int, int>,
                            eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)local_f0._24_8_,
                    (ulong)local_35);
                iVar6 = *piVar11;
                iVar18 = piVar11[1];
                pvVar12 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                              local_a0->GetPageStaticChildren(bVar4);
                local_40 = (ulong)(uint)((int)local_40 - iVar6);
                iVar14 = iVar14 - iVar18;
                local_48 = (SpriteData*)(ulong)(uint)((int)local_48 + iVar6);
                local_98._0_4_ = local_98._0_4_ + iVar18;
                cVar2 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(pvVar12);
                if (cVar2 == '\0') {
                    (**(code**)(*(long*)local_a0->field_1080 + 8))(local_7c, local_a0->field_1080, pvVar12, local_40,
                                                                   iVar14, local_40 & 4294967295, iVar14, (int)local_48,
                                                                   local_98._0_4_);
                }
                this = local_a0;
                pvVar12 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                              local_a0->GetPageDynamicChildren(bVar4);
                cVar2 = eastl::vector<
                    int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(pvVar12);
                if (cVar2 == '\0') {
                    (**(code**)(*(long*)field_1080 + 8))(local_7c, field_1080, pvVar12, local_40, iVar14,
                                                         local_40 & 4294967295, iVar14, (int)local_48, local_98._0_4_);
                }
                iVar18 = local_58 + 1;
                local_40 = (ulong)local_a4;
            } while (local_4c != iVar18);
        }
        field_1312 = local_54;
        local_f0->~ClippingState();
    }

    // 0x1006a1470, 336 bytes, placed by class name
    // PagedCarousel::DrawFadeGradients(graphics::RT7Core*, int, int)
    void PagedCarousel::DrawFadeGradients(RT7Core* param_1, int param_2, int param_3) {
        GUIManager* pGVar1;
        ClippingState local_50;
        Margin local_34;
        int local_30;
        int local_2c;
        int local_28;
        int local_24;

        local_2c = param_2;
        local_28 = param_3;
        local_30 = GetStreamCountLastMix();
        local_24 = GetMinMapX();
        local_34 = (Margin)field_1024->GetVisualMargin();
        local_50.field_0._0_4_ = (&field_1072, &local_34)->GetValidOr();
        local_50.ApplyTo(&local_2c, &local_28, &local_30, &local_24);
        new (&local_50) graphics::ClippingState(param_1);
        param_1->SetClippingRectangle(local_2c, local_28, local_30, local_24, false);
        pGVar1 = (GUIManager*)param_1->GetGUIManager();
        pGVar1->AddHorizontalGradientRectangle(local_2c, local_28, field_1104, local_24, 204, 0, 1, 5, 0);
        pGVar1 = (GUIManager*)param_1->GetGUIManager();
        pGVar1->AddHorizontalGradientRectangle((local_30 + local_2c) - (uint)(ushort)field_1104, local_28, field_1104,
                                               local_24, 0, 204, 1, 5, 1);
        local_50.~ClippingState();
    }

    // 0x1006a15c0, 688 bytes, placed by class name
    // PagedCarousel::DrawButtons(graphics::RT7Core*, int, int)
    void PagedCarousel::DrawButtons(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        RT7Core* pRVar1;
        bool bVar2;
        byte bVar3;
        int iVar4;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar5;
        undefined* puVar6;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        undefined8 uVar7;
        int iVar8;
        undefined8 uVar9;
        Margin local_88[4];
        RT7Core* local_78;
        Texture* local_70;
        int local_64;
        Rect* local_60;
        undefined8 local_58;
        ButtonElement* local_50;
        Margin local_44;
        undefined8 local_40;
        uint local_34;

        this_00 = field_1128;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar5 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar6 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar5, false);
        if (puVar6 == DataStatus::READY) {
            local_78 = param_1;
            local_40._0_4_ = param_3;
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            bVar2 = shared_ptr::operator_cast_to_bool(this_02);
            if (bVar2) {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                this_04 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_03);
                bVar2 = shared_ptr::operator_cast_to_bool(this_04);
                if (bVar2) {
                    this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    local_70 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    if (local_70 == (Texture*)0) {
                        return;
                    }
                    this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_08 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    iVar4 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                    local_60 = (Rect*)this_07->GetSpriteRenderMapping(iVar4);
                    local_88[0] = (Margin)field_1024->GetVisualMargin();
                    local_44 = (Margin)(&field_1072, local_88)->GetValidOr();
                    local_34 = (uint)field_1120 + param_2;
                    iVar4 = GetStreamCountLastMix();
                    local_64 = (param_2 + iVar4) - ((uint)field_1116 + (uint)field_1120);
                    iVar8 = ((uint)local_44 >> 8 & 255) + (int)local_40;
                    iVar4 = GetMinMapX();
                    bVar3 = local_44.GetHeight();
                    local_40 = CONCAT44(local_40._4_4_, (uint)field_1118);
                    iVar8 = (int)(iVar4 - ((uint)bVar3 + (uint)field_1118)) / 2 + iVar8;
                    local_50 = (ButtonElement*)CONCAT44(local_50._4_4_, (uint)field_1116);
                    local_58 = GetRGBA();
                    bVar2 = (bool)IsEnabled();
                    pRVar1 = local_78;
                    local_60 = (Rect*)((long)local_60 + 88);
                    (&field_1316, local_78, local_34, iVar8, (ushort)local_50, (ushort)local_40, (uint)local_58, bVar2,
                     local_70, local_60, (SpriteData*)this_00, false)
                        ->Draw();
                    local_50 = (ButtonElement*)field_1344;
                    local_34 = (uint)field_1116;
                    local_58 = CONCAT44(local_58._4_4_, (uint)field_1118);
                    local_40 = GetRGBA();
                    bVar2 = (bool)IsEnabled();
                    local_88->FlipHorizontally();
                    local_50->Draw(pRVar1, local_64, iVar8, (ushort)local_34, (ushort)local_58, (uint)local_40, bVar2,
                                   local_70, local_88, this_00, false);
                    return;
                }
                uVar7 = logger::default_logger();
                uVar9 = 395;
            } else {
                uVar7 = logger::default_logger();
                uVar9 = 387;
            }
            logger::Logger::Log(
                uVar7, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                uVar9, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a1870, 32 bytes, placed by class name
    // PagedCarousel::SetupButtons(unsigned short, unsigned short, PagedCarousel::ButtonDisplayMode)
    void PagedCarousel::SetupButtons(ushort param_1, ushort param_2, uint param_4) {
        field_1116 = param_1;
        field_1118 = param_2;
        field_1112 = param_4;
    }

    // 0x1006a1890, 480 bytes, placed by class name
    // PagedCarousel::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void PagedCarousel::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* this_00;
        char cVar1;
        byte bVar2;
        undefined2 uVar4;
        ushort uVar5;
        undefined4 uVar6;
        undefined8 in_RAX;
        long lVar7;
        float fVar8;
        undefined8 local_38;

        local_38 = in_RAX;
        cVar1 = param_1->g1();
        (*(code*)field_0[4])(this, cVar1 == '\x01');
        bVar2 = param_1->g1();
        field_1016 = bVar2;
        this_00 = &field_496;
        this_00->resize((ulong)bVar2);
        bVar2 = param_1->g1();
        field_1017 = bVar2;
        field_1018 = bVar2;
        if (GetPageCount() <= bVar2) {
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("(m_currentPage < GetPageCount()) || m_pages.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "PagedCarousel.cpp",
                          100, (char*)0);
            }
        }
        bVar2 = param_1->g1();
        field_1112 = (uint)bVar2;
        uVar4 = param_1->g2();
        field_1104 = uVar4;
        cVar1 = param_1->g1s();
        field_1108 = (int)cVar1;
        uVar5 = param_1->g2();
        field_1116 = uVar5;
        uVar5 = param_1->g2();
        field_1118 = uVar5;
        uVar5 = param_1->g2();
        field_1120 = uVar5;
        fVar8 = (float)param_1->gFloat();
        field_1096 = fVar8;
        fVar8 = (float)param_1->gFloat();
        field_1100 = fVar8;
        cVar1 = param_1->g1();
        field_1122 = cVar1 == '\x01';
        new (&local_38) Margin(param_1);
        field_1072 = (byte)local_38;
        field_1073 = local_38._1_1_;
        field_1074 = local_38._2_1_;
        field_1075 = local_38._3_1_;
        new (((long)&local_38 + 4)) Margin(param_1);
        *(undefined4*)field_1304 = local_38._4_4_;
        bVar2 = param_1->g1();
        field_100 = ~bVar2;
        uVar6 = param_1->g4();
        field_96 = uVar6;
        (field_1128, param_1, param_2)->DecodeSpriteData();
        (field_1024, param_1, param_2)->DecodeSpriteData();
        (field_1176, param_1, param_2)->DecodeSpriteData();
        lVar7 = this_00->size();
        (&field_432, lVar7 * 10)->reserve();
        (*(code*)field_0[64])(this);
    }

    // 0x1006a1af0, 368 bytes, placed by class name
    // PagedCarousel::LoadStyleSheetVisuals(StyleSheet const&)
    void PagedCarousel::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_1104, 245, 1);
        StyleSheet::LoadPropertyValueIfSet<int>(param_1, &field_1108, 246, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_1116, 247, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_1118, 248, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_1120, 249, 1);
        StyleSheet::LoadPropertyValueIfSet<float>(param_1, &field_1096, 250, 1);
        StyleSheet::LoadPropertyValueIfSet<float>(param_1, &field_1100, 251, 1);
        StyleSheet::LoadPropertyValueIfSet<bool>(param_1, &field_1122, 252, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 244, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 243, 1);
        (&field_1072, 283, param_1)->LoadFromStylesheet();
        (field_1304, 289, param_1)->LoadFromStylesheet();
        (field_1128, 253, param_1)->LoadStyleSheetSpriteData();
        (field_1024, 263, param_1)->LoadStyleSheetSpriteData();
        (field_1176, 273, param_1)->LoadStyleSheetSpriteData();
    }

    // 0x1006a1d00, 1296 bytes, placed by class name
    // PagedCarousel::UpdateLayout(bool)
    undefined8 PagedCarousel::UpdateLayout(bool param_1) {
        undefined1* this_00;
        char cVar1;
        byte bVar2;
        byte bVar3;
        int iVar4;
        undefined4 uVar5;
        pair<unsigned int, unsigned int>* ppVar6;
        vector* pvVar7;
        undefined8 uVar8;
        int iVar9;
        int iVar10;
        ulong uVar11;
        undefined7 in_register_00000031;
        uint uVar12;
        uint uVar13;
        float fVar14;
        float fVar15;
        int local_5c;
        undefined8 local_58;
        Margin local_4c;
        int local_48;
        float local_44;
        int local_40;
        int local_3c;
        float local_38;
        int local_34;

        if (((int)CONCAT71(in_register_00000031, param_1) == 0) && (m_layoutDirty == '\0')) {
            uVar8 = 0;
        } else {
            iVar4 = GetStreamCountLastMix();
            local_34 = GetMinMapX();
            this_00 = &field_1224;
            (&field_496)->size();
            eastl::vector<
                eastl::pair<int, int>,
                eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::resize((ulong)this_00);
            uVar5 = field_1024->GetVisualMargin();
            local_58 = CONCAT44(local_58._4_4_, uVar5);
            local_4c = (Margin)(&field_1072, (Margin*)&local_58)->GetValidOr();
            cVar1 = field_1024->IsSpriteValid();
            if (cVar1 != '\0') {
                bVar2 = local_4c.GetWidth();
                iVar4 = iVar4 - (uint)bVar2;
                bVar2 = local_4c.GetHeight();
                local_34 = local_34 - (uint)bVar2;
            }
            cVar1 = IsSinglePageCarousel(this);
            if (cVar1 == '\0') {
                local_38 = field_1096;
                fVar14 = (float)fmod(local_38, 1.0);
                iVar9 = (uint)(0.0 < fVar14) + (int)local_38;
                iVar4 = iVar4 + field_1108 * iVar9 * -2;
                local_3c = (int)((float)iVar4 / ((local_38 + local_38 + 1.0) * field_1100));
                uVar13 = 0;
                fVar15 = (float)(iVar4 - local_3c) / (local_38 + local_38);
                local_40 = (int)fVar15;
                fVar15 = (float)(int)fVar15;
                iVar4 = local_40;
                if (fVar14 <= 0.0) {
                    iVar4 = 0;
                }
                local_48 = (uint)local_4c.field_0 + (((int)(field_1092 * fVar15) + (int)(fVar14 * fVar15)) - iVar4);
                cVar1 = GetPageCount();
                if (cVar1 != '\0') {
                    do {
                        bVar2 = WrapActivePageOffset(this, uVar13 - iVar9);
                        uVar12 = (uint)bVar2;
                        if (field_1092 == 0.0) {
                            bVar3 = GetCurrentValue();
                            if (bVar2 == bVar3) {
                                iVar4 = local_3c;
                                iVar10 = local_34;
                            } else {
                            LAB_1006a1fb0:
                                iVar10 = (int)((float)local_34 * field_1100);
                                iVar4 = local_40;
                            }
                        } else {
                            local_38 = (float)uVar12;
                            bVar3 = GetCurrentValue();
                            local_44 = (local_38 - (float)bVar3) + field_1092;
                            bVar3 = GetPageCount();
                            if (((bVar3 - 1 != uVar12) || (cVar1 = GetCurrentValue(), cVar1 != '\0')) ||
                                (field_1092 <= 0.0)) {
                                fVar14 = local_44;
                            } else {
                                fVar14 = local_44;
                                if (field_1092 <= 1.0) {
                                    bVar3 = GetCurrentValue();
                                    local_38 = (local_38 + 1.0) - ((float)bVar3 + field_1092);
                                    bVar3 = GetPageCount();
                                    fVar14 = (float)fmod(local_38, (float)bVar3 + -1.0);
                                }
                            }
                            if ((1.0 <= fVar14) || (fVar14 <= -1.0))
                                goto LAB_1006a1fb0;
                            local_38 = (float)::abs(fVar14);
                            iVar4 = math::Lerp<int, float>(&local_3c, &local_40, local_38);
                            local_58 = CONCAT44(local_58._4_4_, (int)((float)local_34 * field_1100));
                            iVar10 = math::Lerp<int, float>(&local_34, (int*)&local_58, local_38);
                        }
                        local_5c = ((uint)local_4c >> 8 & 255) + (local_34 - iVar10) / 2;
                        pvVar7 = (vector*)GetPageStaticChildren(bVar2);
                        UpdateComponentListLayout(this, pvVar7, local_48, local_5c, iVar4, iVar10);
                        pvVar7 = (vector*)GetPageDynamicChildren(bVar2);
                        UpdateComponentListLayout(this, pvVar7, local_48, local_5c, iVar4, iVar10);
                        local_58 = eastl::make_pair<int, int&>(&local_48, &local_5c);
                        ppVar6 = (pair<unsigned int, unsigned int>*)
                            eastl::vector<eastl::pair<int, int>,
                                          eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<eastl::pair<int, int>,
                                        eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                (ulong)uVar12);
                        eastl::pair<unsigned int, unsigned int>::operator=(ppVar6, (pair*)&local_58);
                        local_48 = local_48 + iVar4 + field_1108;
                        uVar13 = uVar13 + 1;
                        bVar2 = GetPageCount();
                    } while (uVar13 < bVar2);
                }
            } else {
                iVar9 = field_1108;
                local_3c = (uint)local_4c.field_0 + iVar9;
                cVar1 = GetPageCount();
                if (cVar1 != '\0') {
                    iVar4 = iVar4 + iVar9 * -2;
                    uVar11 = 0;
                    do {
                        local_40 = 0;
                        local_58 = eastl::make_pair<int, int&>(&local_3c, &local_40);
                        ppVar6 = (pair<unsigned int, unsigned int>*)
                            eastl::vector<eastl::pair<int, int>,
                                          eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<eastl::pair<int, int>,
                                        eastl::fixed_vector_allocator<8ul, 5ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar11);
                        eastl::pair<unsigned int, unsigned int>::operator=(ppVar6, (pair*)&local_58);
                        pvVar7 = (vector*)
                            eastl::vector<PagedLayer::PageData,
                                          eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<PagedLayer::PageData,
                                               eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>*)&field_496,
                                       uVar11);
                        UpdateComponentListLayout(this, pvVar7, local_3c, 0, iVar4, local_34);
                        UpdateComponentListLayout(this, pvVar7 + 32, local_3c, 0, iVar4, local_34);
                        bVar2 = GetCurrentValue();
                        UpdateComponentListForceDisabled((PagedCarousel*)this, pvVar7, uVar11 != bVar2);
                        UpdateComponentListForceDisabled((PagedCarousel*)this, pvVar7 + 32, uVar11 != bVar2);
                        uVar11 = uVar11 + 1;
                        bVar2 = GetPageCount();
                    } while (uVar11 < bVar2);
                }
            }
            m_layoutDirty = 0;
            uVar8 = 1;
        }
        return uVar8;
    }

    // 0x1006a2310, 496 bytes, placed by class name
    // PagedCarousel::UpdateComponentListLayout(eastl::vector<ComponentContainer, eastl::allocator> const&, int, int, int, int)
    void PagedCarousel::UpdateComponentListLayout(vector* param_1, int param_2, int param_3, int param_4, int param_5) {
        InterfaceManager* pIVar1;
        bool bVar2;
        char cVar3;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar4;
        shared_ptr* this_01;
        Component* pCVar5;
        undefined8 uVar6;
        OutputWidget* this_02;
        long* plVar7;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Db;
        float extraout_XMM0_Db_00;
        Margin local_48;
        Margin local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_40 = param_2;
        local_3c = param_3;
        local_38 = param_4;
        local_34 = param_5;
        local_44 = (Margin)field_1176->GetVisualMargin();
        local_48 = (Margin)(field_1304, &local_44)->GetValidOr();
        local_48.ApplyTo(&local_40, &local_3c, &local_38, &local_34);
        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)param_1->HeapBeginPtr();
        pcVar4 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)param_1->end();
        for (; this_00 != pcVar4; this_00 = this_00 + 24) {
            this_01 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_00);
            bVar2 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar2) {
                pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_01);
                uVar6 = pCVar5->CalculateSize();
                pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_01);
                pCVar5->SetCurrentWidth((int)((float)local_38 * extraout_XMM0_Da) + (int)uVar6);
                this_02 = (OutputWidget*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_01);
                this_02->SetBottomLine((int)(extraout_XMM0_Db * (float)local_34) + (int)((ulong)uVar6 >> 32));
                pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_01);
                uVar6 = pCVar5->CalculatePosition();
                pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_01);
                pCVar5->SetCurrentX((int)((float)local_38 * extraout_XMM0_Da_00) + local_40 + (int)uVar6);
                pCVar5 = (Component*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_01);
                pCVar5->SetCurrentY((int)(extraout_XMM0_Db_00 * (float)local_34) + (int)((ulong)uVar6 >> 32) +
                                    local_3c);
                plVar7 = (long*)shared_ptr<Component>::operator->((shared_ptr<Component>*)this_01);
                cVar3 = (**(code**)(*plVar7 + 104))(plVar7);
                if (cVar3 != '\0') {
                    pIVar1 = field_1080;
                    uVar6 = this_01->end();
                    (**(code**)(*(long*)pIVar1 + 16))(pIVar1, uVar6, 1);
                }
            }
        }
    }

    // 0x1006a2510, 128 bytes, placed by class name
    // PagedCarousel::UpdateComponentListForceDisabled(eastl::vector<ComponentContainer, eastl::allocator> const&, bool)
    void PagedCarousel::UpdateComponentListForceDisabled(vector* param_1, bool param_2) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long* plVar2;

        this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)param_1->HeapBeginPtr();
        pcVar1 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)param_1->end();
        for (; this_00 != pcVar1; this_00 = this_00 + 24) {
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_00);
            plVar2 = (long*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            if (plVar2 != (long*)0) {
                (**(code**)(*plVar2 + 40))(plVar2, param_2);
            }
        }
    }

    // 0x1006a2670, 144 bytes, placed by class name
    // PagedCarousel::OnActivePageChanging(unsigned char)
    void PagedCarousel::OnActivePageChanging(uchar param_1) {
        byte bVar2;
        vector* pvVar3;
        PagedCarousel* this_00;
        PagedCarousel* this_01;

        if (IsSinglePageCarousel(this) != '\0') {
            this_01 = (PagedCarousel*)&field_496;
            bVar2 = GetCurrentValue();
            this_00 = this_01;
            pvVar3 =
                (vector*)eastl::vector<PagedLayer::PageData,
                                       eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<PagedLayer::PageData,
                            eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_01,
                    (ulong)bVar2);
            UpdateComponentListForceDisabled(this_00, pvVar3, false);
            UpdateComponentListForceDisabled(this_00, pvVar3 + 32, false);
            pvVar3 =
                (vector*)eastl::vector<PagedLayer::PageData,
                                       eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<PagedLayer::PageData,
                            eastl::fixed_vector_allocator<120ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_01,
                    (ulong)param_1);
            UpdateComponentListForceDisabled(this_01, pvVar3, true);
            UpdateComponentListForceDisabled(this_01, pvVar3 + 32, true);
        }
    }

} // namespace jag::ui

// 0x1006a25b0, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
