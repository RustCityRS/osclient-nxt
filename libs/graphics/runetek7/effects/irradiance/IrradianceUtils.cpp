// libs/graphics/runetek7/effects/irradiance/IrradianceUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "IrradianceUtils.h"

namespace jag::graphics {
    // 0x10092e620
    void ComputeIrradianceSHCoefs(IrradianceSHCoefConsts& irradianceSHCoefConsts, int arg2, const float* arg3,
                                  const float* arg4, const float* arg5, float arg6, float arg7, float arg8) {
        long lVar1;
        IrradianceSHCoefConsts* pIVar2;
        uint64_t* puVar3;
        float* pfVar4;
        long* plVar5;
        float* pfVar6;
        IrradianceSHCoefConsts* local_50;
        float local_44;

        float local_3c = arg7;
        float local_38 = arg6;
        float local_34 = arg8;
        if (arg2 != 3) {
            LogAssert("order == 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "irradiance/IrradianceUtils.cpp",
                      65, nullptr);
        }
        float* local_70 = arg4;
        float* local_68 = arg5;
        array<math::Vector4T<float>, 3ul> local_a8;
        float local_40 = local_3c * -0.3257139;
        local_3c = local_3c * 0.3257139f;
        local_38 = local_38 * 0.2820765f;
        local_50 = (IrradianceSHCoefConsts*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(local_34 * 0.07884278f));
        unsigned long uVar7 = 0;
        do {
            puVar3 = &arg3[uVar7];
            pfVar6 = (float*)*puVar3;
            local_44 = pfVar6[3] * local_40;
            pfVar4 = &local_a8[uVar7];
            *pfVar4 = local_44;
            pfVar4[1] = pfVar6[1] * local_40;
            pfVar4[2] = pfVar6[2] * local_3c;
            pfVar4[3] = *pfVar6 * local_38 - pfVar6[6] * local_50._0_4_;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 3);
        uVar7 = 0;
        QuaternionT<float>* quaternion = &local_a8[0];
        irradianceSHCoefConsts = *quaternion;
        QuaternionT<float>* local_60 = &local_a8[1];
        irradianceSHCoefConsts.field_16 = *local_60;
        QuaternionT<float>* local_58 = &local_a8[2];
        local_50 = irradianceSHCoefConsts;
        irradianceSHCoefConsts.field_32 = *local_58;
        local_44 = local_34 * 0.27311942f;
        local_3c = local_34 * -0.27311942;
        local_38 = local_34 * 0.23652834f;
        do {
            plVar5 = &arg3[uVar7];
            lVar1 = *plVar5;
            local_40 = *(float*)(lVar1 + 16) * local_44;
            pfVar6 = &local_a8[uVar7];
            pIVar2 = local_50;
            *pfVar6 = local_40;
            pfVar6[1] = *(float*)(lVar1 + 20) * local_3c;
            pfVar6[2] = *(float*)(lVar1 + 24) * local_38;
            pfVar6[3] = *(float*)(lVar1 + 28) * local_3c;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 3);
        local_50->field_48 = *quaternion;
        pIVar2->field_64 = *local_60;
        pIVar2->field_80 = *local_58;
        plVar5 = &arg3[0];
        local_34 = local_34 * 0.13655971f;
        *(float*)quaternion = *(float*)(*plVar5 + 32) * local_34;
        plVar5 = &arg3[1];
        *(float*)(quaternion + 4) = *(float*)(*plVar5 + 32) * local_34;
        plVar5 = &arg3[2];
        *(float*)(quaternion + 8) = local_34 * *(float*)(*plVar5 + 32);
        *(uint32_t*)(quaternion + 12) = 1065353216;
        pIVar2->field_96 = *quaternion;
    }

    // 0x10092e970
    void GetDefaultIrradianceSHCoefs(std::array<float, 9ul>& arg1, std::array<float, 9ul>& arg2,
                                     std::array<float, 9ul>& arg3) {
        *(uint32_t*)(arg1 + 32) = 1049558599;
        *(uint64_t*)(arg1 + 16) = 13576806060106426158;
        *(uint64_t*)(arg1 + 24) = 4402766994731568501;
        *(uint64_t*)arg1 = 13755102064699655495;
        *(uint64_t*)(arg1 + 8) = 4449462171211842899;
        *(uint32_t*)(arg2 + 32) = 1057315386;
        *(uint64_t*)(arg2 + 16) = 4352344411528452840;
        *(uint64_t*)(arg2 + 24) = 4380565724671256881;
        *(uint64_t*)arg2 = 13777006273360531253;
        *(uint64_t*)(arg2 + 8) = 4473177069349027476;
        *(uint32_t*)(arg3 + 32) = 1058486533;
        *(uint64_t*)(arg3 + 16) = 4416963579627764787;
        *(uint64_t*)(arg3 + 24) = 13575092078269581184;
        *(uint64_t*)arg3 = 13805163997351392751;
        *(uint64_t*)(arg3 + 8) = 4428904250132010364;
    }

