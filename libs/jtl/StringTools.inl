// libs/jtl/StringTools.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10017bc90
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::tinyKeyDecrypt(const std::array<int, 4ul>& arg1,
                                                                             unsigned long arg2, unsigned long arg3) {
        unsigned int uVar2;
        int iVar3;
        unsigned long uVar4;
        int* piVar5;
        unsigned long uVar6;
        int iVar7;
        unsigned long arg1_00;
        unsigned int uVar8;

        uint64_t uVar1 = *(uint64_t*)(this + 24);
        *(unsigned long*)(this + 24) = arg2;
        if (7 < arg3 - arg2) {
            uVar6 = arg3 - arg2 >> 3;
            uVar4 = 1;
            if (1 < uVar6) {
                uVar4 = uVar6;
            }
            uVar6 = 0;
            do {
                uVar2 = g4();
                arg1_00 = (unsigned long)uVar2;
                uVar2 = g4();
                iVar3 = -32;
                uVar8 = 3337565984;
                do {
                    iVar7 = (int)arg1_00;
                    piVar5 = &arg1[(unsigned long)(uVar8 >> 11 & 3)];
                    uVar2 = uVar2 - (*piVar5 + uVar8 ^ ((unsigned int)(arg1_00 >> 5) ^ iVar7 << 4) + iVar7);
                    piVar5 = &arg1[(unsigned long)(uVar8 + 1640531527 & 3)];
                    arg1_00 =
                        (unsigned long)(iVar7 - (*piVar5 + uVar8 + 1640531527 ^ (uVar2 >> 5 ^ uVar2 * 16) + uVar2));
                    iVar3 = iVar3 + 1;
                    uVar8 = uVar8 + 1640531527;
                } while (iVar3 != 0);
                *(long*)(this + 24) = *(long*)(this + 24) - 8;
                p4<int>(this, arg1_00);
                p4<int>(this, (unsigned long)uVar2);
                uVar6 = uVar6 + 1;
            } while (uVar6 != uVar4);
        }
        *(uint64_t*)(this + 24) = uVar1;
    }

    // 0x10017bde0
    PacketT<Array<unsigned char>>* PacketT<Array<unsigned char, BucketAllocatorEASTL>>::GetDataArrayPtr() {
        long lVar1 = GetTextureAtlas();
        PacketT<Array<unsigned char>>* pPVar2 = nullptr;
        if (lVar1 != 0) {
            pPVar2 = this;
        }
        return pPVar2;
    }

} // namespace jag
