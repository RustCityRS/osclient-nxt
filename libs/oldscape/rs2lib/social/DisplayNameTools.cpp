// libs/oldscape/rs2lib/social/DisplayNameTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::social {
    class DisplayNameTools {
    public:
        auto ToBaseDisplayName(const eastl::string& str, NameSpace nameSpace);
        char GetMaxLength(NameSpace nameSpace);
        bool IsValidAddition(const eastl::string& str, char16_t arg2, NameSpace nameSpace);
        bool IsValidChar(char16_t arg1);
        void IsSpace(char16_t arg1);
        void IsValidAddition(const eastl::string& str, char16_t arg2);
        void IsValidNewNameChar(char16_t arg1);
        unsigned long IsSystemChar(char16_t arg1);
        void IsValidDisplayName(const eastl::string& str, NameSpace nameSpace);
        bool IsValidBase(const eastl::string& str, bool arg2, NameSpace nameSpace);
        void IsValidDisplayName(const eastl::string& str);
        bool IsValidNewDisplayName(const eastl::string& str, bool arg2, NameSpace nameSpace);
        void IsValidNewDisplayName(const eastl::string& str, bool arg2);
        void IsValidNewDisplayName(const eastl::string& str, NameSpace nameSpace);
        void IsValidNewDisplayName(const eastl::string& str);
        bool IsSystemGeneratedDisplayName(const eastl::string& str, NameSpace nameSpace);
        void IsSystemGeneratedDisplayName(const eastl::string& str);
        int ToBase(char16_t arg1);
        auto ToBaseDisplayName(const eastl::string& str);
        NameSpace GetNameSpaceWithLongestAllowedName();
        unsigned long BaseEqual(const eastl::string& str1, const eastl::string& str2, NameSpace nameSpace);
        void BaseEqual(const eastl::string& str1, const eastl::string& str2);
        auto SanitiseUnknownDisplayName(const eastl::string& str);
        static uint8_t ALLOWED[106];       // initialised in its definition
        static uint8_t SYSTEM_RESERVED[6]; // = { 91, 93, 35, 0, 0, 0 }
        static int64_t m_longestNamespace; // = 4294967096

        uint8_t _unknown_0[1];
    };

    // 0x100d3ff40
    uint8_t DisplayNameTools::ALLOWED[106] = {
        32,  0, 160, 0, 95,  0, 45,  0, 224, 0, 225, 0, 226, 0, 228, 0, 227, 0, 192, 0, 193, 0, 194, 0, 196, 0, 195, 0,
        232, 0, 233, 0, 234, 0, 235, 0, 200, 0, 201, 0, 202, 0, 203, 0, 237, 0, 238, 0, 239, 0, 205, 0, 206, 0, 207, 0,
        242, 0, 243, 0, 244, 0, 246, 0, 245, 0, 210, 0, 211, 0, 212, 0, 214, 0, 213, 0, 249, 0, 250, 0, 251, 0, 252, 0,
        217, 0, 218, 0, 219, 0, 220, 0, 231, 0, 199, 0, 255, 0, 120, 1, 241, 0, 209, 0, 223, 0,
    };

    // 0x100d3ffaa
    uint8_t DisplayNameTools::SYSTEM_RESERVED[6] = {91, 93, 35, 0, 0, 0};

    // 0x100f37a70
    int64_t DisplayNameTools::m_longestNamespace = 4294967096;

    // 0x100258ee0
    auto DisplayNameTools::ToBaseDisplayName(const eastl::string& str, NameSpace nameSpace) {
        bool cVar2;
        char16_t wVar3;
        unsigned long uVar4;
        unsigned long uVar5;
        unsigned long local_60[4];

        if (str == (*((value_type*)""))) {
            new (local_60) eastl::allocator("EASTL basic_string");
            return auto("", local_60);
        }
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_60[0] = 0;
        if (*str_00 != '\0') {
            wVar3 = stringtools::GetUTF8NextChar16(str_00, *local_60);
            cVar2 = IsSpace(wVar3);
            if (cVar2) {
                do {
                    uVar4 = local_60[0];
                    if (str_00[local_60[0]] == '\0')
                        break;
                    wVar3 = stringtools::GetUTF8NextChar16(str_00, *local_60);
                    cVar2 = IsSpace(wVar3);
                } while (cVar2);
                goto LAB_100258fa6;
            }
        }
        uVar4 = 0;
    LAB_100258fa6:
        char* str_01 = str_00 + uVar4;
        local_60[0] = 0;
        if (str_00[uVar4] == '\0') {
            uVar4 = 0;
        } else {
            uVar4 = 0;
            do {
                wVar3 = stringtools::GetUTF8NextChar16(str_01, *local_60);
                cVar2 = IsSpace(wVar3);
                if (!cVar2) {
                    uVar4 = local_60[0];
                }
            } while (str_01[local_60[0]] != '\0');
        }
        new (local_60) eastl::string();
        local_60->reserve(uVar4);
        unsigned long local_38 = 0;
        if (uVar4 != 0) {
            do {
                wVar3 = stringtools::GetUTF8NextChar16(str_01, local_38);
                cVar2 = IsValidChar(wVar3);
                if ((cVar2) && (cVar2 = ToBase(wVar3), cVar2)) {
                    *local_60 += cVar2;
                }
            } while (local_38 < uVar4);
        }
        uVar4 = local_60->size();
        if ((uVar4 == 0) || (uVar5 = GetMaxLength(nameSpace), uVar5 < uVar4)) {
            new (&result) eastl::string("");
        } else {
            new (&result) eastl::string(*local_60);
        }
        return result;
    }

    // 0x1002592f0
    char DisplayNameTools::GetMaxLength(NameSpace nameSpace) {
        return (nameSpace == 5) * '\b' + '\f';
    }

    // 0x100259310
    bool DisplayNameTools::IsValidAddition(const eastl::string& str, char16_t arg2, NameSpace nameSpace) {
        bool bVar2;
        char* str_00;
        unsigned long uVar4;
        unsigned long uVar5;

        if ((IsValidChar(arg2) != '\0') && (bVar2 = str == (*((value_type*)"")), !bVar2)) {
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = str.size();
            uVar4 = stringtools::GetUTF8StringWidth(str_00, uVar4);
            uVar5 = GetMaxLength(nameSpace);
            if (uVar4 < uVar5) {
                return IsSpace(arg2) ^ 1 | uVar4 != 0;
            }
        }
        return 0;
    }

    // 0x100259390
    bool DisplayNameTools::IsValidChar(char16_t arg1) {
        char* pcVar1;
        bool cVar2;
        uint8_t bVar3;
        long lVar5;
        uint64_t in_register_0000003a;
        bool bVar6;

        int arg1_00 = (int)(((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1);
        if (iscntrl(arg1_00) == 0) {
            cVar2 = core::stringtools::general::StringTools::IsASCIIAlphaNumeric(arg1);
            bVar3 = 1;
            if (!cVar2) {
                lVar5 = 0;
                do {
                    if (*(char16_t*)((long)&ALLOWED + lVar5) == arg1) {
                        return 1;
                    }
                    lVar5 = lVar5 + 2;
                } while (lVar5 != 106);
                if (arg1 == L'[') {
                    bVar6 = false;
                } else {
                    lVar5 = 0;
                    do {
                        bVar6 = lVar5 == 2;
                        if (bVar6)
                            break;
                        pcVar1 = &DAT_100d3ffab + lVar5;
                        lVar5 = lVar5 + 1;
                    } while (arg1_00 != *pcVar1);
                }
                bVar3 = bVar6 ^ 1;
            }
        } else {
            bVar3 = 0;
        }
        return bVar3;
    }

    // 0x100259410
    void DisplayNameTools::IsSpace(char16_t arg1) {
        if ((((unsigned short)((unsigned short)arg1 - 32) < 64) &&
             ((9223372036854784001U >> ((unsigned long)((unsigned short)arg1 - 32 & 65535) & 63) & 1) != 0)) ||
            (arg1 == L'\xa0')) {
            return 1;
        }
        return 0;
    }

    // 0x100259450
    void DisplayNameTools::IsValidAddition(const eastl::string& str, char16_t arg2) {
        IsValidAddition(str, arg2, 4294967096);
    }

    // 0x100259470
    void DisplayNameTools::IsValidNewNameChar(char16_t arg1) {
        unsigned int uVar3;
        uint64_t in_register_0000003a;

        int arg1_00 = (int)(((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1);
        if (iscntrl(arg1_00) == 0) {
            if (core::stringtools::general::StringTools::IsASCIIAlphaNumeric(arg1) != '\0') {
                return 1;
            }
            uVar3 = arg1_00 - 32;
            if (((unsigned short)uVar3 < 64) &&
                ((9223372036854784001U >> ((unsigned long)(uVar3 & 65535) & 63) & 1) != 0)) {
                return 1;
            }
            if (arg1 == L'\xa0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x1002594d0
    unsigned long DisplayNameTools::IsSystemChar(char16_t arg1) {
        char* pcVar1;
        unsigned long in_RAX;
        long lVar2;
        uint16_t in_register_0000003a;

        if (arg1 == L'[') {
            in_RAX = 0;
        } else {
            lVar2 = 0;
            do {
                in_RAX = (((uint64_t)((int64_t)(in_RAX >> 8)) << 8) | (uint8_t)(lVar2 == 2));
                if (lVar2 == 2)
                    break;
                pcVar1 = &DAT_100d3ffab + lVar2;
                lVar2 = lVar2 + 1;
            } while ((((uint32_t)in_register_0000003a << 16) | (uint16_t)arg1) != (int)*pcVar1);
        }
        return in_RAX ^ 1;
    }

    // 0x100259510
    void DisplayNameTools::IsValidDisplayName(const eastl::string& str, NameSpace nameSpace) {
        char* str_00;

        bool cVar1 = IsValidBase(str, true, nameSpace);
        if (cVar1) {
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            do {
                if (str_00[0] == '\0') {
                    return 1;
                }
                cVar1 = IsValidChar(stringtools::GetUTF8NextChar16(str_00, 0));
            } while (cVar1);
        }
        return 0;
    }

    // 0x100259580
    bool DisplayNameTools::IsValidBase(const eastl::string& str, bool arg2, NameSpace nameSpace) {
        bool cVar2;
        bool cVar3;
        long lVar7;
        int iVar8;
        ReturnValue local_58;

        bool bVar1 = str == (*((value_type*)""));
        if (bVar1) {
            return false;
        }
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long uVar5 = str.size();
        uVar5 = stringtools::GetUTF8StringWidth(pcVar4, uVar5);
        if (uVar5 == 0) {
            return false;
        }
        if (GetMaxLength(nameSpace) < uVar5) {
            return false;
        }
        ToBaseDisplayName(&local_58, str, nameSpace);
        bVar1 = local_58 == (*((value_type*)""));
        if ((!bVar1) && (lVar7 = local_58.size(), lVar7 != 0)) {
            pcVar4 = &local_58[0];
            cVar2 = IsSpace((short)*pcVar4);
            if (!cVar2) {
                lVar7 = local_58.size();
                pcVar4 = &local_58[lVar7 - 1];
                cVar2 = IsSpace((short)*pcVar4);
                bVar1 = false;
                if (cVar2)
                    goto LAB_1002596c4;
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                iVar8 = 0;
                do {
                    cVar2 = pcVar4[0];
                    if (!cVar2)
                        break;
                    cVar3 = IsSpace(stringtools::GetUTF8NextChar16(pcVar4, 0));
                    iVar8 = iVar8 + 1;
                    if (!cVar3) {
                        iVar8 = 0;
                    }
                } while ((iVar8 < 2) || (arg2));
                if (!cVar2) {
                    bVar1 = iVar8 < 1;
                    goto LAB_1002596c4;
                }
            }
        }
        bVar1 = false;
    LAB_1002596c4:
        return bVar1;
    }

    // 0x1002596f0
    void DisplayNameTools::IsValidDisplayName(const eastl::string& str) {
        IsValidDisplayName(str, 4294967096);
    }

    // 0x100259700
    bool DisplayNameTools::IsValidNewDisplayName(const eastl::string& str, bool arg2, NameSpace nameSpace) {
        char* str_00;
        uint32_t in_register_00000011;

        bool cVar1 =
            IsValidBase((eastl::string*)this, (uint8_t)str, (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2));
        if (cVar1) {
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            do {
                if (str_00[0] == '\0') {
                    return 1;
                }
                cVar1 = IsValidNewNameChar(stringtools::GetUTF8NextChar16(str_00, 0));
            } while (cVar1);
        }
        return 0;
    }

    // 0x100259760
    void DisplayNameTools::IsValidNewDisplayName(const eastl::string& str, bool arg2) {
        NameSpace in_ECX;

        IsValidNewDisplayName(str, true, in_ECX);
    }

    // 0x100259770
    void DisplayNameTools::IsValidNewDisplayName(const eastl::string& str, NameSpace nameSpace) {
        NameSpace in_ECX;

        IsValidNewDisplayName(nullptr, (uint8_t)str, in_ECX);
    }

    // 0x100259780
    void DisplayNameTools::IsValidNewDisplayName(const eastl::string& str) {
        NameSpace in_ECX;

        IsValidNewDisplayName(nullptr, true, in_ECX);
    }

    // 0x1002597a0
    bool DisplayNameTools::IsSystemGeneratedDisplayName(const eastl::string& str, NameSpace nameSpace) {
        bool cVar2;
        char* str_00;
        bool bVar3;

        char cVar1 = IsValidDisplayName((eastl::string*)this, (NameSpace)str);
        if (!cVar1) {
            bVar3 = false;
        } else {
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            do {
                cVar1 = str_00[0];
                if (!cVar1)
                    break;
                cVar2 = IsSystemChar(stringtools::GetUTF8NextChar16(str_00, 0));
            } while (!cVar2);
            bVar3 = cVar1;
        }
        return bVar3;
    }

    // 0x100259810
    void DisplayNameTools::IsSystemGeneratedDisplayName(const eastl::string& str) {
        NameSpace in_EDX;

        IsSystemGeneratedDisplayName(*4294967096, in_EDX);
    }

    // 0x100259820
    int DisplayNameTools::ToBase(char16_t arg1) {
        char cVar1 = '_';
        switch (arg1) {
        case L' ':
        case L'-':
        case L'_':
        case L'\xa0':
            break;
        default:
            cVar1 = ::tolower((int)(char)arg1);
            break;
        case L'#':
        case L'[':
        case L']':
            cVar1 = (char)arg1;
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

    // 0x100259df0
    auto DisplayNameTools::ToBaseDisplayName(const eastl::string& str) {
        auto result;
        ToBaseDisplayName(&result, str, 4294967096);
        return result;
    }

    // 0x100259e10
    NameSpace DisplayNameTools::GetNameSpaceWithLongestAllowedName() {
        NameSpace nameSpace;
        NameSpace nameSpace_00;
        unsigned long uVar2;
        long lVar4;

        uint8_t* puVar1 = PTR_values_100ee6b58;
        if (m_longestNamespace == 4294967096) {
            lVar4 = 0;
            do {
                nameSpace_00 = m_longestNamespace;
                nameSpace = *(NameSpace*)(puVar1 + lVar4);
                if (m_longestNamespace == 4294967096) {
                LAB_100259e40:
                    m_longestNamespace = nameSpace;
                } else {
                    uVar2 = GetMaxLength(nameSpace);
                    if (GetMaxLength(nameSpace_00) < uVar2)
                        goto LAB_100259e40;
                }
                lVar4 = lVar4 + 4;
            } while (lVar4 != 36);
        }
        return m_longestNamespace;
    }

    // 0x100259ea0
    unsigned long DisplayNameTools::BaseEqual(const eastl::string& str1, const eastl::string& str2,
                                              NameSpace nameSpace) {
        ReturnValue local_58;
        ReturnValue local_38;

        ToBaseDisplayName(&local_58, str1, nameSpace);
        ToBaseDisplayName(&local_38, str2, nameSpace);
        bool bVar1 = local_58 == local_38;
        return bVar1 & 4294967295;
    }

    // 0x100259f20
    void DisplayNameTools::BaseEqual(const eastl::string& str1, const eastl::string& str2) {
        BaseEqual(str1, str2, 4294967096);
    }

    // 0x100259f30
    auto DisplayNameTools::SanitiseUnknownDisplayName(const eastl::string& str) {
        char* pcVar2;

        if ((str.empty() == '\0') && (pcVar2 = (char*)str[0], *pcVar2 != '#')) {
            return auto(str);
        }
        new (&result) eastl::string("");
        return result;
    }

} // namespace jag::oldscape::rs2lib::social

// 0x100259460
void iscntrl(int arg1) {
    __istype(arg1, 512);
}
