// libs/oldscape/jagex3/core/stringtools/general/StringTools.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::stringtools {
    // 0x10017ba50, 432 bytes, inline, placed by class name
    // eastl::string URLEncodeCP1252<eastl::string >(eastl::string const&)
    basic_string* URLEncodeCP1252<eastl::string>(basic_string* param_1) {
        byte bVar1;
        uint uVar2;
        uint uVar3;
        ulong uVar4;
        char* pcVar6;
        ulong uVar7;
        ulong local_38;

        new (param_1) eastl::string();
        eastl::string::clear();
        uVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->reserve(uVar4);
        local_38 = 0;
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            do {
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar4 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                uVar2 = GetUTF8NextChar(pcVar6, &local_38, uVar4);
                if (((uVar2 & 4294967263) - 65 < 26) || (uVar2 - 48 < 10)) {
                LAB_10017bb00:
                    param_1->append(1, (char)uVar2);
                } else {
                    uVar3 = uVar2 - 32;
                    if (uVar3 < 64) {
                        if ((9223372036854801408U >> ((ulong)uVar3 & 63) & 1) != 0)
                            goto LAB_10017bb00;
                        if ((ulong)uVar3 != 0)
                            goto LAB_10017bb3f;
                        param_1->append(1, '+');
                    } else {
                    LAB_10017bb3f:
                        param_1->append(1, '%');
                        bVar1 = WideToCP1252((wchar16)uVar2);
                        if (bVar1 < 160) {
                            param_1->append(1, bVar1 >> 4 | 48);
                        } else {
                            param_1->append(1, (bVar1 >> 4) + 55);
                        }
                        bVar1 = bVar1 & 15;
                        if (bVar1 < 10) {
                            param_1->append(1, bVar1 | 48);
                        } else {
                            param_1->append(1, bVar1 + 55);
                        }
                    }
                }
                uVar4 = local_38;
                uVar7 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            } while (uVar4 < uVar7);
        }
        return param_1;
    }

    // 0x100186e90, 272 bytes, inline, placed by class name
    // eastl::string rot13<eastl::string, eastl::string >(eastl::string const&)
    stringtools* stringtools::rot13<eastl::string, eastl::string>(basic_string* param_1) {
        uint uVar1;
        int iVar2;
        long lVar3;
        ulong uVar4;
        undefined1* puVar5;
        byte* pbVar6;
        int iVar7;
        byte bVar8;

        new (this) eastl::string();
        lVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        reserve(lVar3 + 1);
        uVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        force_size(uVar4);
        uVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        puVar5 = (undefined1*)eastl::string::operator[]((eastl::string*)this, uVar4);
        *puVar5 = 0;
        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (0 < (int)uVar1) {
            uVar4 = 0;
            do {
                pbVar6 = (byte*)eastl::string::operator[]((eastl::string*)param_1, uVar4);
                bVar8 = *pbVar6;
                if ((byte)((bVar8 & 223) + 191) < 26) {
                    iVar2 = (uint)('Z' < (char)bVar8) * 32;
                    iVar7 = ((int)(char)bVar8 - (iVar2 + 65)) + 13;
                    bVar8 = (char)iVar7 + (char)(iVar7 / 26) * -26 + (char)iVar2 + 65;
                }
                pbVar6 = (byte*)eastl::string::operator[]((eastl::string*)this, uVar4);
                *pbVar6 = bVar8;
                uVar4 = uVar4 + 1;
            } while (uVar1 != uVar4);
        }
        return this;
    }

    // 0x100187080, 48 bytes, inline, placed by class name
    // unsigned int hash32<eastl::string >(eastl::string const&)
    /* unsigned int hash32<eastl::fixed_string<char, 256, true, eastl::allocator>
   >(eastl::fixed_string<char, 256, true, eastl::allocator> const&) */

    uint hash32<eastl::fixed_string<char, 256, true, eastl::allocator>>(fixed_string* param_1) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        return hash32(pcVar1, uVar2);
    }

    // 0x1001a22c0, 64 bytes, inline, placed by class name
    // unsigned long UTF8ToCP1252<eastl::string >(eastl::string const&, eastl::string&)
    ulong UTF8ToCP1252<eastl::string>(basic_string* param_1, basic_string* param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar2 = UTF8ToCP1252<eastl::string>(pcVar1, uVar2, param_2);
        return uVar2;
    }

    // 0x1001a2380, 128 bytes, inline, placed by class name
    // unsigned long CP1252ToUTF8<eastl::string >(eastl::string const&, eastl::string&)
    ulong CP1252ToUTF8<eastl::string>(basic_string* param_1, basic_string* param_2) {
        char* pcVar1;
        ulong uVar2;
        eastl::string local_48[32];

        eastl::string::basic_string(local_48);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar2 = CP1252ToUTF8<eastl::string>(pcVar1, uVar2, (basic_string*)local_48);
        eastl::string::swap(local_48, param_2);
        eastl::string::~basic_string(local_48);
        return uVar2;
    }

    // 0x1001a2400, 224 bytes, inline, placed by class name
    // unsigned long UTF8ToCP1252<eastl::string >(char const*, unsigned long, eastl::string&)
    ulong UTF8ToCP1252<eastl::string>(char* param_1, ulong param_2, basic_string* param_3) {
        char cVar1;
        wchar16 wVar2;
        ulong uVar3;
        eastl::string local_60[32];
        ulong local_38;

        eastl::string::basic_string(local_60);
        eastl::string::clear();
        eastl::string::reserve(local_60, param_2);
        local_38 = 0;
        uVar3 = 0;
        if (param_2 != 0) {
            do {
                wVar2 = GetUTF8NextChar(param_1, &local_38, param_2);
                cVar1 = WideToCP1252(wVar2);
                eastl::string::append(local_60, 1, cVar1);
                uVar3 = uVar3 + 1;
            } while (local_38 < param_2);
        }
        param_3->swap(local_60);
        eastl::string::~basic_string(local_60);
        return uVar3;
    }

    // 0x1001a2660, 176 bytes, inline, placed by class name
    // unsigned long CP1252ToUTF8<eastl::string >(char const*, unsigned long, eastl::string&)
    ulong CP1252ToUTF8<eastl::string>(char* param_1, ulong param_2, basic_string* param_3) {
        ulong uVar1;
        eastl::string local_50[32];

        eastl::string::basic_string(local_50);
        eastl::string::clear();
        eastl::string::reserve(local_50, param_2);
        if (param_2 == 0) {
            param_2 = 0;
        } else {
            uVar1 = 0;
            do {
                CP1252ToUTF8Append<eastl::string>(param_1[uVar1], (basic_string*)local_50);
                uVar1 = uVar1 + 1;
            } while (param_2 != uVar1);
        }
        param_3->swap(local_50);
        eastl::string::~basic_string(local_50);
        return param_2;
    }

    // 0x1001a2710, 64 bytes, inline, placed by class name
    // void CP1252ToUTF8Append<eastl::string >(unsigned char, eastl::string&)
    void CP1252ToUTF8Append<eastl::string>(uchar param_1, basic_string* param_2) {
        ushort uVar1;
        ushort* puVar2;

        if (((char)param_1 < '\0') && (param_1 < 160)) {
            puVar2 = (ushort*)std::array<char16_t, 256ul>::operator[]((ulong)param_1);
            uVar1 = *puVar2;
        } else {
            uVar1 = (ushort)param_1;
        }
        UTF8Append<eastl::string>((uint)uVar1, param_2);
    }

    // 0x1001a2770, 240 bytes, inline, placed by class name
    // int UTF8Append<eastl::string >(unsigned int, eastl::string&)
    int UTF8Append<eastl::string>(uint param_1, basic_string* param_2) {
        long lVar1;
        int iVar2;

        iVar2 = 0;
        if (param_1 != 0) {
            if (param_1 < 128) {
                iVar2 = 1;
            } else if (param_1 < 2048) {
                lVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_2->reserve(lVar1 + 2);
                param_2->append(1, (byte)(param_1 >> 6) & 31 | 192);
                param_1 = (uint)((byte)param_1 & 63 | 128);
                iVar2 = 2;
            } else {
                if (65535 < param_1) {
                    return 0;
                }
                lVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_2->reserve(lVar1 + 3);
                param_2->append(1, (byte)(param_1 >> 12) & 15 | 224);
                param_2->append(1, (byte)(param_1 >> 6) & 63 | 128);
                param_1 = (uint)((byte)param_1 & 63 | 128);
                iVar2 = 3;
            }
            param_2->append(1, (char)param_1);
        }
        return iVar2;
    }

    // 0x1001abe90, 96 bytes, inline, placed by class name
    // GetUTF8StringWidth(char const*, unsigned long)
    long GetUTF8StringWidth(char* param_1, ulong param_2) {
        long lVar1;
        ulong local_30;

        local_30 = 0;
        if (param_2 == 0) {
            lVar1 = 0;
        } else {
            lVar1 = 0;
            do {
                GetUTF8NextChar(param_1, &local_30, param_2);
                lVar1 = lVar1 + 1;
            } while (local_30 < param_2);
        }
        return lVar1;
    }

    // 0x1001b0230, 48 bytes, inline, placed by class name
    // hash32(char const*, unsigned long)
    int hash32(char* param_1, ulong param_2) {
        int iVar1;
        ulong uVar2;

        if (param_2 == 0) {
            return 0;
        }
        uVar2 = 0;
        iVar1 = 0;
        do {
            iVar1 = (int)param_1[uVar2] + iVar1 * 31;
            uVar2 = uVar2 + 1;
        } while (param_2 != uVar2);
        return iVar1;
    }

    // 0x1001ff420, 80 bytes, inline, placed by class name
    // void UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL>&)
    void UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(basic_string* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::transform<char*, char*,
                         UTF8ToLower<eastl::basic_string<char, BucketAllocatorEASTL>>(
                             eastl::basic_string<char, BucketAllocatorEASTL>&)::_lambda(char) _1_>(uVar1, uVar2, uVar3);
    }

    // 0x100242ce0, 32 bytes, inline, placed by class name
    // GetUTF8NextChar16(char const*, unsigned long&)
    uint GetUTF8NextChar16(char* param_1, ulong* param_2) {
        uint uVar1;
        uint uVar2;

        uVar1 = GetUTF8NextChar(param_1, param_2);
        uVar2 = 65535;
        if (uVar1 < 65535) {
            uVar2 = uVar1;
        }
        return uVar2 & 65535;
    }

    // 0x1004d4d20, 176 bytes, inline, placed by class name
    // unsigned long CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL> >(char const*, unsigned long, eastl::basic_string<char, BucketAllocatorEASTL>&)
    ulong CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(char* param_1, ulong param_2,
                                                                        basic_string* param_3) {
        ulong uVar1;
        basic_string<char, BucketAllocatorEASTL> local_48[24];

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        eastl::string::clear();
        eastl::basic_string<char, BucketAllocatorEASTL>::reserve(local_48, param_2);
        if (param_2 == 0) {
            param_2 = 0;
        } else {
            uVar1 = 0;
            do {
                CP1252ToUTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>(param_1[uVar1],
                                                                                    (basic_string*)local_48);
                uVar1 = uVar1 + 1;
            } while (param_2 != uVar1);
        }
        param_3->swap(local_48);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        return param_2;
    }

    // 0x1004d4dd0, 64 bytes, inline, placed by class name
    // void CP1252ToUTF8Append<eastl::basic_string<char, BucketAllocatorEASTL> >(unsigned char, eastl::basic_string<char, BucketAllocatorEASTL>&)
    void CP1252ToUTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>(uchar param_1, basic_string* param_2) {
        ushort uVar1;
        ushort* puVar2;

        if (((char)param_1 < '\0') && (param_1 < 160)) {
            puVar2 = (ushort*)std::array<char16_t, 256ul>::operator[]((ulong)param_1);
            uVar1 = *puVar2;
        } else {
            uVar1 = (ushort)param_1;
        }
        UTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>((uint)uVar1, param_2);
    }

    // 0x1004d4f00, 240 bytes, inline, placed by class name
    // int UTF8Append<eastl::basic_string<char, BucketAllocatorEASTL> >(unsigned int, eastl::basic_string<char, BucketAllocatorEASTL>&)
    int UTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>(uint param_1, basic_string* param_2) {
        long lVar1;
        int iVar2;

        iVar2 = 0;
        if (param_1 != 0) {
            if (param_1 < 128) {
                iVar2 = 1;
            } else if (param_1 < 2048) {
                lVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_2->reserve(lVar1 + 2);
                param_2->append(1, (byte)(param_1 >> 6) & 31 | 192);
                param_1 = (uint)((byte)param_1 & 63 | 128);
                iVar2 = 2;
            } else {
                if (65535 < param_1) {
                    return 0;
                }
                lVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_2->reserve(lVar1 + 3);
                param_2->append(1, (byte)(param_1 >> 12) & 15 | 224);
                param_2->append(1, (byte)(param_1 >> 6) & 63 | 128);
                param_1 = (uint)((byte)param_1 & 63 | 128);
                iVar2 = 3;
            }
            param_2->append(1, (char)param_1);
        }
        return iVar2;
    }

    // 0x1004fcdb0, 96 bytes, inline, placed by class name
    // unsigned long CP1252ToUTF8<128, true>(char const*, unsigned int, eastl::fixed_string<char, 128, true, eastl::allocator>&)
    /* unsigned long CP1252ToUTF8<24, true>(char const*, unsigned int,
   eastl::fixed_string<char, 24, true, eastl::allocator>&) */

    ulong CP1252ToUTF8<24, true>(char* param_1, uint param_2, fixed_string* param_3) {
        ulong uVar1;
        ulong uVar2;

        uVar2 = (ulong)param_2;
        eastl::string::clear();
        if (param_2 == 0) {
            uVar2 = 0;
        } else {
            uVar1 = 0;
            do {
                CP1252ToUTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>(param_1[uVar1], param_3);
                uVar1 = uVar1 + 1;
            } while (uVar2 != uVar1);
        }
        return uVar2;
    }

    // 0x1004fce10, 64 bytes, inline, placed by class name
    // void CP1252ToUTF8Append<eastl::fixed_string<char, 128, true, eastl::allocator> >(unsigned char, eastl::fixed_string<char, 128, true, eastl::allocator>&)
    /* void CP1252ToUTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>
   >(unsigned char, eastl::fixed_string<char, 24, true, eastl::allocator>&) */

    void CP1252ToUTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>(uchar param_1,
                                                                                   fixed_string* param_2) {
        ushort uVar1;
        ushort* puVar2;

        if (((char)param_1 < '\0') && (param_1 < 160)) {
            puVar2 = (ushort*)std::array<char16_t, 256ul>::operator[]((ulong)param_1);
            uVar1 = *puVar2;
        } else {
            uVar1 = (ushort)param_1;
        }
        UTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>((uint)uVar1, param_2);
    }

    // 0x1004fce50, 256 bytes, inline, placed by class name
    // int UTF8Append<eastl::fixed_string<char, 128, true, eastl::allocator> >(unsigned int, eastl::fixed_string<char, 128, true, eastl::allocator>&)
    /* int UTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator> >(unsigned
   int, eastl::fixed_string<char, 24, true, eastl::allocator>&) */

    int UTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>(uint param_1, fixed_string* param_2) {
        int iVar2;
        long lVar3;

        iVar2 = 0;
        if (param_1 != 0) {
            if (param_1 < 128) {
                param_2->append(1, (byte)param_1);
                iVar2 = 1;
            } else if (param_1 < 2048) {
                lVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_2->reserve(lVar3 + 2);
                param_2->append(1, (byte)(param_1 >> 6) & 31 | 192);
                param_2->append(1, (byte)param_1 & 63 | 128);
                iVar2 = 2;
            } else if (param_1 < 65536) {
                lVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_2->reserve(lVar3 + 3);
                param_2->append(1, (byte)(param_1 >> 12) & 15 | 224);
                param_2->append(1, (byte)(param_1 >> 6) & 63 | 128);
                param_2->append(1, (byte)param_1 & 63 | 128);
                iVar2 = 3;
            }
        }
        return iVar2;
    }

    // 0x1005f9630, 64 bytes, inline, placed by class name
    // unsigned long UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL> const&, eastl::basic_string<char, BucketAllocatorEASTL>&)
    ulong UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(basic_string* param_1, basic_string* param_2) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar2 = UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(pcVar1, uVar2, param_2);
        return uVar2;
    }

    // 0x1005f9860, 128 bytes, inline, placed by class name
    // unsigned long CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL> const&, eastl::basic_string<char, BucketAllocatorEASTL>&)
    ulong CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(basic_string* param_1, basic_string* param_2) {
        char* pcVar1;
        ulong uVar2;
        basic_string local_40[24];

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar2 = CP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(pcVar1, uVar2, local_40);
        local_40->swap(param_2);
        local_40->~basic_string();
        return uVar2;
    }

    // 0x1005fbc10, 224 bytes, inline, placed by class name
    // unsigned long UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL> >(char const*, unsigned long, eastl::basic_string<char, BucketAllocatorEASTL>&)
    ulong UTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(char* param_1, ulong param_2,
                                                                        basic_string* param_3) {
        char cVar1;
        wchar16 wVar2;
        ulong uVar3;
        basic_string<char, BucketAllocatorEASTL> local_58[24];
        ulong local_38;

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        eastl::string::clear();
        eastl::basic_string<char, BucketAllocatorEASTL>::reserve(local_58, param_2);
        local_38 = 0;
        uVar3 = 0;
        if (param_2 != 0) {
            do {
                wVar2 = GetUTF8NextChar(param_1, &local_38, param_2);
                cVar1 = WideToCP1252(wVar2);
                eastl::basic_string<char, BucketAllocatorEASTL>::append(local_58, 1, cVar1);
                uVar3 = uVar3 + 1;
            } while (local_38 < param_2);
        }
        param_3->swap(local_58);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_58);
        return uVar3;
    }

    // 0x1008e4600, 48 bytes, inline, placed by class name
    // unsigned long GetUTF8StringWidth<StringView>(StringView const&)
    ulong GetUTF8StringWidth<StringView>(StringView* param_1) {
        char* pcVar1;
        ulong uVar2;

        pcVar1 = (char*)param_1->end();
        uVar2 = param_1->p2_alt2();
        uVar2 = GetUTF8StringWidth(pcVar1, uVar2);
        return uVar2;
    }

    // 0x1008e85d0, 48 bytes, inline, placed by class name
    // GetCodepointUTF8ByteSize(unsigned int)
    long GetCodepointUTF8ByteSize(uint param_1) {
        long lVar1;

        lVar1 = 1;
        if (127 < param_1) {
            lVar1 = 3 - (ulong)(param_1 < 2048);
        }
        return lVar1;
    }

    // 0x1008e8600, 96 bytes, inline, placed by class name
    // bool AppendUTF8Codepoint<eastl::basic_string<char, BucketAllocatorEASTL> >(unsigned int, eastl::basic_string<char, BucketAllocatorEASTL>&)
    bool AppendUTF8Codepoint<eastl::basic_string<char, BucketAllocatorEASTL>>(uint param_1, basic_string* param_2) {
        ulong uVar1;
        long lVar2;
        char* pcVar4;

        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        lVar2 = GetCodepointUTF8ByteSize(param_1);
        param_2->resize(lVar2 + uVar1);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](
            (basic_string<char, BucketAllocatorEASTL>*)param_2, uVar1);
        return (char*)CodepointToUTF8(param_1, pcVar4) != pcVar4;
    }

    // 0x1009ef9a0, 48 bytes, inline, placed by class name
    // hash32(char const*)
    int hash32(char* param_1) {
        char cVar1;
        int iVar2;
        int iVar3;

        iVar2 = 0;
        do {
            iVar3 = iVar2;
            cVar1 = *param_1;
            param_1 = param_1 + 1;
            iVar2 = iVar3 * 31 + (int)cVar1;
        } while (cVar1 != 0);
        return iVar3;
    }

    // 0x100ad93e0, 224 bytes, inline, placed by class name
    // unsigned long CP1252ToUTF8<eastl::fixed_string<char, 256, true, eastl::allocator> >(char const*, unsigned long, eastl::fixed_string<char, 256, true, eastl::allocator>&)
    ulong CP1252ToUTF8<eastl::fixed_string<char, 256, true, eastl::allocator>>(char* param_1, ulong param_2,
                                                                               fixed_string* param_3) {
        ulong uVar1;
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
        eastl::string::clear();
        local_160->reserve(param_2);
        if (param_2 != 0) {
            uVar1 = 0;
            do {
                CP1252ToUTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>(param_1[uVar1],
                                                                                          (fixed_string*)local_160);
                uVar1 = uVar1 + 1;
            } while (param_2 != uVar1);
        }
        param_3->swap(local_160);
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

    // 0x100caed90, 848 bytes, inline, placed by class name
    // void SanitiseFileName<2048, true, eastl::allocator>(eastl::fixed_string<char, 2048, true, eastl::allocator>&)
    void SanitiseFileName<2048, true, eastl::allocator>(fixed_string* param_1) {
        char cVar1;
        int iVar2;
        char* pcVar3;
        long lVar4;
        long lVar5;
        char* pcVar6;
        char* pcVar7;
        ulong uVar8;
        undefined1* puVar9;
        fixed_string local_450[1048];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        MakeUnixFilename<1024, false, eastl::allocator>(param_1);
        eastl::fixed_string<char, 1024, false, eastl::allocator>::fixed_string((char*)local_450);
        MakeUnixFilename<1024, false, eastl::allocator>(local_450);
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            iVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::comparei(pcVar3,
                                                                                                     (char*)(lVar4 +
                                                                                                             lVar5),
                                                                                                     pcVar6, pcVar7);
            if (iVar2 == 0) {
                uVar8 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pcVar3 = (char*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    uVar8);
                uVar8 = 1;
                if (*pcVar3 != '\\') {
                    uVar8 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    pcVar3 = (char*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (basic_string<char,
                                      eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>*)
                            param_1,
                        uVar8);
                    uVar8 = (ulong)(*pcVar3 == '/');
                }
                lVar4 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_1->replace(0, uVar8 + lVar4, "");
            }
        }
        if ((*PTR_REPLACE_PATTERNS_100ee49f8 == '\0') &&
            (iVar2 = ___cxa_guard_acquire(PTR_REPLACE_PATTERNS_100ee49f8), iVar2 != 0)) {
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[50],
                                                                                        char const(&)[6], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)PTR_REPLACE_PATTERNS_100ee9580,
                "devplatform/3rdpartylibs/cpp/eastl/include/eastl/", "eastl");
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[30],
                                                                                        char const(&)[1], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)(PTR_REPLACE_PATTERNS_100ee9580 +
                                                                                  2096),
                "devplatform/3rdpartylibs/cpp/", "");
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[8],
                                                                                        char const(&)[1], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)(PTR_REPLACE_PATTERNS_100ee9580 +
                                                                                  4192),
                "liblibs", "");
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[15],
                                                                                        char const(&)[1], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)(PTR_REPLACE_PATTERNS_100ee9580 +
                                                                                  6288),
                "Contents/MacOS", "");
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[8],
                                                                                        char const(&)[1], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)(PTR_REPLACE_PATTERNS_100ee9580 +
                                                                                  8384),
                "nxt/bin", "");
            ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
            ___cxa_guard_release(PTR_REPLACE_PATTERNS_100ee49f8);
        }
        lVar4 = 10480;
        do {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar8 = param_1->find(pcVar3, 0);
            if (uVar8 != 18446744073709551615) {
                puVar9 = (undefined1*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                *puVar9 = 60;
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 == '\0') {
                    lVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    param_1->replace(1, uVar8 + lVar4, pcVar3);
                } else {
                    param_1->erase(1, uVar8);
                }
                param_1->append(">");
                break;
            }
            lVar4 = lVar4 + -2096;
        } while (lVar4 != 0);
        local_450->~fixed_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100caf270, 848 bytes, inline, placed by class name
    // void SanitiseFileName<256, false, eastl::allocator>(eastl::fixed_string<char, 256, false, eastl::allocator>&)
    void SanitiseFileName<256, false, eastl::allocator>(fixed_string* param_1) {
        char cVar1;
        int iVar2;
        char* pcVar3;
        long lVar4;
        long lVar5;
        char* pcVar6;
        char* pcVar7;
        ulong uVar8;
        undefined1* puVar9;
        fixed_string local_450[1048];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        MakeUnixFilename<1024, false, eastl::allocator>(param_1);
        eastl::fixed_string<char, 1024, false, eastl::allocator>::fixed_string((char*)local_450);
        MakeUnixFilename<1024, false, eastl::allocator>(local_450);
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            iVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::comparei(pcVar3,
                                                                                                     (char*)(lVar4 +
                                                                                                             lVar5),
                                                                                                     pcVar6, pcVar7);
            if (iVar2 == 0) {
                uVar8 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pcVar3 = (char*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, false, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, false, eastl::allocator>>*)
                        param_1,
                    uVar8);
                uVar8 = 1;
                if (*pcVar3 != '\\') {
                    uVar8 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    pcVar3 = (char*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, false, eastl::allocator>>::
                    operator[](
                        (basic_string<char,
                                      eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, false, eastl::allocator>>*)
                            param_1,
                        uVar8);
                    uVar8 = (ulong)(*pcVar3 == '/');
                }
                lVar4 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                param_1->replace(0, uVar8 + lVar4, "");
            }
        }
        if ((*PTR_REPLACE_PATTERNS_100ee4a00 == '\0') &&
            (iVar2 = ___cxa_guard_acquire(PTR_REPLACE_PATTERNS_100ee4a00), iVar2 != 0)) {
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[50],
                                                                                        char const(&)[6], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)PTR_REPLACE_PATTERNS_100ee9588,
                "devplatform/3rdpartylibs/cpp/eastl/include/eastl/", "eastl");
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[30],
                                                                                        char const(&)[1], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)(PTR_REPLACE_PATTERNS_100ee9588 +
                                                                                  2096),
                "devplatform/3rdpartylibs/cpp/", "");
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[8],
                                                                                        char const(&)[1], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)(PTR_REPLACE_PATTERNS_100ee9588 +
                                                                                  4192),
                "liblibs", "");
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[15],
                                                                                        char const(&)[1], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)(PTR_REPLACE_PATTERNS_100ee9588 +
                                                                                  6288),
                "Contents/MacOS", "");
            eastl::pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                        eastl::fixed_string<char, 1024, false, eastl::allocator>>::pair<char const(&)[8],
                                                                                        char const(&)[1], void>(
                (pair<eastl::fixed_string<char, 1024, false, eastl::allocator>,
                      eastl::fixed_string<char, 1024, false, eastl::allocator>>*)(PTR_REPLACE_PATTERNS_100ee9588 +
                                                                                  8384),
                "nxt/bin", "");
            ___cxa_atexit(___cxx_global_array_dtor_71, 0, 4294967296);
            ___cxa_guard_release(PTR_REPLACE_PATTERNS_100ee4a00);
        }
        lVar4 = 10480;
        do {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar8 = param_1->find(pcVar3, 0);
            if (uVar8 != 18446744073709551615) {
                puVar9 = (undefined1*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, false, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, false, eastl::allocator>>*)
                        param_1,
                    0);
                *puVar9 = 60;
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 == '\0') {
                    lVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    param_1->replace(1, uVar8 + lVar4, pcVar3);
                } else {
                    param_1->erase(1, uVar8);
                }
                param_1->append(">");
                break;
            }
            lVar4 = lVar4 + -2096;
        } while (lVar4 != 0);
        local_450->~fixed_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cb1ba0, 80 bytes, inline, placed by class name
    // void MakeUnixFilename<2048, true, eastl::allocator>(eastl::fixed_string<char, 2048, true, eastl::allocator>&)
    /* void MakeUnixFilename<1024, false, eastl::allocator>(eastl::fixed_string<char,
   1024, false, eastl::allocator>&) */

    void MakeUnixFilename<1024, false, eastl::allocator>(fixed_string* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::transform<char*, char*,
                         MakeUnixFilename<1024, false, eastl::allocator>(
                             eastl::fixed_string<char, 1024, false, eastl::allocator>&)::_lambda(char) _1_>(
            uVar1, uVar2, uVar3);
    }

    // 0x100cb3bb0, 48 bytes, inline, placed by class name
    // unsigned long UTF16to8<eastl::fixed_string<char, 260, true, eastl::allocator> >(wchar_t const*, eastl::fixed_string<char, 260, true, eastl::allocator>&)
    ulong UTF16to8<eastl::fixed_string<char, 260, true, eastl::allocator>>(wchar_t* param_1, fixed_string* param_2) {
        size_t sVar1;

        sVar1 = _wcslen(param_1);
        return UTF16to8<eastl::fixed_string<char, 260, true, eastl::allocator>>(param_1, sVar1, param_2);
    }

    // 0x100cb5c30, 432 bytes, inline, placed by class name
    // unsigned long UTF16to8<eastl::fixed_string<char, 260, true, eastl::allocator> >(wchar_t const*, unsigned long, eastl::fixed_string<char, 260, true, eastl::allocator>&)
    ulong UTF16to8<eastl::fixed_string<char, 260, true, eastl::allocator>>(wchar_t* param_1, ulong param_2,
                                                                           fixed_string* param_3) {
        wchar_t wVar1;
        byte bVar2;
        uint uVar3;
        ulong uVar4;
        wchar_t wVar5;

        eastl::string::clear();
        param_3->reserve(param_2);
        uVar3 = 0;
        uVar4 = 0;
        if (param_2 != 0) {
            do {
                wVar1 = *param_1;
                if (wVar1 != L'\0') {
                    if ((wVar1 & 4294966272U) == 55296) {
                        uVar3 = wVar1 * 1024 + 4238409728;
                    } else {
                        wVar5 = wVar1 + L'\xffff2400' | uVar3;
                        if ((wVar1 & 4294966272U) != 56320) {
                            wVar5 = wVar1;
                        }
                        if ((uint)wVar5 < 128) {
                        LAB_100cb5cca:
                            bVar2 = (byte)wVar5;
                        } else {
                            if ((uint)wVar5 < 2048) {
                                bVar2 = (byte)((uint)wVar5 >> 6) & 31 | 192;
                            } else {
                                if (65535 < (uint)wVar5) {
                                    param_3->append(1, (byte)((uint)wVar5 >> 18) & 7 | 240);
                                    param_3->append(1, (byte)((uint)wVar5 >> 12) & 63 | 128);
                                    param_3->append(1, (byte)((uint)wVar5 >> 6) & 63 | 128);
                                    wVar5 = (wchar_t)((byte)wVar5 & 63 | 128);
                                    goto LAB_100cb5cca;
                                }
                                param_3->append(1, (byte)((uint)wVar5 >> 12) & 15 | 224);
                                bVar2 = (byte)((uint)wVar5 >> 6) & 63 | 128;
                            }
                            param_3->append(1, bVar2);
                            bVar2 = (byte)wVar5 & 63 | 128;
                        }
                        param_3->append(1, bVar2);
                        uVar3 = 0;
                    }
                    param_1 = param_1 + 1;
                }
                if (wVar1 == L'\0') {
                    return uVar4;
                }
                uVar4 = uVar4 + 1;
            } while (param_2 != uVar4);
            uVar4 = param_2;
        }
        return uVar4;
    }

} // namespace jag::stringtools

