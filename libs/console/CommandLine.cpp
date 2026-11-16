// libs/console/CommandLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.console

#include "CommandLine.h"

namespace jag::game::console {
    // 0x100024170: CommandLine::GetPos() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10042e410: CommandLine::SetSelectionStart(int) has the same machine code as graphics::Model::SetLevel(int)

    // 0x100c79ce0
    void CommandLine::ValidatePosition() {
        EnumOptionToggle EVar3 = m_pos;
        auto EVar1 = field_16.size();
        auto SVar2 = eastl::min<graphics::GraphicsQuality>(EVar3, EVar1);
        EVar3 = eastl::max<int>(0, SVar2);
        m_pos = EVar3;
        EVar3 = m_selectionStart;
        if (EVar3 != 4294967295) {
            EVar1 = field_16.size();
            SVar2 = eastl::min<graphics::GraphicsQuality>(EVar3, EVar1);
            EVar3 = eastl::max<int>(0, SVar2);
            m_selectionStart = EVar3;
        }
    }

    // 0x100c79d50
    uint64_t CommandLine::GetSelection(int& arg1, int& arg2) const {
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

    // 0x100c79da0
    uint64_t CommandLine::GetSelection(int& arg1, int& arg2, eastl::fixed_string<char, 256>& str) const {
        int iVar1;
        ReturnValue local_158;

        EnumOptionToggle enumOptionToggle2 = m_selectionStart;
        if (enumOptionToggle2 != 4294967295) {
            if (enumOptionToggle2 != m_pos) {
                iVar1 = eastl::min<graphics::GraphicsQuality>(m_pos, enumOptionToggle2);
                arg1 = iVar1;
                iVar1 = eastl::max<int>(m_pos, m_selectionStart);
                arg2 = iVar1;
                local_158 = field_16.substr((long)*arg1, (long)iVar1 - (long)*arg1);
                str = &local_158;
            }
        }
        return 0;
    }

    // 0x100c79e70
    void CommandLine::swap(CommandLine& commandLine) {
        field_16.swap(commandLine.field_16);
        eastl::swap<unsigned int>(m_pos, commandLine.m_pos);
        eastl::swap<signed char>(m_selecting, commandLine.m_selecting);
        eastl::swap<unsigned int>(m_selectionStart, commandLine.m_selectionStart);
    }

    // 0x100c79ed0
    void CommandLine::Home() {
        m_pos = 0;
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
            return;
        }
    }

