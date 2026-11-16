// libs/graphics/runetek7/fonts/TextRun.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TextRun.h"

namespace jag::graphics {
    // 0x100009ca0: TextRun::GetFontMetrics() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100066b70: TextRun::GetMaxLineWidth() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000fa840: TextRun::GetVisibility() const has the same machine code as oldscape::graphics::NXTPixScreen::GetHeight() const

    // 0x10012dc00: TextRun::GetWrapMode() const has the same machine code as oldscape::graphics::NXTPixScreen::GetViewportX()

    // 0x10018b300: TextRun::GetVerticalAlignment() const has the same machine code as oldscape::jagex3::Js5::GetIndexVersion() const

    // 0x1001a3c10: TextRun::GetContents() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1003cf2a0: TextRun::GetHorizontalAlignment() const has the same machine code as game::WorldMapDefaults::GetDropShadowColourRGBA() const

    // 0x10080e330: TextRun::GetMaxLineCount() const has the same machine code as GeometryBatch::GetBoneCount() const

    // 0x1008e2a10
    int TextRunSlice::GetVerticalOrigin() const {
        auto this_00 = field_0->SSOBeginPtr();
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            LogAssert("textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      151, nullptr);
        }
        FontMetrics* pFVar4 = (FontMetrics*)(*this_00).operator->();
        int iVar3 = pFVar4->GetVerticalSpacing();
        pFVar4 = (FontMetrics*)(*this_00).operator->();
        uint8_t bVar2 = pFVar4->GetMaxDescent();
        return iVar3 - (unsigned int)bVar2;
    }

    // 0x1008e2a90
    bool TextRunSlice::ShouldHide(const TextRunCharacter& textRunCharacter) const {
        int iVar1 = field_0->GetAliveCount();
        bool bVar3 = true;
        if (iVar1 != 2) {
            if (iVar1 == 1) {
                if (field_24 != false) {
                    bVar3 = (TextRunCharacter*)back() != textRunCharacter;
                }
            } else {
                bVar3 = false;
            }
        }
        return bVar3;
    }

    // 0x1008e8330
    int TextRunSlice::GetHeight() const {
        auto this_00 = field_0->SSOBeginPtr();
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar1) {
            LogAssert("textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      158, nullptr);
        }
        cVar1 = IsEmpty();
        int iVar2 = 0;
        if (!cVar1) {
            iVar2 = ((FontMetrics*)(*this_00).operator->())->GetVerticalSpacing();
            iVar2 = (iVar2 + *(int*)(field_16 - 4)) - *(int*)(field_8 + 8);
        }
        return iVar2;
    }

    // 0x1008e83b0
    unsigned int TextRunSlice::GetLastCharAdvance() const {
        int iVar1;
        TextRunCharacter* pTVar2;
        int iVar3;
        uint8_t bVar5;
        FontMetrics* pFVar7;

        auto this_00 = field_0->SSOBeginPtr();
        bool cVar4 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar4) {
            LogAssert("textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      165, nullptr);
        }
        cVar4 = IsEmpty();
        unsigned int uVar6 = 0;
        if ((!cVar4) && (*(int*)(field_16 - 12) != FontHelpers::newlineCharCode)) {
            cVar4 = ShouldHide(*(field_16 - 12));
            if (!cVar4) {
                pTVar2 = field_16;
                pFVar7 = (FontMetrics*)(*this_00).operator->();
                bVar5 = pFVar7->GetGlyphAdvance(*(int*)(pTVar2 - 12));
                iVar3 = FontHelpers::tabCharCode;
                if (bVar5 == 0) {
                    iVar1 = *(int*)(pTVar2 - 12);
                    pFVar7 = (FontMetrics*)(*this_00).operator->();
                    bVar5 = pFVar7->GetGlyphAdvance(32);
                    if (iVar1 == iVar3) {
                        return (unsigned int)bVar5 * 3;
                    }
                    return (unsigned int)bVar5;
                }
            } else {
                pFVar7 = (FontMetrics*)(*this_00).operator->();
                bVar5 = pFVar7->GetGlyphAdvance(42);
            }
            uVar6 = (unsigned int)bVar5;
        }
        return uVar6;
    }

    // 0x1008e84d0
    void ConvertToUTF8Inner(eastl::basic_string<char, BucketAllocatorEASTL>& str,
                            const TextRunCharacter* textRunCharacter1, const TextRunCharacter* textRunCharacter2) {
        bool bVar1;
        unsigned int uVar2;
        uint64_t in_RAX;
        long lVar3;
        Logger* logger;
        TextRunCharacter* pTVar4;
        unsigned long arg1;
        uint32_t uVar5;

        if (textRunCharacter1 == textRunCharacter2) {
            str = "";
        } else if (textRunCharacter1 < textRunCharacter2) {
            arg1 = 0;
            pTVar4 = textRunCharacter1;
            do {
                uVar2 = FontHelpers::FromCodeMap(*(unsigned int*)pTVar4);
                lVar3 = stringtools::GetCodepointUTF8ByteSize(uVar2);
                arg1 = arg1 + lVar3;
                pTVar4 = pTVar4 + 12;
            } while (pTVar4 < textRunCharacter2);
            str.clear();
            str.reserve(arg1);
            for (; textRunCharacter1 < textRunCharacter2; textRunCharacter1 = textRunCharacter1 + 12) {
                uVar2 = FontHelpers::FromCodeMap(*(unsigned int*)textRunCharacter1);
                bVar1 = stringtools::AppendUTF8Codepoint<eastl::basic_string<char, BucketAllocatorEASTL>>(uVar2, str);
                uVar5 = (uint32_t)((unsigned long)in_RAX >> 32);
                if (!bVar1) {
                    logger = logger::default_logger();
                    in_RAX = (((uint64_t)uVar5 << 32) | (uint32_t)(*(unsigned int*)textRunCharacter1));
                    logger->Log(false, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/TextRun.cpp",
                                234, "Could not convert char code %u from a Unicode codepoint to UTF8", in_RAX);
                }
            }
        } else {
            str.clear();
            str.reserve(0);
        }
    }

