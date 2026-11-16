// libs/graphics/runetek7/fonts/TextRun.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TextRun.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    TextRun::GetFontMetrics() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int TextRun::GetMaxLineWidth() const;

    // 0x1000fa840: the linker folded this into oldscape::graphics::NXTPixScreen::GetHeight() const, which has identical code
    int TextRun::GetVisibility() const;

    // 0x10012dc00: the linker folded this into oldscape::graphics::NXTPixScreen::GetViewportX(), which has identical code
    int TextRun::GetWrapMode() const;

    // 0x10018b300: the linker folded this into oldscape::jagex3::Js5::GetIndexVersion() const, which has identical code
    int TextRun::GetVerticalAlignment() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    TextRun::GetContents() const;

    // 0x1003cf2a0: the linker folded this into game::WorldMapDefaults::GetDropShadowColourRGBA() const, which has identical code
    int TextRun::GetHorizontalAlignment() const;

    // 0x10080e330: the linker folded this into GeometryBatch::GetBoneCount() const, which has identical code
    uchar TextRun::GetMaxLineCount() const;

    // 0x1008e2a10, 112 bytes, placed by debug map only (low confidence)
    // TextRunSlice::GetVerticalOrigin() const
    int TextRunSlice::GetVerticalOrigin() {
        byte bVar2;
        int iVar3;
        shared_ptr* this_00;
        FontMetrics* pFVar4;
        type* in_RSI;

        this_00 = (shared_ptr*)(field_0, in_RSI)->SSOBeginPtr();
        if (!shared_ptr::operator_cast_to_bool(this_00)) {
            /* WARNING: Subroutine does not return */
            LogAssert("textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      151, (char*)0);
        }
        pFVar4 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_00);
        iVar3 = pFVar4->GetVerticalSpacing();
        pFVar4 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_00);
        bVar2 = pFVar4->GetMaxDescent();
        return iVar3 - (uint)bVar2;
    }

    // 0x1008e2a90, 64 bytes, placed by debug map only (low confidence)
    // TextRunSlice::ShouldHide(TextRunCharacter const&) const
    bool TextRunSlice::ShouldHide(TextRunCharacter* param_1) {
        int iVar1;
        bool bVar3;

        iVar1 = field_0->GetAliveCount();
        bVar3 = true;
        if (iVar1 != 2) {
            if (iVar1 == 1) {
                if (field_24 != false) {
                    bVar3 = (TextRunCharacter*)back(this) != param_1;
                }
            } else {
                bVar3 = false;
            }
        }
        return bVar3;
    }

    // 0x1008e8330, 128 bytes, placed by __FILE__ string
    // TextRunSlice::GetHeight() const
    int TextRunSlice::GetHeight() {
        char cVar2;
        int iVar3;
        shared_ptr* this_00;
        FontMetrics* this_01;
        type* in_RSI;

        this_00 = (shared_ptr*)(field_0, in_RSI)->SSOBeginPtr();
        if (!shared_ptr::operator_cast_to_bool(this_00)) {
            /* WARNING: Subroutine does not return */
            LogAssert("textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      158, (char*)0);
        }
        cVar2 = IsEmpty(this);
        iVar3 = 0;
        if (cVar2 == '\0') {
            this_01 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_00);
            iVar3 = this_01->GetVerticalSpacing();
            iVar3 = (iVar3 + *(int*)(field_16 + -4)) - *(int*)(field_8 + 8);
        }
        return iVar3;
    }

    // 0x1008e83b0, 240 bytes, placed by __FILE__ string
    // TextRunSlice::GetLastCharAdvance() const
    uint TextRunSlice::GetLastCharAdvance() {
        int iVar1;
        TextRunCharacter* pTVar2;
        int iVar3;
        char cVar5;
        byte bVar6;
        uint uVar7;
        shared_ptr* this_00;
        FontMetrics* pFVar8;
        type* in_RSI;

        this_00 = (shared_ptr*)(field_0, in_RSI)->SSOBeginPtr();
        if (!shared_ptr::operator_cast_to_bool(this_00)) {
            /* WARNING: Subroutine does not return */
            LogAssert("textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      165, (char*)0);
        }
        cVar5 = IsEmpty(this);
        uVar7 = 0;
        if ((cVar5 == '\0') && (*(int*)(field_16 + -12) != FontHelpers::newlineCharCode)) {
            cVar5 = ShouldHide(this, field_16 + -12);
            if (cVar5 == '\0') {
                pTVar2 = field_16;
                pFVar8 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_00);
                bVar6 = pFVar8->GetGlyphAdvance(*(int*)(pTVar2 + -12));
                iVar3 = FontHelpers::tabCharCode;
                if (bVar6 == 0) {
                    iVar1 = *(int*)(pTVar2 + -12);
                    pFVar8 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_00);
                    bVar6 = pFVar8->GetGlyphAdvance(32);
                    if (iVar1 == iVar3) {
                        return (uint)bVar6 * 3;
                    }
                    return (uint)bVar6;
                }
            } else {
                pFVar8 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_00);
                bVar6 = pFVar8->GetGlyphAdvance(42);
            }
            uVar7 = (uint)bVar6;
        }
        return uVar7;
    }

    // 0x1008e84d0, 256 bytes, placed by __FILE__ string
    // ConvertToUTF8Inner(eastl::basic_string<char, BucketAllocatorEASTL>&, TextRunCharacter const*, TextRunCharacter const*)
    void ConvertToUTF8Inner(basic_string* param_1, TextRunCharacter* param_2, TextRunCharacter* param_3) {
        bool bVar1;
        uint uVar2;
        undefined8 in_RAX;
        long lVar3;
        undefined8 uVar4;
        TextRunCharacter* pTVar5;
        ulong uVar6;
        undefined4 uVar7;

        if (param_2 == param_3) {
            eastl::basic_string<char, BucketAllocatorEASTL>::operator=(
                (basic_string<char, BucketAllocatorEASTL>*)param_1, "");
        } else if (param_2 < param_3) {
            uVar6 = 0;
            pTVar5 = param_2;
            do {
                uVar2 = FontHelpers::FromCodeMap(*(uint*)pTVar5);
                lVar3 = stringtools::GetCodepointUTF8ByteSize(uVar2);
                uVar6 = uVar6 + lVar3;
                pTVar5 = pTVar5 + 12;
            } while (pTVar5 < param_3);
            eastl::string::clear();
            param_1->reserve(uVar6);
            for (; param_2 < param_3; param_2 = param_2 + 12) {
                uVar2 = FontHelpers::FromCodeMap(*(uint*)param_2);
                bVar1 =
                    stringtools::AppendUTF8Codepoint<eastl::basic_string<char, BucketAllocatorEASTL>>(uVar2, param_1);
                uVar7 = (undefined4)((ulong)in_RAX >> 32);
                if (!bVar1) {
                    uVar4 = logger::default_logger();
                    in_RAX = CONCAT44(uVar7, *(uint*)param_2);
                    logger::Logger::Log(uVar4, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/fonts/TextRun.cpp",
                                        234, "Could not convert char code %u from a Unicode codepoint to UTF8", in_RAX);
                }
            }
        } else {
            eastl::string::clear();
            param_1->reserve(0);
        }
    }

    // 0x1008e8660, 32 bytes, placed by neighbouring functions
    // TextRunSlice::ConvertToUTF8(eastl::basic_string<char, BucketAllocatorEASTL>&) const
    void TextRunSlice::ConvertToUTF8(basic_string* param_1) {
        ConvertToUTF8Inner(param_1, field_8, field_16);
    }

    // 0x1008e8680, 64 bytes, placed by class name
    // TextRun::ConvertToUTF8(eastl::basic_string<char, BucketAllocatorEASTL>&) const
    void TextRun::ConvertToUTF8(basic_string* param_1) {
        TextRunCharacter* pTVar1;
        TextRunCharacter* pTVar2;

        pTVar1 = (TextRunCharacter*)(&field_48)->HeapBeginPtr();
        pTVar2 = (TextRunCharacter*)(&field_48)->end();
        ConvertToUTF8Inner(param_1, pTVar1, pTVar2);
    }

    // 0x1008e86c0, 240 bytes, placed by class name
    // TextRun::Slice(unsigned long, unsigned long) const
    TextRun* TextRun::Slice(ulong param_1, ulong param_2) {
        vector<oldscape::rseven::ModelFace, eastl::allocator>* this_00;
        ulong uVar1;
        long lVar2;
        ulong uVar3;
        ulong in_RCX;
        TextRunCharacter* pTVar4;
        TextRunCharacter* pTVar5;
        bool bVar6;
        ulong local_40;
        ulong local_38;

        local_40 = param_2;
        if (param_2 != in_RCX) {
            this_00 = (vector<oldscape::rseven::ModelFace, eastl::allocator>*)(param_1 + 48);
            local_38 = in_RCX;
            uVar1 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(this_00);
            uVar3 = local_38;
            if ((param_2 <= uVar1) &&
                (uVar1 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(this_00), uVar3 <= uVar1)) {
                if (local_38 < local_40) {
                    std::swap<unsigned long>(&local_40, &local_38);
                }
                lVar2 = this_00->HeapBeginPtr();
                pTVar5 = (TextRunCharacter*)(lVar2 + local_40 * 12);
                lVar2 = this_00->HeapBeginPtr();
                pTVar4 = (TextRunCharacter*)(lVar2 + local_38 * 12);
                if (*(char*)(param_1 + 40) == '\0') {
                    bVar6 = false;
                } else {
                    uVar3 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(this_00);
                    bVar6 = local_38 == uVar3;
                }
                goto LAB_1008e8717;
            }
        }
        pTVar5 = (TextRunCharacter*)0;
        pTVar4 = (TextRunCharacter*)0;
        bVar6 = false;
    LAB_1008e8717:
        new (this) TextRunSlice(param_1, pTVar5, pTVar4, bVar6);
        return this;
    }

    // 0x1008e87b0, 80 bytes, placed by class name
    // TextRun::SetMaxLineWidth(int)
    void TextRun::SetMaxLineWidth(int param_1) {
        int iVar2;
        FontMetrics* this_00;

        if (operator_cast_to_bool()) {
            this_00 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
            iVar2 = this_00->GetVerticalSpacing();
            if (param_1 < iVar2 * 2) {
                param_1 = 2147483647;
            }
        }
        if (m_maxLineWidth != param_1) {
            m_maxLineWidth = param_1;
            UpdatePositioning(this);
        }
    }

    // 0x1008e8800, 48 bytes, placed by class name
    // TextRun::UpdatePositioning()
    void TextRun::UpdatePositioning() {
        ulong uVar1;

        uVar1 = (&field_48)->size();
        UpdatePositioning(this, 0, uVar1);
    }

    // 0x1008e8830, 32 bytes, placed by class name
    // TextRun::SetMaxLineCount(unsigned char)
    void TextRun::SetMaxLineCount(uchar param_1) {
        if (m_maxLineCount != param_1) {
            m_maxLineCount = param_1;
            UpdatePositioning(this);
        }
    }

    // 0x1008e8850, 32 bytes, placed by class name
    // TextRun::SetContentVisibility(TextContentVisibility)
    void TextRun::SetContentVisibility(int param_2) {
        if (m_visibility != param_2) {
            m_visibility = param_2;
            UpdatePositioning(this);
        }
    }

    // 0x1008e8870, 80 bytes, placed by class name
    // TextRun::SetFontMetrics(shared_ptr<FontMetrics> const&)
    void TextRun::SetFontMetrics(shared_ptr* param_1) {
        bool bVar1;

        bVar1 = operator!=((shared_ptr*)this, param_1);
        if (bVar1) {
            shared_ptr<FontMetrics>::operator=((shared_ptr<FontMetrics>*)this, param_1);
            bVar1 = operator_cast_to_bool();
            if (bVar1) {
                if (IsEmpty(this) == '\0') {
                    UpdatePositioning(this);
                }
            }
        }
    }

    // 0x1008e8920, 32 bytes, placed by class name
    // TextRun::SetWrapMode(TextWrapMode)
    void TextRun::SetWrapMode(int param_2) {
        if (m_wrapMode != param_2) {
            m_wrapMode = param_2;
            UpdatePositioning(this);
        }
    }

    // 0x1008e8940, 32 bytes, placed by class name
    // TextRun::SetLineSpacing(int)
    void TextRun::SetLineSpacing(int param_1) {
        if (m_lineSpacing != param_1) {
            m_lineSpacing = param_1;
            UpdatePositioning(this);
        }
    }

    // 0x1008e8960, 32 bytes, placed by class name
    // TextRun::SetAlignment(TextHorizontalAlignment, TextVerticalAlignment)
    undefined1 TextRun::SetAlignment(int param_2, int param_3) {
        if ((m_horizontalAlignment != param_2) || (m_verticalAlignment != param_3)) {
            m_horizontalAlignment = param_2;
            m_verticalAlignment = param_3;
            UpdatePositioning(this);
        }
        return 1;
    }

    // 0x1008e8980, 176 bytes, placed by class name
    // TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)
    undefined1[16] TextRun::InsertCodepoints(uint* param_1, ulong param_2, ulong param_3, ulong param_4) {
        undefined1 auVar1[16];
        __1 local_98[96];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::function<
            TextRun::InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long)::__1, void>(local_98);
        auVar1 = InsertCodepointsFiltered(this, param_1, param_2, param_3, (function*)local_98, param_4);
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return auVar1;
    }

    // 0x1008e8a30, 560 bytes, placed by class name
    // TextRun::InsertCodepointsFiltered(unsigned int*, unsigned long, unsigned long, fixedfunction::function<bool (unsigned int), 64ul, 16ul, (fixedfunction::Methods)0> const&, unsigned long)
    undefined1[16] TextRun::InsertCodepointsFiltered(uint* param_1, ulong param_2, ulong param_3, function* param_4,
                                                     ulong param_5) {
        undefined1* this_00;
        Layout* this_01;
        bool bVar1;
        int iVar2;
        ulong uVar3;
        long lVar4;
        ulong uVar5;
        ulong uVar6;
        undefined1 auVar7[16];
        undefined4 local_80[4];
        Layout* local_60;
        ulong local_58;
        ulong local_48;
        bool local_31;

        this_00 = &field_48;
        local_48 = param_2;
        uVar3 = this_00->size();
        if (uVar3 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("positionIndex <= m_contents.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      358, (char*)0);
        }
        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      359, (char*)0);
        }
        uVar5 = -(ulong)(param_5 == 0) | param_5;
        uVar3 = this_00->size();
        if (uVar3 < uVar5) {
            lVar4 = this_00->size();
            uVar3 = local_48;
            if (uVar5 < lVar4 + local_48) {
                lVar4 = this_00->size();
                uVar3 = uVar5 - lVar4;
            }
            lVar4 = this_00->size();
            local_60 = (Layout*)this_00;
            this_00->reserve(lVar4 + uVar3);
            local_31 = uVar3 != 0;
            uVar5 = param_3;
            local_48 = uVar3;
            if (uVar3 != 0) {
                uVar3 = 0;
                uVar6 = 1;
                do {
                    new (local_80) math::Vector3T<int>();
                    local_80[0] = FontHelpers::ToCodeMap(param_1[uVar3]);
                    bVar1 =
                        fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::operator()(
                            (function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>*)param_4,
                            (uint*)local_80);
                    this_01 = local_60;
                    if (!bVar1) {
                        UpdatePositioning((TextRun*)this, param_3, uVar5);
                        local_58 = uVar5;
                        break;
                    }
                    lVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_60);
                    this_01->insert((TextRunCharacter*)(lVar4 + uVar5 * 12), local_80);
                    uVar5 = uVar5 + 1;
                    local_31 = uVar6 < local_48;
                    bVar1 = uVar6 < local_48;
                    uVar3 = uVar6;
                    uVar6 = (ulong)((int)uVar6 + 1);
                } while (bVar1);
            }
            uVar3 = 65536;
            if ((local_31 & 1U) == 0) {
                UpdatePositioning((TextRun*)this, param_3, uVar5);
                uVar6 = 1;
                if ((((TextRun*)this)->m_maxLineCount == '\0') ||
                    (iVar2 = GetNumLines((TextRun*)this), iVar2 <= (int)(uint)((TextRun*)this)->m_maxLineCount)) {
                    uVar6 = 0;
                    uVar3 = 0;
                } else {
                    uVar3 = 0;
                    do {
                        if (param_3 == uVar5)
                            goto LAB_1008e8c37;
                        uVar5 = uVar5 - 1;
                        Remove((TextRun*)this, uVar5);
                        iVar2 = GetNumLines((TextRun*)this);
                    } while ((int)(uint)((TextRun*)this)->m_maxLineCount < iVar2);
                }
            } else {
                uVar6 = 1;
                uVar5 = local_58;
            }
        } else {
        LAB_1008e8c37:
            uVar3 = 0;
            uVar6 = 1;
            uVar5 = param_3;
        }
        auVar7._8_8_ = uVar6 | uVar3;
        auVar7._0_8_ = uVar5;
        return auVar7;
    }

    // 0x1008e8cd0, 1184 bytes, placed by class name
    // TextRun::UpdatePositioning(unsigned long, unsigned long)
    void TextRun::UpdatePositioning(ulong param_1, ulong param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        ulong uVar9;
        long lVar10;
        ulong uVar11;
        ulong uVar12;
        TextRunCharacter* pTVar13;
        FontMetrics* pFVar14;
        int* piVar15;
        ulong uVar16;
        ulong uVar17;
        ulong uVar18;
        ulong uVar19;
        int iVar20;
        bool bVar21;
        undefined1 auVar22[16];
        int local_48;
        int local_44;
        int local_34;

        cVar2 = IsEmpty(this);
        if ((cVar2 == '\0') && (bVar3 = operator_cast_to_bool(), bVar3)) {
            auVar22 = (anonymous namespace)::DetermineSuitableRangeForCurrentAlignment(this, param_1, param_2);
            uVar11 = auVar22._8_8_;
            uVar17 = auVar22._0_8_;
            local_48 = 0;
            bVar3 = false;
            if (uVar17 == 0) {
                uVar9 = (&field_48)->size();
                bVar3 = uVar9 <= uVar11;
            }
            if (!bVar3) {
                lVar10 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                    (vector<TextRunCharacter, BucketAllocatorEASTL>*)&field_48, uVar17);
                local_48 = *(int*)(lVar10 + 8);
            }
            this_00 = &field_48;
            local_44 = 0;
            if (uVar17 <= uVar11) {
                iVar4 = 0;
                local_44 = 0;
                uVar9 = uVar17;
                do {
                    uVar12 = this_00->size();
                    uVar18 = uVar17;
                    if (uVar12 <= uVar17) {
                        lVar10 = this_00->size();
                        uVar18 = lVar10 - 1;
                    }
                    pTVar13 = (TextRunCharacter*)eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                        (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar18);
                    iVar6 = 0;
                    iVar5 = 0;
                    if ((uVar17 != 0) && (iVar5 = 0, uVar12 > uVar17)) {
                        pFVar14 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
                        iVar5 = *(int*)pTVar13;
                        piVar15 = (int*)eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                            (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar17 - 1);
                        iVar5 = pFVar14->GetKerning(iVar5, *piVar15);
                    }
                    if (uVar17 < uVar12) {
                        iVar6 = GetCharacterAdvance(this, pTVar13, false);
                        iVar6 = iVar6 + iVar5;
                    }
                    bVar21 = *(int*)pTVar13 == FontHelpers::newlineCharCode;
                    if (uVar17 < uVar12) {
                        cVar2 = (anonymous namespace)::IsMultiLine(this);
                        if (cVar2 == '\0') {
                            bVar1 = false;
                        } else {
                            bVar1 = m_maxLineWidth < iVar6 + iVar4;
                        }
                    } else {
                        bVar1 = false;
                    }
                    if ((bool)((bVar21 && uVar17 < uVar12) | bVar1 | uVar12 <= uVar17)) {
                        uVar18 = uVar17;
                        if ((!bVar1) || (m_wrapMode != 1)) {
                            local_34 = 0;
                        } else {
                            iVar20 = 0;
                            uVar16 = uVar17;
                            do {
                                uVar19 = uVar16;
                                local_34 = 0;
                                if (uVar19 <= uVar9)
                                    goto LAB_1008e90d9;
                                uVar16 = this_00->size();
                                if (uVar16 <= uVar19) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("endCharIndex < m_contents.size()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/TextRun.cpp",
                                              840, (char*)0);
                                }
                                pTVar13 = (TextRunCharacter*)
                                    eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                        (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar19);
                                iVar8 = 0;
                                if (uVar19 < uVar17) {
                                    iVar8 = GetCharacterAdvance(this, pTVar13, false);
                                }
                                pFVar14 =
                                    (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
                                iVar7 = *(int*)pTVar13;
                                piVar15 = (int*)eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                    (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar19 - 1);
                                iVar7 = pFVar14->GetKerning(iVar7, *piVar15);
                                iVar20 = iVar20 + iVar8 + iVar7;
                                uVar16 = uVar19 - 1;
                            } while (*(int*)pTVar13 != FontHelpers::tabCharCode &&
                                     *(int*)pTVar13 != FontHelpers::spaceCharCode);
                            iVar4 = iVar4 - iVar20;
                            uVar18 = uVar19;
                            local_34 = iVar20;
                        LAB_1008e90d9:
                        }
                        iVar4 = GetLeftOffsetForHorizontalAlignment(this, iVar4);
                        if (uVar9 < uVar18) {
                            iVar4 = -iVar4;
                            do {
                                uVar16 = this_00->size();
                                if (uVar16 <= uVar9) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("lineCharIndex < m_contents.size()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/TextRun.cpp",
                                              864, (char*)0);
                                }
                                pTVar13 = (TextRunCharacter*)
                                    eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                        (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar9);
                                iVar20 = GetCharacterAdvance(this, pTVar13, false);
                                *(int*)(pTVar13 + 4) = iVar4;
                                *(int*)(pTVar13 + 8) = local_48;
                                iVar4 = iVar4 + iVar20;
                                uVar9 = uVar9 + 1;
                            } while (uVar18 != uVar9);
                        }
                        iVar4 = GetLineHeight(this);
                        local_48 = local_48 + iVar4;
                        local_44 = local_44 + 1;
                        uVar9 = uVar18;
                        iVar4 = local_34;
                    }
                    iVar6 = iVar6 + iVar5;
                    if (uVar12 <= uVar17) {
                        iVar6 = 0;
                    }
                    iVar4 = iVar6 + iVar4;
                    uVar17 = uVar17 + 1;
                } while (uVar17 <= uVar11);
            }
            if ((m_verticalAlignment != 0) && (bVar3)) {
                iVar4 = GetLineHeight(this);
                iVar4 = GetTopOffsetForVerticalAlignment(this, local_44 * iVar4);
                lVar10 = this_00->size();
                if (lVar10 != 0) {
                    uVar17 = 0;
                    do {
                        uVar11 = this_00->size();
                        if (uVar11 <= uVar17) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("charIndex < m_contents.size()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/fonts/TextRun.cpp",
                                      894, (char*)0);
                        }
                        lVar10 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                            (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar17);
                        *(int*)(lVar10 + 8) = *(int*)(lVar10 + 8) - iVar4;
                        uVar17 = uVar17 + 1;
                        uVar11 = this_00->size();
                    } while (uVar17 < uVar11);
                }
            }
        }
    }

    // 0x1008e9260, 16 bytes, placed by class name
    // TextRun::Remove(unsigned long)
    void TextRun::Remove(ulong param_1) {
        Remove(this, param_1, param_1 + 1);
    }

    // 0x1008e9270, 176 bytes, placed by class name
    // TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)
    undefined1[16] TextRun::Insert(char* param_1, ulong param_2, ulong param_3, ulong param_4) {
        undefined1 auVar1[16];
        __2 local_98[96];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::function<
            TextRun::Insert(char const*, unsigned long, unsigned long, unsigned long)::__2, void>(local_98);
        auVar1 = InsertFiltered(this, param_1, param_2, param_3, (function*)local_98, false, param_4);
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)local_98);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return auVar1;
    }

    // 0x1008e9320, 752 bytes, placed by class name
    // TextRun::InsertFiltered(char const*, unsigned long, unsigned long, fixedfunction::function<bool (unsigned int), 64ul, 16ul, (fixedfunction::Methods)0> const&, bool, unsigned long)
    undefined1[16] TextRun::InsertFiltered(char* param_1, ulong param_2, ulong param_3, function* param_4, bool param_5,
                                           ulong param_6) {
        undefined1* this_00;
        TextRun* this_02;
        bool bVar1;
        uint uVar2;
        int iVar3;
        ulong uVar4;
        long lVar5;
        undefined3 in_register_00000089;
        ulong uVar6;
        ulong uVar7;
        undefined1 auVar8[16];
        undefined8 local_88;
        int local_80;
        ulong local_78;
        undefined4 local_6c;
        int local_68;
        undefined4 uStack_64;
        int local_60;
        ulong local_48;
        ulong local_40;
        int local_38;
        int local_34;

        local_6c = CONCAT31(in_register_00000089, param_5);
        this_00 = &field_48;
        uVar4 = this_00->size();
        local_40 = param_3;
        if (uVar4 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("positionIndex <= m_contents.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      431, (char*)0);
        }
        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      432, (char*)0);
        }
        uVar7 = -(ulong)(param_6 == 0) | param_6;
        uVar4 = this_00->size();
        if (uVar4 < uVar7) {
            lVar5 = this_00->size();
            this_00->reserve(lVar5 + param_2);
            local_78 = 0;
            local_38 = 0;
            new (&local_88) math::Vector3T<int>();
            uVar6 = local_40;
            GetPreviousCharacterDetails(this, local_40, (TextRunCharacter*)&local_88, &local_38);
            local_48 = 0;
            local_34 = local_38;
            while ((local_78 < param_2 && (uVar4 = this_00->size(), uVar4 < uVar7))) {
                new (&local_68) math::Vector3T<int>();
                uVar2 = stringtools::GetUTF8NextChar(param_1, &local_78, param_2);
                local_68 = FontHelpers::ToCodeMap(uVar2);
                bVar1 = fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>::operator()(
                    (function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>*)param_4, (uint*)&local_68);
                iVar3 = local_80;
                if (bVar1) {
                    if (local_68 == FontHelpers::newlineCharCode) {
                        local_60 = GetLineHeight((TextRun*)this);
                        local_60 = local_60 + iVar3;
                        local_34 = 0;
                    } else {
                        local_34 = GetCharacterAdvance((TextRun*)this, (TextRunCharacter*)&local_68, false);
                    }
                    local_80 = local_60;
                    local_88 = CONCAT44(uStack_64, local_68);
                    lVar5 = this_00->HeapBeginPtr();
                    this_00->insert((TextRunCharacter*)(lVar5 + uVar6 * 12), (TextRunCharacter*)&local_68);
                    uVar6 = uVar6 + 1;
                } else {
                    if ((char)local_6c != '\0') {
                        UpdatePositioning((TextRun*)this, local_40, uVar6);
                        uVar7 = 1;
                        uVar4 = 1;
                        goto LAB_1008e95ee;
                    }
                    local_48 = (ulong)((int)local_48 + 1);
                }
            }
            local_38 = local_34;
            UpdatePositioning((TextRun*)this, local_40, uVar6);
            if ((((TextRun*)this)->m_maxLineCount == '\0') ||
                (iVar3 = GetNumLines((TextRun*)this), uVar4 = local_48, this_02 = (TextRun*)this,
                 iVar3 <= (int)(uint)((TextRun*)this)->m_maxLineCount)) {
                uVar7 = 0;
                uVar4 = local_48;
            } else {
                uVar7 = 1;
                do {
                    if (local_40 == uVar6) {
                        uVar6 = local_40;
                        break;
                    }
                    uVar6 = uVar6 - 1;
                    Remove(this_02, uVar6);
                    iVar3 = GetNumLines(this_02);
                } while ((int)(uint)this_02->m_maxLineCount < iVar3);
            }
        LAB_1008e95ee:
            local_40 = uVar6;
        } else {
            uVar7 = 1;
            uVar4 = 0;
        }
        auVar8._8_8_ = (uVar4 & 65535) << 16 | uVar7;
        auVar8._0_8_ = local_40;
        return auVar8;
    }

    // 0x1008e9620, 144 bytes, placed by class name
    // TextRun::GetPreviousCharacterDetails(unsigned long, TextRunCharacter&, int&)
    void TextRun::GetPreviousCharacterDetails(ulong param_1, TextRunCharacter* param_2, int* param_3) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        ulong uVar3;
        undefined8* puVar4;

        if (param_1 != 0) {
            this_00 = &field_48;
            cVar1 = this_00->empty();
            if (cVar1 == '\0') {
                uVar3 = this_00->size();
                if (uVar3 == param_1) {
                    puVar4 = (undefined8*)this_00->back();
                } else {
                    puVar4 = (undefined8*)eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                        (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, param_1 - 1);
                }
                *(undefined4*)(param_2 + 8) = *(undefined4*)(puVar4 + 1);
                *(undefined8*)param_2 = *puVar4;
                iVar2 = GetCharacterAdvance(this, param_2, false);
                *param_3 = iVar2;
            }
        }
    }

    // 0x1008e9700, 144 bytes, placed by class name
    // TextRun::GetCharacterAdvance(TextRunCharacter const&, bool) const
    uint TextRun::GetCharacterAdvance(TextRunCharacter* param_1, bool param_2) {
        int iVar1;
        int iVar2;
        byte bVar3;
        uint uVar4;
        FontMetrics* pFVar5;

        uVar4 = 0;
        if (*(int*)param_1 != FontHelpers::newlineCharCode) {
            if ((param_2) || (m_visibility == 0)) {
                pFVar5 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
                bVar3 = pFVar5->GetGlyphAdvance(*(int*)param_1);
                iVar2 = FontHelpers::tabCharCode;
                if (bVar3 == 0) {
                    iVar1 = *(int*)param_1;
                    pFVar5 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
                    bVar3 = pFVar5->GetGlyphAdvance(32);
                    if (iVar1 == iVar2) {
                        return (uint)bVar3 * 3;
                    }
                    return (uint)bVar3;
                }
            } else {
                pFVar5 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
                bVar3 = pFVar5->GetGlyphAdvance(42);
            }
            uVar4 = (uint)bVar3;
        }
        return uVar4;
    }

    // 0x1008e9790, 400 bytes, placed by class name
    // TextRun::Remove(unsigned long, unsigned long)
    ulong TextRun::Remove(ulong param_1, ulong param_2) {
        undefined1* this_00;
        long lVar1;
        bool bVar2;
        ulong uVar4;
        long lVar5;
        long lVar6;
        ulong uVar7;
        int* piVar8;
        ulong local_40;
        ulong local_38;

        this_00 = &field_48;
        local_40 = param_2;
        local_38 = param_1;
        uVar4 = this_00->size();
        if (uVar4 < local_38) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_contents.size() >= start",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      525, (char*)0);
        }
        uVar4 = this_00->size();
        if (uVar4 < local_40) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_contents.size() >= end",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      526, (char*)0);
        }
        bVar2 = operator_cast_to_bool();
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      527, (char*)0);
        }
        if (local_40 < local_38) {
            std::swap<unsigned long>(&local_38, &local_40);
        }
        lVar5 = this_00->HeapBeginPtr();
        lVar1 = local_38 * 12;
        lVar6 = this_00->HeapBeginPtr();
        this_00->erase((TextRunCharacter*)(lVar5 + lVar1), (TextRunCharacter*)(lVar6 + local_40 * 12));
        uVar4 = local_38;
        if (((anonymous namespace)::IsMultiLine(this) != '\0') && (m_wrapMode == 1)) {
            while (bVar2 = uVar4 != 0, uVar4 = uVar4 - 1, bVar2) {
                uVar7 = this_00->size();
                if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("updateFromChar < m_contents.size()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "fonts/TextRun.cpp",
                              542, (char*)0);
                }
                piVar8 = (int*)eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                    (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar4);
                if ((*piVar8 == FontHelpers::spaceCharCode) || (*piVar8 == FontHelpers::tabCharCode))
                    goto LAB_1008e98fa;
            }
            uVar4 = 0;
        }
    LAB_1008e98fa:
        UpdatePositioning(this, uVar4, local_40);
        return local_38;
    }

    // 0x1008e9a00, 624 bytes, placed by class name
    // TextRun::GetIndexAtPos(int, int) const
    /* WARNING: Removing unreachable block (ram,4304313349) */
    /* WARNING: Removing unreachable block (ram,4304313069) */
    /* TextRun::GetIndexAtPos(int, int) const */

    ulong TextRun::GetIndexAtPos(int param_1, int param_2) {
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        ulong uVar5;
        long lVar6;
        ulong uVar7;
        ulong uVar8;
        long lVar9;
        TextRunCharacter* pTVar10;
        undefined1* this_00;
        ulong local_40;

        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            cVar2 = (anonymous namespace)::IsMultiLine(this);
            if ((cVar2 == '\0') || (param_1 <= m_maxLineWidth)) {
                cVar2 = (&field_48)->empty();
                if (cVar2 == '\0') {
                    lVar6 = (&field_48)->size();
                    if (lVar6 != 0) {
                        uVar5 = 0;
                        do {
                            this_00 = &field_48;
                            lVar6 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar5);
                            iVar4 = *(int*)(lVar6 + 8);
                            iVar3 = GetLineHeight(this);
                            if (param_2 <= iVar3 + iVar4) {
                                if (param_2 < *(int*)(lVar6 + 8)) {
                                    iVar4 = 2;
                                } else {
                                    if (*(int*)(lVar6 + 4) <= param_1) {
                                        uVar7 = uVar5 + 1;
                                        uVar8 = this_00->size();
                                        if (uVar7 != uVar8) {
                                            lVar9 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                                (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar7);
                                            if (*(int*)(lVar9 + 8) != *(int*)(lVar6 + 8)) {
                                                pTVar10 = (TextRunCharacter*)
                                                    eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                                                        (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00,
                                                        uVar5);
                                                iVar4 = GetCharacterAdvance(this, pTVar10, false);
                                                bVar1 = false;
                                                uVar8 = uVar5;
                                                if (iVar4 + *(int*)(lVar6 + 4) <= param_1) {
                                                    iVar4 = *(int*)(lVar6 + 8);
                                                    iVar3 = GetLineHeight(this);
                                                    iVar3 = iVar3 + iVar4;
                                                    bVar1 = iVar3 < param_2;
                                                    uVar8 = uVar7;
                                                    if (iVar3 < param_2) {
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
                            uVar7 = (&field_48)->size();
                        } while (uVar5 < uVar7);
                    }
                    lVar6 = (&field_48)->back();
                    iVar4 = *(int*)(lVar6 + 4);
                    bVar1 = true;
                    if (iVar4 <= param_1) {
                        iVar3 = GetLastCharAdvance(this);
                        if ((iVar3 + iVar4 < param_1) || (iVar4 = *(int*)(lVar6 + 8), param_2 < iVar4)) {
                            bVar1 = true;
                        } else {
                            iVar3 = GetLineHeight(this);
                            bVar1 = true;
                            if (param_2 <= iVar3 + iVar4) {
                                lVar6 = (&field_48)->size();
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
            uVar5 = (&field_48)->size();
        } else {
            uVar5 = 0;
        }
        return uVar5;
    }

    // 0x1008e9d50, 656 bytes, placed by class name
    // TextRun::GetIndexAtLineOffset(unsigned long, int) const
    ulong TextRun::GetIndexAtLineOffset(ulong param_1, int param_2) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        ulong uVar3;
        bool bVar4;
        char cVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        ulong uVar10;
        long lVar11;
        int iVar12;
        ulong local_68;
        int local_3c;
        int local_34;

        if (param_2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("lineOffset != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.cpp",
                      625, (char*)0);
        }
        bVar4 = operator_cast_to_bool();
        if (bVar4) {
            this_00 = &field_48;
            cVar5 = this_00->empty();
            if ((cVar5 == '\0') && (uVar10 = this_00->size(), param_1 <= uVar10)) {
                iVar2 = -param_2;
                if (-param_2 < 0) {
                    iVar2 = param_2;
                }
                if (param_1 == 0) {
                    if (param_2 < 1) {
                        return 0;
                    }
                    iVar1 = 0;
                    local_3c = 0;
                } else {
                    lVar11 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                        (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, param_1 - 1);
                    iVar1 = *(int*)(lVar11 + 4);
                    local_3c = GetCharacterAdvance(this, param_1 - 1);
                    local_3c = local_3c + iVar1;
                    iVar1 = *(int*)(lVar11 + 8);
                }
                iVar12 = (uint)(0 < param_2) * 2 + -1;
                iVar6 = 0;
                if (0 < param_2) {
                    iVar6 = this_00->size();
                    iVar6 = iVar6 + 1;
                }
                iVar7 = iVar12 + (int)param_1;
                bVar4 = iVar7 == iVar6;
                if (bVar4) {
                    local_34 = 16777215;
                    uVar3 = local_68;
                    iVar7 = 0;
                } else {
                    uVar10 = (ulong)iVar7;
                    iVar6 = iVar6 - iVar7;
                    bVar4 = false;
                    local_34 = 16777215;
                    iVar7 = 0;
                    do {
                        lVar11 = eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                            (vector<TextRunCharacter, BucketAllocatorEASTL>*)this_00, uVar10 - 1);
                        iVar9 = *(int*)(lVar11 + 8);
                        if (iVar9 == iVar1) {
                        } else {
                            iVar1 = iVar9;
                            if (iVar2 <= iVar7) {
                                uVar3 = param_1;
                                iVar7 = iVar7 + 1;
                                break;
                            }
                            iVar7 = iVar7 + 1;
                        }
                        if (iVar7 == iVar2) {
                            iVar9 = *(int*)(lVar11 + 4);
                            iVar8 = GetCharacterAdvance(this, uVar10 - 1);
                            iVar8 = (iVar9 - local_3c) + iVar8;
                            iVar9 = -iVar8;
                            if (iVar9 < 0) {
                                iVar9 = iVar8;
                            }
                            uVar3 = param_1;
                            if (local_34 <= iVar9)
                                break;
                            param_1 = uVar10;
                            local_34 = iVar9;
                        }
                        uVar10 = uVar10 + (long)iVar12;
                        iVar6 = iVar6 - iVar12;
                        bVar4 = iVar6 == 0;
                        uVar3 = local_68;
                    } while (!bVar4);
                }
                local_68 = uVar3;
                if (!bVar4) {
                    return local_68;
                }
                if (0 < param_2) {
                    uVar10 = this_00->size();
                    return uVar10;
                }
                if (local_34 != 16777215) {
                    uVar10 = 0;
                    if (local_34 <= local_3c) {
                        uVar10 = param_1;
                    }
                    if ((iVar7 + 1) - (uint)(iVar1 == 0) == iVar2) {
                        return uVar10;
                    }
                    return param_1;
                }
            }
        }
        return 0;
    }

    // 0x1008ea030, 304 bytes, placed by class name
    // TextRun::GetWidth() const
    int TextRun::GetWidth() {
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        long lVar5;
        TextRunCharacter* pTVar6;
        int iVar7;
        reverse_iterator local_48[8];
        reverse_iterator local_40[8];

        cVar1 = (&field_48)->empty();
        iVar3 = 0;
        if (cVar1 == '\0') {
            iVar3 = GetNumLines(this);
            if (iVar3 == 1) {
                lVar5 = (&field_48)->back();
                iVar4 = *(int*)(lVar5 + 4);
                iVar3 = GetLastCharAdvance(this);
                iVar3 = iVar3 + iVar4;
            } else {
                eastl::vector<unsigned long,
                              eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                bVar2 = eastl::operator!=(local_48, local_40);
                iVar3 = 0;
                if (bVar2) {
                    iVar4 = -1;
                    iVar3 = 0;
                    iVar7 = iVar3;
                    do {
                        lVar5 = eastl::reverse_iterator<TextRunCharacter_const*>::operator->(
                            (reverse_iterator<TextRunCharacter_const*>*)local_48);
                        if (*(int*)(lVar5 + 8) != iVar4) {
                            pTVar6 = (TextRunCharacter*)eastl::reverse_iterator<TextRunCharacter_const*>::operator*(
                                (reverse_iterator<TextRunCharacter_const*>*)local_48);
                            iVar4 = GetCharacterAdvance((TextRun*)this, pTVar6, false);
                            lVar5 = eastl::reverse_iterator<TextRunCharacter_const*>::operator->(
                                (reverse_iterator<TextRunCharacter_const*>*)local_48);
                            iVar4 = iVar4 + *(int*)(lVar5 + 4);
                            bVar2 = iVar3 < iVar4;
                            iVar3 = iVar7;
                            if (bVar2) {
                                iVar3 = iVar4;
                            }
                            lVar5 = eastl::reverse_iterator<TextRunCharacter_const*>::operator->(
                                (reverse_iterator<TextRunCharacter_const*>*)local_48);
                            iVar4 = *(int*)(lVar5 + 8);
                            iVar7 = iVar3;
                        }
                        eastl::reverse_iterator<TextRunCharacter_const*>::operator++(
                            (reverse_iterator<TextRunCharacter_const*>*)local_48);
                        eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                        bVar2 = eastl::operator!=(local_48, local_40);
                    } while (bVar2);
                }
            }
        }
        return iVar3;
    }

    // 0x1008ea190, 80 bytes, placed by class name
    // TextRun::GetLeftOffsetForHorizontalAlignment(int) const
    int TextRun::GetLeftOffsetForHorizontalAlignment(int param_1) {
        int iVar1;
        int iVar2;

        iVar1 = m_horizontalAlignment;
        iVar2 = 0;
        if (iVar1 != 0) {
            if (iVar1 == 2) {
                iVar2 = param_1;
            } else {
                if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/fonts/TextRun.cpp",
                                    777, (char*)0);
                }
                iVar2 = param_1 / 2;
            }
        }
        return iVar2;
    }

    // 0x1008ea1e0, 80 bytes, placed by class name
    // TextRun::GetTopOffsetForVerticalAlignment(int) const
    int TextRun::GetTopOffsetForVerticalAlignment(int param_1) {
        int iVar1;
        int iVar2;

        iVar1 = m_verticalAlignment;
        iVar2 = 0;
        if (iVar1 != 0) {
            if (iVar1 == 2) {
                iVar2 = param_1;
            } else {
                if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/fonts/TextRun.cpp",
                                    790, (char*)0);
                }
                iVar2 = param_1 / 2;
            }
        }
        return iVar2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008e4630, 96 bytes, inline, placed by debug map only (low confidence)
    // bool ends_with<eastl::fixed_string<char, 512, true, eastl::allocator> >(eastl::fixed_string<char, 512, true, eastl::allocator> const&, char const*)
    bool ends_with<eastl::fixed_string<char, 512, true, eastl::allocator>>(fixed_string* param_1, char* param_2) {
        int iVar1;
        long lVar4;
        ulong uVar5;
        bool bVar6;

        uVar5 = _strlen(param_2) & 4294967295;
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() <
            uVar5) {
            bVar6 = false;
        } else {
            lVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            iVar1 = param_1->compare(lVar4 - uVar5, uVar5, param_2);
            bVar6 = iVar1 == 0;
        }
        return bVar6;
    }

    // 0x1008e4b40, 128 bytes, inline, placed by debug map only (low confidence)
    // bool ends_with<StringView>(StringView const&, char const*)
    bool ends_with<StringView>(StringView* param_1, char* param_2) {
        long lVar4;
        ulong uVar5;
        uchar* in_R8;
        bool bVar6;
        StringView SVar7;
        StringView local_40;
        char* local_30;

        local_30 = param_2;
        uVar5 = _strlen(param_2) & 4294967295;
        if (param_1->p2_alt2() < uVar5) {
            bVar6 = false;
        } else {
            lVar4 = param_1->p2_alt2();
            StringView::StringView<char const*>(&local_40, &local_30);
            SVar7.field_8 = in_R8;
            SVar7.field_0 = (ulong)&local_40;
            bVar6 = param_1->compare(lVar4 - uVar5, uVar5, SVar7) == 0;
        }
        return bVar6;
    }

} // namespace jag

namespace jag::graphics {
    namespace {
        // 0x1008e99a0, 16 bytes, placed by neighbouring functions
        // IsMultiLine(TextRun const&)
        bool IsMultiLine(TextRun* param_1) {
            byte bVar1;

            bVar1 = param_1->GetAlphaTestThreshold();
            return 1 < bVar1;
        }

        // 0x1008ea230, 416 bytes, placed by __FILE__ string
        // DetermineSuitableRangeForCurrentAlignment(TextRun const&, unsigned long, unsigned long)
        undefined1[16] DetermineSuitableRangeForCurrentAlignment(TextRun* param_1, ulong param_2, ulong param_3) {
            ulong uVar1;
            ulong uVar2;
            int iVar3;
            undefined4 uVar4;
            ulong* puVar5;
            vector<oldscape::rseven::ModelFace, eastl::allocator>* this;
            vector* pvVar6;
            undefined8 extraout_RDX;
            int* piVar7;
            undefined1 auVar8[16];
            ulong local_80;
            ulong local_78;
            ulong local_70;
            int local_64;
            undefined8 local_60;
            undefined8 local_58;
            undefined8 local_50;
            ulong local_48;
            undefined8 local_40;
            ulong local_38;
            undefined8 local_30;

            local_80 = param_2;
            local_78 = param_3;
            puVar5 = std::min<unsigned long>(&local_80, &local_78);
            uVar1 = *puVar5;
            puVar5 = std::max<unsigned long>(&local_80, &local_78);
            uVar2 = *puVar5;
            this = (vector<oldscape::rseven::ModelFace, eastl::allocator>*)param_1->GetMaterial();
            local_48 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(this);
            if ((uVar1 == 0) && (uVar2 == local_48)) {
                local_60 = (ulong)local_60._4_4_ << 32;
                piVar7 = (int*)&local_60;
            } else {
                pvVar6 = (vector*)param_1->GetMaterial();
                local_60 = GetLineStartIndex(pvVar6, uVar1, false);
                pvVar6 = (vector*)param_1->GetMaterial();
                local_70 = GetLineEndIndex(pvVar6, uVar2, false);
                iVar3 = param_1->capacity();
                if (iVar3 == 2) {
                    iVar3 = param_1->GetValue();
                    if (iVar3 == 2) {
                        local_40 = (ulong)local_40._4_4_ << 32;
                        piVar7 = (int*)&local_40;
                        puVar5 = &local_70;
                    } else {
                        pvVar6 = (vector*)param_1->GetMaterial();
                        local_40 = GetLineEndIndex(pvVar6, uVar2, true);
                        local_64 = 0;
                        piVar7 = &local_64;
                        puVar5 = &local_40;
                    }
                    goto LAB_1008ea35d;
                }
                if (iVar3 != 1) {
                    if (iVar3 != 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/fonts/TextRun.cpp",
                                        116, (char*)0);
                    }
                    iVar3 = param_1->GetValue();
                    if (iVar3 == 0) {
                        puVar5 = &local_60;
                    } else {
                        pvVar6 = (vector*)param_1->GetMaterial();
                        local_38 = GetLineStartIndex(pvVar6, uVar1, true);
                        puVar5 = &local_38;
                    }
                    auVar8 = std::make_pair<unsigned long const&, unsigned long const&>(puVar5, &local_48);
                    return auVar8;
                }
                local_40 = (ulong)local_40._4_4_ << 32;
                piVar7 = (int*)&local_40;
            }
            puVar5 = &local_48;
        LAB_1008ea35d:
            uVar4 = std::make_pair<int, unsigned long const&>(piVar7, puVar5);
            local_38 = CONCAT44(local_38._4_4_, uVar4);
            local_30 = extraout_RDX;
            std::pair<unsigned long, unsigned long>::pair<int, unsigned long, false>(
                (pair<unsigned long, unsigned long>*)&local_58, (pair*)&local_38);
            auVar8._8_8_ = local_50;
            auVar8._0_8_ = local_58;
            return auVar8;
        }

    } // namespace

} // namespace jag::graphics
