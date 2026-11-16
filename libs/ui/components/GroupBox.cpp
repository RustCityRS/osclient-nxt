// libs/ui/components/GroupBox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "GroupBox.h"

namespace jag::ui {
    // 0x10007d580: GroupBox::GetType() const has the same machine code as eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>::Layout::GetSSOMaxCapacity() const

    // 0x1005fa390: GroupBox::SupportsMargin(Component::MarginType) const has the same machine code as game::option::WindowMode::IsAvailable(game::option::OptionClient) const

    // 0x1006978d0
    GroupBox::GroupBox() {
        ___bzero(this, 568);
        new (this) ComponentCollection();
        new (this) MakeSharedPool<GroupBox, 16>();
        field_568 = 100;
        field_569 = 30;
        field_570 = 0;
        field_571 = 0;
        field_572 = 0;
        new (&field_576) Margin(255);
        uint8_t* this_00 = field_584;
        new (this_00) TextData();
        new (field_648) SpriteData();
        new (field_696) SpriteData();
        this_00->SetTextHAlign(1);
        this_00->SetTextVAlign(1);
    }

    // 0x100697ac0
    void GroupBox::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        int local_50 = (unsigned int)(field_569 >> 1) - (unsigned int)field_571;
        int local_34 = 0;
        auto piVar2 = std::max<int>(local_34, local_50);
        int iVar1 = *piVar2;
        int local_38 = arg3 + iVar1;
        local_34 = arg2;
        int local_40 = GetStreamCountLastMix();
        int local_3c = GetMinMapX();
        local_3c = local_3c - iVar1;
        DrawContainer(*(RT7Core**)(componentDependencies + 16), local_34, local_38, local_40, local_3c);
        local_38 = (unsigned int)field_569 + (unsigned int)field_571 + arg3;
        local_3c = GetMinMapX();
        local_3c = local_3c - ((unsigned int)field_569 + (unsigned int)field_571);
        Margin local_48 = (Margin)field_696->GetVisualMargin();
        ((Margin)field_576.GetValidOr(&local_48)).ApplyTo(local_34, local_38, local_40, local_3c);
        DrawContents(*(InterfaceManager**)(componentDependencies + 48), local_34, local_38, local_40, local_3c, arg4);
        DrawLabel(*(RT7Core**)(componentDependencies + 16), *(FontManager**)(componentDependencies + 8),
                  *(FontHelpers**)componentDependencies, arg2, arg3);
    }

    // 0x100697c10
    void GroupBox::DrawContainer(graphics::RT7Core* rt7Core, int arg2, int arg3, int arg4, int arg5) {
        int iVar2;
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

        uint8_t* this_00 = field_696;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                this_09 = logger::default_logger();
                iVar2 = 118;
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
                    arg6 = GetRGBA();
                    this_00->DrawSpriteSlice(*rt7Core, arg2, arg3, arg4, arg5, arg6, *((lVar4 + 88)), texture, 0.0);
                    return;
                }
                this_09 = logger::default_logger();
                iVar2 = 126;
            }
            this_09->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/GroupBox.cpp",
                iVar2, "Invalid sprite atlas reference!");
        }
    }

    // 0x100697db0
    void GroupBox::DrawContents(InterfaceManager* interfaceManager, int arg2, int arg3, int arg4, int arg5,
                                float arg6) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        uint32_t in_register_00000084;
        uint32_t in_register_0000008c;

        uint64_t uVar5 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        uint64_t uVar4 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        uint8_t uVar1 = GetScrollXPos();
        int iVar7 = arg2 - (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        uVar1 = GetScrollYPos();
        int iVar6 = arg3 - (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1);
        uVar1 = GetStaticChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                        << 8) |
                                                                                       (uint8_t)uVar1))
                  ->empty())) {
            (**(void (**)(...))(*(long*)interfaceManager + 8))(
                arg6, interfaceManager,
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_01
                                                                                         << 8) |
                                                                                        (uint8_t)uVar1),
                iVar7, iVar6, arg2, arg3, uVar4, uVar5);
        }
        uVar1 = GetDynamicChildrenWithOptionalRenderOrder();
        if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                        << 8) |
                                                                                       (uint8_t)uVar1))
                  ->empty())) {
            (**(void (**)(...))(*(long*)interfaceManager + 8))(
                arg6, interfaceManager,
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)extraout_var_02
                                                                                         << 8) |
                                                                                        (uint8_t)uVar1),
                iVar7, iVar6, arg2, arg3, uVar4, uVar5);
        }
        uint32_t uVar3 = GetCombinedID();
        (*(void (*)(...)) * *(uint64_t**)interfaceManager)(arg6, interfaceManager, uVar3, iVar7, iVar6, arg2, arg3,
                                                           uVar4, uVar5);
    }

    // 0x100697ed0
    void GroupBox::DrawLabel(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                             graphics::FontHelpers* fontHelpers, int arg4, int arg5) {
        uint8_t bVar2;
        int iVar4;
        unsigned int uVar5;
        int iVar6;
        unsigned int arg6;
        shared_ptr* psVar8;
        basic_string<char, BucketAllocatorEASTL>* str;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        long lVar9;
        Logger* pLVar10;
        uint8_t local_b8[40];
        Texture* local_58;
        int local_4c;
        int local_48;
        unsigned int local_44;

        int local_34 = (unsigned int)field_570 + arg4;
        int local_3c = (unsigned int)field_571 + arg5;
        unsigned int local_38 = (unsigned int)field_568;
        unsigned int local_40 = (unsigned int)field_569;
        HeaderAlignment HVar1 = field_572;
        if (HVar1 == 0) {
            bVar2 = field_696->GetVisualMargin();
            local_34 = local_34 + (unsigned int)bVar2;
        } else if (HVar1 == 1) {
            iVar4 = GetStreamCountLastMix();
            local_90.m_pFont._0_4_ = field_696->GetVisualMargin();
            bVar2 = local_90.GetWidth();
            iVar6 = bVar2 + local_38;
            bVar2 = field_696->GetVisualMargin();
            local_34 = (unsigned int)bVar2 + local_34 + (iVar4 - iVar6) / 2;
        } else if (HVar1 == 2) {
            iVar4 = GetStreamCountLastMix();
            uVar5 = field_696->GetVisualMargin();
            local_34 = local_34 + (iVar4 - ((uVar5 >> 16 & 255) + local_38));
        }
        new (local_b8) graphics::ClippingState(rt7Core);
        rt7Core->SetClippingRectangle(local_34, local_3c, local_38, local_40, true);
        uint8_t* this_00 = field_648;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            psVar8 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                pLVar10 = logger::default_logger();
                pLVar10->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/GroupBox.cpp",
                    171, "Invalid sprite atlas reference!");
                goto LAB_100698250;
            }
            this_03 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar8).operator->();
            this_04 = (shared_ptr*)this_03->second();
            if (!(shared_ptr::operator_cast_to_bool(this_04))) {
                pLVar10 = logger::default_logger();
                pLVar10->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/GroupBox.cpp",
                    179, "Invalid sprite atlas reference!");
                goto LAB_100698250;
            }
            this_05 = (MapArea*)(*this_04).operator->();
            this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
            local_58 = (Texture*)this_06->end();
            if (local_58 != nullptr) {
                this_07 = (SpriteAtlas*)(*this_04).operator->();
                iVar4 = ((FastPool<audio::SoundInstance, int>*)(*psVar8).operator->())->capacity();
                lVar9 = this_07->GetSpriteRenderMapping(iVar4);
                uVar5 = local_40;
                local_4c = local_34;
                local_48 = local_3c;
                local_44 = local_38;
                arg6 = GetRGBA();
                this_00->DrawSpriteSlice(*rt7Core, local_4c, local_48, local_44, uVar5, arg6, *((lVar9 + 88)), local_58,
                                         0.0);
            }
        }
        uint8_t* this_01 = field_584;
        iVar4 = this_01->GetEndPosition();
        TextProperties local_90;
        psVar8 = (shared_ptr*)fontManager->GetFont(iVar4, local_90);
        if (shared_ptr::operator_cast_to_bool(psVar8)) {
            local_90.m_pFont._0_4_ = this_00->GetVisualMargin();
            local_90.ApplyTo(local_34, local_3c, local_38, local_40);
            local_90 = graphics::TextProperties(*psVar8);
            uVar5 = GetRGBA();
            this_01->PopulateTextProperties(local_90, uVar5, field_100);
            str = (basic_string<char, BucketAllocatorEASTL>*)this_01->GetScreen();
            ((local_b8 + 24))->StringView<eastl::fixed_string<char, 40>>(*str);
            fontHelpers->DrawStringMultiline((local_b8 + 24), local_34, local_3c, local_38, local_40, nullptr,
                                             local_90);
        }
    LAB_100698250:
    }

    // 0x1006982b0
    void GroupBox::SetHeaderLayout(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4,
                                   GroupBox::HeaderAlignment headerAlignment) {
        field_568 = arg1;
        field_569 = arg2;
        field_570 = arg3;
        field_571 = arg4;
        field_572 = headerAlignment;
        ~();
    }

    // 0x1006982e0
    void GroupBox::ConvertToInteractableArea(int& arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6) const {
        Margin local_38 = (Margin)field_696->GetVisualMargin();
        Margin local_34 = (Margin)field_576.GetValidOr(&local_38);
        unsigned short uVar2 = GetContentHeaderOffset();
        arg1 = arg1 + (unsigned int)local_34.field_0;
        int iVar3 = (unsigned int)uVar2 + ((unsigned int)local_34 >> 8 & 255);
        arg2 = arg2 + iVar3;
        arg3 = arg3 + (unsigned int)local_34.field_0;
        arg4 = arg4 + iVar3;
        uint8_t bVar1 = local_34.GetWidth();
        arg5 = arg5 - (unsigned int)bVar1;
        bVar1 = local_34.GetHeight();
        arg6 = arg6 - (unsigned int)bVar1;
    }

    // 0x1006983b0
    void GroupBox::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint64_t in_RAX;

        Margin local_24 = (uint32_t)((unsigned long)in_RAX >> 32);
        unsigned short uVar3 = arg1.g2();
        field_432 = (unsigned int)uVar3;
        uVar3 = arg1.g2();
        field_436 = (unsigned int)uVar3;
        SetClickthrough(arg1.g1() != '\x01');
        uint8_t bVar2 = arg1.g1();
        field_568 = bVar2;
        bVar2 = arg1.g1();
        field_569 = bVar2;
        bVar2 = arg1.g1();
        field_570 = bVar2;
        bVar2 = arg1.g1();
        field_571 = bVar2;
        bVar2 = arg1.g1();
        field_572 = (unsigned int)bVar2;
        local_24 = Margin(arg1);
        field_576 = local_24.field_0;
        field_577 = local_24.field_1;
        field_578 = local_24.field_2;
        field_579 = local_24.field_3;
        bVar2 = arg1.g1();
        field_100 = ~bVar2;
        field_96 = arg1.g4();
        field_584->DecodeTextData(arg1, arg2);
        field_648->DecodeSpriteData(arg1, arg2);
        field_696->DecodeSpriteData(arg1, arg2);
    }

    // 0x1006984c0
    void GroupBox::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 437, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 436, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_570, 438, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_571, 439, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_568, 441, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_569, 442, true);
        styleSheet.LoadPropertyValueIfSet<int>(field_572, 440, true);
        field_576.LoadFromStylesheet(565, styleSheet);
        field_584->LoadStyleSheetTextData(463, styleSheet);
        field_648->LoadStyleSheetSpriteData(453, styleSheet);
        field_696->LoadStyleSheetSpriteData(443, styleSheet);
    }

} // namespace jag::ui
