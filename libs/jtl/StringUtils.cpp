// libs/jtl/StringUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

#include "StringUtils.h"

namespace jag {
    // 0x100cb87d0, 160 bytes, placed by debug map only (low confidence)
    // trim(eastl::string const&)
    basic_string* trim(basic_string* param_1) {
        char cVar1;
        long lVar2;
        long lVar3;
        char* pcVar4;
        char* pcVar5;
        allocator local_30[8];

        lVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        pcVar5 = (char*)(lVar2 + -1);
        do {
            pcVar4 = pcVar5 + 1;
            pcVar5 = pcVar5 + 1;
            cVar1 = is_space(*pcVar4);
        } while (cVar1 != '\0');
        pcVar4 = (char*)(lVar3 + 1);
        do {
            cVar1 = is_space(pcVar4[-2]);
            pcVar4 = pcVar4 + -1;
        } while (cVar1 != '\0');
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (param_1) eastl::string(pcVar5, pcVar4, local_30);
        return param_1;
    }

    // 0x100cb8870, 48 bytes, inline, placed by debug map only (low confidence)
    // is_space(char)
    bool is_space(char param_1) {
        return (8388627U >> ((byte)(param_1 - 9U) & 31) & 1) != 0 && (byte)(param_1 - 9U) < 24;
    }

    // 0x100cb88a0, 800 bytes, placed by debug map only (low confidence)
    // parse_cfg(eastl::string const&)
    allocator* parse_cfg(basic_string* param_1) {
        int iVar1;
        long lVar2;
        long lVar3;
        char* pcVar4;
        char* pcVar5;
        allocator local_438[64];
        eastl::string local_3f8[32];
        eastl::string local_3d8[32];
        allocator local_3b8[16];
        jag* local_3a8;
        fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator> local_3a0[872];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_3a8 = this;
        if (parse_cfg(eastl::stringconst&)::spaces == '\0') {
            iVar1 = ___cxa_guard_acquire(&parse_cfg(eastl::stringconst&)::spaces);
            if (iVar1 != 0) {
                new (local_3a0) eastl::allocator("EASTL basic_string");
                new (&parse_cfg(eastl::stringconst&)::spaces) eastl::string(" \t\n\v\f\r", local_3a0);
                ___cxa_atexit(PTR__basic_string_100ee6c80, &parse_cfg(eastl::stringconst&)::spaces, 4294967296);
                ___cxa_guard_release(&parse_cfg(eastl::stringconst&)::spaces);
            }
        }
        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::fixed_vector(local_3a0);
        tokenize<
            eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>,
            eastl::string>((fixed_vector*)local_3a0, param_1, (basic_string*)&parse_cfg(eastl::stringconst&)::spaces);
        eastl::allocator::allocator(local_438, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)local_3a8);
        lVar2 = local_3a0->HeapBeginPtr();
        lVar3 = local_3a0->end();
        if (lVar2 != lVar3) {
            do {
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                local_438[0] = (allocator)61;
                pcVar4 = eastl::find<char*, char>(pcVar4, pcVar5, (char*)local_438);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::allocator::allocator(local_438, "EASTL basic_string");
                eastl::string::basic_string(local_3f8, pcVar5, pcVar4, local_438);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                if (pcVar4 == pcVar5) {
                    eastl::allocator::allocator(local_3b8, "EASTL basic_string");
                    eastl::string::basic_string(local_3d8, "", local_3b8);
                } else {
                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
                    eastl::allocator::allocator(local_438, "EASTL basic_string");
                    eastl::string::basic_string(local_3d8, pcVar4 + 1, pcVar5, local_438);
                }
                eastl::make_pair<eastl::string&, eastl::string&>((eastl*)local_438, (basic_string*)local_3f8,
                                                                 (basic_string*)local_3d8);
                eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, eastl::string>, eastl::less<eastl::string>,
                              eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, eastl::string>>, true,
                              true>::insert<eastl::pair<eastl::string, eastl::string>, void>((pair*)local_3b8);
                local_438->~pair();
                eastl::string::~basic_string(local_3d8);
                eastl::string::~basic_string(local_3f8);
                lVar2 = lVar2 + 104;
                lVar3 = local_3a0->end();
            } while (lVar2 != lVar3);
        }
        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::~fixed_vector(local_3a0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (allocator*)local_3a8;
    }

