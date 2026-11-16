// libs/game/runetek5/network/pow/HashCashVerifier.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "HashCashVerifier.h"

namespace jag::game {
    // 0x10049ff20
    unsigned long HashCashVerifier::VerifyAnswer(int arg1, const char* str, long long arg3) {
        uint32_t in_register_00000034;
        ReturnValue local_30;

        GenerateHash(&local_30, (char*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1), (long long)str);
        int iVar1 = CountLeadingZeros(&local_30);
        return (int)this <= iVar1 & 4294967295;
    }

    // 0x10049ff70
    uint32_t HashCashVerifier::VerifyAnswer(PacketT<Array<unsigned char>>& arg1) {
        long long in_RCX;

        auto str = arg1.g8();
        unsigned int uVar1 = field_8->GetZ();
        auto local_38 = field_8->GetFullyQualifiedHeader();
        int arg1_00 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint32_t uVar2 = VerifyAnswer((HashCashVerifier*)(unsigned long)uVar1, arg1_00, str, in_RCX);
        return uVar2;
    }

    // 0x10049fff0
    auto HashCashVerifier::GenerateHash(const char* str, long long arg2) {
        uint8_t local_90[104];

        auto result(32);
        basic_string<char, BucketAllocatorEASTL> local_a8((CtorSprintf*)"%s%llx", str, arg2);
        _Sha256_Init(local_90);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar2 = local_a8.size();
        _Sha256_Update(local_90, uVar1, uVar2);
        uVar1 = result.data();
        _Sha256_Final(local_90, uVar1);
        return result;
    }

    // 0x1004a00f0
    int HashCashVerifier::CountLeadingZeros(const Array<signed char>& arg1) {
        int iVar1;
        int iVar4;
        schar* psVar5;

        auto psVar2 = arg1.data();
        auto psVar3 = arg1.end();
        if (psVar2 == psVar3) {
            iVar4 = 0;
        } else {
            iVar4 = 0;
            do {
                psVar5 = psVar2 + 1;
                iVar1 = CountLeadingZeros(*psVar2);
                iVar4 = iVar4 + iVar1;
                if (iVar1 != 8) {
                    return iVar4;
                }
                psVar2 = psVar5;
            } while (psVar5 != psVar3);
        }
        return iVar4;
    }

    // 0x1004a0150
    int HashCashVerifier::CountLeadingZeros(signed char arg1) {
        if (arg1 == '\0') {
            return 8;
        }
        if (arg1 < '\0') {
            return 0;
        }
        int iVar1 = 0;
        do {
            iVar1 = iVar1 + 1;
            arg1 = arg1 * '\x02';
        } while (-1 < arg1);
        return iVar1;
    }

} // namespace jag::game
