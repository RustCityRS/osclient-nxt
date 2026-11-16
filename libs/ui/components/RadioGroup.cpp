// libs/ui/components/RadioGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "RadioGroup.h"
#include "libs/tweaky/Tweaky_SizeControls.h"

namespace jag::ui {
    // 0x100f3e9d1, 1 bytes, __data
    RadioGroup::m_debugDrawClickBounds = 0;

    // 0x100131800: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    RadioGroup::OptionData::~OptionData();

    // 0x1001319d0: the linker folded this into oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp(), which has identical code
    RadioGroup::OptionData::~OptionData();

    // 0x1006a6f90, 304 bytes, base-object constructor, placed by class name
    // RadioGroup::RadioGroup()
    void RadioGroup::RadioGroup() {
        new (this) Component();
        new (m_valueRepresentation) ComponentMultiValueMixin();
        new (this) MakeSharedPool<RadioGroup, 32>();
        *(undefined***)this = &PTR__RadioGroup_100f0f9e8;
        *(undefined***)m_valueRepresentation = &PTR__RadioGroup_100f0fb08;
        new (&field_400)
            eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>();
        new (&field_432) eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul, true, eastl::allocator>();
        field_488 = 1;
        field_489 = 1;
        field_490 = 0;
        field_491 = '\x05';
        field_492 = '\x03';
        field_493 = '\0';
        field_494 = '\n';
        new (&field_495) Margin();
        new (&field_499) Margin();
        new (field_504) SpriteData();
        new (field_552) TextData();
        (**(code**)(*(long*)this + 32))(this, 1);
    }

    // 0x1006a7140, 16 bytes, complete-object constructor, placed by class name
    // RadioGroup::RadioGroup(): jumps straight to the base-object constructor

    // 0x1006a7150, 544 bytes, placed by class name
    // RadioGroup::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)
    void RadioGroup::MainLogic(ComponentDependencies* param_1, int param_2, int param_3, bool param_4, bool param_5,
                               bool param_6, bool param_7) {
        undefined1* this_00;
        undefined8 uVar1;
        uint uVar2;
        char cVar3;
        bool bVar4;
        byte bVar5;
        long lVar6;
        int iVar7;
        undefined7 in_register_00000081;
        undefined7 in_register_00000089;
        byte bVar8;
        int iVar9;
        long lVar10;
        ButtonElement* pBVar11;
        float local_a8;
        Margin local_90;
        int local_8c;
        ushort local_88;
        ushort uStack_86;
        int local_84;
        uint local_80;
        int local_7c;
        undefined1 local_6c;
        undefined1 local_68;
        int local_64;
        ushort local_60;
        ushort uStack_5e;
        int local_5c;
        uint local_58;
        float local_54;
        int local_50[2];
        OptionData* local_48;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        _local_6c = (undefined4)CONCAT71(in_register_00000089, param_5);
        _local_68 = (undefined4)CONCAT71(in_register_00000081, param_4);
        local_40 = param_2;
        local_3c = param_3;
        local_34 = GetStreamCountLastMix();
        local_38 = GetMinMapX();
        local_90 = (Margin)(&field_495, '\0')->GetValidOr();
        local_90.ApplyTo(&local_40, &local_3c, &local_34, &local_38);
        local_54 = (float)local_40;
        local_48 = (OptionData*)CONCAT44(local_48._4_4_, (float)local_3c);
        uVar1 = *(undefined8*)(param_1 + 60);
        CalculateLogicBounds((RadioGroup*)&local_90, (int)this, local_34);
        this_00 = &field_400;
        local_64 = local_8c;
        local_60 = local_88;
        uStack_5e = uStack_86;
        local_5c = local_84;
        local_58 = local_80;
        cVar3 = this_00->size();
        if (cVar3 != '\0') {
            local_a8 = (float)uVar1;
            pBVar11._0_4_ = (ButtonElement*)(local_a8 - local_54);
            iVar9 = 0;
            bVar8 = 0;
            iVar7 = local_7c;
            do {
                lVar6 = this_00->HeapBeginPtr();
                lVar10 = (ulong)bVar8 * 64;
                local_48 = (OptionData*)(lVar6 + lVar10 + 8);
                bVar4 = (bool)local_48->Selected();
                cVar3 = CanChangeSelection((RadioGroup*)this, bVar4);
                if (cVar3 == '\0') {
                    bVar4 = false;
                } else {
                    bVar4 = *(char*)(lVar6 + 32 + lVar10) != '\0';
                }
                local_50[0] = pBVar11._0_4_->UpdateLogic(lVar10 + lVar6 + 36, iVar9, iVar7, local_64, _local_60,
                                                         bVar4 & param_6, local_68, local_6c);
                bVar4 = local_50->empty();
                if (bVar4) {
                    bVar5 = local_48->Selected();
                    SelectOptionByIndex((RadioGroup*)this, bVar8, (bool)(bVar5 ^ 1), true, false);
                }
                iVar9 = iVar9 + local_5c;
                if (iVar9 < local_34) {
                    uVar2 = 0;
                } else {
                    iVar9 = 0;
                    uVar2 = local_58;
                }
                iVar7 = iVar7 + uVar2;
                bVar8 = bVar8 + 1;
                bVar5 = this_00->size();
            } while (bVar8 < bVar5);
        }
    }

