// libs/jtl/utils/Base64.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Base64 {
    public:
        bool DecodeString<Array<unsigned char>>(Array<unsigned char>& arg1, const char* str);
        bool DecodeString<Array<unsigned char>, eastl::fixed_substring<char>>(
            Array<unsigned char>& arg1, const eastl::fixed_substring<char>& fixed_substring);
        bool DecodStringImpl<Array<unsigned char>, eastl::fixed_substring<char>>(
            unsigned int& arg1, Array<unsigned char>& arg2, const eastl::fixed_substring<char>& fixed_substring);
        bool DecodeString<eastl::vector<unsigned char>>(eastl::vector<unsigned char>& arg1, const char* str);
        bool DecodeString<eastl::vector<unsigned char>, eastl::fixed_substring<char>>(
            eastl::vector<unsigned char>& arg1, const eastl::fixed_substring<char>& fixed_substring);
        bool DecodStringImpl<eastl::vector<unsigned char>, eastl::fixed_substring<char>>(
            unsigned int& arg1, eastl::vector<unsigned char>& arg2,
            const eastl::fixed_substring<char>& fixed_substring);
        uint32_t DecodeChar(char arg1);
        bool DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str1, const char* str2);
        bool DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                          eastl::fixed_substring<char>>(
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str,
            const eastl::fixed_substring<char>& fixed_substring);
        bool DecodStringImpl<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                             eastl::fixed_substring<char>>(
            unsigned int& arg1, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str,
            const eastl::fixed_substring<char>& fixed_substring);
        bool DecodeString<eastl::string, StringView>(eastl::string& str, const StringView& stringView);
        bool DecodeString<eastl::fixed_vector<unsigned char, 512ul>, StringView>(
            eastl::fixed_vector<unsigned char, 512ul>& arg1, const StringView& stringView);
        bool DecodeString<eastl::fixed_vector<unsigned char, 128ul>, StringView>(
            eastl::fixed_vector<unsigned char, 128ul>& arg1, const StringView& stringView);
        bool DecodStringImpl<eastl::fixed_vector<unsigned char, 128ul>, StringView>(
            unsigned int& arg1, eastl::fixed_vector<unsigned char, 128ul>& arg2, const StringView& stringView);
        bool DecodStringImpl<eastl::string, StringView>(unsigned int& arg1, eastl::string& str,
                                                        const StringView& stringView);
        bool DecodStringImpl<eastl::fixed_vector<unsigned char, 512ul>, StringView>(
            unsigned int& arg1, eastl::fixed_vector<unsigned char, 512ul>& arg2, const StringView& stringView);
        bool DecodeString<Array<unsigned char>, eastl::string>(Array<unsigned char>& arg1, const eastl::string& str);
        bool DecodStringImpl<Array<unsigned char>, eastl::string>(unsigned int& arg1, Array<unsigned char>& arg2,
                                                                  const eastl::string& str);
        Base64* Instance();
        Base64();
        void CleanInstance();
        void EncodeInner(eastl::string& str1, unsigned char* arg2, unsigned long arg3, char* str2);
        void Encode(eastl::string& str, unsigned char* arg2, unsigned long arg3);
        void EncodeAlt(eastl::string& str, unsigned char* arg2, unsigned long arg3);
        static uint8_t m_instance[16];

        uint8_t _unknown_0[136];
    };

    // 0x100049a60
    bool Base64::DecodeString<Array<unsigned char>>(Array<unsigned char>& arg1, const char* str) {
        fixed_substring<char> local_40(str);
        bool bVar1 = DecodeString<Array<unsigned char>, eastl::fixed_substring<char>>(this, arg1, &local_40);
        return bVar1;
    }

    // 0x100049af0
    bool Base64::DecodeString<Array<unsigned char>, eastl::fixed_substring<char>>(
        Array<unsigned char>& arg1, const eastl::fixed_substring<char>& fixed_substring) {
        int iVar2 = fixed_substring.size();
        arg1.clear();
        int iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        arg1.set_max_size((long)(iVar3 >> 2), 0);
        unsigned int local_2c = 0;
        bool bVar1 =
            DecodStringImpl<Array<unsigned char>, eastl::fixed_substring<char>>(this, &local_2c, arg1, fixed_substring);
        if (bVar1) {
            arg1.set_max_size((unsigned long)local_2c, 3);
        }
        return bVar1;
    }

    // 0x100049b80
    bool Base64::DecodStringImpl<Array<unsigned char>, eastl::fixed_substring<char>>(
        unsigned int& arg1, Array<unsigned char>& arg2, const eastl::fixed_substring<char>& fixed_substring) {
        int iVar2;
        unsigned int uVar3;
        int iVar4;
        char* pcVar5;
        uint8_t* pbVar6;
        long lVar7;
        unsigned long uVar8;
        unsigned long arg1_00;
        unsigned int local_3c;

        if (arg1 != 0) {
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      nullptr);
        }
        int iVar1 = fixed_substring.size();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            arg1_00 = 0;
            do {
                pcVar5 = (char*)fixed_substring.at(arg1_00);
                iVar2 = DecodeChar(*pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_100049d51;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(arg1_00 + 1) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 1);
                    uVar3 = DecodeChar(*pcVar5);
                    uVar8 = (unsigned long)uVar3;
                }
                if ((long)(arg1_00 + 2) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 2);
                    local_3c = DecodeChar(*pcVar5);
                }
                iVar4 = -1;
                if ((long)(arg1_00 + 3) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 3);
                    iVar4 = DecodeChar(*pcVar5);
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(uVar8 >> 4) | (uint8_t)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_100049d51;
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(local_3c >> 2) | (uint8_t)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_100049d51;
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)iVar4 | (uint8_t)(local_3c << 6);
                arg1_00 = arg1_00 + 4;
            } while ((int)arg1_00 < iVar1);
        }
        iVar2 = 2;
    LAB_100049d51:
        return iVar2 == 2;
    }

    // 0x1001db440
    bool Base64::DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>>(
        eastl::vector<unsigned char, BucketAllocatorEASTL>& arg1, const char* str) {
        fixed_substring<char> local_40(str);
        bool bVar1 = DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
            this, arg1, &local_40);
        return bVar1;
    }

    // 0x1001db6f0
    bool Base64::DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
        eastl::vector<unsigned char, BucketAllocatorEASTL>& arg1, const eastl::fixed_substring<char>& fixed_substring) {
        int iVar2 = fixed_substring.size();
        arg1.clear();
        int iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        arg1.resize((long)(iVar3 >> 2));
        unsigned int local_2c = 0;
        bool bVar1 = DecodStringImpl<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
            this, &local_2c, arg1, fixed_substring);
        if (bVar1) {
            arg1.resize((unsigned long)local_2c);
        }
        return bVar1;
    }

    // 0x1001db8c0
    bool Base64::DecodStringImpl<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
        unsigned int& arg1, eastl::vector<unsigned char, BucketAllocatorEASTL>& arg2,
        const eastl::fixed_substring<char>& fixed_substring) {
        int iVar2;
        unsigned int uVar3;
        int iVar4;
        char* pcVar5;
        uint8_t* pbVar6;
        long lVar7;
        unsigned long uVar8;
        unsigned long arg1_00;
        unsigned int local_3c;

        if (arg1 != 0) {
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      nullptr);
        }
        int iVar1 = fixed_substring.size();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            arg1_00 = 0;
            do {
                pcVar5 = (char*)fixed_substring.at(arg1_00);
                iVar2 = DecodeChar(*pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_1001dba91;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(arg1_00 + 1) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 1);
                    uVar3 = DecodeChar(*pcVar5);
                    uVar8 = (unsigned long)uVar3;
                }
                if ((long)(arg1_00 + 2) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 2);
                    local_3c = DecodeChar(*pcVar5);
                }
                iVar4 = -1;
                if ((long)(arg1_00 + 3) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 3);
                    iVar4 = DecodeChar(*pcVar5);
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(uVar8 >> 4) | (uint8_t)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_1001dba91;
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(local_3c >> 2) | (uint8_t)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_1001dba91;
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)iVar4 | (uint8_t)(local_3c << 6);
                arg1_00 = arg1_00 + 4;
            } while ((int)arg1_00 < iVar1);
        }
        iVar2 = 2;
    LAB_1001dba91:
        return iVar2 == 2;
    }

    // 0x1001dbc30
    uint32_t Base64::DecodeChar(char arg1) {
        if (arg1 < '\0') {
            return 4294967295;
        }
        uint32_t* puVar1 = &field_128[(long)arg1];
        return *puVar1;
    }

    // 0x1001e2fc0
    bool Base64::DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str1, const char* str2) {
        fixed_substring<char> local_40(str2);
        bool bVar1 = DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                  eastl::fixed_substring<char>>(this, str1, &local_40);
        return bVar1;
    }

    // 0x1001e3020
    bool Base64::DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                              eastl::fixed_substring<char>>(
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str,
        const eastl::fixed_substring<char>& fixed_substring) {
        int iVar2 = fixed_substring.size();
        str.clear();
        int iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        str.resize((long)(iVar3 >> 2));
        unsigned int local_2c = 0;
        bool bVar1 = DecodStringImpl<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                     eastl::fixed_substring<char>>(this, &local_2c, str, fixed_substring);
        if (bVar1) {
            str.resize((unsigned long)local_2c);
        }
        return bVar1;
    }

    // 0x1001e3100
    bool Base64::DecodStringImpl<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                 eastl::fixed_substring<char>>(
        unsigned int& arg1, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>& str,
        const eastl::fixed_substring<char>& fixed_substring) {
        int iVar2;
        unsigned int uVar3;
        int iVar4;
        char* pcVar5;
        uint8_t* pbVar6;
        long lVar7;
        unsigned long uVar8;
        unsigned long arg1_00;
        unsigned int local_3c;

        if (arg1 != 0) {
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      nullptr);
        }
        int iVar1 = fixed_substring.size();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            arg1_00 = 0;
            do {
                pcVar5 = (char*)fixed_substring.at(arg1_00);
                iVar2 = DecodeChar(*pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_1001e32d1;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(arg1_00 + 1) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 1);
                    uVar3 = DecodeChar(*pcVar5);
                    uVar8 = (unsigned long)uVar3;
                }
                if ((long)(arg1_00 + 2) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 2);
                    local_3c = DecodeChar(*pcVar5);
                }
                iVar4 = -1;
                if ((long)(arg1_00 + 3) < lVar7) {
                    pcVar5 = (char*)fixed_substring.at(arg1_00 + 3);
                    iVar4 = DecodeChar(*pcVar5);
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &str[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(uVar8 >> 4) | (uint8_t)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_1001e32d1;
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &str[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(local_3c >> 2) | (uint8_t)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_1001e32d1;
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &str[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)iVar4 | (uint8_t)(local_3c << 6);
                arg1_00 = arg1_00 + 4;
            } while ((int)arg1_00 < iVar1);
        }
        iVar2 = 2;
    LAB_1001e32d1:
        return iVar2 == 2;
    }

    // 0x1006e0d30
    bool Base64::DecodeString<eastl::string, StringView>(eastl::string& str, const StringView& stringView) {
        int iVar2 = stringView.HeapBeginPtr();
        str.clear();
        int iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        str.resize((long)(iVar3 >> 2));
        unsigned int local_2c = 0;
        bool bVar1 = DecodStringImpl<eastl::string, StringView>(this, &local_2c, str, stringView);
        if (bVar1) {
            str.resize((unsigned long)local_2c);
        }
        return bVar1;
    }

    // 0x1006e0f20
    bool Base64::DecodeString<eastl::fixed_vector<unsigned char, 512ul>, StringView>(
        eastl::fixed_vector<unsigned char, 512ul>& arg1, const StringView& stringView) {
        int iVar2 = stringView.HeapBeginPtr();
        arg1.clear();
        int iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        arg1.resize((long)(iVar3 >> 2));
        unsigned int local_2c = 0;
        bool bVar1 =
            DecodStringImpl<eastl::fixed_vector<unsigned char, 512ul>, StringView>(this, &local_2c, arg1, stringView);
        if (bVar1) {
            arg1.resize((unsigned long)local_2c);
        }
        return bVar1;
    }

    // 0x1006e6fa0
    bool Base64::DecodeString<eastl::fixed_vector<unsigned char, 128ul>, StringView>(
        eastl::fixed_vector<unsigned char, 128ul>& arg1, const StringView& stringView) {
        int iVar2 = stringView.HeapBeginPtr();
        arg1.clear();
        int iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        arg1.resize((long)(iVar3 >> 2));
        unsigned int local_2c = 0;
        bool bVar1 =
            DecodStringImpl<eastl::fixed_vector<unsigned char, 128ul>, StringView>(this, &local_2c, arg1, stringView);
        if (bVar1) {
            arg1.resize((unsigned long)local_2c);
        }
        return bVar1;
    }

    // 0x1006e7340
    bool Base64::DecodStringImpl<eastl::fixed_vector<unsigned char, 128ul>, StringView>(
        unsigned int& arg1, eastl::fixed_vector<unsigned char, 128ul>& arg2, const StringView& stringView) {
        int iVar2;
        unsigned int uVar3;
        int iVar4;
        char* pcVar5;
        uint8_t* pbVar6;
        long lVar7;
        unsigned long uVar8;
        unsigned long arg1_00;
        unsigned int local_3c;

        if (arg1 != 0) {
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      nullptr);
        }
        int iVar1 = stringView.HeapBeginPtr();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            arg1_00 = 0;
            do {
                pcVar5 = stringView.at(arg1_00);
                iVar2 = DecodeChar(*pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_1006e7511;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(arg1_00 + 1) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 1);
                    uVar3 = DecodeChar(*pcVar5);
                    uVar8 = (unsigned long)uVar3;
                }
                if ((long)(arg1_00 + 2) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 2);
                    local_3c = DecodeChar(*pcVar5);
                }
                iVar4 = -1;
                if ((long)(arg1_00 + 3) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 3);
                    iVar4 = DecodeChar(*pcVar5);
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(uVar8 >> 4) | (uint8_t)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_1006e7511;
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(local_3c >> 2) | (uint8_t)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_1006e7511;
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)iVar4 | (uint8_t)(local_3c << 6);
                arg1_00 = arg1_00 + 4;
            } while ((int)arg1_00 < iVar1);
        }
        iVar2 = 2;
    LAB_1006e7511:
        return iVar2 == 2;
    }

    // 0x100714240
    bool Base64::DecodStringImpl<eastl::string, StringView>(unsigned int& arg1, eastl::string& str,
                                                            const StringView& stringView) {
        int iVar2;
        unsigned int uVar3;
        int iVar4;
        char* pcVar5;
        uint8_t* pbVar6;
        long lVar7;
        unsigned long uVar8;
        unsigned long arg1_00;
        unsigned int local_3c;

        if (arg1 != 0) {
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      nullptr);
        }
        int iVar1 = stringView.HeapBeginPtr();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            arg1_00 = 0;
            do {
                pcVar5 = stringView.at(arg1_00);
                iVar2 = DecodeChar(*pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_100714411;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(arg1_00 + 1) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 1);
                    uVar3 = DecodeChar(*pcVar5);
                    uVar8 = (unsigned long)uVar3;
                }
                if ((long)(arg1_00 + 2) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 2);
                    local_3c = DecodeChar(*pcVar5);
                }
                iVar4 = -1;
                if ((long)(arg1_00 + 3) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 3);
                    iVar4 = DecodeChar(*pcVar5);
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &str[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(uVar8 >> 4) | (uint8_t)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_100714411;
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &str[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(local_3c >> 2) | (uint8_t)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_100714411;
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &str[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)iVar4 | (uint8_t)(local_3c << 6);
                arg1_00 = arg1_00 + 4;
            } while ((int)arg1_00 < iVar1);
        }
        iVar2 = 2;
    LAB_100714411:
        return iVar2 == 2;
    }

    // 0x1007145a0
    bool Base64::DecodStringImpl<eastl::fixed_vector<unsigned char, 512ul>, StringView>(
        unsigned int& arg1, eastl::fixed_vector<unsigned char, 512ul>& arg2, const StringView& stringView) {
        int iVar2;
        unsigned int uVar3;
        int iVar4;
        char* pcVar5;
        uint8_t* pbVar6;
        long lVar7;
        unsigned long uVar8;
        unsigned long arg1_00;
        unsigned int local_3c;

        if (arg1 != 0) {
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      nullptr);
        }
        int iVar1 = stringView.HeapBeginPtr();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            arg1_00 = 0;
            do {
                pcVar5 = stringView.at(arg1_00);
                iVar2 = DecodeChar(*pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_100714771;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(arg1_00 + 1) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 1);
                    uVar3 = DecodeChar(*pcVar5);
                    uVar8 = (unsigned long)uVar3;
                }
                if ((long)(arg1_00 + 2) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 2);
                    local_3c = DecodeChar(*pcVar5);
                }
                iVar4 = -1;
                if ((long)(arg1_00 + 3) < lVar7) {
                    pcVar5 = stringView.at(arg1_00 + 3);
                    iVar4 = DecodeChar(*pcVar5);
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(uVar8 >> 4) | (uint8_t)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_100714771;
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(local_3c >> 2) | (uint8_t)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_100714771;
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)iVar4 | (uint8_t)(local_3c << 6);
                arg1_00 = arg1_00 + 4;
            } while ((int)arg1_00 < iVar1);
        }
        iVar2 = 2;
    LAB_100714771:
        return iVar2 == 2;
    }

    // 0x100891b00
    bool Base64::DecodeString<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(
        Array<unsigned char, BucketAllocatorEASTL>& arg1, const eastl::string& str) {
        int iVar2 = str.size();
        arg1.clear();
        int iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        arg1.set_max_size((long)(iVar3 >> 2), 0);
        unsigned int local_2c = 0;
        bool bVar1 =
            DecodStringImpl<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(this, &local_2c, arg1, str);
        if (bVar1) {
            arg1.set_max_size((unsigned long)local_2c, 3);
        }
        return bVar1;
    }

    // 0x10089d770
    bool Base64::DecodStringImpl<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(
        unsigned int& arg1, Array<unsigned char, BucketAllocatorEASTL>& arg2, const eastl::string& str) {
        int iVar2;
        unsigned int uVar3;
        int iVar4;
        char* pcVar5;
        uint8_t* pbVar6;
        long lVar7;
        unsigned long uVar8;
        unsigned long arg1_00;
        unsigned int local_3c;

        if (arg1 != 0) {
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      nullptr);
        }
        int iVar1 = str.size();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            arg1_00 = 0;
            do {
                pcVar5 = (char*)str.at(arg1_00);
                iVar2 = DecodeChar(*pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_10089d941;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(arg1_00 + 1) < lVar7) {
                    pcVar5 = (char*)str.at(arg1_00 + 1);
                    uVar3 = DecodeChar(*pcVar5);
                    uVar8 = (unsigned long)uVar3;
                }
                if ((long)(arg1_00 + 2) < lVar7) {
                    pcVar5 = (char*)str.at(arg1_00 + 2);
                    local_3c = DecodeChar(*pcVar5);
                }
                iVar4 = -1;
                if ((long)(arg1_00 + 3) < lVar7) {
                    pcVar5 = (char*)str.at(arg1_00 + 3);
                    iVar4 = DecodeChar(*pcVar5);
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(uVar8 >> 4) | (uint8_t)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_10089d941;
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)(local_3c >> 2) | (uint8_t)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_10089d941;
                }
                uVar3 = arg1;
                arg1 = uVar3 + 1;
                pbVar6 = &arg2[(unsigned long)uVar3];
                *pbVar6 = (uint8_t)iVar4 | (uint8_t)(local_3c << 6);
                arg1_00 = arg1_00 + 4;
            } while ((int)arg1_00 < iVar1);
        }
        iVar2 = 2;
    LAB_10089d941:
        return iVar2 == 2;
    }

} // namespace jag

namespace jag::oldscape::option {
    // 0x10004a330
    void
    OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        ImpactStrength local_10;

        FromString<eastl::fixed_string<char, 64>, int>(str, (int*)&local_10, 10);
        bool local_9 = IsValidEnumValue<ChatTimestampMode>((type*)(unsigned long)local_10);
        ImpactStrength local_14 = local_10;
        std::make_tuple<bool const&, hal::Haptics::ImpactStrength>(local_9, local_14);
    }

} // namespace jag::oldscape::option
