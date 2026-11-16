// libs/jtl/StringUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "StringUtils.h"

namespace jag {
    // 0x100cb87d0
    auto trim(const eastl::string& str) {
        bool cVar1;
        char* pcVar4;

        long lVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        char* str1 = (char*)(lVar2 - 1);
        do {
            pcVar4 = str1 + 1;
            str1 = str1 + 1;
            cVar1 = is_space(*pcVar4);
        } while (cVar1);
        pcVar4 = (char*)(lVar3 + 1);
        do {
            cVar1 = is_space(pcVar4[-2]);
            pcVar4 = pcVar4 - 1;
        } while (cVar1);
        return auto(str1, pcVar4);
    }

    // 0x100cb8870
    bool is_space(char arg1) {
        return (8388627U >> ((uint8_t)(arg1 - 9U) & 31) & 1) != 0 && (uint8_t)(arg1 - 9U) < 24;
    }

    // 0x100cb88a0
    void parse_cfg(const eastl::string& str) {
        char* pcVar4;
        char* pcVar5;
        eastl::string* in_RSI;
        ReturnValue local_438;
        eastl::string local_3f8;
        eastl::string local_3d8;
        ReturnValue local_3b8;

        if (parse_cfg(eastl::stringconst&)::spaces == '\0') {
            if (___cxa_guard_acquire(&parse_cfg(eastl::stringconst&)::spaces) != 0) {
                new ((eastl::string*)&parse_cfg(eastl::stringconst&)::spaces) eastl::string(" \t\n\v\f\r");
                ___cxa_atexit(PTR__basic_string_100ee6c80, &parse_cfg(eastl::stringconst&)::spaces, 4294967296);
                ___cxa_guard_release(&parse_cfg(eastl::stringconst&)::spaces);
            }
        }
        fixed_vector<eastl::fixed_string<char, 64>, 8ul> local_3a0;
        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::string>(
            &local_3a0, in_RSI, (eastl::string*)&parse_cfg(eastl::stringconst&)::spaces);
        new (str) eastl::map(local_438);
        long lVar2 = local_3a0.HeapBeginPtr();
        long lVar3 = local_3a0.end();
        if (lVar2 != lVar3) {
            do {
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                local_438[0]._0_1_ = 61;
                pcVar4 = eastl::find<char*, char>(pcVar4, pcVar5, local_438);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_3f8 = eastl::string(pcVar5, pcVar4);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                if (pcVar4 == pcVar5) {
                    local_3d8 = eastl::string("");
                } else {
                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                    local_3d8 = eastl::string(pcVar4 + 1, pcVar5);
                }
                local_438 = eastl::make_pair<eastl::string&, eastl::string&>(local_3f8, local_3d8);
                eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::less<eastl::string>,
                              eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>, true,
                              true>::insert<eastl::pair<eastl::string, eastl::string>,
                                            void>(
                    &local_3b8,
                    (rbtree<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::less<eastl::string>,
                            eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>, true,
                            true>*)str);
                lVar2 = lVar2 + 104;
                lVar3 = local_3a0.end();
            } while (lVar2 != lVar3);
        }
        return (map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe>>*)str;
    }

    // 0x100cb8bd0
    int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::string>(
        eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>& strs, const eastl::string& str1,
        const eastl::string& str2) {
        if ((str2.size() & 18446744071562067968) != 0) {
            LogAssert("delims.size() <= (eastl_size_t)std::numeric_limits<int>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringUtils.h", 179,
                      nullptr);
        }
        char* str2_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int iVar1 = str2.size();
        iVar1 = tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>, eastl::fixed_string<char, 2048>>(
            strs, (fixed_string<char, _1024>*)str1, str2_00, iVar1);
        return iVar1;
    }

