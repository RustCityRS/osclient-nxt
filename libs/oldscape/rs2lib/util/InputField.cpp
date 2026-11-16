// libs/oldscape/rs2lib/util/InputField.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "InputField.h"

namespace jag::oldscape::rs2lib {
    // 0x100009ca0: InputField::GetContents() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1001fc6f0
    InputField::InputField() : jag::graphics::TextRun() {
        m_hasFocus = '\0';
        field_161 = true;
        field_162 = 0;
        field_163 = 0;
        field_168 = 0;
        field_176 = 0;
        m_hasFont = 0;
        m_enterAction = 0;
        field_188 = 0;
        m_filter = 0;
        m_caretIndex = 0;
        m_pSelectionStart = 0;
        *(uint64_t*)((long)&m_pSelectionStart + 4) = 0;
        *(uint64_t*)((long)&field_216 + 4) = 0;
        field_228 = 4294967295;
        m_characterLimit = 4294967295;
        field_240 = 0;
        field_244 = 0;
        m_scrollX = 0;
        field_252 = 0;
        SetWrapMode(1);
        m_placeholderContents->SetWrapMode(1);
    }

    // 0x1001fc840
    void InputField::MainLogic() {
        if (field_162 != '\0') {
            if (field_163 == '\0') {
                field_163 = 1;
            } else {
                field_162 = 0;
                field_163 = 0;
                MouseHoldRelease();
            }
        }
        int iVar1 = field_176;
        int iVar2 = (int)((unsigned long)((long)(iVar1 + 1) * -2004318071) >> 32) + iVar1 + 1;
        field_176 = iVar1 + ((iVar2 >> 5) - (iVar2 >> 31)) * -60 + 1;
        if (0 < field_224) {
            field_224 = field_224 - 1;
        }
    }

    // 0x1001fc8d0
    void InputField::MouseHoldRelease() {
        unsigned long long uVar1 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        if (332 < uVar1 - field_168) {
            ShowEditMenu();
        }
    }

