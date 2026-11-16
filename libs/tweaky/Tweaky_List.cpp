// libs/tweaky/Tweaky_List.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_List.h"

namespace jag::tweak {
    // 0x100a4a3b0, 1168 bytes, placed by class name and debug map
    // List::Draw(int, int)
    void List::Draw(int param_1, int param_2) {
        Placement PVar1;
        char cVar2;
        bool bVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        Tweaky* pTVar8;
        LoginManager* pLVar9;
        RT7Core* pRVar10;
        basic_string* pbVar11;
        int iVar12;
        int iVar13;
        uint uVar14;
        ulong uVar15;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        undefined4 in_stack_ffffffffffffff6c;
        undefined4 in_stack_ffffffffffffff74;
        ClippingState local_80;
        int local_64;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_60;
        ulong local_58;
        int local_4c;
        int local_48;
        uint local_44;
        shared_ptr local_40;

        cVar2 = (*(code*)field_0[5])(this, local_80.field_8 + 16, &local_64);
        if (cVar2 != '\0') {
            iVar13 = field_24 + param_1;
            iVar12 = field_28 + param_2;
            new (&local_80) oldscape::dash3d::GridRect(iVar13, iVar12, field_36 + iVar13, field_40 + iVar12);
            *(RT7Core**)&field_136 = local_80.field_0;
            field_144 = local_80.field_8._0_4_;
            field_148 = local_80.field_8._4_4_;
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar3 = shared_ptr::operator_cast_to_bool(&local_40);
            if (bVar3) {
                iVar12 = (&field_216)->size();
                local_4c = field_272;
                pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pTVar8->SetColour(1886417151);
                if (field_264 < 1) {
                    iVar13 = 0;
                } else {
                    iVar13 = field_264 / 2;
                }
                pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pTVar8->DrawRect(param_1, iVar13 + param_2, local_80.field_8._16_4_ + -3, (local_64 - iVar13) + -3,
                                 false);
                if (field_268 < 1) {
                    iVar13 = 4;
                } else {
                    pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                    pTVar8->SetColour(808464639);
                    pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                    pTVar8->FillRect(param_1 + 6, param_2, field_268 + 4, field_264);
                    pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                    pTVar8->SetColour(3772834047);
                    pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                    Tweaky::TextDraw<eastl::string>(pTVar8, param_1 + 8, param_2, (basic_string*)&field_48, -1, -1,
                                                    false);
                    iVar13 = field_264;
                }
                iVar13 = iVar13 + param_2;
                local_48 = param_1 + 4;
                if (field_268 < 1) {
                    iVar5 = -8;
                } else {
                    iVar5 = -4 - field_264;
                }
                new (&local_80)
                    oldscape::dash3d::GridRect(local_48, iVar13, param_1 + field_36 + -6, field_40 + iVar13 + iVar5);
                *(RT7Core**)&field_284 = local_80.field_0;
                field_292 = local_80.field_8._0_4_;
                field_296 = local_80.field_8._4_4_;
                pLVar9 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pRVar10 = (RT7Core*)pLVar9->GetAuthWrapper();
                new (&local_80) graphics::ClippingState(pRVar10);
                pLVar9 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                pRVar10 = (RT7Core*)pLVar9->GetAuthWrapper();
                if (field_268 < 1) {
                    iVar5 = 6;
                } else {
                    iVar5 = field_264 + 4;
                }
                pRVar10->SetClippingRectangle(local_48, iVar13, field_36 + -10, field_40 - iVar5, true);
                pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                local_60 =
                    (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                            eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)&field_216;
                local_58 = (ulong)(uint)param_1;
                pTVar8->SetColour(3772834047);
                pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                iVar6 = pTVar8->GetTextCenterYOffset(field_276);
                this_00 = local_60;
                local_44 = CONCAT31(local_44._1_3_, iVar12 <= local_4c);
                iVar5 = field_260;
                uVar15 = (ulong)iVar5;
                iVar7 = eastl::vector<
                    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_60);
                if (iVar5 < iVar7) {
                    local_44 = (local_44 & 255) * 5 - 15;
                    local_58 = (ulong)((int)local_58 + 5);
                    iVar6 = iVar6 + iVar13;
                    do {
                        pbVar11 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                            (vector<eastl::string, eastl::allocator>*)this_00, uVar15);
                        if ((int)uVar15 == field_252) {
                            pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                            pTVar8->SetColour(2155937791);
                            pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                            pTVar8->FillRect(local_48, iVar13, field_36 + local_44, field_276);
                            pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                            uVar14 = 255;
                        } else {
                            pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                            uVar14 = 3772834047;
                        }
                        pTVar8->SetColour(uVar14);
                        pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                        Tweaky::TextDraw<eastl::string>(pTVar8, (int)local_58, iVar6, pbVar11, -1, -1, false);
                        this_00 = local_60;
                        iVar13 = iVar13 + field_276;
                        if (field_148 < iVar13)
                            break;
                        iVar6 = iVar6 + field_276;
                        uVar15 = uVar15 + 1;
                        iVar5 = eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::size(local_60);
                    } while ((long)uVar15 < (long)iVar5);
                }
                local_80.~ClippingState();
                if (local_4c < iVar12) {
                    new (&local_80) oldscape::dash3d::GridRect(field_292 + -4, field_288, field_292 + 2, field_296);
                    bVar3 = (bool)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                    bVar4 = (bool)eastl::vector<
                        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_60);
                    PVar1.field_4 = in_stack_ffffffffffffff6c;
                    PVar1.field_0 = field_260;
                    PVar1.field_8 = 0;
                    PVar1.field_12 = in_stack_ffffffffffffff74;
                    PVar1._16_4_ = iVar12;
                    Tweaky::DrawScrollBar(PVar1, bVar3, (int)local_80.field_0, local_80.field_8._0_4_, 1, bVar4);
                }
            }
            local_40.~shared_ptr();
        }
    }

    // 0x100a4a840, 112 bytes, placed by class name and debug map
    // List::UpdateMouseSelection(float, float)
    void List::UpdateMouseSelection(float param_1, float param_2) {
        if ((&field_284, (int)param_1, (int)param_2)->IsInside() != '\0') {
            field_252 = (int)((param_2 - (float)field_288) / (float)(int)field_276) + field_260;
            ValidatePosition(this);
        }
    }

    // 0x100a4a8b0, 320 bytes, placed by class name and debug map
    // List::ValidatePosition()
    void List::ValidatePosition() {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        iVar2 = field_252;
        this_00 = &field_216;
        iVar1 = this_00->size();
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, iVar1 + -1);
        iVar2 = eastl::max<int>(0, iVar2);
        field_252 = iVar2;
        if (field_260 + field_272 < iVar2) {
            field_260 = iVar2 - field_272;
        }
        if (iVar2 < field_260) {
            field_260 = iVar2;
        }
        iVar2 = field_260;
        iVar1 = this_00->size();
        if (iVar1 - field_272 < iVar2) {
            iVar2 = this_00->size();
            field_260 = iVar2 - field_272;
        }
        if (field_260 < 0) {
            field_260 = 0;
        }
        if (field_252 != field_256) {
            local_30->shared_from_this();
            new (&local_48) Event(local_30, 3);
            DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_30->~shared_ptr();
            field_256 = field_252;
        }
    }

    // 0x100a4a9f0, 608 bytes, placed by class name and debug map
    // List::GetControlSize(int&, int&)
    undefined8 List::GetControlSize(int* param_1, int* param_2) {
        undefined1* this_00;
        uint uVar1;
        bool bVar3;
        char cVar4;
        undefined4 uVar5;
        int iVar6;
        int iVar7;
        Tweaky* pTVar8;
        fixed_string* pfVar9;
        fixed_string* pfVar10;
        int in_R9D;
        ulong uVar11;
        StringView SVar12;
        StringView SVar13;
        StringView local_a0;
        StringView local_90;
        int local_7c;
        int* local_78;
        int* local_70;
        shared_ptr local_68;
        int local_54;
        int local_50;
        int local_4c;
        int local_3c;
        int local_38;
        int local_34;

        this_00 = &field_216;
        local_78 = param_2;
        local_70 = param_1;
        uVar5 = this_00->size();
        iVar6 = eastl::min<graphics::GraphicsQuality>(uVar5, field_248);
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar3 = shared_ptr::operator_cast_to_bool(&local_68);
        if (bVar3) {
            local_3c = 0;
            local_38 = 0;
            cVar4 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar4 == '\0') {
                pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_68);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_a0,
                                                                                              (fixed_string*)&field_48);
                SVar12.field_8 = (uchar*)4294967295;
                SVar12.field_0 = (ulong)&local_a0;
                pTVar8->GetTextSize(&local_3c, &local_38, SVar12, in_R9D);
            }
            local_50 = local_3c;
            ((List*)this)->field_268 = local_3c;
            ((List*)this)->field_264 = local_38;
            pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_68);
            iVar7 = pTVar8->GetMinControlHeight();
            ((List*)this)->field_276 = iVar7 + 4;
            pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_68);
            iVar7 = pTVar8->GetVisibleY();
            uVar1 = ((List*)this)->field_276;
            iVar6 = iVar6 * uVar1;
            local_4c = eastl::min<graphics::GraphicsQuality>((iVar7 - (((List*)this)->field_264 + uVar1)) + -12, iVar6);
            pfVar9 = (fixed_string*)this_00->HeapBeginPtr();
            pfVar10 = (fixed_string*)this_00->end();
            bVar3 = pfVar9 == pfVar10;
            uVar11 = (ulong)CONCAT31((int3)((uint)iVar6 >> 8), bVar3);
            if (bVar3) {
                local_34 = 0;
            } else {
                local_34 = 0;
                do {
                    pTVar8 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_68);
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_90, pfVar9);
                    SVar13.field_8 = (uchar*)4294967295;
                    SVar13.field_0 = (ulong)&local_90;
                    cVar4 = pTVar8->GetTextSize(&local_54, &local_7c, SVar13, in_R9D);
                    if (cVar4 == '\0')
                        break;
                    local_34 = eastl::max<int>(local_34, local_54 + 4);
                    pfVar9 = pfVar9 + 32;
                    bVar3 = pfVar9 == pfVar10;
                    uVar11 = CONCAT71((int7)(uVar11 >> 8), bVar3);
                } while (!bVar3);
                if (bVar3 == false)
                    goto LAB_100a4ac12;
            }
            ((List*)this)->field_272 = local_4c / (int)((List*)this)->field_276;
            ((List*)this)->field_36 = local_34 + 8;
            ((List*)this)->field_40 = local_4c + 4;
            if (0 < local_50) {
                iVar6 = eastl::max<int>(local_50 + 24, local_34 + 8);
                ((List*)this)->field_36 = iVar6;
                ((List*)this)->field_40 = ((List*)this)->field_40 + ((List*)this)->field_264;
            }
            *local_70 = ((List*)this)->field_36;
            *local_78 = ((List*)this)->field_40;
        } else {
            uVar11 = 0;
            bVar3 = false;
        }
    LAB_100a4ac12:
        local_68.~shared_ptr();
        return CONCAT71((int7)(uVar11 >> 8), bVar3);
    }

    // 0x100a4ac50, 272 bytes, placed by class name and debug map
    // List::HandleKeyDown(int)
    undefined8 List::HandleKeyDown(int param_1) {
        undefined8 uVar1;

        uVar1 = 0;
        switch (param_1) {
        case 63232:
            NavigateUp(this);
            break;
        case 63233:
            NavigateDown(this);
            break;
        default:
            goto switchD_100a4ac6f_caseD_f702;
        case 63273:
            NavigateHome(this);
            break;
        case 63275:
            NavigateEnd(this);
            break;
        case 63276:
            NavigatePageUp(this);
            break;
        case 63277:
            NavigatePageDown(this);
        }
        uVar1 = 1;
    switchD_100a4ac6f_caseD_f702:
        return uVar1;
    }

    // 0x100a4ae30, 32 bytes, placed by class name and debug map
    // List::AddLine(eastl::string const&)
    void List::AddLine(basic_string* param_1) {
        (&field_216, param_1)->push_back();
    }

    // 0x100a4ae50, 112 bytes, placed by class name and debug map
    // List::AddLineUnique(eastl::string const&)
    void List::AddLineUnique(basic_string* param_1) {
        basic_string* pbVar2;
        basic_string* pbVar3;

        pbVar3 = (basic_string*)(&field_216)->HeapBeginPtr();
        pbVar2 = (basic_string*)(&field_216)->end();
        while (true) {
            if (pbVar3 == pbVar2) {
                AddLine(this, param_1);
                return;
            }
            if (eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar3) == 0)
                break;
            pbVar3 = pbVar3 + 32;
        }
    }

    // 0x100a4aec0, 32 bytes, placed by class name and debug map
    // List::AddLineUniqueFirstWord(eastl::string const&)
    void List::AddLineUniqueFirstWord(basic_string* param_1) {
        AddEntryUniqueFirstWord<eastl::vector<eastl::string, eastl::allocator>, eastl::string>((vector*)&field_216,
                                                                                               param_1, true);
    }

    // 0x100a4b0d0, 64 bytes, placed by class name and debug map
    // List::Sort()
    void List::Sort() {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = (&field_216)->HeapBeginPtr();
        uVar2 = (&field_216)->end();
        eastl::sort<eastl::string*, eastl::less<eastl::string>>(uVar1, uVar2);
    }

    // 0x100a4b120, 96 bytes, placed by class name and debug map
    // List::SaveSettings(TweakSettingsValue&)
    void List::SaveSettings(TweakSettingsValue* param_1) {
        jag local_38[32];

        ToString<eastl::string, int>(local_38, &field_252, 10);
        eastl::string::operator=((eastl::string*)param_1, (basic_string*)local_38);
        local_38->~basic_string();
    }

    // 0x100a4b180, 48 bytes, placed by class name and debug map
    // List::LoadSettings(TweakSettingsValue const&)
    undefined4 List::LoadSettings(TweakSettingsValue* param_1) {
        field_252 = eastl::stoi<eastl::string>((basic_string*)param_1, 10);
        ValidatePosition(this);
        return 1;
    }

    // 0x100a4b1b0, 80 bytes, placed by class name and debug map
    // List::HandleMouseDown(float, float)
    void List::HandleMouseDown(float param_1, float param_2) {
        if ((&field_284, (int)param_1, (int)param_2)->IsInside() != '\0') {
            field_309 = '\0';
            field_304 = param_2;
            field_300 = 0.0;
        }
    }

    // 0x100a4b200, 208 bytes, placed by class name and debug map
    // List::HandleMouseUp(float, float)
    undefined4 List::HandleMouseUp(float param_1, float param_2) {
        undefined4 uVar1;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38[16];

        uVar1 = (&field_284, (int)param_1, (int)param_2)->IsInside();
        if (((char)uVar1 != '\0') && (field_309 == '\0')) {
            UpdateMouseSelection(this, param_1, param_2);
            field_280 = field_252;
            local_38->shared_from_this();
            new (&local_50) Event(local_38, 2);
            DoCallback(&local_50);
            local_50.~LRUHashCacheWrapper();
            local_38->~shared_ptr();
        }
        return uVar1;
    }

    // 0x100a4b2d0, 112 bytes, placed by class name and debug map
    // List::OnClick(float, float, bool)
    undefined8 List::OnClick(float param_1, float param_2, bool param_3) {
        char cVar1;
        undefined3 in_register_00000031;

        field_308 = param_3;
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

    // 0x100a4b340, 192 bytes, placed by class name and debug map
    // List::OnMouseWheel(float, float, float)
    undefined4 List::OnMouseWheel(float param_1, float param_2, float param_3) {
        int iVar1;
        undefined4 uVar2;
        int iVar3;
        int iVar4;
        int iVar5;

        uVar2 = (&field_284, (int)param_1, (int)param_2)->IsInside();
        if ((char)uVar2 != '\0') {
            iVar3 = field_272;
            iVar5 = iVar3 + 3;
            if (-1 < iVar3) {
                iVar5 = iVar3;
            }
            iVar3 = eastl::max<int>(1, iVar5 >> 2);
            if ((param_3 <= 0.0) || (field_260 == 0)) {
                if (param_3 < 0.0) {
                    iVar5 = field_272;
                    iVar1 = field_260;
                    iVar4 = (&field_216)->size();
                    if (iVar5 + iVar1 != iVar4) {
                        ScrollDown(this, iVar3);
                    }
                }
            } else {
                ScrollUp(this, iVar3);
            }
        }
        return uVar2;
    }

    // 0x100a4b400, 32 bytes, placed by class name and debug map
    // List::ScrollUp(int)
    void List::ScrollUp(int param_1) {
        field_252 = field_252 - param_1;
        field_260 = field_260 - param_1;
        ValidatePosition(this);
    }

    // 0x100a4b420, 32 bytes, placed by class name and debug map
    // List::ScrollDown(int)
    void List::ScrollDown(int param_1) {
        field_252 = field_252 + param_1;
        field_260 = field_260 + param_1;
        ValidatePosition(this);
    }

    // 0x100a4b440, 208 bytes, placed by class name and debug map
    // List::OnMouseMove(float, float)
    undefined8 List::OnMouseMove(float param_1, float param_2) {
        char cVar1;
        float fVar2;

        if ((field_308 == false) || (cVar1 = (&field_284, (int)param_1, (int)param_2)->IsInside(), cVar1 == '\0')) {
            return 0;
        }
        fVar2 = (param_2 - field_304) + field_300;
        field_300 = fVar2;
        field_304 = param_2;
        if (fVar2 <= (float)(int)field_276) {
            if ((float)(int)-field_276 <= fVar2)
                goto LAB_100a4b4ff;
            ScrollDown(this, 1);
        } else {
            ScrollUp(this, 1);
        }
        field_300 = 0.0;
        field_309 = '\x01';
    LAB_100a4b4ff:
        UpdateMouseSelection(this, param_1, param_2);
        return 1;
    }

    // 0x100a4b510, 96 bytes, placed by class name and debug map
    // List::OnMouseOver(float, float)
    undefined4 List::OnMouseOver(float param_1, float param_2) {
        undefined4 uVar1;

        uVar1 = (&field_284, (int)param_1, (int)param_2)->IsInside();
        if ((char)uVar1 != '\0') {
            Control::SetFocus();
            UpdateMouseSelection(this, param_1, param_2);
        }
        return uVar1;
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a4aee0, 496 bytes, inline, placed by debug map only (low confidence)
    // void AddEntryUniqueFirstWord<eastl::vector<eastl::string, eastl::allocator>, eastl::string >(eastl::vector<eastl::string, eastl::allocator>&, eastl::string const&, bool)
    void jag::AddEntryUniqueFirstWord<eastl::vector<eastl::string, eastl::allocator>, eastl::string>(
        vector* param_1, basic_string* param_2, bool param_3) {
        int iVar1;
        fixed_string* this;
        fixed_string* pfVar2;
        long lVar3;
        basic_string* pbVar4;
        char* pcVar5;
        ulong uVar6;
        eastl::string* this_00;
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_708[872];
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_3a0[872];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::fixed_vector(local_3a0);
        tokenize<
            eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>,
            eastl::fixed_string<char, 2048, true, eastl::allocator>>((fixed_vector*)local_3a0, (fixed_string*)param_2,
                                                                     " ", -1);
        this = (fixed_string*)param_1->HeapBeginPtr();
        pfVar2 = (fixed_string*)param_1->end();
        if (this != pfVar2) {
            do {
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::fixed_vector(local_708);
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                             eastl::allocator>,
                         eastl::fixed_string<char, 2048, true, eastl::allocator>>((fixed_vector*)local_708, this, " ",
                                                                                  -1);
                lVar3 = local_708->size();
                if (lVar3 != 0) {
                    lVar3 = local_3a0->size();
                    if (lVar3 != 0) {
                        pbVar4 = (basic_string*)
                            eastl::vector<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                          eastl::fixed_vector_allocator<104ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<104ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_708,
                                0);
                        eastl::vector<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                      eastl::fixed_vector_allocator<104ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<eastl::fixed_string<char, 64, true, eastl::allocator>,
                                    eastl::fixed_vector_allocator<104ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)
                                local_3a0,
                            0);
                        iVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar4);
                        if (iVar1 == 0) {
                            if (param_3) {
                                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                uVar6 =
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                assign(pcVar5, uVar6);
                            }
                            eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                eastl::allocator>::~fixed_vector(local_708);
                            goto LAB_100a4b06a;
                        }
                    }
                }
                eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::~fixed_vector(local_708);
                this = this + 32;
            } while (this != pfVar2);
        }
        this_00 = (eastl::string*)param_1->push_back();
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        eastl::string::assign(this_00, pcVar5, uVar6);
    LAB_100a4b06a:
        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::~fixed_vector(local_3a0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag
