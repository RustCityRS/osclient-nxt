// libs/tweaky/Tweaky_DropdownGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_DropdownGroup.h"

namespace jag::tweak {
    // 0x100a452f0
    void DropdownGroup::Draw(int arg1, int arg2) {
        EnumOptionToggle EVar1;
        unsigned int uVar2;
        Placement placement;
        int iVar4;
        int iVar5;
        MapArea* this_00;
        int* piVar6;
        Tweaky* pTVar7;
        long lVar8;
        long* plVar9;
        int iVar10;
        unsigned long uVar11;
        int iVar12;
        uint32_t in_stack_ffffffffffffff2c;
        uint64_t in_stack_ffffffffffffff34;
        int aiStack_c0[2];
        GridRect local_b8;
        bool local_88[8];
        int local_80;
        int local_78[2];
        int* local_70;
        int local_60;
        int local_58;
        int local_54;
        vector<PageInfo>* local_50;
        unsigned int local_48;
        unsigned int local_44;
        shared_ptr local_40;

        if (GetControlSize(local_78)) {
            local_40 = field_104.lock();
            if (shared_ptr::operator_cast_to_bool(&local_40)) {
                this_00 = (MapArea*)local_40.operator->();
                piVar6 = (int*)this_00->GetOrigin();
                iVar5 = piVar6[2];
                iVar4 = *piVar6;
                field_36 = iVar5 - iVar4;
                iVar10 = arg1 + field_24;
                local_48 = arg2 + field_28;
                iVar12 = field_40 + local_48;
                pTVar7 = (Tweaky*)local_40.operator->();
                local_44 = pTVar7->GetTextCenterYOffset(field_340);
                new (&local_b8) oldscape::dash3d::GridRect(iVar10, local_48, (iVar5 - iVar4) + iVar10, iVar12);
                field_136 = local_b8[0].field_0;
                field_140 = local_b8[0].field_4;
                field_144 = local_b8[0].field_8;
                field_148 = local_b8[0].field_12;
                field_376 = field_136;
                field_380 = field_140;
                *(unsigned int*)&field_384 = field_136 + field_344;
                *(unsigned int*)((long)&field_384 + 4) = field_140 + field_340;
                pTVar7 = (Tweaky*)local_40.operator->();
                pTVar7->SetColour(808464639);
                pTVar7 = (Tweaky*)local_40.operator->();
                pTVar7->FillRect(field_376, field_380, field_344, field_340);
                pTVar7 = (Tweaky*)local_40.operator->();
                pTVar7->SetColour(2425393407);
                pTVar7 = (Tweaky*)local_40.operator->();
                pTVar7->FillRect(field_376, field_380, field_344, field_340 - 1);
                pTVar7 = (Tweaky*)local_40.operator->();
                pTVar7->SetColour(4294967295);
                iVar4 = local_40.operator->();
                iVar5 = field_376;
                local_50 = (vector<PageInfo>*)&field_248;
                iVar10 = (*local_50)[(long)(int)field_280];
                local_44 = local_44 + local_48;
                Tweaky::TextDraw<eastl::string>(iVar4, iVar5 + 1, *((fixed_string<char, _16>*)(unsigned long)local_44),
                                                iVar10, -1, true);
                local_b8 = eastl::fixed_string<char, 2>("v");
                pTVar7 = (Tweaky*)local_40.operator->();
                (&local_b8[-1].field_4)->StringView<eastl::fixed_string<char, 40>>(local_b8);
                pTVar7->GetTextSize(0, 0, &local_b8[-1].field_4, -1);
                uVar11 = field_384;
                iVar4 = 0 + field_328;
                SetColour(3772834047, field_333);
                iVar5 = local_40.operator->();
                Tweaky::TextDraw<eastl::string>(iVar5, (int)uVar11 - iVar4,
                                                *((fixed_string<char, _16>*)(unsigned long)local_44), (int)&local_b8,
                                                -1, true);
                lVar8 = (*local_50)[(long)(int)field_280];
                local_58 = 0;
                local_54 = 0;
                plVar9 = (long*)(*((lVar8 + 32))).operator->();
                (**(void (**)(...))(*plVar9 + 40))(plVar9, &local_58, &local_54);
                iVar5 = *(int*)((long)&field_384 + 4);
                field_392 = field_376;
                field_396 = iVar5;
                field_400 = field_376 + local_58;
                field_404 = iVar5 + local_54;
                plVar9 = (long*)(*((lVar8 + 32))).operator->();
                (**(void (**)(...))(*plVar9 + 32))(plVar9, field_392, field_396);
                field_304 = field_136;
                field_308 = field_404;
                field_312 = field_136 + field_320;
                field_316 = field_404 + field_324;
                plVar9 = (long*)field_288.operator->();
                (**(void (**)(...))(*plVar9 + 32))(plVar9, field_304, field_308);
                iVar5 = field_380;
                iVar4 = field_340 + iVar5;
                if (field_332 != '\0') {
                    EVar1 = field_356;
                    uVar11 = (unsigned long)(int)EVar1;
                    iVar10 = local_50->size();
                    if ((int)EVar1 < iVar10) {
                        local_70 = &field_136;
                        do {
                            uVar2 = field_340;
                            iVar4 = iVar4 + uVar2;
                            if (field_352 <= (int)((EnumOptionToggle)uVar11 - field_356))
                                break;
                            iVar5 = iVar5 + uVar2;
                            local_60 = iVar4;
                            local_48 = uVar2;
                            if ((EnumOptionToggle)uVar11 == field_336) {
                                pTVar7 = (Tweaky*)local_40.operator->();
                                pTVar7->SetColour(1886417151);
                                pTVar7 = (Tweaky*)local_40.operator->();
                                pTVar7->FillRect(field_136, iVar5, field_344, field_340);
                                pTVar7 = (Tweaky*)local_40.operator->();
                                pTVar7->SetColour(2155937791);
                                pTVar7 = (Tweaky*)local_40.operator->();
                                pTVar7->FillRect(field_136, iVar5, field_344, field_340 - 1);
                                pTVar7 = (Tweaky*)local_40.operator->();
                            } else {
                                pTVar7 = (Tweaky*)local_40.operator->();
                                pTVar7->SetColour(1886417151);
                                pTVar7 = (Tweaky*)local_40.operator->();
                                pTVar7->FillRect(field_136, iVar5, field_344, field_340);
                                pTVar7 = (Tweaky*)local_40.operator->();
                                pTVar7->SetColour(2425393407);
                                pTVar7 = (Tweaky*)local_40.operator->();
                                pTVar7->FillRect(field_136, iVar5, field_344, field_340 - 1);
                                pTVar7 = (Tweaky*)local_40.operator->();
                            }
                            pTVar7->SetColour(4294967295);
                            iVar10 = local_40.operator->();
                            iVar4 = *local_70;
                            iVar12 = (*local_50)[uVar11];
                            local_44 = local_44 + local_48;
                            Tweaky::TextDraw<eastl::string>(iVar10, iVar4 + 1,
                                                            *((fixed_string<char, _16>*)(unsigned long)local_44),
                                                            iVar12, -1, true);
                            uVar11 = uVar11 + 1;
                            iVar10 = local_50->size();
                            iVar4 = local_60;
                        } while ((long)uVar11 < (long)iVar10);
                    }
                }
                field_360 = field_376;
                field_364 = field_384 << 32 | field_384 >> 32;
                field_372 = iVar4;
                if (field_332 != '\0') {
                    iVar5 = local_50->size();
                    if ((int)field_348 < iVar5) {
                        iVar5 = field_140 + field_340;
                        new (local_88) oldscape::dash3d::GridRect(field_344 + field_136 - 2, iVar5,
                                                                  field_344 + field_136, field_340 * field_352 + iVar5);
                        pTVar7 = (Tweaky*)local_40.operator->();
                        iVar5 = local_50->size();
                        placement.field_4 = in_stack_ffffffffffffff2c;
                        placement.field_0 = field_356;
                        placement.field_8 = 1;
                        placement._12_8_ = in_stack_ffffffffffffff34;
                        pTVar7->DrawScrollBar(placement, local_88[0], local_80, 1, iVar5, (uint8_t)field_352);
                    }
                }
            }
        }
    }

