// libs/oldscape/jagex3/core/stringtools/general/StringTools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::stringtools {
    // 0x10017ba50
    eastl::string URLEncodeCP1252<eastl::string>(const eastl::string& str) {
        uint8_t bVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        char* str_00;
        unsigned long uVar6;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* in_RSI;

        new (str) eastl::string();
        str.clear();
        unsigned long uVar4 = in_RSI->size();
        str.reserve(uVar4);
        unsigned long local_38 = 0;
        if (in_RSI->size() != 0) {
            do {
                str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar4 = in_RSI->size();
                uVar2 = GetUTF8NextChar(str_00, &local_38, uVar4);
                if (((uVar2 & 4294967263) - 65 < 26) || (uVar2 - 48 < 10)) {
                LAB_10017bb00:
                    eastl::string::append((ReturnValue*)str, 1, (char)uVar2);
                } else {
                    uVar3 = uVar2 - 32;
                    if (uVar3 < 64) {
                        if ((9223372036854801408U >> ((unsigned long)uVar3 & 63) & 1) != 0)
                            goto LAB_10017bb00;
                        if ((unsigned long)uVar3 != 0)
                            goto LAB_10017bb3f;
                        eastl::string::append((ReturnValue*)str, 1, '+');
                    } else {
                    LAB_10017bb3f:
                        eastl::string::append((ReturnValue*)str, 1, '%');
                        bVar1 = WideToCP1252((char16_t)uVar2);
                        if (bVar1 < 160) {
                            eastl::string::append((ReturnValue*)str, 1, bVar1 >> 4 | 48);
                        } else {
                            eastl::string::append((ReturnValue*)str, 1, (bVar1 >> 4) + 55);
                        }
                        bVar1 = bVar1 & 15;
                        if (bVar1 < 10) {
                            eastl::string::append((ReturnValue*)str, 1, bVar1 | 48);
                        } else {
                            eastl::string::append((ReturnValue*)str, 1, bVar1 + 55);
                        }
                    }
                }
                uVar4 = local_38;
                uVar6 = in_RSI->size();
            } while (uVar4 < uVar6);
        }
        return str;
    }

    // 0x100186e90
    eastl::string rot13<eastl::string, eastl::string>(const eastl::string& str) {
        int iVar2;
        uint8_t* pbVar6;
        int iVar7;
        uint8_t bVar8;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* in_RSI;

        new (str) eastl::string();
        str.reserve(in_RSI->size() + 1);
        unsigned long uVar4 = in_RSI->size();
        str.force_size(uVar4);
        uVar4 = in_RSI->size();
        uint8_t* puVar5 = &str[uVar4];
        *puVar5 = 0;
        unsigned int uVar1 = in_RSI->size();
        if (0 < (int)uVar1) {
            uVar4 = 0;
            do {
                pbVar6 = (uint8_t*)(*in_RSI)[uVar4];
                bVar8 = *pbVar6;
                if ((uint8_t)((bVar8 & 223) + 191) < 26) {
                    iVar2 = (unsigned int)('Z' < (char)bVar8) * 32;
                    iVar7 = ((int)(char)bVar8 - (iVar2 + 65)) + 13;
                    bVar8 = (char)iVar7 + (char)(iVar7 / 26) * -26 + (char)iVar2 + 65;
                }
                pbVar6 = &str[uVar4];
                *pbVar6 = bVar8;
                uVar4 = uVar4 + 1;
            } while (uVar1 != uVar4);
        }
        return str;
    }

    // 0x100187080
    unsigned int hash32<eastl::string>(const eastl::string& str) {
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2 = str.size();
        return hash32(str_00, arg2);
    }

    // 0x1001a22c0
    unsigned long UTF8ToCP1252<eastl::string>(const eastl::string& str1, eastl::string& str2) {
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long uVar1 = str1.size();
        uVar1 = UTF8ToCP1252<eastl::string>(str1_00, uVar1, str2);
        return uVar1;
    }

    // 0x1001a2380
    unsigned long CP1252ToUTF8<eastl::string>(const eastl::string& str1, eastl::string& str2) {
        eastl::string local_48;
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long uVar1 = str1.size();
        uVar1 = CP1252ToUTF8<eastl::string>(str1_00, uVar1, &local_48);
        local_48.swap(str2);
        return uVar1;
    }

    // 0x1001a2400
    unsigned long UTF8ToCP1252<eastl::string>(const char* str1, unsigned long arg2, eastl::string& str2) {
        char arg2_00;

        eastl::string local_60;
        local_60.clear();
        local_60.reserve(arg2);
        unsigned long local_38 = 0;
        unsigned long uVar1 = 0;
        if (arg2 != 0) {
            do {
                arg2_00 = WideToCP1252(GetUTF8NextChar(str1, &local_38, arg2));
                eastl::string::append(&local_60, 1, arg2_00);
                uVar1 = uVar1 + 1;
            } while (local_38 < arg2);
        }
        str2.swap(local_60);
        return uVar1;
    }

    // 0x1001a2660
    unsigned long CP1252ToUTF8<eastl::string>(const char* str1, unsigned long arg2, eastl::string& str2) {
        unsigned long uVar1;

        eastl::string local_50;
        local_50.clear();
        local_50.reserve(arg2);
        if (arg2 == 0) {
            arg2 = 0;
        } else {
            uVar1 = 0;
            do {
                CP1252ToUTF8Append<eastl::string>(str1[uVar1], &local_50);
                uVar1 = uVar1 + 1;
            } while (arg2 != uVar1);
        }
        str2.swap(local_50);
        return arg2;
    }

    // 0x1001a2710
    void CP1252ToUTF8Append<eastl::string>(unsigned char arg1, eastl::string& str) {
        unsigned short uVar1;
        unsigned short* puVar2;

        if (((char)arg1 < '\0') && (arg1 < 160)) {
            puVar2 = (unsigned short*)(*((array<char16_t, 256ul>*)(unsigned long)arg1))[(unsigned long)str];
            uVar1 = *puVar2;
        } else {
            uVar1 = (unsigned short)arg1;
        }
        UTF8Append<eastl::string>((unsigned int)uVar1, str);
    }

    // 0x1001a2770
    int UTF8Append<eastl::string>(unsigned int arg1, eastl::string& str) {
        long lVar1;

        int iVar2 = 0;
        if (arg1 != 0) {
            if (arg1 < 128) {
                iVar2 = 1;
            } else if (arg1 < 2048) {
                lVar1 = str.size();
                str.reserve(lVar1 + 2);
                eastl::string::append((ReturnValue*)str, 1, (uint8_t)(arg1 >> 6) & 31 | 192);
                arg1 = (unsigned int)((uint8_t)arg1 & 63 | 128);
                iVar2 = 2;
            } else {
                if (65535 < arg1) {
                    return 0;
                }
                lVar1 = str.size();
                str.reserve(lVar1 + 3);
                eastl::string::append((ReturnValue*)str, 1, (uint8_t)(arg1 >> 12) & 15 | 224);
                eastl::string::append((ReturnValue*)str, 1, (uint8_t)(arg1 >> 6) & 63 | 128);
                arg1 = (unsigned int)((uint8_t)arg1 & 63 | 128);
                iVar2 = 3;
            }
            eastl::string::append((ReturnValue*)str, 1, (char)arg1);
        }
        return iVar2;
    }

    // 0x1001abe90
    long GetUTF8StringWidth(const char* str, unsigned long arg2) {
        long lVar1;

        unsigned long local_30 = 0;
        if (arg2 == 0) {
            lVar1 = 0;
        } else {
            lVar1 = 0;
            do {
                GetUTF8NextChar(str, &local_30, arg2);
                lVar1 = lVar1 + 1;
            } while (local_30 < arg2);
        }
        return lVar1;
    }

    // 0x1001b0230
    int hash32(const char* str, unsigned long arg2) {
        if (arg2 == 0) {
            return 0;
        }
        unsigned long uVar2 = 0;
        int iVar1 = 0;
        do {
            iVar1 = (int)str[uVar2] + iVar1 * 31;
            uVar2 = uVar2 + 1;
        } while (arg2 != uVar2);
        return iVar1;
    }

    // 0x1001ff420
    void
    UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        _lambda_char__1_* in_RCX;

        char* str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        char* str3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::transform<char*, char*,
                         UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(
                             *(eastl::basic_string<char, BucketAllocatorEASTL>&))::_lambda(char) _1_>(str1, str2, str3,
                                                                                                      in_RCX);
    }

    // 0x100242ce0
    unsigned int GetUTF8NextChar16(const char* str, unsigned long& arg2) {
        unsigned int uVar1 = GetUTF8NextChar(str, arg2);
        unsigned int uVar2 = 65535;
        if (uVar1 < 65535) {
            uVar2 = uVar1;
        }
        return uVar2 & 65535;
    }

    // 0x1004d4d20
    unsigned long CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(
        const char* str1, unsigned long arg2, eastl::basic_string<char, BucketAllocatorEASTL>& str2) {
        unsigned long uVar1;

        basic_string<char, BucketAllocatorEASTL> local_48;
        local_48.clear();
        local_48.reserve(arg2);
        if (arg2 == 0) {
            arg2 = 0;
        } else {
            uVar1 = 0;
            do {
                CP1252ToUTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>(str1[uVar1], &local_48);
                uVar1 = uVar1 + 1;
            } while (arg2 != uVar1);
        }
        str2.swap(local_48);
        return arg2;
    }

    // 0x1004d4dd0
    void CP1252ToUTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>(
        unsigned char arg1, eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        unsigned short uVar1;
        unsigned short* puVar2;

        if (((char)arg1 < '\0') && (arg1 < 160)) {
            puVar2 = (unsigned short*)(*((array<char16_t, 256ul>*)(unsigned long)arg1))[(unsigned long)str];
            uVar1 = *puVar2;
        } else {
            uVar1 = (unsigned short)arg1;
        }
        UTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>((unsigned int)uVar1, str);
    }

    // 0x1004d4f00
    int
    UTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>(unsigned int arg1,
                                                                eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        long lVar1;

        int iVar2 = 0;
        if (arg1 != 0) {
            if (arg1 < 128) {
                iVar2 = 1;
            } else if (arg1 < 2048) {
                lVar1 = str.size();
                str.reserve(lVar1 + 2);
                str = eastl::basic_string<char, BucketAllocatorEASTL>::append(1, (uint8_t)(arg1 >> 6) & 31 | 192);
                arg1 = (unsigned int)((uint8_t)arg1 & 63 | 128);
                iVar2 = 2;
            } else {
                if (65535 < arg1) {
                    return 0;
                }
                lVar1 = str.size();
                str.reserve(lVar1 + 3);
                str = eastl::basic_string<char, BucketAllocatorEASTL>::append(1, (uint8_t)(arg1 >> 12) & 15 | 224);
                str = eastl::basic_string<char, BucketAllocatorEASTL>::append(1, (uint8_t)(arg1 >> 6) & 63 | 128);
                arg1 = (unsigned int)((uint8_t)arg1 & 63 | 128);
                iVar2 = 3;
            }
            str = eastl::basic_string<char, BucketAllocatorEASTL>::append(1, (char)arg1);
        }
        return iVar2;
    }

    // 0x1004fcdb0
    unsigned long CP1252ToUTF8<128, true>(const char* str1, unsigned int arg2, eastl::fixed_string<char, 128>& str2) {
        unsigned long uVar1;

        unsigned long uVar2 = (unsigned long)arg2;
        str2.clear();
        if (arg2 == 0) {
            uVar2 = 0;
        } else {
            uVar1 = 0;
            do {
                CP1252ToUTF8Append<eastl::fixed_string<char, 24>>(str1[uVar1], str2);
                uVar1 = uVar1 + 1;
            } while (uVar2 != uVar1);
        }
        return uVar2;
    }

    // 0x1004fce10
    void CP1252ToUTF8Append<eastl::fixed_string<char, 128>>(unsigned char arg1, eastl::fixed_string<char, 128>& str) {
        unsigned short uVar1;
        unsigned short* puVar2;

        if (((char)arg1 < '\0') && (arg1 < 160)) {
            puVar2 = (unsigned short*)(*((array<char16_t, 256ul>*)(unsigned long)arg1))[(unsigned long)str];
            uVar1 = *puVar2;
        } else {
            uVar1 = (unsigned short)arg1;
        }
        UTF8Append<eastl::fixed_string<char, 24>>((unsigned int)uVar1, str);
    }

    // 0x1004fce50
    int UTF8Append<eastl::fixed_string<char, 128>>(unsigned int arg1, eastl::fixed_string<char, 128>& str) {
        long lVar2;

        int iVar1 = 0;
        if (arg1 != 0) {
            if (arg1 < 128) {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::append(
                    (ReturnValue*)str, 1, (uint8_t)arg1);
                iVar1 = 1;
            } else if (arg1 < 2048) {
                lVar2 = str.size();
                str.reserve(lVar2 + 2);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::append(
                    (ReturnValue*)str, 1, (uint8_t)(arg1 >> 6) & 31 | 192);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::append(
                    (ReturnValue*)str, 1, (uint8_t)arg1 & 63 | 128);
                iVar1 = 2;
            } else if (arg1 < 65536) {
                lVar2 = str.size();
                str.reserve(lVar2 + 3);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::append(
                    (ReturnValue*)str, 1, (uint8_t)(arg1 >> 12) & 15 | 224);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::append(
                    (ReturnValue*)str, 1, (uint8_t)(arg1 >> 6) & 63 | 128);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::append(
                    (ReturnValue*)str, 1, (uint8_t)arg1 & 63 | 128);
                iVar1 = 3;
            }
        }
        return iVar1;
    }

    // 0x1005f9630
    unsigned long UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(
        const eastl::basic_string<char, BucketAllocatorEASTL>& str1,
        eastl::basic_string<char, BucketAllocatorEASTL>& str2) {
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long uVar1 = str1.size();
        uVar1 = UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str1_00, uVar1, str2);
        return uVar1;
    }

    // 0x1005f9860
    unsigned long CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(
        const eastl::basic_string<char, BucketAllocatorEASTL>& str1,
        eastl::basic_string<char, BucketAllocatorEASTL>& str2) {
        basic_string<char, BucketAllocatorEASTL> local_40;
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long uVar1 = str1.size();
        uVar1 = CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(str1_00, uVar1, &local_40);
        local_40.swap(str2);
        return uVar1;
    }

    // 0x1005fbc10
    unsigned long UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(
        const char* str1, unsigned long arg2, eastl::basic_string<char, BucketAllocatorEASTL>& str2) {
        char arg2_00;

        eastl::basic_string<char, BucketAllocatorEASTL> local_58;
        local_58.clear();
        local_58.reserve(arg2);
        unsigned long local_38 = 0;
        unsigned long uVar1 = 0;
        if (arg2 != 0) {
            do {
                arg2_00 = WideToCP1252(GetUTF8NextChar(str1, &local_38, arg2));
                local_58 = eastl::basic_string<char, BucketAllocatorEASTL>::append(1, arg2_00);
                uVar1 = uVar1 + 1;
            } while (local_38 < arg2);
        }
        str2.swap(local_58);
        return uVar1;
    }

    // 0x1008e4600
    unsigned long GetUTF8StringWidth<StringView>(const StringView& stringView) {
        auto str = stringView.end();
        unsigned long uVar1 = ShuffledPacketFactory::p2_alt2();
        uVar1 = GetUTF8StringWidth(str, uVar1);
        return uVar1;
    }

    // 0x1008e85d0
    long GetCodepointUTF8ByteSize(unsigned int arg1) {
        long lVar1 = 1;
        if (127 < arg1) {
            lVar1 = 3 - (unsigned long)(arg1 < 2048);
        }
        return lVar1;
    }

    // 0x1008e8600
    bool AppendUTF8Codepoint<eastl::basic_string<char, BucketAllocatorEASTL>>(
        unsigned int arg1, eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        unsigned long arg1_00 = str.size();
        str.resize(GetCodepointUTF8ByteSize(arg1) + arg1_00);
        char* str_00 = &str[arg1_00];
        return (char*)CodepointToUTF8(arg1, str_00) != str_00;
    }

    // 0x1009ef9a0
    int hash32(const char* str) {
        char cVar1;
        int iVar3;

        int iVar2 = 0;
        do {
            iVar3 = iVar2;
            cVar1 = *str;
            str = str + 1;
            iVar2 = iVar3 * 31 + (int)cVar1;
        } while (cVar1 != 0);
        return iVar3;
    }

    // 0x100ad93e0
    unsigned long CP1252ToUTF8<eastl::fixed_string<char, 256>>(const char* str1, unsigned long arg2,
                                                               eastl::fixed_string<char, 256>& str2) {
        unsigned long uVar1;

        fixed_string<char, 256> local_160;
        local_160.clear();
        local_160.reserve(arg2);
        if (arg2 != 0) {
            uVar1 = 0;
            do {
                CP1252ToUTF8Append<eastl::fixed_string<char, 24>>(str1[uVar1], &local_160);
                uVar1 = uVar1 + 1;
            } while (arg2 != uVar1);
        }
        str2.swap(local_160);
    }

    // 0x100caed90
    void SanitiseFileName<2048, true>(eastl::fixed_string<char, 2048>& str) {
        int iVar2;
        char* pcVar3;
        long lVar4;
        long lVar5;
        char* str3;
        char* str4;
        unsigned long uVar6;
        uint8_t* puVar7;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* basic_string;

        MakeUnixFilename<1024, false>(str);
        fixed_string<char, 1024, false> local_450("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR");
        MakeUnixFilename<1024, false>(&local_450);
        if (!(local_450.empty())) {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar5 = local_450.size();
            str3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            iVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::comparei(
                pcVar3, (lVar4 + lVar5), str3, str4);
            if (iVar2 == 0) {
                uVar6 = local_450.size();
                pcVar3 = &str[uVar6];
                uVar6 = 1;
                if (*pcVar3 != '\\') {
                    uVar6 = local_450.size();
                    pcVar3 = &str[uVar6];
                    uVar6 = (unsigned long)(*pcVar3 == '/');
                }
                lVar4 = local_450.size();
                str.replace(0, uVar6 + lVar4, "");
            }
        }
        if ((*PTR_REPLACE_PATTERNS_100ee49f8 == '\0') &&
            (iVar2 = ___cxa_guard_acquire(PTR_REPLACE_PATTERNS_100ee49f8), iVar2 != 0)) {
            PTR_REPLACE_PATTERNS_100ee9580->pair<char const(&)[50], char const(&)[6], void>(
                "devplatform/3rdpartylibs/cpp/eastl/include/eastl/", "eastl");
            ((PTR_REPLACE_PATTERNS_100ee9580 + 2096))
                ->pair<char const(&)[30], char const(&)[1], void>("devplatform/3rdpartylibs/cpp/", "");
            ((PTR_REPLACE_PATTERNS_100ee9580 + 4192))->pair<char const(&)[8], char const(&)[1], void>("liblibs", "");
            ((PTR_REPLACE_PATTERNS_100ee9580 + 6288))
                ->pair<char const(&)[15], char const(&)[1], void>("Contents/MacOS", "");
            ((PTR_REPLACE_PATTERNS_100ee9580 + 8384))->pair<char const(&)[8], char const(&)[1], void>("nxt/bin", "");
            ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
            ___cxa_guard_release(PTR_REPLACE_PATTERNS_100ee49f8);
        }
        lVar4 = 10480;
        basic_string = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
            PTR_REPLACE_PATTERNS_100ee9580;
        do {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar6 = str.find(pcVar3, 0);
            if (uVar6 != 18446744073709551615) {
                puVar7 = &str[0];
                *puVar7 = 60;
                if (!(((basic_string + 1048))->empty())) {
                    lVar4 = basic_string->size();
                    pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    str.replace(1, uVar6 + lVar4, pcVar3);
                } else {
                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::erase(
                        (ReturnValue*)str, 1, uVar6);
                }
                str.append(">");
                break;
            }
            basic_string = basic_string + 2096;
            lVar4 = lVar4 - 2096;
        } while (lVar4 != 0);
    }

    // 0x100caf270
    void SanitiseFileName<256, false>(eastl::fixed_string<char, 256, false>& str) {
        int iVar2;
        char* pcVar3;
        long lVar4;
        long lVar5;
        char* str3;
        char* str4;
        unsigned long uVar6;
        uint8_t* puVar7;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* basic_string;

        MakeUnixFilename<1024, false>((fixed_string<char, _2048>*)str);
        fixed_string<char, 1024, false> local_450("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR");
        MakeUnixFilename<1024, false>(&local_450);
        if (!(local_450.empty())) {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar5 = local_450.size();
            str3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            iVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::comparei(
                pcVar3, (lVar4 + lVar5), str3, str4);
            if (iVar2 == 0) {
                uVar6 = local_450.size();
                pcVar3 = &str[uVar6];
                uVar6 = 1;
                if (*pcVar3 != '\\') {
                    uVar6 = local_450.size();
                    pcVar3 = &str[uVar6];
                    uVar6 = (unsigned long)(*pcVar3 == '/');
                }
                lVar4 = local_450.size();
                str.replace(0, uVar6 + lVar4, "");
            }
        }
        if ((*PTR_REPLACE_PATTERNS_100ee4a00 == '\0') &&
            (iVar2 = ___cxa_guard_acquire(PTR_REPLACE_PATTERNS_100ee4a00), iVar2 != 0)) {
            PTR_REPLACE_PATTERNS_100ee9588->pair<char const(&)[50], char const(&)[6], void>(
                "devplatform/3rdpartylibs/cpp/eastl/include/eastl/", "eastl");
            ((PTR_REPLACE_PATTERNS_100ee9588 + 2096))
                ->pair<char const(&)[30], char const(&)[1], void>("devplatform/3rdpartylibs/cpp/", "");
            ((PTR_REPLACE_PATTERNS_100ee9588 + 4192))->pair<char const(&)[8], char const(&)[1], void>("liblibs", "");
            ((PTR_REPLACE_PATTERNS_100ee9588 + 6288))
                ->pair<char const(&)[15], char const(&)[1], void>("Contents/MacOS", "");
            ((PTR_REPLACE_PATTERNS_100ee9588 + 8384))->pair<char const(&)[8], char const(&)[1], void>("nxt/bin", "");
            ___cxa_atexit(___cxx_global_array_dtor_71, 0, 4294967296);
            ___cxa_guard_release(PTR_REPLACE_PATTERNS_100ee4a00);
        }
        lVar4 = 10480;
        basic_string = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
            PTR_REPLACE_PATTERNS_100ee9588;
        do {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar6 = str.find(pcVar3, 0);
            if (uVar6 != 18446744073709551615) {
                puVar7 = &str[0];
                *puVar7 = 60;
                if (!(((basic_string + 1048))->empty())) {
                    lVar4 = basic_string->size();
                    pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    str.replace(1, uVar6 + lVar4, pcVar3);
                } else {
                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, false>>::erase(
                        (ReturnValue*)str, 1, uVar6);
                }
                str.append(">");
                break;
            }
            basic_string = basic_string + 2096;
            lVar4 = lVar4 - 2096;
        } while (lVar4 != 0);
    }

    // 0x100cb1ba0
    void MakeUnixFilename<2048, true>(eastl::fixed_string<char, 2048>& str) {
        _lambda_char__1_* in_RCX;

        char* str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        char* str3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::transform<char*, char*,
                         MakeUnixFilename<1024, false>(*(eastl::fixed_string<char, 1024, false>&))::_lambda(char) _1_>(
            str1, str2, str3, in_RCX);
    }

    // 0x100cb3bb0
    unsigned long UTF16to8<eastl::fixed_string<char, 260>>(const wchar_t* arg1, eastl::fixed_string<char, 260>& str) {
        size_t arg2 = _wcslen(arg1);
        return UTF16to8<eastl::fixed_string<char, 260>>(arg1, arg2, str);
    }

    // 0x100cb5c30
    unsigned long UTF16to8<eastl::fixed_string<char, 260>>(const wchar_t* arg1, unsigned long arg2,
                                                           eastl::fixed_string<char, 260>& str) {
        wchar_t wVar1;
        uint8_t bVar2;
        wchar_t wVar5;

        str.clear();
        str.reserve(arg2);
        unsigned int uVar3 = 0;
        unsigned long uVar4 = 0;
        if (arg2 != 0) {
            do {
                wVar1 = *arg1;
                if (wVar1 != L'\0') {
                    if ((wVar1 & 4294966272U) == 55296) {
                        uVar3 = wVar1 * 1024 + 4238409728;
                    } else {
                        wVar5 = wVar1 + L'\xffff2400' | uVar3;
                        if ((wVar1 & 4294966272U) != 56320) {
                            wVar5 = wVar1;
                        }
                        if ((unsigned int)wVar5 < 128) {
                        LAB_100cb5cca:
                            bVar2 = (uint8_t)wVar5;
                        } else {
                            if ((unsigned int)wVar5 < 2048) {
                                bVar2 = (uint8_t)((unsigned int)wVar5 >> 6) & 31 | 192;
                            } else {
                                if (65535 < (unsigned int)wVar5) {
                                    eastl::basic_string<char,
                                                        eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::
                                        append((ReturnValue*)str, 1, (uint8_t)((unsigned int)wVar5 >> 18) & 7 | 240);
                                    eastl::basic_string<char,
                                                        eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::
                                        append((ReturnValue*)str, 1, (uint8_t)((unsigned int)wVar5 >> 12) & 63 | 128);
                                    eastl::basic_string<char,
                                                        eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::
                                        append((ReturnValue*)str, 1, (uint8_t)((unsigned int)wVar5 >> 6) & 63 | 128);
                                    wVar5 = (wchar_t)((uint8_t)wVar5 & 63 | 128);
                                    goto LAB_100cb5cca;
                                }
                                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::
                                    append((ReturnValue*)str, 1, (uint8_t)((unsigned int)wVar5 >> 12) & 15 | 224);
                                bVar2 = (uint8_t)((unsigned int)wVar5 >> 6) & 63 | 128;
                            }
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::
                                append((ReturnValue*)str, 1, bVar2);
                            bVar2 = (uint8_t)wVar5 & 63 | 128;
                        }
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::append(
                            (ReturnValue*)str, 1, bVar2);
                        uVar3 = 0;
                    }
                    arg1 = arg1 + 1;
                }
                if (wVar1 == L'\0') {
                    return uVar4;
                }
                uVar4 = uVar4 + 1;
            } while (arg2 != uVar4);
            uVar4 = arg2;
        }
        return uVar4;
    }

} // namespace jag::stringtools

