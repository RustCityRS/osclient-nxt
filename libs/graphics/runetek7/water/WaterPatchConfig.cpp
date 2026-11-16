// libs/graphics/runetek7/water/WaterPatchConfig.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterPatchConfig.h"

namespace jag::graphics {
    // 0x1007a2380, 272 bytes, placed by class name and debug map
    // WaterPatchConfig::IsPointInside(unsigned int, unsigned int, float)
    bool WaterPatchConfig::IsPointInside(uint param_1, uint param_2, float param_3) {
        float* pfVar1;
        float extraout_XMM0_Da;
        float fVar3;
        QuaternionT<float> local_58[16];
        undefined1 local_48[16];
        float local_34;

        local_48._12_4_ = param_3;
        local_58->Inverse();
        local_34 = (float)param_1;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&field_4, 0);
        local_34 = local_34 - *pfVar1;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&field_4, 2);
        new (local_48) math::ColourHSL(local_34, 0.0, (float)param_2 - *pfVar1);
        math::operator*((QuaternionT*)local_58, (Vector3T*)local_48);
        fVar3 = (float)field_16 * 0.5 + (float)local_48._12_4_;
        local_48._12_4_ = (float)field_20 * 0.5 + (float)local_48._12_4_;
        return (0.0 <= (float)local_48._12_4_ && -(float)local_48._12_4_ <= 0.0) &&
               (extraout_XMM0_Da <= fVar3 && -fVar3 <= extraout_XMM0_Da);
    }

} // namespace jag::graphics
