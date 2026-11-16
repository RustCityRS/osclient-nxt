// libs/ui/components/Slider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Slider.h"

namespace jag::ui {
    // 0x10017a580: Slider::GetCurrentValue() const has the same machine code as http::HTTPRequest::GetErrorCode() const

    // 0x100269ba0: Slider::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetClanName::GetID() const

    // 0x1006a90f0
    Slider::Slider() : Component(), MakeSharedPool<Slider, 32>() {
        m_pValueRepresentation = &PTR__Slider_100f0fc68;
        new (&field_400) SpriteData();
        new (&field_448) SpriteData();
        new (&field_496) SpriteData();
        new (field_544) TextData();
        field_608 = 0;
        field_612 = 0;
        m_currentValue = 0;
        field_620 = 0;
        field_624 = 0;
        field_628 = 10;
        field_630 = 15;
        field_632 = 20;
        field_634 = 8;
        field_636 = 30;
        field_638 = 20;
        field_640 = 0;
        m_hasRecentValueChange[0] = 0;
        new (&field_648)
            eastl::fixed_vector<eastl::basic_string<char, BucketAllocatorEASTL>, 5ul, true, BucketAllocatorEASTL>();
        *(uint64_t*)((long)&field_812 + 2) = 0;
        field_808 = 0.0;
        field_812 = 0.0;
        SetEnabled((uint8_t)this);
    }

