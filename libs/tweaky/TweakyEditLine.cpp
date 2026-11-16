// libs/tweaky/TweakyEditLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "TweakyEditLine.h"

namespace jag::tweak {
    // 0x100d50f60, 144 bytes, __const
    EditLine::m_shadowColour = {
        255,        0,          0,   0,     500,   400,        1000,       275,        1667,
        275,        2333,       0,   65535, 65535, 65535,      65535,      1397760293, 1970426925,
        1886999653, 1852786277, 116, 0,     0,     0,          1,          1,          0,
        8,          32768,      0,   32768, 0,     1073692671, 1073692671, 1073692671, 1073692671,
    };

    // 0x100a3e480, 1600 bytes, placed by debug map only (low confidence)
    // EditLine::Draw(int, int, int, int, shared_ptr<graphics::Font> const&, graphics::RT7Core*, graphics::FontHelpers*)
    void EditLine::Draw(int param_1, int param_2, int param_3, int param_4, shared_ptr* param_5, RT7Core* param_6,
                        FontHelpers* param_7) {
        EditLine* pEVar1;
        uint uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        Layout* pLVar7;
        vector* pvVar8;
        uchar* puVar9;
        FontMetrics* this_00;
        char* pcVar10;
        long lVar11;
        long lVar12;
        GraphicsApp* this_01;
        undefined1 uVar13;
        int iVar14;
        ulong uVar15;
        long lVar16;
        StringView* pSVar17;
        type* ptVar18;
        StringView SVar19;
        StringView SVar20;
        StringView SVar21;
        StringView SVar22;
        StringView SVar23;
        StringView SVar24;
        StringView SVar25;
        StringView SVar26;
        TextProperties* in_stack_fffffffffffffa58;
        TextProperties local_598;
        StringView local_570;
        StringView local_560;
        undefined1 local_550[40];
        StringView local_528;
        StringView local_518;
        StringView local_508;
        StringView local_4f8;
        StringView local_4e8;
        TextProperties local_4d8;
        optional<unsigned int> local_4b0[8];
        undefined8 local_4a8;
        ulong local_4a0;
        int local_498;
        int local_494;
        ulong local_490;
        EditLine* local_488;
        fixed_string* local_478;
        TextFlags local_468[8];
        StringView local_460[66];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_488 = (EditLine*)CONCAT44(local_488._4_4_, param_3 - param_1);
        iVar5 = (param_3 - param_1) / 5;
        local_4a8 = param_6->GetGUIManager();
        ptVar18 = (type*)&field_8;
        pSVar17 = local_460;
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(pSVar17, (fixed_string*)ptVar18);
        uVar13 = (undefined1)m_pos;
        local_570.substr((ulong)pSVar17, 0);
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
        pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pSVar17);
        puVar9 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)pvVar8);
        SVar19.field_8 = puVar9;
        SVar19.field_0 = (ulong)&local_570;
        uVar3 = graphics::FontHelpers::GetStringWidth(SVar19, (FontMetrics*)&DAT_00000001, (bool)uVar13);
        uVar15 = (ulong)uVar3;
        local_478 = (fixed_string*)ptVar18;
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_560,
                                                                                      (fixed_string*)ptVar18);
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
        pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, ptVar18);
        puVar9 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)pvVar8);
        SVar20.field_8 = puVar9;
        SVar20.field_0 = (ulong)&local_560;
        iVar4 = graphics::FontHelpers::GetStringWidth(SVar20, (FontMetrics*)&DAT_00000001, (bool)uVar13);
        iVar14 = uVar3 - field_0;
        iVar6 = (int)local_488;
        local_490 = uVar15;
        if ((field_0 < 1) || (iVar5 <= iVar14)) {
            if (iVar14 <= (int)local_488 - iVar5)
                goto LAB_100a3e5f1;
            iVar5 = iVar5 * 2 - (int)local_488;
        LAB_100a3e5e4:
            iVar14 = eastl::max<int>(0, uVar3 + iVar5);
        } else {
            iVar14 = 0;
            if ((int)local_488 <= iVar4) {
                iVar5 = iVar5 * -2;
                goto LAB_100a3e5e4;
            }
        }
        field_0 = iVar14;
    LAB_100a3e5f1:
        new (local_550) graphics::ClippingState(param_6);
        ptVar18 = (type*)(ulong)(uint)param_1;
        param_6->SetClippingRectangle((uint)param_1, param_2, iVar6, (param_4 - param_2) + 1, false);
        local_488 = this;
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
        pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, ptVar18);
        this_00 = (FontMetrics*)pvVar8->end();
        uVar3 = this_00->GetMaxAscent();
        iVar5 = this_00->GetVerticalSpacing();
        local_460[0].field_0._0_4_ = 1;
        graphics::TextFlags::TextFlags(local_468, local_460, 1);
        new (&local_4d8) graphics::TextProperties(param_5, SUB81(in_stack_fffffffffffffa58, 0));
        eastl::optional<unsigned int>::optional(local_4b0, (uint*)PTR_m_shadowColour_100ee6818);
        local_4d8.SetColours(4294967295, local_4b0);
        pEVar1 = local_488;
        iVar5 = (uVar3 & 255) - iVar5;
        if (GetSelection(local_488, &local_498, &local_494) != '\0') {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(local_460, local_478);
            uVar15 = (ulong)local_498;
            pSVar17 = local_460;
            local_4a0 = uVar15;
            ((local_550 + 24))->substr((ulong)pSVar17, 0);
            uVar13 = (undefined1)uVar15;
            pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
            pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pSVar17);
            puVar9 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)pvVar8);
            SVar21.field_8 = puVar9;
            SVar21.field_0 = (ulong)(local_550 + 24);
            iVar4 = graphics::FontHelpers::GetStringWidth(SVar21, (FontMetrics*)&DAT_00000001, (bool)uVar13);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(local_460, local_478);
            lVar16 = (long)local_494;
            pSVar17 = local_460;
            lVar11 = lVar16;
            local_528.substr((ulong)pSVar17, 0);
            uVar13 = (undefined1)lVar11;
            pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
            pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pSVar17);
            puVar9 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)pvVar8);
            SVar22.field_8 = puVar9;
            SVar22.field_0 = (ulong)&local_528;
            iVar14 = graphics::FontHelpers::GetStringWidth(SVar22, (FontMetrics*)&DAT_00000001, (bool)uVar13);
            new (local_460) eastl::fixed_string<char, 1024, true, eastl::allocator>();
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_460->assign(pcVar10, local_4a0);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_518,
                                                                                          (fixed_string*)local_460);
            SVar23.field_8._0_4_ = (uint)param_1 - pEVar1->field_0;
            iVar5 = iVar5 + param_2;
            SVar23.field_0 = (ulong)&local_518;
            SVar23.field_8._4_4_ = 0;
            param_7->DrawString(SVar23, iVar5, 0, (uint)&local_4d8, in_stack_fffffffffffffa58);
            iVar4 = iVar4 + (uint)param_1;
            iVar14 = iVar14 + (uint)param_1;
            0->AddElement(0, 0, 0, local_4a8, iVar4 - pEVar1->field_0, iVar5, iVar14 - pEVar1->field_0, param_4,
                          2155937696, 0, 1);
            lVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_460->assign((char*)(lVar11 + local_4a0), lVar16 - local_4a0);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_508,
                                                                                          (fixed_string*)local_460);
            iVar6 = pEVar1->field_0;
            new (&local_598) graphics::TextProperties(&local_4d8, 255);
            SVar24.field_8._0_4_ = iVar4 - iVar6;
            SVar24.field_0 = (ulong)&local_508;
            SVar24.field_8._4_4_ = 0;
            param_7->DrawString(SVar24, iVar5, 0, (uint)&local_598, 0);
            iVar6 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (local_494 < iVar6) {
                lVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar12 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pEVar1 = local_488;
                local_460->assign((char*)(lVar11 + lVar16), lVar12 - lVar16);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_4f8,
                                                                                              (fixed_string*)local_460);
                SVar25.field_8._0_4_ = iVar14 - pEVar1->field_0;
                SVar25.field_0 = (ulong)&local_4f8;
                SVar25.field_8._4_4_ = 0;
                param_7->DrawString(SVar25, iVar5, 0, (uint)&local_4d8, 0);
            }
            /* WARNING: Subroutine does not return */
            local_460->~fixed_string();
        }
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_4e8, local_478);
        SVar26.field_8._0_4_ = (uint)param_1 - pEVar1->field_0;
        SVar26.field_0 = (ulong)&local_4e8;
        SVar26.field_8._4_4_ = 0;
        param_7->DrawString(SVar26, iVar5 + param_2, 0, (uint)&local_4d8, in_stack_fffffffffffffa58);
        if (pEVar1->m_cursorShown != false) {
            this_01 = (GraphicsApp*)BaseApp::GetAppInstance();
            uVar3 = this_01->GetLogicTick();
            if (15 < uVar3 / 30 + (uVar3 / 30) * -32 + uVar3 / 30 + uVar3) {
                iVar5 = ((int)local_490 + (uint)param_1) - pEVar1->field_0;
                0->AddElement(0, 0, 0, local_4a8, iVar5, param_2 + 1, iVar5 + 1, param_4 + -1, 4294967295, 0, 0);
            }
        }
        local_550->~ClippingState();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a3eac0, 80 bytes, placed by debug map only (low confidence)
    // EditLine::GetSelection(int&, int&) const
    undefined8 EditLine::GetSelection(int* param_1, int* param_2) {
        int iVar1;
        undefined8 uVar2;

        if ((m_selectionStart == -1) || (m_selectionStart == m_pos)) {
            uVar2 = 0;
        } else {
            iVar1 = eastl::min<graphics::GraphicsQuality>();
            *param_1 = iVar1;
            iVar1 = eastl::max<int>(m_pos, m_selectionStart);
            *param_2 = iVar1;
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100a3eb50, 80 bytes, placed by debug map only (low confidence)
    // EditLine::HandleChar(int)
    undefined1 EditLine::HandleChar(int param_1) {
        uchar* extraout_RDX;
        StringView SVar2;
        StringView local_30;
        char local_19;

        if (SupportsKeyChar(param_1) != '\0') {
            local_19 = stringtools::WideToCP1252((wchar16)param_1);
            new (&local_30) StringView(&local_19);
            SVar2.field_8 = extraout_RDX;
            SVar2.field_0 = (ulong)&local_30;
            Insert(this, SVar2);
        }
        return 1;
    }

    // 0x100a3eba0, 112 bytes, placed by debug map only (low confidence)
    // EditLine::Insert(StringView)
    void EditLine::Insert(StringView param_1) {
        char* pcVar1;
        ulong uVar2;
        int iVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_1.field_0;
        DeleteSelection(this);
        iVar3 = m_pos;
        pcVar1 = (char*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        uVar2 = this_00->HeapBeginPtr();
        (&field_8, (long)iVar3, 0, pcVar1, uVar2)->replace();
        iVar3 = this_00->HeapBeginPtr();
        m_pos = m_pos + iVar3;
    }

    // 0x100a3ec10, 800 bytes, placed by debug map only (low confidence)
    // EditLine::HandleKeyDown(int)
    ulong EditLine::HandleKeyDown(int param_1) {
        char cVar1;
        undefined8 unaff_R14;
        ulong uVar3;

        uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        switch (param_1) {
        case 0:
            cVar1 = input::InputState::IsKeyDown(59);
            if (cVar1 != '\0') {
                m_pos = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                m_selectionStart = 0;
                m_selecting = false;
            }
            break;
        case 7:
            cVar1 = input::InputState::IsKeyDown(59);
            if (cVar1 != '\0') {
                ClipboardCut(this);
            }
            break;
        case 8:
            cVar1 = input::InputState::IsKeyDown(59);
            if (cVar1 != '\0') {
                ClipboardCopy(this);
            }
            break;
        case 9:
            cVar1 = input::InputState::IsKeyDown(59);
            if (cVar1 != '\0') {
                ClipboardPaste(this);
            }
            break;
        case 49:
            break;
        case 51:
            cVar1 = input::InputState::IsKeyDown(59);
            if (cVar1 == '\0') {
                Backspace(this);
            } else {
                DelWordLeft(this);
            }
            break;
        case 56:
            m_selecting = true;
            if (m_selectionStart == -1) {
                m_selectionStart = m_pos;
            }
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 50:
        case 52:
        case 53:
        case 54:
        case 55:
        switchD_100a3ec32_caseD_1:
            uVar3 = 0;
            break;
        default:
            switch (param_1) {
            case 63234:
                cVar1 = input::InputState::IsKeyDown(59);
                if (cVar1 == '\0') {
                    Left(this);
                } else {
                    WordLeft(this);
                }
                break;
            case 63235:
                cVar1 = input::InputState::IsKeyDown(59);
                if (cVar1 == '\0') {
                    Right(this);
                } else {
                    WordRight(this);
                }
                break;
            default:
                goto switchD_100a3ec32_caseD_1;
            case 63272:
                cVar1 = input::InputState::IsKeyDown(59);
                if (cVar1 == '\0') {
                    Delete(this);
                } else {
                    DelWordRight(this);
                }
                break;
            case 63273:
                Home(this);
                break;
            case 63275:
                End(this);
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100a3ef30, 224 bytes, placed by debug map only (low confidence)
    // EditLine::ClipboardCopy()
    void EditLine::ClipboardCopy() {
        int local_158;
        int local_154;
        Clipboard local_150[8];
        fixed_string<char, 256, true, eastl::allocator> local_148[296];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_148);
        GetSelection(this, &local_158, &local_154, (fixed_string*)local_148);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            Clipboard::Clipboard(local_150);
            Clipboard::SetText<eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_150);
            local_150->~Clipboard();
        }
        /* WARNING: Subroutine does not return */
        local_148->~fixed_string();
    }

    // 0x100a3f010, 144 bytes, placed by debug map only (low confidence)
    // EditLine::ClipboardPaste()
    void EditLine::ClipboardPaste() {
        uchar* extraout_RDX;
        StringView SVar2;
        StringView local_48;
        eastl::string local_38[32];
        Clipboard local_18[8];

        Clipboard::Clipboard(local_18);
        eastl::string::basic_string(local_38);
        if (local_18->GetText(local_38) != '\0') {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_48,
                                                                                          (fixed_string*)local_38);
            SVar2.field_8 = extraout_RDX;
            SVar2.field_0 = (ulong)&local_48;
            Insert(this, SVar2);
        }
        eastl::string::~basic_string(local_38);
        local_18->~Clipboard();
    }

    // 0x100a3f0a0, 32 bytes, placed by debug map only (low confidence)
    // EditLine::ClipboardCut()
    void EditLine::ClipboardCut() {
        ClipboardCopy(this);
        DeleteSelection(this);
    }

    // 0x100a3f0c0, 80 bytes, placed by debug map only (low confidence)
    // EditLine::WordLeft()
    void EditLine::WordLeft() {
        int extraout_EDX;
        StringView SVar2;
        StringView local_28;

        if (m_selecting == false) {
            m_selectionStart = -1;
        }
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_28,
                                                                                      (fixed_string*)&field_8);
        SVar2.field_8._0_4_ = m_pos;
        SVar2.field_0 = (ulong)&local_28;
        SVar2.field_8._4_4_ = 0;
        m_pos = ScanPreviousWordStart(SVar2, extraout_EDX);
    }

    // 0x100a3f110, 80 bytes, placed by debug map only (low confidence)
    // EditLine::Left()
    void EditLine::Left() {
        int iVar1;

        if ((m_selecting == false) && (m_selectionStart != -1)) {
            iVar1 = eastl::min<graphics::GraphicsQuality>(m_selectionStart, m_pos);
        } else {
            if (m_pos < 1)
                goto LAB_100a3f144;
            iVar1 = m_pos + -1;
        }
        m_pos = iVar1;
    LAB_100a3f144:
        if (m_selecting == false) {
            m_selectionStart = -1;
        }
    }

    // 0x100a3f160, 80 bytes, placed by debug map only (low confidence)
    // EditLine::WordRight()
    void EditLine::WordRight() {
        int extraout_EDX;
        StringView SVar2;
        StringView local_28;

        if (m_selecting == false) {
            m_selectionStart = -1;
        }
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_28,
                                                                                      (fixed_string*)&field_8);
        SVar2.field_8._0_4_ = m_pos;
        SVar2.field_0 = (ulong)&local_28;
        SVar2.field_8._4_4_ = 0;
        m_pos = ScanNextWordStart(SVar2, extraout_EDX);
    }

    // 0x100a3f1b0, 112 bytes, placed by debug map only (low confidence)
    // EditLine::Right()
    void EditLine::Right() {
        char cVar1;
        int iVar2;
        int iVar3;

        if ((m_selecting == false) && (m_selectionStart != -1)) {
            iVar3 = eastl::max<int>(m_selectionStart, m_pos);
            m_pos = iVar3;
            cVar1 = m_selecting;
        } else {
            iVar3 = m_pos;
            iVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (iVar3 < iVar2) {
                m_pos = m_pos + 1;
            }
            cVar1 = m_selecting;
        }
        if (cVar1 == '\0') {
            m_selectionStart = -1;
        }
    }

    // 0x100a3f220, 64 bytes, placed by debug map only (low confidence)
    // EditLine::DelWordRight()
    void EditLine::DelWordRight() {
        int iVar1;
        int iVar2;

        iVar1 = m_pos;
        WordRight(this);
        iVar2 = m_pos - iVar1;
        if (iVar2 != 0) {
            (&field_8, (long)iVar1, (long)iVar2, "")->replace();
            m_pos = iVar1;
        }
    }

    // 0x100a3f260, 64 bytes, placed by debug map only (low confidence)
    // EditLine::Delete()
    void EditLine::Delete() {
        if (DeleteSelection(this) == '\0') {
            (&field_8, (long)m_pos, 1, 0, ' ')->replace();
        }
    }

    // 0x100a3f2a0, 80 bytes, placed by debug map only (low confidence)
    // EditLine::DelWordLeft()
    void EditLine::DelWordLeft() {
        int iVar1;
        int iVar2;

        iVar2 = m_pos;
        WordLeft(this);
        iVar1 = m_pos;
        iVar2 = iVar2 - iVar1;
        if (iVar2 != 0) {
            (&field_8, (long)iVar1, (long)iVar2, "")->replace();
            m_pos = iVar1;
        }
    }

    // 0x100a3f2f0, 128 bytes, placed by debug map only (low confidence)
    // EditLine::Backspace()
    void EditLine::Backspace() {
        undefined1* this_00;
        int iVar1;
        undefined1* puVar2;
        int iVar4;
        ulong uVar5;

        if ((DeleteSelection(this) == '\0') && (iVar1 = m_pos, 0 < iVar1)) {
            this_00 = &field_8;
            iVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            uVar5 = (long)m_pos - 1;
            if (iVar1 == iVar4) {
                puVar2 = (undefined1*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    uVar5);
                *puVar2 = 0;
                this_00->force_size((long)m_pos - 1);
            } else {
                this_00->replace(uVar5, 1, 0, ' ');
            }
            m_pos = m_pos + -1;
        }
    }

    // 0x100a3f370, 32 bytes, placed by debug map only (low confidence)
    // EditLine::HandleKeyUp(int)
    undefined8 EditLine::HandleKeyUp(int param_1) {
        if (param_1 == 49) {
            return 1;
        }
        if (param_1 == 56) {
            m_selecting = false;
        }
        return 0;
    }

    // 0x100a3f390, 112 bytes, placed by debug map only (low confidence)
    // EditLine::ValidatePosition()
    void EditLine::ValidatePosition() {
        undefined4 uVar1;
        int iVar2;

        iVar2 = m_pos;
        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, uVar1);
        iVar2 = eastl::max<int>(0, iVar2);
        m_pos = iVar2;
        iVar2 = m_selectionStart;
        if (iVar2 != -1) {
            uVar1 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, uVar1);
            iVar2 = eastl::max<int>(0, iVar2);
            m_selectionStart = iVar2;
        }
    }

    // 0x100a3f400, 80 bytes, placed by debug map only (low confidence)
    // EditLine::SelectAll()
    void EditLine::SelectAll() {
        int iVar1;

        SetSelecting(this, true);
        SetSelectionStart(this, 0);
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        SetPos(this, iVar1);
        SetSelecting(this, false);
    }

} // namespace jag::tweak