    // 0x1008e8660
    void TextRunSlice::ConvertToUTF8(eastl::basic_string<char, BucketAllocatorEASTL>& str) const {
        ConvertToUTF8Inner(str, field_8, field_16);
    }

    // 0x1008e8680
    void TextRun::ConvertToUTF8(eastl::basic_string<char, BucketAllocatorEASTL>& str) const {
        TextRunCharacter* textRunCharacter1;
        TextRunCharacter* textRunCharacter2;

        textRunCharacter1 = (TextRunCharacter*)field_48.HeapBeginPtr();
        textRunCharacter2 = (TextRunCharacter*)field_48.end();
        ConvertToUTF8Inner(str, textRunCharacter1, textRunCharacter2);
    }

    // 0x1008e86c0
    TextRunSlice TextRun::Slice(unsigned long arg1, unsigned long arg2) const {
        uint8_t* this_00;
        unsigned long uVar1;
        unsigned long uVar2;
        long lVar3;
        TextRunCharacter* textRunCharacter2;
        TextRunCharacter* textRunCharacter1;
        bool arg4;

        if (arg1 != arg2) {
            this_00 = &field_48;
            uVar2 = this_00->size();
            uVar1 = arg2;
            if ((arg1 <= uVar2) && (uVar2 = this_00->size(), uVar1 <= uVar2)) {
                if (arg2 < arg1) {
                    std::swap<unsigned long>(arg1, arg2);
                }
                lVar3 = this_00->HeapBeginPtr();
                textRunCharacter1 = (TextRunCharacter*)(lVar3 + arg1 * 12);
                lVar3 = this_00->HeapBeginPtr();
                uVar1 = arg2;
                textRunCharacter2 = (TextRunCharacter*)(lVar3 + arg2 * 12);
                if (m_showLastChar == false) {
                    arg4 = false;
                } else {
                    uVar2 = this_00->size();
                    arg4 = uVar1 == uVar2;
                }
                goto LAB_1008e8717;
            }
        }
        textRunCharacter1 = nullptr;
        textRunCharacter2 = nullptr;
        arg4 = false;
    LAB_1008e8717:
        return TextRunSlice(*this, textRunCharacter1, textRunCharacter2, arg4);
    }

    // 0x1008e87b0
    void TextRun::SetMaxLineWidth(int arg1) {
        int iVar2;

        if (operator_cast_to_bool() != '\0') {
            iVar2 = ((FontMetrics*)(*this).operator->())->GetVerticalSpacing();
            if (arg1 < iVar2 * 2) {
                arg1 = 2147483647;
            }
        }
        if (m_maxLineWidth != arg1) {
            m_maxLineWidth = arg1;
            UpdatePositioning();
        }
    }

    // 0x1008e8800
    void TextRun::UpdatePositioning() {
        unsigned long arg2 = field_48.size();
        UpdatePositioning(0, arg2);
    }

    // 0x1008e8830
    void TextRun::SetMaxLineCount(unsigned char arg1) {
        if (m_maxLineCount != arg1) {
            m_maxLineCount = arg1;
            UpdatePositioning();
        }
    }

    // 0x1008e8850
    void TextRun::SetContentVisibility(TextContentVisibility textContentVisibility) {
        if (m_visibility != textContentVisibility) {
            m_visibility = textContentVisibility;
            UpdatePositioning();
        }
    }

    // 0x1008e8870
    void TextRun::SetFontMetrics(const shared_ptr<FontMetrics>& fontMetrics) {

        if (*this != fontMetrics) {
            *this = fontMetrics;
            if (operator_cast_to_bool()) {
                if (!(IsEmpty())) {
                    UpdatePositioning();
                }
            }
        }
    }

    // 0x1008e8920
    void TextRun::SetWrapMode(TextWrapMode textWrapMode) {
        if (m_wrapMode != textWrapMode) {
            m_wrapMode = textWrapMode;
            UpdatePositioning();
        }
    }

    // 0x1008e8940
    void TextRun::SetLineSpacing(int arg1) {
        if (field_20 != arg1) {
            field_20 = arg1;
            UpdatePositioning();
        }
    }

    // 0x1008e8960
    uint8_t TextRun::SetAlignment(TextHorizontalAlignment textHorizontalAlignment,
                                  TextVerticalAlignment textVerticalAlignment) {
        if ((m_horizontalAlignment != textHorizontalAlignment) || (m_verticalAlignment != textVerticalAlignment)) {
            m_horizontalAlignment = textHorizontalAlignment;
            m_verticalAlignment = textVerticalAlignment;
            UpdatePositioning();
        }
        return 1;
    }

    // 0x1008e8980
    uint8_t[16] TextRun::InsertCodepoints(unsigned int* arg1, unsigned long arg2, unsigned long arg3,
                                          unsigned long arg4) {
        uint8_t auVar1[16];
        function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0> local_98[96];
        long local_38;

        fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::function<
            TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::__1, void>(
            local_98, (__1*)arg1);
        auVar1 = InsertCodepointsFiltered(arg1, arg2, arg3, *local_98, arg4);
        return auVar1;
    }

    // 0x1008e8a30
    uint8_t[16] TextRun::InsertCodepointsFiltered(
        unsigned int* arg1, unsigned long arg2, unsigned long arg3,
        const fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>& callback,
        unsigned long arg5) {
        Layout* this_01;
        TextRun* this_02;
        bool bVar2;
        int iVar3;
        long lVar5;
        unsigned long uVar7;
        uint8_t auVar8[16];
        uint32_t local_80[4];
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* local_70;
        Layout* local_60;
        unsigned long local_58;
        TextRun* local_50;
        bool local_31;

        uint8_t* this_00 = &field_48;
        local_70 = callback;
        unsigned int* local_68 = arg1;
        unsigned long local_48 = arg2;
        unsigned long uVar4 = this_00->size();
        unsigned long local_40 = arg3;
        if (uVar4 < arg3) {
            LogAssert("positionIndex <= m_contents.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      358, nullptr);
        }
        if (!(operator_cast_to_bool())) {
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      359, nullptr);
        }
        unsigned long uVar6 = -(unsigned long)(arg5 == 0) | arg5;
        uVar4 = this_00->size();
        if (uVar4 < uVar6) {
            lVar5 = this_00->size();
            uVar4 = local_48;
            if (uVar6 < lVar5 + local_48) {
                lVar5 = this_00->size();
                uVar4 = uVar6 - lVar5;
            }
            local_50 = this;
            lVar5 = this_00->size();
            local_60 = (Layout*)this_00;
            this_00->reserve(lVar5 + uVar4);
            local_31 = uVar4 != 0;
            uVar6 = local_40;
            local_48 = uVar4;
            if (uVar4 != 0) {
                uVar4 = 0;
                uVar7 = 1;
                do {
                    new (local_80) math::Vector3T();
                    local_80[0] = FontHelpers::ToCodeMap(local_68[uVar4]);
                    bVar2 =
                        fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::operator()(
                            (function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>*)local_70,
                            (unsigned int*)local_80);
                    this_01 = local_60;
                    if (!bVar2) {
                        UpdatePositioning(local_50, local_40, uVar6);
                        local_58 = uVar6;
                        break;
                    }
                    lVar5 = local_60->HeapBeginPtr();
                    this_01->insert((lVar5 + uVar6 * 12), *local_80);
                    uVar6 = uVar6 + 1;
                    local_31 = uVar7 < local_48;
                    bVar2 = uVar7 < local_48;
                    uVar4 = uVar7;
                    uVar7 = (unsigned long)((int)uVar7 + 1);
                } while (bVar2);
            }
            this_02 = local_50;
            uVar4 = 65536;
            if ((local_31 & 1U) == 0) {
                UpdatePositioning(local_50, local_40, uVar6);
                uVar7 = 1;
                if ((this_02->m_maxLineCount == '\0') ||
                    (iVar3 = GetNumLines(this_02), iVar3 <= (int)(unsigned int)this_02->m_maxLineCount)) {
                    uVar7 = 0;
                    uVar4 = 0;
                } else {
                    uVar4 = 0;
                    do {
                        if (local_40 == uVar6)
                            goto LAB_1008e8c37;
                        uVar6 = uVar6 - 1;
                        Remove(this_02, uVar6);
                        iVar3 = GetNumLines(this_02);
                    } while ((int)(unsigned int)this_02->m_maxLineCount < iVar3);
                }
            } else {
                uVar7 = 1;
                uVar6 = local_58;
            }
        } else {
        LAB_1008e8c37:
            uVar4 = 0;
            uVar7 = 1;
            uVar6 = local_40;
        }
        auVar8._8_8_ = uVar7 | uVar4;
        auVar8._0_8_ = uVar6;
        return auVar8;
    }

    // 0x1008e8cd0
    void TextRun::UpdatePositioning(unsigned long arg1, unsigned long arg2) {
        uint8_t* this_00;
        unsigned int arg1_00;
        bool bVar1;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        TextRun* pTVar8;
        long lVar9;
        unsigned long uVar10;
        TextRun* pTVar11;
        TextRun* pTVar12;
        FontMetrics* pFVar13;
        int* piVar14;
        TextRunCharacter* pTVar15;
        TextRun* pTVar16;
        unsigned long arg1_01;
        TextRun* pTVar17;
        TextRun* arg1_02;
        int iVar18;
        TextRun* arg1_03;
        bool bVar19;
        bool bVar20;
        uint8_t auVar21[16];
        int local_48;
        int local_44;
        int local_34;

        bool cVar2 = IsEmpty();
        if ((!cVar2) && (cVar2 = operator_cast_to_bool(), cVar2)) {
            auVar21 = (anonymous namespace)::DetermineSuitableRangeForCurrentAlignment(this, arg1, arg2);
            pTVar16 = auVar21._8_8_;
            arg1_03 = auVar21._0_8_;
            local_48 = 0;
            bVar19 = false;
            if (arg1_03 == nullptr) {
                pTVar8 = (TextRun*)field_48.size();
                bVar19 = pTVar8 <= pTVar16;
            }
            if (!bVar19) {
                lVar9 = field_48[(unsigned long)arg1_03];
                local_48 = *(int*)(lVar9 + 8);
            }
            this_00 = &field_48;
            local_44 = 0;
            if (arg1_03 <= pTVar16) {
                iVar3 = 0;
                local_44 = 0;
                pTVar8 = arg1_03;
                do {
                    pTVar11 = (TextRun*)this_00->size();
                    pTVar17 = arg1_03;
                    if (pTVar11 <= arg1_03) {
                        lVar9 = this_00->size();
                        pTVar17 = (TextRun*)(lVar9 - 1);
                    }
                    pTVar12 = (TextRun*)(*this_00)[(unsigned long)pTVar17];
                    iVar5 = 0;
                    iVar4 = 0;
                    if ((arg1_03 != nullptr) && (iVar4 = 0, pTVar11 > arg1_03)) {
                        pFVar13 = (FontMetrics*)(*this).operator->();
                        arg1_00 = *(unsigned int*)pTVar12;
                        piVar14 = (int*)(*this_00)[(unsigned long)&arg1_03[-1].field_79];
                        pTVar17 = (TextRun*)(unsigned long)arg1_00;
                        iVar4 = pFVar13->GetKerning(arg1_00, *piVar14);
                    }
                    if (arg1_03 < pTVar11) {
                        pTVar17 = pTVar12;
                        iVar5 = GetCharacterAdvance(*pTVar12, false);
                        iVar5 = iVar5 + iVar4;
                    }
                    bVar20 = *(int*)pTVar12 == FontHelpers::newlineCharCode;
                    if (arg1_03 < pTVar11) {
                        cVar2 = (anonymous namespace)::IsMultiLine((_anonymous_namespace_*)this, pTVar17);
                        if (!cVar2) {
                            bVar1 = false;
                        } else {
                            bVar1 = m_maxLineWidth < iVar5 + iVar3;
                        }
                    } else {
                        bVar1 = false;
                    }
                    if (((bVar20 && arg1_03 < pTVar11) | bVar1 | pTVar11 <= arg1_03)) {
                        pTVar17 = arg1_03;
                        if ((!bVar1) || (m_wrapMode != 1)) {
                            local_34 = 0;
                        } else {
                            iVar18 = 0;
                            pTVar12 = arg1_03;
                            do {
                                arg1_02 = pTVar12;
                                local_34 = 0;
                                if (arg1_02 <= pTVar8)
                                    goto LAB_1008e90d9;
                                pTVar12 = (TextRun*)this_00->size();
                                if (pTVar12 <= arg1_02) {
                                    LogAssert("endCharIndex < m_contents.size()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/TextRun.cpp",
                                              840, nullptr);
                                }
                                pTVar15 = (TextRunCharacter*)(*this_00)[(unsigned long)arg1_02];
                                iVar7 = 0;
                                if (arg1_02 < arg1_03) {
                                    iVar7 = GetCharacterAdvance(*pTVar15, false);
                                }
                                pFVar13 = (FontMetrics*)(*this).operator->();
                                iVar6 = *(int*)pTVar15;
                                piVar14 = (int*)(*this_00)[(unsigned long)&arg1_02[-1].field_79];
                                iVar6 = pFVar13->GetKerning(iVar6, *piVar14);
                                iVar18 = iVar18 + iVar7 + iVar6;
                                pTVar12 = (TextRun*)&arg1_02[-1].field_79;
                            } while (*(int*)pTVar15 != FontHelpers::tabCharCode &&
                                     *(int*)pTVar15 != FontHelpers::spaceCharCode);
                            iVar3 = iVar3 - iVar18;
                            pTVar17 = arg1_02;
                            local_34 = iVar18;
                        LAB_1008e90d9:
                        }
                        iVar3 = GetLeftOffsetForHorizontalAlignment(iVar3);
                        if (pTVar8 < pTVar17) {
                            iVar3 = -iVar3;
                            do {
                                pTVar12 = (TextRun*)this_00->size();
                                if (pTVar12 <= pTVar8) {
                                    LogAssert("lineCharIndex < m_contents.size()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/TextRun.cpp",
                                              864, nullptr);
                                }
                                pTVar15 = (TextRunCharacter*)(*this_00)[(unsigned long)pTVar8];
                                iVar18 = GetCharacterAdvance(*pTVar15, false);
                                *(int*)(pTVar15 + 4) = iVar3;
                                *(int*)(pTVar15 + 8) = local_48;
                                iVar3 = iVar3 + iVar18;
                                pTVar8 = (TextRun*)&pTVar8->field_1;
                            } while (pTVar17 != pTVar8);
                        }
                        iVar3 = GetLineHeight();
                        local_48 = local_48 + iVar3;
                        local_44 = local_44 + 1;
                        pTVar8 = pTVar17;
                        iVar3 = local_34;
                    }
                    iVar5 = iVar5 + iVar4;
                    if (pTVar11 <= arg1_03) {
                        iVar5 = 0;
                    }
                    iVar3 = iVar5 + iVar3;
                    arg1_03 = (TextRun*)&arg1_03->field_1;
                } while (arg1_03 <= pTVar16);
            }
            if ((m_verticalAlignment != 0) && (bVar19)) {
                iVar3 = GetLineHeight();
                iVar3 = GetTopOffsetForVerticalAlignment(local_44 * iVar3);
                lVar9 = this_00->size();
                if (lVar9 != 0) {
                    arg1_01 = 0;
                    do {
                        uVar10 = this_00->size();
                        if (uVar10 <= arg1_01) {
                            LogAssert("charIndex < m_contents.size()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/fonts/TextRun.cpp",
                                      894, nullptr);
                        }
                        lVar9 = (*this_00)[arg1_01];
                        *(int*)(lVar9 + 8) = *(int*)(lVar9 + 8) - iVar3;
                        arg1_01 = arg1_01 + 1;
                        uVar10 = this_00->size();
                    } while (arg1_01 < uVar10);
                }
            }
        }
    }

    // 0x1008e9260
    void TextRun::Remove(unsigned long arg1) {
        Remove(arg1, arg1 + 1);
    }

    // 0x1008e9270
    uint8_t[16] TextRun::Insert(const char* str, unsigned long arg2, unsigned long arg3, unsigned long arg4) {
        uint8_t auVar1[16];
        function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0> local_98[96];
        long local_38;

        fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::function<
            TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::__2, void>(local_98, (__2*)str);
        auVar1 = InsertFiltered((char*)this, (unsigned long)str, arg2,
                                (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)arg3,
                                (uint8_t)local_98, 0);
        return auVar1;
    }

    // 0x1008e9320
    void TextRun::InsertFiltered(
        const char* str, unsigned long arg2, unsigned long arg3,
        const fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>& callback, bool arg5,
        unsigned long arg6) {
        vector<oldscape::rseven::ModelFace>* vector;
        TextRun* this_00;
        TextRun* this_01;
        bool bVar2;
        unsigned int arg1;
        int iVar3;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* pfVar4;
        long lVar6;
        uint64_t in_register_00000081;
        uint8_t auVar8[16];
        unsigned long in_stack_00000008;
        uint64_t local_88;
        int local_80;
        unsigned long local_78;
        int local_68;
        uint32_t uStack_64;
        int local_60;
        TextRun* local_50;
        unsigned long local_48;
        function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>* local_40;
        int local_38;
        int local_34;

        uint32_t local_6c = (uint32_t)arg6;
        vector = (vector<oldscape::rseven::ModelFace>*)(str + 48);
        unsigned long local_58 = arg3;
        pfVar4 = (function<bool_(unsigned int), _64ul, _16ul, _(fixedfunction::Methods) 0>*)vector->size();
        local_40 = callback;
        if (pfVar4 < callback) {
            LogAssert("positionIndex <= m_contents.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      431, nullptr);
        }
        if (!(str->operator_cast_to_bool())) {
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      432, nullptr);
        }
        unsigned long uVar7 = -(unsigned long)(in_stack_00000008 == 0) | in_stack_00000008;
        unsigned long uVar5 = vector->size();
        if (uVar5 < uVar7) {
            lVar6 = vector->size();
            vector->reserve(lVar6 + local_58);
            local_78 = 0;
            local_38 = 0;
            new (&local_88) math::Vector3T();
            pfVar4 = local_40;
            GetPreviousCharacterDetails((TextRun*)str, (unsigned long)local_40, (TextRunCharacter*)&local_88,
                                        &local_38);
            local_48 = 0;
            local_34 = local_38;
            local_50 = (TextRun*)str;
            while ((local_78 < local_58 && (uVar5 = vector->size(), uVar5 < uVar7))) {
                new (&local_68) math::Vector3T();
                arg1 = stringtools::GetUTF8NextChar(arg2, local_78, local_58);
                local_68 = FontHelpers::ToCodeMap(arg1);
                bVar2 = fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::operator()(
                    (function<bool(unsigned int), 64ul, 16ul,
                              (fixedfunction::Methods)0>*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5),
                    (unsigned int*)&local_68);
                iVar3 = local_80;
                if (bVar2) {
                    if (local_68 == FontHelpers::newlineCharCode) {
                        local_60 = GetLineHeight(local_50);
                        local_60 = local_60 + iVar3;
                        local_34 = 0;
                    } else {
                        local_34 = GetCharacterAdvance(local_50, (TextRunCharacter*)&local_68, false);
                    }
                    local_80 = local_60;
                    local_88 = (((uint64_t)uStack_64 << 32) | (uint32_t)local_68);
                    lVar6 = vector->HeapBeginPtr();
                    vector->insert((TextRunCharacter*)(lVar6 + (long)pfVar4 * 12), local_68);
                    pfVar4 = pfVar4 + 1;
                } else {
                    if ((char)local_6c != '\0') {
                        UpdatePositioning(local_50, (unsigned long)local_40, (unsigned long)pfVar4);
                        uVar7 = 1;
                        uVar5 = 1;
                        goto LAB_1008e95ee;
                    }
                    local_48 = (unsigned long)((int)local_48 + 1);
                }
            }
            this_00 = local_50;
            local_38 = local_34;
            UpdatePositioning(local_50, (unsigned long)local_40, (unsigned long)pfVar4);
            if ((this_00->m_maxLineCount == '\0') ||
                (iVar3 = GetNumLines(this_00), uVar5 = local_48, this_01 = local_50,
                 iVar3 <= (int)(unsigned int)this_00->m_maxLineCount)) {
                uVar7 = 0;
                uVar5 = local_48;
            } else {
                uVar7 = 1;
                do {
                    if (local_40 == pfVar4) {
                        pfVar4 = local_40;
                        break;
                    }
                    pfVar4 = pfVar4 - 1;
                    Remove(this_01, (unsigned long)pfVar4);
                    iVar3 = GetNumLines(this_01);
                } while ((int)(unsigned int)this_01->m_maxLineCount < iVar3);
            }
        LAB_1008e95ee:
            local_40 = pfVar4;
        } else {
            uVar7 = 1;
            uVar5 = 0;
        }
        auVar8._8_8_ = (uVar5 & 65535) << 16 | uVar7;
        auVar8._0_8_ = local_40;
        return auVar8;
    }

    // 0x1008e9620
    void TextRun::GetPreviousCharacterDetails(unsigned long arg1, TextRunCharacter& textRunCharacter, int& arg3) {
        uint8_t* this_00;
        uint64_t* puVar4;

        if (arg1 != 0) {
            this_00 = &field_48;
            if (this_00->empty() == '\0') {
                if (this_00->size() == arg1) {
                    puVar4 = (uint64_t*)this_00->back();
                } else {
                    puVar4 = (uint64_t*)(*this_00)[arg1 - 1];
                }
                *(uint32_t*)(textRunCharacter + 8) = *(uint32_t*)(puVar4 + 1);
                *(uint64_t*)textRunCharacter = *puVar4;
                arg3 = GetCharacterAdvance(textRunCharacter, false);
            }
        }
    }

    // 0x1008e9700
    unsigned int TextRun::GetCharacterAdvance(const TextRunCharacter& textRunCharacter, bool arg2) const {
        int iVar1;
        int iVar2;
        uint8_t bVar3;
        FontMetrics* pFVar5;

        unsigned int uVar4 = 0;
        if (*(int*)textRunCharacter != FontHelpers::newlineCharCode) {
            if ((arg2) || (m_visibility == 0)) {
                pFVar5 = (FontMetrics*)(*this).operator->();
                bVar3 = pFVar5->GetGlyphAdvance(*(int*)textRunCharacter);
                iVar2 = FontHelpers::tabCharCode;
                if (bVar3 == 0) {
                    iVar1 = *(int*)textRunCharacter;
                    pFVar5 = (FontMetrics*)(*this).operator->();
                    bVar3 = pFVar5->GetGlyphAdvance(32);
                    if (iVar1 == iVar2) {
                        return (unsigned int)bVar3 * 3;
                    }
                    return (unsigned int)bVar3;
                }
            } else {
                pFVar5 = (FontMetrics*)(*this).operator->();
                bVar3 = pFVar5->GetGlyphAdvance(42);
            }
            uVar4 = (unsigned int)bVar3;
        }
        return uVar4;
    }

