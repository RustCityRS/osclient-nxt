// libs/graphics/view/Camera.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10047de20
    void Camera::SetAspect(float arg1) {
        uint32_t in_EAX;
        uint64_t in_R8;
        uint64_t in_R9;

        if (arg1 <= 0.0) {
            LogAssert("aspect > 0.f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/view/Camera.h",
                      34, nullptr, in_R8, in_R9, (((uint64_t)arg1 << 32) | (uint32_t)in_EAX));
        }
        m_aspect = arg1;
    }

} // namespace jag
