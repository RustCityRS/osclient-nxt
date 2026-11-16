// libs/graphics/runetek7/water/WaterPatchConfig.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterPatchConfig.h"

namespace jag::graphics {
    // 0x1007a2380
    bool WaterPatchConfig::IsPointInside(unsigned int arg1, unsigned int arg2, float arg3) {
        float extraout_XMM0_Da;
        uint8_t local_48[16];

        local_48._12_4_ = arg3;
        auto local_58 = field_24.Inverse();
        float local_34 = (float)arg1;
        float* pfVar1 = &field_4[0];
        local_34 = local_34 - *pfVar1;
        pfVar1 = &field_4[2];
        new (local_48) math::ColourHSL(local_34, 0.0, (float)arg2 - *pfVar1);
        local_58** local_48;
        float fVar3 = (float)field_16 * 0.5 + (float)local_48._12_4_;
        local_48._12_4_ = (float)field_20 * 0.5 + (float)local_48._12_4_;
        return (0.0 <= (float)local_48._12_4_ && -(float)local_48._12_4_ <= 0.0) &&
               (extraout_XMM0_Da <= fVar3 && -fVar3 <= extraout_XMM0_Da);
    }

} // namespace jag::graphics
