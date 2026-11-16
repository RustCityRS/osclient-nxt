// libs/oldscape/rs2lib/util/InputField.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "InputField.h"

namespace jag::oldscape::rs2lib {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    InputField::GetContents() const;

    // 0x1001fc6f0, 272 bytes, base-object constructor, placed by class name and debug map
    // InputField::InputField()
    void InputField::InputField() {
        new (this) jag::graphics::TextRun();
        new (field_80) jag::graphics::TextRun();
        m_hasFocus = '\0';
        m_focusAllowed = true;
        field_162 = 0;
        field_163 = 0;
        field_168 = 0;
        field_176 = 0;
        field_180 = 0;
        field_184 = 0;
        field_188 = 0;
        field_192 = 0;
        field_200 = 0;
        field_208 = 0;
        *(undefined8*)((long)&field_208 + 4) = 0;
        *(undefined8*)((long)&field_216 + 4) = 0;
        field_228 = 4294967295;
        m_characterLimit = 4294967295;
        field_240 = 0;
        field_244 = 0;
        field_248 = 0;
        field_252 = 0;
        std::function<void()>::function((_func_decltype_nullptr*)&field_256);
        std::function<void()>::function((_func_decltype_nullptr*)&field_304);
        SetWrapMode(1);
        (field_80, 1)->SetWrapMode();
    }

    // 0x1001fc830, 16 bytes, complete-object constructor, placed by class name
    // InputField::InputField(): jumps straight to the base-object constructor

    // 0x1001fc840, 144 bytes, placed by class name
    // InputField::MainLogic()
    void InputField::MainLogic() {
        int iVar1;
        int iVar2;

        if (field_162 != '\0') {
            if (field_163 == '\0') {
                field_163 = 1;
            } else {
                field_162 = 0;
                field_163 = 0;
                MouseHoldRelease(this);
            }
        }
        iVar1 = field_176;
        iVar2 = (int)((ulong)((long)(iVar1 + 1) * -2004318071) >> 32) + iVar1 + 1;
        field_176 = iVar1 + ((iVar2 >> 5) - (iVar2 >> 31)) * -60 + 1;
        if (0 < field_224) {
            field_224 = field_224 + -1;
        }
    }

    // 0x1001fc8d0, 48 bytes, placed by class name
    // InputField::MouseHoldRelease()
    void InputField::MouseHoldRelease() {
        ulonglong uVar1;

        uVar1 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        if (332 < uVar1 - field_168) {
            ShowEditMenu((InputField*)this);
        }
    }

