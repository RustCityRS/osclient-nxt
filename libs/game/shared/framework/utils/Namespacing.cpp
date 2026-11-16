// libs/game/shared/framework/utils/Namespacing.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "Namespacing.h"

namespace jag::game {
    // 0x1006e5120
    auto ToBaseDisplayName(const eastl::basic_string<char, BucketAllocatorEASTL>& str, Namespace namespace) {
        unsigned int uVar2;
        char* pcVar4;
        unsigned long arg3;
        ReturnValue* pRVar5;

        bool cVar1 = str.empty();
        if (cVar1) {
            return auto();
        }
        unsigned long uVar3 = str.size();
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        basic_string<char, BucketAllocatorEASTL> local_60;
        unsigned long arg1 = 0;
        if (uVar3 != 0) {
            do {
                pcVar4 = &str[arg1];
                cVar1 = IsSpace(*pcVar4);
                if (!cVar1)
                    goto LAB_1006e51b0;
                arg1 = arg1 + 1;
            } while (uVar3 != arg1);
            arg1 = uVar3;
        }
    LAB_1006e51b0:
        do {
            arg3 = uVar3;
            if (arg3 <= arg1)
                break;
            pcVar4 = &str[arg3 - 1];
            cVar1 = IsSpace(*pcVar4);
            uVar3 = arg3 - 1;
        } while (cVar1);
        uVar3 = 0;
        unsigned long local_48 = arg1;
        if (arg1 < arg3) {
            do {
                uVar2 = stringtools::GetUTF8NextChar(str_00, local_48, arg3);
                uVar2 = ToBase(uVar2);
                stringtools::UTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>(uVar2, local_60);
                uVar3 = uVar3 + 1;
            } while (local_48 < arg3);
        }
        if ((uVar3 == 0) || (uVar2 = MaxDisplayLen(namespace), pRVar5 = &result, uVar2 < uVar3)) {
            pRVar5 = &result;
            new (&result) eastl::basic_string<char, BucketAllocatorEASTL>();
        } else {
            new (&result) eastl::basic_string<char, BucketAllocatorEASTL>(local_60);
        }
        return pRVar5;
    }

} // namespace jag::game
