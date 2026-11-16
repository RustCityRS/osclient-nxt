// libs/graphics/runetek7/renderer/renderpasses/ShadowPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ShadowCubeMapAtlasData {
    public:
        ShadowCubeMapAtlasData(const graphicutils::TextureAtlasSlotPacker& textureAtlasSlotPacker,
                               const std::array<graphicutils::TextureAtlasSlot2D, 6ul>& textureAtlasSlot2Ds,
                               unsigned int arg3, unsigned int arg4, unsigned int arg5, unsigned int arg6);
        ShadowCubeMapAtlasData(ShadowCubeMapAtlasData&& shadowCubeMapAtlasData);

    private:
        uint8_t _unknown_0[36];
        unsigned int field_36;
        unsigned int field_40;
        uint64_t field_44;
        uint64_t field_52;
        uint8_t _unknown_60[100];
        uint64_t field_160;
        uint64_t field_168;
        uint64_t field_176;
        uint64_t field_184;
        uint64_t field_192;
        uint64_t field_200;
        uint64_t field_208;
        uint64_t field_216;
        uint64_t field_224;
        uint64_t field_232;
        uint64_t field_240;
        uint64_t field_248;
    };

    class ShadowPass : public SceneRenderPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ShadowPass();
        virtual ShadowPass* GetOcclusionRTName();
        ShadowPass(RenderPassType renderPassType, render::RenderTargetsManager* renderTargetsManager,
                   ThreadPool* threadPool);

    private:
        uint8_t _unknown_8[8];
        OcclusionManager field_16;
        uint8_t _unknown_729[47];
        char field_776;
        bool field_777;
        uint8_t field_778;
        uint8_t _unknown_779[1];
        int field_780;
        RenderTargetsManager* field_784;
        unsigned int field_792;
    };

    // 0x1008cc480
    ShadowPass* ShadowPass::GetOcclusionRTName() {

        new (this) eastl::string("ShadowPass");
        return this;
    }

    // 0x1008cc840
    PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::~$_2() {
        ((this + 8))->~shared_ptr();
    }

    // 0x1008ccb20
    ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(
        const graphicutils::TextureAtlasSlotPacker& textureAtlasSlotPacker,
        const std::array<graphicutils::TextureAtlasSlot2D, 6ul>& textureAtlasSlot2Ds, unsigned int arg3,
        unsigned int arg4, unsigned int arg5, unsigned int arg6) {
        unsigned short* puVar1;
        Rect<unsigned int>* this_00;
        Rect<float>* this_01;
        uint64_t uVar2;
        uint8_t local_58[16];

        float local_34 = (float)arg5;
        new (this) std::array<graphicutils::TextureAtlasSlot2D, 6ul>(textureAtlasSlot2Ds);
        field_36 = arg3;
        field_40 = arg4;
        new (&field_44) math::Vector2T();
        new (&field_52) math::Vector2T();
        array<math::Rect<unsigned int>, 6ul>* local_40 = (array<math::Rect<unsigned int>, 6ul>*)&field_60;
        new (local_40) std::array<math::Rect<unsigned int>, 6ul>();
        new (&field_160) std::array<math::Vector4T<float>, 6ul>();
        local_34 = 1.0 / (float)(unsigned int)local_34;
        float local_38 = 1.0 / (float)arg6;
        field_44.Set((float)field_36 * local_34, (float)field_40 * local_38);
        float fVar3 = local_38;
        field_52.Set(local_34, local_38);
        unsigned long arg1 = 0;
        do {
            puVar1 = &textureAtlasSlot2Ds[arg1];
            *local_58 = textureAtlasSlotPacker.GetTexturePixelRegion((unsigned int)*puVar1, (unsigned int)puVar1[1]);
            this_00 = (Rect<unsigned int>*)(*local_40)[arg1];
            *this_00 = *local_58;
            uVar2 = textureAtlasSlotPacker.GetTextureUVCoordinates((unsigned int)*puVar1, (unsigned int)puVar1[1]);
            local_58._8_4_ = fVar3;
            local_58._12_4_ = 0;
            local_58._0_8_ = uVar2;
            this_01 = &field_160[arg1];
            *this_01 = *local_58;
            arg1 = arg1 + 1;
        } while (arg1 != 6);
    }

    // 0x1008cdd30
    void zyz(float* arg1, float& arg2, float& arg3, float& arg4, float& arg5, float& arg6, float& arg7) {
        float fVar2 = arg1[8];
        float fVar1 = (float)::sqrt(1.0 - fVar2 * fVar2);
        if (0.0001 <= fVar1) {
            arg4 = fVar2;
            arg5 = fVar1;
            fVar2 = arg1[6];
            fVar1 = (float)::sqrt(arg1[7] * arg1[7] + fVar2 * fVar2);
            arg2 = -fVar2 * (1.0 / fVar1);
            arg3 = (1.0 / fVar1) * arg1[7];
            fVar2 = arg1[2];
            fVar1 = (float)::sqrt(arg1[5] * arg1[5] + fVar2 * fVar2);
            arg6 = fVar2 * (1.0 / fVar1);
            fVar2 = (1.0 / fVar1) * arg1[5];
        } else {
            arg2 = 1.0;
            arg3 = 0.0;
            arg4 = fVar2;
            arg5 = 0.0;
            arg6 = fVar2 * *arg1;
            fVar2 = -arg1[1];
        }
        arg7 = fVar2;
    }

    // 0x1008cde70
    void sh3_rot(float* arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float* arg8,
                 float* arg9) {
        float local_80[3];
        float local_74[3];
        float local_68[3];
        float local_5c[3];
        float local_50[3];
        float local_44[3];

        rot_3(arg2, arg3, local_44, local_50);
        rot_3(arg4, arg5, local_5c, local_68);
        rot_3(arg6, arg7, local_74, local_80);
        *arg9 = *arg8;
        sh_rot_1(arg1, arg8 + 1, arg9 + 1);
        sh_rotzyz_2(local_44, local_50, local_5c, local_68, local_74, local_80, arg8 + 4, arg9 + 4);
        sh_rotzyz_3(local_44, local_50, local_5c, local_68, local_74, local_80, arg8 + 9, arg9 + 9);
    }

    // 0x1008cdf90
    void rot_3(float arg1, float arg2, float* arg3, float* arg4) {
        float fVar1 = arg1 + arg1;
        *arg3 = arg1;
        *arg4 = arg2;
        arg3[1] = fVar1 * arg1 - 1.0;
        arg4[1] = fVar1 * arg2;
        arg3[2] = arg3[1] * fVar1 - arg1;
        arg4[2] = fVar1 * arg4[1] - arg2;
    }

    // 0x1008cdff0
    void sh_rot_1(float* arg1, float* arg2, float* arg3) {
        float fVar1 = *arg2;
        float fVar2 = arg2[1];
        float fVar3 = arg2[2];
        float fVar4 = arg1[8];
        float fVar5 = arg1[7];
        float fVar6 = arg1[6];
        float fVar7 = arg1[1];
        float fVar8 = arg1[2];
        float fVar9 = *arg1;
        *arg3 = arg1[3] * fVar3 + (arg1[4] * fVar1 - arg1[5] * fVar2);
        arg3[1] = fVar4 * fVar2 - (fVar6 * fVar3 + fVar5 * fVar1);
        arg3[2] = fVar3 * fVar9 + (fVar1 * fVar7 - fVar2 * fVar8);
    }

    // 0x1008ce070
    void sh_rotzyz_2(float* arg1, float* arg2, float* arg3, float* arg4, float* arg5, float* arg6, float* arg7,
                     float* arg8) {
        float local_58[8];

        sh_rotz_2(arg1, arg2, arg7, arg8);
        sh_roty_2(arg3, arg4, arg8, local_58);
        sh_rotz_2(arg5, arg6, local_58, arg8);
    }

    // 0x1008ce100
    void sh_rotzyz_3(float* arg1, float* arg2, float* arg3, float* arg4, float* arg5, float* arg6, float* arg7,
                     float* arg8) {
        float local_58[8];

        sh_rotz_3(arg1, arg2, arg7, arg8);
        sh_roty_3(arg3, arg4, arg8, local_58);
        sh_rotz_3(arg5, arg6, local_58, arg8);
    }

    // 0x1008ce190
    void sh_rotz_2(float* arg1, float* arg2, float* arg3, float* arg4) {
        arg4[2] = arg3[2];
        rot_inv(*arg1, *arg2, arg3[1], arg3[3], arg4 + 1, arg4 + 3);
        rot_inv(arg1[1], arg2[1], *arg3, arg3[4], arg4, arg4 + 4);
    }

    // 0x1008ce200
    void sh_roty_2(float* arg1, float* arg2, float* arg3, float* arg4) {
        float local_48[6];

        sh_rotx90_2(arg3, arg4);
        sh_rotz_2(arg1, arg2, arg4, local_48);
        sh_rotx90_inv_2(local_48, arg4);
    }

    // 0x1008ce280
    void rot_inv(float arg1, float arg2, float arg3, float arg4, float& arg5, float& arg6) {
        arg5 = arg4 * arg2 + arg3 * arg1;
        arg6 = arg4 * arg1 - arg3 * arg2;
    }

    // 0x1008ce2b0
    void sh_rotx90_2(float* arg1, float* arg2) {
        *arg2 = arg1[3] * fx_2_001;
        float fVar1 = fx_2_002;
        arg2[1] = arg1[1] * fx_2_002;
        float fVar2 = fx_2_004;
        arg2[2] = arg1[4] * fx_2_004 + arg1[2] * fx_2_003;
        arg2[3] = fVar1 * *arg1;
        arg2[4] = arg1[4] * fx_2_005 + fVar2 * arg1[2];
    }

    // 0x1008ce330
    void sh_rotx90_inv_2(float* arg1, float* arg2) {
        float fVar1 = fx_2_002;
        *arg2 = arg1[3] * fx_2_002;
        arg2[1] = fVar1 * arg1[1];
        fVar1 = fx_2_004;
        arg2[2] = arg1[4] * fx_2_004 + arg1[2] * fx_2_003;
        arg2[3] = *arg1 * fx_2_001;
        arg2[4] = arg1[4] * fx_2_005 + fVar1 * arg1[2];
    }

    // 0x1008ce3b0
    void sh_rotz_3(float* arg1, float* arg2, float* arg3, float* arg4) {
        arg4[3] = arg3[3];
        rot_inv(*arg1, *arg2, arg3[2], arg3[4], arg4 + 2, arg4 + 4);
        rot_inv(arg1[1], arg2[1], arg3[1], arg3[5], arg4 + 1, arg4 + 5);
        rot_inv(arg1[2], arg2[2], *arg3, arg3[6], arg4, arg4 + 6);
    }

    // 0x1008ce440
    void sh_roty_3(float* arg1, float* arg2, float* arg3, float* arg4) {
        float local_58[10];

        sh_rotx90_3(arg3, arg4);
        sh_rotz_3(arg1, arg2, arg4, local_58);
        sh_rotx90_inv_3(local_58, arg4);
    }

    // 0x1008ce4c0
    void sh_rotx90_3(float* arg1, float* arg2) {
        float fVar2 = fx_3_002;
        float fVar1 = fx_3_001;
        *arg2 = arg1[5] * fx_3_002 + arg1[3] * fx_3_001;
        arg2[1] = arg1[1] * fx_3_003;
        float fVar3 = fx_3_004;
        arg2[2] = arg1[5] * fVar1 + arg1[3] * fx_3_004;
        arg2[3] = fVar2 * arg1[2] + *arg1 * fx_3_008;
        fVar2 = fx_3_006;
        arg2[4] = arg1[6] * fx_3_006 + arg1[4] * fx_3_005;
        arg2[5] = fVar3 * *arg1 - fVar1 * arg1[2];
        arg2[6] = arg1[6] * fx_3_007 + fVar2 * arg1[4];
    }

    // 0x1008ce5a0
    void sh_rotx90_inv_3(float* arg1, float* arg2) {
        float fVar3 = fx_3_004;
        *arg2 = arg1[5] * fx_3_004 + arg1[3] * fx_3_008;
        arg2[1] = arg1[1] * fx_3_003;
        float fVar2 = fx_3_002;
        float fVar1 = fx_3_001;
        arg2[2] = arg1[3] * fx_3_002 - arg1[5] * fx_3_001;
        arg2[3] = fVar3 * arg1[2] + *arg1 * fVar1;
        fVar3 = fx_3_006;
        arg2[4] = arg1[6] * fx_3_006 + arg1[4] * fx_3_005;
        arg2[5] = fVar1 * arg1[2] + fVar2 * *arg1;
        arg2[6] = arg1[6] * fx_3_007 + fVar3 * arg1[4];
    }

    // 0x1008ce680
    void sh4_rot(float* arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float* arg8,
                 float* arg9) {
        float local_98[4];
        float local_88[4];
        float local_78[4];
        float local_68[4];
        float local_58[4];
        float local_48[4];

        rot_4(arg2, arg3, local_48, local_58);
        rot_4(arg4, arg5, local_68, local_78);
        rot_4(arg6, arg7, local_88, local_98);
        *arg9 = *arg8;
        sh_rot_1(arg1, arg8 + 1, arg9 + 1);
        sh_rotzyz_2(local_48, local_58, local_68, local_78, local_88, local_98, arg8 + 4, arg9 + 4);
        sh_rotzyz_3(local_48, local_58, local_68, local_78, local_88, local_98, arg8 + 9, arg9 + 9);
        sh_rotzyz_4(local_48, local_58, local_68, local_78, local_88, local_98, arg8 + 16, arg9 + 16);
    }

    // 0x1008ce7e0
    void rot_4(float arg1, float arg2, float* arg3, float* arg4) {
        float fVar1 = arg1 + arg1;
        *arg3 = arg1;
        *arg4 = arg2;
        arg3[1] = fVar1 * arg1 - 1.0;
        arg4[1] = fVar1 * arg2;
        arg3[2] = arg3[1] * fVar1 - arg1;
        arg4[2] = arg4[1] * fVar1 - arg2;
        arg3[3] = arg3[2] * fVar1 - arg3[1];
        arg4[3] = fVar1 * arg4[2] - arg4[1];
    }

    // 0x1008ce860
    void sh_rotzyz_4(float* arg1, float* arg2, float* arg3, float* arg4, float* arg5, float* arg6, float* arg7,
                     float* arg8) {
        float local_68[12];

        sh_rotz_4(arg1, arg2, arg7, arg8);
        sh_roty_4(arg3, arg4, arg8, local_68);
        sh_rotz_4(arg5, arg6, local_68, arg8);
    }

    // 0x1008ce8f0
    void sh_rotz_4(float* arg1, float* arg2, float* arg3, float* arg4) {
        arg4[4] = arg3[4];
        rot_inv(*arg1, *arg2, arg3[3], arg3[5], arg4 + 3, arg4 + 5);
        rot_inv(arg1[1], arg2[1], arg3[2], arg3[6], arg4 + 2, arg4 + 6);
        rot_inv(arg1[2], arg2[2], arg3[1], arg3[7], arg4 + 1, arg4 + 7);
        rot_inv(arg1[3], arg2[3], *arg3, arg3[8], arg4, arg4 + 8);
    }

    // 0x1008ce9b0
    void sh_roty_4(float* arg1, float* arg2, float* arg3, float* arg4) {
        float local_58[10];

        sh_rotx90_4(arg3, arg4);
        sh_rotz_4(arg1, arg2, arg4, local_58);
        sh_rotx90_inv_4(local_58, arg4);
    }

    // 0x1008cea30
    void sh_rotx90_4(float* arg1, float* arg2) {
        float fVar2 = fx_4_002;
        float fVar1 = fx_4_001;
        *arg2 = arg1[7] * fx_4_002 + arg1[5] * fx_4_001;
        float fVar3 = fx_4_004;
        arg2[1] = arg1[3] * fx_4_004 + arg1[1] * fx_4_003;
        float fVar4 = fx_4_005;
        arg2[2] = arg1[7] * fVar1 + arg1[5] * fx_4_005;
        arg2[3] = arg1[3] * fx_4_006 + fVar3 * arg1[1];
        float fVar5 = fx_4_009;
        fVar3 = fx_4_008;
        arg2[4] = arg1[8] * fx_4_009 + arg1[6] * fx_4_008 + arg1[4] * fx_4_007;
        arg2[5] = fVar2 * arg1[2] + *arg1 * fx_4_013;
        fVar2 = fx_4_011;
        arg2[6] = arg1[8] * fx_4_011 + arg1[6] * fx_4_010 + fVar3 * arg1[4];
        arg2[7] = fVar4 * *arg1 - fVar1 * arg1[2];
        arg2[8] = arg1[8] * fx_4_012 + fVar2 * arg1[6] + fVar5 * arg1[4];
    }

    // 0x1008ceb90
    void sh_rotx90_inv_4(float* arg1, float* arg2) {
        float fVar4 = fx_4_005;
        *arg2 = arg1[7] * fx_4_005 + arg1[5] * fx_4_013;
        float fVar3 = fx_4_004;
        arg2[1] = arg1[3] * fx_4_004 + arg1[1] * fx_4_003;
        float fVar2 = fx_4_002;
        float fVar1 = fx_4_001;
        arg2[2] = arg1[5] * fx_4_002 - arg1[7] * fx_4_001;
        arg2[3] = arg1[3] * fx_4_006 + fVar3 * arg1[1];
        float fVar5 = fx_4_009;
        fVar3 = fx_4_008;
        arg2[4] = arg1[8] * fx_4_009 + arg1[6] * fx_4_008 + arg1[4] * fx_4_007;
        arg2[5] = fVar4 * arg1[2] + *arg1 * fVar1;
        fVar4 = fx_4_011;
        arg2[6] = arg1[8] * fx_4_011 + arg1[6] * fx_4_010 + fVar3 * arg1[4];
        arg2[7] = fVar1 * arg1[2] + fVar2 * *arg1;
        arg2[8] = arg1[8] * fx_4_012 + fVar4 * arg1[6] + fVar5 * arg1[4];
    }

    // 0x1008cecf0
    void sh5_rot(float* arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float* arg8,
                 float* arg9) {
        float local_f8[8];
        float local_d8[8];
        float local_b8[8];
        float local_98[8];
        float local_78[8];
        float local_58[8];

        rot_5(arg2, arg3, local_58, local_78);
        rot_5(arg4, arg5, local_98, local_b8);
        rot_5(arg6, arg7, local_d8, local_f8);
        *arg9 = *arg8;
        sh_rot_1(arg1, arg8 + 1, arg9 + 1);
        sh_rotzyz_2(local_58, local_78, local_98, local_b8, local_d8, local_f8, arg8 + 4, arg9 + 4);
        sh_rotzyz_3(local_58, local_78, local_98, local_b8, local_d8, local_f8, arg8 + 9, arg9 + 9);
        sh_rotzyz_4(local_58, local_78, local_98, local_b8, local_d8, local_f8, arg8 + 16, arg9 + 16);
        sh_rotzyz_5(local_58, local_78, local_98, local_b8, local_d8, local_f8, arg8 + 25, arg9 + 25);
    }

    // 0x1008ceeb0
    void rot_5(float arg1, float arg2, float* arg3, float* arg4) {
        float fVar1 = arg1 + arg1;
        *arg3 = arg1;
        *arg4 = arg2;
        arg3[1] = fVar1 * arg1 - 1.0;
        arg4[1] = fVar1 * arg2;
        arg3[2] = arg3[1] * fVar1 - arg1;
        arg4[2] = arg4[1] * fVar1 - arg2;
        arg3[3] = arg3[2] * fVar1 - arg3[1];
        arg4[3] = arg4[2] * fVar1 - arg4[1];
        arg3[4] = arg3[3] * fVar1 - arg3[2];
        arg4[4] = fVar1 * arg4[3] - arg4[2];
    }

    // 0x1008cef60
    void sh_rotzyz_5(float* arg1, float* arg2, float* arg3, float* arg4, float* arg5, float* arg6, float* arg7,
                     float* arg8) {
        float local_68[12];

        sh_rotz_5(arg1, arg2, arg7, arg8);
        sh_roty_5(arg3, arg4, arg8, local_68);
        sh_rotz_5(arg5, arg6, local_68, arg8);
    }

    // 0x1008ceff0
    void sh_rotz_5(float* arg1, float* arg2, float* arg3, float* arg4) {
        arg4[5] = arg3[5];
        rot_inv(*arg1, *arg2, arg3[4], arg3[6], arg4 + 4, arg4 + 6);
        rot_inv(arg1[1], arg2[1], arg3[3], arg3[7], arg4 + 3, arg4 + 7);
        rot_inv(arg1[2], arg2[2], arg3[2], arg3[8], arg4 + 2, arg4 + 8);
        rot_inv(arg1[3], arg2[3], arg3[1], arg3[9], arg4 + 1, arg4 + 9);
        rot_inv(arg1[4], arg2[4], *arg3, arg3[10], arg4, arg4 + 10);
    }

    // 0x1008cf0d0
    void sh_roty_5(float* arg1, float* arg2, float* arg3, float* arg4) {
        float local_68[14];

        sh_rotx90_5(arg3, arg4);
        sh_rotz_5(arg1, arg2, arg4, local_68);
        sh_rotx90_inv_5(local_68, arg4);
    }

    // 0x1008cf150
    void sh_rotx90_5(float* arg1, float* arg2) {
        *arg2 = arg1[9] * fx_5_003 + arg1[7] * fx_5_002 + arg1[5] * fx_5_001;
        float fVar1 = fx_5_005;
        arg2[1] = arg1[3] * fx_5_005 + arg1[1] * fx_5_004;
        float fVar3 = fx_5_008;
        float fVar2 = fx_5_007;
        arg2[2] = arg1[9] * fx_5_008 + arg1[7] * fx_5_007 + arg1[5] * fx_5_006;
        arg2[3] = arg1[3] * fx_5_009 + fVar1 * arg1[1];
        float fVar4 = fx_5_012;
        fVar1 = fx_5_011;
        arg2[4] = arg1[9] * fx_5_012 + arg1[7] * fx_5_011 + arg1[5] * fx_5_010;
        arg2[5] = arg1[4] * fx_5_023 + arg1[2] * fx_5_022 + *arg1 * fx_5_019;
        float fVar6 = fx_5_015;
        float fVar5 = fx_5_014;
        arg2[6] = arg1[10] * fx_5_015 + arg1[8] * fx_5_014 + arg1[6] * fx_5_013;
        arg2[7] = *arg1 * fx_5_020 - (fVar1 * arg1[4] + fVar2 * arg1[2]);
        fVar1 = fx_5_017;
        arg2[8] = arg1[10] * fx_5_017 + arg1[8] * fx_5_016 + fVar5 * arg1[6];
        arg2[9] = *arg1 * fx_5_021 - (fVar4 * arg1[4] + fVar3 * arg1[2]);
        arg2[10] = arg1[10] * fx_5_018 + fVar1 * arg1[8] + fVar6 * arg1[6];
    }

    // 0x1008cf350
    void sh_rotx90_inv_5(float* arg1, float* arg2) {
        *arg2 = arg1[9] * fx_5_021 + arg1[7] * fx_5_020 + arg1[5] * fx_5_019;
        float fVar1 = fx_5_005;
        arg2[1] = arg1[3] * fx_5_005 + arg1[1] * fx_5_004;
        float fVar3 = fx_5_008;
        float fVar2 = fx_5_007;
        arg2[2] = arg1[5] * fx_5_022 - (arg1[9] * fx_5_008 + arg1[7] * fx_5_007);
        arg2[3] = arg1[3] * fx_5_009 + fVar1 * arg1[1];
        float fVar4 = fx_5_012;
        fVar1 = fx_5_011;
        arg2[4] = arg1[5] * fx_5_023 - (arg1[9] * fx_5_012 + arg1[7] * fx_5_011);
        arg2[5] = arg1[4] * fx_5_010 + arg1[2] * fx_5_006 + *arg1 * fx_5_001;
        float fVar6 = fx_5_015;
        float fVar5 = fx_5_014;
        arg2[6] = arg1[10] * fx_5_015 + arg1[8] * fx_5_014 + arg1[6] * fx_5_013;
        arg2[7] = fVar1 * arg1[4] + fVar2 * arg1[2] + *arg1 * fx_5_002;
        fVar1 = fx_5_017;
        arg2[8] = arg1[10] * fx_5_017 + arg1[8] * fx_5_016 + fVar5 * arg1[6];
        arg2[9] = fVar4 * arg1[4] + fVar3 * arg1[2] + *arg1 * fx_5_003;
        arg2[10] = arg1[10] * fx_5_018 + fVar1 * arg1[8] + fVar6 * arg1[6];
    }

    // 0x1008cf860
    int SpriteAtlasMapping::TotalWidth() const {
        int* piVar3 = &field_104[0];
        int iVar1 = *piVar3;
        piVar3 = &field_8[0];
        int iVar2 = *piVar3;
        piVar3 = &field_8[2];
        return iVar1 + iVar2 + *piVar3;
    }

    // 0x1008cf8a0
    int SpriteAtlasMapping::TotalHeight() const {
        int* piVar3 = &field_104[1];
        int iVar1 = *piVar3;
        piVar3 = &field_8[1];
        int iVar2 = *piVar3;
        piVar3 = &field_8[3];
        return iVar1 + iVar2 + *piVar3;
    }

    // 0x1008cf8f0
    SpriteAtlasMapping::SpriteAtlasMapping() {
        new (&field_8) eastl::fixed_vector<int, 4ul>();
        new (&field_72) shared_ptr();
        new (&field_88) shared_ptr();
    }

    // 0x1008cf940
    SpriteAtlasMapping::~SpriteAtlasMapping() {
        field_8.~fixed_vector();
    }

    // 0x1008d2890
    PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::$_2($_2&& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) shared_ptr((arg1 + 8));
    }

    // 0x1008d28f0
    PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::$_2(const $_2& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 8)) shared_ptr((arg1 + 8));
    }

    // 0x1008d2930
    void PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::operator()(
        render::RenderContext& renderContext) const {
        shared_ptr<render::Texture2D>* this_00 = *(shared_ptr<render::Texture2D>**)this;
        long* plVar4 = (long*)(*this_00).operator->();
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar5 =
            (compressed_pair_imp<
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this_00)
                .operator->();
        auto puVar6 = pcVar5->second();
        uint32_t uVar1 = *puVar6;
        pcVar5 = (compressed_pair_imp<
                  eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                  eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this_00)
                     .operator->();
        long lVar7 = pcVar5->second();
        uint32_t uVar2 = *(uint32_t*)(lVar7 + 4);
        pcVar5 = (compressed_pair_imp<
                  eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                  eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*this_00)
                     .operator->();
        lVar7 = pcVar5->second();
        uint32_t uVar3 = *(uint32_t*)(lVar7 + 12);
        array<std::array<PointLightTextureData, 256ul>, 128ul>* this_01 =
            (array<std::array<PointLightTextureData, 256ul>, 128ul>*)(*((this + 8))).operator->();
        uint64_t uVar8 = ((array<PointLightTextureData, 256ul>*)(*this_01)[0])->data();
        (**(void (**)(...))(*plVar4 + 40))(plVar4, 0, 0, 0, uVar1, uVar2, uVar3, uVar8);
    }

    // 0x1008d4ad0
    ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(ShadowCubeMapAtlasData&& shadowCubeMapAtlasData)
        : std::array<graphicutils::TextureAtlasSlot2D, 6ul>(shadowCubeMapAtlasData),
          field_52(shadowCubeMapAtlasData.field_52) {
        unsigned int uVar8 = shadowCubeMapAtlasData.field_40;
        uint64_t uVar1 = shadowCubeMapAtlasData.field_44;
        field_36 = shadowCubeMapAtlasData.field_36;
        field_40 = uVar8;
        field_44 = uVar1;
        new (&field_60) std::array<math::Rect<unsigned int>, 6ul>(shadowCubeMapAtlasData.field_60);
        uVar1 = shadowCubeMapAtlasData.field_248;
        field_240 = shadowCubeMapAtlasData.field_240;
        field_248 = uVar1;
        uVar1 = shadowCubeMapAtlasData.field_232;
        field_224 = shadowCubeMapAtlasData.field_224;
        field_232 = uVar1;
        uVar1 = shadowCubeMapAtlasData.field_160;
        uint64_t uVar2 = shadowCubeMapAtlasData.field_168;
        uint64_t uVar3 = shadowCubeMapAtlasData.field_176;
        uint64_t uVar4 = shadowCubeMapAtlasData.field_184;
        uint64_t uVar5 = shadowCubeMapAtlasData.field_192;
        uint64_t uVar6 = shadowCubeMapAtlasData.field_200;
        uint64_t uVar7 = shadowCubeMapAtlasData.field_216;
        field_208 = shadowCubeMapAtlasData.field_208;
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        field_160 = uVar1;
        field_168 = uVar2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008ccb00
    LightShadowParams::LightShadowParams() : field_0(1), field_4(1), field_8(4575657222460355379) {}

    // 0x1008d0df0
    int DebugOverlayParticlesRender::UpdateHistogramData()::$_0::operator()(
        unsigned int arg1, const graphics::ParticleSystemRenderer::Metrics::PassDrawInfo& passDrawInfo) const {
        uint32_t in_register_00000034;

        return (int)this + *(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 4) +
               *(int*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 12);
    }

    // 0x1008d2460
    void hash_combine<int, int, int, int, int, int, int, int>(unsigned long& arg1, const int& arg2, const int& arg3,
                                                              const int& arg4, const int& arg5, const int& arg6,
                                                              const int& arg7, const int& arg8, const int& arg9) {
        hash_combine<int>(arg1, arg2);
        hash_combine<int, int, int, int, int, int, int>(arg1, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x1008d24c0
    void hash_combine<int, int, int, int, int, int, int>(unsigned long& arg1, const int& arg2, const int& arg3,
                                                         const int& arg4, const int& arg5, const int& arg6,
                                                         const int& arg7, const int& arg8) {
        hash_combine<int>(arg1, arg2);
        hash_combine<int, int, int, int, int, int>(arg1, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x1008d2520
    void hash_combine<int, int, int, int, int, int>(unsigned long& arg1, const int& arg2, const int& arg3,
                                                    const int& arg4, const int& arg5, const int& arg6,
                                                    const int& arg7) {
        hash_combine<int>(arg1, arg2);
        hash_combine<int, int, int, int, int>(arg1, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x1008d2570
    void hash_combine<int, int, int, int, int>(unsigned long& arg1, const int& arg2, const int& arg3, const int& arg4,
                                               const int& arg5, const int& arg6) {
        hash_combine<int>(arg1, arg2);
        hash_combine<int, int, int, int>(arg1, arg3, arg4, arg5, arg6);
    }

    // 0x1008d25c0
    void hash_combine<int, int, int, int>(unsigned long& arg1, const int& arg2, const int& arg3, const int& arg4,
                                          const int& arg5) {
        hash_combine<int>(arg1, arg2);
        hash_combine<int, int, int>(arg1, arg3, arg4, arg5);
    }

    // 0x1008d2600
    void hash_combine<int, int, int>(unsigned long& arg1, const int& arg2, const int& arg3, const int& arg4) {
        hash_combine<int>(arg1, arg2);
        hash_combine<int, int>(arg1, arg3, arg4);
    }

    // 0x1008d2640
    void hash_combine<int, int>(unsigned long& arg1, const int& arg2, const int& arg3) {
        hash_combine<int>(arg1, arg2);
        hash_combine<int>(arg1, arg3);
    }

    // 0x1008d2ae0
    graphics::PointLightIndicesEffect*
    placement_new<graphics::PointLightIndicesEffect, graphics::RT7Core&>(void* arg1, graphics::RT7Core& rt7Core) {
        new (arg1) graphics::PointLightIndicesEffect(rt7Core, 7);
        return arg1;
    }

    // 0x1008d2b00
    MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect, MakeSharedPool<graphics::PointLightIndicesEffect, 64>>*
    placement_new<MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect,
                                           MakeSharedPool<graphics::PointLightIndicesEffect, 64>>,
                  MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData*&,
                  graphics::PointLightIndicesEffect*>(
        void* arg1, MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData*& arg2,
        graphics::PointLightIndicesEffect*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect,
                                            MakeSharedPool<graphics::PointLightIndicesEffect, 64>>(arg2, arg3);
        return arg1;
    }

    // 0x1008d2de0
    MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect, MakeSharedPool<graphics::PointLightIndicesEffect, 64>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::PointLightIndicesEffect* pointLightIndicesEffect)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c08 + 16;
        *(void**)(this + 16) = arg1;
        *(PointLightIndicesEffect**)(this + 24) = pointLightIndicesEffect;
    }

    // 0x1008d2e20
    void MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect,
                                  MakeSharedPool<graphics::PointLightIndicesEffect, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::PointLightIndicesEffect, 64>::deallocate(arg1);
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x1008d2830
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&& arg1) {
        *(uint64_t*)this = 0;
        (shared_ptr<graphics::PointLightGridTextureData> const&)
            ->UpdateTexture()::$_2::__2((__2*)(this + 16), (__2*)arg1);
        *(void (**)(...))(this + 144) =
            function<graphics::PointLightGridTexture::UpdateTexture(
                         shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
                     void>((shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<graphics::PointLightGridTexture::UpdateTexture(
                         shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
                     void>((shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<graphics::PointLightGridTexture::UpdateTexture(
                         shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
                     void>((shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1008d28b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1008d28c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2::__2(arg1, (__2*)this);
    }

    // 0x1008d2910
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x1008d2920
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2::operator()((__2*)this, arg1);
    }

    // 0x1008d29f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x1008d2a00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2::~__2((__2*)this);
    }

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x1008cd7a0
    void Vector3T<float>::operator*=(const Matrix44T<float>& matrix44) {
        uint64_t local_20[2];

        local_20[0] = *this matrix44;
        SetXYZ(*local_20);
    }

    // 0x1008cdc30
    Vector4T<float> Vector4Reciprocal<float>(const Vector4T<float>& vector4) {
        uint8_t auVar1[16];

        ImVec4 local_18(1.0 / *(float*)vector4, 1.0 / *(float*)(vector4 + 4), 1.0 / *(float*)(vector4 + 8),
                        1.0 / *(float*)(vector4 + 12));
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

    // 0x1008d31c0
    ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(float arg1, float arg2, float arg3, float arg4) {
        Set(this, arg1, arg2, arg3, arg4);
    }

    // 0x1008d31d0
    void ColourStorage8888<ARGB8StorageLayout>::Set(float arg1, float arg2, float arg3, float arg4) {
        int local_1c[3];

        local_1c[0] = RoundFloatToInt(arg1 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        int iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[2] = (uint8_t)iVar1;
        local_1c[0] = RoundFloatToInt(arg2 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[1] = (uint8_t)iVar1;
        local_1c[0] = RoundFloatToInt(arg3 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        *this = (uint8_t)iVar1;
        local_1c[0] = RoundFloatToInt(arg4 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[3] = (uint8_t)iVar1;
    }

} // namespace jag::math

namespace jag::graphicutils {
    // 0x1008ccee0
    TextureAtlasSlot2D::TextureAtlasSlot2D(const TextureAtlasSlot2D& textureAtlasSlot2D)
        : field_0(textureAtlasSlot2D.field_0), field_2(textureAtlasSlot2D.field_2),
          field_4(textureAtlasSlot2D.field_4) {}

    // 0x1008cd5b0
    TextureAtlasSlot::TextureAtlasSlot()
        : field_0(4294967295), field_4(0), field_6(0), field_8(65535), field_10(65535) {}

} // namespace jag::graphicutils
