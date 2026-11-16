// libs/ui/components/RadialProgressOverlay.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "RadialProgressOverlay.h"

namespace jag::ui {
    // 0x100269b60: RadialProgressOverlay::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned::GetID() const

    // 0x1006a5fb0
    RadialProgressOverlay::RadialProgressOverlay() : Component(), MakeSharedPool<RadialProgressOverlay, 32>() {
        *(uint64_t*)((long)&field_444 + 1) = 0;
        field_440 = 0.0;
        field_444 = 0.0;
        new (field_453) eastl::bitset();
        new (&field_456) eastl::vector<int>();
        SetClickthrough(true);
        field_456.resize(16);
    }

    // 0x1006a60e0
    void RadialProgressOverlay::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3,
                                         float arg4) {
        uint8_t* puVar1;
        int iVar3;
        int iVar4;
        unsigned int uVar5;
        BlendMode blendMode;
        int iVar6;
        SpriteAtlasManager* spriteAtlasManager;
        shared_ptr* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_02;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        MapArea* this_03;
        SpriteAtlas* this_04;
        long lVar8;
        float* pfVar9;
        Texture* pTVar10;
        float fVar11;
        ImVec4 local_c8;
        uint8_t local_b0[16];
        float local_8c;
        float local_88;
        float local_84;
        GUIManager* local_80;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_78;
        float local_6c;
        float local_68;
        int local_64;
        int local_60;
        float local_5c;
        mach_header* local_58;
        uint64_t uStack_50;
        uint64_t local_48;

        AdvanceTimer(arg4);
        if (GetAlpha()) {
            puVar1 = &field_392;
            if (puVar1->IsSpriteValid()) {
                spriteAtlasManager =
                    ((*(RT7Core**)(componentDependencies + 16))->GetTextureManager())->GetSpriteAtlasManager();
                if ((uint8_t*)puVar1->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
                    local_64 = arg3;
                    local_60 = arg2;
                    this_01 = (shared_ptr*)puVar1->GetDefaultValue();
                    if (!(shared_ptr::operator_cast_to_bool(this_01))) {
                        new ((local_b0 + 16)) shared_ptr();
                    } else {
                        this_02 =
                            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_01)
                                .operator->();
                        groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)this_02->second();
                        new ((local_b0 + 16)) shared_ptr(groundDecor);
                    }
                    if (!(((local_b0 + 16))->operator_cast_to_bool())) {
                        (logger::default_logger())
                            ->Log(false, 2,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "RadialProgressOverlay.cpp",
                                  36, "Invalid sprite atlas reference!");
                    } else {
                        this_03 = (MapArea*)(*((local_b0 + 16))).operator->();
                        local_78 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->GetOrigin();
                        local_80 = (*(RT7Core**)(componentDependencies + 16))->GetGUIManager();
                        this_04 = (SpriteAtlas*)(*((local_b0 + 16))).operator->();
                        iVar3 = ((FastPool<audio::SoundInstance, int>*)(*this_01).operator->())->capacity();
                        lVar8 = this_04->GetSpriteRenderMapping(iVar3);
                        new (local_b0) math::Float4(*((lVar8 + 88)));
                        local_5c = (float)GetProgressPercentage();
                        iVar3 = GetStreamCountLastMix();
                        iVar4 = GetMinMapX();
                        puVar1 = field_453;
                        if (puVar1->test(2)) {
                            local_60 = local_60 + iVar3;
                            iVar3 = -iVar3;
                            fVar11 = (float)local_b0->MaxU();
                            local_b0->SetX(fVar11);
                            pfVar9 = (float*)local_b0->second();
                            local_b0->SetWidth(-*pfVar9);
                        }
                        if (puVar1->test(3)) {
                            local_64 = local_64 + iVar4;
                            iVar4 = -iVar4;
                            fVar11 = (float)local_b0->MaxV();
                            local_b0->SetY(fVar11);
                            pfVar9 = (float*)local_b0->qw();
                            local_b0->SetVerticalFov(-*pfVar9);
                        }
                        if (!(puVar1->test(1))) {
                            fVar11 = local_5c;
                        } else {
                            fVar11 = 1.0 - local_5c;
                        }
                        if (fVar11 == 0.0) {
                            uVar5 = GetRGBA();
                            pTVar10 = (Texture*)local_78->end();
                            local_80->AddTexturedRectangle(local_60, local_64, iVar3, iVar4, uVar5, *local_b0, pTVar10,
                                                           1);
                        } else if (fVar11 != 1.0) {
                            local_84 = fVar11;
                            if ((MainDraw(ComponentDependencies const&, int, int, float)::TRIANGLE_INDICES == '\0') &&
                                (iVar6 = ___cxa_guard_acquire(
                                     &MainDraw(ComponentDependencies const&, int, int, float)::TRIANGLE_INDICES),
                                 iVar6 != 0)) {
                                local_48 = 8589934595;
                                local_58 = &__mh_execute_header;
                                uStack_50 = 4294967298;
                                new ((vector<int>*)&MainDraw(ComponentDependencies const&, int, int,
                                                             float)::TRIANGLE_INDICES)
                                    eastl::vector<int>(&local_58, *6);
                                ___cxa_atexit(
                                    PTR__vector_100ee6d78,
                                    &MainDraw(ComponentDependencies const&, int, int, float)::TRIANGLE_INDICES,
                                    4294967296);
                                ___cxa_guard_release(
                                    &MainDraw(ComponentDependencies const&, int, int, float)::TRIANGLE_INDICES);
                            }
                            local_5c = (float)local_b0->CentreX();
                            local_6c = (float)local_b0->CentreY();
                            pfVar9 = (float*)local_b0->second();
                            local_68 = *pfVar9 * 0.5;
                            pfVar9 = (float*)local_b0->qw();
                            new (&local_58) ImVec4(local_5c, local_6c, local_68, *pfVar9 * 0.5);
                            local_8c = (float)(iVar3 / 2);
                            local_88 = (float)(iVar4 / 2);
                            local_60 = local_60 + (int)local_8c;
                            local_64 = local_64 + (int)local_88;
                            iVar3 = UpdateActiveSegmentGeometry(local_60, local_64, (int)local_8c, (int)local_88,
                                                                local_58, local_84);
                            uVar5 = GetRGBA();
                            blendMode = local_78->end();
                            graphics::GUIManager::AddTexturedTriangleList(
                                *local_80, field_456, 69384296, (Texture*)(unsigned long)uVar5, blendMode, true);
                            if (iVar3 < 6) {
                                lVar8 = (long)iVar3 - 2;
                                do {
                                    pfVar9 = (float*)local_58.SSOBeginPtr();
                                    local_5c = *pfVar9;
                                    pfVar9 = (float*)local_58.y();
                                    local_6c = *pfVar9;
                                    pfVar9 = (float*)local_58.second();
                                    iVar3 = *(int*)(&reinterpret_cast<const uint64_t*>(
                                                        &DYNAMIC_COMPONENT_LIST_MIN_INITIAL_SIZE)[6] +
                                                    lVar8 * 4);
                                    local_68 = (float)iVar3 * *pfVar9;
                                    pfVar9 = (float*)local_58.qw();
                                    iVar4 = *(int*)(&reinterpret_cast<const uint64_t*>(
                                                        &DYNAMIC_COMPONENT_LIST_MIN_INITIAL_SIZE)[10] +
                                                    lVar8 * 4);
                                    local_c8 = ImVec4(local_5c, local_6c, local_68, (float)iVar4 * *pfVar9);
                                    iVar3 = iVar3 * (int)local_8c;
                                    iVar4 = iVar4 * (int)local_88;
                                    uVar5 = GetRGBA();
                                    pTVar10 = (Texture*)local_78->end();
                                    this = this;
                                    local_80->AddTexturedRectangle(local_60, local_64, iVar3, iVar4, uVar5, local_c8,
                                                                   pTVar10, 1);
                                    lVar8 = lVar8 + 2;
                                } while (lVar8 < 4);
                            }
                        }
                    }
                    ((local_b0 + 16))->~shared_ptr();
                }
            }
        }
    }

    // 0x1006a6690
    void RadialProgressOverlay::AdvanceTimer(float arg1) {
        float fVar1;
        float fVar3;

        if (field_453->test(0) != '\0') {
            fVar1 = field_448;
            if (field_440 < fVar1) {
                fVar3 = field_440 + arg1;
                field_440 = fVar3;
                field_452 = 1;
                if (fVar1 <= fVar3) {
                    field_440 = fVar1;
                }
            }
        }
    }

    // 0x1006a67f0
    int RadialProgressOverlay::UpdateActiveSegmentGeometry(int arg1, int arg2, int arg3, int arg4,
                                                           const math::Rect<float>& rect, float arg6) {
        uint32_t uVar2;
        uint32_t* puVar5;
        int iVar7;

        float fVar8 = (float)fmod(arg6, 0.125);
        int iVar3 = (int)((arg6 - fVar8) * 8.0);
        unsigned long uVar6 = (unsigned long)iVar3;
        float fVar10 = *(float*)(&DAT_100d433d4 + uVar6 * 4);
        float fVar13 =
            (fVar10 -
             *(float*)(&UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)::xMul +
                       uVar6 * 4)) *
                fVar8 * 8.0 +
            *(float*)(&UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)::xMul +
                      uVar6 * 4);
        float fVar1 = *(float*)(&DAT_100d43404 + uVar6 * 4);
        float fVar14 =
            (fVar1 - *(float*)(&UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)::yMul +
                               uVar6 * 4)) *
                fVar8 * 8.0 +
            *(float*)(&UpdateActiveSegmentGeometry(int, int, int, int, math::Rect<float> const&, float)::yMul +
                      uVar6 * 4);
        uint8_t* this_00 = &field_456;
        int* piVar4 = (int*)(*this_00)[0];
        *piVar4 = (int)(fVar13 * (float)arg3) + arg1;
        piVar4 = (int*)(*this_00)[1];
        *piVar4 = (int)(fVar14 * (float)arg4) + arg2;
        fVar8 = (float)rect.GetOverbright();
        float fVar9 = (float)rect.GetBrightpassThreshold();
        piVar4 = (int*)(*this_00)[2];
        *piVar4 = (int)((fVar9 * fVar13 + fVar8) * 1048576.0);
        fVar8 = (float)rect.GetAlpha();
        fVar9 = (float)rect.GetOutlineRadiusAdjustment();
        piVar4 = (int*)(*this_00)[3];
        *piVar4 = (int)((fVar9 * fVar14 + fVar8) * 1048576.0);
        piVar4 = (int*)(*this_00)[4];
        *piVar4 = (int)(fVar10 * (float)arg3) + arg1;
        piVar4 = (int*)(*this_00)[5];
        *piVar4 = (int)(fVar1 * (float)arg4) + arg2;
        fVar8 = (float)rect.GetOverbright();
        fVar9 = (float)rect.GetBrightpassThreshold();
        piVar4 = (int*)(*this_00)[6];
        *piVar4 = (int)((fVar9 * fVar10 + fVar8) * 1048576.0);
        fVar10 = (float)rect.GetAlpha();
        fVar8 = (float)rect.GetOutlineRadiusAdjustment();
        piVar4 = (int*)(*this_00)[7];
        *piVar4 = (int)((fVar8 * fVar1 + fVar10) * 1048576.0);
        piVar4 = (int*)(*this_00)[8];
        *piVar4 = arg1;
        piVar4 = (int*)(*this_00)[9];
        *piVar4 = arg2;
        fVar10 = (float)rect.GetOverbright();
        piVar4 = (int*)(*this_00)[10];
        *piVar4 = (int)(fVar10 * 1048576.0);
        fVar10 = (float)rect.GetAlpha();
        piVar4 = (int*)(*this_00)[11];
        *piVar4 = (int)(fVar10 * 1048576.0);
        if ((uVar6 & 1) == 0) {
            fVar10 = *(float*)(&DAT_100d433d8 + uVar6 * 4);
            piVar4 = (int*)(*this_00)[12];
            *piVar4 = (int)((float)arg3 * fVar10) + arg1;
            fVar1 = *(float*)(&DAT_100d43408 + uVar6 * 4);
            piVar4 = (int*)(*this_00)[13];
            *piVar4 = (int)((float)arg4 * fVar1) + arg2;
            fVar8 = (float)rect.GetOverbright();
            fVar9 = (float)rect.GetBrightpassThreshold();
            piVar4 = (int*)(*this_00)[14];
            *piVar4 = (int)((fVar9 * fVar10 + fVar8) * 1048576.0);
            fVar10 = (float)rect.GetAlpha();
            fVar8 = (float)rect.GetOutlineRadiusAdjustment();
            iVar7 = (int)((fVar8 * fVar1 + fVar10) * 1048576.0);
        } else {
            puVar5 = (uint32_t*)(*this_00)[8];
            uVar2 = *puVar5;
            puVar5 = (uint32_t*)(*this_00)[12];
            *puVar5 = uVar2;
            puVar5 = (uint32_t*)(*this_00)[9];
            uVar2 = *puVar5;
            puVar5 = (uint32_t*)(*this_00)[13];
            *puVar5 = uVar2;
            puVar5 = (uint32_t*)(*this_00)[10];
            uVar2 = *puVar5;
            puVar5 = (uint32_t*)(*this_00)[14];
            *puVar5 = uVar2;
            piVar4 = (int*)(*this_00)[11];
            iVar7 = *piVar4;
        }
        piVar4 = (int*)(*this_00)[15];
        *piVar4 = iVar7;
        return iVar3;
    }

    // 0x1006a6c00
    void RadialProgressOverlay::Set(float arg1, float arg2, unsigned char arg3) {
        bitset<4ul, unsigned char> local_18;

        if (arg1 <= arg2) {
            field_444 = arg1;
            field_448 = arg2;
            field_440 = arg1;
            local_18 = eastl::bitset((unsigned int)arg3);
            field_453[0] = local_18[0];
            field_452 = 1;
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                      "RadialProgressOverlay.cpp",
                      119, "invalid params - initial value exceeds end (%.1f vs %.1f)", (double)arg1, (double)arg2);
        }
    }

    // 0x1006a6cb0
    unsigned long RadialProgressOverlay::SetCurrentValue(float arg1) {
        Logger* this_00;
        uint64_t unaff_R14;
        unsigned long uVar1;

        if ((arg1 < field_444) || (field_448 <= arg1 && arg1 != field_448)) {
            this_00 = logger::default_logger();
            uVar1 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                         "RadialProgressOverlay.cpp",
                         137,
                         "attempting to set the current value to a value outside of the allowed range ([%.1f, %.1f])",
                         (double)field_444, (double)field_448);
        } else {
            uVar1 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (arg1 != field_440) {
                field_440 = arg1;
                field_452 = 1;
            }
        }
        return uVar1 & 4294967295;
    }

    // 0x1006a6d40
    void RadialProgressOverlay::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint8_t bVar1 = arg1.g1();
        field_100 = ~bVar1;
        field_96 = arg1.g4();
    }

    // 0x1006a6d70
    void RadialProgressOverlay::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        uint64_t uVar2;
        optional<bool> local_40;
        optional<bool> local_38;
        optional<bool> local_30;
        optional<bool> local_28;

        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 572, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 571, true);
        StyleSheet::GetPropertyValue<bool>(&local_40, (StyleEntryID)styleSheet, true);
        if (local_40.IsNull()) {
            uVar2 = local_40.value();
            *field_453 = eastl::bitset<4ul, unsigned char>::set(0, *(bool*)uVar2);
        }
        StyleSheet::GetPropertyValue<bool>(&local_38, (StyleEntryID)styleSheet, true);
        if (local_38.IsNull()) {
            uVar2 = local_38.value();
            *field_453 = eastl::bitset<4ul, unsigned char>::set(1, *(bool*)uVar2);
        }
        StyleSheet::GetPropertyValue<bool>(&local_30, (StyleEntryID)styleSheet, true);
        if (local_30.IsNull()) {
            uVar2 = local_30.value();
            *field_453 = eastl::bitset<4ul, unsigned char>::set(2, *(bool*)uVar2);
        }
        StyleSheet::GetPropertyValue<bool>(&local_28, (StyleEntryID)styleSheet, true);
        if (local_28.IsNull()) {
            uVar2 = local_28.value();
            *field_453 = eastl::bitset<4ul, unsigned char>::set(3, *(bool*)uVar2);
        }
        field_392.LoadStyleSheetSpriteData(577, styleSheet);
    }

} // namespace jag::ui
