// libs/ui/components/Carousel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "Carousel.h"

namespace jag::ui {
    // 0x100029ea0: Carousel::GetSwipeable() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: Carousel::RequiresSeparatePreviousValueTrigger() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100269b00: Carousel::GetType() const has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetOwner::GetID() const

    // 0x1005fa390: Carousel::SupportsMargin(Component::MarginType) const has the same machine code as game::option::WindowMode::IsAvailable(game::option::OptionClient) const

    // 0x10068b240
    Carousel::Carousel() : Component() {
        new (this) MakeSharedPool<Carousel, 32>();
        *(uint8_t***)m_valueRepresentation = &PTR__Carousel_100f0e7c0;
        new (field_400) SpriteData();
        new (field_448) SpriteData();
        uint8_t* this_00 = field_496;
        new (this_00) TextData();
        field_560 = 20;
        field_562 = 20;
        field_564 = 10;
        new (&field_568) eastl::fixed_vector<Carousel::Entry, 5ul, true, BucketAllocatorEASTL>();
        field_928 = 65535;
        field_930 = 65535;
        new (&field_932) Margin(255);
        field_936 = 0.0;
        new (&field_940) ButtonElement(0, 3);
        new (field_968) ButtonElement(0, 3);
        SetEnabled((uint8_t)this);
        this_00->SetTextHAlign(1);
        this_00->SetTextVAlign(1);
    }