    // 0x10092e9d0
    IrradianceSHCoefConsts::IrradianceSHCoefConsts() : math::Vector4T() {
        float* arg3 = ((array<float, 9ul>*)&SHCoefsDefaults::SHDefaultRedCoefs)->data();
        float* arg4 = ((array<float, 9ul>*)&SHCoefsDefaults::SHDefaultGreenCoefs)->data();
        float* arg5 = ((array<float, 9ul>*)&SHCoefsDefaults::SHDefaultBlueCoefs)->data();
        ComputeIrradianceSHCoefs(this, 3, arg3, arg4, arg5, 1.0, 1.0, 1.0);
    }

    // 0x10092eaa0
    IrradianceSHCoefConsts* operator+(const IrradianceSHCoefConsts& irradianceSHCoefConsts1,
                                      const IrradianceSHCoefConsts& irradianceSHCoefConsts2) {
        Vector4T<float>* in_RDX;
        uint64_t local_38[3];

        new (irradianceSHCoefConsts1) IrradianceSHCoefConsts();
        local_38[0] = irradianceSHCoefConsts2 + *in_RDX;
        irradianceSHCoefConsts1 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_16 + (*(in_RDX + 16));
        irradianceSHCoefConsts1.field_16 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_32 + (*(in_RDX + 32));
        irradianceSHCoefConsts1.field_32 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_48 + (*(in_RDX + 48));
        irradianceSHCoefConsts1.field_48 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_64 + (*(in_RDX + 64));
        irradianceSHCoefConsts1.field_64 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_80 + (*(in_RDX + 80));
        irradianceSHCoefConsts1.field_80 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_96 + (*(in_RDX + 96));
        irradianceSHCoefConsts1.field_96 = *local_38;
        return irradianceSHCoefConsts1;
    }

    // 0x10092ebc0
    IrradianceSHCoefConsts* operator-(const IrradianceSHCoefConsts& irradianceSHCoefConsts1,
                                      const IrradianceSHCoefConsts& irradianceSHCoefConsts2) {
        Vector4T<float>* in_RDX;
        uint64_t local_38[3];

        new (irradianceSHCoefConsts1) IrradianceSHCoefConsts();
        local_38[0] = irradianceSHCoefConsts2 - *in_RDX;
        irradianceSHCoefConsts1 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_16 - (*(in_RDX + 16));
        irradianceSHCoefConsts1.field_16 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_32 - (*(in_RDX + 32));
        irradianceSHCoefConsts1.field_32 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_48 - (*(in_RDX + 48));
        irradianceSHCoefConsts1.field_48 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_64 - (*(in_RDX + 64));
        irradianceSHCoefConsts1.field_64 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_80 - (*(in_RDX + 80));
        irradianceSHCoefConsts1.field_80 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_96 - (*(in_RDX + 96));
        irradianceSHCoefConsts1.field_96 = *local_38;
        return irradianceSHCoefConsts1;
    }

    // 0x10092ece0
    IrradianceSHCoefConsts* operator*(const IrradianceSHCoefConsts& irradianceSHCoefConsts1,
                                      const IrradianceSHCoefConsts& irradianceSHCoefConsts2) {
        Vector4T<float>* in_RDX;
        uint64_t local_38[3];

        new (irradianceSHCoefConsts1) IrradianceSHCoefConsts();
        local_38[0] = irradianceSHCoefConsts2 * *in_RDX;
        irradianceSHCoefConsts1 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_16 * (*(in_RDX + 16));
        irradianceSHCoefConsts1.field_16 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_32 * (*(in_RDX + 32));
        irradianceSHCoefConsts1.field_32 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_48 * (*(in_RDX + 48));
        irradianceSHCoefConsts1.field_48 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_64 * (*(in_RDX + 64));
        irradianceSHCoefConsts1.field_64 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_80 * (*(in_RDX + 80));
        irradianceSHCoefConsts1.field_80 = *local_38;
        local_38[0] = irradianceSHCoefConsts2.field_96 * (*(in_RDX + 96));
        irradianceSHCoefConsts1.field_96 = *local_38;
        return irradianceSHCoefConsts1;
    }

