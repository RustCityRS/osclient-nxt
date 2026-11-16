// libs/jtl/TextConvert.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "TextConvert.h"

namespace jag {
    // 0x100cb9d20
    void FromText(StringView stringView, int& arg2, int arg3) {
        StringView local_38(*stringView);
        uint8_t* local_28 = PTR__strtol_100ee9e80;
        internal::TryParseFallback<int, long (*)(char const*, char**, int)>(
            &local_38, arg2, arg3, (long_______char_const___char____int_)&local_28);
    }

    // 0x100cb9e40
    void FromText(StringView stringView, unsigned int& arg2, int arg3) {
        StringView local_38(*stringView);
        uint8_t* local_28 = PTR__strtoul_100ee9e90;
        internal::TryParseFallback<unsigned int, unsigned long (*)(char const*, char**, int)>(
            &local_38, arg2, arg3, (unsigned_long_______char_const___char____int_)&local_28);
    }

    // 0x100cb9f50
    void FromText(StringView stringView, long long& arg2, int arg3) {
        StringView local_38(*stringView);
        uint8_t* local_28 = PTR__strtoll_100ee9e88;
        internal::TryParseFallback<long long, long long (*)(char const*, char**, int)>(
            &local_38, arg2, arg3, (long_long_______char_const___char____int_)&local_28);
    }

    // 0x100cba060
    void FromText(StringView stringView, unsigned long long& arg2, int arg3) {
        StringView local_38(*stringView);
        uint8_t* local_28 = PTR__strtoull_100ee9e98;
        internal::TryParseFallback<unsigned long long, unsigned long long (*)(char const*, char**, int)>(
            &local_38, arg2, arg3, (unsigned_long_long_______char_const___char____int_)&local_28);
    }

    // 0x100cba170
    unsigned long FromText(StringView stringView, bool& arg2, int arg3) {
        uint64_t unaff_R15;
        StringView local_60;
        StringView local_50;
        StringView local_40;

        int local_2c = 0;
        local_60.StringView<5ul>(&DAT_100e39422);
        bool cVar1 = *stringView == &local_60;
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        bool bVar2 = true;
        if (!cVar1) {
            local_50.StringView<6ul>("false");
            cVar1 = *stringView == &local_50;
            if (!cVar1) {
                local_40 = StringView(*stringView);
                cVar1 = FromText(&local_40, &local_2c, 10);
                if (!cVar1) {
                    uVar3 = 0;
                    goto LAB_100cba203;
                }
            }
            bVar2 = local_2c != 0;
        }
        arg2 = bVar2;
    LAB_100cba203:
        return uVar3 & 4294967295;
    }

    // 0x100cba2c0
    void FromText(StringView stringView, float& arg2, int arg3) {

        StringView local_28(*stringView);
        internal::TryParseFallback(&local_28, arg2);
    }

    // 0x100cba300
    void FromText(StringView stringView, double& arg2, int arg3) {

        StringView local_28(*stringView);
        internal::TryParseFallback(&local_28, arg2);
    }

    // 0x100cba340
    void FromText(const char* str, int& arg2, int arg3) {
        arg2 = eastl::stoi(str, arg3);
        return 1;
    }

    // 0x100cba370
    void FromText(const char* str, unsigned int& arg2, int arg3) {
        unsigned long uVar1 = _strtoul(str, nullptr, arg3);
        arg2 = (unsigned int)uVar1;
        return 1;
    }

    // 0x100cba390
    void FromText(const char* str, long long& arg2, int arg3) {
        arg2 = _strtoll(str, nullptr, arg3);
        return 1;
    }

    // 0x100cba3b0
    void FromText(const char* str, unsigned long long& arg2, int arg3) {
        arg2 = _strtoull(str, nullptr, arg3);
        return 1;
    }

    // 0x100cba3d0
    void FromText(const char* str, bool& arg2, int arg3) {
        uint32_t uVar2;
        bool bVar3;

        int iVar1 = _strcmp(str, "true");
        if (iVar1 == 0) {
            uVar2 = 0;
            bVar3 = true;
        } else {
            iVar1 = eastl::stoi(str, 10);
            bVar3 = iVar1 != 0;
            uVar2 = (uint32_t)((unsigned int)iVar1 >> 8);
        }
        arg2 = bVar3;
        return 1;
    }

    // 0x100cba410
    void FromText(const char* str, float& arg2, int arg3) {
        double dVar1 = _atof(str);
        arg2 = (float)dVar1;
        return 1;
    }