    // 0x100a459f0
    uint64_t DropdownGroup::HandleMouseDown(float arg1, float arg2) {
        long lVar2;
        long* plVar3;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38;

        bool cVar1 = field_376.IsInside((int)arg1, (int)arg2);
        if (cVar1) {
            if (field_332 == '\0') {
                ShowList();
                local_38.shared_from_this();
                local_50 = Event(local_38, 2);
                DoCallback(local_50);
            } else {
                HideList();
                field_336 = field_280;
                ValidatePosition();
            }
            return 1;
        }
        if ((field_332 != '\0') && (cVar1 = field_360.IsInside((int)arg1, (int)arg2), cVar1)) {
            field_416 = 1;
            field_417 = 0;
            field_412 = arg2;
            field_408 = 0.0;
            return 1;
        }
        if ((field_332 == '\0') && (cVar1 = field_392.IsInside((int)arg1, (int)arg2), cVar1)) {
            lVar2 = field_248[(long)(int)field_280];
            plVar3 = (long*)(*((lVar2 + 32))).operator->();
        } else {
            if ((field_332 != '\0') || (cVar1 = field_304.IsInside((int)arg1, (int)arg2), !cVar1)) {
                HideList();
                return 0;
            }
            plVar3 = (long*)field_288.operator->();
        }
        return (**(void (**)(...))(*plVar3 + 48))(arg1, arg2, plVar3, 1);
    }

