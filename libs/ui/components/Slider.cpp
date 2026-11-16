// libs/ui/components/Slider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Slider.h"

namespace jag::ui {
    // 0x10017a580: the linker folded this into http::HTTPRequest::GetErrorCode() const, which has identical code
    Slider::GetCurrentValue() const;

    // 0x100269ba0: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetClanName::GetID() const, which has identical code
    Slider::GetType() const;

    // 0x1006a90f0, 368 bytes, base-object constructor, placed by class name
    // Slider::Slider()
    void Slider::Slider() {
        new (this) Component();
        new (&field_392) ComponentSingleValueMultiOptionMixin();
        new (this) MakeSharedPool<Slider, 32>();
        field_0 = &PTR__Slider_100f0fb40;
        field_392 = &PTR__Slider_100f0fc68;
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
        m_visualParams = 20;
        field_634 = 8;
        field_636 = 30;
        field_638 = 20;
        field_640 = 0;
        m_hasRecentValueChange = 0;
        new (&field_648)
            eastl::fixed_vector<eastl::basic_string<char, BucketAllocatorEASTL>, 5ul, true, BucketAllocatorEASTL>();
        *(undefined8*)((long)&field_812 + 2) = 0;
        field_808 = 0.0;
        field_812 = 0.0;
        (*(code*)field_0[4])(this, 1);
    }

    // 0x1006a92e0, 16 bytes, complete-object constructor, placed by class name
    // Slider::Slider(): jumps straight to the base-object constructor