    // 0x1006a92f0
    void Slider::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4, bool arg5,
                           bool arg6, bool arg7) {
        if (IsEnabled() != '\0') {
            UpdateThumbLogic((Vector2T<float>*)this, arg6, arg4,
                             componentDependencies[57] != (ComponentDependencies)0 || arg5);
            if (arg6) {
                HandleMouseWheelScroll((float)*(int*)(componentDependencies + 68) * 0.2);
            }
        }
    }

    // 0x1006a9390
    void Slider::UpdateThumbLogic(math::Vector2T<float> vector2, bool arg2, bool arg3, bool arg4) {
        Vector2T<float> VVar6;
        uint64_t in_register_00000009;
        uint64_t in_register_00000011;
        uint64_t in_register_00000031;
        bool bVar7;
        float in_XMM0_Da;
        float fVar8;
        float in_XMM0_Db;
        float fVar9;
        float fVar10;
        float local_64;
        float local_4c;

        uint32_t local_58 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4);
        uint32_t local_50 = (uint32_t)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3);
        float local_48 = in_XMM0_Da;
        float fStack_44 = in_XMM0_Db;
        int iVar4 = vector2->GetMinMapX();
        unsigned short uVar1 = *(unsigned short*)(vector2 + 630);
        unsigned short uVar2 = *(unsigned short*)(vector2 + 632);
        int iVar5 = vector2->GetStreamCountLastMix();
        uint32_t uVar3 = local_50;
        iVar5 = iVar5 + (unsigned int)*(unsigned short*)(vector2 + 628) * -2;
        int local_54 = (int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2);
        if (local_54 == 0) {
            vector2[820] = (Vector2T<float>)0;
            fVar8 = local_48;
            in_XMM0_Db = fStack_44;
        } else {
            iVar4 = (int)(iVar4 - ((unsigned int)uVar1 + (unsigned int)uVar2)) / 2;
            fVar8 = (float)*(unsigned short*)(vector2 + 628);
            fVar9 = local_48 - fVar8;
            VVar6 = (Vector2T<float>)0;
            fVar10 = (float)iVar5;
            if ((0.0 <= fVar9) && (fVar9 <= fVar10)) {
                if ((float)iVar4 <= in_XMM0_Db) {
                    VVar6 = (Vector2T<float>)(in_XMM0_Db <=
                                              (float)(int)((unsigned int)*(unsigned short*)(vector2 + 632) + iVar4));
                } else {
                    VVar6 = (Vector2T<float>)0;
                }
            }
            fVar8 = in_XMM0_Da - fVar8;
            vector2[820] = VVar6;
            if (VVar6 == (Vector2T<float>)0) {
                local_4c = fVar10;
                local_48 = fVar9;
                fVar9 = (float)GetValuePercentage((Slider*)vector2);
                fVar9 = (float)*(unsigned short*)(vector2 + 636) * -0.5 + fVar9 * local_4c;
                in_XMM0_Db = in_XMM0_Db - (float)((int)((unsigned int)*(unsigned short*)(vector2 + 632) -
                                                        (unsigned int)*(unsigned short*)(vector2 + 638)) /
                                                      2 +
                                                  iVar4);
                if ((local_48 < (float)(int)fVar9) ||
                    (VVar6 = (Vector2T<float>)0,
                     (float)(int)((int)fVar9 + (unsigned int)*(unsigned short*)(vector2 + 636)) <= local_48)) {
                    VVar6 = (Vector2T<float>)0;
                } else if (0.0 <= in_XMM0_Db) {
                    VVar6 = (Vector2T<float>)(in_XMM0_Db < (float)*(unsigned short*)(vector2 + 638));
                }
                vector2[820] = VVar6;
            }
            if ((vector2[820] != (Vector2T<float>)0) && ((char)uVar3 != '\0')) {
                vector2[821] = (Vector2T<float>)1;
                *(uint32_t*)(vector2 + 824) = *(uint32_t*)(vector2 + 616);
            }
        }
        if (vector2[821] != (Vector2T<float>)0) {
            bVar7 = false;
            if (((-20.0 <= fVar8) && (-10.0 <= in_XMM0_Db)) &&
                (local_48 = fVar8, fStack_44 = in_XMM0_Db, iVar4 = vector2->GetStreamCountLastMix(), fVar8 = local_48,
                 local_48 < (float)(iVar4 + 20))) {
                iVar4 = vector2->GetMinMapX();
                bVar7 = in_XMM0_Db < (float)(iVar4 + 10);
                fVar8 = local_48;
            }
            vector2[821] = (Vector2T<float>)((uint8_t)vector2[821] & (uint8_t)local_58);
            if ((bVar7 & (uint8_t)local_54) == 0) {
                *(uint32_t*)(vector2 + 824) = *(uint32_t*)(vector2 + 616);
            } else {
                local_64 = fVar8 / (float)iVar5;
                fVar8 = math::Clamp<float>(local_64, 0.0, 1.0);
                iVar4 = *(int*)(vector2 + 608);
                iVar5 = *(int*)(vector2 + 624);
                fVar8 = (float)round(fVar8 * (float)((*(int*)(vector2 + 612) - iVar4) / iVar5));
                iVar4 = (int)fVar8 * iVar5 + iVar4;
                *(int*)(vector2 + 824) = iVar4;
                if ((vector2[821] == (Vector2T<float>)0) && (*(int*)(vector2 + 616) != iVar4)) {
                    *(int*)(vector2 + 616) = iVar4;
                    vector2[644] = (Vector2T<float>)1;
                }
            }
        }
    }

    // 0x1006a96a0
    void Slider::HandleMouseWheelScroll(float arg1) {
        float fVar2;
        int local_14;

        for (fVar2 = arg1 + field_808; 1.0 <= fVar2; fVar2 = fVar2 - 1.0) {
        }
        field_808 = fVar2;
        if (fVar2 <= -1.0) {
            do {
                fVar2 = fVar2 + 1.0;
            } while (fVar2 <= -1.0);
            field_808 = fVar2;
        }
        int iVar1 = math::Clamp<int>(local_14, field_608, field_612);
        if (iVar1 != m_currentValue) {
            m_currentValue = iVar1;
            m_hasRecentValueChange[0] = 1;
        }
    }

    // 0x1006a9760
    void Slider::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        UpdateAnimations(arg4);
        if (ShowNotches() != '\0') {
            DrawNotches(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
        }
        DrawTrack(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
        DrawThumb(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
        DrawLabels(*(FontManager**)(componentDependencies + 8), *(FontHelpers**)componentDependencies, arg2, arg3);
    }

    // 0x1006a97f0
    void Slider::UpdateAnimations(float arg1) {
        float fVar2;
        float local_1c;
        float local_18;
        float local_14;

        if (IsEnabled() != '\0') {
            fVar2 = -arg1;
            if (field_821[0] != '\0') {
                fVar2 = arg1;
            }
            local_1c = fVar2 * 20.0 + field_812;
            local_18 = 0.0;
            local_14 = 1.0;
            fVar2 = math::Clamp<float>(local_1c, local_18, local_14);
            field_812 = fVar2;
            fVar2 = -arg1;
            if (field_820[0] != '\0') {
                fVar2 = arg1;
            }
            local_1c = fVar2 * 10.0 + field_816;
            local_18 = 0.0;
            local_14 = 1.0;
            fVar2 = math::Clamp<float>(local_1c, local_18, local_14);
            field_816 = fVar2;
        }
    }

    // 0x1006a98e0
    void Slider::DrawNotches(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        unsigned short uVar1;
        unsigned short uVar2;
        bool bVar3;
        bool cVar4;
        int iVar5;
        unsigned int uVar6;
        int iVar7;
        int iVar8;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* texture;
        SpriteAtlas* this_07;
        long lVar10;
        int iVar11;
        unsigned long uVar12;
        float local_58;
        float local_54;
        float local_50;
        float local_48;
        unsigned int local_44;
        unsigned int local_40;
        float local_38;
        float local_34;

        uint8_t* this_00 = &field_448;
        float local_3c = (float)arg2;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            cVar4 = shared_ptr::operator_cast_to_bool(this_02);
            iVar5 = 285;
            if (cVar4) {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02)
                              .operator->();
                this_04 = (shared_ptr*)this_03->second();
                cVar4 = shared_ptr::operator_cast_to_bool(this_04);
                iVar5 = 293;
                if (cVar4) {
                    this_05 = (MapArea*)(*this_04).operator->();
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    texture = (Texture*)this_06->end();
                    if (texture == nullptr) {
                        return;
                    }
                    this_07 = (SpriteAtlas*)(*this_04).operator->();
                    iVar5 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                    lVar10 = this_07->GetSpriteRenderMapping(iVar5);
                    local_44 = (unsigned int)field_628;
                    local_40 = field_400.GetVisualMargin();
                    iVar5 = GetStreamCountLastMix();
                    uVar1 = field_628;
                    uVar6 = ((Margin)field_400.GetVisualMargin()).GetWidth();
                    uVar12 = (long)(int)(field_612 - field_608) / (long)(int)field_624;
                    iVar11 = (int)uVar12;
                    if (iVar11 < 3) {
                        return;
                    }
                    uVar12 = uVar12 & 4294967295;
                    local_48 = (float)(int)((iVar5 + (unsigned int)uVar1 * -2) - (uVar6 & 255));
                    local_54 = (float)iVar11;
                    uVar1 = field_634;
                    local_50 = (float)(uVar1 + 2);
                    local_34 = local_48 / local_54;
                    if (local_50 <= local_34) {
                        bVar3 = false;
                    } else {
                        local_38 = 1.0;
                        do {
                            local_38 = local_38 + 1.0;
                            local_58 = local_54 / local_38;
                            if ((float)fmod(local_58, 1.0) == 0.0) {
                                local_34 = local_48 / local_58;
                                uVar12 = (unsigned long)(unsigned int)(int)local_58;
                            }
                            iVar11 = (int)uVar12;
                        } while ((local_34 < local_50) && (local_38 <= 10.0));
                        bVar3 = 10.0 < local_38;
                    }
                    iVar5 = arg3;
                    if (iVar11 < 3) {
                        return;
                    }
                    if (bVar3) {
                        return;
                    }
                    iVar7 = local_44 + (int)local_3c;
                    uVar6 = local_40 & 255;
                    iVar8 = GetMinMapX();
                    local_38 = (float)((int)(iVar8 - ((unsigned int)field_634 + (unsigned int)field_632 +
                                                      (unsigned int)field_630)) /
                                           2 +
                                       iVar5);
                    local_3c = (float)uVar1 * -0.5 + (float)(int)(uVar6 + iVar7) + local_34;
                    iVar11 = iVar11 - 1;
                    do {
                        iVar5 = (int)local_3c;
                        uVar1 = field_634;
                        uVar2 = field_632;
                        uVar6 = GetRGBA();
                        this_00->DrawSpriteSlice(*rt7Core, iVar5, (int)local_38, (unsigned int)uVar1,
                                                 (unsigned int)uVar2 + (unsigned int)uVar1, uVar6, *((lVar10 + 88)),
                                                 texture, 0.0);
                        local_3c = local_3c + local_34;
                        iVar11 = iVar11 - 1;
                    } while (iVar11 != 0);
                    return;
                }
            }
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                      iVar5, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a9c30
    void Slider::DrawTrack(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        uint8_t bVar2;
        int iVar3;
        int iVar4;
        unsigned int uVar5;
        unsigned int arg6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        Logger* this_09;
        RT7Core* rt7Core_00;
        float arg4;
        float arg3_00;
        int iVar7;
        Margin local_68;
        Texture* local_58;
        long local_48;
        uint64_t local_40;

        uint8_t* this_00 = &field_400;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) != DataStatus::READY) {
            return;
        }
        int local_38 = arg2;
        float local_34 = (float)arg3;
        shared_ptr* this_02 = (shared_ptr*)this_00->GetDefaultValue();
        if (!(shared_ptr::operator_cast_to_bool(this_02))) {
            this_09 = logger::default_logger();
            iVar4 = 366;
        } else {
            this_03 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02).operator->();
            this_04 = (shared_ptr*)this_03->second();
            if (shared_ptr::operator_cast_to_bool(this_04)) {
                this_05 = (MapArea*)(*this_04).operator->();
                this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                local_58 = (Texture*)this_06->end();
                iVar4 = local_38;
                if (local_58 == nullptr) {
                    return;
                }
                this_07 = (SpriteAtlas*)(*this_04).operator->();
                iVar3 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                local_48 = this_07->GetSpriteRenderMapping(iVar3);
                local_38 = (unsigned int)field_628 + iVar4;
                iVar4 = GetMinMapX();
                arg3_00 =
                    (float)((int)(iVar4 - ((unsigned int)field_632 + (unsigned int)field_630)) / 2 + (int)local_34);
                iVar4 = GetStreamCountLastMix();
                iVar4 = iVar4 + (unsigned int)field_628 * -2;
                IsEnabled();
                local_34 = (float)(unsigned int)field_632;
                local_40 = GetRGBA();
                local_48 = local_48 + 88;
                GetVisualUV<Slider::TrackVisualState>(&local_68, (TrackVisualState)local_48);
                this_00->DrawSpriteSlice(*rt7Core, local_38, (int)arg3_00, iVar4, (int)local_34, (unsigned int)local_40,
                                         local_68, local_58, 0.0);
                local_34 = (float)GetValuePercentage();
                local_68[0] = (Margin)this_00->GetVisualMargin();
                bVar2 = local_68.GetWidth();
                rt7Core_00 = rt7Core;
                iVar3 = (int)((float)(int)(iVar4 - (unsigned int)bVar2) * local_34);
                iVar7 = (unsigned int)bVar2 + iVar3;
                if (iVar7 < iVar4) {
                    if (iVar3 == 0) {
                        return;
                    }
                    local_34 = arg3_00;
                    uVar5 = this_00->GetVisualMargin();
                    IsEnabled();
                    local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((unsigned int)field_632));
                    arg6 = GetRGBA();
                    GetVisualUV<Slider::TrackVisualState>(&local_68, (TrackVisualState)local_48);
                    rt7Core_00 = rt7Core;
                    arg3_00 = local_34;
                    arg4 = (float)(iVar7 - (uVar5 >> 17 & 127));
                } else {
                    local_34 = (float)iVar4;
                    IsEnabled();
                    local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)((unsigned int)field_632));
                    arg6 = GetRGBA();
                    GetVisualUV<Slider::TrackVisualState>(&local_68, (TrackVisualState)local_48);
                    arg4 = local_34;
                }
                this_00->DrawSpriteSlice(*rt7Core_00, local_38, (int)arg3_00, (int)arg4, (int)local_40, arg6, local_68,
                                         local_58, 0.0);
                return;
            }
            this_09 = logger::default_logger();
            iVar4 = 374;
        }
        this_09->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                     iVar4, "Invalid sprite atlas reference!");
    }

    // 0x1006a9f80
    void Slider::DrawThumb(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        unsigned short uVar1;
        unsigned short uVar2;
        unsigned short uVar3;
        uint64_t texture;
        SpriteData* this_01;
        uint8_t bVar5;
        int iVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int arg2_00;
        shared_ptr* this_03;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_04;
        shared_ptr* this_05;
        MapArea* this_06;
        SpriteAtlas* this_08;
        long lVar10;
        Logger* this_10;
        int iVar11;
        float fVar12;
        uint8_t local_80[24];
        Margin local_60;
        unsigned int local_50;
        float local_4c;
        SpriteData* local_48;
        unsigned long local_40;
        unsigned int local_38;
        int local_34;

        uint8_t* this_00 = &field_496;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            local_34 = arg3;
            this_03 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_03))) {
                this_10 = logger::default_logger();
                iVar11 = 427;
            } else {
                local_48 = (SpriteData*)this_00;
                this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_03)
                              .operator->();
                this_05 = (shared_ptr*)this_04->second();
                if (shared_ptr::operator_cast_to_bool(this_05)) {
                    this_06 = (MapArea*)(*this_05).operator->();
                    local_80._16_8_ =
                        ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_06->GetOrigin())
                            ->end();
                    iVar11 = local_34;
                    if ((Texture*)local_80._16_8_ == nullptr) {
                        return;
                    }
                    this_08 = (SpriteAtlas*)(*this_05).operator->();
                    iVar6 = ((FastPool<audio::SoundInstance, int>*)(*this_03).operator->())->capacity();
                    lVar10 = this_08->GetSpriteRenderMapping(iVar6);
                    new (local_80) math::Float4(*((lVar10 + 88)));
                    uVar1 = field_628;
                    bVar5 = field_400.GetVisualMargin();
                    local_40 = (((uint64_t)local_40._4_4_ << 32) |
                                (uint32_t)((unsigned int)bVar5 + (unsigned int)uVar1 + arg2));
                    iVar6 = GetMinMapX();
                    uVar1 = field_630;
                    uVar2 = field_632;
                    iVar7 = GetStreamCountLastMix();
                    uVar3 = field_628;
                    local_60[0] = (Margin)field_400.GetVisualMargin();
                    bVar5 = local_60.GetWidth();
                    fVar12 = (float)GetValuePercentage();
                    iVar7 = (int)((float)field_636 * -0.5 +
                                  (float)(int)((iVar7 + (unsigned int)uVar3 * -2) - (unsigned int)bVar5) * fVar12) +
                            (int)local_40;
                    iVar11 = (int)((unsigned int)field_632 - (unsigned int)field_638) / 2 +
                             (int)(iVar6 - ((unsigned int)uVar2 + (unsigned int)uVar1)) / 2 + iVar11;
                    uVar8 = GetRGBA();
                    this_01 = local_48;
                    arg2_00 = local_48->GetSpriteRGBA();
                    uVar8 = math::Multiply(uVar8, arg2_00);
                    IsEnabled();
                    GetVisualUV<Slider::ThumbVisualState>(&local_60, (ThumbVisualState)local_80);
                    texture = local_80._16_8_;
                    local_40 = (unsigned long)uVar8;
                    local_34 = iVar7;
                    this_01->DrawSpriteSlice(*rt7Core, iVar7, iVar11, (unsigned int)field_636, (unsigned int)field_638,
                                             uVar8, local_60, local_80._16_8_, 0.0);
                    if (!(IsEnabled())) {
                        return;
                    }
                    if ((0.0 < field_816) && (field_812 < 1.0)) {
                        local_4c = (float)eastl::min<float>(field_816, 1.0 - field_812);
                        GetVisualUV<Slider::ThumbVisualState>(&local_60, (ThumbVisualState)local_80);
                        local_38 = (unsigned int)field_636;
                        local_50 = (unsigned int)field_638;
                        uVar8 = math::MultiplyAlpha((unsigned int)local_40, local_4c);
                        local_48->DrawSpriteSlice(*rt7Core, local_34, iVar11, local_38, local_50, uVar8, local_60,
                                                  texture, 0.0);
                    }
                    if (field_821[0] == '\0') {
                        return;
                    }
                    GetVisualUV<Slider::ThumbVisualState>(&local_60, (ThumbVisualState)local_80);
                    local_38 = (unsigned int)field_636;
                    uVar1 = field_638;
                    uVar8 = math::MultiplyAlpha((unsigned int)local_40, field_812);
                    local_48->DrawSpriteSlice(*rt7Core, local_34, iVar11, local_38, (unsigned int)uVar1, uVar8,
                                              local_60, texture, 0.0);
                    return;
                }
                this_10 = logger::default_logger();
                iVar11 = 435;
            }
            this_10->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                iVar11, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006aa350
    void Slider::DrawLabels(graphics::FontManager* fontManager, graphics::FontHelpers* fontHelpers, int arg3,
                            int arg4) {
        uint8_t* this_00;
        unsigned int uVar4;
        unsigned int uVar5;
        basic_string<char, BucketAllocatorEASTL>* pbVar6;
        StringView local_228;
        StringView local_218;
        StringView local_208;
        StringView local_1f8;
        StringView local_1e8;
        StringView local_1d8;
        TextProperties local_1c8;
        fixed_string<char, 64> local_170;
        fixed_string<char, 64> local_108;

        unsigned int local_174 = (unsigned int)field_628;
        int iVar2 = GetMinMapX();
        unsigned int local_190 = (unsigned int)field_630;
        unsigned int local_18c = (unsigned int)field_632;
        int local_178 = GetStreamCountLastMix();
        unsigned int local_194 = (unsigned int)field_628;
        TextData* local_180 = (TextData*)field_544;
        int iVar3 = local_180->GetEndPosition();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_a0;
        auto this_02 = fontManager->GetFont(iVar3, local_a0);
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (cVar1) {
            local_174 = local_174 + arg3;
            iVar3 = local_178 + local_194 * -2;
            iVar2 = (unsigned int)field_632 + (int)(iVar2 - (local_190 + local_18c)) / 2 + arg4 + field_640;
            local_1c8 = graphics::TextProperties(*this_02);
            uVar4 = GetRGBA();
            local_180->PopulateTextProperties(local_1c8, uVar4, field_100);
            this_00 = &field_648;
            cVar1 = this_00->empty();
            uVar4 = local_174;
            if (cVar1) {
                local_180 = (TextData*)(((uint64_t)local_180._4_4_ << 32) | (uint32_t)iVar2);
                local_178 = iVar3;
                local_a0 = eastl::fixed_string<char, 64>();
                local_108 = eastl::fixed_string<char, 64>();
                local_170 = eastl::fixed_string<char, 64>();
                uVar5 = GetDisplayValue();
                if ((int)field_624 % field_620 == 0) {
                    local_a0.sprintf("%d", (unsigned long)field_608);
                    local_108.sprintf("%d", (unsigned long)uVar5);
                    local_170.sprintf("%d", (unsigned long)field_612);
                } else {
                    local_a0.sprintf("%.2f", (double)((float)(int)field_608 / (float)field_620));
                    local_108.sprintf("%.2f", (double)((float)(int)uVar5 / (float)field_620));
                    local_170.sprintf("%.2f", (double)((float)(int)field_612 / (float)field_620));
                }
                local_1c8.SetAlignment(0);
                local_1f8.StringView<eastl::fixed_string<char, 40>>(local_a0);
                fontHelpers->DrawString(&local_1f8, uVar4, (int)local_180, 0, local_1c8);
                local_1c8.SetAlignment(1);
                local_1e8.StringView<eastl::fixed_string<char, 40>>(local_108);
                fontHelpers->DrawString(&local_1e8, local_178 / 2 + uVar4, (int)local_180, 0, local_1c8);
                local_1c8.SetAlignment(2);
                local_1d8.StringView<eastl::fixed_string<char, 40>>(local_170);
                fontHelpers->DrawString(&local_1d8, local_178 + uVar4, (int)local_180, 0, local_1c8);
            }
            local_1c8.SetAlignment(0);
            pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)this_00->front();
            local_228.StringView<eastl::fixed_string<char, 40>>(*pbVar6);
            fontHelpers->DrawString(&local_228, local_174, iVar2, 0, local_1c8);
            local_1c8.SetAlignment(1);
            pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)GetDisplayValueLabel();
            local_218.StringView<eastl::fixed_string<char, 40>>(*pbVar6);
            fontHelpers->DrawString(&local_218, iVar3 / 2 + local_174, iVar2, 0, local_1c8);
            local_1c8.SetAlignment(2);
            pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)this_00->back();
            local_208.StringView<eastl::fixed_string<char, 40>>(*pbVar6);
            fontHelpers->DrawString(&local_208, iVar3 + local_174, iVar2, 0, local_1c8);
        }
    }

    // 0x1006aa870
    uint32_t Slider::Setup(int arg1, int arg2, int arg3, int arg4, int arg5) {
        int iVar2;
        int local_3c;

        unsigned int local_34 = arg5;
        uint32_t uVar1 = ValidateValues(arg1, arg2, arg3, arg4, arg5);
        if ((char)uVar1 != '\0') {
            iVar2 = eastl::max<int>(arg4, 1);
            local_3c = arg2 - arg1;
            local_34 = math::Clamp<int>(local_34, 1, local_3c);
            field_608 = arg1;
            field_612 = arg2;
            m_currentValue = arg3;
            field_620 = iVar2;
            field_624 = local_34;
            field_648.clear();
        }
        return uVar1;
    }

    // 0x1006aa930
    void Slider::ValidateValues(int arg1, int arg2, int arg3, int arg4, int arg5) {
        Logger* logger;
        char* str2;

        int iVar1 = arg2 - arg1;
        if (iVar1 == 0 || arg2 < arg1) {
            logger = logger::default_logger();
            str2 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - max must be > min";
            iVar1 = 228;
        } else if ((arg3 < arg1) || (arg2 < arg3)) {
            logger = logger::default_logger();
            str2 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - initial value falls "
                   "outside of slider range";
            iVar1 = 233;
        } else if (iVar1 < arg4) {
            logger = logger::default_logger();
            str2 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - scale is greater than "
                   "the specified value range";
            iVar1 = 238;
        } else if (iVar1 < arg5) {
            logger = logger::default_logger();
            str2 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - tick is greater than "
                   "the specified value range";
            iVar1 = 243;
        } else if ((arg4 < 1) || (arg5 < 1)) {
            logger = logger::default_logger();
            str2 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - scale and tick must "
                   "both be > 0";
            iVar1 = 248;
        } else {
            if ((iVar1 % arg5 == 0) && ((arg3 - arg1) % arg5 == 0)) {
                return 1;
            }
            logger = logger::default_logger();
            str2 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - value range isn\'t "
                   "divisible by the tick";
            iVar1 = 253;
        }
        logger->Log(false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                    iVar1, str2, (unsigned long)(unsigned int)arg1, arg2, (unsigned long)(unsigned int)arg3,
                    (unsigned long)(unsigned int)arg4, (unsigned long)(unsigned int)arg5);
        return 0;
    }

    // 0x1006aaab0
    unsigned long Slider::Setup(const UIDataMappingProvider<int, StringView>& uiDataMappingProvider) {
        uint8_t* this_00;
        int iVar3;
        basic_string<char, BucketAllocatorEASTL>* str;
        basic_string<char, BucketAllocatorEASTL>* pbVar4;
        pair<int, shared_ptr<graphics::AnimationStateMachineProvider> _>* arg1;
        unsigned long uVar5;
        Slider* local_a0;
        StringView local_98;

        bool cVar1 = (**(void (**)(...))(*(long*)uiDataMappingProvider + 24))(uiDataMappingProvider);
        if ((!cVar1) ||
            (cVar1 = (**(void (**)(...))(*(long*)uiDataMappingProvider + 32))(uiDataMappingProvider), !cVar1)) {
            uVar5 = 0;
        } else {
            iVar3 = (**(void (**)(...))(*(long*)uiDataMappingProvider + 40))(uiDataMappingProvider);
            uVar5 = 0;
            cVar1 = Setup(0, iVar3 - 1, 0, 1, 1);
            if (cVar1) {
                local_a0 = this;
                fixedfunction::function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                    Slider::Setup(UIDataMappingProvider<int, StringView> const&)::__59, void>(
                    (function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>*)&local_98,
                    (__59*)&local_a0);
                (**(void (**)(...))(*(long*)uiDataMappingProvider + 16))(uiDataMappingProvider, &local_98);
                (**(void (**)(...))(*(long*)uiDataMappingProvider + 48))(&local_98, uiDataMappingProvider);
                this_00 = &field_648;
                str = (basic_string<char, BucketAllocatorEASTL>*)this_00->HeapBeginPtr();
                pbVar4 = (basic_string<char, BucketAllocatorEASTL>*)this_00->end();
                if (str != pbVar4) {
                    do {
                        if (*str == local_98) {
                            arg1 = (pair<int, shared_ptr<graphics::AnimationStateMachineProvider> _>*)
                                       this_00->HeapBeginPtr();
                            iVar3 = eastl::distance<eastl::pair<int, oldscape::SpotAnimClient>*>(arg1, str);
                            SetCurrentValue(iVar3, false);
                            break;
                        }
                        str = str + 24;
                        pbVar4 = (basic_string<char, BucketAllocatorEASTL>*)this_00->end();
                    } while (str != pbVar4);
                }
                uVar5 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x1006aacc0
    unsigned long Slider::SetCurrentValue(int arg1, bool arg2) {
        Logger* pLVar1;
        uint64_t unaff_R14;
        unsigned long uVar2;

        if ((arg1 < (int)field_608) || ((int)field_612 < arg1)) {
            pLVar1 = logger::default_logger();
            uVar2 = 0;
            pLVar1->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp", 137,
                "new value %d falls outside of the slider\'s [%d;%d] range", (unsigned long)(unsigned int)arg1,
                (unsigned long)field_608, (unsigned long)field_612);
        } else if (arg1 % (int)field_624 == 0) {
            uVar2 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
            if (m_currentValue != arg1) {
                m_currentValue = arg1;
                m_hasRecentValueChange[0] = m_hasRecentValueChange[0] | arg2;
            }
        } else {
            pLVar1 = logger::default_logger();
            uVar2 = 0;
            pLVar1->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp", 142,
                "new value is incompatible with the slider\'s %d scale and %d tick", (unsigned long)(unsigned int)arg1,
                (unsigned long)field_624);
        }
        return uVar2 & 4294967295;
    }

    // 0x1006aada0
    uint8_t* Slider::GetCurrentValueLabel() const {
        int iVar2;

        uint8_t* puVar3 = &field_648;
        if (puVar3->empty() == '\0') {
            iVar2 = puVar3->size();
            iVar2 =
                eastl::min<graphics::GraphicsQuality>(iVar2 - 1, (int)(m_currentValue - field_608) / (int)field_624);
            puVar3 = (uint8_t*)(*puVar3)[(long)iVar2];
        } else {
            puVar3 = &GetCurrentValueLabel()::emptyString;
            if (GetCurrentValueLabel()::emptyString == '\0') {
                iVar2 = ___cxa_guard_acquire(&GetCurrentValueLabel()::emptyString);
                if (iVar2 != 0) {
                    puVar3 = &GetCurrentValueLabel()::emptyString;
                    new ((basic_string<char, BucketAllocatorEASTL>*)&GetCurrentValueLabel()::emptyString)
                        eastl::basic_string<char, BucketAllocatorEASTL>();
                    ___cxa_atexit(PTR__basic_string_100ee6c78, &GetCurrentValueLabel()::emptyString, 4294967296);
                    ___cxa_guard_release(&GetCurrentValueLabel()::emptyString);
                }
            }
        }
        return puVar3;
    }

    // 0x1006aaec0
    auto Slider::GetCurrentValueAsString() const {
        auto result;
        if ((int)field_624 % field_620 == 0) {
            result.sprintf("%d", (unsigned long)(unsigned int)m_currentValue);
        } else {
            result.sprintf("%.2f", (double)((float)m_currentValue / (float)field_620));
        }
        return result;
    }

    // 0x1006aaf40
    void Slider::SetVisualParams(unsigned short arg1, unsigned short arg2, unsigned short arg3, unsigned short arg4,
                                 unsigned short arg5, unsigned short arg6) {
        uint64_t in_register_0000003a;
        uint16_t in_stack_00000008;

        *(unsigned short*)((((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) + 632) = arg2;
        *(unsigned short*)((((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) + 628) = arg3;
        *(unsigned short*)((((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) + 630) = arg4;
        *(unsigned short*)((((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) + 634) = arg5;
        *(unsigned short*)((((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) + 636) = arg6;
        *(uint16_t*)((((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) + 638) = in_stack_00000008;
    }

    // 0x1006aaf80
    void Slider::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        arg1.g1();
        SetEnabled((uint8_t)this);
        unsigned int uVar4 = arg1.g4s();
        field_608 = uVar4;
        uVar4 = arg1.g4s();
        field_612 = uVar4;
        int iVar5 = arg1.g4s();
        m_currentValue = iVar5;
        iVar5 = arg1.g4s();
        field_620 = iVar5;
        uVar4 = arg1.g4s();
        field_624 = uVar4;
        uint8_t* this_00 = &field_648;
        unsigned short uVar3 = arg1.g2();
        this_00->resize((unsigned long)uVar3);
        auto str = this_00->HeapBeginPtr();
        auto pbVar7 = this_00->end();
        for (; str != pbVar7; str = str + 24) {
            arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
        }
        bool cVar1 = ValidateValues(field_608, field_612, m_currentValue, field_620, field_624);
        if (!cVar1) {
            LogAssert("ValidateValues(m_minValue, m_maxValue, m_curValue, m_scale, m_tick)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                      183, nullptr);
        }
        cVar1 = this_00->empty();
        if ((!cVar1) && ((iVar5 = this_00->size(), (field_612 - field_608) + 1 != iVar5 || (field_624 != 1)))) {
            LogAssert("m_valueLabels.empty() || (((int)m_valueLabels.size() == ((m_maxValue - m_minValue) + 1)) && "
                      "(m_tick == 1))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                      186, nullptr);
        }
        uVar3 = arg1.g2();
        field_628 = uVar3;
        uVar3 = arg1.g2();
        field_630 = uVar3;
        uVar3 = arg1.g2();
        field_632 = uVar3;
        uVar3 = arg1.g2();
        field_634 = uVar3;
        uVar3 = arg1.g2();
        field_636 = uVar3;
        uVar3 = arg1.g2();
        field_638 = uVar3;
        uint8_t bVar2 = arg1.g1();
        field_100 = ~bVar2;
        field_96 = arg1.g4();
        field_544->DecodeTextData(arg1, arg2);
        field_400.DecodeSpriteData(arg1, arg2);
        field_448.DecodeSpriteData(arg1, arg2);
        field_496.DecodeSpriteData(arg1, arg2);
    }

    // 0x1006ab220
    void Slider::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 352, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 351, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_628, 354, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_630, 355, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_632, 356, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_634, 353, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_636, 357, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_638, 358, true);
        styleSheet.LoadPropertyValueIfSet<int>(field_640, 359, true);
        field_544->LoadStyleSheetTextData(390, styleSheet);
        field_400.LoadStyleSheetSpriteData(380, styleSheet);
        field_448.LoadStyleSheetSpriteData(360, styleSheet);
        field_496.LoadStyleSheetSpriteData(370, styleSheet);
    }

    // 0x1006ab530
    uint8_t* Slider::GetDisplayValueLabel() const {
        int iVar2;
        int iVar3;

        uint8_t* puVar4 = &field_648;
        if (puVar4->empty() == '\0') {
            iVar2 = puVar4->size();
            iVar3 = GetDisplayValue();
            iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2 - 1, (int)(iVar3 - field_608) / (int)field_624);
            puVar4 = (uint8_t*)(*puVar4)[(long)iVar2];
        } else {
            puVar4 = &GetDisplayValueLabel()::emptyString;
            if (GetDisplayValueLabel()::emptyString == '\0') {
                iVar2 = ___cxa_guard_acquire(&GetDisplayValueLabel()::emptyString);
                if (iVar2 != 0) {
                    puVar4 = &GetDisplayValueLabel()::emptyString;
                    new ((basic_string<char, BucketAllocatorEASTL>*)&GetDisplayValueLabel()::emptyString)
                        eastl::basic_string<char, BucketAllocatorEASTL>();
                    ___cxa_atexit(PTR__basic_string_100ee6c78, &GetDisplayValueLabel()::emptyString, 4294967296);
                    ___cxa_guard_release(&GetDisplayValueLabel()::emptyString);
                }
            }
        }
        return puVar4;
    }

    // 0x1006acf00: Slider::GetValueRepresentation() has the same machine code as Button::GetValueRepresentation()

} // namespace jag::ui
