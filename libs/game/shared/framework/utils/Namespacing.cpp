// libs/game/shared/framework/utils/Namespacing.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "Namespacing.h"

namespace jag::game {
    // 0x1006e5120, 368 bytes, placed by debug map only (low confidence)
    // ToBaseDisplayName(eastl::basic_string<char, BucketAllocatorEASTL> const&, Namespace)
    game* ToBaseDisplayName(basic_string<char, BucketAllocatorEASTL>* param_1, undefined4 param_3) {
        char cVar1;
        uint uVar2;
        ulong uVar3;
        char* pcVar4;
        char* pcVar5;
        ulong uVar6;
        game* pgVar7;
        ulong uVar8;
        basic_string local_60[24];
        ulong local_48;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 != '\0') {
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            return this;
        }
        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        uVar8 = 0;
        if (uVar3 != 0) {
            do {
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](param_1, uVar8);
                cVar1 = IsSpace(*pcVar5);
                if (cVar1 == '\0')
                    goto LAB_1006e51b0;
                uVar8 = uVar8 + 1;
            } while (uVar3 != uVar8);
            uVar8 = uVar3;
        }
    LAB_1006e51b0:
        do {
            uVar6 = uVar3;
            if (uVar6 <= uVar8)
                break;
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](param_1, uVar6 - 1);
            cVar1 = IsSpace(*pcVar5);
            uVar3 = uVar6 - 1;
        } while (cVar1 != '\0');
        uVar3 = 0;
        local_48 = uVar8;
        if (uVar8 < uVar6) {
            do {
                uVar2 = stringtools::GetUTF8NextChar(pcVar4, &local_48, uVar6);
                uVar2 = ToBase(uVar2);
                stringtools::UTF8Append<eastl::basic_string<char, BucketAllocatorEASTL>>(uVar2, local_60);
                uVar3 = uVar3 + 1;
            } while (local_48 < uVar6);
        }
        if ((uVar3 == 0) || (uVar2 = MaxDisplayLen(param_3), pgVar7 = (game*)this, uVar2 < uVar3)) {
            pgVar7 = (game*)this;
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        } else {
            new ((game*)this) eastl::basic_string<char, BucketAllocatorEASTL>();
        }
        local_60->~basic_string();
        return pgVar7;
    }

} // namespace jag::game
