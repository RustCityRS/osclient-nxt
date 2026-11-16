// libs/graphics/view/Camera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.view

#include "Camera.h"
#include "libs/game/runetek5/camera/Camera.h"

namespace jag {
    // 0x1009db620
    Camera::Camera(ProjectionMode projectionMode) : m_projectionMode(projectionMode) {

        m_verticalFov = (float)math::Deg2Rad(60.0);
        m_aspect = 1.3333334f;
        m_leftClip = 0;
        m_bottomClip = 0.0;
        m_topClip = 0.0;
        m_nearClip = 0.1;
        m_farClip = 10000.0;
        Matrix33T<float> local_48(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
        new (&field_44) math::QuaternionT<float>(local_48);
        new (m_pos) math::ColourHSL(0.0, 0.0, 0.0);
    }

    // 0x1009db700
    Camera::~Camera() {}

} // namespace jag

namespace jag::math {
    // 0x1009db6d0
    float Deg2Rad(float arg1) {
        return arg1 * 0.017453292f;
    }

} // namespace jag::math