namespace jag::oldscape::core::stringtools::general {
    class StringTools {
    public:
        uint32_t CheckedParseInt(int& arg1, const StringView& stringView);
        bool StartsWith(const eastl::string& str1, const char* str2);
        auto MaskPassword(const eastl::string& str);
        auto GetRepeatedCharacter(char arg1, unsigned long arg2);
        auto FromInt(int arg1, bool arg2);
        void IsPrintableAsImplementedInJString(char16_t arg1);
        bool IsASCIIAlphaNumeric(char16_t arg1);
        bool IsASCIIAlpha(char16_t arg1);
        bool IsASCIINumeric(char16_t arg1);
        unsigned long IsASCIINumeric(eastl::string str);
        bool StartsWith<char>(const eastl::string& str1, const eastl::string& str2);
        eastl::string* ForceCapitalisationOfWords(eastl::string& str);
        auto Join(eastl::string* str, int arg2, int arg3);
        void SplitByChar(const eastl::string& str, char arg2, Array<eastl::string>& strs);
        void IsInt(eastl::string str);
        void ParseInt(const eastl::string& str);
        bool MatchPattern<eastl::string>(const eastl::string& str1, const eastl::string& str2);
        int Count(const eastl::string& str, char arg2);
        void IsInt(const eastl::string& str, int arg2, bool arg3);
        bool CheckedParseInt(int& arg1, const eastl::string& str, int arg3, bool arg4);
        void ParseInt(const eastl::string& str, int arg2, bool arg3);
        char* EqualsIgnoreCase(const eastl::string& str1, const eastl::string& str2);
        void CheckedParseInt(int& arg1, const eastl::string& str);
        unsigned long MatchPattern(const char* str1, const char* str2);
        void ReplaceCharsWithSubstitute(eastl::string& str, const eastl::vector<char>& arg2, char arg3);
        eastl::string* StripTags(const eastl::string& str);

