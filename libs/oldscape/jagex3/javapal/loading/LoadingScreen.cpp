// libs/oldscape/jagex3/javapal/loading/LoadingScreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "LoadingScreen.h"

namespace jag {
    // 0x1002b4e10, 352 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::LoadingScreenAnimation::DecodePng(unsigned int, void const*, unsigned long)
    void LoadingScreenScript::LoadingScreenAnimation::DecodePng(uint param_1, void* param_2, ulong param_3) {
        uint uVar1;
        int iVar2;
        int iVar3;
        Pix32* this_00;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        ulong uVar4;
        long lVar5;
        long lVar6;
        ulong uVar7;
        PacketView local_b0;
        RGBAImage local_88;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_b0) PacketView(param_2, param_3);
        new (&local_88) RGBAImage();
        PNGDecoder::LoadFromPacket(&local_88, &local_b0);
        this_00 = (Pix32*)Array<oldscape::graphics::Pix32, eastl::allocator>::operator[](
            (Array<oldscape::graphics::Pix32, eastl::allocator>*)&field_24, (ulong)param_1);
        iVar2 = local_88.GetX();
        iVar3 = local_88.GetZ();
        this_00->Create(iVar2, iVar3);
        this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                      local_88.GetDevCredentialsOutputDirectory();
        uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
        lVar5 = this_01->data();
        lVar6 = this_00->data();
        if (3 < uVar4) {
            uVar7 = 1;
            if (1 < uVar4 >> 2) {
                uVar7 = uVar4 >> 2;
            }
            uVar4 = 0;
            do {
                uVar1 = *(uint*)(lVar5 + uVar4 * 4);
                *(uint*)(lVar6 + uVar4 * 4) = uVar1 >> 16 & 255 | (uVar1 & 255) << 16 | uVar1 & 4278255360;
                uVar4 = uVar4 + 1;
            } while (uVar7 != uVar4);
        }
        local_88.~RGBAImage();
        local_b0.~PacketView();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag
