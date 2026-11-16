// libs/ui/console/ConsoleEditLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "ConsoleEditLine.h"
#include "libs/tweaky/TweakyEditLine.h"

namespace jag::ui {
    // 0x100073980: ConsoleEditLine::GetPos() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: ConsoleEditLine::GetDrawOffset() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x100681250
    void ConsoleEditLine::Draw(
        int arg1, int arg2, int arg3, int arg4, const shared_ptr<graphics::Font>& font, graphics::RT7Core* rt7Core,
        graphics::FontHelpers* fontHelpers, int arg8,
        std::function<void(eastl::fixed_string<char, 256>&, eastl::fixed_string<char, 256> const&)>* callback) {
        char* pcVar9;
        long lVar10;
        long lVar11;
        uint32_t in_register_00000014;
        unsigned long uVar13;
        StringView local_6b8;
        uint8_t local_6a8[40];
        StringView local_680;
        StringView local_670;
        StringView local_660;
        StringView local_650;
        StringView local_640;
        StringView local_630;
        TextProperties local_5f8;
        int local_5c0;
        int local_5bc;
        long local_5b0;
        TextProperties local_588;

        uint64_t local_5a0 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        int local_598 = arg4;
        int local_594 = arg1;
        auto local_5c8 = rt7Core->GetGUIManager();
        fixed_string<char, 256> local_160;
        if (callback == (function<void_(eastl::fixed_string<char, _256>&, eastl::fixed_string<char, _256> const&)>*)0) {
            pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar13 = field_8.size();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>::assign(
                &local_160, pcVar9, uVar13);
        } else {
            std::function<void(eastl::fixed_string<char, 256>&, eastl::fixed_string<char, 256> const&)>::operator()(
                (function<void(eastl::fixed_string<char, 256>&, eastl::fixed_string<char, 256> const&)>*)callback,
                &local_160, (fixed_string<char, _256>*)&field_8);
        }
        local_588.StringView<eastl::fixed_string<char, 40>>(local_160);
        StringView local_6c8 = ((unsigned long)&local_588)->substr(0);
        auto pLVar6 = font.operator->();
        auto psVar7 = pLVar6->SSOBeginPtr();
        FontMetrics* pFVar8 = (FontMetrics*)**psVar7;
        uint64_t local_5a8 = graphics::FontHelpers::GetStringWidth(&local_6c8, *pFVar8, true);
        local_6b8.StringView<eastl::fixed_string<char, 40>>(local_160);
        pLVar6 = (Layout*)font.operator->();
        psVar7 = (shared_ptr<graphics::FontMetrics>*)pLVar6->SSOBeginPtr();
        pFVar8 = (FontMetrics*)**psVar7;
        int iVar2 = graphics::FontHelpers::GetStringWidth(&local_6b8, *pFVar8, true);
        int iVar14 = arg3 - local_594;
        int iVar4 = iVar14 / 5;
        int iVar12 = (int)local_5a8 - m_drawOffset;
        if ((m_drawOffset < 1) || (iVar4 <= iVar12)) {
            if (iVar12 <= iVar14 - iVar4)
                goto LAB_100681406;
            iVar4 = iVar4 * 2 - iVar14;
        LAB_1006813f9:
            iVar12 = eastl::max<int>(0, (int)local_5a8 + iVar4);
        } else {
            iVar12 = 0;
            if (iVar14 <= iVar2) {
                iVar4 = iVar4 * -2;
                goto LAB_1006813f9;
            }
        }
        m_drawOffset = iVar12;
    LAB_100681406:
        new (local_6a8) graphics::ClippingState(rt7Core);
        rt7Core->SetClippingRectangle(local_594, (int)local_5a0, iVar14, (local_598 - (int)local_5a0) + 1, false);
        pLVar6 = (Layout*)font.operator->();
        auto this_00 = pLVar6->SSOBeginPtr();
        pFVar8 = (FontMetrics*)this_00->end();
        unsigned int uVar3 = pFVar8->GetMaxAscent();
        iVar4 = pFVar8->GetVerticalSpacing();
        local_588[0].m_pFont._0_4_ = 1;
        TextFlags local_590(&local_588);
        TextProperties local_620(font, local_590[0]);
        unsigned int uVar5 = field_312;
        optional<unsigned int> local_5d0(field_316);
        local_620.SetColours(uVar5, &local_5d0);
        unsigned long local_5b8 = (unsigned long)((uVar3 & 255) - iVar4);
        if (GetSelectionRange(local_5c0, local_5bc) != '\0') {
            local_588.StringView<eastl::fixed_string<char, 40>>(local_160);
            uVar13 = (unsigned long)local_5c0;
            *((local_6a8 + 24)) = ((unsigned long)&local_588)->substr(0);
            pLVar6 = (Layout*)font.operator->();
            psVar7 = (shared_ptr<graphics::FontMetrics>*)pLVar6->SSOBeginPtr();
            pFVar8 = (FontMetrics*)**psVar7;
            iVar2 = graphics::FontHelpers::GetStringWidth((local_6a8 + 24), *pFVar8, true);
            local_588.StringView<eastl::fixed_string<char, 40>>(local_160);
            local_5b0 = (long)local_5bc;
            local_680 = ((unsigned long)&local_588)->substr(0);
            pLVar6 = (Layout*)font.operator->();
            psVar7 = (shared_ptr<graphics::FontMetrics>*)pLVar6->SSOBeginPtr();
            pFVar8 = (FontMetrics*)**psVar7;
            iVar12 = graphics::FontHelpers::GetStringWidth(&local_680, *pFVar8, true);
            local_588 = eastl::fixed_string<char, 1024>();
            pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true>>::assign(
                &local_588, pcVar9, uVar13);
            local_670.StringView<eastl::fixed_string<char, 40>>(local_588);
            iVar14 = (int)local_5b8 + (int)local_5a0;
            fontHelpers->DrawString(&local_670, local_594 - m_drawOffset, iVar14, 0, local_620);
            iVar2 = iVar2 + local_594;
            iVar12 = iVar12 + local_594;
            local_5c8->AddElement(iVar2 - m_drawOffset, iVar14, iVar12 - m_drawOffset, local_598, field_324, 0.0, 0.0,
                                  0.0, 0.0, nullptr, 1);
            lVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true>>::assign(
                &local_588, (char*)(lVar10 + uVar13), local_5b0 - uVar13);
            local_660.StringView<eastl::fixed_string<char, 40>>(local_588);
            iVar4 = m_drawOffset;
            local_5f8 = graphics::TextProperties(local_620, field_320);
            fontHelpers->DrawString(&local_660, iVar2 - iVar4, iVar14, 0, local_5f8);
            iVar4 = local_160.size();
            if ((int)local_5b0 < iVar4) {
                lVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar10 = local_5b0;
                pcVar9 = (char*)(lVar11 + local_5b0);
                lVar11 = local_160.size();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true>>::assign(
                    &local_588, pcVar9, lVar11 - lVar10);
                local_650.StringView<eastl::fixed_string<char, 40>>(local_588);
                fontHelpers->DrawString(&local_650, iVar12 - m_drawOffset, iVar14, 0, local_620);
            }
        }
        local_640.StringView<eastl::fixed_string<char, 40>>(local_160);
        fontHelpers->DrawString(&local_640, local_594 - m_drawOffset, (int)local_5b8 + (int)local_5a0, 0, local_620);
        if (0 < arg8) {
            iVar4 = local_160.size();
            if (arg8 < iVar4) {
                local_5f8 = eastl::string();
                pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_5f8.assign(pcVar9, (long)arg8);
                local_630.StringView<eastl::fixed_string<char, 40>>(local_5f8);
                iVar4 = m_drawOffset;
                local_588 = graphics::TextProperties(local_620, field_328, field_316);
                fontHelpers->DrawString(&local_630, local_594 - iVar4, (int)local_5b8 + (int)local_5a0, 0, local_588);
            }
        }
        if (m_cursorShown != '\0') {
            uVar5 = ((GraphicsApp*)BaseApp::GetAppInstance())->GetLogicTick();
            if (15 < uVar5 / 30 + (uVar5 / 30) * -32 + uVar5 / 30 + uVar5) {
                iVar4 = ((int)local_5a8 + local_594) - m_drawOffset;
                local_5c8->AddElement(iVar4, (int)local_5a0 + 1, iVar4 + 1, local_598 - 1, field_312, 0.0, 0.0, 0.0,
                                      0.0, nullptr, 0);
            }
        }
    }

