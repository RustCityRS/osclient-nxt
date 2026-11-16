// libs/tweaky/TweakyEditLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "TweakyEditLine.h"

namespace jag::tweak {
    // 0x100d50f60
    int32_t EditLine::m_shadowColour[36] = {
        255,        0,          0,   0,     500,   400,        1000,       275,        1667,
        275,        2333,       0,   65535, 65535, 65535,      65535,      1397760293, 1970426925,
        1886999653, 1852786277, 116, 0,     0,     0,          1,          1,          0,
        8,          32768,      0,   32768, 0,     1073692671, 1073692671, 1073692671, 1073692671,
    };

    // 0x100a3e480
    void EditLine::Draw(int arg1, int arg2, int arg3, int arg4, const shared_ptr<graphics::Font>& font,
                        graphics::RT7Core* rt7Core, graphics::FontHelpers* fontHelpers) {
        basic_string<char, BucketAllocatorEASTL>* this_00;
        char* str_00;
        long lVar10;
        long lVar11;
        long lVar13;
        TextProperties local_598;
        StringView local_560;
        uint8_t local_550[40];
        StringView local_528;
        StringView local_518;
        StringView local_508;
        StringView local_4f8;
        StringView local_4e8;
        unsigned long local_4a0;
        int local_498;
        int local_494;
        EditLine* local_488;
        StringView local_460;

        local_488 = (EditLine*)(((uint64_t)local_488._4_4_ << 32) | (uint32_t)(arg3 - arg1));
        int iVar5 = (arg3 - arg1) / 5;
        auto local_4a8 = rt7Core->GetGUIManager();
        uint8_t* str = &field_8;
        local_460.StringView<eastl::fixed_string<char, 40>>(*str);
        StringView local_570 = ((unsigned long)&local_460)->substr(0);
        auto pLVar7 = font.operator->();
        auto psVar8 = pLVar7->SSOBeginPtr();
        FontMetrics* pFVar9 = (FontMetrics*)**psVar8;
        unsigned int uVar3 = graphics::FontHelpers::GetStringWidth(&local_570, *pFVar9, true);
        unsigned long uVar14 = (unsigned long)uVar3;
        basic_string<char, BucketAllocatorEASTL>* local_478 = (basic_string<char, BucketAllocatorEASTL>*)str;
        local_560.StringView<eastl::fixed_string<char, 40>>(*str);
        pLVar7 = (Layout*)font.operator->();
        psVar8 = (shared_ptr<graphics::FontMetrics>*)pLVar7->SSOBeginPtr();
        pFVar9 = (FontMetrics*)**psVar8;
        int iVar4 = graphics::FontHelpers::GetStringWidth(&local_560, *pFVar9, true);
        int iVar12 = uVar3 - m_drawOffset;
        int iVar6 = (int)local_488;
        unsigned long local_490 = uVar14;
        if ((m_drawOffset < 1) || (iVar5 <= iVar12)) {
            if (iVar12 <= (int)local_488 - iVar5)
                goto LAB_100a3e5f1;
            iVar5 = iVar5 * 2 - (int)local_488;
        LAB_100a3e5e4:
            iVar12 = eastl::max<int>(0, uVar3 + iVar5);
        } else {
            iVar12 = 0;
            if ((int)local_488 <= iVar4) {
                iVar5 = iVar5 * -2;
                goto LAB_100a3e5e4;
            }
        }
        m_drawOffset = iVar12;
    LAB_100a3e5f1:
        new (local_550) graphics::ClippingState(rt7Core);
        rt7Core->SetClippingRectangle(arg1, arg2, iVar6, (arg4 - arg2) + 1, false);
        local_488 = this;
        pLVar7 = (Layout*)font.operator->();
        auto this_01 = pLVar7->SSOBeginPtr();
        pFVar9 = (FontMetrics*)this_01->end();
        uVar3 = pFVar9->GetMaxAscent();
        iVar5 = pFVar9->GetVerticalSpacing();
        local_460[0].field_0._0_4_ = 1;
        TextFlags local_468(&local_460);
        TextProperties local_4d8(font, local_468[0]);
        optional<unsigned int> local_4b0(*PTR_m_shadowColour_100ee6818);
        local_4d8.SetColours(4294967295, &local_4b0);
        EditLine* pEVar1 = local_488;
        iVar5 = (uVar3 & 255) - iVar5;
        if (GetSelection(local_488, &local_498, &local_494) != '\0') {
            local_460.StringView<eastl::fixed_string<char, 40>>(*local_478);
            local_4a0 = (unsigned long)local_498;
            *((local_550 + 24)) = ((unsigned long)&local_460)->substr(0);
            pLVar7 = (Layout*)font.operator->();
            psVar8 = (shared_ptr<graphics::FontMetrics>*)pLVar7->SSOBeginPtr();
            pFVar9 = (FontMetrics*)**psVar8;
            iVar4 = graphics::FontHelpers::GetStringWidth((local_550 + 24), *pFVar9, true);
            local_460.StringView<eastl::fixed_string<char, 40>>(*local_478);
            lVar13 = (long)local_494;
            local_528 = ((unsigned long)&local_460)->substr(0);
            pLVar7 = (Layout*)font.operator->();
            psVar8 = (shared_ptr<graphics::FontMetrics>*)pLVar7->SSOBeginPtr();
            pFVar9 = (FontMetrics*)**psVar8;
            iVar12 = graphics::FontHelpers::GetStringWidth(&local_528, *pFVar9, true);
            local_460 = eastl::fixed_string<char, 1024>();
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true>>::assign(
                &local_460, str_00, local_4a0);
            local_518.StringView<eastl::fixed_string<char, 40>>(local_460);
            iVar5 = iVar5 + arg2;
            fontHelpers->DrawString(&local_518, arg1 - pEVar1->m_drawOffset, iVar5, 0, local_4d8);
            iVar4 = iVar4 + arg1;
            iVar12 = iVar12 + arg1;
            local_4a8->AddElement(iVar4 - pEVar1->m_drawOffset, iVar5, iVar12 - pEVar1->m_drawOffset, arg4, 2155937696,
                                  0.0, 0.0, 0.0, 0.0, nullptr, 1);
            lVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true>>::assign(
                &local_460, (char*)(lVar10 + local_4a0), lVar13 - local_4a0);
            local_508.StringView<eastl::fixed_string<char, 40>>(local_460);
            iVar6 = pEVar1->m_drawOffset;
            local_598 = graphics::TextProperties(local_4d8, 255);
            fontHelpers->DrawString(&local_508, iVar4 - iVar6, iVar5, 0, local_598);
            iVar6 = local_478->size();
            this_00 = local_478;
            if (local_494 < iVar6) {
                lVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar11 = this_00->size();
                pEVar1 = local_488;
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true>>::assign(
                    &local_460, (char*)(lVar10 + lVar13), lVar11 - lVar13);
                local_4f8.StringView<eastl::fixed_string<char, 40>>(local_460);
                fontHelpers->DrawString(&local_4f8, iVar12 - pEVar1->m_drawOffset, iVar5, 0, local_4d8);
            }
        }
        local_4e8.StringView<eastl::fixed_string<char, 40>>(*local_478);
        fontHelpers->DrawString(&local_4e8, arg1 - pEVar1->m_drawOffset, iVar5 + arg2, 0, local_4d8);
        if (pEVar1->m_cursorShown != false) {
            uVar3 = ((GraphicsApp*)BaseApp::GetAppInstance())->GetLogicTick();
            if (15 < uVar3 / 30 + (uVar3 / 30) * -32 + uVar3 / 30 + uVar3) {
                iVar5 = ((int)local_490 + arg1) - pEVar1->m_drawOffset;
                local_4a8->AddElement(iVar5, arg2 + 1, iVar5 + 1, arg4 - 1, 4294967295, 0.0, 0.0, 0.0, 0.0, nullptr, 0);
            }
        }
    }