    // 0x100a45bc0
    void DropdownGroup::ShowList() {
        SetFocus();
        m_hasKeyboardNavigation = 1;
        field_332 = 1;
        int iVar1 = field_248.size();
        auto EVar2 = eastl::max<int>(0, iVar1 - field_348);
        if ((int)EVar2 < (int)field_356) {
            field_356 = EVar2;
        }
    }

    // 0x100a45c10
    void DropdownGroup::HideList() {
        field_332 = 0;
        field_416 = 0;
    }

    // 0x100a45c30
    void DropdownGroup::ValidatePosition() {
        EnumOptionToggle EVar2 = field_336;
        uint8_t* this_00 = &field_248;
        int iVar1 = this_00->size();
        auto shaderVariablePrecision2 = eastl::min<graphics::GraphicsQuality>(EVar2, iVar1 - 1);
        EVar2 = eastl::max<int>(0, shaderVariablePrecision2);
        field_336 = EVar2;
        if (field_332 == '\0') {
            field_356 = field_280;
        }
        if ((int)(field_356 + field_352) <= (int)EVar2) {
            field_356 = (EVar2 - field_352) + 1;
        }
        if ((int)EVar2 < (int)field_356) {
            field_356 = EVar2;
        }
        EVar2 = field_356;
        iVar1 = this_00->size();
        if (iVar1 - field_352 < (int)EVar2) {
            iVar1 = this_00->size();
            field_356 = iVar1 - field_352;
        }
        if ((int)field_356 < 0) {
            field_356 = 0;
        }
    }

    // 0x100a45d00
    unsigned long DropdownGroup::HandleMouseUp(float arg1, float arg2) {
        unsigned int uVar2;
        long lVar3;
        long* plVar4;
        uint64_t unaff_R14;

        bool cVar1 = field_376.IsInside((int)arg1, (int)arg2);
        unsigned long uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (cVar1)
            goto LAB_100a45e27;
        if (field_332 != '\0') {
            cVar1 = field_360.IsInside((int)arg1, (int)arg2);
            if (cVar1) {
                if (field_417 == '\0') {
                    UpdateMouseSelection(arg1, arg2);
                    HideList();
                    SetSelectedPage(field_336);
                }
                goto LAB_100a45e27;
            }
        }
        if (field_332 == '\0') {
            cVar1 = field_392.IsInside((int)arg1, (int)arg2);
            if (!cVar1)
                goto LAB_100a45ddc;
            lVar3 = field_248[(long)(int)field_280];
            plVar4 = (long*)(*((lVar3 + 32))).operator->();
        LAB_100a45e0a:
            uVar2 = (**(void (**)(...))(*plVar4 + 48))(arg1, arg2, plVar4, 0);
            uVar5 = (unsigned long)uVar2;
        } else {
        LAB_100a45ddc:
            if (field_332 == '\0') {
                cVar1 = field_304.IsInside((int)arg1, (int)arg2);
                if (cVar1) {
                    plVar4 = (long*)field_288.operator->();
                    goto LAB_100a45e0a;
                }
            }
            uVar5 = 0;
        }
    LAB_100a45e27:
        return uVar5 & 4294967295;
    }