    // 0x100cba430
    void FromText(const char* str, double& arg2, int arg3) {
        arg2 = _atof(str);
        return 1;
    }

    // 0x100cba450
    unsigned long FromText(StringView stringView, math::Vector3T<float>& vector3, int arg3) {
        char* str;
        float* arg2;

        fixed_vector<eastl::fixed_string<char, 128>, 8ul> local_5a0;
        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>, StringView>(&local_5a0, stringView, ", ",
                                                                                       -1);
        unsigned long uVar3 = local_5a0.size();
        if (3 < uVar3) {
            LogAssert("tokens.size() <= 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 266,
                      nullptr);
        }
        vector3.SetXYZ(*PTR_ZERO_100ee66e8);
        int iVar2 = local_5a0.size();
        bool bVar4 = 0 < iVar2;
        if (0 < iVar2) {
            uVar3 = 0;
            do {
                local_5a0[uVar3];
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                arg2 = &vector3[(unsigned int)uVar3];
                if (!FromText<float>(str, arg2))
                    break;
                uVar3 = uVar3 + 1;
                iVar2 = local_5a0.size();
                bVar4 = (long)uVar3 < (long)iVar2;
            } while ((long)uVar3 < (long)iVar2);
        }
        return ~bVar4 & 4294967041;
    }

    // 0x100cba5b0
    int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>, StringView>(
        eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>& strs, const StringView& stringView, const char* str,
        int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_00;

        if (arg4 == -1) {
            sVar3 = _strlen(str);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        auto str1 = stringView.end();
        auto pcVar4 = stringView.end();
        char* pcVar6 = str1;
        if (str1 != pcVar4) {
            str1_00 = str1;
            do {
                str1 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                if (bVar1) {
                    if (str1_00 != str1) {
                        pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>::push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true>>::assign(
                            pRVar5, str1_00, str1);
                    }
                    if (str1 == pcVar4) {
                    LAB_100cba6a0:
                        pcVar6 = str1;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                            if (!bVar1)
                                goto LAB_100cba6a0;
                            str1 = str1 + 1;
                            pcVar6 = str1;
                        } while (str1 != pcVar4);
                    }
                } else {
                    pcVar6 = str1 + 1;
                    str1 = str1_00;
                }
                str1_00 = str1;
            } while (pcVar6 != pcVar4);
        }
        if (str1 != pcVar6) {
            pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>::push_back();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true>>::assign(pRVar5, str1,
                                                                                                         pcVar6);
        }
        return strs.size();
    }

    // 0x100cba710
    bool FromText<float>(const char* str, float& arg2) {
        int in_EDX;

        FromText(str, arg2, in_EDX);
        return true;
    }

    // 0x100cba7c0
    char* ToText(char* str, unsigned int arg2, int arg3, unsigned int arg4) {
        char local_48[40];

        auto pvVar1 = internal::itoa(local_48, 32, (long)arg3, arg4);
        if (32 < arg2) {
            _memcpy(str, pvVar1, (unsigned long)(32 + 1));
        }
        return str;
    }

    // 0x100cba830
    char* ToText(char* str, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        char local_48[40];

        auto pvVar1 = internal::utoa(local_48, 32, (unsigned long)arg3, arg4);
        if (32 < arg2) {
            _memcpy(str, pvVar1, (unsigned long)(32 + 1));
        }
        return str;
    }

    // 0x100cba8a0
    char* ToText(char* str, unsigned int arg2, long long arg3, unsigned int arg4) {
        char local_48[40];

        auto pvVar1 = internal::itoa(local_48, 32, arg3, arg4);
        if (32 < arg2) {
            _memcpy(str, pvVar1, (unsigned long)(32 + 1));
        }
        return str;
    }

    // 0x100cba910
    char* ToText(char* str, unsigned int arg2, unsigned long long arg3, unsigned int arg4) {
        char local_48[40];

        auto pvVar1 = internal::utoa(local_48, 32, arg3, arg4);
        if (32 < arg2) {
            _memcpy(str, pvVar1, (unsigned long)(32 + 1));
        }
        return str;
    }

    // 0x100cba980
    char* ToText(char* str, unsigned int arg2, bool arg3, unsigned int arg4) {
        if (arg2 < 6) {
            LogAssert("uTextSize > 5",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 335,
                      nullptr);
        }
        if (arg4 != 10) {
            LogAssert("radix == 10",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 337,
                      nullptr);
        }
        char* pcVar1 = "false";
        if (arg3) {
            pcVar1 = "true";
        }
        _strcpy(str, pcVar1);
        return str;
    }

