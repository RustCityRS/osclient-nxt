// libs/graphics/runetek7/renderer/DrawableUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    // 0x1007b7300, 176 bytes, inline, placed by debug map only (low confidence)
    // DstFromCameraPlane(math::Vector3T<float> const&, math::Matrix44T<float> const&)
    float DstFromCameraPlane(Vector3T* param_1, Matrix44T* param_2) {
        float* pfVar1;
        float local_24;
        float local_20;
        float local_1c;

        local_24 = 0.0;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_2, 2);
        local_1c = *(float*)param_1 * *pfVar1;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_2, 6);
        local_1c = *(float*)(param_1 + 4) * *pfVar1 + local_1c;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_2, 10);
        local_1c = *(float*)(param_1 + 8) * *pfVar1 + local_1c;
        pfVar1 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)param_2, 14);
        local_20 = local_1c + *pfVar1;
        pfVar1 = std::max<float>(&local_24, &local_20);
        return *pfVar1;
    }

} // namespace jag::graphics
