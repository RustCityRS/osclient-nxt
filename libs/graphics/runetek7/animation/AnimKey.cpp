// libs/graphics/runetek7/animation/AnimKey.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimKey.h"

namespace jag::graphics {
    // 0x100981c30
    void AnimKey::LoadFromPacket(PacketT<Array<unsigned char>>& arg1) {
        field_0 = arg1.g2s();
        uint32_t uVar2 = arg1.gFloat();
        field_4 = uVar2;
        float fVar3 = (float)arg1.gFloat();
        field_8 = fVar3;
        uVar2 = arg1.gFloat();
        field_12 = uVar2;
        if (field_8 <= 0.0 && field_8 != 0.0) {
            LogAssert("m_inTanX >= 0.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimKey.cpp",
                      22,
                      "We expect in-tangents to have positive x values, because they are assumed as flipped to "
                      "negative later on");
        }
        fVar3 = (float)arg1.gFloat();
        field_16 = fVar3;
        uVar2 = arg1.gFloat();
        field_20 = uVar2;
        if (field_16 <= 0.0 && field_16 != 0.0) {
            LogAssert("m_outTanX >= 0.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimKey.cpp",
                      25, "We never expect an out-tangent to point backwards along the x axis");
        }
    }

} // namespace jag::graphics