    // 0x1001fc900, 240 bytes, placed by class name
    // InputField::SetFocus(bool)
    bool InputField::SetFocus(bool param_1) {
        char cVar1;
        BaseApp* this_00;
        undefined7 in_register_00000031;
        char cVar2;
        __0 local_e0;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            cVar2 = '\0';
        } else {
            cVar2 = m_focusAllowed;
        }
        cVar1 = m_hasFocus;
        m_hasFocus = cVar2;
        this_00 = (BaseApp*)BaseApp::GetAppInstance();
        if (this_00 != (BaseApp*)0) {
            local_e0.field_0 = this;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                InputField::SetFocus(bool)::__0, void>(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_e0);
            this_00->QueueMainThreadEvent(&local_d8);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        if (m_hasFocus == '\0') {
            SetSelection(this, field_200, field_200);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return cVar1 != cVar2;
    }

    // 0x1001fca00, 208 bytes, placed by class name
    // InputField::SetSelection(unsigned long, unsigned long)
    ulong InputField::SetSelection(ulong param_1, ulong param_2) {
        ulong uVar3;
        undefined8 unaff_R12;
        undefined7 uVar4;

        if (Is64BitOS() == '\0') {
            field_208 = param_1;
            field_200 = param_2;
            uVar3 = 0;
        } else {
            uVar3 = GetCodepointCount();
            if (uVar3 < param_1) {
                param_1 = GetCodepointCount();
            }
            uVar3 = GetCodepointCount();
            if (uVar3 < param_2) {
                param_2 = GetCodepointCount();
            }
            uVar4 = (undefined7)((ulong)unaff_R12 >> 8);
            uVar3 = CONCAT71(uVar4, 1);
            if (field_208 == param_1) {
                uVar3 = CONCAT71(uVar4, field_200 != param_2);
            }
            field_208 = param_1;
            if (field_200 != param_2) {
                field_200 = param_2;
                field_176 = 0;
                UpdateScrollCaretVisible(this);
            }
            if ((char)uVar3 != '\0') {
                if ((&field_304)->operator_cast_to_bool()) {
                    std::function<void()>::operator()((function<void()>*)&field_304);
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1001fcad0, 48 bytes, placed by class name
    // InputField::SetFocusAllowed(bool)
    void InputField::SetFocusAllowed(bool param_1) {
        char cVar1;
        undefined3 in_register_00000031;

        m_focusAllowed = param_1;
        if (CONCAT31(in_register_00000031, param_1) == 0) {
            cVar1 = '\0';
        } else {
            cVar1 = m_hasFocus;
        }
        m_hasFocus = cVar1;
    }

    // 0x1001fcb00, 272 bytes, placed by class name
    // InputField::SetText(eastl::string)
    ulong InputField::SetText(eastl::string* param_2) {
        int iVar1;
        ulong uVar2;
        char* pcVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* pcVar6;
        basic_string local_40[24];

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        ConvertToUTF8(local_40);
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar1 = local_40->compare(0, uVar2, pcVar3);
        if (iVar1 != 0) {
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
            pcVar3 = eastl::remove_if<char*, (eastl::string)->SetText()::__1>(uVar4, uVar5, this);
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            eastl::string::erase(param_2, pcVar3, pcVar6);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            Set(pcVar3, uVar2);
            SetScroll(this, field_248, field_252);
            CropToLimits(this);
            OnTextChanged(this);
        }
        local_40->~basic_string();
        return CONCAT71((int7)((ulong)param_2 >> 8), iVar1 != 0) & 4294967295;
    }

    // 0x1001fcc90, 224 bytes, placed by class name
    // InputField::SetScroll(int, int)
    undefined8 InputField::SetScroll(int param_1, int param_2) {
        uint uVar1;
        int iVar2;
        int iVar4;
        undefined4 extraout_var;
        undefined8 uVar6;
        int local_34;
        int local_30;
        uint local_2c;
        int local_28[2];

        local_2c = param_1;
        local_28[0] = param_2;
        if (Is64BitOS() == '\0') {
            field_248 = local_2c;
            field_252 = local_28[0];
            uVar6 = 0;
        } else {
            uVar1 = field_248;
            iVar2 = field_252;
            iVar4 = GetWidth();
            local_34 = eastl::max<int>(0, (iVar4 - field_240) + 2);
            iVar4 = GetHeight();
            local_30 = eastl::max<int>(0, (iVar4 - field_244) + 1);
            local_28[1] = 0;
            field_248 = jag::math::Clamp<int>((int*)&local_2c, local_28 + 1, &local_34);
            local_28[1] = 0;
            iVar4 = jag::math::Clamp<int>(local_28, local_28 + 1, &local_30);
            field_252 = iVar4;
            uVar6 = CONCAT71((int7)(CONCAT44(extraout_var, iVar4) >> 8), iVar2 != iVar4 || uVar1 != field_248);
        }
        return uVar6;
    }

    // 0x1001fcd70, 288 bytes, placed by class name
    // InputField::CropToLimits()
    ulong InputField::CropToLimits() {
        uint uVar2;
        int iVar3;
        ulong uVar4;
        long lVar5;
        char* pcVar6;
        ulong uVar7;
        undefined8 unaff_R14;
        ulong uVar8;
        ulong uVar9;
        basic_string local_40[24];

        if (Is64BitOS() == '\0') {
            uVar8 = 0;
        } else {
            uVar4 = GetCodepointCount();
            uVar9 = m_characterLimit;
            uVar8 = CONCAT71((int7)((ulong)unaff_R14 >> 8), uVar9 < uVar4);
            if (uVar9 < uVar4) {
                uVar4 = GetCodepointCount();
                Remove(uVar9, uVar4);
            }
            uVar2 = GetAlphaTestThreshold();
            iVar3 = GetNumLines();
            if ((int)(uVar2 & 255) < iVar3) {
                lVar5 = GetIndexAtLineOffset(0, uVar2 & 255);
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
                ConvertToUTF8(local_40);
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                Set(pcVar6, lVar5 - 1U);
                local_40->~basic_string();
                uVar8 = CONCAT71((int7)(lVar5 - 1U >> 8), 1);
            }
            if ((char)uVar8 != '\0') {
                uVar9 = field_200;
                uVar4 = field_208;
                uVar7 = GetCodepointCount();
                if (uVar7 < field_200) {
                    uVar9 = uVar7;
                }
                if (uVar7 < field_208) {
                    uVar4 = uVar7;
                }
                SetSelection(this, uVar4, uVar9);
            }
        }
        return uVar8 & 4294967295;
    }

    // 0x1001fce90, 48 bytes, placed by class name
    // InputField::OnTextChanged()
    void InputField::OnTextChanged() {
        if ((&field_256)->operator_cast_to_bool()) {
            std::function<void()>::operator()((function<void()>*)&field_256);
        }
    }

    // 0x1001fcec0, 80 bytes, placed by class name
    // InputField::SetPlaceholderText(eastl::string const&)
    undefined1 InputField::SetPlaceholderText(basic_string* param_1) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        ((param_1 + 80))->Set(pcVar1, uVar2);
        return 1;
    }

    // 0x1001fcf10, 208 bytes, placed by class name
    // InputField::SetFont(jstring::PixfontGeneric const&)
    ulong InputField::SetFont(PixfontGeneric* param_1) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        undefined8 unaff_R14;
        undefined7 uVar6;
        ulong uVar5;
        OldScapeFontMetricConverter local_38;

        bVar1 = field_180;
        uVar6 = (undefined7)((ulong)unaff_R14 >> 8);
        local_38.Convert(0, param_1);
        SetFontMetrics((shared_ptr*)&local_38);
        (field_80, (shared_ptr*)&local_38)->SetFontMetrics();
        field_180 = 1;
        bVar2 = SetScroll(this, field_248, field_252);
        bVar3 = SetSelection(this, field_208, field_200);
        if (CropToLimits(this) == '\0') {
            uVar5 = CONCAT71(uVar6, bVar1 ^ 1 | bVar2 | bVar3);
        } else {
            uVar5 = CONCAT71(uVar6, 1);
            OnTextChanged(this);
        }
        local_38.~shared_ptr();
        return uVar5 & 4294967295;
    }

    // 0x1001fcfe0, 80 bytes, placed by class name
    // InputField::SetSize(int, int)
    byte InputField::SetSize(int param_1, int param_2) {
        bool bVar2;

        bVar2 = true;
        if (field_240 == param_1) {
            bVar2 = field_244 != param_2;
        }
        field_240 = param_1;
        field_244 = param_2;
        return SetScroll(this, field_248, field_252) | bVar2;
    }

    // 0x1001fd030, 96 bytes, placed by class name
    // InputField::SetMaxLineWidth(int)
    ulong InputField::SetMaxLineWidth(int param_1) {
        int iVar2;
        int iVar3;
        undefined8 unaff_R14;
        undefined7 uVar5;
        ulong uVar4;

        iVar3 = 2147483647;
        if ((uint)param_1 < 2147483647) {
            iVar3 = param_1;
        }
        iVar2 = GetMaxLineWidth();
        uVar5 = (undefined7)((ulong)unaff_R14 >> 8);
        uVar4 = CONCAT71(uVar5, iVar3 == iVar2);
        SetMaxLineWidth(iVar3);
        (field_80, iVar3)->SetMaxLineWidth();
        if (CropToLimits(this) != '\0') {
            OnTextChanged(this);
            uVar4 = CONCAT71(uVar5, 1);
        }
        return uVar4 & 4294967295;
    }

    // 0x1001fd090, 48 bytes, placed by class name
    // InputField::SetMaxLineCount(unsigned char)
    undefined4 InputField::SetMaxLineCount(uchar param_1) {
        undefined4 uVar1;

        SetMaxLineCount(param_1);
        uVar1 = CropToLimits(this);
        if ((char)uVar1 != '\0') {
            OnTextChanged(this);
        }
        return uVar1;
    }

    // 0x1001fd0c0, 48 bytes, placed by class name
    // InputField::SetCharacterLimit(unsigned long)
    undefined4 InputField::SetCharacterLimit(ulong param_1) {
        undefined4 uVar1;

        m_characterLimit = param_1;
        uVar1 = CropToLimits(this);
        if ((char)uVar1 != '\0') {
            OnTextChanged(this);
        }
        return uVar1;
    }

    // 0x1001fd0f0, 176 bytes, placed by class name
    // InputField::SetAlignment(int, int)
    undefined4 InputField::SetAlignment(int param_1, int param_2) {
        undefined8 in_RAX;
        undefined8 uVar1;
        undefined4 uVar2;
        undefined4 uVar4;
        undefined8 uVar3;

        uVar4 = (undefined4)((ulong)in_RAX >> 32);
        if (2 < (uint)param_1) {
            uVar1 = logger::default_logger();
            uVar3 = CONCAT44(uVar4, param_1);
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "util/InputField.cpp",
                                200, "InputField::SetAlignment: Invalid horizontal alignment. Given value: \'%d\'",
                                uVar3);
            uVar4 = (undefined4)((ulong)uVar3 >> 32);
        }
        if ((uint)param_2 < 3) {
            if ((uint)param_1 < 3) {
                uVar2 = SetAlignment(param_1, param_2);
            } else {
                uVar2 = 0;
            }
        } else {
            uVar1 = logger::default_logger();
            uVar2 = 0;
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "util/InputField.cpp",
                                207, "InputField::SetAlignment: Invalid vertical alignment. Given value: \'%d\'",
                                CONCAT44(uVar4, param_2));
        }
        return uVar2;
    }

    // 0x1001fd1a0, 272 bytes, placed by class name
    // InputField::SetInputFilter(InputFieldFilter)
    ulong InputField::SetInputFilter(undefined4 param_2) {
        long lVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        char* pcVar5;
        long lVar6;
        ulong uVar7;
        basic_string local_48[24];

        field_192 = param_2;
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        ConvertToUTF8(local_48);
        lVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        pcVar4 = eastl::remove_if<char*, (InputFieldFilter)->SetInputFilter()::__2>(uVar2, uVar3, this);
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_48->erase(pcVar4, pcVar5);
        lVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar6 != lVar1) {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar7 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            Set(pcVar4, uVar7);
            SetScroll(this, field_248, field_252);
            CropToLimits(this);
            OnTextChanged(this);
        }
        local_48->~basic_string();
        return CONCAT71((int7)((ulong)pcVar4 >> 8), lVar6 != lVar1) & 4294967295;
    }