    // 0x100a45e40
    void DropdownGroup::UpdateMouseSelection(float arg1, float arg2) {
        int iVar2;

        if (field_332 != '\0') {
            if (field_360.IsInside((int)arg1, (int)arg2) != '\0') {
                iVar2 = (int)((arg2 - (float)(int)field_364) / (float)(int)field_340);
                if (iVar2 < field_352) {
                    field_336 = iVar2 + field_356;
                }
                ValidatePosition();
            }
        }
    }

    // 0x100a45ec0
    uint64_t DropdownGroup::OnClick(float arg1, float arg2, bool arg3) {
        uint32_t in_register_00000031;

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

    // 0x100a45f30
    unsigned long DropdownGroup::OnMouseWheel(float arg1, float arg2, float arg3) {
        EnumOptionToggle EVar1;
        int iVar3;
        int iVar4;
        unsigned int uVar5;
        long lVar6;
        long* plVar7;
        int iVar8;
        uint64_t unaff_R14;
        uint64_t uVar10;
        unsigned long uVar9;
        uint64_t uVar11;

        if (field_332 == '\0') {
            iVar3 = (int)arg1;
            if (!(field_376.IsInside(iVar3, (int)arg2))) {
                if (!(field_392.IsInside(iVar3, (int)arg2))) {
                    uVar9 = 0;
                } else {
                    lVar6 = field_248[(long)(int)field_280];
                    plVar7 = (long*)(*((lVar6 + 32))).operator->();
                    uVar5 = (**(void (**)(...))(*plVar7 + 72))(arg1, arg2, arg3, plVar7);
                    uVar9 = (unsigned long)uVar5;
                }
            } else {
                uVar11 = (uint64_t)(uint32_t)((unsigned int)iVar3 >> 8);
                if (arg3 <= 0.0) {
                    uVar9 = (((uint64_t)uVar11 << 8) | (uint8_t)1);
                    if (arg3 < 0.0) {
                        field_336 = field_280 + 1;
                        ValidatePosition();
                        SetSelectedPage(field_336);
                    }
                } else {
                    field_336 = field_280 - 1;
                    ValidatePosition();
                    SetSelectedPage(field_336);
                    uVar9 = (((uint64_t)uVar11 << 8) | (uint8_t)1);
                }
            }
        } else {
            iVar3 = field_352;
            iVar8 = iVar3 + 3;
            if (-1 < iVar3) {
                iVar8 = iVar3;
            }
            iVar3 = eastl::max<int>(1, iVar8 >> 2);
            uVar10 = (uint64_t)((unsigned long)unaff_R14 >> 8);
            if ((arg3 <= 0.0) || (field_356 == 0)) {
                uVar9 = (((uint64_t)uVar10 << 8) | (uint8_t)1);
                if (arg3 < 0.0) {
                    iVar8 = field_352;
                    EVar1 = field_356;
                    iVar4 = field_248.size();
                    if (iVar8 + EVar1 != iVar4) {
                        ScrollDown(iVar3);
                    }
                }
            } else {
                ScrollUp(iVar3);
                uVar9 = (((uint64_t)uVar10 << 8) | (uint8_t)1);
            }
        }
        return uVar9 & 4294967295;
    }

    // 0x100a460d0
    void DropdownGroup::ScrollUp(int arg1) {
        field_356 = field_356 - arg1;
        field_336 = field_336 - arg1;
        ValidatePosition();
    }

    // 0x100a460f0
    void DropdownGroup::ScrollDown(int arg1) {
        field_356 = field_356 + arg1;
        field_336 = field_336 + arg1;
        ValidatePosition();
    }

    // 0x100a46110
    uint64_t DropdownGroup::OnMouseMove(float arg1, float arg2) {
        bool cVar1;
        long lVar2;
        long* plVar3;

        if ((field_332 != '\0') && (field_416 == '\0')) {
            cVar1 = field_376.IsInside((int)arg1, (int)arg2);
            if ((cVar1) || (cVar1 = field_360.IsInside((int)arg1, (int)arg2), cVar1))
                goto LAB_100a462b2;
        }
        if (((field_332 == '\0') || (field_416 == '\0')) ||
            (cVar1 = field_360.IsInside((int)arg1, (int)arg2), !cVar1)) {
            if ((field_332 == '\0') && (cVar1 = field_392.IsInside((int)arg1, (int)arg2), cVar1)) {
                lVar2 = field_248[(long)(int)field_280];
                plVar3 = (long*)(*((lVar2 + 32))).operator->();
                return (**(void (**)(...))(*plVar3 + 56))(arg1, arg2, plVar3);
            }
            return 0;
        }
        float fVar5 = (arg2 - field_412) + field_408;
        field_408 = fVar5;
        field_412 = arg2;
        if (fVar5 <= (float)(int)field_340) {
            if ((float)(int)-field_340 <= fVar5)
                goto LAB_100a462b2;
            ScrollDown(1);
        } else {
            ScrollUp(1);
        }
        field_408 = 0.0;
        field_417 = 1;
    LAB_100a462b2:
        UpdateMouseSelection(arg1, arg2);
        return 1;
    }

    // 0x100a462d0
    uint64_t DropdownGroup::OnMouseOver(float arg1, float arg2) {
        bool cVar1;
        uint64_t uVar4;

        field_333 = false;
        auto plVar2 = field_288.operator->();
        (**(void (**)(...))(*plVar2 + 224))(plVar2, 0);
        long lVar3 = field_248[(long)(int)field_280];
        plVar2 = (long*)(*((lVar3 + 32))).operator->();
        (**(void (**)(...))(*plVar2 + 224))(plVar2, 0);
        if ((field_332 == '\0') && (cVar1 = field_376.IsInside((int)arg1, (int)arg2), cVar1)) {
            SetFocus();
            field_333 = true;
            m_hasKeyboardNavigation = 1;
        } else {
            if (field_332 != '\0') {
                m_hasKeyboardNavigation = 1;
                cVar1 = field_360.IsInside((int)arg1, (int)arg2);
                if (!cVar1) {
                    cVar1 = field_376.IsInside((int)arg1, (int)arg2);
                    if (!cVar1) {
                        HideList();
                        m_hasKeyboardNavigation = 0;
                    } else {
                        field_333 = true;
                    }
                } else {
                    UpdateMouseSelection(arg1, arg2);
                }
                return 1;
            }
            cVar1 = field_392.IsInside((int)arg1, (int)arg2);
            if (cVar1) {
                m_hasKeyboardNavigation = 0;
                uVar4 = OnMouseOver(arg1, arg2);
                return uVar4;
            }
            cVar1 = field_304.IsInside((int)arg1, (int)arg2);
            if (cVar1) {
                plVar2 = (long*)field_288.operator->();
                uVar4 = (**(void (**)(...))(*plVar2 + 64))(arg1, arg2, plVar2);
                return uVar4;
            }
        }
        return 0;
    }

    // 0x100a46470
    uint32_t DropdownGroup::GetControlSize(int& arg1, int& arg2) {
        EnumOptionToggle enumOptionToggle1;
        int iVar2;
        unsigned int uVar3;
        EnumOptionToggle enumOptionToggle2;
        unsigned int arg2_00;
        Tweaky* pTVar4;
        long lVar5;
        long* plVar6;
        unsigned int local_38;
        int local_34;

        shared_ptr local_48 = field_104.lock();
        uint32_t uVar1 = shared_ptr::operator_cast_to_bool(&local_48);
        if ((char)uVar1 != '\0') {
            pTVar4 = (Tweaky*)local_48.operator->();
            iVar2 = pTVar4->GetMinControlHeight();
            field_340 = iVar2 + 1;
            uVar3 = CalculateDropdownWidth(local_48);
            field_344 = uVar3;
            local_38 = 0;
            local_34 = 0;
            lVar5 = field_248[(long)(int)field_280];
            plVar6 = (long*)(*((lVar5 + 32))).operator->();
            (**(void (**)(...))(*plVar6 + 40))(plVar6, &local_38, &local_34);
            field_352 = 0;
            if (field_332 != '\0') {
                enumOptionToggle1 = field_348;
                enumOptionToggle2 = field_248.size();
                iVar2 = eastl::min<graphics::GraphicsQuality>(enumOptionToggle1, enumOptionToggle2);
                field_352 = iVar2;
                pTVar4 = (Tweaky*)local_48.operator->();
                iVar2 = pTVar4->GetVisibleY();
                iVar2 = eastl::min<graphics::GraphicsQuality>(field_352, iVar2 / (int)field_340 - 1);
                field_352 = iVar2;
            }
            plVar6 = (long*)field_288.operator->();
            (**(void (**)(...))(*plVar6 + 40))(plVar6, &field_320, &field_324);
            uVar3 = field_340;
            iVar2 = eastl::max<int>(field_352 * uVar3, field_324 + local_34);
            field_40 = iVar2 + uVar3;
            uVar3 = field_344;
            arg2_00 = eastl::max<unsigned int>(local_38, 300);
            iVar2 = eastl::max<unsigned int>(uVar3, arg2_00);
            field_36 = iVar2;
            arg1 = iVar2;
            arg2 = field_40;
        }
        return uVar1;
    }

    // 0x100a46630
    ShaderVariablePrecision DropdownGroup::CalculateDropdownWidth(shared_ptr<Tweaky>& tweaky) {
        ShaderVariablePrecision shaderVariablePrecision1;
        StringView local_98;
        StringView local_88;
        int local_78[9];
        int local_54;
        unsigned long local_40;
        unsigned int local_34;

        auto pTVar2 = tweaky.operator->();
        new (local_78) eastl::string(" v");
        local_88.StringView<eastl::fixed_string<char, 40>>(*local_78);
        pTVar2->GetTextSize(local_34, local_54, &local_88, -1);
        auto str = field_248.HeapBeginPtr();
        auto pbVar3 = field_248.end();
        if (str == pbVar3) {
        LAB_100a4673f:
            shaderVariablePrecision1 = 0;
        } else {
            local_40 = (unsigned long)local_34;
            shaderVariablePrecision1 = 0;
            do {
                pTVar2 = (Tweaky*)tweaky.operator->();
                local_98.StringView<eastl::fixed_string<char, 40>>(*str);
                if (pTVar2->GetTextSize(*local_78, local_50, &local_98, -1) == '\0')
                    goto LAB_100a4673f;
                shaderVariablePrecision1 = eastl::max<int>(shaderVariablePrecision1, local_78[0] + (int)local_40 + 3);
                str = str + 80;
            } while (str != pbVar3);
        }
        return shaderVariablePrecision1;
    }

    // 0x100a46770
    uint64_t DropdownGroup::HandleChar(int arg1) {
        bool bVar2;
        unsigned long arg1_00;
        EnumOptionToggle EVar10;

        if (field_332 == '\0') {
            if (field_333 == false) {
                return 0;
            }
            if (arg1 < 97) {
                return 0;
            }
            if (122 < arg1) {
                return 0;
            }
        } else if (25 < arg1 - 97U) {
            return 0;
        }
        char cVar4 = toupper((char)arg1);
        uint8_t* this_00 = &field_248;
        eastl::string* pbVar6 = (eastl::string*)(*this_00)[(long)(int)field_336];
        char* pcVar7 = (char*)(*pbVar6)[0];
        bool cVar1 = *pcVar7;
        int iVar5 = this_00->size();
        if (iVar5 < 1) {
            return 0;
        }
        unsigned int uVar9 = -iVar5;
        bool bVar3 = false;
        unsigned long uVar8 = (long)iVar5;
        do {
            arg1_00 = uVar8 - 1;
            pbVar6 = (eastl::string*)(*this_00)[arg1_00];
            pcVar7 = (char*)(*pbVar6)[0];
            if (*pcVar7 == cVar4) {
                if (cVar1 == cVar4) {
                    if ((arg1_00 == 0) || (bVar3 = true, arg1_00 == field_336 + 1)) {
                    LAB_100a46888:
                        EVar10 = ~uVar9;
                    LAB_100a46890:
                        field_336 = EVar10;
                        ValidatePosition();
                        if (field_332 == '\0') {
                            SetSelectedPage(field_336);
                            return 1;
                        }
                        return 1;
                    }
                } else {
                    bVar3 = true;
                    if (arg1_00 == 0)
                        goto LAB_100a46888;
                }
            } else if (bVar3) {
                EVar10 = -uVar9;
                goto LAB_100a46890;
            }
            uVar9 = uVar9 + 1;
            bVar2 = (long)uVar8 < 2;
            uVar8 = arg1_00;
            if (bVar2) {
                return 0;
            }
        } while (true);
    }

    // 0x100a468f0
    uint64_t DropdownGroup::HandleKeyDown(int arg1) {
        if (field_332 == '\0') {
            return 0;
        }
        switch (arg1) {
        case 63232:
            NavigateUp();
            break;
        case 63233:
            NavigateDown();
            break;
        case 63234:
        case 63235:
        case 63236:
        case 63237:
        case 63238:
        case 63239:
        case 63240:
        case 63241:
        case 63242:
        case 63243:
        case 63244:
        case 63245:
        case 63246:
        case 63247:
        case 63248:
        case 63249:
        case 63250:
        case 63251:
        case 63252:
        case 63253:
        case 63254:
        case 63255:
        case 63256:
        case 63257:
        case 63258:
        case 63259:
        case 63260:
        case 63261:
        case 63262:
        case 63263:
        case 63264:
        case 63265:
        case 63266:
        case 63267:
        case 63268:
        case 63269:
        case 63270:
        case 63271:
        case 63272:
        case 63274:
            return 0;
        case 63273:
            NavigateHome();
            break;
        case 63275:
            NavigateEnd();
            break;
        case 63276:
            ScrollUp(4);
            break;
        case 63277:
            ScrollDown(4);
            break;
        default:
            if (arg1 == 36) {
                field_280 = field_336;
                HideList();
                return 1;
            }
            return 0;
        }
        return 1;
    }

    // 0x100a46ac0
    void DropdownGroup::DoOnShown() {
        long lVar1 = field_248[(long)(int)field_280];
        long* plVar2 = (long*)(*((lVar1 + 32))).operator->();
        (**(void (**)(...))(*plVar2 + 80))(plVar2);
        DoOnShown();
    }

    // 0x100a46b00
    void DropdownGroup::OnFocusChanged(bool arg1) {
        uint32_t in_register_00000031;

        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            HideList();
        }
    }

