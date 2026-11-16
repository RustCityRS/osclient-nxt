// libs/graphics/runetek7/renderer/DrawableUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    // 0x1007b7300
    float DstFromCameraPlane(const math::Vector3T<float>& vector3, const math::Matrix44T<float>& matrix44) {
        float* pfVar1 = (float*)math::Matrix44T<float>::operator()(matrix44, 2);
        float local_1c = *(float*)vector3 * *pfVar1;
        pfVar1 = (float*)math::Matrix44T<float>::operator()(matrix44, 6);
        local_1c = *(float*)(vector3 + 4) * *pfVar1 + local_1c;
        pfVar1 = (float*)math::Matrix44T<float>::operator()(matrix44, 10);
        local_1c = *(float*)(vector3 + 8) * *pfVar1 + local_1c;
        pfVar1 = (float*)math::Matrix44T<float>::operator()(matrix44, 14);
        float local_20 = local_1c + *pfVar1;
        pfVar1 = std::max<float>(0.0, local_20);
        return *pfVar1;
    }

} // namespace jag::graphics
