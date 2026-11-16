// libs/graphics/runetek7/renderer/renderpasses/ShadowPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class ShadowCubeMapAtlasData {
    public:
        ShadowCubeMapAtlasData(graphicutils::TextureAtlasSlotPacker const&,
                               std::array<graphicutils::TextureAtlasSlot2D, 6ul> const&, unsigned int, unsigned int,
                               unsigned int, unsigned int);
        ShadowCubeMapAtlasData(ShadowCubeMapAtlasData&&);

        // data members, from how the methods use this: 256 bytes
        char _unknown_0[36];
        uint field_36;       // offset 36
        uint field_40;       // offset 40
        undefined8 field_44; // offset 44
        undefined8 field_52; // offset 52
        char _unknown_60[100];
        undefined8 field_160; // offset 160
        undefined8 field_168; // offset 168
        undefined8 field_176; // offset 176
        undefined8 field_184; // offset 184
        undefined8 field_192; // offset 192
        undefined8 field_200; // offset 200
        undefined8 field_208; // offset 208
        undefined8 field_216; // offset 216
        undefined8 field_224; // offset 224
        undefined8 field_232; // offset 232
        undefined8 field_240; // offset 240
        undefined8 field_248; // offset 248
    };

    class ShadowPass : public SceneRenderPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ShadowPass();
        virtual ShadowPass* GetOcclusionRTName();
        ShadowPass(RenderPassType, render::RenderTargetsManager*, ThreadPool*);

        // data members, from how the methods use this: 769 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        OcclusionManager field_16; // offset 16
        char _unknown_729[40];
    };

    // 0x1008cc480, 64 bytes, inline, placed by class name and debug map
    // ShadowPass::GetOcclusionRTName()
    ShadowPass* ShadowPass::GetOcclusionRTName() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("ShadowPass", local_20);
        return this;
    }

    // 0x1008cc840, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::~$_2()
    /* ~$_2() */

    void PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::~__2() {
        ((this + 8))->~shared_ptr();
    }

    // 0x1008ccb20, 336 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(graphicutils::TextureAtlasSlotPacker const&, std::array<graphicutils::TextureAtlasSlot2D, 6ul> const&, unsigned int, unsigned int, unsigned int, unsigned int)
    /* ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(graphicutils::TextureAtlasSlotPacker
   const&, std::array<graphicutils::TextureAtlasSlot2D, 6ul> const&, unsigned int, unsigned
   int, unsigned int, unsigned int) */

    void ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(TextureAtlasSlotPacker* param_1, array* param_2, uint param_3,
                                                        uint param_4, uint param_5, uint param_6) {
        ushort* puVar1;
        Rect<unsigned int>* this_00;
        Rect<float>* this_01;
        ulong uVar2;
        undefined8 uVar3;
        float fVar4;
        undefined1 local_58[8];
        float fStack_50;
        undefined4 uStack_4c;
        array<math::Rect<unsigned int>, 6ul>* local_40;
        float local_38;
        float local_34;

        local_34 = (float)param_5;
        new (this) std::array<graphicutils::TextureAtlasSlot2D, 6ul>(param_2);
        field_36 = param_3;
        field_40 = param_4;
        new (&field_44) math::Vector2T<int>();
        new (&field_52) math::Vector2T<int>();
        local_40 = (array<math::Rect<unsigned int>, 6ul>*)&field_60;
        std::array<math::Rect<unsigned int>, 6ul>::array();
        new (&field_160) std::array<math::Vector4T<float>, 6ul>();
        local_34 = 1.0 / (float)(uint)local_34;
        local_38 = 1.0 / (float)param_6;
        (&field_44, (float)field_36 * local_34, (float)field_40 * local_38)->Set();
        fVar4 = local_38;
        (&field_52, local_34, local_38)->Set();
        uVar2 = 0;
        do {
            puVar1 = (ushort*)std::array<graphicutils::TextureAtlasSlot2D, 6ul>::operator[](
                (array<graphicutils::TextureAtlasSlot2D, 6ul>*)param_2, uVar2);
            local_58->GetTexturePixelRegion((uint)param_1, (uint)*puVar1);
            this_00 = (Rect<unsigned int>*)std::array<math::Rect<unsigned int>, 6ul>::operator[](local_40, uVar2);
            math::Rect<unsigned int>::operator=(this_00, (Rect*)local_58);
            uVar3 = param_1->GetTextureUVCoordinates((uint)*puVar1, (uint)puVar1[1]);
            fStack_50 = fVar4;
            uStack_4c = 0;
            local_58 = (undefined1[8])uVar3;
            this_01 = (Rect<float>*)std::array<math::Vector4T<float>, 6ul>::operator[](
                (array<math::Vector4T<float>, 6ul>*)&field_160, uVar2);
            math::Rect<float>::operator=(this_01, (Rect*)local_58);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 6);
    }

    // 0x1008cdd30, 320 bytes, placed by debug map only (low confidence)
    // zyz(float*, float&, float&, float&, float&, float&, float&)
    void zyz(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5, float* param_6,
             float* param_7) {
        float fVar1;
        float fVar2;

        fVar2 = param_1[8];
        fVar1 = (float)::sqrt(1.0 - fVar2 * fVar2);
        if (0.0001 <= fVar1) {
            *param_4 = fVar2;
            *param_5 = fVar1;
            fVar2 = param_1[6];
            fVar1 = (float)::sqrt(param_1[7] * param_1[7] + fVar2 * fVar2);
            *param_2 = -fVar2 * (1.0 / fVar1);
            *param_3 = (1.0 / fVar1) * param_1[7];
            fVar2 = param_1[2];
            fVar1 = (float)::sqrt(param_1[5] * param_1[5] + fVar2 * fVar2);
            *param_6 = fVar2 * (1.0 / fVar1);
            fVar2 = (1.0 / fVar1) * param_1[5];
        } else {
            *param_2 = 1.0;
            *param_3 = 0.0;
            *param_4 = fVar2;
            *param_5 = 0.0;
            *param_6 = fVar2 * *param_1;
            fVar2 = -param_1[1];
        }
        *param_7 = fVar2;
    }

    // 0x1008cde70, 288 bytes, placed by debug map only (low confidence)
    // sh3_rot(float*, float, float, float, float, float, float, float*, float*)
    void sh3_rot(float* param_1, float param_2, float param_3, float param_4, float param_5, float param_6,
                 float param_7, float* param_8, float* param_9) {
        float local_80[3];
        float local_74[3];
        float local_68[3];
        float local_5c[3];
        float local_50[3];
        float local_44[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        rot_3(param_2, param_3, local_44, local_50);
        rot_3(param_4, param_5, local_5c, local_68);
        rot_3(param_6, param_7, local_74, local_80);
        *param_9 = *param_8;
        sh_rot_1(param_1, param_8 + 1, param_9 + 1);
        sh_rotzyz_2(local_44, local_50, local_5c, local_68, local_74, local_80, param_8 + 4, param_9 + 4);
        sh_rotzyz_3(local_44, local_50, local_5c, local_68, local_74, local_80, param_8 + 9, param_9 + 9);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008cdf90, 96 bytes, placed by debug map only (low confidence)
    // rot_3(float, float, float*, float*)
    void rot_3(float param_1, float param_2, float* param_3, float* param_4) {
        float fVar1;

        fVar1 = param_1 + param_1;
        *param_3 = param_1;
        *param_4 = param_2;
        param_3[1] = fVar1 * param_1 + -1.0;
        param_4[1] = fVar1 * param_2;
        param_3[2] = param_3[1] * fVar1 - param_1;
        param_4[2] = fVar1 * param_4[1] - param_2;
    }

    // 0x1008cdff0, 128 bytes, placed by debug map only (low confidence)
    // sh_rot_1(float*, float*, float*)
    void sh_rot_1(float* param_1, float* param_2, float* param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        fVar1 = *param_2;
        fVar2 = param_2[1];
        fVar3 = param_2[2];
        fVar4 = param_1[8];
        fVar5 = param_1[7];
        fVar6 = param_1[6];
        fVar7 = param_1[1];
        fVar8 = param_1[2];
        fVar9 = *param_1;
        *param_3 = param_1[3] * fVar3 + (param_1[4] * fVar1 - param_1[5] * fVar2);
        param_3[1] = fVar4 * fVar2 - (fVar6 * fVar3 + fVar5 * fVar1);
        param_3[2] = fVar3 * fVar9 + (fVar1 * fVar7 - fVar2 * fVar8);
    }

    // 0x1008ce070, 144 bytes, placed by debug map only (low confidence)
    // sh_rotzyz_2(float*, float*, float*, float*, float*, float*, float*, float*)
    void sh_rotzyz_2(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5, float* param_6,
                     float* param_7, float* param_8) {
        float local_58[8];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sh_rotz_2(param_1, param_2, param_7, param_8);
        sh_roty_2(param_3, param_4, param_8, local_58);
        sh_rotz_2(param_5, param_6, local_58, param_8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ce100, 144 bytes, placed by debug map only (low confidence)
    // sh_rotzyz_3(float*, float*, float*, float*, float*, float*, float*, float*)
    void sh_rotzyz_3(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5, float* param_6,
                     float* param_7, float* param_8) {
        float local_58[8];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sh_rotz_3(param_1, param_2, param_7, param_8);
        sh_roty_3(param_3, param_4, param_8, local_58);
        sh_rotz_3(param_5, param_6, local_58, param_8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ce190, 112 bytes, placed by debug map only (low confidence)
    // sh_rotz_2(float*, float*, float*, float*)
    void sh_rotz_2(float* param_1, float* param_2, float* param_3, float* param_4) {
        param_4[2] = param_3[2];
        rot_inv(*param_1, *param_2, param_3[1], param_3[3], param_4 + 1, param_4 + 3);
        rot_inv(param_1[1], param_2[1], *param_3, param_3[4], param_4, param_4 + 4);
    }

    // 0x1008ce200, 128 bytes, placed by debug map only (low confidence)
    // sh_roty_2(float*, float*, float*, float*)
    void sh_roty_2(float* param_1, float* param_2, float* param_3, float* param_4) {
        float local_48[6];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sh_rotx90_2(param_3, param_4);
        sh_rotz_2(param_1, param_2, param_4, local_48);
        sh_rotx90_inv_2(local_48, param_4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ce280, 48 bytes, placed by debug map only (low confidence)
    // rot_inv(float, float, float, float, float&, float&)
    void rot_inv(float param_1, float param_2, float param_3, float param_4, float* param_5, float* param_6) {
        *param_5 = param_4 * param_2 + param_3 * param_1;
        *param_6 = param_4 * param_1 - param_3 * param_2;
    }

    // 0x1008ce2b0, 128 bytes, placed by debug map only (low confidence)
    // sh_rotx90_2(float*, float*)
    void sh_rotx90_2(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;

        *param_2 = param_1[3] * fx_2_001;
        fVar1 = fx_2_002;
        param_2[1] = param_1[1] * fx_2_002;
        fVar2 = fx_2_004;
        param_2[2] = param_1[4] * fx_2_004 + param_1[2] * fx_2_003;
        param_2[3] = fVar1 * *param_1;
        param_2[4] = param_1[4] * fx_2_005 + fVar2 * param_1[2];
    }

    // 0x1008ce330, 128 bytes, placed by debug map only (low confidence)
    // sh_rotx90_inv_2(float*, float*)
    void sh_rotx90_inv_2(float* param_1, float* param_2) {
        float fVar1;

        fVar1 = fx_2_002;
        *param_2 = param_1[3] * fx_2_002;
        param_2[1] = fVar1 * param_1[1];
        fVar1 = fx_2_004;
        param_2[2] = param_1[4] * fx_2_004 + param_1[2] * fx_2_003;
        param_2[3] = *param_1 * fx_2_001;
        param_2[4] = param_1[4] * fx_2_005 + fVar1 * param_1[2];
    }

    // 0x1008ce3b0, 144 bytes, placed by debug map only (low confidence)
    // sh_rotz_3(float*, float*, float*, float*)
    void sh_rotz_3(float* param_1, float* param_2, float* param_3, float* param_4) {
        param_4[3] = param_3[3];
        rot_inv(*param_1, *param_2, param_3[2], param_3[4], param_4 + 2, param_4 + 4);
        rot_inv(param_1[1], param_2[1], param_3[1], param_3[5], param_4 + 1, param_4 + 5);
        rot_inv(param_1[2], param_2[2], *param_3, param_3[6], param_4, param_4 + 6);
    }

    // 0x1008ce440, 128 bytes, placed by debug map only (low confidence)
    // sh_roty_3(float*, float*, float*, float*)
    void sh_roty_3(float* param_1, float* param_2, float* param_3, float* param_4) {
        float local_58[10];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sh_rotx90_3(param_3, param_4);
        sh_rotz_3(param_1, param_2, param_4, local_58);
        sh_rotx90_inv_3(local_58, param_4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ce4c0, 224 bytes, placed by debug map only (low confidence)
    // sh_rotx90_3(float*, float*)
    void sh_rotx90_3(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;

        fVar2 = fx_3_002;
        fVar1 = fx_3_001;
        *param_2 = param_1[5] * fx_3_002 + param_1[3] * fx_3_001;
        param_2[1] = param_1[1] * fx_3_003;
        fVar3 = fx_3_004;
        param_2[2] = param_1[5] * fVar1 + param_1[3] * fx_3_004;
        param_2[3] = fVar2 * param_1[2] + *param_1 * fx_3_008;
        fVar2 = fx_3_006;
        param_2[4] = param_1[6] * fx_3_006 + param_1[4] * fx_3_005;
        param_2[5] = fVar3 * *param_1 - fVar1 * param_1[2];
        param_2[6] = param_1[6] * fx_3_007 + fVar2 * param_1[4];
    }

    // 0x1008ce5a0, 224 bytes, placed by debug map only (low confidence)
    // sh_rotx90_inv_3(float*, float*)
    void sh_rotx90_inv_3(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;

        fVar3 = fx_3_004;
        *param_2 = param_1[5] * fx_3_004 + param_1[3] * fx_3_008;
        param_2[1] = param_1[1] * fx_3_003;
        fVar2 = fx_3_002;
        fVar1 = fx_3_001;
        param_2[2] = param_1[3] * fx_3_002 - param_1[5] * fx_3_001;
        param_2[3] = fVar3 * param_1[2] + *param_1 * fVar1;
        fVar3 = fx_3_006;
        param_2[4] = param_1[6] * fx_3_006 + param_1[4] * fx_3_005;
        param_2[5] = fVar1 * param_1[2] + fVar2 * *param_1;
        param_2[6] = param_1[6] * fx_3_007 + fVar3 * param_1[4];
    }

    // 0x1008ce680, 352 bytes, placed by debug map only (low confidence)
    // sh4_rot(float*, float, float, float, float, float, float, float*, float*)
    void sh4_rot(float* param_1, float param_2, float param_3, float param_4, float param_5, float param_6,
                 float param_7, float* param_8, float* param_9) {
        float local_98[4];
        float local_88[4];
        float local_78[4];
        float local_68[4];
        float local_58[4];
        float local_48[4];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        rot_4(param_2, param_3, local_48, local_58);
        rot_4(param_4, param_5, local_68, local_78);
        rot_4(param_6, param_7, local_88, local_98);
        *param_9 = *param_8;
        sh_rot_1(param_1, param_8 + 1, param_9 + 1);
        sh_rotzyz_2(local_48, local_58, local_68, local_78, local_88, local_98, param_8 + 4, param_9 + 4);
        sh_rotzyz_3(local_48, local_58, local_68, local_78, local_88, local_98, param_8 + 9, param_9 + 9);
        sh_rotzyz_4(local_48, local_58, local_68, local_78, local_88, local_98, param_8 + 16, param_9 + 16);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ce7e0, 128 bytes, placed by debug map only (low confidence)
    // rot_4(float, float, float*, float*)
    void rot_4(float param_1, float param_2, float* param_3, float* param_4) {
        float fVar1;

        fVar1 = param_1 + param_1;
        *param_3 = param_1;
        *param_4 = param_2;
        param_3[1] = fVar1 * param_1 + -1.0;
        param_4[1] = fVar1 * param_2;
        param_3[2] = param_3[1] * fVar1 - param_1;
        param_4[2] = param_4[1] * fVar1 - param_2;
        param_3[3] = param_3[2] * fVar1 - param_3[1];
        param_4[3] = fVar1 * param_4[2] - param_4[1];
    }

    // 0x1008ce860, 144 bytes, placed by debug map only (low confidence)
    // sh_rotzyz_4(float*, float*, float*, float*, float*, float*, float*, float*)
    void sh_rotzyz_4(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5, float* param_6,
                     float* param_7, float* param_8) {
        float local_68[12];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sh_rotz_4(param_1, param_2, param_7, param_8);
        sh_roty_4(param_3, param_4, param_8, local_68);
        sh_rotz_4(param_5, param_6, local_68, param_8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ce8f0, 192 bytes, placed by debug map only (low confidence)
    // sh_rotz_4(float*, float*, float*, float*)
    void sh_rotz_4(float* param_1, float* param_2, float* param_3, float* param_4) {
        param_4[4] = param_3[4];
        rot_inv(*param_1, *param_2, param_3[3], param_3[5], param_4 + 3, param_4 + 5);
        rot_inv(param_1[1], param_2[1], param_3[2], param_3[6], param_4 + 2, param_4 + 6);
        rot_inv(param_1[2], param_2[2], param_3[1], param_3[7], param_4 + 1, param_4 + 7);
        rot_inv(param_1[3], param_2[3], *param_3, param_3[8], param_4, param_4 + 8);
    }

    // 0x1008ce9b0, 128 bytes, placed by debug map only (low confidence)
    // sh_roty_4(float*, float*, float*, float*)
    void sh_roty_4(float* param_1, float* param_2, float* param_3, float* param_4) {
        float local_58[10];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sh_rotx90_4(param_3, param_4);
        sh_rotz_4(param_1, param_2, param_4, local_58);
        sh_rotx90_inv_4(local_58, param_4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008cea30, 352 bytes, placed by debug map only (low confidence)
    // sh_rotx90_4(float*, float*)
    void sh_rotx90_4(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;

        fVar2 = fx_4_002;
        fVar1 = fx_4_001;
        *param_2 = param_1[7] * fx_4_002 + param_1[5] * fx_4_001;
        fVar3 = fx_4_004;
        param_2[1] = param_1[3] * fx_4_004 + param_1[1] * fx_4_003;
        fVar4 = fx_4_005;
        param_2[2] = param_1[7] * fVar1 + param_1[5] * fx_4_005;
        param_2[3] = param_1[3] * fx_4_006 + fVar3 * param_1[1];
        fVar5 = fx_4_009;
        fVar3 = fx_4_008;
        param_2[4] = param_1[8] * fx_4_009 + param_1[6] * fx_4_008 + param_1[4] * fx_4_007;
        param_2[5] = fVar2 * param_1[2] + *param_1 * fx_4_013;
        fVar2 = fx_4_011;
        param_2[6] = param_1[8] * fx_4_011 + param_1[6] * fx_4_010 + fVar3 * param_1[4];
        param_2[7] = fVar4 * *param_1 - fVar1 * param_1[2];
        param_2[8] = param_1[8] * fx_4_012 + fVar2 * param_1[6] + fVar5 * param_1[4];
    }

    // 0x1008ceb90, 352 bytes, placed by debug map only (low confidence)
    // sh_rotx90_inv_4(float*, float*)
    void sh_rotx90_inv_4(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;

        fVar4 = fx_4_005;
        *param_2 = param_1[7] * fx_4_005 + param_1[5] * fx_4_013;
        fVar3 = fx_4_004;
        param_2[1] = param_1[3] * fx_4_004 + param_1[1] * fx_4_003;
        fVar2 = fx_4_002;
        fVar1 = fx_4_001;
        param_2[2] = param_1[5] * fx_4_002 - param_1[7] * fx_4_001;
        param_2[3] = param_1[3] * fx_4_006 + fVar3 * param_1[1];
        fVar5 = fx_4_009;
        fVar3 = fx_4_008;
        param_2[4] = param_1[8] * fx_4_009 + param_1[6] * fx_4_008 + param_1[4] * fx_4_007;
        param_2[5] = fVar4 * param_1[2] + *param_1 * fVar1;
        fVar4 = fx_4_011;
        param_2[6] = param_1[8] * fx_4_011 + param_1[6] * fx_4_010 + fVar3 * param_1[4];
        param_2[7] = fVar1 * param_1[2] + fVar2 * *param_1;
        param_2[8] = param_1[8] * fx_4_012 + fVar4 * param_1[6] + fVar5 * param_1[4];
    }

    // 0x1008cecf0, 448 bytes, placed by debug map only (low confidence)
    // sh5_rot(float*, float, float, float, float, float, float, float*, float*)
    void sh5_rot(float* param_1, float param_2, float param_3, float param_4, float param_5, float param_6,
                 float param_7, float* param_8, float* param_9) {
        float local_f8[8];
        float local_d8[8];
        float local_b8[8];
        float local_98[8];
        float local_78[8];
        float local_58[8];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        rot_5(param_2, param_3, local_58, local_78);
        rot_5(param_4, param_5, local_98, local_b8);
        rot_5(param_6, param_7, local_d8, local_f8);
        *param_9 = *param_8;
        sh_rot_1(param_1, param_8 + 1, param_9 + 1);
        sh_rotzyz_2(local_58, local_78, local_98, local_b8, local_d8, local_f8, param_8 + 4, param_9 + 4);
        sh_rotzyz_3(local_58, local_78, local_98, local_b8, local_d8, local_f8, param_8 + 9, param_9 + 9);
        sh_rotzyz_4(local_58, local_78, local_98, local_b8, local_d8, local_f8, param_8 + 16, param_9 + 16);
        sh_rotzyz_5(local_58, local_78, local_98, local_b8, local_d8, local_f8, param_8 + 25, param_9 + 25);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ceeb0, 176 bytes, placed by debug map only (low confidence)
    // rot_5(float, float, float*, float*)
    void rot_5(float param_1, float param_2, float* param_3, float* param_4) {
        float fVar1;

        fVar1 = param_1 + param_1;
        *param_3 = param_1;
        *param_4 = param_2;
        param_3[1] = fVar1 * param_1 + -1.0;
        param_4[1] = fVar1 * param_2;
        param_3[2] = param_3[1] * fVar1 - param_1;
        param_4[2] = param_4[1] * fVar1 - param_2;
        param_3[3] = param_3[2] * fVar1 - param_3[1];
        param_4[3] = param_4[2] * fVar1 - param_4[1];
        param_3[4] = param_3[3] * fVar1 - param_3[2];
        param_4[4] = fVar1 * param_4[3] - param_4[2];
    }

    // 0x1008cef60, 144 bytes, placed by debug map only (low confidence)
    // sh_rotzyz_5(float*, float*, float*, float*, float*, float*, float*, float*)
    void sh_rotzyz_5(float* param_1, float* param_2, float* param_3, float* param_4, float* param_5, float* param_6,
                     float* param_7, float* param_8) {
        float local_68[12];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sh_rotz_5(param_1, param_2, param_7, param_8);
        sh_roty_5(param_3, param_4, param_8, local_68);
        sh_rotz_5(param_5, param_6, local_68, param_8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ceff0, 224 bytes, placed by debug map only (low confidence)
    // sh_rotz_5(float*, float*, float*, float*)
    void sh_rotz_5(float* param_1, float* param_2, float* param_3, float* param_4) {
        param_4[5] = param_3[5];
        rot_inv(*param_1, *param_2, param_3[4], param_3[6], param_4 + 4, param_4 + 6);
        rot_inv(param_1[1], param_2[1], param_3[3], param_3[7], param_4 + 3, param_4 + 7);
        rot_inv(param_1[2], param_2[2], param_3[2], param_3[8], param_4 + 2, param_4 + 8);
        rot_inv(param_1[3], param_2[3], param_3[1], param_3[9], param_4 + 1, param_4 + 9);
        rot_inv(param_1[4], param_2[4], *param_3, param_3[10], param_4, param_4 + 10);
    }

    // 0x1008cf0d0, 128 bytes, placed by debug map only (low confidence)
    // sh_roty_5(float*, float*, float*, float*)
    void sh_roty_5(float* param_1, float* param_2, float* param_3, float* param_4) {
        float local_68[14];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        sh_rotx90_5(param_3, param_4);
        sh_rotz_5(param_1, param_2, param_4, local_68);
        sh_rotx90_inv_5(local_68, param_4);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008cf150, 512 bytes, placed by debug map only (low confidence)
    // sh_rotx90_5(float*, float*)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* sh_rotx90_5(float*, float*) */

    void sh_rotx90_5(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        *param_2 = param_1[9] * fx_5_003 + param_1[7] * fx_5_002 + param_1[5] * fx_5_001;
        fVar1 = fx_5_005;
        param_2[1] = param_1[3] * fx_5_005 + param_1[1] * fx_5_004;
        fVar3 = fx_5_008;
        fVar2 = fx_5_007;
        param_2[2] = param_1[9] * fx_5_008 + param_1[7] * fx_5_007 + param_1[5] * fx_5_006;
        param_2[3] = param_1[3] * fx_5_009 + fVar1 * param_1[1];
        fVar4 = fx_5_012;
        fVar1 = fx_5_011;
        param_2[4] = param_1[9] * fx_5_012 + param_1[7] * fx_5_011 + param_1[5] * fx_5_010;
        param_2[5] = param_1[4] * fx_5_023 + param_1[2] * fx_5_022 + *param_1 * fx_5_019;
        fVar6 = fx_5_015;
        fVar5 = fx_5_014;
        param_2[6] = param_1[10] * fx_5_015 + param_1[8] * fx_5_014 + param_1[6] * fx_5_013;
        param_2[7] = *param_1 * fx_5_020 - (fVar1 * param_1[4] + fVar2 * param_1[2]);
        fVar1 = fx_5_017;
        param_2[8] = param_1[10] * fx_5_017 + param_1[8] * fx_5_016 + fVar5 * param_1[6];
        param_2[9] = *param_1 * fx_5_021 - (fVar4 * param_1[4] + fVar3 * param_1[2]);
        param_2[10] = param_1[10] * _fx_5_018 + fVar1 * param_1[8] + fVar6 * param_1[6];
    }

    // 0x1008cf350, 512 bytes, placed by debug map only (low confidence)
    // sh_rotx90_inv_5(float*, float*)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* sh_rotx90_inv_5(float*, float*) */

    void sh_rotx90_inv_5(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        *param_2 = param_1[9] * fx_5_021 + param_1[7] * fx_5_020 + param_1[5] * fx_5_019;
        fVar1 = fx_5_005;
        param_2[1] = param_1[3] * fx_5_005 + param_1[1] * fx_5_004;
        fVar3 = fx_5_008;
        fVar2 = fx_5_007;
        param_2[2] = param_1[5] * fx_5_022 - (param_1[9] * fx_5_008 + param_1[7] * fx_5_007);
        param_2[3] = param_1[3] * fx_5_009 + fVar1 * param_1[1];
        fVar4 = fx_5_012;
        fVar1 = fx_5_011;
        param_2[4] = param_1[5] * fx_5_023 - (param_1[9] * fx_5_012 + param_1[7] * fx_5_011);
        param_2[5] = param_1[4] * fx_5_010 + param_1[2] * fx_5_006 + *param_1 * fx_5_001;
        fVar6 = fx_5_015;
        fVar5 = fx_5_014;
        param_2[6] = param_1[10] * fx_5_015 + param_1[8] * fx_5_014 + param_1[6] * fx_5_013;
        param_2[7] = fVar1 * param_1[4] + fVar2 * param_1[2] + *param_1 * fx_5_002;
        fVar1 = fx_5_017;
        param_2[8] = param_1[10] * fx_5_017 + param_1[8] * fx_5_016 + fVar5 * param_1[6];
        param_2[9] = fVar4 * param_1[4] + fVar3 * param_1[2] + *param_1 * fx_5_003;
        param_2[10] = param_1[10] * _fx_5_018 + fVar1 * param_1[8] + fVar6 * param_1[6];
    }

    // 0x1008cf860, 64 bytes, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::TotalWidth() const
    int SpriteAtlasMapping::TotalWidth() {
        int iVar1;
        int iVar2;
        int* piVar3;

        piVar3 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_104, 0);
        iVar1 = *piVar3;
        piVar3 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_8, 0);
        iVar2 = *piVar3;
        piVar3 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_8, 2);
        return iVar1 + iVar2 + *piVar3;
    }

    // 0x1008cf8a0, 80 bytes, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::TotalHeight() const
    int SpriteAtlasMapping::TotalHeight() {
        int iVar1;
        int iVar2;
        int* piVar3;

        piVar3 = (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)&field_104, 1);
        iVar1 = *piVar3;
        piVar3 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_8, 1);
        iVar2 = *piVar3;
        piVar3 = (int*)
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_8, 3);
        return iVar1 + iVar2 + *piVar3;
    }

    // 0x1008cf8f0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::SpriteAtlasMapping()
    void SpriteAtlasMapping::SpriteAtlasMapping() {
        _func_decltype_nullptr* in_RSI;

        new (&field_8) eastl::fixed_vector<int, 4ul, true, eastl::allocator>();
        new (&field_72, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_88, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1008cf940, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // SpriteAtlasMapping::~SpriteAtlasMapping()
    void SpriteAtlasMapping::~SpriteAtlasMapping() {
        (&field_8)->~fixed_vector();
    }

    // 0x1008d2880, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::$_2($_2&&): jumps straight to the base-object constructor

    // 0x1008d2890, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::$_2($_2&&)
    /* $_2($_2&&) */

    void PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::__2(__2* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
    }

    // 0x1008d28e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::$_2($_2 const&): jumps straight to the base-object constructor

    // 0x1008d28f0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::$_2($_2 const&)
    /* $_2($_2 const&) */

    void PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::__2(__2* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(param_1 + 8));
    }

    // 0x1008d2930, 176 bytes, inline, placed by debug map only (low confidence)
    // PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::operator()(render::RenderContext&) const
    /* PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData>
   const&)::$_2::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&) const */

    void PointLightGridTexture::UpdateTexture(shared_ptr<PointLightGridTextureData> const&)::$_2::operator()(
        RenderContext* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        shared_ptr<render::Texture2D>* this_00;
        long* plVar4;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar5;
        undefined4* puVar6;
        long lVar7;
        array<std::array<PointLightTextureData, 256ul>, 128ul>* this_01;
        array<PointLightTextureData, 256ul>* this_02;
        undefined8 uVar8;

        this_00 = *(shared_ptr<render::Texture2D>**)this;
        plVar4 = (long*)shared_ptr<render::Texture2D>::operator->(this_00);
        pcVar5 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<render::Texture2D>::operator->(this_00);
        puVar6 = (undefined4*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar5);
        uVar1 = *puVar6;
        pcVar5 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<render::Texture2D>::operator->(this_00);
        lVar7 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar5);
        uVar2 = *(undefined4*)(lVar7 + 4);
        pcVar5 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                shared_ptr<render::Texture2D>::operator->(this_00);
        lVar7 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar5);
        uVar3 = *(undefined4*)(lVar7 + 12);
        this_01 =
            (array<std::array<PointLightTextureData, 256ul>, 128ul>*)shared_ptr<PointLightGridTextureData>::operator->(
                (shared_ptr<PointLightGridTextureData>*)(this + 8));
        this_02 = (array<PointLightTextureData, 256ul>*)
            std::array<std::array<PointLightTextureData, 256ul>, 128ul>::operator[](this_01, 0);
        uVar8 = std::array<PointLightTextureData, 256ul>::data(this_02);
        (**(code**)(*plVar4 + 40))(plVar4, 0, 0, 0, uVar1, uVar2, uVar3, uVar8);
    }

    // 0x1008d4ab0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(ShadowCubeMapAtlasData&&): jumps straight to the base-object constructor

    // 0x1008d4ad0, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(ShadowCubeMapAtlasData&&)
    void ShadowCubeMapAtlasData::ShadowCubeMapAtlasData(ShadowCubeMapAtlasData* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        uint uVar8;

        new (this) std::array<graphicutils::TextureAtlasSlot2D, 6ul>(param_1);
        field_52 = param_1->field_52;
        uVar8 = param_1->field_40;
        uVar1 = param_1->field_44;
        field_36 = param_1->field_36;
        field_40 = uVar8;
        field_44 = uVar1;
        new (&field_60, (array*)&param_1->field_60) std::array<math::Rect<unsigned int>, 6ul>();
        uVar1 = param_1->field_248;
        field_240 = param_1->field_240;
        field_248 = uVar1;
        uVar1 = param_1->field_232;
        field_224 = param_1->field_224;
        field_232 = uVar1;
        uVar1 = param_1->field_160;
        uVar2 = param_1->field_168;
        uVar3 = param_1->field_176;
        uVar4 = param_1->field_184;
        uVar5 = param_1->field_192;
        uVar6 = param_1->field_200;
        uVar7 = param_1->field_216;
        field_208 = param_1->field_208;
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
    // 0x1008ccb00, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LightShadowParams::LightShadowParams()
    void LightShadowParams::LightShadowParams() {
        field_0 = 1;
        field_4 = 1;
        field_8 = 4575657222460355379;
    }

    // 0x1008d0df0, 16 bytes, placed by debug map only (low confidence)
    // DebugOverlayParticlesRender::UpdateHistogramData()::$_0::operator()(unsigned int, graphics::ParticleSystemRenderer::Metrics::PassDrawInfo const&) const
    /* DebugOverlayParticlesRender::UpdateHistogramData()::$_0::TEMPNAMEPLACEHOLDERVALUE(unsigned
   int, graphics::ParticleSystemRenderer::Metrics::PassDrawInfo const&) const */

    int DebugOverlayParticlesRender::UpdateHistogramData()::$_0::operator()(uint param_1, PassDrawInfo* param_2) {
        return param_1 + *(int*)(param_2 + 4) + *(int*)(param_2 + 12);
    }

    // 0x1008d2460, 96 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<int, int, int, int, int, int, int, int>(unsigned long&, int const&, int const&, int const&, int const&, int const&, int const&, int const&, int const&)
    void hash_combine<int, int, int, int, int, int, int, int>(ulong* param_1, int* param_2, int* param_3, int* param_4,
                                                              int* param_5, int* param_6, int* param_7, int* param_8,
                                                              int* param_9) {
        hash_combine<int>(param_1, param_2);
        hash_combine<int, int, int, int, int, int, int>(param_1, param_3, param_4, param_5, param_6, param_7, param_8,
                                                        param_9);
    }

    // 0x1008d24c0, 96 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<int, int, int, int, int, int, int>(unsigned long&, int const&, int const&, int const&, int const&, int const&, int const&, int const&)
    void hash_combine<int, int, int, int, int, int, int>(ulong* param_1, int* param_2, int* param_3, int* param_4,
                                                         int* param_5, int* param_6, int* param_7, int* param_8) {
        hash_combine<int>(param_1, param_2);
        hash_combine<int, int, int, int, int, int>(param_1, param_3, param_4, param_5, param_6, param_7, param_8);
    }

    // 0x1008d2520, 80 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<int, int, int, int, int, int>(unsigned long&, int const&, int const&, int const&, int const&, int const&, int const&)
    void hash_combine<int, int, int, int, int, int>(ulong* param_1, int* param_2, int* param_3, int* param_4,
                                                    int* param_5, int* param_6, int* param_7) {
        hash_combine<int>(param_1, param_2);
        hash_combine<int, int, int, int, int>(param_1, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x1008d2570, 80 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<int, int, int, int, int>(unsigned long&, int const&, int const&, int const&, int const&, int const&)
    void hash_combine<int, int, int, int, int>(ulong* param_1, int* param_2, int* param_3, int* param_4, int* param_5,
                                               int* param_6) {
        hash_combine<int>(param_1, param_2);
        hash_combine<int, int, int, int>(param_1, param_3, param_4, param_5, param_6);
    }

    // 0x1008d25c0, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<int, int, int, int>(unsigned long&, int const&, int const&, int const&, int const&)
    void hash_combine<int, int, int, int>(ulong* param_1, int* param_2, int* param_3, int* param_4, int* param_5) {
        hash_combine<int>(param_1, param_2);
        hash_combine<int, int, int>(param_1, param_3, param_4, param_5);
    }

    // 0x1008d2600, 64 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<int, int, int>(unsigned long&, int const&, int const&, int const&)
    void hash_combine<int, int, int>(ulong* param_1, int* param_2, int* param_3, int* param_4) {
        hash_combine<int>(param_1, param_2);
        hash_combine<int, int>(param_1, param_3, param_4);
    }

    // 0x1008d2640, 48 bytes, inline, placed by debug map only (low confidence)
    // void hash_combine<int, int>(unsigned long&, int const&, int const&)
    void hash_combine<int, int>(ulong* param_1, int* param_2, int* param_3) {
        hash_combine<int>(param_1, param_2);
        hash_combine<int>(param_1, param_3);
    }

    // 0x1008d2ae0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::PointLightIndicesEffect* placement_new<graphics::PointLightIndicesEffect, graphics::RT7Core&>(void*, graphics::RT7Core&)
    PointLightIndicesEffect* placement_new<graphics::PointLightIndicesEffect, graphics::RT7Core&>(void* param_1,
                                                                                                  RT7Core* param_2) {
        graphics::PointLightIndicesEffect::PointLightIndicesEffect(param_1, param_2, 7);
        return param_1;
    }

    // 0x1008d2b00, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect, MakeSharedPool<graphics::PointLightIndicesEffect, 64> >* placement_new<MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect, MakeSharedPool<graphics::PointLightIndicesEffect, 64> >, MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData*&, graphics::PointLightIndicesEffect*>(void*, MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData*&, graphics::PointLightIndicesEffect*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect,
                                                MakeSharedPool<graphics::PointLightIndicesEffect, 64>>,
                       MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData*&,
                       graphics::PointLightIndicesEffect*>(void* param_1, RefCounterAndData** param_2,
                                                           PointLightIndicesEffect** param_3) {
        MakeSharedPoolRefCounter<
            graphics::PointLightIndicesEffect,
            MakeSharedPool<graphics::PointLightIndicesEffect, 64>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x1008d2dd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect, MakeSharedPool<graphics::PointLightIndicesEffect, 64> >::MakeSharedPoolRefCounter(void*, graphics::PointLightIndicesEffect*): jumps straight to the base-object constructor

    // 0x1008d2de0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect, MakeSharedPool<graphics::PointLightIndicesEffect, 64> >::MakeSharedPoolRefCounter(void*, graphics::PointLightIndicesEffect*)
    void jag::MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect,
                                       MakeSharedPool<graphics::PointLightIndicesEffect, 64>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect,
                                                          MakeSharedPool<graphics::PointLightIndicesEffect, 64>>* this,
                                 void* param_1, PointLightIndicesEffect* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c08 + 16;
        *(void**)(this + 16) = param_1;
        *(PointLightIndicesEffect**)(this + 24) = param_2;
    }

    // 0x1008d2e20, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect, MakeSharedPool<graphics::PointLightIndicesEffect, 64> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect,
                                       MakeSharedPool<graphics::PointLightIndicesEffect, 64>>::
        DeleteSelf(MakeSharedPoolRefCounter<graphics::PointLightIndicesEffect,
                                            MakeSharedPool<graphics::PointLightIndicesEffect, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::PointLightIndicesEffect, 64>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x1008d2830, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2, void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::__2,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __2* param_1) {
        *(undefined8*)this = 0;
        (shared_ptr<graphics::PointLightGridTextureData> const&)
            ->UpdateTexture()::$_2::__2((__2*)(this + 16), (__2*)param_1);
        *(code**)(this + 144) =
            function<graphics::PointLightGridTexture::UpdateTexture(
                         shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
                     void>((shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<graphics::PointLightGridTexture::UpdateTexture(
                         shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
                     void>((shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<graphics::PointLightGridTexture::UpdateTexture(
                         shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
                     void>((shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1008d28b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2, void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1008d28c0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2, void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData>
   const&)::$_2,
   void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData>
   const&)::$_2&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2::__2(param_2, param_1);
    }

    // 0x1008d2910, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2, void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1008d2920, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2, void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData>
   const&)::$_2,
   void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData>
   const&)::$_2&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2::operator()(param_1, param_2);
    }

    // 0x1008d29f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2, void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x1008d2a00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2, void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData>
   const&)::$_2,
   void>(graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData>
   const&)::$_2&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::PointLightGridTexture::UpdateTexture(shared_ptr<graphics::PointLightGridTextureData> const&)::$_2,
        void>(graphics::PointLightGridTexture::UpdateTexture(
        shared_ptr<graphics::PointLightGridTextureData> const&)::$_2&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (shared_ptr<graphics::PointLightGridTextureData> const&)->UpdateTexture()::$_2::~__2((__2*)this);
    }

} // namespace jag::fixedfunction

namespace jag::graphicutils {
    // 0x1008cced0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TextureAtlasSlot2D::TextureAtlasSlot2D(TextureAtlasSlot2D const&): jumps straight to the base-object constructor

    // 0x1008ccee0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TextureAtlasSlot2D::TextureAtlasSlot2D(TextureAtlasSlot2D const&)
    void TextureAtlasSlot2D::TextureAtlasSlot2D(TextureAtlasSlot2D* param_1) {
        field_0 = param_1->field_0;
        field_2 = param_1->field_2;
        field_4 = param_1->field_4;
    }

    // 0x1008cd5a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TextureAtlasSlot::TextureAtlasSlot(): jumps straight to the base-object constructor

    // 0x1008cd5b0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TextureAtlasSlot::TextureAtlasSlot()
    void TextureAtlasSlot::TextureAtlasSlot() {
        field_0 = 4294967295;
        field_4 = 0;
        field_6 = 0;
        field_8 = 65535;
        field_10 = 65535;
    }

} // namespace jag::graphicutils

namespace jag::math {
    // 0x1008cd7a0, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::operator*=(Matrix44T<float> const&)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&) */

    void Vector3T<float>::operator*=(Matrix44T* param_1) {
        undefined8 local_20[2];

        local_20[0] = math::operator*((Vector3T*)this, param_1);
        SetXYZ(local_20);
    }

    // 0x1008cdc30, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> Vector4Reciprocal<float>(Vector4T<float> const&)
    undefined1[16] Vector4Reciprocal<float>(Vector4T* param_1) {
        undefined1 auVar1[16];
        ImVec4 local_18[16];

        ImVec4::ImVec4(local_18, 1.0 / *(float*)param_1, 1.0 / *(float*)(param_1 + 4), 1.0 / *(float*)(param_1 + 8),
                       1.0 / *(float*)(param_1 + 12));
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

    // 0x1008d31c0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(float, float, float, float)
    void ColourStorage8888<ARGB8StorageLayout>::ColourStorage8888(float param_1, float param_2, float param_3,
                                                                  float param_4) {
        Set(this, param_1, param_2, param_3, param_4);
    }

    // 0x1008d31d0, 256 bytes, inline, placed by debug map only (low confidence)
    // ColourStorage8888<ARGB8StorageLayout>::Set(float, float, float, float)
    void ColourStorage8888<ARGB8StorageLayout>::Set(float param_1, float param_2, float param_3, float param_4) {
        int iVar1;
        int local_1c[3];

        local_1c[0] = RoundFloatToInt(param_1 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[2] = SUB41(iVar1, 0);
        local_1c[0] = RoundFloatToInt(param_2 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[1] = SUB41(iVar1, 0);
        local_1c[0] = RoundFloatToInt(param_3 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        *this = SUB41(iVar1, 0);
        local_1c[0] = RoundFloatToInt(param_4 * 255.0);
        local_1c[1] = 0;
        local_1c[2] = 255;
        iVar1 = Clamp<int>(local_1c, local_1c + 1, local_1c + 2);
        this[3] = SUB41(iVar1, 0);
    }

} // namespace jag::math