    // 0x1006a73a0, 256 bytes, placed by class name
    // RadioGroup::CalculateLogicBounds(int, int) const
    undefined1[16] RadioGroup::CalculateLogicBounds(int param_1, int param_2) {
        byte bVar1;
        byte bVar2;
        RadioGroup* this_00;
        int iVar4;
        int iVar5;
        uint uVar6;
        ulong uVar7;
        int in_ECX;
        undefined4 in_register_00000034;
        int iVar8;
        float fVar9;
        undefined1 auVar10[16];

        this_00 = (RadioGroup*)CONCAT44(in_register_00000034, param_1);
        uVar7 = ((CONCAT44(in_register_00000034, param_1) + 400))->size();
        bVar1 = this_00->field_492;
        fVar9 = (float)ceil((float)uVar7 / (float)bVar1);
        iVar8 = (int)fVar9;
        *(int*)this = iVar8;
        bVar2 = this_00->field_491;
        iVar4 = (int)(param_2 - (bVar1 - 1) * (uint)bVar2) / (int)(uint)bVar1;
        field_4 = iVar4;
        *(uint*)&field_12 = iVar4 + (uint)bVar2;
        if (OptionsUseRegularButtons(this_00) == '\0') {
            uVar6 = (uint)this_00->field_493;
            field_8 = (short)uVar6;
            field_10 = (short)(uVar6 >> 16);
            bVar1 = this_00->field_491;
            uVar6 = uVar6 + bVar1;
            field_16 = uVar6;
            uVar6 = (in_ECX + (uint)bVar1) - uVar6 * iVar8;
            uVar7 = (ulong)uVar6;
            iVar4 = (int)uVar6 / 2;
        } else {
            bVar1 = this_00->field_491;
            iVar4 = in_ECX - (iVar8 + -1) * (uint)bVar1;
            iVar5 = iVar4 / iVar8;
            uVar7 = (long)iVar4 % (long)iVar8 & 4294967295;
            *(int*)&field_8 = iVar5;
            field_16 = iVar5 + (uint)bVar1;
            iVar4 = 0;
        }
        field_20 = iVar4;
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = this;
        return auVar10;
    }

    // 0x1006a74a0, 80 bytes, placed by class name
    // RadioGroup::CanChangeSelection(bool) const
    bool RadioGroup::CanChangeSelection(bool param_1) {
        byte bVar1;
        byte bVar2;
        undefined3 in_register_00000031;

        if (CONCAT31(in_register_00000031, param_1) == 0) {
            if (CanSelectMultipleOptions(this) == '\0') {
                return true;
            }
            if (!param_1)
                goto LAB_1006a74dc;
        }
        bVar1 = field_490;
        bVar2 = field_488;
        if (bVar2 < bVar1) {
            return bVar2 < bVar1;
        }
        if (param_1) {
            return bVar2 < bVar1;
        }
    LAB_1006a74dc:
        return field_490 < field_489;
    }

