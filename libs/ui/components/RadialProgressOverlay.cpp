// libs/ui/components/RadialProgressOverlay.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "RadialProgressOverlay.h"

namespace jag::ui {
    // 0x100269b60: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned::GetID() const, which has identical code
    RadialProgressOverlay::GetType() const;

    // 0x1006a5fb0, 192 bytes, base-object constructor, placed by class name
    // RadialProgressOverlay::RadialProgressOverlay()
    void RadialProgressOverlay::RadialProgressOverlay() {
        new (this) Component();
        new (this) MakeSharedPool<RadialProgressOverlay, 32>();
        field_0 = &PTR__RadialProgressOverlay_100f0f8d8;
        new (&field_392) SpriteData();
        *(undefined8*)((long)&field_444 + 1) = 0;
        field_440 = 0.0;
        field_444 = 0.0;
        new (field_453) eastl::bitset<4ul, unsigned char>();
        new (&field_456) eastl::vector<int, eastl::allocator>();
        SetClickthrough(true);
        eastl::vector<int, eastl::allocator>::resize((ulong)&field_456);
    }

    // 0x1006a60d0, 16 bytes, complete-object constructor, placed by class name
    // RadialProgressOverlay::RadialProgressOverlay(): jumps straight to the base-object constructor

    // 0x1006a60e0, 1456 bytes, placed by class name
    // RadialProgressOverlay::MainDraw(ComponentDependencies const&, int, int, float)
    void RadialProgressOverlay::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        int iVar7;
        TextureManager* this_00;
        SpriteAtlasManager* pSVar8;
        undefined* puVar9;
        shared_ptr* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        shared_ptr* psVar10;
        MapArea* this_03;
        SpriteAtlas* this_04;
        FastPool<audio::SoundInstance, int>* this_05;
        long lVar11;
        float* pfVar12;
        undefined8 uVar13;
        vector* pvVar14;
        type* ptVar15;
        float fVar16;
        undefined8 in_stack_ffffffffffffff18;
        uint uVar17;
        ImVec4 local_c8[16];
        RadialProgressOverlay* local_b8;
        undefined1 local_b0[16];
        shared_ptr local_a0;
        float local_8c;
        float local_88;
        float local_84;
        GUIManager* local_80;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_78;
        float local_6c;
        float local_68;
        int local_64;
        uint local_60;
        float local_5c;
        mach_header* local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        long local_38;

