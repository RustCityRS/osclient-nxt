// libs/graphics/runetek7/animation/AnimKey.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimKey.h"

namespace jag::graphics {
    // 0x100981c30, 192 bytes, placed by class name and debug map
    // AnimKey::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    void AnimKey::LoadFromPacket(PacketT* param_1) {
        undefined2 uVar1;
        undefined4 uVar2;
        float fVar3;

        uVar1 = param_1->g2s();
        field_0 = uVar1;
        uVar2 = param_1->gFloat();
        field_4 = uVar2;
        fVar3 = (float)param_1->gFloat();
        field_8 = fVar3;
        uVar2 = param_1->gFloat();
        field_12 = uVar2;
        if (field_8 <= 0.0 && field_8 != 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_inTanX >= 0.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimKey.cpp",
                      22,
                      "We expect in-tangents to have positive x values, because they are assumed as flipped to "
                      "negative later on");
        }
        fVar3 = (float)param_1->gFloat();
        field_16 = fVar3;
        uVar2 = param_1->gFloat();
        field_20 = uVar2;
        if (field_16 <= 0.0 && field_16 != 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_outTanX >= 0.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimKey.cpp",
                      25, "We never expect an out-tangent to point backwards along the x axis");
        }
    }

} // namespace jag::graphics