    // 0x1001fd2f0, 352 bytes, placed by class name
    // InputField::UpdateScrollCaretVisible()
    void InputField::UpdateScrollCaretVisible() {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined8 uVar4;
        vector* pvVar5;
        int* piVar6;
        type* ptVar7;
        uint uVar8;
        undefined1 local_78[32];
        GridRect local_58;
        int local_44;
        Layout local_40[16];

        local_78->Slice((ulong)this, 0);
        uVar4 = local_78->GetLastCursorPosition();
        iVar1 = GetLineHeight();
        new (local_40) dash3d::GridRect((int)uVar4 + -10, (int)((ulong)uVar4 >> 32) + -3, 20, iVar1 + 6);
        ptVar7 = (type*)(ulong)field_248;
        new (&local_58) dash3d::GridRect(field_248, field_252, field_240, field_244);
        uVar8 = field_248;
        local_44 = field_252;
        pvVar5 = eastl::string::Layout::SSOBeginPtr(local_40, ptVar7);
        iVar1 = *(int*)pvVar5;
        pvVar5 = local_58.SSOBeginPtr(ptVar7);
        if (iVar1 < *(int*)pvVar5) {
            pvVar5 = eastl::string::Layout::SSOBeginPtr(local_40, ptVar7);
            uVar8 = *(uint*)pvVar5;
        } else {
            iVar1 = local_40->Right();
            iVar2 = local_58.Right();
            if (iVar2 < iVar1) {
                iVar1 = local_40->Right();
                uVar8 = iVar1 - field_240;
            }
        }
        piVar6 = (int*)local_40->y();
        iVar1 = *piVar6;
        piVar6 = (int*)local_58.y();
        if (iVar1 < *piVar6) {
            piVar6 = (int*)local_40->y();
            iVar1 = *piVar6;
        } else {
            iVar2 = local_40->MaxZ();
            iVar3 = local_58.MaxZ();
            iVar1 = local_44;
            if (iVar3 < iVar2) {
                iVar1 = local_40->MaxZ();
                iVar1 = iVar1 - field_244;
            }
        }
        SetScroll(this, uVar8, iVar1);
    }