    // 0x1006a92f0, 160 bytes, placed by class name
    // Slider::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void Slider::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                           bool param_6, bool param_7) {
        if (IsEnabled() != '\0') {
            UpdateThumbLogic((Slider*)CONCAT44((float)((ulong) * (undefined8*)(param_1 + 60) >> 32) - (float)param_3,
                                               (float)*(undefined8*)(param_1 + 60) - (float)param_2),
                             this, param_6, param_4, param_1[57] != (ComponentDependencies)0 || param_5);
            if (param_6) {
                HandleMouseWheelScroll(this, (float)*(int*)(param_1 + 68) * 0.2);
            }
        }
    }

    // 0x1006a9390, 784 bytes, placed by class name
    // Slider::UpdateThumbLogic(math::Vector2T<float>, bool, bool, bool)
    void Slider::UpdateThumbLogic(undefined8 param_1, Slider* this, int param_3, undefined4 param_4,
                                  undefined4 param_5) {
        ushort uVar1;
        ushort uVar2;
        int iVar4;
        int iVar5;
        bool bVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float local_64;
        float local_60;
        float local_5c;
        float local_4c;
        float local_48;
        float fStack_44;

        fVar8 = (float)((ulong)param_1 >> 32);
        local_48 = (float)param_1;
        fStack_44 = fVar8;
        iVar4 = GetMinMapX();
        uVar1 = field_630;
        uVar2 = m_visualParams;
        iVar5 = GetStreamCountLastMix();
        iVar5 = iVar5 + (uint)field_628 * -2;
        if (param_3 == 0) {
            field_820 = '\0';
            fVar7 = local_48;
            fVar8 = fStack_44;
        } else {
            iVar4 = (int)(iVar4 - ((uint)uVar1 + (uint)uVar2)) / 2;
            fVar7 = (float)field_628;
            fVar9 = local_48 - fVar7;
            bVar6 = false;
            fVar10 = (float)iVar5;
            if ((0.0 <= fVar9) && (fVar9 <= fVar10)) {
                if ((float)iVar4 <= fVar8) {
                    bVar6 = fVar8 <= (float)(int)((uint)m_visualParams + iVar4);
                } else {
                    bVar6 = false;
                }
            }
            fVar7 = (float)param_1 - fVar7;
            field_820 = bVar6;
            if (bVar6 == false) {
                local_4c = fVar10;
                local_48 = fVar9;
                fVar9 = (float)GetValuePercentage(this);
                fVar9 = (float)field_636 * -0.5 + fVar9 * local_4c;
                fVar8 = fVar8 - (float)((int)((uint)m_visualParams - (uint)field_638) / 2 + iVar4);
                if ((local_48 < (float)(int)fVar9) ||
                    (bVar6 = false, (float)(int)((int)fVar9 + (uint)field_636) <= local_48)) {
                    bVar6 = false;
                } else if (0.0 <= fVar8) {
                    bVar6 = fVar8 < (float)field_638;
                }
                field_820 = bVar6;
            }
            if ((field_820 != '\0') && ((char)param_4 != '\0')) {
                field_821 = '\x01';
                *(int*)&field_824 = m_currentValue;
            }
        }
        if (field_821 != '\0') {
            bVar6 = false;
            if (((-20.0 <= fVar7) && (-10.0 <= fVar8)) &&
                (local_48 = fVar7, fStack_44 = fVar8, iVar4 = GetStreamCountLastMix(), fVar7 = local_48,
                 local_48 < (float)(iVar4 + 20))) {
                iVar4 = GetMinMapX();
                bVar6 = fVar8 < (float)(iVar4 + 10);
                fVar7 = local_48;
            }
            field_821 = field_821 & (byte)param_5;
            if ((bVar6 & (byte)param_3) == 0) {
                *(int*)&field_824 = m_currentValue;
            } else {
                local_64 = fVar7 / (float)iVar5;
                local_60 = 0.0;
                local_5c = 1.0;
                fVar8 = math::Clamp<float>(&local_64, &local_60, &local_5c);
                iVar4 = field_608;
                iVar5 = field_624;
                fVar8 = (float)round(fVar8 * (float)((int)(field_612 - iVar4) / iVar5));
                iVar4 = (int)fVar8 * iVar5 + iVar4;
                *(int*)&field_824 = iVar4;
                if ((field_821 == '\0') && (m_currentValue != iVar4)) {
                    m_currentValue = iVar4;
                    m_hasRecentValueChange = 1;
                }
            }
        }
    }

    // 0x1006a96a0, 192 bytes, placed by class name
    // Slider::HandleMouseWheelScroll(float)
    void Slider::HandleMouseWheelScroll(float param_1) {
        int iVar1;
        float fVar2;
        int local_14;

        for (fVar2 = param_1 + field_808; 1.0 <= fVar2; fVar2 = fVar2 + -1.0) {
        }
        field_808 = fVar2;
        if (fVar2 <= -1.0) {
            do {
                fVar2 = fVar2 + 1.0;
            } while (fVar2 <= -1.0);
            field_808 = fVar2;
        }
        iVar1 = math::Clamp<int>(&local_14, &field_608, (int*)&field_612);
        if (iVar1 != m_currentValue) {
            m_currentValue = iVar1;
            m_hasRecentValueChange = 1;
        }
    }

    // 0x1006a9760, 144 bytes, placed by class name
    // Slider::MainDraw(ComponentDependencies const&, int, int, float)
    void Slider::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        UpdateAnimations(this, param_4);
        if (ShowNotches(this) != '\0') {
            DrawNotches(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
        }
        DrawTrack(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
        DrawThumb(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
        DrawLabels(this, *(FontManager**)(param_1 + 8), *(FontHelpers**)param_1, param_2, param_3);
    }

    // 0x1006a97f0, 208 bytes, placed by class name
    // Slider::UpdateAnimations(float)
    void Slider::UpdateAnimations(float param_1) {
        float fVar2;
        float local_1c;
        float local_18;
        float local_14;

        if (IsEnabled() != '\0') {
            fVar2 = -param_1;
            if (field_821 != '\0') {
                fVar2 = param_1;
            }
            local_1c = fVar2 * 20.0 + field_812;
            local_18 = 0.0;
            local_14 = 1.0;
            fVar2 = math::Clamp<float>(&local_1c, &local_18, &local_14);
            field_812 = fVar2;
            fVar2 = -param_1;
            if (field_820 != '\0') {
                fVar2 = param_1;
            }
            local_1c = fVar2 * 10.0 + field_816;
            local_18 = 0.0;
            local_14 = 1.0;
            fVar2 = math::Clamp<float>(&local_1c, &local_18, &local_14);
            field_816 = fVar2;
        }
    }

    // 0x1006a98e0, 848 bytes, placed by class name
    // Slider::DrawNotches(graphics::RT7Core*, int, int)
    void Slider::DrawNotches(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        ushort uVar1;
        ushort uVar2;
        bool bVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar8;
        undefined* puVar9;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* pTVar10;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        long lVar11;
        undefined8 uVar12;
        int iVar13;
        ulong uVar14;
        undefined8 uVar15;
        float fVar16;
        Margin local_5c;
        float local_58;
        float local_54;
        float local_50;
        int local_4c;
        float local_48;
        uint local_44;
        uint local_40;
        float local_3c;
        float local_38;
        float local_34;

        this_00 = &field_448;
        local_3c = (float)param_2;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar8 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar9 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar8, false);
        if (puVar9 == DataStatus::READY) {
            local_4c = param_3;
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            bVar3 = shared_ptr::operator_cast_to_bool(this_02);
            uVar15 = 285;
            if (bVar3) {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                this_04 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_03);
                bVar3 = shared_ptr::operator_cast_to_bool(this_04);
                uVar15 = 293;
                if (bVar3) {
                    this_05 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    pTVar10 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    if (pTVar10 == (Texture*)0) {
                        return;
                    }
                    this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_08 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    iVar4 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                    lVar11 = this_07->GetSpriteRenderMapping(iVar4);
                    local_44 = (uint)field_628;
                    local_40 = (&field_400)->GetVisualMargin();
                    iVar4 = GetStreamCountLastMix();
                    uVar1 = field_628;
                    local_5c = (Margin)(&field_400)->GetVisualMargin();
                    uVar5 = local_5c.GetWidth();
                    uVar14 = (long)(int)(field_612 - field_608) / (long)field_624;
                    iVar13 = (int)uVar14;
                    if (iVar13 < 3) {
                        return;
                    }
                    uVar14 = uVar14 & 4294967295;
                    local_48 = (float)(int)((iVar4 + (uint)uVar1 * -2) - (uVar5 & 255));
                    local_54 = (float)iVar13;
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
                            fVar16 = (float)fmod(local_58, 1.0);
                            if (fVar16 == 0.0) {
                                local_34 = local_48 / local_58;
                                uVar14 = (ulong)(uint)(int)local_58;
                            }
                            iVar13 = (int)uVar14;
                        } while ((local_34 < local_50) && (local_38 <= 10.0));
                        bVar3 = 10.0 < local_38;
                    }
                    iVar4 = local_4c;
                    if (iVar13 < 3) {
                        return;
                    }
                    if (bVar3) {
                        return;
                    }
                    iVar6 = local_44 + (int)local_3c;
                    uVar5 = local_40 & 255;
                    iVar7 = GetMinMapX();
                    local_38 =
                        (float)((int)(iVar7 - ((uint)field_634 + (uint)m_visualParams + (uint)field_630)) / 2 + iVar4);
                    local_3c = (float)uVar1 * -0.5 + (float)(int)(uVar5 + iVar6) + local_34;
                    iVar13 = iVar13 + -1;
                    do {
                        iVar4 = (int)local_3c;
                        uVar1 = field_634;
                        uVar2 = m_visualParams;
                        uVar5 = GetRGBA();
                        this_00->DrawSpriteSlice(param_1, iVar4, (int)local_38, (uint)uVar1, (uint)uVar2 + (uint)uVar1,
                                                 uVar5, (Rect*)(lVar11 + 88), pTVar10, 0.0);
                        local_3c = local_3c + local_34;
                        iVar13 = iVar13 + -1;
                    } while (iVar13 != 0);
                    return;
                }
            }
            uVar12 = logger::default_logger();
            logger::Logger::Log(
                uVar12, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                uVar15, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a9c30, 848 bytes, placed by class name
    // Slider::DrawTrack(graphics::RT7Core*, int, int)
    void Slider::DrawTrack(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        bool bVar1;
        byte bVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar7;
        undefined* puVar8;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        undefined8 uVar9;
        RT7Core* pRVar10;
        float fVar11;
        undefined8 uVar12;
        float fVar13;
        int iVar14;
        Margin local_68[4];
        Texture* local_58;
        RT7Core* local_50;
        long local_48;
        uint local_40;
        undefined4 uStack_3c;
        int local_38;
        float local_34;

        this_00 = &field_400;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar7 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar8 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar7, false);
        if (puVar8 != DataStatus::READY) {
            return;
        }
        local_38 = param_2;
        local_34 = (float)param_3;
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
                local_58 =
                    (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                iVar4 = local_38;
                if (local_58 == (Texture*)0) {
                    return;
                }
                local_50 = param_1;
                this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                    (shared_ptr<graphics::SpriteAtlas>*)this_04);
                this_08 = (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                    (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                iVar3 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                local_48 = this_07->GetSpriteRenderMapping(iVar3);
                local_38 = (uint)field_628 + iVar4;
                iVar4 = GetMinMapX();
                fVar13 = (float)((int)(iVar4 - ((uint)m_visualParams + (uint)field_630)) / 2 + (int)local_34);
                iVar4 = GetStreamCountLastMix();
                iVar4 = iVar4 + (uint)field_628 * -2;
                bVar2 = IsEnabled();
                local_34 = (float)(uint)m_visualParams;
                _local_40 = GetRGBA();
                local_48 = local_48 + 88;
                GetVisualUV<Slider::TrackVisualState>((Slider*)local_68, local_48, (uint)(bVar2 ^ 1) * 2);
                this_00->DrawSpriteSlice(local_50, local_38, (int)fVar13, iVar4, (int)local_34, (uint)_local_40,
                                         local_68, local_58, 0.0);
                local_34 = (float)GetValuePercentage(this);
                local_68[0] = (Margin)this_00->GetVisualMargin();
                bVar2 = local_68->GetWidth();
                pRVar10 = local_50;
                iVar3 = (int)((float)(int)(iVar4 - (uint)bVar2) * local_34);
                iVar14 = (uint)bVar2 + iVar3;
                if (iVar14 < iVar4) {
                    if (iVar3 == 0) {
                        return;
                    }
                    local_34 = fVar13;
                    uVar5 = this_00->GetVisualMargin();
                    bVar2 = IsEnabled();
                    uVar9 = _local_40;
                    local_40._2_2_ = 0;
                    local_40._0_2_ = m_visualParams;
                    uStack_3c = SUB84(uVar9, 4);
                    uVar6 = GetRGBA();
                    GetVisualUV<Slider::TrackVisualState>((Slider*)local_68, local_48, (uint)(bVar2 ^ 1) * 2 + 1);
                    pRVar10 = local_50;
                    fVar13 = local_34;
                    fVar11 = (float)(iVar14 - (uVar5 >> 17 & 127));
                } else {
                    local_34 = (float)iVar4;
                    bVar2 = IsEnabled();
                    uVar9 = _local_40;
                    local_40._2_2_ = 0;
                    local_40._0_2_ = m_visualParams;
                    uStack_3c = SUB84(uVar9, 4);
                    uVar6 = GetRGBA();
                    GetVisualUV<Slider::TrackVisualState>((Slider*)local_68, local_48, (uint)(bVar2 ^ 1) * 2 + 1);
                    fVar11 = local_34;
                }
                this_00->DrawSpriteSlice(pRVar10, local_38, (int)fVar13, (int)fVar11, local_40, uVar6, local_68,
                                         local_58, 0.0);
                return;
            }
            uVar9 = logger::default_logger();
            uVar12 = 374;
        } else {
            uVar9 = logger::default_logger();
            uVar12 = 366;
        }
        logger::Logger::Log(
            uVar9, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp", uVar12,
            "Invalid sprite atlas reference!");
    }

    // 0x1006a9f80, 976 bytes, placed by class name
    // Slider::DrawThumb(graphics::RT7Core*, int, int)
    void Slider::DrawThumb(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        ushort uVar1;
        ushort uVar2;
        ushort uVar3;
        RT7Core* pRVar4;
        SpriteData* this_01;
        bool bVar5;
        byte bVar6;
        char cVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        uint uVar11;
        TextureManager* this_02;
        SpriteAtlasManager* pSVar12;
        undefined* puVar13;
        shared_ptr* this_03;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_04;
        shared_ptr* this_05;
        MapArea* this_06;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_07;
        SpriteAtlas* this_08;
        FastPool<audio::SoundInstance, int>* this_09;
        long lVar14;
        undefined8 uVar15;
        undefined8 uVar16;
        int iVar17;
        float fVar18;
        undefined1 local_80[24];
        RT7Core* local_68;
        Margin local_60[4];
        uint local_50;
        float local_4c;
        SpriteData* local_48;
        ulong local_40;
        uint local_38;
        int local_34;

        this_00 = &field_496;
        this_02 = (TextureManager*)param_1->GetTextureManager();
        pSVar12 = (SpriteAtlasManager*)this_02->GetSpriteAtlasManager();
        puVar13 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar12, false);
        if (puVar13 == DataStatus::READY) {
            local_34 = param_3;
            this_03 = (shared_ptr*)this_00->GetDefaultValue();
            bVar5 = shared_ptr::operator_cast_to_bool(this_03);
            if (bVar5) {
                local_48 = (SpriteData*)this_00;
                this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)this_03);
                this_05 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_04);
                bVar5 = shared_ptr::operator_cast_to_bool(this_05);
                if (bVar5) {
                    this_06 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_05);
                    this_07 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_06->GetOrigin();
                    local_80._16_8_ =
                        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_07);
                    iVar17 = local_34;
                    if ((Texture*)local_80._16_8_ == (Texture*)0) {
                        return;
                    }
                    local_68 = param_1;
                    this_08 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_05);
                    this_09 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_03);
                    iVar8 = FastPool<audio::SoundInstance, int>::capacity(this_09);
                    lVar14 = this_08->GetSpriteRenderMapping(iVar8);
                    new (local_80) math::Float4((Vector4T*)(lVar14 + 88));
                    uVar1 = field_628;
                    bVar6 = (&field_400)->GetVisualMargin();
                    local_40 = CONCAT44(local_40._4_4_, (uint)bVar6 + (uint)uVar1 + param_2);
                    iVar8 = GetMinMapX();
                    uVar1 = field_630;
                    uVar2 = m_visualParams;
                    iVar9 = GetStreamCountLastMix();
                    uVar3 = field_628;
                    local_60[0] = (Margin)(&field_400)->GetVisualMargin();
                    bVar6 = local_60->GetWidth();
                    fVar18 = (float)GetValuePercentage(this);
                    iVar9 = (int)((float)field_636 * -0.5 +
                                  (float)(int)((iVar9 + (uint)uVar3 * -2) - (uint)bVar6) * fVar18) +
                            (int)local_40;
                    iVar17 = (int)((uint)m_visualParams - (uint)field_638) / 2 +
                             (int)(iVar8 - ((uint)uVar2 + (uint)uVar1)) / 2 + iVar17;
                    uVar10 = GetRGBA();
                    this_01 = local_48;
                    uVar11 = local_48->GetSpriteRGBA();
                    uVar10 = math::Multiply(uVar10, uVar11);
                    bVar6 = IsEnabled();
                    GetVisualUV<Slider::ThumbVisualState>((Slider*)local_60, local_80, (uint)(bVar6 ^ 1) * 3);
                    pRVar4 = local_68;
                    uVar15 = local_80._16_8_;
                    local_40 = (ulong)uVar10;
                    local_34 = iVar9;
                    this_01->DrawSpriteSlice(local_68, iVar9, iVar17, (uint)field_636, (uint)field_638, uVar10,
                                             (Rect*)local_60, (Texture*)local_80._16_8_, 0.0);
                    cVar7 = IsEnabled();
                    if (cVar7 == '\0') {
                        return;
                    }
                    if ((0.0 < field_816) && (field_812 < 1.0)) {
                        local_4c = (float)eastl::min<float>(field_816, 1.0 - field_812);
                        GetVisualUV<Slider::ThumbVisualState>((Slider*)local_60, local_80, 1);
                        local_38 = (uint)field_636;
                        local_50 = (uint)field_638;
                        uVar10 = math::MultiplyAlpha((uint)local_40, local_4c);
                        local_48->DrawSpriteSlice(pRVar4, local_34, iVar17, local_38, local_50, uVar10, local_60,
                                                  uVar15, 0.0);
                    }
                    if (field_821 == '\0') {
                        return;
                    }
                    GetVisualUV<Slider::ThumbVisualState>((Slider*)local_60, local_80, 2);
                    local_38 = (uint)field_636;
                    uVar1 = field_638;
                    uVar10 = math::MultiplyAlpha((uint)local_40, field_812);
                    local_48->DrawSpriteSlice(pRVar4, local_34, iVar17, local_38, (uint)uVar1, uVar10, local_60, uVar15,
                                              0.0);
                    return;
                }
                uVar15 = logger::default_logger();
                uVar16 = 435;
            } else {
                uVar15 = logger::default_logger();
                uVar16 = 427;
            }
            logger::Logger::Log(
                uVar15, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                uVar16, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006aa350, 1312 bytes, placed by class name
    // Slider::DrawLabels(graphics::FontManager*, graphics::FontHelpers*, int, int)
    void Slider::DrawLabels(FontManager* param_1, FontHelpers* param_2, int param_3, int param_4) {
        undefined1* this_00;
        char cVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        uint uVar6;
        shared_ptr* this_02;
        fixed_string* pfVar7;
        StringView SVar8;
        StringView SVar9;
        StringView SVar10;
        StringView SVar11;
        StringView SVar12;
        StringView SVar13;
        StringView aSStackY_a28[128];
        TextProperties* in_stack_fffffffffffffdd8;
        StringView local_218;
        StringView local_208;
        StringView local_1f8;
        StringView local_1e8;
        StringView local_1d8;
        TextProperties local_1c8;
        uint local_194;
        uint local_190;
        uint local_18c;
        TextData* local_180;
        int local_178;
        uint local_174;
        fixed_string<char, 64, true, eastl::allocator> local_170[104];
        fixed_string<char, 64, true, eastl::allocator> local_108[104];
        shared_ptr local_a0[6];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_174 = (uint)field_628;
        iVar3 = GetMinMapX();
        local_190 = (uint)field_630;
        local_18c = (uint)m_visualParams;
        local_178 = GetStreamCountLastMix();
        local_194 = (uint)field_628;
        local_180 = (TextData*)field_544;
        iVar4 = local_180->GetEndPosition();
        new (local_a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        this_02 = (shared_ptr*)param_1->GetFont(iVar4, local_a0);
        local_a0->~shared_ptr();
        if (shared_ptr::operator_cast_to_bool(this_02)) {
            local_174 = local_174 + param_3;
            iVar4 = local_178 + local_194 * -2;
            iVar3 = (uint)m_visualParams + (int)(iVar3 - (local_190 + local_18c)) / 2 + param_4 + field_640;
            new (&local_1c8) graphics::TextProperties(this_02);
            uVar5 = GetRGBA();
            local_180->PopulateTextProperties(&local_1c8, uVar5, field_100);
            this_00 = &field_648;
            cVar2 = this_00->empty();
            uVar5 = local_174;
            if (cVar2 != '\0') {
                local_180 = (TextData*)CONCAT44(local_180._4_4_, iVar3);
                local_178 = iVar4;
                new (local_a0) eastl::fixed_string<char, 64, true, eastl::allocator>();
                eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_108);
                eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_170);
                uVar6 = GetDisplayValue(this);
                if (field_624 % field_620 == 0) {
                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                            eastl::allocator>>::sprintf((char*)local_a0,
                                                                                                        "%d",
                                                                                                        (ulong)(uint)
                                                                                                            field_608);
                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                            eastl::allocator>>::sprintf((char*)
                                                                                                            local_108,
                                                                                                        "%d",
                                                                                                        (ulong)uVar6);
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_170, "%d", (ulong)field_612);
                } else {
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_a0, (double)((float)field_608 / (float)field_620), "%.2f");
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_108, (double)((float)(int)uVar6 / (float)field_620), "%.2f");
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_170, (double)((float)(int)field_612 / (float)field_620), "%.2f");
                }
                local_1c8.SetAlignment(0);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1f8,
                                                                                              (fixed_string*)local_a0);
                SVar11.field_8._0_4_ = uVar5;
                SVar11.field_0 = (ulong)&local_1f8;
                SVar11.field_8._4_4_ = 0;
                param_2->DrawString(SVar11, (int)local_180, 0, (uint)&local_1c8, in_stack_fffffffffffffdd8);
                local_1c8.SetAlignment(1);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1e8,
                                                                                              (fixed_string*)local_108);
                SVar12.field_8._0_4_ = local_178 / 2 + uVar5;
                SVar12.field_0 = (ulong)&local_1e8;
                SVar12.field_8._4_4_ = 0;
                param_2->DrawString(SVar12, (int)local_180, 0, (uint)&local_1c8, in_stack_fffffffffffffdd8);
                local_1c8.SetAlignment(2);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_1d8,
                                                                                              (fixed_string*)local_170);
                SVar13.field_8._0_4_ = local_178 + uVar5;
                SVar13.field_0 = (ulong)&local_1d8;
                SVar13.field_8._4_4_ = 0;
                param_2->DrawString(SVar13, (int)local_180, 0, (uint)&local_1c8, in_stack_fffffffffffffdd8);
                /* WARNING: Subroutine does not return */
                local_170->~fixed_string();
            }
            local_1c8.SetAlignment(0);
            pfVar7 = (fixed_string*)this_00->front();
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(aSStackY_a28 + 128, pfVar7);
            SVar8.field_8._0_4_ = local_174;
            SVar8.field_0 = (ulong)(aSStackY_a28 + 128);
            SVar8.field_8._4_4_ = 0;
            uVar5 = (uint)&local_1c8;
            param_2->DrawString(SVar8, iVar3, 0, uVar5, in_stack_fffffffffffffdd8);
            local_1c8.SetAlignment(1);
            pfVar7 = (fixed_string*)GetDisplayValueLabel(this);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_218, pfVar7);
            SVar9.field_8._0_4_ = iVar4 / 2 + local_174;
            SVar9.field_0 = (ulong)&local_218;
            SVar9.field_8._4_4_ = 0;
            param_2->DrawString(SVar9, iVar3, 0, uVar5, in_stack_fffffffffffffdd8);
            local_1c8.SetAlignment(2);
            pfVar7 = (fixed_string*)this_00->back();
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_208, pfVar7);
            SVar10.field_8._0_4_ = iVar4 + local_174;
            SVar10.field_0 = (ulong)&local_208;
            SVar10.field_8._4_4_ = 0;
            param_2->DrawString(SVar10, iVar3, 0, uVar5, in_stack_fffffffffffffdd8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006aa870, 192 bytes, placed by class name
    // Slider::Setup(int, int, int, int, int)
    undefined4 Slider::Setup(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined4 uVar1;
        int iVar2;
        int local_40;
        int local_3c;
        int local_34;

        local_34 = param_5;
        uVar1 = ValidateValues(param_1, param_2, param_3, param_4, param_5);
        if ((char)uVar1 != '\0') {
            iVar2 = eastl::max<int>(param_4, 1);
            local_40 = 1;
            local_3c = param_2 - param_1;
            local_34 = math::Clamp<int>(&local_34, &local_40, &local_3c);
            field_608 = param_1;
            field_612 = param_2;
            m_currentValue = param_3;
            field_620 = iVar2;
            field_624 = local_34;
            (&field_648)->clear();
        }
        return uVar1;
    }

    // 0x1006aa930, 384 bytes, placed by class name
    // Slider::ValidateValues(int, int, int, int, int)
    undefined8 Slider::ValidateValues(int param_1, int param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;

        iVar1 = param_2 - param_1;
        if (iVar1 == 0 || param_2 < param_1) {
            uVar2 = logger::default_logger();
            pcVar4 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - max must be > min";
            uVar3 = 228;
        } else if ((param_3 < param_1) || (param_2 < param_3)) {
            uVar2 = logger::default_logger();
            pcVar4 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - initial value falls "
                     "outside of slider range";
            uVar3 = 233;
        } else if (iVar1 < param_4) {
            uVar2 = logger::default_logger();
            pcVar4 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - scale is greater "
                     "than the specified value range";
            uVar3 = 238;
        } else if (iVar1 < param_5) {
            uVar2 = logger::default_logger();
            pcVar4 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - tick is greater "
                     "than the specified value range";
            uVar3 = 243;
        } else if ((param_4 < 1) || (param_5 < 1)) {
            uVar2 = logger::default_logger();
            pcVar4 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - scale and tick must "
                     "both be > 0";
            uVar3 = 248;
        } else {
            if ((iVar1 % param_5 == 0) && ((param_3 - param_1) % param_5 == 0)) {
                return CONCAT71((uint7)((ulong)((long)(param_3 - param_1) / (long)param_5) >> 8) & 16777215, 1);
            }
            uVar2 = logger::default_logger();
            pcVar4 = "Could not setup slider with range [%d;%d], value %d, scale %d, and tick %d - value range isn\'t "
                     "divisible by the tick";
            uVar3 = 253;
        }
        logger::Logger::Log(
            uVar2, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp", uVar3,
            pcVar4, param_1, param_2, param_3, param_4, param_5);
        return 0;
    }

    // 0x1006aaab0, 384 bytes, placed by class name
    // Slider::Setup(UIDataMappingProvider<int, StringView> const&)
    ulong Slider::Setup(UIDataMappingProvider* param_1) {
        undefined1* this_00;
        char cVar1;
        int iVar3;
        basic_string* pbVar4;
        basic_string* pbVar5;
        pair* ppVar6;
        ulong uVar7;
        Slider* local_a0;
        StringView local_98[6];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = (**(code**)(*(long*)param_1 + 24))(param_1);
        if ((cVar1 == '\0') || (cVar1 = (**(code**)(*(long*)param_1 + 32))(param_1), cVar1 == '\0')) {
            uVar7 = 0;
        } else {
            iVar3 = (**(code**)(*(long*)param_1 + 40))(param_1);
            uVar7 = 0;
            cVar1 = Setup(this, 0, iVar3 + -1, 0, 1, 1);
            if (cVar1 != '\0') {
                local_a0 = this;
                fixedfunction::function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                    Slider::Setup(UIDataMappingProvider<int, StringView> const&)::__59, void>(
                    (function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98,
                    (__59*)&local_a0);
                (**(code**)(*(long*)param_1 + 16))(param_1, local_98);
                fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98);
                (**(code**)(*(long*)param_1 + 48))(local_98, param_1);
                this_00 = &field_648;
                pbVar4 = (basic_string*)this_00->HeapBeginPtr();
                pbVar5 = (basic_string*)this_00->end();
                if (pbVar4 != pbVar5) {
                    do {
                        if (operator==(pbVar4, local_98)) {
                            ppVar6 = (pair*)this_00->HeapBeginPtr();
                            iVar3 = eastl::distance<eastl::pair<int, oldscape::SpotAnimClient>*>(ppVar6, (pair*)pbVar4);
                            SetCurrentValue(this, iVar3, false);
                            break;
                        }
                        pbVar4 = pbVar4 + 24;
                        pbVar5 = (basic_string*)this_00->end();
                    } while (pbVar4 != pbVar5);
                }
                uVar7 = CONCAT71((int7)((ulong)this_00 >> 8), 1);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar7 & 4294967295;
    }

    // 0x1006aacc0, 224 bytes, placed by class name
    // Slider::SetCurrentValue(int, bool)
    ulong Slider::SetCurrentValue(int param_1, bool param_2) {
        undefined8 uVar1;
        undefined8 unaff_R14;
        ulong uVar2;

        if ((param_1 < field_608) || ((int)field_612 < param_1)) {
            uVar1 = logger::default_logger();
            uVar2 = 0;
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp", 137,
                "new value %d falls outside of the slider\'s [%d;%d] range", param_1, field_608, field_612);
        } else if (param_1 % field_624 == 0) {
            uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
            if (m_currentValue != param_1) {
                m_currentValue = param_1;
                m_hasRecentValueChange = m_hasRecentValueChange | param_2;
            }
        } else {
            uVar1 = logger::default_logger();
            uVar2 = 0;
            logger::Logger::Log(
                uVar1, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp", 142,
                "new value is incompatible with the slider\'s %d scale and %d tick", param_1, field_624);
        }
        return uVar2 & 4294967295;
    }

    // 0x1006aada0, 208 bytes, placed by class name
    // Slider::GetCurrentValueLabel() const
    undefined1* Slider::GetCurrentValueLabel() {
        long lVar1;
        char cVar2;
        int iVar3;
        undefined1* puVar4;

        puVar4 = &field_648;
        cVar2 = puVar4->empty();
        if (cVar2 == '\0') {
            iVar3 = puVar4->size();
            lVar1 = (long)(m_currentValue - field_608);
            iVar3 = eastl::min<graphics::GraphicsQuality>(iVar3 + -1, lVar1 / (long)field_624 & 4294967295,
                                                          lVar1 % (long)field_624 & 4294967295);
            puVar4 = (undefined1*)
                eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>,
                              eastl::fixed_vector_allocator<24ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<eastl::basic_string<char, BucketAllocatorEASTL>,
                            eastl::fixed_vector_allocator<24ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)puVar4,
                    (long)iVar3);
        } else {
            puVar4 = &GetCurrentValueLabel()::emptyString;
            if (GetCurrentValueLabel()::emptyString == '\0') {
                iVar3 = ___cxa_guard_acquire(&GetCurrentValueLabel()::emptyString);
                if (iVar3 != 0) {
                    puVar4 = &GetCurrentValueLabel()::emptyString;
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    ___cxa_atexit(PTR__basic_string_100ee6c78, &GetCurrentValueLabel()::emptyString, 4294967296);
                    ___cxa_guard_release(&GetCurrentValueLabel()::emptyString);
                }
            }
        }
        return puVar4;
    }

    // 0x1006aaec0, 128 bytes, placed by class name
    // Slider::GetCurrentValueAsString() const
    Slider* Slider::GetCurrentValueAsString() {
        long in_RSI;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>();
        if (*(int*)(in_RSI + 624) % *(int*)(in_RSI + 620) == 0) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)this, "%d", (ulong) * (uint*)(in_RSI + 616));
        } else {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)this, (double)((float)(int)*(uint*)(in_RSI + 616) / (float)*(int*)(in_RSI + 620)),
                        "%.2f");
        }
        return this;
    }

    // 0x1006aaf40, 64 bytes, placed by class name
    // Slider::SetVisualParams(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short)
    void Slider::SetVisualParams(ushort param_1, ushort param_2, ushort param_3, ushort param_4, ushort param_5,
                                 ushort param_6) {
        m_visualParams = param_1;
        field_628 = param_2;
        field_630 = param_3;
        field_634 = param_4;
        field_636 = param_5;
        field_638 = param_6;
    }

    // 0x1006aaf80, 576 bytes, placed by class name
    // Slider::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Slider::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* this_00;
        char cVar1;
        byte bVar2;
        ushort uVar3;
        int iVar4;
        uint uVar5;
        undefined4 uVar6;
        basic_string* pbVar7;
        basic_string* pbVar8;

        cVar1 = param_1->g1();
        (*(code*)field_0[4])(this, cVar1 == '\x01');
        iVar4 = param_1->g4s();
        field_608 = iVar4;
        uVar5 = param_1->g4s();
        field_612 = uVar5;
        iVar4 = param_1->g4s();
        m_currentValue = iVar4;
        iVar4 = param_1->g4s();
        field_620 = iVar4;
        iVar4 = param_1->g4s();
        field_624 = iVar4;
        this_00 = &field_648;
        uVar3 = param_1->g2();
        this_00->resize((ulong)uVar3);
        pbVar7 = (basic_string*)this_00->HeapBeginPtr();
        pbVar8 = (basic_string*)this_00->end();
        for (; pbVar7 != pbVar8; pbVar7 = pbVar7 + 24) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pbVar7, false);
        }
        cVar1 = ValidateValues(field_608, field_612, m_currentValue, field_620, field_624);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ValidateValues(m_minValue, m_maxValue, m_curValue, m_scale, m_tick)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                      183, (char*)0);
        }
        cVar1 = this_00->empty();
        if ((cVar1 == '\0') && ((iVar4 = this_00->size(), (field_612 - field_608) + 1 != iVar4 || (field_624 != 1)))) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_valueLabels.empty() || (((int)m_valueLabels.size() == ((m_maxValue - m_minValue) + 1)) && "
                      "(m_tick == 1))",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Slider.cpp",
                      186, (char*)0);
        }
        uVar3 = param_1->g2();
        field_628 = uVar3;
        uVar3 = param_1->g2();
        field_630 = uVar3;
        uVar3 = param_1->g2();
        m_visualParams = uVar3;
        uVar3 = param_1->g2();
        field_634 = uVar3;
        uVar3 = param_1->g2();
        field_636 = uVar3;
        uVar3 = param_1->g2();
        field_638 = uVar3;
        bVar2 = param_1->g1();
        field_100 = ~bVar2;
        uVar6 = param_1->g4();
        field_96 = uVar6;
        (field_544, param_1, param_2)->DecodeTextData();
        (&field_400, param_1, param_2)->DecodeSpriteData();
        (&field_448, param_1, param_2)->DecodeSpriteData();
        (&field_496, param_1, param_2)->DecodeSpriteData();
    }

    // 0x1006ab220, 320 bytes, placed by class name
    // Slider::LoadStyleSheetVisuals(StyleSheet const&)
    void Slider::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 352, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 351, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_628, 354, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_630, 355, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &m_visualParams, 356, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_634, 353, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_636, 357, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_638, 358, 1);
        StyleSheet::LoadPropertyValueIfSet<int>(param_1, &field_640, 359, 1);
        (field_544, 390, param_1)->LoadStyleSheetTextData();
        (&field_400, 380, param_1)->LoadStyleSheetSpriteData();
        (&field_448, 360, param_1)->LoadStyleSheetSpriteData();
        (&field_496, 370, param_1)->LoadStyleSheetSpriteData();
    }

    // 0x1006ab530, 224 bytes, placed by class name
    // Slider::GetDisplayValueLabel() const
    undefined1* Slider::GetDisplayValueLabel() {
        long lVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        undefined1* puVar5;

        puVar5 = &field_648;
        cVar2 = puVar5->empty();
        if (cVar2 == '\0') {
            iVar3 = puVar5->size();
            iVar4 = GetDisplayValue(this);
            lVar1 = (long)(iVar4 - field_608);
            iVar3 = eastl::min<graphics::GraphicsQuality>(iVar3 + -1, lVar1 / (long)field_624 & 4294967295,
                                                          lVar1 % (long)field_624 & 4294967295);
            puVar5 = (undefined1*)
                eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>,
                              eastl::fixed_vector_allocator<24ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<eastl::basic_string<char, BucketAllocatorEASTL>,
                            eastl::fixed_vector_allocator<24ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)puVar5,
                    (long)iVar3);
        } else {
            puVar5 = &GetDisplayValueLabel()::emptyString;
            if (GetDisplayValueLabel()::emptyString == '\0') {
                iVar3 = ___cxa_guard_acquire(&GetDisplayValueLabel()::emptyString);
                if (iVar3 != 0) {
                    puVar5 = &GetDisplayValueLabel()::emptyString;
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    ___cxa_atexit(PTR__basic_string_100ee6c78, &GetDisplayValueLabel()::emptyString, 4294967296);
                    ___cxa_guard_release(&GetDisplayValueLabel()::emptyString);
                }
            }
        }
        return puVar5;
    }

    // 0x1006acf00: the linker folded this into Button::GetValueRepresentation(), which has identical code
    Slider::GetValueRepresentation();

} // namespace jag::ui
