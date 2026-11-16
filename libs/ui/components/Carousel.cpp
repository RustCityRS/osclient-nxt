// libs/ui/components/Carousel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "Carousel.h"

namespace jag::ui {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Carousel::GetSwipeable() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Carousel::RequiresSeparatePreviousValueTrigger() const;

    // 0x100269b00: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetOwner::GetID() const, which has identical code
    Carousel::GetType() const;

    // 0x1005fa390: the linker folded this into game::option::WindowMode::IsAvailable(game::option::OptionClient) const, which has identical code
    Carousel::SupportsMargin(Component::MarginType) const;

    // 0x10068b240, 368 bytes, base-object constructor, placed by class name
    // Carousel::Carousel()
    void Carousel::Carousel() {
        undefined1* this_00;

        new (this) Component();
        new (m_valueRepresentation) ComponentSingleValueMultiOptionMixin();
        new (this) MakeSharedPool<Carousel, 32>();
        field_0 = &PTR__Carousel_100f0e680;
        *(undefined***)m_valueRepresentation = &PTR__Carousel_100f0e7c0;
        new (field_400) SpriteData();
        new (field_448) SpriteData();
        this_00 = field_496;
        new (this_00) TextData();
        field_560 = 20;
        field_562 = 20;
        field_564 = 10;
        new (&field_568) eastl::fixed_vector<Carousel::Entry, 5ul, true, BucketAllocatorEASTL>();
        m_entrySelectedByIndex = 65535;
        field_930 = 65535;
        new (&field_932, 255) Margin();
        field_936 = 0.0;
        new (&field_940, 0, 3) ButtonElement();
        new (field_968, 0, 3) ButtonElement();
        (*(code*)field_0[4])(this, 1);
        this_00->SetTextHAlign(1);
        this_00->SetTextVAlign(1);
    }

    // 0x10068b460, 16 bytes, complete-object constructor, placed by class name
    // Carousel::Carousel(): jumps straight to the base-object constructor

    // 0x10068b470, 512 bytes, placed by class name
    // Carousel::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void Carousel::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                             bool param_6, bool param_7) {
        bool bVar1;
        bool bVar2;
        ushort uVar3;
        int iVar4;
        char* pcVar5;
        int iVar6;
        undefined7 in_register_00000081;
        undefined7 in_register_00000089;
        ulong uVar7;
        ulong uVar8;
        ButtonElement* pBVar9;
        Margin local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        Margin local_38[2];

