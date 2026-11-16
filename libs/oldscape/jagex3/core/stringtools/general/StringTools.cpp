// libs/oldscape/jagex3/core/stringtools/general/StringTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "StringTools.h"

namespace jag::oldscape::core::stringtools::general {
    // 0x100d42520, 96 bytes, __const
    g_thirtyseven_pwr = {
        1,           0, 37,        0,  1369,       0,   50653,     0,     1874161,    0,       69343957,   0,
        -1729240887, 0, 442596621, 22, -803794207, 817, 324385413, 30259, -882641607, 1119585, 1701998909, 41424674,
    };

    // 0x100d42580, 37 bytes, __const
    g_decodeMap = {
        95,  97,  98,  99,  100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
        115, 116, 117, 118, 119, 120, 121, 122, 48,  49,  50,  51,  52,  53,  54,  55,  56,  57,
    };

    // 0x100348970, 416 bytes, placed by class name and debug map
    // StringTools::MatchPattern(char const*, char const*)
    ulong StringTools::MatchPattern(char* param_1, char* param_2) {
        char cVar1;
        char cVar2;
        char** ppcVar3;
        char* pcVar4;
        char** ppcVar5;
        ulong unaff_R13;
        bool bVar6;
        char* local_180;
        char* local_178;
        char* local_170;
        char* local_168;
        fixed_vector<(anonymous namespace)::MatchPatternStackFrame, 16ul, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_180 = param_1;
        local_178 = param_2;
        eastl::fixed_vector<(anonymous namespace)::MatchPatternStackFrame, 16ul, true, eastl::allocator>::fixed_vector(
            local_160);
        eastl::vector<(anonymous namespace)::MatchPatternStackFrame,
                      eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<char const*&, char const*&>(
                (vector<(anonymous namespace)::MatchPatternStackFrame,
                        eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)local_160,
                &local_180, &local_178);
        do {
            ppcVar3 =
                (char**)eastl::vector<(anonymous namespace)::MatchPatternStackFrame,
                                      eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
                    back((
                        vector<(anonymous namespace)::MatchPatternStackFrame,
                               eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)local_160);
            pcVar4 = ppcVar3[1];
            cVar2 = **ppcVar3;
            cVar1 = *pcVar4;
            bVar6 = cVar2 == '\0' && cVar1 == '\0';
            unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8), bVar6);
            if (bVar6)
                break;
            if (cVar2 == '*') {
                if (cVar1 != '\0') {
                    local_168 = pcVar4 + 1;
                    eastl::vector<(anonymous namespace)::MatchPatternStackFrame,
                                  eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
                        emplace_back<char const*&, char const*>(
                            (vector<(anonymous namespace)::MatchPatternStackFrame,
                                    eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)
                                local_160,
                            ppcVar3, &local_168);
                    local_168 = *ppcVar3 + 1;
                    local_170 = ppcVar3[1] + 1;
                    eastl::vector<(anonymous namespace)::MatchPatternStackFrame,
                                  eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
                        emplace_back<char const*, char const*>(
                            (vector<(anonymous namespace)::MatchPatternStackFrame,
                                    eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)
                                local_160,
                            &local_168, &local_170);
                }
                pcVar4 = *ppcVar3;
                ppcVar5 = ppcVar3;
            LAB_100348a8e:
                *ppcVar5 = pcVar4 + 1;
            } else {
                if (((cVar2 == cVar1) || ((cVar2 == '%' && (cVar1 != '\0')))) ||
                    ((cVar2 == '#' && (('/' < cVar1 && (cVar1 < ':')))))) {
                    ppcVar5 = ppcVar3 + 1;
                    *ppcVar3 = *ppcVar3 + 1;
                    goto LAB_100348a8e;
                }
                eastl::vector<(anonymous namespace)::MatchPatternStackFrame,
                              eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
                    pop_back((
                        vector<(anonymous namespace)::MatchPatternStackFrame,
                               eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)local_160);
            }
            cVar2 = eastl::vector<(anonymous namespace)::MatchPatternStackFrame,
                                  eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>::
                empty((vector<(anonymous namespace)::MatchPatternStackFrame,
                              eastl::fixed_vector_allocator<16ul, 16ul, 8ul, 0ul, true, eastl::allocator>>*)local_160);
        } while (cVar2 == '\0');
        eastl::fixed_vector<(anonymous namespace)::MatchPatternStackFrame, 16ul, true, eastl::allocator>::~fixed_vector(
            local_160);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return unaff_R13 & 4294967295;
    }

    // 0x100348d60, 160 bytes, placed by class name and debug map
    // StringTools::ReplaceCharsWithSubstitute(eastl::string&, eastl::vector<char, eastl::allocator> const&, char)
    void StringTools::ReplaceCharsWithSubstitute(basic_string* param_1, vector* param_2, char param_3) {
        char cVar1;
        ulong uVar3;
        char* pcVar4;
        char* pcVar5;
        char* pcVar6;
        ulong uVar7;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            uVar7 = 0;
            do {
                pcVar4 = (char*)param_2->HeapBeginPtr();
                pcVar5 = (char*)param_2->end();
                for (; pcVar4 != pcVar5; pcVar4 = pcVar4 + 1) {
                    cVar1 = *pcVar4;
                    pcVar6 = (char*)eastl::string::operator[]((eastl::string*)param_1, uVar7);
                    if (*pcVar6 == cVar1) {
                        pcVar4 = (char*)eastl::string::operator[]((eastl::string*)param_1, uVar7);
                        *pcVar4 = param_3;
                        break;
                    }
                }
                uVar7 = uVar7 + 1;
                uVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            } while (uVar7 < uVar3);
        }
    }

    // 0x100348e00, 528 bytes, placed by class name and debug map
    // StringTools::StripTags(eastl::string const&)
    StringTools* StringTools::StripTags(basic_string* param_1) {
        ulong uVar1;
        char cVar2;
        bool bVar3;
        wchar16 wVar4;
        ulong uVar5;
        char* pcVar6;
        char* pcVar7;
        char* extraout_RDX;
        char* extraout_RDX_00;
        char* extraout_RDX_01;
        ulong uVar8;
        ulong uVar9;
        eastl::string local_70[32];
        char* local_50;
        ulong local_48;

        new (this) eastl::string();
        uVar5 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        reserve(uVar5);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_48 = 0;
        uVar5 = (long)pcVar7 - (long)pcVar6;
        if (pcVar7 == pcVar6) {
            uVar8 = 0;
        } else {
            uVar9 = 4294967295;
            uVar8 = 0;
            local_50 = pcVar6;
            do {
                uVar1 = local_48;
                wVar4 = jag::stringtools::GetUTF8NextChar16(pcVar6, &local_48);
                cVar2 = jag::stringtools::WideToCP1252(wVar4);
                if (cVar2 != '\0') {
                    if (cVar2 == '<') {
                        eastl::string::substr((ulong)local_70, (ulong)param_1);
                        ((StringTools*)this)->append();
                        eastl::string::~basic_string(local_70);
                        uVar9 = uVar1 & 4294967295;
                    } else {
                        if ((cVar2 != '>') || ((int)uVar9 == -1))
                            goto LAB_100348e96;
                        eastl::string::substr((ulong)local_70, (ulong)param_1);
                        bVar3 = eastl::operator==((eastl*)local_70, (basic_string*)"lt", extraout_RDX);
                        if (bVar3) {
                            ((StringTools*)this)->append("<");
                        } else {
                            bVar3 = eastl::operator==((eastl*)local_70, (basic_string*)"gt", extraout_RDX_00);
                            if (bVar3) {
                                ((StringTools*)this)->append(">");
                            } else {
                                bVar3 = eastl::operator==((eastl*)local_70, (basic_string*)"br", extraout_RDX_01);
                                if (bVar3) {
                                    ((StringTools*)this)->append("\n");
                                }
                            }
                        }
                        uVar8 = local_48;
                        eastl::string::~basic_string(local_70);
                        uVar9 = 4294967295;
                    }
                    pcVar6 = local_50;
                }
            LAB_100348e96:
            } while (local_48 < uVar5);
        }
        if (uVar8 < uVar5) {
            eastl::string::substr((ulong)local_70, (ulong)param_1);
            ((StringTools*)this)->append();
            eastl::string::~basic_string(local_70);
        }
        return (StringTools*)this;
    }

} // namespace jag::oldscape::core::stringtools::general
