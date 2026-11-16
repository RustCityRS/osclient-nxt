// libs/ui/components/GroupBox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "GroupBox.h"

namespace jag::ui {
    // 0x10007d580: the linker folded this into eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator> >::Layout::GetSSOMaxCapacity() const, which has identical code
    GroupBox::GetType() const;

    // 0x1005fa390: the linker folded this into game::option::WindowMode::IsAvailable(game::option::OptionClient) const, which has identical code
    GroupBox::SupportsMargin(Component::MarginType) const;

    // 0x1006978d0, 208 bytes, base-object constructor, placed by class name
    // GroupBox::GroupBox()
    void GroupBox::GroupBox() {
        undefined1* this_00;

        ___bzero(this, 568);
        new (this) ComponentCollection();
        new (this) MakeSharedPool<GroupBox, 16>();
        field_0 = &PTR__GroupBox_100f0ed68;
        m_headerLayout = 100;
        field_569 = 30;
        field_570 = 0;
        field_571 = 0;
        field_572 = 0;
        new (&field_576, 255) Margin();
        this_00 = field_584;
        new (this_00) TextData();
        new (field_648) SpriteData();
        new (field_696) SpriteData();
        this_00->SetTextHAlign(1);
        this_00->SetTextVAlign(1);
    }

    // 0x100697ab0, 16 bytes, complete-object constructor, placed by class name
    // GroupBox::GroupBox(): jumps straight to the base-object constructor