    private:
        int field_0;
    };

    // 0x100076bc0
    uint32_t StringTools::CheckedParseInt(int& arg1, const StringView& stringView) {
        auto local_38 = arg1.to_owned_string<eastl::string>();
        uint32_t uVar1 = CheckedParseInt(&field_0, &local_38, 10, true);
        return uVar1;
    }

    // 0x1000c52a0
    bool StringTools::StartsWith(const eastl::string& str1, const char* str2) {
        size_t arg2 = _strlen(str2);
        return str1.compare(0, arg2, str2) == 0;
    }

    // 0x1001233a0
    auto StringTools::MaskPassword(const eastl::string& str) {
        auto result;

        unsigned long arg2 = str.size();
        GetRepeatedCharacter(&result, '*', arg2);
        return result;
    }

    // 0x100131a10
    auto StringTools::GetRepeatedCharacter(char arg1, unsigned long arg2) {
        char* pcVar1;
        unsigned long arg1_00;

        auto result(arg2, arg1);
        if (arg2 != 0) {
            arg1_00 = 0;
            do {
                pcVar1 = (char*)(result)[arg1_00];
                *pcVar1 = arg1;
                arg1_00 = arg1_00 + 1;
            } while (arg2 != arg1_00);
        }
        return result;
    }

    // 0x1001657d0
    auto StringTools::FromInt(int arg1, bool arg2) {
        char* str;
        eastl::string* str_00;
        uint64_t in_register_00000011;
        eastl::string local_60;
        ReturnValue local_40;

        if (((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) || (arg1 < 0)) {
            result = eastl::to_string(arg1);
        } else {
            local_60 = eastl::string("+");
            local_40 = eastl::to_string(arg1);
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str_00 = (eastl::string*)local_60.append(str);
            auto result(*str_00);
        }
        return result;
    }

    // 0x100165970
    void StringTools::IsPrintableAsImplementedInJString(char16_t arg1) {
        if (((((unsigned short)(arg1 + L'￠') < 95) || ((unsigned short)(arg1 + L'｠') < 96)) ||
             (((unsigned short)((unsigned short)arg1 - 338) < 39 &&
               ((274877906947U >> ((unsigned long)((unsigned short)arg1 - 338 & 65535) & 63) & 1) != 0)))) ||
            ((arg1 == L'—' || (arg1 == L'€')))) {
            return 1;
        }
        return 0;
    }

    // 0x1001659d0
    bool StringTools::IsASCIIAlphaNumeric(char16_t arg1) {
        bool bVar1 = true;
        if ((9 < (unsigned short)(arg1 + L'￐')) && (25 < (unsigned short)(arg1 + L'﾿'))) {
            bVar1 = (unsigned short)(arg1 + L'ﾟ') < 26;
        }
        return bVar1;
    }

    // 0x100165a00
    bool StringTools::IsASCIIAlpha(char16_t arg1) {
        return (unsigned short)((arg1 & 65503U) - 65U) < 26;
    }

    // 0x100165a20
    bool StringTools::IsASCIINumeric(char16_t arg1) {
        return (unsigned short)(arg1 + L'￐') < 10;
    }

    // 0x100169f30
    unsigned long StringTools::IsASCIINumeric(eastl::string str) {
        bool cVar1;
        unsigned long uVar4;
        uint64_t unaff_R13;

        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned int uVar2 = str->size();
        bool bVar5 = 0 < (int)uVar2;
        if (0 < (int)uVar2) {
            cVar1 = IsASCIINumeric((short)*pcVar3);
            bVar5 = true;
            if (cVar1) {
                uVar4 = 1;
                do {
                    bVar5 = (long)uVar4 < (long)(int)uVar2;
                    if (uVar2 == uVar4)
                        break;
                    cVar1 = IsASCIINumeric((short)pcVar3[uVar4]);
                    uVar4 = uVar4 + 1;
                } while (cVar1);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R13 >> 8)) << 8) | (uint8_t)bVar5) ^ 1) & 4294967295;
    }

    // 0x10017bc40
    bool StringTools::StartsWith<char>(const eastl::string& str1, const eastl::string& str2) {
        unsigned long arg2 = str2.size();
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return str1.compare(0, arg2, str) == 0;
    }

    // 0x10018e670
    eastl::string* StringTools::ForceCapitalisationOfWords(eastl::string& str) {
        int iVar2;
        uint8_t arg1;
        bool cVar3;
        uint8_t* pbVar5;
        unsigned long arg1_00;
        int iVar6;
        char cVar7;

        eastl::string local_58;
        jag::stringtools::UTF8ToCP1252<eastl::string>(str, local_58);
        unsigned long uVar4 = local_58.size();
        if (uVar4 != 0) {
            iVar6 = 2;
            cVar7 = '\x02';
            arg1_00 = 0;
            do {
                pbVar5 = &local_58[arg1_00];
                arg1 = *pbVar5;
                if (cVar7 == '\x02') {
                    arg1 = CP1252Tools::ToUpper(arg1);
                } else if (!cVar7) {
                    arg1 = CP1252Tools::ToLower(arg1);
                }
                cVar3 = CP1252Tools::IsAlpha(arg1);
                cVar7 = '\0';
                iVar2 = 0;
                if (!cVar3) {
                    if (arg1 < 64) {
                        if ((4294968832U >> ((unsigned long)arg1 & 63) & 1) == 0) {
                            cVar7 = '\x02';
                            iVar2 = 2;
                            if ((9223442414188888064U >> ((unsigned long)arg1 & 63) & 1) == 0)
                                goto LAB_10018e73c;
                        } else {
                            cVar7 = (iVar6 == 2) + '\x01';
                            iVar2 = (iVar6 == 2) + 1;
                        }
                    } else {
                    LAB_10018e73c:
                        cVar7 = '\x01';
                        iVar2 = 1;
                    }
                }
                iVar6 = iVar2;
                pbVar5 = &local_58[arg1_00];
                *pbVar5 = arg1;
                arg1_00 = arg1_00 + 1;
            } while (uVar4 != arg1_00);
        }
        jag::stringtools::CP1252ToUTF8<eastl::string>(local_58, str);
        return str;
    }

    // 0x100190fb0
    auto StringTools::Join(eastl::string* str, int arg2, int arg3) {
        long lVar1;
        uint32_t in_register_0000000c;
        uint32_t in_register_00000014;
        long lVar2;
        unsigned long arg1;
        long lVar3;
        eastl::string* str_00;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* basic_string;
        uint64_t local_40;
        ReturnValue* local_38;

        uint64_t local_48 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if (arg3 == 1) {
            auto result(*(str + (long)arg2 * 32));
        } else if (arg3 == 0) {
            new (&result) eastl::string("");
        } else {
            local_40 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3);
            if (arg3 < 1) {
                arg1 = 2;
            } else {
                lVar3 = (long)arg2;
                basic_string =
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)(str + lVar3 * 32);
                lVar2 = 0;
                local_38 = &result;
                do {
                    lVar1 = basic_string->size();
                    lVar2 = lVar2 + lVar1;
                    lVar3 = lVar3 + 1;
                    basic_string = basic_string + 32;
                } while (lVar3 < arg3 + arg2);
                arg1 = lVar2 + 2;
                &result = local_38;
            }
            local_68 = eastl::string();
            local_68.reserve(arg1);
            if (0 < (int)local_40) {
                lVar2 = (long)(int)local_48;
                str_00 = str + lVar2 * 32;
                do {
                    local_68.append(str_00);
                    lVar2 = lVar2 + 1;
                    str_00 = str_00 + 32;
                } while (lVar2 < arg3 + arg2);
            }
            new (&result) eastl::string(local_68);
        }
        return result;
    }

    // 0x1001fbfb0
    void StringTools::SplitByChar(const eastl::string& str, char arg2, Array<eastl::string>& strs) {
        char* pcVar2;
        eastl::string* pbVar3;
        unsigned long arg1_00;
        int iVar4;
        unsigned long local_50;
        unsigned long local_48;
        unsigned long local_40;

        unsigned int uVar1 = Count(str, arg2);
        strs.set_max_size((long)(int)(uVar1 + 1), 3);
        unsigned long arg1 = 0;
        if (0 < (int)uVar1) {
            local_48 = (unsigned long)uVar1;
            arg1_00 = 0;
            local_40 = (unsigned long)uVar1;
            do {
                arg1 = (unsigned long)(int)arg1;
                iVar4 = -1;
                local_50 = arg1;
                do {
                    pcVar2 = (char*)str.at(arg1);
                    arg1 = arg1 + 1;
                    iVar4 = iVar4 + 1;
                } while (*pcVar2 != arg2);
                local_70 = str.substr(local_50, (long)iVar4);
                pbVar3 = &strs[arg1_00];
                *pbVar3 = &local_70;
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != local_48);
            arg1 = (unsigned long)(int)arg1;
            uVar1 = (unsigned int)local_40;
        }
        auto local_70 = str.substr(arg1, 18446744073709551615);
        pbVar3 = &strs[(long)(int)uVar1];
        *pbVar3 = &local_70;
    }

    // 0x1001fc0d0
    void StringTools::IsInt(eastl::string str) {
        IsInt(str, 10, true);
    }

    // 0x1001fc0f0
    void StringTools::ParseInt(const eastl::string& str) {
        ParseInt(str, 10, true);
    }

    // 0x1001ff4e0
    bool StringTools::MatchPattern<eastl::string>(const eastl::string& str1, const eastl::string& str2) {
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* str2_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)MatchPattern(str1_00, str2_00);
    }

    // 0x100215c60
    int StringTools::Count(const eastl::string& str, char arg2) {
        char* pcVar2;
        unsigned long arg1;
        int iVar3;

        unsigned long uVar1 = str.size();
        if (uVar1 == 0) {
            iVar3 = 0;
        } else {
            arg1 = 0;
            iVar3 = 0;
            do {
                pcVar2 = (char*)str.at(arg1);
                iVar3 = iVar3 + (unsigned int)(*pcVar2 == arg2);
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
        return iVar3;
    }

    // 0x100215cd0
    void StringTools::IsInt(const eastl::string& str, int arg2, bool arg3) {
        int local_c = 0;
        CheckedParseInt(&local_c, str, arg2, arg3);
    }

    // 0x100215d00
    bool StringTools::CheckedParseInt(int& arg1, const eastl::string& str, int arg3, bool arg4) {
        char cVar1;
        bool bVar2;
        int iVar4;
        char* pcVar5;
        int iVar6;
        bool bVar7;
        int iVar8;
        uint8_t bVar9;
        int local_34;

        if (34 < arg3 - 2U) {
            LogAssert("radix >= 2 && radix <= 36",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "stringtools/general/StringTools.h",
                      211, nullptr);
        }
        int iVar3 = str.size();
        if (iVar3 < 1) {
            bVar7 = false;
            local_34 = 0;
        } else {
            iVar8 = 0;
            bVar2 = false;
            local_34 = 0;
            bVar7 = false;
            do {
                pcVar5 = (char*)str.at((long)iVar8);
                cVar1 = *pcVar5;
                if (iVar8 == 0) {
                    bVar9 = 4;
                    iVar4 = 0;
                    if (cVar1 == '-') {
                        bVar2 = true;
                    } else if ((cVar1 != '+') || (!arg4))
                        goto LAB_100215dac;
                } else {
                LAB_100215dac:
                    if ((arg3 == 16) && (((iVar8 < 2 && (1 < iVar3 - iVar8)) && (cVar1 == '0')))) {
                        pcVar5 = (char*)str.at((long)(iVar8 + 1));
                        bVar9 = 4;
                        iVar4 = iVar8 + 1;
                        if (*pcVar5 == 'x')
                            goto LAB_100215e6c;
                    }
                    iVar4 = -48;
                    if (((uint8_t)(cVar1 - 48U) < 10) || (iVar4 = -55, (uint8_t)(cVar1 + 191U) < 26)) {
                    LAB_100215e20:
                        iVar4 = iVar4 + cVar1;
                        bVar9 = true;
                        if (iVar4 < arg3) {
                            iVar6 = -iVar4;
                            if (!bVar2) {
                                iVar6 = iVar4;
                            }
                            iVar6 = local_34 * arg3 + iVar6;
                            bVar9 = iVar6 / arg3 != local_34;
                            if (!bVar9) {
                                bVar7 = true;
                                local_34 = iVar6;
                            }
                        }
                    } else {
                        bVar9 = true;
                        iVar4 = -87;
                        if ((uint8_t)(cVar1 + 159U) < 26)
                            goto LAB_100215e20;
                    }
                    iVar4 = iVar8;
                }
            LAB_100215e6c:
                if ((bVar9 & 3) != 0) {
                    if (bVar9 != 2) {
                        return false;
                    }
                    break;
                }
                iVar8 = iVar4 + 1;
            } while (iVar8 < iVar3);
        }
        if (bVar7) {
            arg1 = local_34;
        }
        return bVar7;
    }

    // 0x100215f10
    void StringTools::ParseInt(const eastl::string& str, int arg2, bool arg3) {
        unsigned int in_EAX;
        uint64_t uVar2;

        if (34 < arg2 - 2U) {
            LogAssert("radix >= 2 && radix <= 36",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "stringtools/general/StringTools.h",
                      178, "Invalid radix: %i", arg2);
        }
        uint64_t uStack_28 = (unsigned long)in_EAX;
        if (CheckedParseInt((int*)((long)&uStack_28 + 4), str, arg2, arg3) == '\0') {
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "stringtools/general/StringTools.h",
                      185, "Failed to parse number: %s", uVar2);
        }
        return uStack_28._4_4_;
    }

    // 0x100229ec0
    char* StringTools::EqualsIgnoreCase(const eastl::string& str1, const eastl::string& str2) {
        unsigned char arg1;
        unsigned char arg1_00;
        char cVar1;
        char cVar2;
        char16_t wVar3;
        char* str;
        char* str_00;
        uint64_t uVar6;
        char* pcVar7;
        unsigned long uVar8;
        bool bVar9;
        unsigned long local_40[2];

        long lVar4 = str1.size();
        long lVar5 = str2.size();
        if (lVar4 == lVar5) {
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_40[0] = 0;
            local_40[1] = 0;
            pcVar7 = str_00;
            do {
                uVar8 = (unsigned long)pcVar7 & 4294967295;
                wVar3 = jag::stringtools::GetUTF8NextChar16(str, *local_40);
                arg1_00 = jag::stringtools::WideToCP1252(wVar3);
                wVar3 = jag::stringtools::GetUTF8NextChar16(str_00, *(local_40 + 1));
                uVar6 = jag::stringtools::WideToCP1252(wVar3);
                arg1 = (unsigned char)uVar6;
                pcVar7 = (char*)((((uint64_t)((int64_t)((unsigned long)uVar6 >> 8)) << 8) |
                                  (uint8_t)((arg1 == '\0') != (arg1_00 == '\0'))) ^
                                 1);
                bVar9 = false;
                if ((arg1_00 != '\0') && (arg1 != '\0')) {
                    cVar1 = CP1252Tools::ToLower(arg1_00);
                    cVar2 = CP1252Tools::ToLower(arg1);
                    bVar9 = cVar1 == cVar2;
                    pcVar7 = (char*)(((uint64_t)((int64_t)(uVar8 >> 8)) << 8) | (uint8_t)((uint8_t)uVar8 & bVar9));
                }
            } while (bVar9);
        } else {
            pcVar7 = nullptr;
        }
        return pcVar7;
    }

    // 0x1002be8d0
    void StringTools::CheckedParseInt(int& arg1, const eastl::string& str) {
        CheckedParseInt(arg1, str, 10, true);
    }

} // namespace jag::oldscape::core::stringtools::general