    // 0x10068b470
    void Carousel::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                             bool arg5, bool arg6, bool arg7) {
        unsigned short arg1;
        int iVar3;
        char* pcVar4;
        Margin local_38;

        int local_40 = GetStreamCountLastMix();
        int local_3c = GetMinMapX();
        local_38[0] = (Margin)field_400->GetVisualMargin();
        ((Margin)field_932.GetValidOr(&local_38)).ApplyTo(arg2, arg3, local_40, local_3c);
        int iVar5 = (int)(local_3c - (unsigned int)field_562) / 2;
        uint8_t arg8 = (uint8_t)((float)*(uint64_t*)(componentDependencies + 60) - (float)arg2);
        local_38[0] =
            (Margin)field_940.UpdateLogic((Vector2T<float>*)(unsigned long)field_564, iVar5, (unsigned int)field_560,
                                          (unsigned int)field_562, (unsigned int)arg6, arg4, arg5, (bool)arg8);
        uint8_t bVar1 = local_38.empty();
        local_38[0] = (Margin)field_968->UpdateLogic(
            (Vector2T<float>*)(unsigned long)(local_40 - ((unsigned int)field_564 + (unsigned int)field_560)), iVar5,
            (unsigned int)field_560, (unsigned int)field_562, (unsigned int)arg6, arg4, arg5, (bool)arg8);
        bool cVar2 = local_38.empty();
        iVar5 = 1;
        if (!cVar2) {
            iVar5 = -(unsigned int)bVar1;
        }
        if (iVar5 != 0) {
            arg1 = WrapSelectedEntryOffset(iVar5);
            if (arg1 != field_928) {
                do {
                    pcVar4 = &field_568[(unsigned long)arg1];
                    if (*pcVar4 != '\0')
                        break;
                    iVar3 = math::sign<int>(iVar5);
                    iVar5 = iVar5 + iVar3;
                    arg1 = WrapSelectedEntryOffset(iVar5);
                } while (arg1 != field_928);
            }
            if (arg1 != field_928) {
                SetEntrySelectedByIndex(arg1, true);
            }
        }
        if (arg6) {
            ApplyScroll((float)*(int*)(componentDependencies + 68) * 0.2);
        }
    }

    // 0x10068b680
    short Carousel::WrapSelectedEntryOffset(int arg1) const {
        short sVar4;

        uint8_t* this_00 = &field_568;
        if (this_00->empty() != '\0') {
            LogAssert(
                "!m_entries.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp", 317,
                nullptr);
        }
        if (131070 < arg1 + 65535U) {
            LogAssert(
                "(offset >= -0xFFFF) && (offset <= 0xFFFF)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp", 318,
                nullptr);
        }
        unsigned short uVar1 = field_928;
        int iVar5 = this_00->size();
        long lVar2 = (long)(int)((unsigned int)uVar1 + arg1) % (long)iVar5;
        iVar5 = (int)lVar2;
        short sVar7 = (short)lVar2;
        if (iVar5 < 0) {
            sVar4 = this_00->size();
            sVar7 = sVar4 + sVar7;
        } else {
            if (this_00->size() < iVar5) {
                sVar4 = this_00->size();
                sVar7 = sVar7 - sVar4;
            }
        }
        return sVar7;
    }

    // 0x10068b7a0
    void Carousel::SetEntrySelectedByIndex(unsigned short arg1, bool arg2) {
        uint32_t in_register_00000011;

        bool cVar1 = HasRecentValueChange();
        field_928 = arg1;
        if (((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) && (!cVar1)) {
            field_930 = arg1;
        }
    }

    // 0x10068b7e0
    void Carousel::ApplyScroll(float arg1) {
        unsigned short arg1_00;
        int iVar1;
        uint8_t uVar3;
        uint8_t extraout_AL;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint16_t extraout_var;
        uint32_t extraout_var_00;
        int arg1_01;
        float fVar4;

        if (field_568.empty() == '\0') {
            fVar4 = arg1 + field_936;
            arg1_01 = 0;
            if (1.0 <= fVar4) {
                arg1_01 = 0;
                do {
                    arg1_01 = arg1_01 + 1;
                    fVar4 = fVar4 - 1.0;
                } while (1.0 <= fVar4);
            }
            field_936 = fVar4;
            if (fVar4 <= -1.0) {
                do {
                    arg1_01 = arg1_01 - 1;
                    fVar4 = fVar4 + 1.0;
                } while (fVar4 <= -1.0);
                field_936 = fVar4;
            }
            if (arg1_01 != 0) {
                while (true) {
                    uVar3 = WrapSelectedEntryOffset(arg1_01);
                    arg1_00 = (((uint16_t)extraout_AH << 8) | (uint8_t)uVar3);
                    if (((((uint16_t)extraout_AH << 8) | (uint8_t)uVar3) == field_928) ||
                        (field_568[(unsigned long)arg1_00],
                         *(char*)(((uint64_t)extraout_var_00 << 32) |
                                  (uint32_t)((((uint32_t)extraout_var << 16) |
                                              (uint16_t)((((uint16_t)extraout_AH_00 << 8) | (uint8_t)extraout_AL))))) !=
                             '\0'))
                        break;
                    iVar1 = math::sign<int>(arg1_01);
                    arg1_01 = arg1_01 + iVar1;
                }
                if (arg1_00 != field_928) {
                    SetEntrySelectedByIndex(arg1_00, true);
                }
            }
        }
    }

    // 0x10068b8f0
    void Carousel::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        SpriteAtlasManager* spriteAtlasManager;

        if (field_568.empty() == '\0') {
            spriteAtlasManager =
                ((*(RT7Core**)(componentDependencies + 16))->GetTextureManager())->GetSpriteAtlasManager();
            PrepareEntryIcons(*spriteAtlasManager);
            UpdateAnimations(arg4);
            DrawBackground(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
            DrawSelectedEntry(*(RT7Core**)(componentDependencies + 16), *(FontManager**)(componentDependencies + 8),
                              *(FontHelpers**)componentDependencies, arg2, arg3);
            DrawButtons(*(RT7Core**)(componentDependencies + 16), arg2, arg3);
        }
    }

    // 0x10068b9a0
    unsigned long Carousel::PrepareEntryIcons(graphics::SpriteAtlasManager& spriteAtlasManager) {
        shared_ptr* psVar4;
        uint8_t uVar5;
        uint64_t unaff_R13;
        ReturnValue local_60;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        long long local_40;

        auto psVar2 = field_568.HeapBeginPtr();
        auto psVar3 = field_568.end();
        uint64_t uVar6 = (uint64_t)((unsigned long)unaff_R13 >> 8);
        if (psVar2 == psVar3) {
            uVar5 = 1;
        } else {
            uVar5 = 1;
            psVar2 = psVar2 + 3;
            do {
                if ((long)*(int*)(psVar2 - 1) == 18446744073709551615) {
                    if (psVar2[-1].field_8 != -1) {
                        psVar2[-1].field_8 = -1;
                        psVar2->reset();
                    }
                } else {
                    if (psVar2[-1].field_8 == -1) {
                        psVar2[-1].field_8 = (long)*(int*)(psVar2 - 1) | 262144;
                        psVar2->reset();
                    }
                    if (!(shared_ptr::operator_cast_to_bool(psVar2))) {
                        local_40 = psVar2[-1].field_8;
                        local_50 = shared_ptr();
                        local_60 = spriteAtlasManager.GetSpriteReference(local_40, local_50, 2);
                        *psVar2 = local_60;
                    }
                    if (shared_ptr::operator_cast_to_bool(psVar2)) {
                        if (((SpriteAtlasReference*)(*psVar2).operator->())->IsReady()) {
                            uVar5 = 0;
                        }
                        uVar6 = 0;
                    }
                }
                psVar4 = psVar2 + 1;
                psVar2 = psVar2 + 4;
            } while (psVar4 != psVar3);
        }
        return uVar5 & 4294967295;
    }

    // 0x10068bb30
    void Carousel::UpdateAnimations(float arg1) {
        if (IsEnabled() != '\0') {
            field_940.UpdateAnimations(arg1);
            field_968->UpdateAnimations(arg1);
        }
    }

    // 0x10068bb80
    void Carousel::DrawBackground(graphics::RT7Core* rt7Core, int arg2, int arg3) {
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

        uint8_t* this_00 = field_400;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                this_09 = logger::default_logger();
                iVar2 = 361;
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
                iVar2 = 369;
            }
            this_09->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp",
                iVar2, "Invalid sprite atlas reference!");
        }
    }

    // 0x10068bd10
    void Carousel::DrawSelectedEntry(graphics::RT7Core* rt7Core, graphics::FontManager* fontManager,
                                     graphics::FontHelpers* fontHelpers, int arg4, int arg5) {
        int iVar3;
        unsigned int uVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_00;
        shared_ptr* this_01;
        MapArea* this_02;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        SpriteAtlas* this_04;
        shared_ptr* psVar7;
        StringView local_90;
        TextProperties local_80;
        int local_54;
        Texture* local_50;

        int iVar6 = (unsigned int)field_560 + (unsigned int)field_564 * 2;
        int local_40 = arg4 + iVar6;
        RT7Core* local_48 = rt7Core;
        int local_3c = arg5;
        int iVar2 = GetStreamCountLastMix();
        EnumOptionToggle local_38 = iVar2 + iVar6 * -2;
        EnumOptionToggle local_34 = GetMinMapX();
        local_80.m_pFont._0_4_ = field_400->GetVisualMargin();
        ((Margin)field_932.GetValidOr(&local_80)).ApplyTo(local_40, local_3c, local_38, local_34);
        long lVar5 = field_568[(unsigned long)field_928];
        if (*(int*)(lVar5 + 32) == -1) {
            local_48 = (RT7Core*)fontHelpers;
            if (!(((lVar5 + 8))->empty())) {
                local_50 = (Texture*)field_496;
                iVar2 = local_50->GetEndPosition();
                local_80 = shared_ptr();
                psVar7 = (shared_ptr*)fontManager->GetFont(iVar2, local_80);
                if (shared_ptr::operator_cast_to_bool(psVar7)) {
                    local_80 = graphics::TextProperties(*psVar7);
                    uVar4 = GetRGBA();
                    local_50->PopulateTextProperties(local_80, uVar4, field_100);
                    local_90.StringView<eastl::fixed_string<char, 40>>(*((lVar5 + 8)));
                    local_48->DrawStringMultiline(&local_90, local_40, local_3c, local_38, local_34, nullptr, local_80);
                }
            }
        } else {
            psVar7 = (shared_ptr*)(lVar5 + 48);
            if (shared_ptr::operator_cast_to_bool(psVar7)) {
                this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar7)
                              .operator->();
                this_01 = (shared_ptr*)this_00->second();
                if (!(shared_ptr::operator_cast_to_bool(this_01))) {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "Carousel.cpp",
                              405, "Invalid sprite atlas reference!");
                } else {
                    this_02 = (MapArea*)(*this_01).operator->();
                    this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetOrigin();
                    local_50 = (Texture*)this_03->end();
                    this_04 = (SpriteAtlas*)(*this_01).operator->();
                    iVar2 = ((FastPool<audio::SoundInstance, int>*)(*psVar7).operator->())->capacity();
                    lVar5 = this_04->GetSpriteRenderMapping(iVar2);
                    iVar3 = eastl::min<graphics::GraphicsQuality>(local_38, local_34);
                    local_40 = local_40 + (int)(local_38 - iVar3) / 2;
                    local_3c = local_3c + (int)(local_34 - iVar3) / 2;
                    local_48 = (RT7Core*)local_48->GetGUIManager();
                    iVar6 = local_3c;
                    iVar2 = local_40;
                    local_54 = local_40 + iVar3;
                    iVar3 = iVar3 + local_3c;
                    uVar4 = GetRGBA();
                    local_48->AddElement(iVar2, iVar6, local_54, iVar3, uVar4, *((lVar5 + 88)), local_50, 1);
                }
            }
        }
    }

    // 0x10068bfe0
    void Carousel::DrawButtons(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        unsigned int uVar1;
        uint8_t bVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        Logger* this_09;
        ReturnValue local_78;
        ButtonElement* local_68;
        Texture* local_60;
        ButtonElement* local_58;
        uint64_t local_50;
        Margin* local_48;
        Margin local_40;
        int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        uint8_t* this_00 = field_448;
        SpriteAtlasManager* spriteAtlasManager = rt7Core->GetTextureManager()->GetSpriteAtlasManager();
        if ((uint8_t*)this_00->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            local_50 = (((uint64_t)local_50._4_4_ << 32) | (uint32_t)arg3);
            local_3c = arg2;
            this_02 = (shared_ptr*)this_00->GetDefaultValue();
            if (!(shared_ptr::operator_cast_to_bool(this_02))) {
                this_09 = logger::default_logger();
                iVar5 = 448;
            } else {
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_02)
                              .operator->();
                this_04 = (shared_ptr*)this_03->second();
                if (shared_ptr::operator_cast_to_bool(this_04)) {
                    this_05 = (MapArea*)(*this_04).operator->();
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    local_60 = (Texture*)this_06->end();
                    if (local_60 == nullptr) {
                        return;
                    }
                    local_48 = (Margin*)&field_932;
                    local_78[0]._0_4_ = field_400->GetVisualMargin();
                    local_40 = (Margin)local_48->GetValidOr(&local_78);
                    this_07 = (SpriteAtlas*)(*this_04).operator->();
                    iVar5 = ((FastPool<audio::SoundInstance, int>*)(*this_02).operator->())->capacity();
                    local_48 = (Margin*)this_07->GetSpriteRenderMapping(iVar5);
                    iVar5 = local_3c;
                    local_38 = (unsigned int)field_564 + (unsigned int)local_40.field_0 + local_3c;
                    uVar1 = (unsigned int)local_40 >> 16;
                    iVar6 = GetStreamCountLastMix();
                    local_3c = (iVar5 + iVar6) - ((unsigned int)field_560 + (unsigned int)field_564 + (uVar1 & 255));
                    iVar5 = GetMinMapX();
                    bVar3 = local_40.GetHeight();
                    local_34 = (unsigned int)field_562;
                    iVar5 = (int)(((unsigned int)bVar3 + iVar5) - local_34) / 2 + (int)local_50;
                    local_68 = (ButtonElement*)&field_940;
                    local_58 = (ButtonElement*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)((unsigned int)field_560));
                    local_50 = GetRGBA();
                    bVar4 = (bool)IsEnabled();
                    local_48 = (Margin*)((long)local_48 + 88);
                    local_68->Draw(*rt7Core, local_38, iVar5, (unsigned short)local_58, (unsigned short)local_34,
                                   (unsigned int)local_50, bVar4, local_60, *local_48, *this_00, false);
                    local_58 = (ButtonElement*)field_968;
                    local_38 = (unsigned int)field_560;
                    local_34 = (unsigned int)field_562;
                    local_50 = GetRGBA();
                    bVar4 = (bool)IsEnabled();
                    local_78 = local_48->FlipHorizontally();
                    local_58->Draw(*rt7Core, local_3c, iVar5, (unsigned short)local_38, (unsigned short)local_34,
                                   (unsigned int)local_50, bVar4, local_60, local_78, *this_00, false);
                    return;
                }
                this_09 = logger::default_logger();
                iVar5 = 456;
            }
            this_09->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp",
                iVar5, "Invalid sprite atlas reference!");
        }
    }

    // 0x10068c2a0
    void Carousel::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        int arg2_00;
        uint8_t bVar1;
        unsigned short uVar4;
        Margin in_EAX;
        uint32_t uVar6;
        long lVar8;
        Logger* this_01;
        uint64_t uVar10;
        uint64_t local_38;

        local_38._0_4_ = in_EAX;
        arg1.g1();
        SetEnabled((uint8_t)this);
        uint8_t* this_00 = &field_568;
        unsigned short uVar2 = arg1.g2();
        this_00->resize((unsigned long)uVar2);
        long lVar7 = this_00->capacity();
        local_38 = (((uint64_t)arg2 << 32) | (uint32_t)local_38._0_4_);
        if (lVar7 == 0) {
            uVar2 = arg1.g2();
            this_00->resize((unsigned long)uVar2);
            lVar7 = this_00->HeapBeginPtr();
            lVar8 = this_00->end();
            for (; lVar7 != lVar8; lVar7 = lVar7 + 64) {
                uVar6 = arg1.g4s();
                *(uint32_t*)(lVar7 + 32) = uVar6;
            }
        } else {
            lVar7 = this_00->HeapBeginPtr();
            lVar8 = this_00->end();
            for (; lVar7 != lVar8; lVar7 = lVar7 + 64) {
                arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>((lVar7 + 8), false);
            }
            arg1.g2();
        }
        unsigned long uVar9 = this_00->size();
        if (65533 < uVar9) {
            LogAssert(
                "m_entries.size() < MAX_ENTRY_COUNT",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp", 118,
                nullptr);
        }
        uVar2 = arg1.g2();
        if (this_00->size() == uVar2) {
            if (this_00->size() != 0) {
                uVar2 = 0;
                do {
                    uVar6 = arg1.g4s();
                    lVar7 = (*this_00)[(unsigned long)uVar2];
                    *(uint32_t*)(lVar7 + 4) = uVar6;
                    uVar2 = uVar2 + 1;
                    uVar4 = this_00->size();
                } while (uVar2 < uVar4);
            }
            uVar2 = arg1.g2();
            field_928 = uVar2;
            field_930 = uVar2;
            uVar9 = this_00->size();
            if (uVar9 <= uVar2) {
                LogAssert(
                    "m_selectedEntryIndex < m_entries.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp",
                    136, nullptr);
            }
            uVar2 = arg1.g2();
            field_560 = uVar2;
            uVar2 = arg1.g2();
            field_562 = uVar2;
            uVar2 = arg1.g2();
            field_564 = uVar2;
            new (&local_38) Margin(arg1);
            field_932 = (uint8_t)local_38;
            field_933 = local_38._1_1_;
            field_934 = local_38._2_1_;
            field_935 = local_38._3_1_;
            bVar1 = arg1.g1();
            field_100 = ~bVar1;
            uVar6 = arg1.g4();
            field_96 = uVar6;
            arg2_00 = local_38._4_4_;
            field_496->DecodeTextData(arg1, local_38._4_4_);
            field_448->DecodeSpriteData(arg1, arg2_00);
            field_400->DecodeSpriteData(arg1, arg2_00);
        } else {
            this_01 = logger::default_logger();
            uVar10 = this_00->size();
            this_01->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp", 124,
                "Carousel entry encoding mismatch - expected %u values but got %u", uVar10, (unsigned long)uVar2);
        }
    }

    // 0x10068c5b0
    void Carousel::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 205, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 204, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_560, 206, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_562, 207, true);
        styleSheet.LoadPropertyValueIfSet<unsigned short>(field_564, 208, true);
        field_932.LoadFromStylesheet(237, styleSheet);
        field_496->LoadStyleSheetTextData(229, styleSheet);
        field_400->LoadStyleSheetSpriteData(219, styleSheet);
        field_448->LoadStyleSheetSpriteData(209, styleSheet);
    }

    // 0x10068c6e0
    uint16_t Carousel::GetEntryIndexById(int arg1) const {
        uint16_t uVar1;
        __25* in_RCX;

        uint8_t* this_00 = &field_568;
        int local_1c = arg1;
        auto pEVar2 = this_00->HeapBeginPtr();
        auto pEVar3 = this_00->end();
        pEVar2 = eastl::find<Carousel::Entry const*, int, int->GetEntryIndexById() const ::__25>(pEVar2, pEVar3,
                                                                                                 &local_1c, in_RCX);
        pEVar3 = (Entry*)this_00->end();
        if (pEVar2 == pEVar3) {
            uVar1 = 65535;
        } else {
            pEVar3 = (Entry*)this_00->HeapBeginPtr();
            uVar1 = eastl::distance<eastl::pair<eastl::fixed_string<char, 16>, unsigned int>*>(pEVar3, pEVar2);
        }
        return uVar1;
    }

    // 0x10068c7a0
    bool Carousel::SetEntryEnabled(int arg1, bool arg2) {
        uint8_t extraout_AL;
        uint8_t extraout_AH;
        uint8_t extraout_AH_00;
        uint16_t extraout_var;
        uint32_t extraout_var_00;

        uint8_t uVar1 = GetEntryIndexById(arg1);
        if ((((uint16_t)extraout_AH << 8) | (uint8_t)uVar1) != -1) {
            field_568[(unsigned long)(((uint16_t)extraout_AH << 8) | (uint8_t)uVar1)];
            *(bool*)(((uint64_t)extraout_var_00 << 32) |
                     (uint32_t)((((uint32_t)extraout_var << 16) |
                                 (uint16_t)((((uint16_t)extraout_AH_00 << 8) | (uint8_t)extraout_AL))))) = arg2;
        }
        return uVar1 != 65535;
    }

    // 0x10068c7f0
    bool Carousel::GetEntryEnabled(int arg1) const {
        char* pcVar2;
        bool bVar3;

        unsigned short uVar1 = GetEntryIndexById(arg1);
        if (uVar1 == 65535) {
            bVar3 = false;
        } else {
            pcVar2 = &field_568[(unsigned long)uVar1];
            bVar3 = *pcVar2 != '\0';
        }
        return bVar3;
    }

    // 0x10068c870
    bool Carousel::SetSelectedEntry(int arg1, bool arg2) {
        uint8_t extraout_AH;

        uint8_t uVar1 = GetEntryIndexById(arg1);
        if ((((uint16_t)extraout_AH << 8) | (uint8_t)uVar1) != -1) {
            SetEntrySelectedByIndex((((uint16_t)extraout_AH << 8) | (uint8_t)uVar1), arg2);
        }
        return uVar1 != 65535;
    }

    // 0x10068c8d0
    unsigned int Carousel::AddEntry(int arg1, const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        int local_24;

        unsigned int uVar1 = HasEntry(arg1);
        if ((char)uVar1 == '\0') {
            field_568.emplace_back<int&, eastl::basic_string<char, BucketAllocatorEASTL> const&>(local_24, str);
            if (field_928 == 65535) {
                field_928 = 0;
                field_930 = 0;
            }
        }
        return uVar1 ^ 1;
    }

    // 0x10068c9d0
    unsigned int Carousel::AddEntry(int arg1, int arg2) {
        unsigned int uVar1 = HasEntry(arg1);
        if ((char)uVar1 == '\0') {
            field_568.emplace_back<int&, int&>(arg1, arg2);
            if (field_928 == 65535) {
                field_928 = 0;
                field_930 = 0;
            }
        }
        return uVar1 ^ 1;
    }

    // 0x10068cab0
    void Carousel::ClearEntries() {
        field_568.clear();
        field_928 = 65535;
        field_930 = 65535;
    }

    // 0x10068cb80
    uint64_t Carousel::ProcessSwipeMovement(const math::Vector2T<int>& vector21, const math::Vector2T<int>& vector22,
                                            float arg3) {
        int iVar1;
        int iVar3;

        if (IsEnabled() != '\0') {
            iVar1 = *(int*)vector22;
            iVar3 = GetStreamCountLastMix();
            ApplyScroll(((float)-iVar1 + (float)-iVar1) / (float)iVar3);
        }
        return 1;
    }

    // 0x1006acf00: Carousel::GetValueRepresentation() has the same machine code as Button::GetValueRepresentation()

    // 0x1006c5d10
    bool Carousel::GetEntryIndexById(int) const ::$_25::operator()(const Carousel::Entry& entry, int arg2) const {
        return *(int*)(this + 4) == (int)entry;
    }

} // namespace jag::ui
