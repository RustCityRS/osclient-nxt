// libs/graphics/graphicutils/createprimitive/CreateGeometry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    // 0x1008f3280, 304 bytes, inline, placed by debug map only (low confidence)
    // void CreateQuadListIndices<unsigned short>(Array<unsigned short, eastl::allocator>&, unsigned long)
    void CreateQuadListIndices<unsigned short>(Array* param_1, ulong param_2) {
        short* psVar1;
        short sVar2;
        ushort uVar3;
        uint uVar4;

        if (65535 < param_2 * 4 - 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(quadCount * 4) - 1 <= std::numeric_limits<IndexType>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateGeometry.h",
                      19, "quadCount exceeds what can be indexed using IndexType");
        }
        param_1->set_max_size(param_2 * 6, 0);
        if (param_2 != 0) {
            sVar2 = 0;
            uVar3 = 0;
            do {
                uVar4 = (uint)uVar3;
                psVar1 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_1, (ulong)(uVar4 * 6 + 2));
                *psVar1 = sVar2;
                psVar1 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_1, (ulong)(uVar4 * 6 | 1));
                *psVar1 = sVar2 + 1;
                psVar1 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_1, (ulong)(uVar4 * 6));
                *psVar1 = sVar2 + 2;
                psVar1 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_1, (ulong)(uVar4 * 6 + 5));
                *psVar1 = sVar2;
                psVar1 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_1, (ulong)(uVar4 * 6 + 4));
                *psVar1 = sVar2 + 2;
                psVar1 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)param_1, (ulong)(uVar4 * 6 + 3));
                *psVar1 = sVar2 + 3;
                uVar3 = uVar3 + 1;
                sVar2 = sVar2 + 4;
            } while (uVar3 < param_2);
        }
    }

} // namespace jag::graphicutils