    // 0x100c79f00
    void CommandLine::End() {
        m_pos = field_16.size();
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100c79f30
    void CommandLine::SelectAll() {
        SetSelecting(true);
        SetSelectionStart(0);
        SetPos(field_16.size());
        SetSelecting(false);
    }

    // 0x100c79fa0
    void CommandLine::SelectNone() {
        SetSelecting(true);
        SetSelectionStart(0);
        SetPos(0);
        SetSelecting(false);
    }

    // 0x100c79fe0
    void CommandLine::Insert(char arg1) {
        DeleteSelection();
        (&field_16)->replace((long)(int)m_pos, 0, 1, arg1);
        m_pos = m_pos + 1;
    }

    // 0x100c7a020
    uint64_t CommandLine::DeleteSelection() {
        int iVar2;

        EnumOptionToggle EVar1 = m_selectionStart;
        if (EVar1 != 4294967295) {
            m_selecting = false;
            if (EVar1 != m_pos) {
                EVar1 = eastl::min<graphics::GraphicsQuality>(m_pos, EVar1);
                iVar2 = eastl::max<int>(m_pos, m_selectionStart);
                (&field_16)->replace((long)(int)EVar1, (long)(int)(iVar2 - EVar1), 0, ' ');
                m_selectionStart = 4294967295;
                m_pos = EVar1;
                return 1;
            }
            m_selectionStart = 4294967295;
        }
        return 0;
    }

    // 0x100c7a0a0
    void CommandLine::Backspace() {
        uint8_t* this_00;
        EnumOptionToggle EVar1;
        uint8_t* puVar2;
        EnumOptionToggle EVar4;
        unsigned long arg1;

        if ((DeleteSelection() == '\0') && (EVar1 = m_pos, 0 < (int)EVar1)) {
            this_00 = &field_16;
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

    // 0x100c7a120
    void CommandLine::Delete() {
        if (DeleteSelection() == '\0') {
            (&field_16)->replace((long)(int)m_pos, 1, 0, ' ');
        }
    }

    // 0x100c7a160
    void CommandLine::Left() {
        EnumOptionToggle EVar1;

        if ((m_selecting == false) && (m_selectionStart != 4294967295)) {
            EVar1 = eastl::min<graphics::GraphicsQuality>(m_selectionStart, m_pos);
        } else {
            if ((int)m_pos < 1)
                goto LAB_100c7a194;
            EVar1 = m_pos - 1;
        }
        m_pos = EVar1;
    LAB_100c7a194:
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100c7a1b0
    void CommandLine::Right() {
        bool cVar1;
        int iVar2;
        EnumOptionToggle EVar3;

        if ((m_selecting == false) && (m_selectionStart != 4294967295)) {
            EVar3 = eastl::max<int>(m_selectionStart, m_pos);
            m_pos = EVar3;
            cVar1 = m_selecting;
        } else {
            EVar3 = m_pos;
            iVar2 = field_16.size();
            if ((int)EVar3 < iVar2) {
                m_pos = m_pos + 1;
            }
            cVar1 = m_selecting;
        }
        if (!cVar1) {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100c7a220
    void CommandLine::WordLeft() {
        uint8_t* this_00;
        int iVar1;
        EnumOptionToggle EVar2;
        uint8_t* pbVar3;
        EnumOptionToggle EVar4;

        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
        if (0 < (int)m_pos) {
            EVar4 = m_pos - 1;
            m_pos = EVar4;
            this_00 = &field_16;
            pbVar3 = (uint8_t*)(*this_00)[(unsigned long)EVar4];
            iVar1 = isspace((unsigned int)*pbVar3);
            if ((iVar1 != 0) && (EVar4 = m_pos, 0 < (int)EVar4)) {
                do {
                    pbVar3 = (uint8_t*)(*this_00)[(long)(int)EVar4];
                    iVar1 = isspace((unsigned int)*pbVar3);
                    if (iVar1 == 0)
                        break;
                    EVar2 = m_pos;
                    EVar4 = EVar2 - 1;
                    m_pos = EVar4;
                } while (1 < (int)EVar2);
            }
            EVar4 = m_pos;
            if (0 < (int)EVar4) {
                do {
                    pbVar3 = (uint8_t*)(*this_00)[(long)(int)EVar4];
                    iVar1 = isspace((unsigned int)*pbVar3);
                    if (iVar1 != 0)
                        break;
                    EVar2 = m_pos;
                    EVar4 = EVar2 - 1;
                    m_pos = EVar4;
                } while (1 < (int)EVar2);
            }
            if (0 < (long)(int)m_pos) {
                pbVar3 = (uint8_t*)(*this_00)[(long)(int)m_pos];
                iVar1 = isspace((unsigned int)*pbVar3);
                if (iVar1 != 0) {
                    m_pos = m_pos + 1;
                }
            }
        }
        EVar4 = eastl::max<int>(m_pos, 0);
        m_pos = EVar4;
        EVar2 = field_16.size();
        EVar4 = eastl::min<graphics::GraphicsQuality>(EVar4, EVar2);
        m_pos = EVar4;
    }

    // 0x100c7a320
    void CommandLine::WordRight() {
        uint8_t* pbVar1;

        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
        EnumOptionToggle EVar3 = m_pos;
        uint8_t* this_00 = &field_16;
        int iVar2 = this_00->size();
        if ((int)EVar3 < iVar2) {
            pbVar1 = (uint8_t*)(*this_00)[(long)(int)m_pos];
            iVar2 = isspace((unsigned int)*pbVar1);
            if (iVar2 == 0) {
                EVar3 = m_pos;
                iVar2 = this_00->size();
                if ((int)EVar3 < iVar2) {
                    do {
                        pbVar1 = (uint8_t*)(*this_00)[(long)(int)m_pos];
                        iVar2 = isspace((unsigned int)*pbVar1);
                        if (iVar2 != 0)
                            break;
                        EVar3 = m_pos + 1;
                        m_pos = EVar3;
                        iVar2 = this_00->size();
                    } while ((int)EVar3 < iVar2);
                }
            }
            EVar3 = m_pos;
            while (true) {
                iVar2 = this_00->size();
                if (iVar2 <= (int)EVar3)
                    break;
                pbVar1 = (uint8_t*)(*this_00)[(long)(int)m_pos];
                iVar2 = isspace((unsigned int)*pbVar1);
                if (iVar2 == 0)
                    break;
                EVar3 = m_pos + 1;
                m_pos = EVar3;
            }
        }
        EVar3 = eastl::max<int>(m_pos, 0);
        m_pos = EVar3;
        auto enumOptionToggle2 = this_00->size();
        EVar3 = eastl::min<graphics::GraphicsQuality>(EVar3, enumOptionToggle2);
        m_pos = EVar3;
    }

    // 0x100c7a440
    void CommandLine::DelWordLeft() {
        EnumOptionToggle EVar1 = m_pos;
        WordLeft();
        EnumOptionToggle EVar2 = m_pos;
        int iVar3 = EVar1 - EVar2;
        if (iVar3 != 0) {
            field_16.replace((long)(int)EVar2, (long)iVar3, "");
            m_pos = EVar2;
        }
    }

    // 0x100c7a490
    void CommandLine::DelWordRight() {
        EnumOptionToggle EVar1 = m_pos;
        WordRight();
        int iVar2 = m_pos - EVar1;
        if (iVar2 != 0) {
            field_16.replace((long)(int)EVar1, (long)iVar2, "");
            m_pos = EVar1;
        }
    }

    // 0x100c7a4d0
    void CommandLine::DelToStartOfLine() {
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>::erase(
            (ReturnValue*)&field_16, 0, (long)(int)m_pos);
        m_pos = 0;
    }

    // 0x100c7a5a0
    void CommandLine::DelToEndOfLine() {
        field_16.resize((long)(int)m_pos);
    }

    // 0x100c7a5c0
    void CommandLine::ClipboardCopy() {
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

    // 0x100c7a6a0
    void CommandLine::ClipboardPaste() {

        Clipboard local_18;
        eastl::string local_38;
        if (local_18.GetText(local_38) != '\0') {
            Insert<eastl::string>(this, &local_38);
        }
    }

    // 0x100c7a790
    void CommandLine::ClipboardCut() {
        ClipboardCopy();
        DeleteSelection();
    }

} // namespace jag::game::console
