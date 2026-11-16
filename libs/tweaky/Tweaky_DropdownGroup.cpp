// libs/tweaky/Tweaky_DropdownGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_DropdownGroup.h"

namespace jag::tweak {
    // 0x100a452f0, 1776 bytes, placed by class name and debug map
    // DropdownGroup::Draw(int, int)
    void DropdownGroup::Draw(int param_1, int param_2) {
        uint uVar1;
        Placement PVar2;
        bool bVar4;
        bool bVar5;
        MapArea* this_00;
        int* piVar6;
        Tweaky* pTVar7;
        basic_string* pbVar8;
        long lVar9;
        long* plVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        ulong uVar14;
        int iVar15;
        StringView SVar16;
        undefined4 in_stack_ffffffffffffff2c;
        undefined8 in_stack_ffffffffffffff34;
        undefined1 auStack_c2[10];
        GridRect local_b8[2];
        GridRect local_88;
        undefined1 local_74[4];
        int* local_70;
        int local_64;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        vector<PageInfo, eastl::allocator>* local_50;
        uint local_48;
        int local_44;
        shared_ptr local_40;

        if ((**(code**)(field_0 + 40))(this, &local_88.field_16, local_74) != '\0') {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar4 = shared_ptr::operator_cast_to_bool(&local_40);
            if (bVar4) {
                this_00 = (MapArea*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                piVar6 = (int*)this_00->GetOrigin();
                iVar11 = piVar6[2];
                iVar12 = *piVar6;
                field_36 = iVar11 - iVar12;
                iVar13 = param_1 + field_24;
                local_48 = param_2 + field_28;
                iVar15 = field_40 + local_48;
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                local_44 = pTVar7->GetTextCenterYOffset(field_340);
                oldscape::dash3d::GridRect::GridRect(local_b8, iVar13, local_48, (iVar11 - iVar12) + iVar13, iVar15);
                field_136 = local_b8[0].field_0;
                field_140 = local_b8[0].field_4;
                field_144 = local_b8[0].field_8;
                field_148 = local_b8[0].field_12;
                field_376 = field_136;
                field_380 = field_140;
                *(uint*)&field_384 = field_136 + field_344;
                *(uint*)((long)&field_384 + 4) = field_140 + field_340;
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pTVar7->SetColour(808464639);
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pTVar7->FillRect(field_376, field_380, field_344, field_340);
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pTVar7->SetColour(2425393407);
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pTVar7->FillRect(field_376, field_380, field_344, field_340 - 1);
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pTVar7->SetColour(4294967295);
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                iVar11 = field_376;
                local_50 = (vector<PageInfo, eastl::allocator>*)&field_248;
                pbVar8 = (basic_string*)eastl::vector<PageInfo, eastl::allocator>::operator[](local_50,
                                                                                              (long)(int)field_280);
                local_44 = local_44 + local_48;
                iVar12 = -1;
                Tweaky::TextDraw<eastl::string>(pTVar7, iVar11 + 1, local_44, pbVar8, -1, -1, false);
                new (local_b8) eastl::fixed_string<char, 2, true, eastl::allocator>("v");
                local_5c = 0;
                local_64 = 0;
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                    (StringView*)(auStack_c2 + -6), (fixed_string*)local_b8);
                SVar16.field_8 = (uchar*)4294967295;
                SVar16.field_0 = (ulong)(auStack_c2 + -6);
                pTVar7->GetTextSize(&local_5c, &local_64, SVar16, iVar12);
                uVar14 = field_384;
                iVar11 = local_5c + field_328;
                SetColour(3772834047, field_333);
                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                Tweaky::TextDraw<eastl::string>(pTVar7, (int)uVar14 - iVar11, local_44, (basic_string*)local_b8, -1, -1,
                                                false);
                lVar9 = eastl::vector<PageInfo, eastl::allocator>::operator[](local_50, (long)(int)field_280);
                local_58 = 0;
                local_54 = 0;
                plVar10 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar9 + 32));
                (**(code**)(*plVar10 + 40))(plVar10, &local_58, &local_54);
                iVar11 = *(int*)((long)&field_384 + 4);
                field_392 = field_376;
                field_396 = iVar11;
                field_400 = field_376 + local_58;
                field_404 = iVar11 + local_54;
                plVar10 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar9 + 32));
                (**(code**)(*plVar10 + 32))(plVar10, field_392, field_396);
                field_304 = field_136;
                field_308 = field_404;
                field_312 = field_136 + field_320;
                field_316 = field_404 + field_324;
                plVar10 = (long*)shared_ptr<Settings>::operator->((shared_ptr<Settings>*)&field_288);
                (**(code**)(*plVar10 + 32))(plVar10, field_304, field_308);
                iVar11 = field_380;
                iVar12 = field_340 + iVar11;
                if (field_332 != '\0') {
                    uVar1 = field_356;
                    uVar14 = (ulong)(int)uVar1;
                    iVar13 = local_50->size();
                    if ((int)uVar1 < iVar13) {
                        local_70 = &field_136;
                        do {
                            uVar1 = field_340;
                            iVar12 = iVar12 + uVar1;
                            if (field_352 <= (int)((uint)uVar14 - field_356))
                                break;
                            iVar11 = iVar11 + uVar1;
                            local_60 = iVar12;
                            local_48 = uVar1;
                            if ((uint)uVar14 == field_336) {
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                                pTVar7->SetColour(1886417151);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                                pTVar7->FillRect(field_136, iVar11, field_344, field_340);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                                pTVar7->SetColour(2155937791);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                                pTVar7->FillRect(field_136, iVar11, field_344, field_340 - 1);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                            } else {
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                                pTVar7->SetColour(1886417151);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                                pTVar7->FillRect(field_136, iVar11, field_344, field_340);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                                pTVar7->SetColour(2425393407);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                                pTVar7->FillRect(field_136, iVar11, field_344, field_340 - 1);
                                pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                            }
                            pTVar7->SetColour(4294967295);
                            pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                            iVar12 = *local_70;
                            pbVar8 =
                                (basic_string*)eastl::vector<PageInfo, eastl::allocator>::operator[](local_50, uVar14);
                            local_44 = local_44 + local_48;
                            Tweaky::TextDraw<eastl::string>(pTVar7, iVar12 + 1, local_44, pbVar8, -1, -1, false);
                            uVar14 = uVar14 + 1;
                            iVar13 = local_50->size();
                            iVar12 = local_60;
                        } while ((long)uVar14 < (long)iVar13);
                    }
                }
                field_360 = field_376;
                field_364 = field_384 << 32 | field_384 >> 32;
                field_372 = iVar12;
                if (field_332 != '\0') {
                    iVar11 = local_50->size();
                    if (field_348 < iVar11) {
                        iVar11 = field_140 + field_340;
                        new (&local_88) oldscape::dash3d::GridRect(
                            field_344 + field_136 + -2, iVar11, field_344 + field_136, field_340 * field_352 + iVar11);
                        bVar4 = (bool)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        bVar5 = (bool)local_50->size();
                        PVar2.field_4 = in_stack_ffffffffffffff2c;
                        PVar2.field_0 = field_356;
                        PVar2.field_8 = 1;
                        PVar2._12_8_ = in_stack_ffffffffffffff34;
                        Tweaky::DrawScrollBar(PVar2, bVar4, local_88.field_0, local_88.field_8, 1, bVar5);
                    }
                }
                /* WARNING: Subroutine does not return */
                local_b8->~fixed_string();
            }
            local_40.~shared_ptr();
        }
    }

    // 0x100a459f0, 432 bytes, placed by class name and debug map
    // DropdownGroup::HandleMouseDown(float, float)
    undefined8 DropdownGroup::HandleMouseDown(float param_1, float param_2) {
        char cVar1;
        long lVar2;
        long* plVar3;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38[16];

        cVar1 = (&field_376, (int)param_1, (int)param_2)->IsInside();
        if (cVar1 != '\0') {
            if (field_332 == '\0') {
                ShowList(this);
                local_38->shared_from_this();
                new (&local_50) Event(local_38, 2);
                DoCallback(&local_50);
                local_50.~LRUHashCacheWrapper();
                local_38->~shared_ptr();
            } else {
                HideList(this);
                field_336 = field_280;
                ValidatePosition(this);
            }
            return 1;
        }
        if ((field_332 != '\0') && (cVar1 = (&field_360, (int)param_1, (int)param_2)->IsInside(), cVar1 != '\0')) {
            field_416 = 1;
            field_417 = 0;
            field_412 = param_2;
            field_408 = 0.0;
            return 1;
        }
        if ((field_332 == '\0') && (cVar1 = (&field_392, (int)param_1, (int)param_2)->IsInside(), cVar1 != '\0')) {
            lVar2 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                (vector<PageInfo, eastl::allocator>*)&field_248, (long)(int)field_280);
            plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar2 + 32));
        } else {
            if ((field_332 != '\0') || (cVar1 = (&field_304, (int)param_1, (int)param_2)->IsInside(), cVar1 == '\0')) {
                HideList(this);
                return 0;
            }
            plVar3 = (long*)shared_ptr<Settings>::operator->((shared_ptr<Settings>*)&field_288);
        }
        return (**(code**)(*plVar3 + 48))(param_1, param_2, plVar3, 1);
    }

    // 0x100a45bc0, 80 bytes, placed by class name and debug map
    // DropdownGroup::ShowList()
    void DropdownGroup::ShowList() {
        int iVar1;
        uint uVar2;

        Control::SetFocus();
        m_hasKeyboardNavigation = 1;
        field_332 = 1;
        iVar1 = (&field_248)->size();
        uVar2 = eastl::max<int>(0, iVar1 - field_348);
        if ((int)uVar2 < (int)field_356) {
            field_356 = uVar2;
        }
    }

    // 0x100a45c10, 32 bytes, placed by class name and debug map
    // DropdownGroup::HideList()
    void DropdownGroup::HideList() {
        field_332 = 0;
        field_416 = 0;
    }

    // 0x100a45c30, 208 bytes, placed by class name and debug map
    // DropdownGroup::ValidatePosition()
    void DropdownGroup::ValidatePosition() {
        undefined1* this_00;
        int iVar1;
        uint uVar2;

        uVar2 = field_336;
        this_00 = &field_248;
        iVar1 = this_00->size();
        iVar1 = eastl::min<graphics::GraphicsQuality>(uVar2, iVar1 + -1);
        uVar2 = eastl::max<int>(0, iVar1);
        field_336 = uVar2;
        if (field_332 == '\0') {
            field_356 = field_280;
        }
        if ((int)(field_356 + field_352) <= (int)uVar2) {
            field_356 = (uVar2 - field_352) + 1;
        }
        if ((int)uVar2 < (int)field_356) {
            field_356 = uVar2;
        }
        uVar2 = field_356;
        iVar1 = this_00->size();
        if (iVar1 - field_352 < (int)uVar2) {
            iVar1 = this_00->size();
            field_356 = iVar1 - field_352;
        }
        if ((int)field_356 < 0) {
            field_356 = 0;
        }
    }

    // 0x100a45d00, 320 bytes, placed by class name and debug map
    // DropdownGroup::HandleMouseUp(float, float)
    ulong DropdownGroup::HandleMouseUp(float param_1, float param_2) {
        char cVar1;
        uint uVar2;
        long lVar3;
        long* plVar4;
        undefined8 unaff_R14;
        ulong uVar6;

        cVar1 = (&field_376, (int)param_1, (int)param_2)->IsInside();
        uVar6 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 != '\0')
            goto LAB_100a45e27;
        if (field_332 != '\0') {
            cVar1 = (&field_360, (int)param_1, (int)param_2)->IsInside();
            if (cVar1 != '\0') {
                if (field_417 == '\0') {
                    UpdateMouseSelection(this, param_1, param_2);
                    HideList(this);
                    SetSelectedPage(field_336);
                }
                goto LAB_100a45e27;
            }
        }
        if (field_332 == '\0') {
            cVar1 = (&field_392, (int)param_1, (int)param_2)->IsInside();
            if (cVar1 == '\0')
                goto LAB_100a45ddc;
            lVar3 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                (vector<PageInfo, eastl::allocator>*)&field_248, (long)(int)field_280);
            plVar4 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar3 + 32));
        LAB_100a45e0a:
            uVar2 = (**(code**)(*plVar4 + 48))(param_1, param_2, plVar4, 0);
            uVar6 = (ulong)uVar2;
        } else {
        LAB_100a45ddc:
            if (field_332 == '\0') {
                cVar1 = (&field_304, (int)param_1, (int)param_2)->IsInside();
                if (cVar1 != '\0') {
                    plVar4 = (long*)shared_ptr<Settings>::operator->((shared_ptr<Settings>*)&field_288);
                    goto LAB_100a45e0a;
                }
            }
            uVar6 = 0;
        }
    LAB_100a45e27:
        return uVar6 & 4294967295;
    }

    // 0x100a45e40, 128 bytes, placed by class name and debug map
    // DropdownGroup::UpdateMouseSelection(float, float)
    void DropdownGroup::UpdateMouseSelection(float param_1, float param_2) {
        int iVar2;

        if (field_332 != '\0') {
            if ((&field_360, (int)param_1, (int)param_2)->IsInside() != '\0') {
                iVar2 = (int)((param_2 - (float)(int)field_364) / (float)(int)field_340);
                if (iVar2 < field_352) {
                    field_336 = iVar2 + field_356;
                }
                ValidatePosition(this);
            }
        }
    }

    // 0x100a45ec0, 112 bytes, placed by class name and debug map
    // DropdownGroup::OnClick(float, float, bool)
    undefined8 DropdownGroup::OnClick(float param_1, float param_2, bool param_3) {
        char cVar1;
        undefined3 in_register_00000031;

        if (CONCAT31(in_register_00000031, param_3) != 0) {
            cVar1 = HandleMouseDown(this, param_1, param_2);
            if (cVar1 != '\0') {
                return 1;
            }
            if (param_3) {
                return 0;
            }
        }
        cVar1 = HandleMouseUp(this, param_1, param_2);
        if (cVar1 == '\0') {
            return 0;
        }
        return 1;
    }

    // 0x100a45f30, 416 bytes, placed by class name and debug map
    // DropdownGroup::OnMouseWheel(float, float, float)
    ulong DropdownGroup::OnMouseWheel(float param_1, float param_2, float param_3) {
        char cVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        long lVar5;
        long* plVar6;
        int iVar7;
        undefined8 unaff_R14;
        undefined7 uVar9;
        ulong uVar8;
        uint7 uVar10;

        if (field_332 == '\0') {
            iVar2 = (int)param_1;
            cVar1 = (&field_376, iVar2, (int)param_2)->IsInside();
            if (cVar1 == '\0') {
                cVar1 = (&field_392, iVar2, (int)param_2)->IsInside();
                if (cVar1 == '\0') {
                    uVar8 = 0;
                } else {
                    lVar5 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                        (vector<PageInfo, eastl::allocator>*)&field_248, (long)(int)field_280);
                    plVar6 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar5 + 32));
                    uVar4 = (**(code**)(*plVar6 + 72))(param_1, param_2, param_3, plVar6);
                    uVar8 = (ulong)uVar4;
                }
            } else {
                uVar10 = (uint7)(uint3)((uint)iVar2 >> 8);
                if (param_3 <= 0.0) {
                    uVar8 = CONCAT71(uVar10, 1);
                    if (param_3 < 0.0) {
                        field_336 = field_280 + 1;
                        ValidatePosition(this);
                        SetSelectedPage(field_336);
                    }
                } else {
                    field_336 = field_280 - 1;
                    ValidatePosition(this);
                    SetSelectedPage(field_336);
                    uVar8 = CONCAT71(uVar10, 1);
                }
            }
        } else {
            iVar2 = field_352;
            iVar7 = iVar2 + 3;
            if (-1 < iVar2) {
                iVar7 = iVar2;
            }
            iVar2 = eastl::max<int>(1, iVar7 >> 2);
            uVar9 = (undefined7)((ulong)unaff_R14 >> 8);
            if ((param_3 <= 0.0) || (field_356 == 0)) {
                uVar8 = CONCAT71(uVar9, 1);
                if (param_3 < 0.0) {
                    iVar7 = field_352;
                    uVar4 = field_356;
                    iVar3 = (&field_248)->size();
                    if (iVar7 + uVar4 != iVar3) {
                        ScrollDown(this, iVar2);
                    }
                }
            } else {
                ScrollUp(this, iVar2);
                uVar8 = CONCAT71(uVar9, 1);
            }
        }
        return uVar8 & 4294967295;
    }

    // 0x100a460d0, 32 bytes, placed by class name and debug map
    // DropdownGroup::ScrollUp(int)
    void DropdownGroup::ScrollUp(int param_1) {
        field_356 = field_356 - param_1;
        field_336 = field_336 - param_1;
        ValidatePosition(this);
    }

    // 0x100a460f0, 32 bytes, placed by class name and debug map
    // DropdownGroup::ScrollDown(int)
    void DropdownGroup::ScrollDown(int param_1) {
        field_356 = field_356 + param_1;
        field_336 = field_336 + param_1;
        ValidatePosition(this);
    }

    // 0x100a46110, 448 bytes, placed by class name and debug map
    // DropdownGroup::OnMouseMove(float, float)
    undefined8 DropdownGroup::OnMouseMove(float param_1, float param_2) {
        char cVar1;
        long lVar2;
        long* plVar3;
        float fVar5;

        if ((field_332 != '\0') && (field_416 == '\0')) {
            cVar1 = (&field_376, (int)param_1, (int)param_2)->IsInside();
            if ((cVar1 != '\0') || (cVar1 = (&field_360, (int)param_1, (int)param_2)->IsInside(), cVar1 != '\0'))
                goto LAB_100a462b2;
        }
        if (((field_332 == '\0') || (field_416 == '\0')) ||
            (cVar1 = (&field_360, (int)param_1, (int)param_2)->IsInside(), cVar1 == '\0')) {
            if ((field_332 == '\0') && (cVar1 = (&field_392, (int)param_1, (int)param_2)->IsInside(), cVar1 != '\0')) {
                lVar2 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                    (vector<PageInfo, eastl::allocator>*)&field_248, (long)(int)field_280);
                plVar3 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar2 + 32));
                return (**(code**)(*plVar3 + 56))(param_1, param_2, plVar3);
            }
            return 0;
        }
        fVar5 = (param_2 - field_412) + field_408;
        field_408 = fVar5;
        field_412 = param_2;
        if (fVar5 <= (float)(int)field_340) {
            if ((float)(int)-field_340 <= fVar5)
                goto LAB_100a462b2;
            ScrollDown(this, 1);
        } else {
            ScrollUp(this, 1);
        }
        field_408 = 0.0;
        field_417 = 1;
    LAB_100a462b2:
        UpdateMouseSelection(this, param_1, param_2);
        return 1;
    }

    // 0x100a462d0, 416 bytes, placed by class name and debug map
    // DropdownGroup::OnMouseOver(float, float)
    undefined8 DropdownGroup::OnMouseOver(float param_1, float param_2) {
        char cVar1;
        long* plVar2;
        long lVar3;
        undefined8 uVar4;

        field_333 = false;
        plVar2 = (long*)shared_ptr<Settings>::operator->((shared_ptr<Settings>*)&field_288);
        (**(code**)(*plVar2 + 224))(plVar2, 0);
        lVar3 = eastl::vector<PageInfo, eastl::allocator>::operator[]((vector<PageInfo, eastl::allocator>*)&field_248,
                                                                      (long)(int)field_280);
        plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar3 + 32));
        (**(code**)(*plVar2 + 224))(plVar2, 0);
        if ((field_332 == '\0') && (cVar1 = (&field_376, (int)param_1, (int)param_2)->IsInside(), cVar1 != '\0')) {
            Control::SetFocus();
            field_333 = true;
            m_hasKeyboardNavigation = 1;
        } else {
            if (field_332 != '\0') {
                m_hasKeyboardNavigation = 1;
                cVar1 = (&field_360, (int)param_1, (int)param_2)->IsInside();
                if (cVar1 == '\0') {
                    cVar1 = (&field_376, (int)param_1, (int)param_2)->IsInside();
                    if (cVar1 == '\0') {
                        HideList(this);
                        m_hasKeyboardNavigation = 0;
                    } else {
                        field_333 = true;
                    }
                } else {
                    UpdateMouseSelection(this, param_1, param_2);
                }
                return 1;
            }
            cVar1 = (&field_392, (int)param_1, (int)param_2)->IsInside();
            if (cVar1 != '\0') {
                m_hasKeyboardNavigation = 0;
                uVar4 = OnMouseOver(param_1, param_2);
                return uVar4;
            }
            cVar1 = (&field_304, (int)param_1, (int)param_2)->IsInside();
            if (cVar1 != '\0') {
                plVar2 = (long*)shared_ptr<Settings>::operator->((shared_ptr<Settings>*)&field_288);
                uVar4 = (**(code**)(*plVar2 + 64))(param_1, param_2, plVar2);
                return uVar4;
            }
        }
        return 0;
    }

    // 0x100a46470, 448 bytes, placed by class name and debug map
    // DropdownGroup::GetControlSize(int&, int&)
    ulong DropdownGroup::GetControlSize(int* param_1, int* param_2) {
        bool bVar1;
        int iVar2;
        uint uVar3;
        undefined4 uVar4;
        uint uVar5;
        undefined7 extraout_var;
        Tweaky* pTVar6;
        long lVar7;
        long* plVar8;
        shared_ptr local_48;
        uint local_38;
        int local_34;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar1 = shared_ptr::operator_cast_to_bool(&local_48);
        if (bVar1) {
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            iVar2 = pTVar6->GetMinControlHeight();
            field_340 = iVar2 + 1;
            uVar3 = CalculateDropdownWidth(this, &local_48);
            field_344 = uVar3;
            local_38 = 0;
            local_34 = 0;
            lVar7 = eastl::vector<PageInfo, eastl::allocator>::operator[](
                (vector<PageInfo, eastl::allocator>*)&field_248, (long)(int)field_280);
            plVar8 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar7 + 32));
            (**(code**)(*plVar8 + 40))(plVar8, &local_38, &local_34);
            field_352 = 0;
            if (field_332 != '\0') {
                iVar2 = field_348;
                uVar4 = (&field_248)->size();
                iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, uVar4);
                field_352 = iVar2;
                pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                iVar2 = pTVar6->GetVisibleY();
                iVar2 = eastl::min<graphics::GraphicsQuality>(field_352, iVar2 / (int)field_340 + -1,
                                                              (long)iVar2 % (long)(int)field_340 & 4294967295);
                field_352 = iVar2;
            }
            plVar8 = (long*)shared_ptr<Settings>::operator->((shared_ptr<Settings>*)&field_288);
            (**(code**)(*plVar8 + 40))(plVar8, &field_320, &field_324);
            uVar3 = field_340;
            iVar2 = eastl::max<int>(field_352 * uVar3, field_324 + local_34);
            field_40 = iVar2 + uVar3;
            uVar3 = field_344;
            uVar5 = eastl::max<unsigned int>(local_38, 300);
            iVar2 = eastl::max<unsigned int>(uVar3, uVar5);
            field_36 = iVar2;
            *param_1 = iVar2;
            *param_2 = field_40;
        }
        local_48.~shared_ptr();
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100a46630, 320 bytes, placed by class name and debug map
    // DropdownGroup::CalculateDropdownWidth(shared_ptr<Tweaky>&)
    int DropdownGroup::CalculateDropdownWidth(shared_ptr* param_1) {
        int iVar2;
        Tweaky* pTVar3;
        fixed_string* pfVar4;
        fixed_string* pfVar5;
        int in_R9D;
        StringView SVar6;
        StringView SVar7;
        StringView local_98;
        StringView local_88;
        int local_78[9];
        int local_54;
        allocator local_50[8];
        ulong local_40;
        uint local_34;

        pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)param_1);
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        new (local_78) eastl::string(" v", local_50);
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_88,
                                                                                      (fixed_string*)local_78);
        SVar6.field_8 = (uchar*)4294967295;
        SVar6.field_0 = (ulong)&local_88;
        pTVar3->GetTextSize((int*)&local_34, &local_54, SVar6, in_R9D);
        local_78->~basic_string();
        pfVar4 = (fixed_string*)(&field_248)->HeapBeginPtr();
        pfVar5 = (fixed_string*)(&field_248)->end();
        if (pfVar4 == pfVar5) {
        LAB_100a4673f:
            iVar2 = 0;
        } else {
            local_40 = (ulong)local_34;
            iVar2 = 0;
            do {
                pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)param_1);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_98, pfVar4);
                SVar7.field_8 = (uchar*)4294967295;
                SVar7.field_0 = (ulong)&local_98;
                if (pTVar3->GetTextSize(local_78, local_50, SVar7, in_R9D) == '\0')
                    goto LAB_100a4673f;
                iVar2 = eastl::max<int>(iVar2, local_78[0] + (int)local_40 + 3);
                pfVar4 = pfVar4 + 80;
            } while (pfVar4 != pfVar5);
        }
        return iVar2;
    }

    // 0x100a46770, 368 bytes, placed by class name and debug map
    // DropdownGroup::HandleChar(int)
    undefined8 DropdownGroup::HandleChar(int param_1) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        eastl::string* pbVar6;
        char* pcVar7;
        ulong uVar8;
        ulong uVar9;
        uint uVar10;

        if (field_332 == '\0') {
            if (field_333 == false) {
                return 0;
            }
            if (param_1 < 97) {
                return 0;
            }
            if (122 < param_1) {
                return 0;
            }
        } else if (25 < param_1 - 97U) {
            return 0;
        }
        cVar4 = toupper((char)param_1);
        this_00 = &field_248;
        pbVar6 = (eastl::string*)eastl::vector<PageInfo, eastl::allocator>::operator[](
            (vector<PageInfo, eastl::allocator>*)this_00, (long)(int)field_336);
        pcVar7 = (char*)eastl::string::operator[](pbVar6, 0);
        cVar1 = *pcVar7;
        iVar5 = this_00->size();
        if (iVar5 < 1) {
            return 0;
        }
        uVar10 = -iVar5;
        bVar3 = false;
        uVar9 = (long)iVar5;
        do {
            uVar8 = uVar9 - 1;
            pbVar6 = (eastl::string*)eastl::vector<PageInfo, eastl::allocator>::operator[](
                (vector<PageInfo, eastl::allocator>*)this_00, uVar8);
            pcVar7 = (char*)eastl::string::operator[](pbVar6, 0);
            if (*pcVar7 == cVar4) {
                if (cVar1 == cVar4) {
                    if ((uVar8 == 0) || (bVar3 = true, uVar8 == field_336 + 1)) {
                    LAB_100a46888:
                        uVar10 = ~uVar10;
                    LAB_100a46890:
                        field_336 = uVar10;
                        ValidatePosition(this);
                        if (field_332 == '\0') {
                            SetSelectedPage(field_336);
                            return 1;
                        }
                        return 1;
                    }
                } else {
                    bVar3 = true;
                    if (uVar8 == 0)
                        goto LAB_100a46888;
                }
            } else if (bVar3) {
                uVar10 = -uVar10;
                goto LAB_100a46890;
            }
            uVar10 = uVar10 + 1;
            bVar2 = (long)uVar9 < 2;
            uVar9 = uVar8;
            if (bVar2) {
                return 0;
            }
        } while (true);
    }

    // 0x100a468f0, 320 bytes, placed by class name and debug map
    // DropdownGroup::HandleKeyDown(int)
    undefined8 DropdownGroup::HandleKeyDown(int param_1) {
        if (field_332 == '\0') {
            return 0;
        }
        switch (param_1) {
        case 63232:
            NavigateUp(this);
            break;
        case 63233:
            NavigateDown(this);
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
            NavigateHome(this);
            break;
        case 63275:
            NavigateEnd(this);
            break;
        case 63276:
            ScrollUp(this, 4);
            break;
        case 63277:
            ScrollDown(this, 4);
            break;
        default:
            if (param_1 == 36) {
                field_280 = field_336;
                HideList(this);
                return 1;
            }
            return 0;
        }
        return 1;
    }

    // 0x100a46ac0, 64 bytes, placed by class name
    // DropdownGroup::DoOnShown()
    void DropdownGroup::DoOnShown() {
        long lVar1;
        long* plVar2;

        lVar1 = eastl::vector<PageInfo, eastl::allocator>::operator[]((vector<PageInfo, eastl::allocator>*)&field_248,
                                                                      (long)(int)field_280);
        plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
        (**(code**)(*plVar2 + 80))(plVar2);
        DoOnShown();
    }

    // 0x100a46b00, 16 bytes, placed by class name
    // DropdownGroup::OnFocusChanged(bool)
    void DropdownGroup::OnFocusChanged(bool param_1) {
        undefined3 in_register_00000031;

        if (CONCAT31(in_register_00000031, param_1) == 0) {
            HideList(this);
        }
    }

    // 0x100a46b10, 32 bytes, placed by class name
    // DropdownGroup::SetMouseOver(bool)
    void DropdownGroup::SetMouseOver(bool param_1) {
        m_mouseOver = param_1;
        m_hasKeyboardNavigation = 0;
    }

    // 0x100a46b30, 64 bytes, placed by class name
    // DropdownGroup::AddPage(eastl::string const&)
    DropdownGroup* DropdownGroup::AddPage(basic_string* param_1) {
        AddPage(param_1);
        param_1->Sort();
        return this;
    }

    // 0x100a46b70, 48 bytes, placed by class name
    // DropdownGroup::ResetToDefault()
    void DropdownGroup::ResetToDefault() {
        long lVar1;
        long* plVar2;

        lVar1 = eastl::vector<PageInfo, eastl::allocator>::operator[]((vector<PageInfo, eastl::allocator>*)&field_248,
                                                                      (long)(int)field_280);
        plVar2 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(lVar1 + 32));
        (**(code**)(*plVar2 + 96))(plVar2);
    }

    // 0x100a46ba0, 144 bytes, placed by class name
    // DropdownGroup::ResetAllToDefault()
    void DropdownGroup::ResetAllToDefault() {
        shared_ptr<Container>* this_00;
        Control* this_01;
        long lVar2;
        long* plVar3;
        long lVar4;

        lVar4 = (&field_248)->HeapBeginPtr();
        lVar2 = (&field_248)->end();
        for (; lVar4 != lVar2; lVar4 = lVar4 + 80) {
            this_00 = (shared_ptr<Container>*)(lVar4 + 32);
            this_01 = (Control*)shared_ptr<Container>::operator->(this_00);
            if (this_01->HasBeenShown() != '\0') {
                plVar3 = (long*)shared_ptr<Container>::operator->(this_00);
                (**(code**)(*plVar3 + 104))(plVar3);
                plVar3 = (long*)shared_ptr<Container>::operator->(this_00);
                (**(code**)(*plVar3 + 96))(plVar3);
            }
        }
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a468e0, 16 bytes, inline, placed by debug map only (low confidence)
    // toupper(char)
    int toupper(char param_1) {
        char cVar1;
        undefined3 in_register_00000039;

        cVar1 = ::toupper(CONCAT31(in_register_00000039, param_1));
        return (int)cVar1;
    }

} // namespace jag
