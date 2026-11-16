// libs/oldscape/jagex3/graphics/animation/OldscapeAnimKey.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OldscapeAnimKey.h"

namespace jag::oldscape::graphics::animation {
    // 0x1000e10d0: the linker folded this into FoundObject::~FoundObject(), which has identical code
    OldscapeAnimKey::~OldscapeAnimKey();

    // 0x10012d160: the linker folded this into FoundObject::~FoundObject(), which has identical code
    OldscapeAnimKey::~OldscapeAnimKey();

    // 0x100321100, 112 bytes, placed by class name and debug map
    // OldscapeAnimKey::LoadFromPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void OldscapeAnimKey::LoadFromPacket(PacketJ* param_1, int param_2) {
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this;
        short sVar1;
        undefined4 in_register_00000034;
        undefined4 uVar2;

        this = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000034,
                                                                                             param_2);
        sVar1 = (CONCAT44(in_register_00000034, param_2))->g2s();
        *(int*)(param_1 + 16) = (int)sVar1;
        uVar2 = gFloat();
        *(undefined4*)(param_1 + 20) = uVar2;
        uVar2 = gFloat();
        *(undefined4*)(param_1 + 24) = uVar2;
        uVar2 = gFloat();
        *(undefined4*)(param_1 + 28) = uVar2;
        uVar2 = gFloat();
        *(undefined4*)(param_1 + 32) = uVar2;
        uVar2 = gFloat();
        *(undefined4*)(param_1 + 36) = uVar2;
    }

} // namespace jag::oldscape::graphics::animation
