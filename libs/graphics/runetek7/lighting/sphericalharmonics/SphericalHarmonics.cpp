// libs/graphics/runetek7/lighting/sphericalharmonics/SphericalHarmonics.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x1008b2d10
    float* SHEvalDirection(float* arg1, unsigned long arg2, const math::Vector4T<float>& vector4) {
        float arg1_00;
        float arg2_00;
        float arg3;
        float* pfVar1;
        unsigned long uVar2;

        if (arg1 != nullptr) {
            pfVar1 = (float*)vector4.SSOBeginPtr();
            arg1_00 = *pfVar1;
            pfVar1 = (float*)vector4.y();
            arg2_00 = *pfVar1;
            pfVar1 = (float*)vector4.second();
            uVar2 = arg2 - 2;
            if (uVar2 < 5) {
                arg3 = *pfVar1;
                switch (uVar2) {
                case 0:
                    sh_eval_basis_1(arg1_00, arg2_00, arg3, arg1);
                    return arg1;
                case 1:
                    sh_eval_basis_2(arg1_00, arg2_00, arg3, arg1);
                    return arg1;
                case 2:
                    sh_eval_basis_3(arg1_00, arg2_00, arg3, arg1);
                    return arg1;
                case 3:
                    sh_eval_basis_4(arg1_00, arg2_00, arg3, arg1);
                    return arg1;
                case 4:
                    sh_eval_basis_5(arg1_00, arg2_00, arg3, arg1);
                    return arg1;
                }
            }
            if (uVar2 < 5) {
                LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                          1052, nullptr);
            }
        }
        return nullptr;
    }

    // 0x1008b2e30
    void sh_eval_basis_1(float arg1, float arg2, float arg3, float* arg4) {
        *arg4 = 0.2820948f;
        arg4[2] = arg3 * 0.48860252f;
        arg4[1] = arg2 * -0.48860252;
        arg4[3] = arg1 * -0.48860252;
    }

    // 0x1008b2e70
    void sh_eval_basis_2(float arg1, float arg2, float arg3, float* arg4) {
        *arg4 = 0.2820948f;
        arg4[2] = arg3 * 0.48860252f;
        arg4[6] = arg3 * arg3 * 0.9461747f - 0.31539157f;
        arg4[1] = arg2 * -0.48860252;
        arg4[3] = arg1 * -0.48860252;
        arg4[5] = arg3 * -1.0925485 * arg2;
        arg4[7] = arg3 * -1.0925485 * arg1;
        arg4[4] = arg2 * arg1 * 1.0925485f;
        arg4[8] = (arg1 * arg1 - arg2 * arg2) * 0.54627424f;
    }

    // 0x1008b2f10
    void sh_eval_basis_3(float arg1, float arg2, float arg3, float* arg4) {
        float fVar1 = arg3 * arg3;
        *arg4 = 0.2820948f;
        arg4[2] = arg3 * 0.48860252f;
        arg4[6] = fVar1 * 0.9461747f - 0.31539157f;
        arg4[12] = (fVar1 * 1.8658817f - 1.119529f) * arg3;
        fVar1 = fVar1 * -2.285229 + 0.4570458f;
        float fVar3 = (arg2 + arg2) * arg1;
        float fVar2 = arg1 * arg1 - arg2 * arg2;
        arg4[1] = arg2 * -0.48860252;
        arg4[3] = arg1 * -0.48860252;
        arg4[5] = arg3 * -1.0925485 * arg2;
        arg4[7] = arg3 * -1.0925485 * arg1;
        arg4[11] = fVar1 * arg2;
        arg4[13] = fVar1 * arg1;
        arg4[4] = fVar3 * 0.54627424f;
        arg4[8] = fVar2 * 0.54627424f;
        arg4[10] = arg3 * 1.4453057f * fVar3;
        arg4[14] = arg3 * 1.4453057f * fVar2;
        arg4[9] = (fVar2 * arg2 + fVar3 * arg1) * -0.5900436;
        arg4[15] = (fVar2 * arg1 - fVar3 * arg2) * -0.5900436;
    }

    // 0x1008b3070
    void sh_eval_basis_4(float arg1, float arg2, float arg3, float* arg4) {
        float fVar5 = arg3 * arg3;
        *arg4 = 0.2820948f;
        arg4[2] = arg3 * 0.48860252f;
        float fVar1 = fVar5 * 0.9461747f - 0.31539157f;
        arg4[6] = fVar1;
        float fVar2 = (fVar5 * 1.8658817f - 1.119529f) * arg3;
        arg4[12] = fVar2;
        arg4[20] = fVar1 * -1.0062306 + arg3 * 1.9843135f * fVar2;
        float fVar7 = fVar5 * -2.285229 + 0.4570458f;
        fVar1 = (arg2 + arg2) * arg1;
        fVar2 = arg1 * arg1 - arg2 * arg2;
        float fVar6 = fVar5 * 3.3116114f - 0.47308734f;
        float fVar4 = fVar2 * arg2 + fVar1 * arg1;
        float fVar3 = fVar2 * arg1 - fVar1 * arg2;
        fVar5 = (fVar5 * -4.683326 + 2.0071397f) * arg3;
        arg4[1] = arg2 * -0.48860252;
        arg4[3] = arg1 * -0.48860252;
        arg4[5] = arg3 * -1.0925485 * arg2;
        arg4[7] = arg3 * -1.0925485 * arg1;
        arg4[11] = fVar7 * arg2;
        arg4[13] = fVar7 * arg1;
        arg4[19] = fVar5 * arg2;
        arg4[21] = fVar5 * arg1;
        arg4[4] = fVar1 * 0.54627424f;
        arg4[8] = fVar2 * 0.54627424f;
        arg4[10] = arg3 * 1.4453057f * fVar1;
        arg4[14] = arg3 * 1.4453057f * fVar2;
        arg4[18] = fVar6 * fVar1;
        arg4[22] = fVar6 * fVar2;
        arg4[9] = fVar4 * -0.5900436;
        arg4[15] = fVar3 * -0.5900436;
        arg4[17] = fVar4 * arg3 * -1.7701308;
        arg4[23] = arg3 * -1.7701308 * fVar3;
        arg4[16] = (fVar3 * arg2 + fVar4 * arg1) * 0.6258357f;
        arg4[24] = (fVar3 * arg1 - fVar4 * arg2) * 0.6258357f;
    }

    // 0x1008b3310
    void sh_eval_basis_5(float arg1, float arg2, float arg3, float* arg4) {
        float fVar3 = arg3 * arg3;
        *arg4 = 0.2820948f;
        arg4[2] = arg3 * 0.48860252f;
        float fVar1 = fVar3 * 0.9461747f - 0.31539157f;
        arg4[6] = fVar1;
        float fVar4 = (fVar3 * 1.8658817f - 1.119529f) * arg3;
        arg4[12] = fVar4;
        fVar1 = fVar1 * -1.0062306 + arg3 * 1.9843135f * fVar4;
        arg4[20] = fVar1;
        arg4[30] = fVar4 * -1.002853 + arg3 * 1.9899749f * fVar1;
        float fVar10 = fVar3 * -2.285229 + 0.4570458f;
        float fVar12 = (fVar3 * -4.683326 + 2.0071397f) * arg3;
        float fVar11 = fVar10 * -0.9910312 + arg3 * 2.0310097f * fVar12;
        fVar4 = (arg2 + arg2) * arg1;
        float fVar5 = arg1 * arg1 - arg2 * arg2;
        fVar1 = fVar5 * arg2 + fVar4 * arg1;
        float fVar9 = fVar3 * 3.3116114f - 0.47308734f;
        float fVar8 = (fVar3 * 7.190305f - 2.3967683f) * arg3;
        float fVar6 = fVar5 * arg1 - fVar4 * arg2;
        float fVar2 = fVar6 * arg2 + fVar1 * arg1;
        fVar3 = fVar3 * -4.403145 + 0.4892383f;
        float fVar7 = fVar6 * arg1 - fVar1 * arg2;
        arg4[1] = arg2 * -0.48860252;
        arg4[3] = arg1 * -0.48860252;
        arg4[5] = arg3 * -1.0925485 * arg2;
        arg4[7] = arg3 * -1.0925485 * arg1;
        arg4[11] = fVar10 * arg2;
        arg4[13] = fVar10 * arg1;
        arg4[19] = fVar12 * arg2;
        arg4[21] = fVar12 * arg1;
        arg4[29] = fVar11 * arg2;
        arg4[31] = fVar11 * arg1;
        arg4[4] = fVar4 * 0.54627424f;
        arg4[8] = fVar5 * 0.54627424f;
        arg4[10] = arg3 * 1.4453057f * fVar4;
        arg4[14] = arg3 * 1.4453057f * fVar5;
        arg4[18] = fVar9 * fVar4;
        arg4[22] = fVar9 * fVar5;
        arg4[28] = fVar8 * fVar4;
        arg4[32] = fVar8 * fVar5;
        arg4[9] = fVar1 * -0.5900436;
        arg4[15] = fVar6 * -0.5900436;
        arg4[17] = fVar1 * arg3 * -1.7701308;
        arg4[23] = arg3 * -1.7701308 * fVar6;
        arg4[27] = fVar3 * fVar1;
        arg4[33] = fVar3 * fVar6;
        arg4[16] = fVar2 * 0.6258357f;
        arg4[24] = fVar7 * 0.6258357f;
        arg4[26] = fVar2 * arg3 * 2.0756624f;
        arg4[34] = arg3 * 2.0756624f * fVar7;
        arg4[25] = (fVar7 * arg2 + fVar2 * arg1) * -0.6563821;
        arg4[35] = (fVar7 * arg1 - fVar2 * arg2) * -0.6563821;
    }

    // 0x1008b3720
    float* SHRotate(float* arg1, unsigned long arg2, const math::Matrix44T<float>& matrix44, const float* arg4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        Vector4T<float>* pVVar9;
        float* pfVar11;
        long lVar12;
        float local_b8;
        float local_b4;
        float local_b0;
        float local_ac;
        float local_a8;
        float local_a4;
        float local_a0;
        float local_9c;
        float local_98;
        float local_94;
        float local_90;
        float local_8c;
        float local_88;
        float local_84;
        float local_80;
        float local_7c;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        float local_68;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;

        float* pfVar10 = nullptr;
        if (((arg1 != nullptr) && (arg4 != nullptr)) && (arg1 != arg4)) {
            pVVar9 = &matrix44[0];
            pfVar10 = (float*)(*pVVar9)[0];
            fVar1 = *pfVar10;
            local_58 = fVar1;
            pVVar9 = &matrix44[0];
            pfVar10 = (float*)(*pVVar9)[1];
            fVar2 = *pfVar10;
            local_4c = fVar2;
            pVVar9 = &matrix44[0];
            pfVar10 = (float*)(*pVVar9)[2];
            fVar3 = *pfVar10;
            local_40 = fVar3;
            pVVar9 = &matrix44[1];
            pfVar10 = (float*)(*pVVar9)[0];
            fVar4 = *pfVar10;
            local_54 = fVar4;
            pVVar9 = &matrix44[1];
            pfVar10 = (float*)(*pVVar9)[1];
            fVar5 = *pfVar10;
            local_48 = fVar5;
            pVVar9 = &matrix44[1];
            pfVar10 = (float*)(*pVVar9)[2];
            fVar6 = *pfVar10;
            local_3c = fVar6;
            pVVar9 = &matrix44[2];
            pfVar10 = (float*)(*pVVar9)[0];
            fVar7 = *pfVar10;
            local_50 = fVar7;
            pVVar9 = &matrix44[2];
            pfVar10 = (float*)(*pVVar9)[1];
            fVar8 = *pfVar10;
            local_44 = fVar8;
            pVVar9 = &matrix44[2];
            pfVar10 = (float*)(*pVVar9)[2];
            local_38 = *pfVar10;
            *arg1 = *arg4;
            pfVar10 = arg1;
            switch (arg2 - 2) {
            case 0:
                arg1[1] = fVar2 * arg4[3] + (fVar5 * arg4[1] - fVar8 * arg4[2]);
                arg1[2] = local_38 * arg4[2] - (fVar3 * arg4[3] + fVar6 * arg4[1]);
                arg1[3] = fVar1 * arg4[3] + (fVar4 * arg4[1] - fVar7 * arg4[2]);
                break;
            case 1:
                arg1[1] = arg4[3] * fVar2 + (arg4[1] * fVar5 - arg4[2] * fVar8);
                arg1[2] = arg4[2] * local_38 - (arg4[3] * fVar3 + arg4[1] * fVar6);
                arg1[3] = arg4[3] * fVar1 + (arg4[1] * fVar4 - arg4[2] * fVar7);
                local_b8 = fVar2 * fVar1 - fVar5 * fVar4;
                local_b4 = -fVar3 * fVar5 - fVar6 * fVar2;
                local_b0 = fVar8 * fVar6 + local_38 * fVar5;
                local_ac = local_38 * -1.7320508 * fVar8;
                local_a8 = local_38 * fVar2 + fVar8 * fVar3;
                local_a4 = fVar5 * fVar6 - fVar2 * fVar3;
                local_a0 = fVar6 * 1.1547005f * fVar3 - (fVar5 * fVar2 + fVar4 * fVar1) * 0.57735026f;
                local_9c = (fVar8 * fVar5 + fVar7 * fVar4) * 0.57735026f - local_38 * fVar6 * 1.1547005f;
                local_98 = local_38 * local_38 - (fVar8 * fVar8 + fVar7 * fVar7) * 0.5;
                local_94 = (fVar8 * fVar2 + fVar7 * fVar1) * 0.57735026f - fVar3 * 1.1547005f * local_38;
                local_90 = (fVar3 * fVar3 - fVar6 * fVar6) * 0.57735026f +
                           (fVar4 * fVar4 + fVar5 * fVar5 + (fVar2 * -fVar2 - fVar1 * fVar1)) * 0.28867513f;
                local_8c = -fVar4 * fVar3 - fVar6 * fVar1;
                local_88 = fVar7 * fVar6 + local_38 * fVar4;
                local_84 = local_38 * -1.7320508 * fVar7;
                local_80 = fVar7 * fVar3 + local_38 * fVar1;
                local_7c = fVar6 * fVar4 - fVar3 * fVar1;
                local_78 = fVar4 * fVar1 - fVar5 * fVar2;
                local_74 = fVar8 * fVar5 - fVar7 * fVar4;
                local_70 = (fVar7 * fVar7 - fVar8 * fVar8) * 0.8660254f;
                local_6c = fVar8 * fVar2 - fVar7 * fVar1;
                local_68 = (((fVar1 * fVar1 + fVar2 * -fVar2) - fVar4 * fVar4) + fVar5 * fVar5) * 0.5;
                pfVar11 = &local_b8;
                lVar12 = 4;
                do {
                    arg1[lVar12] = arg4[8] * *pfVar11 + arg4[7] * pfVar11[-1] + arg4[6] * pfVar11[-2] +
                                   arg4[5] * pfVar11[-3] + arg4[4] * pfVar11[-4];
                    lVar12 = lVar12 + 1;
                    pfVar11 = pfVar11 + 5;
                } while (lVar12 != 9);
                break;
            case 2:
                sh3_rot(&local_58, arg4, arg1);
                break;
            case 3:
                sh4_rot(&local_58, arg4, arg1);
                break;
            case 4:
                sh5_rot(&local_58, arg4, arg1);
                break;
            default:
                if (arg2 - 2 < 5) {
                    LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                              1205, nullptr);
                }
                pfVar10 = nullptr;
            }
        }
        return pfVar10;
    }

    // 0x1008b3f50
    void sh3_rot(float* arg1, float* arg2, float* arg3) {
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        zyz(arg1, &local_38, &local_34, &local_30, &local_2c, &local_28, &local_24);
        sh3_rot(arg1, local_38, local_34, local_30, local_2c, local_28, local_24, arg2, arg3);
    }

    // 0x1008b3fc0
    void sh4_rot(float* arg1, float* arg2, float* arg3) {
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        zyz(arg1, &local_38, &local_34, &local_30, &local_2c, &local_28, &local_24);
        sh4_rot(arg1, local_38, local_34, local_30, local_2c, local_28, local_24, arg2, arg3);
    }

    // 0x1008b4030
    void sh5_rot(float* arg1, float* arg2, float* arg3) {
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        zyz(arg1, &local_38, &local_34, &local_30, &local_2c, &local_28, &local_24);
        sh5_rot(arg1, local_38, local_34, local_30, local_2c, local_28, local_24, arg2, arg3);
    }

    // 0x1008b40a0
    float* SHRotateZ(float* arg1, unsigned long arg2, float arg3, const float* arg4) {
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        unsigned long local_218;
        float fStack_210;
        uint32_t uStack_20c;
        float fStack_208;
        uint32_t uStack_204;
        unsigned long uStack_200;
        unsigned long local_1f8;
        uint64_t uStack_1f0;
        unsigned long local_1e8;
        uint64_t uStack_1e0;
        unsigned long local_1d8;
        unsigned long uStack_1d0;
        unsigned long local_1c8;
        uint64_t uStack_1c0;
        uint64_t local_1b8;
        uint64_t uStack_1b0;
        uint64_t local_1a8;
        unsigned long uStack_1a0;
        unsigned long local_198;
        uint64_t uStack_190;
        unsigned long local_188;
        uint64_t uStack_180;
        unsigned long local_178;
        unsigned long uStack_170;
        uint64_t local_168;
        uint64_t uStack_160;
        float local_158;
        float local_150;
        float local_138;
        float local_128;
        float local_118;
        float local_100;
        float local_f8;
        float local_d8;
        float local_c8;
        float local_b0;
        float local_98;
        float local_88;
        float local_68;
        float local_60;
        float local_38;

        float* pfVar1 = nullptr;
        if ((((arg1 != nullptr) && (arg4 != nullptr)) && (arg1 != arg4)) && (arg2 - 2 < 5)) {
            fVar2 = (float)::cos(arg3);
            fVar3 = (float)::sin(arg3);
            local_218 = (unsigned long)(unsigned int)fVar2;
            uStack_20c = 0;
            fStack_208 = 1.0;
            uStack_204 = 0;
            fVar8 = -fVar3;
            uStack_200 = (unsigned long)(unsigned int)fVar8;
            local_1f8 = (((uint64_t)local_1f8._4_4_ << 32) | (uint32_t)fVar2);
            *arg1 = *arg4;
            fStack_210 = fVar3;
            SimpMatMul(3, (float*)&local_218, arg4 + 1, arg1 + 1);
            if (2 < arg2) {
                fStack_210 = 0.0;
                uStack_20c = 0;
                uStack_204 = 0;
                uStack_1f0 = 0;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                fVar11 = fVar3 * fVar3;
                fVar9 = fVar2 * fVar2;
                fVar10 = fVar9 - fVar11;
                fVar12 = (fVar3 + fVar3) * fVar2;
                local_218 = (unsigned long)(unsigned int)fVar10;
                uStack_200 = (unsigned long)(unsigned int)fVar2;
                local_1f8 = (unsigned long)(unsigned int)fVar3;
                local_1e8 = 1065353216;
                local_1d8 = (unsigned long)(unsigned int)fVar8;
                uStack_1d0 = (unsigned long)(unsigned int)fVar2;
                fVar4 = -fVar12;
                local_1c8 = (unsigned long)(unsigned int)fVar4;
                local_1b8 = (((uint64_t)local_1b8._4_4_ << 32) | (uint32_t)fVar10);
                fStack_208 = fVar12;
                SimpMatMul(5, (float*)&local_218, arg4 + 4, arg1 + 4);
                if (arg2 != 3) {
                    fStack_210 = 0.0;
                    uStack_20c = 0;
                    fStack_208 = 0.0;
                    uStack_204 = 0;
                    uStack_1f0 = 0;
                    uStack_1e0 = 0;
                    uStack_1b0 = 0;
                    local_1a8 = 0;
                    uStack_190 = 0;
                    uStack_180 = 0;
                    local_168 = 0;
                    uStack_160 = 0;
                    local_1c8 = 0;
                    uStack_1c0 = 0;
                    fVar15 = fVar9 * fVar2;
                    fVar16 = fVar15 - fVar2 * 3.0 * fVar11;
                    fVar13 = fVar11 * fVar3;
                    fVar17 = fVar3 * 3.0 * fVar9 - fVar13;
                    local_218 = (unsigned long)(unsigned int)fVar16;
                    uStack_200 = (unsigned long)(unsigned int)fVar17;
                    local_1f8 = (unsigned long)(unsigned int)fVar10;
                    local_1e8 = (unsigned long)(unsigned int)fVar12;
                    local_1d8 = (unsigned long)(unsigned int)fVar2;
                    uStack_1d0 = (unsigned long)(unsigned int)fVar3;
                    local_1b8 = 1065353216;
                    uStack_1a0 = (unsigned long)(unsigned int)fVar8;
                    local_198 = (unsigned long)(unsigned int)fVar2;
                    local_188 = (unsigned long)(unsigned int)fVar4;
                    local_178 = (unsigned long)(unsigned int)fVar10;
                    fVar5 = -fVar17;
                    uStack_170 = (unsigned long)(unsigned int)fVar5;
                    local_158 = fVar16;
                    SimpMatMul(7, (float*)&local_218, arg4 + 9, arg1 + 9);
                    if (4 < arg2) {
                        ___bzero(&local_218, 328);
                        fVar14 = fVar9 * fVar9;
                        fVar6 = fVar11 * fVar11;
                        fVar18 = fVar9 * -6.0 * fVar11 + fVar6 + fVar14;
                        fVar19 = fVar15 * fVar3 - fVar13 * fVar2;
                        local_218 = (((uint64_t)local_218._4_4_ << 32) | (uint32_t)fVar18);
                        fVar7 = fVar19 * 4.0;
                        local_1f8 = (((uint64_t)local_1f8._4_4_ << 32) | (uint32_t)fVar7);
                        uStack_1f0 = (((uint64_t)uStack_1f0._4_4_ << 32) | (uint32_t)fVar16);
                        local_1d8 = (((uint64_t)local_1d8._4_4_ << 32) | (uint32_t)fVar17);
                        local_1c8 = (((uint64_t)local_1c8._4_4_ << 32) | (uint32_t)fVar10);
                        local_1b8 = (((uint64_t)local_1b8._4_4_ << 32) | (uint32_t)fVar12);
                        uStack_1a0 = (((uint64_t)uStack_1a0._4_4_ << 32) | (uint32_t)fVar2);
                        local_198 = (((uint64_t)local_198._4_4_ << 32) | (uint32_t)fVar3);
                        local_178 = (((uint64_t)local_178._4_4_ << 32) | (uint32_t)1065353216);
                        fVar19 = fVar19 * -4.0;
                        local_158 = fVar8;
                        local_150 = fVar2;
                        local_138 = fVar4;
                        local_128 = fVar10;
                        local_118 = fVar5;
                        local_100 = fVar16;
                        local_f8 = fVar19;
                        local_d8 = fVar18;
                        SimpMatMul(9, (float*)&local_218, arg4 + 16, arg1 + 16);
                        if (arg2 != 5) {
                            ___bzero(&local_218, 484);
                            local_38 = (fVar2 * 5.0 * fVar6 - fVar11 * 10.0 * fVar15) + fVar14 * fVar2;
                            local_60 = fVar6 * fVar3 + (fVar3 * 5.0 * fVar14 - fVar9 * 10.0 * fVar13);
                            local_218 = (((uint64_t)local_218._4_4_ << 32) | (uint32_t)local_38);
                            uStack_1f0 = (((uint64_t)uStack_1f0._4_4_ << 32) | (uint32_t)local_60);
                            local_1e8 = (((uint64_t)local_1e8._4_4_ << 32) | (uint32_t)fVar18);
                            local_1c8 = (((uint64_t)local_1c8._4_4_ << 32) | (uint32_t)fVar7);
                            local_1b8 = (((uint64_t)local_1b8._4_4_ << 32) | (uint32_t)fVar16);
                            uStack_1a0 = (((uint64_t)uStack_1a0._4_4_ << 32) | (uint32_t)fVar17);
                            local_188 = (((uint64_t)local_188._4_4_ << 32) | (uint32_t)fVar10);
                            local_178 = (((uint64_t)local_178._4_4_ << 32) | (uint32_t)fVar12);
                            local_128 = 1.0;
                            local_60 = -local_60;
                            local_158 = fVar2;
                            local_150 = fVar3;
                            local_100 = fVar8;
                            local_f8 = fVar2;
                            local_d8 = fVar4;
                            local_c8 = fVar10;
                            local_b0 = fVar5;
                            local_98 = fVar16;
                            local_88 = fVar19;
                            local_68 = fVar18;
                            SimpMatMul(11, (float*)&local_218, arg4 + 25, arg1 + 25);
                        }
                    }
                }
            }
            pfVar1 = arg1;
        }
        return pfVar1;
    }

    // 0x1008b47a0
    void SimpMatMul(unsigned long arg1, const float* arg2, const float* arg3, float* arg4) {
        unsigned long uVar1;
        float* pfVar2;
        unsigned long uVar3;

        if (arg1 != 0) {
            uVar3 = 0;
            pfVar2 = arg2;
            do {
                arg4[uVar3] = *arg3 * arg2[uVar3 * arg1];
                if (1 < arg1) {
                    uVar1 = 1;
                    do {
                        arg4[uVar3] = arg3[uVar1] * pfVar2[uVar1] + arg4[uVar3];
                        uVar1 = uVar1 + 1;
                    } while (arg1 != uVar1);
                }
                uVar3 = uVar3 + 1;
                pfVar2 = pfVar2 + arg1;
            } while (uVar3 != arg1);
        }
    }

    // 0x1008b4820
    float* SHAdd(float* arg1, unsigned long arg2, const float* arg3, const float* arg4) {
        long lVar2;

        float* pfVar1 = nullptr;
        if (((arg1 != nullptr) && (arg3 != nullptr)) && (arg4 != nullptr)) {
            if (arg2 * arg2 == 0) {
                return arg1;
            }
            lVar2 = 0;
            do {
                arg1[lVar2] = arg4[lVar2] + arg3[lVar2];
                lVar2 = lVar2 + 1;
            } while (arg2 * arg2 != lVar2);
            pfVar1 = arg1;
        }
        return pfVar1;
    }

    // 0x1008b4870
    float* SHScale(float* arg1, unsigned long arg2, const float* arg3, float arg4) {
        long lVar1;

        float* pfVar2 = nullptr;
        if ((arg1 != nullptr) && (arg3 != nullptr)) {
            if (arg2 * arg2 == 0) {
                return arg1;
            }
            lVar1 = 0;
            do {
                arg1[lVar1] = arg3[lVar1] * arg4;
                lVar1 = lVar1 + 1;
            } while (arg2 * arg2 != lVar1);
            pfVar2 = arg1;
        }
        return pfVar2;
    }

    // 0x1008b48b0
    float SHDot(unsigned long arg1, const float* arg2, const float* arg3) {
        unsigned long uVar1;

        float fVar2 = 0.0;
        if ((arg2 != nullptr) && (arg3 != nullptr)) {
            fVar2 = *arg3 * *arg2;
            if (1 < arg1 * arg1) {
                uVar1 = 1;
                do {
                    fVar2 = fVar2 + arg3[uVar1] * arg2[uVar1];
                    uVar1 = uVar1 + 1;
                } while (arg1 * arg1 != uVar1);
            }
        }
        return fVar2;
    }

    // 0x1008b4900
    void SHMultiply(float* arg1, unsigned long arg2, const float* arg3, const float* arg4) {
        uint64_t uVar1;

        switch (arg2 - 2) {
        case 0:
            uVar1 = SHMultiply2(arg1, arg3, arg4);
            break;
        case 1:
            uVar1 = SHMultiply3(arg1, arg3, arg4);
            break;
        case 2:
            uVar1 = SHMultiply4(arg1, arg3, arg4);
            break;
        case 3:
            uVar1 = SHMultiply5(arg1, arg3, arg4);
            break;
        case 4:
            uVar1 = SHMultiply6(arg1, arg3, arg4);
            break;
        default:
            if (arg2 - 2 < 5) {
                LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                          1501, nullptr);
            }
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x1008b49c0
    float* SHMultiply2(float* arg1, const float* arg2, const float* arg3) {
        float fVar2;

        float* pfVar1 = nullptr;
        if (((arg1 != nullptr) && (arg2 != nullptr)) && (arg3 != nullptr)) {
            fVar2 = *arg2 * 0.2820948f * *arg3;
            *arg1 = fVar2;
            arg1[1] = (arg2[1] * *arg3 + arg3[1] * *arg2) * 0.2820948f;
            fVar2 = arg2[1] * 0.2820948f * arg3[1] + fVar2;
            *arg1 = fVar2;
            arg1[2] = (arg2[2] * *arg3 + arg3[2] * *arg2) * 0.2820948f;
            fVar2 = arg2[2] * 0.2820948f * arg3[2] + fVar2;
            *arg1 = fVar2;
            arg1[3] = (arg2[3] * *arg3 + arg3[3] * *arg2) * 0.2820948f;
            *arg1 = arg2[3] * 0.2820948f * arg3[3] + fVar2;
            pfVar1 = arg1;
        }
        return pfVar1;
    }

    // 0x1008b4aa0
    float* SHMultiply3(float* arg1, const float* arg2, const float* arg3) {
        float fVar1;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;

        float* pfVar2 = nullptr;
        if (((arg1 != nullptr) && (arg2 != nullptr)) && (arg3 != nullptr)) {
            fVar5 = *arg2 * 0.2820948f * *arg3;
            *arg1 = fVar5;
            fVar3 = (arg3[8] * -0.21850969 + arg3[6] * -0.12615663 + *arg3 * 0.2820948f) * arg2[1] +
                    (arg2[8] * -0.21850969 + arg2[6] * -0.12615663 + *arg2 * 0.2820948f) * arg3[1];
            arg1[1] = fVar3;
            fVar10 = arg3[1] * arg2[1];
            fVar5 = fVar10 * 0.2820948f + fVar5;
            *arg1 = fVar5;
            arg1[6] = fVar10 * -0.12615663;
            arg1[8] = fVar10 * -0.21850969;
            fVar4 = arg2[5];
            fVar1 = arg3[5];
            fVar3 = arg2[2] * fVar1 * 0.21850969f + arg3[2] * fVar4 * 0.21850969f + fVar3;
            arg1[1] = fVar3;
            fVar6 = fVar1 * 0.21850969f * arg2[1] + fVar4 * 0.21850969f * arg3[1];
            arg1[2] = fVar6;
            fVar9 = (arg3[1] * arg2[2] + arg3[2] * arg2[1]) * 0.21850969f;
            arg1[5] = fVar9;
            fVar4 = arg2[4];
            fVar1 = arg3[4];
            arg1[1] = arg2[3] * fVar1 * 0.21850969f + arg3[3] * fVar4 * 0.21850969f + fVar3;
            fVar3 = fVar1 * 0.21850969f * arg2[1] + fVar4 * 0.21850969f * arg3[1];
            arg1[3] = fVar3;
            fVar11 = (arg3[1] * arg2[3] + arg3[3] * arg2[1]) * 0.21850969f;
            arg1[4] = fVar11;
            fVar7 = (arg2[6] * 0.25231326f + *arg2 * 0.2820948f) * arg3[2] + fVar6 +
                    (arg3[6] * 0.25231326f + *arg3 * 0.2820948f) * arg2[2];
            arg1[2] = fVar7;
            fVar4 = arg3[2];
            fVar1 = arg2[2];
            fVar5 = fVar4 * fVar1 * 0.2820948f + fVar5;
            *arg1 = fVar5;
            fVar6 = fVar4 * fVar1 * 0.25231326f + fVar10 * -0.12615663;
            arg1[6] = fVar6;
            fVar4 = arg2[7];
            fVar1 = arg3[7];
            arg1[2] = arg2[3] * fVar1 * 0.21850969f + arg3[3] * fVar4 * 0.21850969f + fVar7;
            fVar3 = fVar1 * 0.21850969f * arg2[2] + fVar4 * 0.21850969f * arg3[2] + fVar3;
            arg1[3] = fVar3;
            fVar8 = (arg3[2] * arg2[3] + arg3[3] * arg2[2]) * 0.21850969f;
            arg1[7] = fVar8;
            arg1[3] = (arg2[8] * 0.21850969f + arg2[6] * -0.12615663 + *arg2 * 0.2820948f) * arg3[3] + fVar3 +
                      (arg3[8] * 0.21850969f + arg3[6] * -0.12615663 + *arg3 * 0.2820948f) * arg2[3];
            fVar4 = arg3[3] * arg2[3];
            fVar5 = fVar4 * 0.2820948f + fVar5;
            *arg1 = fVar5;
            fVar6 = fVar4 * -0.12615663 + fVar6;
            arg1[6] = fVar6;
            fVar3 = fVar4 * 0.21850969f + fVar10 * -0.21850969;
            arg1[8] = fVar3;
            fVar7 = (*arg2 * 0.2820948f - arg2[6] * 0.18022375f) * arg3[4] + fVar11 +
                    (*arg3 * 0.2820948f - arg3[6] * 0.18022375f) * arg2[4];
            arg1[4] = fVar7;
            fVar4 = arg3[4];
            fVar1 = arg2[4];
            fVar5 = fVar4 * fVar1 * 0.2820948f + fVar5;
            *arg1 = fVar5;
            fVar6 = fVar6 - fVar4 * fVar1 * 0.18022375f;
            arg1[6] = fVar6;
            fVar4 = arg2[7];
            fVar1 = arg3[7];
            arg1[4] = arg2[5] * fVar1 * 0.15607835f + arg3[5] * fVar4 * 0.15607835f + fVar7;
            fVar9 = fVar1 * 0.15607835f * arg2[4] + fVar4 * 0.15607835f * arg3[4] + fVar9;
            arg1[5] = fVar9;
            fVar8 = (arg3[4] * arg2[5] + arg3[5] * arg2[4]) * 0.15607835f + fVar8;
            arg1[7] = fVar8;
            arg1[5] = (arg2[8] * -0.15607835 + arg2[6] * 0.090111874f + *arg2 * 0.2820948f) * arg3[5] + fVar9 +
                      (arg3[8] * -0.15607835 + arg3[6] * 0.090111874f + *arg3 * 0.2820948f) * arg2[5];
            fVar4 = arg3[5] * arg2[5];
            fVar5 = fVar4 * 0.2820948f + fVar5;
            *arg1 = fVar5;
            fVar6 = fVar4 * 0.090111874f + fVar6;
            arg1[6] = fVar6;
            fVar3 = fVar4 * -0.15607835 + fVar3;
            arg1[8] = fVar3;
            fVar6 = (arg2[6] * *arg3 + arg3[6] * *arg2) * 0.2820948f + fVar6;
            arg1[6] = fVar6;
            fVar4 = arg3[6];
            fVar1 = arg2[6];
            fVar5 = fVar4 * fVar1 * 0.2820948f + fVar5;
            *arg1 = fVar5;
            fVar6 = fVar4 * fVar1 * 0.18022376f + fVar6;
            arg1[6] = fVar6;
            arg1[7] = (arg2[8] * 0.15607835f + arg2[6] * 0.090111874f + *arg2 * 0.2820948f) * arg3[7] + fVar8 +
                      (arg3[8] * 0.15607835f + arg3[6] * 0.090111874f + *arg3 * 0.2820948f) * arg2[7];
            fVar4 = arg3[7] * arg2[7];
            fVar5 = fVar4 * 0.2820948f + fVar5;
            *arg1 = fVar5;
            fVar6 = fVar4 * 0.090111874f + fVar6;
            arg1[6] = fVar6;
            fVar3 = fVar4 * 0.15607835f + fVar3;
            arg1[8] = fVar3;
            arg1[8] = (*arg3 * 0.2820948f - arg3[6] * 0.18022375f) * arg2[8] +
                      (*arg2 * 0.2820948f - arg2[6] * 0.18022375f) * arg3[8] + fVar3;
            fVar4 = arg3[8];
            fVar1 = arg2[8];
            *arg1 = fVar4 * fVar1 * 0.2820948f + fVar5;
            arg1[6] = fVar6 - fVar4 * fVar1 * 0.18022375f;
            pfVar2 = arg1;
        }
        return pfVar2;
    }

    // 0x1008b50d0
    float* SHMultiply4(float* arg1, const float* arg2, const float* arg3) {
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        float fVar20;

        float* pfVar1 = nullptr;
        if (((arg1 != nullptr) && (arg2 != nullptr)) && (arg3 != nullptr)) {
            fVar2 = *arg2 * 0.2820948f * *arg3;
            *arg1 = fVar2;
            fVar6 = (arg3[8] * -0.21850969 + arg3[6] * -0.12615663 + *arg3 * 0.2820948f) * arg2[1] +
                    (arg2[8] * -0.21850969 + arg2[6] * -0.12615663 + *arg2 * 0.2820948f) * arg3[1];
            arg1[1] = fVar6;
            fVar12 = arg3[1] * arg2[1];
            fVar2 = fVar12 * 0.2820948f + fVar2;
            *arg1 = fVar2;
            arg1[6] = fVar12 * -0.12615663;
            arg1[8] = fVar12 * -0.21850969;
            fVar4 = arg2[15] * -0.22617902 + arg2[13] * -0.05839917 + arg2[3] * 0.21850969f;
            fVar14 = arg3[15] * -0.22617902 + arg3[13] * -0.05839917 + arg3[3] * 0.21850969f;
            fVar6 = arg2[4] * fVar14 + arg3[4] * fVar4 + fVar6;
            arg1[1] = fVar6;
            fVar15 = fVar14 * arg2[1] + fVar4 * arg3[1];
            arg1[4] = fVar15;
            fVar7 = arg3[1] * arg2[4] + arg3[4] * arg2[1];
            arg1[3] = fVar7 * 0.21850969f;
            arg1[13] = fVar7 * -0.05839917;
            arg1[15] = fVar7 * -0.22617902;
            fVar4 = arg2[14] * -0.1846744 + arg2[12] * -0.14304817 + arg2[2] * 0.21850969f;
            fVar14 = arg3[14] * -0.1846744 + arg3[12] * -0.14304817 + arg3[2] * 0.21850969f;
            fVar6 = arg2[5] * fVar14 + arg3[5] * fVar4 + fVar6;
            arg1[1] = fVar6;
            fVar16 = fVar14 * arg2[1] + fVar4 * arg3[1];
            arg1[5] = fVar16;
            fVar20 = arg3[1] * arg2[5] + arg3[5] * arg2[1];
            arg1[2] = fVar20 * 0.21850969f;
            arg1[12] = fVar20 * -0.14304817;
            arg1[14] = fVar20 * -0.1846744;
            fVar4 = arg2[11];
            fVar14 = arg3[11];
            fVar6 = arg2[6] * fVar14 * 0.20230065f + arg3[6] * fVar4 * 0.20230065f + fVar6;
            arg1[1] = fVar6;
            fVar17 = fVar4 * 0.20230065f * arg3[1] + fVar12 * -0.12615663 + fVar14 * 0.20230065f * arg2[1];
            arg1[6] = fVar17;
            fVar10 = (arg3[1] * arg2[6] + arg3[6] * arg2[1]) * 0.20230065f;
            arg1[11] = fVar10;
            fVar14 = arg2[11] * 0.05839917f + arg2[9] * 0.22617902f;
            fVar4 = arg3[11] * 0.05839917f + arg3[9] * 0.22617902f;
            fVar6 = arg2[8] * fVar4 + arg3[8] * fVar14 + fVar6;
            arg1[1] = fVar6;
            fVar13 = fVar14 * arg3[1] + fVar12 * -0.21850969 + fVar4 * arg2[1];
            arg1[8] = fVar13;
            fVar12 = arg3[1] * arg2[8] + arg3[8] * arg2[1];
            fVar10 = fVar12 * 0.05839917f + fVar10;
            fVar12 = fVar12 * 0.22617902f;
            arg1[9] = fVar12;
            arg1[11] = fVar10;
            fVar11 = (arg2[6] * 0.25231326f + *arg2 * 0.2820948f) * arg3[2] + fVar20 * 0.21850969f +
                     (arg3[6] * 0.25231326f + *arg3 * 0.2820948f) * arg2[2];
            arg1[2] = fVar11;
            fVar2 = arg3[2] * arg2[2] * 0.2820948f + fVar2;
            fVar17 = arg3[2] * arg2[2] * 0.25231326f + fVar17;
            *arg1 = fVar2;
            arg1[6] = fVar17;
            fVar4 = arg2[12];
            fVar14 = arg3[12];
            fVar11 = arg2[6] * fVar14 * 0.2477667f + arg3[6] * fVar4 * 0.2477667f + fVar11;
            arg1[2] = fVar11;
            fVar17 = fVar14 * 0.2477667f * arg2[2] + fVar4 * 0.2477667f * arg3[2] + fVar17;
            arg1[6] = fVar17;
            fVar8 = (arg3[2] * arg2[6] + arg3[6] * arg2[2]) * 0.2477667f + fVar20 * -0.14304817;
            arg1[12] = fVar8;
            fVar3 = (arg2[8] * 0.21850969f + arg2[6] * -0.12615663 + *arg2 * 0.2820948f) * arg3[3] +
                    fVar7 * 0.21850969f +
                    (arg3[8] * 0.21850969f + arg3[6] * -0.12615663 + *arg3 * 0.2820948f) * arg2[3];
            arg1[3] = fVar3;
            fVar4 = arg3[3] * arg2[3];
            fVar2 = fVar4 * 0.2820948f + fVar2;
            fVar17 = fVar4 * -0.12615663 + fVar17;
            fVar13 = fVar4 * 0.21850969f + fVar13;
            *arg1 = fVar2;
            arg1[6] = fVar17;
            arg1[8] = fVar13;
            fVar4 = arg2[13];
            fVar14 = arg3[13];
            fVar3 = arg2[6] * fVar14 * 0.20230065f + arg3[6] * fVar4 * 0.20230065f + fVar3;
            arg1[3] = fVar3;
            fVar17 = fVar14 * 0.20230065f * arg2[3] + fVar4 * 0.20230065f * arg3[3] + fVar17;
            arg1[6] = fVar17;
            fVar5 = (arg3[3] * arg2[6] + arg3[6] * arg2[3]) * 0.20230065f + fVar7 * -0.05839917;
            arg1[13] = fVar5;
            fVar4 = arg2[14] * 0.1846744f + arg2[12] * -0.14304817 + arg2[2] * 0.21850969f;
            fVar14 = arg3[14] * 0.1846744f + arg3[12] * -0.14304817 + arg3[2] * 0.21850969f;
            fVar3 = arg2[7] * fVar14 + arg3[7] * fVar4 + fVar3;
            arg1[3] = fVar3;
            fVar19 = fVar14 * arg2[3] + fVar4 * arg3[3];
            arg1[7] = fVar19;
            fVar4 = arg3[3] * arg2[7] + arg3[7] * arg2[3];
            fVar11 = fVar4 * 0.21850969f + fVar11;
            fVar8 = fVar4 * -0.14304817 + fVar8;
            fVar20 = fVar4 * 0.1846744f + fVar20 * -0.1846744;
            arg1[2] = fVar11;
            arg1[12] = fVar8;
            arg1[14] = fVar20;
            fVar4 = arg2[15] * 0.22617902f + arg2[13] * -0.05839917;
            fVar14 = arg3[15] * 0.22617902f + arg3[13] * -0.05839917;
            fVar3 = arg2[8] * fVar14 + arg3[8] * fVar4 + fVar3;
            arg1[3] = fVar3;
            fVar13 = fVar14 * arg2[3] + fVar4 * arg3[3] + fVar13;
            arg1[8] = fVar13;
            fVar4 = arg3[3] * arg2[8] + arg3[8] * arg2[3];
            fVar5 = fVar4 * -0.05839917 + fVar5;
            fVar9 = fVar4 * 0.22617902f + fVar7 * -0.22617902;
            arg1[13] = fVar5;
            arg1[15] = fVar9;
            fVar15 = (*arg3 * 0.2820948f - arg3[6] * 0.18022375f) * arg2[4] +
                     (*arg2 * 0.2820948f - arg2[6] * 0.18022375f) * arg3[4] + fVar15;
            arg1[4] = fVar15;
            fVar2 = arg3[4] * arg2[4] * 0.2820948f + fVar2;
            fVar17 = fVar17 - arg3[4] * arg2[4] * 0.18022375f;
            *arg1 = fVar2;
            arg1[6] = fVar17;
            fVar4 = arg2[7];
            fVar14 = arg3[7];
            fVar15 = arg2[5] * fVar14 * 0.15607835f + arg3[5] * fVar4 * 0.15607835f + fVar15;
            arg1[4] = fVar15;
            fVar16 = fVar14 * 0.15607835f * arg2[4] + fVar4 * 0.15607835f * arg3[4] + fVar16;
            arg1[5] = fVar16;
            fVar19 = (arg3[4] * arg2[5] + arg3[5] * arg2[4]) * 0.15607835f + fVar19;
            arg1[7] = fVar19;
            fVar4 = arg2[13] * -0.094031595 + arg2[3] * 0.22617902f;
            fVar14 = arg3[13] * -0.094031595 + arg3[3] * 0.22617902f;
            fVar15 = arg2[9] * fVar14 + arg3[9] * fVar4 + fVar15;
            arg1[4] = fVar15;
            fVar7 = fVar4 * arg3[4] + fVar12 + fVar14 * arg2[4];
            arg1[9] = fVar7;
            fVar4 = arg3[4] * arg2[9] + arg3[9] * arg2[4];
            fVar3 = fVar4 * 0.22617902f + fVar3;
            fVar5 = fVar4 * -0.094031595 + fVar5;
            arg1[3] = fVar3;
            arg1[13] = fVar5;
            fVar4 = arg2[2] * 0.1846744f - arg2[12] * 0.18806319f;
            fVar14 = arg3[2] * 0.1846744f - arg3[12] * 0.18806319f;
            fVar15 = arg2[10] * fVar14 + arg3[10] * fVar4 + fVar15;
            arg1[4] = fVar15;
            fVar18 = fVar14 * arg2[4] + fVar4 * arg3[4];
            arg1[10] = fVar18;
            fVar4 = arg3[4] * arg2[10] + arg3[10] * arg2[4];
            fVar11 = fVar4 * 0.1846744f + fVar11;
            fVar8 = fVar8 - fVar4 * 0.18806319f;
            arg1[2] = fVar11;
            arg1[12] = fVar8;
            fVar14 = arg2[15] * 0.094031595f + arg2[13] * 0.14567313f + arg2[3] * -0.05839917;
            fVar4 = arg3[15] * 0.094031595f + arg3[13] * 0.14567313f + arg3[3] * -0.05839917;
            arg1[4] = arg2[11] * fVar4 + arg3[11] * fVar14 + fVar15;
            fVar12 = fVar14 * arg3[4] + fVar10 + fVar4 * arg2[4];
            arg1[11] = fVar12;
            fVar4 = arg3[4] * arg2[11] + arg3[11] * arg2[4];
            fVar3 = fVar4 * -0.05839917 + fVar3;
            fVar5 = fVar4 * 0.14567313f + fVar5;
            fVar9 = fVar4 * 0.094031595f + fVar9;
            arg1[3] = fVar3;
            arg1[13] = fVar5;
            arg1[15] = fVar9;
            fVar16 = (arg3[8] * -0.15607835 + arg3[6] * 0.090111874f + *arg3 * 0.2820948f) * arg2[5] +
                     (arg2[8] * -0.15607835 + arg2[6] * 0.090111874f + *arg2 * 0.2820948f) * arg3[5] + fVar16;
            arg1[5] = fVar16;
            fVar4 = arg3[5] * arg2[5];
            fVar2 = fVar4 * 0.2820948f + fVar2;
            fVar17 = fVar4 * 0.090111874f + fVar17;
            fVar13 = fVar4 * -0.15607835 + fVar13;
            *arg1 = fVar2;
            arg1[6] = fVar17;
            arg1[8] = fVar13;
            fVar4 = arg2[14];
            fVar14 = arg3[14];
            fVar16 = arg2[9] * fVar14 * 0.148677 + arg3[9] * fVar4 * 0.148677 + fVar16;
            arg1[5] = fVar16;
            fVar7 = fVar14 * 0.148677 * arg2[5] + fVar4 * 0.148677 * arg3[5] + fVar7;
            arg1[9] = fVar7;
            fVar20 = (arg3[5] * arg2[9] + arg3[9] * arg2[5]) * 0.148677 + fVar20;
            arg1[14] = fVar20;
            fVar14 = arg2[15] * -0.148677 + arg2[13] * 0.11516472f + arg2[3] * 0.1846744f;
            fVar4 = arg3[15] * -0.148677 + arg3[13] * 0.11516472f + arg3[3] * 0.1846744f;
            fVar16 = arg2[10] * fVar4 + arg3[10] * fVar14 + fVar16;
            arg1[5] = fVar16;
            fVar10 = fVar14 * arg3[5] + fVar18 + fVar4 * arg2[5];
            arg1[10] = fVar10;
            fVar4 = arg3[5] * arg2[10] + arg3[10] * arg2[5];
            arg1[3] = fVar4 * 0.1846744f + fVar3;
            fVar5 = fVar4 * 0.11516472f + fVar5;
            fVar9 = fVar4 * -0.148677 + fVar9;
            arg1[13] = fVar5;
            arg1[15] = fVar9;
            fVar14 = arg2[14] * -0.11516472 + arg2[12] * 0.059470803f + arg2[2] * 0.23359668f;
            fVar4 = arg3[14] * -0.11516472 + arg3[12] * 0.059470803f + arg3[2] * 0.23359668f;
            arg1[5] = arg2[11] * fVar4 + arg3[11] * fVar14 + fVar16;
            fVar12 = fVar4 * arg2[5] + fVar14 * arg3[5] + fVar12;
            arg1[11] = fVar12;
            fVar4 = arg3[5] * arg2[11] + arg3[11] * arg2[5];
            fVar11 = fVar4 * 0.23359668f + fVar11;
            fVar8 = fVar4 * 0.059470803f + fVar8;
            fVar20 = fVar4 * -0.11516472 + fVar20;
            arg1[2] = fVar11;
            arg1[12] = fVar8;
            arg1[14] = fVar20;
            fVar17 = (arg2[6] * *arg3 + arg3[6] * *arg2) * 0.2820948f + fVar17;
            arg1[6] = fVar17;
            fVar2 = arg3[6] * arg2[6] * 0.2820948f + fVar2;
            fVar17 = arg3[6] * arg2[6] * 0.18022376f + fVar17;
            *arg1 = fVar2;
            arg1[6] = fVar17;
            fVar19 = (arg3[8] * 0.15607835f + *arg3 * 0.2820948f + arg3[6] * 0.090111874f) * arg2[7] +
                     (arg2[8] * 0.15607835f + *arg2 * 0.2820948f + arg2[6] * 0.090111874f) * arg3[7] + fVar19;
            arg1[7] = fVar19;
            fVar4 = arg3[7] * arg2[7];
            fVar17 = fVar4 * 0.090111874f + fVar17;
            fVar2 = fVar4 * 0.2820948f + fVar2;
            fVar13 = fVar4 * 0.15607835f + fVar13;
            arg1[6] = fVar17;
            *arg1 = fVar2;
            arg1[8] = fVar13;
            fVar4 = arg2[11] * 0.11516472f + arg2[1] * 0.1846744f + arg2[9] * 0.148677;
            fVar14 = arg3[11] * 0.11516472f + arg3[1] * 0.1846744f + arg3[9] * 0.148677;
            fVar19 = arg2[10] * fVar14 + arg3[10] * fVar4 + fVar19;
            arg1[7] = fVar19;
            fVar10 = fVar14 * arg2[7] + fVar4 * arg3[7] + fVar10;
            arg1[10] = fVar10;
            fVar4 = arg3[7] * arg2[10] + arg3[10] * arg2[7];
            fVar7 = fVar4 * 0.148677 + fVar7;
            arg1[9] = fVar7;
            arg1[1] = fVar4 * 0.1846744f + fVar6;
            fVar12 = fVar4 * 0.11516472f + fVar12;
            arg1[11] = fVar12;
            fVar14 = arg2[14] * 0.11516472f + arg2[2] * 0.23359668f + arg2[12] * 0.059470803f;
            fVar4 = arg3[14] * 0.11516472f + arg3[2] * 0.23359668f + arg3[12] * 0.059470803f;
            fVar19 = arg2[13] * fVar4 + arg3[13] * fVar14 + fVar19;
            arg1[7] = fVar19;
            fVar5 = fVar4 * arg2[7] + fVar14 * arg3[7] + fVar5;
            arg1[13] = fVar5;
            fVar4 = arg3[7] * arg2[13] + arg3[13] * arg2[7];
            fVar8 = fVar4 * 0.059470803f + fVar8;
            fVar11 = fVar4 * 0.23359668f + fVar11;
            fVar20 = fVar4 * 0.11516472f + fVar20;
            arg1[12] = fVar8;
            arg1[2] = fVar11;
            arg1[14] = fVar20;
            fVar4 = arg2[15];
            fVar14 = arg3[15];
            arg1[7] = arg2[14] * fVar14 * 0.148677 + arg3[14] * fVar4 * 0.148677 + fVar19;
            fVar20 = fVar14 * 0.148677 * arg2[7] + fVar4 * 0.148677 * arg3[7] + fVar20;
            arg1[14] = fVar20;
            fVar9 = (arg3[7] * arg2[14] + arg3[14] * arg2[7]) * 0.148677 + fVar9;
            arg1[15] = fVar9;
            fVar13 = (*arg3 * 0.2820948f - arg3[6] * 0.18022375f) * arg2[8] +
                     (*arg2 * 0.2820948f - arg2[6] * 0.18022375f) * arg3[8] + fVar13;
            arg1[8] = fVar13;
            fVar2 = arg3[8] * arg2[8] * 0.2820948f + fVar2;
            fVar17 = fVar17 - arg3[8] * arg2[8] * 0.18022375f;
            *arg1 = fVar2;
            arg1[6] = fVar17;
            fVar4 = arg2[11];
            fVar14 = arg3[11];
            fVar13 = arg2[9] * fVar14 * -0.094031595 + arg3[9] * fVar4 * -0.094031595 + fVar13;
            arg1[8] = fVar13;
            fVar7 = fVar14 * -0.094031595 * arg2[8] + fVar4 * -0.094031595 * arg3[8] + fVar7;
            arg1[9] = fVar7;
            fVar12 = (arg3[8] * arg2[9] + arg3[9] * arg2[8]) * -0.094031595 + fVar12;
            arg1[11] = fVar12;
            fVar4 = arg2[15];
            fVar14 = arg3[15];
            fVar13 = arg2[13] * fVar14 * -0.094031595 + arg3[13] * fVar4 * -0.094031595 + fVar13;
            arg1[8] = fVar13;
            fVar5 = fVar14 * -0.094031595 * arg2[8] + fVar4 * -0.094031595 * arg3[8] + fVar5;
            arg1[13] = fVar5;
            fVar9 = (arg3[8] * arg2[13] + arg3[13] * arg2[8]) * -0.094031595 + fVar9;
            arg1[15] = fVar9;
            fVar14 = arg2[2] * 0.1846744f - arg2[12] * 0.18806319f;
            fVar4 = arg3[2] * 0.1846744f - arg3[12] * 0.18806319f;
            fVar13 = arg2[14] * fVar4 + arg3[14] * fVar14 + fVar13;
            arg1[8] = fVar13;
            fVar20 = fVar4 * arg2[8] + fVar14 * arg3[8] + fVar20;
            arg1[14] = fVar20;
            fVar4 = arg3[8] * arg2[14] + arg3[14] * arg2[8];
            arg1[2] = fVar4 * 0.1846744f + fVar11;
            fVar8 = fVar8 - fVar4 * 0.18806319f;
            arg1[12] = fVar8;
            arg1[9] = (*arg3 * 0.2820948f - arg3[6] * 0.21026105f) * arg2[9] +
                      (*arg2 * 0.2820948f - arg2[6] * 0.21026105f) * arg3[9] + fVar7;
            fVar4 = arg3[9];
            fVar14 = arg2[9];
            fVar17 = fVar17 - fVar4 * fVar14 * 0.21026105f;
            arg1[6] = fVar17;
            fVar2 = fVar4 * fVar14 * 0.2820948f + fVar2;
            *arg1 = fVar2;
            arg1[10] = (arg2[10] * *arg3 + arg3[10] * *arg2) * 0.2820948f + fVar10;
            fVar2 = arg2[10] * 0.2820948f * arg3[10] + fVar2;
            *arg1 = fVar2;
            arg1[11] = (arg3[8] * -0.14567313 + arg3[6] * 0.12615663f + *arg3 * 0.2820948f) * arg2[11] +
                       (arg2[8] * -0.14567313 + arg2[6] * 0.12615663f + *arg2 * 0.2820948f) * arg3[11] + fVar12;
            fVar4 = arg3[11] * arg2[11];
            fVar2 = fVar4 * 0.2820948f + fVar2;
            *arg1 = fVar2;
            fVar17 = fVar4 * 0.12615663f + fVar17;
            arg1[6] = fVar17;
            fVar13 = fVar4 * -0.14567313 + fVar13;
            arg1[8] = fVar13;
            arg1[12] = (arg3[6] * 0.16820885f + *arg3 * 0.2820948f) * arg2[12] +
                       (arg2[6] * 0.16820885f + *arg2 * 0.2820948f) * arg3[12] + fVar8;
            fVar4 = arg3[12];
            fVar14 = arg2[12];
            fVar2 = fVar4 * fVar14 * 0.2820948f + fVar2;
            *arg1 = fVar2;
            fVar17 = fVar4 * fVar14 * 0.16820885f + fVar17;
            arg1[6] = fVar17;
            arg1[13] = (arg3[6] * 0.12615663f + arg3[8] * 0.14567313f + *arg3 * 0.2820948f) * arg2[13] +
                       (arg2[6] * 0.12615663f + arg2[8] * 0.14567313f + *arg2 * 0.2820948f) * arg3[13] + fVar5;
            fVar4 = arg3[13] * arg2[13];
            fVar2 = fVar4 * 0.2820948f + fVar2;
            *arg1 = fVar2;
            arg1[8] = fVar4 * 0.14567313f + fVar13;
            fVar17 = fVar4 * 0.12615663f + fVar17;
            arg1[6] = fVar17;
            arg1[14] = (arg2[14] * *arg3 + arg3[14] * *arg2) * 0.2820948f + fVar20;
            fVar2 = arg2[14] * 0.2820948f * arg3[14] + fVar2;
            *arg1 = fVar2;
            arg1[15] = (*arg3 * 0.2820948f - arg3[6] * 0.21026105f) * arg2[15] +
                       (*arg2 * 0.2820948f - arg2[6] * 0.21026105f) * arg3[15] + fVar9;
            fVar4 = arg3[15];
            fVar14 = arg2[15];
            *arg1 = fVar4 * fVar14 * 0.2820948f + fVar2;
            arg1[6] = fVar17 - fVar4 * fVar14 * 0.21026105f;
            pfVar1 = arg1;
        }
        return pfVar1;
    }

    // 0x1008b67d0
    float* SHMultiply5(float* arg1, const float* arg2, const float* arg3) {
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;

        float* pfVar1 = nullptr;
        if (((arg1 != nullptr) && (arg2 != nullptr)) && (arg3 != nullptr)) {
            fVar2 = *arg2 * 0.2820948f * *arg3;
            *arg1 = fVar2;
            fVar6 = (arg3[8] * -0.21850969 + arg3[6] * -0.12615663 + *arg3 * 0.2820948f) * arg2[1] +
                    (arg2[8] * -0.21850969 + arg2[6] * -0.12615663 + *arg2 * 0.2820948f) * arg3[1];
            arg1[1] = fVar6;
            fVar4 = arg3[1] * arg2[1];
            fVar2 = fVar4 * 0.2820948f + fVar2;
            *arg1 = fVar2;
            arg1[6] = fVar4 * -0.12615663;
            arg1[8] = fVar4 * -0.21850969;
            fVar13 = arg2[15] * -0.22617902 + arg2[13] * -0.05839917 + arg2[3] * 0.21850969f;
            fVar8 = arg3[15] * -0.22617902 + arg3[13] * -0.05839917 + arg3[3] * 0.21850969f;
            fVar6 = arg2[4] * fVar8 + arg3[4] * fVar13 + fVar6;
            arg1[1] = fVar6;
            fVar9 = fVar8 * arg2[1] + fVar13 * arg3[1];
            arg1[4] = fVar9;
            fVar24 = arg3[1] * arg2[4] + arg3[4] * arg2[1];
            arg1[3] = fVar24 * 0.21850969f;
            arg1[13] = fVar24 * -0.05839917;
            arg1[15] = fVar24 * -0.22617902;
            fVar8 = arg2[14] * -0.1846744 + arg2[12] * -0.14304817 + arg2[2] * 0.21850969f;
            fVar13 = arg3[14] * -0.1846744 + arg3[12] * -0.14304817 + arg3[2] * 0.21850969f;
            fVar6 = arg2[5] * fVar13 + arg3[5] * fVar8 + fVar6;
            arg1[1] = fVar6;
            fVar14 = fVar13 * arg2[1] + fVar8 * arg3[1];
            arg1[5] = fVar14;
            fVar20 = arg3[1] * arg2[5] + arg3[5] * arg2[1];
            arg1[2] = fVar20 * 0.21850969f;
            arg1[12] = fVar20 * -0.14304817;
            arg1[14] = fVar20 * -0.1846744;
            fVar13 = arg2[24] * -0.23032944 + arg2[22] * -0.043528173 + arg2[8] * 0.22617902f;
            fVar8 = arg3[24] * -0.23032944 + arg3[22] * -0.043528173 + arg3[8] * 0.22617902f;
            fVar6 = arg2[9] * fVar8 + arg3[9] * fVar13 + fVar6;
            arg1[1] = fVar6;
            fVar13 = fVar8 * arg2[1] + fVar13 * arg3[1];
            arg1[9] = fVar13;
            fVar12 = arg3[1] * arg2[9] + arg3[9] * arg2[1];
            fVar10 = fVar12 * 0.22617902f + fVar4 * -0.21850969;
            arg1[8] = fVar10;
            arg1[22] = fVar12 * -0.043528173;
            arg1[24] = fVar12 * -0.23032944;
            fVar8 = arg2[23] * -0.19947115 + arg2[21] * -0.075393006 + arg2[7] * 0.1846744f;
            fVar21 = arg3[23] * -0.19947115 + arg3[21] * -0.075393006 + arg3[7] * 0.1846744f;
            fVar6 = arg2[10] * fVar21 + arg3[10] * fVar8 + fVar6;
            arg1[1] = fVar6;
            fVar22 = fVar21 * arg2[1] + fVar8 * arg3[1];
            arg1[10] = fVar22;
            fVar21 = arg3[1] * arg2[10] + arg3[10] * arg2[1];
            arg1[7] = fVar21 * 0.1846744f;
            arg1[21] = fVar21 * -0.075393006;
            arg1[23] = fVar21 * -0.19947115;
            fVar8 = arg2[22] * -0.16858388 + arg2[20] * -0.15078601 + arg2[8] * 0.05839917f + arg2[6] * 0.20230065f;
            fVar17 = arg3[22] * -0.16858388 + arg3[20] * -0.15078601 + arg3[8] * 0.05839917f + arg3[6] * 0.20230065f;
            fVar6 = arg2[11] * fVar17 + arg3[11] * fVar8 + fVar6;
            arg1[1] = fVar6;
            fVar18 = fVar17 * arg2[1] + fVar8 * arg3[1];
            arg1[11] = fVar18;
            fVar26 = arg3[1] * arg2[11] + arg3[11] * arg2[1];
            fVar23 = fVar26 * 0.20230065f + fVar4 * -0.12615663;
            fVar10 = fVar26 * 0.05839917f + fVar10;
            fVar27 = fVar26 * -0.16858388 + fVar12 * -0.043528173;
            arg1[6] = fVar23;
            arg1[8] = fVar10;
            arg1[20] = fVar26 * -0.15078601;
            arg1[22] = fVar27;
            fVar8 = arg2[19];
            fVar4 = arg3[19];
            fVar6 = arg2[12] * fVar4 * 0.1946639f + arg3[12] * fVar8 * 0.1946639f + fVar6;
            arg1[1] = fVar6;
            fVar25 = fVar4 * 0.1946639f * arg2[1] + fVar8 * 0.1946639f * arg3[1] + fVar20 * -0.14304817;
            arg1[12] = fVar25;
            fVar7 = (arg3[1] * arg2[12] + arg3[12] * arg2[1]) * 0.1946639f;
            arg1[19] = fVar7;
            fVar8 = arg2[18];
            fVar4 = arg3[18];
            fVar6 = arg2[13] * fVar4 * 0.16858388f + arg3[13] * fVar8 * 0.16858388f + fVar6;
            arg1[1] = fVar6;
            fVar15 = fVar4 * 0.16858388f * arg2[1] + fVar8 * 0.16858388f * arg3[1] + fVar24 * -0.05839917;
            arg1[13] = fVar15;
            fVar16 = (arg3[1] * arg2[13] + arg3[13] * arg2[1]) * 0.16858388f;
            arg1[18] = fVar16;
            fVar4 = arg2[19] * 0.075393006f + arg2[17] * 0.19947115f;
            fVar8 = arg3[19] * 0.075393006f + arg3[17] * 0.19947115f;
            fVar6 = arg2[14] * fVar8 + arg3[14] * fVar4 + fVar6;
            arg1[1] = fVar6;
            fVar19 = fVar4 * arg3[1] + fVar20 * -0.1846744 + fVar8 * arg2[1];
            arg1[14] = fVar19;
            fVar17 = arg3[1] * arg2[14] + arg3[14] * arg2[1];
            fVar7 = fVar17 * 0.075393006f + fVar7;
            fVar17 = fVar17 * 0.19947115f;
            arg1[17] = fVar17;
            arg1[19] = fVar7;
            fVar4 = arg2[18] * 0.043528173f + arg2[16] * 0.23032944f;
            fVar8 = arg3[18] * 0.043528173f + arg3[16] * 0.23032944f;
            arg1[1] = arg2[15] * fVar8 + arg3[15] * fVar4 + fVar6;
            fVar11 = fVar4 * arg3[1] + fVar24 * -0.22617902 + fVar8 * arg2[1];
            arg1[15] = fVar11;
            fVar6 = arg3[1] * arg2[15] + arg3[15] * arg2[1];
            fVar16 = fVar6 * 0.043528173f + fVar16;
            fVar6 = fVar6 * 0.23032944f;
            arg1[16] = fVar6;
            arg1[18] = fVar16;
            fVar3 = (arg2[6] * 0.25231326f + *arg2 * 0.2820948f) * arg3[2] + fVar20 * 0.21850969f +
                    (arg3[6] * 0.25231326f + *arg3 * 0.2820948f) * arg2[2];
            arg1[2] = fVar3;
            fVar2 = arg3[2] * arg2[2] * 0.2820948f + fVar2;
            fVar23 = arg3[2] * arg2[2] * 0.25231326f + fVar23;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            fVar8 = arg2[18] * 0.21324362f + arg2[4] * 0.1846744f;
            fVar4 = arg3[18] * 0.21324362f + arg3[4] * 0.1846744f;
            fVar3 = arg2[10] * fVar4 + arg3[10] * fVar8 + fVar3;
            arg1[2] = fVar3;
            fVar22 = fVar4 * arg2[2] + fVar8 * arg3[2] + fVar22;
            arg1[10] = fVar22;
            fVar8 = arg3[2] * arg2[10] + arg3[10] * arg2[2];
            fVar9 = fVar8 * 0.1846744f + fVar9;
            fVar16 = fVar8 * 0.21324362f + fVar16;
            arg1[4] = fVar9;
            arg1[18] = fVar16;
            fVar8 = arg2[20] * 0.24623254f + arg2[6] * 0.2477667f;
            fVar4 = arg3[20] * 0.24623254f + arg3[6] * 0.2477667f;
            fVar3 = arg2[12] * fVar4 + arg3[12] * fVar8 + fVar3;
            arg1[2] = fVar3;
            fVar25 = fVar4 * arg2[2] + fVar8 * arg3[2] + fVar25;
            arg1[12] = fVar25;
            fVar8 = arg3[2] * arg2[12] + arg3[12] * arg2[2];
            fVar23 = fVar8 * 0.2477667f + fVar23;
            fVar26 = fVar8 * 0.24623254f + fVar26 * -0.15078601;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            fVar4 = arg2[22] * 0.21324362f + arg2[8] * 0.1846744f;
            fVar8 = arg3[22] * 0.21324362f + arg3[8] * 0.1846744f;
            fVar3 = arg2[14] * fVar8 + arg3[14] * fVar4 + fVar3;
            arg1[2] = fVar3;
            fVar19 = fVar8 * arg2[2] + fVar4 * arg3[2] + fVar19;
            arg1[14] = fVar19;
            fVar8 = arg3[2] * arg2[14] + arg3[14] * arg2[2];
            fVar10 = fVar8 * 0.1846744f + fVar10;
            fVar27 = fVar8 * 0.21324362f + fVar27;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            fVar20 = (arg2[8] * 0.21850969f + arg2[6] * -0.12615663 + *arg2 * 0.2820948f) * arg3[3] +
                     fVar24 * 0.21850969f +
                     (arg3[8] * 0.21850969f + arg3[6] * -0.12615663 + *arg3 * 0.2820948f) * arg2[3];
            arg1[3] = fVar20;
            fVar8 = arg3[3] * arg2[3];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * -0.12615663 + fVar23;
            fVar10 = fVar8 * 0.21850969f + fVar10;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[8] = fVar10;
            fVar4 = arg2[14] * 0.1846744f + arg2[12] * -0.14304817 + arg2[2] * 0.21850969f;
            fVar8 = arg3[14] * 0.1846744f + arg3[12] * -0.14304817 + arg3[2] * 0.21850969f;
            fVar20 = arg2[7] * fVar8 + arg3[7] * fVar4 + fVar20;
            arg1[3] = fVar20;
            fVar24 = fVar4 * arg3[3] + fVar21 * 0.1846744f + fVar8 * arg2[3];
            arg1[7] = fVar24;
            fVar8 = arg3[3] * arg2[7] + arg3[7] * arg2[3];
            fVar3 = fVar8 * 0.21850969f + fVar3;
            fVar25 = fVar8 * -0.14304817 + fVar25;
            fVar19 = fVar8 * 0.1846744f + fVar19;
            arg1[2] = fVar3;
            arg1[12] = fVar25;
            arg1[14] = fVar19;
            fVar8 = arg2[18] * -0.043528173 + arg2[16] * 0.23032944f + arg2[4] * 0.22617902f;
            fVar4 = arg3[18] * -0.043528173 + arg3[16] * 0.23032944f + arg3[4] * 0.22617902f;
            fVar20 = arg2[9] * fVar4 + arg3[9] * fVar8 + fVar20;
            arg1[3] = fVar20;
            arg1[9] = fVar4 * arg2[3] + fVar8 * arg3[3] + fVar13;
            fVar8 = arg3[3] * arg2[9] + arg3[9] * arg2[3];
            fVar9 = fVar8 * 0.22617902f + fVar9;
            fVar6 = fVar8 * 0.23032944f + fVar6;
            fVar16 = fVar8 * -0.043528173 + fVar16;
            arg1[4] = fVar9;
            arg1[16] = fVar6;
            arg1[18] = fVar16;
            fVar8 = arg2[19] * -0.075393006 + arg2[17] * 0.19947115f + arg2[5] * 0.1846744f;
            fVar4 = arg3[19] * -0.075393006 + arg3[17] * 0.19947115f + arg3[5] * 0.1846744f;
            fVar20 = arg2[10] * fVar4 + arg3[10] * fVar8 + fVar20;
            arg1[3] = fVar20;
            arg1[10] = fVar4 * arg2[3] + fVar8 * arg3[3] + fVar22;
            fVar8 = arg3[3] * arg2[10] + arg3[10] * arg2[3];
            fVar14 = fVar8 * 0.1846744f + fVar14;
            fVar17 = fVar8 * 0.19947115f + fVar17;
            fVar7 = fVar8 * -0.075393006 + fVar7;
            arg1[5] = fVar14;
            arg1[17] = fVar17;
            arg1[19] = fVar7;
            fVar8 = arg2[21];
            fVar4 = arg3[21];
            fVar20 = arg2[12] * fVar4 * 0.1946639f + arg3[12] * fVar8 * 0.1946639f + fVar20;
            arg1[3] = fVar20;
            fVar25 = fVar4 * 0.1946639f * arg2[3] + fVar8 * 0.1946639f * arg3[3] + fVar25;
            arg1[12] = fVar25;
            fVar5 = (arg3[3] * arg2[12] + arg3[12] * arg2[3]) * 0.1946639f + fVar21 * -0.075393006;
            arg1[21] = fVar5;
            fVar4 = arg2[22] * 0.16858388f + arg2[20] * -0.15078601 + arg2[6] * 0.20230065f + arg2[8] * -0.05839917;
            fVar8 = arg3[22] * 0.16858388f + arg3[20] * -0.15078601 + arg3[6] * 0.20230065f + arg3[8] * -0.05839917;
            fVar20 = arg2[13] * fVar8 + arg3[13] * fVar4 + fVar20;
            arg1[3] = fVar20;
            fVar22 = fVar4 * arg3[3] + fVar15 + fVar8 * arg2[3];
            arg1[13] = fVar22;
            fVar8 = arg3[3] * arg2[13] + arg3[13] * arg2[3];
            fVar10 = fVar8 * -0.05839917 + fVar10;
            fVar23 = fVar8 * 0.20230065f + fVar23;
            fVar26 = fVar8 * -0.15078601 + fVar26;
            fVar27 = fVar8 * 0.16858388f + fVar27;
            arg1[8] = fVar10;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            arg1[22] = fVar27;
            fVar4 = arg2[23] * 0.19947115f + arg2[21] * -0.075393006;
            fVar8 = arg3[23] * 0.19947115f + arg3[21] * -0.075393006;
            fVar20 = arg2[14] * fVar8 + arg3[14] * fVar4 + fVar20;
            arg1[3] = fVar20;
            fVar19 = fVar8 * arg2[3] + fVar4 * arg3[3] + fVar19;
            arg1[14] = fVar19;
            fVar8 = arg3[3] * arg2[14] + arg3[14] * arg2[3];
            fVar5 = fVar8 * -0.075393006 + fVar5;
            fVar15 = fVar8 * 0.19947115f + fVar21 * -0.19947115;
            arg1[21] = fVar5;
            arg1[23] = fVar15;
            fVar8 = arg2[24] * 0.23032944f + arg2[22] * -0.043528173 + arg2[8] * 0.22617902f;
            fVar4 = arg3[24] * 0.23032944f + arg3[22] * -0.043528173 + arg3[8] * 0.22617902f;
            fVar20 = arg2[15] * fVar4 + arg3[15] * fVar8 + fVar20;
            arg1[3] = fVar20;
            fVar11 = fVar4 * arg2[3] + fVar8 * arg3[3] + fVar11;
            arg1[15] = fVar11;
            fVar8 = arg3[3] * arg2[15] + arg3[15] * arg2[3];
            fVar10 = fVar8 * 0.22617902f + fVar10;
            fVar27 = fVar8 * -0.043528173 + fVar27;
            fVar12 = fVar8 * 0.23032944f + fVar12 * -0.23032944;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            arg1[24] = fVar12;
            fVar9 = (arg3[24] * -0.23841362 + arg3[20] * 0.040299255f + arg3[6] * -0.18022375 + *arg3 * 0.2820948f) *
                        arg2[4] +
                    (arg2[24] * -0.23841362 + arg2[20] * 0.040299255f + arg2[6] * -0.18022375 + *arg2 * 0.2820948f) *
                        arg3[4] +
                    fVar9;
            arg1[4] = fVar9;
            fVar8 = arg3[4] * arg2[4];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * -0.18022375 + fVar23;
            fVar26 = fVar8 * 0.040299255f + fVar26;
            fVar12 = fVar8 * -0.23841362 + fVar12;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            arg1[24] = fVar12;
            fVar8 = arg2[23] * -0.16858388 + arg2[21] * -0.06371872 + arg2[7] * 0.15607835f;
            fVar4 = arg3[23] * -0.16858388 + arg3[21] * -0.06371872 + arg3[7] * 0.15607835f;
            fVar9 = arg2[5] * fVar4 + arg3[5] * fVar8 + fVar9;
            arg1[4] = fVar9;
            fVar14 = fVar4 * arg2[4] + fVar8 * arg3[4] + fVar14;
            arg1[5] = fVar14;
            fVar8 = arg3[4] * arg2[5] + arg3[5] * arg2[4];
            fVar24 = fVar8 * 0.15607835f + fVar24;
            fVar5 = fVar8 * -0.06371872 + fVar5;
            fVar15 = fVar8 * -0.16858388 + fVar15;
            arg1[7] = fVar24;
            arg1[21] = fVar5;
            arg1[23] = fVar15;
            fVar8 = arg2[15] * 0.094031595f + arg2[13] * 0.14567313f + arg2[3] * -0.05839917;
            fVar4 = arg3[15] * 0.094031595f + arg3[13] * 0.14567313f + arg3[3] * -0.05839917;
            fVar9 = arg2[11] * fVar4 + arg3[11] * fVar8 + fVar9;
            arg1[4] = fVar9;
            fVar18 = fVar4 * arg2[4] + fVar8 * arg3[4] + fVar18;
            arg1[11] = fVar18;
            fVar8 = arg3[4] * arg2[11] + arg3[11] * arg2[4];
            arg1[3] = fVar8 * -0.05839917 + fVar20;
            fVar22 = fVar8 * 0.14567313f + fVar22;
            arg1[13] = fVar22;
            arg1[15] = fVar8 * 0.094031595f + fVar11;
            fVar4 = arg2[22] * -0.07508082 + arg2[8] * 0.23841362f;
            fVar8 = arg3[22] * -0.07508082 + arg3[8] * 0.23841362f;
            fVar9 = arg2[16] * fVar8 + arg3[16] * fVar4 + fVar9;
            arg1[4] = fVar9;
            fVar6 = fVar4 * arg3[4] + fVar6 + fVar8 * arg2[4];
            arg1[16] = fVar6;
            fVar8 = arg3[4] * arg2[16] + arg3[16] * arg2[4];
            fVar10 = fVar8 * 0.23841362f + fVar10;
            fVar27 = fVar8 * -0.07508082 + fVar27;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            fVar8 = arg2[24] * 0.07508082f + (arg2[6] * 0.15607835f - arg2[20] * 0.19036461f);
            fVar4 = arg3[24] * 0.07508082f + (arg3[6] * 0.15607835f - arg3[20] * 0.19036461f);
            fVar9 = arg2[18] * fVar4 + arg3[18] * fVar8 + fVar9;
            arg1[4] = fVar9;
            fVar16 = fVar4 * arg2[4] + fVar8 * arg3[4] + fVar16;
            arg1[18] = fVar16;
            fVar8 = arg3[4] * arg2[18] + arg3[18] * arg2[4];
            fVar23 = fVar8 * 0.15607835f + fVar23;
            fVar26 = fVar26 - fVar8 * 0.19036461f;
            fVar12 = fVar8 * 0.07508082f + fVar12;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            arg1[24] = fVar12;
            fVar4 = arg2[23] * 0.112621225f + arg2[21] * 0.14188941f + arg2[7] * -0.06371872;
            fVar8 = arg3[23] * 0.112621225f + arg3[21] * 0.14188941f + arg3[7] * -0.06371872;
            fVar9 = arg2[19] * fVar8 + arg3[19] * fVar4 + fVar9;
            arg1[4] = fVar9;
            fVar21 = fVar4 * arg3[4] + fVar7 + fVar8 * arg2[4];
            arg1[19] = fVar21;
            fVar8 = arg3[4] * arg2[19] + arg3[19] * arg2[4];
            fVar24 = fVar8 * -0.06371872 + fVar24;
            fVar5 = fVar8 * 0.14188941f + fVar5;
            fVar15 = fVar8 * 0.112621225f + fVar15;
            arg1[7] = fVar24;
            arg1[21] = fVar5;
            arg1[23] = fVar15;
            fVar14 = (arg3[22] * -0.18022375 + arg3[20] * -0.16119702 + arg3[8] * -0.15607835 + arg3[6] * 0.090111874f +
                      *arg3 * 0.2820948f) *
                         arg2[5] +
                     (arg2[22] * -0.18022375 + arg2[20] * -0.16119702 + arg2[8] * -0.15607835 + arg2[6] * 0.090111874f +
                      *arg2 * 0.2820948f) *
                         arg3[5] +
                     fVar14;
            arg1[5] = fVar14;
            fVar8 = arg3[5] * arg2[5];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * 0.090111874f + fVar23;
            fVar10 = fVar8 * -0.15607835 + fVar10;
            fVar26 = fVar8 * -0.16119702 + fVar26;
            fVar27 = fVar8 * -0.18022375 + fVar27;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[8] = fVar10;
            arg1[20] = fVar26;
            arg1[22] = fVar27;
            fVar4 = arg2[14] * -0.11516472 + arg2[12] * 0.059470803f + arg2[2] * 0.23359668f;
            fVar8 = arg3[14] * -0.11516472 + arg3[12] * 0.059470803f + arg3[2] * 0.23359668f;
            fVar14 = arg2[11] * fVar8 + arg3[11] * fVar4 + fVar14;
            arg1[5] = fVar14;
            arg1[11] = fVar8 * arg2[5] + fVar4 * arg3[5] + fVar18;
            fVar8 = arg3[5] * arg2[11] + arg3[11] * arg2[5];
            fVar3 = fVar8 * 0.23359668f + fVar3;
            fVar25 = fVar8 * 0.059470803f + fVar25;
            fVar19 = fVar8 * -0.11516472 + fVar19;
            arg1[2] = fVar3;
            arg1[12] = fVar25;
            arg1[14] = fVar19;
            fVar8 = arg2[24] * -0.14046335 + arg2[22] * 0.13272539f + arg2[8] * 0.16858388f;
            fVar4 = arg3[24] * -0.14046335 + arg3[22] * 0.13272539f + arg3[8] * 0.16858388f;
            fVar14 = arg2[17] * fVar4 + arg3[17] * fVar8 + fVar14;
            arg1[5] = fVar14;
            fVar17 = fVar8 * arg3[5] + fVar17 + fVar4 * arg2[5];
            arg1[17] = fVar17;
            fVar8 = arg3[5] * arg2[17] + arg3[17] * arg2[5];
            fVar10 = fVar8 * 0.16858388f + fVar10;
            fVar27 = fVar8 * 0.13272539f + fVar27;
            fVar12 = fVar8 * -0.14046335 + fVar12;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            arg1[24] = fVar12;
            fVar8 = arg2[23] * -0.13272539 + arg2[21] * 0.09029786f + arg2[7] * 0.18022375f;
            fVar4 = arg3[23] * -0.13272539 + arg3[21] * 0.09029786f + arg3[7] * 0.18022375f;
            fVar14 = arg2[18] * fVar4 + arg3[18] * fVar8 + fVar14;
            arg1[5] = fVar14;
            fVar16 = fVar4 * arg2[5] + fVar8 * arg3[5] + fVar16;
            arg1[18] = fVar16;
            fVar8 = arg3[5] * arg2[18] + arg3[18] * arg2[5];
            fVar24 = fVar8 * 0.18022375f + fVar24;
            fVar5 = fVar8 * 0.09029786f + fVar5;
            fVar15 = fVar8 * -0.13272539 + fVar15;
            arg1[7] = fVar24;
            arg1[21] = fVar5;
            arg1[23] = fVar15;
            fVar4 = arg2[22] * -0.09029786 + arg2[20] * 0.04486937f + arg2[8] * 0.06371872f + arg2[6] * 0.22072811f;
            fVar8 = arg3[22] * -0.09029786 + arg3[20] * 0.04486937f + arg3[8] * 0.06371872f + arg3[6] * 0.22072811f;
            fVar14 = arg2[19] * fVar8 + arg3[19] * fVar4 + fVar14;
            arg1[5] = fVar14;
            fVar21 = fVar8 * arg2[5] + fVar4 * arg3[5] + fVar21;
            arg1[19] = fVar21;
            fVar8 = arg3[5] * arg2[19] + arg3[19] * arg2[5];
            fVar23 = fVar8 * 0.22072811f + fVar23;
            fVar10 = fVar8 * 0.06371872f + fVar10;
            fVar26 = fVar8 * 0.04486937f + fVar26;
            fVar27 = fVar8 * -0.09029786 + fVar27;
            arg1[6] = fVar23;
            arg1[8] = fVar10;
            arg1[20] = fVar26;
            arg1[22] = fVar27;
            fVar23 = (arg3[20] * 0.24179555f + *arg3 * 0.2820948f) * arg2[6] +
                     (arg2[20] * 0.24179555f + *arg2 * 0.2820948f) * arg3[6] + fVar23;
            arg1[6] = fVar23;
            fVar8 = arg3[6] * arg2[6];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * 0.18022376f + fVar23;
            fVar26 = fVar8 * 0.24179555f + fVar26;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            fVar24 = (arg3[22] * 0.18022375f + arg3[20] * -0.16119702 + arg3[8] * 0.15607835f + *arg3 * 0.2820948f +
                      arg3[6] * 0.090111874f) *
                         arg2[7] +
                     (arg2[22] * 0.18022375f + arg2[20] * -0.16119702 + arg2[8] * 0.15607835f + *arg2 * 0.2820948f +
                      arg2[6] * 0.090111874f) *
                         arg3[7] +
                     fVar24;
            arg1[7] = fVar24;
            fVar8 = arg3[7] * arg2[7];
            fVar23 = fVar8 * 0.090111874f + fVar23;
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar10 = fVar8 * 0.15607835f + fVar10;
            fVar26 = fVar8 * -0.16119702 + fVar26;
            fVar27 = fVar8 * 0.18022375f + fVar27;
            arg1[6] = fVar23;
            *arg1 = fVar2;
            arg1[8] = fVar10;
            arg1[20] = fVar26;
            arg1[22] = fVar27;
            fVar8 = arg2[14] * 0.11516472f + arg2[2] * 0.23359668f + arg2[12] * 0.059470803f;
            fVar4 = arg3[14] * 0.11516472f + arg3[2] * 0.23359668f + arg3[12] * 0.059470803f;
            fVar24 = arg2[13] * fVar4 + arg3[13] * fVar8 + fVar24;
            arg1[7] = fVar24;
            fVar22 = fVar4 * arg2[7] + fVar8 * arg3[7] + fVar22;
            arg1[13] = fVar22;
            fVar8 = arg3[7] * arg2[13] + arg3[13] * arg2[7];
            fVar25 = fVar8 * 0.059470803f + fVar25;
            fVar3 = fVar8 * 0.23359668f + fVar3;
            fVar19 = fVar8 * 0.11516472f + fVar19;
            arg1[12] = fVar25;
            arg1[2] = fVar3;
            arg1[14] = fVar19;
            fVar4 = arg2[18] * 0.13272539f + arg2[4] * 0.16858388f + arg2[16] * 0.14046335f;
            fVar8 = arg3[18] * 0.13272539f + arg3[4] * 0.16858388f + arg3[16] * 0.14046335f;
            fVar24 = arg2[17] * fVar8 + arg3[17] * fVar4 + fVar24;
            arg1[7] = fVar24;
            fVar17 = fVar8 * arg2[7] + fVar4 * arg3[7] + fVar17;
            arg1[17] = fVar17;
            fVar8 = arg3[7] * arg2[17] + arg3[17] * arg2[7];
            fVar6 = fVar8 * 0.14046335f + fVar6;
            fVar9 = fVar8 * 0.16858388f + fVar9;
            fVar16 = fVar8 * 0.13272539f + fVar16;
            arg1[16] = fVar6;
            arg1[4] = fVar9;
            arg1[18] = fVar16;
            fVar8 = arg2[22] * 0.09029786f + arg2[6] * 0.22072811f + arg2[20] * 0.04486937f + arg2[8] * -0.06371872;
            fVar4 = arg3[22] * 0.09029786f + arg3[6] * 0.22072811f + arg3[20] * 0.04486937f + arg3[8] * -0.06371872;
            fVar24 = arg2[21] * fVar4 + arg3[21] * fVar8 + fVar24;
            arg1[7] = fVar24;
            fVar5 = fVar4 * arg2[7] + fVar8 * arg3[7] + fVar5;
            arg1[21] = fVar5;
            fVar8 = arg3[7] * arg2[21] + arg3[21] * arg2[7];
            fVar10 = fVar8 * -0.06371872 + fVar10;
            fVar26 = fVar8 * 0.04486937f + fVar26;
            fVar23 = fVar8 * 0.22072811f + fVar23;
            fVar27 = fVar8 * 0.09029786f + fVar27;
            arg1[8] = fVar10;
            arg1[20] = fVar26;
            arg1[6] = fVar23;
            arg1[22] = fVar27;
            fVar4 = arg2[24] * 0.14046335f + arg2[22] * 0.13272539f + arg2[8] * 0.16858388f;
            fVar8 = arg3[24] * 0.14046335f + arg3[22] * 0.13272539f + arg3[8] * 0.16858388f;
            fVar24 = arg2[23] * fVar8 + arg3[23] * fVar4 + fVar24;
            arg1[7] = fVar24;
            fVar15 = fVar8 * arg2[7] + fVar4 * arg3[7] + fVar15;
            arg1[23] = fVar15;
            fVar8 = arg3[7] * arg2[23] + arg3[23] * arg2[7];
            fVar10 = fVar8 * 0.16858388f + fVar10;
            fVar27 = fVar8 * 0.13272539f + fVar27;
            fVar12 = fVar8 * 0.14046335f + fVar12;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            arg1[24] = fVar12;
            fVar10 = (arg3[24] * 0.23841362f + arg3[20] * 0.040299255f + arg3[6] * -0.18022375 + *arg3 * 0.2820948f) *
                         arg2[8] +
                     (arg2[24] * 0.23841362f + arg2[20] * 0.040299255f + arg2[6] * -0.18022375 + *arg2 * 0.2820948f) *
                         arg3[8] +
                     fVar10;
            arg1[8] = fVar10;
            fVar8 = arg3[8] * arg2[8];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * -0.18022375 + fVar23;
            fVar26 = fVar8 * 0.040299255f + fVar26;
            fVar12 = fVar8 * 0.23841362f + fVar12;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            arg1[24] = fVar12;
            fVar4 = arg2[24] * -0.07508082 + (arg2[6] * 0.15607835f - arg2[20] * 0.19036461f);
            fVar8 = arg3[24] * -0.07508082 + (arg3[6] * 0.15607835f - arg3[20] * 0.19036461f);
            fVar10 = arg2[22] * fVar8 + arg3[22] * fVar4 + fVar10;
            arg1[8] = fVar10;
            fVar27 = fVar8 * arg2[8] + fVar4 * arg3[8] + fVar27;
            arg1[22] = fVar27;
            fVar8 = arg3[8] * arg2[22] + arg3[22] * arg2[8];
            fVar23 = fVar8 * 0.15607835f + fVar23;
            fVar26 = fVar26 - fVar8 * 0.19036461f;
            fVar12 = fVar8 * -0.07508082 + fVar12;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            arg1[24] = fVar12;
            fVar13 = (arg3[20] * 0.07693494f + *arg3 * 0.2820948f + arg3[6] * -0.21026105) * arg2[9] +
                     (arg2[20] * 0.07693494f + *arg2 * 0.2820948f + arg2[6] * -0.21026105) * arg3[9] + arg1[9];
            arg1[9] = fVar13;
            fVar8 = arg3[9] * arg2[9];
            fVar23 = fVar8 * -0.21026105 + fVar23;
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar26 = fVar8 * 0.07693494f + fVar26;
            arg1[6] = fVar23;
            *arg1 = fVar2;
            arg1[20] = fVar26;
            fVar4 = arg2[7] * 0.148677 - arg2[21] * 0.09932259f;
            fVar8 = arg3[7] * 0.148677 - arg3[21] * 0.09932259f;
            fVar13 = arg2[10] * fVar8 + arg3[10] * fVar4 + fVar13;
            arg1[9] = fVar13;
            arg1[10] = fVar8 * arg2[9] + fVar4 * arg3[9] + arg1[10];
            fVar8 = arg3[9] * arg2[10] + arg3[10] * arg2[9];
            fVar24 = fVar8 * 0.148677 + fVar24;
            fVar5 = fVar5 - fVar8 * 0.09932259f;
            arg1[7] = fVar24;
            arg1[21] = fVar5;
            fVar8 = arg2[24] * 0.117520064f + arg2[22] * 0.13325523f + arg2[8] * -0.094031595;
            fVar4 = arg3[24] * 0.117520064f + arg3[22] * 0.13325523f + arg3[8] * -0.094031595;
            fVar13 = arg2[11] * fVar4 + arg3[11] * fVar8 + fVar13;
            arg1[9] = fVar13;
            arg1[11] = fVar4 * arg2[9] + fVar8 * arg3[9] + arg1[11];
            fVar8 = arg3[9] * arg2[11] + arg3[11] * arg2[9];
            fVar10 = fVar8 * -0.094031595 + fVar10;
            fVar27 = fVar8 * 0.13325523f + fVar27;
            fVar12 = fVar8 * 0.117520064f + fVar12;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            arg1[24] = fVar12;
            fVar8 = arg2[18] * 0.13325523f + arg2[16] * -0.117520064 + arg2[4] * -0.094031595;
            fVar4 = arg3[18] * 0.13325523f + arg3[16] * -0.117520064 + arg3[4] * -0.094031595;
            fVar13 = arg2[13] * fVar4 + arg3[13] * fVar8 + fVar13;
            arg1[9] = fVar13;
            fVar22 = fVar4 * arg2[9] + fVar8 * arg3[9] + fVar22;
            arg1[13] = fVar22;
            fVar8 = arg3[9] * arg2[13] + arg3[13] * arg2[9];
            fVar9 = fVar8 * -0.094031595 + fVar9;
            fVar6 = fVar8 * -0.117520064 + fVar6;
            fVar16 = fVar8 * 0.13325523f + fVar16;
            arg1[4] = fVar9;
            arg1[16] = fVar6;
            arg1[18] = fVar16;
            fVar8 = arg2[5] * 0.148677 - arg2[19] * 0.09932259f;
            fVar4 = arg3[5] * 0.148677 - arg3[19] * 0.09932259f;
            fVar13 = arg2[14] * fVar4 + arg3[14] * fVar8 + fVar13;
            arg1[9] = fVar13;
            fVar19 = fVar4 * arg2[9] + fVar8 * arg3[9] + fVar19;
            arg1[14] = fVar19;
            fVar8 = arg3[9] * arg2[14] + arg3[14] * arg2[9];
            fVar14 = fVar8 * 0.148677 + fVar14;
            fVar21 = fVar21 - fVar8 * 0.09932259f;
            arg1[5] = fVar14;
            arg1[19] = fVar21;
            fVar8 = arg2[2] * 0.1628675f - arg2[12] * 0.20355073f;
            fVar4 = arg3[2] * 0.1628675f - arg3[12] * 0.20355073f;
            arg1[9] = arg2[17] * fVar4 + arg3[17] * fVar8 + fVar13;
            fVar17 = fVar4 * arg2[9] + fVar8 * arg3[9] + fVar17;
            arg1[17] = fVar17;
            fVar8 = arg3[9] * arg2[17] + arg3[17] * arg2[9];
            fVar3 = fVar8 * 0.1628675f + fVar3;
            fVar25 = fVar25 - fVar8 * 0.20355073f;
            arg1[2] = fVar3;
            arg1[12] = fVar25;
            fVar13 = (arg3[24] * -0.15171775 + arg3[20] * -0.17951487 + *arg3 * 0.2820948f) * arg2[10] +
                     (arg2[24] * -0.15171775 + arg2[20] * -0.17951487 + *arg2 * 0.2820948f) * arg3[10] + arg1[10];
            arg1[10] = fVar13;
            fVar8 = arg3[10] * arg2[10];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar26 = fVar8 * -0.17951487 + fVar26;
            fVar12 = fVar8 * -0.15171775 + fVar12;
            *arg1 = fVar2;
            arg1[20] = fVar26;
            arg1[24] = fVar12;
            fVar8 = arg2[23] * -0.06785024 + arg2[21] * 0.10257992f + arg2[7] * 0.11516472f;
            fVar4 = arg3[23] * -0.06785024 + arg3[21] * 0.10257992f + arg3[7] * 0.11516472f;
            fVar13 = arg2[11] * fVar4 + arg3[11] * fVar8 + fVar13;
            arg1[10] = fVar13;
            arg1[11] = fVar4 * arg2[10] + fVar8 * arg3[10] + arg1[11];
            fVar8 = arg3[10] * arg2[11] + arg3[11] * arg2[10];
            fVar24 = fVar8 * 0.11516472f + fVar24;
            fVar5 = fVar8 * 0.10257992f + fVar5;
            fVar15 = fVar8 * -0.06785024 + fVar15;
            arg1[7] = fVar24;
            arg1[21] = fVar5;
            arg1[23] = fVar15;
            fVar8 = arg2[4] * -0.18806319 - arg2[18] * 0.04441841f;
            fVar4 = arg3[4] * -0.18806319 - arg3[18] * 0.04441841f;
            fVar13 = arg2[12] * fVar4 + arg3[12] * fVar8 + fVar13;
            arg1[10] = fVar13;
            fVar25 = fVar4 * arg2[10] + fVar8 * arg3[10] + fVar25;
            arg1[12] = fVar25;
            fVar8 = arg3[10] * arg2[12] + arg3[12] * arg2[10];
            arg1[4] = fVar8 * -0.18806319 + fVar9;
            fVar16 = fVar16 - fVar8 * 0.04441841f;
            arg1[18] = fVar16;
            fVar8 = arg2[19] * 0.10257992f + arg2[17] * 0.06785024f + arg2[5] * 0.11516472f;
            fVar4 = arg3[19] * 0.10257992f + arg3[17] * 0.06785024f + arg3[5] * 0.11516472f;
            fVar13 = arg2[13] * fVar4 + arg3[13] * fVar8 + fVar13;
            arg1[10] = fVar13;
            fVar22 = fVar4 * arg2[10] + fVar8 * arg3[10] + fVar22;
            arg1[13] = fVar22;
            fVar8 = arg3[10] * arg2[13] + arg3[13] * arg2[10];
            fVar14 = fVar8 * 0.11516472f + fVar14;
            fVar17 = fVar8 * 0.06785024f + fVar17;
            fVar21 = fVar8 * 0.10257992f + fVar21;
            arg1[5] = fVar14;
            arg1[17] = fVar17;
            arg1[19] = fVar21;
            fVar8 = arg2[16];
            fVar4 = arg3[16];
            fVar13 = arg2[14] * fVar4 * 0.15171775f + arg3[14] * fVar8 * 0.15171775f + fVar13;
            arg1[10] = fVar13;
            fVar19 = fVar4 * 0.15171775f * arg2[10] + fVar8 * 0.15171775f * arg3[10] + fVar19;
            arg1[14] = fVar19;
            fVar6 = (arg3[10] * arg2[14] + arg3[14] * arg2[10]) * 0.15171775f + fVar6;
            arg1[16] = fVar6;
            fVar8 = arg2[19] * 0.09932259f - arg2[5] * 0.148677;
            fVar4 = arg3[19] * 0.09932259f - arg3[5] * 0.148677;
            arg1[10] = arg2[15] * fVar4 + arg3[15] * fVar8 + fVar13;
            arg1[15] = fVar4 * arg2[10] + fVar8 * arg3[10] + arg1[15];
            fVar8 = arg3[10] * arg2[15] + arg3[15] * arg2[10];
            fVar14 = fVar14 - fVar8 * 0.148677;
            fVar21 = fVar8 * 0.09932259f + fVar21;
            arg1[5] = fVar14;
            arg1[19] = fVar21;
            fVar13 = (arg3[22] * -0.114687845 + arg3[20] * 0.02564498f + arg3[8] * -0.14567313 + arg3[6] * 0.12615663f +
                      *arg3 * 0.2820948f) *
                         arg2[11] +
                     (arg2[22] * -0.114687845 + arg2[20] * 0.02564498f + arg2[8] * -0.14567313 + arg2[6] * 0.12615663f +
                      *arg2 * 0.2820948f) *
                         arg3[11] +
                     arg1[11];
            arg1[11] = fVar13;
            fVar8 = arg3[11] * arg2[11];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * 0.12615663f + fVar23;
            fVar10 = fVar8 * -0.14567313 + fVar10;
            fVar26 = fVar8 * 0.02564498f + fVar26;
            fVar27 = fVar8 * -0.114687845 + fVar27;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[8] = fVar10;
            arg1[20] = fVar26;
            arg1[22] = fVar27;
            fVar8 = arg2[17];
            fVar4 = arg3[17];
            fVar13 = arg2[14] * fVar4 * 0.06785024f + arg3[14] * fVar8 * 0.06785024f + fVar13;
            arg1[11] = fVar13;
            fVar19 = fVar4 * 0.06785024f * arg2[11] + fVar8 * 0.06785024f * arg3[11] + fVar19;
            arg1[14] = fVar19;
            fVar17 = (arg3[11] * arg2[14] + arg3[14] * arg2[11]) * 0.06785024f + fVar17;
            arg1[17] = fVar17;
            fVar8 = arg2[16];
            fVar4 = arg3[16];
            fVar13 = arg2[15] * fVar4 * -0.117520064 + arg3[15] * fVar8 * -0.117520064 + fVar13;
            arg1[11] = fVar13;
            arg1[15] = fVar4 * -0.117520064 * arg2[11] + fVar8 * -0.117520064 * arg3[11] + arg1[15];
            fVar6 = (arg3[11] * arg2[15] + arg3[15] * arg2[11]) * -0.117520064 + fVar6;
            arg1[16] = fVar6;
            fVar8 = arg2[15] * -0.13325523 + arg2[13] * 0.114687845f + arg2[3] * 0.16858388f;
            fVar4 = arg3[15] * -0.13325523 + arg3[13] * 0.114687845f + arg3[3] * 0.16858388f;
            fVar13 = arg2[18] * fVar4 + arg3[18] * fVar8 + fVar13;
            arg1[11] = fVar13;
            fVar16 = fVar4 * arg2[11] + fVar8 * arg3[11] + fVar16;
            arg1[18] = fVar16;
            fVar8 = arg3[11] * arg2[18] + arg3[18] * arg2[11];
            arg1[3] = fVar8 * 0.16858388f + arg1[3];
            fVar22 = fVar8 * 0.114687845f + fVar22;
            arg1[13] = fVar22;
            arg1[15] = fVar8 * -0.13325523 + arg1[15];
            fVar4 = arg2[12] * 0.09932259f + (arg2[2] * 0.23841362f - arg2[14] * 0.10257992f);
            fVar8 = arg3[12] * 0.09932259f + (arg3[2] * 0.23841362f - arg3[14] * 0.10257992f);
            arg1[11] = arg2[19] * fVar8 + arg3[19] * fVar4 + fVar13;
            fVar21 = fVar8 * arg2[11] + fVar4 * arg3[11] + fVar21;
            arg1[19] = fVar21;
            fVar8 = arg3[11] * arg2[19] + arg3[19] * arg2[11];
            fVar3 = fVar8 * 0.23841362f + fVar3;
            fVar19 = fVar19 - fVar8 * 0.10257992f;
            fVar25 = fVar8 * 0.09932259f + fVar25;
            arg1[2] = fVar3;
            arg1[14] = fVar19;
            arg1[12] = fVar25;
            fVar25 = (arg3[20] * 0.15386991f + arg3[6] * 0.16820885f + *arg3 * 0.2820948f) * arg2[12] +
                     (arg2[20] * 0.15386991f + arg2[6] * 0.16820885f + *arg2 * 0.2820948f) * arg3[12] + fVar25;
            arg1[12] = fVar25;
            fVar8 = arg3[12] * arg2[12];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * 0.16820885f + fVar23;
            fVar26 = fVar8 * 0.15386991f + fVar26;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            fVar4 = arg2[8] * -0.18806319 - arg2[22] * 0.04441841f;
            fVar8 = arg3[8] * -0.18806319 - arg3[22] * 0.04441841f;
            fVar25 = arg2[14] * fVar8 + arg3[14] * fVar4 + fVar25;
            arg1[12] = fVar25;
            fVar19 = fVar8 * arg2[12] + fVar4 * arg3[12] + fVar19;
            arg1[14] = fVar19;
            fVar8 = arg3[12] * arg2[14] + arg3[14] * arg2[12];
            fVar10 = fVar8 * -0.18806319 + fVar10;
            fVar27 = fVar27 - fVar8 * 0.04441841f;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            fVar22 = (arg3[22] * 0.114687845f + arg3[20] * 0.02564498f + arg3[6] * 0.12615663f + arg3[8] * 0.14567313f +
                      *arg3 * 0.2820948f) *
                         arg2[13] +
                     (arg2[22] * 0.114687845f + arg2[20] * 0.02564498f + arg2[6] * 0.12615663f + arg2[8] * 0.14567313f +
                      *arg2 * 0.2820948f) *
                         arg3[13] +
                     fVar22;
            arg1[13] = fVar22;
            fVar8 = arg3[13] * arg2[13];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar10 = fVar8 * 0.14567313f + fVar10;
            fVar23 = fVar8 * 0.12615663f + fVar23;
            fVar26 = fVar8 * 0.02564498f + fVar26;
            fVar27 = fVar8 * 0.114687845f + fVar27;
            *arg1 = fVar2;
            arg1[8] = fVar10;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            arg1[22] = fVar27;
            fVar8 = arg2[23];
            fVar4 = arg3[23];
            fVar22 = arg2[14] * fVar4 * 0.06785024f + arg3[14] * fVar8 * 0.06785024f + fVar22;
            arg1[13] = fVar22;
            fVar19 = fVar4 * 0.06785024f * arg2[13] + fVar8 * 0.06785024f * arg3[13] + fVar19;
            arg1[14] = fVar19;
            fVar15 = (arg3[13] * arg2[14] + arg3[14] * arg2[13]) * 0.06785024f + fVar15;
            arg1[23] = fVar15;
            fVar8 = arg2[24] * -0.117520064 + arg2[22] * 0.13325523f + arg2[8] * -0.094031595;
            fVar4 = arg3[24] * -0.117520064 + arg3[22] * 0.13325523f + arg3[8] * -0.094031595;
            fVar22 = arg2[15] * fVar4 + arg3[15] * fVar8 + fVar22;
            arg1[13] = fVar22;
            arg1[15] = fVar4 * arg2[13] + fVar8 * arg3[13] + arg1[15];
            fVar8 = arg3[13] * arg2[15] + arg3[15] * arg2[13];
            fVar10 = fVar8 * -0.094031595 + fVar10;
            fVar27 = fVar8 * 0.13325523f + fVar27;
            fVar12 = fVar8 * -0.117520064 + fVar12;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            arg1[24] = fVar12;
            fVar8 = arg2[14] * 0.10257992f + arg2[12] * 0.09932259f + arg2[2] * 0.23841362f;
            fVar4 = arg3[14] * 0.10257992f + arg3[12] * 0.09932259f + arg3[2] * 0.23841362f;
            arg1[13] = arg2[21] * fVar4 + arg3[21] * fVar8 + fVar22;
            fVar5 = fVar4 * arg2[13] + fVar8 * arg3[13] + fVar5;
            arg1[21] = fVar5;
            fVar8 = arg3[13] * arg2[21] + arg3[21] * arg2[13];
            fVar3 = fVar8 * 0.23841362f + fVar3;
            fVar25 = fVar8 * 0.09932259f + fVar25;
            fVar19 = fVar8 * 0.10257992f + fVar19;
            arg1[2] = fVar3;
            arg1[12] = fVar25;
            arg1[14] = fVar19;
            fVar19 = (arg3[24] * 0.15171775f + arg3[20] * -0.17951487 + *arg3 * 0.2820948f) * arg2[14] +
                     (arg2[24] * 0.15171775f + arg2[20] * -0.17951487 + *arg2 * 0.2820948f) * arg3[14] + fVar19;
            arg1[14] = fVar19;
            fVar8 = arg3[14] * arg2[14];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar26 = fVar8 * -0.17951487 + fVar26;
            fVar12 = fVar8 * 0.15171775f + fVar12;
            *arg1 = fVar2;
            arg1[20] = fVar26;
            arg1[24] = fVar12;
            fVar4 = arg2[7] * 0.148677 - arg2[21] * 0.09932259f;
            fVar8 = arg3[7] * 0.148677 - arg3[21] * 0.09932259f;
            arg1[14] = arg2[15] * fVar8 + arg3[15] * fVar4 + fVar19;
            fVar8 = fVar8 * arg2[14] + fVar4 * arg3[14] + arg1[15];
            arg1[15] = fVar8;
            fVar4 = arg3[14] * arg2[15] + arg3[15] * arg2[14];
            fVar24 = fVar4 * 0.148677 + fVar24;
            fVar5 = fVar5 - fVar4 * 0.09932259f;
            arg1[7] = fVar24;
            arg1[21] = fVar5;
            fVar8 = (arg3[20] * 0.07693494f + arg3[6] * -0.21026105 + *arg3 * 0.2820948f) * arg2[15] +
                    (arg2[20] * 0.07693494f + arg2[6] * -0.21026105 + *arg2 * 0.2820948f) * arg3[15] + fVar8;
            arg1[15] = fVar8;
            fVar4 = arg3[15] * arg2[15];
            fVar2 = fVar4 * 0.2820948f + fVar2;
            fVar23 = fVar4 * -0.21026105 + fVar23;
            fVar26 = fVar4 * 0.07693494f + fVar26;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            fVar13 = arg2[2] * 0.1628675f - arg2[12] * 0.20355073f;
            fVar4 = arg3[2] * 0.1628675f - arg3[12] * 0.20355073f;
            arg1[15] = arg2[23] * fVar4 + arg3[23] * fVar13 + fVar8;
            fVar15 = fVar4 * arg2[15] + fVar13 * arg3[15] + fVar15;
            arg1[23] = fVar15;
            fVar8 = arg3[15] * arg2[23] + arg3[23] * arg2[15];
            arg1[12] = fVar25 - fVar8 * 0.20355073f;
            arg1[2] = fVar8 * 0.1628675f + fVar3;
            fVar6 = (arg3[20] * 0.10652531f + arg3[6] * -0.22937569 + *arg3 * 0.2820948f) * arg2[16] +
                    (arg2[20] * 0.10652531f + arg2[6] * -0.22937569 + *arg2 * 0.2820948f) * arg3[16] + fVar6;
            arg1[16] = fVar6;
            fVar8 = arg3[16] * arg2[16];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * -0.22937569 + fVar23;
            fVar26 = fVar8 * 0.10652531f + fVar26;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            fVar8 = arg2[22] * 0.13504547f + arg2[8] * -0.07508082;
            fVar4 = arg3[22] * 0.13504547f + arg3[8] * -0.07508082;
            fVar6 = arg2[18] * fVar4 + arg3[18] * fVar8 + fVar6;
            arg1[16] = fVar6;
            fVar16 = fVar4 * arg2[16] + fVar8 * arg3[16] + fVar16;
            arg1[18] = fVar16;
            fVar8 = arg3[16] * arg2[18] + arg3[18] * arg2[16];
            fVar10 = fVar8 * -0.07508082 + fVar10;
            fVar27 = fVar8 * 0.13504547f + fVar27;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            fVar8 = arg2[5] * 0.14046335f + arg2[19] * -0.11909891;
            fVar4 = arg3[5] * 0.14046335f + arg3[19] * -0.11909891;
            fVar6 = arg2[23] * fVar4 + arg3[23] * fVar8 + fVar6;
            arg1[16] = fVar6;
            fVar15 = fVar4 * arg2[16] + fVar8 * arg3[16] + fVar15;
            arg1[23] = fVar15;
            fVar8 = arg3[16] * arg2[23] + arg3[23] * arg2[16];
            fVar21 = fVar8 * -0.11909891 + fVar21;
            arg1[19] = fVar21;
            arg1[5] = fVar8 * 0.14046335f + fVar14;
            fVar17 = (arg3[20] * -0.15978795 + arg3[6] * -0.057343923 + *arg3 * 0.2820948f) * arg2[17] +
                     (arg2[20] * -0.15978795 + arg2[6] * -0.057343923 + *arg2 * 0.2820948f) * arg3[17] + fVar17;
            arg1[17] = fVar17;
            fVar8 = arg3[17] * arg2[17];
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar23 = fVar8 * -0.057343923 + fVar23;
            fVar26 = fVar8 * -0.15978795 + fVar26;
            *arg1 = fVar2;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            fVar4 = arg2[24] * 0.11909891f + (arg2[22] * 0.045015156f - arg2[8] * 0.112621225f);
            fVar8 = arg3[24] * 0.11909891f + (arg3[22] * 0.045015156f - arg3[8] * 0.112621225f);
            fVar17 = arg2[19] * fVar8 + arg3[19] * fVar4 + fVar17;
            arg1[17] = fVar17;
            fVar21 = fVar8 * arg2[17] + fVar4 * arg3[17] + fVar21;
            arg1[19] = fVar21;
            fVar8 = arg3[17] * arg2[19] + arg3[19] * arg2[17];
            fVar10 = fVar10 - fVar8 * 0.112621225f;
            fVar27 = fVar8 * 0.045015156f + fVar27;
            fVar12 = fVar8 * 0.11909891f + fVar12;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            arg1[24] = fVar12;
            fVar4 = arg2[18] * 0.045015156f + (arg2[16] * -0.11909891 - arg2[4] * 0.112621225f);
            fVar8 = arg3[18] * 0.045015156f + (arg3[16] * -0.11909891 - arg3[4] * 0.112621225f);
            arg1[17] = arg2[21] * fVar8 + arg3[21] * fVar4 + fVar17;
            fVar5 = fVar8 * arg2[17] + fVar4 * arg3[17] + fVar5;
            arg1[21] = fVar5;
            fVar8 = arg3[17] * arg2[21] + arg3[21] * arg2[17];
            arg1[16] = fVar8 * -0.11909891 + fVar6;
            arg1[4] = arg1[4] - fVar8 * 0.112621225f;
            fVar16 = fVar8 * 0.045015156f + fVar16;
            arg1[18] = fVar16;
            fVar16 = (arg3[24] * -0.13504547 + arg3[20] * -0.08369845 + *arg3 * 0.2820948f + arg3[6] * 0.06553591f) *
                         arg2[18] +
                     (arg2[24] * -0.13504547 + arg2[20] * -0.08369845 + *arg2 * 0.2820948f + arg2[6] * 0.06553591f) *
                         arg3[18] +
                     fVar16;
            arg1[18] = fVar16;
            fVar8 = arg3[18] * arg2[18];
            fVar23 = fVar8 * 0.06553591f + fVar23;
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar26 = fVar8 * -0.08369845 + fVar26;
            fVar12 = fVar8 * -0.13504547 + fVar12;
            arg1[6] = fVar23;
            *arg1 = fVar2;
            arg1[20] = fVar26;
            arg1[24] = fVar12;
            fVar4 = arg2[23] * -0.045015156 + arg2[21] * 0.102084786f + arg2[7] * 0.09029786f;
            fVar8 = arg3[23] * -0.045015156 + arg3[21] * 0.102084786f + arg3[7] * 0.09029786f;
            arg1[18] = arg2[19] * fVar8 + arg3[19] * fVar4 + fVar16;
            fVar21 = fVar8 * arg2[18] + fVar4 * arg3[18] + fVar21;
            arg1[19] = fVar21;
            fVar8 = arg3[18] * arg2[19] + arg3[19] * arg2[18];
            arg1[7] = fVar8 * 0.09029786f + fVar24;
            fVar5 = fVar8 * 0.102084786f + fVar5;
            fVar15 = fVar8 * -0.045015156 + fVar15;
            arg1[21] = fVar5;
            arg1[23] = fVar15;
            arg1[19] = (arg3[22] * -0.102084786 + arg3[20] * 0.06848055f + *arg3 * 0.2820948f + arg3[8] * -0.14188941 +
                        arg3[6] * 0.13926381f) *
                           arg2[19] +
                       (arg2[22] * -0.102084786 + arg2[20] * 0.06848055f + *arg2 * 0.2820948f + arg2[8] * -0.14188941 +
                        arg2[6] * 0.13926381f) *
                           arg3[19] +
                       fVar21;
            fVar8 = arg3[19] * arg2[19];
            fVar23 = fVar8 * 0.13926381f + fVar23;
            fVar10 = fVar8 * -0.14188941 + fVar10;
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar26 = fVar8 * 0.06848055f + fVar26;
            fVar27 = fVar8 * -0.102084786 + fVar27;
            arg1[6] = fVar23;
            arg1[8] = fVar10;
            *arg1 = fVar2;
            arg1[20] = fVar26;
            arg1[22] = fVar27;
            fVar26 = (*arg3 * 0.2820948f + arg3[6] * 0.1638398f) * arg2[20] +
                     (*arg2 * 0.2820948f + arg2[6] * 0.1638398f) * arg3[20] + fVar26;
            arg1[20] = fVar26;
            fVar8 = arg3[20] * arg2[20];
            fVar23 = fVar8 * 0.1638398f + fVar23;
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar26 = fVar8 * 0.13696113f + fVar26;
            arg1[6] = fVar23;
            *arg1 = fVar2;
            arg1[20] = fVar26;
            fVar5 = (arg3[22] * 0.102084786f + arg3[8] * 0.14188941f + *arg3 * 0.2820948f + arg3[20] * 0.06848055f +
                     arg3[6] * 0.13926381f) *
                        arg2[21] +
                    (arg2[22] * 0.102084786f + arg2[8] * 0.14188941f + *arg2 * 0.2820948f + arg2[20] * 0.06848055f +
                     arg2[6] * 0.13926381f) *
                        arg3[21] +
                    fVar5;
            arg1[21] = fVar5;
            fVar8 = arg3[21] * arg2[21];
            fVar23 = fVar8 * 0.13926381f + fVar23;
            fVar26 = fVar8 * 0.06848055f + fVar26;
            fVar2 = fVar8 * 0.2820948f + fVar2;
            fVar10 = fVar8 * 0.14188941f + fVar10;
            fVar27 = fVar8 * 0.102084786f + fVar27;
            arg1[6] = fVar23;
            arg1[20] = fVar26;
            *arg1 = fVar2;
            arg1[8] = fVar10;
            arg1[22] = fVar27;
            fVar4 = arg2[24] * -0.11909891 + (arg2[22] * 0.045015156f - arg2[8] * 0.112621225f);
            fVar8 = arg3[24] * -0.11909891 + (arg3[22] * 0.045015156f - arg3[8] * 0.112621225f);
            arg1[21] = arg2[23] * fVar8 + arg3[23] * fVar4 + fVar5;
            fVar15 = fVar8 * arg2[21] + fVar4 * arg3[21] + fVar15;
            arg1[23] = fVar15;
            fVar8 = arg3[21] * arg2[23] + arg3[23] * arg2[21];
            arg1[8] = fVar10 - fVar8 * 0.112621225f;
            fVar27 = fVar8 * 0.045015156f + fVar27;
            arg1[22] = fVar27;
            fVar12 = fVar8 * -0.11909891 + fVar12;
            arg1[24] = fVar12;
            arg1[22] = (arg3[24] * 0.13504547f + *arg3 * 0.2820948f + arg3[20] * -0.08369845 + arg3[6] * 0.06553591f) *
                           arg2[22] +
                       (arg2[24] * 0.13504547f + *arg2 * 0.2820948f + arg2[20] * -0.08369845 + arg2[6] * 0.06553591f) *
                           arg3[22] +
                       fVar27;
            fVar8 = arg3[22] * arg2[22];
            fVar23 = fVar8 * 0.06553591f + fVar23;
            arg1[6] = fVar23;
            fVar26 = fVar8 * -0.08369845 + fVar26;
            arg1[20] = fVar26;
            fVar2 = fVar8 * 0.2820948f + fVar2;
            *arg1 = fVar2;
            fVar12 = fVar8 * 0.13504547f + fVar12;
            arg1[24] = fVar12;
            arg1[23] = (*arg3 * 0.2820948f + arg3[20] * -0.15978795 + arg3[6] * -0.057343923) * arg2[23] +
                       (*arg2 * 0.2820948f + arg2[20] * -0.15978795 + arg2[6] * -0.057343923) * arg3[23] + fVar15;
            fVar8 = arg3[23] * arg2[23];
            fVar23 = fVar8 * -0.057343923 + fVar23;
            arg1[6] = fVar23;
            fVar26 = fVar8 * -0.15978795 + fVar26;
            arg1[20] = fVar26;
            fVar2 = fVar8 * 0.2820948f + fVar2;
            *arg1 = fVar2;
            arg1[24] = (arg3[20] * 0.10652531f + *arg3 * 0.2820948f + arg3[6] * -0.22937569) * arg2[24] +
                       (arg2[20] * 0.10652531f + *arg2 * 0.2820948f + arg2[6] * -0.22937569) * arg3[24] + fVar12;
            fVar8 = arg3[24] * arg2[24];
            arg1[6] = fVar8 * -0.22937569 + fVar23;
            *arg1 = fVar8 * 0.2820948f + fVar2;
            arg1[20] = fVar8 * 0.10652531f + fVar26;
            pfVar1 = arg1;
        }
        return pfVar1;
    }

    // 0x1008bae20
    float* SHMultiply6(float* arg1, const float* arg2, const float* arg3) {
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float fVar32;
        float fVar33;

        float* pfVar1 = nullptr;
        if (((arg1 != nullptr) && (arg2 != nullptr)) && (arg3 != nullptr)) {
            fVar4 = *arg2 * 0.2820948f * *arg3;
            *arg1 = fVar4;
            fVar2 = (arg3[8] * -0.21850969 + arg3[6] * -0.12615663 + *arg3 * 0.2820948f) * arg2[1] +
                    (arg2[8] * -0.21850969 + arg2[6] * -0.12615663 + *arg2 * 0.2820948f) * arg3[1];
            arg1[1] = fVar2;
            fVar8 = arg3[1] * arg2[1];
            fVar4 = fVar8 * 0.2820948f + fVar4;
            *arg1 = fVar4;
            arg1[6] = fVar8 * -0.12615663;
            arg1[8] = fVar8 * -0.21850969;
            fVar14 = arg2[15] * -0.22617902 + arg2[13] * -0.05839917 + arg2[3] * 0.21850969f;
            fVar18 = arg3[15] * -0.22617902 + arg3[13] * -0.05839917 + arg3[3] * 0.21850969f;
            fVar2 = arg2[4] * fVar18 + arg3[4] * fVar14 + fVar2;
            arg1[1] = fVar2;
            fVar19 = fVar18 * arg2[1] + fVar14 * arg3[1];
            arg1[4] = fVar19;
            fVar14 = arg3[1] * arg2[4] + arg3[4] * arg2[1];
            arg1[3] = fVar14 * 0.21850969f;
            arg1[13] = fVar14 * -0.05839917;
            arg1[15] = fVar14 * -0.22617902;
            fVar21 = arg2[12] * -0.14304817 + arg2[2] * 0.21850969f;
            fVar18 = arg3[12] * -0.14304817 + arg3[2] * 0.21850969f;
            fVar2 = arg2[5] * fVar18 + arg3[5] * fVar21 + fVar2;
            arg1[1] = fVar2;
            fVar15 = fVar18 * arg2[1] + fVar21 * arg3[1];
            arg1[5] = fVar15;
            fVar32 = arg3[1] * arg2[5] + arg3[5] * arg2[1];
            fVar21 = fVar32 * 0.21850969f;
            arg1[2] = fVar21;
            fVar32 = fVar32 * -0.14304817;
            arg1[12] = fVar32;
            fVar26 = arg2[22] * -0.16858388 + arg2[20] * -0.15078601 + arg2[8] * 0.05839917f + arg2[6] * 0.20230065f;
            fVar18 = arg3[22] * -0.16858388 + arg3[20] * -0.15078601 + arg3[8] * 0.05839917f + arg3[6] * 0.20230065f;
            fVar2 = arg2[11] * fVar18 + arg3[11] * fVar26 + fVar2;
            arg1[1] = fVar2;
            fVar20 = fVar18 * arg2[1] + fVar26 * arg3[1];
            arg1[11] = fVar20;
            fVar29 = arg3[1] * arg2[11] + arg3[11] * arg2[1];
            fVar5 = fVar29 * 0.20230065f + fVar8 * -0.12615663;
            fVar26 = fVar29 * 0.05839917f + fVar8 * -0.21850969;
            arg1[6] = fVar5;
            arg1[8] = fVar26;
            arg1[20] = fVar29 * -0.15078601;
            arg1[22] = fVar29 * -0.16858388;
            fVar8 = arg2[35] * -0.2329321 + arg2[33] * -0.034723468 + arg2[15] * 0.23032944f;
            fVar18 = arg3[35] * -0.2329321 + arg3[33] * -0.034723468 + arg3[15] * 0.23032944f;
            fVar2 = arg2[16] * fVar18 + arg3[16] * fVar8 + fVar2;
            arg1[1] = fVar2;
            fVar11 = fVar18 * arg2[1] + fVar8 * arg3[1];
            arg1[16] = fVar11;
            fVar12 = arg3[1] * arg2[16] + arg3[16] * arg2[1];
            fVar22 = fVar12 * 0.23032944f + fVar14 * -0.22617902;
            arg1[15] = fVar22;
            arg1[33] = fVar12 * -0.034723468;
            arg1[35] = fVar12 * -0.2329321;
            fVar8 = arg2[33] * -0.18373932 + arg2[31] * -0.08505478 + arg2[13] * 0.16858388f + arg2[15] * 0.043528173f;
            fVar18 = arg3[33] * -0.18373932 + arg3[31] * -0.08505478 + arg3[13] * 0.16858388f + arg3[15] * 0.043528173f;
            fVar2 = arg2[18] * fVar18 + arg3[18] * fVar8 + fVar2;
            arg1[1] = fVar2;
            fVar27 = fVar18 * arg2[1] + fVar8 * arg3[1];
            arg1[18] = fVar27;
            fVar16 = arg3[1] * arg2[18] + arg3[18] * arg2[1];
            fVar22 = fVar16 * 0.043528173f + fVar22;
            fVar18 = fVar16 * 0.16858388f + fVar14 * -0.05839917;
            fVar17 = fVar16 * -0.18373932 + fVar12 * -0.034723468;
            arg1[15] = fVar22;
            arg1[13] = fVar18;
            arg1[31] = fVar16 * -0.08505478;
            arg1[33] = fVar17;
            fVar8 = arg2[32] * -0.15912293 + arg2[30] * -0.15528807 + arg2[12] * 0.1946639f + arg2[14] * 0.075393006f;
            fVar23 = arg3[32] * -0.15912293 + arg3[30] * -0.15528807 + arg3[12] * 0.1946639f + arg3[14] * 0.075393006f;
            fVar2 = arg2[19] * fVar23 + arg3[19] * fVar8 + fVar2;
            arg1[1] = fVar2;
            fVar24 = fVar23 * arg2[1] + fVar8 * arg3[1];
            arg1[19] = fVar24;
            fVar6 = arg3[1] * arg2[19] + arg3[19] * arg2[1];
            fVar32 = fVar6 * 0.1946639f + fVar32;
            arg1[14] = fVar6 * 0.075393006f;
            arg1[12] = fVar32;
            arg1[30] = fVar6 * -0.15528807;
            arg1[32] = fVar6 * -0.15912293;
            fVar8 = arg2[27] * 0.034723468f + arg2[25] * 0.2329321f + arg2[9] * -0.23032944;
            fVar23 = arg3[27] * 0.034723468f + arg3[25] * 0.2329321f + arg3[9] * -0.23032944;
            fVar2 = arg2[24] * fVar23 + arg3[24] * fVar8 + fVar2;
            arg1[1] = fVar2;
            fVar23 = fVar23 * arg2[1] + fVar8 * arg3[1];
            arg1[24] = fVar23;
            fVar28 = arg3[1] * arg2[24] + arg3[24] * arg2[1];
            arg1[9] = fVar28 * -0.23032944;
            arg1[25] = fVar28 * 0.2329321f;
            arg1[27] = fVar28 * 0.034723468f;
            fVar8 = arg2[20] * 0.19018827f + arg2[22] * 0.08505478f;
            fVar13 = arg3[20] * 0.19018827f + arg3[22] * 0.08505478f;
            arg1[1] = arg2[29] * fVar13 + arg3[29] * fVar8 + fVar2;
            arg1[29] = fVar13 * arg2[1] + fVar8 * arg3[1];
            fVar2 = arg3[1] * arg2[29] + arg3[29] * arg2[1];
            fVar30 = fVar2 * 0.08505478f + fVar29 * -0.16858388;
            fVar13 = fVar2 * 0.19018827f + fVar29 * -0.15078601;
            arg1[22] = fVar30;
            arg1[20] = fVar13;
            fVar29 = (arg2[6] * 0.25231326f + *arg2 * 0.2820948f) * arg3[2] + fVar21 +
                     (arg3[6] * 0.25231326f + *arg3 * 0.2820948f) * arg2[2];
            arg1[2] = fVar29;
            fVar4 = arg3[2] * arg2[2] * 0.2820948f + fVar4;
            fVar5 = arg3[2] * arg2[2] * 0.25231326f + fVar5;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            fVar8 = arg2[20] * 0.24623254f + arg2[6] * 0.2477667f;
            fVar2 = arg3[20] * 0.24623254f + arg3[6] * 0.2477667f;
            fVar29 = arg2[12] * fVar2 + arg3[12] * fVar8 + fVar29;
            arg1[2] = fVar29;
            fVar25 = fVar8 * arg3[2] + fVar32 + fVar2 * arg2[2];
            arg1[12] = fVar25;
            fVar2 = arg3[2] * arg2[12] + arg3[12] * arg2[2];
            fVar5 = fVar2 * 0.2477667f + fVar5;
            fVar13 = fVar2 * 0.24623254f + fVar13;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            fVar2 = arg2[30];
            fVar8 = arg3[30];
            fVar29 = arg2[20] * fVar8 * 0.24553202f + arg3[20] * fVar2 * 0.24553202f + fVar29;
            arg1[2] = fVar29;
            fVar13 = fVar8 * 0.24553202f * arg2[2] + fVar2 * 0.24553202f * arg3[2] + fVar13;
            arg1[20] = fVar13;
            fVar33 = (arg3[2] * arg2[20] + arg3[20] * arg2[2]) * 0.24553202f + fVar6 * -0.15528807;
            arg1[30] = fVar33;
            fVar3 = (arg2[8] * 0.21850969f + arg2[6] * -0.12615663 + *arg2 * 0.2820948f) * arg3[3] +
                    fVar14 * 0.21850969f +
                    (arg3[8] * 0.21850969f + arg3[6] * -0.12615663 + *arg3 * 0.2820948f) * arg2[3];
            arg1[3] = fVar3;
            fVar2 = arg3[3] * arg2[3];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * -0.12615663 + fVar5;
            fVar26 = fVar2 * 0.21850969f + fVar26;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[8] = fVar26;
            fVar2 = arg2[12] * -0.14304817 + arg2[2] * 0.21850969f;
            fVar8 = arg3[12] * -0.14304817 + arg3[2] * 0.21850969f;
            fVar3 = arg2[7] * fVar8 + arg3[7] * fVar2 + fVar3;
            arg1[3] = fVar3;
            fVar21 = fVar8 * arg2[3] + fVar2 * arg3[3];
            arg1[7] = fVar21;
            fVar2 = arg3[3] * arg2[7] + arg3[7] * arg2[3];
            fVar29 = fVar2 * 0.21850969f + fVar29;
            fVar25 = fVar2 * -0.14304817 + fVar25;
            arg1[2] = fVar29;
            arg1[12] = fVar25;
            fVar2 = arg2[22] * 0.16858388f + arg2[20] * -0.15078601 + arg2[6] * 0.20230065f + arg2[8] * -0.05839917;
            fVar8 = arg3[22] * 0.16858388f + arg3[20] * -0.15078601 + arg3[6] * 0.20230065f + arg3[8] * -0.05839917;
            fVar3 = arg2[13] * fVar8 + arg3[13] * fVar2 + fVar3;
            arg1[3] = fVar3;
            fVar32 = fVar2 * arg3[3] + fVar18 + fVar8 * arg2[3];
            arg1[13] = fVar32;
            fVar2 = arg3[3] * arg2[13] + arg3[13] * arg2[3];
            fVar26 = fVar2 * -0.05839917 + fVar26;
            fVar5 = fVar2 * 0.20230065f + fVar5;
            fVar13 = fVar2 * -0.15078601 + fVar13;
            fVar30 = fVar2 * 0.16858388f + fVar30;
            arg1[8] = fVar26;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            fVar2 = arg2[27] * -0.034723468 + arg2[25] * 0.2329321f + arg2[9] * 0.23032944f;
            fVar8 = arg3[27] * -0.034723468 + arg3[25] * 0.2329321f + arg3[9] * 0.23032944f;
            fVar3 = arg2[16] * fVar8 + arg3[16] * fVar2 + fVar3;
            arg1[3] = fVar3;
            fVar11 = fVar8 * arg2[3] + fVar2 * arg3[3] + fVar11;
            arg1[16] = fVar11;
            fVar14 = arg3[3] * arg2[16] + arg3[16] * arg2[3];
            fVar2 = fVar14 * 0.23032944f + fVar28 * -0.23032944;
            fVar8 = fVar14 * 0.2329321f + fVar28 * 0.2329321f;
            fVar9 = fVar14 * -0.034723468 + fVar28 * 0.034723468f;
            arg1[9] = fVar2;
            arg1[25] = fVar8;
            arg1[27] = fVar9;
            fVar14 = arg2[32] * 0.15912293f + arg2[30] * -0.15528807 + arg2[14] * -0.075393006 + arg2[12] * 0.1946639f;
            fVar18 = arg3[32] * 0.15912293f + arg3[30] * -0.15528807 + arg3[14] * -0.075393006 + arg3[12] * 0.1946639f;
            fVar3 = arg2[21] * fVar18 + arg3[21] * fVar14 + fVar3;
            arg1[3] = fVar3;
            fVar18 = fVar18 * arg2[3] + fVar14 * arg3[3];
            arg1[21] = fVar18;
            fVar14 = arg3[3] * arg2[21] + arg3[21] * arg2[3];
            fVar25 = fVar14 * 0.1946639f + fVar25;
            fVar28 = fVar14 * -0.075393006 + fVar6 * 0.075393006f;
            fVar33 = fVar14 * -0.15528807 + fVar33;
            fVar10 = fVar14 * 0.15912293f + fVar6 * -0.15912293;
            arg1[12] = fVar25;
            arg1[14] = fVar28;
            arg1[30] = fVar33;
            arg1[32] = fVar10;
            fVar14 = arg2[35] * 0.2329321f + arg2[33] * -0.034723468 + arg2[15] * 0.23032944f;
            fVar6 = arg3[35] * 0.2329321f + arg3[33] * -0.034723468 + arg3[15] * 0.23032944f;
            fVar3 = arg2[24] * fVar6 + arg3[24] * fVar14 + fVar3;
            arg1[3] = fVar3;
            fVar23 = fVar6 * arg2[3] + fVar14 * arg3[3] + fVar23;
            arg1[24] = fVar23;
            fVar14 = arg3[3] * arg2[24] + arg3[24] * arg2[3];
            fVar22 = fVar14 * 0.23032944f + fVar22;
            fVar17 = fVar14 * -0.034723468 + fVar17;
            fVar7 = fVar14 * 0.2329321f + fVar12 * -0.2329321;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            arg1[35] = fVar7;
            fVar6 = arg2[22] * -0.08505478 + arg2[20] * 0.19018827f;
            fVar14 = arg3[22] * -0.08505478 + arg3[20] * 0.19018827f;
            fVar3 = arg2[31] * fVar14 + arg3[31] * fVar6 + fVar3;
            arg1[3] = fVar3;
            fVar12 = fVar6 * arg3[3] + fVar16 * -0.08505478 + fVar14 * arg2[3];
            arg1[31] = fVar12;
            fVar14 = arg3[3] * arg2[31] + arg3[31] * arg2[3];
            fVar13 = fVar14 * 0.19018827f + fVar13;
            fVar30 = fVar14 * -0.08505478 + fVar30;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            fVar19 = (arg3[24] * -0.23841362 + arg3[20] * 0.040299255f + arg3[6] * -0.18022375 + *arg3 * 0.2820948f) *
                         arg2[4] +
                     (arg2[24] * -0.23841362 + arg2[20] * 0.040299255f + arg2[6] * -0.18022375 + *arg2 * 0.2820948f) *
                         arg3[4] +
                     fVar19;
            arg1[4] = fVar19;
            fVar14 = arg3[4] * arg2[4];
            fVar4 = fVar14 * 0.2820948f + fVar4;
            fVar5 = fVar14 * -0.18022375 + fVar5;
            fVar13 = fVar14 * 0.040299255f + fVar13;
            fVar23 = fVar14 * -0.23841362 + fVar23;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            fVar6 = arg2[23] * -0.16858388 + arg2[21] * -0.06371872 + arg2[7] * 0.15607835f;
            fVar14 = arg3[23] * -0.16858388 + arg3[21] * -0.06371872 + arg3[7] * 0.15607835f;
            fVar19 = arg2[5] * fVar14 + arg3[5] * fVar6 + fVar19;
            arg1[4] = fVar19;
            fVar15 = fVar6 * arg3[4] + fVar15 + fVar14 * arg2[4];
            arg1[5] = fVar15;
            fVar16 = arg3[4] * arg2[5] + arg3[5] * arg2[4];
            fVar21 = fVar16 * 0.15607835f + fVar21;
            fVar18 = fVar16 * -0.06371872 + fVar18;
            arg1[7] = fVar21;
            arg1[21] = fVar18;
            arg1[23] = fVar16 * -0.16858388;
            fVar14 = arg2[35] * -0.245532 + arg2[31] * 0.016943317f + arg2[13] * -0.094031595 + arg2[3] * 0.22617902f;
            fVar6 = arg3[35] * -0.245532 + arg3[31] * 0.016943317f + arg3[13] * -0.094031595 + arg3[3] * 0.22617902f;
            fVar19 = arg2[9] * fVar6 + arg3[9] * fVar14 + fVar19;
            arg1[4] = fVar19;
            fVar14 = fVar14 * arg3[4] + fVar2 + fVar6 * arg2[4];
            arg1[9] = fVar14;
            fVar2 = arg3[4] * arg2[9] + arg3[9] * arg2[4];
            fVar3 = fVar2 * 0.22617902f + fVar3;
            fVar32 = fVar2 * -0.094031595 + fVar32;
            fVar12 = fVar2 * 0.016943317f + fVar12;
            fVar7 = fVar2 * -0.245532 + fVar7;
            arg1[3] = fVar3;
            arg1[13] = fVar32;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar6 = arg2[34] * -0.19018827 + arg2[30] * 0.053579476f + arg2[12] * -0.18806319 + arg2[2] * 0.1846744f;
            fVar2 = arg3[34] * -0.19018827 + arg3[30] * 0.053579476f + arg3[12] * -0.18806319 + arg3[2] * 0.1846744f;
            fVar19 = arg2[10] * fVar2 + arg3[10] * fVar6 + fVar19;
            arg1[4] = fVar19;
            arg1[10] = fVar2 * arg2[4] + fVar6 * arg3[4];
            fVar31 = arg3[4] * arg2[10] + arg3[10] * arg2[4];
            fVar29 = fVar31 * 0.1846744f + fVar29;
            fVar25 = fVar31 * -0.18806319 + fVar25;
            fVar33 = fVar31 * 0.053579476f + fVar33;
            arg1[2] = fVar29;
            arg1[12] = fVar25;
            arg1[30] = fVar33;
            arg1[34] = fVar31 * -0.19018827;
            fVar6 = arg2[33] * -0.14175797 + arg2[31] * -0.06562119 + arg2[15] * 0.094031595f + arg2[13] * 0.14567313f +
                    arg2[3] * -0.05839917;
            fVar2 = arg3[33] * -0.14175797 + arg3[31] * -0.06562119 + arg3[15] * 0.094031595f + arg3[13] * 0.14567313f +
                    arg3[3] * -0.05839917;
            fVar19 = arg2[11] * fVar2 + arg3[11] * fVar6 + fVar19;
            arg1[4] = fVar19;
            arg1[11] = fVar6 * arg3[4] + fVar20 + fVar2 * arg2[4];
            fVar2 = arg3[4] * arg2[11] + arg3[11] * arg2[4];
            fVar3 = fVar2 * -0.05839917 + fVar3;
            fVar32 = fVar2 * 0.14567313f + fVar32;
            fVar22 = fVar2 * 0.094031595f + fVar22;
            fVar12 = fVar2 * -0.06562119 + fVar12;
            fVar17 = fVar2 * -0.14175797 + fVar17;
            arg1[3] = fVar3;
            arg1[13] = fVar32;
            arg1[15] = fVar22;
            arg1[31] = fVar12;
            arg1[33] = fVar17;
            fVar2 = arg2[22] * -0.07508082 + arg2[8] * 0.23841362f;
            fVar6 = arg3[22] * -0.07508082 + arg3[8] * 0.23841362f;
            fVar19 = arg2[16] * fVar6 + arg3[16] * fVar2 + fVar19;
            arg1[4] = fVar19;
            arg1[16] = fVar6 * arg2[4] + fVar2 * arg3[4] + fVar11;
            fVar2 = arg3[4] * arg2[16] + arg3[16] * arg2[4];
            fVar26 = fVar2 * 0.23841362f + fVar26;
            fVar30 = fVar2 * -0.07508082 + fVar30;
            arg1[8] = fVar26;
            arg1[22] = fVar30;
            fVar6 = arg2[24] * 0.07508082f + (arg2[6] * 0.15607835f - arg2[20] * 0.19036461f);
            fVar2 = arg3[24] * 0.07508082f + (arg3[6] * 0.15607835f - arg3[20] * 0.19036461f);
            fVar19 = arg2[18] * fVar2 + arg3[18] * fVar6 + fVar19;
            arg1[4] = fVar19;
            arg1[18] = fVar2 * arg2[4] + fVar6 * arg3[4] + fVar27;
            fVar2 = arg3[4] * arg2[18] + arg3[18] * arg2[4];
            fVar5 = fVar2 * 0.15607835f + fVar5;
            fVar13 = fVar13 - fVar2 * 0.19036461f;
            fVar23 = fVar2 * 0.07508082f + fVar23;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            fVar2 = arg2[23] * 0.112621225f + arg2[21] * 0.14188941f + arg2[7] * -0.06371872;
            fVar6 = arg3[23] * 0.112621225f + arg3[21] * 0.14188941f + arg3[7] * -0.06371872;
            fVar19 = arg2[19] * fVar6 + arg3[19] * fVar2 + fVar19;
            arg1[4] = fVar19;
            arg1[19] = fVar6 * arg2[4] + fVar2 * arg3[4] + fVar24;
            fVar2 = arg3[4] * arg2[19] + arg3[19] * arg2[4];
            fVar21 = fVar2 * -0.06371872 + fVar21;
            fVar18 = fVar2 * 0.14188941f + fVar18;
            arg1[7] = fVar21;
            arg1[21] = fVar18;
            arg1[23] = fVar2 * 0.112621225f + fVar16 * -0.16858388;
            fVar6 = arg2[33] * -0.062641345 + arg2[15] * 0.245532;
            fVar2 = arg3[33] * -0.062641345 + arg3[15] * 0.245532;
            fVar19 = arg2[25] * fVar2 + arg3[25] * fVar6 + fVar19;
            arg1[4] = fVar19;
            fVar6 = fVar6 * arg3[4] + fVar8 + fVar2 * arg2[4];
            arg1[25] = fVar6;
            fVar2 = arg3[4] * arg2[25] + arg3[25] * arg2[4];
            fVar22 = fVar2 * 0.245532 + fVar22;
            fVar17 = fVar2 * -0.062641345 + fVar17;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            fVar2 = arg2[32] * -0.09704356 + arg2[14] * 0.19018827f;
            fVar8 = arg3[32] * -0.09704356 + arg3[14] * 0.19018827f;
            fVar19 = arg2[26] * fVar8 + arg3[26] * fVar2 + fVar19;
            arg1[4] = fVar19;
            arg1[26] = fVar8 * arg2[4] + fVar2 * arg3[4];
            fVar2 = arg3[4] * arg2[26] + arg3[26] * arg2[4];
            fVar28 = fVar2 * 0.19018827f + fVar28;
            fVar10 = fVar2 * -0.09704356 + fVar10;
            arg1[14] = fVar28;
            arg1[32] = fVar10;
            fVar8 = arg2[35] * 0.062641345f + arg2[31] * -0.121034585 + arg2[13] * 0.14175797f;
            fVar2 = arg3[35] * 0.062641345f + arg3[31] * -0.121034585 + arg3[13] * 0.14175797f;
            fVar19 = arg2[27] * fVar2 + arg3[27] * fVar8 + fVar19;
            arg1[4] = fVar19;
            fVar9 = fVar8 * arg3[4] + fVar9 + fVar2 * arg2[4];
            arg1[27] = fVar9;
            fVar2 = arg3[4] * arg2[27] + arg3[27] * arg2[4];
            fVar32 = fVar2 * 0.14175797f + fVar32;
            fVar12 = fVar2 * -0.121034585 + fVar12;
            fVar7 = fVar2 * 0.062641345f + fVar7;
            arg1[13] = fVar32;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar2 = arg2[34] * 0.09704356f + (arg2[12] * 0.14175797f - arg2[30] * 0.19137248f);
            fVar8 = arg3[34] * 0.09704356f + (arg3[12] * 0.14175797f - arg3[30] * 0.19137248f);
            fVar19 = arg2[28] * fVar8 + arg3[28] * fVar2 + fVar19;
            arg1[4] = fVar19;
            arg1[28] = fVar8 * arg2[4] + fVar2 * arg3[4];
            fVar2 = arg3[4] * arg2[28] + arg3[28] * arg2[4];
            fVar25 = fVar2 * 0.14175797f + fVar25;
            fVar33 = fVar33 - fVar2 * 0.19137248f;
            arg1[12] = fVar25;
            arg1[30] = fVar33;
            arg1[34] = fVar2 * 0.09704356f + fVar31 * -0.19018827;
            fVar2 = arg2[33] * 0.121034585f + arg2[31] * 0.1400703f + arg2[15] * -0.016943317 + arg2[13] * -0.06562119;
            fVar8 = arg3[33] * 0.121034585f + arg3[31] * 0.1400703f + arg3[15] * -0.016943317 + arg3[13] * -0.06562119;
            arg1[4] = arg2[29] * fVar8 + arg3[29] * fVar2 + fVar19;
            arg1[29] = fVar8 * arg2[4] + fVar2 * arg3[4] + arg1[29];
            fVar2 = arg3[4] * arg2[29] + arg3[29] * arg2[4];
            fVar32 = fVar2 * -0.06562119 + fVar32;
            fVar22 = fVar2 * -0.016943317 + fVar22;
            fVar12 = fVar2 * 0.1400703f + fVar12;
            fVar17 = fVar2 * 0.121034585f + fVar17;
            arg1[13] = fVar32;
            arg1[15] = fVar22;
            arg1[31] = fVar12;
            arg1[33] = fVar17;
            fVar15 = (arg3[22] * -0.18022375 + arg3[20] * -0.16119702 + arg3[8] * -0.15607835 + arg3[6] * 0.090111874f +
                      *arg3 * 0.2820948f) *
                         arg2[5] +
                     (arg2[22] * -0.18022375 + arg2[20] * -0.16119702 + arg2[8] * -0.15607835 + arg2[6] * 0.090111874f +
                      *arg2 * 0.2820948f) *
                         arg3[5] +
                     fVar15;
            arg1[5] = fVar15;
            fVar2 = arg3[5] * arg2[5];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * 0.090111874f + fVar5;
            fVar26 = fVar2 * -0.15607835 + fVar26;
            fVar13 = fVar2 * -0.16119702 + fVar13;
            fVar30 = fVar2 * -0.18022375 + fVar30;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[8] = fVar26;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            fVar2 = arg2[33] * -0.17931122 + arg2[31] * -0.08300497 + arg2[15] * -0.148677 + arg2[13] * 0.11516472f +
                    arg2[3] * 0.1846744f;
            fVar8 = arg3[33] * -0.17931122 + arg3[31] * -0.08300497 + arg3[15] * -0.148677 + arg3[13] * 0.11516472f +
                    arg3[3] * 0.1846744f;
            fVar15 = arg2[10] * fVar8 + arg3[10] * fVar2 + fVar15;
            arg1[5] = fVar15;
            arg1[10] = fVar8 * arg2[5] + fVar2 * arg3[5] + arg1[10];
            fVar2 = arg3[5] * arg2[10] + arg3[10] * arg2[5];
            fVar3 = fVar2 * 0.1846744f + fVar3;
            fVar32 = fVar2 * 0.11516472f + fVar32;
            fVar22 = fVar2 * -0.148677 + fVar22;
            fVar12 = fVar2 * -0.08300497 + fVar12;
            fVar17 = fVar2 * -0.17931122 + fVar17;
            arg1[3] = fVar3;
            arg1[13] = fVar32;
            arg1[15] = fVar22;
            arg1[31] = fVar12;
            arg1[33] = fVar17;
            fVar2 = arg2[32] * -0.17361735 + arg2[30] * -0.16943318 + arg2[14] * -0.11516472 + arg2[12] * 0.059470803f +
                    arg2[2] * 0.23359668f;
            fVar8 = arg3[32] * -0.17361735 + arg3[30] * -0.16943318 + arg3[14] * -0.11516472 + arg3[12] * 0.059470803f +
                    arg3[2] * 0.23359668f;
            fVar15 = arg2[11] * fVar8 + arg3[11] * fVar2 + fVar15;
            arg1[5] = fVar15;
            arg1[11] = fVar8 * arg2[5] + fVar2 * arg3[5] + arg1[11];
            fVar2 = arg3[5] * arg2[11] + arg3[11] * arg2[5];
            fVar29 = fVar2 * 0.23359668f + fVar29;
            fVar25 = fVar2 * 0.059470803f + fVar25;
            fVar28 = fVar2 * -0.11516472 + fVar28;
            fVar33 = fVar2 * -0.16943318 + fVar33;
            fVar10 = fVar2 * -0.17361735 + fVar10;
            arg1[2] = fVar29;
            arg1[12] = fVar25;
            arg1[14] = fVar28;
            arg1[30] = fVar33;
            arg1[32] = fVar10;
            fVar8 = arg2[29] * 0.08300497f + arg2[27] * 0.17931122f + arg2[1] * -0.1846744 + arg2[9] * 0.148677;
            fVar2 = arg3[29] * 0.08300497f + arg3[27] * 0.17931122f + arg3[1] * -0.1846744 + arg3[9] * 0.148677;
            fVar15 = arg2[14] * fVar2 + arg3[14] * fVar8 + fVar15;
            arg1[5] = fVar15;
            fVar28 = fVar2 * arg2[5] + fVar8 * arg3[5] + fVar28;
            arg1[14] = fVar28;
            fVar2 = arg3[5] * arg2[14] + arg3[14] * arg2[5];
            fVar14 = fVar2 * 0.148677 + fVar14;
            arg1[9] = fVar14;
            arg1[1] = fVar2 * -0.1846744 + arg1[1];
            fVar9 = fVar2 * 0.17931122f + fVar9;
            arg1[27] = fVar9;
            arg1[29] = fVar2 * 0.08300497f + arg1[29];
            fVar2 = arg2[24] * -0.14046335 + arg2[22] * 0.13272539f + arg2[8] * 0.16858388f;
            fVar8 = arg3[24] * -0.14046335 + arg3[22] * 0.13272539f + arg3[8] * 0.16858388f;
            fVar15 = arg2[17] * fVar8 + arg3[17] * fVar2 + fVar15;
            arg1[5] = fVar15;
            arg1[17] = fVar8 * arg2[5] + fVar2 * arg3[5];
            fVar2 = arg3[5] * arg2[17] + arg3[17] * arg2[5];
            fVar26 = fVar2 * 0.16858388f + fVar26;
            fVar30 = fVar2 * 0.13272539f + fVar30;
            fVar23 = fVar2 * -0.14046335 + fVar23;
            arg1[8] = fVar26;
            arg1[22] = fVar30;
            arg1[24] = fVar23;
            fVar8 = arg2[23] * -0.13272539 + arg2[21] * 0.09029786f + arg2[7] * 0.18022375f;
            fVar2 = arg3[23] * -0.13272539 + arg3[21] * 0.09029786f + arg3[7] * 0.18022375f;
            fVar15 = arg2[18] * fVar2 + arg3[18] * fVar8 + fVar15;
            arg1[5] = fVar15;
            arg1[18] = fVar2 * arg2[5] + fVar8 * arg3[5] + arg1[18];
            fVar2 = arg3[5] * arg2[18] + arg3[18] * arg2[5];
            fVar21 = fVar2 * 0.18022375f + fVar21;
            fVar18 = fVar2 * 0.09029786f + fVar18;
            arg1[7] = fVar21;
            arg1[21] = fVar18;
            arg1[23] = fVar2 * -0.13272539 + arg1[23];
            fVar8 = arg2[22] * -0.09029786 + arg2[20] * 0.04486937f + arg2[8] * 0.06371872f + arg2[6] * 0.22072811f;
            fVar2 = arg3[22] * -0.09029786 + arg3[20] * 0.04486937f + arg3[8] * 0.06371872f + arg3[6] * 0.22072811f;
            fVar15 = arg2[19] * fVar2 + arg3[19] * fVar8 + fVar15;
            arg1[5] = fVar15;
            arg1[19] = fVar2 * arg2[5] + fVar8 * arg3[5] + arg1[19];
            fVar2 = arg3[5] * arg2[19] + arg3[19] * arg2[5];
            fVar5 = fVar2 * 0.22072811f + fVar5;
            fVar26 = fVar2 * 0.06371872f + fVar26;
            fVar13 = fVar2 * 0.04486937f + fVar13;
            fVar30 = fVar2 * -0.09029786 + fVar30;
            arg1[6] = fVar5;
            arg1[8] = fVar26;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            fVar2 = arg2[35] * -0.13288237 + arg2[33] * 0.13866253f + arg2[15] * 0.15528807f;
            fVar8 = arg3[35] * -0.13288237 + arg3[33] * 0.13866253f + arg3[15] * 0.15528807f;
            fVar15 = arg2[26] * fVar8 + arg3[26] * fVar2 + fVar15;
            arg1[5] = fVar15;
            arg1[26] = fVar8 * arg2[5] + fVar2 * arg3[5] + arg1[26];
            fVar2 = arg3[5] * arg2[26] + arg3[26] * arg2[5];
            fVar22 = fVar2 * 0.15528807f + fVar22;
            fVar17 = fVar2 * 0.13866253f + fVar17;
            fVar7 = fVar2 * -0.13288237 + fVar7;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            arg1[35] = fVar7;
            fVar2 = arg2[33] * -0.11436693 + arg2[31] * 0.07411824f + arg2[13] * 0.17361735f + arg2[15] * 0.044827804f;
            fVar8 = arg3[33] * -0.11436693 + arg3[31] * 0.07411824f + arg3[13] * 0.17361735f + arg3[15] * 0.044827804f;
            fVar15 = arg2[28] * fVar8 + arg3[28] * fVar2 + fVar15;
            arg1[5] = fVar15;
            arg1[28] = fVar8 * arg2[5] + fVar2 * arg3[5] + arg1[28];
            fVar2 = arg3[5] * arg2[28] + arg3[28] * arg2[5];
            fVar22 = fVar2 * 0.044827804f + fVar22;
            fVar32 = fVar2 * 0.17361735f + fVar32;
            fVar12 = fVar2 * 0.07411824f + fVar12;
            fVar17 = fVar2 * -0.11436693 + fVar17;
            arg1[15] = fVar22;
            arg1[13] = fVar32;
            arg1[31] = fVar12;
            arg1[33] = fVar17;
            fVar8 = arg2[32] * -0.07411824 + arg2[30] * 0.036165997f + arg2[12] * 0.2143179f;
            fVar2 = arg3[32] * -0.07411824 + arg3[30] * 0.036165997f + arg3[12] * 0.2143179f;
            fVar15 = arg2[29] * fVar2 + arg3[29] * fVar8 + fVar15;
            arg1[5] = fVar15;
            arg1[29] = fVar2 * arg2[5] + fVar8 * arg3[5] + arg1[29];
            fVar2 = arg3[5] * arg2[29] + arg3[29] * arg2[5];
            fVar25 = fVar2 * 0.2143179f + fVar25;
            fVar33 = fVar2 * 0.036165997f + fVar33;
            fVar10 = fVar2 * -0.07411824 + fVar10;
            arg1[12] = fVar25;
            arg1[30] = fVar33;
            arg1[32] = fVar10;
            fVar2 = arg2[27] * 0.11436693f + arg2[9] * -0.044827804;
            fVar8 = arg3[27] * 0.11436693f + arg3[9] * -0.044827804;
            fVar15 = arg2[32] * fVar8 + arg3[32] * fVar2 + fVar15;
            arg1[5] = fVar15;
            fVar10 = fVar8 * arg2[5] + fVar2 * arg3[5] + fVar10;
            arg1[32] = fVar10;
            fVar2 = arg3[5] * arg2[32] + arg3[32] * arg2[5];
            fVar14 = fVar2 * -0.044827804 + fVar14;
            fVar9 = fVar2 * 0.11436693f + fVar9;
            arg1[9] = fVar14;
            arg1[27] = fVar9;
            fVar2 = arg2[25] * 0.13288237f + (arg2[9] * -0.15528807 - arg2[27] * 0.13866253f);
            fVar8 = arg3[25] * 0.13288237f + (arg3[9] * -0.15528807 - arg3[27] * 0.13866253f);
            arg1[5] = arg2[34] * fVar8 + arg3[34] * fVar2 + fVar15;
            arg1[34] = fVar8 * arg2[5] + fVar2 * arg3[5] + arg1[34];
            fVar2 = arg3[5] * arg2[34] + arg3[34] * arg2[5];
            fVar14 = fVar2 * -0.15528807 + fVar14;
            fVar9 = fVar9 - fVar2 * 0.13866253f;
            fVar6 = fVar2 * 0.13288237f + fVar6;
            arg1[9] = fVar14;
            arg1[27] = fVar9;
            arg1[25] = fVar6;
            fVar5 = (arg3[20] * 0.24179555f + *arg3 * 0.2820948f) * arg2[6] +
                    (arg2[20] * 0.24179555f + *arg2 * 0.2820948f) * arg3[6] + fVar5;
            arg1[6] = fVar5;
            fVar2 = arg3[6] * arg2[6];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * 0.18022376f + fVar5;
            fVar13 = fVar2 * 0.24179555f + fVar13;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            fVar21 = (arg3[22] * 0.18022375f + arg3[20] * -0.16119702 + arg3[8] * 0.15607835f + *arg3 * 0.2820948f +
                      arg3[6] * 0.090111874f) *
                         arg2[7] +
                     (arg2[22] * 0.18022375f + arg2[20] * -0.16119702 + arg2[8] * 0.15607835f + *arg2 * 0.2820948f +
                      arg2[6] * 0.090111874f) *
                         arg3[7] +
                     fVar21;
            arg1[7] = fVar21;
            fVar2 = arg3[7] * arg2[7];
            fVar5 = fVar2 * 0.090111874f + fVar5;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar26 = fVar2 * 0.15607835f + fVar26;
            fVar13 = fVar2 * -0.16119702 + fVar13;
            fVar30 = fVar2 * 0.18022375f + fVar30;
            arg1[6] = fVar5;
            *arg1 = fVar4;
            arg1[8] = fVar26;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            fVar2 = arg2[29] * -0.08300497 + arg2[27] * 0.17931122f + arg2[11] * 0.11516472f + arg2[1] * 0.1846744f +
                    arg2[9] * 0.148677;
            fVar8 = arg3[29] * -0.08300497 + arg3[27] * 0.17931122f + arg3[11] * 0.11516472f + arg3[1] * 0.1846744f +
                    arg3[9] * 0.148677;
            fVar21 = arg2[10] * fVar8 + arg3[10] * fVar2 + fVar21;
            arg1[7] = fVar21;
            arg1[10] = fVar8 * arg2[7] + fVar2 * arg3[7] + arg1[10];
            fVar2 = arg3[7] * arg2[10] + arg3[10] * arg2[7];
            fVar14 = fVar2 * 0.148677 + fVar14;
            arg1[9] = fVar14;
            arg1[1] = fVar2 * 0.1846744f + arg1[1];
            arg1[11] = fVar2 * 0.11516472f + arg1[11];
            fVar9 = fVar2 * 0.17931122f + fVar9;
            arg1[27] = fVar9;
            arg1[29] = fVar2 * -0.08300497 + arg1[29];
            fVar2 = arg2[32] * 0.17361735f + arg2[30] * -0.16943318 + arg2[14] * 0.11516472f + arg2[2] * 0.23359668f +
                    arg2[12] * 0.059470803f;
            fVar8 = arg3[32] * 0.17361735f + arg3[30] * -0.16943318 + arg3[14] * 0.11516472f + arg3[2] * 0.23359668f +
                    arg3[12] * 0.059470803f;
            fVar21 = arg2[13] * fVar8 + arg3[13] * fVar2 + fVar21;
            arg1[7] = fVar21;
            fVar32 = fVar8 * arg2[7] + fVar2 * arg3[7] + fVar32;
            arg1[13] = fVar32;
            fVar2 = arg3[7] * arg2[13] + arg3[13] * arg2[7];
            fVar25 = fVar2 * 0.059470803f + fVar25;
            fVar29 = fVar2 * 0.23359668f + fVar29;
            fVar28 = fVar2 * 0.11516472f + fVar28;
            fVar33 = fVar2 * -0.16943318 + fVar33;
            fVar10 = fVar2 * 0.17361735f + fVar10;
            arg1[12] = fVar25;
            arg1[2] = fVar29;
            arg1[14] = fVar28;
            arg1[30] = fVar33;
            arg1[32] = fVar10;
            fVar2 = arg2[33] * 0.17931122f + arg2[31] * -0.08300497 + arg2[15] * 0.148677 + arg2[3] * 0.1846744f;
            fVar8 = arg3[33] * 0.17931122f + arg3[31] * -0.08300497 + arg3[15] * 0.148677 + arg3[3] * 0.1846744f;
            fVar21 = arg2[14] * fVar8 + arg3[14] * fVar2 + fVar21;
            arg1[7] = fVar21;
            fVar28 = fVar8 * arg2[7] + fVar2 * arg3[7] + fVar28;
            arg1[14] = fVar28;
            fVar2 = arg3[7] * arg2[14] + arg3[14] * arg2[7];
            fVar3 = fVar2 * 0.1846744f + fVar3;
            fVar22 = fVar2 * 0.148677 + fVar22;
            fVar12 = fVar2 * -0.08300497 + fVar12;
            fVar17 = fVar2 * 0.17931122f + fVar17;
            arg1[3] = fVar3;
            arg1[15] = fVar22;
            arg1[31] = fVar12;
            arg1[33] = fVar17;
            fVar8 = arg2[18] * 0.13272539f + arg2[4] * 0.16858388f + arg2[16] * 0.14046335f;
            fVar2 = arg3[18] * 0.13272539f + arg3[4] * 0.16858388f + arg3[16] * 0.14046335f;
            fVar21 = arg2[17] * fVar2 + arg3[17] * fVar8 + fVar21;
            arg1[7] = fVar21;
            arg1[17] = fVar2 * arg2[7] + fVar8 * arg3[7] + arg1[17];
            fVar2 = arg3[7] * arg2[17] + arg3[17] * arg2[7];
            arg1[16] = fVar2 * 0.14046335f + arg1[16];
            arg1[4] = fVar2 * 0.16858388f + arg1[4];
            arg1[18] = fVar2 * 0.13272539f + arg1[18];
            fVar2 = arg2[22] * 0.09029786f + arg2[6] * 0.22072811f + arg2[20] * 0.04486937f + arg2[8] * -0.06371872;
            fVar8 = arg3[22] * 0.09029786f + arg3[6] * 0.22072811f + arg3[20] * 0.04486937f + arg3[8] * -0.06371872;
            fVar21 = arg2[21] * fVar8 + arg3[21] * fVar2 + fVar21;
            arg1[7] = fVar21;
            arg1[21] = fVar8 * arg2[7] + fVar2 * arg3[7] + fVar18;
            fVar2 = arg3[7] * arg2[21] + arg3[21] * arg2[7];
            fVar26 = fVar2 * -0.06371872 + fVar26;
            fVar13 = fVar2 * 0.04486937f + fVar13;
            fVar5 = fVar2 * 0.22072811f + fVar5;
            fVar30 = fVar2 * 0.09029786f + fVar30;
            arg1[8] = fVar26;
            arg1[20] = fVar13;
            arg1[6] = fVar5;
            arg1[22] = fVar30;
            fVar8 = arg2[24] * 0.14046335f + arg2[22] * 0.13272539f + arg2[8] * 0.16858388f;
            fVar2 = arg3[24] * 0.14046335f + arg3[22] * 0.13272539f + arg3[8] * 0.16858388f;
            fVar21 = arg2[23] * fVar2 + arg3[23] * fVar8 + fVar21;
            arg1[7] = fVar21;
            arg1[23] = fVar2 * arg2[7] + fVar8 * arg3[7] + arg1[23];
            fVar2 = arg3[7] * arg2[23] + arg3[23] * arg2[7];
            fVar26 = fVar2 * 0.16858388f + fVar26;
            fVar30 = fVar2 * 0.13272539f + fVar30;
            fVar23 = fVar2 * 0.14046335f + fVar23;
            arg1[8] = fVar26;
            arg1[22] = fVar30;
            arg1[24] = fVar23;
            fVar2 = arg2[27] * 0.13866253f + arg2[25] * 0.13288237f + arg2[9] * 0.15528807f;
            fVar8 = arg3[27] * 0.13866253f + arg3[25] * 0.13288237f + arg3[9] * 0.15528807f;
            fVar21 = arg2[26] * fVar8 + arg3[26] * fVar2 + fVar21;
            arg1[7] = fVar21;
            arg1[26] = fVar8 * arg2[7] + fVar2 * arg3[7] + arg1[26];
            fVar2 = arg3[7] * arg2[26] + arg3[26] * arg2[7];
            fVar14 = fVar2 * 0.15528807f + fVar14;
            fVar6 = fVar2 * 0.13288237f + fVar6;
            fVar9 = fVar2 * 0.13866253f + fVar9;
            arg1[9] = fVar14;
            arg1[25] = fVar6;
            arg1[27] = fVar9;
            fVar8 = arg2[29] * 0.07411824f + arg2[9] * -0.044827804 + arg2[11] * 0.17361735f + arg2[27] * 0.11436693f;
            fVar2 = arg3[29] * 0.07411824f + arg3[9] * -0.044827804 + arg3[11] * 0.17361735f + arg3[27] * 0.11436693f;
            fVar21 = arg2[28] * fVar2 + arg3[28] * fVar8 + fVar21;
            arg1[7] = fVar21;
            arg1[28] = fVar2 * arg2[7] + fVar8 * arg3[7] + arg1[28];
            fVar2 = arg3[7] * arg2[28] + arg3[28] * arg2[7];
            fVar9 = fVar2 * 0.11436693f + fVar9;
            arg1[27] = fVar9;
            arg1[11] = fVar2 * 0.17361735f + arg1[11];
            fVar14 = fVar2 * -0.044827804 + fVar14;
            arg1[9] = fVar14;
            arg1[29] = fVar2 * 0.07411824f + arg1[29];
            fVar2 = arg2[32] * 0.07411824f + arg2[12] * 0.2143179f + arg2[30] * 0.036165997f;
            fVar8 = arg3[32] * 0.07411824f + arg3[12] * 0.2143179f + arg3[30] * 0.036165997f;
            fVar21 = arg2[31] * fVar8 + arg3[31] * fVar2 + fVar21;
            arg1[7] = fVar21;
            fVar12 = fVar8 * arg2[7] + fVar2 * arg3[7] + fVar12;
            arg1[31] = fVar12;
            fVar2 = arg3[7] * arg2[31] + arg3[31] * arg2[7];
            fVar33 = fVar2 * 0.036165997f + fVar33;
            fVar25 = fVar2 * 0.2143179f + fVar25;
            fVar10 = fVar2 * 0.07411824f + fVar10;
            arg1[30] = fVar33;
            arg1[12] = fVar25;
            arg1[32] = fVar10;
            fVar8 = arg2[33] * 0.11436693f + arg2[15] * -0.044827804;
            fVar2 = arg3[33] * 0.11436693f + arg3[15] * -0.044827804;
            fVar21 = arg2[32] * fVar2 + arg3[32] * fVar8 + fVar21;
            arg1[7] = fVar21;
            fVar10 = fVar2 * arg2[7] + fVar8 * arg3[7] + fVar10;
            arg1[32] = fVar10;
            fVar2 = arg3[7] * arg2[32] + arg3[32] * arg2[7];
            fVar22 = fVar2 * -0.044827804 + fVar22;
            fVar17 = fVar2 * 0.11436693f + fVar17;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            fVar8 = arg2[35] * 0.13288237f + arg2[33] * 0.13866253f + arg2[15] * 0.15528807f;
            fVar2 = arg3[35] * 0.13288237f + arg3[33] * 0.13866253f + arg3[15] * 0.15528807f;
            arg1[7] = arg2[34] * fVar2 + arg3[34] * fVar8 + fVar21;
            arg1[34] = fVar2 * arg2[7] + fVar8 * arg3[7] + arg1[34];
            fVar2 = arg3[7] * arg2[34] + arg3[34] * arg2[7];
            fVar22 = fVar2 * 0.15528807f + fVar22;
            fVar17 = fVar2 * 0.13866253f + fVar17;
            fVar7 = fVar2 * 0.13288237f + fVar7;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            arg1[35] = fVar7;
            fVar26 = (arg3[24] * 0.23841362f + arg3[20] * 0.040299255f + arg3[6] * -0.18022375 + *arg3 * 0.2820948f) *
                         arg2[8] +
                     (arg2[24] * 0.23841362f + arg2[20] * 0.040299255f + arg2[6] * -0.18022375 + *arg2 * 0.2820948f) *
                         arg3[8] +
                     fVar26;
            arg1[8] = fVar26;
            fVar2 = arg3[8] * arg2[8];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * -0.18022375 + fVar5;
            fVar13 = fVar2 * 0.040299255f + fVar13;
            fVar23 = fVar2 * 0.23841362f + fVar23;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            fVar2 = arg2[29] * 0.016943317f + arg2[25] * 0.245532 + arg2[11] * -0.094031595 + arg2[1] * 0.22617902f;
            fVar8 = arg3[29] * 0.016943317f + arg3[25] * 0.245532 + arg3[11] * -0.094031595 + arg3[1] * 0.22617902f;
            fVar26 = arg2[9] * fVar8 + arg3[9] * fVar2 + fVar26;
            arg1[8] = fVar26;
            fVar14 = fVar8 * arg2[8] + fVar2 * arg3[8] + fVar14;
            arg1[9] = fVar14;
            fVar2 = arg3[8] * arg2[9] + arg3[9] * arg2[8];
            arg1[1] = fVar2 * 0.22617902f + arg1[1];
            arg1[11] = fVar2 * -0.094031595 + arg1[11];
            fVar6 = fVar2 * 0.245532 + fVar6;
            arg1[25] = fVar6;
            arg1[29] = fVar2 * 0.016943317f + arg1[29];
            fVar2 = arg2[34] * 0.19018827f + arg2[30] * 0.053579476f + arg2[12] * -0.18806319 + arg2[2] * 0.1846744f;
            fVar8 = arg3[34] * 0.19018827f + arg3[30] * 0.053579476f + arg3[12] * -0.18806319 + arg3[2] * 0.1846744f;
            fVar26 = arg2[14] * fVar8 + arg3[14] * fVar2 + fVar26;
            arg1[8] = fVar26;
            fVar28 = fVar8 * arg2[8] + fVar2 * arg3[8] + fVar28;
            arg1[14] = fVar28;
            fVar2 = arg3[8] * arg2[14] + arg3[14] * arg2[8];
            fVar29 = fVar2 * 0.1846744f + fVar29;
            fVar25 = fVar2 * -0.18806319 + fVar25;
            fVar33 = fVar2 * 0.053579476f + fVar33;
            arg1[2] = fVar29;
            arg1[12] = fVar25;
            arg1[30] = fVar33;
            arg1[34] = fVar2 * 0.19018827f + arg1[34];
            fVar2 = arg2[35] * 0.245532 + arg2[31] * 0.016943317f + arg2[3] * 0.22617902f + arg2[13] * -0.094031595;
            fVar8 = arg3[35] * 0.245532 + arg3[31] * 0.016943317f + arg3[3] * 0.22617902f + arg3[13] * -0.094031595;
            fVar26 = arg2[15] * fVar8 + arg3[15] * fVar2 + fVar26;
            arg1[8] = fVar26;
            fVar22 = fVar8 * arg2[8] + fVar2 * arg3[8] + fVar22;
            arg1[15] = fVar22;
            fVar2 = arg3[8] * arg2[15] + arg3[15] * arg2[8];
            fVar32 = fVar2 * -0.094031595 + fVar32;
            fVar3 = fVar2 * 0.22617902f + fVar3;
            fVar12 = fVar2 * 0.016943317f + fVar12;
            fVar7 = fVar2 * 0.245532 + fVar7;
            arg1[13] = fVar32;
            arg1[3] = fVar3;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar2 = arg2[24] * -0.07508082 + (arg2[6] * 0.15607835f - arg2[20] * 0.19036461f);
            fVar8 = arg3[24] * -0.07508082 + (arg3[6] * 0.15607835f - arg3[20] * 0.19036461f);
            fVar26 = arg2[22] * fVar8 + arg3[22] * fVar2 + fVar26;
            arg1[8] = fVar26;
            fVar30 = fVar8 * arg2[8] + fVar2 * arg3[8] + fVar30;
            arg1[22] = fVar30;
            fVar2 = arg3[8] * arg2[22] + arg3[22] * arg2[8];
            fVar5 = fVar2 * 0.15607835f + fVar5;
            fVar13 = fVar13 - fVar2 * 0.19036461f;
            fVar23 = fVar2 * -0.07508082 + fVar23;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            fVar2 = arg2[28] * -0.09704356 + arg2[10] * 0.19018827f;
            fVar8 = arg3[28] * -0.09704356 + arg3[10] * 0.19018827f;
            fVar26 = arg2[26] * fVar8 + arg3[26] * fVar2 + fVar26;
            arg1[8] = fVar26;
            arg1[26] = fVar8 * arg2[8] + fVar2 * arg3[8] + arg1[26];
            fVar2 = arg3[8] * arg2[26] + arg3[26] * arg2[8];
            arg1[10] = fVar2 * 0.19018827f + arg1[10];
            arg1[28] = fVar2 * -0.09704356 + arg1[28];
            fVar2 = arg2[29] * -0.121034585 + arg2[11] * 0.14175797f + arg2[25] * -0.062641345;
            fVar8 = arg3[29] * -0.121034585 + arg3[11] * 0.14175797f + arg3[25] * -0.062641345;
            fVar26 = arg2[27] * fVar8 + arg3[27] * fVar2 + fVar26;
            arg1[8] = fVar26;
            fVar9 = fVar8 * arg2[8] + fVar2 * arg3[8] + fVar9;
            arg1[27] = fVar9;
            fVar2 = arg3[8] * arg2[27] + arg3[27] * arg2[8];
            fVar6 = fVar2 * -0.062641345 + fVar6;
            arg1[25] = fVar6;
            arg1[11] = fVar2 * 0.14175797f + arg1[11];
            arg1[29] = fVar2 * -0.121034585 + arg1[29];
            fVar2 = arg2[34] * -0.09704356 + (arg2[12] * 0.14175797f - arg2[30] * 0.19137248f);
            fVar8 = arg3[34] * -0.09704356 + (arg3[12] * 0.14175797f - arg3[30] * 0.19137248f);
            fVar26 = arg2[32] * fVar8 + arg3[32] * fVar2 + fVar26;
            arg1[8] = fVar26;
            fVar10 = fVar8 * arg2[8] + fVar2 * arg3[8] + fVar10;
            arg1[32] = fVar10;
            fVar2 = arg3[8] * arg2[32] + arg3[32] * arg2[8];
            fVar33 = fVar33 - fVar2 * 0.19137248f;
            fVar25 = fVar2 * 0.14175797f + fVar25;
            arg1[30] = fVar33;
            arg1[12] = fVar25;
            arg1[34] = fVar2 * -0.09704356 + arg1[34];
            fVar2 = arg2[35] * -0.062641345 + arg2[31] * -0.121034585 + arg2[13] * 0.14175797f;
            fVar8 = arg3[35] * -0.062641345 + arg3[31] * -0.121034585 + arg3[13] * 0.14175797f;
            fVar26 = arg2[33] * fVar8 + arg3[33] * fVar2 + fVar26;
            arg1[8] = fVar26;
            fVar17 = fVar8 * arg2[8] + fVar2 * arg3[8] + fVar17;
            arg1[33] = fVar17;
            fVar2 = arg3[8] * arg2[33] + arg3[33] * arg2[8];
            fVar32 = fVar2 * 0.14175797f + fVar32;
            fVar12 = fVar2 * -0.121034585 + fVar12;
            fVar7 = fVar2 * -0.062641345 + fVar7;
            arg1[13] = fVar32;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar14 = (arg3[20] * 0.07693494f + *arg3 * 0.2820948f + arg3[6] * -0.21026105) * arg2[9] +
                     (arg2[20] * 0.07693494f + *arg2 * 0.2820948f + arg2[6] * -0.21026105) * arg3[9] + fVar14;
            arg1[9] = fVar14;
            fVar2 = arg3[9] * arg2[9];
            fVar5 = fVar2 * -0.21026105 + fVar5;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar13 = fVar2 * 0.07693494f + fVar13;
            arg1[6] = fVar5;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            fVar2 = arg2[30] * 0.09814013f + (arg2[2] * 0.1628675f - arg2[12] * 0.20355073f);
            fVar8 = arg3[30] * 0.09814013f + (arg3[2] * 0.1628675f - arg3[12] * 0.20355073f);
            fVar14 = arg2[17] * fVar8 + arg3[17] * fVar2 + fVar14;
            arg1[9] = fVar14;
            arg1[17] = fVar8 * arg2[9] + fVar2 * arg3[9] + arg1[17];
            fVar2 = arg3[9] * arg2[17] + arg3[17] * arg2[9];
            fVar29 = fVar2 * 0.1628675f + fVar29;
            fVar25 = fVar25 - fVar2 * 0.20355073f;
            fVar33 = fVar2 * 0.09814013f + fVar33;
            arg1[2] = fVar29;
            arg1[12] = fVar25;
            arg1[30] = fVar33;
            fVar2 = arg2[35] * 0.09814013f + arg2[31] * -0.10158469 + arg2[13] * 0.13325523f + arg2[3] * -0.043528173;
            fVar8 = arg3[35] * 0.09814013f + arg3[31] * -0.10158469 + arg3[13] * 0.13325523f + arg3[3] * -0.043528173;
            fVar14 = arg2[18] * fVar8 + arg3[18] * fVar2 + fVar14;
            arg1[9] = fVar14;
            arg1[18] = fVar8 * arg2[9] + fVar2 * arg3[9] + arg1[18];
            fVar2 = arg3[9] * arg2[18] + arg3[18] * arg2[9];
            fVar3 = fVar2 * -0.043528173 + fVar3;
            fVar32 = fVar2 * 0.13325523f + fVar32;
            fVar12 = fVar2 * -0.10158469 + fVar12;
            fVar7 = fVar2 * 0.09814013f + fVar7;
            arg1[3] = fVar3;
            arg1[13] = fVar32;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar8 = arg2[34] * 0.1316688f + arg2[32] * 0.12669836f + arg2[14] * -0.09932259;
            fVar2 = arg3[34] * 0.1316688f + arg3[32] * 0.12669836f + arg3[14] * -0.09932259;
            fVar14 = arg2[19] * fVar2 + arg3[19] * fVar8 + fVar14;
            arg1[9] = fVar14;
            arg1[19] = fVar2 * arg2[9] + fVar8 * arg3[9] + arg1[19];
            fVar2 = arg3[9] * arg2[19] + arg3[19] * arg2[9];
            fVar28 = fVar2 * -0.09932259 + fVar28;
            fVar10 = fVar2 * 0.12669836f + fVar10;
            arg1[14] = fVar28;
            arg1[32] = fVar10;
            arg1[34] = fVar2 * 0.1316688f + arg1[34];
            fVar8 = arg2[29] * -0.10158469 + arg2[25] * -0.09814013 + arg2[11] * 0.13325523f + arg2[1] * -0.043528173;
            fVar2 = arg3[29] * -0.10158469 + arg3[25] * -0.09814013 + arg3[11] * 0.13325523f + arg3[1] * -0.043528173;
            fVar14 = arg2[22] * fVar2 + arg3[22] * fVar8 + fVar14;
            arg1[9] = fVar14;
            fVar30 = fVar2 * arg2[9] + fVar8 * arg3[9] + fVar30;
            arg1[22] = fVar30;
            fVar2 = arg3[9] * arg2[22] + arg3[22] * arg2[9];
            arg1[1] = fVar2 * -0.043528173 + arg1[1];
            arg1[11] = fVar2 * 0.13325523f + arg1[11];
            fVar6 = fVar2 * -0.09814013 + fVar6;
            arg1[25] = fVar6;
            arg1[29] = fVar2 * -0.10158469 + arg1[29];
            fVar2 = arg2[6] * 0.12679218f - arg2[20] * 0.19628026f;
            fVar8 = arg3[6] * 0.12679218f - arg3[20] * 0.19628026f;
            fVar14 = arg2[27] * fVar8 + arg3[27] * fVar2 + fVar14;
            arg1[9] = fVar14;
            fVar9 = fVar8 * arg2[9] + fVar2 * arg3[9] + fVar9;
            arg1[27] = fVar9;
            fVar2 = arg3[9] * arg2[27] + arg3[27] * arg2[9];
            fVar5 = fVar2 * 0.12679218f + fVar5;
            fVar13 = fVar13 - fVar2 * 0.19628026f;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            fVar2 = (arg3[24] * -0.15171775 + arg3[20] * -0.17951487 + *arg3 * 0.2820948f) * arg2[10] +
                    (arg2[24] * -0.15171775 + arg2[20] * -0.17951487 + *arg2 * 0.2820948f) * arg3[10] + arg1[10];
            arg1[10] = fVar2;
            fVar8 = arg3[10] * arg2[10];
            fVar4 = fVar8 * 0.2820948f + fVar4;
            fVar13 = fVar8 * -0.17951487 + fVar13;
            fVar23 = fVar8 * -0.15171775 + fVar23;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            fVar8 = arg2[32] * -0.077413976 + arg2[14] * 0.15171775f;
            fVar18 = arg3[32] * -0.077413976 + arg3[14] * 0.15171775f;
            fVar2 = arg2[16] * fVar18 + arg3[16] * fVar8 + fVar2;
            arg1[10] = fVar2;
            arg1[16] = fVar18 * arg2[10] + fVar8 * arg3[10] + arg1[16];
            fVar8 = arg3[10] * arg2[16] + arg3[16] * arg2[10];
            fVar28 = fVar8 * 0.15171775f + fVar28;
            fVar10 = fVar8 * -0.077413976 + fVar10;
            arg1[14] = fVar28;
            arg1[32] = fVar10;
            fVar8 = arg2[35] * -0.14991152 + arg2[31] * -0.113793656 + arg2[3] * 0.19947115f + arg2[13] * 0.06785024f;
            fVar18 = arg3[35] * -0.14991152 + arg3[31] * -0.113793656 + arg3[3] * 0.19947115f + arg3[13] * 0.06785024f;
            fVar2 = arg2[17] * fVar18 + arg3[17] * fVar8 + fVar2;
            arg1[10] = fVar2;
            arg1[17] = fVar18 * arg2[10] + fVar8 * arg3[10] + arg1[17];
            fVar8 = arg3[10] * arg2[17] + arg3[17] * arg2[10];
            fVar32 = fVar8 * 0.06785024f + fVar32;
            fVar3 = fVar8 * 0.19947115f + fVar3;
            fVar12 = fVar8 * -0.113793656 + fVar12;
            fVar7 = fVar8 * -0.14991152 + fVar7;
            arg1[13] = fVar32;
            arg1[3] = fVar3;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar18 = arg2[34] * -0.10135869 + arg2[30] * -0.17132746 + arg2[2] * 0.21324362f + arg2[12] * -0.04441841;
            fVar8 = arg3[34] * -0.10135869 + arg3[30] * -0.17132746 + arg3[2] * 0.21324362f + arg3[12] * -0.04441841;
            fVar2 = arg2[18] * fVar8 + arg3[18] * fVar18 + fVar2;
            arg1[10] = fVar2;
            arg1[18] = fVar8 * arg2[10] + fVar18 * arg3[10] + arg1[18];
            fVar8 = arg3[10] * arg2[18] + arg3[18] * arg2[10];
            fVar25 = fVar8 * -0.04441841 + fVar25;
            fVar29 = fVar8 * 0.21324362f + fVar29;
            fVar33 = fVar8 * -0.17132746 + fVar33;
            arg1[12] = fVar25;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            arg1[34] = fVar8 * -0.10135869 + arg1[34];
            fVar8 = arg2[33] * -0.025339672 + arg2[31] * 0.09774991f + arg2[13] * 0.10257992f + arg2[15] * 0.09932259f +
                    arg2[3] * -0.075393006;
            fVar18 = arg3[33] * -0.025339672 + arg3[31] * 0.09774991f + arg3[13] * 0.10257992f +
                     arg3[15] * 0.09932259f + arg3[3] * -0.075393006;
            fVar2 = arg2[19] * fVar18 + arg3[19] * fVar8 + fVar2;
            arg1[10] = fVar2;
            arg1[19] = fVar18 * arg2[10] + fVar8 * arg3[10] + arg1[19];
            fVar8 = arg3[10] * arg2[19] + arg3[19] * arg2[10];
            fVar3 = fVar8 * -0.075393006 + fVar3;
            fVar22 = fVar8 * 0.09932259f + fVar22;
            fVar32 = fVar8 * 0.10257992f + fVar32;
            fVar12 = fVar8 * 0.09774991f + fVar12;
            fVar17 = fVar8 * -0.025339672 + fVar17;
            arg1[3] = fVar3;
            arg1[15] = fVar22;
            arg1[13] = fVar32;
            arg1[31] = fVar12;
            arg1[33] = fVar17;
            fVar8 = arg2[29] * 0.09774991f + arg2[27] * 0.025339672f + arg2[9] * -0.09932259 + arg2[1] * -0.075393006 +
                    arg2[11] * 0.10257992f;
            fVar18 = arg3[29] * 0.09774991f + arg3[27] * 0.025339672f + arg3[9] * -0.09932259 + arg3[1] * -0.075393006 +
                     arg3[11] * 0.10257992f;
            fVar2 = arg2[21] * fVar18 + arg3[21] * fVar8 + fVar2;
            arg1[10] = fVar2;
            arg1[21] = fVar18 * arg2[10] + fVar8 * arg3[10] + arg1[21];
            fVar8 = arg3[10] * arg2[21] + arg3[21] * arg2[10];
            arg1[11] = fVar8 * 0.10257992f + arg1[11];
            arg1[1] = fVar8 * -0.075393006 + arg1[1];
            fVar14 = fVar8 * -0.09932259 + fVar14;
            fVar9 = fVar8 * 0.025339672f + fVar9;
            arg1[9] = fVar14;
            arg1[27] = fVar9;
            arg1[29] = fVar8 * 0.09774991f + arg1[29];
            fVar18 = arg2[29] * 0.113793656f + arg2[25] * 0.14991152f + arg2[1] * -0.19947115 + arg2[11] * -0.06785024;
            fVar8 = arg3[29] * 0.113793656f + arg3[25] * 0.14991152f + arg3[1] * -0.19947115 + arg3[11] * -0.06785024;
            fVar2 = arg2[23] * fVar8 + arg3[23] * fVar18 + fVar2;
            arg1[10] = fVar2;
            arg1[23] = fVar8 * arg2[10] + fVar18 * arg3[10] + arg1[23];
            fVar8 = arg3[10] * arg2[23] + arg3[23] * arg2[10];
            arg1[11] = fVar8 * -0.06785024 + arg1[11];
            arg1[1] = fVar8 * -0.19947115 + arg1[1];
            fVar6 = fVar8 * 0.14991152f + fVar6;
            arg1[25] = fVar6;
            arg1[29] = fVar8 * 0.113793656f + arg1[29];
            fVar8 = arg2[24] * 0.077413976f + (arg2[6] * 0.19018827f - arg2[20] * 0.06542675f);
            fVar18 = arg3[24] * 0.077413976f + (arg3[6] * 0.19018827f - arg3[20] * 0.06542675f);
            arg1[10] = arg2[28] * fVar18 + arg3[28] * fVar8 + fVar2;
            arg1[28] = fVar18 * arg2[10] + fVar8 * arg3[10] + arg1[28];
            fVar2 = arg3[10] * arg2[28] + arg3[28] * arg2[10];
            fVar5 = fVar2 * 0.19018827f + fVar5;
            fVar13 = fVar13 - fVar2 * 0.06542675f;
            fVar23 = fVar2 * 0.077413976f + fVar23;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            fVar8 = (arg3[22] * -0.114687845 + arg3[20] * 0.02564498f + arg3[8] * -0.14567313 + arg3[6] * 0.12615663f +
                     *arg3 * 0.2820948f) *
                        arg2[11] +
                    (arg2[22] * -0.114687845 + arg2[20] * 0.02564498f + arg2[8] * -0.14567313 + arg2[6] * 0.12615663f +
                     *arg2 * 0.2820948f) *
                        arg3[11] +
                    arg1[11];
            arg1[11] = fVar8;
            fVar2 = arg3[11] * arg2[11];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * 0.12615663f + fVar5;
            fVar26 = fVar2 * -0.14567313 + fVar26;
            fVar13 = fVar2 * 0.02564498f + fVar13;
            fVar30 = fVar2 * -0.114687845 + fVar30;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[8] = fVar26;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            fVar2 = arg2[35] * 0.13408494f + arg2[33] * 0.119929224f + arg2[15] * -0.117520064;
            fVar18 = arg3[35] * 0.13408494f + arg3[33] * 0.119929224f + arg3[15] * -0.117520064;
            fVar8 = arg2[16] * fVar18 + arg3[16] * fVar2 + fVar8;
            arg1[11] = fVar8;
            arg1[16] = fVar18 * arg2[11] + fVar2 * arg3[11] + arg1[16];
            fVar2 = arg3[11] * arg2[16] + arg3[16] * arg2[11];
            fVar22 = fVar2 * -0.117520064 + fVar22;
            fVar17 = fVar2 * 0.119929224f + fVar17;
            fVar7 = fVar2 * 0.13408494f + fVar7;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            arg1[35] = fVar7;
            fVar2 = arg2[33] * -0.101990215 + arg2[31] * 0.075189956f + arg2[15] * -0.13325523 +
                    arg2[13] * 0.114687845f + arg2[3] * 0.16858388f;
            fVar18 = arg3[33] * -0.101990215 + arg3[31] * 0.075189956f + arg3[15] * -0.13325523 +
                     arg3[13] * 0.114687845f + arg3[3] * 0.16858388f;
            fVar8 = arg2[18] * fVar18 + arg3[18] * fVar2 + fVar8;
            arg1[11] = fVar8;
            arg1[18] = fVar18 * arg2[11] + fVar2 * arg3[11] + arg1[18];
            fVar2 = arg3[11] * arg2[18] + arg3[18] * arg2[11];
            fVar3 = fVar2 * 0.16858388f + fVar3;
            fVar32 = fVar2 * 0.114687845f + fVar32;
            fVar22 = fVar2 * -0.13325523 + fVar22;
            fVar12 = fVar2 * 0.075189956f + fVar12;
            fVar17 = fVar2 * -0.101990215 + fVar17;
            arg1[3] = fVar3;
            arg1[13] = fVar32;
            arg1[15] = fVar22;
            arg1[31] = fVar12;
            arg1[33] = fVar17;
            fVar2 = arg2[32] * -0.1046828 + arg2[30] * 0.009577496f + arg2[12] * 0.09932259f + arg2[14] * -0.10257992 +
                    arg2[2] * 0.23841362f;
            fVar18 = arg3[32] * -0.1046828 + arg3[30] * 0.009577496f + arg3[12] * 0.09932259f + arg3[14] * -0.10257992 +
                     arg3[2] * 0.23841362f;
            fVar8 = arg2[19] * fVar18 + arg3[19] * fVar2 + fVar8;
            arg1[11] = fVar8;
            arg1[19] = fVar18 * arg2[11] + fVar2 * arg3[11] + arg1[19];
            fVar2 = arg3[11] * arg2[19] + arg3[19] * arg2[11];
            fVar29 = fVar2 * 0.23841362f + fVar29;
            fVar28 = fVar2 * -0.10257992 + fVar28;
            fVar25 = fVar2 * 0.09932259f + fVar25;
            fVar33 = fVar2 * 0.009577496f + fVar33;
            fVar10 = fVar2 * -0.1046828 + fVar10;
            arg1[2] = fVar29;
            arg1[14] = fVar28;
            arg1[12] = fVar25;
            arg1[30] = fVar33;
            arg1[32] = fVar10;
            fVar18 = arg2[27] * -0.119929224 + arg2[25] * -0.13408494 + arg2[9] * 0.117520064f;
            fVar2 = arg3[27] * -0.119929224 + arg3[25] * -0.13408494 + arg3[9] * 0.117520064f;
            fVar8 = arg2[24] * fVar2 + arg3[24] * fVar18 + fVar8;
            arg1[11] = fVar8;
            fVar23 = fVar2 * arg2[11] + fVar18 * arg3[11] + fVar23;
            arg1[24] = fVar23;
            fVar2 = arg3[11] * arg2[24] + arg3[24] * arg2[11];
            fVar14 = fVar2 * 0.117520064f + fVar14;
            fVar6 = fVar2 * -0.13408494 + fVar6;
            fVar9 = fVar2 * -0.119929224 + fVar9;
            arg1[9] = fVar14;
            arg1[25] = fVar6;
            arg1[27] = fVar9;
            fVar18 = arg2[8] * 0.06562119f + arg2[22] * -0.075189956 + arg2[20] * 0.08601992f + arg2[6] * 0.22731847f;
            fVar2 = arg3[8] * 0.06562119f + arg3[22] * -0.075189956 + arg3[20] * 0.08601992f + arg3[6] * 0.22731847f;
            arg1[11] = arg2[29] * fVar2 + arg3[29] * fVar18 + fVar8;
            arg1[29] = fVar2 * arg2[11] + fVar18 * arg3[11] + arg1[29];
            fVar2 = arg3[11] * arg2[29] + arg3[29] * arg2[11];
            fVar5 = fVar2 * 0.22731847f + fVar5;
            fVar13 = fVar2 * 0.08601992f + fVar13;
            fVar30 = fVar2 * -0.075189956 + fVar30;
            fVar26 = fVar2 * 0.06562119f + fVar26;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            arg1[8] = fVar26;
            fVar25 = (arg3[20] * 0.15386991f + arg3[6] * 0.16820885f + *arg3 * 0.2820948f) * arg2[12] +
                     (arg2[20] * 0.15386991f + arg2[6] * 0.16820885f + *arg2 * 0.2820948f) * arg3[12] + fVar25;
            arg1[12] = fVar25;
            fVar2 = arg3[12] * arg2[12];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * 0.16820885f + fVar5;
            fVar13 = fVar2 * 0.15386991f + fVar13;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            fVar2 = arg2[6] * 0.23961473f + arg2[20] * 0.14837396f;
            fVar8 = arg3[6] * 0.23961473f + arg3[20] * 0.14837396f;
            fVar25 = arg2[30] * fVar8 + arg3[30] * fVar2 + fVar25;
            arg1[12] = fVar25;
            fVar33 = fVar8 * arg2[12] + fVar2 * arg3[12] + fVar33;
            arg1[30] = fVar33;
            fVar2 = arg3[12] * arg2[30] + arg3[30] * arg2[12];
            fVar13 = fVar2 * 0.14837396f + fVar13;
            fVar5 = fVar2 * 0.23961473f + fVar5;
            arg1[20] = fVar13;
            arg1[6] = fVar5;
            fVar32 = (arg3[22] * 0.114687845f + arg3[20] * 0.02564498f + arg3[6] * 0.12615663f + arg3[8] * 0.14567313f +
                      *arg3 * 0.2820948f) *
                         arg2[13] +
                     (arg2[22] * 0.114687845f + arg2[20] * 0.02564498f + arg2[6] * 0.12615663f + arg2[8] * 0.14567313f +
                      *arg2 * 0.2820948f) *
                         arg3[13] +
                     fVar32;
            arg1[13] = fVar32;
            fVar2 = arg3[13] * arg2[13];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar26 = fVar2 * 0.14567313f + fVar26;
            fVar5 = fVar2 * 0.12615663f + fVar5;
            fVar13 = fVar2 * 0.02564498f + fVar13;
            fVar30 = fVar2 * 0.114687845f + fVar30;
            *arg1 = fVar4;
            arg1[8] = fVar26;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            fVar2 = arg2[27] * 0.119929224f + arg2[25] * -0.13408494 + arg2[9] * -0.117520064;
            fVar8 = arg3[27] * 0.119929224f + arg3[25] * -0.13408494 + arg3[9] * -0.117520064;
            fVar32 = arg2[16] * fVar8 + arg3[16] * fVar2 + fVar32;
            arg1[13] = fVar32;
            arg1[16] = fVar8 * arg2[13] + fVar2 * arg3[13] + arg1[16];
            fVar2 = arg3[13] * arg2[16] + arg3[16] * arg2[13];
            arg1[9] = fVar2 * -0.117520064 + fVar14;
            fVar6 = fVar2 * -0.13408494 + fVar6;
            fVar9 = fVar2 * 0.119929224f + fVar9;
            arg1[25] = fVar6;
            arg1[27] = fVar9;
            fVar8 = arg2[32] * 0.1046828f + arg2[30] * 0.009577496f + arg2[14] * 0.10257992f + arg2[12] * 0.09932259f +
                    arg2[2] * 0.23841362f;
            fVar2 = arg3[32] * 0.1046828f + arg3[30] * 0.009577496f + arg3[14] * 0.10257992f + arg3[12] * 0.09932259f +
                    arg3[2] * 0.23841362f;
            fVar32 = arg2[21] * fVar2 + arg3[21] * fVar8 + fVar32;
            arg1[13] = fVar32;
            arg1[21] = fVar2 * arg2[13] + fVar8 * arg3[13] + arg1[21];
            fVar2 = arg3[13] * arg2[21] + arg3[21] * arg2[13];
            fVar29 = fVar2 * 0.23841362f + fVar29;
            fVar25 = fVar2 * 0.09932259f + fVar25;
            fVar28 = fVar2 * 0.10257992f + fVar28;
            fVar33 = fVar2 * 0.009577496f + fVar33;
            fVar10 = fVar2 * 0.1046828f + fVar10;
            arg1[2] = fVar29;
            arg1[12] = fVar25;
            arg1[14] = fVar28;
            arg1[30] = fVar33;
            arg1[32] = fVar10;
            fVar2 = arg2[35] * -0.13408494 + arg2[33] * 0.119929224f + arg2[15] * -0.117520064;
            fVar8 = arg3[35] * -0.13408494 + arg3[33] * 0.119929224f + arg3[15] * -0.117520064;
            fVar32 = arg2[24] * fVar8 + arg3[24] * fVar2 + fVar32;
            arg1[13] = fVar32;
            fVar23 = fVar8 * arg2[13] + fVar2 * arg3[13] + fVar23;
            arg1[24] = fVar23;
            fVar2 = arg3[13] * arg2[24] + arg3[24] * arg2[13];
            fVar22 = fVar2 * -0.117520064 + fVar22;
            fVar17 = fVar2 * 0.119929224f + fVar17;
            fVar7 = fVar2 * -0.13408494 + fVar7;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            arg1[35] = fVar7;
            fVar2 = arg2[8] * -0.06562119 + arg2[20] * 0.08601992f + arg2[22] * 0.075189956f + arg2[6] * 0.22731847f;
            fVar8 = arg3[8] * -0.06562119 + arg3[20] * 0.08601992f + arg3[22] * 0.075189956f + arg3[6] * 0.22731847f;
            fVar32 = arg2[31] * fVar8 + arg3[31] * fVar2 + fVar32;
            arg1[13] = fVar32;
            fVar12 = fVar8 * arg2[13] + fVar2 * arg3[13] + fVar12;
            arg1[31] = fVar12;
            fVar2 = arg3[13] * arg2[31] + arg3[31] * arg2[13];
            fVar5 = fVar2 * 0.22731847f + fVar5;
            fVar30 = fVar2 * 0.075189956f + fVar30;
            fVar13 = fVar2 * 0.08601992f + fVar13;
            fVar26 = fVar2 * -0.06562119 + fVar26;
            arg1[6] = fVar5;
            arg1[22] = fVar30;
            arg1[20] = fVar13;
            arg1[8] = fVar26;
            fVar28 = (arg3[24] * 0.15171775f + arg3[20] * -0.17951487 + *arg3 * 0.2820948f) * arg2[14] +
                     (arg2[24] * 0.15171775f + arg2[20] * -0.17951487 + *arg2 * 0.2820948f) * arg3[14] + fVar28;
            arg1[14] = fVar28;
            fVar2 = arg3[14] * arg2[14];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar13 = fVar2 * -0.17951487 + fVar13;
            fVar23 = fVar2 * 0.15171775f + fVar23;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            fVar8 = arg2[29] * -0.113793656 + arg2[25] * 0.14991152f + arg2[1] * 0.19947115f + arg2[11] * 0.06785024f;
            fVar2 = arg3[29] * -0.113793656 + arg3[25] * 0.14991152f + arg3[1] * 0.19947115f + arg3[11] * 0.06785024f;
            fVar28 = arg2[17] * fVar2 + arg3[17] * fVar8 + fVar28;
            arg1[14] = fVar28;
            arg1[17] = fVar2 * arg2[14] + fVar8 * arg3[14] + arg1[17];
            fVar2 = arg3[14] * arg2[17] + arg3[17] * arg2[14];
            arg1[11] = fVar2 * 0.06785024f + arg1[11];
            arg1[1] = fVar2 * 0.19947115f + arg1[1];
            fVar6 = fVar2 * 0.14991152f + fVar6;
            arg1[25] = fVar6;
            arg1[29] = fVar2 * -0.113793656 + arg1[29];
            fVar2 = arg2[34] * 0.10135869f + arg2[30] * -0.17132746 + arg2[2] * 0.21324362f + arg2[12] * -0.04441841;
            fVar8 = arg3[34] * 0.10135869f + arg3[30] * -0.17132746 + arg3[2] * 0.21324362f + arg3[12] * -0.04441841;
            fVar28 = arg2[22] * fVar8 + arg3[22] * fVar2 + fVar28;
            arg1[14] = fVar28;
            fVar30 = fVar8 * arg2[14] + fVar2 * arg3[14] + fVar30;
            arg1[22] = fVar30;
            fVar2 = arg3[14] * arg2[22] + arg3[22] * arg2[14];
            fVar25 = fVar2 * -0.04441841 + fVar25;
            fVar29 = fVar2 * 0.21324362f + fVar29;
            fVar33 = fVar2 * -0.17132746 + fVar33;
            arg1[12] = fVar25;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            arg1[34] = fVar2 * 0.10135869f + arg1[34];
            fVar2 = arg2[35] * 0.14991152f + arg2[31] * -0.113793656 + arg2[3] * 0.19947115f + arg2[13] * 0.06785024f;
            fVar8 = arg3[35] * 0.14991152f + arg3[31] * -0.113793656 + arg3[3] * 0.19947115f + arg3[13] * 0.06785024f;
            fVar28 = arg2[23] * fVar8 + arg3[23] * fVar2 + fVar28;
            arg1[14] = fVar28;
            arg1[23] = fVar8 * arg2[14] + fVar2 * arg3[14] + arg1[23];
            fVar2 = arg3[14] * arg2[23] + arg3[23] * arg2[14];
            fVar32 = fVar2 * 0.06785024f + fVar32;
            fVar3 = fVar2 * 0.19947115f + fVar3;
            fVar12 = fVar2 * -0.113793656 + fVar12;
            fVar7 = fVar2 * 0.14991152f + fVar7;
            arg1[13] = fVar32;
            arg1[3] = fVar3;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar2 = arg2[24] * -0.077413976 + (arg2[6] * 0.19018827f - arg2[20] * 0.06542675f);
            fVar8 = arg3[24] * -0.077413976 + (arg3[6] * 0.19018827f - arg3[20] * 0.06542675f);
            fVar28 = arg2[32] * fVar8 + arg3[32] * fVar2 + fVar28;
            arg1[14] = fVar28;
            fVar10 = fVar8 * arg2[14] + fVar2 * arg3[14] + fVar10;
            arg1[32] = fVar10;
            fVar2 = arg3[14] * arg2[32] + arg3[32] * arg2[14];
            fVar13 = fVar13 - fVar2 * 0.06542675f;
            fVar5 = fVar2 * 0.19018827f + fVar5;
            fVar23 = fVar2 * -0.077413976 + fVar23;
            arg1[20] = fVar13;
            arg1[6] = fVar5;
            arg1[24] = fVar23;
            fVar22 = (arg3[20] * 0.07693494f + arg3[6] * -0.21026105 + *arg3 * 0.2820948f) * arg2[15] +
                     (arg2[20] * 0.07693494f + arg2[6] * -0.21026105 + *arg2 * 0.2820948f) * arg3[15] + fVar22;
            arg1[15] = fVar22;
            fVar2 = arg3[15] * arg2[15];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * -0.21026105 + fVar5;
            fVar13 = fVar2 * 0.07693494f + fVar13;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            fVar2 = arg2[34] * -0.1316688 + arg2[32] * 0.12669836f + arg2[14] * -0.09932259;
            fVar8 = arg3[34] * -0.1316688 + arg3[32] * 0.12669836f + arg3[14] * -0.09932259;
            fVar22 = arg2[21] * fVar8 + arg3[21] * fVar2 + fVar22;
            arg1[15] = fVar22;
            arg1[21] = fVar8 * arg2[15] + fVar2 * arg3[15] + arg1[21];
            fVar2 = arg3[15] * arg2[21] + arg3[21] * arg2[15];
            fVar28 = fVar2 * -0.09932259 + fVar28;
            fVar10 = fVar2 * 0.12669836f + fVar10;
            arg1[14] = fVar28;
            arg1[32] = fVar10;
            arg1[34] = fVar2 * -0.1316688 + arg1[34];
            fVar2 = arg2[35] * -0.09814013 + arg2[31] * -0.10158469 + arg2[3] * -0.043528173 + arg2[13] * 0.13325523f;
            fVar8 = arg3[35] * -0.09814013 + arg3[31] * -0.10158469 + arg3[3] * -0.043528173 + arg3[13] * 0.13325523f;
            fVar22 = arg2[22] * fVar8 + arg3[22] * fVar2 + fVar22;
            arg1[15] = fVar22;
            fVar30 = fVar8 * arg2[15] + fVar2 * arg3[15] + fVar30;
            arg1[22] = fVar30;
            fVar2 = arg3[15] * arg2[22] + arg3[22] * arg2[15];
            fVar32 = fVar2 * 0.13325523f + fVar32;
            fVar3 = fVar2 * -0.043528173 + fVar3;
            fVar12 = fVar2 * -0.10158469 + fVar12;
            fVar7 = fVar2 * -0.09814013 + fVar7;
            arg1[13] = fVar32;
            arg1[3] = fVar3;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar2 = arg2[30] * 0.09814013f + (arg2[2] * 0.1628675f - arg2[12] * 0.20355073f);
            fVar8 = arg3[30] * 0.09814013f + (arg3[2] * 0.1628675f - arg3[12] * 0.20355073f);
            fVar22 = arg2[23] * fVar8 + arg3[23] * fVar2 + fVar22;
            arg1[15] = fVar22;
            arg1[23] = fVar8 * arg2[15] + fVar2 * arg3[15] + arg1[23];
            fVar2 = arg3[15] * arg2[23] + arg3[23] * arg2[15];
            fVar25 = fVar25 - fVar2 * 0.20355073f;
            fVar29 = fVar2 * 0.1628675f + fVar29;
            fVar33 = fVar2 * 0.09814013f + fVar33;
            arg1[12] = fVar25;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            fVar2 = arg2[6] * 0.12679218f - arg2[20] * 0.19628026f;
            fVar8 = arg3[6] * 0.12679218f - arg3[20] * 0.19628026f;
            fVar22 = arg2[33] * fVar8 + arg3[33] * fVar2 + fVar22;
            arg1[15] = fVar22;
            fVar17 = fVar8 * arg2[15] + fVar2 * arg3[15] + fVar17;
            arg1[33] = fVar17;
            fVar2 = arg3[15] * arg2[33] + arg3[33] * arg2[15];
            fVar5 = fVar2 * 0.12679218f + fVar5;
            fVar13 = fVar13 - fVar2 * 0.19628026f;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            fVar8 = (arg3[20] * 0.10652531f + arg3[6] * -0.22937569 + *arg3 * 0.2820948f) * arg2[16] +
                    (arg2[20] * 0.10652531f + arg2[6] * -0.22937569 + *arg2 * 0.2820948f) * arg3[16] + arg1[16];
            arg1[16] = fVar8;
            fVar2 = arg3[16] * arg2[16];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * -0.22937569 + fVar5;
            fVar13 = fVar2 * 0.10652531f + fVar13;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            fVar14 = arg2[22] * 0.13504547f + arg2[8] * -0.07508082;
            fVar2 = arg3[22] * 0.13504547f + arg3[8] * -0.07508082;
            fVar8 = arg2[18] * fVar2 + arg3[18] * fVar14 + fVar8;
            arg1[16] = fVar8;
            arg1[18] = fVar2 * arg2[16] + fVar14 * arg3[16] + arg1[18];
            fVar2 = arg3[16] * arg2[18] + arg3[18] * arg2[16];
            fVar26 = fVar2 * -0.07508082 + fVar26;
            fVar30 = fVar2 * 0.13504547f + fVar30;
            arg1[8] = fVar26;
            arg1[22] = fVar30;
            fVar2 = arg2[5] * 0.14046335f + arg2[19] * -0.11909891;
            fVar14 = arg3[5] * 0.14046335f + arg3[19] * -0.11909891;
            fVar8 = arg2[23] * fVar14 + arg3[23] * fVar2 + fVar8;
            arg1[16] = fVar8;
            arg1[23] = fVar14 * arg2[16] + fVar2 * arg3[16] + arg1[23];
            fVar2 = arg3[16] * arg2[23] + arg3[23] * arg2[16];
            arg1[19] = fVar2 * -0.11909891 + arg1[19];
            arg1[5] = fVar2 * 0.14046335f + arg1[5];
            fVar2 = arg2[30] * 0.1301976f + (arg2[2] * 0.1473192f - arg2[12] * 0.2077235f);
            fVar14 = arg3[30] * 0.1301976f + (arg3[2] * 0.1473192f - arg3[12] * 0.2077235f);
            fVar8 = arg2[26] * fVar14 + arg3[26] * fVar2 + fVar8;
            arg1[16] = fVar8;
            arg1[26] = fVar14 * arg2[16] + fVar2 * arg3[16] + arg1[26];
            fVar2 = arg3[16] * arg2[26] + arg3[26] * arg2[16];
            fVar25 = fVar25 - fVar2 * 0.2077235f;
            fVar29 = fVar2 * 0.1473192f + fVar29;
            fVar33 = fVar2 * 0.1301976f + fVar33;
            arg1[12] = fVar25;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            fVar14 = arg2[32] * 0.12837656f + arg2[14] * -0.077413976;
            fVar2 = arg3[32] * 0.12837656f + arg3[14] * -0.077413976;
            fVar8 = arg2[28] * fVar2 + arg3[28] * fVar14 + fVar8;
            arg1[16] = fVar8;
            arg1[28] = fVar2 * arg2[16] + fVar14 * arg3[16] + arg1[28];
            fVar2 = arg3[16] * arg2[28] + arg3[28] * arg2[16];
            fVar28 = fVar2 * -0.077413976 + fVar28;
            fVar10 = fVar2 * 0.12837656f + fVar10;
            arg1[14] = fVar28;
            arg1[32] = fVar10;
            fVar14 = arg2[35] * -0.053152945 + arg2[33] * -0.1188536 + arg2[15] * 0.03583571f;
            fVar2 = arg3[35] * -0.053152945 + arg3[33] * -0.1188536 + arg3[15] * 0.03583571f;
            fVar8 = arg2[29] * fVar2 + arg3[29] * fVar14 + fVar8;
            arg1[16] = fVar8;
            arg1[29] = fVar2 * arg2[16] + fVar14 * arg3[16] + arg1[29];
            fVar2 = arg3[16] * arg2[29] + arg3[29] * arg2[16];
            fVar22 = fVar2 * 0.03583571f + fVar22;
            fVar17 = fVar2 * -0.1188536 + fVar17;
            fVar7 = fVar2 * -0.053152945 + fVar7;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            arg1[35] = fVar7;
            fVar14 = arg2[25] * 0.053152945f + arg2[9] * 0.03583571f + arg2[27] * -0.1188536;
            fVar2 = arg3[25] * 0.053152945f + arg3[9] * 0.03583571f + arg3[27] * -0.1188536;
            arg1[16] = arg2[31] * fVar2 + arg3[31] * fVar14 + fVar8;
            fVar12 = fVar2 * arg2[16] + fVar14 * arg3[16] + fVar12;
            arg1[31] = fVar12;
            fVar2 = arg3[16] * arg2[31] + arg3[31] * arg2[16];
            fVar9 = fVar2 * -0.1188536 + fVar9;
            arg1[27] = fVar9;
            arg1[9] = fVar2 * 0.03583571f + arg1[9];
            fVar6 = fVar2 * 0.053152945f + fVar6;
            arg1[25] = fVar6;
            fVar2 = (arg3[20] * -0.15978795 + arg3[6] * -0.057343923 + *arg3 * 0.2820948f) * arg2[17] +
                    (arg2[20] * -0.15978795 + arg2[6] * -0.057343923 + *arg2 * 0.2820948f) * arg3[17] + arg1[17];
            arg1[17] = fVar2;
            fVar8 = arg3[17] * arg2[17];
            fVar4 = fVar8 * 0.2820948f + fVar4;
            fVar5 = fVar8 * -0.057343923 + fVar5;
            fVar13 = fVar8 * -0.15978795 + fVar13;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            fVar14 = arg2[24] * 0.11909891f + (arg2[22] * 0.045015156f - arg2[8] * 0.112621225f);
            fVar8 = arg3[24] * 0.11909891f + (arg3[22] * 0.045015156f - arg3[8] * 0.112621225f);
            fVar2 = arg2[19] * fVar8 + arg3[19] * fVar14 + fVar2;
            arg1[17] = fVar2;
            arg1[19] = fVar8 * arg2[17] + fVar14 * arg3[17] + arg1[19];
            fVar8 = arg3[17] * arg2[19] + arg3[19] * arg2[17];
            fVar26 = fVar26 - fVar8 * 0.112621225f;
            fVar30 = fVar8 * 0.045015156f + fVar30;
            fVar23 = fVar8 * 0.11909891f + fVar23;
            arg1[8] = fVar26;
            arg1[22] = fVar30;
            arg1[24] = fVar23;
            fVar8 = arg2[18] * 0.045015156f + (arg2[16] * -0.11909891 - arg2[4] * 0.112621225f);
            fVar14 = arg3[18] * 0.045015156f + (arg3[16] * -0.11909891 - arg3[4] * 0.112621225f);
            fVar2 = arg2[21] * fVar14 + arg3[21] * fVar8 + fVar2;
            arg1[17] = fVar2;
            arg1[21] = fVar14 * arg2[17] + fVar8 * arg3[17] + arg1[21];
            fVar8 = arg3[17] * arg2[21] + arg3[21] * arg2[17];
            arg1[16] = fVar8 * -0.11909891 + arg1[16];
            arg1[4] = arg1[4] - fVar8 * 0.112621225f;
            arg1[18] = fVar8 * 0.045015156f + arg1[18];
            fVar14 = arg2[31] * -0.1188536 + arg2[13] * 0.029982306f + arg2[3] * 0.20834081f;
            fVar8 = arg3[31] * -0.1188536 + arg3[13] * 0.029982306f + arg3[3] * 0.20834081f;
            fVar2 = arg2[26] * fVar8 + arg3[26] * fVar14 + fVar2;
            arg1[17] = fVar2;
            arg1[26] = fVar8 * arg2[17] + fVar14 * arg3[17] + arg1[26];
            fVar8 = arg3[17] * arg2[26] + arg3[26] * arg2[17];
            fVar3 = fVar8 * 0.20834081f + fVar3;
            fVar32 = fVar8 * 0.029982306f + fVar32;
            fVar12 = fVar8 * -0.1188536 + fVar12;
            arg1[3] = fVar3;
            arg1[13] = fVar32;
            arg1[31] = fVar12;
            fVar8 = arg2[30] * -0.1301976 + arg2[2] * 0.1964256f + arg2[12] * -0.10386175;
            fVar14 = arg3[30] * -0.1301976 + arg3[2] * 0.1964256f + arg3[12] * -0.10386175;
            fVar2 = arg2[27] * fVar14 + arg3[27] * fVar8 + fVar2;
            arg1[17] = fVar2;
            fVar9 = fVar14 * arg2[17] + fVar8 * arg3[17] + fVar9;
            arg1[27] = fVar9;
            fVar8 = arg3[17] * arg2[27] + arg3[27] * arg2[17];
            fVar25 = fVar8 * -0.10386175 + fVar25;
            fVar29 = fVar8 * 0.1964256f + fVar29;
            fVar33 = fVar8 * -0.1301976 + fVar33;
            arg1[12] = fVar25;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            fVar8 = arg2[35] * 0.09944005f + arg2[31] * 0.03431008f + arg2[3] * -0.06014281 + arg2[13] * 0.12117204f;
            fVar14 = arg3[35] * 0.09944005f + arg3[31] * 0.03431008f + arg3[3] * -0.06014281 + arg3[13] * 0.12117204f;
            fVar2 = arg2[28] * fVar14 + arg3[28] * fVar8 + fVar2;
            arg1[17] = fVar2;
            arg1[28] = fVar14 * arg2[17] + fVar8 * arg3[17] + arg1[28];
            fVar8 = arg3[17] * arg2[28] + arg3[28] * arg2[17];
            fVar32 = fVar8 * 0.12117204f + fVar32;
            fVar3 = fVar8 * -0.06014281 + fVar3;
            fVar12 = fVar8 * 0.03431008f + fVar12;
            fVar7 = fVar8 * 0.09944005f + fVar7;
            arg1[13] = fVar32;
            arg1[3] = fVar3;
            arg1[31] = fVar12;
            arg1[35] = fVar7;
            fVar8 = arg2[29] * 0.03431008f + arg2[25] * -0.09944005 + arg2[1] * -0.06014281 + arg2[11] * 0.12117204f;
            fVar14 = arg3[29] * 0.03431008f + arg3[25] * -0.09944005 + arg3[1] * -0.06014281 + arg3[11] * 0.12117204f;
            fVar2 = arg2[32] * fVar14 + arg3[32] * fVar8 + fVar2;
            arg1[17] = fVar2;
            fVar10 = fVar14 * arg2[17] + fVar8 * arg3[17] + fVar10;
            arg1[32] = fVar10;
            fVar8 = arg3[17] * arg2[32] + arg3[32] * arg2[17];
            arg1[11] = fVar8 * 0.12117204f + arg1[11];
            arg1[1] = fVar8 * -0.06014281 + arg1[1];
            fVar6 = fVar8 * -0.09944005 + fVar6;
            arg1[25] = fVar6;
            fVar18 = fVar8 * 0.03431008f + arg1[29];
            arg1[29] = fVar18;
            fVar14 = arg2[1] * -0.20834081 + (arg2[29] * 0.1188536f - arg2[11] * 0.029982306f);
            fVar8 = arg3[1] * -0.20834081 + (arg3[29] * 0.1188536f - arg3[11] * 0.029982306f);
            arg1[17] = arg2[34] * fVar8 + arg3[34] * fVar14 + fVar2;
            arg1[34] = fVar8 * arg2[17] + fVar14 * arg3[17] + arg1[34];
            fVar2 = arg3[17] * arg2[34] + arg3[34] * arg2[17];
            arg1[29] = fVar2 * 0.1188536f + fVar18;
            arg1[11] = arg1[11] - fVar2 * 0.029982306f;
            arg1[1] = fVar2 * -0.20834081 + arg1[1];
            fVar2 = (arg3[24] * -0.13504547 + arg3[20] * -0.08369845 + *arg3 * 0.2820948f + arg3[6] * 0.06553591f) *
                        arg2[18] +
                    (arg2[24] * -0.13504547 + arg2[20] * -0.08369845 + *arg2 * 0.2820948f + arg2[6] * 0.06553591f) *
                        arg3[18] +
                    arg1[18];
            arg1[18] = fVar2;
            fVar8 = arg3[18] * arg2[18];
            fVar5 = fVar8 * 0.06553591f + fVar5;
            fVar4 = fVar8 * 0.2820948f + fVar4;
            fVar13 = fVar8 * -0.08369845 + fVar13;
            fVar23 = fVar8 * -0.13504547 + fVar23;
            arg1[6] = fVar5;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            fVar8 = arg2[23] * -0.045015156 + arg2[21] * 0.102084786f + arg2[7] * 0.09029786f;
            fVar14 = arg3[23] * -0.045015156 + arg3[21] * 0.102084786f + arg3[7] * 0.09029786f;
            fVar2 = arg2[19] * fVar14 + arg3[19] * fVar8 + fVar2;
            arg1[18] = fVar2;
            arg1[19] = fVar14 * arg2[18] + fVar8 * arg3[18] + arg1[19];
            fVar8 = arg3[18] * arg2[19] + arg3[19] * arg2[18];
            arg1[7] = fVar8 * 0.09029786f + arg1[7];
            arg1[21] = fVar8 * 0.102084786f + arg1[21];
            arg1[23] = fVar8 * -0.045015156 + arg1[23];
            fVar8 = arg2[33] * 0.1301976f + arg2[15] * -0.09814013;
            fVar14 = arg3[33] * 0.1301976f + arg3[15] * -0.09814013;
            fVar2 = arg2[25] * fVar14 + arg3[25] * fVar8 + fVar2;
            arg1[18] = fVar2;
            fVar6 = fVar14 * arg2[18] + fVar8 * arg3[18] + fVar6;
            arg1[25] = fVar6;
            fVar8 = arg3[18] * arg2[25] + arg3[25] * arg2[18];
            fVar22 = fVar8 * -0.09814013 + fVar22;
            fVar17 = fVar8 * 0.1301976f + fVar17;
            arg1[15] = fVar22;
            arg1[33] = fVar17;
            fVar8 = arg2[32] * 0.084042184f + arg2[14] * 0.10135869f;
            fVar14 = arg3[32] * 0.084042184f + arg3[14] * 0.10135869f;
            fVar2 = arg2[26] * fVar14 + arg3[26] * fVar8 + fVar2;
            arg1[18] = fVar2;
            arg1[26] = fVar14 * arg2[18] + fVar8 * arg3[18] + arg1[26];
            fVar8 = arg3[18] * arg2[26] + arg3[26] * arg2[18];
            fVar28 = fVar8 * 0.10135869f + fVar28;
            fVar10 = fVar8 * 0.084042184f + fVar10;
            arg1[14] = fVar28;
            arg1[32] = fVar10;
            fVar14 = arg2[35] * -0.1301976 + arg2[3] * 0.18373932f + arg2[13] * 0.101990215f;
            fVar8 = arg3[35] * -0.1301976 + arg3[3] * 0.18373932f + arg3[13] * 0.101990215f;
            fVar2 = arg2[27] * fVar8 + arg3[27] * fVar14 + fVar2;
            arg1[18] = fVar2;
            fVar9 = fVar8 * arg2[18] + fVar14 * arg3[18] + fVar9;
            arg1[27] = fVar9;
            fVar8 = arg3[18] * arg2[27] + arg3[27] * arg2[18];
            fVar32 = fVar8 * 0.101990215f + fVar32;
            fVar3 = fVar8 * 0.18373932f + fVar3;
            fVar7 = fVar8 * -0.1301976 + fVar7;
            arg1[13] = fVar32;
            arg1[3] = fVar3;
            arg1[35] = fVar7;
            fVar14 = arg2[34] * -0.084042184 + arg2[30] * -0.09944005 + arg2[12] * 0.022664493f + arg2[2] * 0.22503379f;
            fVar8 = arg3[34] * -0.084042184 + arg3[30] * -0.09944005 + arg3[12] * 0.022664493f + arg3[2] * 0.22503379f;
            fVar2 = arg2[28] * fVar8 + arg3[28] * fVar14 + fVar2;
            arg1[18] = fVar2;
            arg1[28] = fVar8 * arg2[18] + fVar14 * arg3[18] + arg1[28];
            fVar8 = arg3[18] * arg2[28] + arg3[28] * arg2[18];
            fVar29 = fVar8 * 0.22503379f + fVar29;
            fVar25 = fVar8 * 0.022664493f + fVar25;
            fVar33 = fVar8 * -0.09944005 + fVar33;
            arg1[2] = fVar29;
            arg1[12] = fVar25;
            arg1[30] = fVar33;
            arg1[34] = fVar8 * -0.084042184 + arg1[34];
            fVar8 = arg2[31] * 0.09704356f + arg2[15] * 0.10158469f + arg2[13] * 0.075189956f + arg2[3] * -0.08505478;
            fVar14 = arg3[31] * 0.09704356f + arg3[15] * 0.10158469f + arg3[13] * 0.075189956f + arg3[3] * -0.08505478;
            arg1[18] = arg2[29] * fVar14 + arg3[29] * fVar8 + fVar2;
            arg1[29] = fVar14 * arg2[18] + fVar8 * arg3[18] + arg1[29];
            fVar2 = arg3[18] * arg2[29] + arg3[29] * arg2[18];
            fVar3 = fVar2 * -0.08505478 + fVar3;
            fVar32 = fVar2 * 0.075189956f + fVar32;
            fVar22 = fVar2 * 0.10158469f + fVar22;
            fVar12 = fVar2 * 0.09704356f + fVar12;
            arg1[3] = fVar3;
            arg1[13] = fVar32;
            arg1[15] = fVar22;
            arg1[31] = fVar12;
            fVar14 = (arg3[22] * -0.102084786 + arg3[20] * 0.06848055f + *arg3 * 0.2820948f + arg3[8] * -0.14188941 +
                      arg3[6] * 0.13926381f) *
                         arg2[19] +
                     (arg2[22] * -0.102084786 + arg2[20] * 0.06848055f + *arg2 * 0.2820948f + arg2[8] * -0.14188941 +
                      arg2[6] * 0.13926381f) *
                         arg3[19] +
                     arg1[19];
            arg1[19] = fVar14;
            fVar2 = arg3[19] * arg2[19];
            fVar5 = fVar2 * 0.13926381f + fVar5;
            fVar26 = fVar2 * -0.14188941 + fVar26;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar13 = fVar2 * 0.06848055f + fVar13;
            fVar30 = fVar2 * -0.102084786 + fVar30;
            arg1[6] = fVar5;
            arg1[8] = fVar26;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            arg1[22] = fVar30;
            fVar2 = arg2[34];
            fVar8 = arg3[34];
            fVar14 = arg2[25] * fVar8 * -0.1301976 + arg3[25] * fVar2 * -0.1301976 + fVar14;
            arg1[19] = fVar14;
            fVar6 = fVar8 * -0.1301976 * arg2[19] + fVar2 * -0.1301976 * arg3[19] + fVar6;
            arg1[25] = fVar6;
            arg1[34] = (arg3[19] * arg2[25] + arg3[25] * arg2[19]) * -0.1301976 + arg1[34];
            fVar8 = arg2[35] * 0.1301976f + arg2[15] * -0.1316688;
            fVar2 = arg3[35] * 0.1301976f + arg3[15] * -0.1316688;
            fVar14 = arg2[26] * fVar2 + arg3[26] * fVar8 + fVar14;
            arg1[19] = fVar14;
            arg1[26] = fVar2 * arg2[19] + fVar8 * arg3[19] + arg1[26];
            fVar2 = arg3[19] * arg2[26] + arg3[26] * arg2[19];
            fVar22 = fVar2 * -0.1316688 + fVar22;
            fVar7 = fVar2 * 0.1301976f + fVar7;
            arg1[15] = fVar22;
            arg1[35] = fVar7;
            fVar2 = arg2[32] * 0.084042184f + arg2[14] * 0.025339672f;
            fVar8 = arg3[32] * 0.084042184f + arg3[14] * 0.025339672f;
            fVar14 = arg2[27] * fVar8 + arg3[27] * fVar2 + fVar14;
            arg1[19] = fVar14;
            fVar9 = fVar8 * arg2[19] + fVar2 * arg3[19] + fVar9;
            arg1[27] = fVar9;
            fVar2 = arg3[19] * arg2[27] + arg3[27] * arg2[19];
            fVar28 = fVar2 * 0.025339672f + fVar28;
            fVar10 = fVar2 * 0.084042184f + fVar10;
            arg1[14] = fVar28;
            arg1[32] = fVar10;
            fVar2 = arg2[33] * -0.084042184 + arg2[31] * 0.09077594f + arg2[15] * -0.12669836 + arg2[3] * 0.15912293f +
                    arg2[13] * 0.1046828f;
            fVar8 = arg3[33] * -0.084042184 + arg3[31] * 0.09077594f + arg3[15] * -0.12669836 + arg3[3] * 0.15912293f +
                    arg3[13] * 0.1046828f;
            fVar14 = arg2[28] * fVar8 + arg3[28] * fVar2 + fVar14;
            arg1[19] = fVar14;
            arg1[28] = fVar8 * arg2[19] + fVar2 * arg3[19] + arg1[28];
            fVar2 = arg3[19] * arg2[28] + arg3[28] * arg2[19];
            fVar32 = fVar2 * 0.1046828f + fVar32;
            fVar3 = fVar2 * 0.15912293f + fVar3;
            arg1[13] = fVar32;
            arg1[3] = fVar3;
            arg1[15] = fVar2 * -0.12669836 + fVar22;
            fVar12 = fVar2 * 0.09077594f + fVar12;
            fVar17 = fVar2 * -0.084042184 + fVar17;
            arg1[31] = fVar12;
            arg1[33] = fVar17;
            fVar8 = arg2[32] * -0.09077594 + arg2[30] * 0.053152945f + arg2[2] * 0.24057125f + arg2[14] * -0.09774991 +
                    arg2[12] * 0.11508947f;
            fVar2 = arg3[32] * -0.09077594 + arg3[30] * 0.053152945f + arg3[2] * 0.24057125f + arg3[14] * -0.09774991 +
                    arg3[12] * 0.11508947f;
            arg1[19] = arg2[29] * fVar2 + arg3[29] * fVar8 + fVar14;
            arg1[29] = fVar2 * arg2[19] + fVar8 * arg3[19] + arg1[29];
            fVar2 = arg3[19] * arg2[29] + arg3[29] * arg2[19];
            fVar25 = fVar2 * 0.11508947f + fVar25;
            fVar28 = fVar2 * -0.09774991 + fVar28;
            fVar29 = fVar2 * 0.24057125f + fVar29;
            fVar33 = fVar2 * 0.053152945f + fVar33;
            fVar10 = fVar2 * -0.09077594 + fVar10;
            arg1[12] = fVar25;
            arg1[14] = fVar28;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            arg1[32] = fVar10;
            fVar13 = (*arg3 * 0.2820948f + arg3[6] * 0.1638398f) * arg2[20] +
                     (*arg2 * 0.2820948f + arg2[6] * 0.1638398f) * arg3[20] + fVar13;
            arg1[20] = fVar13;
            fVar2 = arg3[20] * arg2[20];
            fVar5 = fVar2 * 0.1638398f + fVar5;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar13 = fVar2 * 0.13696113f + fVar13;
            arg1[6] = fVar5;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            fVar14 = (arg3[22] * 0.102084786f + arg3[8] * 0.14188941f + *arg3 * 0.2820948f + arg3[20] * 0.06848055f +
                      arg3[6] * 0.13926381f) *
                         arg2[21] +
                     (arg2[22] * 0.102084786f + arg2[8] * 0.14188941f + *arg2 * 0.2820948f + arg2[20] * 0.06848055f +
                      arg2[6] * 0.13926381f) *
                         arg3[21] +
                     arg1[21];
            arg1[21] = fVar14;
            fVar2 = arg3[21] * arg2[21];
            fVar5 = fVar2 * 0.13926381f + fVar5;
            fVar13 = fVar2 * 0.06848055f + fVar13;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar26 = fVar2 * 0.14188941f + fVar26;
            fVar30 = fVar2 * 0.102084786f + fVar30;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            *arg1 = fVar4;
            arg1[8] = fVar26;
            arg1[22] = fVar30;
            fVar2 = arg2[24] * -0.11909891 + (arg2[22] * 0.045015156f - arg2[8] * 0.112621225f);
            fVar8 = arg3[24] * -0.11909891 + (arg3[22] * 0.045015156f - arg3[8] * 0.112621225f);
            fVar14 = arg2[23] * fVar8 + arg3[23] * fVar2 + fVar14;
            arg1[21] = fVar14;
            arg1[23] = fVar8 * arg2[21] + fVar2 * arg3[21] + arg1[23];
            fVar2 = arg3[21] * arg2[23] + arg3[23] * arg2[21];
            arg1[8] = fVar26 - fVar2 * 0.112621225f;
            fVar30 = fVar2 * 0.045015156f + fVar30;
            fVar23 = fVar2 * -0.11909891 + fVar23;
            arg1[22] = fVar30;
            arg1[24] = fVar23;
            fVar2 = arg2[25] * -0.1301976 + arg2[9] * -0.1316688;
            fVar8 = arg3[25] * -0.1301976 + arg3[9] * -0.1316688;
            fVar14 = arg2[26] * fVar8 + arg3[26] * fVar2 + fVar14;
            arg1[21] = fVar14;
            arg1[26] = fVar8 * arg2[21] + fVar2 * arg3[21] + arg1[26];
            fVar2 = arg3[21] * arg2[26] + arg3[26] * arg2[21];
            arg1[9] = fVar2 * -0.1316688 + arg1[9];
            fVar6 = fVar2 * -0.1301976 + fVar6;
            arg1[25] = fVar6;
            fVar2 = arg2[29] * 0.09077594f + arg2[9] * 0.12669836f + arg2[11] * 0.1046828f + arg2[1] * 0.15912293f +
                    arg2[27] * 0.084042184f;
            fVar8 = arg3[29] * 0.09077594f + arg3[9] * 0.12669836f + arg3[11] * 0.1046828f + arg3[1] * 0.15912293f +
                    arg3[27] * 0.084042184f;
            fVar14 = arg2[28] * fVar8 + arg3[28] * fVar2 + fVar14;
            arg1[21] = fVar14;
            arg1[28] = fVar8 * arg2[21] + fVar2 * arg3[21] + arg1[28];
            fVar2 = arg3[21] * arg2[28] + arg3[28] * arg2[21];
            fVar9 = fVar2 * 0.084042184f + fVar9;
            arg1[27] = fVar9;
            arg1[1] = fVar2 * 0.15912293f + arg1[1];
            arg1[11] = fVar2 * 0.1046828f + arg1[11];
            arg1[9] = fVar2 * 0.12669836f + arg1[9];
            arg1[29] = fVar2 * 0.09077594f + arg1[29];
            fVar8 = arg2[32] * 0.09077594f + arg2[12] * 0.11508947f + arg2[30] * 0.053152945f + arg2[2] * 0.24057125f +
                    arg2[14] * 0.09774991f;
            fVar2 = arg3[32] * 0.09077594f + arg3[12] * 0.11508947f + arg3[30] * 0.053152945f + arg3[2] * 0.24057125f +
                    arg3[14] * 0.09774991f;
            fVar14 = arg2[31] * fVar2 + arg3[31] * fVar8 + fVar14;
            arg1[21] = fVar14;
            fVar12 = fVar2 * arg2[21] + fVar8 * arg3[21] + fVar12;
            arg1[31] = fVar12;
            fVar2 = arg3[21] * arg2[31] + arg3[31] * arg2[21];
            fVar28 = fVar2 * 0.09774991f + fVar28;
            fVar29 = fVar2 * 0.24057125f + fVar29;
            fVar33 = fVar2 * 0.053152945f + fVar33;
            fVar25 = fVar2 * 0.11508947f + fVar25;
            fVar10 = fVar2 * 0.09077594f + fVar10;
            arg1[14] = fVar28;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            arg1[12] = fVar25;
            arg1[32] = fVar10;
            fVar2 = arg2[14] * 0.025339672f + arg2[32] * 0.084042184f;
            fVar8 = arg3[14] * 0.025339672f + arg3[32] * 0.084042184f;
            fVar14 = arg2[33] * fVar8 + arg3[33] * fVar2 + fVar14;
            arg1[21] = fVar14;
            fVar17 = fVar8 * arg2[21] + fVar2 * arg3[21] + fVar17;
            arg1[33] = fVar17;
            fVar2 = arg3[21] * arg2[33] + arg3[33] * arg2[21];
            fVar10 = fVar2 * 0.084042184f + fVar10;
            arg1[32] = fVar10;
            arg1[14] = fVar2 * 0.025339672f + fVar28;
            fVar2 = arg2[35];
            fVar8 = arg3[35];
            arg1[21] = arg2[34] * fVar8 * -0.1301976 + arg3[34] * fVar2 * -0.1301976 + fVar14;
            arg1[34] = fVar8 * -0.1301976 * arg2[21] + fVar2 * -0.1301976 * arg3[21] + arg1[34];
            fVar7 = (arg3[21] * arg2[34] + arg3[34] * arg2[21]) * -0.1301976 + fVar7;
            arg1[35] = fVar7;
            fVar30 = (arg3[24] * 0.13504547f + *arg3 * 0.2820948f + arg3[20] * -0.08369845 + arg3[6] * 0.06553591f) *
                         arg2[22] +
                     (arg2[24] * 0.13504547f + *arg2 * 0.2820948f + arg2[20] * -0.08369845 + arg2[6] * 0.06553591f) *
                         arg3[22] +
                     fVar30;
            arg1[22] = fVar30;
            fVar2 = arg3[22] * arg2[22];
            fVar5 = fVar2 * 0.06553591f + fVar5;
            fVar13 = fVar2 * -0.08369845 + fVar13;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar23 = fVar2 * 0.13504547f + fVar23;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            *arg1 = fVar4;
            arg1[24] = fVar23;
            fVar2 = arg2[28] * 0.084042184f + arg2[10] * 0.10135869f;
            fVar8 = arg3[28] * 0.084042184f + arg3[10] * 0.10135869f;
            fVar30 = arg2[26] * fVar8 + arg3[26] * fVar2 + fVar30;
            arg1[22] = fVar30;
            arg1[26] = fVar8 * arg2[22] + fVar2 * arg3[22] + arg1[26];
            fVar2 = arg3[22] * arg2[26] + arg3[26] * arg2[22];
            arg1[10] = fVar2 * 0.10135869f + arg1[10];
            arg1[28] = fVar2 * 0.084042184f + arg1[28];
            fVar2 = arg2[25] * 0.1301976f + arg2[11] * 0.101990215f + arg2[1] * 0.18373932f;
            fVar8 = arg3[25] * 0.1301976f + arg3[11] * 0.101990215f + arg3[1] * 0.18373932f;
            fVar30 = arg2[27] * fVar8 + arg3[27] * fVar2 + fVar30;
            arg1[22] = fVar30;
            fVar9 = fVar8 * arg2[22] + fVar2 * arg3[22] + fVar9;
            arg1[27] = fVar9;
            fVar2 = arg3[22] * arg2[27] + arg3[27] * arg2[22];
            arg1[1] = fVar2 * 0.18373932f + arg1[1];
            arg1[11] = fVar2 * 0.101990215f + arg1[11];
            fVar6 = fVar2 * 0.1301976f + fVar6;
            arg1[25] = fVar6;
            fVar2 = arg2[34] * 0.084042184f + arg2[12] * 0.022664493f + arg2[30] * -0.09944005 + arg2[2] * 0.22503379f;
            fVar8 = arg3[34] * 0.084042184f + arg3[12] * 0.022664493f + arg3[30] * -0.09944005 + arg3[2] * 0.22503379f;
            fVar30 = arg2[32] * fVar8 + arg3[32] * fVar2 + fVar30;
            arg1[22] = fVar30;
            fVar10 = fVar8 * arg2[22] + fVar2 * arg3[22] + fVar10;
            arg1[32] = fVar10;
            fVar2 = arg3[22] * arg2[32] + arg3[32] * arg2[22];
            fVar29 = fVar2 * 0.22503379f + fVar29;
            fVar33 = fVar2 * -0.09944005 + fVar33;
            fVar25 = fVar2 * 0.022664493f + fVar25;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            arg1[12] = fVar25;
            arg1[34] = fVar2 * 0.084042184f + arg1[34];
            fVar2 = arg2[35] * 0.1301976f + arg2[13] * 0.101990215f + arg2[3] * 0.18373932f;
            fVar8 = arg3[35] * 0.1301976f + arg3[13] * 0.101990215f + arg3[3] * 0.18373932f;
            fVar30 = arg2[33] * fVar8 + arg3[33] * fVar2 + fVar30;
            arg1[22] = fVar30;
            fVar17 = fVar8 * arg2[22] + fVar2 * arg3[22] + fVar17;
            arg1[33] = fVar17;
            fVar2 = arg3[22] * arg2[33] + arg3[33] * arg2[22];
            fVar3 = fVar2 * 0.18373932f + fVar3;
            fVar32 = fVar2 * 0.101990215f + fVar32;
            fVar7 = fVar2 * 0.1301976f + fVar7;
            arg1[3] = fVar3;
            arg1[13] = fVar32;
            arg1[35] = fVar7;
            fVar8 = (*arg3 * 0.2820948f + arg3[20] * -0.15978795 + arg3[6] * -0.057343923) * arg2[23] +
                    (*arg2 * 0.2820948f + arg2[20] * -0.15978795 + arg2[6] * -0.057343923) * arg3[23] + arg1[23];
            arg1[23] = fVar8;
            fVar2 = arg3[23] * arg2[23];
            fVar5 = fVar2 * -0.057343923 + fVar5;
            fVar13 = fVar2 * -0.15978795 + fVar13;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            *arg1 = fVar4;
            fVar2 = arg2[29] * -0.1188536 + arg2[11] * 0.029982306f + arg2[1] * 0.20834081f;
            fVar14 = arg3[29] * -0.1188536 + arg3[11] * 0.029982306f + arg3[1] * 0.20834081f;
            fVar8 = arg2[26] * fVar14 + arg3[26] * fVar2 + fVar8;
            arg1[23] = fVar8;
            arg1[26] = fVar14 * arg2[23] + fVar2 * arg3[23] + arg1[26];
            fVar2 = arg3[23] * arg2[26] + arg3[26] * arg2[23];
            arg1[1] = fVar2 * 0.20834081f + arg1[1];
            arg1[11] = fVar2 * 0.029982306f + arg1[11];
            arg1[29] = fVar2 * -0.1188536 + arg1[29];
            fVar14 = arg2[29] * -0.03431008 + arg2[1] * 0.06014281f + arg2[11] * -0.12117204 + arg2[25] * -0.09944005;
            fVar2 = arg3[29] * -0.03431008 + arg3[1] * 0.06014281f + arg3[11] * -0.12117204 + arg3[25] * -0.09944005;
            fVar8 = arg2[28] * fVar2 + arg3[28] * fVar14 + fVar8;
            arg1[23] = fVar8;
            arg1[28] = fVar2 * arg2[23] + fVar14 * arg3[23] + arg1[28];
            fVar2 = arg3[23] * arg2[28] + arg3[28] * arg2[23];
            fVar6 = fVar2 * -0.09944005 + fVar6;
            arg1[25] = fVar6;
            arg1[11] = fVar2 * -0.12117204 + arg1[11];
            arg1[1] = fVar2 * 0.06014281f + arg1[1];
            arg1[29] = fVar2 * -0.03431008 + arg1[29];
            fVar2 = arg2[35] * -0.09944005 + arg2[3] * -0.06014281 + arg2[13] * 0.12117204f + arg2[31] * 0.03431008f;
            fVar14 = arg3[35] * -0.09944005 + arg3[3] * -0.06014281 + arg3[13] * 0.12117204f + arg3[31] * 0.03431008f;
            fVar8 = arg2[32] * fVar14 + arg3[32] * fVar2 + fVar8;
            arg1[23] = fVar8;
            fVar10 = fVar14 * arg2[23] + fVar2 * arg3[23] + fVar10;
            arg1[32] = fVar10;
            fVar2 = arg3[23] * arg2[32] + arg3[32] * arg2[23];
            fVar12 = fVar2 * 0.03431008f + fVar12;
            fVar32 = fVar2 * 0.12117204f + fVar32;
            fVar3 = fVar2 * -0.06014281 + fVar3;
            fVar7 = fVar2 * -0.09944005 + fVar7;
            arg1[31] = fVar12;
            arg1[13] = fVar32;
            arg1[3] = fVar3;
            arg1[35] = fVar7;
            fVar2 = arg2[12] * -0.10386175 + arg2[30] * -0.1301976 + arg2[2] * 0.1964256f;
            fVar14 = arg3[12] * -0.10386175 + arg3[30] * -0.1301976 + arg3[2] * 0.1964256f;
            fVar8 = arg2[33] * fVar14 + arg3[33] * fVar2 + fVar8;
            arg1[23] = fVar8;
            fVar17 = fVar14 * arg2[23] + fVar2 * arg3[23] + fVar17;
            arg1[33] = fVar17;
            fVar2 = arg3[23] * arg2[33] + arg3[33] * arg2[23];
            fVar29 = fVar2 * 0.1964256f + fVar29;
            fVar33 = fVar2 * -0.1301976 + fVar33;
            fVar25 = fVar2 * -0.10386175 + fVar25;
            arg1[2] = fVar29;
            arg1[30] = fVar33;
            arg1[12] = fVar25;
            fVar2 = arg2[31] * -0.1188536 + arg2[13] * 0.029982306f + arg2[3] * 0.20834081f;
            fVar14 = arg3[31] * -0.1188536 + arg3[13] * 0.029982306f + arg3[3] * 0.20834081f;
            arg1[23] = arg2[34] * fVar14 + arg3[34] * fVar2 + fVar8;
            arg1[34] = fVar14 * arg2[23] + fVar2 * arg3[23] + arg1[34];
            fVar2 = arg3[23] * arg2[34] + arg3[34] * arg2[23];
            arg1[3] = fVar2 * 0.20834081f + fVar3;
            arg1[13] = fVar2 * 0.029982306f + fVar32;
            fVar12 = fVar2 * -0.1188536 + fVar12;
            arg1[31] = fVar12;
            fVar23 = (arg3[20] * 0.10652531f + *arg3 * 0.2820948f + arg3[6] * -0.22937569) * arg2[24] +
                     (arg2[20] * 0.10652531f + *arg2 * 0.2820948f + arg2[6] * -0.22937569) * arg3[24] + fVar23;
            arg1[24] = fVar23;
            fVar2 = arg3[24] * arg2[24];
            fVar5 = fVar2 * -0.22937569 + fVar5;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar13 = fVar2 * 0.10652531f + fVar13;
            arg1[6] = fVar5;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            fVar8 = arg2[25] * 0.053152945f + (arg2[27] * 0.1188536f - arg2[9] * 0.03583571f);
            fVar2 = arg3[25] * 0.053152945f + (arg3[27] * 0.1188536f - arg3[9] * 0.03583571f);
            fVar23 = arg2[29] * fVar2 + arg3[29] * fVar8 + fVar23;
            arg1[24] = fVar23;
            arg1[29] = fVar2 * arg2[24] + fVar8 * arg3[24] + arg1[29];
            fVar2 = arg3[24] * arg2[29] + arg3[29] * arg2[24];
            arg1[9] = arg1[9] - fVar2 * 0.03583571f;
            fVar9 = fVar2 * 0.1188536f + fVar9;
            fVar6 = fVar2 * 0.053152945f + fVar6;
            arg1[27] = fVar9;
            arg1[25] = fVar6;
            fVar2 = arg2[35] * 0.053152945f + arg2[33] * -0.1188536 + arg2[15] * 0.03583571f;
            fVar8 = arg3[35] * 0.053152945f + arg3[33] * -0.1188536 + arg3[15] * 0.03583571f;
            fVar23 = arg2[31] * fVar8 + arg3[31] * fVar2 + fVar23;
            arg1[24] = fVar23;
            fVar12 = fVar8 * arg2[24] + fVar2 * arg3[24] + fVar12;
            arg1[31] = fVar12;
            fVar2 = arg3[24] * arg2[31] + arg3[31] * arg2[24];
            arg1[15] = fVar2 * 0.03583571f + arg1[15];
            fVar17 = fVar2 * -0.1188536 + fVar17;
            fVar7 = fVar2 * 0.053152945f + fVar7;
            arg1[33] = fVar17;
            arg1[35] = fVar7;
            fVar2 = arg2[2] * 0.1473192f + (arg2[30] * 0.1301976f - arg2[12] * 0.2077235f);
            fVar8 = arg3[2] * 0.1473192f + (arg3[30] * 0.1301976f - arg3[12] * 0.2077235f);
            fVar23 = arg2[34] * fVar8 + arg3[34] * fVar2 + fVar23;
            arg1[24] = fVar23;
            arg1[34] = fVar8 * arg2[24] + fVar2 * arg3[24] + arg1[34];
            fVar2 = arg3[24] * arg2[34] + arg3[34] * arg2[24];
            arg1[12] = fVar25 - fVar2 * 0.2077235f;
            fVar33 = fVar2 * 0.1301976f + fVar33;
            arg1[30] = fVar33;
            arg1[2] = fVar2 * 0.1473192f + fVar29;
            arg1[25] = (arg3[20] * 0.1301976f + arg3[6] * -0.24260889 + *arg3 * 0.2820948f) * arg2[25] +
                       (arg2[20] * 0.1301976f + arg2[6] * -0.24260889 + *arg2 * 0.2820948f) * arg3[25] + fVar6;
            fVar2 = arg3[25] * arg2[25];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar5 = fVar2 * -0.24260889 + fVar5;
            fVar13 = fVar2 * 0.1301976f + fVar13;
            *arg1 = fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            arg1[26] = (*arg3 * 0.2820948f + arg3[20] * -0.1301976 + arg3[6] * -0.09704356) * arg2[26] +
                       (*arg2 * 0.2820948f + arg2[20] * -0.1301976 + arg2[6] * -0.09704356) * arg3[26] + arg1[26];
            fVar2 = arg3[26] * arg2[26];
            fVar5 = fVar2 * -0.09704356 + fVar5;
            fVar13 = fVar2 * -0.1301976 + fVar13;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            arg1[6] = fVar5;
            arg1[20] = fVar13;
            *arg1 = fVar4;
            arg1[27] = (arg3[6] * 0.016173927f + arg3[20] * -0.1301976 + *arg3 * 0.2820948f) * arg2[27] +
                       (arg2[6] * 0.016173927f + arg2[20] * -0.1301976 + *arg2 * 0.2820948f) * arg3[27] + fVar9;
            fVar2 = arg3[27] * arg2[27];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar13 = fVar2 * -0.1301976 + fVar13;
            fVar5 = fVar2 * 0.016173927f + fVar5;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            arg1[6] = fVar5;
            arg1[28] = (arg3[24] * -0.12837656 + arg3[20] * -0.0216996 + *arg3 * 0.2820948f + arg3[6] * 0.09704356f) *
                           arg2[28] +
                       (arg2[24] * -0.12837656 + arg2[20] * -0.0216996 + *arg2 * 0.2820948f + arg2[6] * 0.09704356f) *
                           arg3[28] +
                       arg1[28];
            fVar2 = arg3[28] * arg2[28];
            fVar5 = fVar2 * 0.09704356f + fVar5;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar13 = fVar2 * -0.0216996 + fVar13;
            fVar23 = fVar2 * -0.12837656 + fVar23;
            arg1[6] = fVar5;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            arg1[24] = fVar23;
            arg1[29] = (arg3[8] * -0.1400703 + arg3[22] * -0.09704356 + *arg3 * 0.2820948f + arg3[6] * 0.14556533f +
                        arg3[20] * 0.0867984) *
                           arg2[29] +
                       (arg2[8] * -0.1400703 + arg2[22] * -0.09704356 + *arg2 * 0.2820948f + arg2[6] * 0.14556533f +
                        arg2[20] * 0.0867984) *
                           arg3[29] +
                       arg1[29];
            fVar2 = arg3[29] * arg2[29];
            fVar13 = fVar2 * 0.0867984 + fVar13;
            fVar5 = fVar2 * 0.14556533f + fVar5;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar30 = fVar2 * -0.09704356 + fVar30;
            arg1[20] = fVar13;
            arg1[6] = fVar5;
            *arg1 = fVar4;
            arg1[22] = fVar30;
            arg1[8] = fVar2 * -0.1400703 + arg1[8];
            arg1[30] = (arg3[6] * 0.16173929f + arg3[20] * 0.13019763f + *arg3 * 0.2820948f) * arg2[30] +
                       (arg2[6] * 0.16173929f + arg2[20] * 0.13019763f + *arg2 * 0.2820948f) * arg3[30] + fVar33;
            fVar2 = arg3[30] * arg2[30];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            fVar13 = fVar2 * 0.13019763f + fVar13;
            fVar5 = fVar2 * 0.16173929f + fVar5;
            *arg1 = fVar4;
            arg1[20] = fVar13;
            arg1[6] = fVar5;
            arg1[31] = (*arg3 * 0.2820948f + arg3[22] * 0.09704356f + arg3[20] * 0.0867984 + arg3[8] * 0.1400703f +
                        arg3[6] * 0.14556533f) *
                           arg2[31] +
                       (*arg2 * 0.2820948f + arg2[22] * 0.09704356f + arg2[20] * 0.0867984 + arg2[8] * 0.1400703f +
                        arg2[6] * 0.14556533f) *
                           arg3[31] +
                       fVar12;
            fVar2 = arg3[31] * arg2[31];
            fVar5 = fVar2 * 0.14556533f + fVar5;
            arg1[6] = fVar5;
            arg1[8] = fVar2 * 0.1400703f + arg1[8];
            fVar13 = fVar2 * 0.0867984 + fVar13;
            arg1[20] = fVar13;
            arg1[22] = fVar2 * 0.09704356f + fVar30;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            *arg1 = fVar4;
            arg1[32] = (arg3[6] * 0.09704356f + arg3[20] * -0.0216996 + arg3[24] * 0.12837656f + *arg3 * 0.2820948f) *
                           arg2[32] +
                       (arg2[6] * 0.09704356f + arg2[20] * -0.0216996 + arg2[24] * 0.12837656f + *arg2 * 0.2820948f) *
                           arg3[32] +
                       fVar10;
            fVar2 = arg3[32] * arg2[32];
            fVar4 = fVar2 * 0.2820948f + fVar4;
            *arg1 = fVar4;
            arg1[24] = fVar2 * 0.12837656f + fVar23;
            fVar13 = fVar2 * -0.0216996 + fVar13;
            arg1[20] = fVar13;
            fVar5 = fVar2 * 0.09704356f + fVar5;
            arg1[6] = fVar5;
            arg1[33] = (*arg3 * 0.2820948f + arg3[20] * -0.1301976 + arg3[6] * 0.016173927f) * arg2[33] +
                       (*arg2 * 0.2820948f + arg2[20] * -0.1301976 + arg2[6] * 0.016173927f) * arg3[33] + fVar17;
            fVar2 = arg3[33] * arg2[33];
            fVar5 = fVar2 * 0.016173927f + fVar5;
            arg1[6] = fVar5;
            fVar13 = fVar2 * -0.1301976 + fVar13;
            arg1[20] = fVar13;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            *arg1 = fVar4;
            arg1[34] = (*arg3 * 0.2820948f + arg3[6] * -0.09704356 + arg3[20] * -0.1301976) * arg2[34] +
                       (*arg2 * 0.2820948f + arg2[6] * -0.09704356 + arg2[20] * -0.1301976) * arg3[34] + arg1[34];
            fVar2 = arg3[34] * arg2[34];
            fVar13 = fVar2 * -0.1301976 + fVar13;
            arg1[20] = fVar13;
            fVar5 = fVar2 * -0.09704356 + fVar5;
            arg1[6] = fVar5;
            fVar4 = fVar2 * 0.2820948f + fVar4;
            *arg1 = fVar4;
            arg1[35] = (arg3[20] * 0.1301976f + *arg3 * 0.2820948f + arg3[6] * -0.24260889) * arg2[35] +
                       (arg2[20] * 0.1301976f + *arg2 * 0.2820948f + arg2[6] * -0.24260889) * arg3[35] + fVar7;
            fVar2 = arg3[35] * arg2[35];
            arg1[6] = fVar2 * -0.24260889 + fVar5;
            *arg1 = fVar2 * 0.2820948f + fVar4;
            arg1[20] = fVar2 * 0.1301976f + fVar13;
            pfVar1 = arg1;
        }
        return pfVar1;
    }

    // 0x1008c5260
    unsigned long SHEvalDirectionalLight(unsigned long arg1, const math::Vector4T<float>& vector41,
                                         const math::Vector4T<float>& vector42, float* arg4, float* arg5, float* arg6) {
        float fVar1;
        float* pfVar2;
        long lVar3;
        long lVar4;
        uint64_t unaff_R14;
        float fVar6;
        float local_c8[36];

        bool bVar5 = 4 < arg1 - 2;
        if (!bVar5 && arg4 != nullptr) {
            SHEvalDirection(local_c8, arg1, vector41);
            fVar6 = (float)CosWtInt(arg1);
            fVar6 = 3.1415927f / fVar6;
            lVar4 = arg1 * arg1;
            pfVar2 = (float*)vector42.SSOBeginPtr();
            if (lVar4 != 0) {
                fVar1 = *pfVar2;
                lVar3 = 0;
                do {
                    arg4[lVar3] = local_c8[lVar3] * fVar1 * fVar6;
                    lVar3 = lVar3 + 1;
                } while (lVar4 != lVar3);
            }
            if (arg5 != nullptr) {
                pfVar2 = (float*)vector42.y();
                if (lVar4 != 0) {
                    fVar1 = *pfVar2;
                    lVar3 = 0;
                    do {
                        arg5[lVar3] = local_c8[lVar3] * fVar1 * fVar6;
                        lVar3 = lVar3 + 1;
                    } while (lVar4 != lVar3);
                }
            }
            if (arg6 != nullptr) {
                pfVar2 = (float*)vector42.second();
                if (lVar4 != 0) {
                    fVar1 = *pfVar2;
                    lVar3 = 0;
                    do {
                        arg6[lVar3] = local_c8[lVar3] * fVar6 * fVar1;
                        lVar3 = lVar3 + 1;
                    } while (lVar4 != lVar3);
                }
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)(bVar5 || arg4 == nullptr)) ^
                1) &
               4294967295;
    }

    // 0x1008c53f0
    float CosWtInt(unsigned long arg1) {
        float fVar1 = *(float*)(&DAT_100d4b708 + (unsigned long)(2 < arg1) * 4);
        if (4 < arg1) {
            fVar1 = fVar1 - 0.09375f;
        }
        return fVar1;
    }

    // 0x1008c5420
    unsigned long SHEvalSphericalLight(unsigned long arg1, const math::Vector4T<float>& vector41, float arg3,
                                       const math::Vector4T<float>& vector42, float* arg5, float* arg6, float* arg7) {
        ReturnValue* pRVar1;
        uint32_t* puVar2;
        float* pfVar3;
        long lVar4;
        float* pfVar5;
        ReturnValue* pRVar7;
        unsigned long uVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        float fVar11;
        float fVar12;
        uint32_t uVar13;
        ReturnValue local_128;
        uint32_t local_120;
        float local_10c;
        long local_f8;
        unsigned long local_f0;
        float local_e8[8];
        ReturnValue local_c8;
        float local_c0;

        unsigned long uVar6 = 0;
        if ((arg5 != nullptr) && (uVar13 = 0, 0.0 <= arg3)) {
            local_f0 = (((uint64_t)local_f0._4_4_ << 32) | (uint32_t)arg3);
            local_c8 = (ReturnValue)vector41.GetXYZ();
            local_c0 = (float)uVar13;
            fVar11 = (float)local_c8.Length();
            if (fVar11 <= (float)local_f0) {
                fVar12 = 1.5707964f;
                fVar11 = (float)local_f0;
            } else {
                fVar11 = (float)local_f0 / fVar11;
                fVar12 = (float)asin(fVar11);
            }
            local_f0._0_4_ = fVar12;
            local_c8 = (ReturnValue)vector41.GetXYZ();
            pRVar7 = &local_c8;
            local_c0 = fVar11;
            pRVar1 = *pRVar7 = math::Vector3T<float>::Normalize();
            uVar10 = arg1;
            local_128 = *pRVar1;
            local_120 = *(uint32_t*)(pRVar1 + 1);
            ComputeCapInt(arg1, (float)local_f0, local_e8);
            puVar2 = (uint32_t*)local_128.SSOBeginPtr();
            local_f0 = (((uint64_t)local_f0._4_4_ << 32) | (uint32_t)(*puVar2));
            puVar2 = (uint32_t*)local_128.y();
            local_f8 = (((uint64_t)local_f8._4_4_ << 32) | (uint32_t)(*puVar2));
            pfVar3 = (float*)local_128.second();
            uVar6 = uVar10 - 2;
            if (uVar6 < 5) {
                fVar11 = *pfVar3;
                switch (uVar6) {
                case 0:
                    sh_eval_basis_1((float)local_f0, (float)local_f8, fVar11, (float*)&local_c8);
                    break;
                case 1:
                    sh_eval_basis_2((float)local_f0, (float)local_f8, fVar11, (float*)&local_c8);
                    break;
                case 2:
                    sh_eval_basis_3((float)local_f0, (float)local_f8, fVar11, (float*)&local_c8);
                    break;
                case 3:
                    sh_eval_basis_4((float)local_f0, (float)local_f8, fVar11, (float*)&local_c8);
                    break;
                case 4:
                    sh_eval_basis_5((float)local_f0, (float)local_f8, fVar11, (float*)&local_c8);
                }
                if (arg1 != 0) {
                    uVar6 = 1;
                    lVar4 = 4;
                    uVar8 = 0;
                    do {
                        uVar10 = 1;
                        if (1 < uVar6) {
                            uVar10 = uVar6;
                        }
                        local_10c = local_e8[uVar8];
                        local_f8 = lVar4;
                        local_f0 = uVar6;
                        pfVar3 = (float*)vector42.SSOBeginPtr();
                        fVar11 = *pfVar3;
                        fVar12 = (float)(&fExtraNormFac)[uVar8];
                        uVar6 = 0;
                        do {
                            arg5[uVar6] = *(float*)(&pRVar7->field_0 + uVar6 * 4) * local_10c * fVar11 * fVar12;
                            uVar6 = uVar6 + 1;
                        } while (uVar10 != uVar6);
                        uVar8 = uVar8 + 1;
                        uVar6 = local_f0 + 2;
                        arg5 = (float*)((long)arg5 + local_f8);
                        pRVar7 = (ReturnValue*)(&pRVar7->field_0 + local_f8);
                        lVar4 = local_f8 + 8;
                    } while (uVar8 != arg1);
                }
                if ((arg6 != nullptr) && (arg1 != 0)) {
                    uVar8 = 1;
                    uVar6 = 4;
                    pRVar7 = &local_c8;
                    uVar10 = 0;
                    do {
                        uVar9 = 1;
                        if (1 < uVar8) {
                            uVar9 = uVar8;
                        }
                        local_f8 = (((uint64_t)local_f8._4_4_ << 32) | (uint32_t)local_e8[uVar10]);
                        local_f0 = uVar6;
                        pfVar3 = (float*)vector42.y();
                        fVar11 = *pfVar3;
                        fVar12 = (float)(&fExtraNormFac)[uVar10];
                        uVar6 = 0;
                        do {
                            arg6[uVar6] = *(float*)(&pRVar7->field_0 + uVar6 * 4) * (float)local_f8 * fVar11 * fVar12;
                            uVar6 = uVar6 + 1;
                        } while (uVar9 != uVar6);
                        uVar10 = uVar10 + 1;
                        uVar8 = uVar8 + 2;
                        arg6 = (float*)((long)arg6 + local_f0);
                        pRVar7 = (ReturnValue*)(&pRVar7->field_0 + local_f0);
                        uVar6 = local_f0 + 8;
                    } while (uVar10 != arg1);
                }
                uVar6 = (((uint64_t)((int64_t)(uVar10 >> 8)) << 8) | (uint8_t)1);
                if ((arg7 != nullptr) && (arg1 != 0)) {
                    uVar10 = 1;
                    uVar6 = 4;
                    pRVar7 = &local_c8;
                    uVar8 = 0;
                    pfVar3 = arg7;
                    do {
                        uVar9 = 1;
                        if (1 < uVar10) {
                            uVar9 = uVar10;
                        }
                        local_f8 = (((uint64_t)local_f8._4_4_ << 32) | (uint32_t)local_e8[uVar8]);
                        local_f0 = uVar6;
                        pfVar5 = (float*)vector42.second();
                        fVar11 = *pfVar5;
                        fVar12 = (float)(&fExtraNormFac)[uVar8];
                        uVar6 = 0;
                        do {
                            pfVar3[uVar6] = *(float*)(&pRVar7->field_0 + uVar6 * 4) * (float)local_f8 * fVar11 * fVar12;
                            uVar6 = uVar6 + 1;
                        } while (uVar9 != uVar6);
                        uVar8 = uVar8 + 1;
                        uVar10 = uVar10 + 2;
                        pfVar3 = (float*)((long)pfVar3 + local_f0);
                        pRVar7 = (ReturnValue*)(&pRVar7->field_0 + local_f0);
                        uVar6 = local_f0 + 8;
                    } while (uVar8 != arg1);
                    uVar6 = (((uint64_t)((int64_t)(uVar8 >> 8)) << 8) | (uint8_t)1);
                }
            } else {
                if (uVar6 < 5) {
                    LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                              4677, nullptr);
                }
                uVar6 = 0;
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x1008c5950
    void ComputeCapInt(unsigned long arg1, float arg2, float* arg3) {
        float fVar2 = (float)::cos(arg2);
        float fVar1 = ComputeCapInt_t1;
        float fVar4 = ComputeCapInt_t1 * fVar2;
        float fVar3 = (float)::sin(arg2);
        *arg3 = fVar1 - fVar4;
        fVar1 = ComputeCapInt_t1;
        arg3[1] = fVar3 * fVar3 * ComputeCapInt_t1 * 0.5 * ComputeCapInt_t5;
        if (2 < arg1) {
            fVar3 = fVar2 * fVar2;
            arg3[2] = fVar2 * -0.5 * (fVar3 - 1.0) * fVar1 * ComputeCapInt_t11;
            if (arg1 != 3) {
                fVar2 = fVar3 * fVar3;
                arg3[3] = (fVar3 * 0.75 + fVar2 * -0.625 - 0.125) * ComputeCapInt_t18 * fVar1;
                if ((4 < arg1) && (arg3[4] = (fVar3 * -10.0 + 3.0 + fVar2 * 7.0) * fVar4 * -0.375, arg1 != 5)) {
                    arg3[5] = ((fVar3 * -1.3125 + 2.1875) * fVar2 + 0.0625) * fVar1 * ComputeCapInt_t32 +
                              fVar3 * fVar1 * ComputeCapInt_t32 * -0.9375;
                }
            }
        }
    }

    // 0x1008c5ae0
    unsigned long SHEvalConeLight(unsigned long arg1, const math::Vector4T<float>& vector41, float arg3,
                                  const math::Vector4T<float>& vector42, float* arg5, float* arg6, float* arg7) {
        float fVar1;
        float fVar2;
        unsigned int uVar3;
        float* pfVar4;
        long lVar5;
        float* pfVar6;
        unsigned long uVar7;
        unsigned long uVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        float fVar11;
        float fVar12;
        float local_e8[36];
        float local_58[8];

        if (arg5 != nullptr) {
            uVar10 = 0;
            if ((arg3 < 0.0) || (3.1416242f < arg3))
                goto LAB_1008c5c51;
            if (arg3 < 0.0001) {
                uVar3 = SHEvalDirectionalLight(arg1, vector41, vector42, arg5, arg6, arg7);
                uVar10 = (unsigned long)uVar3;
                goto LAB_1008c5c51;
            }
            fVar12 = 1.5707964f;
            if (arg3 <= 1.5707964f) {
                fVar12 = arg3;
            }
            fVar11 = (float)::sin(fVar12);
            ComputeCapInt(arg1, arg3, local_58);
            pfVar4 = (float*)vector41.SSOBeginPtr();
            fVar12 = *pfVar4;
            pfVar4 = (float*)vector41.y();
            fVar1 = *pfVar4;
            pfVar4 = (float*)vector41.second();
            uVar10 = arg1 - 2;
            if (uVar10 < 5) {
                fVar2 = *pfVar4;
                switch (uVar10) {
                case 0:
                    sh_eval_basis_1(fVar12, fVar1, fVar2, local_e8);
                    break;
                case 1:
                    sh_eval_basis_2(fVar12, fVar1, fVar2, local_e8);
                    break;
                case 2:
                    sh_eval_basis_3(fVar12, fVar1, fVar2, local_e8);
                    break;
                case 3:
                    sh_eval_basis_4(fVar12, fVar1, fVar2, local_e8);
                    break;
                case 4:
                    sh_eval_basis_5(fVar12, fVar1, fVar2, local_e8);
                }
                fVar12 = 1.0 / (fVar11 * fVar11);
                uVar10 = 0;
                if (arg1 != 0) {
                    uVar8 = 1;
                    lVar5 = 4;
                    pfVar4 = local_e8;
                    uVar9 = 0;
                    do {
                        uVar10 = 1;
                        if (1 < uVar8) {
                            uVar10 = uVar8;
                        }
                        fVar1 = local_58[uVar9];
                        pfVar6 = (float*)vector42.SSOBeginPtr();
                        fVar11 = *pfVar6;
                        fVar2 = (float)(&fExtraNormFac)[uVar9];
                        uVar7 = 0;
                        do {
                            arg5[uVar7] = pfVar4[uVar7] * fVar1 * fVar12 * fVar11 * fVar2;
                            uVar7 = uVar7 + 1;
                        } while (uVar10 != uVar7);
                        uVar9 = uVar9 + 1;
                        uVar8 = uVar8 + 2;
                        arg5 = (float*)((long)arg5 + lVar5);
                        pfVar4 = (float*)((long)pfVar4 + lVar5);
                        lVar5 = lVar5 + 8;
                    } while (uVar9 != arg1);
                }
                if ((arg6 != nullptr) && (arg1 != 0)) {
                    uVar10 = 1;
                    lVar5 = 4;
                    pfVar4 = local_e8;
                    uVar8 = 0;
                    do {
                        uVar9 = 1;
                        if (1 < uVar10) {
                            uVar9 = uVar10;
                        }
                        fVar1 = local_58[uVar8];
                        pfVar6 = (float*)vector42.y();
                        fVar11 = *pfVar6;
                        fVar2 = (float)(&fExtraNormFac)[uVar8];
                        uVar7 = 0;
                        do {
                            arg6[uVar7] = pfVar4[uVar7] * fVar1 * fVar12 * fVar11 * fVar2;
                            uVar7 = uVar7 + 1;
                        } while (uVar9 != uVar7);
                        uVar8 = uVar8 + 1;
                        uVar10 = uVar10 + 2;
                        arg6 = (float*)((long)arg6 + lVar5);
                        pfVar4 = (float*)((long)pfVar4 + lVar5);
                        lVar5 = lVar5 + 8;
                    } while (uVar8 != arg1);
                }
                uVar10 = (((uint64_t)((int64_t)(uVar10 >> 8)) << 8) | (uint8_t)1);
                if ((arg7 != nullptr) && (arg1 != 0)) {
                    uVar10 = 1;
                    lVar5 = 4;
                    pfVar4 = local_e8;
                    uVar8 = 0;
                    do {
                        uVar9 = 1;
                        if (1 < uVar10) {
                            uVar9 = uVar10;
                        }
                        fVar1 = local_58[uVar8];
                        pfVar6 = (float*)vector42.second();
                        fVar11 = *pfVar6;
                        fVar2 = (float)(&fExtraNormFac)[uVar8];
                        uVar7 = 0;
                        do {
                            arg7[uVar7] = pfVar4[uVar7] * fVar1 * fVar12 * fVar11 * fVar2;
                            uVar7 = uVar7 + 1;
                        } while (uVar9 != uVar7);
                        uVar8 = uVar8 + 1;
                        uVar10 = uVar10 + 2;
                        arg7 = (float*)((long)arg7 + lVar5);
                        pfVar4 = (float*)((long)pfVar4 + lVar5);
                        lVar5 = lVar5 + 8;
                    } while (uVar8 != arg1);
                    uVar10 = (((uint64_t)((int64_t)(uVar10 >> 8)) << 8) | (uint8_t)1);
                }
                goto LAB_1008c5c51;
            }
            if (uVar10 < 5) {
                LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                          4796, nullptr);
            }
        }
        uVar10 = 0;
    LAB_1008c5c51:
        return uVar10 & 4294967295;
    }

    // 0x1008c5fe0
    unsigned long SHEvalHemisphereLight(unsigned long arg1, const math::Vector4T<float>& vector41,
                                        const math::Vector4T<float>& vector42, const math::Vector4T<float>& vector43,
                                        float* arg5, float* arg6, float* arg7) {
        float fVar1;
        float fVar2;
        float* pfVar3;
        float* pfVar4;
        long lVar5;
        long lVar7;
        long lVar8;
        unsigned long uVar9;
        unsigned long uVar10;
        long lVar11;
        unsigned long uVar13;
        float local_e8[8];
        float local_c8[36];

        unsigned long uVar12 = arg1 - 2;
        bool bVar14 = 4 < uVar12;
        uint64_t uVar6 = (uint64_t)(uVar12 >> 8);
        if (!bVar14 && arg5 != nullptr) {
            pfVar3 = (float*)vector41.SSOBeginPtr();
            fVar1 = *pfVar3;
            pfVar3 = (float*)vector41.y();
            fVar2 = *pfVar3;
            pfVar4 = (float*)vector41.second();
            pfVar3 = local_c8;
            sh_eval_basis_1(fVar1, fVar2, *pfVar4, pfVar3);
            pfVar4 = (float*)vector42.SSOBeginPtr();
            fVar1 = *pfVar4;
            pfVar4 = (float*)vector42.SSOBeginPtr();
            fVar2 = *pfVar4;
            pfVar4 = (float*)vector43.SSOBeginPtr();
            local_e8[0] = (fVar2 + *pfVar4) * SHEvalHemisphereLight_fSqrtPi;
            local_e8[1] =
                (SHEvalHemisphereLight_fSqrtPi3 + SHEvalHemisphereLight_fSqrtPi3) * ((fVar2 + *pfVar4) * -0.5 + fVar1);
            lVar5 = 1;
            lVar8 = 4;
            lVar7 = 0;
            pfVar4 = arg5;
            do {
                fVar1 = local_e8[lVar7];
                fVar2 = (float)(&fExtraNormFac)[lVar7];
                lVar11 = 0;
                do {
                    pfVar4[lVar11] = pfVar3[lVar11] * fVar1 * 1.5 * fVar2;
                    lVar11 = lVar11 + 1;
                } while (lVar5 != lVar11);
                lVar7 = lVar7 + 1;
                lVar5 = lVar5 + 2;
                pfVar4 = (float*)((long)pfVar4 + lVar8);
                pfVar3 = (float*)((long)pfVar3 + lVar8);
                lVar8 = lVar8 + 8;
            } while (lVar7 != 2);
            if (2 < arg1) {
                pfVar3 = arg5 + 4;
                lVar7 = 20;
                uVar13 = uVar12;
                do {
                    lVar5 = ___bzero(pfVar3, lVar7);
                    pfVar3 = (float*)((long)pfVar3 + lVar7);
                    lVar7 = lVar7 + 8;
                    uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
            }
            if (arg6 != nullptr) {
                pfVar3 = (float*)vector42.y();
                fVar1 = *pfVar3;
                pfVar3 = (float*)vector42.y();
                fVar2 = *pfVar3;
                pfVar3 = (float*)vector43.y();
                local_e8[0] = (fVar2 + *pfVar3) * SHEvalHemisphereLight_fSqrtPi;
                local_e8[1] = (SHEvalHemisphereLight_fSqrtPi3 + SHEvalHemisphereLight_fSqrtPi3) *
                              ((fVar2 + *pfVar3) * -0.5 + fVar1);
                lVar5 = 1;
                lVar8 = 4;
                pfVar3 = local_c8;
                lVar7 = 0;
                pfVar4 = arg6;
                do {
                    fVar1 = local_e8[lVar7];
                    fVar2 = (float)(&fExtraNormFac)[lVar7];
                    lVar11 = 0;
                    do {
                        pfVar4[lVar11] = pfVar3[lVar11] * fVar1 * 1.5 * fVar2;
                        lVar11 = lVar11 + 1;
                    } while (lVar5 != lVar11);
                    lVar7 = lVar7 + 1;
                    lVar5 = lVar5 + 2;
                    pfVar4 = (float*)((long)pfVar4 + lVar8);
                    pfVar3 = (float*)((long)pfVar3 + lVar8);
                    lVar8 = lVar8 + 8;
                } while (lVar7 != 2);
                if (2 < arg1) {
                    pfVar3 = arg6 + 4;
                    uVar9 = 5;
                    lVar7 = 20;
                    uVar13 = uVar12;
                    do {
                        uVar10 = 1;
                        if (1 < uVar9) {
                            uVar10 = uVar9;
                        }
                        lVar5 = ___bzero(pfVar3, uVar10 << 2);
                        pfVar3 = (float*)((long)pfVar3 + lVar7);
                        uVar9 = uVar9 + 2;
                        lVar7 = lVar7 + 8;
                        uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                }
            }
            if (arg7 != nullptr) {
                pfVar3 = (float*)vector42.second();
                fVar1 = *pfVar3;
                pfVar3 = (float*)vector42.second();
                fVar2 = *pfVar3;
                pfVar3 = (float*)vector43.second();
                local_e8[0] = (fVar2 + *pfVar3) * SHEvalHemisphereLight_fSqrtPi;
                local_e8[1] = (SHEvalHemisphereLight_fSqrtPi3 + SHEvalHemisphereLight_fSqrtPi3) *
                              ((fVar2 + *pfVar3) * -0.5 + fVar1);
                lVar5 = 1;
                lVar8 = 4;
                pfVar3 = local_c8;
                lVar7 = 0;
                pfVar4 = arg7;
                do {
                    fVar1 = local_e8[lVar7];
                    fVar2 = (float)(&fExtraNormFac)[lVar7];
                    lVar11 = 0;
                    do {
                        pfVar4[lVar11] = pfVar3[lVar11] * fVar1 * 1.5 * fVar2;
                        lVar11 = lVar11 + 1;
                    } while (lVar5 != lVar11);
                    lVar7 = lVar7 + 1;
                    lVar5 = lVar5 + 2;
                    pfVar4 = (float*)((long)pfVar4 + lVar8);
                    pfVar3 = (float*)((long)pfVar3 + lVar8);
                    lVar8 = lVar8 + 8;
                } while (lVar7 != 2);
                if (2 < arg1) {
                    pfVar3 = arg7 + 4;
                    uVar13 = 5;
                    lVar7 = 20;
                    do {
                        uVar9 = 1;
                        if (1 < uVar13) {
                            uVar9 = uVar13;
                        }
                        lVar5 = ___bzero(pfVar3, uVar9 << 2);
                        pfVar3 = (float*)((long)pfVar3 + lVar7);
                        uVar13 = uVar13 + 2;
                        lVar7 = lVar7 + 8;
                        uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                }
            }
            uVar6 = (uint64_t)((unsigned long)lVar5 >> 8);
        }
        return bVar14 || arg5 == nullptr ^ 1;
    }

} // namespace jag::graphics

// 0x1008b4780
void cos(float arg1) {
    _cosf();
}

// 0x1008b4790
void sin(float arg1) {
    _sinf();
}

// 0x1008c5940
void asin(float arg1) {
    _asinf();
}