    // 0x1008e9790
    unsigned long TextRun::Remove(unsigned long arg1, unsigned long arg2) {
        int* piVar5;
        bool bVar6;

        uint8_t* this_00 = &field_48;
        unsigned long uVar2 = this_00->size();
        if (uVar2 < arg1) {
            LogAssert("m_contents.size() >= start",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      525, nullptr);
        }
        uVar2 = this_00->size();
        if (uVar2 < arg2) {
            LogAssert("m_contents.size() >= end",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      526, nullptr);
        }
        bool cVar1 = operator_cast_to_bool();
        if (!cVar1) {
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      527, nullptr);
        }
        if (arg2 < arg1) {
            std::swap<unsigned long>(arg1, arg2);
        }
        long lVar3 = this_00->HeapBeginPtr();
        TextRun* textRun = (TextRun*)(lVar3 + arg1 * 12);
        lVar3 = this_00->HeapBeginPtr();
        this_00->erase(textRun, (lVar3 + arg2 * 12));
        uVar2 = arg1;
        cVar1 = (anonymous namespace)::IsMultiLine((_anonymous_namespace_*)this, textRun);
        if ((cVar1) && (m_wrapMode == 1)) {
            while (bVar6 = uVar2 != 0, uVar2 = uVar2 - 1, bVar6) {
                if (this_00->size() <= uVar2) {
                    LogAssert("updateFromChar < m_contents.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "fonts/TextRun.cpp",
                              542, nullptr);
                }
                piVar5 = (int*)(*this_00)[uVar2];
                if ((*piVar5 == FontHelpers::spaceCharCode) || (*piVar5 == FontHelpers::tabCharCode))
                    goto LAB_1008e98fa;
            }
            uVar2 = 0;
        }
    LAB_1008e98fa:
        UpdatePositioning(uVar2, arg2);
        return arg1;
    }

    // 0x1008e9a00
    unsigned long TextRun::GetIndexAtPos(int arg1, int arg2) const {
        bool bVar1;
        int iVar3;
        int iVar4;
        unsigned long uVar5;
        long lVar6;
        unsigned long uVar7;
        unsigned long uVar8;
        long lVar9;
        TextRunCharacter* textRunCharacter;
        uint8_t* this_00;
        uint32_t in_register_00000034;
        unsigned long local_40;

        TextRun* textRun = (TextRun*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        bool cVar2 = operator_cast_to_bool();
        if (!cVar2) {
            uVar5 = 0;
        } else {
            cVar2 = (anonymous namespace)::IsMultiLine((_anonymous_namespace_*)this, textRun);
            if ((!cVar2) || (arg1 <= m_maxLineWidth)) {
                cVar2 = field_48.empty();
                if (!cVar2) {
                    lVar6 = field_48.size();
                    if (lVar6 != 0) {
                        uVar5 = 0;
                        do {
                            this_00 = &field_48;
                            lVar6 = (*this_00)[uVar5];
                            iVar4 = *(int*)(lVar6 + 8);
                            iVar3 = GetLineHeight();
                            if (arg2 <= iVar3 + iVar4) {
                                if (arg2 < *(int*)(lVar6 + 8)) {
                                    iVar4 = 2;
                                } else {
                                    if (*(int*)(lVar6 + 4) <= arg1) {
                                        uVar7 = uVar5 + 1;
                                        uVar8 = this_00->size();
                                        if (uVar7 != uVar8) {
                                            lVar9 = (*this_00)[uVar7];
                                            if (*(int*)(lVar9 + 8) != *(int*)(lVar6 + 8)) {
                                                textRunCharacter = (TextRunCharacter*)(*this_00)[uVar5];
                                                iVar4 = GetCharacterAdvance(*textRunCharacter, false);
                                                bVar1 = false;
                                                uVar8 = uVar5;
                                                if (iVar4 + *(int*)(lVar6 + 4) <= arg1) {
                                                    iVar4 = *(int*)(lVar6 + 8);
                                                    iVar3 = GetLineHeight();
                                                    iVar3 = iVar3 + iVar4;
                                                    bVar1 = iVar3 < arg2;
                                                    uVar8 = uVar7;
                                                    if (iVar3 < arg2) {
                                                        uVar8 = local_40;
                                                    }
                                                }
                                                local_40 = uVar8;
                                                if (!bVar1) {
                                                    iVar4 = 1;
                                                    goto LAB_1008e9a97;
                                                }
                                            }
                                        }
                                        goto LAB_1008e9ae5;
                                    }
                                    local_40 = 0;
                                    if (uVar5 != 0) {
                                        local_40 = uVar5 - 1;
                                    }
                                    iVar4 = 1;
                                }
                            LAB_1008e9a97:
                                if (iVar4 != 2) {
                                    return local_40;
                                }
                                break;
                            }
                        LAB_1008e9ae5:
                            uVar5 = uVar5 + 1;
                            uVar7 = field_48.size();
                        } while (uVar5 < uVar7);
                    }
                    lVar6 = field_48.back();
                    iVar4 = *(int*)(lVar6 + 4);
                    bVar1 = true;
                    if (iVar4 <= arg1) {
                        iVar3 = GetLastCharAdvance();
                        if ((iVar3 + iVar4 < arg1) || (iVar4 = *(int*)(lVar6 + 8), arg2 < iVar4)) {
                            bVar1 = true;
                        } else {
                            iVar3 = GetLineHeight();
                            bVar1 = true;
                            if (arg2 <= iVar3 + iVar4) {
                                lVar6 = field_48.size();
                                local_40 = lVar6 - 1;
                                bVar1 = false;
                            }
                        }
                    }
                    if (!bVar1) {
                        return local_40;
                    }
                }
            }
            uVar5 = field_48.size();
        }
        return uVar5;
    }

    // 0x1008e9d50
    unsigned long TextRun::GetIndexAtLineOffset(unsigned long arg1, int arg2) const {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        unsigned long uVar3;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        unsigned long uVar9;
        long lVar10;
        int iVar11;
        bool bVar12;
        unsigned long local_68;
        int local_3c;
        int local_34;

        if (arg2 == 0) {
            LogAssert("lineOffset != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      625, nullptr);
        }
        bool cVar4 = operator_cast_to_bool();
        if (cVar4) {
            this_00 = &field_48;
            cVar4 = this_00->empty();
            if ((!cVar4) && (uVar9 = this_00->size(), arg1 <= uVar9)) {
                iVar2 = -arg2;
                if (-arg2 < 0) {
                    iVar2 = arg2;
                }
                if (arg1 == 0) {
                    if (arg2 < 1) {
                        return 0;
                    }
                    iVar1 = 0;
                    local_3c = 0;
                } else {
                    lVar10 = (*this_00)[arg1 - 1];
                    iVar1 = *(int*)(lVar10 + 4);
                    local_3c = GetCharacterAdvance(arg1 - 1);
                    local_3c = local_3c + iVar1;
                    iVar1 = *(int*)(lVar10 + 8);
                }
                iVar11 = (unsigned int)(0 < arg2) * 2 - 1;
                iVar5 = 0;
                if (0 < arg2) {
                    iVar5 = this_00->size();
                    iVar5 = iVar5 + 1;
                }
                iVar6 = iVar11 + (int)arg1;
                bVar12 = iVar6 == iVar5;
                if (bVar12) {
                    local_34 = 16777215;
                    uVar3 = local_68;
                    iVar6 = 0;
                } else {
                    uVar9 = (unsigned long)iVar6;
                    iVar5 = iVar5 - iVar6;
                    bVar12 = false;
                    local_34 = 16777215;
                    iVar6 = 0;
                    do {
                        lVar10 = (*this_00)[uVar9 - 1];
                        iVar8 = *(int*)(lVar10 + 8);
                        if (iVar8 == iVar1) {
                        } else {
                            iVar1 = iVar8;
                            if (iVar2 <= iVar6) {
                                uVar3 = arg1;
                                iVar6 = iVar6 + 1;
                                break;
                            }
                            iVar6 = iVar6 + 1;
                        }
                        if (iVar6 == iVar2) {
                            iVar8 = *(int*)(lVar10 + 4);
                            iVar7 = GetCharacterAdvance(uVar9 - 1);
                            iVar7 = (iVar8 - local_3c) + iVar7;
                            iVar8 = -iVar7;
                            if (iVar8 < 0) {
                                iVar8 = iVar7;
                            }
                            uVar3 = arg1;
                            if (local_34 <= iVar8)
                                break;
                            arg1 = uVar9;
                            local_34 = iVar8;
                        }
                        uVar9 = uVar9 + (long)iVar11;
                        iVar5 = iVar5 - iVar11;
                        bVar12 = iVar5 == 0;
                        uVar3 = local_68;
                    } while (!bVar12);
                }
                local_68 = uVar3;
                if (!bVar12) {
                    return local_68;
                }
                if (0 < arg2) {
                    uVar9 = this_00->size();
                    return uVar9;
                }
                if (local_34 != 16777215) {
                    uVar9 = 0;
                    if (local_34 <= local_3c) {
                        uVar9 = arg1;
                    }
                    if ((iVar6 + 1) - (unsigned int)(iVar1 == 0) == iVar2) {
                        return uVar9;
                    }
                    return arg1;
                }
            }
        }
        return 0;
    }

    // 0x1008ea030
    int TextRun::GetWidth() const {
        bool bVar2;
        int iVar4;
        long lVar5;
        TextRunCharacter* textRunCharacter;
        int iVar6;
        ReturnValue local_48;
        ReturnValue local_40;

        uint8_t* this_00 = &field_48;
        bool cVar1 = this_00->empty();
        int iVar3 = 0;
        if (!cVar1) {
            iVar3 = GetNumLines();
            if (iVar3 == 1) {
                lVar5 = this_00->back();
                iVar4 = *(int*)(lVar5 + 4);
                iVar3 = GetLastCharAdvance();
                iVar3 = iVar3 + iVar4;
            } else {
                local_48 = this_00->rbegin();
                local_40 = this_00->rend();
                bVar2 = local_48 != local_40;
                iVar3 = 0;
                if (bVar2) {
                    iVar4 = -1;
                    iVar3 = 0;
                    iVar6 = iVar3;
                    do {
                        lVar5 = local_48.operator->();
                        if (*(int*)(lVar5 + 8) != iVar4) {
                            textRunCharacter = (TextRunCharacter*)*local_48;
                            iVar4 = GetCharacterAdvance(*textRunCharacter, false);
                            lVar5 = local_48.operator->();
                            iVar4 = iVar4 + *(int*)(lVar5 + 4);
                            bVar2 = iVar3 < iVar4;
                            iVar3 = iVar6;
                            if (bVar2) {
                                iVar3 = iVar4;
                            }
                            lVar5 = local_48.operator->();
                            iVar4 = *(int*)(lVar5 + 8);
                            iVar6 = iVar3;
                        }
                        ++local_48;
                        local_40 = this_00->rend();
                        bVar2 = local_48 != local_40;
                    } while (bVar2);
                }
            }
        }
        return iVar3;
    }

    // 0x1008ea190
    int TextRun::GetLeftOffsetForHorizontalAlignment(int arg1) const {
        TextHorizontalAlignment TVar1 = m_horizontalAlignment;
        int iVar2 = 0;
        if (TVar1 != 0) {
            if (TVar1 == 2) {
                iVar2 = arg1;
            } else {
                if (TVar1 != 1) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/fonts/TextRun.cpp",
                                    777, nullptr);
                }
                iVar2 = arg1 / 2;
            }
        }
        return iVar2;
    }

    // 0x1008ea1e0
    int TextRun::GetTopOffsetForVerticalAlignment(int arg1) const {
        TextVerticalAlignment TVar1 = m_verticalAlignment;
        int iVar2 = 0;
        if (TVar1 != 0) {
            if (TVar1 == 2) {
                iVar2 = arg1;
            } else {
                if (TVar1 != 1) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/fonts/TextRun.cpp",
                                    790, nullptr);
                }
                iVar2 = arg1 / 2;
            }
        }
        return iVar2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008e4630
    bool ends_with<eastl::fixed_string<char, 512>>(const eastl::fixed_string<char, 512>& str1, const char* str2) {
        bool bVar5;

        unsigned long arg2 = _strlen(str2) & 4294967295;
        if (str1.size() < arg2) {
            bVar5 = false;
        } else {
            bVar5 = str1.compare(str1.size() - arg2, arg2, str2) == 0;
        }
        return bVar5;
    }

    // 0x1008e4b40
    bool ends_with<StringView>(const StringView& stringView, const char* str) {
        long lVar4;
        bool bVar5;
        StringView local_40;

        unsigned long arg2 = _strlen(str) & 4294967295;
        if (ShuffledPacketFactory::p2_alt2() < arg2) {
            bVar5 = false;
        } else {
            lVar4 = ShuffledPacketFactory::p2_alt2();
            local_40.StringView<char const*>(str);
            bVar5 = stringView.compare(lVar4 - arg2, arg2, &local_40) == 0;
        }
        return bVar5;
    }

} // namespace jag