    // 0x100cbaa10
    unsigned int TrimNumericZeros(char* str, int arg2) {
        unsigned int uVar1;
        bool bVar2;
        bool bVar3;

        if (__ZL6strchrUa9enable_ifIXLb1EEEPci() != 0) {
            do {
                if (arg2 < 1) {
                    return arg2;
                }
                uVar1 = arg2 - 1;
                bVar2 = false;
                bVar3 = false;
                if (str[uVar1] == '.') {
                LAB_100cbaa30:
                    bVar2 = bVar3;
                    str[uVar1] = '\0';
                    arg2 = uVar1;
                } else if (str[uVar1] == '0') {
                    bVar3 = true;
                    goto LAB_100cbaa30;
                }
            } while (bVar2);
        }
        return arg2;
    }

    // 0x100cbaa70
    char* ToText(char* str, unsigned int arg2, float arg3, unsigned int arg4) {
        if (arg4 != 10) {
            LogAssert("radix == 10",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 371,
                      nullptr);
        }
        int arg2_00 = _snprintf(str, (unsigned long)arg2, "%f", (double)arg3);
        TrimNumericZeros(str, arg2_00);
        return str;
    }

    // 0x100cbaae0
    char* ToText(char* str, unsigned int arg2, double arg3, unsigned int arg4) {
        if (arg4 != 10) {
            LogAssert("radix == 10",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 380,
                      nullptr);
        }
        int arg2_00 = _snprintf(str, (unsigned long)arg2, "%lf");
        TrimNumericZeros(str, arg2_00);
        return str;
    }

} // namespace jag

namespace jag::internal {
    // 0x100cb9870
    void TryParseFallback(StringView stringView, float& arg2) {
        auto local_68 = stringView->to_owned_string<eastl::fixed_string<char, 30>>();
        char* local_78 = nullptr;
        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        float local_6c = _strtof(pcVar1, &local_78);
        pcVar1 = local_78;
        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (pcVar1 != pcVar2) {
            arg2 = local_6c;
        }
    }

    // 0x100cb9960
    void TryParseFallback(StringView stringView, double& arg2) {
        auto local_80 = stringView->to_owned_string<eastl::fixed_string<char, 50>>();
        char* local_88 = nullptr;
        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        double dVar3 = _strtod(pcVar1, &local_88);
        pcVar1 = local_88;
        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (pcVar1 != pcVar2) {
            arg2 = dVar3;
        }
    }

    // 0x100cb9a60
    char* itoa(char* str, unsigned int& arg2, long long arg3, unsigned int arg4) {
        char cVar1;
        unsigned int uVar2;
        long lVar3;
        long lVar4;
        char* pcVar5;
        char* pcVar6;
        char cVar7;

        if (34 < arg4 - 2) {
            LogAssert("radix >= 2 && radix <= 36",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 92,
                      nullptr);
        }
        unsigned long uVar8 = (unsigned long)*arg2;
        long long arg1 = -arg3;
        if (-arg3 < 0) {
            arg1 = arg3;
        }
        double dVar9 = (double)log<long long>(arg1);
        double dVar10 = (double)log<unsigned int>(arg4);
        if ((double)uVar8 < (double)((unsigned int)((unsigned long)arg3 >> 63) | 2) + dVar9 / dVar10) {
            LogAssert("tempBufferSize >= ((std::log(value) / std::log(radix)) + 1 + (negative ? 1 : 0) + 1 )",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 99,
                      nullptr);
        }
        str[uVar8 - 1] = '\0';
        if (arg1 == 0) {
            str[uVar8 - 2] = '0';
            pcVar6 = str + (uVar8 - 2);
            uVar2 = 1;
        } else {
            pcVar6 = str + (uVar8 - 2);
            do {
                pcVar5 = pcVar6;
                lVar3 = arg1 / (long)(unsigned long)arg4;
                lVar4 = arg1 % (long)(unsigned long)arg4;
                cVar1 = (char)lVar4;
                cVar7 = cVar1 + '7';
                if ((int)lVar4 < 10) {
                    cVar7 = cVar1 + '0';
                }
                *pcVar5 = cVar7;
                pcVar6 = pcVar5 - 1;
                arg1 = lVar3;
            } while (lVar3 != 0);
            if (arg3 < 0) {
                *pcVar6 = '-';
            } else {
                pcVar6 = pcVar5;
            }
            uVar2 = ~((int)pcVar6 - (int)str) + arg2;
        }
        arg2 = uVar2;
        return pcVar6;
    }

