// libs/game/runetek5/network/pow/HashCashVerifier.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "HashCashVerifier.h"

namespace jag::game {
    // 0x10049ff20, 80 bytes, placed by class name and debug map
    // HashCashVerifier::VerifyAnswer(int, char const*, long long)
    bool HashCashVerifier::VerifyAnswer(int param_1, char* param_2, longlong param_3) {
        int iVar1;
        HashCashVerifier local_30;

        GenerateHash(&local_30, param_2, param_3);
        iVar1 = CountLeadingZeros((Array*)&local_30);
        local_30.~Array();
        return param_1 <= iVar1;
    }

    // 0x10049ff70, 128 bytes, placed by class name and debug map
    // HashCashVerifier::VerifyAnswer(PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined4 HashCashVerifier::VerifyAnswer(PacketT* param_1) {
        int iVar1;
        undefined4 uVar2;
        longlong lVar3;
        char* pcVar4;
        HashCashChallenge local_38;

        lVar3 = param_1->g8();
        iVar1 = field_8->GetZ();
        local_38.GetFullyQualifiedHeader();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = VerifyAnswer(iVar1, pcVar4, lVar3);
        local_38.~basic_string();
        return uVar2;
    }

    // 0x10049fff0, 256 bytes, placed by class name and debug map
    // HashCashVerifier::GenerateHash(char const*, long long)
    HashCashVerifier* HashCashVerifier::GenerateHash(char* param_1, longlong param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        basic_string<char, BucketAllocatorEASTL> local_a8[24];
        undefined1 local_90[104];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) Array<signed char, eastl::allocator>(32);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(local_a8, "%s%llx", param_1, param_2);
        _Sha256_Init(local_90);
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        _Sha256_Update(local_90, uVar1, uVar2);
        uVar1 = data();
        _Sha256_Final(local_90, uVar1);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_a8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1004a00f0, 96 bytes, placed by class name and debug map
    // HashCashVerifier::CountLeadingZeros(Array<signed char, eastl::allocator> const&)
    int HashCashVerifier::CountLeadingZeros(Array* param_1) {
        int iVar1;
        char* pcVar2;
        char* pcVar3;
        int iVar4;
        char* pcVar5;

        pcVar2 = (char*)param_1->data();
        pcVar3 = (char*)param_1->end();
        if (pcVar2 == pcVar3) {
            iVar4 = 0;
        } else {
            iVar4 = 0;
            do {
                pcVar5 = pcVar2 + 1;
                iVar1 = CountLeadingZeros((int)*pcVar2);
                iVar4 = iVar4 + iVar1;
                if (iVar1 != 8) {
                    return iVar4;
                }
                pcVar2 = pcVar5;
            } while (pcVar5 != pcVar3);
        }
        return iVar4;
    }

    // 0x1004a0150, 64 bytes, placed by class name and debug map
    // HashCashVerifier::CountLeadingZeros(signed char)
    int HashCashVerifier::CountLeadingZeros(char param_1) {
        int iVar1;

        if (param_1 == '\0') {
            return 8;
        }
        if (param_1 < '\0') {
            return 0;
        }
        iVar1 = 0;
        do {
            iVar1 = iVar1 + 1;
            param_1 = param_1 * '\x02';
        } while (-1 < param_1);
        return iVar1;
    }

} // namespace jag::game
