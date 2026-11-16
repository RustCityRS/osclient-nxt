// libs/oldscape/jagex3/javapal/loading/LoadingScreen.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "LoadingScreen.h"

namespace jag {
    // 0x1002b4e10
    void LoadingScreenScript::LoadingScreenAnimation::DecodePng(unsigned int arg1, const void* arg2,
                                                                unsigned long arg3) {
        unsigned int uVar1;
        unsigned long uVar5;

        PacketView local_b0(arg2, arg3);
        RGBAImage local_88;
        PNGDecoder::LoadFromPacket(local_88, local_b0);
        Pix32* this_00 = &field_24[(unsigned long)arg1];
        int arg1_00 = local_88.GetX();
        int arg2_00 = local_88.GetZ();
        this_00->Create(arg1_00, arg2_00);
        auto this_01 = local_88.GetDevCredentialsOutputDirectory();
        unsigned long uVar2 = this_01->end();
        long lVar3 = this_01->data();
        long lVar4 = this_00->data();
        if (3 < uVar2) {
            uVar5 = 1;
            if (1 < uVar2 >> 2) {
                uVar5 = uVar2 >> 2;
            }
            uVar2 = 0;
            do {
                uVar1 = *(unsigned int*)(lVar3 + uVar2 * 4);
                *(unsigned int*)(lVar4 + uVar2 * 4) = uVar1 >> 16 & 255 | (uVar1 & 255) << 16 | uVar1 & 4278255360;
                uVar2 = uVar2 + 1;
            } while (uVar5 != uVar2);
        }
    }

} // namespace jag