    // 0x100cb9be0
    char* utoa(char* str, unsigned int& arg2, unsigned long long arg3, unsigned int arg4) {
        char cVar1;
        bool cVar3;
        bool bVar7;

        unsigned int uVar4 = arg2;
        double dVar8 = (double)log<unsigned long long>(arg3);
        double dVar9 = (double)log<unsigned int>(arg4);
        if ((double)uVar4 < dVar8 / dVar9 + 2.0) {
            LogAssert("tempBufferSize >= ((std::log(value) / std::log(radix)) + 1 + 1 )",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 128,
                      nullptr);
        }
        if (34 < arg4 - 2) {
            LogAssert("radix >= 2 && radix <= 36",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 129,
                      nullptr);
        }
        unsigned long uVar5 = (unsigned long)*arg2;
        char* pcVar2 = str + (uVar5 - 1);
        str[uVar5 - 1] = '\0';
        if (arg3 == 0) {
            str[uVar5 - 2] = '0';
            pcVar2 = str + (uVar5 - 2);
            uVar4 = 1;
        } else {
            do {
                cVar1 = (char)(arg3 % (unsigned long)arg4);
                cVar3 = cVar1 + '7';
                if ((int)(arg3 % (unsigned long)arg4) < 10) {
                    cVar3 = cVar1 + '0';
                }
                pcVar2[-1] = cVar3;
                pcVar2 = pcVar2 - 1;
                uVar4 = (int)uVar5 - 1;
                uVar5 = (unsigned long)uVar4;
                bVar7 = (unsigned long)arg4 <= arg3;
                arg3 = arg3 / (unsigned long)arg4;
            } while (bVar7);
            uVar4 = arg2 - uVar4;
        }
        arg2 = uVar4;
        return pcVar2;
    }

    // 0x100cb9d70
    bool TryParseFallback<int, long (*)(char const*, char**, int)>(StringView stringView, int& arg2, int arg3,
                                                                   long (*&&)(char const*, char**, int) arg4) {
        uint32_t in_register_0000000c;

        auto local_70 = stringView->to_owned_string<eastl::fixed_string<char, 20>>();
        long local_78 = 0;
        void* pcVar1 = *(void (**)(...))(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        int iVar3 = (*pcVar1)(uVar4, &local_78, arg3);
        long lVar2 = local_78;
        long lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar2 != lVar5) {
            arg2 = iVar3;
        }
    }

    // 0x100cb9e90
    bool TryParseFallback<unsigned int, unsigned long (*)(char const*, char**, int)>(
        StringView stringView, unsigned int& arg2, int arg3, unsigned long (*&&)(char const*, char**, int) arg4) {
        uint32_t in_register_0000000c;

        auto local_70 = stringView->to_owned_string<eastl::fixed_string<char, 20>>();
        long local_78 = 0;
        void* pcVar1 = *(void (**)(...))(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        uint64_t uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned int uVar3 = (*pcVar1)(uVar4, &local_78, arg3);
        long lVar2 = local_78;
        long lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar2 != lVar5) {
            arg2 = uVar3;
        }
    }

    // 0x100cb9fa0
    bool TryParseFallback<long long, long long (*)(char const*, char**, int)>(StringView stringView, long long& arg2,
                                                                              int arg3,
                                                                              long long (*&&)(char const*, char**, int)
                                                                                  arg4) {
        uint32_t in_register_0000000c;

        auto local_70 = stringView->to_owned_string<eastl::fixed_string<char, 20>>();
        long local_78 = 0;
        void* pcVar1 = *(void (**)(...))(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long long lVar4 = (*pcVar1)(uVar3, &local_78, arg3);
        long lVar2 = local_78;
        long lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar2 != lVar5) {
            arg2 = lVar4;
        }
    }

    // 0x100cba0b0
    bool TryParseFallback<unsigned long long, unsigned long long (*)(char const*, char**, int)>(
        StringView stringView, unsigned long long& arg2, int arg3,
        unsigned long long (*&&)(char const*, char**, int) arg4) {
        uint32_t in_register_0000000c;

        auto local_70 = stringView->to_owned_string<eastl::fixed_string<char, 20>>();
        long local_78 = 0;
        void* pcVar1 = *(void (**)(...))(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long long uVar4 = (*pcVar1)(uVar3, &local_78, arg3);
        long lVar2 = local_78;
        long lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar2 != lVar5) {
            arg2 = uVar4;
        }
    }

} // namespace jag::internal

// 0x100cbaa60
void __ZL6strchrUa9enable_ifIXLb1EEEPci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}
