// libs/ui/components/PagedCarousel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "PagedCarousel.h"

namespace jag::ui {
    // 0x100009e70: PagedCarousel::OnActivePageChanged() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: PagedCarousel::GetSwipeable() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10069ff30
    PagedCarousel::PagedCarousel(InterfaceManager* interfaceManager) : PagedLayer(interfaceManager) {
        *(uint8_t***)field_424 = &PTR__PagedCarousel_100f0f510;
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
        new (&field_1224) eastl::fixed_vector<eastl::pair<int, int>, 5ul>();
        new (&field_1304) Margin(255);
        field_1308 = 0.0;
        field_1312 = 0;
        new (&field_1316) ButtonElement(0, 3);
        new (field_1344) ButtonElement(0, 3);
        SetEnabled((uint8_t)this);
        SetClickthrough(false);
    }

    // 0x1006a02c0
    void PagedCarousel::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                                  bool arg5, bool arg6, bool arg7) {
        unsigned short uVar1;
        unsigned short uVar2;
        uint8_t bVar4;
        unsigned char uVar5;
        int iVar6;
        int iVar7;
        uint64_t in_register_00000089;
        bool arg7_00;
        uint8_t arg8;
        Margin local_48;
        unsigned int local_44;
        unsigned long local_40;
        Margin local_38;

        local_40 = (((uint64_t)local_40._4_4_ << 32) |
                    (uint32_t)((int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5)));
        if (IsEnabled()) {
            arg8 = (uint8_t)((float)*(uint64_t*)(componentDependencies + 60) - (float)arg2);
            local_38[0] = (Margin)field_1024->GetVisualMargin();
            local_48 = (Margin)field_1072.GetValidOr(&local_38);
            local_44 = (unsigned int)field_1120;
            iVar6 = GetStreamCountLastMix();
            uVar1 = field_1120;
            uVar2 = field_1116;
            iVar7 = GetMinMapX();
            bVar4 = local_48.GetHeight();
            iVar7 = (int)(((unsigned int)bVar4 + iVar7) - (unsigned int)field_1118) / 2;
            arg7_00 = (uint8_t)local_40;
            local_40 = (unsigned long)arg4;
            local_38[0] = (Margin)field_1316.UpdateLogic((Vector2T<float>*)(unsigned long)local_44, iVar7,
                                                         (unsigned int)field_1116, (unsigned int)field_1118,
                                                         (unsigned int)arg6, arg4, arg7_00, (bool)arg8);
            if (local_38.empty()) {
                field_1092 = field_1092 - 1.0;
                uVar5 = WrapActivePageOffset(-1);
                SetActivePage(uVar5);
            }
            local_38[0] = (Margin)field_1344->UpdateLogic(
                (Vector2T<float>*)(unsigned long)(iVar6 - ((unsigned int)uVar2 + (unsigned int)uVar1)), iVar7,
                (unsigned int)field_1116, (unsigned int)field_1118, (unsigned int)arg6, (uint8_t)local_40, arg7_00,
                (bool)arg8);
            if (local_38.empty()) {
                field_1092 = field_1092 + 1.0;
                uVar5 = WrapActivePageOffset(1);
                SetActivePage(uVar5);
            }
            if (arg6) {
                ApplyScroll((float)*(int*)(componentDependencies + 68) * 0.2);
            }
        }
    }

    // 0x1006a0590
    unsigned long PagedCarousel::WrapActivePageOffset(int arg1) const {
        if (GetPageCount() == '\0') {
            LogAssert(
                "GetPageCount() > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                709, nullptr);
        }
        if (510 < arg1 + 255U) {
            LogAssert(
                "(offset >= -0xFF) && (offset <= 0xFF)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                710, nullptr);
        }
        uint8_t bVar3 = GetCurrentValue();
        uint8_t bVar4 = GetPageCount();
        unsigned long uVar1 = (long)(int)((unsigned int)bVar3 + arg1) % (long)(int)(unsigned int)bVar4;
        unsigned long uVar6 = uVar1 & 4294967295;
        bVar3 = GetPageCount();
        int iVar5 = (int)uVar1;
        if (iVar5 < 0) {
            uVar6 = (unsigned long)(iVar5 + (unsigned int)bVar3);
        } else if ((int)(unsigned int)bVar3 < iVar5) {
            bVar3 = GetPageCount();
            uVar6 = (unsigned long)(iVar5 - (unsigned int)bVar3);
        }
        return uVar6 & 255;
    }

    // 0x1006a0650
    void PagedCarousel::ApplyScroll(float arg1) {
        unsigned char uVar1;

        float fVar2 = arg1 + field_1308;
        field_1308 = fVar2;
        while (1.0 <= fVar2) {
            uVar1 = WrapActivePageOffset(1);
            SetActivePage(uVar1);
            field_1092 = field_1092 + 1.0;
            fVar2 = field_1308 - 1.0;
            field_1308 = fVar2;
        }
        fVar2 = field_1308;
        while (fVar2 <= -1.0) {
            uVar1 = WrapActivePageOffset(-1);
            SetActivePage(uVar1);
            field_1092 = field_1092 - 1.0;
            fVar2 = field_1308 + 1.0;
            field_1308 = fVar2;
        }
    }

    // 0x1006a0750
    void PagedCarousel::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        if (field_1112 != 0) {
            LogAssert(
                "m_displayMode == ButtonDisplayMode::SIDES",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                59, nullptr);
        }
        if (GetAlpha() != '\0') {
            UpdateAnimations(arg4);
            DrawBackground(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
            if (field_1096 == 0.0) {
                DrawActivePage(*(RT7Core**)(componentDependencies + 16), arg2, arg3, arg4);
            } else {
                DrawPages(*(RT7Core**)(componentDependencies + 16), arg2, arg3, arg4);
            }
            DrawFadeGradients(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
            DrawButtons(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
        }
    }

    // 0x1006a0830
    void PagedCarousel::UpdateAnimations(float arg1) {
        if (IsEnabled() == '\0') {
            return;
        }
        float fVar2 = field_1092;
        if (0.0 <= fVar2) {
            if (fVar2 <= 0.0)
                goto LAB_1006a08a9;
            fVar2 = (float)eastl::max_alt(fVar2 - arg1 * 5.0, 0.0);
        } else {
            fVar2 = (float)eastl::min<float>(fVar2 + arg1 * 5.0, 0.0);
        }
        field_1092 = fVar2;
        UpdateLayout((uint8_t)this);
    LAB_1006a08a9:
        field_1316.UpdateAnimations(arg1);
        field_1344->UpdateAnimations(arg1);
    }

    // 0x1006a08e0
    void PagedCarousel::DrawBackground(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        int iVar2;
        int arg5;
        unsigned int arg6;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        SpriteAtlas* this_07;
        long lVar4;
        Logger* this_09;

        uint8_t* this_00 = field_1024;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                this_09 = logger::default_logger();
                iVar2 = 354;
            } else {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02)
                              .operator->();
                this_04 = (shared_ptr*)this_03->second();
                if (shared_ptr::operator_cast_to_bool(this_04)) {
                    this_05 = (MapArea*)(*this_04).operator->();
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    texture = (Texture*)this_06->end();
                    if (texture == nullptr) {
                        return;
                    }
                    this_07 = (SpriteAtlas*)(*this_04).operator->();
                    iVar2 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                    lVar4 = this_07->GetSpriteRenderMapping(iVar2);
                    iVar2 = GetStreamCountLastMix();
                    arg5 = GetMinMapX();
                    arg6 = GetRGBA();
                    this_00->DrawSpriteSlice(*rt7Core, arg2, arg3, iVar2, arg5, arg6, *((lVar4 + 88)), texture, 0.0);
                    return;
                }
                this_09 = logger::default_logger();
                iVar2 = 362;
            }
            this_09->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                iVar2, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a0a70
    void PagedCarousel::DrawActivePage(graphics::RT7Core* rt7Core, int arg2, int arg3, float arg4) {
        uint8_t bVar2;
        unsigned char uVar3;
        int iVar4;
        unsigned int arg6;
        shared_ptr* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        shared_ptr* this_03;
        MapArea* this_04;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_05;
        long lVar5;
        Logger* this_07;
        int* piVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* pvVar7;
        Texture* texture;
        uint64_t in_stack_ffffffffffffff60;
        uint64_t uVar8;
        uint8_t local_78[24];
        int local_5c;
        SpriteAtlas* local_58;
        Texture* local_50;

        uint32_t uVar9 = (uint32_t)((unsigned long)in_stack_ffffffffffffff60 >> 32);
        int local_38 = arg2;
        int local_34 = GetStreamCountLastMix();
        int local_3c = GetMinMapX();
        uint8_t* this_00 = field_1024;
        local_78._0_4_ = this_00->GetVisualMargin();
        ((Margin)field_1072.GetValidOr(local_78)).ApplyTo(local_38, arg3, local_34, local_3c);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_88;
        if (!(field_1176->IsSpriteValid())) {
            texture = nullptr;
        LAB_1006a0c06:
            local_34 = local_34 + field_1108 * -2;
            local_38 = local_38 + field_1108;
            new (local_78) graphics::ClippingState(rt7Core);
            rt7Core->SetClippingRectangle(local_38, arg3, local_34, local_3c, false);
            iVar4 = local_3c;
            if (texture != nullptr) {
                local_58 = (SpriteAtlas*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)local_38);
                local_50 = (Texture*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)arg3);
                local_5c = local_34;
                arg6 = GetRGBA();
                this_00->DrawSpriteSlice(*rt7Core, (int)local_58, (int)local_50, local_5c, iVar4, arg6, *&local_88,
                                         texture, 0.0);
                uVar9 = (uint32_t)((unsigned long)&local_88 >> 32);
            }
            bVar2 = GetCurrentValue();
            piVar6 = &field_1224[(unsigned long)bVar2];
            local_38 = local_38 - *piVar6;
            bVar2 = GetCurrentValue();
            piVar6 = &field_1224[(unsigned long)bVar2];
            local_34 = local_34 + *piVar6;
            uVar3 = GetCurrentValue();
            pvVar7 =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)GetPageStaticChildren(uVar3);
            if (!(pvVar7->empty())) {
                uVar8 = (((uint64_t)uVar9 << 32) | (uint32_t)local_3c);
                (**(void (**)(...))(*(long*)field_1080 + 8))(arg4, field_1080, pvVar7, local_38, arg3, local_38, arg3,
                                                             local_34, uVar8);
                uVar9 = (uint32_t)((unsigned long)uVar8 >> 32);
            }
            uVar3 = GetCurrentValue();
            pvVar7 =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)GetPageDynamicChildren(uVar3);
            if (!(pvVar7->empty())) {
                (**(void (**)(...))(*(long*)field_1080 + 8))(arg4, field_1080, pvVar7, local_38, arg3, local_38, arg3,
                                                             local_34, (((uint64_t)uVar9 << 32) | (uint32_t)local_3c));
            }
        } else {
            this_01 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_01))) {
                this_07 = logger::default_logger();
                iVar4 = 592;
            } else {
                this_02 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_01)
                              .operator->();
                this_03 = (shared_ptr*)this_02->second();
                if (shared_ptr::operator_cast_to_bool(this_03)) {
                    this_04 = (MapArea*)(*this_03).operator->();
                    this_05 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_04->GetOrigin();
                    local_50 = (Texture*)this_05->end();
                    local_58 = (SpriteAtlas*)(*this_03).operator->();
                    texture = local_50;
                    iVar4 = ((FastPool<audio::SoundInstance, int>*)(*this_01).operator->())->capacity();
                    lVar5 = local_58->GetSpriteRenderMapping(iVar4);
                    local_88 = (*((lVar5 + 88)));
                    goto LAB_1006a0c06;
                }
                this_07 = logger::default_logger();
                iVar4 = 600;
            }
            this_07->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                iVar4, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a0da0
    void PagedCarousel::DrawPages(graphics::RT7Core* rt7Core, int arg2, int arg3, float arg4) {
        uint8_t bVar4;
        uint8_t bVar5;
        int iVar6;
        int arg4_00;
        shared_ptr* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        shared_ptr* this_03;
        MapArea* this_04;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_05;
        SpriteAtlas* this_06;
        long lVar8;
        Logger* pLVar9;
        int* piVar11;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* pvVar12;
        int iVar13;
        unsigned long uVar15;
        uint8_t local_f0[32];
        ClippingRectangle local_c8;
        int local_a8;
        unsigned int local_a4;
        uint8_t local_98[16];
        Texture* local_78;
        int local_58;
        unsigned long local_40;
        uint8_t local_35;

        int local_60 = GetStreamCountLastMix();
        int local_34 = GetMinMapX();
        uint8_t* this_00 = field_1024;
        local_f0._0_4_ = this_00->GetVisualMargin();
        ((Margin)field_1072.GetValidOr(local_f0)).ApplyTo((unsigned int)arg2, arg3, local_60, local_34);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_100;
        if (!(field_1176->IsSpriteValid())) {
            local_78 = nullptr;
        } else {
            this_01 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_01))) {
                pLVar9 = logger::default_logger();
                pLVar9->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "PagedCarousel.cpp",
                            433, "Invalid sprite atlas reference!");
                return;
            }
            this_02 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_01).operator->();
            this_03 = (shared_ptr*)this_02->second();
            if (!(shared_ptr::operator_cast_to_bool(this_03))) {
                pLVar9 = logger::default_logger();
                pLVar9->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                            "PagedCarousel.cpp",
                            441, "Invalid sprite atlas reference!");
                return;
            }
            this_04 = (MapArea*)(*this_03).operator->();
            this_05 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_04->GetOrigin();
            local_78 = (Texture*)this_05->end();
            this_06 = (SpriteAtlas*)(*this_03).operator->();
            iVar6 = ((FastPool<audio::SoundInstance, int>*)(*this_01).operator->())->capacity();
            lVar8 = this_06->GetSpriteRenderMapping(iVar6);
            local_100 = (*((lVar8 + 88)));
        }
        RT7Core* pRVar2 = rt7Core;
        local_98._0_4_ = field_1096;
        SpriteData* local_d0 = (SpriteData*)this_00;
        SpriteData* local_48 = (SpriteData*)field_1176;
        local_40._0_4_ = (float)fmod(field_1096, 1.0);
        int iVar16 = (unsigned int)(0.0 < (float)local_40) + (int)(float)local_98._0_4_;
        iVar6 = local_60 + field_1108 * iVar16 * -2;
        unsigned int local_54 =
            (unsigned int)((float)iVar6 / (((float)local_98._0_4_ + (float)local_98._0_4_ + 1.0) * field_1100));
        float fVar17 = (float)(int)(iVar6 - local_54) / ((float)local_98._0_4_ + (float)local_98._0_4_);
        local_98 = (unsigned __int128)((unsigned int)fVar17);
        unsigned int local_50 = (unsigned int)fVar17;
        new (local_f0) graphics::ClippingState(pRVar2);
        HeaderAlignment HVar1 = field_1108;
        unsigned int uVar7 = 0;
        if (0.0 < (float)local_40) {
            uVar7 = local_50;
        }
        iVar6 = local_50 + HVar1;
        float fVar18 = (float)iVar6;
        fVar17 = field_1092;
        int iVar14 = ((int)(fVar17 * fVar18) - uVar7) + (int)((float)(int)(float)local_98._0_4_ * (float)local_40);
        int local_4c = iVar16;
        if (fVar17 < 0.0) {
            local_40._0_4_ = fVar18;
            fVar17 = (float)ceil(-fVar17);
            local_4c = (int)fVar17 + iVar16;
            fVar18 = (float)local_40;
        }
        iVar16 = -iVar16;
        if ((int)HVar1 < iVar14) {
            fVar17 = (float)ceil((float)iVar14 / fVar18);
            iVar14 = iVar14 - iVar6 * (int)fVar17;
            iVar16 = iVar16 - (int)fVar17;
        }
        local_40 = (unsigned long)(unsigned int)arg2;
        Margin local_5c = (Margin)local_48->GetVisualMargin();
        pRVar2 = rt7Core;
        rt7Core->SetClippingRectangle((unsigned int)arg2, arg3, local_60, local_34, false);
        auto puVar10 = pRVar2->GetPixelBuffer();
        local_c8._0_8_ = *puVar10;
        local_c8._8_8_ = puVar10[1];
        if (iVar16 <= local_4c) {
            local_f0._24_8_ = &field_1224;
            local_40 = (unsigned long)(unsigned int)((int)local_40 + iVar14);
            local_4c = local_4c + 1;
            do {
                local_58 = iVar16;
                local_35 = WrapActivePageOffset(iVar16);
                if (field_1100 == 1.0) {
                LAB_1006a11c0:
                    uVar15 = (unsigned long)local_54;
                    iVar6 = local_34;
                } else {
                    if (field_1092 == 0.0) {
                        if (local_58 == 0)
                            goto LAB_1006a11c0;
                    } else {
                        fVar17 = field_1092 + (float)local_58;
                        if ((fVar17 < 1.0) && (-1.0 < fVar17)) {
                            fVar17 = (float)::abs(fVar17);
                            local_48 = (SpriteData*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)fVar17);
                            uVar7 = math::Lerp<int, float>(local_54, local_50, fVar17);
                            uVar15 = (unsigned long)uVar7;
                            local_a8 = (int)((float)local_34 * field_1100);
                            iVar6 = math::Lerp<int, float>(local_34, local_a8, local_48._0_4_);
                            goto LAB_1006a11c7;
                        }
                    }
                    uVar15 = (unsigned long)local_50;
                    iVar6 = (int)(field_1100 * (float)local_34);
                }
            LAB_1006a11c7:
                local_98._0_4_ = iVar6;
                iVar13 = (local_34 - iVar6) / 2 + arg3;
                local_a4 = (int)local_40 + (int)uVar15 + field_1108;
                iVar6 = local_c8.field_0;
                iVar16 = local_c8.field_4;
                local_48 = (SpriteData*)uVar15;
                iVar14 = local_c8.GetWidth();
                arg4_00 = local_c8.GetHeight();
                rt7Core->SetClippingRectangle(iVar6, iVar16, iVar14, arg4_00, true);
                if (local_78 != nullptr) {
                    uVar7 = GetRGBA();
                    local_d0->DrawSpriteSlice(*rt7Core, (int)local_40, iVar13, (int)local_48, local_98._0_4_, uVar7,
                                              local_100, local_78, 0.0);
                }
                iVar16 = (unsigned int)local_5c.field_0 + (int)(float)local_40;
                uVar7 = (unsigned int)local_5c >> 16;
                bVar4 = local_5c.GetWidth();
                iVar6 = (int)local_48;
                bVar5 = local_5c.GetHeight();
                rt7Core->SetClippingRectangle(iVar16, (uVar7 & 255) + iVar13, iVar6 - (unsigned int)bVar4,
                                              local_98._0_4_ - (unsigned int)bVar5, false);
                bVar4 = local_35;
                piVar11 = (int*)(*local_f0._24_8_)[(unsigned long)local_35];
                iVar6 = *piVar11;
                iVar16 = piVar11[1];
                pvVar12 =
                    (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)GetPageStaticChildren(bVar4);
                local_40 = (unsigned long)(unsigned int)((int)local_40 - iVar6);
                iVar13 = iVar13 - iVar16;
                local_48 = (SpriteData*)(unsigned long)(unsigned int)((int)local_48 + iVar6);
                local_98._0_4_ = local_98._0_4_ + iVar16;
                if (!(pvVar12->empty())) {
                    (**(void (**)(...))(*(long*)field_1080 + 8))(arg4, field_1080, pvVar12, local_40, iVar13,
                                                                 local_40 & 4294967295, iVar13, (int)local_48,
                                                                 local_98._0_4_);
                }
                this = this;
                pvVar12 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)GetPageDynamicChildren(
                    bVar4);
                if (!(pvVar12->empty())) {
                    (**(void (**)(...))(*(long*)field_1080 + 8))(arg4, field_1080, pvVar12, local_40, iVar13,
                                                                 local_40 & 4294967295, iVar13, (int)local_48,
                                                                 local_98._0_4_);
                }
                iVar16 = local_58 + 1;
                local_40 = (unsigned long)local_a4;
            } while (local_4c != iVar16);
        }
        field_1312 = local_54;
    }

    // 0x1006a1470
    void PagedCarousel::DrawFadeGradients(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        int local_30 = GetStreamCountLastMix();
        int local_24 = GetMinMapX();
        Margin local_34 = (Margin)field_1024->GetVisualMargin();
        local_50.field_0._0_4_ = field_1072.GetValidOr(&local_34);
        local_50.ApplyTo(arg2, arg3, local_30, local_24);
        ClippingState local_50(rt7Core);
        rt7Core->SetClippingRectangle(arg2, arg3, local_30, local_24, false);
        auto pGVar1 = rt7Core->GetGUIManager();
        pGVar1->AddHorizontalGradientRectangle(arg2, arg3, (unsigned int)field_1104, local_24, 204, 0, 1, 5, false);
        pGVar1 = rt7Core->GetGUIManager();
        pGVar1->AddHorizontalGradientRectangle((local_30 + arg2) - (unsigned int)field_1104, arg3,
                                               (unsigned int)field_1104, local_24, 0, 204, 1, 5, true);
    }

    // 0x1006a15c0
    void PagedCarousel::DrawButtons(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        uint8_t bVar2;
        bool bVar3;
        int iVar4;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        Logger* this_09;
        int iVar6;
        ReturnValue local_88;
        Texture* local_70;
        int local_64;
        Rect<float>* local_60;
        uint64_t local_58;
        ButtonElement* local_50;
        Margin local_44;
        uint64_t local_40;
        unsigned int local_34;

        uint8_t* this_00 = field_1128;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            local_40._0_4_ = arg3;
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                this_09 = logger::default_logger();
                iVar4 = 387;
            } else {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02)
                              .operator->();
                this_04 = (shared_ptr*)this_03->second();
                if (shared_ptr::operator_cast_to_bool(this_04)) {
                    this_05 = (MapArea*)(*this_04).operator->();
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    local_70 = (Texture*)this_06->end();
                    if (local_70 == nullptr) {
                        return;
                    }
                    this_07 = (SpriteAtlas*)(*this_04).operator->();
                    iVar4 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                    local_60 = (Rect<float>*)this_07->GetSpriteRenderMapping(iVar4);
                    local_88[0]._0_4_ = field_1024->GetVisualMargin();
                    local_44 = (Margin)field_1072.GetValidOr(&local_88);
                    local_34 = (unsigned int)field_1120 + arg2;
                    iVar4 = GetStreamCountLastMix();
                    local_64 = (arg2 + iVar4) - ((unsigned int)field_1116 + (unsigned int)field_1120);
                    iVar6 = ((unsigned int)local_44 >> 8 & 255) + (int)local_40;
                    iVar4 = GetMinMapX();
                    bVar2 = local_44.GetHeight();
                    local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((unsigned int)field_1118));
                    iVar6 = (int)(iVar4 - ((unsigned int)bVar2 + (unsigned int)field_1118)) / 2 + iVar6;
                    local_50 =
                        (ButtonElement*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)((unsigned int)field_1116));
                    local_58 = GetRGBA();
                    bVar3 = (bool)IsEnabled();
                    local_60 = (Rect<float>*)((long)local_60 + 88);
                    field_1316.Draw(*rt7Core, local_34, iVar6, (unsigned short)local_50, (unsigned short)local_40,
                                    (unsigned int)local_58, bVar3, local_70, *local_60, *this_00, false);
                    local_50 = (ButtonElement*)field_1344;
                    local_34 = (unsigned int)field_1116;
                    local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)((unsigned int)field_1118));
                    local_40 = GetRGBA();
                    bVar3 = (bool)IsEnabled();
                    local_88 = local_60->FlipHorizontally();
                    local_50->Draw(*rt7Core, local_64, iVar6, (unsigned short)local_34, (unsigned short)local_58,
                                   (unsigned int)local_40, bVar3, local_70, local_88, *this_00, false);
                    return;
                }
                this_09 = logger::default_logger();
                iVar4 = 395;
            }
            this_09->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/PagedCarousel.cpp",
                iVar4, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a1870
    void PagedCarousel::SetupButtons(unsigned short arg1, unsigned short arg2,
                                     PagedCarousel::ButtonDisplayMode buttonDisplayMode) {
        field_1116 = arg1;
        field_1118 = arg2;
        field_1112 = buttonDisplayMode;
    }

    // 0x1006a1890
    void PagedCarousel::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        char cVar3;
        uint64_t in_RAX;

        uint64_t local_38 = in_RAX;
        arg1.g1();
        SetEnabled((uint8_t)this);
        uint8_t bVar1 = arg1.g1();
        field_1016 = bVar1;
        uint8_t* this_00 = &field_496;
        this_00->resize((unsigned long)bVar1);
        bVar1 = arg1.g1();
        field_1017 = bVar1;
        field_1018 = bVar1;
        if (GetPageCount() <= bVar1) {
            cVar3 = this_00->empty();
            if (!cVar3) {
                LogAssert("(m_currentPage < GetPageCount()) || m_pages.empty()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "PagedCarousel.cpp",
                          100, nullptr);
            }
        }
        bVar1 = arg1.g1();
        field_1112 = (unsigned int)bVar1;
        unsigned short uVar4 = arg1.g2();
        field_1104 = uVar4;
        cVar3 = arg1.g1s();
        field_1108 = (int)cVar3;
        uVar4 = arg1.g2();
        field_1116 = uVar4;
        uVar4 = arg1.g2();
        field_1118 = uVar4;
        uVar4 = arg1.g2();
        field_1120 = uVar4;
        float fVar7 = (float)arg1.gFloat();
        field_1096 = fVar7;
        fVar7 = (float)arg1.gFloat();
        field_1100 = fVar7;
        cVar3 = arg1.g1();
        field_1122 = cVar3 == '\x01';
        new (&local_38) Margin(arg1);
        field_1072 = (uint8_t)local_38;
        field_1073 = local_38._1_1_;
        field_1074 = local_38._2_1_;
        field_1075 = local_38._3_1_;
        new ((Margin*)((long)&local_38 + 4)) Margin(arg1);
        *(uint32_t*)&field_1304 = local_38._4_4_;
        bVar1 = arg1.g1();
        field_100 = ~bVar1;
        field_96 = arg1.g4();
        field_1128->DecodeSpriteData(arg1, arg2);
        field_1024->DecodeSpriteData(arg1, arg2);
        field_1176->DecodeSpriteData(arg1, arg2);
        field_432.reserve(this_00->size() * 10);
        OnPageCountChanged();
    }

    // 0x1006a1af0
    void PagedCarousel::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_1104, 245, true);
        styleSheet.LoadPropertyValueIfSet<int>(field_1108, 246, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_1116, 247, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_1118, 248, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_1120, 249, true);
        styleSheet.LoadPropertyValueIfSet<float>(field_1096, 250, true);
        styleSheet.LoadPropertyValueIfSet<float>(field_1100, 251, true);
        styleSheet.LoadPropertyValueIfSet<bool>(field_1122, 252, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 244, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 243, true);
        field_1072.LoadFromStylesheet(283, styleSheet);
        field_1304.LoadFromStylesheet(289, styleSheet);
        field_1128->LoadStyleSheetSpriteData(253, styleSheet);
        field_1024->LoadStyleSheetSpriteData(263, styleSheet);
        field_1176->LoadStyleSheetSpriteData(273, styleSheet);
    }

    // 0x1006a1d00
    uint64_t PagedCarousel::UpdateLayout(bool arg1) {
        uint8_t* this_00;
        HeaderAlignment HVar1;
        bool cVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        int iVar5;
        uint32_t uVar6;
        unsigned long uVar7;
        pair<unsigned int, unsigned int>* ppVar8;
        vector<ComponentContainer>* pvVar9;
        uint64_t uVar10;
        int iVar11;
        int arg5;
        uint64_t in_register_00000031;
        unsigned int uVar12;
        unsigned int uVar13;
        float fVar14;
        float fVar15;
        int local_5c;
        uint64_t local_58;
        Margin local_4c;
        int local_48;
        float local_44;
        int local_40;
        int local_3c;
        float local_38;
        int local_34;

        if (((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) && (m_layoutDirty == '\0')) {
            uVar10 = 0;
        } else {
            iVar5 = GetStreamCountLastMix();
            local_34 = GetMinMapX();
            this_00 = &field_1224;
            uVar7 = field_496.size();
            this_00->resize(uVar7);
            uVar6 = field_1024->GetVisualMargin();
            local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar6);
            local_4c = (Margin)field_1072.GetValidOr(&local_58);
            cVar2 = field_1024->IsSpriteValid();
            if (cVar2) {
                bVar3 = local_4c.GetWidth();
                iVar5 = iVar5 - (unsigned int)bVar3;
                bVar3 = local_4c.GetHeight();
                local_34 = local_34 - (unsigned int)bVar3;
            }
            cVar2 = IsSinglePageCarousel();
            if (!cVar2) {
                local_38 = field_1096;
                fVar14 = (float)fmod(local_38, 1.0);
                iVar11 = (unsigned int)(0.0 < fVar14) + (int)local_38;
                iVar5 = iVar5 + field_1108 * iVar11 * -2;
                local_3c = (int)((float)iVar5 / ((local_38 + local_38 + 1.0) * field_1100));
                uVar13 = 0;
                fVar15 = (float)(iVar5 - local_3c) / (local_38 + local_38);
                local_40 = (int)fVar15;
                fVar15 = (float)(int)fVar15;
                iVar5 = local_40;
                if (fVar14 <= 0.0) {
                    iVar5 = 0;
                }
                local_48 =
                    (unsigned int)local_4c.field_0 + (((int)(field_1092 * fVar15) + (int)(fVar14 * fVar15)) - iVar5);
                cVar2 = GetPageCount();
                if (cVar2) {
                    do {
                        bVar3 = WrapActivePageOffset(uVar13 - iVar11);
                        uVar12 = (unsigned int)bVar3;
                        if (field_1092 == 0.0) {
                            bVar4 = GetCurrentValue();
                            if (bVar3 == bVar4) {
                                iVar5 = local_3c;
                                arg5 = local_34;
                            } else {
                            LAB_1006a1fb0:
                                arg5 = (int)((float)local_34 * field_1100);
                                iVar5 = local_40;
                            }
                        } else {
                            local_38 = (float)uVar12;
                            bVar4 = GetCurrentValue();
                            local_44 = (local_38 - (float)bVar4) + field_1092;
                            bVar4 = GetPageCount();
                            if (((bVar4 - 1 != uVar12) || (cVar2 = GetCurrentValue(), cVar2)) || (field_1092 <= 0.0)) {
                                fVar14 = local_44;
                            } else {
                                fVar14 = local_44;
                                if (field_1092 <= 1.0) {
                                    bVar4 = GetCurrentValue();
                                    local_38 = (local_38 + 1.0) - ((float)bVar4 + field_1092);
                                    bVar4 = GetPageCount();
                                    fVar14 = (float)fmod(local_38, (float)bVar4 - 1.0);
                                }
                            }
                            if ((1.0 <= fVar14) || (fVar14 <= -1.0))
                                goto LAB_1006a1fb0;
                            local_38 = (float)::abs(fVar14);
                            iVar5 = math::Lerp<int, float>(local_3c, local_40, local_38);
                            local_58 =
                                (((uint64_t)local_58._4_4_ << 32) | (uint32_t)((int)((float)local_34 * field_1100)));
                            arg5 = math::Lerp<int, float>(local_34, local_58, local_38);
                        }
                        local_5c = ((unsigned int)local_4c >> 8 & 255) + (local_34 - arg5) / 2;
                        pvVar9 = (vector<ComponentContainer>*)GetPageStaticChildren(bVar3);
                        UpdateComponentListLayout(*pvVar9, local_48, local_5c, iVar5, arg5);
                        pvVar9 = (vector<ComponentContainer>*)GetPageDynamicChildren(bVar3);
                        UpdateComponentListLayout(*pvVar9, local_48, local_5c, iVar5, arg5);
                        local_58 = eastl::make_pair<int, int&>(local_48, local_5c);
                        ppVar8 = (pair<unsigned int, unsigned int>*)(*this_00)[(unsigned long)uVar12];
                        *ppVar8 = local_58;
                        local_48 = local_48 + iVar5 + field_1108;
                        uVar13 = uVar13 + 1;
                        bVar3 = GetPageCount();
                    } while (uVar13 < bVar3);
                }
            } else {
                HVar1 = field_1108;
                local_3c = local_4c.field_0 + HVar1;
                cVar2 = GetPageCount();
                if (cVar2) {
                    iVar5 = iVar5 + HVar1 * -2;
                    uVar7 = 0;
                    do {
                        local_40 = 0;
                        local_58 = eastl::make_pair<int, int&>(local_3c, local_40);
                        ppVar8 = (pair<unsigned int, unsigned int>*)(*this_00)[uVar7];
                        *ppVar8 = local_58;
                        pvVar9 = &field_496[uVar7];
                        UpdateComponentListLayout(*pvVar9, local_3c, 0, iVar5, local_34);
                        UpdateComponentListLayout(*(pvVar9 + 32), local_3c, 0, iVar5, local_34);
                        bVar3 = GetCurrentValue();
                        UpdateComponentListForceDisabled(*pvVar9, uVar7 != bVar3);
                        UpdateComponentListForceDisabled(*(pvVar9 + 32), uVar7 != bVar3);
                        uVar7 = uVar7 + 1;
                        bVar3 = GetPageCount();
                    } while (uVar7 < bVar3);
                }
            }
            m_layoutDirty = 0;
            uVar10 = 1;
        }
        return uVar10;
    }

    // 0x1006a2310
    void PagedCarousel::UpdateComponentListLayout(const eastl::vector<ComponentContainer>& componentContainers,
                                                  int arg2, int arg3, int arg4, int arg5) {
        InterfaceManager* pIVar1;
        shared_ptr* this_01;
        Component* pCVar4;
        uint64_t uVar5;
        long* plVar6;
        float extraout_XMM0_Da;
        float extraout_XMM0_Da_00;
        float extraout_XMM0_Db;
        float extraout_XMM0_Db_00;

        Margin local_44 = (Margin)field_1176->GetVisualMargin();
        ((Margin)field_1304.GetValidOr(&local_44)).ApplyTo(arg2, arg3, arg4, arg5);
        auto this_00 = componentContainers.HeapBeginPtr();
        auto pcVar3 = componentContainers.end();
        for (; this_00 != pcVar3; this_00 = this_00 + 24) {
            this_01 = (shared_ptr*)this_00->second();
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                pCVar4 = (Component*)(*this_01).operator->();
                uVar5 = pCVar4->CalculateSize();
                pCVar4 = (Component*)(*this_01).operator->();
                pCVar4->SetCurrentWidth((int)((float)arg4 * extraout_XMM0_Da) + (int)uVar5);
                ((OutputWidget*)(*this_01).operator->())
                    ->SetBottomLine((int)(extraout_XMM0_Db * (float)arg5) + (int)((unsigned long)uVar5 >> 32));
                pCVar4 = (Component*)(*this_01).operator->();
                uVar5 = pCVar4->CalculatePosition();
                pCVar4 = (Component*)(*this_01).operator->();
                pCVar4->SetCurrentX((int)((float)arg4 * extraout_XMM0_Da_00) + arg2 + (int)uVar5);
                pCVar4 = (Component*)(*this_01).operator->();
                pCVar4->SetCurrentY((int)(extraout_XMM0_Db_00 * (float)arg5) + (int)((unsigned long)uVar5 >> 32) +
                                    arg3);
                plVar6 = (long*)(*this_01).operator->();
                if ((**(void (**)(...))(*plVar6 + 104))(plVar6)) {
                    pIVar1 = field_1080;
                    uVar5 = this_01->end();
                    (**(void (**)(...))(*(long*)pIVar1 + 16))(pIVar1, uVar5, 1);
                }
            }
        }
    }

    // 0x1006a2510
    void PagedCarousel::UpdateComponentListForceDisabled(const eastl::vector<ComponentContainer>& componentContainers,
                                                         bool arg2) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long* plVar2;

        auto this_00 = componentContainers.HeapBeginPtr();
        auto pcVar1 = componentContainers.end();
        for (; this_00 != pcVar1; this_00 = this_00 + 24) {
            this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->second();
            plVar2 = (long*)this_01->end();
            if (plVar2 != nullptr) {
                (**(void (**)(...))(*plVar2 + 40))(plVar2, arg2);
            }
        }
    }

    // 0x1006a2670
    void PagedCarousel::OnActivePageChanging(unsigned char arg1) {
        uint8_t bVar2;
        vector<ComponentContainer>* pvVar3;
        PagedCarousel* this_00;
        PagedCarousel* this_01;

        if (IsSinglePageCarousel() != '\0') {
            this_01 = (PagedCarousel*)&field_496;
            bVar2 = GetCurrentValue();
            this_00 = this_01;
            pvVar3 = (vector<ComponentContainer>*)(*this_01)[(unsigned long)bVar2];
            UpdateComponentListForceDisabled(this_00, pvVar3, false);
            UpdateComponentListForceDisabled(this_00, pvVar3 + 32, false);
            pvVar3 = (vector<ComponentContainer>*)(*this_01)[(unsigned long)arg1];
            UpdateComponentListForceDisabled(this_01, pvVar3, true);
            UpdateComponentListForceDisabled(this_01, pvVar3 + 32, true);
        }
    }

} // namespace jag::ui

// 0x1006a25b0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