    // 0x1001fd460, 176 bytes, placed by class name
    // InputField::GetWord(unsigned long)
    undefined1[16] InputField::GetWord(ulong param_1) {
        undefined1 auVar1[16];
        char cVar2;
        uint* puVar3;
        long lVar4;
        long local_40;
        ulong local_38;
        int local_2c;
        ulong local_28;

        local_28 = GetCodepointCount();
        local_2c = 0;
        std::pair<unsigned long, unsigned long>::pair<int, unsigned long&, false>(
            (pair<unsigned long, unsigned long>*)&local_40, &local_2c, &local_28);
        lVar4 = param_1 + 1;
        do {
            if (lVar4 == 1)
                goto LAB_1001fd4c8;
            puVar3 = (uint*)GetCharacter(lVar4 - 2);
            cVar2 = IsWordBreakChar(this, *puVar3);
            lVar4 = lVar4 + -1;
        } while (cVar2 == '\0');
        local_40 = lVar4;
    LAB_1001fd4c8:
        if (param_1 < local_28) {
            do {
                puVar3 = (uint*)GetCharacter(param_1);
                cVar2 = IsWordBreakChar(this, *puVar3);
                if (cVar2 != '\0') {
                    local_38 = param_1;
                    break;
                }
                param_1 = param_1 + 1;
            } while (param_1 < local_28);
        }
        auVar1._8_8_ = local_38;
        auVar1._0_8_ = local_40;
        return auVar1;
    }

    // 0x1001fd590, 176 bytes, placed by class name
    // InputField::GetLine(unsigned long)
    undefined1[16] InputField::GetLine(ulong param_1) {
        undefined1 auVar1[16];
        int* piVar2;
        long lVar3;
        long local_40;
        ulong local_38;
        int local_2c;
        ulong local_28;

        local_28 = GetCodepointCount();
        local_2c = 0;
        std::pair<unsigned long, unsigned long>::pair<int, unsigned long&, false>(
            (pair<unsigned long, unsigned long>*)&local_40, &local_2c, &local_28);
        lVar3 = param_1 + 1;
        do {
            if (lVar3 == 1)
                goto LAB_1001fd5ef;
            piVar2 = (int*)GetCharacter(lVar3 - 2);
            lVar3 = lVar3 + -1;
        } while (*piVar2 != 10);
        local_40 = lVar3;
    LAB_1001fd5ef:
        if (param_1 < local_28) {
            do {
                piVar2 = (int*)GetCharacter(param_1);
                if (*piVar2 == 10) {
                    local_38 = param_1;
                    break;
                }
                param_1 = param_1 + 1;
            } while (param_1 < local_28);
        }
        auVar1._8_8_ = local_38;
        auVar1._0_8_ = local_40;
        return auVar1;
    }

    // 0x1001fd640, 384 bytes, placed by class name
    // InputField::MouseDown(int, int, bool, bool)
    void InputField::MouseDown(int param_1, int param_2, bool param_3, bool param_4) {
        uint uVar1;
        int iVar2;
        undefined8 uVar3;
        ulong uVar4;
        undefined1 auVar5[16];
        undefined1 auVar6[16];

        if (field_180 == 0) {
            uVar4 = 0;
        } else {
            uVar1 = field_248;
            iVar2 = field_252;
            uVar3 = GetOriginForCurrentAlignment(this);
            uVar4 = GetIndexAtPos((param_1 + uVar1) - (int)uVar3, (param_2 + iVar2) - (int)((ulong)uVar3 >> 32));
        }
        if ((param_3) && (param_4)) {
            field_188 = 1;
            auVar6 = GetWord(this, uVar4);
            auVar5 = GetWord(this, field_216);
            CombineSelection(this, auVar5._0_8_, auVar5._8_8_, auVar6._0_8_, auVar6._8_8_);
        } else if (param_3) {
            field_188 = 1;
            SelectWord(this, uVar4);
        } else if (param_4) {
            SetSelection(this, field_216, uVar4);
        } else {
            if ((field_224 < 1) || (uVar4 != field_216)) {
                field_188 = 0;
                SetSelection(this, uVar4, uVar4);
                field_216 = uVar4;
            } else {
                if (field_208 == field_200) {
                    field_188 = 1;
                    auVar6 = GetWord(this, uVar4);
                } else {
                    field_188 = 2;
                    auVar6 = GetLine(this, uVar4);
                }
                SetSelection(this, auVar6._0_8_, auVar6._8_8_);
            }
            field_224 = 25;
        }
    }

