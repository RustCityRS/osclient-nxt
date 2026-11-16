// libs/graphics/graphicutils/ViewUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb57b0, 672 bytes, placed by debug map only (low confidence)
    // CUBEMAP_FACE_CAMERA_ROTATIONS(math::QuaternionT<float> const&)
    graphicutils* CUBEMAP_FACE_CAMERA_ROTATIONS(QuaternionT* param_1) {
        undefined1 local_150[32];
        QuaternionT<float> local_130[16];
        undefined1 local_120[32];
        QuaternionT<float> local_100[16];
        undefined1 local_f0[32];
        QuaternionT<float> local_d0[16];
        undefined1 local_c0[32];
        QuaternionT<float> local_a0[16];
        undefined1 local_90[32];
        QuaternionT<float> local_70[16];
        undefined1 local_60[16];
        QuaternionT<float> local_50[16];
        QuaternionT<float> local_40[16];

        new ((local_150 + 16)) math::QuaternionT<float>(0.0, 0.70710677, 0.0, 0.70710677);
        math::operator*((math*)local_150, param_1, (QuaternionT*)(local_150 + 16));
        math::QuaternionT<float>::QuaternionT(local_130, 1.0, 0.0, 0.0, 0.0);
        math::operator*((math*)this, (QuaternionT*)local_150, (QuaternionT*)local_130);
        new ((local_120 + 16)) math::QuaternionT<float>(0.0, -0.70710677, 0.0, 0.70710677);
        math::operator*((math*)local_120, param_1, (QuaternionT*)(local_120 + 16));
        math::QuaternionT<float>::QuaternionT(local_100, 1.0, 0.0, 0.0, 0.0);
        math::operator*((math*)&field_16, (QuaternionT*)local_120, (QuaternionT*)local_100);
        new ((local_f0 + 16)) math::QuaternionT<float>(-0.70710677, 0.0, 0.0, 0.70710677);
        math::operator*((math*)local_f0, param_1, (QuaternionT*)(local_f0 + 16));
        math::QuaternionT<float>::QuaternionT(local_d0, 0.0, 0.0, 1.0, 0.0);
        math::operator*((math*)&field_32, (QuaternionT*)local_f0, (QuaternionT*)local_d0);
        new ((local_c0 + 16)) math::QuaternionT<float>(0.70710677, 0.0, 0.0, 0.70710677);
        math::operator*((math*)local_c0, param_1, (QuaternionT*)(local_c0 + 16));
        math::QuaternionT<float>::QuaternionT(local_a0, 0.0, 0.0, 1.0, 0.0);
        math::operator*((math*)&field_48, (QuaternionT*)local_c0, (QuaternionT*)local_a0);
        new ((local_90 + 16)) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
        math::operator*((math*)local_90, param_1, (QuaternionT*)(local_90 + 16));
        math::QuaternionT<float>::QuaternionT(local_70, 0.0, 0.0, 1.0, 0.0);
        math::operator*((math*)&field_64, (QuaternionT*)local_90, (QuaternionT*)local_70);
        math::QuaternionT<float>::QuaternionT(local_50, 0.0, 1.0, 0.0, 0.0);
        math::operator*((math*)local_60, param_1, (QuaternionT*)local_50);
        math::QuaternionT<float>::QuaternionT(local_40, 0.0, 0.0, 1.0, 0.0);
        math::operator*((math*)field_80, (QuaternionT*)local_60, (QuaternionT*)local_40);
        return this;
    }

} // namespace jag::graphicutils
