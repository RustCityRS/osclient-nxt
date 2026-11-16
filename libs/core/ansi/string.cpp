// libs/core/ansi/string.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.core

#include "libs/jtl/JTL_String.h"

namespace jag {
    // 0x100d995b0, 368 bytes, __const
    Instrumentation::String::MAX_WRITEABLE = {
        63, 128,   96,    64,    48, 64,    32,    32,    32,    32,    32,    32,    32, 32,    32,    32,
        24, 24,    24,    16,    16, 16,    16,    8,     4,     4,     8,     8,     16, 32,    8,     8,
        4,  3,     4,     3,     2,  3,     4,     4,     2,     4,     1,     4,     1,  4,     4,     3,
        3,  3,     4,     2,     1,  4,     1,     4,     4,     4,     4,     4,     4,  1,     6,     3,
        10, 2,     34,    193,   82, 35000, 35001, 35002, 35001, 35000, 35001, 0,     0,  33071, 33071, 33071,
        7,  33071, 33071, 33071, 6,  33071, 33071, 33071, 7,     10497, 10497, 10497,
    };

    // 0x100bca0b0, 16 bytes, complete-object constructor, inline, placed by class name
    // Instrumentation::String::String(char const*, char const*): jumps straight to the base-object constructor

    // 0x100bca0c0, 16 bytes, complete-object destructor, inline, placed by class name
    // Instrumentation::String::~String(): jumps straight to the base-object destructor

    // 0x100bd18a0, 112 bytes, base-object constructor, inline, placed by class name
    // Instrumentation::String::String(char const*, char const*)
    void Instrumentation::String::String(char* param_1, char* param_2) {
        uint* puVar1;
        int local_24;

        eastl::fixed_string<char, 64, false, eastl::allocator>::fixed_string();
        std::distance<char const*>(param_1, param_2);
        puVar1 = (uint*)std::min<int>(&local_24, (int*)param_2);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, false, eastl::allocator>>::sprintf(
            (char*)this, &DAT_100e4fcf3, (ulong)*puVar1, param_1);
    }

    // 0x100bd2100, 16 bytes, base-object destructor, inline, placed by class name
    // Instrumentation::String::~String()
    void Instrumentation::String::~String() {
        ~fixed_string();
    }

    // 0x100cc5470, 144 bytes, placed by debug map only (low confidence)
    // strnicmp(char const*, char const*, unsigned long)
    undefined4 strnicmp(char* param_1, char* param_2, ulong param_3) {
        int iVar1;
        int iVar2;
        int iVar3;
        long in_RAX;
        undefined4 uVar4;
        undefined8 uStack_38;

        uStack_38 = in_RAX;
        do {
            if (param_3 == 0) {
                return 0;
            }
            if (*param_1 == 0) {
                return 0;
            }
            if (*param_2 == '\0') {
                return 0;
            }
            iVar1 = ::tolower((int)*param_1);
            iVar2 = ::tolower((int)*param_2);
            if (iVar1 - iVar2 == 0) {
                if (iVar1 == 0) {
                    iVar3 = 3;
                } else {
                    param_3 = param_3 - 1;
                    param_1 = param_1 + 1;
                    param_2 = param_2 + 1;
                    iVar3 = 0;
                }
            } else {
                iVar3 = 1;
                uStack_38 = (ulong)(uint)(iVar1 - iVar2) << 32;
            }
        } while (iVar3 == 0);
        uVar4 = 0;
        if (iVar3 != 3) {
            uVar4 = uStack_38._4_4_;
        }
        return uVar4;
    }

    // 0x100cc5500, 112 bytes, placed by debug map only (low confidence)
    // stricmp(char const*, char const*)
    int stricmp(char* param_1, char* param_2) {
        char cVar1;
        int iVar2;
        int iVar3;
        long lVar4;

        cVar1 = *param_1;
        if (cVar1 != '\0') {
            lVar4 = 0;
            do {
                if (param_2[lVar4] == '\0') {
                    return 0;
                }
                iVar2 = ::tolower((int)cVar1);
                iVar3 = ::tolower((int)param_2[lVar4]);
                if (iVar2 - iVar3 != 0) {
                    return iVar2 - iVar3;
                }
                if (iVar2 == 0) {
                    return 0;
                }
                cVar1 = param_1[lVar4 + 1];
                lVar4 = lVar4 + 1;
            } while (cVar1 != '\0');
        }
        return 0;
    }

    // 0x100cc5570, 48 bytes, placed by debug map only (low confidence)
    // strdup(char const*)
    char* strdup(char* param_1) {
        size_t sVar1;
        char* pcVar2;

        sVar1 = _strlen(param_1);
        pcVar2 = operator_new__(sVar1 + 1);
        _strcpy(pcVar2, param_1);
        return pcVar2;
    }

} // namespace jag
