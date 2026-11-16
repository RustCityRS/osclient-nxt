// libs/graphics/shaderlib/utils/PackUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.shaderlib

namespace jag::graphics {
    class PackUtils {
    public:
        void NormalPackSphereMap(unsigned short (&arg1)[2], const math::Vector3T<float>& vector3);
        void PackColourToFloat(unsigned int arg1);
    };

    // 0x100bb32c0
    void PackUtils::NormalPackSphereMap(unsigned short (&arg1)[2], const math::Vector3T<float>& vector3) {
        float local_30;
        float local_2c;

        float local_24 = *(float*)vector3;
        float local_28 = *(float*)(vector3 + 4);
        float fVar1 = (float)::sqrt(local_28 * local_28 + local_24 * local_24);
        new (&local_30) math::Point(local_24 * (1.0 / fVar1), (1.0 / fVar1) * local_28);
        fVar1 = (float)::sqrt(0.5 - *(float*)(vector3 + 8) * 0.5);
        local_30 *= fVar1;
        uint64_t local_38 = local_30 * *0.5;
        Vector2T<float> local_48(0.5);
        local_30 = local_38 + local_48;
        *(short*)arg1 = (short)(int)(local_30 * 65535.0);
        *(short*)((long)arg1 + 2) = (short)(int)(local_2c * 65535.0);
    }

    // 0x100bb3400
    void PackUtils::PackColourToFloat(unsigned int arg1) {

        ImVec4 local_38(1.0, 0.003921569f, 1.53787e-05, 6.030863e-08);
        math local_28((float)(arg1 >> 24), (float)(arg1 >> 16 & 255), (float)(arg1 >> 8 & 255), (float)(arg1 & 255));
        local_28 /= 255.0;
        math::Vector4Dot<float>(&local_28, &local_38);
    }

} // namespace jag::graphics

// 0x100bb33c0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}
