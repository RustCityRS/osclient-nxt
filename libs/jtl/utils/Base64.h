// libs/jtl/utils/Base64.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Base64 {
    public:
        bool DecodeString<Array<unsigned char, eastl::allocator>>(Array<unsigned char, eastl::allocator>&, char const*);
        bool DecodeString<Array<unsigned char, eastl::allocator>, eastl::fixed_substring<char>>(
            Array<unsigned char, eastl::allocator>&, eastl::fixed_substring<char> const&);
        bool DecodStringImpl<Array<unsigned char, eastl::allocator>, eastl::fixed_substring<char>>(
            unsigned int&, Array<unsigned char, eastl::allocator>&, eastl::fixed_substring<char> const&);
        bool DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>>(
            eastl::vector<unsigned char, BucketAllocatorEASTL>&, char const*);
        bool DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
            eastl::vector<unsigned char, BucketAllocatorEASTL>&, eastl::fixed_substring<char> const&);
        bool DecodStringImpl<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
            unsigned int&, eastl::vector<unsigned char, BucketAllocatorEASTL>&, eastl::fixed_substring<char> const&);
        DecodeChar(char);
        bool DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>&, char const*);
        bool DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                          eastl::fixed_substring<char>>(
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>&,
            eastl::fixed_substring<char> const&);
        bool DecodStringImpl<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                             eastl::fixed_substring<char>>(
            unsigned int&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>&,
            eastl::fixed_substring<char> const&);
        bool DecodeString<eastl::string, StringView>(eastl::string&, StringView const&);
        bool DecodeString<eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>, StringView>(
            eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>&, StringView const&);
        bool DecodeString<eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>, StringView>(
            eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>&, StringView const&);
        bool DecodStringImpl<eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>, StringView>(
            unsigned int&, eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>&, StringView const&);
        bool DecodStringImpl<eastl::string, StringView>(unsigned int&, eastl::string&, StringView const&);
        bool DecodStringImpl<eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>, StringView>(
            unsigned int&, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>&, StringView const&);
        bool DecodeString<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(
            Array<unsigned char, BucketAllocatorEASTL>&, eastl::string const&);
        bool DecodStringImpl<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(
            unsigned int&, Array<unsigned char, BucketAllocatorEASTL>&, eastl::string const&);
        Base64* Instance();
        Base64();
        void CleanInstance();
        void EncodeInner(eastl::string&, unsigned char*, unsigned long, char*);
        void Encode(eastl::string&, unsigned char*, unsigned long);
        void EncodeAlt(eastl::string&, unsigned char*, unsigned long);
        static /* 16 bytes */ m_instance;

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[136];
    };

    // 0x100049a60, 96 bytes, inline, placed by class name and debug map
    // bool Base64::DecodeString<Array<unsigned char, eastl::allocator> >(Array<unsigned char, eastl::allocator>&, char const*)
    bool Base64::DecodeString<Array<unsigned char, eastl::allocator>>(Array* param_1, char* param_2) {
        bool bVar1;
        fixed_substring<char> local_40[32];

        eastl::fixed_substring<char>::fixed_substring(local_40, param_2);
        bVar1 = DecodeString<Array<unsigned char, eastl::allocator>, eastl::fixed_substring<char>>(
            this, param_1, (fixed_substring*)local_40);
        eastl::fixed_substring<char>::~fixed_substring(local_40);
        return bVar1;
    }

    // 0x100049af0, 144 bytes, inline, placed by class name and debug map
    // bool Base64::DecodeString<Array<unsigned char, eastl::allocator>, eastl::fixed_substring<char> >(Array<unsigned char, eastl::allocator>&, eastl::fixed_substring<char> const&)
    bool Base64::DecodeString<Array<unsigned char, eastl::allocator>, eastl::fixed_substring<char>>(
        Array* param_1, fixed_substring* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        uint local_2c;

        iVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->clear();
        iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        param_1->set_max_size((long)(iVar3 >> 2), 0);
        local_2c = 0;
        bVar1 = DecodStringImpl<Array<unsigned char, eastl::allocator>, eastl::fixed_substring<char>>(this, &local_2c,
                                                                                                      param_1, param_2);
        if (bVar1) {
            param_1->set_max_size((ulong)local_2c, 3);
        }
        return bVar1;
    }

    // 0x100049b80, 496 bytes, inline, placed by class name and debug map
    // bool Base64::DecodStringImpl<Array<unsigned char, eastl::allocator>, eastl::fixed_substring<char> >(unsigned int&, Array<unsigned char, eastl::allocator>&, eastl::fixed_substring<char> const&)
    /* WARNING: Removing unreachable block (ram,4295269691) */
    /* bool Base64::DecodStringImpl<Array<unsigned char, eastl::allocator>,
   eastl::fixed_substring<char> >(unsigned int&, Array<unsigned char, eastl::allocator>&,
   eastl::fixed_substring<char> const&) */

    bool Base64::DecodStringImpl<Array<unsigned char, eastl::allocator>, eastl::fixed_substring<char>>(
        uint* param_1, Array* param_2, fixed_substring* param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        char* pcVar5;
        byte* pbVar6;
        long lVar7;
        ulong uVar8;
        ulong uVar9;
        uint local_3c;

        if (*param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      (char*)0);
        }
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            uVar9 = 0;
            do {
                pcVar5 = (char*)param_3->at(uVar9);
                iVar2 = DecodeChar(this, *pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_100049d51;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(uVar9 + 1) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 1);
                    uVar3 = DecodeChar(this, *pcVar5);
                    uVar8 = (ulong)uVar3;
                }
                if ((long)(uVar9 + 2) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 2);
                    local_3c = DecodeChar(this, *pcVar5);
                }
                iVar4 = -1;
                if ((long)(uVar9 + 3) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 3);
                    iVar4 = DecodeChar(this, *pcVar5);
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(uVar8 >> 4) | (byte)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_100049d51;
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(local_3c >> 2) | (byte)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_100049d51;
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)iVar4 | (byte)(local_3c << 6);
                uVar9 = uVar9 + 4;
            } while ((int)uVar9 < iVar1);
        }
        iVar2 = 2;
    LAB_100049d51:
        return iVar2 == 2;
    }

    // 0x1001db440, 96 bytes, inline, placed by class name
    // bool Base64::DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL> >(eastl::vector<unsigned char, BucketAllocatorEASTL>&, char const*)
    bool Base64::DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>>(vector* param_1, char* param_2) {
        bool bVar1;
        fixed_substring<char> local_40[32];

        eastl::fixed_substring<char>::fixed_substring(local_40, param_2);
        bVar1 = DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
            this, param_1, (fixed_substring*)local_40);
        eastl::fixed_substring<char>::~fixed_substring(local_40);
        return bVar1;
    }

    // 0x1001db6f0, 128 bytes, inline, placed by class name
    // bool Base64::DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char> >(eastl::vector<unsigned char, BucketAllocatorEASTL>&, eastl::fixed_substring<char> const&)
    bool Base64::DecodeString<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
        vector* param_1, fixed_substring* param_2) {
        bool bVar1;
        uint local_2c;

        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<unsigned char, BucketAllocatorEASTL>::resize((ulong)param_1);
        local_2c = 0;
        bVar1 = DecodStringImpl<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
            this, &local_2c, param_1, param_2);
        if (bVar1) {
            eastl::vector<unsigned char, BucketAllocatorEASTL>::resize((ulong)param_1);
        }
        return bVar1;
    }

    // 0x1001db8c0, 496 bytes, inline, placed by class name
    // bool Base64::DecodStringImpl<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char> >(unsigned int&, eastl::vector<unsigned char, BucketAllocatorEASTL>&, eastl::fixed_substring<char> const&)
    /* WARNING: Removing unreachable block (ram,4296915579) */
    /* bool Base64::DecodStringImpl<eastl::vector<unsigned char, BucketAllocatorEASTL>,
   eastl::fixed_substring<char> >(unsigned int&, eastl::vector<unsigned char,
   BucketAllocatorEASTL>&, eastl::fixed_substring<char> const&) */

    bool Base64::DecodStringImpl<eastl::vector<unsigned char, BucketAllocatorEASTL>, eastl::fixed_substring<char>>(
        uint* param_1, vector* param_2, fixed_substring* param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        char* pcVar5;
        byte* pbVar6;
        long lVar7;
        ulong uVar8;
        ulong uVar9;
        uint local_3c;

        if (*param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      (char*)0);
        }
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            uVar9 = 0;
            do {
                pcVar5 = (char*)param_3->at(uVar9);
                iVar2 = DecodeChar(this, *pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_1001dba91;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(uVar9 + 1) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 1);
                    uVar3 = DecodeChar(this, *pcVar5);
                    uVar8 = (ulong)uVar3;
                }
                if ((long)(uVar9 + 2) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 2);
                    local_3c = DecodeChar(this, *pcVar5);
                }
                iVar4 = -1;
                if ((long)(uVar9 + 3) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 3);
                    iVar4 = DecodeChar(this, *pcVar5);
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)eastl::vector<unsigned char, BucketAllocatorEASTL>::operator[](
                    (vector<unsigned char, BucketAllocatorEASTL>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(uVar8 >> 4) | (byte)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_1001dba91;
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)eastl::vector<unsigned char, BucketAllocatorEASTL>::operator[](
                    (vector<unsigned char, BucketAllocatorEASTL>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(local_3c >> 2) | (byte)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_1001dba91;
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)eastl::vector<unsigned char, BucketAllocatorEASTL>::operator[](
                    (vector<unsigned char, BucketAllocatorEASTL>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)iVar4 | (byte)(local_3c << 6);
                uVar9 = uVar9 + 4;
            } while ((int)uVar9 < iVar1);
        }
        iVar2 = 2;
    LAB_1001dba91:
        return iVar2 == 2;
    }

    // 0x1001dbc30, 32 bytes, inline, placed by class name
    // Base64::DecodeChar(char)
    undefined4 Base64::DecodeChar(char param_1) {
        undefined4* puVar1;

        if (param_1 < '\0') {
            return 4294967295;
        }
        puVar1 = (undefined4*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)&field_128, (long)param_1);
        return *puVar1;
    }

    // 0x1001e2fc0, 96 bytes, inline, placed by class name
    // bool Base64::DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> > >(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >&, char const*)
    /* bool Base64::DecodeString<std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> > >(std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> >&, char const*) */

    bool Base64::DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(
        basic_string* param_1, char* param_2) {
        bool bVar1;
        fixed_substring<char> local_40[32];

        eastl::fixed_substring<char>::fixed_substring(local_40, param_2);
        bVar1 = DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                             eastl::fixed_substring<char>>(this, param_1, (fixed_substring*)local_40);
        eastl::fixed_substring<char>::~fixed_substring(local_40);
        return bVar1;
    }

    // 0x1001e3020, 128 bytes, inline, placed by class name
    // bool Base64::DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >, eastl::fixed_substring<char> >(std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >&, eastl::fixed_substring<char> const&)
    /* bool Base64::DecodeString<std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> >, eastl::fixed_substring<char> >(std::basic_string<char,
   std::char_traits<char>, BucketAllocatorSTL<char> >&, eastl::fixed_substring<char> const&) */

    bool Base64::DecodeString<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                              eastl::fixed_substring<char>>(basic_string* param_1, fixed_substring* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        uint local_2c;

        iVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->clear();
        iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        param_1->resize((long)(iVar3 >> 2));
        local_2c = 0;
        bVar1 = DecodStringImpl<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                eastl::fixed_substring<char>>(this, &local_2c, param_1, param_2);
        if (bVar1) {
            param_1->resize((ulong)local_2c);
        }
        return bVar1;
    }

    // 0x1001e3100, 496 bytes, inline, placed by class name
    // bool Base64::DecodStringImpl<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >, eastl::fixed_substring<char> >(unsigned int&, std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >&, eastl::fixed_substring<char> const&)
    /* WARNING: Removing unreachable block (ram,4296946363) */
    /* bool Base64::DecodStringImpl<std::basic_string<char, std::char_traits<char>,
   BucketAllocatorSTL<char> >, eastl::fixed_substring<char> >(unsigned int&,
   std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> >&,
   eastl::fixed_substring<char> const&) */

    bool Base64::DecodStringImpl<std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>,
                                 eastl::fixed_substring<char>>(uint* param_1, basic_string* param_2,
                                                               fixed_substring* param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        char* pcVar5;
        byte* pbVar6;
        long lVar7;
        ulong uVar8;
        ulong uVar9;
        uint local_3c;

        if (*param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      (char*)0);
        }
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            uVar9 = 0;
            do {
                pcVar5 = (char*)param_3->at(uVar9);
                iVar2 = DecodeChar(this, *pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_1001e32d1;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(uVar9 + 1) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 1);
                    uVar3 = DecodeChar(this, *pcVar5);
                    uVar8 = (ulong)uVar3;
                }
                if ((long)(uVar9 + 2) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 2);
                    local_3c = DecodeChar(this, *pcVar5);
                }
                iVar4 = -1;
                if ((long)(uVar9 + 3) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 3);
                    iVar4 = DecodeChar(this, *pcVar5);
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator[](
                    (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(uVar8 >> 4) | (byte)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_1001e32d1;
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator[](
                    (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(local_3c >> 2) | (byte)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_1001e32d1;
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::operator[](
                    (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)iVar4 | (byte)(local_3c << 6);
                uVar9 = uVar9 + 4;
            } while ((int)uVar9 < iVar1);
        }
        iVar2 = 2;
    LAB_1001e32d1:
        return iVar2 == 2;
    }

    // 0x1006e0d30, 128 bytes, inline, placed by class name
    // bool Base64::DecodeString<eastl::string, StringView>(eastl::string&, StringView const&)
    bool Base64::DecodeString<eastl::string, StringView>(basic_string* param_1, StringView* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        uint local_2c;

        iVar2 = param_2->HeapBeginPtr();
        eastl::string::clear();
        iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        param_1->resize((long)(iVar3 >> 2));
        local_2c = 0;
        bVar1 = DecodStringImpl<eastl::string, StringView>(this, &local_2c, param_1, param_2);
        if (bVar1) {
            param_1->resize((ulong)local_2c);
        }
        return bVar1;
    }

    // 0x1006e0f20, 128 bytes, inline, placed by class name
    // bool Base64::DecodeString<eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>, StringView>(eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>&, StringView const&)
    bool Base64::DecodeString<eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>, StringView>(
        fixed_vector* param_1, StringView* param_2) {
        bool bVar1;
        uint local_2c;

        param_2->HeapBeginPtr();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<unsigned char,
                      eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::resize((ulong)
                                                                                                               param_1);
        local_2c = 0;
        bVar1 = DecodStringImpl<eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>, StringView>(
            this, &local_2c, param_1, param_2);
        if (bVar1) {
            eastl::vector<unsigned char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true,
                                                                       eastl::allocator>>::resize((ulong)param_1);
        }
        return bVar1;
    }

    // 0x1006e6fa0, 128 bytes, inline, placed by class name
    // bool Base64::DecodeString<eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>, StringView>(eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>&, StringView const&)
    bool Base64::DecodeString<eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>, StringView>(
        fixed_vector* param_1, StringView* param_2) {
        bool bVar1;
        uint local_2c;

        param_2->HeapBeginPtr();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<unsigned char,
                      eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::resize((ulong)
                                                                                                               param_1);
        local_2c = 0;
        bVar1 = DecodStringImpl<eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>, StringView>(
            this, &local_2c, param_1, param_2);
        if (bVar1) {
            eastl::vector<unsigned char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                       eastl::allocator>>::resize((ulong)param_1);
        }
        return bVar1;
    }

    // 0x1006e7340, 496 bytes, inline, placed by class name
    // bool Base64::DecodStringImpl<eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>, StringView>(unsigned int&, eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>&, StringView const&)
    /* WARNING: Removing unreachable block (ram,4302206203) */
    /* bool Base64::DecodStringImpl<eastl::fixed_vector<unsigned char, 128ul, true,
   eastl::allocator>, StringView>(unsigned int&, eastl::fixed_vector<unsigned char, 128ul,
   true, eastl::allocator>&, StringView const&) */

    bool Base64::DecodStringImpl<eastl::fixed_vector<unsigned char, 128ul, true, eastl::allocator>, StringView>(
        uint* param_1, fixed_vector* param_2, StringView* param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        char* pcVar5;
        byte* pbVar6;
        long lVar7;
        ulong uVar8;
        ulong uVar9;
        uint local_3c;

        if (*param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      (char*)0);
        }
        iVar1 = param_3->HeapBeginPtr();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            uVar9 = 0;
            do {
                pcVar5 = (char*)param_3->at(uVar9);
                iVar2 = DecodeChar(this, *pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_1006e7511;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(uVar9 + 1) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 1);
                    uVar3 = DecodeChar(this, *pcVar5);
                    uVar8 = (ulong)uVar3;
                }
                if ((long)(uVar9 + 2) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 2);
                    local_3c = DecodeChar(this, *pcVar5);
                }
                iVar4 = -1;
                if ((long)(uVar9 + 3) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 3);
                    iVar4 = DecodeChar(this, *pcVar5);
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 =
                    (byte*)eastl::vector<unsigned char,
                                         eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>*)param_2,
                        (ulong)uVar3);
                *pbVar6 = (byte)(uVar8 >> 4) | (byte)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_1006e7511;
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 =
                    (byte*)eastl::vector<unsigned char,
                                         eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>*)param_2,
                        (ulong)uVar3);
                *pbVar6 = (byte)(local_3c >> 2) | (byte)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_1006e7511;
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 =
                    (byte*)eastl::vector<unsigned char,
                                         eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>*)param_2,
                        (ulong)uVar3);
                *pbVar6 = (byte)iVar4 | (byte)(local_3c << 6);
                uVar9 = uVar9 + 4;
            } while ((int)uVar9 < iVar1);
        }
        iVar2 = 2;
    LAB_1006e7511:
        return iVar2 == 2;
    }

    // 0x100714240, 496 bytes, inline, placed by class name
    // bool Base64::DecodStringImpl<eastl::string, StringView>(unsigned int&, eastl::string&, StringView const&)
    /* WARNING: Removing unreachable block (ram,4302390267) */
    /* bool Base64::DecodStringImpl<eastl::string,
   StringView>(unsigned int&, eastl::string&, StringView
   const&) */

    bool Base64::DecodStringImpl<eastl::string, StringView>(uint* param_1, basic_string* param_2, StringView* param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        char* pcVar5;
        byte* pbVar6;
        long lVar7;
        ulong uVar8;
        ulong uVar9;
        uint local_3c;

        if (*param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      (char*)0);
        }
        iVar1 = param_3->HeapBeginPtr();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            uVar9 = 0;
            do {
                pcVar5 = (char*)param_3->at(uVar9);
                iVar2 = DecodeChar(this, *pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_100714411;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(uVar9 + 1) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 1);
                    uVar3 = DecodeChar(this, *pcVar5);
                    uVar8 = (ulong)uVar3;
                }
                if ((long)(uVar9 + 2) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 2);
                    local_3c = DecodeChar(this, *pcVar5);
                }
                iVar4 = -1;
                if ((long)(uVar9 + 3) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 3);
                    iVar4 = DecodeChar(this, *pcVar5);
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)eastl::string::operator[]((eastl::string*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(uVar8 >> 4) | (byte)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_100714411;
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)eastl::string::operator[]((eastl::string*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(local_3c >> 2) | (byte)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_100714411;
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)eastl::string::operator[]((eastl::string*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)iVar4 | (byte)(local_3c << 6);
                uVar9 = uVar9 + 4;
            } while ((int)uVar9 < iVar1);
        }
        iVar2 = 2;
    LAB_100714411:
        return iVar2 == 2;
    }

    // 0x1007145a0, 496 bytes, inline, placed by class name
    // bool Base64::DecodStringImpl<eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>, StringView>(unsigned int&, eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>&, StringView const&)
    /* WARNING: Removing unreachable block (ram,4302391131) */
    /* bool Base64::DecodStringImpl<eastl::fixed_vector<unsigned char, 512ul, true,
   eastl::allocator>, StringView>(unsigned int&, eastl::fixed_vector<unsigned char, 512ul,
   true, eastl::allocator>&, StringView const&) */

    bool Base64::DecodStringImpl<eastl::fixed_vector<unsigned char, 512ul, true, eastl::allocator>, StringView>(
        uint* param_1, fixed_vector* param_2, StringView* param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        char* pcVar5;
        byte* pbVar6;
        long lVar7;
        ulong uVar8;
        ulong uVar9;
        uint local_3c;

        if (*param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      (char*)0);
        }
        iVar1 = param_3->HeapBeginPtr();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            uVar9 = 0;
            do {
                pcVar5 = (char*)param_3->at(uVar9);
                iVar2 = DecodeChar(this, *pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_100714771;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(uVar9 + 1) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 1);
                    uVar3 = DecodeChar(this, *pcVar5);
                    uVar8 = (ulong)uVar3;
                }
                if ((long)(uVar9 + 2) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 2);
                    local_3c = DecodeChar(this, *pcVar5);
                }
                iVar4 = -1;
                if ((long)(uVar9 + 3) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 3);
                    iVar4 = DecodeChar(this, *pcVar5);
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 =
                    (byte*)eastl::vector<unsigned char,
                                         eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)param_2,
                        (ulong)uVar3);
                *pbVar6 = (byte)(uVar8 >> 4) | (byte)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_100714771;
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 =
                    (byte*)eastl::vector<unsigned char,
                                         eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)param_2,
                        (ulong)uVar3);
                *pbVar6 = (byte)(local_3c >> 2) | (byte)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_100714771;
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 =
                    (byte*)eastl::vector<unsigned char,
                                         eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<unsigned char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)param_2,
                        (ulong)uVar3);
                *pbVar6 = (byte)iVar4 | (byte)(local_3c << 6);
                uVar9 = uVar9 + 4;
            } while ((int)uVar9 < iVar1);
        }
        iVar2 = 2;
    LAB_100714771:
        return iVar2 == 2;
    }

    // 0x100891b00, 144 bytes, inline, placed by class name
    // bool Base64::DecodeString<Array<unsigned char, BucketAllocatorEASTL>, eastl::string >(Array<unsigned char, BucketAllocatorEASTL>&, eastl::string const&)
    bool Base64::DecodeString<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(Array* param_1,
                                                                                         basic_string* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        uint local_2c;

        iVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->clear();
        iVar3 = iVar2 * 3 + 3;
        if (-1 < iVar2 * 3) {
            iVar3 = iVar2 * 3;
        }
        param_1->set_max_size((long)(iVar3 >> 2), 0);
        local_2c = 0;
        bVar1 = DecodStringImpl<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(this, &local_2c, param_1,
                                                                                           param_2);
        if (bVar1) {
            param_1->set_max_size((ulong)local_2c, 3);
        }
        return bVar1;
    }

    // 0x10089d770, 496 bytes, inline, placed by class name
    // bool Base64::DecodStringImpl<Array<unsigned char, BucketAllocatorEASTL>, eastl::string >(unsigned int&, Array<unsigned char, BucketAllocatorEASTL>&, eastl::string const&)
    /* WARNING: Removing unreachable block (ram,4304001323) */
    /* bool Base64::DecodStringImpl<Array<unsigned char, BucketAllocatorEASTL>,
   eastl::string >(unsigned int&, Array<unsigned char,
   BucketAllocatorEASTL>&, eastl::string const&) */

    bool Base64::DecodStringImpl<Array<unsigned char, BucketAllocatorEASTL>, eastl::string>(uint* param_1,
                                                                                            Array* param_2,
                                                                                            basic_string* param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        char* pcVar5;
        byte* pbVar6;
        long lVar7;
        ulong uVar8;
        ulong uVar9;
        uint local_3c;

        if (*param_1 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexOut == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/utils/Base64.h", 60,
                      (char*)0);
        }
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (0 < iVar1) {
            lVar7 = (long)iVar1;
            uVar9 = 0;
            do {
                pcVar5 = (char*)param_3->at(uVar9);
                iVar2 = DecodeChar(this, *pcVar5);
                if (iVar2 == -1) {
                    iVar2 = 1;
                    goto LAB_10089d941;
                }
                local_3c = 4294967295;
                uVar8 = 4294967295;
                if ((long)(uVar9 + 1) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 1);
                    uVar3 = DecodeChar(this, *pcVar5);
                    uVar8 = (ulong)uVar3;
                }
                if ((long)(uVar9 + 2) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 2);
                    local_3c = DecodeChar(this, *pcVar5);
                }
                iVar4 = -1;
                if ((long)(uVar9 + 3) < lVar7) {
                    pcVar5 = (char*)param_3->at(uVar9 + 3);
                    iVar4 = DecodeChar(this, *pcVar5);
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(uVar8 >> 4) | (byte)(iVar2 << 2);
                iVar2 = 2;
                if (local_3c == 4294967295)
                    goto LAB_10089d941;
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)(local_3c >> 2) | (byte)((int)uVar8 << 4);
                if (iVar4 == -1) {
                    iVar2 = 2;
                    goto LAB_10089d941;
                }
                uVar3 = *param_1;
                *param_1 = uVar3 + 1;
                pbVar6 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)param_2, (ulong)uVar3);
                *pbVar6 = (byte)iVar4 | (byte)(local_3c << 6);
                uVar9 = uVar9 + 4;
            } while ((int)uVar9 < iVar1);
        }
        iVar2 = 2;
    LAB_10089d941:
        return iVar2 == 2;
    }

} // namespace jag

namespace jag::oldscape::option {
    // 0x10004a330, 64 bytes, inline, placed by debug map only (low confidence)
    // OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void OptionEnumValueSerialiser<hal::Haptics::ImpactStrength>::StringToValue(fixed_string* param_1) {
        int local_14;
        int local_10;
        bool local_9;

        FromString<eastl::fixed_string<char, 64, true, eastl::allocator>, int>(param_1, &local_10, 10);
        local_9 = IsValidEnumValue<ChatTimestampMode>(local_10);
        local_14 = local_10;
        std::make_tuple<bool const&, hal::Haptics::ImpactStrength>(&local_9, (ImpactStrength*)&local_14);
    }

} // namespace jag::oldscape::option