    // 0x1006a7500, 480 bytes, placed by class name
    // RadioGroup::SelectOptionByIndex(unsigned char, bool, bool, bool)
    void RadioGroup::SelectOptionByIndex(uchar param_1, bool param_2, bool param_3, bool param_4) {
        undefined1* this_00;
        byte bVar1;
        char cVar2;
        bool bVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        int* piVar7;
        int* piVar8;
        undefined7 in_register_00000031;
        OptionData* this_01;
        bool local_32;
        bool local_31;

        this_00 = &field_400;
        local_31 = param_2;
        bVar1 = this_00->size();
        if ((uint)CONCAT71(in_register_00000031, param_1) < (uint)bVar1) {
            lVar4 = this_00->HeapBeginPtr();
            this_01 = (OptionData*)(lVar4 + (ulong)param_1 * 64 + 8);
            cVar2 = this_01->Selected();
            if (local_31 != (bool)cVar2) {
                bVar3 = (bool)this_01->Selected();
                cVar2 = CanChangeSelection(this, bVar3);
                if (cVar2 != '\0') {
                    cVar2 = CanSelectMultipleOptions(this);
                    if (cVar2 == '\0') {
                        piVar7 = (int*)GetSelectedOption(this, '\0');
                        piVar8 = (int*)this_00->end();
                        if (piVar7 != piVar8) {
                            ((piVar7 + 2))->SetSelected(false, param_4);
                            if (param_3) {
                                local_32 = false;
                                eastl::vector<ComponentMultiValueMixin::ValueChangeEvent,
                                              eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>::emplace_back<int&,
                                                                                                             bool&>(
                                    (vector<ComponentMultiValueMixin::ValueChangeEvent,
                                            eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&field_432,
                                    piVar7, &local_32);
                            }
                        }
                        field_490 = 1;
                    } else {
                        field_490 = (local_31 * '\x02' + field_490) - 1;
                    }
                    if (field_490 < field_488) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_numSelectedOptions >= m_minSelectedOptions",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "RadioGroup.cpp",
                                  455, (char*)0);
                    }
                    if (field_489 < field_490) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_numSelectedOptions <= m_maxSelectedOptions",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "RadioGroup.cpp",
                                  456, (char*)0);
                    }
                    this_01->SetSelected(local_31, param_4);
                    if (param_3) {
                        eastl::vector<ComponentMultiValueMixin::ValueChangeEvent,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
                            emplace_back<int&, bool&>(
                                (vector<ComponentMultiValueMixin::ValueChangeEvent,
                                        eastl::fixed_vector_allocator<8ul, 2ul, 4ul, 0ul, true,
                                                                      eastl::allocator>>*)&field_432,
                                (int*)(lVar4 + (ulong)param_1 * 64), &local_31);
                    }
                }
            }
        } else {
            uVar5 = logger::default_logger();
            uVar6 = this_00->size();
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                424, "Attempting to select an invalid index - got %u but there are only %u options available",
                CONCAT71(in_register_00000031, param_1) & 4294967295, uVar6);
        }
    }

    // 0x1006a76e0, 1440 bytes, placed by class name
    // RadioGroup::MainDraw(ComponentDependencies const&, int, int, float)
    void RadioGroup::MainDraw(ComponentDependencies* param_1, int param_2, int param_3, float param_4) {
        undefined1* this_00;
        FontManager* this_01;
        RadioGroup* pRVar1;
        int iVar2;
        Layout* this_02;
        bool bVar3;
        byte bVar4;
        char cVar5;
        int iVar6;
        uint uVar7;
        long lVar8;
        long lVar9;
        TextureManager* this_03;
        SpriteAtlasManager* pSVar10;
        undefined* puVar11;
        shared_ptr* psVar12;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_04;
        FontHelpers* this_05;
        MapArea* this_06;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_07;
        Texture* pTVar13;
        int* piVar14;
        uint* puVar15;
        undefined8 uVar16;
        undefined1* puVar17;
        SpriteAtlasReference* this_08;
        ushort uVar18;
        ComponentDependencies* pCVar19;
        undefined8 uVar20;
        ButtonElement* this_09;
        int iVar21;
        StringView SVar22;
        StringView local_110;
        undefined1* local_100;
        TextProperties local_f8;
        undefined1 local_d0[4];
        int local_cc;
        uint local_c8;
        int local_c4;
        uint local_c0;
        int local_bc;
        SpriteData* local_b8;
        shared_ptr* local_b0;
        Texture* local_a8;
        int local_a0;
        uint local_9c;
        uint local_98;
        uint local_94;
        TextData* local_90;
        int local_84;
        int local_80;
        int local_7c;
        int local_78;
        int local_74;
        int local_70;
        int local_6c;
        Layout* local_68;
        ComponentDependencies* local_60;
        RT7Core* local_58;
        int local_50;
        Margin local_4c;
        int local_48;
        uint local_44;
        RadioGroup* local_40;
        uint local_34;

        local_68 = (Layout*)CONCAT44(local_68._4_4_, param_4);
        puVar17 = &field_400;
        local_84 = param_2;
        local_80 = param_3;
        local_60 = param_1;
        local_40 = this;
        lVar8 = puVar17->HeapBeginPtr();
        lVar9 = puVar17->end();
        pRVar1 = local_40;
        for (; local_40 = pRVar1, lVar8 != lVar9; lVar8 = lVar8 + 64) {
            ((lVar8 + 36))->UpdateAnimations(local_68._0_4_);
            pRVar1 = local_40;
        }
        this_00 = pRVar1->field_504;
        this_03 = (TextureManager*)(*(RT7Core**)(local_60 + 16))->GetTextureManager();
        pSVar10 = (SpriteAtlasManager*)this_03->GetSpriteAtlasManager();
        puVar11 = (undefined*)this_00->LoadSpriteAtlasReference(pSVar10, false);
        if (puVar11 == DataStatus::READY) {
            local_68 = (Layout*)puVar17;
            psVar12 = (shared_ptr*)this_00->GetDefaultValue();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar12);
            if (bVar3) {
                local_b8 = (SpriteData*)this_00;
                local_b0 = psVar12;
                this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)
                              shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                  (shared_ptr<graphics::SpriteAtlasReference>*)psVar12);
                psVar12 = (shared_ptr*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_04);
                bVar3 = shared_ptr::operator_cast_to_bool(psVar12);
                if (bVar3) {
                    this_01 = *(FontManager**)(local_60 + 8);
                    local_90 = (TextData*)pRVar1->field_552;
                    local_70 = param_3;
                    local_6c = param_2;
                    iVar6 = local_90->GetEndPosition();
                    new (&local_f8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    this_05 = (FontHelpers*)this_01->GetFont(iVar6, (shared_ptr*)&local_f8);
                    local_f8.~shared_ptr();
                    this_06 = (MapArea*)shared_ptr<graphics::SpriteAtlas>::operator->(
                        (shared_ptr<graphics::SpriteAtlas>*)psVar12);
                    this_07 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_06->GetOrigin();
                    pTVar13 =
                        (Texture*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_07);
                    bVar3 = this_05->operator_cast_to_bool();
                    pRVar1 = local_40;
                    this_02 = local_68;
                    if ((bVar3) && (pTVar13 != (Texture*)0)) {
                        local_58 = (RT7Core*)this_05;
                        local_50 = local_40->GetStreamCountLastMix();
                        local_7c = pRVar1->GetMinMapX();
                        local_78 = 0;
                        local_f8.m_pFont._0_4_ = (&pRVar1->field_495, '\0')->GetValidOr();
                        local_f8.ApplyTo(&local_84, &local_80, &local_50, &local_7c);
                        puVar17 = &local_40->field_499;
                        local_f8.m_pFont._0_4_ = local_b8->GetVisualMargin();
                        local_4c = (Margin)puVar17->GetValidOr((Margin*)&local_f8);
                        CalculateLogicBounds((RadioGroup*)local_d0, (int)local_40, local_50);
                        local_f8.m_pFont._0_4_ = 0;
                        bVar4 = local_4c.GetWidth();
                        local_48 = local_cc - (uint)bVar4;
                        piVar14 = std::max<int>((int*)&local_f8, &local_48);
                        iVar6 = *piVar14;
                        local_f8.m_pFont._0_4_ = 0;
                        local_cc = iVar6;
                        bVar4 = local_4c.GetHeight();
                        pRVar1 = local_40;
                        local_48 = local_c8 - bVar4;
                        puVar15 = (uint*)std::max<int>((int*)&local_f8, &local_48);
                        local_c8 = *puVar15;
                        local_44 = local_c8;
                        cVar5 = OptionsUseRegularButtons(pRVar1);
                        if (cVar5 == '\0') {
                            local_44 = (uint)pRVar1->field_493;
                            local_78 = pRVar1->field_494 + local_44;
                            local_74 = iVar6 - local_78;
                            uVar18 = (ushort)pRVar1->field_493;
                        } else {
                            uVar18 = (ushort)iVar6;
                            local_74 = iVar6;
                        }
                        local_34 = CONCAT22(local_34._2_2_, uVar18);
                        local_a8 = pTVar13;
                        new (&local_f8) graphics::TextProperties(local_58);
                        uVar7 = pRVar1->GetRGBA();
                        local_90->PopulateTextProperties(&local_f8, uVar7, pRVar1->field_100);
                        local_f8.SetAlignment(cVar5 != '\0', 1);
                        puVar17 = (undefined1*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                        local_100 = (undefined1*)this_02->end();
                        if (puVar17 != local_100) {
                            local_a0 = local_c4;
                            local_9c = local_c0;
                            local_98 = local_34 & 65535;
                            local_94 = local_44 & 65535;
                            iVar6 = 0;
                            pCVar19 = local_60;
                            this_09 = (ButtonElement*)(puVar17 + 36);
                            do {
                                pRVar1 = local_40;
                                iVar21 = (uint)local_4c.field_0 + local_84 + iVar6;
                                local_68 = (Layout*)CONCAT44(local_68._4_4_, local_bc);
                                local_90 = (TextData*)CONCAT44(local_90._4_4_,
                                                               ((uint)local_4c >> 8 & 255) + local_80 + local_bc);
                                local_58 = *(RT7Core**)(pCVar19 + 16);
                                local_34 = local_40->GetRGBA();
                                cVar5 = pRVar1->IsEnabled();
                                pTVar13 = local_a8;
                                if (cVar5 == '\0') {
                                    bVar3 = false;
                                } else {
                                    bVar3 = this_09[-1].field_28 != '\0';
                                }
                                this_08 = (SpriteAtlasReference*)shared_ptr<graphics::SpriteAtlasReference>::operator->(
                                    (shared_ptr<graphics::SpriteAtlasReference>*)local_b0);
                                lVar8 = this_08->GetRenderMapping();
                                iVar2 = (int)local_90;
                                this_09->Draw(local_58, iVar21, (int)local_90, (ushort)local_98, (ushort)local_94,
                                              local_34, bVar3, pTVar13, (Rect*)(lVar8 + 88), local_b8, false);
                                pCVar19 = local_60;
                                local_58 = *(RT7Core**)local_60;
                                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                                    &local_110, (fixed_string*)&this_09[-1].m_trigger);
                                SVar22.field_8._0_4_ = iVar21 + local_78;
                                SVar22.field_0 = (ulong)&local_110;
                                SVar22.field_8._4_4_ = 0;
                                local_58->DrawStringMultiline(SVar22, iVar2, local_74, local_44, 0, (uint*)&local_f8,
                                                              pTVar13);
                                iVar6 = iVar6 + local_a0;
                                if (iVar6 < local_50) {
                                    uVar7 = 0;
                                } else {
                                    iVar6 = 0;
                                    uVar7 = local_9c;
                                }
                                local_bc = (int)local_68._0_4_ + uVar7;
                                puVar17 = &this_09->field_28;
                                this_09 = this_09 + 2;
                            } while (puVar17 != local_100);
                        }
                    }
                    if (*PTR_m_debugDrawClickBounds_100ee6400 == '\0') {
                        return;
                    }
                    DebugDrawClickbounds(local_40, *(RT7Core**)(local_60 + 16), local_6c, local_70);
                    return;
                }
                uVar16 = logger::default_logger();
                uVar20 = 84;
            } else {
                uVar16 = logger::default_logger();
                uVar20 = 76;
            }
            logger::Logger::Log(
                uVar16, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                uVar20, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a7c90, 496 bytes, placed by class name
    // RadioGroup::DebugDrawClickbounds(graphics::RT7Core*, int, int)
    void RadioGroup::DebugDrawClickbounds(RT7Core* param_1, int param_2, int param_3) {
        uint uVar1;
        byte bVar2;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        char cVar7;
        byte bVar8;
        GUIManager* pGVar9;
        ulong uVar10;
        int iVar11;
        int iVar12;
        undefined1 local_88[24];
        GridRect local_70;
        int local_5c;
        uint local_54;
        int local_50;
        int local_4c;
        uint local_48;
        int local_44;
        uint local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_3c = param_2;
        local_38 = param_3;
        pGVar9 = (GUIManager*)param_1->GetGUIManager();
        local_34 = GetStreamCountLastMix();
        local_40 = GetMinMapX();
        new (&local_70) oldscape::dash3d::GridRect(local_3c, local_38, local_34, local_40);
        pGVar9->AddOutline(&local_70, 2, 4294967295, 1);
        local_70.field_0 = (&field_495, '\0')->GetValidOr();
        local_70.ApplyTo(&local_3c, &local_38, &local_34, (int*)&local_40);
        new (&local_70) oldscape::dash3d::GridRect(local_3c, local_38, local_34, local_40);
        pGVar9->AddOutline(&local_70, 2, 43775, 1);
        uVar10 = (ulong)local_40;
        CalculateLogicBounds((RadioGroup*)&local_70, (int)this, local_34);
        local_88._16_8_ = &field_400;
        local_50 = local_70.field_4;
        local_4c = local_70.field_8;
        local_48 = local_70._16_4_;
        cVar7 = local_88._16_8_->size();
        if (cVar7 != '\0') {
            uVar10 = CONCAT71((int7)(uVar10 >> 8), 1);
            iVar12 = 0;
            local_44 = local_70.field_12;
            iVar11 = local_5c;
            do {
                iVar5 = local_4c;
                iVar4 = local_50;
                local_54 = (uint)uVar10;
                new (local_88) oldscape::dash3d::GridRect(local_3c + iVar12, local_38 + iVar11, local_50, local_4c);
                pGVar9->AddOutline(local_88, 2, 11158783, 1);
                iVar6 = local_44;
                new (local_88) oldscape::dash3d::GridRect(local_3c + iVar12, local_38 + iVar11, iVar4, iVar5);
                pGVar9->AddOutline(local_88, 2, 4291559679, 1);
                uVar3 = local_54;
                iVar12 = iVar12 + iVar6;
                if (iVar12 < local_34) {
                    uVar1 = 0;
                } else {
                    iVar12 = 0;
                    uVar1 = local_48;
                }
                iVar11 = iVar11 + uVar1;
                bVar2 = (byte)local_54;
                bVar8 = local_88._16_8_->size();
                uVar10 = (ulong)((uVar3 & 255) + 1);
            } while (bVar2 < bVar8);
        }
    }

    // 0x1006a7e80, 320 bytes, placed by class name
    // RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)
    undefined4 RadioGroup::Setup(UIDataMappingProvider* param_1) {
        undefined1* this_00;
        uchar uVar1;
        undefined4 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        pair* ppVar5;
        pair* ppVar6;
        RadioGroup* local_a0;
        function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0> local_98[96];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = (**(code**)(*(long*)param_1 + 24))(param_1);
        if ((char)uVar2 != '\0') {
            this_00 = &field_400;
            this_00->clear();
            local_a0 = this;
            fixedfunction::function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)::__57, void>(local_98,
                                                                                              (__57*)&local_a0);
            (**(code**)(*(long*)param_1 + 16))(param_1, local_98);
            fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98);
            (**(code**)(*(long*)param_1 + 48))(local_98, param_1);
            uVar3 = this_00->HeapBeginPtr();
            uVar4 = this_00->end();
            ppVar5 =
                eastl::find<eastl::pair<int, RadioGroup::OptionData>*, StringView,
                            (UIDataMappingProvider<int, StringView> const&)->Setup()::__58>(uVar3, uVar4, local_98);
            ppVar6 = (pair*)this_00->end();
            if (ppVar5 == ppVar6) {
                if (field_488 == 0)
                    goto LAB_1006a7f7a;
                uVar1 = '\0';
            } else {
                ppVar6 = (pair*)this_00->HeapBeginPtr();
                uVar1 =
                    eastl::distance<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>*>(
                        ppVar6, ppVar5);
            }
            SelectOptionByIndex(this, uVar1, true, false, true);
        }
    LAB_1006a7f7a:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2;
    }

    // 0x1006a8070, 320 bytes, placed by class name
    // RadioGroup::AddOption(int, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    ulong RadioGroup::AddOption(int param_1, basic_string* param_2) {
        undefined1* this_00;
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        uint extraout_EDX;
        uchar* extraout_RDX;
        StringView SVar5;
        OptionData local_b8[2];
        StringView local_40;
        int local_2c;

        this_00 = &field_400;
        local_2c = param_1;
        uVar1 = this_00->size();
        if (uVar1 < 255) {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_40,
                                                                                          (fixed_string*)param_2);
            SVar5.field_8 = extraout_RDX;
            SVar5.field_0 = (ulong)&local_40;
            OptionData::OptionData(local_b8, SVar5);
            eastl::pair<int, RadioGroup::OptionData>::pair<int, RadioGroup::OptionData, void>(
                (pair<int, RadioGroup::OptionData>*)(local_b8[0].field_28 + 28), &local_2c, local_b8);
            eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                              eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>::
                insert<eastl::pair<int, RadioGroup::OptionData>, void>(
                    (vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                                eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>*)this_00,
                    (pair*)(local_b8[0].field_28 + 28));
            ((local_b8[0].field_28 + 28))->~pair();
            local_b8->~__alt();
            uVar1 = (ulong)extraout_EDX & 18446744073709551361;
            if ((extraout_EDX & 1) != 0) {
                lVar2 = this_00->size();
                uVar1 = CONCAT71((int7)(uVar1 >> 8), 1);
                if ((lVar2 == 1) && (field_488 != 0)) {
                    SelectOptionByIndex(this, '\0', true, false, true);
                }
            }
        } else {
            uVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar1 = 0;
            logger::Logger::Log(
                uVar3, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                243, "Cannot add option %s=%d as RadioGroup is already at the 255 option limit", uVar4, local_2c);
        }
        return uVar1;
    }

    // 0x1006a82c0, 96 bytes, placed by class name
    // RadioGroup::RemoveOption(int)
    bool RadioGroup::RemoveOption(int param_1) {
        pair* ppVar1;
        pair* ppVar2;
        vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                   eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>* this;
        undefined4 in_register_0000003c;
        int local_24;

        this = (vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                           eastl::vector<eastl::pair<int, RadioGroup::OptionData>,
                                         BucketAllocatorEASTL>>*)(CONCAT44(in_register_0000003c, param_1) + 400);
        ppVar1 = (pair*)eastl::vector_map<
            int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
            eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>::find(this, &local_24);
        ppVar2 = (pair*)end();
        if (ppVar1 != ppVar2) {
            eastl::vector_map<
                int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>::erase(this, ppVar1);
        }
        return ppVar1 != ppVar2;
    }

    // 0x1006a8360, 48 bytes, placed by class name
    // RadioGroup::ClearOptions()
    void RadioGroup::ClearOptions() {
        (&field_400)->clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x1006a8390, 64 bytes, placed by class name
    // RadioGroup::HasOption(int)
    bool RadioGroup::HasOption(int param_1) {
        long lVar1;
        long lVar2;
        int local_1c;

        local_1c = param_1;
        lVar1 = (&field_400, &local_1c)->find();
        lVar2 = (&field_400)->end();
        return lVar1 != lVar2;
    }

    // 0x1006a83d0, 64 bytes, placed by class name
    // RadioGroup::GetSelectedValue(unsigned char) const
    undefined4 RadioGroup::GetSelectedValue(uchar param_1) {
        undefined4 uVar1;
        undefined4* puVar2;
        undefined4* puVar3;

        puVar2 = (undefined4*)GetSelectedOption(this, param_1);
        puVar3 = (undefined4*)(&field_400)->end();
        if (puVar2 == puVar3) {
            uVar1 = 4294967295;
        } else {
            uVar1 = *puVar2;
        }
        return uVar1;
    }

    // 0x1006a8410, 160 bytes, placed by class name
    // RadioGroup::GetSelectedOption(unsigned char) const
    long RadioGroup::GetSelectedOption(uchar param_1) {
        undefined1* this_00;
        long lVar2;
        long lVar3;
        uchar uVar4;

        if (param_1 < field_490) {
            this_00 = &field_400;
            lVar2 = this_00->HeapBeginPtr();
            lVar3 = this_00->end();
            if (lVar2 != lVar3) {
                uVar4 = '\0';
                do {
                    if (((lVar2 + 8))->Selected() != '\0') {
                        if (uVar4 == param_1) {
                            return lVar2;
                        }
                        uVar4 = uVar4 + '\x01';
                    }
                    lVar2 = lVar2 + 64;
                    lVar3 = this_00->end();
                } while (lVar2 != lVar3);
            }
        }
        lVar2 = (&field_400)->end();
        return lVar2;
    }

    // 0x1006a84b0, 160 bytes, placed by class name
    // RadioGroup::GetSelectedLabel(unsigned char) const
    undefined1* RadioGroup::GetSelectedLabel(uchar param_1) {
        long lVar2;
        long lVar3;
        undefined1* puVar4;

        lVar2 = GetSelectedOption(this, param_1);
        lVar3 = (&field_400)->end();
        if (lVar2 == lVar3) {
            puVar4 = &GetSelectedLabel(unsigned char)::empty;
            if (GetSelectedLabel(unsigned char)::empty == '\0') {
                if (___cxa_guard_acquire(&GetSelectedLabel(unsigned char)::empty) != 0) {
                    puVar4 = &GetSelectedLabel(unsigned char)::empty;
                    eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                    ___cxa_atexit(PTR__basic_string_100ee6c78, &GetSelectedLabel(unsigned char)::empty, 4294967296);
                    ___cxa_guard_release(&GetSelectedLabel(unsigned char)::empty);
                }
            }
        } else {
            puVar4 = (undefined1*)(lVar2 + 8);
        }
        return puVar4;
    }

    // 0x1006a8550, 128 bytes, placed by class name
    // RadioGroup::SetOptionSelected(int, bool, bool)
    bool RadioGroup::SetOptionSelected(int param_1, bool param_2, bool param_3) {
        undefined1* this_00;
        pair* ppVar1;
        pair* ppVar2;
        uchar uVar3;
        pair* ppVar4;
        undefined7 in_register_00000009;
        undefined8 local_38;

        local_38 = CONCAT44((int)CONCAT71(in_register_00000009, param_3), param_1);
        this_00 = &field_400;
        ppVar1 = (pair*)this_00->find((int*)&local_38);
        ppVar4 = (pair*)this_00->end();
        if (ppVar1 != ppVar4) {
            ppVar2 = (pair*)this_00->HeapBeginPtr();
            uVar3 = eastl::distance<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, unsigned int>*>(
                ppVar2, ppVar1);
            SelectOptionByIndex(this, uVar3, param_2, local_38._4_1_, false);
        }
        return ppVar1 != ppVar4;
    }

    // 0x1006a85d0, 80 bytes, placed by class name
    // RadioGroup::GetOptionSelected(int) const
    undefined8 RadioGroup::GetOptionSelected(int param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        int local_1c;

        local_1c = param_1;
        lVar1 = (&field_400, &local_1c)->find();
        lVar2 = (&field_400)->end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 8))->Selected();
        }
        return uVar3;
    }

    // 0x1006a8620, 80 bytes, placed by class name
    // RadioGroup::SetOptionEnabled(int, bool)
    bool RadioGroup::SetOptionEnabled(int param_1, bool param_2) {
        long lVar1;
        long lVar2;
        int local_24;

        lVar1 = (&field_400, &local_24)->find();
        lVar2 = (&field_400)->end();
        if (lVar1 != lVar2) {
            *(bool*)(lVar1 + 32) = param_2;
        }
        return lVar1 != lVar2;
    }

    // 0x1006a8670, 80 bytes, placed by class name
    // RadioGroup::GetOptionEnabled(int) const
    bool RadioGroup::GetOptionEnabled(int param_1) {
        long lVar1;
        long lVar2;
        bool bVar3;
        int local_1c;

        local_1c = param_1;
        lVar1 = (&field_400, &local_1c)->find();
        lVar2 = (&field_400)->end();
        if (lVar1 == lVar2) {
            bVar3 = false;
        } else {
            bVar3 = *(char*)(lVar1 + 32) != '\0';
        }
        return bVar3;
    }

    // 0x1006a86c0, 112 bytes, placed by class name
    // RadioGroup::SetVisualParams(unsigned char, unsigned char, unsigned char, unsigned char)
    void RadioGroup::SetVisualParams(uchar param_1, uchar param_2, uchar param_3, uchar param_4) {
        undefined7 in_register_00000031;

        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "numColumns > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                363, (char*)0);
        }
        field_492 = param_1;
        field_491 = param_2;
        field_493 = param_3;
        field_494 = param_4;
    }

    // 0x1006a8730, 160 bytes, placed by class name
    // RadioGroup::SetSelectionLimits(unsigned char, unsigned char)
    bool RadioGroup::SetSelectionLimits(uchar param_1, uchar param_2) {
        uchar uVar1;
        undefined8 uVar2;
        uchar* puVar3;
        undefined1 auStack_28[5];
        uchar local_23;
        undefined2 local_22;

        local_22 = CONCAT11(param_2, param_1);
        if (param_1 <= param_2) {
            if (param_1 == '\0') {
                uVar2 = logger::default_logger();
                logger::Logger::Log(
                    uVar2, 0, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                    "RadioGroup.cpp",
                    376, "Attempting to change the minimum number of selected entries to 0, overriding to 1");
                puVar3 = std::max<unsigned char>(auStack_28 + 4, (uchar*)&local_22);
                uVar1 = *puVar3;
                puVar3 = std::max<unsigned char>(&local_23, (uchar*)((long)&local_22 + 1));
                _auStack_28 = CONCAT17(*puVar3, (uint7)CONCAT11(param_2, uVar1) << 48);
            }
            field_488 = (byte)local_22;
            field_489 = local_22._1_1_;
        }
        return param_1 <= param_2;
    }

    // 0x1006a87e0, 48 bytes, placed by class name
    // RadioGroup::SetMargin(Component::MarginType, Margin)
    void RadioGroup::SetMargin(int param_2, undefined4 param_3) {
        undefined4* puVar1;

        if (param_2 == 1) {
            puVar1 = (undefined4*)&field_499;
        } else {
            if (param_2 != 0) {
                return;
            }
            puVar1 = (undefined4*)&field_495;
        }
        *puVar1 = param_3;
    }

    // 0x1006a8810, 64 bytes, placed by class name
    // RadioGroup::GetMargin(Component::MarginType) const
    Margin RadioGroup::GetMargin(int param_2) {
        Margin local_c;

        if (param_2 == 1) {
            local_c.field_0 = field_499;
            local_c.field_1 = field_500;
            local_c.field_2 = field_501;
            local_c.field_3 = field_502;
        } else if (param_2 == 0) {
            local_c.field_0 = field_495;
            local_c.field_1 = field_496;
            local_c.field_2 = field_497;
            local_c.field_3 = field_498;
        } else {
            new (&local_c) Margin();
        }
        return local_c;
    }

    // 0x1006a8860, 160 bytes, placed by class name
    // RadioGroup::GetSelectedOption(unsigned char)
    long RadioGroup::GetSelectedOption(uchar param_1) {
        undefined1* this_00;
        long lVar2;
        long lVar3;
        uchar uVar4;

        if (param_1 < field_490) {
            this_00 = &field_400;
            lVar2 = this_00->HeapBeginPtr();
            lVar3 = this_00->end();
            if (lVar2 != lVar3) {
                uVar4 = '\0';
                do {
                    if (((lVar2 + 8))->Selected() != '\0') {
                        if (uVar4 == param_1) {
                            return lVar2;
                        }
                        uVar4 = uVar4 + '\x01';
                    }
                    lVar2 = lVar2 + 64;
                    lVar3 = this_00->end();
                } while (lVar2 != lVar3);
            }
        }
        lVar2 = (&field_400)->end();
        return lVar2;
    }

    // 0x1006a8990, 864 bytes, placed by class name
    // RadioGroup::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void RadioGroup::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        RadioGroup* pRVar1;
        char cVar2;
        uchar uVar3;
        byte bVar4;
        ushort uVar5;
        short sVar6;
        uint uVar7;
        undefined4 uVar8;
        basic_string* pbVar9;
        basic_string* pbVar10;
        fixed_string* pfVar11;
        undefined8 uVar12;
        uchar* extraout_RDX;
        ulong uVar13;
        StringView SVar14;
        undefined1 local_f8[72];
        Margin local_b0[16];
        vector<eastl::basic_string<char, BucketAllocatorEASTL>, BucketAllocatorEASTL> local_70[28];
        int local_54;
        ulong local_50;
        vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                   eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>* local_48;
        int local_3c;
        RadioGroup* local_38;

        local_3c = param_2;
        cVar2 = param_1->g1();
        (**(code**)(*(long*)this + 32))(this, cVar2 == '\x01');
        uVar3 = param_1->g1();
        field_492 = uVar3;
        uVar3 = param_1->g1();
        field_491 = uVar3;
        uVar3 = param_1->g1();
        field_493 = uVar3;
        uVar3 = param_1->g1();
        field_494 = uVar3;
        bVar4 = param_1->g1();
        field_488 = bVar4;
        bVar4 = param_1->g1();
        field_489 = bVar4;
        local_38 = this;
        if (field_492 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_numColumns > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                481, (char*)0);
        }
        uVar5 = param_1->g2();
        eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, BucketAllocatorEASTL>::vector();
        local_50 = (ulong)uVar5;
        eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, BucketAllocatorEASTL>::resize(local_70,
                                                                                                     local_50);
        pbVar9 = (basic_string*)local_70->HeapBeginPtr();
        pbVar10 = (basic_string*)local_70->end();
        for (; pbVar9 != pbVar10; pbVar9 = pbVar9 + 24) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pbVar9, false);
        }
        sVar6 = param_1->g2();
        if ((short)local_50 != sVar6) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "numOptions == numValues",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                498, (char*)0);
        }
        local_48 = (vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                               eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>*)&local_38
                       ->field_400;
        if (local_50 != 0) {
            uVar13 = 0;
            do {
                local_54 = param_1->g4s();
                pfVar11 = (fixed_string*)
                    eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](
                        local_70, uVar13);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                    (StringView*)(local_f8 + 56), pfVar11);
                SVar14.field_8 = extraout_RDX;
                SVar14.field_0 = (ulong)(local_f8 + 56);
                new (local_f8) OptionData(SVar14);
                eastl::pair<int, RadioGroup::OptionData>::pair<int, RadioGroup::OptionData, void>(
                    (pair<int, RadioGroup::OptionData>*)local_b0, &local_54, (OptionData*)local_f8);
                eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL,
                                  eastl::vector<eastl::pair<int, RadioGroup::OptionData>, BucketAllocatorEASTL>>::
                    insert<eastl::pair<int, RadioGroup::OptionData>, void>(local_48, (pair*)local_b0);
                local_b0->~pair();
                local_f8->~__alt();
                uVar13 = uVar13 + 1;
            } while (local_50 != uVar13);
        }
        bVar4 = param_1->g1();
        uVar7 = local_48->size();
        if (bVar4 < uVar7) {
            SelectOptionByIndex(local_38, bVar4, true, false, true);
        } else if (local_38->field_488 != 0) {
            uVar12 = logger::default_logger();
            uVar8 = local_48->size();
            logger::Logger::Log(
                uVar12, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                512,
                "RadioGroup entry decoded selected option index is invalid - received %u but we only have %u Options. "
                "Defaulting to 0.",
                (uint)bVar4, uVar8);
            SelectOptionByIndex(local_38, '\0', true, false, true);
        }
        Margin::Margin(local_b0, param_1);
        pRVar1 = local_38;
        pRVar1->field_495 = local_b0[0].field_0;
        pRVar1->field_496 = local_b0[0].field_1;
        pRVar1->field_497 = local_b0[0].field_2;
        pRVar1->field_498 = local_b0[0].field_3;
        Margin::Margin(local_b0, param_1);
        pRVar1->field_499 = local_b0[0].field_0;
        pRVar1->field_500 = local_b0[0].field_1;
        pRVar1->field_501 = local_b0[0].field_2;
        pRVar1->field_502 = local_b0[0].field_3;
        bVar4 = param_1->g1();
        local_38->field_100 = ~bVar4;
        uVar8 = param_1->g4();
        local_38->field_96 = uVar8;
        (local_38->field_552, param_1, local_3c)->DecodeTextData();
        (local_38->field_504, param_1, local_3c)->DecodeSpriteData();
        eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, BucketAllocatorEASTL>::~vector(local_70);
    }

    // 0x1006a8dc0, 336 bytes, placed by class name
    // RadioGroup::LoadStyleSheetVisuals(StyleSheet const&)
    void RadioGroup::LoadStyleSheetVisuals(StyleSheet* param_1) {
        byte* pbVar1;
        byte* pbVar2;

        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_100, 399, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_1, &field_96, 398, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_492, 401, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_491, 400, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_493, 402, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, &field_494, 403, 1);
        pbVar1 = &field_488;
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, pbVar1, 404, 1);
        pbVar2 = &field_489;
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_1, pbVar2, 404, 1);
        (&field_495, 424, param_1)->LoadFromStylesheet();
        (&field_499, 430, param_1)->LoadFromStylesheet();
        (field_552, 416, param_1)->LoadStyleSheetTextData();
        (field_504, 406, param_1)->LoadStyleSheetSpriteData();
        if (field_488 == 0) {
            *pbVar1 = 1;
        }
        if (*pbVar2 < *pbVar1) {
            *pbVar2 = *pbVar1;
        }
    }

    // 0x1006acf00: the linker folded this into Button::GetValueRepresentation(), which has identical code
    ComponentMultiValueMixin RadioGroup::GetValueRepresentation();

} // namespace jag::ui

namespace jag::tweak {
    // 0x100a51540: the linker folded this into Container::~Container(), which has identical code
    RadioGroup::~RadioGroup();

    // 0x100a51540: the linker folded this into Container::~Container(), which has identical code
    SizeControl::~SizeControl();

    // 0x100a51660: the linker folded this into SizeControl::~SizeControl(), which has identical code
    RadioGroup::~RadioGroup();

    // 0x100a51670: the linker folded this into SizeControl::~SizeControl(), which has identical code
    RadioGroup::~RadioGroup();

} // namespace jag::tweak
