// libs/oldscape/jagex3/core/stringtools/general/StringTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "StringTools.h"

namespace jag::oldscape::core::stringtools::general {
    // 0x100d42520
    int32_t g_thirtyseven_pwr[24] = {
        1,           0, 37,        0,  1369,       0,   50653,     0,     1874161,    0,       69343957,   0,
        -1729240887, 0, 442596621, 22, -803794207, 817, 324385413, 30259, -882641607, 1119585, 1701998909, 41424674,
    };

    // 0x100d42580
    uint8_t g_decodeMap[37] = {
        95,  97,  98,  99,  100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
        115, 116, 117, 118, 119, 120, 121, 122, 48,  49,  50,  51,  52,  53,  54,  55,  56,  57,
    };

    // 0x100348970
    unsigned long StringTools::MatchPattern(const char* str1, const char* str2) {
        char cVar1;
        char cVar2;
        char** arg1;
        char* pcVar3;
        char** ppcVar4;
        unsigned long unaff_R13;
        bool bVar5;
        char* local_170;
        char* local_168;
        fixed_vector<(anonymous namespace)::MatchPatternStackFrame, 16ul> local_160[296];
        long local_38;

        char* local_180 = str1;
        char* local_178 = str2;
        new (local_160) eastl::fixed_vector<(anonymous namespace)::MatchPatternStackFrame, 16ul>();
        local_160->emplace_back<char const*&, char const*&>(local_180, local_178);
        do {
            arg1 = (char**)local_160->back();
            pcVar3 = arg1[1];
            cVar2 = **arg1;
            cVar1 = *pcVar3;
            bVar5 = !cVar2 && !cVar1;
            unaff_R13 = (((uint64_t)((int64_t)(unaff_R13 >> 8)) << 8) | (uint8_t)bVar5);
            if (bVar5)
                break;
            if (cVar2 == '*') {
                if (cVar1) {
                    local_168 = pcVar3 + 1;
                    local_160->emplace_back<char const*&, char const*>(*arg1, local_168);
                    local_168 = *arg1 + 1;
                    local_170 = arg1[1] + 1;
                    local_160->emplace_back<char const*, char const*>(local_168, local_170);
                }
                pcVar3 = *arg1;
                ppcVar4 = arg1;
            LAB_100348a8e:
                *ppcVar4 = pcVar3 + 1;
            } else {
                if (((cVar2 == cVar1) || ((cVar2 == '%' && (cVar1)))) ||
                    ((cVar2 == '#' && (('/' < cVar1 && (cVar1 < ':')))))) {
                    ppcVar4 = arg1 + 1;
                    *arg1 = *arg1 + 1;
                    goto LAB_100348a8e;
                }
                local_160->pop_back();
            }
            cVar2 = local_160->empty();
        } while (!cVar2);
        return unaff_R13 & 4294967295;
    }

    // 0x100348d60
    void StringTools::ReplaceCharsWithSubstitute(eastl::string& str, const eastl::vector<char>& arg2, char arg3) {
        char cVar1;
        unsigned long uVar3;
        char* pcVar4;
        char* pcVar5;
        char* pcVar6;
        unsigned long arg1;

        if (str.size() != 0) {
            arg1 = 0;
            do {
                pcVar4 = (char*)arg2.HeapBeginPtr();
                pcVar5 = (char*)arg2.end();
                for (; pcVar4 != pcVar5; pcVar4 = pcVar4 + 1) {
                    cVar1 = *pcVar4;
                    pcVar6 = &str[arg1];
                    if (*pcVar6 == cVar1) {
                        pcVar4 = &str[arg1];
                        *pcVar4 = arg3;
                        break;
                    }
                }
                arg1 = arg1 + 1;
                uVar3 = str.size();
            } while (arg1 < uVar3);
        }
    }

    // 0x100348e00
    eastl::string* StringTools::StripTags(const eastl::string& str) {
        char cVar2;
        unsigned long uVar5;
        unsigned long uVar6;
        ReturnValue local_70;
        char* local_50;

        new (this) eastl::string();
        unsigned long uVar3 = str.size();
        reserve(uVar3);
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::end() - (long)str_00;
        if (uVar3 == 0) {
            uVar5 = 0;
        } else {
            uVar6 = 4294967295;
            uVar5 = 0;
            local_50 = str_00;
            do {
                cVar2 = jag::stringtools::WideToCP1252(jag::stringtools::GetUTF8NextChar16(str_00, 0));
                if (cVar2) {
                    if (cVar2 == '<') {
                        local_70 = str.substr(uVar5, 0 - uVar5);
                        append(&local_70);
                        uVar6 = 0 & 4294967295;
                    } else {
                        if ((cVar2 != '>') || ((int)uVar6 == -1))
                            goto LAB_100348e96;
                        uVar5 = (unsigned long)((int)uVar6 + 1);
                        local_70 = str.substr(uVar5, 0 - uVar5);
                        cVar2 = local_70 == "lt";
                        if (!cVar2) {
                            cVar2 = local_70 == "gt";
                            if (!cVar2) {
                                cVar2 = local_70 == "br";
                                if (cVar2) {
                                    append("\n");
                                }
                            } else {
                                append(">");
                            }
                        } else {
                            append("<");
                        }
                        uVar5 = 0;
                        uVar6 = 4294967295;
                    }
                    str_00 = local_50;
                }
            LAB_100348e96:
            } while (0 < uVar3);
        }
        if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
            local_70 = str.substr(uVar5, uVar3 - uVar5);
            append(&local_70);
        }
        return (eastl::string*)this;
    }

} // namespace jag::oldscape::core::stringtools::general
