// libs/graphics/view/Camera.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10047de20, 80 bytes, inline, placed by __FILE__ string
    // Camera::SetAspect(float)
    void Camera::SetAspect(float param_1) {
        undefined4 in_EAX;
        undefined8 in_R8;
        undefined8 in_R9;

        if (param_1 <= 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("aspect > 0.f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/view/Camera.h",
                      34, (char*)0, in_R8, in_R9, CONCAT44(param_1, in_EAX));
        }
        m_aspect = param_1;
    }

} // namespace jag
