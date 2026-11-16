// libs/ui/components/RadioGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "RadioGroup.h"
#include "libs/tweaky/Tweaky_SizeControls.h"

namespace jag::ui {
    // 0x100f3e9d1
    bool RadioGroup::m_debugDrawClickBounds = 0;

    // 0x1001319d0: RadioGroup::OptionData::~OptionData() has the same machine code as oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp()

    // 0x1006a6f90
    RadioGroup::RadioGroup() : Component(), MakeSharedPool<RadioGroup, 32>() {
        *(uint8_t***)this = &PTR__RadioGroup_100f0f9e8;
        *(uint8_t***)m_valueRepresentation = &PTR__RadioGroup_100f0fb08;
        new (&field_400) eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>();
        new (&field_432) eastl::fixed_vector<ComponentMultiValueMixin::ValueChangeEvent, 2ul>();
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
        (**(void (**)(...))(*(long*)this + 32))(this, 1);
    }

    // 0x1006a7150
    void RadioGroup::MainLogic(const ComponentDependencies& componentDependencies, int arg2, int arg3, bool arg4,
                               bool arg5, bool arg6, bool arg7) {
        unsigned int uVar1;
        bool bVar3;
        uint8_t bVar4;
        long lVar5;
        int arg2_00;
        uint64_t in_register_00000081;
        uint64_t in_register_00000089;
        uint8_t arg1;
        unsigned int uVar6;
        long lVar7;
        uint8_t in_stack_ffffffffffffff48;
        int local_8c;
        int local_88;
        int local_84;
        unsigned int local_80;
        int local_7c;
        bool local_6c;
        bool local_68;
        int local_50[2];
        OptionData* local_48;

        _local_6c = (uint32_t)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
        _local_68 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        int local_34 = GetStreamCountLastMix();
        unsigned int local_38 = GetMinMapX();
        Margin local_90 = (Margin)field_495.GetValidOr('\0');
        local_90.ApplyTo(arg2, arg3, local_34, local_38);
        float local_54 = (float)arg2;
        local_48 = (OptionData*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)((float)arg3));
        CalculateLogicBounds((RadioGroup*)&local_90, (int)this, local_34);
        int* this_00 = &field_400;
        int local_64 = local_8c;
        int local_60 = local_88;
        int local_5c = local_84;
        unsigned int local_58 = local_80;
        if (this_00->size()) {
            uVar6 = 0;
            arg1 = 0;
            arg2_00 = local_7c;
            do {
                lVar5 = this_00->HeapBeginPtr();
                lVar7 = (unsigned long)arg1 * 64;
                local_48 = (OptionData*)(lVar5 + lVar7 + 8);
                bVar3 = (bool)local_48->Selected();
                if (!(CanChangeSelection(bVar3))) {
                    bVar3 = false;
                } else {
                    bVar3 = *(char*)(lVar5 + 32 + lVar7) != '\0';
                }
                local_50[0] = ((lVar7 + lVar5 + 36))
                                  ->UpdateLogic((Vector2T<float>*)(unsigned long)uVar6, arg2_00, local_64, local_60,
                                                (unsigned int)(uint8_t)(bVar3 & arg6), local_68, local_6c,
                                                (bool)in_stack_ffffffffffffff48);
                if (local_50->empty()) {
                    bVar4 = local_48->Selected();
                    SelectOptionByIndex(arg1, (bool)(bVar4 ^ 1), true, false);
                }
                uVar6 = uVar6 + local_5c;
                if ((int)uVar6 < local_34) {
                    uVar1 = 0;
                } else {
                    uVar6 = 0;
                    uVar1 = local_58;
                }
                arg2_00 = arg2_00 + uVar1;
                arg1 = arg1 + 1;
                bVar4 = this_00->size();
            } while (arg1 < bVar4);
        }
    }

    // 0x1006a73a0
    uint8_t[16] RadioGroup::CalculateLogicBounds(int arg1, int arg2) const {
        int iVar5;
        unsigned int uVar6;
        int in_ECX;
        uint32_t in_register_00000034;
        uint8_t auVar10[16];

        RadioGroup* this_00 = (RadioGroup*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        unsigned long uVar7 =
            ((vector<eastl::pair<eastl::fixed_string<char, 16>, float>>*)((((uint64_t)in_register_00000034 << 32) |
                                                                           (uint32_t)arg1) +
                                                                          400))
                ->size();
        uint8_t bVar1 = this_00->field_492;
        float fVar9 = (float)ceil((float)uVar7 / (float)bVar1);
        int iVar8 = (int)fVar9;
        *(int*)this = iVar8;
        uint8_t bVar2 = this_00->field_491;
        int iVar4 = (int)(arg2 - (bVar1 - 1) * (unsigned int)bVar2) / (int)(unsigned int)bVar1;
        field_4 = iVar4;
        *(unsigned int*)&field_12 = iVar4 + (unsigned int)bVar2;
        if (OptionsUseRegularButtons(this_00) == '\0') {
            uVar6 = (unsigned int)this_00->field_493;
            field_8 = (short)uVar6;
            field_10 = (short)(uVar6 >> 16);
            bVar1 = this_00->field_491;
            uVar6 = uVar6 + bVar1;
            field_16 = uVar6;
            uVar6 = (in_ECX + (unsigned int)bVar1) - uVar6 * iVar8;
            uVar7 = (unsigned long)uVar6;
            iVar4 = (int)uVar6 / 2;
        } else {
            bVar1 = this_00->field_491;
            iVar4 = in_ECX - (iVar8 - 1) * (unsigned int)bVar1;
            iVar5 = iVar4 / iVar8;
            uVar7 = (long)iVar4 % (long)iVar8 & 4294967295;
            *(int*)&field_8 = iVar5;
            field_16 = iVar5 + (unsigned int)bVar1;
            iVar4 = 0;
        }
        field_20 = iVar4;
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = this;
        return auVar10;
    }

    // 0x1006a74a0
    bool RadioGroup::CanChangeSelection(bool arg1) const {
        uint32_t in_register_00000031;

        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            if (CanSelectMultipleOptions() == '\0') {
                return true;
            }
            if (!arg1)
                goto LAB_1006a74dc;
        }
        uint8_t bVar1 = field_490;
        uint8_t bVar2 = field_488;
        if (bVar2 < bVar1) {
            return bVar2 < bVar1;
        }
        if (arg1) {
            return bVar2 < bVar1;
        }
    LAB_1006a74dc:
        return field_490 < field_489;
    }

    // 0x1006a7500
    void RadioGroup::SelectOptionByIndex(unsigned char arg1, bool arg2, bool arg3, bool arg4) {
        bool cVar2;
        long lVar3;
        Logger* this_00;
        uint64_t uVar4;
        int* arg1_01;
        uint64_t in_register_00000031;
        OptionData* this_01;
        bool local_32;

        int* piVar5 = &field_400;
        uint8_t bVar1 = piVar5->size();
        if ((unsigned int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) < (unsigned int)bVar1) {
            lVar3 = piVar5->HeapBeginPtr();
            this_01 = (OptionData*)(lVar3 + (unsigned long)arg1 * 64 + 8);
            cVar2 = this_01->Selected();
            if (arg2 != (bool)cVar2) {
                cVar2 = CanChangeSelection((bool)this_01->Selected());
                if (cVar2) {
                    cVar2 = CanSelectMultipleOptions();
                    if (!cVar2) {
                        arg1_01 = (int*)GetSelectedOption('\0');
                        piVar5 = (int*)piVar5->end();
                        if (arg1_01 != piVar5) {
                            ((arg1_01 + 2))->SetSelected(false, arg4);
                            if (arg3) {
                                local_32 = false;
                                field_432.emplace_back<int&, bool&>(*arg1_01, local_32);
                            }
                        }
                        field_490 = 1;
                    } else {
                        field_490 = (arg2 * '\x02' + field_490) - 1;
                    }
                    if (field_490 < field_488) {
                        LogAssert("m_numSelectedOptions >= m_minSelectedOptions",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "RadioGroup.cpp",
                                  455, nullptr);
                    }
                    if (field_489 < field_490) {
                        LogAssert("m_numSelectedOptions <= m_maxSelectedOptions",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "RadioGroup.cpp",
                                  456, nullptr);
                    }
                    this_01->SetSelected(arg2, arg4);
                    if (arg3) {
                        field_432.emplace_back<int&, bool&>(*((int*)(lVar3 + (unsigned long)arg1 * 64)), arg2);
                    }
                }
            }
        } else {
            this_00 = logger::default_logger();
            uVar4 = piVar5->size();
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                424, "Attempting to select an invalid index - got %u but there are only %u options available",
                (((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) & 4294967295, uVar4);
        }
    }

    // 0x1006a76e0
    void RadioGroup::MainDraw(const ComponentDependencies& componentDependencies, int arg2, int arg3, float arg4) {
        FontManager* this_00;
        int arg3_00;
        Layout* this_01;
        bool cVar2;
        uint8_t bVar3;
        int iVar4;
        unsigned int uVar5;
        shared_ptr* psVar9;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        FontHelpers* this_04;
        MapArea* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        Texture* pTVar10;
        unsigned int* puVar12;
        Logger* this_07;
        unsigned short uVar14;
        ComponentDependencies* pCVar15;
        ButtonElement* this_09;
        int arg2_00;
        bool arg7;
        StringView local_110;
        uint8_t* local_100;
        TextProperties local_f8;
        uint8_t local_d0[4];
        int local_cc;
        unsigned int local_c8;
        int local_c4;
        unsigned int local_c0;
        int local_bc;
        SpriteData* local_b8;
        shared_ptr* local_b0;
        Texture* local_a8;
        int local_a0;
        unsigned int local_9c;
        unsigned int local_98;
        unsigned int local_94;
        TextData* local_90;
        int local_7c;
        unsigned int local_78;
        int local_74;
        Layout* local_68;
        RT7Core* local_58;
        int local_50;
        Margin local_4c;
        int local_48;
        unsigned int local_44;
        unsigned int local_34;

        local_68 = (Layout*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)arg4);
        int* piVar11 = &field_400;
        RadioGroup* local_40 = this;
        long lVar6 = piVar11->HeapBeginPtr();
        long lVar7 = piVar11->end();
        RadioGroup* pRVar1 = local_40;
        for (; local_40 = pRVar1, lVar6 != lVar7; lVar6 = lVar6 + 64) {
            ((lVar6 + 36))->UpdateAnimations(local_68._0_4_);
            pRVar1 = local_40;
        }
        uint8_t* puVar13 = pRVar1->field_504;
        SpriteAtlasManager* spriteAtlasManager =
            ((*(RT7Core**)(componentDependencies + 16))->GetTextureManager())->GetSpriteAtlasManager();
        if ((uint8_t*)puVar13->LoadSpriteAtlasReference(*spriteAtlasManager, false) == DataStatus::READY) {
            local_68 = (Layout*)piVar11;
            psVar9 = (shared_ptr*)puVar13->GetDefaultValue();
            cVar2 = shared_ptr::operator_cast_to_bool(psVar9);
            if (!cVar2) {
                this_07 = logger::default_logger();
                iVar4 = 76;
            } else {
                local_b8 = (SpriteData*)puVar13;
                local_b0 = psVar9;
                this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*psVar9)
                              .operator->();
                psVar9 = (shared_ptr*)this_03->second();
                cVar2 = shared_ptr::operator_cast_to_bool(psVar9);
                if (cVar2) {
                    this_00 = *(FontManager**)(componentDependencies + 8);
                    local_90 = (TextData*)pRVar1->field_552;
                    iVar4 = local_90->GetEndPosition();
                    local_f8 = shared_ptr();
                    this_04 = (FontHelpers*)this_00->GetFont(iVar4, local_f8);
                    this_05 = (MapArea*)(*psVar9).operator->();
                    this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05->GetOrigin();
                    pTVar10 = (Texture*)this_06->end();
                    cVar2 = this_04->operator_cast_to_bool();
                    pRVar1 = local_40;
                    this_01 = local_68;
                    if ((cVar2) && (pTVar10 != nullptr)) {
                        local_58 = (RT7Core*)this_04;
                        local_50 = local_40->GetStreamCountLastMix();
                        local_7c = pRVar1->GetMinMapX();
                        local_78 = 0;
                        local_f8.m_pFont._0_4_ = pRVar1->field_495.GetValidOr('\0');
                        local_f8.ApplyTo(arg2, arg3, local_50, local_7c);
                        puVar13 = &local_40->field_499;
                        local_f8.m_pFont._0_4_ = local_b8->GetVisualMargin();
                        local_4c = (Margin)puVar13->GetValidOr(&local_f8);
                        CalculateLogicBounds((RadioGroup*)local_d0, (int)local_40, local_50);
                        local_f8.m_pFont._0_4_ = 0;
                        bVar3 = local_4c.GetWidth();
                        local_48 = local_cc - (unsigned int)bVar3;
                        piVar11 = std::max<int>(local_f8, local_48);
                        iVar4 = *piVar11;
                        local_f8.m_pFont._0_4_ = 0;
                        local_cc = iVar4;
                        bVar3 = local_4c.GetHeight();
                        pRVar1 = local_40;
                        local_48 = local_c8 - bVar3;
                        puVar12 = (unsigned int*)std::max<int>(local_f8, local_48);
                        local_c8 = *puVar12;
                        local_44 = local_c8;
                        cVar2 = OptionsUseRegularButtons(pRVar1);
                        if (!cVar2) {
                            local_44 = (unsigned int)pRVar1->field_493;
                            local_78 = pRVar1->field_494 + local_44;
                            local_74 = iVar4 - local_78;
                            uVar14 = (unsigned short)pRVar1->field_493;
                        } else {
                            uVar14 = (unsigned short)iVar4;
                            local_74 = iVar4;
                        }
                        local_34 = (((uint32_t)local_34._2_2_ << 16) | (uint16_t)uVar14);
                        local_a8 = pTVar10;
                        local_f8 = graphics::TextProperties(*local_58);
                        uVar5 = pRVar1->GetRGBA();
                        local_90->PopulateTextProperties(local_f8, uVar5, pRVar1->field_100);
                        local_f8.SetAlignment((unsigned int)(cVar2), 1);
                        puVar13 = (uint8_t*)this_01->HeapBeginPtr();
                        local_100 = (uint8_t*)this_01->end();
                        if (puVar13 != local_100) {
                            local_a0 = local_c4;
                            local_9c = local_c0;
                            local_98 = local_34 & 65535;
                            local_94 = local_44 & 65535;
                            iVar4 = 0;
                            pCVar15 = componentDependencies;
                            this_09 = (ButtonElement*)(puVar13 + 36);
                            do {
                                pRVar1 = local_40;
                                arg2_00 = (unsigned int)local_4c.field_0 + arg2 + iVar4;
                                local_68 = (Layout*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)local_bc);
                                local_90 =
                                    (TextData*)(((uint64_t)local_90._4_4_ << 32) |
                                                (uint32_t)(((unsigned int)local_4c >> 8 & 255) + arg3 + local_bc));
                                local_58 = *(RT7Core**)(pCVar15 + 16);
                                local_34 = local_40->GetRGBA();
                                cVar2 = pRVar1->IsEnabled();
                                pTVar10 = local_a8;
                                if (!cVar2) {
                                    arg7 = false;
                                } else {
                                    arg7 = this_09[-1].field_28 != '\0';
                                }
                                lVar6 = ((SpriteAtlasReference*)(*local_b0).operator->())->GetRenderMapping();
                                arg3_00 = (int)local_90;
                                this_09->Draw(*local_58, arg2_00, (int)local_90, (unsigned short)local_98,
                                              (unsigned short)local_94, local_34, arg7, pTVar10, *((lVar6 + 88)),
                                              *local_b8, false);
                                pCVar15 = componentDependencies;
                                local_58 = *(RT7Core**)componentDependencies;
                                local_110.StringView<eastl::fixed_string<char, 40>>(
                                    *((basic_string<char, BucketAllocatorEASTL>*)&this_09[-1].m_trigger));
                                local_58->DrawStringMultiline(&local_110, arg2_00 + local_78, arg3_00, local_74,
                                                              local_44, nullptr, local_f8);
                                iVar4 = iVar4 + local_a0;
                                if (iVar4 < local_50) {
                                    uVar5 = 0;
                                } else {
                                    iVar4 = 0;
                                    uVar5 = local_9c;
                                }
                                local_bc = (int)local_68._0_4_ + uVar5;
                                puVar13 = &this_09->field_28;
                                this_09 = this_09 + 2;
                            } while (puVar13 != local_100);
                        }
                    }
                    if (*PTR_m_debugDrawClickBounds_100ee6400 == '\0') {
                        return;
                    }
                    DebugDrawClickbounds(local_40, *(RT7Core**)(componentDependencies + 16), arg2, arg3);
                    return;
                }
                this_07 = logger::default_logger();
                iVar4 = 84;
            }
            this_07->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                iVar4, "Invalid sprite atlas reference!");
        }
    }

    // 0x1006a7c90
    void RadioGroup::DebugDrawClickbounds(graphics::RT7Core* rt7Core, int arg2, int arg3) {
        unsigned int uVar1;
        uint8_t bVar2;
        unsigned int uVar3;
        int arg3_00;
        int arg4;
        int iVar4;
        uint8_t bVar6;
        int iVar8;
        int iVar9;
        uint8_t local_88[24];
        int local_5c;
        unsigned int local_54;
        int local_44;

        auto this_00 = rt7Core->GetGUIManager();
        int local_34 = GetStreamCountLastMix();
        unsigned int local_40 = GetMinMapX();
        GridRect local_70(arg2, arg3, local_34, local_40);
        this_00->AddOutline(local_70, 2, 4294967295, 1);
        local_70.field_0 = field_495.GetValidOr('\0');
        local_70.ApplyTo(arg2, arg3, local_34, local_40);
        local_70 = oldscape::dash3d::GridRect(arg2, arg3, local_34, local_40);
        this_00->AddOutline(local_70, 2, 43775, 1);
        unsigned long uVar7 = (unsigned long)local_40;
        CalculateLogicBounds((RadioGroup*)&local_70, (int)this, local_34);
        local_88._16_8_ = &field_400;
        int local_50 = local_70.field_4;
        int local_4c = local_70.field_8;
        unsigned int local_48 = local_70._16_4_;
        if (local_88._16_8_->size() != '\0') {
            uVar7 = (((uint64_t)((int64_t)(uVar7 >> 8)) << 8) | (uint8_t)1);
            iVar9 = 0;
            local_44 = local_70.field_12;
            iVar8 = local_5c;
            do {
                arg4 = local_4c;
                arg3_00 = local_50;
                local_54 = (unsigned int)uVar7;
                new (local_88) oldscape::dash3d::GridRect(arg2 + iVar9, arg3 + iVar8, local_50, local_4c);
                this_00->AddOutline(*local_88, 2, 11158783, 1);
                iVar4 = local_44;
                new (local_88) oldscape::dash3d::GridRect(arg2 + iVar9, arg3 + iVar8, arg3_00, arg4);
                this_00->AddOutline(*local_88, 2, 4291559679, 1);
                uVar3 = local_54;
                iVar9 = iVar9 + iVar4;
                if (iVar9 < local_34) {
                    uVar1 = 0;
                } else {
                    iVar9 = 0;
                    uVar1 = local_48;
                }
                iVar8 = iVar8 + uVar1;
                bVar2 = (uint8_t)local_54;
                bVar6 = local_88._16_8_->size();
                uVar7 = (unsigned long)((uVar3 & 255) + 1);
            } while (bVar2 < bVar6);
        }
    }

    // 0x1006a7e80
    uint32_t RadioGroup::Setup(const UIDataMappingProvider<int, StringView>& uiDataMappingProvider) {
        int* this_00;
        unsigned char arg1;
        pair<int, RadioGroup::OptionData>* arg1_00;
        pair<int, RadioGroup::OptionData>* arg2;
        Entry* entry2;
        Entry* pEVar2;
        __58* in_RCX;
        RadioGroup* local_a0;
        StringView local_98;

        uint32_t uVar1 = (**(void (**)(...))(*(long*)uiDataMappingProvider + 24))(uiDataMappingProvider);
        if ((char)uVar1 != '\0') {
            this_00 = &field_400;
            this_00->clear();
            local_a0 = this;
            fixedfunction::function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>::function<
                RadioGroup::Setup(UIDataMappingProvider<int, StringView> const&)::__57, void>(
                (function<void(int, StringView), 64ul, 16ul, (fixedfunction::Methods)0>*)&local_98, (__57*)&local_a0);
            (**(void (**)(...))(*(long*)uiDataMappingProvider + 16))(uiDataMappingProvider, &local_98);
            (**(void (**)(...))(*(long*)uiDataMappingProvider + 48))(&local_98, uiDataMappingProvider);
            arg1_00 = (pair<int, RadioGroup::OptionData>*)this_00->HeapBeginPtr();
            arg2 = (pair<int, RadioGroup::OptionData>*)this_00->end();
            entry2 = (Entry*)eastl::find<eastl::pair<int, RadioGroup::OptionData>*, StringView,
                                         (UIDataMappingProvider<int, StringView> const&)->Setup()::__58>(
                arg1_00, arg2, &local_98, in_RCX);
            pEVar2 = (Entry*)this_00->end();
            if (entry2 == pEVar2) {
                if (field_488 == 0)
                    goto LAB_1006a7f7a;
                arg1 = '\0';
            } else {
                pEVar2 = (Entry*)this_00->HeapBeginPtr();
                arg1 = eastl::distance<eastl::pair<eastl::fixed_string<char, 16>, unsigned int>*>(pEVar2, entry2);
            }
            SelectOptionByIndex(arg1, true, false, true);
        }
    LAB_1006a7f7a:
        return uVar1;
    }

    // 0x1006a8070
    unsigned long RadioGroup::AddOption(int arg1, const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        long lVar2;
        Logger* this_01;
        uint64_t uVar3;
        unsigned int extraout_EDX;
        OptionData local_b8;
        StringView local_40;

        int* this_00 = &field_400;
        unsigned long uVar1 = this_00->size();
        if (uVar1 < 255) {
            local_40.StringView<eastl::fixed_string<char, 40>>(str);
            local_b8 = OptionData(&local_40);
            ((local_b8[0].field_28 + 28))->pair<int, RadioGroup::OptionData, void>(arg1, local_b8);
            this_00->insert<eastl::pair<int, RadioGroup::OptionData>, void>(*((local_b8[0].field_28 + 28)));
            ((local_b8[0].field_28 + 28))->~pair();
            uVar1 = (unsigned long)extraout_EDX & 18446744073709551361;
            if ((extraout_EDX & 1) != 0) {
                lVar2 = this_00->size();
                uVar1 = (((uint64_t)((int64_t)(uVar1 >> 8)) << 8) | (uint8_t)1);
                if ((lVar2 == 1) && (field_488 != 0)) {
                    SelectOptionByIndex('\0', true, false, true);
                }
            }
        } else {
            this_01 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar1 = 0;
            this_01->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                243, "Cannot add option %s=%d as RadioGroup is already at the 255 option limit", uVar3, arg1);
        }
        return uVar1;
    }

    // 0x1006a82c0
    bool RadioGroup::RemoveOption(int arg1) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this;
        uint32_t in_register_0000003c;

        this = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)((((uint64_t)in_register_0000003c
                                                                                     << 32) |
                                                                                    (uint32_t)arg1) +
                                                                                   400);
        pair<int, RadioGroup::OptionData>* arg1_00 = (pair<int, RadioGroup::OptionData>*)
            eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>::find(*this);
        auto ppVar1 = end();
        if (arg1_00 != ppVar1) {
            erase(arg1_00);
        }
        return arg1_00 != ppVar1;
    }

    // 0x1006a8360
    void RadioGroup::ClearOptions() {
        field_400.clear();
        field_432.clear();
    }

    // 0x1006a8390
    bool RadioGroup::HasOption(int arg1) {
        long lVar1 =
            eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>::find(field_400);
        long lVar2 = field_400.end();
        return lVar1 != lVar2;
    }

    // 0x1006a83d0
    uint32_t RadioGroup::GetSelectedValue(unsigned char arg1) const {
        uint32_t uVar1;

        auto puVar2 = GetSelectedOption(arg1);
        auto puVar3 = field_400.end();
        if (puVar2 == puVar3) {
            uVar1 = 4294967295;
        } else {
            uVar1 = *puVar2;
        }
        return uVar1;
    }

    // 0x1006a8410
    long RadioGroup::GetSelectedOption(unsigned char arg1) const {
        int* this_00;
        long lVar2;
        long lVar3;
        unsigned char uVar4;

        if (arg1 < field_490) {
            this_00 = &field_400;
            lVar2 = this_00->HeapBeginPtr();
            lVar3 = this_00->end();
            if (lVar2 != lVar3) {
                uVar4 = '\0';
                do {
                    if (((lVar2 + 8))->Selected() != '\0') {
                        if (uVar4 == arg1) {
                            return lVar2;
                        }
                        uVar4 = uVar4 + '\x01';
                    }
                    lVar2 = lVar2 + 64;
                    lVar3 = this_00->end();
                } while (lVar2 != lVar3);
            }
        }
        lVar2 = field_400.end();
        return lVar2;
    }

    // 0x1006a84b0
    uint8_t* RadioGroup::GetSelectedLabel(unsigned char arg1) const {
        uint8_t* puVar4;

        long lVar2 = GetSelectedOption(arg1);
        long lVar3 = field_400.end();
        if (lVar2 == lVar3) {
            puVar4 = &GetSelectedLabel(unsigned char)::empty;
            if (GetSelectedLabel(unsigned char)::empty == '\0') {
                if (___cxa_guard_acquire(&GetSelectedLabel(unsigned char)::empty) != 0) {
                    puVar4 = &GetSelectedLabel(unsigned char)::empty;
                    new ((basic_string<char, BucketAllocatorEASTL>*)&GetSelectedLabel(unsigned char)::empty)
                        eastl::basic_string<char, BucketAllocatorEASTL>();
                    ___cxa_atexit(PTR__basic_string_100ee6c78, &GetSelectedLabel(unsigned char)::empty, 4294967296);
                    ___cxa_guard_release(&GetSelectedLabel(unsigned char)::empty);
                }
            }
        } else {
            puVar4 = (uint8_t*)(lVar2 + 8);
        }
        return puVar4;
    }

    // 0x1006a8550
    bool RadioGroup::SetOptionSelected(int arg1, bool arg2, bool arg3) {
        Entry* entry1;

        int* this_00 = &field_400;
        Entry* entry2 =
            (Entry*)eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>::find(
                *this_00);
        auto pEVar1 = this_00->end();
        if (entry2 != pEVar1) {
            entry1 = (Entry*)this_00->HeapBeginPtr();
            SelectOptionByIndex(
                eastl::distance<eastl::pair<eastl::fixed_string<char, 16>, unsigned int>*>(entry1, entry2), arg2, arg3,
                false);
        }
        return entry2 != pEVar1;
    }

    // 0x1006a85d0
    uint64_t RadioGroup::GetOptionSelected(int arg1) const {
        uint64_t uVar3;

        long lVar1 =
            eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>::find(field_400);
        long lVar2 = field_400.end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = ((lVar1 + 8))->Selected();
        }
        return uVar3;
    }

    // 0x1006a8620
    bool RadioGroup::SetOptionEnabled(int arg1, bool arg2) {
        long lVar1 =
            eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>::find(field_400);
        long lVar2 = field_400.end();
        if (lVar1 != lVar2) {
            *(bool*)(lVar1 + 32) = arg2;
        }
        return lVar1 != lVar2;
    }

    // 0x1006a8670
    bool RadioGroup::GetOptionEnabled(int arg1) const {
        bool bVar3;

        long lVar1 =
            eastl::vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>::find(field_400);
        long lVar2 = field_400.end();
        if (lVar1 == lVar2) {
            bVar3 = false;
        } else {
            bVar3 = *(char*)(lVar1 + 32) != '\0';
        }
        return bVar3;
    }

    // 0x1006a86c0
    void RadioGroup::SetVisualParams(unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4) {
        uint64_t in_register_00000031;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            LogAssert(
                "numColumns > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                363, nullptr);
        }
        field_492 = arg1;
        field_491 = arg2;
        field_493 = arg3;
        field_494 = arg4;
    }

    // 0x1006a8730
    bool RadioGroup::SetSelectionLimits(unsigned char arg1, unsigned char arg2) {
        unsigned char uVar1;
        unsigned char* puVar2;
        uint8_t auStack_28[5];
        unsigned char local_23;

        uint16_t local_22 = (((uint16_t)arg2 << 8) | (uint8_t)arg1);
        if (arg1 <= arg2) {
            if (arg1 == '\0') {
                (logger::default_logger())
                    ->Log(false, 3,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                          "RadioGroup.cpp",
                          376, "Attempting to change the minimum number of selected entries to 0, overriding to 1");
                puVar2 = std::max<unsigned char>(*(auStack_28 + 4), local_22);
                uVar1 = *puVar2;
                puVar2 = std::max<unsigned char>(local_23, *((unsigned char*)((long)&local_22 + 1)));
                _auStack_28 = (((uint64_t)(*puVar2) << 56) |
                               (uint64_t)((uint64_t)(((uint16_t)arg2 << 8) | (uint8_t)uVar1) << 48));
            }
            field_488 = (uint8_t)local_22;
            field_489 = local_22._1_1_;
        }
        return arg1 <= arg2;
    }

    // 0x1006a87e0
    void RadioGroup::SetMargin(Component::MarginType marginType, Margin margin) {
        Margin* pMVar1;

        if (marginType == 1) {
            pMVar1 = (Margin*)&field_499;
        } else {
            if (marginType != 0) {
                return;
            }
            pMVar1 = (Margin*)&field_495;
        }
        *pMVar1 = margin;
    }

    // 0x1006a8810
    Margin RadioGroup::GetMargin(Component::MarginType marginType) const {
        Margin local_c;

        if (marginType == 1) {
            local_c.field_0 = field_499;
            local_c.field_1 = field_500;
            local_c.field_2 = field_501;
            local_c.field_3 = field_502;
        } else if (marginType == 0) {
            local_c.field_0 = field_495;
            local_c.field_1 = field_496;
            local_c.field_2 = field_497;
            local_c.field_3 = field_498;
        } else {
            local_c = Margin();
        }
        return local_c;
    }

    // 0x1006a8860
    long RadioGroup::GetSelectedOption(unsigned char arg1) {
        int* this_00;
        long lVar2;
        long lVar3;
        unsigned char uVar4;

        if (arg1 < field_490) {
            this_00 = &field_400;
            lVar2 = this_00->HeapBeginPtr();
            lVar3 = this_00->end();
            if (lVar2 != lVar3) {
                uVar4 = '\0';
                do {
                    if (((lVar2 + 8))->Selected() != '\0') {
                        if (uVar4 == arg1) {
                            return lVar2;
                        }
                        uVar4 = uVar4 + '\x01';
                    }
                    lVar2 = lVar2 + 64;
                    lVar3 = this_00->end();
                } while (lVar2 != lVar3);
            }
        }
        lVar2 = field_400.end();
        return lVar2;
    }

    // 0x1006a8990
    void RadioGroup::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint32_t uVar8;
        Logger* this_00;
        unsigned long arg1_00;
        uint8_t local_f8[72];
        int local_54;

        char cVar2 = arg1.g1();
        (**(void (**)(...))(*(long*)this + 32))(this, cVar2 == '\x01');
        unsigned char uVar3 = arg1.g1();
        field_492 = uVar3;
        uVar3 = arg1.g1();
        field_491 = uVar3;
        uVar3 = arg1.g1();
        field_493 = uVar3;
        uVar3 = arg1.g1();
        field_494 = uVar3;
        uint8_t bVar4 = arg1.g1();
        field_488 = bVar4;
        bVar4 = arg1.g1();
        field_489 = bVar4;
        RadioGroup* local_38 = this;
        if (field_492 == '\0') {
            LogAssert(
                "m_numColumns > 0",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                481, nullptr);
        }
        unsigned short uVar5 = arg1.g2();
        vector<eastl::basic_string<char, BucketAllocatorEASTL>, BucketAllocatorEASTL> local_70;
        unsigned long local_50 = (unsigned long)uVar5;
        local_70.resize(local_50);
        auto pbVar9 = local_70.HeapBeginPtr();
        auto pbVar10 = local_70.end();
        for (; pbVar9 != pbVar10; pbVar9 = pbVar9 + 24) {
            arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(pbVar9, false);
        }
        short sVar6 = arg1.g2();
        if ((short)local_50 != sVar6) {
            LogAssert(
                "numOptions == numValues",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                498, nullptr);
        }
        vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>* local_48 =
            (vector_map<int, RadioGroup::OptionData, eastl::less<int>, BucketAllocatorEASTL>*)&local_38->field_400;
        if (local_50 != 0) {
            arg1_00 = 0;
            do {
                local_54 = arg1.g4s();
                pbVar9 = &local_70[arg1_00];
                ((local_f8 + 56))->StringView<eastl::fixed_string<char, 40>>(*pbVar9);
                new (local_f8) OptionData((local_f8 + 56));
                local_b0.pair<int, RadioGroup::OptionData, void>(local_54, *local_f8);
                local_48->insert<eastl::pair<int, RadioGroup::OptionData>, void>(local_b0);
                arg1_00 = arg1_00 + 1;
            } while (local_50 != arg1_00);
        }
        bVar4 = arg1.g1();
        unsigned int uVar7 = local_48->size();
        if (bVar4 < uVar7) {
            SelectOptionByIndex(local_38, bVar4, true, false, true);
        } else if (local_38->field_488 != 0) {
            this_00 = logger::default_logger();
            uVar8 = local_48->size();
            this_00->Log(
                false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/RadioGroup.cpp",
                512,
                "RadioGroup entry decoded selected option index is invalid - received %u but we only have %u Options. "
                "Defaulting to 0.",
                (unsigned int)bVar4, uVar8);
            SelectOptionByIndex(local_38, '\0', true, false, true);
        }
        Margin local_b0(arg1);
        RadioGroup* pRVar1 = local_38;
        pRVar1->field_495 = local_b0[0].field_0;
        pRVar1->field_496 = local_b0[0].field_1;
        pRVar1->field_497 = local_b0[0].field_2;
        pRVar1->field_498 = local_b0[0].field_3;
        local_b0 = Margin(arg1);
        pRVar1->field_499 = local_b0[0].field_0;
        pRVar1->field_500 = local_b0[0].field_1;
        pRVar1->field_501 = local_b0[0].field_2;
        pRVar1->field_502 = local_b0[0].field_3;
        bVar4 = arg1.g1();
        local_38->field_100 = ~bVar4;
        uVar8 = arg1.g4();
        local_38->field_96 = uVar8;
        local_38->field_552->DecodeTextData(arg1, arg2);
        local_38->field_504->DecodeSpriteData(arg1, arg2);
    }

    // 0x1006a8dc0
    void RadioGroup::LoadStyleSheetVisuals(const StyleSheet& styleSheet) {
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_100, 399, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(field_96, 398, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_492, 401, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_491, 400, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_493, 402, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(field_494, 403, true);
        uint8_t* fontAlign = &field_488;
        styleSheet.LoadPropertyValueIfSet<unsigned char>(*fontAlign, 404, true);
        uint8_t* fontAlign_00 = &field_489;
        styleSheet.LoadPropertyValueIfSet<unsigned char>(*fontAlign_00, 404, true);
        field_495.LoadFromStylesheet(424, styleSheet);
        field_499.LoadFromStylesheet(430, styleSheet);
        field_552->LoadStyleSheetTextData(416, styleSheet);
        field_504->LoadStyleSheetSpriteData(406, styleSheet);
        if (field_488 == 0) {
            *fontAlign = 1;
        }
        if (*fontAlign_00 < *fontAlign) {
            *fontAlign_00 = *fontAlign;
        }
    }

    // 0x1006acf00: RadioGroup::GetValueRepresentation() has the same machine code as Button::GetValueRepresentation()

} // namespace jag::ui

namespace jag::tweak {
    // 0x100a51540: RadioGroup::~RadioGroup() has the same machine code as Container::~Container()

    // 0x100a51540: SizeControl::~SizeControl() has the same machine code as Container::~Container()

} // namespace jag::tweak