    // 0x1001fd7c0, 64 bytes, placed by class name
    // InputField::GetOriginForCurrentAlignment() const
    void InputField::GetOriginForCurrentAlignment() {
        undefined4 uVar1;
        int in_register_00000004;
        int local_18;
        int local_14;

        local_14 = in_register_00000004;
        uVar1 = GetLeftOffsetForHorizontalAlignment(field_240);
        _local_18 = CONCAT44(local_14, uVar1);
        uVar1 = GetTopOffsetForVerticalAlignment(field_244);
        _local_18 = CONCAT44(uVar1, local_18);
        std::make_pair<int const&, int const&>(&local_18, &local_14);
    }

    // 0x1001fd800, 32 bytes, placed by class name
    // InputField::CombineSelection(std::pair<unsigned long, unsigned long>, std::pair<unsigned long, unsigned long>)
    /* InputField::CombineSelection(std::pair<unsigned long, unsigned long>,
   std::pair<unsigned long, unsigned long>) */

    void InputField::CombineSelection(InputField* param_1, ulong param_2, ulong param_3, ulong param_4, ulong param_5) {
        if (param_4 < param_2) {
            param_5 = param_4;
            param_2 = param_3;
        }
        SetSelection(param_1, param_2, param_5);
    }

    // 0x1001fd820, 48 bytes, placed by class name
    // InputField::SelectWord(unsigned long)
    void InputField::SelectWord(ulong param_1) {
        undefined1 auVar1[16];

        auVar1 = GetWord(this, param_1);
        SetSelection(this, auVar1._0_8_, auVar1._8_8_);
        field_216 = auVar1._0_8_;
    }

