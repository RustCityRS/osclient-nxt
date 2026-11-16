// libs/oldscape/rs2lib/social/DisplayNameTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::social {
    class DisplayNameTools {
    public:
        DisplayNameTools* ToBaseDisplayName(eastl::string const&, NameSpace);
        char GetMaxLength(NameSpace);
        byte IsValidAddition(eastl::string const&, char16_t, NameSpace);
        byte IsValidChar(char16_t);
        IsSpace(char16_t);
        void IsValidAddition(eastl::string const&, char16_t);
        IsValidNewNameChar(char16_t);
        ulong IsSystemChar(char16_t);
        IsValidDisplayName(eastl::string const&, NameSpace);
        bool IsValidBase(eastl::string const&, bool, NameSpace);
        void IsValidDisplayName(eastl::string const&);
        IsValidNewDisplayName(eastl::string const&, bool, NameSpace);
        void IsValidNewDisplayName(eastl::string const&, bool);
        void IsValidNewDisplayName(eastl::string const&, NameSpace);
        void IsValidNewDisplayName(eastl::string const&);
        bool IsSystemGeneratedDisplayName(eastl::string const&, NameSpace);
        void IsSystemGeneratedDisplayName(eastl::string const&);
        int ToBase(char16_t);
        DisplayNameTools* ToBaseDisplayName(eastl::string const&);
        int GetNameSpaceWithLongestAllowedName();
        ulong BaseEqual(eastl::string const&, eastl::string const&, NameSpace);
        void BaseEqual(eastl::string const&, eastl::string const&);
        DisplayNameTools* SanitiseUnknownDisplayName(eastl::string const&);
        static /* 106 bytes */ ALLOWED;          // initialised in its definition
        static /* 6 bytes */ SYSTEM_RESERVED;    // = { 91, 93, 35, 0, 0, 0 }
        static /* 8 bytes */ m_longestNamespace; // = 4294967096

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100d3ff40, 106 bytes, __const
    DisplayNameTools::ALLOWED = {
        32,  0, 160, 0, 95,  0, 45,  0, 224, 0, 225, 0, 226, 0, 228, 0, 227, 0, 192, 0, 193, 0, 194, 0, 196, 0, 195, 0,
        232, 0, 233, 0, 234, 0, 235, 0, 200, 0, 201, 0, 202, 0, 203, 0, 237, 0, 238, 0, 239, 0, 205, 0, 206, 0, 207, 0,
        242, 0, 243, 0, 244, 0, 246, 0, 245, 0, 210, 0, 211, 0, 212, 0, 214, 0, 213, 0, 249, 0, 250, 0, 251, 0, 252, 0,
        217, 0, 218, 0, 219, 0, 220, 0, 231, 0, 199, 0, 255, 0, 120, 1, 241, 0, 209, 0, 223, 0,
    };

    // 0x100d3ffaa, 6 bytes, __const
    DisplayNameTools::SYSTEM_RESERVED = {91, 93, 35, 0, 0, 0};

    // 0x100f37a70, 8 bytes, __data
    DisplayNameTools::m_longestNamespace = 4294967096;

    // 0x100258ee0, 528 bytes, placed by class name and debug map
    // DisplayNameTools::ToBaseDisplayName(eastl::string const&, NameSpace)
    DisplayNameTools* DisplayNameTools::ToBaseDisplayName(basic_string* param_1, undefined4 param_3) {
        char cVar2;
        wchar16 wVar3;
        char* pcVar4;
        ulong uVar5;
        ulong uVar6;
        char* pcVar7;
        ulong local_60[4];
        ulong local_38;

        if (eastl::operator==(param_1, (value_type*)"")) {
            new (local_60) eastl::allocator("EASTL basic_string");
            new (this) eastl::string("", local_60);
            return this;
        }
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = 0;
        if (*pcVar4 != '\0') {
            wVar3 = stringtools::GetUTF8NextChar16(pcVar4, local_60);
            cVar2 = IsSpace(wVar3);
            if (cVar2 != '\0') {
                do {
                    uVar5 = local_60[0];
                    if (pcVar4[local_60[0]] == '\0')
                        break;
                    wVar3 = stringtools::GetUTF8NextChar16(pcVar4, local_60);
                    cVar2 = IsSpace(wVar3);
                } while (cVar2 != '\0');
                goto LAB_100258fa6;
            }
        }
        uVar5 = 0;
    LAB_100258fa6:
        pcVar7 = pcVar4 + uVar5;
        local_60[0] = 0;
        if (pcVar4[uVar5] == '\0') {
            uVar5 = 0;
        } else {
            uVar5 = 0;
            do {
                wVar3 = stringtools::GetUTF8NextChar16(pcVar7, local_60);
                cVar2 = IsSpace(wVar3);
                if (cVar2 == '\0') {
                    uVar5 = local_60[0];
                }
            } while (pcVar7[local_60[0]] != '\0');
        }
        new (local_60) eastl::string();
        local_60->reserve(uVar5);
        local_38 = 0;
        if (uVar5 != 0) {
            do {
                wVar3 = stringtools::GetUTF8NextChar16(pcVar7, &local_38);
                cVar2 = IsValidChar(wVar3);
                if ((cVar2 != '\0') && (cVar2 = ToBase(wVar3), cVar2 != '\0')) {
                    eastl::string::operator+=((eastl::string*)local_60, cVar2);
                }
            } while (local_38 < uVar5);
        }
        uVar5 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if ((uVar5 == 0) || (uVar6 = GetMaxLength(param_3), uVar6 < uVar5)) {
            new (&local_38) eastl::allocator("EASTL basic_string");
            new (this) eastl::string("", (allocator*)&local_38);
        } else {
            new (this) eastl::string(local_60);
        }
        local_60->~basic_string();
        return this;
    }

    // 0x1002592f0, 32 bytes, placed by class name and debug map
    // DisplayNameTools::GetMaxLength(NameSpace)
    char DisplayNameTools::GetMaxLength(int param_1) {
        return (param_1 == 5) * '\b' + '\f';
    }

    // 0x100259310, 128 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidAddition(eastl::string const&, char16_t, NameSpace)
    byte DisplayNameTools::IsValidAddition(basic_string* param_1, wchar16 param_2, undefined4 param_3) {
        bool bVar2;
        char* pcVar4;
        ulong uVar5;
        ulong uVar6;

        if ((IsValidChar(param_2) != '\0') && (bVar2 = eastl::operator==(param_1, (value_type*)""), !bVar2)) {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            uVar5 = stringtools::GetUTF8StringWidth(pcVar4, uVar5);
            uVar6 = GetMaxLength(param_3);
            if (uVar5 < uVar6) {
                return IsSpace(param_2) ^ 1 | uVar5 != 0;
            }
        }
        return 0;
    }

    // 0x100259390, 128 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidChar(char16_t)
    byte DisplayNameTools::IsValidChar(wchar16 param_1) {
        char* pcVar1;
        char cVar2;
        byte bVar3;
        long lVar5;
        int iVar6;
        undefined6 in_register_0000003a;
        bool bVar7;

        iVar6 = (int)CONCAT62(in_register_0000003a, param_1);
        if (iscntrl(iVar6) == 0) {
            cVar2 = core::stringtools::general::StringTools::IsASCIIAlphaNumeric(param_1);
            bVar3 = 1;
            if (cVar2 == '\0') {
                lVar5 = 0;
                do {
                    if (*(wchar16*)((long)&ALLOWED + lVar5) == param_1) {
                        return 1;
                    }
                    lVar5 = lVar5 + 2;
                } while (lVar5 != 106);
                if (param_1 == L'[') {
                    bVar7 = false;
                } else {
                    lVar5 = 0;
                    do {
                        bVar7 = lVar5 == 2;
                        if (bVar7)
                            break;
                        pcVar1 = &DAT_100d3ffab + lVar5;
                        lVar5 = lVar5 + 1;
                    } while (iVar6 != *pcVar1);
                }
                bVar3 = bVar7 ^ 1;
            }
        } else {
            bVar3 = 0;
        }
        return bVar3;
    }

    // 0x100259410, 64 bytes, placed by class name and debug map
    // DisplayNameTools::IsSpace(char16_t)
    undefined8 DisplayNameTools::IsSpace(wchar16 param_1) {
        if ((((ushort)((ushort)param_1 - 32) < 64) &&
             ((9223372036854784001U >> ((ulong)((ushort)param_1 - 32 & 65535) & 63) & 1) != 0)) ||
            (param_1 == L'\xa0')) {
            return 1;
        }
        return 0;
    }

    // 0x100259450, 16 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidAddition(eastl::string const&, char16_t)
    void DisplayNameTools::IsValidAddition(basic_string* param_1, wchar16 param_2) {
        IsValidAddition(param_1, param_2, 4294967096);
    }

    // 0x100259470, 96 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidNewNameChar(char16_t)
    undefined8 DisplayNameTools::IsValidNewNameChar(wchar16 param_1) {
        uint uVar3;
        int iVar4;
        undefined6 in_register_0000003a;

        iVar4 = (int)CONCAT62(in_register_0000003a, param_1);
        if (iscntrl(iVar4) == 0) {
            if (core::stringtools::general::StringTools::IsASCIIAlphaNumeric(param_1) != '\0') {
                return 1;
            }
            uVar3 = iVar4 - 32;
            if (((ushort)uVar3 < 64) && ((9223372036854784001U >> ((ulong)(uVar3 & 65535) & 63) & 1) != 0)) {
                return 1;
            }
            if (param_1 == L'\xa0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x1002594d0, 64 bytes, placed by class name and debug map
    // DisplayNameTools::IsSystemChar(char16_t)
    ulong DisplayNameTools::IsSystemChar(wchar16 param_1) {
        char* pcVar1;
        ulong in_RAX;
        long lVar2;
        undefined2 in_register_0000003a;

        if (param_1 == L'[') {
            in_RAX = 0;
        } else {
            lVar2 = 0;
            do {
                in_RAX = CONCAT71((int7)(in_RAX >> 8), lVar2 == 2);
                if (lVar2 == 2)
                    break;
                pcVar1 = &DAT_100d3ffab + lVar2;
                lVar2 = lVar2 + 1;
            } while (CONCAT22(in_register_0000003a, param_1) != (int)*pcVar1);
        }
        return in_RAX ^ 1;
    }

    // 0x100259510, 112 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidDisplayName(eastl::string const&, NameSpace)
    undefined8 DisplayNameTools::IsValidDisplayName(undefined8 param_1, undefined4 param_2) {
        char cVar1;
        wchar16 wVar2;
        char* pcVar3;
        ulong local_20;

        cVar1 = IsValidBase(param_1, 1, param_2);
        if (cVar1 != '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_20 = 0;
            do {
                if (pcVar3[local_20] == '\0') {
                    return 1;
                }
                wVar2 = stringtools::GetUTF8NextChar16(pcVar3, &local_20);
                cVar1 = IsValidChar(wVar2);
            } while (cVar1 != '\0');
        }
        return 0;
    }

    // 0x100259580, 368 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidBase(eastl::string const&, bool, NameSpace)
    bool DisplayNameTools::IsValidBase(basic_string* param_1, char param_2, undefined4 param_3) {
        bool bVar1;
        char cVar2;
        char cVar3;
        wchar16 wVar4;
        char* pcVar5;
        ulong uVar6;
        long lVar8;
        int iVar9;
        basic_string local_58[32];
        ulong local_38;

        bVar1 = eastl::operator==(param_1, (value_type*)"");
        if (bVar1) {
            return false;
        }
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar6 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar6 = stringtools::GetUTF8StringWidth(pcVar5, uVar6);
        if (uVar6 == 0) {
            return false;
        }
        if (GetMaxLength(param_3) < uVar6) {
            return false;
        }
        ToBaseDisplayName((DisplayNameTools*)local_58, param_1, param_3);
        bVar1 = eastl::operator==(local_58, (value_type*)"");
        if ((!bVar1) && (lVar8 = eastl::basic_string<
                             char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size(),
                         lVar8 != 0)) {
            pcVar5 = (char*)eastl::string::operator[]((eastl::string*)local_58, 0);
            cVar2 = IsSpace((short)*pcVar5);
            if (cVar2 == '\0') {
                lVar8 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pcVar5 = (char*)eastl::string::operator[]((eastl::string*)local_58, lVar8 - 1);
                cVar2 = IsSpace((short)*pcVar5);
                bVar1 = false;
                if (cVar2 != '\0')
                    goto LAB_1002596c4;
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_38 = 0;
                iVar9 = 0;
                do {
                    cVar2 = pcVar5[local_38];
                    if (cVar2 == '\0')
                        break;
                    wVar4 = stringtools::GetUTF8NextChar16(pcVar5, &local_38);
                    cVar3 = IsSpace(wVar4);
                    iVar9 = iVar9 + 1;
                    if (cVar3 == '\0') {
                        iVar9 = 0;
                    }
                } while ((iVar9 < 2) || (param_2 != '\0'));
                if (cVar2 == '\0') {
                    bVar1 = iVar9 < 1;
                    goto LAB_1002596c4;
                }
            }
        }
        bVar1 = false;
    LAB_1002596c4:
        local_58->~basic_string();
        return bVar1;
    }

    // 0x1002596f0, 16 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidDisplayName(eastl::string const&)
    void DisplayNameTools::IsValidDisplayName(basic_string* param_1) {
        IsValidDisplayName(param_1, 4294967096);
    }

    // 0x100259700, 96 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidNewDisplayName(eastl::string const&, bool, NameSpace)
    undefined8 DisplayNameTools::IsValidNewDisplayName() {
        char cVar1;
        wchar16 wVar2;
        char* pcVar3;
        ulong local_20;

        cVar1 = IsValidBase();
        if (cVar1 != '\0') {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_20 = 0;
            do {
                if (pcVar3[local_20] == '\0') {
                    return 1;
                }
                wVar2 = stringtools::GetUTF8NextChar16(pcVar3, &local_20);
                cVar1 = IsValidNewNameChar(wVar2);
            } while (cVar1 != '\0');
        }
        return 0;
    }

    // 0x100259760, 16 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidNewDisplayName(eastl::string const&, bool)
    void DisplayNameTools::IsValidNewDisplayName(basic_string* param_1, bool param_2) {
        IsValidNewDisplayName(param_1, param_2, 4294967096);
    }

    // 0x100259770, 16 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidNewDisplayName(eastl::string const&, NameSpace)
    void DisplayNameTools::IsValidNewDisplayName(undefined8 param_1, undefined4 param_2) {
        IsValidNewDisplayName(param_1, 0, param_2);
    }

    // 0x100259780, 32 bytes, placed by class name and debug map
    // DisplayNameTools::IsValidNewDisplayName(eastl::string const&)
    void DisplayNameTools::IsValidNewDisplayName(basic_string* param_1) {
        IsValidNewDisplayName(param_1, 0, 4294967096);
    }

    // 0x1002597a0, 112 bytes, placed by class name and debug map
    // DisplayNameTools::IsSystemGeneratedDisplayName(eastl::string const&, NameSpace)
    bool DisplayNameTools::IsSystemGeneratedDisplayName() {
        char cVar1;
        char cVar2;
        wchar16 wVar3;
        char* pcVar4;
        bool bVar5;
        ulong local_28;

        cVar1 = IsValidDisplayName();
        if (cVar1 == '\0') {
            bVar5 = false;
        } else {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_28 = 0;
            do {
                cVar1 = pcVar4[local_28];
                if (cVar1 == '\0')
                    break;
                wVar3 = stringtools::GetUTF8NextChar16(pcVar4, &local_28);
                cVar2 = IsSystemChar(wVar3);
            } while (cVar2 == '\0');
            bVar5 = cVar1 != '\0';
        }
        return bVar5;
    }

    // 0x100259810, 16 bytes, placed by class name and debug map
    // DisplayNameTools::IsSystemGeneratedDisplayName(eastl::string const&)
    void DisplayNameTools::IsSystemGeneratedDisplayName(basic_string* param_1) {
        IsSystemGeneratedDisplayName(param_1, 4294967096);
    }

    // 0x100259820, 1488 bytes, placed by class name and debug map
    // DisplayNameTools::ToBase(char16_t)
    int DisplayNameTools::ToBase(wchar16 param_1) {
        char cVar1;

        cVar1 = '_';
        switch (param_1) {
        case L' ':
        case L'-':
        case L'_':
        case L'\xa0':
            break;
        default:
            cVar1 = ::tolower((int)(char)param_1);
            break;
        case L'#':
        case L'[':
        case L']':
            cVar1 = (char)param_1;
            break;
        case L'À':
        case L'Á':
        case L'Â':
        case L'Ã':
        case L'Ä':
        case L'à':
        case L'á':
        case L'â':
        case L'ã':
        case L'ä':
            cVar1 = 'a';
            break;
        case L'Ç':
        case L'ç':
            cVar1 = 'c';
            break;
        case L'È':
        case L'É':
        case L'Ê':
        case L'Ë':
        case L'è':
        case L'é':
        case L'ê':
        case L'ë':
            cVar1 = 'e';
            break;
        case L'Í':
        case L'Î':
        case L'Ï':
        case L'í':
        case L'î':
        case L'ï':
            cVar1 = 'i';
            break;
        case L'Ñ':
        case L'ñ':
            cVar1 = 'n';
            break;
        case L'Ò':
        case L'Ó':
        case L'Ô':
        case L'Õ':
        case L'Ö':
        case L'ò':
        case L'ó':
        case L'ô':
        case L'õ':
        case L'ö':
            cVar1 = 'o';
            break;
        case L'Ù':
        case L'Ú':
        case L'Û':
        case L'Ü':
        case L'ù':
        case L'ú':
        case L'û':
        case L'ü':
            cVar1 = 'u';
            break;
        case L'ß':
            cVar1 = 'b';
            break;
        case L'ÿ':
        case L'Ÿ':
            cVar1 = 'y';
        }
        return (int)cVar1;
    }

    // 0x100259df0, 32 bytes, placed by class name and debug map
    // DisplayNameTools::ToBaseDisplayName(eastl::string const&)
    DisplayNameTools* DisplayNameTools::ToBaseDisplayName(basic_string* param_1) {
        ToBaseDisplayName(this, param_1, 4294967096);
        return this;
    }

    // 0x100259e10, 144 bytes, placed by class name and debug map
    // DisplayNameTools::GetNameSpaceWithLongestAllowedName()
    int DisplayNameTools::GetNameSpaceWithLongestAllowedName() {
        int iVar1;
        undefined* puVar2;
        int iVar3;
        ulong uVar4;
        long lVar6;

        puVar2 = PTR_values_100ee6b58;
        if (m_longestNamespace == -200) {
            lVar6 = 0;
            do {
                iVar3 = m_longestNamespace;
                iVar1 = *(int*)(puVar2 + lVar6);
                if (m_longestNamespace == -200) {
                LAB_100259e40:
                    m_longestNamespace = iVar1;
                } else {
                    uVar4 = GetMaxLength(iVar1);
                    if (GetMaxLength(iVar3) < uVar4)
                        goto LAB_100259e40;
                }
                lVar6 = lVar6 + 4;
            } while (lVar6 != 36);
        }
        return m_longestNamespace;
    }

    // 0x100259ea0, 128 bytes, placed by class name and debug map
    // DisplayNameTools::BaseEqual(eastl::string const&, eastl::string const&, NameSpace)
    ulong DisplayNameTools::BaseEqual(undefined8 param_1, undefined8 param_2, undefined4 param_3) {
        bool bVar1;
        undefined7 extraout_var;
        DisplayNameTools local_58[32];
        DisplayNameTools local_38[32];

        ToBaseDisplayName(local_58, param_1);
        ToBaseDisplayName(local_38, param_2, param_3);
        bVar1 = eastl::operator==((basic_string*)local_58, (basic_string*)local_38);
        local_38->~basic_string();
        local_58->~basic_string();
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x100259f20, 16 bytes, placed by class name and debug map
    // DisplayNameTools::BaseEqual(eastl::string const&, eastl::string const&)
    void DisplayNameTools::BaseEqual(basic_string* param_1, basic_string* param_2) {
        BaseEqual(param_1, param_2, 4294967096);
    }

    // 0x100259f30, 112 bytes, placed by class name and debug map
    // DisplayNameTools::SanitiseUnknownDisplayName(eastl::string const&)
    DisplayNameTools* DisplayNameTools::SanitiseUnknownDisplayName(basic_string* param_1) {
        char* pcVar2;
        allocator local_20[8];

        if ((eastl::basic_string<
                 char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() == '\0') &&
            (pcVar2 = (char*)eastl::string::operator[]((eastl::string*)param_1, 0), *pcVar2 != '#')) {
            new (this) eastl::string(param_1);
            return this;
        }
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("", local_20);
        return this;
    }

} // namespace jag::oldscape::rs2lib::social

// 0x100259460, 16 bytes, inline, placed by debug map only (low confidence)
// iscntrl(int)
void iscntrl(int param_1) {
    __istype(param_1, 512);
}