    // 0x10092ee50
    IrradianceSHCoefConsts* operator*(const IrradianceSHCoefConsts& irradianceSHCoefConsts, float arg2) {
        Vector4T<float>* in_RSI;
        uint64_t in_XMM1_Qa;

        new (irradianceSHCoefConsts) IrradianceSHCoefConsts();
        uint64_t local_38 = *in_RSI * *arg2;
        uint32_t uStack_30 = (uint32_t)in_XMM1_Qa;
        uint32_t uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        irradianceSHCoefConsts = local_38;
        uint64_t uVar1 = (*(in_RSI + 16)) * *arg2;
        uStack_30 = (uint32_t)in_XMM1_Qa;
        uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        irradianceSHCoefConsts.field_16 = local_38;
        uVar1 = (*(in_RSI + 32)) * *arg2;
        uStack_30 = (uint32_t)in_XMM1_Qa;
        uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        irradianceSHCoefConsts.field_32 = local_38;
        uVar1 = (*(in_RSI + 48)) * *arg2;
        uStack_30 = (uint32_t)in_XMM1_Qa;
        uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        irradianceSHCoefConsts.field_48 = local_38;
        uVar1 = (*(in_RSI + 64)) * *arg2;
        uStack_30 = (uint32_t)in_XMM1_Qa;
        uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        irradianceSHCoefConsts.field_64 = local_38;
        uVar1 = (*(in_RSI + 80)) * *arg2;
        uStack_30 = (uint32_t)in_XMM1_Qa;
        uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        irradianceSHCoefConsts.field_80 = local_38;
        uVar1 = (*(in_RSI + 96)) * *arg2;
        uStack_30 = (uint32_t)in_XMM1_Qa;
        uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        local_38 = uVar1;
        irradianceSHCoefConsts.field_96 = local_38;
        return irradianceSHCoefConsts;
    }

    // 0x10092ef70
    void CalculateIrradianceFromCubeMap(IrradianceSHCoefConsts& irradianceSHCoefConsts, const TextureData& textureData,
                                        const render::Format& format) {
        unsigned int uVar1;
        ResourceDataT<unsigned char>* resourceDataT;
        int arg2;
        unsigned int uVar3;
        array<float, 9ul> local_1e0;
        array<float, 9ul> local_1b8;
        ResourceDataT<unsigned char const> local_190;
        int local_154;

        unsigned char* arg1 = (unsigned char*)((unique_ptr<unsigned char[]>*)textureData)->get();
        fixed_vector<render::ImageData, 6ul> local_150;
        int iVar2 = 0;
        do {
            resourceDataT = (ResourceDataT<unsigned char>*)eastl::fixed_vector<render::ImageData, 6ul>::push_back();
            *(uint32_t*)(resourceDataT + 24) = *(uint32_t*)&textureData.field_16;
            *(uint32_t*)(resourceDataT + 28) = *(uint32_t*)((long)&textureData.field_16 + 4);
            *(Format*)(resourceDataT + 32) = format;
            local_190 = render::ResourceDataT(arg1, 0, 0, false);
            local_154 = iVar2;
            *resourceDataT = local_190;
            if (*(int*)((long)&textureData.field_8 + 4) != 0) {
                iVar2 = *(int*)&textureData.field_16;
                arg2 = *(int*)((long)&textureData.field_16 + 4);
                uVar3 = 0;
                do {
                    uVar1 = render::GetImageByteSize(iVar2, arg2, format, 0);
                    arg1 = arg1 + uVar1;
                    iVar2 = iVar2 / 2;
                    arg2 = arg2 / 2;
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(unsigned int*)((long)&textureData.field_8 + 4));
            }
            iVar2 = local_154 + 1;
        } while (iVar2 != 6);
        auto arg3 = local_190.data();
        auto arg4 = local_1e0.data();
        auto arg5 = local_1b8.data();
        SHProjectCubeMap(3, &local_150, arg3, arg4, arg5);
        ComputeIrradianceSHCoefs(irradianceSHCoefConsts, 3, arg3, arg4, arg5, 1.0, 1.0, 1.0);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10092ee00
    Vector4T<float> operator* <float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42) {
        uint8_t auVar1[16];

        ImVec4 local_18(*(float*)vector42 * *(float*)vector41, *(float*)(vector42 + 4) * *(float*)(vector41 + 4),
                        *(float*)(vector42 + 8) * *(float*)(vector41 + 8),
                        *(float*)(vector42 + 12) * *(float*)(vector41 + 12));
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

} // namespace jag::math
