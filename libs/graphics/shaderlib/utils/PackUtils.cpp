// libs/graphics/shaderlib/utils/PackUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.shaderlib

namespace jag::graphics {
    class PackUtils {
    public:
        void NormalPackSphereMap(unsigned short (&)[2], math::Vector3T<float> const&);
        void PackColourToFloat(unsigned int);
    };

    // 0x100bb32c0, 256 bytes, placed by class name and debug map
    // PackUtils::NormalPackSphereMap(unsigned short (&) [2], math::Vector3T<float> const&)
    void PackUtils::NormalPackSphereMap(unsigned short* param_1, Vector3T* param_2) {
        float fVar1;
        Vector2T<float> local_48[8];
        undefined8 local_40;
        undefined8 local_38;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        local_24 = *(float*)param_2;
        local_28 = *(float*)(param_2 + 4);
        fVar1 = (float)::sqrt(local_28 * local_28 + local_24 * local_24);
        new (&local_30) math::Point<float>(local_24 * (1.0 / fVar1), (1.0 / fVar1) * local_28);
        fVar1 = (float)::sqrt(0.5 - *(float*)(param_2 + 8) * 0.5);
        math::Vector2T<float>::operator*=((Vector2T<float>*)&local_30, fVar1);
        local_38 = math::operator*(0.5, (Vector2T*)&local_30);
        math::Vector2T<float>::Vector2T(local_48, 0.5);
        local_40 = math::operator+((Vector2T*)&local_38, (Vector2T*)local_48);
        math::Vector2T<float>::operator=((Vector2T<float>*)&local_30, (Vector2T*)&local_40);
        *(short*)param_1 = (short)(int)(local_30 * 65535.0);
        *(short*)(param_1 + 2) = (short)(int)(local_2c * 65535.0);
    }

    // 0x100bb3400, 160 bytes, placed by class name and debug map
    // PackUtils::PackColourToFloat(unsigned int)
    void PackUtils::PackColourToFloat(uint param_1) {
        Vector4T* extraout_RDX;
        ImVec4 local_38[16];
        undefined1 local_28[16];

        ImVec4::ImVec4(local_38, 1.0, 0.003921569, 1.53787e-05, 6.030863e-08);
        new (local_28) ImVec4((float)(param_1 >> 24), (float)(param_1 >> 16 & 255), (float)(param_1 >> 8 & 255),
                              (float)(param_1 & 255));
        math::Vector4T<float>::operator/=((Vector4T<float>*)local_28, 255.0);
        math::Vector4Dot<float>((math*)local_28, (Vector4T*)local_38, extraout_RDX);
    }

} // namespace jag::graphics

// 0x100bb33c0, 64 bytes, placed by neighbouring functions
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}