    // 0x100a3eac0
    uint64_t EditLine::GetSelection(int& arg1, int& arg2) const {
        int iVar1;
        uint64_t uVar2;

        EnumOptionToggle enumOptionToggle2 = m_selectionStart;
        if ((enumOptionToggle2 == 4294967295) || (enumOptionToggle2 == m_pos)) {
            uVar2 = 0;
        } else {
            iVar1 = eastl::min<graphics::GraphicsQuality>(m_pos, enumOptionToggle2);
            arg1 = iVar1;
            iVar1 = eastl::max<int>(m_pos, m_selectionStart);
            arg2 = iVar1;
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100a3eb50
    uint8_t EditLine::HandleChar(int arg1) {
        StringView local_30;
        uint8_t local_19;

        if (SupportsKeyChar(arg1) != '\0') {
            local_19 = stringtools::WideToCP1252((char16_t)arg1);
            local_30 = StringView(local_19);
            Insert(&local_30);
        }
        return 1;
    }

    // 0x100a3eba0
    void EditLine::Insert(StringView stringView) {
        DeleteSelection();
        EnumOptionToggle EVar1 = m_pos;
        auto str = stringView->end();
        unsigned long arg4 = stringView->HeapBeginPtr();
        (&field_8)->replace((long)(int)EVar1, 0, str, arg4);
        int iVar2 = stringView->HeapBeginPtr();
        m_pos = m_pos + iVar2;
    }

    // 0x100a3ec10
    unsigned long EditLine::HandleKeyDown(int arg1) {
        uint64_t unaff_R14;

        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        switch (arg1) {
        case 0:
            if (input::InputState::IsKeyDown(59)) {
                m_pos = field_8.size();
                m_selectionStart = 0;
                m_selecting = false;
            }
            break;
        case 7:
            if (input::InputState::IsKeyDown(59)) {
                ClipboardCut();
            }
            break;
        case 8:
            if (input::InputState::IsKeyDown(59)) {
                ClipboardCopy();
            }
            break;
        case 9:
            if (input::InputState::IsKeyDown(59)) {
                ClipboardPaste();
            }
            break;
        case 49:
            break;
        case 51:
            if (!(input::InputState::IsKeyDown(59))) {
                Backspace();
            } else {
                DelWordLeft();
            }
            break;
        case 56:
            m_selecting = true;
            if (m_selectionStart == 4294967295) {
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
            switch (arg1) {
            case 63234:
                if (!(input::InputState::IsKeyDown(59))) {
                    Left();
                } else {
                    WordLeft();
                }
                break;
            case 63235:
                if (!(input::InputState::IsKeyDown(59))) {
                    Right();
                } else {
                    WordRight();
                }
                break;
            default:
                goto switchD_100a3ec32_caseD_1;
            case 63272:
                if (!(input::InputState::IsKeyDown(59))) {
                    Delete();
                } else {
                    DelWordRight();
                }
                break;
            case 63273:
                Home();
                break;
            case 63275:
                End();
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100a3ef30
    void EditLine::ClipboardCopy() {
        int local_158;
        int local_154;
        Clipboard local_150;

        fixed_string<char, 256> local_148;
        GetSelection(local_158, local_154, local_148);
        if (local_148.empty() == '\0') {
            local_150 = Clipboard();
            local_150.SetText<eastl::basic_string<char, BucketAllocatorEASTL>>(local_148);
        }
    }

    // 0x100a3f010
    void EditLine::ClipboardPaste() {
        StringView local_48;

        Clipboard local_18;
        eastl::string local_38;
        if (local_18.GetText(local_38) != '\0') {
            local_48.StringView<eastl::fixed_string<char, 40>>(local_38);
            Insert(&local_48);
        }
    }

    // 0x100a3f0a0
    void EditLine::ClipboardCut() {
        ClipboardCopy();
        DeleteSelection();
    }

    // 0x100a3f0c0
    void EditLine::WordLeft() {
        StringView local_28;

        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
        local_28.StringView<eastl::fixed_string<char, 40>>(field_8);
        m_pos = ScanPreviousWordStart(&local_28, m_pos);
    }

    // 0x100a3f110
    void EditLine::Left() {
        EnumOptionToggle EVar1;

        if ((m_selecting == false) && (m_selectionStart != 4294967295)) {
            EVar1 = eastl::min<graphics::GraphicsQuality>(m_selectionStart, m_pos);
        } else {
            if ((int)m_pos < 1)
                goto LAB_100a3f144;
            EVar1 = m_pos - 1;
        }
        m_pos = EVar1;
    LAB_100a3f144:
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100a3f160
    void EditLine::WordRight() {
        StringView local_28;

        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
        local_28.StringView<eastl::fixed_string<char, 40>>(field_8);
        m_pos = ScanNextWordStart(&local_28, m_pos);
    }

    // 0x100a3f1b0
    void EditLine::Right() {
        bool cVar1;
        int iVar2;
        EnumOptionToggle EVar3;

        if ((m_selecting == false) && (m_selectionStart != 4294967295)) {
            EVar3 = eastl::max<int>(m_selectionStart, m_pos);
            m_pos = EVar3;
            cVar1 = m_selecting;
        } else {
            EVar3 = m_pos;
            iVar2 = field_8.size();
            if ((int)EVar3 < iVar2) {
                m_pos = m_pos + 1;
            }
            cVar1 = m_selecting;
        }
        if (!cVar1) {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100a3f220
    void EditLine::DelWordRight() {
        EnumOptionToggle EVar1 = m_pos;
        WordRight();
        int iVar2 = m_pos - EVar1;
        if (iVar2 != 0) {
            field_8.replace((long)(int)EVar1, (long)iVar2, "");
            m_pos = EVar1;
        }
    }

    // 0x100a3f260
    void EditLine::Delete() {
        if (DeleteSelection() == '\0') {
            (&field_8)->replace((long)(int)m_pos, 1, 0, ' ');
        }
    }

    // 0x100a3f2a0
    void EditLine::DelWordLeft() {
        EnumOptionToggle EVar1 = m_pos;
        WordLeft();
        EnumOptionToggle EVar2 = m_pos;
        int iVar3 = EVar1 - EVar2;
        if (iVar3 != 0) {
            field_8.replace((long)(int)EVar2, (long)iVar3, "");
            m_pos = EVar2;
        }
    }

    // 0x100a3f2f0
    void EditLine::Backspace() {
        uint8_t* this_00;
        EnumOptionToggle EVar1;
        uint8_t* puVar2;
        EnumOptionToggle EVar4;
        unsigned long arg1;

        if ((DeleteSelection() == '\0') && (EVar1 = m_pos, 0 < (int)EVar1)) {
            this_00 = &field_8;
            EVar4 = this_00->size();
            arg1 = (long)(int)m_pos - 1;
            if (EVar1 == EVar4) {
                puVar2 = (uint8_t*)(*this_00)[arg1];
                *puVar2 = 0;
                this_00->force_size((long)(int)m_pos - 1);
            } else {
                this_00->replace(arg1, 1, 0, ' ');
            }
            m_pos = m_pos - 1;
        }
    }

    // 0x100a3f370
    uint64_t EditLine::HandleKeyUp(int arg1) {
        if (arg1 == 49) {
            return 1;
        }
        if (arg1 == 56) {
            m_selecting = false;
        }
        return 0;
    }

    // 0x100a3f390
    void EditLine::ValidatePosition() {
        EnumOptionToggle EVar3 = m_pos;
        auto EVar1 = field_8.size();
        auto SVar2 = eastl::min<graphics::GraphicsQuality>(EVar3, EVar1);
        EVar3 = eastl::max<int>(0, SVar2);
        m_pos = EVar3;
        EVar3 = m_selectionStart;
        if (EVar3 != 4294967295) {
            EVar1 = field_8.size();
            SVar2 = eastl::min<graphics::GraphicsQuality>(EVar3, EVar1);
            EVar3 = eastl::max<int>(0, SVar2);
            m_selectionStart = EVar3;
        }
    }

    // 0x100a3f400
    void EditLine::SelectAll() {
        SetSelecting(true);
        SetSelectionStart(0);
        SetPos(field_8.size());
        SetSelecting(false);
    }

} // namespace jag::tweak