    // 0x100a46b10
    void DropdownGroup::SetMouseOver(bool arg1) {
        m_mouseOver = arg1;
        m_hasKeyboardNavigation = 0;
    }

    // 0x100a46b30
    DropdownGroup* DropdownGroup::AddPage(const eastl::string& str) {
        AddPage(str);
        str.Sort();
        return this;
    }

    // 0x100a46b70
    void DropdownGroup::ResetToDefault() {
        long lVar1 = field_248[(long)(int)field_280];
        long* plVar2 = (long*)(*((lVar1 + 32))).operator->();
        (**(void (**)(...))(*plVar2 + 96))(plVar2);
    }

    // 0x100a46ba0
    void DropdownGroup::ResetAllToDefault() {
        shared_ptr<Container>* this_00;
        long* plVar3;

        long lVar4 = field_248.HeapBeginPtr();
        long lVar2 = field_248.end();
        for (; lVar4 != lVar2; lVar4 = lVar4 + 80) {
            this_00 = (shared_ptr<Container>*)(lVar4 + 32);
            if (((Control*)(*this_00).operator->())->HasBeenShown() != '\0') {
                plVar3 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar3 + 104))(plVar3);
                plVar3 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar3 + 96))(plVar3);
            }
        }
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a468e0
    int toupper(char arg1) {
        uint32_t in_register_00000039;

        bool cVar1 = ::toupper((((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1));
        return (int)cVar1;
    }

} // namespace jag
