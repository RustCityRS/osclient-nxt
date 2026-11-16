// libs/graphics/view/Camera.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.view

#include "Camera.h"
#include "libs/game/runetek5/camera/Camera.h"

namespace jag {
    // 0x1009db620, 176 bytes, base-object constructor, placed by class name and debug map
    // Camera::Camera(ProjectionMode)
    void Camera::Camera(undefined4 param_2) {
        Matrix33T<float> local_48[40];

        field_0 = &PTR__Camera_100f1cc30;
        field_8 = param_2;
        m_verticalFov = (float)math::Deg2Rad(60.0);
        m_aspect = 1.3333334;
        field_20 = 0;
        *(undefined8*)&field_28 = 0;
        m_nearClip = 0.1;
        m_farClip = 10000.0;
        math::Matrix33T<float>::Matrix33T(local_48, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
        new (&field_44, local_48) math::QuaternionT<float>();
        new (m_pos, 0.0, 0.0, 0.0) math::ColourHSL();
    }

    // 0x1009db6f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Camera::Camera(ProjectionMode): jumps straight to the base-object constructor

    // 0x1009db700, 16 bytes, base-object destructor, placed by class name and debug map
    // Camera::~Camera()
    void Camera::~Camera() {}

    // 0x1009db710, 16 bytes, complete-object destructor, placed by class name and debug map
    // Camera::~Camera(): jumps straight to the base-object destructor

    // 0x1009db720, 16 bytes, deleting destructor, placed by class name and debug map
    // Camera::~Camera()
    void Camera::~Camera() {
        operator_delete(this);
    }

} // namespace jag

namespace jag::math {
    // 0x1009db6d0, 16 bytes, inline, placed by debug map only (low confidence)
    // Deg2Rad(float)
    float Deg2Rad(float param_1) {
        return param_1 * 0.017453292;
    }

} // namespace jag::math