        uVar7 = CONCAT71(in_register_00000089, param_5) & 4294967295;
        uVar8 = CONCAT71(in_register_00000081, param_4) & 4294967295;
        local_48 = param_2;
        local_44 = param_3;
        local_40 = GetStreamCountLastMix();
        local_3c = GetMinMapX();
        local_38[0] = (Margin)field_400->GetVisualMargin();
        local_4c = (Margin)(&field_932, local_38)->GetValidOr();
        local_4c.ApplyTo(&local_48, &local_44, &local_40, &local_3c);
        pBVar9._0_4_ = (ButtonElement*)((float)*(undefined8*)(param_1 + 60) - (float)local_48);
        iVar6 = (int)(local_3c - (uint)field_562) / 2;
        local_38[0] = (Margin)pBVar9._0_4_->UpdateLogic(&field_940, field_564, iVar6, field_560, field_562, param_6,
                                                        uVar8, uVar7, (undefined4)pBVar9._0_4_,
                                                        (int)((ulong) * (undefined8*)(param_1 + 60) >> 32));
        bVar1 = local_38->empty();
        local_38[0] = (Margin)pBVar9._0_4_->UpdateLogic(field_968, local_40 - ((uint)field_564 + (uint)field_560),
                                                        iVar6, field_560, field_562, param_6, uVar8, uVar7);
        bVar2 = local_38->empty();
        iVar6 = 1;
        if (!bVar2) {
            iVar6 = -(uint)bVar1;
        }
        if (iVar6 != 0) {
            uVar3 = WrapSelectedEntryOffset(this, iVar6);
            if (uVar3 != m_entrySelectedByIndex) {
                do {
                    pcVar5 = (char*)
                        eastl::vector<Carousel::Entry,
                                      eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                        operator[](
                            (vector<Carousel::Entry, eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true,
                                                                                   BucketAllocatorEASTL>>*)&field_568,
                            (ulong)uVar3);
                    if (*pcVar5 != '\0')
                        break;
                    iVar4 = math::sign<int>(iVar6);
                    iVar6 = iVar6 + iVar4;
                    uVar3 = WrapSelectedEntryOffset(this, iVar6);
                } while (uVar3 != m_entrySelectedByIndex);
            }
            if (uVar3 != m_entrySelectedByIndex) {
                SetEntrySelectedByIndex(this, uVar3, true);
            }
        }
        if (param_6) {
            ApplyScroll(this, (float)*(int*)(param_1 + 68) * 0.2);
        }
    }

    // 0x10068b680, 192 bytes, placed by class name
    // Carousel::WrapSelectedEntryOffset(int) const
    short Carousel::WrapSelectedEntryOffset(int param_1) {
        undefined1* this_00;
        ushort uVar1;
        long lVar2;
        char cVar3;
        short sVar4;
        int iVar5;
        int iVar6;
        short sVar7;

        this_00 = &field_568;
        cVar3 = this_00->empty();
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!m_entries.empty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp", 317,
                (char*)0);
        }
        if (131070 < param_1 + 65535U) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "(offset >= -0xFFFF) && (offset <= 0xFFFF)",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp", 318,
                (char*)0);
        }
        uVar1 = m_entrySelectedByIndex;
        iVar5 = this_00->size();
        lVar2 = (long)(int)((uint)uVar1 + param_1) % (long)iVar5;
        iVar5 = (int)lVar2;
        sVar7 = (short)lVar2;
        if (iVar5 < 0) {
            sVar4 = this_00->size();
            sVar7 = sVar4 + sVar7;
        } else {
            iVar6 = this_00->size();
            if (iVar6 < iVar5) {
                sVar4 = this_00->size();
                sVar7 = sVar7 - sVar4;
            }
        }
        return sVar7;
    }

    // 0x10068b7a0, 64 bytes, placed by class name
    // Carousel::SetEntrySelectedByIndex(unsigned short, bool)
    void Carousel::SetEntrySelectedByIndex(ushort param_1, bool param_2) {
        char cVar1;
        undefined3 in_register_00000011;

        cVar1 = HasRecentValueChange(this);
        m_entrySelectedByIndex = param_1;
        if ((CONCAT31(in_register_00000011, param_2) == 0) && (cVar1 == '\0')) {
            field_930 = param_1;
        }
    }

    // 0x10068b7e0, 272 bytes, placed by class name
    // Carousel::ApplyScroll(float)
    void Carousel::ApplyScroll(float param_1) {
        ushort uVar1;
        int iVar2;
        char cVar3;
        undefined1 uVar4;
        undefined1 extraout_AL;
        undefined1 extraout_AH;
        undefined1 extraout_AH_00;
        undefined2 extraout_var;
        undefined4 extraout_var_00;
        int iVar5;
        float fVar6;

        cVar3 = (&field_568)->empty();
        if (cVar3 == '\0') {
            fVar6 = param_1 + field_936;
            iVar5 = 0;
            if (1.0 <= fVar6) {
                iVar5 = 0;
                do {
                    iVar5 = iVar5 + 1;
                    fVar6 = fVar6 + -1.0;
                } while (1.0 <= fVar6);
            }
            field_936 = fVar6;
            if (fVar6 <= -1.0) {
                do {
                    iVar5 = iVar5 + -1;
                    fVar6 = fVar6 + 1.0;
                } while (fVar6 <= -1.0);
                field_936 = fVar6;
            }
            if (iVar5 != 0) {
                while (true) {
                    uVar4 = WrapSelectedEntryOffset(this, iVar5);
                    uVar1 = CONCAT11(extraout_AH, uVar4);
                    if ((CONCAT11(extraout_AH, uVar4) == m_entrySelectedByIndex) ||
                        (eastl::vector<Carousel::Entry,
                                       eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                         operator[](
                             (vector<Carousel::Entry, eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true,
                                                                                    BucketAllocatorEASTL>>*)&field_568,
                             (ulong)uVar1),
                         *(char*)CONCAT44(extraout_var_00,
                                          CONCAT22(extraout_var, CONCAT11(extraout_AH_00, extraout_AL))) != '\0'))
                        break;
                    iVar2 = math::sign<int>(iVar5);
                    iVar5 = iVar5 + iVar2;
                }
                if (uVar1 != m_entrySelectedByIndex) {
                    SetEntrySelectedByIndex(this, uVar1, true);
                }
            }
        }
    }

    // 0x10068b8f0, 176 bytes, placed by class name
    // Carousel::MainDraw(ComponentDependencies const&, int, int, float)
    void Carousel::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        TextureManager* this_00;
        SpriteAtlasManager* pSVar1;
        char cVar2;

        cVar2 = (&field_568)->empty();
        if (cVar2 == '\0') {
            this_00 = (TextureManager*)(*(RT7Core**)(param_1 + 16))->GetTextureManager();
            pSVar1 = (SpriteAtlasManager*)this_00->GetSpriteAtlasManager();
            PrepareEntryIcons(this, pSVar1);
            UpdateAnimations(this, param_4);
            DrawBackground(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
            DrawSelectedEntry(this, *(RT7Core**)(param_1 + 16), *(FontManager**)(param_1 + 8), *(FontHelpers**)param_1,
                              param_2, param_3);
            DrawButtons(this, *(RT7Core**)(param_1 + 16), param_2, param_3);
        }
    }

    // 0x10068b9a0, 400 bytes, placed by class name
    // Carousel::PrepareEntryIcons(graphics::SpriteAtlasManager&)
    ulong Carousel::PrepareEntryIcons(SpriteAtlasManager* param_1) {
        bool bVar1;
        shared_ptr* psVar3;
        shared_ptr* psVar4;
        SpriteAtlasReference* this_00;
        shared_ptr* psVar5;
        undefined1 uVar6;
        undefined8 unaff_R13;
        undefined7 uVar7;
        shared_ptr local_60;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_50[16];
        long local_40;

        psVar3 = (shared_ptr*)(&field_568)->HeapBeginPtr();
        psVar4 = (shared_ptr*)(&field_568)->end();
        uVar7 = (undefined7)((ulong)unaff_R13 >> 8);
        if (psVar3 == psVar4) {
            uVar6 = 1;
        } else {
            uVar6 = 1;
            psVar3 = psVar3 + 3;
            do {
                if ((long)*(int*)(psVar3 + -1) == 18446744073709551615) {
                    if (psVar3[-1].field_8 != -1) {
                        psVar3[-1].field_8 = -1;
                        shared_ptr<graphics::SpriteAtlasReference>::reset();
                    }
                } else {
                    if (psVar3[-1].field_8 == -1) {
                        psVar3[-1].field_8 = (long)*(int*)(psVar3 + -1) | 262144;
                        shared_ptr<graphics::SpriteAtlasReference>::reset();
                    }
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
                    if (!bVar1) {
                        local_40 = psVar3[-1].field_8;
                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                            local_50, (_func_decltype_nullptr*)0);
                        graphics::SpriteAtlasManager::GetSpriteReference(&local_60, param_1, local_40, local_50, 2);
                        shared_ptr<graphics::SpriteAtlasReference>::operator=(
                            (shared_ptr<graphics::SpriteAtlasReference>*)psVar3, &local_60);
                        local_60.~shared_ptr();
                        local_50->~shared_ptr();
                    }
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
                    if (bVar1) {
                        this_00 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)psVar3);
                        if (this_00->IsReady() != '\0') {
                            uVar6 = 0;
                        }
                        uVar7 = 0;
                    }
                }
                psVar5 = psVar3 + 1;
                psVar3 = psVar3 + 4;
            } while (psVar5 != psVar4);
        }
        return CONCAT71(uVar7, uVar6) & 4294967295;
    }

    // 0x10068bb30, 80 bytes, placed by class name
    // Carousel::UpdateAnimations(float)
    void Carousel::UpdateAnimations(float param_1) {
        if (IsEnabled() != '\0') {
            (&field_940, param_1)->UpdateAnimations();
            (field_968, param_1)->UpdateAnimations();
        }
    }

    // 0x10068bb80, 400 bytes, placed by class name
    // Carousel::DrawBackground(graphics::RT7Core*, int, int)
    void Carousel::DrawBackground(RT7Core* param_1, int param_2, int param_3) {
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

        this_00 = field_400;
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
                uVar10 = 369;
            } else {
                uVar9 = logger::default_logger();
                uVar10 = 361;
            }
            logger::Logger::Log(
                uVar9, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp",
                uVar10, "Invalid sprite atlas reference!");
        }
    }

    // 0x10068bd10, 720 bytes, placed by class name
    // Carousel::DrawSelectedEntry(graphics::RT7Core*, graphics::FontManager*, graphics::FontHelpers*, int, int)
    void Carousel::DrawSelectedEntry(RT7Core* param_1, FontManager* param_2, FontHelpers* param_3, int param_4,
                                     int param_5) {
        int iVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        undefined4 uVar5;
        uint uVar6;
        long lVar7;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        shared_ptr* this_01;
        MapArea* this_02;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        SpriteAtlas* this_04;
        FastPool<audio::SoundInstance, int>* this_05;
        undefined8 uVar8;
        int iVar9;
        shared_ptr* psVar10;
        StringView SVar11;
        undefined4 in_stack_ffffffffffffff68;
        undefined4 in_stack_ffffffffffffff6c;
        StringView local_90;
        TextProperties local_80;
        Margin local_58;
        int local_54;
        TextData* local_50;
        RT7Core* local_48;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        iVar9 = (uint)field_560 + (uint)field_564 * 2;
        local_40 = param_4 + iVar9;
        local_48 = param_1;
        local_3c = param_5;
        local_38 = GetStreamCountLastMix();
        local_38 = local_38 + iVar9 * -2;
        local_34 = GetMinMapX();
        local_80.m_pFont._0_4_ = field_400->GetVisualMargin();
        local_58 = (Margin)(&field_932, (Margin*)&local_80)->GetValidOr();
        local_58.ApplyTo(&local_40, &local_3c, &local_38, &local_34);
        lVar7 = eastl::vector<Carousel::Entry,
                              eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
        operator[]((vector<Carousel::Entry,
                           eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_568,
                   (ulong)m_entrySelectedByIndex);
        if (*(int*)(lVar7 + 32) == -1) {
            local_48 = (RT7Core*)param_3;
            cVar3 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar3 == '\0') {
                local_50 = (TextData*)field_496;
                iVar9 = local_50->GetEndPosition();
                new (&local_80) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                psVar10 = (shared_ptr*)param_2->GetFont(iVar9, (shared_ptr*)&local_80);
                local_80.~shared_ptr();
                bVar2 = shared_ptr::operator_cast_to_bool(psVar10);
                if (bVar2) {
                    new (&local_80) graphics::TextProperties(psVar10);
                    uVar6 = GetRGBA();
                    local_50->PopulateTextProperties(&local_80, uVar6, field_100);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                        &local_90, (fixed_string*)(lVar7 + 8));
                    SVar11.field_8._0_4_ = local_40;
                    SVar11.field_0 = (ulong)&local_90;
                    SVar11.field_8._4_4_ = 0;
                    local_48->DrawStringMultiline(
                        SVar11, local_3c, local_38, local_34, 0, (uint*)&local_80,
                        (TextProperties*)CONCAT44(in_stack_ffffffffffffff6c, in_stack_ffffffffffffff68));
                }
            }
        } else {
            psVar10 = (shared_ptr*)(lVar7 + 48);
            bVar2 = shared_ptr::operator_cast_to_bool(psVar10);
            if (bVar2) {
                this_00 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)psVar10);
                this_01 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_00);
                bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                if (bVar2) {
                    this_02 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_01);
                    this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02->GetOrigin();
                    local_50 = (TextData*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                        this_03);
                    this_04 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_01);
                    this_05 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)psVar10);
                    iVar9 = FastPool<audio::SoundInstance, int>::capacity(this_05);
                    lVar7 = this_04->GetSpriteRenderMapping(iVar9);
                    iVar4 = eastl::min<graphics::GraphicsQuality>(local_38, local_34);
                    local_40 = local_40 + (local_38 - iVar4) / 2;
                    local_3c = local_3c + (local_34 - iVar4) / 2;
                    local_48 = (RT7Core*)local_48->GetGUIManager();
                    iVar1 = local_3c;
                    iVar9 = local_40;
                    local_54 = local_40 + iVar4;
                    iVar4 = iVar4 + local_3c;
                    uVar5 = GetRGBA();
                    local_48->AddElement(iVar9, iVar1, local_54, iVar4, uVar5, lVar7 + 88, local_50, 1);
                } else {
                    uVar8 = logger::default_logger();
                    logger::Logger::Log(uVar8, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/"
                                        "components/Carousel.cpp",
                                        405, "Invalid sprite atlas reference!");
                }
            }
        }
    }

    // 0x10068bfe0, 704 bytes, placed by class name
    // Carousel::DrawButtons(graphics::RT7Core*, int, int)
    void Carousel::DrawButtons(RT7Core* param_1, int param_2, int param_3) {
        undefined1* this_00;
        uint uVar1;
        bool bVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        TextureManager* this_01;
        SpriteAtlasManager* pSVar6;
        undefined* puVar7;
        shared_ptr* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        shared_ptr* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        SpriteAtlas* this_07;
        FastPool<audio::SoundInstance, int>* this_08;
        undefined8 uVar8;
        undefined8 uVar9;
        Margin local_78[4];
        ButtonElement* local_68;
        Texture* local_60;
        ButtonElement* local_58;
        undefined8 local_50;
        Margin* local_48;
        Margin local_40;
        int local_3c;
        uint local_38;
        uint local_34;

        this_00 = field_448;
        this_01 = (TextureManager*)param_1->GetTextureManager();
        pSVar6 = (SpriteAtlasManager*)this_01->GetSpriteAtlasManager();
        puVar7 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar6, false);
        if (puVar7 == DataStatus::READY) {
            local_50 = CONCAT44(local_50._4_4_, param_3);
            local_3c = param_2;
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
                    local_60 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
                    if (local_60 == (Texture*)0) {
                        return;
                    }
                    local_48 = (Margin*)&field_932;
                    local_78[0] = (Margin)field_400->GetVisualMargin();
                    local_40 = (Margin)local_48->GetValidOr(local_78);
                    this_07 = (SpriteAtlas*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)this_04);
                    this_08 =
                        (FastPool<audio::SoundInstance, int>*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                            (shared_ptr<graphics::SpriteAtlasReference>*)this_02);
                    iVar4 = FastPool<audio::SoundInstance, int>::capacity(this_08);
                    local_48 = (Margin*)this_07->GetSpriteRenderMapping(iVar4);
                    iVar4 = local_3c;
                    local_38 = (uint)field_564 + (uint)local_40.field_0 + local_3c;
                    uVar1 = (uint)local_40 >> 16;
                    iVar5 = GetStreamCountLastMix();
                    local_3c = (iVar4 + iVar5) - ((uint)field_560 + (uint)field_564 + (uVar1 & 255));
                    iVar4 = GetMinMapX();
                    bVar3 = local_40.GetHeight();
                    local_34 = (uint)field_562;
                    iVar4 = (int)(((uint)bVar3 + iVar4) - local_34) / 2 + (int)local_50;
                    local_68 = (ButtonElement*)&field_940;
                    local_58 = (ButtonElement*)CONCAT44(local_58._4_4_, (uint)field_560);
                    local_50 = GetRGBA();
                    bVar2 = (bool)IsEnabled();
                    local_48 = (Margin*)((long)local_48 + 88);
                    local_68->Draw(param_1, local_38, iVar4, (ushort)local_58, (ushort)local_34, (uint)local_50, bVar2,
                                   local_60, local_48, this_00, false);
                    local_58 = (ButtonElement*)field_968;
                    local_38 = (uint)field_560;
                    local_34 = (uint)field_562;
                    local_50 = GetRGBA();
                    bVar2 = (bool)IsEnabled();
                    local_78->FlipHorizontally();
                    local_58->Draw(param_1, local_3c, iVar4, (ushort)local_38, (ushort)local_34, (uint)local_50, bVar2,
                                   local_60, local_78, this_00, false);
                    return;
                }
                uVar8 = logger::default_logger();
                uVar9 = 456;
            } else {
                uVar8 = logger::default_logger();
                uVar9 = 448;
            }
            logger::Logger::Log(
                uVar8, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp",
                uVar9, "Invalid sprite atlas reference!");
        }
    }

    // 0x10068c2a0, 672 bytes, placed by class name
    // Carousel::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void Carousel::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        undefined1* this_00;
        int iVar1;
        char cVar2;
        byte bVar3;
        ushort uVar4;
        short sVar5;
        ushort uVar6;
        Margin in_EAX;
        uint uVar7;
        undefined4 uVar8;
        long lVar9;
        long lVar10;
        ulong uVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        undefined8 local_38;

        local_38._0_4_ = in_EAX;
        cVar2 = param_1->g1();
        (*(code*)field_0[4])(this, cVar2 == '\x01');
        this_00 = &field_568;
        uVar4 = param_1->g2();
        this_00->resize((ulong)uVar4);
        lVar9 = this_00->capacity();
        local_38 = CONCAT44(param_2, local_38._0_4_);
        if (lVar9 == 0) {
            uVar4 = param_1->g2();
            this_00->resize((ulong)uVar4);
            lVar9 = this_00->HeapBeginPtr();
            lVar10 = this_00->end();
            for (; lVar9 != lVar10; lVar9 = lVar9 + 64) {
                uVar8 = param_1->g4s();
                *(undefined4*)(lVar9 + 32) = uVar8;
            }
        } else {
            lVar9 = this_00->HeapBeginPtr();
            lVar10 = this_00->end();
            for (; lVar9 != lVar10; lVar9 = lVar9 + 64) {
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                    eastl::basic_string<char, BucketAllocatorEASTL>>(
                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1,
                    (basic_string*)(lVar9 + 8), false);
            }
            param_1->g2();
        }
        uVar11 = this_00->size();
        if (65533 < uVar11) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_entries.size() < MAX_ENTRY_COUNT",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp", 118,
                (char*)0);
        }
        uVar4 = param_1->g2();
        uVar7 = this_00->size();
        if (uVar7 == uVar4) {
            sVar5 = this_00->size();
            if (sVar5 != 0) {
                uVar4 = 0;
                do {
                    uVar8 = param_1->g4s();
                    lVar9 =
                        eastl::vector<Carousel::Entry,
                                      eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                        operator[](
                            (vector<Carousel::Entry,
                                    eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                                this_00,
                            (ulong)uVar4);
                    *(undefined4*)(lVar9 + 4) = uVar8;
                    uVar4 = uVar4 + 1;
                    uVar6 = this_00->size();
                } while (uVar4 < uVar6);
            }
            uVar4 = param_1->g2();
            m_entrySelectedByIndex = uVar4;
            field_930 = uVar4;
            uVar11 = this_00->size();
            if (uVar11 <= uVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_selectedEntryIndex < m_entries.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp",
                    136, (char*)0);
            }
            uVar4 = param_1->g2();
            field_560 = uVar4;
            uVar4 = param_1->g2();
            field_562 = uVar4;
            uVar4 = param_1->g2();
            field_564 = uVar4;
            new (&local_38) Margin(param_1);
            field_932 = (byte)local_38;
            field_933 = local_38._1_1_;
            field_934 = local_38._2_1_;
            field_935 = local_38._3_1_;
            bVar3 = param_1->g1();
            field_100 = ~bVar3;
            uVar8 = param_1->g4();
            field_96 = uVar8;
            iVar1 = local_38._4_4_;
            (field_496, param_1, local_38._4_4_)->DecodeTextData();
            (field_448, param_1, iVar1)->DecodeSpriteData();
            (field_400, param_1, iVar1)->DecodeSpriteData();
        } else {
            uVar12 = logger::default_logger();
            uVar13 = this_00->size();
            logger::Logger::Log(
                uVar12, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/Carousel.cpp", 124,
                "Carousel entry encoding mismatch - expected %u values but got %u", uVar13, uVar4);
        }
    }

    // 0x10068c5b0, 224 bytes, placed by class name
    // Carousel::LoadStyleSheetVisuals(StyleSheet const&)
    void Carousel::LoadStyleSheetVisuals(StyleSheet* param_1) {
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 205, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 204, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_560, 206, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_562, 207, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned short>(param_1, &field_564, 208, 1);
        (&field_932, 237, param_1)->LoadFromStylesheet();
        (field_496, 229, param_1)->LoadStyleSheetTextData();
        (field_400, 219, param_1)->LoadStyleSheetSpriteData();
        (field_448, 209, param_1)->LoadStyleSheetSpriteData();
    }

    // 0x10068c6e0, 112 bytes, placed by class name
    // Carousel::GetEntryIndexById(int) const
    undefined2 Carousel::GetEntryIndexById(int param_1) {
        undefined2 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        Entry* pEVar4;
        Entry* pEVar5;
        pair* ppVar6;
        undefined1* this_00;
        int local_1c;

        this_00 = &field_568;
        local_1c = param_1;
        uVar2 = this_00->HeapBeginPtr();
        uVar3 = this_00->end();
        pEVar4 =
            eastl::find<Carousel::Entry_const*, int, int->GetEntryIndexById() const ::__25>(uVar2, uVar3, &local_1c);
        pEVar5 = (Entry*)this_00->end();
        if (pEVar4 == pEVar5) {
            uVar1 = 65535;
        } else {
            ppVar6 = (pair*)this_00->HeapBeginPtr();
            uVar1 = eastl::distance<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>*>(
                ppVar6, (pair*)pEVar4);
        }
        return uVar1;
    }

    // 0x10068c7a0, 80 bytes, placed by class name
    // Carousel::SetEntryEnabled(int, bool)
    bool Carousel::SetEntryEnabled(int param_1, bool param_2) {
        undefined1 uVar1;
        undefined1 extraout_AL;
        undefined1 extraout_AH;
        undefined1 extraout_AH_00;
        undefined2 extraout_var;
        undefined4 extraout_var_00;

        uVar1 = GetEntryIndexById(this, param_1);
        if (CONCAT11(extraout_AH, uVar1) != -1) {
            eastl::vector<Carousel::Entry,
                          eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<Carousel::Entry,
                        eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_568,
                (ulong)CONCAT11(extraout_AH, uVar1));
            *(bool*)CONCAT44(extraout_var_00, CONCAT22(extraout_var, CONCAT11(extraout_AH_00, extraout_AL))) = param_2;
        }
        return CONCAT11(extraout_AH, uVar1) != 65535;
    }

    // 0x10068c7f0, 64 bytes, placed by class name
    // Carousel::GetEntryEnabled(int) const
    bool Carousel::GetEntryEnabled(int param_1) {
        ushort uVar1;
        char* pcVar2;
        bool bVar3;

        uVar1 = GetEntryIndexById(this, param_1);
        if (uVar1 == 65535) {
            bVar3 = false;
        } else {
            pcVar2 =
                (char*)eastl::vector<Carousel::Entry,
                                     eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<Carousel::Entry,
                            eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_568,
                    (ulong)uVar1);
            bVar3 = *pcVar2 != '\0';
        }
        return bVar3;
    }

    // 0x10068c870, 64 bytes, placed by class name
    // Carousel::SetSelectedEntry(int, bool)
    bool Carousel::SetSelectedEntry(int param_1, bool param_2) {
        undefined1 uVar1;
        undefined1 extraout_AH;

        uVar1 = GetEntryIndexById(this, param_1);
        if (CONCAT11(extraout_AH, uVar1) != -1) {
            SetEntrySelectedByIndex(this, CONCAT11(extraout_AH, uVar1), param_2);
        }
        return CONCAT11(extraout_AH, uVar1) != 65535;
    }

    // 0x10068c8d0, 96 bytes, placed by class name
    // Carousel::AddEntry(int, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    uint Carousel::AddEntry(int param_1, basic_string* param_2) {
        uint uVar1;
        int local_24;

        uVar1 = HasEntry(this, param_1);
        if ((char)uVar1 == '\0') {
            eastl::vector<Carousel::Entry,
                          eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                emplace_back<int&, eastl::basic_string<char, BucketAllocatorEASTL> const&>(
                    (vector<Carousel::Entry,
                            eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_568,
                    &local_24, param_2);
            if (m_entrySelectedByIndex == 65535) {
                m_entrySelectedByIndex = 0;
                field_930 = 0;
            }
        }
        return uVar1 ^ 1;
    }

    // 0x10068c9d0, 96 bytes, placed by class name
    // Carousel::AddEntry(int, int)
    uint Carousel::AddEntry(int param_1, int param_2) {
        uint uVar1;
        int local_20;
        int local_1c;

        local_20 = param_1;
        local_1c = param_2;
        uVar1 = HasEntry(this, param_1);
        if ((char)uVar1 == '\0') {
            eastl::vector<Carousel::Entry, eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true,
                                                                         BucketAllocatorEASTL>>::emplace_back<int&,
                                                                                                              int&>(
                (vector<Carousel::Entry,
                        eastl::fixed_vector_allocator<64ul, 5ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)&field_568,
                &local_20, &local_1c);
            if (m_entrySelectedByIndex == 65535) {
                m_entrySelectedByIndex = 0;
                field_930 = 0;
            }
        }
        return uVar1 ^ 1;
    }

    // 0x10068cab0, 48 bytes, placed by class name
    // Carousel::ClearEntries()
    void Carousel::ClearEntries() {
        (&field_568)->clear();
        m_entrySelectedByIndex = 65535;
        field_930 = 65535;
    }

    // 0x10068cb80, 96 bytes, placed by class name
    // Carousel::ProcessSwipeMovement(math::Vector2T<int> const&, math::Vector2T<int> const&, float)
    undefined8 Carousel::ProcessSwipeMovement(Vector2T* param_1, Vector2T* param_2, float param_3) {
        int iVar1;
        int iVar3;

        if (IsEnabled() != '\0') {
            iVar1 = *(int*)param_2;
            iVar3 = GetStreamCountLastMix();
            ApplyScroll(this, ((float)-iVar1 + (float)-iVar1) / (float)iVar3);
        }
        return 1;
    }

    // 0x1006acf00: the linker folded this into Button::GetValueRepresentation(), which has identical code
    Carousel::GetValueRepresentation();

    // 0x1006c5d10, 16 bytes, placed by class name
    // Carousel::GetEntryIndexById(int) const::$_25::operator()(Carousel::Entry const&, int) const
    /* Carousel::GetEntryIndexById(int)
   const::$_25::TEMPNAMEPLACEHOLDERVALUE(Carousel::Entry const&, int) const */

    _func_GetEntryIndexById_int* const ::$_25::operator()(Entry * param_1, int param_2) {
        undefined7 in_register_00000001;

        return (_func_GetEntryIndexById_int*)CONCAT71(in_register_00000001, param_1->field_4 == param_2);
    }

} // namespace jag::ui
