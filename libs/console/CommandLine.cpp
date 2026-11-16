// libs/console/CommandLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.console

#include "CommandLine.h"

namespace jag::game::console {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    CommandLine::GetPos() const;

    // 0x10042e410: the linker folded this into graphics::Model::SetLevel(int), which has identical code
    CommandLine::SetSelectionStart(int);

    // 0x100c79ce0, 112 bytes, placed by class name and debug map
    // CommandLine::ValidatePosition()
    void CommandLine::ValidatePosition() {
        undefined4 uVar1;
        int iVar2;
        uint uVar3;

        uVar3 = m_pos;
        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        iVar2 = eastl::min<graphics::GraphicsQuality>(uVar3, uVar1);
        uVar3 = eastl::max<int>(0, iVar2);
        m_pos = uVar3;
        uVar3 = m_selectionStart;
        if (uVar3 != 4294967295) {
            uVar1 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            iVar2 = eastl::min<graphics::GraphicsQuality>(uVar3, uVar1);
            uVar3 = eastl::max<int>(0, iVar2);
            m_selectionStart = uVar3;
        }
    }

    // 0x100c79d50, 80 bytes, placed by class name and debug map
    // CommandLine::GetSelection(int&, int&) const
    undefined8 CommandLine::GetSelection(int* param_1, int* param_2) {
        int iVar1;
        undefined8 uVar2;

        if ((m_selectionStart == 4294967295) || (m_selectionStart == m_pos)) {
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

    // 0x100c79da0, 208 bytes, placed by class name and debug map
    // CommandLine::GetSelection(int&, int&, eastl::fixed_string<char, 256, true, eastl::allocator>&) const
    undefined8 CommandLine::GetSelection(int* param_1, int* param_2, fixed_string* param_3) {
        int iVar1;
        fixed_string local_158[296];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((m_selectionStart != 4294967295) && (m_selectionStart != m_pos)) {
            iVar1 = eastl::min<graphics::GraphicsQuality>();
            *param_1 = iVar1;
            iVar1 = eastl::max<int>(m_pos, m_selectionStart);
            *param_2 = iVar1;
            eastl::fixed_string<char, 256, true, eastl::allocator>::substr((ulong)local_158, (ulong)&field_16);
            eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
                (fixed_string<char, 4096, true, eastl::allocator>*)param_3, local_158);
            /* WARNING: Subroutine does not return */
            local_158->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return 0;
    }

    // 0x100c79e70, 96 bytes, placed by class name and debug map
    // CommandLine::swap(CommandLine&)
    void CommandLine::swap(CommandLine* param_1) {
        (&field_16, (fixed_string*)&param_1->field_16)->swap();
        eastl::swap<unsigned int>(&m_pos, &param_1->m_pos);
        eastl::swap<signed char>((signed*)&m_selecting, (signed*)&param_1->m_selecting);
        eastl::swap<unsigned int>(&m_selectionStart, &param_1->m_selectionStart);
    }

    // 0x100c79ed0, 48 bytes, placed by class name and debug map
    // CommandLine::Home()
    void CommandLine::Home() {
        m_pos = 0;
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
            return;
        }
    }

    // 0x100c79f00, 48 bytes, placed by class name and debug map
    // CommandLine::End()
    void CommandLine::End() {
        m_pos = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100c79f30, 80 bytes, placed by class name and debug map
    // CommandLine::SelectAll()
    void CommandLine::SelectAll() {
        int iVar1;

        SetSelecting(this, true);
        SetSelectionStart(this, 0);
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        SetPos(this, iVar1);
        SetSelecting(this, false);
    }

    // 0x100c79fa0, 64 bytes, placed by class name and debug map
    // CommandLine::SelectNone()
    void CommandLine::SelectNone() {
        SetSelecting(this, true);
        SetSelectionStart(this, 0);
        SetPos(this, 0);
        SetSelecting(this, false);
    }

    // 0x100c79fe0, 64 bytes, placed by class name and debug map
    // CommandLine::Insert(char)
    void CommandLine::Insert(char param_1) {
        DeleteSelection(this);
        (&field_16, (long)(int)m_pos, 0, 1, param_1)->replace();
        m_pos = m_pos + 1;
    }

    // 0x100c7a020, 128 bytes, placed by class name and debug map
    // CommandLine::DeleteSelection()
    undefined8 CommandLine::DeleteSelection() {
        uint uVar1;
        int iVar2;

        if (m_selectionStart != 4294967295) {
            m_selecting = false;
            if (m_selectionStart != m_pos) {
                uVar1 = eastl::min<graphics::GraphicsQuality>();
                iVar2 = eastl::max<int>(m_pos, m_selectionStart);
                (&field_16, (long)(int)uVar1, (long)(int)(iVar2 - uVar1), 0, ' ')->replace();
                m_selectionStart = 4294967295;
                m_pos = uVar1;
                return 1;
            }
            m_selectionStart = 4294967295;
        }
        return 0;
    }

    // 0x100c7a0a0, 128 bytes, placed by class name and debug map
    // CommandLine::Backspace()
    void CommandLine::Backspace() {
        undefined1* this_00;
        uint uVar1;
        undefined1* puVar2;
        uint uVar4;
        ulong uVar5;

        if ((DeleteSelection(this) == '\0') && (uVar1 = m_pos, 0 < (int)uVar1)) {
            this_00 = &field_16;
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            uVar5 = (long)(int)m_pos - 1;
            if (uVar1 == uVar4) {
                puVar2 = (undefined1*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    uVar5);
                *puVar2 = 0;
                this_00->force_size((long)(int)m_pos - 1);
            } else {
                this_00->replace(uVar5, 1, 0, ' ');
            }
            m_pos = m_pos - 1;
        }
    }

    // 0x100c7a120, 64 bytes, placed by class name and debug map
    // CommandLine::Delete()
    void CommandLine::Delete() {
        if (DeleteSelection(this) == '\0') {
            (&field_16, (long)(int)m_pos, 1, 0, ' ')->replace();
        }
    }

    // 0x100c7a160, 80 bytes, placed by class name and debug map
    // CommandLine::Left()
    void CommandLine::Left() {
        uint uVar1;

        if ((m_selecting == false) && (m_selectionStart != 4294967295)) {
            uVar1 = eastl::min<graphics::GraphicsQuality>(m_selectionStart, m_pos);
        } else {
            if ((int)m_pos < 1)
                goto LAB_100c7a194;
            uVar1 = m_pos - 1;
        }
        m_pos = uVar1;
    LAB_100c7a194:
        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100c7a1b0, 112 bytes, placed by class name and debug map
    // CommandLine::Right()
    void CommandLine::Right() {
        char cVar1;
        int iVar2;
        uint uVar3;

        if ((m_selecting == false) && (m_selectionStart != 4294967295)) {
            uVar3 = eastl::max<int>(m_selectionStart, m_pos);
            m_pos = uVar3;
            cVar1 = m_selecting;
        } else {
            uVar3 = m_pos;
            iVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if ((int)uVar3 < iVar2) {
                m_pos = m_pos + 1;
            }
            cVar1 = m_selecting;
        }
        if (cVar1 == '\0') {
            m_selectionStart = 4294967295;
        }
    }

    // 0x100c7a220, 256 bytes, placed by class name and debug map
    // CommandLine::WordLeft()
    void CommandLine::WordLeft() {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        undefined4 uVar3;
        byte* pbVar4;
        uint uVar5;

        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
        if (0 < (int)m_pos) {
            uVar5 = m_pos - 1;
            m_pos = uVar5;
            this_00 = &field_16;
            pbVar4 = (byte*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    (ulong)uVar5);
            iVar2 = isspace((uint)*pbVar4);
            if ((iVar2 != 0) && (uVar5 = m_pos, 0 < (int)uVar5)) {
                do {
                    pbVar4 = (byte*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)this_00,
                        (long)(int)uVar5);
                    iVar2 = isspace((uint)*pbVar4);
                    if (iVar2 == 0)
                        break;
                    uVar1 = m_pos;
                    uVar5 = uVar1 - 1;
                    m_pos = uVar5;
                } while (1 < (int)uVar1);
            }
            uVar5 = m_pos;
            if (0 < (int)uVar5) {
                do {
                    pbVar4 = (byte*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)this_00,
                        (long)(int)uVar5);
                    iVar2 = isspace((uint)*pbVar4);
                    if (iVar2 != 0)
                        break;
                    uVar1 = m_pos;
                    uVar5 = uVar1 - 1;
                    m_pos = uVar5;
                } while (1 < (int)uVar1);
            }
            if (0 < (long)(int)m_pos) {
                pbVar4 = (byte*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    (long)(int)m_pos);
                iVar2 = isspace((uint)*pbVar4);
                if (iVar2 != 0) {
                    m_pos = m_pos + 1;
                }
            }
        }
        uVar5 = eastl::max<int>(m_pos, 0);
        m_pos = uVar5;
        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar5 = eastl::min<graphics::GraphicsQuality>(uVar5, uVar3);
        m_pos = uVar5;
    }

    // 0x100c7a320, 288 bytes, placed by class name and debug map
    // CommandLine::WordRight()
    void CommandLine::WordRight() {
        undefined1* this_00;
        byte* pbVar1;
        int iVar2;
        undefined4 uVar3;
        uint uVar4;

        if (m_selecting == false) {
            m_selectionStart = 4294967295;
        }
        uVar4 = m_pos;
        this_00 = &field_16;
        iVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if ((int)uVar4 < iVar2) {
            pbVar1 = (byte*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    (long)(int)m_pos);
            iVar2 = isspace((uint)*pbVar1);
            if (iVar2 == 0) {
                uVar4 = m_pos;
                iVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if ((int)uVar4 < iVar2) {
                    do {
                        pbVar1 = (byte*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                                this_00,
                            (long)(int)m_pos);
                        iVar2 = isspace((uint)*pbVar1);
                        if (iVar2 != 0)
                            break;
                        uVar4 = m_pos + 1;
                        m_pos = uVar4;
                        iVar2 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    } while ((int)uVar4 < iVar2);
                }
            }
            uVar4 = m_pos;
            while (true) {
                iVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if (iVar2 <= (int)uVar4)
                    break;
                pbVar1 = (byte*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                        this_00,
                    (long)(int)m_pos);
                iVar2 = isspace((uint)*pbVar1);
                if (iVar2 == 0)
                    break;
                uVar4 = m_pos + 1;
                m_pos = uVar4;
            }
        }
        uVar4 = eastl::max<int>(m_pos, 0);
        m_pos = uVar4;
        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar4 = eastl::min<graphics::GraphicsQuality>(uVar4, uVar3);
        m_pos = uVar4;
    }

    // 0x100c7a440, 80 bytes, placed by class name and debug map
    // CommandLine::DelWordLeft()
    void CommandLine::DelWordLeft() {
        uint uVar1;
        uint uVar2;
        int iVar3;

        uVar1 = m_pos;
        WordLeft(this);
        uVar2 = m_pos;
        iVar3 = uVar1 - uVar2;
        if (iVar3 != 0) {
            (&field_16, (long)(int)uVar2, (long)iVar3, "")->replace();
            m_pos = uVar2;
        }
    }

    // 0x100c7a490, 64 bytes, placed by class name and debug map
    // CommandLine::DelWordRight()
    void CommandLine::DelWordRight() {
        uint uVar1;
        int iVar2;

        uVar1 = m_pos;
        WordRight(this);
        iVar2 = m_pos - uVar1;
        if (iVar2 != 0) {
            (&field_16, (long)(int)uVar1, (long)iVar2, "")->replace();
            m_pos = uVar1;
        }
    }

    // 0x100c7a4d0, 48 bytes, placed by class name and debug map
    // CommandLine::DelToStartOfLine()
    void CommandLine::DelToStartOfLine() {
        (&field_16, 0, (long)(int)m_pos)->erase();
        m_pos = 0;
    }

    // 0x100c7a5a0, 32 bytes, placed by class name and debug map
    // CommandLine::DelToEndOfLine()
    void CommandLine::DelToEndOfLine() {
        (&field_16, (long)(int)m_pos)->resize();
    }

    // 0x100c7a5c0, 224 bytes, placed by class name and debug map
    // CommandLine::ClipboardCopy()
    void CommandLine::ClipboardCopy() {
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

    // 0x100c7a6a0, 128 bytes, placed by class name and debug map
    // CommandLine::ClipboardPaste()
    void CommandLine::ClipboardPaste() {
        eastl::string local_38[32];
        Clipboard local_18[8];

        Clipboard::Clipboard(local_18);
        eastl::string::basic_string(local_38);
        if (local_18->GetText(local_38) != '\0') {
            Insert<eastl::string>((basic_string*)this);
        }
        eastl::string::~basic_string(local_38);
        local_18->~Clipboard();
    }

    // 0x100c7a790, 32 bytes, placed by class name and debug map
    // CommandLine::ClipboardCut()
    void CommandLine::ClipboardCut() {
        ClipboardCopy(this);
        DeleteSelection(this);
    }

} // namespace jag::game::console