namespace jag::oldscape::core::stringtools::general {
    class StringTools {
    public:
        CheckedParseInt(int&, StringView const&);
        bool StartsWith(eastl::string const&, char const*);
        basic_string* MaskPassword(eastl::string const&);
        StringTools* GetRepeatedCharacter(char, unsigned long);
        StringTools* FromInt(int, bool);
        IsPrintableAsImplementedInJString(char16_t);
        bool IsASCIIAlphaNumeric(char16_t);
        bool IsASCIIAlpha(char16_t);
        bool IsASCIINumeric(char16_t);
        ulong IsASCIINumeric(eastl::string);
        bool StartsWith<char, eastl::allocator, eastl::allocator>(eastl::string const&, eastl::string const&);
        basic_string* ForceCapitalisationOfWords(eastl::string&);
        StringTools* Join(eastl::string*, int, int);
        void SplitByChar(eastl::string const&, char, Array<eastl::string, eastl::allocator>&);
        void IsInt(eastl::string);
        void ParseInt(eastl::string const&);
        bool MatchPattern<eastl::string>(eastl::string const&, eastl::string const&);
        int Count(eastl::string const&, char);
        void IsInt(eastl::string const&, int, bool);
        bool CheckedParseInt(int&, eastl::string const&, int, bool);
        ParseInt(eastl::string const&, int, bool);
        char* EqualsIgnoreCase(eastl::string const&, eastl::string const&);
        void CheckedParseInt(int&, eastl::string const&);
        ulong MatchPattern(char const*, char const*);
        void ReplaceCharsWithSubstitute(eastl::string&, eastl::vector<char, eastl::allocator> const&, char);
        StringTools* StripTags(eastl::string const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100076bc0, 80 bytes, inline, placed by class name and debug map
    // StringTools::CheckedParseInt(int&, StringView const&)
    undefined4 StringTools::CheckedParseInt(int* param_1, StringView* param_2) {
        undefined4 uVar1;
        StringView local_38[2];

        StringView::to_owned_string<eastl::string>(local_38);
        uVar1 = CheckedParseInt(param_1, (basic_string*)local_38, 10, true);
        local_38->~basic_string();
        return uVar1;
    }

    // 0x1000c52a0, 48 bytes, inline, placed by class name
    // StringTools::StartsWith(eastl::string const&, char const*)
    bool StringTools::StartsWith(basic_string* param_1, char* param_2) {
        int iVar1;
        size_t sVar2;

        sVar2 = _strlen(param_2);
        iVar1 = param_1->compare(0, sVar2, param_2);
        return iVar1 == 0;
    }

    // 0x1001233a0, 48 bytes, inline, placed by class name
    // StringTools::MaskPassword(eastl::string const&)
    basic_string* StringTools::MaskPassword(basic_string* param_1) {
        ulong uVar1;

        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        GetRepeatedCharacter((StringTools*)param_1, '*', uVar1);
        return param_1;
    }

    // 0x100131a10, 144 bytes, inline, placed by class name
    // StringTools::GetRepeatedCharacter(char, unsigned long)
    StringTools* StringTools::GetRepeatedCharacter(char param_1, ulong param_2) {
        char* pcVar1;
        ulong uVar2;
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        new (this) eastl::string(param_2, param_1, local_30);
        if (param_2 != 0) {
            uVar2 = 0;
            do {
                pcVar1 = (char*)eastl::string::operator[]((eastl::string*)this, uVar2);
                *pcVar1 = param_1;
                uVar2 = uVar2 + 1;
            } while (param_2 != uVar2);
        }
        return this;
    }

    // 0x1001657d0, 192 bytes, inline, placed by class name
    // StringTools::FromInt(int, bool)
    StringTools* StringTools::FromInt(int param_1, bool param_2) {
        char* pcVar1;
        basic_string* pbVar2;
        undefined7 in_register_00000011;
        eastl::string local_60[32];
        allocator local_40[32];

        if (((int)CONCAT71(in_register_00000011, param_2) == 0) || (param_1 < 0)) {
            to_string(param_1);
        } else {
            eastl::allocator::allocator(local_40, "EASTL basic_string");
            eastl::string::basic_string(local_60, "+", local_40);
            local_40->to_string(param_1);
            pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pbVar2 = (basic_string*)eastl::string::append(local_60, pcVar1);
            new (this) eastl::string(pbVar2);
            local_40->~basic_string();
            eastl::string::~basic_string(local_60);
        }
        return this;
    }

    // 0x100165970, 96 bytes, inline, placed by class name
    // StringTools::IsPrintableAsImplementedInJString(char16_t)
    undefined8 StringTools::IsPrintableAsImplementedInJString(wchar16 param_1) {
        if (((((ushort)(param_1 + L'￠') < 95) || ((ushort)(param_1 + L'｠') < 96)) ||
             (((ushort)((ushort)param_1 - 338) < 39 &&
               ((274877906947U >> ((ulong)((ushort)param_1 - 338 & 65535) & 63) & 1) != 0)))) ||
            ((param_1 == L'—' || (param_1 == L'€')))) {
            return 1;
        }
        return 0;
    }

    // 0x1001659d0, 48 bytes, inline, placed by class name
    // StringTools::IsASCIIAlphaNumeric(char16_t)
    bool StringTools::IsASCIIAlphaNumeric(wchar16 param_1) {
        bool bVar1;

        bVar1 = true;
        if ((9 < (ushort)(param_1 + L'￐')) && (25 < (ushort)(param_1 + L'﾿'))) {
            bVar1 = (ushort)(param_1 + L'ﾟ') < 26;
        }
        return bVar1;
    }

    // 0x100165a00, 32 bytes, inline, placed by class name
    // StringTools::IsASCIIAlpha(char16_t)
    bool StringTools::IsASCIIAlpha(wchar16 param_1) {
        return (ushort)((param_1 & 65503U) - 65U) < 26;
    }

    // 0x100165a20, 16 bytes, inline, placed by class name
    // StringTools::IsASCIINumeric(char16_t)
    bool StringTools::IsASCIINumeric(wchar16 param_1) {
        return (ushort)(param_1 + L'￐') < 10;
    }

    // 0x100169f30, 144 bytes, inline, placed by class name
    // StringTools::IsASCIINumeric(eastl::string)
    ulong StringTools::IsASCIINumeric() {
        char cVar1;
        uint uVar2;
        char* pcVar3;
        ulong uVar4;
        bool bVar5;
        undefined8 unaff_R13;

        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        bVar5 = 0 < (int)uVar2;
        if (0 < (int)uVar2) {
            cVar1 = IsASCIINumeric((short)*pcVar3);
            bVar5 = true;
            if (cVar1 != '\0') {
                uVar4 = 1;
                do {
                    bVar5 = (long)uVar4 < (long)(int)uVar2;
                    if (uVar2 == uVar4)
                        break;
                    cVar1 = IsASCIINumeric((short)pcVar3[uVar4]);
                    uVar4 = uVar4 + 1;
                } while (cVar1 != '\0');
            }
        }
        return (CONCAT71((int7)((ulong)unaff_R13 >> 8), bVar5) ^ 1) & 4294967295;
    }

    // 0x10017bc40, 80 bytes, inline, placed by class name
    // bool StringTools::StartsWith<char, eastl::allocator, eastl::allocator>(eastl::string const&, eastl::string const&)
    /* bool StringTools::StartsWith<char,
   BucketAllocatorEASTL, eastl::allocator>(eastl::basic_string<char, BucketAllocatorEASTL>
   const&, eastl::string const&) */

    bool StringTools::StartsWith<char, BucketAllocatorEASTL, eastl::allocator>(basic_string* param_1,
                                                                               basic_string* param_2) {
        ulong uVar1;
        char* pcVar2;
        int iVar3;

        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        iVar3 = param_1->compare(0, uVar1, pcVar2);
        return iVar3 == 0;
    }

    // 0x10018e670, 352 bytes, inline, placed by class name
    // StringTools::ForceCapitalisationOfWords(eastl::string&)
    basic_string* StringTools::ForceCapitalisationOfWords(basic_string* param_1) {
        int iVar2;
        byte bVar3;
        char cVar4;
        ulong uVar5;
        byte* pbVar6;
        ulong uVar7;
        int iVar8;
        char cVar9;
        eastl::string local_58[32];

        eastl::string::basic_string(local_58);
        jag::stringtools::UTF8ToCP1252<eastl::string>(param_1, (basic_string*)local_58);
        uVar5 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (uVar5 != 0) {
            iVar8 = 2;
            cVar9 = '\x02';
            uVar7 = 0;
            do {
                pbVar6 = (byte*)eastl::string::operator[](local_58, uVar7);
                bVar3 = *pbVar6;
                if (cVar9 == '\x02') {
                    bVar3 = CP1252Tools::ToUpper(bVar3);
                } else if (cVar9 == '\0') {
                    bVar3 = CP1252Tools::ToLower(bVar3);
                }
                cVar4 = CP1252Tools::IsAlpha(bVar3);
                cVar9 = '\0';
                iVar2 = 0;
                if (cVar4 == '\0') {
                    if (bVar3 < 64) {
                        if ((4294968832U >> ((ulong)bVar3 & 63) & 1) == 0) {
                            cVar9 = '\x02';
                            iVar2 = 2;
                            if ((9223442414188888064U >> ((ulong)bVar3 & 63) & 1) == 0)
                                goto LAB_10018e73c;
                        } else {
                            cVar9 = (iVar8 == 2) + '\x01';
                            iVar2 = (iVar8 == 2) + 1;
                        }
                    } else {
                    LAB_10018e73c:
                        cVar9 = '\x01';
                        iVar2 = 1;
                    }
                }
                iVar8 = iVar2;
                pbVar6 = (byte*)eastl::string::operator[](local_58, uVar7);
                *pbVar6 = bVar3;
                uVar7 = uVar7 + 1;
            } while (uVar5 != uVar7);
        }
        jag::stringtools::CP1252ToUTF8<eastl::string>((basic_string*)local_58, param_1);
        eastl::string::~basic_string(local_58);
        return param_1;
    }

    // 0x100190fb0, 336 bytes, inline, placed by class name
    // StringTools::Join(eastl::string*, int, int)
    StringTools* StringTools::Join(basic_string* param_1, int param_2, int param_3) {
        long lVar1;
        undefined4 in_register_0000000c;
        undefined4 in_register_00000014;
        long lVar2;
        ulong uVar3;
        long lVar4;
        allocator local_68[32];
        undefined8 local_48;
        undefined8 local_40;

        local_48 = CONCAT44(in_register_00000014, param_2);
        if (param_3 == 1) {
            new (this) eastl::string(param_1 + (long)param_2 * 32);
        } else if (param_3 == 0) {
            eastl::allocator::allocator(local_68, "EASTL basic_string");
            new (this) eastl::string("", local_68);
        } else {
            local_40 = CONCAT44(in_register_0000000c, param_3);
            if (param_3 < 1) {
                uVar3 = 2;
            } else {
                lVar4 = (long)param_2;
                lVar2 = 0;
                do {
                    lVar1 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    lVar2 = lVar2 + lVar1;
                    lVar4 = lVar4 + 1;
                } while (lVar4 < param_3 + param_2);
                uVar3 = lVar2 + 2;
                this = (StringTools*)this;
            }
            new (local_68) eastl::string();
            local_68->reserve(uVar3);
            if (0 < (int)local_40) {
                lVar2 = (long)(int)local_48;
                do {
                    local_68->append();
                    lVar2 = lVar2 + 1;
                } while (lVar2 < param_3 + param_2);
            }
            new (this) eastl::string(local_68);
            local_68->~basic_string();
        }
        return this;
    }

    // 0x1001fbfb0, 288 bytes, inline, placed by class name
    // StringTools::SplitByChar(eastl::string const&, char, Array<eastl::string, eastl::allocator>&)
    void StringTools::SplitByChar(basic_string* param_1, char param_2, Array* param_3) {
        uint uVar1;
        char* pcVar2;
        eastl::string* pbVar3;
        ulong uVar4;
        ulong uVar5;
        basic_string local_70[32];
        ulong local_50;
        ulong local_48;
        ulong local_40;

        uVar1 = Count(param_1, param_2);
        param_3->set_max_size((long)(int)(uVar1 + 1), 3);
        uVar4 = 0;
        if (0 < (int)uVar1) {
            local_48 = (ulong)uVar1;
            uVar5 = 0;
            local_40 = (ulong)uVar1;
            do {
                uVar4 = (ulong)(int)uVar4;
                local_50 = uVar4;
                do {
                    pcVar2 = (char*)param_1->at(uVar4);
                    uVar4 = uVar4 + 1;
                } while (*pcVar2 != param_2);
                eastl::string::substr((ulong)local_70, (ulong)param_1);
                pbVar3 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)param_3, uVar5);
                eastl::string::operator=(pbVar3, local_70);
                uVar5 = uVar5 + 1;
                local_70->~basic_string();
            } while (uVar5 != local_48);
            uVar1 = (uint)local_40;
        }
        eastl::string::substr((ulong)local_70, (ulong)param_1);
        pbVar3 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)param_3, (long)(int)uVar1);
        eastl::string::operator=(pbVar3, local_70);
        local_70->~basic_string();
    }

    // 0x1001fc0d0, 32 bytes, inline, placed by class name
    // StringTools::IsInt(eastl::string)
    void StringTools::IsInt(basic_string* param_1) {
        IsInt(param_1, 10, true);
    }

    // 0x1001fc0f0, 32 bytes, inline, placed by class name
    // StringTools::ParseInt(eastl::string const&)
    void StringTools::ParseInt(basic_string* param_1) {
        ParseInt(param_1, 10, true);
    }

    // 0x1001ff4e0, 48 bytes, inline, placed by class name
    // bool StringTools::MatchPattern<eastl::string >(eastl::string const&, eastl::string const&)
    /* bool 
   StringTools::MatchPattern<eastl::basic_string<char,
   BucketAllocatorEASTL> >(eastl::basic_string<char, BucketAllocatorEASTL> const&,
   eastl::basic_string<char, BucketAllocatorEASTL> const&) */

    bool StringTools::MatchPattern<eastl::basic_string<char, BucketAllocatorEASTL>>(basic_string* param_1,
                                                                                    basic_string* param_2) {
        char* pcVar1;
        char* pcVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)MatchPattern(pcVar1, pcVar2);
    }

    // 0x100215c60, 112 bytes, inline, placed by class name
    // StringTools::Count(eastl::string const&, char)
    int StringTools::Count(basic_string* param_1, char param_2) {
        ulong uVar1;
        char* pcVar2;
        ulong uVar3;
        int iVar4;

        uVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (uVar1 == 0) {
            iVar4 = 0;
        } else {
            uVar3 = 0;
            iVar4 = 0;
            do {
                pcVar2 = (char*)param_1->at(uVar3);
                iVar4 = iVar4 + (uint)(*pcVar2 == param_2);
                uVar3 = uVar3 + 1;
            } while (uVar1 != uVar3);
        }
        return iVar4;
    }

    // 0x100215cd0, 48 bytes, inline, placed by class name
    // StringTools::IsInt(eastl::string const&, int, bool)
    void StringTools::IsInt(basic_string* param_1, int param_2, bool param_3) {
        int local_c;

        local_c = 0;
        CheckedParseInt(&local_c, param_1, param_2, param_3);
    }

    // 0x100215d00, 528 bytes, inline, placed by class name
    // StringTools::CheckedParseInt(int&, eastl::string const&, int, bool)
    /* WARNING: Removing unreachable block (ram,4297154253) */
    /* StringTools::CheckedParseInt(int&,
   eastl::string const&, int, bool) */

    bool StringTools::CheckedParseInt(int* param_1, basic_string* param_2, int param_3, bool param_4) {
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        char* pcVar5;
        int iVar6;
        bool bVar7;
        int iVar8;
        byte bVar9;
        int local_34;

        if (34 < param_3 - 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("radix >= 2 && radix <= 36",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "stringtools/general/StringTools.h",
                      211, (char*)0);
        }
        iVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (iVar3 < 1) {
            bVar7 = false;
            local_34 = 0;
        } else {
            iVar8 = 0;
            bVar2 = false;
            local_34 = 0;
            bVar7 = false;
            do {
                pcVar5 = (char*)param_2->at((long)iVar8);
                cVar1 = *pcVar5;
                if (iVar8 == 0) {
                    bVar9 = 4;
                    iVar4 = 0;
                    if (cVar1 == '-') {
                        bVar2 = true;
                    } else if ((cVar1 != '+') || (!param_4))
                        goto LAB_100215dac;
                } else {
                LAB_100215dac:
                    if ((param_3 == 16) && (((iVar8 < 2 && (1 < iVar3 - iVar8)) && (cVar1 == '0')))) {
                        pcVar5 = (char*)param_2->at((long)(iVar8 + 1));
                        bVar9 = 4;
                        iVar4 = iVar8 + 1;
                        if (*pcVar5 == 'x')
                            goto LAB_100215e6c;
                    }
                    iVar4 = -48;
                    if (((byte)(cVar1 - 48U) < 10) || (iVar4 = -55, (byte)(cVar1 + 191U) < 26)) {
                    LAB_100215e20:
                        iVar4 = iVar4 + cVar1;
                        bVar9 = true;
                        if (iVar4 < param_3) {
                            iVar6 = -iVar4;
                            if (!bVar2) {
                                iVar6 = iVar4;
                            }
                            iVar6 = local_34 * param_3 + iVar6;
                            bVar9 = iVar6 / param_3 != local_34;
                            if (!(bool)bVar9) {
                                bVar7 = true;
                                local_34 = iVar6;
                            }
                        }
                    } else {
                        bVar9 = true;
                        iVar4 = -87;
                        if ((byte)(cVar1 + 159U) < 26)
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
            *param_1 = local_34;
        }
        return bVar7;
    }

    // 0x100215f10, 160 bytes, inline, placed by class name
    // StringTools::ParseInt(eastl::string const&, int, bool)
    undefined4 StringTools::ParseInt(basic_string* param_1, int param_2, bool param_3) {
        uint in_EAX;
        undefined8 uVar2;
        undefined8 uStack_28;

        if (34 < param_2 - 2U) {
            /* WARNING: Subroutine does not return */
            LogAssert("radix >= 2 && radix <= 36",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "stringtools/general/StringTools.h",
                      178, "Invalid radix: %i", param_2);
        }
        uStack_28 = (ulong)in_EAX;
        if (CheckedParseInt((int*)((long)&uStack_28 + 4), param_1, param_2, param_3) == '\0') {
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "stringtools/general/StringTools.h",
                      185, "Failed to parse number: %s", uVar2);
        }
        return uStack_28._4_4_;
    }

    // 0x100229ec0, 224 bytes, inline, placed by class name
    // StringTools::EqualsIgnoreCase(eastl::string const&, eastl::string const&)
    char* StringTools::EqualsIgnoreCase(basic_string* param_1, basic_string* param_2) {
        uchar uVar1;
        uchar uVar2;
        char cVar3;
        char cVar4;
        wchar16 wVar5;
        long lVar6;
        long lVar7;
        char* pcVar8;
        char* pcVar9;
        undefined8 uVar10;
        char* pcVar11;
        ulong uVar12;
        bool bVar13;
        ulong local_40[2];

        lVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        lVar7 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar6 == lVar7) {
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_40[0] = 0;
            local_40[1] = 0;
            pcVar11 = pcVar9;
            do {
                uVar12 = (ulong)pcVar11 & 4294967295;
                wVar5 = jag::stringtools::GetUTF8NextChar16(pcVar8, local_40);
                uVar2 = jag::stringtools::WideToCP1252(wVar5);
                wVar5 = jag::stringtools::GetUTF8NextChar16(pcVar9, local_40 + 1);
                uVar10 = jag::stringtools::WideToCP1252(wVar5);
                uVar1 = (uchar)uVar10;
                pcVar11 = (char*)(CONCAT71((int7)((ulong)uVar10 >> 8), (uVar1 == '\0') != (uVar2 == '\0')) ^ 1);
                bVar13 = false;
                if ((uVar2 != '\0') && (uVar1 != '\0')) {
                    cVar3 = CP1252Tools::ToLower(uVar2);
                    cVar4 = CP1252Tools::ToLower(uVar1);
                    bVar13 = cVar3 == cVar4;
                    pcVar11 = (char*)CONCAT71((int7)(uVar12 >> 8), (byte)uVar12 & bVar13);
                }
            } while (bVar13);
        } else {
            pcVar11 = (char*)0;
        }
        return pcVar11;
    }

    // 0x1002be8d0, 32 bytes, inline, placed by class name
    // StringTools::CheckedParseInt(int&, eastl::string const&)
    void StringTools::CheckedParseInt(int* param_1, basic_string* param_2) {
        CheckedParseInt(param_1, param_2, 10, true);
    }

} // namespace jag::oldscape::core::stringtools::general