    // 0x1001fc900
    bool InputField::SetFocus(bool arg1) {
        uint64_t in_register_00000031;
        char cVar2;
        __0 local_e0;
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            cVar2 = '\0';
        } else {
            cVar2 = field_161;
        }
        bool cVar1 = m_hasFocus;
        m_hasFocus = cVar2;
        auto this_00 = BaseApp::GetAppInstance();
        if (this_00 != nullptr) {
            local_e0.field_0 = this;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                InputField::SetFocus(bool)::__0, void>(local_d8, &local_e0);
            this_00->QueueMainThreadEvent(*local_d8);
        }
        if (m_hasFocus == '\0') {
            SetSelection(m_caretIndex, m_caretIndex);
        }
        return cVar1 != cVar2;
    }

    // 0x1001fca00
    unsigned long InputField::SetSelection(unsigned long arg1, unsigned long arg2) {
        unsigned long uVar2;
        uint64_t unaff_R12;
        uint64_t uVar3;

        if (!(Is64BitOS())) {
            m_pSelectionStart = arg1;
            m_caretIndex = arg2;
            uVar2 = 0;
        } else {
            uVar2 = GetCodepointCount();
            if (uVar2 < arg1) {
                arg1 = GetCodepointCount();
            }
            uVar2 = GetCodepointCount();
            if (uVar2 < arg2) {
                arg2 = GetCodepointCount();
            }
            uVar3 = (uint64_t)((unsigned long)unaff_R12 >> 8);
            uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
            if (m_pSelectionStart == arg1) {
                uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)(m_caretIndex != arg2));
            }
            m_pSelectionStart = arg1;
            if (m_caretIndex != arg2) {
                m_caretIndex = arg2;
                field_176 = 0;
                UpdateScrollCaretVisible();
            }
            if ((char)uVar2 != '\0') {
                if ((&field_304)->operator_cast_to_bool()) {
                    std::function<void()>::operator()((function<void()>*)&field_304);
                }
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x1001fcad0
    void InputField::SetFocusAllowed(bool arg1) {
        char cVar1;
        uint32_t in_register_00000031;

        field_161 = arg1;
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            cVar1 = '\0';
        } else {
            cVar1 = m_hasFocus;
        }
        m_hasFocus = cVar1;
    }

    // 0x1001fcb00
    unsigned long InputField::SetText(eastl::string str) {
        char* pcVar4;

        basic_string<char, BucketAllocatorEASTL> local_40;
        ConvertToUTF8(local_40);
        unsigned long uVar2 = str->size();
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int iVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(&local_40, 0, uVar2, pcVar3);
        if (iVar1 != 0) {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            pcVar3 = eastl::remove_if<char*, (eastl::string)->SetText()::__1>(pcVar3, pcVar4, (__1*)this);
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            str->erase(pcVar3, pcVar4);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar2 = str->size();
            Set(pcVar3, uVar2);
            SetScroll(m_scrollX, field_252);
            CropToLimits();
            OnTextChanged();
        }
        return iVar1 != 0 & 4294967295;
    }

    // 0x1001fcc90
    uint64_t InputField::SetScroll(int arg1, int arg2) {
        int iVar1;
        int iVar2;
        int iVar4;
        uint32_t extraout_var;
        uint64_t uVar5;
        int local_34;
        int local_30;
        int local_28[2];

        local_28[0] = arg2;
        if (Is64BitOS() == '\0') {
            m_scrollX = arg1;
            field_252 = local_28[0];
            uVar5 = 0;
        } else {
            iVar1 = m_scrollX;
            iVar2 = field_252;
            iVar4 = GetWidth();
            local_34 = eastl::max<int>(0, (iVar4 - field_240) + 2);
            iVar4 = GetHeight();
            local_30 = eastl::max<int>(0, (iVar4 - field_244) + 1);
            local_28[1] = 0;
            iVar4 = jag::math::Clamp<int>(arg1, *(local_28 + 1), local_34);
            m_scrollX = iVar4;
            local_28[1] = 0;
            iVar4 = jag::math::Clamp<int>(*local_28, *(local_28 + 1), local_30);
            field_252 = iVar4;
            uVar5 = (((uint64_t)((int64_t)((((uint64_t)extraout_var << 32) | (uint32_t)iVar4) >> 8)) << 8) |
                     (uint8_t)(iVar2 != iVar4 || iVar1 != m_scrollX));
        }
        return uVar5;
    }

    // 0x1001fcd70
    unsigned long InputField::CropToLimits() {
        unsigned int uVar2;
        int iVar3;
        unsigned long uVar4;
        long lVar5;
        unsigned long uVar6;
        uint64_t unaff_R14;
        unsigned long uVar7;
        unsigned long uVar8;
        basic_string<char, BucketAllocatorEASTL> local_40;

        if (Is64BitOS() == '\0') {
            uVar7 = 0;
        } else {
            uVar4 = GetCodepointCount();
            uVar8 = m_characterLimit;
            uVar7 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)(uVar8 < uVar4));
            if (uVar8 < uVar4) {
                uVar4 = GetCodepointCount();
                Remove(uVar8, uVar4);
            }
            uVar2 = GetAlphaTestThreshold();
            iVar3 = GetNumLines();
            if ((int)(uVar2 & 255) < iVar3) {
                lVar5 = GetIndexAtLineOffset(0, uVar2 & 255);
                local_40 = eastl::basic_string<char, BucketAllocatorEASTL>();
                ConvertToUTF8(local_40);
                Set((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), lVar5 - 1U);
                uVar7 = (((uint64_t)((int64_t)(lVar5 - 1U >> 8)) << 8) | (uint8_t)1);
            }
            if ((char)uVar7 != '\0') {
                uVar8 = m_caretIndex;
                uVar4 = m_pSelectionStart;
                uVar6 = GetCodepointCount();
                if (uVar6 < m_caretIndex) {
                    uVar8 = uVar6;
                }
                if (uVar6 < m_pSelectionStart) {
                    uVar4 = uVar6;
                }
                SetSelection(uVar4, uVar8);
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x1001fce90
    void InputField::OnTextChanged() {
        if ((&field_256)->operator_cast_to_bool() != '\0') {
            std::function<void()>::operator()((function<void()>*)&field_256);
        }
    }

    // 0x1001fcec0
    uint8_t InputField::SetPlaceholderText(const eastl::string& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2 = str.size();
        m_placeholderContents->Set(str_00, arg2);
        return 1;
    }

    // 0x1001fcf10
    unsigned long InputField::SetFont(const jstring::PixfontGeneric& pixfontGeneric) {
        uint64_t unaff_R14;
        unsigned long uVar5;

        uint8_t bVar1 = m_hasFont;
        uint64_t uVar6 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        auto local_38 = OldScapeFontMetricConverter::Convert(0, pixfontGeneric);
        SetFontMetrics(local_38);
        m_placeholderContents->SetFontMetrics(local_38);
        m_hasFont = 1;
        uint8_t bVar2 = SetScroll(m_scrollX, field_252);
        uint8_t bVar3 = SetSelection(m_pSelectionStart, m_caretIndex);
        if (CropToLimits() == '\0') {
            uVar5 = (((uint64_t)uVar6 << 8) | (uint8_t)(bVar1 ^ 1 | bVar2 | bVar3));
        } else {
            uVar5 = (((uint64_t)uVar6 << 8) | (uint8_t)1);
            OnTextChanged();
        }
        return uVar5 & 4294967295;
    }

    // 0x1001fcfe0
    uint8_t InputField::SetSize(int arg1, int arg2) {
        bool bVar2 = true;
        if (field_240 == arg1) {
            bVar2 = field_244 != arg2;
        }
        field_240 = arg1;
        field_244 = arg2;
        return SetScroll(m_scrollX, field_252) | bVar2;
    }

    // 0x1001fd030
    unsigned long InputField::SetMaxLineWidth(int arg1) {
        uint64_t unaff_R14;

        int arg1_00 = 2147483647;
        if ((unsigned int)arg1 < 2147483647) {
            arg1_00 = arg1;
        }
        int iVar2 = GetMaxLineWidth();
        uint64_t uVar4 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        unsigned long uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(arg1_00 == iVar2));
        SetMaxLineWidth(arg1_00);
        m_placeholderContents->SetMaxLineWidth(arg1_00);
        if (CropToLimits() != '\0') {
            OnTextChanged();
            uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
        }
        return uVar3 & 4294967295;
    }

    // 0x1001fd090
    uint32_t InputField::SetMaxLineCount(unsigned char arg1) {
        SetMaxLineCount(arg1);
        uint32_t uVar1 = CropToLimits();
        if ((char)uVar1 != '\0') {
            OnTextChanged();
        }
        return uVar1;
    }

    // 0x1001fd0c0
    uint32_t InputField::SetCharacterLimit(unsigned long arg1) {
        m_characterLimit = arg1;
        uint32_t uVar1 = CropToLimits();
        if ((char)uVar1 != '\0') {
            OnTextChanged();
        }
        return uVar1;
    }

    // 0x1001fd0f0
    uint32_t InputField::SetAlignment(int arg1, int arg2) {
        uint64_t in_RAX;
        Logger* pLVar1;
        uint32_t uVar2;
        uint64_t uVar3;

        uint32_t uVar4 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (2 < (unsigned int)arg1) {
            pLVar1 = logger::default_logger();
            uVar3 = (((uint64_t)uVar4 << 32) | (uint32_t)arg1);
            pLVar1->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                        "InputField.cpp",
                        200, "InputField::SetAlignment: Invalid horizontal alignment. Given value: \'%d\'", uVar3);
            uVar4 = (uint32_t)((unsigned long)uVar3 >> 32);
        }
        if ((unsigned int)arg2 < 3) {
            if ((unsigned int)arg1 < 3) {
                uVar2 = SetAlignment(arg1, arg2);
            } else {
                uVar2 = 0;
            }
        } else {
            pLVar1 = logger::default_logger();
            uVar2 = 0;
            pLVar1->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                        "InputField.cpp",
                        207, "InputField::SetAlignment: Invalid vertical alignment. Given value: \'%d\'",
                        (((uint64_t)uVar4 << 32) | (uint32_t)arg2));
        }
        return uVar2;
    }

    // 0x1001fd1a0
    unsigned long InputField::SetInputFilter(InputFieldFilter inputFieldFilter) {
        unsigned long arg2;

        m_filter = inputFieldFilter;
        basic_string<char, BucketAllocatorEASTL> local_48;
        ConvertToUTF8(local_48);
        long lVar1 = local_48.size();
        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        pcVar2 = eastl::remove_if<char*, (InputFieldFilter)->SetInputFilter()::__2>(pcVar2, pcVar3, (__2*)this);
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_48.erase(pcVar2, pcVar3);
        long lVar4 = local_48.size();
        if (lVar4 != lVar1) {
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            arg2 = local_48.size();
            Set(pcVar2, arg2);
            SetScroll(m_scrollX, field_252);
            CropToLimits();
            OnTextChanged();
        }
        return lVar4 != lVar1 & 4294967295;
    }

    // 0x1001fd2f0
    void InputField::UpdateScrollCaretVisible() {
        int iVar3;
        int iVar4;

        uint64_t uVar5 = (Slice(0, m_caretIndex)).GetLastCursorPosition();
        int iVar1 = GetLineHeight();
        Layout local_40((int)uVar5 - 10, (int)((unsigned long)uVar5 >> 32) - 3, 20, iVar1 + 6);
        GridRect local_58(m_scrollX, field_252, field_240, field_244);
        int iVar2 = m_scrollX;
        int local_44 = field_252;
        auto piVar6 = local_40.SSOBeginPtr();
        iVar1 = *piVar6;
        piVar6 = (int*)local_58.SSOBeginPtr();
        if (iVar1 < *piVar6) {
            piVar6 = (int*)local_40.SSOBeginPtr();
            iVar2 = *piVar6;
        } else {
            iVar1 = local_40.Right();
            iVar3 = local_58.Right();
            if (iVar3 < iVar1) {
                iVar2 = local_40.Right();
                iVar2 = iVar2 - field_240;
            }
        }
        piVar6 = (int*)local_40.y();
        iVar1 = *piVar6;
        piVar6 = (int*)local_58.y();
        if (iVar1 < *piVar6) {
            piVar6 = (int*)local_40.y();
            iVar1 = *piVar6;
        } else {
            iVar3 = local_40.MaxZ();
            iVar4 = local_58.MaxZ();
            iVar1 = local_44;
            if (iVar4 < iVar3) {
                iVar1 = local_40.MaxZ();
                iVar1 = iVar1 - field_244;
            }
        }
        SetScroll(iVar2, iVar1);
    }

    // 0x1001fd460
    uint8_t[16] InputField::GetWord(unsigned long arg1) {
        uint8_t auVar1[16];
        bool cVar2;
        unsigned int* puVar3;
        long local_40;
        unsigned long local_38;

        unsigned long local_28 = GetCodepointCount();
        local_40.pair<int, unsigned long&, false>(0, local_28);
        long lVar4 = arg1 + 1;
        do {
            if (lVar4 == 1)
                goto LAB_1001fd4c8;
            puVar3 = (unsigned int*)GetCharacter(lVar4 - 2);
            cVar2 = IsWordBreakChar(*puVar3);
            lVar4 = lVar4 - 1;
        } while (!cVar2);
        local_40 = lVar4;
    LAB_1001fd4c8:
        if (arg1 < local_28) {
            do {
                puVar3 = (unsigned int*)GetCharacter(arg1);
                cVar2 = IsWordBreakChar(*puVar3);
                if (cVar2) {
                    local_38 = arg1;
                    break;
                }
                arg1 = arg1 + 1;
            } while (arg1 < local_28);
        }
        auVar1._8_8_ = local_38;
        auVar1._0_8_ = local_40;
        return auVar1;
    }

    // 0x1001fd590
    uint8_t[16] InputField::GetLine(unsigned long arg1) {
        uint8_t auVar1[16];
        int* piVar2;
        long local_40;
        unsigned long local_38;

        unsigned long local_28 = GetCodepointCount();
        local_40.pair<int, unsigned long&, false>(0, local_28);
        long lVar3 = arg1 + 1;
        do {
            if (lVar3 == 1)
                goto LAB_1001fd5ef;
            piVar2 = (int*)GetCharacter(lVar3 - 2);
            lVar3 = lVar3 - 1;
        } while (*piVar2 != 10);
        local_40 = lVar3;
    LAB_1001fd5ef:
        if (arg1 < local_28) {
            do {
                piVar2 = (int*)GetCharacter(arg1);
                if (*piVar2 == 10) {
                    local_38 = arg1;
                    break;
                }
                arg1 = arg1 + 1;
            } while (arg1 < local_28);
        }
        auVar1._8_8_ = local_38;
        auVar1._0_8_ = local_40;
        return auVar1;
    }

    // 0x1001fd640
    void InputField::MouseDown(int arg1, int arg2, bool arg3, bool arg4) {
        int iVar1;
        int iVar2;
        uint64_t uVar3;
        unsigned long arg1_00;
        uint8_t auVar4[16];

        if (m_hasFont == 0) {
            arg1_00 = 0;
        } else {
            iVar1 = m_scrollX;
            iVar2 = field_252;
            uVar3 = GetOriginForCurrentAlignment();
            arg1_00 = GetIndexAtPos((arg1 + iVar1) - (int)uVar3, (arg2 + iVar2) - (int)((unsigned long)uVar3 >> 32));
        }
        if ((arg3) && (arg4)) {
            field_188 = 1;
            GetWord(arg1_00);
            auVar4 = GetWord(field_216);
            CombineSelection(auVar4._0_8_, auVar4._8_8_);
        } else if (arg3) {
            field_188 = 1;
            SelectWord(arg1_00);
        } else if (arg4) {
            SetSelection(field_216, arg1_00);
        } else {
            if ((field_224 < 1) || (arg1_00 != field_216)) {
                field_188 = 0;
                SetSelection(arg1_00, arg1_00);
                field_216 = arg1_00;
            } else {
                if (m_pSelectionStart == m_caretIndex) {
                    field_188 = 1;
                    auVar4 = GetWord(arg1_00);
                } else {
                    field_188 = 2;
                    auVar4 = GetLine(arg1_00);
                }
                SetSelection(auVar4._0_8_, auVar4._8_8_);
            }
            field_224 = 25;
        }
    }

    // 0x1001fd7c0
    void InputField::GetOriginForCurrentAlignment() const {
        int in_register_00000004;
        int local_18;

        int local_14 = in_register_00000004;
        uint32_t uVar1 = GetLeftOffsetForHorizontalAlignment(field_240);
        _local_18 = (((uint64_t)local_14 << 32) | (uint32_t)uVar1);
        uVar1 = GetTopOffsetForVerticalAlignment(field_244);
        _local_18 = (((uint64_t)uVar1 << 32) | (uint32_t)local_18);
        std::make_pair<int const&, int const&>(local_18, local_14);
    }

    // 0x1001fd800
    void InputField::CombineSelection(std::pair<unsigned long, unsigned long> arg1,
                                      std::pair<unsigned long, unsigned long> arg2) {
        pair<unsigned long, unsigned long>* in_RCX;
        pair<unsigned long, unsigned long>* in_R8;

        if (in_RCX < arg1) {
            in_R8 = in_RCX;
        } else {
            arg2 = arg1;
        }
        SetSelection((unsigned long)arg2, (unsigned long)in_R8);
    }

    // 0x1001fd820
    void InputField::SelectWord(unsigned long arg1) {
        uint8_t auVar1[16];

        auVar1 = GetWord(arg1);
        SetSelection(auVar1._0_8_, auVar1._8_8_);
        field_216 = auVar1._0_8_;
    }

    // 0x1001fd850
    void InputField::MouseHeld(int arg1, int arg2) {
        int iVar1;
        int iVar2;
        bool cVar3;
        uint64_t uVar5;
        unsigned long arg1_00;
        uint8_t auVar6[16];

        if (field_162 == '\0') {
            field_168 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        }
        field_162 = 1;
        field_163 = 0;
        if ((m_hasFont != 0) && (cVar3 = HasFocus(), cVar3)) {
            iVar1 = m_scrollX;
            iVar2 = field_252;
            uVar5 = GetOriginForCurrentAlignment();
            arg1_00 = GetIndexAtPos((arg1 + iVar1) - (int)uVar5, (arg2 + iVar2) - (int)((unsigned long)uVar5 >> 32));
            iVar1 = field_188;
            if (iVar1 == 2) {
                auVar6 = GetLine(field_216);
                GetLine(arg1_00);
            } else {
                if (iVar1 != 1) {
                    if (iVar1 == 0) {
                        SetSelection(m_pSelectionStart, arg1_00);
                        return;
                    }
                    return;
                }
                auVar6 = GetWord(field_216);
                GetWord(arg1_00);
            }
            CombineSelection(auVar6._0_8_, auVar6._8_8_);
        }
    }

    // 0x1001fd960
    void InputField::ShowEditMenu() {
        uint8_t uVar1;
        uint64_t extraout_var;

        auto pBVar3 = BaseApp::GetAppInstance();
        if (pBVar3 != nullptr) {
            uVar1 = pBVar3->GetInputHAL();
            if ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != nullptr) {
                if (((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->IsOnScreenKeyboardVisible() != '\0') {
                    jag::input::Input::ShowEditMenu();
                }
            }
        }
    }

    // 0x1001fd9a0
    void InputField::DoCursorKey(unsigned long arg1, bool arg2) {
        uint64_t in_register_00000011;

        unsigned long arg1_00 = arg1;
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            arg1_00 = m_pSelectionStart;
        }
        SetSelection(arg1_00, arg1);
    }

    // 0x1001fd9c0
    unsigned long InputField::IsCharAllowed(unsigned int arg1) {
        unsigned int uVar2;
        uint64_t unaff_RBX;

        uint64_t uVar4 = (uint64_t)((unsigned long)unaff_RBX >> 8);
        unsigned long uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
        bool cVar1 = (char)arg1;
        switch (m_filter) {
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
            if (!cVar1) {
                uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(((arg1 & 223) - 75 & 4294967293) == 0));
            }
        default:
            goto switchD_1001fd9e8_default;
        }
        uVar3 = (unsigned long)uVar2;
    switchD_1001fd9e8_default:
        return uVar3 & 4294967295;
    }

    // 0x1001fdae0
    uint8_t InputField::TypeCharacter(unsigned int arg1) {
        unsigned long arg1_00;
        unsigned int local_14;

        if (IsCharAllowed(arg1) != '\0') {
            RemoveSelection();
            arg1_00 = InsertCodepoints(&local_14, 1, m_caretIndex, (unsigned long)field_228);
            SetSelection(arg1_00, arg1_00);
            CropToLimits();
            OnTextChanged();
        }
        return 1;
    }

    // 0x1001fdb50
    uint32_t InputField::RemoveSelection() {
        unsigned long arg1;

        uint32_t uVar1 = HasSelection();
        if ((char)uVar1 != '\0') {
            arg1 = Remove(m_pSelectionStart, m_caretIndex);
            OnTextChanged();
            SetSelection(arg1, arg1);
            field_216 = arg1;
        }
        return uVar1;
    }

    // 0x1001fdbb0
    void InputField::SelectAll() {
        unsigned long arg2 = GetCodepointCount();
        SetSelection(0, arg2);
    }

    // 0x1001fdbe0
    void InputField::SelectWord() {
        SelectWord(m_caretIndex);
    }

    // 0x1001fdc30
    void InputField::Backspace() {
        unsigned long arg1;

        if ((RemoveSelection() == '\0') && (m_caretIndex != 0)) {
            arg1 = Remove(m_caretIndex - 1);
            OnTextChanged();
            SetSelection(arg1, arg1);
        }
    }

    // 0x1001fdc80
    void InputField::Delete() {
        unsigned long uVar1;
        unsigned long uVar2;

        if (RemoveSelection() == '\0') {
            uVar1 = m_caretIndex;
            uVar2 = GetCodepointCount();
            if (uVar1 < uVar2) {
                uVar1 = Remove(m_caretIndex);
                OnTextChanged();
                SetSelection(uVar1, uVar1);
            }
        }
    }

    // 0x1001fdce0
    void InputField::BackspaceWord() {
        unsigned long uVar1;

        if ((RemoveSelection() == '\0') && (m_caretIndex != 0)) {
            uVar1 = GetWord(m_caretIndex - 1);
            uVar1 = Remove(uVar1, m_caretIndex);
            OnTextChanged();
            SetSelection(uVar1, uVar1);
        }
    }

    // 0x1001fdd40
    void InputField::DeleteWord() {
        unsigned long uVar1;
        unsigned long uVar2;
        unsigned long arg2;

        if (RemoveSelection() == '\0') {
            uVar1 = m_caretIndex;
            uVar2 = GetCodepointCount();
            if (uVar1 < uVar2) {
                GetWord(m_caretIndex);
                uVar1 = Remove(m_caretIndex, arg2);
                OnTextChanged();
                SetSelection(uVar1, uVar1);
            }
        }
    }

    // 0x1001fddb0
    void InputField::LineHome(bool arg1) {
        DoCursorKey(GetLine(m_caretIndex), arg1);
    }

    // 0x1001fdde0
    void InputField::LineEnd(bool arg1) {
        unsigned long arg1_00;

        GetLine(m_caretIndex);
        DoCursorKey(arg1_00, arg1);
    }

    // 0x1001fde10
    void InputField::FullHome(bool arg1) {
        DoCursorKey(0, arg1);
    }

    // 0x1001fde20
    void InputField::FullEnd(bool arg1) {
        DoCursorKey(GetCodepointCount(), arg1);
    }

    // 0x1001fde50
    void InputField::Left(bool arg1) {
        unsigned long arg1_00;

        if ((HasSelection() == '\0') || (arg1)) {
            if (m_caretIndex == 0) {
                return;
            }
            arg1_00 = m_caretIndex - 1;
        } else {
            arg1_00 = eastl::min_alt<unsigned long>(m_pSelectionStart, m_caretIndex);
            arg1 = false;
        }
        DoCursorKey(arg1_00, arg1);
    }

    // 0x1001fdeb0
    void InputField::Right(bool arg1) {
        unsigned long uVar3;

        if ((HasSelection() == '\0') || (arg1)) {
            uVar3 = m_caretIndex;
            if (GetCodepointCount() <= uVar3) {
                return;
            }
            uVar3 = m_caretIndex + 1;
        } else {
            uVar3 = eastl::max<unsigned long>(m_pSelectionStart, m_caretIndex);
            arg1 = false;
        }
        DoCursorKey(uVar3, arg1);
    }

    // 0x1001fdf30
    void InputField::WordLeft(bool arg1) {
        if (m_caretIndex != 0) {
            DoCursorKey(GetWord(m_caretIndex - 1), arg1);
        }
    }

    // 0x1001fdf70
    void InputField::WordRight(bool arg1) {
        unsigned long arg1_00;

        unsigned long uVar1 = m_caretIndex;
        unsigned long uVar2 = GetCodepointCount();
        if (uVar1 < uVar2) {
            GetWord(m_caretIndex + 1);
            DoCursorKey(arg1_00, arg1);
        }
    }

    // 0x1001fdfc0
    void InputField::Up(bool arg1) {
        if (m_caretIndex != 0) {
            DoCursorKey(GetIndexAtLineOffset(m_caretIndex, -1), arg1);
        }
    }

    // 0x1001fe000
    void InputField::Down(bool arg1) {
        unsigned long uVar2 = m_caretIndex;
        unsigned long uVar1 = GetCodepointCount();
        if (uVar2 < uVar1) {
            uVar2 = GetIndexAtLineOffset(m_caretIndex, 1);
            DoCursorKey(uVar2, arg1);
        }
    }

    // 0x1001fe050
    void InputField::PageUp(bool arg1) {
        int iVar1;

        if (m_caretIndex != 0) {
            iVar1 = GetNumVisibleLines();
            DoCursorKey(GetIndexAtLineOffset(m_caretIndex, -iVar1), arg1);
        }
    }

    // 0x1001fe0c0
    void InputField::PageDown(bool arg1) {
        int arg2;

        unsigned long uVar1 = m_caretIndex;
        unsigned long uVar2 = GetCodepointCount();
        if (uVar1 < uVar2) {
            arg2 = GetNumVisibleLines();
            uVar1 = GetIndexAtLineOffset(m_caretIndex, arg2);
            DoCursorKey(uVar1, arg1);
        }
    }

    // 0x1001fe120
    void InputField::PageUpNoScroll(bool arg1) {

        TextRunSlice local_40 = Slice(0, m_caretIndex);
        DoCursorKey(GetIndexAtPos(local_40.GetLastCursorPosition(), field_252), arg1);
    }

    // 0x1001fe180
    void InputField::PageDownNoScroll(bool arg1) {

        TextRunSlice local_40 = Slice(0, m_caretIndex);
        DoCursorKey(GetIndexAtPos(local_40.GetLastCursorPosition(), field_244 + field_252), arg1);
    }

    // 0x1001fe1f0
    void InputField::ScrollUpOneLine() {
        int iVar2 = field_252;
        int iVar1 = GetLineHeight();
        iVar2 = eastl::max<int>(0, iVar2 - iVar1);
        field_252 = iVar2;
    }

    // 0x1001fe220
    void InputField::ScrollDownOneLine() {
        int iVar1 = GetHeight();
        auto enumOptionToggle1 = eastl::max<int>(0, iVar1 - field_244);
        iVar1 = field_252;
        int iVar2 = GetLineHeight();
        iVar1 = eastl::min<jag::graphics::GraphicsQuality>(enumOptionToggle1, iVar1 + iVar2);
        field_252 = iVar1;
    }

    // 0x1001fe280
    void InputField::CopySelection() {
        basic_string<char, BucketAllocatorEASTL> local_30;
        Clipboard local_18;

        TextRunSlice local_50 = Slice(m_pSelectionStart, m_caretIndex);
        if (!(local_50.IsEmpty())) {
            local_30 = eastl::basic_string<char, BucketAllocatorEASTL>();
            local_50.ConvertToUTF8(local_30);
            if (!(local_30.empty())) {
                local_18 = Clipboard();
                local_18.SetText<eastl::basic_string<char, BucketAllocatorEASTL>>(local_30);
            }
        }
    }

    // 0x1001fe330
    void InputField::CutSelection() {
        if (HasSelection() != '\0') {
            CopySelection();
            RemoveSelection();
        }
    }

    // 0x1001fe360
    void InputField::PasteFromClipboard() {
        char* pcVar2;
        char* pcVar3;
        unsigned long uVar4;

        Clipboard local_28;
        eastl::string local_48;
        if (local_28.GetText(local_48)) {
            if (!(local_48.empty())) {
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                pcVar2 = eastl::remove_if<char*, InputField::PasteFromClipboard()::__3>(pcVar2, pcVar3, (__3*)this);
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                eastl::string::erase(&local_48, pcVar2, pcVar3);
                RemoveSelection();
                pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar4 = local_48.size();
                uVar4 = Insert(pcVar2, uVar4, m_caretIndex, 0);
                SetSelection(uVar4, uVar4);
                CropToLimits();
                OnTextChanged();
            }
        }
    }

    // 0x1001fe4c0
    uint32_t InputField::GetKeyboardType() {
        bool cVar1;

        int iVar2 = GetAliveCount();
        uint32_t uVar3 = 2;
        if ((1 < iVar2 - 1U) && (uVar3 = 1, m_filter != 3)) {
            cVar1 = IsMultiline();
            uVar3 = 7;
            if (!cVar1) {
                uVar3 = 0;
            }
        }
        return uVar3;
    }

    // 0x100218af0
    void InputField::SetFocus(bool)::$_0::operator()(BaseApp* baseApp) const {
        bool cVar2;
        SoftKeyboardType SVar3;
        uint64_t extraout_var;
        basic_string<char, BucketAllocatorEASTL> local_50;
        eastl local_38;

        InputField* this_00 = field_0;
        uint8_t uVar1 = baseApp->GetInputHAL();
        Input* this_01 = (Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        if (this_01 != nullptr) {
            if ((this_00->m_hasFocus == '\0') && (cVar2 = this_01->IsOnScreenKeyboardVisible(), cVar2)) {
                jag::input::Input::HideOnScreenKeyboard();
                return;
            }
            if ((this_00->m_hasFocus != '\0') && (cVar2 = this_01->IsOnScreenKeyboardVisible(), !cVar2)) {
                SVar3 = GetKeyboardType(this_00);
                eastl::destruct<highlight::NpcUID*>(&local_38);
                local_50 = eastl::basic_string<char, BucketAllocatorEASTL>("", &local_38);
                this_01->ShowOnScreenKeyboard(SVar3 & 255, &local_50, (int)this_00->m_characterLimit, false, true);
            }
        }
    }

    // 0x100218da0
    uint8_t InputField::SetInputFilter(InputFieldFilter)::$_2::operator()(unsigned char arg1) const {
        uint32_t in_register_00000031;

        return IsCharAllowed(field_0, (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1)) ^ 1;
    }

    // 0x100218f90
    uint8_t InputField::PasteFromClipboard()::$_3::operator()(unsigned char arg1) const {
        uint32_t in_register_00000031;

        return IsCharAllowed(field_0, (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1)) ^ 1;
    }

} // namespace jag::oldscape::rs2lib