    // 0x100cb8bd0, 112 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>, eastl::string >(eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>&, eastl::string const&, eastl::string const&)
    int jag::tokenize<
        eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>,
        eastl::string>(fixed_vector* param_1, basic_string* param_2, basic_string* param_3) {
        int iVar1;
        char* pcVar3;

        if ((eastl::basic_string<char,
                                 eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() &
             18446744071562067968) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("delims.size() <= (eastl_size_t)std::numeric_limits<int>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/StringUtils.h", 179,
                      (char*)0);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        iVar1 = tokenize<
            eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true, eastl::allocator>,
            eastl::fixed_string<char, 2048, true, eastl::allocator>>(param_1, (fixed_string*)param_2, pcVar3, iVar1);
        return iVar1;
    }

    // 0x100cb8cd0, 208 bytes, placed by debug map only (low confidence)
    // is_equal_ignore_case(eastl::string const&, eastl::string const&)
    ulong is_equal_ignore_case(basic_string* param_1, basic_string* param_2) {
        char cVar1;
        char cVar2;
        ulong uVar3;
        ulong uVar4;
        char* pcVar5;
        undefined8 unaff_R13;
        bool bVar6;

        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (uVar4 == uVar3) {
            bVar6 = uVar3 != 0;
            if (bVar6) {
                pcVar5 = (char*)eastl::string::operator[]((eastl::string*)param_1, 0);
                cVar1 = tolower(*pcVar5);
                pcVar5 = (char*)eastl::string::operator[]((eastl::string*)param_2, 0);
                cVar2 = tolower(*pcVar5);
                if (cVar1 == cVar2) {
                    uVar4 = 1;
                    do {
                        bVar6 = uVar4 < uVar3;
                        if (uVar3 == uVar4)
                            break;
                        pcVar5 = (char*)eastl::string::operator[]((eastl::string*)param_1, uVar4);
                        cVar1 = tolower(*pcVar5);
                        pcVar5 = (char*)eastl::string::operator[]((eastl::string*)param_2, uVar4);
                        cVar2 = tolower(*pcVar5);
                        uVar4 = uVar4 + 1;
                    } while (cVar1 == cVar2);
                }
            }
            uVar3 = CONCAT71((int7)((ulong)unaff_R13 >> 8), bVar6) ^ 1;
        } else {
            uVar3 = 0;
        }
        return uVar3 & 4294967295;
    }

    // 0x100cb8da0, 128 bytes, placed by debug map only (low confidence)
    // trim_left(eastl::string&)
    basic_string* trim_left(basic_string* param_1) {
        char* pcVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        undefined8 local_30;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_30 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        uVar4 = eastl::not1<eastl::pointer_to_unary_function<int, int>>((pointer_to_unary_function*)&local_30);
        pcVar5 =
            eastl::find_if<char*, eastl::unary_negate<eastl::pointer_to_unary_function<int, int>>>(uVar2, uVar3, uVar4);
        param_1->erase(pcVar1, pcVar5);
        return param_1;
    }

    // 0x100cb8eb0, 144 bytes, placed by debug map only (low confidence)
    // trim_right(eastl::string&)
    basic_string* trim_right(basic_string* param_1) {
        undefined8 uVar1;
        char* pcVar2;
        char* pcVar3;
        Layout local_48[8];
        eastl::string local_40[8];
        eastl::string local_38[8];
        undefined8 local_30;

        eastl::string::rbegin(local_40);
        eastl::string::rend(local_38);
        local_30 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        uVar1 = eastl::not1<eastl::pointer_to_unary_function<int, int>>((pointer_to_unary_function*)&local_30);
        eastl::find_if<eastl::reverse_iterator<char*>, eastl::unary_negate<eastl::pointer_to_unary_function<int, int>>>(
            (eastl*)local_48, local_40, local_38, uVar1);
        pcVar2 = (char*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_48);
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        param_1->erase(pcVar2, pcVar3);
        return param_1;
    }

    // 0x100cb9040, 32 bytes, placed by debug map only (low confidence)
    // trim(eastl::string&)
    basic_string* trim(basic_string* param_1) {
        trim_right(param_1);
        trim_left(param_1);
        return param_1;
    }

    // 0x100cb9060, 304 bytes, placed by debug map only (low confidence)
    // percent_encode(eastl::string const&)
    basic_string* percent_encode(basic_string* param_1) {
        byte bVar1;
        ulong uVar2;
        byte* pbVar3;
        byte* pbVar4;
        fixed_string<char, 8, true, eastl::allocator> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (param_1) eastl::string();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->reserve(uVar2);
        pbVar3 = (byte*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pbVar4 = (byte*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        if (pbVar3 != pbVar4) {
            do {
                bVar1 = *pbVar3;
                if ((((25 < (byte)((bVar1 & 223) + 191)) && (9 < (byte)(bVar1 - 48))) && (1 < (byte)(bVar1 - 45))) &&
                    ((bVar1 != 126 && (bVar1 != 95)))) {
                    eastl::fixed_string<char, 8, true, eastl::allocator>::fixed_string(local_68);
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::
                        sprintf((char*)local_68, "%%%02X", (ulong)(uint)(int)(char)*pbVar3);
                    eastl::operator+=(param_1, (fixed_string*)local_68);
                    /* WARNING: Subroutine does not return */
                    local_68->~fixed_string();
                }
                eastl::string::operator+=((eastl::string*)param_1, bVar1);
                pbVar3 = pbVar3 + 1;
            } while (pbVar3 != pbVar4);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100cb9290, 192 bytes, placed by debug map only (low confidence)
    // mask_string_with_underscores(eastl::string const&)
    basic_string* mask_string_with_underscores(basic_string* param_1) {
        byte bVar1;
        ulong uVar2;
        byte* pbVar3;
        byte* pbVar4;

        new (param_1) eastl::string();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->reserve(uVar2);
        pbVar3 = (byte*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pbVar4 = (byte*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
            bVar1 = *pbVar3;
            if (((((byte)((bVar1 & 223) + 191) < 26) || ((byte)(bVar1 - 48) < 10)) || ((byte)(bVar1 - 45) < 2)) ||
                ((bVar1 == 126 || (bVar1 == 95)))) {
                eastl::string::operator+=((eastl::string*)param_1, bVar1);
            } else {
                eastl::string::operator+=((eastl::string*)param_1, '_');
            }
        }
        return param_1;
    }

    // 0x100cb9350, 432 bytes, placed by debug map only (low confidence)
    // make_html_safe(eastl::string const&)
    basic_string* make_html_safe(basic_string* param_1) {
        ulong uVar1;
        char* pcVar2;
        char* pcVar3;

        new (param_1) eastl::string();
        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->reserve(uVar1);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        do {
            if (pcVar2 == pcVar3) {
                return param_1;
            }
            switch ((int)*pcVar2) {
            case 34:
                param_1->append("&quot;");
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
                param_1->append(pcVar2, 1);
                break;
            case 38:
                param_1->append("&amp;");
                break;
            case 39:
                param_1->append("&apos;");
                break;
            case 60:
                param_1->append("&lt;");
                break;
            case 62:
                param_1->append("&gt;");
                break;
            default:
                if (*pcVar2 != 124)
                    goto switchD_100cb93df_caseD_23;
                param_1->append("<br/>");
            }
            pcVar2 = pcVar2 + 1;
        } while (true);
    }

    // 0x100cb9510, 272 bytes, placed by debug map only (low confidence)
    // split(eastl::string const&, char)
    vector<eastl::string, eastl::allocator>* split(basic_string* param_1, char param_2) {
        ulong uVar3;
        char* pcVar4;
        ulong uVar5;
        basic_string local_58[32];

        new (this) eastl::vector<eastl::string, eastl::allocator>();
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            uVar5 = 0;
            do {
                pcVar4 = (char*)eastl::string::operator[]((eastl::string*)param_1, uVar5);
                if (*pcVar4 == param_2) {
                    eastl::string::substr((ulong)local_58, (ulong)param_1);
                    ((jag*)this)->push_back(local_58);
                    local_58->~basic_string();
                }
                uVar5 = uVar5 + 1;
                uVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            } while (uVar5 < uVar3);
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        eastl::string::substr((ulong)local_58, (ulong)param_1);
        ((jag*)this)->push_back(local_58);
        local_58->~basic_string();
        return (vector<eastl::string, eastl::allocator>*)(jag*)this;
    }

    // 0x100cb9620, 256 bytes, placed by debug map only (low confidence)
    // ScanPreviousWordStart(StringView, int)
    void ScanPreviousWordStart(StringView param_1, int param_2) {
        bool bVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        byte* pbVar5;
        long lVar6;
        ulong uVar7;
        WrapArray<char const>* this;
        uint uVar8;
        uint uVar9;

        this = (WrapArray<char const>*)param_1.field_0;
        uVar9 = (uint)param_1.field_8;
        if (0 < (int)uVar9) {
            uVar8 = uVar9 - 1;
            pbVar5 = (byte*)WrapArray<char const>::operator[](this, (ulong)uVar8);
            iVar2 = isspace((uint)*pbVar5);
            if ((iVar2 != 0) && (uVar9 != 1)) {
                lVar6 = (long)(int)uVar9 + 1;
                uVar8 = uVar9;
                do {
                    uVar8 = uVar8 - 1;
                    pbVar5 = (byte*)WrapArray<char const>::operator[](this, lVar6 - 2);
                    iVar2 = isspace((uint)*pbVar5);
                    if (iVar2 == 0)
                        goto LAB_100cb9699;
                    lVar6 = lVar6 + -1;
                } while (2 < lVar6);
                uVar8 = 0;
            }
        LAB_100cb9699:
            uVar9 = 0;
            if (0 < (int)uVar8) {
                uVar7 = (long)(int)uVar8;
                do {
                    pbVar5 = (byte*)WrapArray<char const>::operator[](this, uVar7);
                    iVar2 = isspace((uint)*pbVar5);
                    if (iVar2 != 0) {
                        pbVar5 = (byte*)WrapArray<char const>::operator[](this, uVar7);
                        iVar2 = isspace((uint)*pbVar5);
                        uVar9 = ((int)uVar7 + 1) - (uint)(iVar2 == 0);
                        break;
                    }
                    bVar1 = 1 < (long)uVar7;
                    uVar7 = uVar7 - 1;
                } while (bVar1);
            }
        }
        uVar3 = eastl::max<int>(uVar9, 0);
        uVar4 = HeapBeginPtr();
        eastl::min<graphics::GraphicsQuality>(uVar3, uVar4);
    }

    // 0x100cb9790, 224 bytes, placed by debug map only (low confidence)
    // ScanNextWordStart(StringView, int)
    void ScanNextWordStart(StringView param_1, int param_2) {
        uint uVar1;
        int iVar2;
        undefined4 uVar3;
        byte* pbVar4;
        ulong uVar5;
        Layout* this;
        ulong uVar6;

        this = (Layout*)param_1.field_0;
        uVar1 = eastl::max<int>((int)param_1.field_8, 0);
        uVar5 = (ulong)uVar1;
        iVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
        if ((int)uVar1 < iVar2) {
            uVar6 = (ulong)(int)uVar1;
            pbVar4 = (byte*)WrapArray<char const>::operator[]((WrapArray<char const>*)this, uVar6);
            iVar2 = isspace((uint)*pbVar4);
            if (iVar2 == 0) {
                iVar2 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this);
                if ((int)uVar1 < iVar2) {
                    do {
                        pbVar4 = (byte*)WrapArray<char const>::operator[]((WrapArray<char const>*)this, uVar6);
                        iVar2 = isspace((uint)*pbVar4);
                        if (iVar2 != 0)
                            break;
                        uVar6 = uVar6 + 1;
                        iVar2 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this);
                    } while ((long)uVar6 < (long)iVar2);
                    uVar5 = uVar6 & 4294967295;
                }
            }
            iVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
            if ((int)uVar5 < iVar2) {
                uVar5 = (ulong)(int)uVar5;
                do {
                    pbVar4 = (byte*)WrapArray<char const>::operator[]((WrapArray<char const>*)this, uVar5);
                    iVar2 = isspace((uint)*pbVar4);
                    if (iVar2 == 0)
                        break;
                    uVar5 = uVar5 + 1;
                    iVar2 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this);
                } while ((long)uVar5 < (long)iVar2);
            }
        }
        uVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
        eastl::min<graphics::GraphicsQuality>(uVar5 & 4294967295, uVar3);
    }

} // namespace jag

// 0x100cb8ea0, 16 bytes, inline, placed by debug map only (low confidence)
// isspace(int)
void isspace(int param_1) {
    __istype(param_1, 16384);
}