    // 0x100697ac0, 336 bytes, placed by class name
    // GroupBox::MainDraw(ComponentDependencies const&, int, int, float)
    void GroupBox::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        int iVar1;
        int* piVar2;
        int local_50;
        Margin local_4c;
        Margin local_48;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_50 = (uint)(field_569 >> 1) - (uint)field_571;
        local_34 = 0;
        piVar2 = std::max<int>(&local_34, &local_50);
        iVar1 = *piVar2;
        local_38 = param_3 + iVar1;
        local_34 = param_2;
        local_40 = GetStreamCountLastMix();
        local_3c = GetMinMapX();
        local_3c = local_3c - iVar1;
        DrawContainer(this, *(RT7Core**)(param_1 + 16), local_34, local_38, local_40, local_3c);
        local_38 = (uint)field_569 + (uint)field_571 + param_3;
        local_3c = GetMinMapX();
        local_3c = local_3c - ((uint)field_569 + (uint)field_571);
        local_48 = (Margin)field_696->GetVisualMargin();
        local_4c = (Margin)(&field_576, &local_48)->GetValidOr();
        local_4c.ApplyTo(&local_34, &local_38, &local_40, &local_3c);
        DrawContents(this, *(InterfaceManager**)(param_1 + 48), local_34, local_38, local_40, local_3c, param_4);
        DrawLabel(this, *(RT7Core**)(param_1 + 16), *(FontManager**)(param_1 + 8), *(FontHelpers**)param_1, param_2,
                  param_3);
    }

    // 0x100697c10, 416 bytes, placed by class name
    // GroupBox::DrawContainer(graphics::RT7Core*, int, int, int, int)
    void GroupBox::DrawContainer(RT7Core* param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        uint uVar3;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar4;
        undefined* puVar5;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* pTVar6;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        long lVar7;
        undefined8 uVar8;
        undefined8 uVar9;

        this_00 = field_696;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar4 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar5 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar4, false);
        if (puVar5 == DataStatus::READY) {
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
                    pTVar6 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    if (pTVar6 == (Texture*)0) {
                        return;
                    }
                    this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_08 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    iVar2 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                    lVar7 = this_07->GetSpriteRenderMapping(iVar2);
                    uVar3 = GetRGBA();
                    this_00->DrawSpriteSlice(param_1, param_2, param_3, param_4, param_5, uVar3, (Rect*)(lVar7 + 88),
                                             pTVar6, 0.0);
                    return;
                }
                uVar8 = logger::default_logger();
                uVar9 = 126;
            } else {
                uVar8 = logger::default_logger();
                uVar9 = 118;
            }
            logger::Logger::Log(
                uVar8, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/GroupBox.cpp",
                uVar9, "Invalid sprite atlas reference!");
        }
    }

    // 0x100697db0, 288 bytes, placed by class name
    // GroupBox::DrawContents(InterfaceManager*, int, int, int, int, float)
    void GroupBox::DrawContents(InterfaceManager* param_1, int param_2, int param_3, int param_4, int param_5,
                                float param_6) {
        char cVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* pvVar5;
        undefined4 in_register_00000084;
        undefined8 uVar6;
        undefined4 in_register_0000008c;
        undefined8 uVar7;

        uVar7 = CONCAT44(in_register_0000008c, param_5);
        uVar6 = CONCAT44(in_register_00000084, param_4);
        iVar2 = (*(code*)field_0[51])();
        iVar2 = param_2 - iVar2;
        iVar3 = (*(code*)field_0[52])(this);
        iVar3 = param_3 - iVar3;
        pvVar5 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(*(
            code*)field_0[40])(this);
        cVar1 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar5);
        if (cVar1 == '\0') {
            (**(code**)(*(long*)param_1 + 8))(param_6, param_1, pvVar5, iVar2, iVar3, param_2, param_3, uVar6, uVar7);
        }
        pvVar5 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(*(
            code*)field_0[41])(this);
        cVar1 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            pvVar5);
        if (cVar1 == '\0') {
            (**(code**)(*(long*)param_1 + 8))(param_6, param_1, pvVar5, iVar2, iVar3, param_2, param_3, uVar6, uVar7);
        }
        uVar4 = GetCombinedID();
        (*(code*)**(undefined8**)param_1)(param_6, param_1, uVar4, iVar2, iVar3, param_2, param_3, uVar6, uVar7);
    }

    // 0x100697ed0, 992 bytes, placed by class name
    // GroupBox::DrawLabel(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int)
    void GroupBox::DrawLabel(RT7Core* param_1, FontManager* param_2, FontHelpers* param_3, int param_4, int param_5) {
        undefined1* this_00;
        undefined1* this_01;
        byte bVar1;
        bool bVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        uint uVar6;
        TextureManager* this_02;
        SpriteAtlasManager* pSVar7;
        undefined* puVar8;
        shared_ptr* psVar9;
        fixed_string* pfVar10;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        long lVar11;
        undefined8 uVar12;
        StringView SVar13;
        Texture* in_stack_ffffffffffffff38;
        undefined1 local_b8[40];
        TextProperties local_90;
        FontManager* local_68;
        FontHelpers* local_60;
        Texture* local_58;
        int local_4c;
        int local_48;
        uint local_44;
        uint local_40;
        int local_3c;
        uint local_38;
        int local_34;

        local_34 = (uint)field_570 + param_4;
        local_3c = (uint)field_571 + param_5;
        local_38 = (uint)m_headerLayout;
        local_40 = (uint)field_569;
        uVar4 = field_572;
        local_68 = param_2;
        local_60 = param_3;
        if (uVar4 == 0) {
            bVar1 = field_696->GetVisualMargin();
            local_34 = local_34 + (uint)bVar1;
        } else if (uVar4 == 1) {
            iVar3 = GetStreamCountLastMix();
            local_90.m_pFont._0_4_ = field_696->GetVisualMargin();
            bVar1 = local_90.GetWidth();
            iVar5 = bVar1 + local_38;
            bVar1 = field_696->GetVisualMargin();
            local_34 = (uint)bVar1 + local_34 + (iVar3 - iVar5) / 2;
        } else if (uVar4 == 2) {
            iVar3 = GetStreamCountLastMix();
            uVar4 = field_696->GetVisualMargin();
            local_34 = local_34 + (iVar3 - ((uVar4 >> 16 & 255) + local_38));
        }
        new (local_b8) graphics::ClippingState(param_1);
        param_1->SetClippingRectangle(local_34, local_3c, local_38, local_40, true);
        this_00 = field_648;
        this_02 = (TextureManager*)param_1->GetTextureManager();
        pSVar7 = (SpriteAtlasManager*)this_02->GetSpriteAtlasManager();
        puVar8 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar7, false);
        if (puVar8 == DataStatus::READY) {
            psVar9 = (shared_ptr*)this_00->GetDefaultValue();
            bVar2 = shared_ptr::operator_cast_to_bool(psVar9);
            if (!bVar2) {
                uVar12 = logger::default_logger();
                logger::Logger::Log(
                    uVar12, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/GroupBox.cpp",
                    171, "Invalid sprite atlas reference!");
                goto LAB_100698250;
            }
            this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)
                          shared_ptr<graphics::SpriteAtlasReference>::operator->(
                              (shared_ptr<graphics::SpriteAtlasReference>*)psVar9);
            this_04 = (shared_ptr*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_03);
            bVar2 = shared_ptr::operator_cast_to_bool(this_04);
            if (!bVar2) {
                uVar12 = logger::default_logger();
                logger::Logger::Log(
                    uVar12, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/GroupBox.cpp",
                    179, "Invalid sprite atlas reference!");
                goto LAB_100698250;
            }
            this_05 =
                (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->((shared_ptr<graphics::SpriteAtlas>*)this_04);
            this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
            local_58 = (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
            if (local_58 != (Texture*)0) {
                this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                    (shared_ptr<graphics::SpriteAtlas>*)this_04);
                this_08 = (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                    (shared_ptr<graphics::SpriteAtlasReference>*)psVar9);
                iVar3 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                lVar11 = this_07->GetSpriteRenderMapping(iVar3);
                uVar4 = local_40;
                local_4c = local_34;
                local_48 = local_3c;
                local_44 = local_38;
                uVar6 = GetRGBA();
                in_stack_ffffffffffffff38 = local_58;
                this_00->DrawSpriteSlice(param_1, local_4c, local_48, local_44, uVar4, uVar6, (Rect*)(lVar11 + 88),
                                         local_58, 0.0);
            }
        }
        this_01 = field_584;
        iVar3 = this_01->GetEndPosition();
        new (&local_90) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        psVar9 = (shared_ptr*)local_68->GetFont(iVar3, (shared_ptr*)&local_90);
        local_90.~shared_ptr();
        bVar2 = shared_ptr::operator_cast_to_bool(psVar9);
        if (bVar2) {
            local_90.m_pFont._0_4_ = this_00->GetVisualMargin();
            local_90.ApplyTo(&local_34, &local_3c, (int*)&local_38, (int*)&local_40);
            new (&local_90) graphics::TextProperties(psVar9);
            uVar4 = GetRGBA();
            this_01->PopulateTextProperties(&local_90, uVar4, field_100);
            pfVar10 = (fixed_string*)this_01->GetScreen();
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)(local_b8 + 24),
                                                                                          pfVar10);
            SVar13.field_8._0_4_ = local_34;
            SVar13.field_0 = (ulong)(local_b8 + 24);
            SVar13.field_8._4_4_ = 0;
            local_60->DrawStringMultiline(SVar13, local_3c, local_38, local_40, 0, (uint*)&local_90,
                                          in_stack_ffffffffffffff38);
        }
    LAB_100698250:
        local_b8->~ClippingState();
    }

    // 0x1006982b0, 48 bytes, placed by class name
    // GroupBox::SetHeaderLayout(unsigned char, unsigned char, unsigned char, unsigned char, GroupBox::HeaderAlignment)
    void GroupBox::SetHeaderLayout(byte param_1, byte param_2, byte param_3, byte param_4, uint param_6) {
        m_headerLayout = param_1;
        field_569 = param_2;
        field_570 = param_3;
        field_571 = param_4;
        field_572 = param_6;
        (*(code*)field_0[10])();
    }

    // 0x1006982e0, 176 bytes, placed by class name
    // GroupBox::ConvertToInteractableArea(int&, int&, int&, int&, int&, int&) const
    void GroupBox::ConvertToInteractableArea(int* param_1, int* param_2, int* param_3, int* param_4, int* param_5,
                                             int* param_6) {
        byte bVar1;
        ushort uVar2;
        int iVar3;
        Margin local_38;
        Margin local_34;

        local_38 = (Margin)field_696->GetVisualMargin();
        local_34 = (Margin)(&field_576, &local_38)->GetValidOr();
        uVar2 = GetContentHeaderOffset(this);
        *param_1 = *param_1 + (uint)local_34.field_0;
        iVar3 = (uint)uVar2 + ((uint)local_34 >> 8 & 255);
        *param_2 = *param_2 + iVar3;
        *param_3 = *param_3 + (uint)local_34.field_0;
        *param_4 = *param_4 + iVar3;
        bVar1 = local_34.GetWidth();
        *param_5 = *param_5 - (uint)bVar1;
        bVar1 = local_34.GetHeight();
        *param_6 = *param_6 - (uint)bVar1;
    }

    // 0x1006983b0, 272 bytes, placed by class name
    // GroupBox::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void GroupBox::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        undefined4 uVar4;
        undefined8 in_RAX;
        Margin local_24;

        local_24 = SUB84((ulong)in_RAX >> 32, 0);
        uVar3 = param_1->g2();
        field_432 = (uint)uVar3;
        uVar3 = param_1->g2();
        field_436 = (uint)uVar3;
        cVar1 = param_1->g1();
        SetClickthrough(cVar1 != '\x01');
        bVar2 = param_1->g1();
        m_headerLayout = bVar2;
        bVar2 = param_1->g1();
        field_569 = bVar2;
        bVar2 = param_1->g1();
        field_570 = bVar2;
        bVar2 = param_1->g1();
        field_571 = bVar2;
        bVar2 = param_1->g1();
        field_572 = (uint)bVar2;
        new (&local_24) Margin(param_1);
        field_576 = local_24.field_0;
        field_577 = local_24.field_1;
        field_578 = local_24.field_2;
        field_579 = local_24.field_3;
        bVar2 = param_1->g1();
        field_100 = ~bVar2;
        uVar4 = param_1->g4();
        field_96 = uVar4;
        (field_584, param_1, param_2)->DecodeTextData();
        (field_648, param_1, param_2)->DecodeSpriteData();
        (field_696, param_1, param_2)->DecodeSpriteData();
    }

    // 0x1006984c0, 272 bytes, placed by class name
    // GroupBox::LoadStyleSheetVisuals(StyleSheet const&)
    void GroupBox::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 437, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 436, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_570, 438, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_571, 439, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &m_headerLayout, 441, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_569, 442, 1);
        StyleSheet::LoadPropertyValueIfSet<int>(param_1, &field_572, 440, 1);
        (&field_576, 565, param_1)->LoadFromStylesheet();
        (field_584, 463, param_1)->LoadStyleSheetTextData();
        (field_648, 453, param_1)->LoadStyleSheetSpriteData();
        (field_696, 443, param_1)->LoadStyleSheetSpriteData();
    }

} // namespace jag::ui
