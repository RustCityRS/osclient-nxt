// libs/tweaky/Tweaky_List.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_List.h"

namespace jag::tweak {
    // 0x100a4a3b0
    void List::Draw(int arg1, int arg2) {
        EnumOptionToggle EVar1;
        Placement placement;
        int iVar3;
        int iVar4;
        Tweaky* pTVar5;
        LoginManager* pLVar6;
        RT7Core* pRVar7;
        int iVar8;
        int iVar9;
        unsigned int arg1_00;
        unsigned int uVar10;
        unsigned long arg1_01;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* this_00;
        uint32_t in_stack_ffffffffffffff6c;
        uint32_t in_stack_ffffffffffffff74;
        ClippingState local_80;
        int local_64;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_60;
        unsigned long local_58;
        int local_4c;
        int local_48;
        unsigned int local_44;
        shared_ptr local_40;

        if (GetControlSize((int*)(local_80.field_8 + 16))) {
            iVar9 = field_24 + arg1;
            iVar8 = field_28 + arg2;
            local_80 = oldscape::dash3d::GridRect(iVar9, iVar8, field_36 + iVar9, field_40 + iVar8);
            *(RT7Core**)&field_136 = local_80.field_0;
            field_144 = local_80.field_8._0_4_;
            field_148 = local_80.field_8._4_4_;
            local_40 = field_104.lock();
            if (shared_ptr::operator_cast_to_bool(&local_40)) {
                iVar8 = field_216.size();
                local_4c = field_272;
                pTVar5 = (Tweaky*)local_40.operator->();
                pTVar5->SetColour(1886417151);
                if (field_264 < 1) {
                    iVar9 = 0;
                } else {
                    iVar9 = field_264 / 2;
                }
                pTVar5 = (Tweaky*)local_40.operator->();
                pTVar5->DrawRect(arg1, iVar9 + arg2, local_80.field_8._16_4_ - 3, (local_64 - iVar9) - 3, false);
                if (field_268 < 1) {
                    iVar9 = 4;
                } else {
                    pTVar5 = (Tweaky*)local_40.operator->();
                    pTVar5->SetColour(808464639);
                    pTVar5 = (Tweaky*)local_40.operator->();
                    pTVar5->FillRect(arg1 + 6, arg2, field_268 + 4, field_264);
                    pTVar5 = (Tweaky*)local_40.operator->();
                    pTVar5->SetColour(3772834047);
                    iVar9 = local_40.operator->();
                    Tweaky::TextDraw<eastl::string>(iVar9, arg1 + 8,
                                                    *((fixed_string<char, _16>*)(unsigned long)(unsigned int)arg2),
                                                    (int)this + 48, -1, true);
                    iVar9 = field_264;
                }
                iVar9 = iVar9 + arg2;
                local_48 = arg1 + 4;
                if (field_268 < 1) {
                    iVar3 = -8;
                } else {
                    iVar3 = -4 - field_264;
                }
                local_80 = oldscape::dash3d::GridRect(local_48, iVar9, arg1 + field_36 - 6, field_40 + iVar9 + iVar3);
                *(RT7Core**)&field_284 = local_80.field_0;
                field_292 = local_80.field_8._0_4_;
                field_296 = local_80.field_8._4_4_;
                pLVar6 = (LoginManager*)local_40.operator->();
                pRVar7 = (RT7Core*)pLVar6->GetAuthWrapper();
                local_80 = graphics::ClippingState(pRVar7);
                pLVar6 = (LoginManager*)local_40.operator->();
                pRVar7 = (RT7Core*)pLVar6->GetAuthWrapper();
                if (field_268 < 1) {
                    iVar3 = 6;
                } else {
                    iVar3 = field_264 + 4;
                }
                pRVar7->SetClippingRectangle(local_48, iVar9, field_36 - 10, field_40 - iVar3, true);
                pTVar5 = (Tweaky*)local_40.operator->();
                local_60 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                   eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)&field_216;
                local_58 = (unsigned long)(unsigned int)arg1;
                pTVar5->SetColour(3772834047);
                pTVar5 = (Tweaky*)local_40.operator->();
                iVar3 = pTVar5->GetTextCenterYOffset(field_276);
                this_00 = local_60;
                local_44 = (((uint32_t)local_44._1_3_ << 8) | (uint8_t)(iVar8 <= local_4c));
                EVar1 = field_260;
                arg1_01 = (unsigned long)(int)EVar1;
                iVar4 = local_60->size();
                if ((int)EVar1 < iVar4) {
                    local_44 = (local_44 & 255) * 5 - 15;
                    local_58 = (unsigned long)((int)local_58 + 5);
                    uVar10 = iVar3 + iVar9;
                    do {
                        iVar3 = (*this_00)[arg1_01];
                        if ((EnumOptionToggle)arg1_01 == field_252) {
                            pTVar5 = (Tweaky*)local_40.operator->();
                            pTVar5->SetColour(2155937791);
                            pTVar5 = (Tweaky*)local_40.operator->();
                            pTVar5->FillRect(local_48, iVar9, field_36 + local_44, field_276);
                            pTVar5 = (Tweaky*)local_40.operator->();
                            arg1_00 = 255;
                        } else {
                            pTVar5 = (Tweaky*)local_40.operator->();
                            arg1_00 = 3772834047;
                        }
                        pTVar5->SetColour(arg1_00);
                        iVar4 = local_40.operator->();
                        Tweaky::TextDraw<eastl::string>(
                            iVar4, (int)local_58, *((fixed_string<char, _16>*)(unsigned long)uVar10), iVar3, -1, true);
                        this_00 = local_60;
                        iVar9 = iVar9 + field_276;
                        if (field_148 < iVar9)
                            break;
                        uVar10 = uVar10 + field_276;
                        arg1_01 = arg1_01 + 1;
                        iVar3 = local_60->size();
                    } while ((long)arg1_01 < (long)iVar3);
                }
                if (local_4c < iVar8) {
                    local_80 = oldscape::dash3d::GridRect(field_292 - 4, field_288, field_292 + 2, field_296);
                    pTVar5 = (Tweaky*)local_40.operator->();
                    iVar9 = local_60->size();
                    placement.field_4 = in_stack_ffffffffffffff6c;
                    placement.field_0 = field_260;
                    placement.field_8 = 0;
                    placement.field_12 = in_stack_ffffffffffffff74;
                    placement._16_4_ = iVar8;
                    pTVar5->DrawScrollBar(placement, (bool)local_80.field_0._0_1_, local_80.field_8._0_4_, 1, iVar9,
                                          (uint8_t)field_272);
                }
            }
        }
    }

    // 0x100a4a840
    void List::UpdateMouseSelection(float arg1, float arg2) {
        if (field_284.IsInside((int)arg1, (int)arg2) != '\0') {
            field_252 = (int)((arg2 - (float)field_288) / (float)(int)field_276) + field_260;
            ValidatePosition();
        }
    }

    // 0x100a4a8b0
    void List::ValidatePosition() {
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        EnumOptionToggle EVar2 = field_252;
        uint8_t* this_00 = &field_216;
        int iVar1 = this_00->size();
        auto shaderVariablePrecision2 = eastl::min<graphics::GraphicsQuality>(EVar2, iVar1 - 1);
        EVar2 = eastl::max<int>(0, shaderVariablePrecision2);
        field_252 = EVar2;
        if ((int)(field_260 + field_272) < (int)EVar2) {
            field_260 = EVar2 - field_272;
        }
        if ((int)EVar2 < (int)field_260) {
            field_260 = EVar2;
        }
        EVar2 = field_260;
        iVar1 = this_00->size();
        if (iVar1 - field_272 < (int)EVar2) {
            iVar1 = this_00->size();
            field_260 = iVar1 - field_272;
        }
        if ((int)field_260 < 0) {
            field_260 = 0;
        }
        if (field_252 != field_256) {
            local_30.shared_from_this();
            local_48 = Event(local_30, 3);
            DoCallback(local_48);
            field_256 = field_252;
        }
    }

    // 0x100a4a9f0
    uint64_t List::GetControlSize(int& arg1, int& arg2) {
        unsigned int uVar1;
        int iVar6;
        Tweaky* pTVar7;
        basic_string<char, BucketAllocatorEASTL>* str;
        basic_string<char, BucketAllocatorEASTL>* pbVar8;
        unsigned long uVar9;
        bool bVar10;
        StringView local_a0;
        StringView local_90;
        int local_7c;
        int local_54;
        int local_4c;
        ShaderVariablePrecision local_34;

        uint8_t* this_00 = &field_216;
        int* local_78 = arg2;
        int* local_70 = arg1;
        auto EVar4 = this_00->size();
        int iVar5 = eastl::min<graphics::GraphicsQuality>(EVar4, field_248);
        shared_ptr local_68 = field_104.lock();
        bool cVar3 = shared_ptr::operator_cast_to_bool(&local_68);
        if (!cVar3) {
            uVar9 = 0;
            bVar10 = false;
        } else {
            cVar3 = field_48.empty();
            if (!cVar3) {
                pTVar7 = (Tweaky*)local_68.operator->();
                local_a0.StringView<eastl::fixed_string<char, 40>>(field_48);
                pTVar7->GetTextSize(0, 0, &local_a0, -1);
            }
            field_268 = 0;
            field_264 = 0;
            pTVar7 = (Tweaky*)local_68.operator->();
            iVar6 = pTVar7->GetMinControlHeight();
            field_276 = iVar6 + 4;
            pTVar7 = (Tweaky*)local_68.operator->();
            iVar6 = pTVar7->GetVisibleY();
            uVar1 = field_276;
            EVar4 = iVar5 * uVar1;
            local_4c = eastl::min<graphics::GraphicsQuality>((iVar6 - (field_264 + uVar1)) - 12, EVar4);
            str = (basic_string<char, BucketAllocatorEASTL>*)this_00->HeapBeginPtr();
            pbVar8 = (basic_string<char, BucketAllocatorEASTL>*)this_00->end();
            bVar10 = str == pbVar8;
            uVar9 = (unsigned long)(((uint32_t)((int32_t)(EVar4 >> 8)) << 8) | (uint8_t)bVar10);
            if (bVar10) {
                local_34 = 0;
            } else {
                local_34 = 0;
                do {
                    pTVar7 = (Tweaky*)local_68.operator->();
                    local_90.StringView<eastl::fixed_string<char, 40>>(*str);
                    cVar3 = pTVar7->GetTextSize(local_54, local_7c, &local_90, -1);
                    if (!cVar3)
                        break;
                    local_34 = eastl::max<int>(local_34, local_54 + 4);
                    str = str + 32;
                    bVar10 = str == pbVar8;
                    uVar9 = (((uint64_t)((int64_t)(uVar9 >> 8)) << 8) | (uint8_t)bVar10);
                } while (!bVar10);
                if (bVar10 == false)
                    goto LAB_100a4ac12;
            }
            field_272 = local_4c / (int)field_276;
            field_36 = local_34 + 8;
            field_40 = local_4c + 4;
            if (0 < 0) {
                iVar5 = eastl::max<int>(0 + 24, local_34 + 8);
                field_36 = iVar5;
                field_40 = field_40 + field_264;
            }
            *local_70 = field_36;
            *local_78 = field_40;
        }
    LAB_100a4ac12:
        return bVar10;
    }

    // 0x100a4ac50
    uint64_t List::HandleKeyDown(int arg1) {
        uint64_t uVar1 = 0;
        switch (arg1) {
        case 63232:
            NavigateUp();
            break;
        case 63233:
            NavigateDown();
            break;
        default:
            goto switchD_100a4ac6f_caseD_f702;
        case 63273:
            NavigateHome();
            break;
        case 63275:
            NavigateEnd();
            break;
        case 63276:
            NavigatePageUp();
            break;
        case 63277:
            NavigatePageDown();
        }
        uVar1 = 1;
    switchD_100a4ac6f_caseD_f702:
        return uVar1;
    }

    // 0x100a4ae30
    void List::AddLine(const eastl::string& str) {
        field_216.push_back(str);
    }

    // 0x100a4ae50
    void List::AddLineUnique(const eastl::string& str) {
        auto this_00 = field_216.HeapBeginPtr();
        auto pbVar2 = field_216.end();
        while (true) {
            if (this_00 == pbVar2) {
                AddLine(str);
                return;
            }
            if (this_00->compare(str) == 0)
                break;
            this_00 = this_00 + 32;
        }
    }

    // 0x100a4aec0
    void List::AddLineUniqueFirstWord(const eastl::string& str) {
        AddEntryUniqueFirstWord<eastl::vector<eastl::string>, eastl::string>((vector<eastl::string>*)&field_216, str,
                                                                             true);
    }

    // 0x100a4b0d0
    void List::Sort() {
        uint8_t auVar1[16];

        auto str1 = field_216.HeapBeginPtr();
        auVar1 = field_216.end();
        eastl::sort<eastl::string*>(str1, auVar1._0_8_, auVar1._8_8_);
    }

    // 0x100a4b120
    void List::SaveSettings(TweakSettingsValue& tweakSettingsValue) {
        eastl::string local_38;

        ToString<eastl::string, int>(&local_38, (int)this + 252);
        tweakSettingsValue = &local_38;
    }

    // 0x100a4b180
    uint32_t List::LoadSettings(const TweakSettingsValue& tweakSettingsValue) {
        field_252 = eastl::stoi<eastl::string>(tweakSettingsValue, 10);
        ValidatePosition();
        return 1;
    }

    // 0x100a4b1b0
    void List::HandleMouseDown(float arg1, float arg2) {
        if (field_284.IsInside((int)arg1, (int)arg2) != '\0') {
            field_309 = '\0';
            field_304 = arg2;
            field_300 = 0.0;
        }
    }

    // 0x100a4b200
    uint32_t List::HandleMouseUp(float arg1, float arg2) {
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38;

        uint32_t uVar1 = field_284.IsInside((int)arg1, (int)arg2);
        if (((char)uVar1 != '\0') && (field_309 == '\0')) {
            UpdateMouseSelection(arg1, arg2);
            field_280 = field_252;
            local_38.shared_from_this();
            local_50 = Event(local_38, 2);
            DoCallback(local_50);
        }
        return uVar1;
    }

    // 0x100a4b2d0
    uint64_t List::OnClick(float arg1, float arg2, bool arg3) {
        uint32_t in_register_00000031;

        field_308 = arg3;
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg3) != 0) {
            if (HandleMouseDown(arg1, arg2)) {
                return 1;
            }
            if (arg3) {
                return 0;
            }
        }
        if (!(HandleMouseUp(arg1, arg2))) {
            return 0;
        }
        return 1;
    }

    // 0x100a4b340
    uint32_t List::OnMouseWheel(float arg1, float arg2, float arg3) {
        EnumOptionToggle EVar1;
        int iVar3;
        int iVar4;
        int iVar5;

        uint32_t uVar2 = field_284.IsInside((int)arg1, (int)arg2);
        if ((char)uVar2 != '\0') {
            iVar3 = field_272;
            iVar5 = iVar3 + 3;
            if (-1 < iVar3) {
                iVar5 = iVar3;
            }
            iVar3 = eastl::max<int>(1, iVar5 >> 2);
            if ((arg3 <= 0.0) || (field_260 == 0)) {
                if (arg3 < 0.0) {
                    iVar5 = field_272;
                    EVar1 = field_260;
                    iVar4 = field_216.size();
                    if (iVar5 + EVar1 != iVar4) {
                        ScrollDown(iVar3);
                    }
                }
            } else {
                ScrollUp(iVar3);
            }
        }
        return uVar2;
    }

    // 0x100a4b400
    void List::ScrollUp(int arg1) {
        field_252 = field_252 - arg1;
        field_260 = field_260 - arg1;
        ValidatePosition();
    }

    // 0x100a4b420
    void List::ScrollDown(int arg1) {
        field_252 = field_252 + arg1;
        field_260 = field_260 + arg1;
        ValidatePosition();
    }

    // 0x100a4b440
    uint64_t List::OnMouseMove(float arg1, float arg2) {
        bool cVar1;

        if ((field_308 == false) || (cVar1 = field_284.IsInside((int)arg1, (int)arg2), !cVar1)) {
            return 0;
        }
        float fVar2 = (arg2 - field_304) + field_300;
        field_300 = fVar2;
        field_304 = arg2;
        if (fVar2 <= (float)(int)field_276) {
            if ((float)(int)-field_276 <= fVar2)
                goto LAB_100a4b4ff;
            ScrollDown(1);
        } else {
            ScrollUp(1);
        }
        field_300 = 0.0;
        field_309 = '\x01';
    LAB_100a4b4ff:
        UpdateMouseSelection(arg1, arg2);
        return 1;
    }

    // 0x100a4b510
    uint32_t List::OnMouseOver(float arg1, float arg2) {
        uint32_t uVar1 = field_284.IsInside((int)arg1, (int)arg2);
        if ((char)uVar1 != '\0') {
            SetFocus();
            UpdateMouseSelection(arg1, arg2);
        }
        return uVar1;
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a4aee0
    void AddEntryUniqueFirstWord<eastl::vector<eastl::string>, eastl::string>(eastl::vector<eastl::string>& strs,
                                                                              const eastl::string& str, bool arg3) {
        long lVar3;
        basic_string<char, BucketAllocatorEASTL>* basic_string;
        basic_string<char, eastl::fixed_vector_allocator<1ul, _64ul, _1ul, _0ul, true> _>* str_00;
        char* pcVar4;
        unsigned long uVar5;
        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_708;

        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_3a0;
        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
            &local_3a0, (fixed_string<char, _1024>*)str, " ", -1);
        auto str1 = strs.HeapBeginPtr();
        auto pfVar2 = strs.end();
        if (str1 != pfVar2) {
            do {
                local_708 = eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>();
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
                    &local_708, str1, " ", -1);
                lVar3 = local_708.size();
                if (lVar3 != 0) {
                    lVar3 = local_3a0.size();
                    if (lVar3 != 0) {
                        basic_string = &local_708[0];
                        str_00 = &local_3a0[0];
                        if (basic_string->compare(str_00) == 0) {
                            if (arg3) {
                                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                uVar5 = str.size();
                                str1->assign(pcVar4, uVar5);
                            }
                            goto LAB_100a4b06a;
                        }
                    }
                }
                str1 = str1 + 32;
            } while (str1 != pfVar2);
        }
        auto this_00 = strs.push_back();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar5 = str.size();
        eastl::string::assign(this_00, pcVar4, uVar5);
    LAB_100a4b06a:
    }

} // namespace jag
