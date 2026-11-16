// libs/ui/console/ConsoleEditLine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ConsoleEditLine.h"
#include "libs/tweaky/TweakyEditLine.h"

namespace jag::ui {
    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    ConsoleEditLine::GetPos() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    ConsoleEditLine::GetDrawOffset() const;

    // 0x100681250, 1952 bytes, placed by class name and debug map
    // ConsoleEditLine::Draw(int, int, int, int, shared_ptr<graphics::Font> const&, graphics::RT7Core*, graphics::FontHelpers*, int, std::function<void (eastl::fixed_string<char, 256, true, eastl::allocator>&, eastl::fixed_string<char, 256, true, eastl::allocator> const&)>*)
    /* ConsoleEditLine::Draw(int, int, int, int, shared_ptr<graphics::Font> const&,
   graphics::RT7Core*, graphics::FontHelpers*, int, std::function<void
   (eastl::fixed_string<char, 256, true, eastl::allocator>&, eastl::fixed_string<char, 256, true,
   eastl::allocator> const&)>*) */

    void ConsoleEditLine::Draw(int param_1, int param_2, int param_3, int param_4, shared_ptr* param_5,
                               RT7Core* param_6, FontHelpers* param_7, int param_8, function* param_9) {
        undefined4 uVar1;
        int iVar3;
        uint uVar4;
        int iVar5;
        ulong uVar6;
        Layout* pLVar7;
        vector* pvVar8;
        uchar* puVar9;
        FontMetrics* this_00;
        char* pcVar10;
        long lVar11;
        GraphicsApp* this_01;
        undefined1 uVar12;
        int iVar13;
        long lVar14;
        undefined4 in_register_00000014;
        ulong uVar15;
        fixed_string* pfVar16;
        type* ptVar17;
        int iVar18;
        StringView SVar19;
        StringView SVar20;
        StringView SVar21;
        StringView SVar22;
        StringView SVar23;
        StringView SVar24;
        StringView SVar25;
        StringView SVar26;
        StringView SVar27;
        TextProperties* in_stack_fffffffffffff928;
        TextProperties* pTVar28;
        StringView local_6c8;
        StringView local_6b8;
        undefined1 local_6a8[40];
        StringView local_680;
        StringView local_670;
        StringView local_660;
        StringView local_650;
        StringView local_640;
        StringView local_630;
        TextProperties local_620;
        TextProperties local_5f8;
        optional<unsigned int> local_5d0[8];
        undefined8 local_5c8;
        int local_5c0;
        int local_5bc;
        ulong local_5b8;
        long local_5b0;
        undefined8 local_5a8;
        undefined8 local_5a0;
        TextFlags local_590[8];
        TextProperties local_588[29];
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_5a0 = CONCAT44(in_register_00000014, param_2);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_5c8 = param_6->GetGUIManager();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        if (param_9 == (function*)0) {
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar6 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_160->assign(pcVar10, uVar6);
        } else {
            std::function<void(
                eastl::fixed_string<char, 256, true, eastl::allocator>&,
                eastl::fixed_string<char, 256, true, eastl::allocator> const&)>::operator()((fixed_string*)param_9,
                                                                                            (fixed_string*)local_160);
        }
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)local_588,
                                                                                      (fixed_string*)local_160);
        uVar12 = (undefined1)m_pos;
        pTVar28 = local_588;
        local_6c8.substr((ulong)pTVar28, 0);
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
        pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pTVar28);
        puVar9 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)pvVar8);
        SVar19.field_8 = puVar9;
        SVar19.field_0 = (ulong)&local_6c8;
        local_5a8 = graphics::FontHelpers::GetStringWidth(SVar19, (FontMetrics*)&DAT_00000001, (bool)uVar12);
        pfVar16 = (fixed_string*)local_160;
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_6b8, pfVar16);
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
        pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pfVar16);
        puVar9 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)pvVar8);
        SVar20.field_8 = puVar9;
        SVar20.field_0 = (ulong)&local_6b8;
        iVar3 = graphics::FontHelpers::GetStringWidth(SVar20, (FontMetrics*)&DAT_00000001, (bool)uVar12);
        iVar18 = param_3 - (uint)param_1;
        iVar5 = iVar18 / 5;
        iVar13 = (int)local_5a8 - field_0;
        if ((field_0 < 1) || (iVar5 <= iVar13)) {
            if (iVar13 <= iVar18 - iVar5)
                goto LAB_100681406;
            iVar5 = iVar5 * 2 - iVar18;
        LAB_1006813f9:
            iVar13 = eastl::max<int>(0, (int)local_5a8 + iVar5);
        } else {
            iVar13 = 0;
            if (iVar18 <= iVar3) {
                iVar5 = iVar5 * -2;
                goto LAB_1006813f9;
            }
        }
        field_0 = iVar13;
    LAB_100681406:
        new (local_6a8) graphics::ClippingState(param_6);
        ptVar17 = (type*)(ulong)(uint)param_1;
        param_6->SetClippingRectangle((uint)param_1, (int)local_5a0, iVar18, (param_4 - (int)local_5a0) + 1, false);
        pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
        pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, ptVar17);
        this_00 = (FontMetrics*)pvVar8->end();
        uVar4 = this_00->GetMaxAscent();
        iVar5 = this_00->GetVerticalSpacing();
        local_588[0].m_pFont._0_4_ = 1;
        graphics::TextFlags::TextFlags(local_590, local_588, 1);
        new (&local_620) graphics::TextProperties(param_5, SUB81(in_stack_fffffffffffff928, 0));
        uVar1 = field_312;
        eastl::optional<unsigned int>::optional(local_5d0, &field_316);
        local_620.SetColours(uVar1, local_5d0);
        local_5b8 = (ulong)((uVar4 & 255) - iVar5);
        if (GetSelectionRange(this, &local_5c0, &local_5bc) != '\0') {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)local_588,
                                                                                          (fixed_string*)local_160);
            uVar15 = (ulong)local_5c0;
            pTVar28 = local_588;
            uVar6 = uVar15;
            ((local_6a8 + 24))->substr((ulong)pTVar28, 0);
            uVar12 = (undefined1)uVar6;
            pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
            pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pTVar28);
            puVar9 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)pvVar8);
            SVar21.field_8 = puVar9;
            SVar21.field_0 = (ulong)(local_6a8 + 24);
            iVar3 = graphics::FontHelpers::GetStringWidth(SVar21, (FontMetrics*)&DAT_00000001, (bool)uVar12);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)local_588,
                                                                                          (fixed_string*)local_160);
            lVar14 = (long)local_5bc;
            pTVar28 = local_588;
            local_5b0 = lVar14;
            local_680.substr((ulong)pTVar28, 0);
            uVar12 = (undefined1)lVar14;
            pLVar7 = (Layout*)shared_ptr<graphics::Font>::operator->((shared_ptr<graphics::Font>*)param_5);
            pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar7, (type*)pTVar28);
            puVar9 = (uchar*)shared_ptr<graphics::FontMetrics>::operator*((shared_ptr<graphics::FontMetrics>*)pvVar8);
            SVar22.field_8 = puVar9;
            SVar22.field_0 = (ulong)&local_680;
            iVar13 = graphics::FontHelpers::GetStringWidth(SVar22, (FontMetrics*)&DAT_00000001, (bool)uVar12);
            new (local_588) eastl::fixed_string<char, 1024, true, eastl::allocator>();
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_588->assign(pcVar10, uVar15);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_670,
                                                                                          (fixed_string*)local_588);
            SVar23.field_8._0_4_ = (uint)param_1 - field_0;
            iVar18 = (int)local_5b8 + (int)local_5a0;
            SVar23.field_0 = (ulong)&local_670;
            SVar23.field_8._4_4_ = 0;
            param_7->DrawString(SVar23, iVar18, 0, (uint)&local_620, in_stack_fffffffffffff928);
            iVar3 = iVar3 + (uint)param_1;
            iVar13 = iVar13 + (uint)param_1;
            pTVar28 = (TextProperties*)0;
            0->AddElement(0, 0, 0, local_5c8, iVar3 - field_0, iVar18, iVar13 - field_0, param_4, field_324, 0, 1);
            lVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_588->assign((char*)(lVar14 + uVar15), local_5b0 - uVar15);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_660,
                                                                                          (fixed_string*)local_588);
            iVar5 = field_0;
            new (&local_5f8) graphics::TextProperties(&local_620, field_320);
            SVar24.field_8._0_4_ = iVar3 - iVar5;
            SVar24.field_0 = (ulong)&local_660;
            SVar24.field_8._4_4_ = 0;
            param_7->DrawString(SVar24, iVar18, 0, (uint)&local_5f8, pTVar28);
            iVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if ((int)local_5b0 < iVar5) {
                lVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                lVar14 = local_5b0;
                pcVar10 = (char*)(lVar11 + local_5b0);
                lVar11 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                local_588->assign(pcVar10, lVar11 - lVar14);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_650,
                                                                                              (fixed_string*)local_588);
                SVar25.field_8._0_4_ = iVar13 - field_0;
                SVar25.field_0 = (ulong)&local_650;
                SVar25.field_8._4_4_ = 0;
                param_7->DrawString(SVar25, iVar18, 0, (uint)&local_620, pTVar28);
            }
            /* WARNING: Subroutine does not return */
            local_588->~fixed_string();
        }
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_640,
                                                                                      (fixed_string*)local_160);
        SVar26.field_8._0_4_ = (uint)param_1 - field_0;
        SVar26.field_0 = (ulong)&local_640;
        SVar26.field_8._4_4_ = 0;
        param_7->DrawString(SVar26, (int)local_5b8 + (int)local_5a0, 0, (uint)&local_620, in_stack_fffffffffffff928);
        if (0 < param_8) {
            iVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (param_8 < iVar5) {
                new (&local_5f8) eastl::string();
                pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_5f8.assign(pcVar10, (long)param_8);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                    &local_630, (fixed_string*)&local_5f8);
                iVar5 = field_0;
                graphics::TextProperties::TextProperties(local_588, &local_620, field_328, field_316);
                SVar27.field_8._0_4_ = (uint)param_1 - iVar5;
                SVar27.field_0 = (ulong)&local_630;
                SVar27.field_8._4_4_ = 0;
                param_7->DrawString(SVar27, (int)local_5b8 + (int)local_5a0, 0, (uint)local_588,
                                    in_stack_fffffffffffff928);
                local_5f8.~basic_string();
            }
        }
        if (field_309 != '\0') {
            this_01 = (GraphicsApp*)BaseApp::GetAppInstance();
            uVar4 = this_01->GetLogicTick();
            if (15 < uVar4 / 30 + (uVar4 / 30) * -32 + uVar4 / 30 + uVar4) {
                iVar5 = ((int)local_5a8 + (uint)param_1) - field_0;
                0->AddElement(0, 0, 0, local_5c8, iVar5, (int)local_5a0 + 1, iVar5 + 1, param_4 + -1, field_312, 0, 0);
            }
        }
        local_6a8->~ClippingState();
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

    // 0x100681a00, 80 bytes, placed by class name and debug map
    // ConsoleEditLine::GetSelectionRange(int&, int&) const
    undefined8 ConsoleEditLine::GetSelectionRange(int* param_1, int* param_2) {
        int iVar1;
        undefined8 uVar2;

        if ((field_304 == -1) || (field_304 == m_pos)) {
            uVar2 = 0;
        } else {
            iVar1 = eastl::min<graphics::GraphicsQuality>();
            *param_1 = iVar1;
            iVar1 = eastl::max<int>(m_pos, field_304);
            *param_2 = iVar1;
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100681aa0, 80 bytes, placed by class name and debug map
    // ConsoleEditLine::HandleChar(int)
    undefined1 ConsoleEditLine::HandleChar(int param_1) {
        uchar* extraout_RDX;
        StringView SVar2;
        StringView local_30;
        char local_19;

        if (tweak::EditLine::SupportsKeyChar(param_1) != '\0') {
            local_19 = stringtools::WideToCP1252((wchar16)param_1);
            new (&local_30) StringView(&local_19);
            SVar2.field_8 = extraout_RDX;
            SVar2.field_0 = (ulong)&local_30;
            Insert(this, SVar2);
        }
        return 1;
    }

    // 0x100681b10, 112 bytes, placed by class name
    // ConsoleEditLine::Insert(StringView)
    void ConsoleEditLine::Insert(StringView param_1) {
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

    // 0x100681b80, 784 bytes, placed by class name
    // ConsoleEditLine::HandleKeyDown(int)
    ulong ConsoleEditLine::HandleKeyDown(int param_1) {
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
                field_304 = 0;
                field_308 = false;
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
                goto switchD_100681ba2_caseD_1;
            case 63272:
                cVar1 = input::InputState::IsKeyDown(59);
                if (cVar1 == '\0') {
                    Delete(this);
                } else {
                    DelWordRight(this);
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

    // 0x100681e90, 240 bytes, placed by class name
    // ConsoleEditLine::ClipboardCopy()
    void ConsoleEditLine::ClipboardCopy() {
        char cVar1;
        int local_158;
        int local_154;
        Clipboard local_150[8];
        fixed_string<char, 40, true, eastl::allocator> local_148[296];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = GetSelectionRange(this, &local_158, &local_154);
        if (cVar1 != '\0') {
            eastl::fixed_string<char, 256, true, eastl::allocator>::substr((ulong)local_148, (ulong)&field_8);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                Clipboard::Clipboard(local_150);
                Clipboard::SetText<eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_150);
                local_150->~Clipboard();
            }
            /* WARNING: Subroutine does not return */
            eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_148);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100681f80, 144 bytes, placed by class name
    // ConsoleEditLine::ClipboardPaste()
    void ConsoleEditLine::ClipboardPaste() {
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

    // 0x100682010, 32 bytes, placed by class name
    // ConsoleEditLine::ClipboardCut()
    void ConsoleEditLine::ClipboardCut() {
        ClipboardCopy(this);
        DeleteSelection(this);
    }

    // 0x100682090, 80 bytes, placed by class name
    // ConsoleEditLine::WordLeft()
    void ConsoleEditLine::WordLeft() {
        int extraout_EDX;
        StringView SVar2;
        StringView local_28;

        if (field_308 == false) {
            field_304 = -1;
        }
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_28,
                                                                                      (fixed_string*)&field_8);
        SVar2.field_8._0_4_ = m_pos;
        SVar2.field_0 = (ulong)&local_28;
        SVar2.field_8._4_4_ = 0;
        m_pos = ScanPreviousWordStart(SVar2, extraout_EDX);
    }

    // 0x1006820e0, 96 bytes, placed by class name
    // ConsoleEditLine::Left()
    void ConsoleEditLine::Left() {
        int iVar1;

        iVar1 = field_304;
        if (field_308 == false) {
            if (iVar1 == -1)
                goto LAB_100682117;
            iVar1 = eastl::min<graphics::GraphicsQuality>(iVar1, m_pos);
        } else {
            if (iVar1 == -1) {
                field_304 = m_pos;
            }
        LAB_100682117:
            if (m_pos < 1)
                goto LAB_100682124;
            iVar1 = m_pos + -1;
        }
        m_pos = iVar1;
    LAB_100682124:
        if (field_308 == false) {
            field_304 = -1;
        }
    }

    // 0x100682140, 80 bytes, placed by class name
    // ConsoleEditLine::WordRight()
    void ConsoleEditLine::WordRight() {
        int extraout_EDX;
        StringView SVar2;
        StringView local_28;

        if (field_308 == false) {
            field_304 = -1;
        }
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_28,
                                                                                      (fixed_string*)&field_8);
        SVar2.field_8._0_4_ = m_pos;
        SVar2.field_0 = (ulong)&local_28;
        SVar2.field_8._4_4_ = 0;
        m_pos = ScanNextWordStart(SVar2, extraout_EDX);
    }

    // 0x100682190, 112 bytes, placed by class name
    // ConsoleEditLine::Right()
    void ConsoleEditLine::Right() {
        int iVar1;
        int iVar2;

        iVar1 = field_304;
        if (field_308 == false) {
            if (iVar1 != -1) {
                iVar1 = eastl::max<int>(iVar1, m_pos);
                m_pos = iVar1;
                goto LAB_1006821e1;
            }
        } else if (iVar1 == -1) {
            field_304 = m_pos;
        }
        iVar1 = m_pos;
        iVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (iVar1 < iVar2) {
            m_pos = m_pos + 1;
        }
    LAB_1006821e1:
        if (field_308 == false) {
            field_304 = -1;
        }
    }

    // 0x100682200, 64 bytes, placed by class name
    // ConsoleEditLine::DelWordRight()
    void ConsoleEditLine::DelWordRight() {
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

    // 0x100682240, 64 bytes, placed by class name
    // ConsoleEditLine::Delete()
    void ConsoleEditLine::Delete() {
        if (DeleteSelection(this) == '\0') {
            (&field_8, (long)m_pos, 1, 0, ' ')->replace();
        }
    }

    // 0x100682280, 80 bytes, placed by class name
    // ConsoleEditLine::DelWordLeft()
    void ConsoleEditLine::DelWordLeft() {
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

    // 0x1006822d0, 128 bytes, placed by class name
    // ConsoleEditLine::Backspace()
    void ConsoleEditLine::Backspace() {
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

    // 0x100682350, 32 bytes, placed by class name
    // ConsoleEditLine::HandleKeyUp(int)
    undefined8 ConsoleEditLine::HandleKeyUp(int param_1) {
        if (param_1 == 49) {
            return 1;
        }
        if (param_1 == 56) {
            field_308 = false;
        }
        return 0;
    }

    // 0x100682370, 128 bytes, placed by class name
    // ConsoleEditLine::DeleteSelection()
    undefined8 ConsoleEditLine::DeleteSelection() {
        int iVar1;
        int iVar2;

        if (field_304 != -1) {
            field_308 = false;
            if (field_304 != m_pos) {
                iVar1 = eastl::min<graphics::GraphicsQuality>();
                iVar2 = eastl::max<int>(m_pos, field_304);
                (&field_8, (long)iVar1, (long)(iVar2 - iVar1), 0, ' ')->replace();
                field_304 = -1;
                m_pos = iVar1;
                return 1;
            }
            field_304 = -1;
        }
        return 0;
    }

    // 0x1006823f0, 112 bytes, placed by class name
    // ConsoleEditLine::ValidatePosition()
    void ConsoleEditLine::ValidatePosition() {
        undefined4 uVar1;
        int iVar2;

        iVar2 = m_pos;
        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, uVar1);
        iVar2 = eastl::max<int>(0, iVar2);
        m_pos = iVar2;
        iVar2 = field_304;
        if (iVar2 != -1) {
            uVar1 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, uVar1);
            iVar2 = eastl::max<int>(0, iVar2);
            field_304 = iVar2;
        }
    }

} // namespace jag::ui

namespace jag::tweak {
    // 0x100681af0: the linker folded this into ui::ConsoleEditLine::SupportsKeyChar(int), which has identical code
    EditLine::SupportsKeyChar(int);

    // 0x100682030: the linker folded this into ui::ConsoleEditLine::Home(), which has identical code
    EditLine::Home();

    // 0x100682060: the linker folded this into ui::ConsoleEditLine::End(), which has identical code
    EditLine::End();

} // namespace jag::tweak
