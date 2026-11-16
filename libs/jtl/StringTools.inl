// libs/jtl/StringTools.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10017bc90, 336 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::tinyKeyDecrypt(std::array<int, 4ul> const&, unsigned long, unsigned long)
    /* PacketT<Array<unsigned char, BucketAllocatorEASTL>
   >::tinyKeyDecrypt(std::array<int, 4ul> const&, unsigned long, unsigned long) */

    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::tinyKeyDecrypt(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, array* param_1, ulong param_2, ulong param_3) {
        undefined8 uVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        ulong uVar5;
        int* piVar6;
        ulong uVar7;
        uint uVar8;

        uVar1 = *(undefined8*)(this + 24);
        *(ulong*)(this + 24) = param_2;
        if (7 < param_3 - param_2) {
            uVar7 = param_3 - param_2 >> 3;
            uVar5 = 1;
            if (1 < uVar7) {
                uVar5 = uVar7;
            }
            uVar7 = 0;
            do {
                uVar2 = g4();
                uVar3 = g4();
                iVar4 = -32;
                uVar8 = 3337565984;
                do {
                    piVar6 =
                        (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, (ulong)(uVar8 >> 11 & 3));
                    uVar3 = uVar3 - (*piVar6 + uVar8 ^ (uVar2 >> 5 ^ uVar2 << 4) + uVar2);
                    piVar6 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1,
                                                                    (ulong)(uVar8 + 1640531527 & 3));
                    uVar2 = uVar2 - (*piVar6 + uVar8 + 1640531527 ^ (uVar3 >> 5 ^ uVar3 * 16) + uVar3);
                    iVar4 = iVar4 + 1;
                    uVar8 = uVar8 + 1640531527;
                } while (iVar4 != 0);
                *(long*)(this + 24) = *(long*)(this + 24) + -8;
                p4<int>(this, uVar2);
                p4<int>(this, uVar3);
                uVar7 = uVar7 + 1;
            } while (uVar7 != uVar5);
        }
        *(undefined8*)(this + 24) = uVar1;
    }

    // 0x10017bde0, 32 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::GetDataArrayPtr()
    /* PacketT<Array<unsigned char, eastl::allocator> >::GetDataArrayPtr() */

    PacketT<Array<unsigned char, eastl::allocator>>* PacketT<Array<unsigned char, eastl::allocator>>::GetDataArrayPtr(
        PacketT<Array<unsigned char, eastl::allocator>>* this) {
        long lVar1;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar2;

        lVar1 = GetTextureAtlas();
        pPVar2 = (PacketT<Array<unsigned char, eastl::allocator>>*)0;
        if (lVar1 != 0) {
            pPVar2 = this;
        }
        return pPVar2;
    }

} // namespace jag
