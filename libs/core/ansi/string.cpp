// libs/core/ansi/string.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.core

#include "libs/jtl/JTL_String.h"

namespace jag {
    // 0x100d995b0
    int32_t Instrumentation::String::MAX_WRITEABLE[92] = {
        63, 128,   96,    64,    48, 64,    32,    32,    32,    32,    32,    32,    32, 32,    32,    32,
        24, 24,    24,    16,    16, 16,    16,    8,     4,     4,     8,     8,     16, 32,    8,     8,
        4,  3,     4,     3,     2,  3,     4,     4,     2,     4,     1,     4,     1,  4,     4,     3,
        3,  3,     4,     2,     1,  4,     1,     4,     4,     4,     4,     4,     4,  1,     6,     3,
        10, 2,     34,    193,   82, 35000, 35001, 35002, 35001, 35000, 35001, 0,     0,  33071, 33071, 33071,
        7,  33071, 33071, 33071, 6,  33071, 33071, 33071, 7,     10497, 10497, 10497,
    };

    // 0x100bd18a0
    Instrumentation::String::String(const char* str1, const char* str2) : eastl::fixed_string<char, 64, false>() {
        int local_24;

        std::distance<char const*>(str1, str2);
        auto puVar1 = std::min<int>(local_24, *str2);
        sprintf("%.*s", (unsigned long)*puVar1, str1);
    }

    // 0x100bd2100
    Instrumentation::String::~String() {}

    // 0x100cc5470
    void strnicmp(const char* str1, const char* str2, unsigned long arg3) {
        int iVar1;
        int iVar2;
        int iVar3;
        long in_RAX;

        uint64_t uStack_38 = in_RAX;
        do {
            if (arg3 == 0) {
                return 0;
            }
            if (*str1 == 0) {
                return 0;
            }
            if (*str2 == '\0') {
                return 0;
            }
            iVar1 = ::tolower((int)*str1);
            iVar2 = ::tolower((int)*str2);
            if (iVar1 - iVar2 == 0) {
                if (iVar1 == 0) {
                    iVar3 = 3;
                } else {
                    arg3 = arg3 - 1;
                    str1 = str1 + 1;
                    str2 = str2 + 1;
                    iVar3 = 0;
                }
            } else {
                iVar3 = 1;
                uStack_38 = (unsigned long)(unsigned int)(iVar1 - iVar2) << 32;
            }
        } while (iVar3 == 0);
        uint32_t uVar4 = 0;
        if (iVar3 != 3) {
            uVar4 = uStack_38._4_4_;
        }
        return uVar4;
    }

    // 0x100cc5500
    int stricmp(const char* str1, const char* str2) {
        int iVar2;
        int iVar3;
        long lVar4;

        bool cVar1 = *str1;
        if (cVar1) {
            lVar4 = 0;
            do {
                if (str2[lVar4] == '\0') {
                    return 0;
                }
                iVar2 = ::tolower((int)cVar1);
                iVar3 = ::tolower((int)str2[lVar4]);
                if (iVar2 - iVar3 != 0) {
                    return iVar2 - iVar3;
                }
                if (iVar2 == 0) {
                    return 0;
                }
                cVar1 = str1[lVar4 + 1];
                lVar4 = lVar4 + 1;
            } while (cVar1);
        }
        return 0;
    }

    // 0x100cc5570
    char* strdup(const char* str) {
        size_t sVar1 = _strlen(str);
        auto pcVar2 = operator_new__(sVar1 + 1);
        _strcpy(pcVar2, str);
        return pcVar2;
    }

} // namespace jag