    // 0x100cb8cd0
    unsigned long is_equal_ignore_case(const eastl::string& str1, const eastl::string& str2) {
        bool cVar1;
        char cVar2;
        char* pcVar5;
        uint64_t unaff_R13;
        bool bVar6;

        unsigned long uVar3 = str1.size();
        unsigned long uVar4 = str2.size();
        if (uVar4 == uVar3) {
            bVar6 = uVar3 != 0;
            if (bVar6) {
                pcVar5 = &str1[0];
                cVar1 = tolower(*pcVar5);
                pcVar5 = &str2[0];
                cVar2 = tolower(*pcVar5);
                if (cVar1 == cVar2) {
                    uVar4 = 1;
                    do {
                        bVar6 = uVar4 < uVar3;
                        if (uVar3 == uVar4)
                            break;
                        pcVar5 = &str1[uVar4];
                        cVar1 = tolower(*pcVar5);
                        pcVar5 = &str2[uVar4];
                        cVar2 = tolower(*pcVar5);
                        uVar4 = uVar4 + 1;
                    } while (cVar1 == cVar2);
                }
            }
            uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R13 >> 8)) << 8) | (uint8_t)bVar6) ^ 1;
        } else {
            uVar3 = 0;
        }
        return uVar3 & 4294967295;
    }

    // 0x100cb8da0
    eastl::string* trim_left(eastl::string& str) {
        unary_negate<eastl::pointer_to_unary_function<int, int> _>* unary_negate;

        char* str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        uint64_t local_30 = PTR_isspace_100ee4040->end();
        unary_negate = (unary_negate<eastl::pointer_to_unary_function<int, int> _>*)
            eastl::not1<eastl::pointer_to_unary_function<int, int>>(local_30);
        pcVar1 = eastl::find_if<char*, eastl::unary_negate<eastl::pointer_to_unary_function<int, int>>>(pcVar1, str2,
                                                                                                        unary_negate);
        str.erase(str1, pcVar1);
        return str;
    }

    // 0x100cb8eb0
    eastl::string* trim_right(eastl::string& str) {
        reverse_iterator<char*> local_48[8];

        auto local_40 = str.rbegin();
        auto local_38 = str.rend();
        uint64_t local_30 = PTR_isspace_100ee4040->end();
        eastl::not1<eastl::pointer_to_unary_function<int, int>>(local_30);
        eastl::find_if<eastl::reverse_iterator<char*>, eastl::unary_negate<eastl::pointer_to_unary_function<int, int>>>(
            local_48, (reverse_iterator<char*>*)&local_40,
            (unary_negate<eastl::pointer_to_unary_function<int, int> _>*)&local_38);
        auto str1 = local_48->HeapBeginPtr();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        str.erase(str1, str2);
        return str;
    }

    // 0x100cb9040
    eastl::string* trim(eastl::string& str) {
        trim_right(str);
        trim_left(str);
        return str;
    }

    // 0x100cb9060
    auto percent_encode(const eastl::string& str) {
        uint8_t arg1;
        fixed_string<char, _40>* str2;
        fixed_string<char, 8> local_68;

        auto result;
        result.reserve(str.size());
        uint8_t* pbVar1 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint8_t* pbVar2 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        if (pbVar1 != pbVar2) {
            do {
                arg1 = *pbVar1;
                if ((((25 < (uint8_t)((arg1 & 223) + 191)) && (9 < (uint8_t)(arg1 - 48))) &&
                     (1 < (uint8_t)(arg1 - 45))) &&
                    ((arg1 != 126 && (arg1 != 95)))) {
                    local_68 = eastl::fixed_string<char, 8>();
                    local_68.sprintf("%%%02X", (unsigned long)(unsigned int)(int)(char)*pbVar1);
                    result.operator+=(&local_68, str2);
                }
                result += arg1;
                pbVar1 = pbVar1 + 1;
            } while (pbVar1 != pbVar2);
        }
        return result;
    }

    // 0x100cb9290
    auto mask_string_with_underscores(const eastl::string& str) {
        uint8_t arg1;

        auto result;
        result.reserve(str.size());
        uint8_t* pbVar1 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint8_t* pbVar2 = (uint8_t*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
            arg1 = *pbVar1;
            if (((((uint8_t)((arg1 & 223) + 191) < 26) || ((uint8_t)(arg1 - 48) < 10)) || ((uint8_t)(arg1 - 45) < 2)) ||
                ((arg1 == 126 || (arg1 == 95)))) {
                result += arg1;
            } else {
                result += '_';
            }
        }
        return result;
    }

    // 0x100cb9350
    auto make_html_safe(const eastl::string& str) {
        auto result;
        result.reserve(str.size());
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        do {
            if (str_00 == pcVar1) {
                return result;
            }
            switch ((int)*str_00) {
            case 34:
                result.append("&quot;");
                break;
            case 35:
            case 36:
            case 37:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 61:
            switchD_100cb93df_caseD_23:
                result.append(str_00, 1);
                break;
            case 38:
                result.append("&amp;");
                break;
            case 39:
                result.append("&apos;");
                break;
            case 60:
                result.append("&lt;");
                break;
            case 62:
                result.append("&gt;");
                break;
            default:
                if (*str_00 != 124)
                    goto switchD_100cb93df_caseD_23;
                result.append("<br/>");
            }
            str_00 = str_00 + 1;
        } while (true);
    }

    // 0x100cb9510
    vector<eastl::string>* split(const eastl::string& str, char arg2) {
        unsigned long uVar3;
        char* pcVar4;
        char in_DL;
        unsigned long arg1;
        uint64_t in_register_00000031;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* basic_string;
        unsigned long arg1_00;

        basic_string =
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)(((uint64_t)
                                                                                                 in_register_00000031
                                                                                             << 8) |
                                                                                            (uint8_t)arg2);
        new (str) eastl::vector<eastl::string>();
        long lVar2 = basic_string->size();
        if (lVar2 == 0) {
            arg1_00 = 0;
        } else {
            arg1 = 0;
            arg1_00 = 0;
            do {
                pcVar4 = (char*)(*basic_string)[arg1];
                if (*pcVar4 == in_DL) {
                    local_58 = basic_string->substr(arg1_00, arg1 - arg1_00);
                    str.push_back(local_58);
                    arg1_00 = arg1 + 1;
                }
                arg1 = arg1 + 1;
                uVar3 = basic_string->size();
            } while (arg1 < uVar3);
        }
        lVar2 = basic_string->size();
        auto local_58 = basic_string->substr(arg1_00, lVar2 - arg1_00);
        str.push_back(local_58);
        return (vector<eastl::string>*)str;
    }

    // 0x100cb9620
    void ScanPreviousWordStart(StringView stringView, int arg2) {
        bool bVar1;
        int iVar2;
        uint8_t* pbVar3;
        long lVar4;
        unsigned long arg1;
        unsigned int uVar5;

        if (0 < arg2) {
            uVar5 = arg2 - 1;
            pbVar3 = (uint8_t*)(*stringView)[(unsigned long)uVar5];
            iVar2 = isspace((unsigned int)*pbVar3);
            if ((iVar2 != 0) && (arg2 != 1)) {
                lVar4 = (long)arg2 + 1;
                uVar5 = arg2;
                do {
                    uVar5 = uVar5 - 1;
                    pbVar3 = (uint8_t*)(*stringView)[lVar4 - 2];
                    iVar2 = isspace((unsigned int)*pbVar3);
                    if (iVar2 == 0)
                        goto LAB_100cb9699;
                    lVar4 = lVar4 - 1;
                } while (2 < lVar4);
                uVar5 = 0;
            }
        LAB_100cb9699:
            arg2 = 0;
            if (0 < (int)uVar5) {
                arg1 = (long)(int)uVar5;
                do {
                    pbVar3 = (uint8_t*)(*stringView)[arg1];
                    iVar2 = isspace((unsigned int)*pbVar3);
                    if (iVar2 != 0) {
                        pbVar3 = (uint8_t*)(*stringView)[arg1];
                        iVar2 = isspace((unsigned int)*pbVar3);
                        arg2 = ((int)arg1 + 1) - (unsigned int)(iVar2 == 0);
                        break;
                    }
                    bVar1 = 1 < (long)arg1;
                    arg1 = arg1 - 1;
                } while (bVar1);
            }
        }
        auto enumOptionToggle1 = eastl::max<int>(arg2, 0);
        auto enumOptionToggle2 = stringView->HeapBeginPtr();
        eastl::min<graphics::GraphicsQuality>(enumOptionToggle1, enumOptionToggle2);
    }

    // 0x100cb9790
    void ScanNextWordStart(StringView stringView, int arg2) {
        uint8_t* pbVar3;
        unsigned long arg1_00;

        unsigned int uVar1 = eastl::max<int>(arg2, 0);
        unsigned long arg1 = (unsigned long)uVar1;
        int iVar2 = stringView->HeapBeginPtr();
        if ((int)uVar1 < iVar2) {
            arg1_00 = (unsigned long)(int)uVar1;
            pbVar3 = (uint8_t*)(*stringView)[arg1_00];
            iVar2 = isspace((unsigned int)*pbVar3);
            if (iVar2 == 0) {
                iVar2 = stringView->HeapBeginPtr();
                if ((int)uVar1 < iVar2) {
                    do {
                        pbVar3 = (uint8_t*)(*stringView)[arg1_00];
                        iVar2 = isspace((unsigned int)*pbVar3);
                        if (iVar2 != 0)
                            break;
                        arg1_00 = arg1_00 + 1;
                        iVar2 = stringView->HeapBeginPtr();
                    } while ((long)arg1_00 < (long)iVar2);
                    arg1 = arg1_00 & 4294967295;
                }
            }
            iVar2 = stringView->HeapBeginPtr();
            if ((int)arg1 < iVar2) {
                arg1 = (unsigned long)(int)arg1;
                do {
                    pbVar3 = (uint8_t*)(*stringView)[arg1];
                    iVar2 = isspace((unsigned int)*pbVar3);
                    if (iVar2 == 0)
                        break;
                    arg1 = arg1 + 1;
                    iVar2 = stringView->HeapBeginPtr();
                } while ((long)arg1 < (long)iVar2);
            }
        }
        auto enumOptionToggle2 = stringView->HeapBeginPtr();
        eastl::min<graphics::GraphicsQuality>((EnumOptionToggle)arg1, enumOptionToggle2);
    }

} // namespace jag

// 0x100cb8ea0
void isspace(int arg1) {
    __istype(arg1, 16384);
}