    // 0x1001fd850, 272 bytes, placed by class name
    // InputField::MouseHeld(int, int)
    void InputField::MouseHeld(int param_1, int param_2) {
        uint uVar1;
        int iVar2;
        char cVar3;
        undefined8 uVar5;
        ulong uVar6;
        undefined1 auVar7[16];
        undefined1 auVar8[16];

        if (field_162 == '\0') {
            field_168 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this);
        }
        field_162 = 1;
        field_163 = 0;
        if ((field_180 != 0) && (cVar3 = HasFocus(this), cVar3 != '\0')) {
            uVar1 = field_248;
            iVar2 = field_252;
            uVar5 = GetOriginForCurrentAlignment(this);
            uVar6 = GetIndexAtPos((param_1 + uVar1) - (int)uVar5, (param_2 + iVar2) - (int)((ulong)uVar5 >> 32));
            iVar2 = field_188;
            if (iVar2 == 2) {
                auVar7 = GetLine(this, field_216);
                auVar8 = GetLine(this, uVar6);
            } else {
                if (iVar2 != 1) {
                    if (iVar2 == 0) {
                        SetSelection(this, field_208, uVar6);
                        return;
                    }
                    return;
                }
                auVar7 = GetWord(this, field_216);
                auVar8 = GetWord(this, uVar6);
            }
            CombineSelection(this, auVar7._0_8_, auVar7._8_8_, auVar8._0_8_, auVar8._8_8_);
        }
    }

    // 0x1001fd960, 64 bytes, placed by class name
    // InputField::ShowEditMenu()
    void InputField::ShowEditMenu() {
        long* plVar2;
        Input* this_00;

        plVar2 = (long*)BaseApp::GetAppInstance();
        if (plVar2 != (long*)0) {
            this_00 = (Input*)(**(code**)(*plVar2 + 88))(plVar2);
            if (this_00 != (Input*)0) {
                if (this_00->IsOnScreenKeyboardVisible() != '\0') {
                    jag::input::Input::ShowEditMenu();
                }
            }
        }
    }

    // 0x1001fd9a0, 32 bytes, placed by class name
    // InputField::DoCursorKey(unsigned long, bool)
    void InputField::DoCursorKey(ulong param_1, bool param_2) {
        undefined7 in_register_00000011;
        ulong uVar1;

        uVar1 = param_1;
        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar1 = field_208;
        }
        SetSelection(this, uVar1, param_1);
    }

    // 0x1001fd9c0, 144 bytes, placed by class name
    // InputField::IsCharAllowed(unsigned int)
    ulong InputField::IsCharAllowed(uint param_1) {
        char cVar1;
        uint uVar2;
        undefined8 unaff_RBX;
        undefined7 uVar4;
        ulong uVar3;

        uVar4 = (undefined7)((ulong)unaff_RBX >> 8);
        uVar3 = CONCAT71(uVar4, 1);
        cVar1 = (char)param_1;
        switch (field_192) {
        case 1:
            uVar2 = is_ascii_alpha_numeric(cVar1);
            break;
        case 2:
            uVar2 = is_ascii_alpha(cVar1);
            break;
        case 3:
            uVar2 = is_ascii_numeric(cVar1);
            break;
        case 4:
            cVar1 = is_ascii_numeric(cVar1);
            if (cVar1 == '\0') {
                uVar3 = CONCAT71(uVar4, ((param_1 & 223) - 75 & 4294967293) == 0);
            }
        default:
            goto switchD_1001fd9e8_default;
        }
        uVar3 = (ulong)uVar2;
    switchD_1001fd9e8_default:
        return uVar3 & 4294967295;
    }

    // 0x1001fdae0, 112 bytes, placed by class name
    // InputField::TypeCharacter(unsigned int)
    undefined1 InputField::TypeCharacter(uint param_1) {
        ulong uVar2;
        uint local_14;

        if (IsCharAllowed(this, param_1) != '\0') {
            RemoveSelection(this);
            uVar2 = InsertCodepoints(&local_14, 1, field_200, (ulong)field_228);
            SetSelection(this, uVar2, uVar2);
            CropToLimits(this);
            OnTextChanged(this);
        }
        return 1;
    }

    // 0x1001fdb50, 96 bytes, placed by class name
    // InputField::RemoveSelection()
    undefined4 InputField::RemoveSelection() {
        undefined4 uVar1;
        ulong uVar2;

        uVar1 = HasSelection(this);
        if ((char)uVar1 != '\0') {
            uVar2 = Remove(field_208, field_200);
            OnTextChanged(this);
            SetSelection(this, uVar2, uVar2);
            field_216 = uVar2;
        }
        return uVar1;
    }

    // 0x1001fdbb0, 48 bytes, placed by class name
    // InputField::SelectAll()
    void InputField::SelectAll() {
        ulong uVar1;

        uVar1 = GetCodepointCount();
        SetSelection(this, 0, uVar1);
    }

    // 0x1001fdbe0, 32 bytes, placed by class name
    // InputField::SelectWord()
    void InputField::SelectWord() {
        SelectWord(this, field_200);
    }

    // 0x1001fdc30, 80 bytes, placed by class name
    // InputField::Backspace()
    void InputField::Backspace() {
        ulong uVar1;

        if ((RemoveSelection(this) == '\0') && (field_200 != 0)) {
            uVar1 = Remove(field_200 - 1);
            OnTextChanged(this);
            SetSelection(this, uVar1, uVar1);
        }
    }

    // 0x1001fdc80, 96 bytes, placed by class name
    // InputField::Delete()
    void InputField::Delete() {
        ulong uVar1;
        ulong uVar2;

        if (RemoveSelection(this) == '\0') {
            uVar1 = field_200;
            uVar2 = GetCodepointCount();
            if (uVar1 < uVar2) {
                uVar1 = Remove(field_200);
                OnTextChanged(this);
                SetSelection(this, uVar1, uVar1);
            }
        }
    }

    // 0x1001fdce0, 96 bytes, placed by class name
    // InputField::BackspaceWord()
    void InputField::BackspaceWord() {
        ulong uVar1;

        if ((RemoveSelection(this) == '\0') && (field_200 != 0)) {
            uVar1 = GetWord(this, field_200 - 1);
            uVar1 = Remove(uVar1, field_200);
            OnTextChanged(this);
            SetSelection(this, uVar1, uVar1);
        }
    }

    // 0x1001fdd40, 112 bytes, placed by class name
    // InputField::DeleteWord()
    void InputField::DeleteWord() {
        ulong uVar1;
        ulong uVar2;
        ulong extraout_RDX;

        if (RemoveSelection(this) == '\0') {
            uVar1 = field_200;
            uVar2 = GetCodepointCount();
            if (uVar1 < uVar2) {
                GetWord(this, field_200);
                uVar1 = Remove(field_200, extraout_RDX);
                OnTextChanged(this);
                SetSelection(this, uVar1, uVar1);
            }
        }
    }

    // 0x1001fddb0, 48 bytes, placed by class name
    // InputField::LineHome(bool)
    void InputField::LineHome(bool param_1) {
        ulong uVar1;

        uVar1 = GetLine(this, field_200);
        DoCursorKey(this, uVar1, param_1);
    }

    // 0x1001fdde0, 48 bytes, placed by class name
    // InputField::LineEnd(bool)
    void InputField::LineEnd(bool param_1) {
        ulong extraout_RDX;

        GetLine(this, field_200);
        DoCursorKey(this, extraout_RDX, param_1);
    }

    // 0x1001fde10, 16 bytes, placed by class name
    // InputField::FullHome(bool)
    void InputField::FullHome(bool param_1) {
        DoCursorKey(this, 0, param_1);
    }

    // 0x1001fde20, 48 bytes, placed by class name
    // InputField::FullEnd(bool)
    void InputField::FullEnd(bool param_1) {
        ulong uVar1;

        uVar1 = GetCodepointCount();
        DoCursorKey(this, uVar1, param_1);
    }

    // 0x1001fde50, 96 bytes, placed by class name
    // InputField::Left(bool)
    void InputField::Left(bool param_1) {
        ulong uVar2;

        if ((HasSelection(this) == '\0') || (param_1)) {
            if (field_200 == 0) {
                return;
            }
            uVar2 = field_200 - 1;
        } else {
            uVar2 = eastl::min_alt<unsigned long>(field_208, field_200);
            param_1 = false;
        }
        DoCursorKey(this, uVar2, param_1);
    }

    // 0x1001fdeb0, 128 bytes, placed by class name
    // InputField::Right(bool)
    void InputField::Right(bool param_1) {
        ulong uVar3;

        if ((HasSelection(this) == '\0') || (param_1)) {
            uVar3 = field_200;
            if (GetCodepointCount() <= uVar3) {
                return;
            }
            uVar3 = field_200 + 1;
        } else {
            uVar3 = eastl::max<unsigned long>(field_208, field_200);
            param_1 = false;
        }
        DoCursorKey(this, uVar3, param_1);
    }

    // 0x1001fdf30, 64 bytes, placed by class name
    // InputField::WordLeft(bool)
    void InputField::WordLeft(bool param_1) {
        ulong uVar1;

        if (field_200 != 0) {
            uVar1 = GetWord(this, field_200 - 1);
            DoCursorKey(this, uVar1, param_1);
        }
    }

    // 0x1001fdf70, 80 bytes, placed by class name
    // InputField::WordRight(bool)
    void InputField::WordRight(bool param_1) {
        ulong uVar1;
        ulong uVar2;
        ulong extraout_RDX;

        uVar1 = field_200;
        uVar2 = GetCodepointCount();
        if (uVar1 < uVar2) {
            GetWord(this, field_200 + 1);
            DoCursorKey(this, extraout_RDX, param_1);
        }
    }

    // 0x1001fdfc0, 64 bytes, placed by class name
    // InputField::Up(bool)
    void InputField::Up(bool param_1) {
        ulong uVar1;

        if (field_200 != 0) {
            uVar1 = GetIndexAtLineOffset(field_200, -1);
            DoCursorKey(this, uVar1, param_1);
        }
    }

    // 0x1001fe000, 80 bytes, placed by class name
    // InputField::Down(bool)
    void InputField::Down(bool param_1) {
        ulong uVar1;
        ulong uVar2;

        uVar2 = field_200;
        uVar1 = GetCodepointCount();
        if (uVar2 < uVar1) {
            uVar2 = GetIndexAtLineOffset(field_200, 1);
            DoCursorKey(this, uVar2, param_1);
        }
    }

    // 0x1001fe050, 80 bytes, placed by class name
    // InputField::PageUp(bool)
    void InputField::PageUp(bool param_1) {
        int iVar1;
        ulong uVar2;

        if (field_200 != 0) {
            iVar1 = GetNumVisibleLines(this);
            uVar2 = GetIndexAtLineOffset(field_200, -iVar1);
            DoCursorKey(this, uVar2, param_1);
        }
    }

    // 0x1001fe0c0, 96 bytes, placed by class name
    // InputField::PageDown(bool)
    void InputField::PageDown(bool param_1) {
        ulong uVar1;
        ulong uVar2;
        int iVar3;

        uVar1 = field_200;
        uVar2 = GetCodepointCount();
        if (uVar1 < uVar2) {
            iVar3 = GetNumVisibleLines(this);
            uVar1 = GetIndexAtLineOffset(field_200, iVar3);
            DoCursorKey(this, uVar1, param_1);
        }
    }

    // 0x1001fe120, 96 bytes, placed by class name
    // InputField::PageUpNoScroll(bool)
    void InputField::PageUpNoScroll(bool param_1) {
        ulong uVar1;
        int iVar2;
        undefined1 local_40[32];

        local_40->Slice((ulong)this, 0);
        iVar2 = local_40->GetLastCursorPosition();
        uVar1 = GetIndexAtPos(iVar2, field_252);
        DoCursorKey(this, uVar1, param_1);
    }

    // 0x1001fe180, 112 bytes, placed by class name
    // InputField::PageDownNoScroll(bool)
    void InputField::PageDownNoScroll(bool param_1) {
        ulong uVar1;
        int iVar2;
        undefined1 local_40[32];

        local_40->Slice((ulong)this, 0);
        iVar2 = local_40->GetLastCursorPosition();
        uVar1 = GetIndexAtPos(iVar2, field_244 + field_252);
        DoCursorKey(this, uVar1, param_1);
    }

    // 0x1001fe1f0, 48 bytes, placed by class name
    // InputField::ScrollUpOneLine()
    void InputField::ScrollUpOneLine() {
        int iVar1;
        int iVar2;

        iVar2 = field_252;
        iVar1 = GetLineHeight();
        iVar2 = eastl::max<int>(0, iVar2 - iVar1);
        field_252 = iVar2;
    }

    // 0x1001fe220, 96 bytes, placed by class name
    // InputField::ScrollDownOneLine()
    void InputField::ScrollDownOneLine() {
        int iVar1;
        undefined4 uVar2;
        int iVar3;

        iVar1 = GetHeight();
        uVar2 = eastl::max<int>(0, iVar1 - field_244);
        iVar1 = field_252;
        iVar3 = GetLineHeight();
        iVar1 = eastl::min<jag::graphics::GraphicsQuality>(uVar2, iVar1 + iVar3);
        field_252 = iVar1;
    }

    // 0x1001fe280, 176 bytes, placed by class name
    // InputField::CopySelection()
    void InputField::CopySelection() {
        char cVar1;
        TextRunSlice local_50;
        basic_string local_30[24];
        Clipboard local_18[8];

        local_50.Slice((ulong)this, field_208);
        cVar1 = local_50.IsEmpty();
        if (cVar1 == '\0') {
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            local_50.ConvertToUTF8(local_30);
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                Clipboard::Clipboard(local_18);
                Clipboard::SetText<eastl::basic_string<char, BucketAllocatorEASTL>>((basic_string*)local_18);
                local_18->~Clipboard();
            }
            local_30->~basic_string();
        }
    }

    // 0x1001fe330, 48 bytes, placed by class name
    // InputField::CutSelection()
    void InputField::CutSelection() {
        if (HasSelection(this) != '\0') {
            CopySelection(this);
            RemoveSelection(this);
        }
    }

    // 0x1001fe360, 288 bytes, placed by class name
    // InputField::PasteFromClipboard()
    void InputField::PasteFromClipboard() {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        char* pcVar5;
        ulong uVar6;
        eastl::string local_48[32];
        Clipboard local_28[8];

        Clipboard::Clipboard(local_28);
        eastl::string::basic_string(local_48);
        cVar1 = local_28->GetText(local_48);
        if (cVar1 != '\0') {
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
                pcVar4 = eastl::remove_if<char*, InputField::PasteFromClipboard()::__3>(uVar2, uVar3, this);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                eastl::string::erase(local_48, pcVar4, pcVar5);
                RemoveSelection(this);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar6 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                uVar6 = Insert(pcVar4, uVar6, field_200, 0);
                SetSelection(this, uVar6, uVar6);
                CropToLimits(this);
                OnTextChanged(this);
            }
        }
        eastl::string::~basic_string(local_48);
        local_28->~Clipboard();
    }

    // 0x1001fe4c0, 80 bytes, placed by class name
    // InputField::GetKeyboardType()
    undefined4 InputField::GetKeyboardType() {
        char cVar1;
        int iVar2;
        undefined4 uVar3;

        iVar2 = GetAliveCount();
        uVar3 = 2;
        if ((1 < iVar2 - 1U) && (uVar3 = 1, field_192 != 3)) {
            cVar1 = IsMultiline(this);
            uVar3 = 7;
            if (cVar1 == '\0') {
                uVar3 = 0;
            }
        }
        return uVar3;
    }

    // 0x100218af0, 224 bytes, placed by class name
    // InputField::SetFocus(bool)::$_0::operator()(BaseApp*) const
    /* InputField::SetFocus(bool)::$_0::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const */

    void InputField::SetFocus(bool)::$_0::operator()(BaseApp* param_1) {
        InputField* this_00;
        char cVar1;
        undefined1 uVar2;
        Input* this_01;
        NpcUID* extraout_RDX;
        basic_string<char, BucketAllocatorEASTL> local_50[24];
        eastl local_38[8];

        this_00 = field_0;
        this_01 = (Input*)(*(code*)param_1->field_0[11])(param_1);
        if (this_01 != (Input*)0) {
            if ((this_00->m_hasFocus == '\0') && (cVar1 = this_01->IsOnScreenKeyboardVisible(), cVar1 != '\0')) {
                jag::input::Input::HideOnScreenKeyboard();
                return;
            }
            if ((this_00->m_hasFocus != '\0') && (cVar1 = this_01->IsOnScreenKeyboardVisible(), cVar1 == '\0')) {
                uVar2 = GetKeyboardType(this_00);
                eastl::destruct<highlight::NpcUID*>(local_38, (NpcUID*)"EASTL basic_string", extraout_RDX);
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_50,
                                                                              (BucketAllocatorEASTL*)"");
                this_01->ShowOnScreenKeyboard(uVar2, local_50, (int)this_00->m_characterLimit, 0, 1);
                eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_50);
            }
        }
    }

    // 0x100218da0, 16 bytes, placed by class name
    // InputField::SetInputFilter(InputFieldFilter)::$_2::operator()(unsigned char) const
    /* InputField::SetInputFilter(InputFieldFilter)::$_2::TEMPNAMEPLACEHOLDERVALUE(unsigned
   char) const */

    byte InputField::SetInputFilter(InputFieldFilter)::$_2::operator()(uchar param_1) {
        undefined3 in_register_00000031;

        return IsCharAllowed(*(InputField**)this, CONCAT31(in_register_00000031, param_1)) ^ 1;
    }

    // 0x100218f90, 16 bytes, placed by class name
    // InputField::PasteFromClipboard()::$_3::operator()(unsigned char) const
    /* InputField::PasteFromClipboard()::$_3::TEMPNAMEPLACEHOLDERVALUE(unsigned
   char) const */

    byte InputField::PasteFromClipboard()::$_3::operator()(uchar param_1) {
        undefined3 in_register_00000031;

        return IsCharAllowed(*(InputField**)this, CONCAT31(in_register_00000031, param_1)) ^ 1;
    }

} // namespace jag::oldscape::rs2lib