    // 0x100681a00
    uint64_t ConsoleEditLine::GetSelectionRange(int& arg1, int& arg2) const {
        int iVar1;
        uint64_t uVar2;

        EnumOptionToggle enumOptionToggle2 = field_304;
        if ((enumOptionToggle2 == 4294967295) || (enumOptionToggle2 == m_pos)) {
            uVar2 = 0;
        } else {
            iVar1 = eastl::min<graphics::GraphicsQuality>(m_pos, enumOptionToggle2);
            arg1 = iVar1;
            iVar1 = eastl::max<int>(m_pos, field_304);
            arg2 = iVar1;
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100681aa0
    uint8_t ConsoleEditLine::HandleChar(int arg1) {
        StringView local_30;
        uint8_t local_19;

        if (tweak::EditLine::SupportsKeyChar(arg1) != '\0') {
            local_19 = stringtools::WideToCP1252((char16_t)arg1);
            local_30 = StringView(local_19);
            Insert(&local_30);
        }
        return 1;
    }

    // 0x100681b10
    void ConsoleEditLine::Insert(StringView stringView) {
        DeleteSelection();
        EnumOptionToggle EVar1 = m_pos;
        auto str = stringView->end();
        unsigned long arg4 = stringView->HeapBeginPtr();
        (&field_8)->replace((long)(int)EVar1, 0, str, arg4);
        int iVar2 = stringView->HeapBeginPtr();
        m_pos = m_pos + iVar2;
    }

    // 0x100681b80
    unsigned long ConsoleEditLine::HandleKeyDown(int arg1) {
        uint64_t unaff_R14;

        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        switch (arg1) {
        case 0:
            if (input::InputState::IsKeyDown(59)) {
                m_pos = field_8.size();
                field_304 = 0;
                field_308 = false;
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
            field_308 = true;
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
        switchD_100681ba2_caseD_1:
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
                goto switchD_100681ba2_caseD_1;
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

    // 0x100681e90
    void ConsoleEditLine::ClipboardCopy() {
        int local_158;
        int local_154;
        Clipboard local_150;
        ReturnValue local_148;

        if (GetSelectionRange(local_158, local_154)) {
            local_148 = field_8.substr((long)local_158, (long)local_154 - (long)local_158);
            if (!(local_148.empty())) {
                local_150 = Clipboard();
                local_150.SetText<eastl::basic_string<char, BucketAllocatorEASTL>>(local_148);
            }
        }
    }

    // 0x100681f80
    void ConsoleEditLine::ClipboardPaste() {
        StringView local_48;

        Clipboard local_18;
        eastl::string local_38;
        if (local_18.GetText(local_38) != '\0') {
            local_48.StringView<eastl::fixed_string<char, 40>>(local_38);
            Insert(&local_48);
        }
    }

    // 0x100682010
    void ConsoleEditLine::ClipboardCut() {
        ClipboardCopy();
        DeleteSelection();
    }

    // 0x100682090
    void ConsoleEditLine::WordLeft() {
        StringView local_28;

        if (field_308 == false) {
            field_304 = 4294967295;
        }
        local_28.StringView<eastl::fixed_string<char, 40>>(field_8);
        m_pos = ScanPreviousWordStart(&local_28, m_pos);
    }

    // 0x1006820e0
    void ConsoleEditLine::Left() {
        EnumOptionToggle EVar1 = field_304;
        if (field_308 == false) {
            if (EVar1 == 4294967295)
                goto LAB_100682117;
            EVar1 = eastl::min<graphics::GraphicsQuality>(EVar1, m_pos);
        } else {
            if (EVar1 == 4294967295) {
                field_304 = m_pos;
            }
        LAB_100682117:
            if ((int)m_pos < 1)
                goto LAB_100682124;
            EVar1 = m_pos - 1;
        }
        m_pos = EVar1;
    LAB_100682124:
        if (field_308 == false) {
            field_304 = 4294967295;
        }
    }

    // 0x100682140
    void ConsoleEditLine::WordRight() {
        StringView local_28;

        if (field_308 == false) {
            field_304 = 4294967295;
        }
        local_28.StringView<eastl::fixed_string<char, 40>>(field_8);
        m_pos = ScanNextWordStart(&local_28, m_pos);
    }

    // 0x100682190
    void ConsoleEditLine::Right() {
        EnumOptionToggle EVar1;

        ShaderVariablePrecision shaderVariablePrecision1 = field_304;
        if (field_308 == false) {
            if (shaderVariablePrecision1 != 4294967295) {
                EVar1 = eastl::max<int>(shaderVariablePrecision1, m_pos);
                m_pos = EVar1;
                goto LAB_1006821e1;
            }
        } else if (shaderVariablePrecision1 == 4294967295) {
            field_304 = m_pos;
        }
        EVar1 = m_pos;
        int iVar2 = field_8.size();
        if ((int)EVar1 < iVar2) {
            m_pos = m_pos + 1;
        }
    LAB_1006821e1:
        if (field_308 == false) {
            field_304 = 4294967295;
        }
    }

    // 0x100682200
    void ConsoleEditLine::DelWordRight() {
        EnumOptionToggle EVar1 = m_pos;
        WordRight();
        int iVar2 = m_pos - EVar1;
        if (iVar2 != 0) {
            field_8.replace((long)(int)EVar1, (long)iVar2, "");
            m_pos = EVar1;
        }
    }

    // 0x100682240
    void ConsoleEditLine::Delete() {
        if (DeleteSelection() == '\0') {
            (&field_8)->replace((long)(int)m_pos, 1, 0, ' ');
        }
    }

    // 0x100682280
    void ConsoleEditLine::DelWordLeft() {
        EnumOptionToggle EVar1 = m_pos;
        WordLeft();
        EnumOptionToggle EVar2 = m_pos;
        int iVar3 = EVar1 - EVar2;
        if (iVar3 != 0) {
            field_8.replace((long)(int)EVar2, (long)iVar3, "");
            m_pos = EVar2;
        }
    }

    // 0x1006822d0
    void ConsoleEditLine::Backspace() {
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

    // 0x100682350
    uint64_t ConsoleEditLine::HandleKeyUp(int arg1) {
        if (arg1 == 49) {
            return 1;
        }
        if (arg1 == 56) {
            field_308 = false;
        }
        return 0;
    }

    // 0x100682370
    uint64_t ConsoleEditLine::DeleteSelection() {
        int iVar2;

        EnumOptionToggle EVar1 = field_304;
        if (EVar1 != 4294967295) {
            field_308 = false;
            if (EVar1 != m_pos) {
                EVar1 = eastl::min<graphics::GraphicsQuality>(m_pos, EVar1);
                iVar2 = eastl::max<int>(m_pos, field_304);
                (&field_8)->replace((long)(int)EVar1, (long)(int)(iVar2 - EVar1), 0, ' ');
                field_304 = 4294967295;
                m_pos = EVar1;
                return 1;
            }
            field_304 = 4294967295;
        }
        return 0;
    }

    // 0x1006823f0
    void ConsoleEditLine::ValidatePosition() {
        EnumOptionToggle EVar3 = m_pos;
        auto EVar1 = field_8.size();
        auto SVar2 = eastl::min<graphics::GraphicsQuality>(EVar3, EVar1);
        EVar3 = eastl::max<int>(0, SVar2);
        m_pos = EVar3;
        EVar3 = field_304;
        if (EVar3 != 4294967295) {
            EVar1 = field_8.size();
            SVar2 = eastl::min<graphics::GraphicsQuality>(EVar3, EVar1);
            EVar3 = eastl::max<int>(0, SVar2);
            field_304 = EVar3;
        }
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100681af0: EditLine::SupportsKeyChar(int) has the same machine code as ui::ConsoleEditLine::SupportsKeyChar(int)

    // 0x100682030: EditLine::Home() has the same machine code as ui::ConsoleEditLine::Home()

    // 0x100682060: EditLine::End() has the same machine code as ui::ConsoleEditLine::End()

} // namespace jag::tweak
