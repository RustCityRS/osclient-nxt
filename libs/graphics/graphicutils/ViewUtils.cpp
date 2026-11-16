// libs/graphics/graphicutils/ViewUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb57b0
    auto CUBEMAP_FACE_CAMERA_ROTATIONS(const math::QuaternionT<float>& quaternion) {
        auto result;
        QuaternionT<float> local_150;
        QuaternionT<float> local_120;
        QuaternionT<float> local_f0;
        QuaternionT<float> local_c0;
        QuaternionT<float> local_90;
        QuaternionT<float> local_60;

        QuaternionT<float> local_140(0.0, 0.70710677f, 0.0, 0.70710677f);
        local_150 quaternion;
        QuaternionT<float> local_130(1.0, 0.0, 0.0, 0.0);
        result* local_150;
        QuaternionT<float> local_110(0.0, -0.70710677, 0.0, 0.70710677f);
        local_120 quaternion;
        QuaternionT<float> local_100(1.0, 0.0, 0.0, 0.0);
        (*((&result + 2))) * local_120;
        QuaternionT<float> local_e0(-0.70710677, 0.0, 0.0, 0.70710677f);
        local_f0 quaternion;
        QuaternionT<float> local_d0(0.0, 0.0, 1.0, 0.0);
        (*((&result + 4))) * local_f0;
        QuaternionT<float> local_b0(0.70710677f, 0.0, 0.0, 0.70710677f);
        local_c0 quaternion;
        QuaternionT<float> local_a0(0.0, 0.0, 1.0, 0.0);
        (*((&result + 6))) * local_c0;
        QuaternionT<float> local_80(0.0, 0.0, 0.0, 1.0);
        local_90 quaternion;
        QuaternionT<float> local_70(0.0, 0.0, 1.0, 0.0);
        (*((&result + 8))) * local_90;
        QuaternionT<float> local_50(0.0, 1.0, 0.0, 0.0);
        local_60 quaternion;
        QuaternionT<float> local_40(0.0, 0.0, 1.0, 0.0);
        (*((&result + 10))) * local_60;
        return result;
    }

} // namespace jag::graphicutils