        uVar17 = (uint)((ulong)in_stack_ffffffffffffff18 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        AdvanceTimer(this, param_4);
        cVar2 = GetAlpha();
        if (cVar2 != '\0') {
            puVar1 = &field_392;
            cVar2 = puVar1->IsSpriteValid();
            if (cVar2 != '\0') {
                this_00 = (TextureManager*)(*(RT7Core**)(param_1 + 16))->GetTextureManager();
                pSVar8 = (SpriteAtlasManager*)this_00->GetSpriteAtlasManager();
                puVar9 = (undefined*)puVar1->LoadSpriteAtlasReference(pSVar8, false);
                if (puVar9 == DataStatus::READY) {
                    local_64 = param_3;
                    local_60 = param_2;
                    this_01 = (shared_ptr*)puVar1->GetDefaultValue();
                    bVar3 = shared_ptr::operator_cast_to_bool(this_01);
                    if (bVar3) {
                        this_02 = (compressed_pair_imp<
                                   std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator, 0>*)
                                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                          (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
                        psVar10 = (shared_ptr*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(this_02);
                        new ((local_b0 + 16)) shared_ptr<oldscape::dash3d::Decor>(psVar10);
                    } else {
                        new ((local_b0 + 16)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    }
                    bVar3 = ((local_b0 + 16))->operator_cast_to_bool();
                    if (bVar3) {
                        this_03 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                            (shared_ptr<graphics::SpriteAtlas>*)(local_b0 + 16));
                        local_78 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetOrigin();
                        local_80 = (GUIManager*)(*(RT7Core**)(param_1 + 16))->GetGUIManager();
                        this_04 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                            (shared_ptr<graphics::SpriteAtlas>*)(local_b0 + 16));
                        this_05 = (FastPool<audio::SoundInstance, int>*)
                                      shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                          (shared_ptr<graphics::SpriteAtlasReference>*)this_01);
                        iVar4 = FastPool<audio::SoundInstance, int>::capacity(this_05);
                        lVar11 = this_04->GetSpriteRenderMapping(iVar4);
                        new (local_b0) math::Float4((Vector4T*)(lVar11 + 88));
                        local_5c = (float)GetProgressPercentage(this);
                        iVar4 = GetStreamCountLastMix();
                        iVar5 = GetMinMapX();
                        puVar1 = field_453;
                        cVar2 = puVar1->test(2);
                        if (cVar2 != '\0') {
                            local_60 = local_60 + iVar4;
                            iVar4 = -iVar4;
                            fVar16 = (float)local_b0->MaxU();
                            local_b0->SetX(fVar16);
                            pfVar12 = (float*)local_b0->second();
                            local_b0->SetWidth(-*pfVar12);
                        }
                        cVar2 = puVar1->test(3);
                        if (cVar2 != '\0') {
                            local_64 = local_64 + iVar5;
                            iVar5 = -iVar5;
                            fVar16 = (float)local_b0->MaxV();
                            local_b0->SetY(fVar16);
                            pfVar12 = (float*)local_b0->qw();
                            local_b0->SetVerticalFov(-*pfVar12);
                        }
                        cVar2 = puVar1->test(1);
                        if (cVar2 == '\0') {
                            fVar16 = local_5c;
                        } else {
                            fVar16 = 1.0 - local_5c;
                        }
                        if (fVar16 == 0.0) {
                            uVar6 = GetRGBA();
                            uVar13 =
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_78);
                            local_80->AddTexturedRectangle(local_60, local_64, iVar4, iVar5, uVar6, local_b0, uVar13,
                                                           1);
                        } else if (fVar16 != 1.0) {
                            local_84 = fVar16;
                            if ((MainDraw(ComponentDependencies_const&, int, int, float)::TRIANGLE_INDICES == '\0') &&
                                (iVar7 = ___cxa_guard_acquire(
                                     &MainDraw(ComponentDependencies_const&, int, int, float)::TRIANGLE_INDICES),
                                 iVar7 != 0)) {
                                local_48 = 8589934595;
                                local_58 = &__mh_execute_header;
                                uStack_50 = 4294967298;
                                new (local_c8) eastl::allocator("EASTL vector");
                                new (&MainDraw(ComponentDependencies_const&, int, int, float)::TRIANGLE_INDICES)
                                    eastl::vector<int, eastl::allocator>(&local_58, 6, local_c8);
                                ___cxa_atexit(
                                    PTR__vector_100ee6d78,
                                    &MainDraw(ComponentDependencies_const&, int, int, float)::TRIANGLE_INDICES,
                                    4294967296);
                                ___cxa_guard_release(
                                    &MainDraw(ComponentDependencies_const&, int, int, float)::TRIANGLE_INDICES);
                            }
                            local_5c = (float)local_b0->CentreX();
                            local_6c = (float)local_b0->CentreY();
                            pfVar12 = (float*)local_b0->second();
                            local_68 = *pfVar12 * 0.5;
                            pfVar12 = (float*)local_b0->qw();
                            new (&local_58) ImVec4(local_5c, local_6c, local_68, *pfVar12 * 0.5);
                            local_8c = (float)(iVar4 / 2);
                            local_88 = (float)(iVar5 / 2);
                            local_60 = local_60 + (int)local_8c;
                            local_64 = local_64 + (int)local_88;
                            iVar4 = UpdateActiveSegmentGeometry(this, local_60, local_64, (int)local_8c, (int)local_88,
                                                                (Rect*)&local_58, local_84);
                            ptVar15 = (type*)&field_456;
                            uVar6 = GetRGBA();
                            uVar13 =
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_78);
                            local_80->AddTexturedTriangleList(
                                ptVar15, &MainDraw(ComponentDependencies_const&, int, int, float)::TRIANGLE_INDICES,
                                uVar6, uVar13, 1, (ulong)uVar17 << 32);
                            if (iVar4 < 6) {
                                lVar11 = (long)iVar4 + -2;
                                local_b8 = this;
                                do {
                                    pvVar14 = local_58.SSOBeginPtr(ptVar15);
                                    local_5c = *(float*)pvVar14;
                                    pfVar12 = (float*)local_58.y();
                                    local_6c = *pfVar12;
                                    pfVar12 = (float*)local_58.second();
                                    iVar4 = *(int*)(&DAT_100d433a0 + lVar11 * 4);
                                    local_68 = (float)iVar4 * *pfVar12;
                                    pfVar12 = (float*)local_58.qw();
                                    iVar5 = *(int*)(&DAT_100d433c0 + lVar11 * 4);
                                    ImVec4::ImVec4(local_c8, local_5c, local_6c, local_68, (float)iVar5 * *pfVar12);
                                    iVar4 = iVar4 * (int)local_8c;
                                    iVar5 = iVar5 * (int)local_88;
                                    uVar6 = GetRGBA();
                                    uVar13 =
                                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                            local_78);
                                    this = local_b8;
                                    ptVar15 = (type*)(ulong)local_60;
                                    local_80->AddTexturedRectangle(ptVar15, local_64, iVar4, iVar5, uVar6, local_c8,
                                                                   uVar13, 1);
                                    lVar11 = lVar11 + 2;
                                } while (lVar11 < 4);
                            }
                        }
                    } else {
                        uVar13 = logger::default_logger();
                        logger::Logger::Log(uVar13, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                            "components/RadialProgressOverlay.cpp",
                                            36, "Invalid sprite atlas reference!");
                    }
                    ((local_b0 + 16))->~shared_ptr();
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006a6690, 96 bytes, placed by class name
    // RadialProgressOverlay::AdvanceTimer(float)
    void RadialProgressOverlay::AdvanceTimer(float param_1) {
        float fVar1;
        char cVar2;
        float fVar3;

        cVar2 = (field_453, 0)->test();
        if (cVar2 != '\0') {
            fVar1 = field_448;
            if (field_440 < fVar1) {
                fVar3 = field_440 + param_1;
                field_440 = fVar3;
                field_452 = 1;
                if (fVar1 <= fVar3) {
                    field_440 = fVar1;
                }
            }
        }
    }

    // 0x1006a67f0, 1040 bytes, placed by class name
    // RadialProgressOverlay::UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)
    int RadialProgressOverlay::UpdateActiveSegmentGeometry(int param_1, int param_2, int param_3, int param_4,
                                                           Rect* param_5, float param_6) {
        float fVar1;
        undefined4 uVar2;
        int iVar3;
        int* piVar4;
        undefined4* puVar5;
        ulong uVar6;
        undefined1* this_00;
        int iVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar13;
        float fVar14;

        fVar8 = (float)fmod(param_6, 0.125);
        iVar3 = (int)((param_6 - fVar8) * 8.0);
        uVar6 = (ulong)iVar3;
        fVar10 = *(float*)(&DAT_100d433d4 + uVar6 * 4);
        fVar13 = (fVar10 -
                  *(float*)(&UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)::xMul +
                            uVar6 * 4)) *
                     fVar8 * 8.0 +
                 *(float*)(&UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)::xMul +
                           uVar6 * 4);
        fVar1 = *(float*)(&DAT_100d43404 + uVar6 * 4);
        fVar14 =
            (fVar1 - *(float*)(&UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)::yMul +
                               uVar6 * 4)) *
                fVar8 * 8.0 +
            *(float*)(&UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)::yMul +
                      uVar6 * 4);
        this_00 = &field_456;
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 0);
        *piVar4 = (int)(fVar13 * (float)param_3) + param_1;
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 1);
        *piVar4 = (int)(fVar14 * (float)param_4) + param_2;
        fVar8 = (float)param_5->GetOverbright();
        fVar9 = (float)param_5->GetBrightpassThreshold();
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 2);
        *piVar4 = (int)((fVar9 * fVar13 + fVar8) * 1048576.0);
        fVar8 = (float)param_5->GetAlpha();
        fVar9 = (float)param_5->GetOutlineRadiusAdjustment();
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 3);
        *piVar4 = (int)((fVar9 * fVar14 + fVar8) * 1048576.0);
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 4);
        *piVar4 = (int)(fVar10 * (float)param_3) + param_1;
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 5);
        *piVar4 = (int)(fVar1 * (float)param_4) + param_2;
        fVar8 = (float)param_5->GetOverbright();
        fVar9 = (float)param_5->GetBrightpassThreshold();
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 6);
        *piVar4 = (int)((fVar9 * fVar10 + fVar8) * 1048576.0);
        fVar10 = (float)param_5->GetAlpha();
        fVar8 = (float)param_5->GetOutlineRadiusAdjustment();
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 7);
        *piVar4 = (int)((fVar8 * fVar1 + fVar10) * 1048576.0);
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 8);
        *piVar4 = param_1;
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 9);
        *piVar4 = param_2;
        fVar10 = (float)param_5->GetOverbright();
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 10);
        *piVar4 = (int)(fVar10 * 1048576.0);
        fVar10 = (float)param_5->GetAlpha();
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 11);
        *piVar4 = (int)(fVar10 * 1048576.0);
        if ((uVar6 & 1) == 0) {
            fVar10 = *(float*)(&DAT_100d433d8 + uVar6 * 4);
            piVar4 =
                (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 12);
            *piVar4 = (int)((float)param_3 * fVar10) + param_1;
            fVar1 = *(float*)(&DAT_100d43408 + uVar6 * 4);
            piVar4 =
                (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 13);
            *piVar4 = (int)((float)param_4 * fVar1) + param_2;
            fVar8 = (float)param_5->GetOverbright();
            fVar9 = (float)param_5->GetBrightpassThreshold();
            piVar4 =
                (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 14);
            *piVar4 = (int)((fVar9 * fVar10 + fVar8) * 1048576.0);
            fVar10 = (float)param_5->GetAlpha();
            fVar8 = (float)param_5->GetOutlineRadiusAdjustment();
            iVar7 = (int)((fVar8 * fVar1 + fVar10) * 1048576.0);
        } else {
            puVar5 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)this_00, 8);
            uVar2 = *puVar5;
            puVar5 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)this_00, 12);
            *puVar5 = uVar2;
            puVar5 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)this_00, 9);
            uVar2 = *puVar5;
            puVar5 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)this_00, 13);
            *puVar5 = uVar2;
            puVar5 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)this_00, 10);
            uVar2 = *puVar5;
            puVar5 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)this_00, 14);
            *puVar5 = uVar2;
            piVar4 =
                (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 11);
            iVar7 = *piVar4;
        }
        piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00, 15);
        *piVar4 = iVar7;
        return iVar3;
    }

    // 0x1006a6c00, 160 bytes, placed by class name
    // RadialProgressOverlay::Set(float, float, unsigned char)
    void RadialProgressOverlay::Set(float param_1, float param_2, uchar param_3) {
        undefined8 uVar1;
        bitset<4ul, unsigned char> local_18[8];

        if (param_1 <= param_2) {
            field_444 = param_1;
            field_448 = param_2;
            field_440 = param_1;
            eastl::bitset<4ul, unsigned char>::bitset(local_18, (uint)param_3);
            field_453[0] = local_18[0];
            field_452 = 1;
        } else {
            uVar1 = logger::default_logger();
            logger::Logger::Log((double)param_1, (double)param_2, uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                "RadialProgressOverlay.cpp",
                                119, "invalid params - initial value exceeds end (%.1f vs %.1f)");
        }
    }

    // 0x1006a6cb0, 144 bytes, placed by class name
    // RadialProgressOverlay::SetCurrentValue(float)
    ulong RadialProgressOverlay::SetCurrentValue(float param_1) {
        undefined8 uVar1;
        undefined8 unaff_R14;
        ulong uVar2;

        if ((param_1 < field_444) || (field_448 <= param_1 && param_1 != field_448)) {
            uVar1 = logger::default_logger();
            uVar2 = 0;
            logger::Logger::Log(
                (double)field_444, (double)field_448, uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                "RadialProgressOverlay.cpp",
                137, "attempting to set the current value to a value outside of the allowed range ([%.1f, %.1f])");
        } else {
            uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (param_1 != field_440) {
                field_440 = param_1;
                field_452 = 1;
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x1006a6d40, 48 bytes, placed by class name
    // RadialProgressOverlay::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void RadialProgressOverlay::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        byte bVar1;
        undefined4 uVar2;

        bVar1 = param_1->g1();
        field_100 = ~bVar1;
        uVar2 = param_1->g4();
        field_96 = uVar2;
    }

    // 0x1006a6d70, 384 bytes, placed by class name
    // RadialProgressOverlay::LoadStyleSheetVisuals(StyleSheet const&)
    void RadialProgressOverlay::LoadStyleSheetVisuals(StyleSheet* param_1) {
        undefined8 uVar1;
        bool bVar2;
        undefined1 local_40[8];
        undefined1 local_38[8];
        undefined1 local_30[8];
        undefined1 local_28[8];

        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 572, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 571, 1);
        StyleSheet::GetPropertyValue<bool>((StyleSheet*)local_40, param_1, 573, 1);
        bVar2 = local_40->IsNull();
        if (bVar2) {
            uVar1 = eastl::optional<bool>::value();
            (field_453, 0, *(bool*)uVar1)->set();
        }
        StyleSheet::GetPropertyValue<bool>((StyleSheet*)local_38, param_1, 574, 1);
        bVar2 = local_38->IsNull();
        if (bVar2) {
            uVar1 = eastl::optional<bool>::value();
            (field_453, 1, *(bool*)uVar1)->set();
        }
        StyleSheet::GetPropertyValue<bool>((StyleSheet*)local_30, param_1, 575, 1);
        bVar2 = local_30->IsNull();
        if (bVar2) {
            uVar1 = eastl::optional<bool>::value();
            (field_453, 2, *(bool*)uVar1)->set();
        }
        StyleSheet::GetPropertyValue<bool>((StyleSheet*)local_28, param_1, 576, 1);
        bVar2 = local_28->IsNull();
        if (bVar2) {
            uVar1 = eastl::optional<bool>::value();
            (field_453, 3, *(bool*)uVar1)->set();
        }
        (&field_392, 577, param_1)->LoadStyleSheetSpriteData();
    }

} // namespace jag::ui