namespace jag::graphics {
    namespace {
        // 0x1008e99a0
        bool IsMultiLine(const TextRun& textRun) {
            uint8_t bVar1 = GetAlphaTestThreshold();
            return 1 < bVar1;
        }

        // 0x1008ea230
        void DetermineSuitableRangeForCurrentAlignment(const TextRun& textRun, unsigned long arg2, unsigned long arg3) {
            int iVar1;
            vector<oldscape::rseven::ModelFace>* vector;
            vector<TextRunCharacter, BucketAllocatorEASTL>* pvVar4;
            uint64_t extraout_RDX;
            int* arg1;
            uint8_t auVar5[16];
            unsigned long local_70;
            int local_64;
            uint64_t local_60;
            uint64_t local_58;
            uint64_t local_50;
            uint64_t local_40;
            unsigned long local_38;

            auto puVar3 = std::min<unsigned long>(arg2, arg3);
            unsigned long arg2_00 = *puVar3;
            puVar3 = std::max<unsigned long>(arg2, arg3);
            unsigned long arg2_01 = *puVar3;
            vector = (vector<oldscape::rseven::ModelFace>*)textRun.GetMaterial();
            unsigned long local_48 = vector->size();
            if ((arg2_00 == 0) && (arg2_01 == local_48)) {
                local_60 = (unsigned long)local_60._4_4_ << 32;
                arg1 = (int*)&local_60;
            } else {
                pvVar4 = (vector<TextRunCharacter, BucketAllocatorEASTL>*)textRun.GetMaterial();
                local_60 = GetLineStartIndex(pvVar4, arg2_00, false);
                pvVar4 = (vector<TextRunCharacter, BucketAllocatorEASTL>*)textRun.GetMaterial();
                local_70 = GetLineEndIndex(pvVar4, arg2_01, false);
                iVar1 = textRun.capacity();
                if (iVar1 == 2) {
                    iVar1 = textRun.GetValue();
                    if (iVar1 == 2) {
                        local_40 = (unsigned long)local_40._4_4_ << 32;
                        arg1 = (int*)&local_40;
                        puVar3 = &local_70;
                    } else {
                        pvVar4 = (vector<TextRunCharacter, BucketAllocatorEASTL>*)textRun.GetMaterial();
                        local_40 = GetLineEndIndex(pvVar4, arg2_01, true);
                        local_64 = 0;
                        arg1 = &local_64;
                        puVar3 = &local_40;
                    }
                    goto LAB_1008ea35d;
                }
                if (iVar1 != 1) {
                    if (iVar1 != 0) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/fonts/TextRun.cpp",
                                        116, nullptr);
                    }
                    iVar1 = textRun.GetValue();
                    if (iVar1 == 0) {
                        puVar3 = &local_60;
                    } else {
                        pvVar4 = (vector<TextRunCharacter, BucketAllocatorEASTL>*)textRun.GetMaterial();
                        local_38 = GetLineStartIndex(pvVar4, arg2_00, true);
                        puVar3 = &local_38;
                    }
                    auVar5 = std::make_pair<unsigned long const&, unsigned long const&>(*puVar3, local_48);
                    return auVar5;
                }
                local_40 = (unsigned long)local_40._4_4_ << 32;
                arg1 = (int*)&local_40;
            }
            puVar3 = &local_48;
        LAB_1008ea35d:
            uint32_t uVar2 = std::make_pair<int, unsigned long const&>(*arg1, *puVar3);
            local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar2);
            uint64_t local_30 = extraout_RDX;
            local_58.pair<int, unsigned long, false>(local_38);
            auVar5._8_8_ = local_50;
            auVar5._0_8_ = local_58;
            return auVar5;
        }

    } // namespace

} // namespace jag::graphics
