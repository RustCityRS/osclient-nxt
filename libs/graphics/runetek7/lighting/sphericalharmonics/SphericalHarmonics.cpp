// libs/graphics/runetek7/lighting/sphericalharmonics/SphericalHarmonics.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x1008b2d10, 288 bytes, placed by debug map only (low confidence)
    // SHEvalDirection(float*, unsigned long, math::Vector4T<float> const&)
    float* SHEvalDirection(float* param_1, ulong param_2, Vector4T* param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        vector* pvVar4;
        float* pfVar5;
        ulong uVar6;

        if (param_1 != (float*)0) {
            pvVar4 = param_3->SSOBeginPtr(param_2);
            fVar1 = *(float*)pvVar4;
            pfVar5 = (float*)param_3->y();
            fVar2 = *pfVar5;
            pfVar5 = (float*)param_3->second();
            uVar6 = param_2 - 2;
            if (uVar6 < 5) {
                fVar3 = *pfVar5;
                switch (uVar6) {
                case 0:
                    sh_eval_basis_1(fVar1, fVar2, fVar3, param_1);
                    return param_1;
                case 1:
                    sh_eval_basis_2(fVar1, fVar2, fVar3, param_1);
                    return param_1;
                case 2:
                    sh_eval_basis_3(fVar1, fVar2, fVar3, param_1);
                    return param_1;
                case 3:
                    sh_eval_basis_4(fVar1, fVar2, fVar3, param_1);
                    return param_1;
                case 4:
                    sh_eval_basis_5(fVar1, fVar2, fVar3, param_1);
                    return param_1;
                }
            }
            if (uVar6 < 5) {
                /* WARNING: Subroutine does not return */
                LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                          1052, (char*)0);
            }
        }
        return (float*)0;
    }

    // 0x1008b2e30, 64 bytes, placed by neighbouring functions
    // sh_eval_basis_1(float, float, float, float*)
    void sh_eval_basis_1(float param_1, float param_2, float param_3, float* param_4) {
        *param_4 = 0.2820948;
        param_4[2] = param_3 * 0.48860252;
        param_4[1] = param_2 * -0.48860252;
        param_4[3] = param_1 * -0.48860252;
    }

    // 0x1008b2e70, 160 bytes, placed by neighbouring functions
    // sh_eval_basis_2(float, float, float, float*)
    void sh_eval_basis_2(float param_1, float param_2, float param_3, float* param_4) {
        *param_4 = 0.2820948;
        param_4[2] = param_3 * 0.48860252;
        param_4[6] = param_3 * param_3 * 0.9461747 + -0.31539157;
        param_4[1] = param_2 * -0.48860252;
        param_4[3] = param_1 * -0.48860252;
        param_4[5] = param_3 * -1.0925485 * param_2;
        param_4[7] = param_3 * -1.0925485 * param_1;
        param_4[4] = param_2 * param_1 * 1.0925485;
        param_4[8] = (param_1 * param_1 - param_2 * param_2) * 0.54627424;
    }

    // 0x1008b2f10, 352 bytes, placed by neighbouring functions
    // sh_eval_basis_3(float, float, float, float*)
    void sh_eval_basis_3(float param_1, float param_2, float param_3, float* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;

        fVar1 = param_3 * param_3;
        *param_4 = 0.2820948;
        param_4[2] = param_3 * 0.48860252;
        param_4[6] = fVar1 * 0.9461747 + -0.31539157;
        param_4[12] = (fVar1 * 1.8658817 + -1.119529) * param_3;
        fVar1 = fVar1 * -2.285229 + 0.4570458;
        fVar3 = (param_2 + param_2) * param_1;
        fVar2 = param_1 * param_1 - param_2 * param_2;
        param_4[1] = param_2 * -0.48860252;
        param_4[3] = param_1 * -0.48860252;
        param_4[5] = param_3 * -1.0925485 * param_2;
        param_4[7] = param_3 * -1.0925485 * param_1;
        param_4[11] = fVar1 * param_2;
        param_4[13] = fVar1 * param_1;
        param_4[4] = fVar3 * 0.54627424;
        param_4[8] = fVar2 * 0.54627424;
        param_4[10] = param_3 * 1.4453057 * fVar3;
        param_4[14] = param_3 * 1.4453057 * fVar2;
        param_4[9] = (fVar2 * param_2 + fVar3 * param_1) * -0.5900436;
        param_4[15] = (fVar2 * param_1 - fVar3 * param_2) * -0.5900436;
    }

    // 0x1008b3070, 672 bytes, placed by neighbouring functions
    // sh_eval_basis_4(float, float, float, float*)
    void sh_eval_basis_4(float param_1, float param_2, float param_3, float* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        fVar5 = param_3 * param_3;
        *param_4 = 0.2820948;
        param_4[2] = param_3 * 0.48860252;
        fVar1 = fVar5 * 0.9461747 + -0.31539157;
        param_4[6] = fVar1;
        fVar2 = (fVar5 * 1.8658817 + -1.119529) * param_3;
        param_4[12] = fVar2;
        param_4[20] = fVar1 * -1.0062306 + param_3 * 1.9843135 * fVar2;
        fVar7 = fVar5 * -2.285229 + 0.4570458;
        fVar1 = (param_2 + param_2) * param_1;
        fVar2 = param_1 * param_1 - param_2 * param_2;
        fVar6 = fVar5 * 3.3116114 + -0.47308734;
        fVar4 = fVar2 * param_2 + fVar1 * param_1;
        fVar3 = fVar2 * param_1 - fVar1 * param_2;
        fVar5 = (fVar5 * -4.683326 + 2.0071397) * param_3;
        param_4[1] = param_2 * -0.48860252;
        param_4[3] = param_1 * -0.48860252;
        param_4[5] = param_3 * -1.0925485 * param_2;
        param_4[7] = param_3 * -1.0925485 * param_1;
        param_4[11] = fVar7 * param_2;
        param_4[13] = fVar7 * param_1;
        param_4[19] = fVar5 * param_2;
        param_4[21] = fVar5 * param_1;
        param_4[4] = fVar1 * 0.54627424;
        param_4[8] = fVar2 * 0.54627424;
        param_4[10] = param_3 * 1.4453057 * fVar1;
        param_4[14] = param_3 * 1.4453057 * fVar2;
        param_4[18] = fVar6 * fVar1;
        param_4[22] = fVar6 * fVar2;
        param_4[9] = fVar4 * -0.5900436;
        param_4[15] = fVar3 * -0.5900436;
        param_4[17] = fVar4 * param_3 * -1.7701308;
        param_4[23] = param_3 * -1.7701308 * fVar3;
        param_4[16] = (fVar3 * param_2 + fVar4 * param_1) * 0.6258357;
        param_4[24] = (fVar3 * param_1 - fVar4 * param_2) * 0.6258357;
    }

    // 0x1008b3310, 1040 bytes, placed by neighbouring functions
    // sh_eval_basis_5(float, float, float, float*)
    void sh_eval_basis_5(float param_1, float param_2, float param_3, float* param_4) {
        float fVar1;
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

        fVar3 = param_3 * param_3;
        *param_4 = 0.2820948;
        param_4[2] = param_3 * 0.48860252;
        fVar1 = fVar3 * 0.9461747 + -0.31539157;
        param_4[6] = fVar1;
        fVar4 = (fVar3 * 1.8658817 + -1.119529) * param_3;
        param_4[12] = fVar4;
        fVar1 = fVar1 * -1.0062306 + param_3 * 1.9843135 * fVar4;
        param_4[20] = fVar1;
        param_4[30] = fVar4 * -1.002853 + param_3 * 1.9899749 * fVar1;
        fVar10 = fVar3 * -2.285229 + 0.4570458;
        fVar12 = (fVar3 * -4.683326 + 2.0071397) * param_3;
        fVar11 = fVar10 * -0.9910312 + param_3 * 2.0310097 * fVar12;
        fVar4 = (param_2 + param_2) * param_1;
        fVar5 = param_1 * param_1 - param_2 * param_2;
        fVar1 = fVar5 * param_2 + fVar4 * param_1;
        fVar9 = fVar3 * 3.3116114 + -0.47308734;
        fVar8 = (fVar3 * 7.190305 + -2.3967683) * param_3;
        fVar6 = fVar5 * param_1 - fVar4 * param_2;
        fVar2 = fVar6 * param_2 + fVar1 * param_1;
        fVar3 = fVar3 * -4.403145 + 0.4892383;
        fVar7 = fVar6 * param_1 - fVar1 * param_2;
        param_4[1] = param_2 * -0.48860252;
        param_4[3] = param_1 * -0.48860252;
        param_4[5] = param_3 * -1.0925485 * param_2;
        param_4[7] = param_3 * -1.0925485 * param_1;
        param_4[11] = fVar10 * param_2;
        param_4[13] = fVar10 * param_1;
        param_4[19] = fVar12 * param_2;
        param_4[21] = fVar12 * param_1;
        param_4[29] = fVar11 * param_2;
        param_4[31] = fVar11 * param_1;
        param_4[4] = fVar4 * 0.54627424;
        param_4[8] = fVar5 * 0.54627424;
        param_4[10] = param_3 * 1.4453057 * fVar4;
        param_4[14] = param_3 * 1.4453057 * fVar5;
        param_4[18] = fVar9 * fVar4;
        param_4[22] = fVar9 * fVar5;
        param_4[28] = fVar8 * fVar4;
        param_4[32] = fVar8 * fVar5;
        param_4[9] = fVar1 * -0.5900436;
        param_4[15] = fVar6 * -0.5900436;
        param_4[17] = fVar1 * param_3 * -1.7701308;
        param_4[23] = param_3 * -1.7701308 * fVar6;
        param_4[27] = fVar3 * fVar1;
        param_4[33] = fVar3 * fVar6;
        param_4[16] = fVar2 * 0.6258357;
        param_4[24] = fVar7 * 0.6258357;
        param_4[26] = fVar2 * param_3 * 2.0756624;
        param_4[34] = param_3 * 2.0756624 * fVar7;
        param_4[25] = (fVar7 * param_2 + fVar2 * param_1) * -0.6563821;
        param_4[35] = (fVar7 * param_1 - fVar2 * param_2) * -0.6563821;
    }

    // 0x1008b3720, 2096 bytes, placed by debug map only (low confidence)
    // SHRotate(float*, unsigned long, math::Matrix44T<float> const&, float const*)
    float* SHRotate(float* param_1, ulong param_2, Matrix44T* param_3, float* param_4) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        Vector4T<float>* pVVar9;
        float* pfVar10;
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
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pfVar10 = (float*)0;
        if (((param_1 != (float*)0) && (param_4 != (float*)0)) && (param_1 != param_4)) {
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 0);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 0);
            fVar1 = *pfVar10;
            local_58 = fVar1;
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 0);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 1);
            fVar2 = *pfVar10;
            local_4c = fVar2;
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 0);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 2);
            fVar3 = *pfVar10;
            local_40 = fVar3;
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 1);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 0);
            fVar4 = *pfVar10;
            local_54 = fVar4;
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 1);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 1);
            fVar5 = *pfVar10;
            local_48 = fVar5;
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 1);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 2);
            fVar6 = *pfVar10;
            local_3c = fVar6;
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 2);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 0);
            fVar7 = *pfVar10;
            local_50 = fVar7;
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 2);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 1);
            fVar8 = *pfVar10;
            local_44 = fVar8;
            pVVar9 = (Vector4T<float>*)math::Matrix44T<float>::operator[]((Matrix44T<float>*)param_3, 2);
            pfVar10 = (float*)math::Vector4T<float>::operator[](pVVar9, 2);
            local_38 = *pfVar10;
            *param_1 = *param_4;
            pfVar10 = param_1;
            switch (param_2 - 2) {
            case 0:
                param_1[1] = fVar2 * param_4[3] + (fVar5 * param_4[1] - fVar8 * param_4[2]);
                param_1[2] = local_38 * param_4[2] - (fVar3 * param_4[3] + fVar6 * param_4[1]);
                param_1[3] = fVar1 * param_4[3] + (fVar4 * param_4[1] - fVar7 * param_4[2]);
                break;
            case 1:
                param_1[1] = param_4[3] * fVar2 + (param_4[1] * fVar5 - param_4[2] * fVar8);
                param_1[2] = param_4[2] * local_38 - (param_4[3] * fVar3 + param_4[1] * fVar6);
                param_1[3] = param_4[3] * fVar1 + (param_4[1] * fVar4 - param_4[2] * fVar7);
                local_b8 = fVar2 * fVar1 - fVar5 * fVar4;
                local_b4 = -fVar3 * fVar5 - fVar6 * fVar2;
                local_b0 = fVar8 * fVar6 + local_38 * fVar5;
                local_ac = local_38 * -1.7320508 * fVar8;
                local_a8 = local_38 * fVar2 + fVar8 * fVar3;
                local_a4 = fVar5 * fVar6 - fVar2 * fVar3;
                local_a0 = fVar6 * 1.1547005 * fVar3 - (fVar5 * fVar2 + fVar4 * fVar1) * 0.57735026;
                local_9c = (fVar8 * fVar5 + fVar7 * fVar4) * 0.57735026 - local_38 * fVar6 * 1.1547005;
                local_98 = local_38 * local_38 - (fVar8 * fVar8 + fVar7 * fVar7) * 0.5;
                local_94 = (fVar8 * fVar2 + fVar7 * fVar1) * 0.57735026 - fVar3 * 1.1547005 * local_38;
                local_90 = (fVar3 * fVar3 - fVar6 * fVar6) * 0.57735026 +
                           (fVar4 * fVar4 + fVar5 * fVar5 + (fVar2 * -fVar2 - fVar1 * fVar1)) * 0.28867513;
                local_8c = -fVar4 * fVar3 - fVar6 * fVar1;
                local_88 = fVar7 * fVar6 + local_38 * fVar4;
                local_84 = local_38 * -1.7320508 * fVar7;
                local_80 = fVar7 * fVar3 + local_38 * fVar1;
                local_7c = fVar6 * fVar4 - fVar3 * fVar1;
                local_78 = fVar4 * fVar1 - fVar5 * fVar2;
                local_74 = fVar8 * fVar5 - fVar7 * fVar4;
                local_70 = (fVar7 * fVar7 - fVar8 * fVar8) * 0.8660254;
                local_6c = fVar8 * fVar2 - fVar7 * fVar1;
                local_68 = (((fVar1 * fVar1 + fVar2 * -fVar2) - fVar4 * fVar4) + fVar5 * fVar5) * 0.5;
                pfVar11 = &local_b8;
                lVar12 = 4;
                do {
                    param_1[lVar12] = param_4[8] * *pfVar11 + param_4[7] * pfVar11[-1] + param_4[6] * pfVar11[-2] +
                                      param_4[5] * pfVar11[-3] + param_4[4] * pfVar11[-4];
                    lVar12 = lVar12 + 1;
                    pfVar11 = pfVar11 + 5;
                } while (lVar12 != 9);
                break;
            case 2:
                sh3_rot(&local_58, param_4, param_1);
                break;
            case 3:
                sh4_rot(&local_58, param_4, param_1);
                break;
            case 4:
                sh5_rot(&local_58, param_4, param_1);
                break;
            default:
                if (param_2 - 2 < 5) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                              1205, (char*)0);
                }
                pfVar10 = (float*)0;
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pfVar10;
    }

    // 0x1008b3f50, 112 bytes, inline, placed by debug map only (low confidence)
    // sh3_rot(float*, float*, float*)
    void sh3_rot(float* param_1, float* param_2, float* param_3) {
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        zyz(param_1, &local_38, &local_34, &local_30, &local_2c, &local_28, &local_24);
        sh3_rot(param_1, local_38, local_34, local_30, local_2c, local_28, local_24, param_2, param_3);
    }

    // 0x1008b3fc0, 112 bytes, inline, placed by debug map only (low confidence)
    // sh4_rot(float*, float*, float*)
    void sh4_rot(float* param_1, float* param_2, float* param_3) {
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        zyz(param_1, &local_38, &local_34, &local_30, &local_2c, &local_28, &local_24);
        sh4_rot(param_1, local_38, local_34, local_30, local_2c, local_28, local_24, param_2, param_3);
    }

    // 0x1008b4030, 112 bytes, inline, placed by debug map only (low confidence)
    // sh5_rot(float*, float*, float*)
    void sh5_rot(float* param_1, float* param_2, float* param_3) {
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        zyz(param_1, &local_38, &local_34, &local_30, &local_2c, &local_28, &local_24);
        sh5_rot(param_1, local_38, local_34, local_30, local_2c, local_28, local_24, param_2, param_3);
    }

    // 0x1008b40a0, 1760 bytes, placed by neighbouring functions
    // SHRotateZ(float*, unsigned long, float, float const*)
    float* SHRotateZ(float* param_1, ulong param_2, float param_3, float* param_4) {
        float* pfVar1;
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
        ulong local_218;
        float fStack_210;
        undefined4 uStack_20c;
        float fStack_208;
        undefined4 uStack_204;
        ulong uStack_200;
        ulong local_1f8;
        undefined8 uStack_1f0;
        ulong local_1e8;
        undefined8 uStack_1e0;
        ulong local_1d8;
        ulong uStack_1d0;
        ulong local_1c8;
        undefined8 uStack_1c0;
        undefined8 local_1b8;
        undefined8 uStack_1b0;
        undefined8 local_1a8;
        ulong uStack_1a0;
        ulong local_198;
        undefined8 uStack_190;
        ulong local_188;
        undefined8 uStack_180;
        ulong local_178;
        ulong uStack_170;
        undefined8 local_168;
        undefined8 uStack_160;
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
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pfVar1 = (float*)0;
        if ((((param_1 != (float*)0) && (param_4 != (float*)0)) && (param_1 != param_4)) && (param_2 - 2 < 5)) {
            fVar2 = (float)::cos(param_3);
            fVar3 = (float)::sin(param_3);
            local_218 = (ulong)(uint)fVar2;
            uStack_20c = 0;
            fStack_208 = 1.0;
            uStack_204 = 0;
            fVar8 = -fVar3;
            uStack_200 = (ulong)(uint)fVar8;
            local_1f8 = CONCAT44(local_1f8._4_4_, fVar2);
            *param_1 = *param_4;
            fStack_210 = fVar3;
            SimpMatMul(3, (float*)&local_218, param_4 + 1, param_1 + 1);
            if (2 < param_2) {
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
                local_218 = (ulong)(uint)fVar10;
                uStack_200 = (ulong)(uint)fVar2;
                local_1f8 = (ulong)(uint)fVar3;
                local_1e8 = 1065353216;
                local_1d8 = (ulong)(uint)fVar8;
                uStack_1d0 = (ulong)(uint)fVar2;
                fVar4 = -fVar12;
                local_1c8 = (ulong)(uint)fVar4;
                local_1b8 = CONCAT44(local_1b8._4_4_, fVar10);
                fStack_208 = fVar12;
                SimpMatMul(5, (float*)&local_218, param_4 + 4, param_1 + 4);
                if (param_2 != 3) {
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
                    local_218 = (ulong)(uint)fVar16;
                    uStack_200 = (ulong)(uint)fVar17;
                    local_1f8 = (ulong)(uint)fVar10;
                    local_1e8 = (ulong)(uint)fVar12;
                    local_1d8 = (ulong)(uint)fVar2;
                    uStack_1d0 = (ulong)(uint)fVar3;
                    local_1b8 = 1065353216;
                    uStack_1a0 = (ulong)(uint)fVar8;
                    local_198 = (ulong)(uint)fVar2;
                    local_188 = (ulong)(uint)fVar4;
                    local_178 = (ulong)(uint)fVar10;
                    fVar5 = -fVar17;
                    uStack_170 = (ulong)(uint)fVar5;
                    local_158 = fVar16;
                    SimpMatMul(7, (float*)&local_218, param_4 + 9, param_1 + 9);
                    if (4 < param_2) {
                        ___bzero(&local_218, 328);
                        fVar14 = fVar9 * fVar9;
                        fVar6 = fVar11 * fVar11;
                        fVar18 = fVar9 * -6.0 * fVar11 + fVar6 + fVar14;
                        fVar19 = fVar15 * fVar3 - fVar13 * fVar2;
                        local_218 = CONCAT44(local_218._4_4_, fVar18);
                        fVar7 = fVar19 * 4.0;
                        local_1f8 = CONCAT44(local_1f8._4_4_, fVar7);
                        uStack_1f0 = CONCAT44(uStack_1f0._4_4_, fVar16);
                        local_1d8 = CONCAT44(local_1d8._4_4_, fVar17);
                        local_1c8 = CONCAT44(local_1c8._4_4_, fVar10);
                        local_1b8 = CONCAT44(local_1b8._4_4_, fVar12);
                        uStack_1a0 = CONCAT44(uStack_1a0._4_4_, fVar2);
                        local_198 = CONCAT44(local_198._4_4_, fVar3);
                        local_178 = CONCAT44(local_178._4_4_, 1065353216);
                        fVar19 = fVar19 * -4.0;
                        local_158 = fVar8;
                        local_150 = fVar2;
                        local_138 = fVar4;
                        local_128 = fVar10;
                        local_118 = fVar5;
                        local_100 = fVar16;
                        local_f8 = fVar19;
                        local_d8 = fVar18;
                        SimpMatMul(9, (float*)&local_218, param_4 + 16, param_1 + 16);
                        if (param_2 != 5) {
                            ___bzero(&local_218, 484);
                            local_38 = (fVar2 * 5.0 * fVar6 - fVar11 * 10.0 * fVar15) + fVar14 * fVar2;
                            local_60 = fVar6 * fVar3 + (fVar3 * 5.0 * fVar14 - fVar9 * 10.0 * fVar13);
                            local_218 = CONCAT44(local_218._4_4_, local_38);
                            uStack_1f0 = CONCAT44(uStack_1f0._4_4_, local_60);
                            local_1e8 = CONCAT44(local_1e8._4_4_, fVar18);
                            local_1c8 = CONCAT44(local_1c8._4_4_, fVar7);
                            local_1b8 = CONCAT44(local_1b8._4_4_, fVar16);
                            uStack_1a0 = CONCAT44(uStack_1a0._4_4_, fVar17);
                            local_188 = CONCAT44(local_188._4_4_, fVar10);
                            local_178 = CONCAT44(local_178._4_4_, fVar12);
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
                            SimpMatMul(11, (float*)&local_218, param_4 + 25, param_1 + 25);
                        }
                    }
                }
            }
            pfVar1 = param_1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pfVar1;
    }

    // 0x1008b47a0, 128 bytes, placed by neighbouring functions
    // SimpMatMul(unsigned long, float const*, float const*, float*)
    void SimpMatMul(ulong param_1, float* param_2, float* param_3, float* param_4) {
        ulong uVar1;
        float* pfVar2;
        ulong uVar3;

        if (param_1 != 0) {
            uVar3 = 0;
            pfVar2 = param_2;
            do {
                param_4[uVar3] = *param_3 * param_2[uVar3 * param_1];
                if (1 < param_1) {
                    uVar1 = 1;
                    do {
                        param_4[uVar3] = param_3[uVar1] * pfVar2[uVar1] + param_4[uVar3];
                        uVar1 = uVar1 + 1;
                    } while (param_1 != uVar1);
                }
                uVar3 = uVar3 + 1;
                pfVar2 = pfVar2 + param_1;
            } while (uVar3 != param_1);
        }
    }

    // 0x1008b4820, 80 bytes, placed by neighbouring functions
    // SHAdd(float*, unsigned long, float const*, float const*)
    float* SHAdd(float* param_1, ulong param_2, float* param_3, float* param_4) {
        float* pfVar1;
        long lVar2;

        pfVar1 = (float*)0;
        if (((param_1 != (float*)0) && (param_3 != (float*)0)) && (param_4 != (float*)0)) {
            if (param_2 * param_2 == 0) {
                return param_1;
            }
            lVar2 = 0;
            do {
                param_1[lVar2] = param_4[lVar2] + param_3[lVar2];
                lVar2 = lVar2 + 1;
            } while (param_2 * param_2 != lVar2);
            pfVar1 = param_1;
        }
        return pfVar1;
    }

    // 0x1008b4870, 64 bytes, placed by neighbouring functions
    // SHScale(float*, unsigned long, float const*, float)
    float* SHScale(float* param_1, ulong param_2, float* param_3, float param_4) {
        long lVar1;
        float* pfVar2;

        pfVar2 = (float*)0;
        if ((param_1 != (float*)0) && (param_3 != (float*)0)) {
            if (param_2 * param_2 == 0) {
                return param_1;
            }
            lVar1 = 0;
            do {
                param_1[lVar1] = param_3[lVar1] * param_4;
                lVar1 = lVar1 + 1;
            } while (param_2 * param_2 != lVar1);
            pfVar2 = param_1;
        }
        return pfVar2;
    }

    // 0x1008b48b0, 80 bytes, placed by neighbouring functions
    // SHDot(unsigned long, float const*, float const*)
    float SHDot(ulong param_1, float* param_2, float* param_3) {
        ulong uVar1;
        float fVar2;

        fVar2 = 0.0;
        if ((param_2 != (float*)0) && (param_3 != (float*)0)) {
            fVar2 = *param_3 * *param_2;
            if (1 < param_1 * param_1) {
                uVar1 = 1;
                do {
                    fVar2 = fVar2 + param_3[uVar1] * param_2[uVar1];
                    uVar1 = uVar1 + 1;
                } while (param_1 * param_1 != uVar1);
            }
        }
        return fVar2;
    }

    // 0x1008b4900, 192 bytes, placed by debug map only (low confidence)
    // SHMultiply(float*, unsigned long, float const*, float const*)
    undefined8 SHMultiply(float* param_1, ulong param_2, float* param_3, float* param_4) {
        undefined8 uVar1;

        switch (param_2 - 2) {
        case 0:
            uVar1 = SHMultiply2(param_1, param_3, param_4);
            break;
        case 1:
            uVar1 = SHMultiply3(param_1, param_3, param_4);
            break;
        case 2:
            uVar1 = SHMultiply4(param_1, param_3, param_4);
            break;
        case 3:
            uVar1 = SHMultiply5(param_1, param_3, param_4);
            break;
        case 4:
            uVar1 = SHMultiply6(param_1, param_3, param_4);
            break;
        default:
            if (param_2 - 2 < 5) {
                /* WARNING: Subroutine does not return */
                LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                          1501, (char*)0);
            }
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x1008b49c0, 224 bytes, placed by neighbouring functions
    // SHMultiply2(float*, float const*, float const*)
    float* SHMultiply2(float* param_1, float* param_2, float* param_3) {
        float* pfVar1;
        float fVar2;

        pfVar1 = (float*)0;
        if (((param_1 != (float*)0) && (param_2 != (float*)0)) && (param_3 != (float*)0)) {
            fVar2 = *param_2 * 0.2820948 * *param_3;
            *param_1 = fVar2;
            param_1[1] = (param_2[1] * *param_3 + param_3[1] * *param_2) * 0.2820948;
            fVar2 = param_2[1] * 0.2820948 * param_3[1] + fVar2;
            *param_1 = fVar2;
            param_1[2] = (param_2[2] * *param_3 + param_3[2] * *param_2) * 0.2820948;
            fVar2 = param_2[2] * 0.2820948 * param_3[2] + fVar2;
            *param_1 = fVar2;
            param_1[3] = (param_2[3] * *param_3 + param_3[3] * *param_2) * 0.2820948;
            *param_1 = param_2[3] * 0.2820948 * param_3[3] + fVar2;
            pfVar1 = param_1;
        }
        return pfVar1;
    }

    // 0x1008b4aa0, 1584 bytes, placed by neighbouring functions
    // SHMultiply3(float*, float const*, float const*)
    float* SHMultiply3(float* param_1, float* param_2, float* param_3) {
        float fVar1;
        float* pfVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;

        pfVar2 = (float*)0;
        if (((param_1 != (float*)0) && (param_2 != (float*)0)) && (param_3 != (float*)0)) {
            fVar5 = *param_2 * 0.2820948 * *param_3;
            *param_1 = fVar5;
            fVar3 = (param_3[8] * -0.21850969 + param_3[6] * -0.12615663 + *param_3 * 0.2820948) * param_2[1] +
                    (param_2[8] * -0.21850969 + param_2[6] * -0.12615663 + *param_2 * 0.2820948) * param_3[1];
            param_1[1] = fVar3;
            fVar10 = param_3[1] * param_2[1];
            fVar5 = fVar10 * 0.2820948 + fVar5;
            *param_1 = fVar5;
            param_1[6] = fVar10 * -0.12615663;
            param_1[8] = fVar10 * -0.21850969;
            fVar4 = param_2[5];
            fVar1 = param_3[5];
            fVar3 = param_2[2] * fVar1 * 0.21850969 + param_3[2] * fVar4 * 0.21850969 + fVar3;
            param_1[1] = fVar3;
            fVar6 = fVar1 * 0.21850969 * param_2[1] + fVar4 * 0.21850969 * param_3[1];
            param_1[2] = fVar6;
            fVar9 = (param_3[1] * param_2[2] + param_3[2] * param_2[1]) * 0.21850969;
            param_1[5] = fVar9;
            fVar4 = param_2[4];
            fVar1 = param_3[4];
            param_1[1] = param_2[3] * fVar1 * 0.21850969 + param_3[3] * fVar4 * 0.21850969 + fVar3;
            fVar3 = fVar1 * 0.21850969 * param_2[1] + fVar4 * 0.21850969 * param_3[1];
            param_1[3] = fVar3;
            fVar11 = (param_3[1] * param_2[3] + param_3[3] * param_2[1]) * 0.21850969;
            param_1[4] = fVar11;
            fVar7 = (param_2[6] * 0.25231326 + *param_2 * 0.2820948) * param_3[2] + fVar6 +
                    (param_3[6] * 0.25231326 + *param_3 * 0.2820948) * param_2[2];
            param_1[2] = fVar7;
            fVar4 = param_3[2];
            fVar1 = param_2[2];
            fVar5 = fVar4 * fVar1 * 0.2820948 + fVar5;
            *param_1 = fVar5;
            fVar6 = fVar4 * fVar1 * 0.25231326 + fVar10 * -0.12615663;
            param_1[6] = fVar6;
            fVar4 = param_2[7];
            fVar1 = param_3[7];
            param_1[2] = param_2[3] * fVar1 * 0.21850969 + param_3[3] * fVar4 * 0.21850969 + fVar7;
            fVar3 = fVar1 * 0.21850969 * param_2[2] + fVar4 * 0.21850969 * param_3[2] + fVar3;
            param_1[3] = fVar3;
            fVar8 = (param_3[2] * param_2[3] + param_3[3] * param_2[2]) * 0.21850969;
            param_1[7] = fVar8;
            param_1[3] = (param_2[8] * 0.21850969 + param_2[6] * -0.12615663 + *param_2 * 0.2820948) * param_3[3] +
                         fVar3 +
                         (param_3[8] * 0.21850969 + param_3[6] * -0.12615663 + *param_3 * 0.2820948) * param_2[3];
            fVar4 = param_3[3] * param_2[3];
            fVar5 = fVar4 * 0.2820948 + fVar5;
            *param_1 = fVar5;
            fVar6 = fVar4 * -0.12615663 + fVar6;
            param_1[6] = fVar6;
            fVar3 = fVar4 * 0.21850969 + fVar10 * -0.21850969;
            param_1[8] = fVar3;
            fVar7 = (*param_2 * 0.2820948 - param_2[6] * 0.18022375) * param_3[4] + fVar11 +
                    (*param_3 * 0.2820948 - param_3[6] * 0.18022375) * param_2[4];
            param_1[4] = fVar7;
            fVar4 = param_3[4];
            fVar1 = param_2[4];
            fVar5 = fVar4 * fVar1 * 0.2820948 + fVar5;
            *param_1 = fVar5;
            fVar6 = fVar6 - fVar4 * fVar1 * 0.18022375;
            param_1[6] = fVar6;
            fVar4 = param_2[7];
            fVar1 = param_3[7];
            param_1[4] = param_2[5] * fVar1 * 0.15607835 + param_3[5] * fVar4 * 0.15607835 + fVar7;
            fVar9 = fVar1 * 0.15607835 * param_2[4] + fVar4 * 0.15607835 * param_3[4] + fVar9;
            param_1[5] = fVar9;
            fVar8 = (param_3[4] * param_2[5] + param_3[5] * param_2[4]) * 0.15607835 + fVar8;
            param_1[7] = fVar8;
            param_1[5] = (param_2[8] * -0.15607835 + param_2[6] * 0.090111874 + *param_2 * 0.2820948) * param_3[5] +
                         fVar9 +
                         (param_3[8] * -0.15607835 + param_3[6] * 0.090111874 + *param_3 * 0.2820948) * param_2[5];
            fVar4 = param_3[5] * param_2[5];
            fVar5 = fVar4 * 0.2820948 + fVar5;
            *param_1 = fVar5;
            fVar6 = fVar4 * 0.090111874 + fVar6;
            param_1[6] = fVar6;
            fVar3 = fVar4 * -0.15607835 + fVar3;
            param_1[8] = fVar3;
            fVar6 = (param_2[6] * *param_3 + param_3[6] * *param_2) * 0.2820948 + fVar6;
            param_1[6] = fVar6;
            fVar4 = param_3[6];
            fVar1 = param_2[6];
            fVar5 = fVar4 * fVar1 * 0.2820948 + fVar5;
            *param_1 = fVar5;
            fVar6 = fVar4 * fVar1 * 0.18022376 + fVar6;
            param_1[6] = fVar6;
            param_1[7] = (param_2[8] * 0.15607835 + param_2[6] * 0.090111874 + *param_2 * 0.2820948) * param_3[7] +
                         fVar8 +
                         (param_3[8] * 0.15607835 + param_3[6] * 0.090111874 + *param_3 * 0.2820948) * param_2[7];
            fVar4 = param_3[7] * param_2[7];
            fVar5 = fVar4 * 0.2820948 + fVar5;
            *param_1 = fVar5;
            fVar6 = fVar4 * 0.090111874 + fVar6;
            param_1[6] = fVar6;
            fVar3 = fVar4 * 0.15607835 + fVar3;
            param_1[8] = fVar3;
            param_1[8] = (*param_3 * 0.2820948 - param_3[6] * 0.18022375) * param_2[8] +
                         (*param_2 * 0.2820948 - param_2[6] * 0.18022375) * param_3[8] + fVar3;
            fVar4 = param_3[8];
            fVar1 = param_2[8];
            *param_1 = fVar4 * fVar1 * 0.2820948 + fVar5;
            param_1[6] = fVar6 - fVar4 * fVar1 * 0.18022375;
            pfVar2 = param_1;
        }
        return pfVar2;
    }

    // 0x1008b50d0, 5888 bytes, placed by neighbouring functions
    // SHMultiply4(float*, float const*, float const*)
    float* SHMultiply4(float* param_1, float* param_2, float* param_3) {
        float* pfVar1;
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

        pfVar1 = (float*)0;
        if (((param_1 != (float*)0) && (param_2 != (float*)0)) && (param_3 != (float*)0)) {
            fVar2 = *param_2 * 0.2820948 * *param_3;
            *param_1 = fVar2;
            fVar6 = (param_3[8] * -0.21850969 + param_3[6] * -0.12615663 + *param_3 * 0.2820948) * param_2[1] +
                    (param_2[8] * -0.21850969 + param_2[6] * -0.12615663 + *param_2 * 0.2820948) * param_3[1];
            param_1[1] = fVar6;
            fVar12 = param_3[1] * param_2[1];
            fVar2 = fVar12 * 0.2820948 + fVar2;
            *param_1 = fVar2;
            param_1[6] = fVar12 * -0.12615663;
            param_1[8] = fVar12 * -0.21850969;
            fVar4 = param_2[15] * -0.22617902 + param_2[13] * -0.05839917 + param_2[3] * 0.21850969;
            fVar14 = param_3[15] * -0.22617902 + param_3[13] * -0.05839917 + param_3[3] * 0.21850969;
            fVar6 = param_2[4] * fVar14 + param_3[4] * fVar4 + fVar6;
            param_1[1] = fVar6;
            fVar15 = fVar14 * param_2[1] + fVar4 * param_3[1];
            param_1[4] = fVar15;
            fVar7 = param_3[1] * param_2[4] + param_3[4] * param_2[1];
            param_1[3] = fVar7 * 0.21850969;
            param_1[13] = fVar7 * -0.05839917;
            param_1[15] = fVar7 * -0.22617902;
            fVar4 = param_2[14] * -0.1846744 + param_2[12] * -0.14304817 + param_2[2] * 0.21850969;
            fVar14 = param_3[14] * -0.1846744 + param_3[12] * -0.14304817 + param_3[2] * 0.21850969;
            fVar6 = param_2[5] * fVar14 + param_3[5] * fVar4 + fVar6;
            param_1[1] = fVar6;
            fVar16 = fVar14 * param_2[1] + fVar4 * param_3[1];
            param_1[5] = fVar16;
            fVar20 = param_3[1] * param_2[5] + param_3[5] * param_2[1];
            param_1[2] = fVar20 * 0.21850969;
            param_1[12] = fVar20 * -0.14304817;
            param_1[14] = fVar20 * -0.1846744;
            fVar4 = param_2[11];
            fVar14 = param_3[11];
            fVar6 = param_2[6] * fVar14 * 0.20230065 + param_3[6] * fVar4 * 0.20230065 + fVar6;
            param_1[1] = fVar6;
            fVar17 = fVar4 * 0.20230065 * param_3[1] + fVar12 * -0.12615663 + fVar14 * 0.20230065 * param_2[1];
            param_1[6] = fVar17;
            fVar10 = (param_3[1] * param_2[6] + param_3[6] * param_2[1]) * 0.20230065;
            param_1[11] = fVar10;
            fVar14 = param_2[11] * 0.05839917 + param_2[9] * 0.22617902;
            fVar4 = param_3[11] * 0.05839917 + param_3[9] * 0.22617902;
            fVar6 = param_2[8] * fVar4 + param_3[8] * fVar14 + fVar6;
            param_1[1] = fVar6;
            fVar13 = fVar14 * param_3[1] + fVar12 * -0.21850969 + fVar4 * param_2[1];
            param_1[8] = fVar13;
            fVar12 = param_3[1] * param_2[8] + param_3[8] * param_2[1];
            fVar10 = fVar12 * 0.05839917 + fVar10;
            fVar12 = fVar12 * 0.22617902;
            param_1[9] = fVar12;
            param_1[11] = fVar10;
            fVar11 = (param_2[6] * 0.25231326 + *param_2 * 0.2820948) * param_3[2] + fVar20 * 0.21850969 +
                     (param_3[6] * 0.25231326 + *param_3 * 0.2820948) * param_2[2];
            param_1[2] = fVar11;
            fVar2 = param_3[2] * param_2[2] * 0.2820948 + fVar2;
            fVar17 = param_3[2] * param_2[2] * 0.25231326 + fVar17;
            *param_1 = fVar2;
            param_1[6] = fVar17;
            fVar4 = param_2[12];
            fVar14 = param_3[12];
            fVar11 = param_2[6] * fVar14 * 0.2477667 + param_3[6] * fVar4 * 0.2477667 + fVar11;
            param_1[2] = fVar11;
            fVar17 = fVar14 * 0.2477667 * param_2[2] + fVar4 * 0.2477667 * param_3[2] + fVar17;
            param_1[6] = fVar17;
            fVar8 = (param_3[2] * param_2[6] + param_3[6] * param_2[2]) * 0.2477667 + fVar20 * -0.14304817;
            param_1[12] = fVar8;
            fVar3 = (param_2[8] * 0.21850969 + param_2[6] * -0.12615663 + *param_2 * 0.2820948) * param_3[3] +
                    fVar7 * 0.21850969 +
                    (param_3[8] * 0.21850969 + param_3[6] * -0.12615663 + *param_3 * 0.2820948) * param_2[3];
            param_1[3] = fVar3;
            fVar4 = param_3[3] * param_2[3];
            fVar2 = fVar4 * 0.2820948 + fVar2;
            fVar17 = fVar4 * -0.12615663 + fVar17;
            fVar13 = fVar4 * 0.21850969 + fVar13;
            *param_1 = fVar2;
            param_1[6] = fVar17;
            param_1[8] = fVar13;
            fVar4 = param_2[13];
            fVar14 = param_3[13];
            fVar3 = param_2[6] * fVar14 * 0.20230065 + param_3[6] * fVar4 * 0.20230065 + fVar3;
            param_1[3] = fVar3;
            fVar17 = fVar14 * 0.20230065 * param_2[3] + fVar4 * 0.20230065 * param_3[3] + fVar17;
            param_1[6] = fVar17;
            fVar5 = (param_3[3] * param_2[6] + param_3[6] * param_2[3]) * 0.20230065 + fVar7 * -0.05839917;
            param_1[13] = fVar5;
            fVar4 = param_2[14] * 0.1846744 + param_2[12] * -0.14304817 + param_2[2] * 0.21850969;
            fVar14 = param_3[14] * 0.1846744 + param_3[12] * -0.14304817 + param_3[2] * 0.21850969;
            fVar3 = param_2[7] * fVar14 + param_3[7] * fVar4 + fVar3;
            param_1[3] = fVar3;
            fVar19 = fVar14 * param_2[3] + fVar4 * param_3[3];
            param_1[7] = fVar19;
            fVar4 = param_3[3] * param_2[7] + param_3[7] * param_2[3];
            fVar11 = fVar4 * 0.21850969 + fVar11;
            fVar8 = fVar4 * -0.14304817 + fVar8;
            fVar20 = fVar4 * 0.1846744 + fVar20 * -0.1846744;
            param_1[2] = fVar11;
            param_1[12] = fVar8;
            param_1[14] = fVar20;
            fVar4 = param_2[15] * 0.22617902 + param_2[13] * -0.05839917;
            fVar14 = param_3[15] * 0.22617902 + param_3[13] * -0.05839917;
            fVar3 = param_2[8] * fVar14 + param_3[8] * fVar4 + fVar3;
            param_1[3] = fVar3;
            fVar13 = fVar14 * param_2[3] + fVar4 * param_3[3] + fVar13;
            param_1[8] = fVar13;
            fVar4 = param_3[3] * param_2[8] + param_3[8] * param_2[3];
            fVar5 = fVar4 * -0.05839917 + fVar5;
            fVar9 = fVar4 * 0.22617902 + fVar7 * -0.22617902;
            param_1[13] = fVar5;
            param_1[15] = fVar9;
            fVar15 = (*param_3 * 0.2820948 - param_3[6] * 0.18022375) * param_2[4] +
                     (*param_2 * 0.2820948 - param_2[6] * 0.18022375) * param_3[4] + fVar15;
            param_1[4] = fVar15;
            fVar2 = param_3[4] * param_2[4] * 0.2820948 + fVar2;
            fVar17 = fVar17 - param_3[4] * param_2[4] * 0.18022375;
            *param_1 = fVar2;
            param_1[6] = fVar17;
            fVar4 = param_2[7];
            fVar14 = param_3[7];
            fVar15 = param_2[5] * fVar14 * 0.15607835 + param_3[5] * fVar4 * 0.15607835 + fVar15;
            param_1[4] = fVar15;
            fVar16 = fVar14 * 0.15607835 * param_2[4] + fVar4 * 0.15607835 * param_3[4] + fVar16;
            param_1[5] = fVar16;
            fVar19 = (param_3[4] * param_2[5] + param_3[5] * param_2[4]) * 0.15607835 + fVar19;
            param_1[7] = fVar19;
            fVar4 = param_2[13] * -0.094031595 + param_2[3] * 0.22617902;
            fVar14 = param_3[13] * -0.094031595 + param_3[3] * 0.22617902;
            fVar15 = param_2[9] * fVar14 + param_3[9] * fVar4 + fVar15;
            param_1[4] = fVar15;
            fVar7 = fVar4 * param_3[4] + fVar12 + fVar14 * param_2[4];
            param_1[9] = fVar7;
            fVar4 = param_3[4] * param_2[9] + param_3[9] * param_2[4];
            fVar3 = fVar4 * 0.22617902 + fVar3;
            fVar5 = fVar4 * -0.094031595 + fVar5;
            param_1[3] = fVar3;
            param_1[13] = fVar5;
            fVar4 = param_2[2] * 0.1846744 - param_2[12] * 0.18806319;
            fVar14 = param_3[2] * 0.1846744 - param_3[12] * 0.18806319;
            fVar15 = param_2[10] * fVar14 + param_3[10] * fVar4 + fVar15;
            param_1[4] = fVar15;
            fVar18 = fVar14 * param_2[4] + fVar4 * param_3[4];
            param_1[10] = fVar18;
            fVar4 = param_3[4] * param_2[10] + param_3[10] * param_2[4];
            fVar11 = fVar4 * 0.1846744 + fVar11;
            fVar8 = fVar8 - fVar4 * 0.18806319;
            param_1[2] = fVar11;
            param_1[12] = fVar8;
            fVar14 = param_2[15] * 0.094031595 + param_2[13] * 0.14567313 + param_2[3] * -0.05839917;
            fVar4 = param_3[15] * 0.094031595 + param_3[13] * 0.14567313 + param_3[3] * -0.05839917;
            param_1[4] = param_2[11] * fVar4 + param_3[11] * fVar14 + fVar15;
            fVar12 = fVar14 * param_3[4] + fVar10 + fVar4 * param_2[4];
            param_1[11] = fVar12;
            fVar4 = param_3[4] * param_2[11] + param_3[11] * param_2[4];
            fVar3 = fVar4 * -0.05839917 + fVar3;
            fVar5 = fVar4 * 0.14567313 + fVar5;
            fVar9 = fVar4 * 0.094031595 + fVar9;
            param_1[3] = fVar3;
            param_1[13] = fVar5;
            param_1[15] = fVar9;
            fVar16 = (param_3[8] * -0.15607835 + param_3[6] * 0.090111874 + *param_3 * 0.2820948) * param_2[5] +
                     (param_2[8] * -0.15607835 + param_2[6] * 0.090111874 + *param_2 * 0.2820948) * param_3[5] + fVar16;
            param_1[5] = fVar16;
            fVar4 = param_3[5] * param_2[5];
            fVar2 = fVar4 * 0.2820948 + fVar2;
            fVar17 = fVar4 * 0.090111874 + fVar17;
            fVar13 = fVar4 * -0.15607835 + fVar13;
            *param_1 = fVar2;
            param_1[6] = fVar17;
            param_1[8] = fVar13;
            fVar4 = param_2[14];
            fVar14 = param_3[14];
            fVar16 = param_2[9] * fVar14 * 0.148677 + param_3[9] * fVar4 * 0.148677 + fVar16;
            param_1[5] = fVar16;
            fVar7 = fVar14 * 0.148677 * param_2[5] + fVar4 * 0.148677 * param_3[5] + fVar7;
            param_1[9] = fVar7;
            fVar20 = (param_3[5] * param_2[9] + param_3[9] * param_2[5]) * 0.148677 + fVar20;
            param_1[14] = fVar20;
            fVar14 = param_2[15] * -0.148677 + param_2[13] * 0.11516472 + param_2[3] * 0.1846744;
            fVar4 = param_3[15] * -0.148677 + param_3[13] * 0.11516472 + param_3[3] * 0.1846744;
            fVar16 = param_2[10] * fVar4 + param_3[10] * fVar14 + fVar16;
            param_1[5] = fVar16;
            fVar10 = fVar14 * param_3[5] + fVar18 + fVar4 * param_2[5];
            param_1[10] = fVar10;
            fVar4 = param_3[5] * param_2[10] + param_3[10] * param_2[5];
            param_1[3] = fVar4 * 0.1846744 + fVar3;
            fVar5 = fVar4 * 0.11516472 + fVar5;
            fVar9 = fVar4 * -0.148677 + fVar9;
            param_1[13] = fVar5;
            param_1[15] = fVar9;
            fVar14 = param_2[14] * -0.11516472 + param_2[12] * 0.059470803 + param_2[2] * 0.23359668;
            fVar4 = param_3[14] * -0.11516472 + param_3[12] * 0.059470803 + param_3[2] * 0.23359668;
            param_1[5] = param_2[11] * fVar4 + param_3[11] * fVar14 + fVar16;
            fVar12 = fVar4 * param_2[5] + fVar14 * param_3[5] + fVar12;
            param_1[11] = fVar12;
            fVar4 = param_3[5] * param_2[11] + param_3[11] * param_2[5];
            fVar11 = fVar4 * 0.23359668 + fVar11;
            fVar8 = fVar4 * 0.059470803 + fVar8;
            fVar20 = fVar4 * -0.11516472 + fVar20;
            param_1[2] = fVar11;
            param_1[12] = fVar8;
            param_1[14] = fVar20;
            fVar17 = (param_2[6] * *param_3 + param_3[6] * *param_2) * 0.2820948 + fVar17;
            param_1[6] = fVar17;
            fVar2 = param_3[6] * param_2[6] * 0.2820948 + fVar2;
            fVar17 = param_3[6] * param_2[6] * 0.18022376 + fVar17;
            *param_1 = fVar2;
            param_1[6] = fVar17;
            fVar19 = (param_3[8] * 0.15607835 + *param_3 * 0.2820948 + param_3[6] * 0.090111874) * param_2[7] +
                     (param_2[8] * 0.15607835 + *param_2 * 0.2820948 + param_2[6] * 0.090111874) * param_3[7] + fVar19;
            param_1[7] = fVar19;
            fVar4 = param_3[7] * param_2[7];
            fVar17 = fVar4 * 0.090111874 + fVar17;
            fVar2 = fVar4 * 0.2820948 + fVar2;
            fVar13 = fVar4 * 0.15607835 + fVar13;
            param_1[6] = fVar17;
            *param_1 = fVar2;
            param_1[8] = fVar13;
            fVar4 = param_2[11] * 0.11516472 + param_2[1] * 0.1846744 + param_2[9] * 0.148677;
            fVar14 = param_3[11] * 0.11516472 + param_3[1] * 0.1846744 + param_3[9] * 0.148677;
            fVar19 = param_2[10] * fVar14 + param_3[10] * fVar4 + fVar19;
            param_1[7] = fVar19;
            fVar10 = fVar14 * param_2[7] + fVar4 * param_3[7] + fVar10;
            param_1[10] = fVar10;
            fVar4 = param_3[7] * param_2[10] + param_3[10] * param_2[7];
            fVar7 = fVar4 * 0.148677 + fVar7;
            param_1[9] = fVar7;
            param_1[1] = fVar4 * 0.1846744 + fVar6;
            fVar12 = fVar4 * 0.11516472 + fVar12;
            param_1[11] = fVar12;
            fVar14 = param_2[14] * 0.11516472 + param_2[2] * 0.23359668 + param_2[12] * 0.059470803;
            fVar4 = param_3[14] * 0.11516472 + param_3[2] * 0.23359668 + param_3[12] * 0.059470803;
            fVar19 = param_2[13] * fVar4 + param_3[13] * fVar14 + fVar19;
            param_1[7] = fVar19;
            fVar5 = fVar4 * param_2[7] + fVar14 * param_3[7] + fVar5;
            param_1[13] = fVar5;
            fVar4 = param_3[7] * param_2[13] + param_3[13] * param_2[7];
            fVar8 = fVar4 * 0.059470803 + fVar8;
            fVar11 = fVar4 * 0.23359668 + fVar11;
            fVar20 = fVar4 * 0.11516472 + fVar20;
            param_1[12] = fVar8;
            param_1[2] = fVar11;
            param_1[14] = fVar20;
            fVar4 = param_2[15];
            fVar14 = param_3[15];
            param_1[7] = param_2[14] * fVar14 * 0.148677 + param_3[14] * fVar4 * 0.148677 + fVar19;
            fVar20 = fVar14 * 0.148677 * param_2[7] + fVar4 * 0.148677 * param_3[7] + fVar20;
            param_1[14] = fVar20;
            fVar9 = (param_3[7] * param_2[14] + param_3[14] * param_2[7]) * 0.148677 + fVar9;
            param_1[15] = fVar9;
            fVar13 = (*param_3 * 0.2820948 - param_3[6] * 0.18022375) * param_2[8] +
                     (*param_2 * 0.2820948 - param_2[6] * 0.18022375) * param_3[8] + fVar13;
            param_1[8] = fVar13;
            fVar2 = param_3[8] * param_2[8] * 0.2820948 + fVar2;
            fVar17 = fVar17 - param_3[8] * param_2[8] * 0.18022375;
            *param_1 = fVar2;
            param_1[6] = fVar17;
            fVar4 = param_2[11];
            fVar14 = param_3[11];
            fVar13 = param_2[9] * fVar14 * -0.094031595 + param_3[9] * fVar4 * -0.094031595 + fVar13;
            param_1[8] = fVar13;
            fVar7 = fVar14 * -0.094031595 * param_2[8] + fVar4 * -0.094031595 * param_3[8] + fVar7;
            param_1[9] = fVar7;
            fVar12 = (param_3[8] * param_2[9] + param_3[9] * param_2[8]) * -0.094031595 + fVar12;
            param_1[11] = fVar12;
            fVar4 = param_2[15];
            fVar14 = param_3[15];
            fVar13 = param_2[13] * fVar14 * -0.094031595 + param_3[13] * fVar4 * -0.094031595 + fVar13;
            param_1[8] = fVar13;
            fVar5 = fVar14 * -0.094031595 * param_2[8] + fVar4 * -0.094031595 * param_3[8] + fVar5;
            param_1[13] = fVar5;
            fVar9 = (param_3[8] * param_2[13] + param_3[13] * param_2[8]) * -0.094031595 + fVar9;
            param_1[15] = fVar9;
            fVar14 = param_2[2] * 0.1846744 - param_2[12] * 0.18806319;
            fVar4 = param_3[2] * 0.1846744 - param_3[12] * 0.18806319;
            fVar13 = param_2[14] * fVar4 + param_3[14] * fVar14 + fVar13;
            param_1[8] = fVar13;
            fVar20 = fVar4 * param_2[8] + fVar14 * param_3[8] + fVar20;
            param_1[14] = fVar20;
            fVar4 = param_3[8] * param_2[14] + param_3[14] * param_2[8];
            param_1[2] = fVar4 * 0.1846744 + fVar11;
            fVar8 = fVar8 - fVar4 * 0.18806319;
            param_1[12] = fVar8;
            param_1[9] = (*param_3 * 0.2820948 - param_3[6] * 0.21026105) * param_2[9] +
                         (*param_2 * 0.2820948 - param_2[6] * 0.21026105) * param_3[9] + fVar7;
            fVar4 = param_3[9];
            fVar14 = param_2[9];
            fVar17 = fVar17 - fVar4 * fVar14 * 0.21026105;
            param_1[6] = fVar17;
            fVar2 = fVar4 * fVar14 * 0.2820948 + fVar2;
            *param_1 = fVar2;
            param_1[10] = (param_2[10] * *param_3 + param_3[10] * *param_2) * 0.2820948 + fVar10;
            fVar2 = param_2[10] * 0.2820948 * param_3[10] + fVar2;
            *param_1 = fVar2;
            param_1[11] = (param_3[8] * -0.14567313 + param_3[6] * 0.12615663 + *param_3 * 0.2820948) * param_2[11] +
                          (param_2[8] * -0.14567313 + param_2[6] * 0.12615663 + *param_2 * 0.2820948) * param_3[11] +
                          fVar12;
            fVar4 = param_3[11] * param_2[11];
            fVar2 = fVar4 * 0.2820948 + fVar2;
            *param_1 = fVar2;
            fVar17 = fVar4 * 0.12615663 + fVar17;
            param_1[6] = fVar17;
            fVar13 = fVar4 * -0.14567313 + fVar13;
            param_1[8] = fVar13;
            param_1[12] = (param_3[6] * 0.16820885 + *param_3 * 0.2820948) * param_2[12] +
                          (param_2[6] * 0.16820885 + *param_2 * 0.2820948) * param_3[12] + fVar8;
            fVar4 = param_3[12];
            fVar14 = param_2[12];
            fVar2 = fVar4 * fVar14 * 0.2820948 + fVar2;
            *param_1 = fVar2;
            fVar17 = fVar4 * fVar14 * 0.16820885 + fVar17;
            param_1[6] = fVar17;
            param_1[13] = (param_3[6] * 0.12615663 + param_3[8] * 0.14567313 + *param_3 * 0.2820948) * param_2[13] +
                          (param_2[6] * 0.12615663 + param_2[8] * 0.14567313 + *param_2 * 0.2820948) * param_3[13] +
                          fVar5;
            fVar4 = param_3[13] * param_2[13];
            fVar2 = fVar4 * 0.2820948 + fVar2;
            *param_1 = fVar2;
            param_1[8] = fVar4 * 0.14567313 + fVar13;
            fVar17 = fVar4 * 0.12615663 + fVar17;
            param_1[6] = fVar17;
            param_1[14] = (param_2[14] * *param_3 + param_3[14] * *param_2) * 0.2820948 + fVar20;
            fVar2 = param_2[14] * 0.2820948 * param_3[14] + fVar2;
            *param_1 = fVar2;
            param_1[15] = (*param_3 * 0.2820948 - param_3[6] * 0.21026105) * param_2[15] +
                          (*param_2 * 0.2820948 - param_2[6] * 0.21026105) * param_3[15] + fVar9;
            fVar4 = param_3[15];
            fVar14 = param_2[15];
            *param_1 = fVar4 * fVar14 * 0.2820948 + fVar2;
            param_1[6] = fVar17 - fVar4 * fVar14 * 0.21026105;
            pfVar1 = param_1;
        }
        return pfVar1;
    }

    // 0x1008b67d0, 18000 bytes, placed by neighbouring functions
    // SHMultiply5(float*, float const*, float const*)
    float* SHMultiply5(float* param_1, float* param_2, float* param_3) {
        float* pfVar1;
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

        pfVar1 = (float*)0;
        if (((param_1 != (float*)0) && (param_2 != (float*)0)) && (param_3 != (float*)0)) {
            fVar2 = *param_2 * 0.2820948 * *param_3;
            *param_1 = fVar2;
            fVar6 = (param_3[8] * -0.21850969 + param_3[6] * -0.12615663 + *param_3 * 0.2820948) * param_2[1] +
                    (param_2[8] * -0.21850969 + param_2[6] * -0.12615663 + *param_2 * 0.2820948) * param_3[1];
            param_1[1] = fVar6;
            fVar4 = param_3[1] * param_2[1];
            fVar2 = fVar4 * 0.2820948 + fVar2;
            *param_1 = fVar2;
            param_1[6] = fVar4 * -0.12615663;
            param_1[8] = fVar4 * -0.21850969;
            fVar13 = param_2[15] * -0.22617902 + param_2[13] * -0.05839917 + param_2[3] * 0.21850969;
            fVar8 = param_3[15] * -0.22617902 + param_3[13] * -0.05839917 + param_3[3] * 0.21850969;
            fVar6 = param_2[4] * fVar8 + param_3[4] * fVar13 + fVar6;
            param_1[1] = fVar6;
            fVar9 = fVar8 * param_2[1] + fVar13 * param_3[1];
            param_1[4] = fVar9;
            fVar24 = param_3[1] * param_2[4] + param_3[4] * param_2[1];
            param_1[3] = fVar24 * 0.21850969;
            param_1[13] = fVar24 * -0.05839917;
            param_1[15] = fVar24 * -0.22617902;
            fVar8 = param_2[14] * -0.1846744 + param_2[12] * -0.14304817 + param_2[2] * 0.21850969;
            fVar13 = param_3[14] * -0.1846744 + param_3[12] * -0.14304817 + param_3[2] * 0.21850969;
            fVar6 = param_2[5] * fVar13 + param_3[5] * fVar8 + fVar6;
            param_1[1] = fVar6;
            fVar14 = fVar13 * param_2[1] + fVar8 * param_3[1];
            param_1[5] = fVar14;
            fVar20 = param_3[1] * param_2[5] + param_3[5] * param_2[1];
            param_1[2] = fVar20 * 0.21850969;
            param_1[12] = fVar20 * -0.14304817;
            param_1[14] = fVar20 * -0.1846744;
            fVar13 = param_2[24] * -0.23032944 + param_2[22] * -0.043528173 + param_2[8] * 0.22617902;
            fVar8 = param_3[24] * -0.23032944 + param_3[22] * -0.043528173 + param_3[8] * 0.22617902;
            fVar6 = param_2[9] * fVar8 + param_3[9] * fVar13 + fVar6;
            param_1[1] = fVar6;
            fVar13 = fVar8 * param_2[1] + fVar13 * param_3[1];
            param_1[9] = fVar13;
            fVar12 = param_3[1] * param_2[9] + param_3[9] * param_2[1];
            fVar10 = fVar12 * 0.22617902 + fVar4 * -0.21850969;
            param_1[8] = fVar10;
            param_1[22] = fVar12 * -0.043528173;
            param_1[24] = fVar12 * -0.23032944;
            fVar8 = param_2[23] * -0.19947115 + param_2[21] * -0.075393006 + param_2[7] * 0.1846744;
            fVar21 = param_3[23] * -0.19947115 + param_3[21] * -0.075393006 + param_3[7] * 0.1846744;
            fVar6 = param_2[10] * fVar21 + param_3[10] * fVar8 + fVar6;
            param_1[1] = fVar6;
            fVar22 = fVar21 * param_2[1] + fVar8 * param_3[1];
            param_1[10] = fVar22;
            fVar21 = param_3[1] * param_2[10] + param_3[10] * param_2[1];
            param_1[7] = fVar21 * 0.1846744;
            param_1[21] = fVar21 * -0.075393006;
            param_1[23] = fVar21 * -0.19947115;
            fVar8 = param_2[22] * -0.16858388 + param_2[20] * -0.15078601 + param_2[8] * 0.05839917 +
                    param_2[6] * 0.20230065;
            fVar17 = param_3[22] * -0.16858388 + param_3[20] * -0.15078601 + param_3[8] * 0.05839917 +
                     param_3[6] * 0.20230065;
            fVar6 = param_2[11] * fVar17 + param_3[11] * fVar8 + fVar6;
            param_1[1] = fVar6;
            fVar18 = fVar17 * param_2[1] + fVar8 * param_3[1];
            param_1[11] = fVar18;
            fVar26 = param_3[1] * param_2[11] + param_3[11] * param_2[1];
            fVar23 = fVar26 * 0.20230065 + fVar4 * -0.12615663;
            fVar10 = fVar26 * 0.05839917 + fVar10;
            fVar27 = fVar26 * -0.16858388 + fVar12 * -0.043528173;
            param_1[6] = fVar23;
            param_1[8] = fVar10;
            param_1[20] = fVar26 * -0.15078601;
            param_1[22] = fVar27;
            fVar8 = param_2[19];
            fVar4 = param_3[19];
            fVar6 = param_2[12] * fVar4 * 0.1946639 + param_3[12] * fVar8 * 0.1946639 + fVar6;
            param_1[1] = fVar6;
            fVar25 = fVar4 * 0.1946639 * param_2[1] + fVar8 * 0.1946639 * param_3[1] + fVar20 * -0.14304817;
            param_1[12] = fVar25;
            fVar7 = (param_3[1] * param_2[12] + param_3[12] * param_2[1]) * 0.1946639;
            param_1[19] = fVar7;
            fVar8 = param_2[18];
            fVar4 = param_3[18];
            fVar6 = param_2[13] * fVar4 * 0.16858388 + param_3[13] * fVar8 * 0.16858388 + fVar6;
            param_1[1] = fVar6;
            fVar15 = fVar4 * 0.16858388 * param_2[1] + fVar8 * 0.16858388 * param_3[1] + fVar24 * -0.05839917;
            param_1[13] = fVar15;
            fVar16 = (param_3[1] * param_2[13] + param_3[13] * param_2[1]) * 0.16858388;
            param_1[18] = fVar16;
            fVar4 = param_2[19] * 0.075393006 + param_2[17] * 0.19947115;
            fVar8 = param_3[19] * 0.075393006 + param_3[17] * 0.19947115;
            fVar6 = param_2[14] * fVar8 + param_3[14] * fVar4 + fVar6;
            param_1[1] = fVar6;
            fVar19 = fVar4 * param_3[1] + fVar20 * -0.1846744 + fVar8 * param_2[1];
            param_1[14] = fVar19;
            fVar17 = param_3[1] * param_2[14] + param_3[14] * param_2[1];
            fVar7 = fVar17 * 0.075393006 + fVar7;
            fVar17 = fVar17 * 0.19947115;
            param_1[17] = fVar17;
            param_1[19] = fVar7;
            fVar4 = param_2[18] * 0.043528173 + param_2[16] * 0.23032944;
            fVar8 = param_3[18] * 0.043528173 + param_3[16] * 0.23032944;
            param_1[1] = param_2[15] * fVar8 + param_3[15] * fVar4 + fVar6;
            fVar11 = fVar4 * param_3[1] + fVar24 * -0.22617902 + fVar8 * param_2[1];
            param_1[15] = fVar11;
            fVar6 = param_3[1] * param_2[15] + param_3[15] * param_2[1];
            fVar16 = fVar6 * 0.043528173 + fVar16;
            fVar6 = fVar6 * 0.23032944;
            param_1[16] = fVar6;
            param_1[18] = fVar16;
            fVar3 = (param_2[6] * 0.25231326 + *param_2 * 0.2820948) * param_3[2] + fVar20 * 0.21850969 +
                    (param_3[6] * 0.25231326 + *param_3 * 0.2820948) * param_2[2];
            param_1[2] = fVar3;
            fVar2 = param_3[2] * param_2[2] * 0.2820948 + fVar2;
            fVar23 = param_3[2] * param_2[2] * 0.25231326 + fVar23;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            fVar8 = param_2[18] * 0.21324362 + param_2[4] * 0.1846744;
            fVar4 = param_3[18] * 0.21324362 + param_3[4] * 0.1846744;
            fVar3 = param_2[10] * fVar4 + param_3[10] * fVar8 + fVar3;
            param_1[2] = fVar3;
            fVar22 = fVar4 * param_2[2] + fVar8 * param_3[2] + fVar22;
            param_1[10] = fVar22;
            fVar8 = param_3[2] * param_2[10] + param_3[10] * param_2[2];
            fVar9 = fVar8 * 0.1846744 + fVar9;
            fVar16 = fVar8 * 0.21324362 + fVar16;
            param_1[4] = fVar9;
            param_1[18] = fVar16;
            fVar8 = param_2[20] * 0.24623254 + param_2[6] * 0.2477667;
            fVar4 = param_3[20] * 0.24623254 + param_3[6] * 0.2477667;
            fVar3 = param_2[12] * fVar4 + param_3[12] * fVar8 + fVar3;
            param_1[2] = fVar3;
            fVar25 = fVar4 * param_2[2] + fVar8 * param_3[2] + fVar25;
            param_1[12] = fVar25;
            fVar8 = param_3[2] * param_2[12] + param_3[12] * param_2[2];
            fVar23 = fVar8 * 0.2477667 + fVar23;
            fVar26 = fVar8 * 0.24623254 + fVar26 * -0.15078601;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            fVar4 = param_2[22] * 0.21324362 + param_2[8] * 0.1846744;
            fVar8 = param_3[22] * 0.21324362 + param_3[8] * 0.1846744;
            fVar3 = param_2[14] * fVar8 + param_3[14] * fVar4 + fVar3;
            param_1[2] = fVar3;
            fVar19 = fVar8 * param_2[2] + fVar4 * param_3[2] + fVar19;
            param_1[14] = fVar19;
            fVar8 = param_3[2] * param_2[14] + param_3[14] * param_2[2];
            fVar10 = fVar8 * 0.1846744 + fVar10;
            fVar27 = fVar8 * 0.21324362 + fVar27;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            fVar20 = (param_2[8] * 0.21850969 + param_2[6] * -0.12615663 + *param_2 * 0.2820948) * param_3[3] +
                     fVar24 * 0.21850969 +
                     (param_3[8] * 0.21850969 + param_3[6] * -0.12615663 + *param_3 * 0.2820948) * param_2[3];
            param_1[3] = fVar20;
            fVar8 = param_3[3] * param_2[3];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * -0.12615663 + fVar23;
            fVar10 = fVar8 * 0.21850969 + fVar10;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[8] = fVar10;
            fVar4 = param_2[14] * 0.1846744 + param_2[12] * -0.14304817 + param_2[2] * 0.21850969;
            fVar8 = param_3[14] * 0.1846744 + param_3[12] * -0.14304817 + param_3[2] * 0.21850969;
            fVar20 = param_2[7] * fVar8 + param_3[7] * fVar4 + fVar20;
            param_1[3] = fVar20;
            fVar24 = fVar4 * param_3[3] + fVar21 * 0.1846744 + fVar8 * param_2[3];
            param_1[7] = fVar24;
            fVar8 = param_3[3] * param_2[7] + param_3[7] * param_2[3];
            fVar3 = fVar8 * 0.21850969 + fVar3;
            fVar25 = fVar8 * -0.14304817 + fVar25;
            fVar19 = fVar8 * 0.1846744 + fVar19;
            param_1[2] = fVar3;
            param_1[12] = fVar25;
            param_1[14] = fVar19;
            fVar8 = param_2[18] * -0.043528173 + param_2[16] * 0.23032944 + param_2[4] * 0.22617902;
            fVar4 = param_3[18] * -0.043528173 + param_3[16] * 0.23032944 + param_3[4] * 0.22617902;
            fVar20 = param_2[9] * fVar4 + param_3[9] * fVar8 + fVar20;
            param_1[3] = fVar20;
            param_1[9] = fVar4 * param_2[3] + fVar8 * param_3[3] + fVar13;
            fVar8 = param_3[3] * param_2[9] + param_3[9] * param_2[3];
            fVar9 = fVar8 * 0.22617902 + fVar9;
            fVar6 = fVar8 * 0.23032944 + fVar6;
            fVar16 = fVar8 * -0.043528173 + fVar16;
            param_1[4] = fVar9;
            param_1[16] = fVar6;
            param_1[18] = fVar16;
            fVar8 = param_2[19] * -0.075393006 + param_2[17] * 0.19947115 + param_2[5] * 0.1846744;
            fVar4 = param_3[19] * -0.075393006 + param_3[17] * 0.19947115 + param_3[5] * 0.1846744;
            fVar20 = param_2[10] * fVar4 + param_3[10] * fVar8 + fVar20;
            param_1[3] = fVar20;
            param_1[10] = fVar4 * param_2[3] + fVar8 * param_3[3] + fVar22;
            fVar8 = param_3[3] * param_2[10] + param_3[10] * param_2[3];
            fVar14 = fVar8 * 0.1846744 + fVar14;
            fVar17 = fVar8 * 0.19947115 + fVar17;
            fVar7 = fVar8 * -0.075393006 + fVar7;
            param_1[5] = fVar14;
            param_1[17] = fVar17;
            param_1[19] = fVar7;
            fVar8 = param_2[21];
            fVar4 = param_3[21];
            fVar20 = param_2[12] * fVar4 * 0.1946639 + param_3[12] * fVar8 * 0.1946639 + fVar20;
            param_1[3] = fVar20;
            fVar25 = fVar4 * 0.1946639 * param_2[3] + fVar8 * 0.1946639 * param_3[3] + fVar25;
            param_1[12] = fVar25;
            fVar5 = (param_3[3] * param_2[12] + param_3[12] * param_2[3]) * 0.1946639 + fVar21 * -0.075393006;
            param_1[21] = fVar5;
            fVar4 = param_2[22] * 0.16858388 + param_2[20] * -0.15078601 + param_2[6] * 0.20230065 +
                    param_2[8] * -0.05839917;
            fVar8 = param_3[22] * 0.16858388 + param_3[20] * -0.15078601 + param_3[6] * 0.20230065 +
                    param_3[8] * -0.05839917;
            fVar20 = param_2[13] * fVar8 + param_3[13] * fVar4 + fVar20;
            param_1[3] = fVar20;
            fVar22 = fVar4 * param_3[3] + fVar15 + fVar8 * param_2[3];
            param_1[13] = fVar22;
            fVar8 = param_3[3] * param_2[13] + param_3[13] * param_2[3];
            fVar10 = fVar8 * -0.05839917 + fVar10;
            fVar23 = fVar8 * 0.20230065 + fVar23;
            fVar26 = fVar8 * -0.15078601 + fVar26;
            fVar27 = fVar8 * 0.16858388 + fVar27;
            param_1[8] = fVar10;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            param_1[22] = fVar27;
            fVar4 = param_2[23] * 0.19947115 + param_2[21] * -0.075393006;
            fVar8 = param_3[23] * 0.19947115 + param_3[21] * -0.075393006;
            fVar20 = param_2[14] * fVar8 + param_3[14] * fVar4 + fVar20;
            param_1[3] = fVar20;
            fVar19 = fVar8 * param_2[3] + fVar4 * param_3[3] + fVar19;
            param_1[14] = fVar19;
            fVar8 = param_3[3] * param_2[14] + param_3[14] * param_2[3];
            fVar5 = fVar8 * -0.075393006 + fVar5;
            fVar15 = fVar8 * 0.19947115 + fVar21 * -0.19947115;
            param_1[21] = fVar5;
            param_1[23] = fVar15;
            fVar8 = param_2[24] * 0.23032944 + param_2[22] * -0.043528173 + param_2[8] * 0.22617902;
            fVar4 = param_3[24] * 0.23032944 + param_3[22] * -0.043528173 + param_3[8] * 0.22617902;
            fVar20 = param_2[15] * fVar4 + param_3[15] * fVar8 + fVar20;
            param_1[3] = fVar20;
            fVar11 = fVar4 * param_2[3] + fVar8 * param_3[3] + fVar11;
            param_1[15] = fVar11;
            fVar8 = param_3[3] * param_2[15] + param_3[15] * param_2[3];
            fVar10 = fVar8 * 0.22617902 + fVar10;
            fVar27 = fVar8 * -0.043528173 + fVar27;
            fVar12 = fVar8 * 0.23032944 + fVar12 * -0.23032944;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            param_1[24] = fVar12;
            fVar9 = (param_3[24] * -0.23841362 + param_3[20] * 0.040299255 + param_3[6] * -0.18022375 +
                     *param_3 * 0.2820948) *
                        param_2[4] +
                    (param_2[24] * -0.23841362 + param_2[20] * 0.040299255 + param_2[6] * -0.18022375 +
                     *param_2 * 0.2820948) *
                        param_3[4] +
                    fVar9;
            param_1[4] = fVar9;
            fVar8 = param_3[4] * param_2[4];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * -0.18022375 + fVar23;
            fVar26 = fVar8 * 0.040299255 + fVar26;
            fVar12 = fVar8 * -0.23841362 + fVar12;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            param_1[24] = fVar12;
            fVar8 = param_2[23] * -0.16858388 + param_2[21] * -0.06371872 + param_2[7] * 0.15607835;
            fVar4 = param_3[23] * -0.16858388 + param_3[21] * -0.06371872 + param_3[7] * 0.15607835;
            fVar9 = param_2[5] * fVar4 + param_3[5] * fVar8 + fVar9;
            param_1[4] = fVar9;
            fVar14 = fVar4 * param_2[4] + fVar8 * param_3[4] + fVar14;
            param_1[5] = fVar14;
            fVar8 = param_3[4] * param_2[5] + param_3[5] * param_2[4];
            fVar24 = fVar8 * 0.15607835 + fVar24;
            fVar5 = fVar8 * -0.06371872 + fVar5;
            fVar15 = fVar8 * -0.16858388 + fVar15;
            param_1[7] = fVar24;
            param_1[21] = fVar5;
            param_1[23] = fVar15;
            fVar8 = param_2[15] * 0.094031595 + param_2[13] * 0.14567313 + param_2[3] * -0.05839917;
            fVar4 = param_3[15] * 0.094031595 + param_3[13] * 0.14567313 + param_3[3] * -0.05839917;
            fVar9 = param_2[11] * fVar4 + param_3[11] * fVar8 + fVar9;
            param_1[4] = fVar9;
            fVar18 = fVar4 * param_2[4] + fVar8 * param_3[4] + fVar18;
            param_1[11] = fVar18;
            fVar8 = param_3[4] * param_2[11] + param_3[11] * param_2[4];
            param_1[3] = fVar8 * -0.05839917 + fVar20;
            fVar22 = fVar8 * 0.14567313 + fVar22;
            param_1[13] = fVar22;
            param_1[15] = fVar8 * 0.094031595 + fVar11;
            fVar4 = param_2[22] * -0.07508082 + param_2[8] * 0.23841362;
            fVar8 = param_3[22] * -0.07508082 + param_3[8] * 0.23841362;
            fVar9 = param_2[16] * fVar8 + param_3[16] * fVar4 + fVar9;
            param_1[4] = fVar9;
            fVar6 = fVar4 * param_3[4] + fVar6 + fVar8 * param_2[4];
            param_1[16] = fVar6;
            fVar8 = param_3[4] * param_2[16] + param_3[16] * param_2[4];
            fVar10 = fVar8 * 0.23841362 + fVar10;
            fVar27 = fVar8 * -0.07508082 + fVar27;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            fVar8 = param_2[24] * 0.07508082 + (param_2[6] * 0.15607835 - param_2[20] * 0.19036461);
            fVar4 = param_3[24] * 0.07508082 + (param_3[6] * 0.15607835 - param_3[20] * 0.19036461);
            fVar9 = param_2[18] * fVar4 + param_3[18] * fVar8 + fVar9;
            param_1[4] = fVar9;
            fVar16 = fVar4 * param_2[4] + fVar8 * param_3[4] + fVar16;
            param_1[18] = fVar16;
            fVar8 = param_3[4] * param_2[18] + param_3[18] * param_2[4];
            fVar23 = fVar8 * 0.15607835 + fVar23;
            fVar26 = fVar26 - fVar8 * 0.19036461;
            fVar12 = fVar8 * 0.07508082 + fVar12;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            param_1[24] = fVar12;
            fVar4 = param_2[23] * 0.112621225 + param_2[21] * 0.14188941 + param_2[7] * -0.06371872;
            fVar8 = param_3[23] * 0.112621225 + param_3[21] * 0.14188941 + param_3[7] * -0.06371872;
            fVar9 = param_2[19] * fVar8 + param_3[19] * fVar4 + fVar9;
            param_1[4] = fVar9;
            fVar21 = fVar4 * param_3[4] + fVar7 + fVar8 * param_2[4];
            param_1[19] = fVar21;
            fVar8 = param_3[4] * param_2[19] + param_3[19] * param_2[4];
            fVar24 = fVar8 * -0.06371872 + fVar24;
            fVar5 = fVar8 * 0.14188941 + fVar5;
            fVar15 = fVar8 * 0.112621225 + fVar15;
            param_1[7] = fVar24;
            param_1[21] = fVar5;
            param_1[23] = fVar15;
            fVar14 = (param_3[22] * -0.18022375 + param_3[20] * -0.16119702 + param_3[8] * -0.15607835 +
                      param_3[6] * 0.090111874 + *param_3 * 0.2820948) *
                         param_2[5] +
                     (param_2[22] * -0.18022375 + param_2[20] * -0.16119702 + param_2[8] * -0.15607835 +
                      param_2[6] * 0.090111874 + *param_2 * 0.2820948) *
                         param_3[5] +
                     fVar14;
            param_1[5] = fVar14;
            fVar8 = param_3[5] * param_2[5];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * 0.090111874 + fVar23;
            fVar10 = fVar8 * -0.15607835 + fVar10;
            fVar26 = fVar8 * -0.16119702 + fVar26;
            fVar27 = fVar8 * -0.18022375 + fVar27;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[8] = fVar10;
            param_1[20] = fVar26;
            param_1[22] = fVar27;
            fVar4 = param_2[14] * -0.11516472 + param_2[12] * 0.059470803 + param_2[2] * 0.23359668;
            fVar8 = param_3[14] * -0.11516472 + param_3[12] * 0.059470803 + param_3[2] * 0.23359668;
            fVar14 = param_2[11] * fVar8 + param_3[11] * fVar4 + fVar14;
            param_1[5] = fVar14;
            param_1[11] = fVar8 * param_2[5] + fVar4 * param_3[5] + fVar18;
            fVar8 = param_3[5] * param_2[11] + param_3[11] * param_2[5];
            fVar3 = fVar8 * 0.23359668 + fVar3;
            fVar25 = fVar8 * 0.059470803 + fVar25;
            fVar19 = fVar8 * -0.11516472 + fVar19;
            param_1[2] = fVar3;
            param_1[12] = fVar25;
            param_1[14] = fVar19;
            fVar8 = param_2[24] * -0.14046335 + param_2[22] * 0.13272539 + param_2[8] * 0.16858388;
            fVar4 = param_3[24] * -0.14046335 + param_3[22] * 0.13272539 + param_3[8] * 0.16858388;
            fVar14 = param_2[17] * fVar4 + param_3[17] * fVar8 + fVar14;
            param_1[5] = fVar14;
            fVar17 = fVar8 * param_3[5] + fVar17 + fVar4 * param_2[5];
            param_1[17] = fVar17;
            fVar8 = param_3[5] * param_2[17] + param_3[17] * param_2[5];
            fVar10 = fVar8 * 0.16858388 + fVar10;
            fVar27 = fVar8 * 0.13272539 + fVar27;
            fVar12 = fVar8 * -0.14046335 + fVar12;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            param_1[24] = fVar12;
            fVar8 = param_2[23] * -0.13272539 + param_2[21] * 0.09029786 + param_2[7] * 0.18022375;
            fVar4 = param_3[23] * -0.13272539 + param_3[21] * 0.09029786 + param_3[7] * 0.18022375;
            fVar14 = param_2[18] * fVar4 + param_3[18] * fVar8 + fVar14;
            param_1[5] = fVar14;
            fVar16 = fVar4 * param_2[5] + fVar8 * param_3[5] + fVar16;
            param_1[18] = fVar16;
            fVar8 = param_3[5] * param_2[18] + param_3[18] * param_2[5];
            fVar24 = fVar8 * 0.18022375 + fVar24;
            fVar5 = fVar8 * 0.09029786 + fVar5;
            fVar15 = fVar8 * -0.13272539 + fVar15;
            param_1[7] = fVar24;
            param_1[21] = fVar5;
            param_1[23] = fVar15;
            fVar4 = param_2[22] * -0.09029786 + param_2[20] * 0.04486937 + param_2[8] * 0.06371872 +
                    param_2[6] * 0.22072811;
            fVar8 = param_3[22] * -0.09029786 + param_3[20] * 0.04486937 + param_3[8] * 0.06371872 +
                    param_3[6] * 0.22072811;
            fVar14 = param_2[19] * fVar8 + param_3[19] * fVar4 + fVar14;
            param_1[5] = fVar14;
            fVar21 = fVar8 * param_2[5] + fVar4 * param_3[5] + fVar21;
            param_1[19] = fVar21;
            fVar8 = param_3[5] * param_2[19] + param_3[19] * param_2[5];
            fVar23 = fVar8 * 0.22072811 + fVar23;
            fVar10 = fVar8 * 0.06371872 + fVar10;
            fVar26 = fVar8 * 0.04486937 + fVar26;
            fVar27 = fVar8 * -0.09029786 + fVar27;
            param_1[6] = fVar23;
            param_1[8] = fVar10;
            param_1[20] = fVar26;
            param_1[22] = fVar27;
            fVar23 = (param_3[20] * 0.24179555 + *param_3 * 0.2820948) * param_2[6] +
                     (param_2[20] * 0.24179555 + *param_2 * 0.2820948) * param_3[6] + fVar23;
            param_1[6] = fVar23;
            fVar8 = param_3[6] * param_2[6];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * 0.18022376 + fVar23;
            fVar26 = fVar8 * 0.24179555 + fVar26;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            fVar24 = (param_3[22] * 0.18022375 + param_3[20] * -0.16119702 + param_3[8] * 0.15607835 +
                      *param_3 * 0.2820948 + param_3[6] * 0.090111874) *
                         param_2[7] +
                     (param_2[22] * 0.18022375 + param_2[20] * -0.16119702 + param_2[8] * 0.15607835 +
                      *param_2 * 0.2820948 + param_2[6] * 0.090111874) *
                         param_3[7] +
                     fVar24;
            param_1[7] = fVar24;
            fVar8 = param_3[7] * param_2[7];
            fVar23 = fVar8 * 0.090111874 + fVar23;
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar10 = fVar8 * 0.15607835 + fVar10;
            fVar26 = fVar8 * -0.16119702 + fVar26;
            fVar27 = fVar8 * 0.18022375 + fVar27;
            param_1[6] = fVar23;
            *param_1 = fVar2;
            param_1[8] = fVar10;
            param_1[20] = fVar26;
            param_1[22] = fVar27;
            fVar8 = param_2[14] * 0.11516472 + param_2[2] * 0.23359668 + param_2[12] * 0.059470803;
            fVar4 = param_3[14] * 0.11516472 + param_3[2] * 0.23359668 + param_3[12] * 0.059470803;
            fVar24 = param_2[13] * fVar4 + param_3[13] * fVar8 + fVar24;
            param_1[7] = fVar24;
            fVar22 = fVar4 * param_2[7] + fVar8 * param_3[7] + fVar22;
            param_1[13] = fVar22;
            fVar8 = param_3[7] * param_2[13] + param_3[13] * param_2[7];
            fVar25 = fVar8 * 0.059470803 + fVar25;
            fVar3 = fVar8 * 0.23359668 + fVar3;
            fVar19 = fVar8 * 0.11516472 + fVar19;
            param_1[12] = fVar25;
            param_1[2] = fVar3;
            param_1[14] = fVar19;
            fVar4 = param_2[18] * 0.13272539 + param_2[4] * 0.16858388 + param_2[16] * 0.14046335;
            fVar8 = param_3[18] * 0.13272539 + param_3[4] * 0.16858388 + param_3[16] * 0.14046335;
            fVar24 = param_2[17] * fVar8 + param_3[17] * fVar4 + fVar24;
            param_1[7] = fVar24;
            fVar17 = fVar8 * param_2[7] + fVar4 * param_3[7] + fVar17;
            param_1[17] = fVar17;
            fVar8 = param_3[7] * param_2[17] + param_3[17] * param_2[7];
            fVar6 = fVar8 * 0.14046335 + fVar6;
            fVar9 = fVar8 * 0.16858388 + fVar9;
            fVar16 = fVar8 * 0.13272539 + fVar16;
            param_1[16] = fVar6;
            param_1[4] = fVar9;
            param_1[18] = fVar16;
            fVar8 = param_2[22] * 0.09029786 + param_2[6] * 0.22072811 + param_2[20] * 0.04486937 +
                    param_2[8] * -0.06371872;
            fVar4 = param_3[22] * 0.09029786 + param_3[6] * 0.22072811 + param_3[20] * 0.04486937 +
                    param_3[8] * -0.06371872;
            fVar24 = param_2[21] * fVar4 + param_3[21] * fVar8 + fVar24;
            param_1[7] = fVar24;
            fVar5 = fVar4 * param_2[7] + fVar8 * param_3[7] + fVar5;
            param_1[21] = fVar5;
            fVar8 = param_3[7] * param_2[21] + param_3[21] * param_2[7];
            fVar10 = fVar8 * -0.06371872 + fVar10;
            fVar26 = fVar8 * 0.04486937 + fVar26;
            fVar23 = fVar8 * 0.22072811 + fVar23;
            fVar27 = fVar8 * 0.09029786 + fVar27;
            param_1[8] = fVar10;
            param_1[20] = fVar26;
            param_1[6] = fVar23;
            param_1[22] = fVar27;
            fVar4 = param_2[24] * 0.14046335 + param_2[22] * 0.13272539 + param_2[8] * 0.16858388;
            fVar8 = param_3[24] * 0.14046335 + param_3[22] * 0.13272539 + param_3[8] * 0.16858388;
            fVar24 = param_2[23] * fVar8 + param_3[23] * fVar4 + fVar24;
            param_1[7] = fVar24;
            fVar15 = fVar8 * param_2[7] + fVar4 * param_3[7] + fVar15;
            param_1[23] = fVar15;
            fVar8 = param_3[7] * param_2[23] + param_3[23] * param_2[7];
            fVar10 = fVar8 * 0.16858388 + fVar10;
            fVar27 = fVar8 * 0.13272539 + fVar27;
            fVar12 = fVar8 * 0.14046335 + fVar12;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            param_1[24] = fVar12;
            fVar10 = (param_3[24] * 0.23841362 + param_3[20] * 0.040299255 + param_3[6] * -0.18022375 +
                      *param_3 * 0.2820948) *
                         param_2[8] +
                     (param_2[24] * 0.23841362 + param_2[20] * 0.040299255 + param_2[6] * -0.18022375 +
                      *param_2 * 0.2820948) *
                         param_3[8] +
                     fVar10;
            param_1[8] = fVar10;
            fVar8 = param_3[8] * param_2[8];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * -0.18022375 + fVar23;
            fVar26 = fVar8 * 0.040299255 + fVar26;
            fVar12 = fVar8 * 0.23841362 + fVar12;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            param_1[24] = fVar12;
            fVar4 = param_2[24] * -0.07508082 + (param_2[6] * 0.15607835 - param_2[20] * 0.19036461);
            fVar8 = param_3[24] * -0.07508082 + (param_3[6] * 0.15607835 - param_3[20] * 0.19036461);
            fVar10 = param_2[22] * fVar8 + param_3[22] * fVar4 + fVar10;
            param_1[8] = fVar10;
            fVar27 = fVar8 * param_2[8] + fVar4 * param_3[8] + fVar27;
            param_1[22] = fVar27;
            fVar8 = param_3[8] * param_2[22] + param_3[22] * param_2[8];
            fVar23 = fVar8 * 0.15607835 + fVar23;
            fVar26 = fVar26 - fVar8 * 0.19036461;
            fVar12 = fVar8 * -0.07508082 + fVar12;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            param_1[24] = fVar12;
            fVar13 = (param_3[20] * 0.07693494 + *param_3 * 0.2820948 + param_3[6] * -0.21026105) * param_2[9] +
                     (param_2[20] * 0.07693494 + *param_2 * 0.2820948 + param_2[6] * -0.21026105) * param_3[9] +
                     param_1[9];
            param_1[9] = fVar13;
            fVar8 = param_3[9] * param_2[9];
            fVar23 = fVar8 * -0.21026105 + fVar23;
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar26 = fVar8 * 0.07693494 + fVar26;
            param_1[6] = fVar23;
            *param_1 = fVar2;
            param_1[20] = fVar26;
            fVar4 = param_2[7] * 0.148677 - param_2[21] * 0.09932259;
            fVar8 = param_3[7] * 0.148677 - param_3[21] * 0.09932259;
            fVar13 = param_2[10] * fVar8 + param_3[10] * fVar4 + fVar13;
            param_1[9] = fVar13;
            param_1[10] = fVar8 * param_2[9] + fVar4 * param_3[9] + param_1[10];
            fVar8 = param_3[9] * param_2[10] + param_3[10] * param_2[9];
            fVar24 = fVar8 * 0.148677 + fVar24;
            fVar5 = fVar5 - fVar8 * 0.09932259;
            param_1[7] = fVar24;
            param_1[21] = fVar5;
            fVar8 = param_2[24] * 0.117520064 + param_2[22] * 0.13325523 + param_2[8] * -0.094031595;
            fVar4 = param_3[24] * 0.117520064 + param_3[22] * 0.13325523 + param_3[8] * -0.094031595;
            fVar13 = param_2[11] * fVar4 + param_3[11] * fVar8 + fVar13;
            param_1[9] = fVar13;
            param_1[11] = fVar4 * param_2[9] + fVar8 * param_3[9] + param_1[11];
            fVar8 = param_3[9] * param_2[11] + param_3[11] * param_2[9];
            fVar10 = fVar8 * -0.094031595 + fVar10;
            fVar27 = fVar8 * 0.13325523 + fVar27;
            fVar12 = fVar8 * 0.117520064 + fVar12;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            param_1[24] = fVar12;
            fVar8 = param_2[18] * 0.13325523 + param_2[16] * -0.117520064 + param_2[4] * -0.094031595;
            fVar4 = param_3[18] * 0.13325523 + param_3[16] * -0.117520064 + param_3[4] * -0.094031595;
            fVar13 = param_2[13] * fVar4 + param_3[13] * fVar8 + fVar13;
            param_1[9] = fVar13;
            fVar22 = fVar4 * param_2[9] + fVar8 * param_3[9] + fVar22;
            param_1[13] = fVar22;
            fVar8 = param_3[9] * param_2[13] + param_3[13] * param_2[9];
            fVar9 = fVar8 * -0.094031595 + fVar9;
            fVar6 = fVar8 * -0.117520064 + fVar6;
            fVar16 = fVar8 * 0.13325523 + fVar16;
            param_1[4] = fVar9;
            param_1[16] = fVar6;
            param_1[18] = fVar16;
            fVar8 = param_2[5] * 0.148677 - param_2[19] * 0.09932259;
            fVar4 = param_3[5] * 0.148677 - param_3[19] * 0.09932259;
            fVar13 = param_2[14] * fVar4 + param_3[14] * fVar8 + fVar13;
            param_1[9] = fVar13;
            fVar19 = fVar4 * param_2[9] + fVar8 * param_3[9] + fVar19;
            param_1[14] = fVar19;
            fVar8 = param_3[9] * param_2[14] + param_3[14] * param_2[9];
            fVar14 = fVar8 * 0.148677 + fVar14;
            fVar21 = fVar21 - fVar8 * 0.09932259;
            param_1[5] = fVar14;
            param_1[19] = fVar21;
            fVar8 = param_2[2] * 0.1628675 - param_2[12] * 0.20355073;
            fVar4 = param_3[2] * 0.1628675 - param_3[12] * 0.20355073;
            param_1[9] = param_2[17] * fVar4 + param_3[17] * fVar8 + fVar13;
            fVar17 = fVar4 * param_2[9] + fVar8 * param_3[9] + fVar17;
            param_1[17] = fVar17;
            fVar8 = param_3[9] * param_2[17] + param_3[17] * param_2[9];
            fVar3 = fVar8 * 0.1628675 + fVar3;
            fVar25 = fVar25 - fVar8 * 0.20355073;
            param_1[2] = fVar3;
            param_1[12] = fVar25;
            fVar13 = (param_3[24] * -0.15171775 + param_3[20] * -0.17951487 + *param_3 * 0.2820948) * param_2[10] +
                     (param_2[24] * -0.15171775 + param_2[20] * -0.17951487 + *param_2 * 0.2820948) * param_3[10] +
                     param_1[10];
            param_1[10] = fVar13;
            fVar8 = param_3[10] * param_2[10];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar26 = fVar8 * -0.17951487 + fVar26;
            fVar12 = fVar8 * -0.15171775 + fVar12;
            *param_1 = fVar2;
            param_1[20] = fVar26;
            param_1[24] = fVar12;
            fVar8 = param_2[23] * -0.06785024 + param_2[21] * 0.10257992 + param_2[7] * 0.11516472;
            fVar4 = param_3[23] * -0.06785024 + param_3[21] * 0.10257992 + param_3[7] * 0.11516472;
            fVar13 = param_2[11] * fVar4 + param_3[11] * fVar8 + fVar13;
            param_1[10] = fVar13;
            param_1[11] = fVar4 * param_2[10] + fVar8 * param_3[10] + param_1[11];
            fVar8 = param_3[10] * param_2[11] + param_3[11] * param_2[10];
            fVar24 = fVar8 * 0.11516472 + fVar24;
            fVar5 = fVar8 * 0.10257992 + fVar5;
            fVar15 = fVar8 * -0.06785024 + fVar15;
            param_1[7] = fVar24;
            param_1[21] = fVar5;
            param_1[23] = fVar15;
            fVar8 = param_2[4] * -0.18806319 - param_2[18] * 0.04441841;
            fVar4 = param_3[4] * -0.18806319 - param_3[18] * 0.04441841;
            fVar13 = param_2[12] * fVar4 + param_3[12] * fVar8 + fVar13;
            param_1[10] = fVar13;
            fVar25 = fVar4 * param_2[10] + fVar8 * param_3[10] + fVar25;
            param_1[12] = fVar25;
            fVar8 = param_3[10] * param_2[12] + param_3[12] * param_2[10];
            param_1[4] = fVar8 * -0.18806319 + fVar9;
            fVar16 = fVar16 - fVar8 * 0.04441841;
            param_1[18] = fVar16;
            fVar8 = param_2[19] * 0.10257992 + param_2[17] * 0.06785024 + param_2[5] * 0.11516472;
            fVar4 = param_3[19] * 0.10257992 + param_3[17] * 0.06785024 + param_3[5] * 0.11516472;
            fVar13 = param_2[13] * fVar4 + param_3[13] * fVar8 + fVar13;
            param_1[10] = fVar13;
            fVar22 = fVar4 * param_2[10] + fVar8 * param_3[10] + fVar22;
            param_1[13] = fVar22;
            fVar8 = param_3[10] * param_2[13] + param_3[13] * param_2[10];
            fVar14 = fVar8 * 0.11516472 + fVar14;
            fVar17 = fVar8 * 0.06785024 + fVar17;
            fVar21 = fVar8 * 0.10257992 + fVar21;
            param_1[5] = fVar14;
            param_1[17] = fVar17;
            param_1[19] = fVar21;
            fVar8 = param_2[16];
            fVar4 = param_3[16];
            fVar13 = param_2[14] * fVar4 * 0.15171775 + param_3[14] * fVar8 * 0.15171775 + fVar13;
            param_1[10] = fVar13;
            fVar19 = fVar4 * 0.15171775 * param_2[10] + fVar8 * 0.15171775 * param_3[10] + fVar19;
            param_1[14] = fVar19;
            fVar6 = (param_3[10] * param_2[14] + param_3[14] * param_2[10]) * 0.15171775 + fVar6;
            param_1[16] = fVar6;
            fVar8 = param_2[19] * 0.09932259 - param_2[5] * 0.148677;
            fVar4 = param_3[19] * 0.09932259 - param_3[5] * 0.148677;
            param_1[10] = param_2[15] * fVar4 + param_3[15] * fVar8 + fVar13;
            param_1[15] = fVar4 * param_2[10] + fVar8 * param_3[10] + param_1[15];
            fVar8 = param_3[10] * param_2[15] + param_3[15] * param_2[10];
            fVar14 = fVar14 - fVar8 * 0.148677;
            fVar21 = fVar8 * 0.09932259 + fVar21;
            param_1[5] = fVar14;
            param_1[19] = fVar21;
            fVar13 = (param_3[22] * -0.114687845 + param_3[20] * 0.02564498 + param_3[8] * -0.14567313 +
                      param_3[6] * 0.12615663 + *param_3 * 0.2820948) *
                         param_2[11] +
                     (param_2[22] * -0.114687845 + param_2[20] * 0.02564498 + param_2[8] * -0.14567313 +
                      param_2[6] * 0.12615663 + *param_2 * 0.2820948) *
                         param_3[11] +
                     param_1[11];
            param_1[11] = fVar13;
            fVar8 = param_3[11] * param_2[11];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * 0.12615663 + fVar23;
            fVar10 = fVar8 * -0.14567313 + fVar10;
            fVar26 = fVar8 * 0.02564498 + fVar26;
            fVar27 = fVar8 * -0.114687845 + fVar27;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[8] = fVar10;
            param_1[20] = fVar26;
            param_1[22] = fVar27;
            fVar8 = param_2[17];
            fVar4 = param_3[17];
            fVar13 = param_2[14] * fVar4 * 0.06785024 + param_3[14] * fVar8 * 0.06785024 + fVar13;
            param_1[11] = fVar13;
            fVar19 = fVar4 * 0.06785024 * param_2[11] + fVar8 * 0.06785024 * param_3[11] + fVar19;
            param_1[14] = fVar19;
            fVar17 = (param_3[11] * param_2[14] + param_3[14] * param_2[11]) * 0.06785024 + fVar17;
            param_1[17] = fVar17;
            fVar8 = param_2[16];
            fVar4 = param_3[16];
            fVar13 = param_2[15] * fVar4 * -0.117520064 + param_3[15] * fVar8 * -0.117520064 + fVar13;
            param_1[11] = fVar13;
            param_1[15] = fVar4 * -0.117520064 * param_2[11] + fVar8 * -0.117520064 * param_3[11] + param_1[15];
            fVar6 = (param_3[11] * param_2[15] + param_3[15] * param_2[11]) * -0.117520064 + fVar6;
            param_1[16] = fVar6;
            fVar8 = param_2[15] * -0.13325523 + param_2[13] * 0.114687845 + param_2[3] * 0.16858388;
            fVar4 = param_3[15] * -0.13325523 + param_3[13] * 0.114687845 + param_3[3] * 0.16858388;
            fVar13 = param_2[18] * fVar4 + param_3[18] * fVar8 + fVar13;
            param_1[11] = fVar13;
            fVar16 = fVar4 * param_2[11] + fVar8 * param_3[11] + fVar16;
            param_1[18] = fVar16;
            fVar8 = param_3[11] * param_2[18] + param_3[18] * param_2[11];
            param_1[3] = fVar8 * 0.16858388 + param_1[3];
            fVar22 = fVar8 * 0.114687845 + fVar22;
            param_1[13] = fVar22;
            param_1[15] = fVar8 * -0.13325523 + param_1[15];
            fVar4 = param_2[12] * 0.09932259 + (param_2[2] * 0.23841362 - param_2[14] * 0.10257992);
            fVar8 = param_3[12] * 0.09932259 + (param_3[2] * 0.23841362 - param_3[14] * 0.10257992);
            param_1[11] = param_2[19] * fVar8 + param_3[19] * fVar4 + fVar13;
            fVar21 = fVar8 * param_2[11] + fVar4 * param_3[11] + fVar21;
            param_1[19] = fVar21;
            fVar8 = param_3[11] * param_2[19] + param_3[19] * param_2[11];
            fVar3 = fVar8 * 0.23841362 + fVar3;
            fVar19 = fVar19 - fVar8 * 0.10257992;
            fVar25 = fVar8 * 0.09932259 + fVar25;
            param_1[2] = fVar3;
            param_1[14] = fVar19;
            param_1[12] = fVar25;
            fVar25 = (param_3[20] * 0.15386991 + param_3[6] * 0.16820885 + *param_3 * 0.2820948) * param_2[12] +
                     (param_2[20] * 0.15386991 + param_2[6] * 0.16820885 + *param_2 * 0.2820948) * param_3[12] + fVar25;
            param_1[12] = fVar25;
            fVar8 = param_3[12] * param_2[12];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * 0.16820885 + fVar23;
            fVar26 = fVar8 * 0.15386991 + fVar26;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            fVar4 = param_2[8] * -0.18806319 - param_2[22] * 0.04441841;
            fVar8 = param_3[8] * -0.18806319 - param_3[22] * 0.04441841;
            fVar25 = param_2[14] * fVar8 + param_3[14] * fVar4 + fVar25;
            param_1[12] = fVar25;
            fVar19 = fVar8 * param_2[12] + fVar4 * param_3[12] + fVar19;
            param_1[14] = fVar19;
            fVar8 = param_3[12] * param_2[14] + param_3[14] * param_2[12];
            fVar10 = fVar8 * -0.18806319 + fVar10;
            fVar27 = fVar27 - fVar8 * 0.04441841;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            fVar22 = (param_3[22] * 0.114687845 + param_3[20] * 0.02564498 + param_3[6] * 0.12615663 +
                      param_3[8] * 0.14567313 + *param_3 * 0.2820948) *
                         param_2[13] +
                     (param_2[22] * 0.114687845 + param_2[20] * 0.02564498 + param_2[6] * 0.12615663 +
                      param_2[8] * 0.14567313 + *param_2 * 0.2820948) *
                         param_3[13] +
                     fVar22;
            param_1[13] = fVar22;
            fVar8 = param_3[13] * param_2[13];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar10 = fVar8 * 0.14567313 + fVar10;
            fVar23 = fVar8 * 0.12615663 + fVar23;
            fVar26 = fVar8 * 0.02564498 + fVar26;
            fVar27 = fVar8 * 0.114687845 + fVar27;
            *param_1 = fVar2;
            param_1[8] = fVar10;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            param_1[22] = fVar27;
            fVar8 = param_2[23];
            fVar4 = param_3[23];
            fVar22 = param_2[14] * fVar4 * 0.06785024 + param_3[14] * fVar8 * 0.06785024 + fVar22;
            param_1[13] = fVar22;
            fVar19 = fVar4 * 0.06785024 * param_2[13] + fVar8 * 0.06785024 * param_3[13] + fVar19;
            param_1[14] = fVar19;
            fVar15 = (param_3[13] * param_2[14] + param_3[14] * param_2[13]) * 0.06785024 + fVar15;
            param_1[23] = fVar15;
            fVar8 = param_2[24] * -0.117520064 + param_2[22] * 0.13325523 + param_2[8] * -0.094031595;
            fVar4 = param_3[24] * -0.117520064 + param_3[22] * 0.13325523 + param_3[8] * -0.094031595;
            fVar22 = param_2[15] * fVar4 + param_3[15] * fVar8 + fVar22;
            param_1[13] = fVar22;
            param_1[15] = fVar4 * param_2[13] + fVar8 * param_3[13] + param_1[15];
            fVar8 = param_3[13] * param_2[15] + param_3[15] * param_2[13];
            fVar10 = fVar8 * -0.094031595 + fVar10;
            fVar27 = fVar8 * 0.13325523 + fVar27;
            fVar12 = fVar8 * -0.117520064 + fVar12;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            param_1[24] = fVar12;
            fVar8 = param_2[14] * 0.10257992 + param_2[12] * 0.09932259 + param_2[2] * 0.23841362;
            fVar4 = param_3[14] * 0.10257992 + param_3[12] * 0.09932259 + param_3[2] * 0.23841362;
            param_1[13] = param_2[21] * fVar4 + param_3[21] * fVar8 + fVar22;
            fVar5 = fVar4 * param_2[13] + fVar8 * param_3[13] + fVar5;
            param_1[21] = fVar5;
            fVar8 = param_3[13] * param_2[21] + param_3[21] * param_2[13];
            fVar3 = fVar8 * 0.23841362 + fVar3;
            fVar25 = fVar8 * 0.09932259 + fVar25;
            fVar19 = fVar8 * 0.10257992 + fVar19;
            param_1[2] = fVar3;
            param_1[12] = fVar25;
            param_1[14] = fVar19;
            fVar19 = (param_3[24] * 0.15171775 + param_3[20] * -0.17951487 + *param_3 * 0.2820948) * param_2[14] +
                     (param_2[24] * 0.15171775 + param_2[20] * -0.17951487 + *param_2 * 0.2820948) * param_3[14] +
                     fVar19;
            param_1[14] = fVar19;
            fVar8 = param_3[14] * param_2[14];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar26 = fVar8 * -0.17951487 + fVar26;
            fVar12 = fVar8 * 0.15171775 + fVar12;
            *param_1 = fVar2;
            param_1[20] = fVar26;
            param_1[24] = fVar12;
            fVar4 = param_2[7] * 0.148677 - param_2[21] * 0.09932259;
            fVar8 = param_3[7] * 0.148677 - param_3[21] * 0.09932259;
            param_1[14] = param_2[15] * fVar8 + param_3[15] * fVar4 + fVar19;
            fVar8 = fVar8 * param_2[14] + fVar4 * param_3[14] + param_1[15];
            param_1[15] = fVar8;
            fVar4 = param_3[14] * param_2[15] + param_3[15] * param_2[14];
            fVar24 = fVar4 * 0.148677 + fVar24;
            fVar5 = fVar5 - fVar4 * 0.09932259;
            param_1[7] = fVar24;
            param_1[21] = fVar5;
            fVar8 = (param_3[20] * 0.07693494 + param_3[6] * -0.21026105 + *param_3 * 0.2820948) * param_2[15] +
                    (param_2[20] * 0.07693494 + param_2[6] * -0.21026105 + *param_2 * 0.2820948) * param_3[15] + fVar8;
            param_1[15] = fVar8;
            fVar4 = param_3[15] * param_2[15];
            fVar2 = fVar4 * 0.2820948 + fVar2;
            fVar23 = fVar4 * -0.21026105 + fVar23;
            fVar26 = fVar4 * 0.07693494 + fVar26;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            fVar13 = param_2[2] * 0.1628675 - param_2[12] * 0.20355073;
            fVar4 = param_3[2] * 0.1628675 - param_3[12] * 0.20355073;
            param_1[15] = param_2[23] * fVar4 + param_3[23] * fVar13 + fVar8;
            fVar15 = fVar4 * param_2[15] + fVar13 * param_3[15] + fVar15;
            param_1[23] = fVar15;
            fVar8 = param_3[15] * param_2[23] + param_3[23] * param_2[15];
            param_1[12] = fVar25 - fVar8 * 0.20355073;
            param_1[2] = fVar8 * 0.1628675 + fVar3;
            fVar6 = (param_3[20] * 0.10652531 + param_3[6] * -0.22937569 + *param_3 * 0.2820948) * param_2[16] +
                    (param_2[20] * 0.10652531 + param_2[6] * -0.22937569 + *param_2 * 0.2820948) * param_3[16] + fVar6;
            param_1[16] = fVar6;
            fVar8 = param_3[16] * param_2[16];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * -0.22937569 + fVar23;
            fVar26 = fVar8 * 0.10652531 + fVar26;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            fVar8 = param_2[22] * 0.13504547 + param_2[8] * -0.07508082;
            fVar4 = param_3[22] * 0.13504547 + param_3[8] * -0.07508082;
            fVar6 = param_2[18] * fVar4 + param_3[18] * fVar8 + fVar6;
            param_1[16] = fVar6;
            fVar16 = fVar4 * param_2[16] + fVar8 * param_3[16] + fVar16;
            param_1[18] = fVar16;
            fVar8 = param_3[16] * param_2[18] + param_3[18] * param_2[16];
            fVar10 = fVar8 * -0.07508082 + fVar10;
            fVar27 = fVar8 * 0.13504547 + fVar27;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            fVar8 = param_2[5] * 0.14046335 + param_2[19] * -0.11909891;
            fVar4 = param_3[5] * 0.14046335 + param_3[19] * -0.11909891;
            fVar6 = param_2[23] * fVar4 + param_3[23] * fVar8 + fVar6;
            param_1[16] = fVar6;
            fVar15 = fVar4 * param_2[16] + fVar8 * param_3[16] + fVar15;
            param_1[23] = fVar15;
            fVar8 = param_3[16] * param_2[23] + param_3[23] * param_2[16];
            fVar21 = fVar8 * -0.11909891 + fVar21;
            param_1[19] = fVar21;
            param_1[5] = fVar8 * 0.14046335 + fVar14;
            fVar17 = (param_3[20] * -0.15978795 + param_3[6] * -0.057343923 + *param_3 * 0.2820948) * param_2[17] +
                     (param_2[20] * -0.15978795 + param_2[6] * -0.057343923 + *param_2 * 0.2820948) * param_3[17] +
                     fVar17;
            param_1[17] = fVar17;
            fVar8 = param_3[17] * param_2[17];
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar23 = fVar8 * -0.057343923 + fVar23;
            fVar26 = fVar8 * -0.15978795 + fVar26;
            *param_1 = fVar2;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            fVar4 = param_2[24] * 0.11909891 + (param_2[22] * 0.045015156 - param_2[8] * 0.112621225);
            fVar8 = param_3[24] * 0.11909891 + (param_3[22] * 0.045015156 - param_3[8] * 0.112621225);
            fVar17 = param_2[19] * fVar8 + param_3[19] * fVar4 + fVar17;
            param_1[17] = fVar17;
            fVar21 = fVar8 * param_2[17] + fVar4 * param_3[17] + fVar21;
            param_1[19] = fVar21;
            fVar8 = param_3[17] * param_2[19] + param_3[19] * param_2[17];
            fVar10 = fVar10 - fVar8 * 0.112621225;
            fVar27 = fVar8 * 0.045015156 + fVar27;
            fVar12 = fVar8 * 0.11909891 + fVar12;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            param_1[24] = fVar12;
            fVar4 = param_2[18] * 0.045015156 + (param_2[16] * -0.11909891 - param_2[4] * 0.112621225);
            fVar8 = param_3[18] * 0.045015156 + (param_3[16] * -0.11909891 - param_3[4] * 0.112621225);
            param_1[17] = param_2[21] * fVar8 + param_3[21] * fVar4 + fVar17;
            fVar5 = fVar8 * param_2[17] + fVar4 * param_3[17] + fVar5;
            param_1[21] = fVar5;
            fVar8 = param_3[17] * param_2[21] + param_3[21] * param_2[17];
            param_1[16] = fVar8 * -0.11909891 + fVar6;
            param_1[4] = param_1[4] - fVar8 * 0.112621225;
            fVar16 = fVar8 * 0.045015156 + fVar16;
            param_1[18] = fVar16;
            fVar16 = (param_3[24] * -0.13504547 + param_3[20] * -0.08369845 + *param_3 * 0.2820948 +
                      param_3[6] * 0.06553591) *
                         param_2[18] +
                     (param_2[24] * -0.13504547 + param_2[20] * -0.08369845 + *param_2 * 0.2820948 +
                      param_2[6] * 0.06553591) *
                         param_3[18] +
                     fVar16;
            param_1[18] = fVar16;
            fVar8 = param_3[18] * param_2[18];
            fVar23 = fVar8 * 0.06553591 + fVar23;
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar26 = fVar8 * -0.08369845 + fVar26;
            fVar12 = fVar8 * -0.13504547 + fVar12;
            param_1[6] = fVar23;
            *param_1 = fVar2;
            param_1[20] = fVar26;
            param_1[24] = fVar12;
            fVar4 = param_2[23] * -0.045015156 + param_2[21] * 0.102084786 + param_2[7] * 0.09029786;
            fVar8 = param_3[23] * -0.045015156 + param_3[21] * 0.102084786 + param_3[7] * 0.09029786;
            param_1[18] = param_2[19] * fVar8 + param_3[19] * fVar4 + fVar16;
            fVar21 = fVar8 * param_2[18] + fVar4 * param_3[18] + fVar21;
            param_1[19] = fVar21;
            fVar8 = param_3[18] * param_2[19] + param_3[19] * param_2[18];
            param_1[7] = fVar8 * 0.09029786 + fVar24;
            fVar5 = fVar8 * 0.102084786 + fVar5;
            fVar15 = fVar8 * -0.045015156 + fVar15;
            param_1[21] = fVar5;
            param_1[23] = fVar15;
            param_1[19] = (param_3[22] * -0.102084786 + param_3[20] * 0.06848055 + *param_3 * 0.2820948 +
                           param_3[8] * -0.14188941 + param_3[6] * 0.13926381) *
                              param_2[19] +
                          (param_2[22] * -0.102084786 + param_2[20] * 0.06848055 + *param_2 * 0.2820948 +
                           param_2[8] * -0.14188941 + param_2[6] * 0.13926381) *
                              param_3[19] +
                          fVar21;
            fVar8 = param_3[19] * param_2[19];
            fVar23 = fVar8 * 0.13926381 + fVar23;
            fVar10 = fVar8 * -0.14188941 + fVar10;
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar26 = fVar8 * 0.06848055 + fVar26;
            fVar27 = fVar8 * -0.102084786 + fVar27;
            param_1[6] = fVar23;
            param_1[8] = fVar10;
            *param_1 = fVar2;
            param_1[20] = fVar26;
            param_1[22] = fVar27;
            fVar26 = (*param_3 * 0.2820948 + param_3[6] * 0.1638398) * param_2[20] +
                     (*param_2 * 0.2820948 + param_2[6] * 0.1638398) * param_3[20] + fVar26;
            param_1[20] = fVar26;
            fVar8 = param_3[20] * param_2[20];
            fVar23 = fVar8 * 0.1638398 + fVar23;
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar26 = fVar8 * 0.13696113 + fVar26;
            param_1[6] = fVar23;
            *param_1 = fVar2;
            param_1[20] = fVar26;
            fVar5 = (param_3[22] * 0.102084786 + param_3[8] * 0.14188941 + *param_3 * 0.2820948 +
                     param_3[20] * 0.06848055 + param_3[6] * 0.13926381) *
                        param_2[21] +
                    (param_2[22] * 0.102084786 + param_2[8] * 0.14188941 + *param_2 * 0.2820948 +
                     param_2[20] * 0.06848055 + param_2[6] * 0.13926381) *
                        param_3[21] +
                    fVar5;
            param_1[21] = fVar5;
            fVar8 = param_3[21] * param_2[21];
            fVar23 = fVar8 * 0.13926381 + fVar23;
            fVar26 = fVar8 * 0.06848055 + fVar26;
            fVar2 = fVar8 * 0.2820948 + fVar2;
            fVar10 = fVar8 * 0.14188941 + fVar10;
            fVar27 = fVar8 * 0.102084786 + fVar27;
            param_1[6] = fVar23;
            param_1[20] = fVar26;
            *param_1 = fVar2;
            param_1[8] = fVar10;
            param_1[22] = fVar27;
            fVar4 = param_2[24] * -0.11909891 + (param_2[22] * 0.045015156 - param_2[8] * 0.112621225);
            fVar8 = param_3[24] * -0.11909891 + (param_3[22] * 0.045015156 - param_3[8] * 0.112621225);
            param_1[21] = param_2[23] * fVar8 + param_3[23] * fVar4 + fVar5;
            fVar15 = fVar8 * param_2[21] + fVar4 * param_3[21] + fVar15;
            param_1[23] = fVar15;
            fVar8 = param_3[21] * param_2[23] + param_3[23] * param_2[21];
            param_1[8] = fVar10 - fVar8 * 0.112621225;
            fVar27 = fVar8 * 0.045015156 + fVar27;
            param_1[22] = fVar27;
            fVar12 = fVar8 * -0.11909891 + fVar12;
            param_1[24] = fVar12;
            param_1[22] = (param_3[24] * 0.13504547 + *param_3 * 0.2820948 + param_3[20] * -0.08369845 +
                           param_3[6] * 0.06553591) *
                              param_2[22] +
                          (param_2[24] * 0.13504547 + *param_2 * 0.2820948 + param_2[20] * -0.08369845 +
                           param_2[6] * 0.06553591) *
                              param_3[22] +
                          fVar27;
            fVar8 = param_3[22] * param_2[22];
            fVar23 = fVar8 * 0.06553591 + fVar23;
            param_1[6] = fVar23;
            fVar26 = fVar8 * -0.08369845 + fVar26;
            param_1[20] = fVar26;
            fVar2 = fVar8 * 0.2820948 + fVar2;
            *param_1 = fVar2;
            fVar12 = fVar8 * 0.13504547 + fVar12;
            param_1[24] = fVar12;
            param_1[23] = (*param_3 * 0.2820948 + param_3[20] * -0.15978795 + param_3[6] * -0.057343923) * param_2[23] +
                          (*param_2 * 0.2820948 + param_2[20] * -0.15978795 + param_2[6] * -0.057343923) * param_3[23] +
                          fVar15;
            fVar8 = param_3[23] * param_2[23];
            fVar23 = fVar8 * -0.057343923 + fVar23;
            param_1[6] = fVar23;
            fVar26 = fVar8 * -0.15978795 + fVar26;
            param_1[20] = fVar26;
            fVar2 = fVar8 * 0.2820948 + fVar2;
            *param_1 = fVar2;
            param_1[24] = (param_3[20] * 0.10652531 + *param_3 * 0.2820948 + param_3[6] * -0.22937569) * param_2[24] +
                          (param_2[20] * 0.10652531 + *param_2 * 0.2820948 + param_2[6] * -0.22937569) * param_3[24] +
                          fVar12;
            fVar8 = param_3[24] * param_2[24];
            param_1[6] = fVar8 * -0.22937569 + fVar23;
            *param_1 = fVar8 * 0.2820948 + fVar2;
            param_1[20] = fVar8 * 0.10652531 + fVar26;
            pfVar1 = param_1;
        }
        return pfVar1;
    }

    // 0x1008bae20, 42048 bytes, placed by neighbouring functions
    // SHMultiply6(float*, float const*, float const*)
    float* SHMultiply6(float* param_1, float* param_2, float* param_3) {
        float* pfVar1;
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

        pfVar1 = (float*)0;
        if (((param_1 != (float*)0) && (param_2 != (float*)0)) && (param_3 != (float*)0)) {
            fVar4 = *param_2 * 0.2820948 * *param_3;
            *param_1 = fVar4;
            fVar2 = (param_3[8] * -0.21850969 + param_3[6] * -0.12615663 + *param_3 * 0.2820948) * param_2[1] +
                    (param_2[8] * -0.21850969 + param_2[6] * -0.12615663 + *param_2 * 0.2820948) * param_3[1];
            param_1[1] = fVar2;
            fVar8 = param_3[1] * param_2[1];
            fVar4 = fVar8 * 0.2820948 + fVar4;
            *param_1 = fVar4;
            param_1[6] = fVar8 * -0.12615663;
            param_1[8] = fVar8 * -0.21850969;
            fVar14 = param_2[15] * -0.22617902 + param_2[13] * -0.05839917 + param_2[3] * 0.21850969;
            fVar18 = param_3[15] * -0.22617902 + param_3[13] * -0.05839917 + param_3[3] * 0.21850969;
            fVar2 = param_2[4] * fVar18 + param_3[4] * fVar14 + fVar2;
            param_1[1] = fVar2;
            fVar19 = fVar18 * param_2[1] + fVar14 * param_3[1];
            param_1[4] = fVar19;
            fVar14 = param_3[1] * param_2[4] + param_3[4] * param_2[1];
            param_1[3] = fVar14 * 0.21850969;
            param_1[13] = fVar14 * -0.05839917;
            param_1[15] = fVar14 * -0.22617902;
            fVar21 = param_2[12] * -0.14304817 + param_2[2] * 0.21850969;
            fVar18 = param_3[12] * -0.14304817 + param_3[2] * 0.21850969;
            fVar2 = param_2[5] * fVar18 + param_3[5] * fVar21 + fVar2;
            param_1[1] = fVar2;
            fVar15 = fVar18 * param_2[1] + fVar21 * param_3[1];
            param_1[5] = fVar15;
            fVar32 = param_3[1] * param_2[5] + param_3[5] * param_2[1];
            fVar21 = fVar32 * 0.21850969;
            param_1[2] = fVar21;
            fVar32 = fVar32 * -0.14304817;
            param_1[12] = fVar32;
            fVar26 = param_2[22] * -0.16858388 + param_2[20] * -0.15078601 + param_2[8] * 0.05839917 +
                     param_2[6] * 0.20230065;
            fVar18 = param_3[22] * -0.16858388 + param_3[20] * -0.15078601 + param_3[8] * 0.05839917 +
                     param_3[6] * 0.20230065;
            fVar2 = param_2[11] * fVar18 + param_3[11] * fVar26 + fVar2;
            param_1[1] = fVar2;
            fVar20 = fVar18 * param_2[1] + fVar26 * param_3[1];
            param_1[11] = fVar20;
            fVar29 = param_3[1] * param_2[11] + param_3[11] * param_2[1];
            fVar5 = fVar29 * 0.20230065 + fVar8 * -0.12615663;
            fVar26 = fVar29 * 0.05839917 + fVar8 * -0.21850969;
            param_1[6] = fVar5;
            param_1[8] = fVar26;
            param_1[20] = fVar29 * -0.15078601;
            param_1[22] = fVar29 * -0.16858388;
            fVar8 = param_2[35] * -0.2329321 + param_2[33] * -0.034723468 + param_2[15] * 0.23032944;
            fVar18 = param_3[35] * -0.2329321 + param_3[33] * -0.034723468 + param_3[15] * 0.23032944;
            fVar2 = param_2[16] * fVar18 + param_3[16] * fVar8 + fVar2;
            param_1[1] = fVar2;
            fVar11 = fVar18 * param_2[1] + fVar8 * param_3[1];
            param_1[16] = fVar11;
            fVar12 = param_3[1] * param_2[16] + param_3[16] * param_2[1];
            fVar22 = fVar12 * 0.23032944 + fVar14 * -0.22617902;
            param_1[15] = fVar22;
            param_1[33] = fVar12 * -0.034723468;
            param_1[35] = fVar12 * -0.2329321;
            fVar8 = param_2[33] * -0.18373932 + param_2[31] * -0.08505478 + param_2[13] * 0.16858388 +
                    param_2[15] * 0.043528173;
            fVar18 = param_3[33] * -0.18373932 + param_3[31] * -0.08505478 + param_3[13] * 0.16858388 +
                     param_3[15] * 0.043528173;
            fVar2 = param_2[18] * fVar18 + param_3[18] * fVar8 + fVar2;
            param_1[1] = fVar2;
            fVar27 = fVar18 * param_2[1] + fVar8 * param_3[1];
            param_1[18] = fVar27;
            fVar16 = param_3[1] * param_2[18] + param_3[18] * param_2[1];
            fVar22 = fVar16 * 0.043528173 + fVar22;
            fVar18 = fVar16 * 0.16858388 + fVar14 * -0.05839917;
            fVar17 = fVar16 * -0.18373932 + fVar12 * -0.034723468;
            param_1[15] = fVar22;
            param_1[13] = fVar18;
            param_1[31] = fVar16 * -0.08505478;
            param_1[33] = fVar17;
            fVar8 = param_2[32] * -0.15912293 + param_2[30] * -0.15528807 + param_2[12] * 0.1946639 +
                    param_2[14] * 0.075393006;
            fVar23 = param_3[32] * -0.15912293 + param_3[30] * -0.15528807 + param_3[12] * 0.1946639 +
                     param_3[14] * 0.075393006;
            fVar2 = param_2[19] * fVar23 + param_3[19] * fVar8 + fVar2;
            param_1[1] = fVar2;
            fVar24 = fVar23 * param_2[1] + fVar8 * param_3[1];
            param_1[19] = fVar24;
            fVar6 = param_3[1] * param_2[19] + param_3[19] * param_2[1];
            fVar32 = fVar6 * 0.1946639 + fVar32;
            param_1[14] = fVar6 * 0.075393006;
            param_1[12] = fVar32;
            param_1[30] = fVar6 * -0.15528807;
            param_1[32] = fVar6 * -0.15912293;
            fVar8 = param_2[27] * 0.034723468 + param_2[25] * 0.2329321 + param_2[9] * -0.23032944;
            fVar23 = param_3[27] * 0.034723468 + param_3[25] * 0.2329321 + param_3[9] * -0.23032944;
            fVar2 = param_2[24] * fVar23 + param_3[24] * fVar8 + fVar2;
            param_1[1] = fVar2;
            fVar23 = fVar23 * param_2[1] + fVar8 * param_3[1];
            param_1[24] = fVar23;
            fVar28 = param_3[1] * param_2[24] + param_3[24] * param_2[1];
            param_1[9] = fVar28 * -0.23032944;
            param_1[25] = fVar28 * 0.2329321;
            param_1[27] = fVar28 * 0.034723468;
            fVar8 = param_2[20] * 0.19018827 + param_2[22] * 0.08505478;
            fVar13 = param_3[20] * 0.19018827 + param_3[22] * 0.08505478;
            param_1[1] = param_2[29] * fVar13 + param_3[29] * fVar8 + fVar2;
            param_1[29] = fVar13 * param_2[1] + fVar8 * param_3[1];
            fVar2 = param_3[1] * param_2[29] + param_3[29] * param_2[1];
            fVar30 = fVar2 * 0.08505478 + fVar29 * -0.16858388;
            fVar13 = fVar2 * 0.19018827 + fVar29 * -0.15078601;
            param_1[22] = fVar30;
            param_1[20] = fVar13;
            fVar29 = (param_2[6] * 0.25231326 + *param_2 * 0.2820948) * param_3[2] + fVar21 +
                     (param_3[6] * 0.25231326 + *param_3 * 0.2820948) * param_2[2];
            param_1[2] = fVar29;
            fVar4 = param_3[2] * param_2[2] * 0.2820948 + fVar4;
            fVar5 = param_3[2] * param_2[2] * 0.25231326 + fVar5;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            fVar8 = param_2[20] * 0.24623254 + param_2[6] * 0.2477667;
            fVar2 = param_3[20] * 0.24623254 + param_3[6] * 0.2477667;
            fVar29 = param_2[12] * fVar2 + param_3[12] * fVar8 + fVar29;
            param_1[2] = fVar29;
            fVar25 = fVar8 * param_3[2] + fVar32 + fVar2 * param_2[2];
            param_1[12] = fVar25;
            fVar2 = param_3[2] * param_2[12] + param_3[12] * param_2[2];
            fVar5 = fVar2 * 0.2477667 + fVar5;
            fVar13 = fVar2 * 0.24623254 + fVar13;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            fVar2 = param_2[30];
            fVar8 = param_3[30];
            fVar29 = param_2[20] * fVar8 * 0.24553202 + param_3[20] * fVar2 * 0.24553202 + fVar29;
            param_1[2] = fVar29;
            fVar13 = fVar8 * 0.24553202 * param_2[2] + fVar2 * 0.24553202 * param_3[2] + fVar13;
            param_1[20] = fVar13;
            fVar33 = (param_3[2] * param_2[20] + param_3[20] * param_2[2]) * 0.24553202 + fVar6 * -0.15528807;
            param_1[30] = fVar33;
            fVar3 = (param_2[8] * 0.21850969 + param_2[6] * -0.12615663 + *param_2 * 0.2820948) * param_3[3] +
                    fVar14 * 0.21850969 +
                    (param_3[8] * 0.21850969 + param_3[6] * -0.12615663 + *param_3 * 0.2820948) * param_2[3];
            param_1[3] = fVar3;
            fVar2 = param_3[3] * param_2[3];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * -0.12615663 + fVar5;
            fVar26 = fVar2 * 0.21850969 + fVar26;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[8] = fVar26;
            fVar2 = param_2[12] * -0.14304817 + param_2[2] * 0.21850969;
            fVar8 = param_3[12] * -0.14304817 + param_3[2] * 0.21850969;
            fVar3 = param_2[7] * fVar8 + param_3[7] * fVar2 + fVar3;
            param_1[3] = fVar3;
            fVar21 = fVar8 * param_2[3] + fVar2 * param_3[3];
            param_1[7] = fVar21;
            fVar2 = param_3[3] * param_2[7] + param_3[7] * param_2[3];
            fVar29 = fVar2 * 0.21850969 + fVar29;
            fVar25 = fVar2 * -0.14304817 + fVar25;
            param_1[2] = fVar29;
            param_1[12] = fVar25;
            fVar2 = param_2[22] * 0.16858388 + param_2[20] * -0.15078601 + param_2[6] * 0.20230065 +
                    param_2[8] * -0.05839917;
            fVar8 = param_3[22] * 0.16858388 + param_3[20] * -0.15078601 + param_3[6] * 0.20230065 +
                    param_3[8] * -0.05839917;
            fVar3 = param_2[13] * fVar8 + param_3[13] * fVar2 + fVar3;
            param_1[3] = fVar3;
            fVar32 = fVar2 * param_3[3] + fVar18 + fVar8 * param_2[3];
            param_1[13] = fVar32;
            fVar2 = param_3[3] * param_2[13] + param_3[13] * param_2[3];
            fVar26 = fVar2 * -0.05839917 + fVar26;
            fVar5 = fVar2 * 0.20230065 + fVar5;
            fVar13 = fVar2 * -0.15078601 + fVar13;
            fVar30 = fVar2 * 0.16858388 + fVar30;
            param_1[8] = fVar26;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            fVar2 = param_2[27] * -0.034723468 + param_2[25] * 0.2329321 + param_2[9] * 0.23032944;
            fVar8 = param_3[27] * -0.034723468 + param_3[25] * 0.2329321 + param_3[9] * 0.23032944;
            fVar3 = param_2[16] * fVar8 + param_3[16] * fVar2 + fVar3;
            param_1[3] = fVar3;
            fVar11 = fVar8 * param_2[3] + fVar2 * param_3[3] + fVar11;
            param_1[16] = fVar11;
            fVar14 = param_3[3] * param_2[16] + param_3[16] * param_2[3];
            fVar2 = fVar14 * 0.23032944 + fVar28 * -0.23032944;
            fVar8 = fVar14 * 0.2329321 + fVar28 * 0.2329321;
            fVar9 = fVar14 * -0.034723468 + fVar28 * 0.034723468;
            param_1[9] = fVar2;
            param_1[25] = fVar8;
            param_1[27] = fVar9;
            fVar14 = param_2[32] * 0.15912293 + param_2[30] * -0.15528807 + param_2[14] * -0.075393006 +
                     param_2[12] * 0.1946639;
            fVar18 = param_3[32] * 0.15912293 + param_3[30] * -0.15528807 + param_3[14] * -0.075393006 +
                     param_3[12] * 0.1946639;
            fVar3 = param_2[21] * fVar18 + param_3[21] * fVar14 + fVar3;
            param_1[3] = fVar3;
            fVar18 = fVar18 * param_2[3] + fVar14 * param_3[3];
            param_1[21] = fVar18;
            fVar14 = param_3[3] * param_2[21] + param_3[21] * param_2[3];
            fVar25 = fVar14 * 0.1946639 + fVar25;
            fVar28 = fVar14 * -0.075393006 + fVar6 * 0.075393006;
            fVar33 = fVar14 * -0.15528807 + fVar33;
            fVar10 = fVar14 * 0.15912293 + fVar6 * -0.15912293;
            param_1[12] = fVar25;
            param_1[14] = fVar28;
            param_1[30] = fVar33;
            param_1[32] = fVar10;
            fVar14 = param_2[35] * 0.2329321 + param_2[33] * -0.034723468 + param_2[15] * 0.23032944;
            fVar6 = param_3[35] * 0.2329321 + param_3[33] * -0.034723468 + param_3[15] * 0.23032944;
            fVar3 = param_2[24] * fVar6 + param_3[24] * fVar14 + fVar3;
            param_1[3] = fVar3;
            fVar23 = fVar6 * param_2[3] + fVar14 * param_3[3] + fVar23;
            param_1[24] = fVar23;
            fVar14 = param_3[3] * param_2[24] + param_3[24] * param_2[3];
            fVar22 = fVar14 * 0.23032944 + fVar22;
            fVar17 = fVar14 * -0.034723468 + fVar17;
            fVar7 = fVar14 * 0.2329321 + fVar12 * -0.2329321;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            param_1[35] = fVar7;
            fVar6 = param_2[22] * -0.08505478 + param_2[20] * 0.19018827;
            fVar14 = param_3[22] * -0.08505478 + param_3[20] * 0.19018827;
            fVar3 = param_2[31] * fVar14 + param_3[31] * fVar6 + fVar3;
            param_1[3] = fVar3;
            fVar12 = fVar6 * param_3[3] + fVar16 * -0.08505478 + fVar14 * param_2[3];
            param_1[31] = fVar12;
            fVar14 = param_3[3] * param_2[31] + param_3[31] * param_2[3];
            fVar13 = fVar14 * 0.19018827 + fVar13;
            fVar30 = fVar14 * -0.08505478 + fVar30;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            fVar19 = (param_3[24] * -0.23841362 + param_3[20] * 0.040299255 + param_3[6] * -0.18022375 +
                      *param_3 * 0.2820948) *
                         param_2[4] +
                     (param_2[24] * -0.23841362 + param_2[20] * 0.040299255 + param_2[6] * -0.18022375 +
                      *param_2 * 0.2820948) *
                         param_3[4] +
                     fVar19;
            param_1[4] = fVar19;
            fVar14 = param_3[4] * param_2[4];
            fVar4 = fVar14 * 0.2820948 + fVar4;
            fVar5 = fVar14 * -0.18022375 + fVar5;
            fVar13 = fVar14 * 0.040299255 + fVar13;
            fVar23 = fVar14 * -0.23841362 + fVar23;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            fVar6 = param_2[23] * -0.16858388 + param_2[21] * -0.06371872 + param_2[7] * 0.15607835;
            fVar14 = param_3[23] * -0.16858388 + param_3[21] * -0.06371872 + param_3[7] * 0.15607835;
            fVar19 = param_2[5] * fVar14 + param_3[5] * fVar6 + fVar19;
            param_1[4] = fVar19;
            fVar15 = fVar6 * param_3[4] + fVar15 + fVar14 * param_2[4];
            param_1[5] = fVar15;
            fVar16 = param_3[4] * param_2[5] + param_3[5] * param_2[4];
            fVar21 = fVar16 * 0.15607835 + fVar21;
            fVar18 = fVar16 * -0.06371872 + fVar18;
            param_1[7] = fVar21;
            param_1[21] = fVar18;
            param_1[23] = fVar16 * -0.16858388;
            fVar14 = param_2[35] * -0.245532 + param_2[31] * 0.016943317 + param_2[13] * -0.094031595 +
                     param_2[3] * 0.22617902;
            fVar6 = param_3[35] * -0.245532 + param_3[31] * 0.016943317 + param_3[13] * -0.094031595 +
                    param_3[3] * 0.22617902;
            fVar19 = param_2[9] * fVar6 + param_3[9] * fVar14 + fVar19;
            param_1[4] = fVar19;
            fVar14 = fVar14 * param_3[4] + fVar2 + fVar6 * param_2[4];
            param_1[9] = fVar14;
            fVar2 = param_3[4] * param_2[9] + param_3[9] * param_2[4];
            fVar3 = fVar2 * 0.22617902 + fVar3;
            fVar32 = fVar2 * -0.094031595 + fVar32;
            fVar12 = fVar2 * 0.016943317 + fVar12;
            fVar7 = fVar2 * -0.245532 + fVar7;
            param_1[3] = fVar3;
            param_1[13] = fVar32;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar6 = param_2[34] * -0.19018827 + param_2[30] * 0.053579476 + param_2[12] * -0.18806319 +
                    param_2[2] * 0.1846744;
            fVar2 = param_3[34] * -0.19018827 + param_3[30] * 0.053579476 + param_3[12] * -0.18806319 +
                    param_3[2] * 0.1846744;
            fVar19 = param_2[10] * fVar2 + param_3[10] * fVar6 + fVar19;
            param_1[4] = fVar19;
            param_1[10] = fVar2 * param_2[4] + fVar6 * param_3[4];
            fVar31 = param_3[4] * param_2[10] + param_3[10] * param_2[4];
            fVar29 = fVar31 * 0.1846744 + fVar29;
            fVar25 = fVar31 * -0.18806319 + fVar25;
            fVar33 = fVar31 * 0.053579476 + fVar33;
            param_1[2] = fVar29;
            param_1[12] = fVar25;
            param_1[30] = fVar33;
            param_1[34] = fVar31 * -0.19018827;
            fVar6 = param_2[33] * -0.14175797 + param_2[31] * -0.06562119 + param_2[15] * 0.094031595 +
                    param_2[13] * 0.14567313 + param_2[3] * -0.05839917;
            fVar2 = param_3[33] * -0.14175797 + param_3[31] * -0.06562119 + param_3[15] * 0.094031595 +
                    param_3[13] * 0.14567313 + param_3[3] * -0.05839917;
            fVar19 = param_2[11] * fVar2 + param_3[11] * fVar6 + fVar19;
            param_1[4] = fVar19;
            param_1[11] = fVar6 * param_3[4] + fVar20 + fVar2 * param_2[4];
            fVar2 = param_3[4] * param_2[11] + param_3[11] * param_2[4];
            fVar3 = fVar2 * -0.05839917 + fVar3;
            fVar32 = fVar2 * 0.14567313 + fVar32;
            fVar22 = fVar2 * 0.094031595 + fVar22;
            fVar12 = fVar2 * -0.06562119 + fVar12;
            fVar17 = fVar2 * -0.14175797 + fVar17;
            param_1[3] = fVar3;
            param_1[13] = fVar32;
            param_1[15] = fVar22;
            param_1[31] = fVar12;
            param_1[33] = fVar17;
            fVar2 = param_2[22] * -0.07508082 + param_2[8] * 0.23841362;
            fVar6 = param_3[22] * -0.07508082 + param_3[8] * 0.23841362;
            fVar19 = param_2[16] * fVar6 + param_3[16] * fVar2 + fVar19;
            param_1[4] = fVar19;
            param_1[16] = fVar6 * param_2[4] + fVar2 * param_3[4] + fVar11;
            fVar2 = param_3[4] * param_2[16] + param_3[16] * param_2[4];
            fVar26 = fVar2 * 0.23841362 + fVar26;
            fVar30 = fVar2 * -0.07508082 + fVar30;
            param_1[8] = fVar26;
            param_1[22] = fVar30;
            fVar6 = param_2[24] * 0.07508082 + (param_2[6] * 0.15607835 - param_2[20] * 0.19036461);
            fVar2 = param_3[24] * 0.07508082 + (param_3[6] * 0.15607835 - param_3[20] * 0.19036461);
            fVar19 = param_2[18] * fVar2 + param_3[18] * fVar6 + fVar19;
            param_1[4] = fVar19;
            param_1[18] = fVar2 * param_2[4] + fVar6 * param_3[4] + fVar27;
            fVar2 = param_3[4] * param_2[18] + param_3[18] * param_2[4];
            fVar5 = fVar2 * 0.15607835 + fVar5;
            fVar13 = fVar13 - fVar2 * 0.19036461;
            fVar23 = fVar2 * 0.07508082 + fVar23;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            fVar2 = param_2[23] * 0.112621225 + param_2[21] * 0.14188941 + param_2[7] * -0.06371872;
            fVar6 = param_3[23] * 0.112621225 + param_3[21] * 0.14188941 + param_3[7] * -0.06371872;
            fVar19 = param_2[19] * fVar6 + param_3[19] * fVar2 + fVar19;
            param_1[4] = fVar19;
            param_1[19] = fVar6 * param_2[4] + fVar2 * param_3[4] + fVar24;
            fVar2 = param_3[4] * param_2[19] + param_3[19] * param_2[4];
            fVar21 = fVar2 * -0.06371872 + fVar21;
            fVar18 = fVar2 * 0.14188941 + fVar18;
            param_1[7] = fVar21;
            param_1[21] = fVar18;
            param_1[23] = fVar2 * 0.112621225 + fVar16 * -0.16858388;
            fVar6 = param_2[33] * -0.062641345 + param_2[15] * 0.245532;
            fVar2 = param_3[33] * -0.062641345 + param_3[15] * 0.245532;
            fVar19 = param_2[25] * fVar2 + param_3[25] * fVar6 + fVar19;
            param_1[4] = fVar19;
            fVar6 = fVar6 * param_3[4] + fVar8 + fVar2 * param_2[4];
            param_1[25] = fVar6;
            fVar2 = param_3[4] * param_2[25] + param_3[25] * param_2[4];
            fVar22 = fVar2 * 0.245532 + fVar22;
            fVar17 = fVar2 * -0.062641345 + fVar17;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            fVar2 = param_2[32] * -0.09704356 + param_2[14] * 0.19018827;
            fVar8 = param_3[32] * -0.09704356 + param_3[14] * 0.19018827;
            fVar19 = param_2[26] * fVar8 + param_3[26] * fVar2 + fVar19;
            param_1[4] = fVar19;
            param_1[26] = fVar8 * param_2[4] + fVar2 * param_3[4];
            fVar2 = param_3[4] * param_2[26] + param_3[26] * param_2[4];
            fVar28 = fVar2 * 0.19018827 + fVar28;
            fVar10 = fVar2 * -0.09704356 + fVar10;
            param_1[14] = fVar28;
            param_1[32] = fVar10;
            fVar8 = param_2[35] * 0.062641345 + param_2[31] * -0.121034585 + param_2[13] * 0.14175797;
            fVar2 = param_3[35] * 0.062641345 + param_3[31] * -0.121034585 + param_3[13] * 0.14175797;
            fVar19 = param_2[27] * fVar2 + param_3[27] * fVar8 + fVar19;
            param_1[4] = fVar19;
            fVar9 = fVar8 * param_3[4] + fVar9 + fVar2 * param_2[4];
            param_1[27] = fVar9;
            fVar2 = param_3[4] * param_2[27] + param_3[27] * param_2[4];
            fVar32 = fVar2 * 0.14175797 + fVar32;
            fVar12 = fVar2 * -0.121034585 + fVar12;
            fVar7 = fVar2 * 0.062641345 + fVar7;
            param_1[13] = fVar32;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar2 = param_2[34] * 0.09704356 + (param_2[12] * 0.14175797 - param_2[30] * 0.19137248);
            fVar8 = param_3[34] * 0.09704356 + (param_3[12] * 0.14175797 - param_3[30] * 0.19137248);
            fVar19 = param_2[28] * fVar8 + param_3[28] * fVar2 + fVar19;
            param_1[4] = fVar19;
            param_1[28] = fVar8 * param_2[4] + fVar2 * param_3[4];
            fVar2 = param_3[4] * param_2[28] + param_3[28] * param_2[4];
            fVar25 = fVar2 * 0.14175797 + fVar25;
            fVar33 = fVar33 - fVar2 * 0.19137248;
            param_1[12] = fVar25;
            param_1[30] = fVar33;
            param_1[34] = fVar2 * 0.09704356 + fVar31 * -0.19018827;
            fVar2 = param_2[33] * 0.121034585 + param_2[31] * 0.1400703 + param_2[15] * -0.016943317 +
                    param_2[13] * -0.06562119;
            fVar8 = param_3[33] * 0.121034585 + param_3[31] * 0.1400703 + param_3[15] * -0.016943317 +
                    param_3[13] * -0.06562119;
            param_1[4] = param_2[29] * fVar8 + param_3[29] * fVar2 + fVar19;
            param_1[29] = fVar8 * param_2[4] + fVar2 * param_3[4] + param_1[29];
            fVar2 = param_3[4] * param_2[29] + param_3[29] * param_2[4];
            fVar32 = fVar2 * -0.06562119 + fVar32;
            fVar22 = fVar2 * -0.016943317 + fVar22;
            fVar12 = fVar2 * 0.1400703 + fVar12;
            fVar17 = fVar2 * 0.121034585 + fVar17;
            param_1[13] = fVar32;
            param_1[15] = fVar22;
            param_1[31] = fVar12;
            param_1[33] = fVar17;
            fVar15 = (param_3[22] * -0.18022375 + param_3[20] * -0.16119702 + param_3[8] * -0.15607835 +
                      param_3[6] * 0.090111874 + *param_3 * 0.2820948) *
                         param_2[5] +
                     (param_2[22] * -0.18022375 + param_2[20] * -0.16119702 + param_2[8] * -0.15607835 +
                      param_2[6] * 0.090111874 + *param_2 * 0.2820948) *
                         param_3[5] +
                     fVar15;
            param_1[5] = fVar15;
            fVar2 = param_3[5] * param_2[5];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * 0.090111874 + fVar5;
            fVar26 = fVar2 * -0.15607835 + fVar26;
            fVar13 = fVar2 * -0.16119702 + fVar13;
            fVar30 = fVar2 * -0.18022375 + fVar30;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[8] = fVar26;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            fVar2 = param_2[33] * -0.17931122 + param_2[31] * -0.08300497 + param_2[15] * -0.148677 +
                    param_2[13] * 0.11516472 + param_2[3] * 0.1846744;
            fVar8 = param_3[33] * -0.17931122 + param_3[31] * -0.08300497 + param_3[15] * -0.148677 +
                    param_3[13] * 0.11516472 + param_3[3] * 0.1846744;
            fVar15 = param_2[10] * fVar8 + param_3[10] * fVar2 + fVar15;
            param_1[5] = fVar15;
            param_1[10] = fVar8 * param_2[5] + fVar2 * param_3[5] + param_1[10];
            fVar2 = param_3[5] * param_2[10] + param_3[10] * param_2[5];
            fVar3 = fVar2 * 0.1846744 + fVar3;
            fVar32 = fVar2 * 0.11516472 + fVar32;
            fVar22 = fVar2 * -0.148677 + fVar22;
            fVar12 = fVar2 * -0.08300497 + fVar12;
            fVar17 = fVar2 * -0.17931122 + fVar17;
            param_1[3] = fVar3;
            param_1[13] = fVar32;
            param_1[15] = fVar22;
            param_1[31] = fVar12;
            param_1[33] = fVar17;
            fVar2 = param_2[32] * -0.17361735 + param_2[30] * -0.16943318 + param_2[14] * -0.11516472 +
                    param_2[12] * 0.059470803 + param_2[2] * 0.23359668;
            fVar8 = param_3[32] * -0.17361735 + param_3[30] * -0.16943318 + param_3[14] * -0.11516472 +
                    param_3[12] * 0.059470803 + param_3[2] * 0.23359668;
            fVar15 = param_2[11] * fVar8 + param_3[11] * fVar2 + fVar15;
            param_1[5] = fVar15;
            param_1[11] = fVar8 * param_2[5] + fVar2 * param_3[5] + param_1[11];
            fVar2 = param_3[5] * param_2[11] + param_3[11] * param_2[5];
            fVar29 = fVar2 * 0.23359668 + fVar29;
            fVar25 = fVar2 * 0.059470803 + fVar25;
            fVar28 = fVar2 * -0.11516472 + fVar28;
            fVar33 = fVar2 * -0.16943318 + fVar33;
            fVar10 = fVar2 * -0.17361735 + fVar10;
            param_1[2] = fVar29;
            param_1[12] = fVar25;
            param_1[14] = fVar28;
            param_1[30] = fVar33;
            param_1[32] = fVar10;
            fVar8 =
                param_2[29] * 0.08300497 + param_2[27] * 0.17931122 + param_2[1] * -0.1846744 + param_2[9] * 0.148677;
            fVar2 =
                param_3[29] * 0.08300497 + param_3[27] * 0.17931122 + param_3[1] * -0.1846744 + param_3[9] * 0.148677;
            fVar15 = param_2[14] * fVar2 + param_3[14] * fVar8 + fVar15;
            param_1[5] = fVar15;
            fVar28 = fVar2 * param_2[5] + fVar8 * param_3[5] + fVar28;
            param_1[14] = fVar28;
            fVar2 = param_3[5] * param_2[14] + param_3[14] * param_2[5];
            fVar14 = fVar2 * 0.148677 + fVar14;
            param_1[9] = fVar14;
            param_1[1] = fVar2 * -0.1846744 + param_1[1];
            fVar9 = fVar2 * 0.17931122 + fVar9;
            param_1[27] = fVar9;
            param_1[29] = fVar2 * 0.08300497 + param_1[29];
            fVar2 = param_2[24] * -0.14046335 + param_2[22] * 0.13272539 + param_2[8] * 0.16858388;
            fVar8 = param_3[24] * -0.14046335 + param_3[22] * 0.13272539 + param_3[8] * 0.16858388;
            fVar15 = param_2[17] * fVar8 + param_3[17] * fVar2 + fVar15;
            param_1[5] = fVar15;
            param_1[17] = fVar8 * param_2[5] + fVar2 * param_3[5];
            fVar2 = param_3[5] * param_2[17] + param_3[17] * param_2[5];
            fVar26 = fVar2 * 0.16858388 + fVar26;
            fVar30 = fVar2 * 0.13272539 + fVar30;
            fVar23 = fVar2 * -0.14046335 + fVar23;
            param_1[8] = fVar26;
            param_1[22] = fVar30;
            param_1[24] = fVar23;
            fVar8 = param_2[23] * -0.13272539 + param_2[21] * 0.09029786 + param_2[7] * 0.18022375;
            fVar2 = param_3[23] * -0.13272539 + param_3[21] * 0.09029786 + param_3[7] * 0.18022375;
            fVar15 = param_2[18] * fVar2 + param_3[18] * fVar8 + fVar15;
            param_1[5] = fVar15;
            param_1[18] = fVar2 * param_2[5] + fVar8 * param_3[5] + param_1[18];
            fVar2 = param_3[5] * param_2[18] + param_3[18] * param_2[5];
            fVar21 = fVar2 * 0.18022375 + fVar21;
            fVar18 = fVar2 * 0.09029786 + fVar18;
            param_1[7] = fVar21;
            param_1[21] = fVar18;
            param_1[23] = fVar2 * -0.13272539 + param_1[23];
            fVar8 = param_2[22] * -0.09029786 + param_2[20] * 0.04486937 + param_2[8] * 0.06371872 +
                    param_2[6] * 0.22072811;
            fVar2 = param_3[22] * -0.09029786 + param_3[20] * 0.04486937 + param_3[8] * 0.06371872 +
                    param_3[6] * 0.22072811;
            fVar15 = param_2[19] * fVar2 + param_3[19] * fVar8 + fVar15;
            param_1[5] = fVar15;
            param_1[19] = fVar2 * param_2[5] + fVar8 * param_3[5] + param_1[19];
            fVar2 = param_3[5] * param_2[19] + param_3[19] * param_2[5];
            fVar5 = fVar2 * 0.22072811 + fVar5;
            fVar26 = fVar2 * 0.06371872 + fVar26;
            fVar13 = fVar2 * 0.04486937 + fVar13;
            fVar30 = fVar2 * -0.09029786 + fVar30;
            param_1[6] = fVar5;
            param_1[8] = fVar26;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            fVar2 = param_2[35] * -0.13288237 + param_2[33] * 0.13866253 + param_2[15] * 0.15528807;
            fVar8 = param_3[35] * -0.13288237 + param_3[33] * 0.13866253 + param_3[15] * 0.15528807;
            fVar15 = param_2[26] * fVar8 + param_3[26] * fVar2 + fVar15;
            param_1[5] = fVar15;
            param_1[26] = fVar8 * param_2[5] + fVar2 * param_3[5] + param_1[26];
            fVar2 = param_3[5] * param_2[26] + param_3[26] * param_2[5];
            fVar22 = fVar2 * 0.15528807 + fVar22;
            fVar17 = fVar2 * 0.13866253 + fVar17;
            fVar7 = fVar2 * -0.13288237 + fVar7;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            param_1[35] = fVar7;
            fVar2 = param_2[33] * -0.11436693 + param_2[31] * 0.07411824 + param_2[13] * 0.17361735 +
                    param_2[15] * 0.044827804;
            fVar8 = param_3[33] * -0.11436693 + param_3[31] * 0.07411824 + param_3[13] * 0.17361735 +
                    param_3[15] * 0.044827804;
            fVar15 = param_2[28] * fVar8 + param_3[28] * fVar2 + fVar15;
            param_1[5] = fVar15;
            param_1[28] = fVar8 * param_2[5] + fVar2 * param_3[5] + param_1[28];
            fVar2 = param_3[5] * param_2[28] + param_3[28] * param_2[5];
            fVar22 = fVar2 * 0.044827804 + fVar22;
            fVar32 = fVar2 * 0.17361735 + fVar32;
            fVar12 = fVar2 * 0.07411824 + fVar12;
            fVar17 = fVar2 * -0.11436693 + fVar17;
            param_1[15] = fVar22;
            param_1[13] = fVar32;
            param_1[31] = fVar12;
            param_1[33] = fVar17;
            fVar8 = param_2[32] * -0.07411824 + param_2[30] * 0.036165997 + param_2[12] * 0.2143179;
            fVar2 = param_3[32] * -0.07411824 + param_3[30] * 0.036165997 + param_3[12] * 0.2143179;
            fVar15 = param_2[29] * fVar2 + param_3[29] * fVar8 + fVar15;
            param_1[5] = fVar15;
            param_1[29] = fVar2 * param_2[5] + fVar8 * param_3[5] + param_1[29];
            fVar2 = param_3[5] * param_2[29] + param_3[29] * param_2[5];
            fVar25 = fVar2 * 0.2143179 + fVar25;
            fVar33 = fVar2 * 0.036165997 + fVar33;
            fVar10 = fVar2 * -0.07411824 + fVar10;
            param_1[12] = fVar25;
            param_1[30] = fVar33;
            param_1[32] = fVar10;
            fVar2 = param_2[27] * 0.11436693 + param_2[9] * -0.044827804;
            fVar8 = param_3[27] * 0.11436693 + param_3[9] * -0.044827804;
            fVar15 = param_2[32] * fVar8 + param_3[32] * fVar2 + fVar15;
            param_1[5] = fVar15;
            fVar10 = fVar8 * param_2[5] + fVar2 * param_3[5] + fVar10;
            param_1[32] = fVar10;
            fVar2 = param_3[5] * param_2[32] + param_3[32] * param_2[5];
            fVar14 = fVar2 * -0.044827804 + fVar14;
            fVar9 = fVar2 * 0.11436693 + fVar9;
            param_1[9] = fVar14;
            param_1[27] = fVar9;
            fVar2 = param_2[25] * 0.13288237 + (param_2[9] * -0.15528807 - param_2[27] * 0.13866253);
            fVar8 = param_3[25] * 0.13288237 + (param_3[9] * -0.15528807 - param_3[27] * 0.13866253);
            param_1[5] = param_2[34] * fVar8 + param_3[34] * fVar2 + fVar15;
            param_1[34] = fVar8 * param_2[5] + fVar2 * param_3[5] + param_1[34];
            fVar2 = param_3[5] * param_2[34] + param_3[34] * param_2[5];
            fVar14 = fVar2 * -0.15528807 + fVar14;
            fVar9 = fVar9 - fVar2 * 0.13866253;
            fVar6 = fVar2 * 0.13288237 + fVar6;
            param_1[9] = fVar14;
            param_1[27] = fVar9;
            param_1[25] = fVar6;
            fVar5 = (param_3[20] * 0.24179555 + *param_3 * 0.2820948) * param_2[6] +
                    (param_2[20] * 0.24179555 + *param_2 * 0.2820948) * param_3[6] + fVar5;
            param_1[6] = fVar5;
            fVar2 = param_3[6] * param_2[6];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * 0.18022376 + fVar5;
            fVar13 = fVar2 * 0.24179555 + fVar13;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            fVar21 = (param_3[22] * 0.18022375 + param_3[20] * -0.16119702 + param_3[8] * 0.15607835 +
                      *param_3 * 0.2820948 + param_3[6] * 0.090111874) *
                         param_2[7] +
                     (param_2[22] * 0.18022375 + param_2[20] * -0.16119702 + param_2[8] * 0.15607835 +
                      *param_2 * 0.2820948 + param_2[6] * 0.090111874) *
                         param_3[7] +
                     fVar21;
            param_1[7] = fVar21;
            fVar2 = param_3[7] * param_2[7];
            fVar5 = fVar2 * 0.090111874 + fVar5;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar26 = fVar2 * 0.15607835 + fVar26;
            fVar13 = fVar2 * -0.16119702 + fVar13;
            fVar30 = fVar2 * 0.18022375 + fVar30;
            param_1[6] = fVar5;
            *param_1 = fVar4;
            param_1[8] = fVar26;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            fVar2 = param_2[29] * -0.08300497 + param_2[27] * 0.17931122 + param_2[11] * 0.11516472 +
                    param_2[1] * 0.1846744 + param_2[9] * 0.148677;
            fVar8 = param_3[29] * -0.08300497 + param_3[27] * 0.17931122 + param_3[11] * 0.11516472 +
                    param_3[1] * 0.1846744 + param_3[9] * 0.148677;
            fVar21 = param_2[10] * fVar8 + param_3[10] * fVar2 + fVar21;
            param_1[7] = fVar21;
            param_1[10] = fVar8 * param_2[7] + fVar2 * param_3[7] + param_1[10];
            fVar2 = param_3[7] * param_2[10] + param_3[10] * param_2[7];
            fVar14 = fVar2 * 0.148677 + fVar14;
            param_1[9] = fVar14;
            param_1[1] = fVar2 * 0.1846744 + param_1[1];
            param_1[11] = fVar2 * 0.11516472 + param_1[11];
            fVar9 = fVar2 * 0.17931122 + fVar9;
            param_1[27] = fVar9;
            param_1[29] = fVar2 * -0.08300497 + param_1[29];
            fVar2 = param_2[32] * 0.17361735 + param_2[30] * -0.16943318 + param_2[14] * 0.11516472 +
                    param_2[2] * 0.23359668 + param_2[12] * 0.059470803;
            fVar8 = param_3[32] * 0.17361735 + param_3[30] * -0.16943318 + param_3[14] * 0.11516472 +
                    param_3[2] * 0.23359668 + param_3[12] * 0.059470803;
            fVar21 = param_2[13] * fVar8 + param_3[13] * fVar2 + fVar21;
            param_1[7] = fVar21;
            fVar32 = fVar8 * param_2[7] + fVar2 * param_3[7] + fVar32;
            param_1[13] = fVar32;
            fVar2 = param_3[7] * param_2[13] + param_3[13] * param_2[7];
            fVar25 = fVar2 * 0.059470803 + fVar25;
            fVar29 = fVar2 * 0.23359668 + fVar29;
            fVar28 = fVar2 * 0.11516472 + fVar28;
            fVar33 = fVar2 * -0.16943318 + fVar33;
            fVar10 = fVar2 * 0.17361735 + fVar10;
            param_1[12] = fVar25;
            param_1[2] = fVar29;
            param_1[14] = fVar28;
            param_1[30] = fVar33;
            param_1[32] = fVar10;
            fVar2 =
                param_2[33] * 0.17931122 + param_2[31] * -0.08300497 + param_2[15] * 0.148677 + param_2[3] * 0.1846744;
            fVar8 =
                param_3[33] * 0.17931122 + param_3[31] * -0.08300497 + param_3[15] * 0.148677 + param_3[3] * 0.1846744;
            fVar21 = param_2[14] * fVar8 + param_3[14] * fVar2 + fVar21;
            param_1[7] = fVar21;
            fVar28 = fVar8 * param_2[7] + fVar2 * param_3[7] + fVar28;
            param_1[14] = fVar28;
            fVar2 = param_3[7] * param_2[14] + param_3[14] * param_2[7];
            fVar3 = fVar2 * 0.1846744 + fVar3;
            fVar22 = fVar2 * 0.148677 + fVar22;
            fVar12 = fVar2 * -0.08300497 + fVar12;
            fVar17 = fVar2 * 0.17931122 + fVar17;
            param_1[3] = fVar3;
            param_1[15] = fVar22;
            param_1[31] = fVar12;
            param_1[33] = fVar17;
            fVar8 = param_2[18] * 0.13272539 + param_2[4] * 0.16858388 + param_2[16] * 0.14046335;
            fVar2 = param_3[18] * 0.13272539 + param_3[4] * 0.16858388 + param_3[16] * 0.14046335;
            fVar21 = param_2[17] * fVar2 + param_3[17] * fVar8 + fVar21;
            param_1[7] = fVar21;
            param_1[17] = fVar2 * param_2[7] + fVar8 * param_3[7] + param_1[17];
            fVar2 = param_3[7] * param_2[17] + param_3[17] * param_2[7];
            param_1[16] = fVar2 * 0.14046335 + param_1[16];
            param_1[4] = fVar2 * 0.16858388 + param_1[4];
            param_1[18] = fVar2 * 0.13272539 + param_1[18];
            fVar2 = param_2[22] * 0.09029786 + param_2[6] * 0.22072811 + param_2[20] * 0.04486937 +
                    param_2[8] * -0.06371872;
            fVar8 = param_3[22] * 0.09029786 + param_3[6] * 0.22072811 + param_3[20] * 0.04486937 +
                    param_3[8] * -0.06371872;
            fVar21 = param_2[21] * fVar8 + param_3[21] * fVar2 + fVar21;
            param_1[7] = fVar21;
            param_1[21] = fVar8 * param_2[7] + fVar2 * param_3[7] + fVar18;
            fVar2 = param_3[7] * param_2[21] + param_3[21] * param_2[7];
            fVar26 = fVar2 * -0.06371872 + fVar26;
            fVar13 = fVar2 * 0.04486937 + fVar13;
            fVar5 = fVar2 * 0.22072811 + fVar5;
            fVar30 = fVar2 * 0.09029786 + fVar30;
            param_1[8] = fVar26;
            param_1[20] = fVar13;
            param_1[6] = fVar5;
            param_1[22] = fVar30;
            fVar8 = param_2[24] * 0.14046335 + param_2[22] * 0.13272539 + param_2[8] * 0.16858388;
            fVar2 = param_3[24] * 0.14046335 + param_3[22] * 0.13272539 + param_3[8] * 0.16858388;
            fVar21 = param_2[23] * fVar2 + param_3[23] * fVar8 + fVar21;
            param_1[7] = fVar21;
            param_1[23] = fVar2 * param_2[7] + fVar8 * param_3[7] + param_1[23];
            fVar2 = param_3[7] * param_2[23] + param_3[23] * param_2[7];
            fVar26 = fVar2 * 0.16858388 + fVar26;
            fVar30 = fVar2 * 0.13272539 + fVar30;
            fVar23 = fVar2 * 0.14046335 + fVar23;
            param_1[8] = fVar26;
            param_1[22] = fVar30;
            param_1[24] = fVar23;
            fVar2 = param_2[27] * 0.13866253 + param_2[25] * 0.13288237 + param_2[9] * 0.15528807;
            fVar8 = param_3[27] * 0.13866253 + param_3[25] * 0.13288237 + param_3[9] * 0.15528807;
            fVar21 = param_2[26] * fVar8 + param_3[26] * fVar2 + fVar21;
            param_1[7] = fVar21;
            param_1[26] = fVar8 * param_2[7] + fVar2 * param_3[7] + param_1[26];
            fVar2 = param_3[7] * param_2[26] + param_3[26] * param_2[7];
            fVar14 = fVar2 * 0.15528807 + fVar14;
            fVar6 = fVar2 * 0.13288237 + fVar6;
            fVar9 = fVar2 * 0.13866253 + fVar9;
            param_1[9] = fVar14;
            param_1[25] = fVar6;
            param_1[27] = fVar9;
            fVar8 = param_2[29] * 0.07411824 + param_2[9] * -0.044827804 + param_2[11] * 0.17361735 +
                    param_2[27] * 0.11436693;
            fVar2 = param_3[29] * 0.07411824 + param_3[9] * -0.044827804 + param_3[11] * 0.17361735 +
                    param_3[27] * 0.11436693;
            fVar21 = param_2[28] * fVar2 + param_3[28] * fVar8 + fVar21;
            param_1[7] = fVar21;
            param_1[28] = fVar2 * param_2[7] + fVar8 * param_3[7] + param_1[28];
            fVar2 = param_3[7] * param_2[28] + param_3[28] * param_2[7];
            fVar9 = fVar2 * 0.11436693 + fVar9;
            param_1[27] = fVar9;
            param_1[11] = fVar2 * 0.17361735 + param_1[11];
            fVar14 = fVar2 * -0.044827804 + fVar14;
            param_1[9] = fVar14;
            param_1[29] = fVar2 * 0.07411824 + param_1[29];
            fVar2 = param_2[32] * 0.07411824 + param_2[12] * 0.2143179 + param_2[30] * 0.036165997;
            fVar8 = param_3[32] * 0.07411824 + param_3[12] * 0.2143179 + param_3[30] * 0.036165997;
            fVar21 = param_2[31] * fVar8 + param_3[31] * fVar2 + fVar21;
            param_1[7] = fVar21;
            fVar12 = fVar8 * param_2[7] + fVar2 * param_3[7] + fVar12;
            param_1[31] = fVar12;
            fVar2 = param_3[7] * param_2[31] + param_3[31] * param_2[7];
            fVar33 = fVar2 * 0.036165997 + fVar33;
            fVar25 = fVar2 * 0.2143179 + fVar25;
            fVar10 = fVar2 * 0.07411824 + fVar10;
            param_1[30] = fVar33;
            param_1[12] = fVar25;
            param_1[32] = fVar10;
            fVar8 = param_2[33] * 0.11436693 + param_2[15] * -0.044827804;
            fVar2 = param_3[33] * 0.11436693 + param_3[15] * -0.044827804;
            fVar21 = param_2[32] * fVar2 + param_3[32] * fVar8 + fVar21;
            param_1[7] = fVar21;
            fVar10 = fVar2 * param_2[7] + fVar8 * param_3[7] + fVar10;
            param_1[32] = fVar10;
            fVar2 = param_3[7] * param_2[32] + param_3[32] * param_2[7];
            fVar22 = fVar2 * -0.044827804 + fVar22;
            fVar17 = fVar2 * 0.11436693 + fVar17;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            fVar8 = param_2[35] * 0.13288237 + param_2[33] * 0.13866253 + param_2[15] * 0.15528807;
            fVar2 = param_3[35] * 0.13288237 + param_3[33] * 0.13866253 + param_3[15] * 0.15528807;
            param_1[7] = param_2[34] * fVar2 + param_3[34] * fVar8 + fVar21;
            param_1[34] = fVar2 * param_2[7] + fVar8 * param_3[7] + param_1[34];
            fVar2 = param_3[7] * param_2[34] + param_3[34] * param_2[7];
            fVar22 = fVar2 * 0.15528807 + fVar22;
            fVar17 = fVar2 * 0.13866253 + fVar17;
            fVar7 = fVar2 * 0.13288237 + fVar7;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            param_1[35] = fVar7;
            fVar26 = (param_3[24] * 0.23841362 + param_3[20] * 0.040299255 + param_3[6] * -0.18022375 +
                      *param_3 * 0.2820948) *
                         param_2[8] +
                     (param_2[24] * 0.23841362 + param_2[20] * 0.040299255 + param_2[6] * -0.18022375 +
                      *param_2 * 0.2820948) *
                         param_3[8] +
                     fVar26;
            param_1[8] = fVar26;
            fVar2 = param_3[8] * param_2[8];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * -0.18022375 + fVar5;
            fVar13 = fVar2 * 0.040299255 + fVar13;
            fVar23 = fVar2 * 0.23841362 + fVar23;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            fVar2 = param_2[29] * 0.016943317 + param_2[25] * 0.245532 + param_2[11] * -0.094031595 +
                    param_2[1] * 0.22617902;
            fVar8 = param_3[29] * 0.016943317 + param_3[25] * 0.245532 + param_3[11] * -0.094031595 +
                    param_3[1] * 0.22617902;
            fVar26 = param_2[9] * fVar8 + param_3[9] * fVar2 + fVar26;
            param_1[8] = fVar26;
            fVar14 = fVar8 * param_2[8] + fVar2 * param_3[8] + fVar14;
            param_1[9] = fVar14;
            fVar2 = param_3[8] * param_2[9] + param_3[9] * param_2[8];
            param_1[1] = fVar2 * 0.22617902 + param_1[1];
            param_1[11] = fVar2 * -0.094031595 + param_1[11];
            fVar6 = fVar2 * 0.245532 + fVar6;
            param_1[25] = fVar6;
            param_1[29] = fVar2 * 0.016943317 + param_1[29];
            fVar2 = param_2[34] * 0.19018827 + param_2[30] * 0.053579476 + param_2[12] * -0.18806319 +
                    param_2[2] * 0.1846744;
            fVar8 = param_3[34] * 0.19018827 + param_3[30] * 0.053579476 + param_3[12] * -0.18806319 +
                    param_3[2] * 0.1846744;
            fVar26 = param_2[14] * fVar8 + param_3[14] * fVar2 + fVar26;
            param_1[8] = fVar26;
            fVar28 = fVar8 * param_2[8] + fVar2 * param_3[8] + fVar28;
            param_1[14] = fVar28;
            fVar2 = param_3[8] * param_2[14] + param_3[14] * param_2[8];
            fVar29 = fVar2 * 0.1846744 + fVar29;
            fVar25 = fVar2 * -0.18806319 + fVar25;
            fVar33 = fVar2 * 0.053579476 + fVar33;
            param_1[2] = fVar29;
            param_1[12] = fVar25;
            param_1[30] = fVar33;
            param_1[34] = fVar2 * 0.19018827 + param_1[34];
            fVar2 = param_2[35] * 0.245532 + param_2[31] * 0.016943317 + param_2[3] * 0.22617902 +
                    param_2[13] * -0.094031595;
            fVar8 = param_3[35] * 0.245532 + param_3[31] * 0.016943317 + param_3[3] * 0.22617902 +
                    param_3[13] * -0.094031595;
            fVar26 = param_2[15] * fVar8 + param_3[15] * fVar2 + fVar26;
            param_1[8] = fVar26;
            fVar22 = fVar8 * param_2[8] + fVar2 * param_3[8] + fVar22;
            param_1[15] = fVar22;
            fVar2 = param_3[8] * param_2[15] + param_3[15] * param_2[8];
            fVar32 = fVar2 * -0.094031595 + fVar32;
            fVar3 = fVar2 * 0.22617902 + fVar3;
            fVar12 = fVar2 * 0.016943317 + fVar12;
            fVar7 = fVar2 * 0.245532 + fVar7;
            param_1[13] = fVar32;
            param_1[3] = fVar3;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar2 = param_2[24] * -0.07508082 + (param_2[6] * 0.15607835 - param_2[20] * 0.19036461);
            fVar8 = param_3[24] * -0.07508082 + (param_3[6] * 0.15607835 - param_3[20] * 0.19036461);
            fVar26 = param_2[22] * fVar8 + param_3[22] * fVar2 + fVar26;
            param_1[8] = fVar26;
            fVar30 = fVar8 * param_2[8] + fVar2 * param_3[8] + fVar30;
            param_1[22] = fVar30;
            fVar2 = param_3[8] * param_2[22] + param_3[22] * param_2[8];
            fVar5 = fVar2 * 0.15607835 + fVar5;
            fVar13 = fVar13 - fVar2 * 0.19036461;
            fVar23 = fVar2 * -0.07508082 + fVar23;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            fVar2 = param_2[28] * -0.09704356 + param_2[10] * 0.19018827;
            fVar8 = param_3[28] * -0.09704356 + param_3[10] * 0.19018827;
            fVar26 = param_2[26] * fVar8 + param_3[26] * fVar2 + fVar26;
            param_1[8] = fVar26;
            param_1[26] = fVar8 * param_2[8] + fVar2 * param_3[8] + param_1[26];
            fVar2 = param_3[8] * param_2[26] + param_3[26] * param_2[8];
            param_1[10] = fVar2 * 0.19018827 + param_1[10];
            param_1[28] = fVar2 * -0.09704356 + param_1[28];
            fVar2 = param_2[29] * -0.121034585 + param_2[11] * 0.14175797 + param_2[25] * -0.062641345;
            fVar8 = param_3[29] * -0.121034585 + param_3[11] * 0.14175797 + param_3[25] * -0.062641345;
            fVar26 = param_2[27] * fVar8 + param_3[27] * fVar2 + fVar26;
            param_1[8] = fVar26;
            fVar9 = fVar8 * param_2[8] + fVar2 * param_3[8] + fVar9;
            param_1[27] = fVar9;
            fVar2 = param_3[8] * param_2[27] + param_3[27] * param_2[8];
            fVar6 = fVar2 * -0.062641345 + fVar6;
            param_1[25] = fVar6;
            param_1[11] = fVar2 * 0.14175797 + param_1[11];
            param_1[29] = fVar2 * -0.121034585 + param_1[29];
            fVar2 = param_2[34] * -0.09704356 + (param_2[12] * 0.14175797 - param_2[30] * 0.19137248);
            fVar8 = param_3[34] * -0.09704356 + (param_3[12] * 0.14175797 - param_3[30] * 0.19137248);
            fVar26 = param_2[32] * fVar8 + param_3[32] * fVar2 + fVar26;
            param_1[8] = fVar26;
            fVar10 = fVar8 * param_2[8] + fVar2 * param_3[8] + fVar10;
            param_1[32] = fVar10;
            fVar2 = param_3[8] * param_2[32] + param_3[32] * param_2[8];
            fVar33 = fVar33 - fVar2 * 0.19137248;
            fVar25 = fVar2 * 0.14175797 + fVar25;
            param_1[30] = fVar33;
            param_1[12] = fVar25;
            param_1[34] = fVar2 * -0.09704356 + param_1[34];
            fVar2 = param_2[35] * -0.062641345 + param_2[31] * -0.121034585 + param_2[13] * 0.14175797;
            fVar8 = param_3[35] * -0.062641345 + param_3[31] * -0.121034585 + param_3[13] * 0.14175797;
            fVar26 = param_2[33] * fVar8 + param_3[33] * fVar2 + fVar26;
            param_1[8] = fVar26;
            fVar17 = fVar8 * param_2[8] + fVar2 * param_3[8] + fVar17;
            param_1[33] = fVar17;
            fVar2 = param_3[8] * param_2[33] + param_3[33] * param_2[8];
            fVar32 = fVar2 * 0.14175797 + fVar32;
            fVar12 = fVar2 * -0.121034585 + fVar12;
            fVar7 = fVar2 * -0.062641345 + fVar7;
            param_1[13] = fVar32;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar14 = (param_3[20] * 0.07693494 + *param_3 * 0.2820948 + param_3[6] * -0.21026105) * param_2[9] +
                     (param_2[20] * 0.07693494 + *param_2 * 0.2820948 + param_2[6] * -0.21026105) * param_3[9] + fVar14;
            param_1[9] = fVar14;
            fVar2 = param_3[9] * param_2[9];
            fVar5 = fVar2 * -0.21026105 + fVar5;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar13 = fVar2 * 0.07693494 + fVar13;
            param_1[6] = fVar5;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            fVar2 = param_2[30] * 0.09814013 + (param_2[2] * 0.1628675 - param_2[12] * 0.20355073);
            fVar8 = param_3[30] * 0.09814013 + (param_3[2] * 0.1628675 - param_3[12] * 0.20355073);
            fVar14 = param_2[17] * fVar8 + param_3[17] * fVar2 + fVar14;
            param_1[9] = fVar14;
            param_1[17] = fVar8 * param_2[9] + fVar2 * param_3[9] + param_1[17];
            fVar2 = param_3[9] * param_2[17] + param_3[17] * param_2[9];
            fVar29 = fVar2 * 0.1628675 + fVar29;
            fVar25 = fVar25 - fVar2 * 0.20355073;
            fVar33 = fVar2 * 0.09814013 + fVar33;
            param_1[2] = fVar29;
            param_1[12] = fVar25;
            param_1[30] = fVar33;
            fVar2 = param_2[35] * 0.09814013 + param_2[31] * -0.10158469 + param_2[13] * 0.13325523 +
                    param_2[3] * -0.043528173;
            fVar8 = param_3[35] * 0.09814013 + param_3[31] * -0.10158469 + param_3[13] * 0.13325523 +
                    param_3[3] * -0.043528173;
            fVar14 = param_2[18] * fVar8 + param_3[18] * fVar2 + fVar14;
            param_1[9] = fVar14;
            param_1[18] = fVar8 * param_2[9] + fVar2 * param_3[9] + param_1[18];
            fVar2 = param_3[9] * param_2[18] + param_3[18] * param_2[9];
            fVar3 = fVar2 * -0.043528173 + fVar3;
            fVar32 = fVar2 * 0.13325523 + fVar32;
            fVar12 = fVar2 * -0.10158469 + fVar12;
            fVar7 = fVar2 * 0.09814013 + fVar7;
            param_1[3] = fVar3;
            param_1[13] = fVar32;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar8 = param_2[34] * 0.1316688 + param_2[32] * 0.12669836 + param_2[14] * -0.09932259;
            fVar2 = param_3[34] * 0.1316688 + param_3[32] * 0.12669836 + param_3[14] * -0.09932259;
            fVar14 = param_2[19] * fVar2 + param_3[19] * fVar8 + fVar14;
            param_1[9] = fVar14;
            param_1[19] = fVar2 * param_2[9] + fVar8 * param_3[9] + param_1[19];
            fVar2 = param_3[9] * param_2[19] + param_3[19] * param_2[9];
            fVar28 = fVar2 * -0.09932259 + fVar28;
            fVar10 = fVar2 * 0.12669836 + fVar10;
            param_1[14] = fVar28;
            param_1[32] = fVar10;
            param_1[34] = fVar2 * 0.1316688 + param_1[34];
            fVar8 = param_2[29] * -0.10158469 + param_2[25] * -0.09814013 + param_2[11] * 0.13325523 +
                    param_2[1] * -0.043528173;
            fVar2 = param_3[29] * -0.10158469 + param_3[25] * -0.09814013 + param_3[11] * 0.13325523 +
                    param_3[1] * -0.043528173;
            fVar14 = param_2[22] * fVar2 + param_3[22] * fVar8 + fVar14;
            param_1[9] = fVar14;
            fVar30 = fVar2 * param_2[9] + fVar8 * param_3[9] + fVar30;
            param_1[22] = fVar30;
            fVar2 = param_3[9] * param_2[22] + param_3[22] * param_2[9];
            param_1[1] = fVar2 * -0.043528173 + param_1[1];
            param_1[11] = fVar2 * 0.13325523 + param_1[11];
            fVar6 = fVar2 * -0.09814013 + fVar6;
            param_1[25] = fVar6;
            param_1[29] = fVar2 * -0.10158469 + param_1[29];
            fVar2 = param_2[6] * 0.12679218 - param_2[20] * 0.19628026;
            fVar8 = param_3[6] * 0.12679218 - param_3[20] * 0.19628026;
            fVar14 = param_2[27] * fVar8 + param_3[27] * fVar2 + fVar14;
            param_1[9] = fVar14;
            fVar9 = fVar8 * param_2[9] + fVar2 * param_3[9] + fVar9;
            param_1[27] = fVar9;
            fVar2 = param_3[9] * param_2[27] + param_3[27] * param_2[9];
            fVar5 = fVar2 * 0.12679218 + fVar5;
            fVar13 = fVar13 - fVar2 * 0.19628026;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            fVar2 = (param_3[24] * -0.15171775 + param_3[20] * -0.17951487 + *param_3 * 0.2820948) * param_2[10] +
                    (param_2[24] * -0.15171775 + param_2[20] * -0.17951487 + *param_2 * 0.2820948) * param_3[10] +
                    param_1[10];
            param_1[10] = fVar2;
            fVar8 = param_3[10] * param_2[10];
            fVar4 = fVar8 * 0.2820948 + fVar4;
            fVar13 = fVar8 * -0.17951487 + fVar13;
            fVar23 = fVar8 * -0.15171775 + fVar23;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            fVar8 = param_2[32] * -0.077413976 + param_2[14] * 0.15171775;
            fVar18 = param_3[32] * -0.077413976 + param_3[14] * 0.15171775;
            fVar2 = param_2[16] * fVar18 + param_3[16] * fVar8 + fVar2;
            param_1[10] = fVar2;
            param_1[16] = fVar18 * param_2[10] + fVar8 * param_3[10] + param_1[16];
            fVar8 = param_3[10] * param_2[16] + param_3[16] * param_2[10];
            fVar28 = fVar8 * 0.15171775 + fVar28;
            fVar10 = fVar8 * -0.077413976 + fVar10;
            param_1[14] = fVar28;
            param_1[32] = fVar10;
            fVar8 = param_2[35] * -0.14991152 + param_2[31] * -0.113793656 + param_2[3] * 0.19947115 +
                    param_2[13] * 0.06785024;
            fVar18 = param_3[35] * -0.14991152 + param_3[31] * -0.113793656 + param_3[3] * 0.19947115 +
                     param_3[13] * 0.06785024;
            fVar2 = param_2[17] * fVar18 + param_3[17] * fVar8 + fVar2;
            param_1[10] = fVar2;
            param_1[17] = fVar18 * param_2[10] + fVar8 * param_3[10] + param_1[17];
            fVar8 = param_3[10] * param_2[17] + param_3[17] * param_2[10];
            fVar32 = fVar8 * 0.06785024 + fVar32;
            fVar3 = fVar8 * 0.19947115 + fVar3;
            fVar12 = fVar8 * -0.113793656 + fVar12;
            fVar7 = fVar8 * -0.14991152 + fVar7;
            param_1[13] = fVar32;
            param_1[3] = fVar3;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar18 = param_2[34] * -0.10135869 + param_2[30] * -0.17132746 + param_2[2] * 0.21324362 +
                     param_2[12] * -0.04441841;
            fVar8 = param_3[34] * -0.10135869 + param_3[30] * -0.17132746 + param_3[2] * 0.21324362 +
                    param_3[12] * -0.04441841;
            fVar2 = param_2[18] * fVar8 + param_3[18] * fVar18 + fVar2;
            param_1[10] = fVar2;
            param_1[18] = fVar8 * param_2[10] + fVar18 * param_3[10] + param_1[18];
            fVar8 = param_3[10] * param_2[18] + param_3[18] * param_2[10];
            fVar25 = fVar8 * -0.04441841 + fVar25;
            fVar29 = fVar8 * 0.21324362 + fVar29;
            fVar33 = fVar8 * -0.17132746 + fVar33;
            param_1[12] = fVar25;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            param_1[34] = fVar8 * -0.10135869 + param_1[34];
            fVar8 = param_2[33] * -0.025339672 + param_2[31] * 0.09774991 + param_2[13] * 0.10257992 +
                    param_2[15] * 0.09932259 + param_2[3] * -0.075393006;
            fVar18 = param_3[33] * -0.025339672 + param_3[31] * 0.09774991 + param_3[13] * 0.10257992 +
                     param_3[15] * 0.09932259 + param_3[3] * -0.075393006;
            fVar2 = param_2[19] * fVar18 + param_3[19] * fVar8 + fVar2;
            param_1[10] = fVar2;
            param_1[19] = fVar18 * param_2[10] + fVar8 * param_3[10] + param_1[19];
            fVar8 = param_3[10] * param_2[19] + param_3[19] * param_2[10];
            fVar3 = fVar8 * -0.075393006 + fVar3;
            fVar22 = fVar8 * 0.09932259 + fVar22;
            fVar32 = fVar8 * 0.10257992 + fVar32;
            fVar12 = fVar8 * 0.09774991 + fVar12;
            fVar17 = fVar8 * -0.025339672 + fVar17;
            param_1[3] = fVar3;
            param_1[15] = fVar22;
            param_1[13] = fVar32;
            param_1[31] = fVar12;
            param_1[33] = fVar17;
            fVar8 = param_2[29] * 0.09774991 + param_2[27] * 0.025339672 + param_2[9] * -0.09932259 +
                    param_2[1] * -0.075393006 + param_2[11] * 0.10257992;
            fVar18 = param_3[29] * 0.09774991 + param_3[27] * 0.025339672 + param_3[9] * -0.09932259 +
                     param_3[1] * -0.075393006 + param_3[11] * 0.10257992;
            fVar2 = param_2[21] * fVar18 + param_3[21] * fVar8 + fVar2;
            param_1[10] = fVar2;
            param_1[21] = fVar18 * param_2[10] + fVar8 * param_3[10] + param_1[21];
            fVar8 = param_3[10] * param_2[21] + param_3[21] * param_2[10];
            param_1[11] = fVar8 * 0.10257992 + param_1[11];
            param_1[1] = fVar8 * -0.075393006 + param_1[1];
            fVar14 = fVar8 * -0.09932259 + fVar14;
            fVar9 = fVar8 * 0.025339672 + fVar9;
            param_1[9] = fVar14;
            param_1[27] = fVar9;
            param_1[29] = fVar8 * 0.09774991 + param_1[29];
            fVar18 = param_2[29] * 0.113793656 + param_2[25] * 0.14991152 + param_2[1] * -0.19947115 +
                     param_2[11] * -0.06785024;
            fVar8 = param_3[29] * 0.113793656 + param_3[25] * 0.14991152 + param_3[1] * -0.19947115 +
                    param_3[11] * -0.06785024;
            fVar2 = param_2[23] * fVar8 + param_3[23] * fVar18 + fVar2;
            param_1[10] = fVar2;
            param_1[23] = fVar8 * param_2[10] + fVar18 * param_3[10] + param_1[23];
            fVar8 = param_3[10] * param_2[23] + param_3[23] * param_2[10];
            param_1[11] = fVar8 * -0.06785024 + param_1[11];
            param_1[1] = fVar8 * -0.19947115 + param_1[1];
            fVar6 = fVar8 * 0.14991152 + fVar6;
            param_1[25] = fVar6;
            param_1[29] = fVar8 * 0.113793656 + param_1[29];
            fVar8 = param_2[24] * 0.077413976 + (param_2[6] * 0.19018827 - param_2[20] * 0.06542675);
            fVar18 = param_3[24] * 0.077413976 + (param_3[6] * 0.19018827 - param_3[20] * 0.06542675);
            param_1[10] = param_2[28] * fVar18 + param_3[28] * fVar8 + fVar2;
            param_1[28] = fVar18 * param_2[10] + fVar8 * param_3[10] + param_1[28];
            fVar2 = param_3[10] * param_2[28] + param_3[28] * param_2[10];
            fVar5 = fVar2 * 0.19018827 + fVar5;
            fVar13 = fVar13 - fVar2 * 0.06542675;
            fVar23 = fVar2 * 0.077413976 + fVar23;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            fVar8 = (param_3[22] * -0.114687845 + param_3[20] * 0.02564498 + param_3[8] * -0.14567313 +
                     param_3[6] * 0.12615663 + *param_3 * 0.2820948) *
                        param_2[11] +
                    (param_2[22] * -0.114687845 + param_2[20] * 0.02564498 + param_2[8] * -0.14567313 +
                     param_2[6] * 0.12615663 + *param_2 * 0.2820948) *
                        param_3[11] +
                    param_1[11];
            param_1[11] = fVar8;
            fVar2 = param_3[11] * param_2[11];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * 0.12615663 + fVar5;
            fVar26 = fVar2 * -0.14567313 + fVar26;
            fVar13 = fVar2 * 0.02564498 + fVar13;
            fVar30 = fVar2 * -0.114687845 + fVar30;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[8] = fVar26;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            fVar2 = param_2[35] * 0.13408494 + param_2[33] * 0.119929224 + param_2[15] * -0.117520064;
            fVar18 = param_3[35] * 0.13408494 + param_3[33] * 0.119929224 + param_3[15] * -0.117520064;
            fVar8 = param_2[16] * fVar18 + param_3[16] * fVar2 + fVar8;
            param_1[11] = fVar8;
            param_1[16] = fVar18 * param_2[11] + fVar2 * param_3[11] + param_1[16];
            fVar2 = param_3[11] * param_2[16] + param_3[16] * param_2[11];
            fVar22 = fVar2 * -0.117520064 + fVar22;
            fVar17 = fVar2 * 0.119929224 + fVar17;
            fVar7 = fVar2 * 0.13408494 + fVar7;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            param_1[35] = fVar7;
            fVar2 = param_2[33] * -0.101990215 + param_2[31] * 0.075189956 + param_2[15] * -0.13325523 +
                    param_2[13] * 0.114687845 + param_2[3] * 0.16858388;
            fVar18 = param_3[33] * -0.101990215 + param_3[31] * 0.075189956 + param_3[15] * -0.13325523 +
                     param_3[13] * 0.114687845 + param_3[3] * 0.16858388;
            fVar8 = param_2[18] * fVar18 + param_3[18] * fVar2 + fVar8;
            param_1[11] = fVar8;
            param_1[18] = fVar18 * param_2[11] + fVar2 * param_3[11] + param_1[18];
            fVar2 = param_3[11] * param_2[18] + param_3[18] * param_2[11];
            fVar3 = fVar2 * 0.16858388 + fVar3;
            fVar32 = fVar2 * 0.114687845 + fVar32;
            fVar22 = fVar2 * -0.13325523 + fVar22;
            fVar12 = fVar2 * 0.075189956 + fVar12;
            fVar17 = fVar2 * -0.101990215 + fVar17;
            param_1[3] = fVar3;
            param_1[13] = fVar32;
            param_1[15] = fVar22;
            param_1[31] = fVar12;
            param_1[33] = fVar17;
            fVar2 = param_2[32] * -0.1046828 + param_2[30] * 0.009577496 + param_2[12] * 0.09932259 +
                    param_2[14] * -0.10257992 + param_2[2] * 0.23841362;
            fVar18 = param_3[32] * -0.1046828 + param_3[30] * 0.009577496 + param_3[12] * 0.09932259 +
                     param_3[14] * -0.10257992 + param_3[2] * 0.23841362;
            fVar8 = param_2[19] * fVar18 + param_3[19] * fVar2 + fVar8;
            param_1[11] = fVar8;
            param_1[19] = fVar18 * param_2[11] + fVar2 * param_3[11] + param_1[19];
            fVar2 = param_3[11] * param_2[19] + param_3[19] * param_2[11];
            fVar29 = fVar2 * 0.23841362 + fVar29;
            fVar28 = fVar2 * -0.10257992 + fVar28;
            fVar25 = fVar2 * 0.09932259 + fVar25;
            fVar33 = fVar2 * 0.009577496 + fVar33;
            fVar10 = fVar2 * -0.1046828 + fVar10;
            param_1[2] = fVar29;
            param_1[14] = fVar28;
            param_1[12] = fVar25;
            param_1[30] = fVar33;
            param_1[32] = fVar10;
            fVar18 = param_2[27] * -0.119929224 + param_2[25] * -0.13408494 + param_2[9] * 0.117520064;
            fVar2 = param_3[27] * -0.119929224 + param_3[25] * -0.13408494 + param_3[9] * 0.117520064;
            fVar8 = param_2[24] * fVar2 + param_3[24] * fVar18 + fVar8;
            param_1[11] = fVar8;
            fVar23 = fVar2 * param_2[11] + fVar18 * param_3[11] + fVar23;
            param_1[24] = fVar23;
            fVar2 = param_3[11] * param_2[24] + param_3[24] * param_2[11];
            fVar14 = fVar2 * 0.117520064 + fVar14;
            fVar6 = fVar2 * -0.13408494 + fVar6;
            fVar9 = fVar2 * -0.119929224 + fVar9;
            param_1[9] = fVar14;
            param_1[25] = fVar6;
            param_1[27] = fVar9;
            fVar18 = param_2[8] * 0.06562119 + param_2[22] * -0.075189956 + param_2[20] * 0.08601992 +
                     param_2[6] * 0.22731847;
            fVar2 = param_3[8] * 0.06562119 + param_3[22] * -0.075189956 + param_3[20] * 0.08601992 +
                    param_3[6] * 0.22731847;
            param_1[11] = param_2[29] * fVar2 + param_3[29] * fVar18 + fVar8;
            param_1[29] = fVar2 * param_2[11] + fVar18 * param_3[11] + param_1[29];
            fVar2 = param_3[11] * param_2[29] + param_3[29] * param_2[11];
            fVar5 = fVar2 * 0.22731847 + fVar5;
            fVar13 = fVar2 * 0.08601992 + fVar13;
            fVar30 = fVar2 * -0.075189956 + fVar30;
            fVar26 = fVar2 * 0.06562119 + fVar26;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            param_1[8] = fVar26;
            fVar25 = (param_3[20] * 0.15386991 + param_3[6] * 0.16820885 + *param_3 * 0.2820948) * param_2[12] +
                     (param_2[20] * 0.15386991 + param_2[6] * 0.16820885 + *param_2 * 0.2820948) * param_3[12] + fVar25;
            param_1[12] = fVar25;
            fVar2 = param_3[12] * param_2[12];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * 0.16820885 + fVar5;
            fVar13 = fVar2 * 0.15386991 + fVar13;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            fVar2 = param_2[6] * 0.23961473 + param_2[20] * 0.14837396;
            fVar8 = param_3[6] * 0.23961473 + param_3[20] * 0.14837396;
            fVar25 = param_2[30] * fVar8 + param_3[30] * fVar2 + fVar25;
            param_1[12] = fVar25;
            fVar33 = fVar8 * param_2[12] + fVar2 * param_3[12] + fVar33;
            param_1[30] = fVar33;
            fVar2 = param_3[12] * param_2[30] + param_3[30] * param_2[12];
            fVar13 = fVar2 * 0.14837396 + fVar13;
            fVar5 = fVar2 * 0.23961473 + fVar5;
            param_1[20] = fVar13;
            param_1[6] = fVar5;
            fVar32 = (param_3[22] * 0.114687845 + param_3[20] * 0.02564498 + param_3[6] * 0.12615663 +
                      param_3[8] * 0.14567313 + *param_3 * 0.2820948) *
                         param_2[13] +
                     (param_2[22] * 0.114687845 + param_2[20] * 0.02564498 + param_2[6] * 0.12615663 +
                      param_2[8] * 0.14567313 + *param_2 * 0.2820948) *
                         param_3[13] +
                     fVar32;
            param_1[13] = fVar32;
            fVar2 = param_3[13] * param_2[13];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar26 = fVar2 * 0.14567313 + fVar26;
            fVar5 = fVar2 * 0.12615663 + fVar5;
            fVar13 = fVar2 * 0.02564498 + fVar13;
            fVar30 = fVar2 * 0.114687845 + fVar30;
            *param_1 = fVar4;
            param_1[8] = fVar26;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            fVar2 = param_2[27] * 0.119929224 + param_2[25] * -0.13408494 + param_2[9] * -0.117520064;
            fVar8 = param_3[27] * 0.119929224 + param_3[25] * -0.13408494 + param_3[9] * -0.117520064;
            fVar32 = param_2[16] * fVar8 + param_3[16] * fVar2 + fVar32;
            param_1[13] = fVar32;
            param_1[16] = fVar8 * param_2[13] + fVar2 * param_3[13] + param_1[16];
            fVar2 = param_3[13] * param_2[16] + param_3[16] * param_2[13];
            param_1[9] = fVar2 * -0.117520064 + fVar14;
            fVar6 = fVar2 * -0.13408494 + fVar6;
            fVar9 = fVar2 * 0.119929224 + fVar9;
            param_1[25] = fVar6;
            param_1[27] = fVar9;
            fVar8 = param_2[32] * 0.1046828 + param_2[30] * 0.009577496 + param_2[14] * 0.10257992 +
                    param_2[12] * 0.09932259 + param_2[2] * 0.23841362;
            fVar2 = param_3[32] * 0.1046828 + param_3[30] * 0.009577496 + param_3[14] * 0.10257992 +
                    param_3[12] * 0.09932259 + param_3[2] * 0.23841362;
            fVar32 = param_2[21] * fVar2 + param_3[21] * fVar8 + fVar32;
            param_1[13] = fVar32;
            param_1[21] = fVar2 * param_2[13] + fVar8 * param_3[13] + param_1[21];
            fVar2 = param_3[13] * param_2[21] + param_3[21] * param_2[13];
            fVar29 = fVar2 * 0.23841362 + fVar29;
            fVar25 = fVar2 * 0.09932259 + fVar25;
            fVar28 = fVar2 * 0.10257992 + fVar28;
            fVar33 = fVar2 * 0.009577496 + fVar33;
            fVar10 = fVar2 * 0.1046828 + fVar10;
            param_1[2] = fVar29;
            param_1[12] = fVar25;
            param_1[14] = fVar28;
            param_1[30] = fVar33;
            param_1[32] = fVar10;
            fVar2 = param_2[35] * -0.13408494 + param_2[33] * 0.119929224 + param_2[15] * -0.117520064;
            fVar8 = param_3[35] * -0.13408494 + param_3[33] * 0.119929224 + param_3[15] * -0.117520064;
            fVar32 = param_2[24] * fVar8 + param_3[24] * fVar2 + fVar32;
            param_1[13] = fVar32;
            fVar23 = fVar8 * param_2[13] + fVar2 * param_3[13] + fVar23;
            param_1[24] = fVar23;
            fVar2 = param_3[13] * param_2[24] + param_3[24] * param_2[13];
            fVar22 = fVar2 * -0.117520064 + fVar22;
            fVar17 = fVar2 * 0.119929224 + fVar17;
            fVar7 = fVar2 * -0.13408494 + fVar7;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            param_1[35] = fVar7;
            fVar2 = param_2[8] * -0.06562119 + param_2[20] * 0.08601992 + param_2[22] * 0.075189956 +
                    param_2[6] * 0.22731847;
            fVar8 = param_3[8] * -0.06562119 + param_3[20] * 0.08601992 + param_3[22] * 0.075189956 +
                    param_3[6] * 0.22731847;
            fVar32 = param_2[31] * fVar8 + param_3[31] * fVar2 + fVar32;
            param_1[13] = fVar32;
            fVar12 = fVar8 * param_2[13] + fVar2 * param_3[13] + fVar12;
            param_1[31] = fVar12;
            fVar2 = param_3[13] * param_2[31] + param_3[31] * param_2[13];
            fVar5 = fVar2 * 0.22731847 + fVar5;
            fVar30 = fVar2 * 0.075189956 + fVar30;
            fVar13 = fVar2 * 0.08601992 + fVar13;
            fVar26 = fVar2 * -0.06562119 + fVar26;
            param_1[6] = fVar5;
            param_1[22] = fVar30;
            param_1[20] = fVar13;
            param_1[8] = fVar26;
            fVar28 = (param_3[24] * 0.15171775 + param_3[20] * -0.17951487 + *param_3 * 0.2820948) * param_2[14] +
                     (param_2[24] * 0.15171775 + param_2[20] * -0.17951487 + *param_2 * 0.2820948) * param_3[14] +
                     fVar28;
            param_1[14] = fVar28;
            fVar2 = param_3[14] * param_2[14];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar13 = fVar2 * -0.17951487 + fVar13;
            fVar23 = fVar2 * 0.15171775 + fVar23;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            fVar8 = param_2[29] * -0.113793656 + param_2[25] * 0.14991152 + param_2[1] * 0.19947115 +
                    param_2[11] * 0.06785024;
            fVar2 = param_3[29] * -0.113793656 + param_3[25] * 0.14991152 + param_3[1] * 0.19947115 +
                    param_3[11] * 0.06785024;
            fVar28 = param_2[17] * fVar2 + param_3[17] * fVar8 + fVar28;
            param_1[14] = fVar28;
            param_1[17] = fVar2 * param_2[14] + fVar8 * param_3[14] + param_1[17];
            fVar2 = param_3[14] * param_2[17] + param_3[17] * param_2[14];
            param_1[11] = fVar2 * 0.06785024 + param_1[11];
            param_1[1] = fVar2 * 0.19947115 + param_1[1];
            fVar6 = fVar2 * 0.14991152 + fVar6;
            param_1[25] = fVar6;
            param_1[29] = fVar2 * -0.113793656 + param_1[29];
            fVar2 = param_2[34] * 0.10135869 + param_2[30] * -0.17132746 + param_2[2] * 0.21324362 +
                    param_2[12] * -0.04441841;
            fVar8 = param_3[34] * 0.10135869 + param_3[30] * -0.17132746 + param_3[2] * 0.21324362 +
                    param_3[12] * -0.04441841;
            fVar28 = param_2[22] * fVar8 + param_3[22] * fVar2 + fVar28;
            param_1[14] = fVar28;
            fVar30 = fVar8 * param_2[14] + fVar2 * param_3[14] + fVar30;
            param_1[22] = fVar30;
            fVar2 = param_3[14] * param_2[22] + param_3[22] * param_2[14];
            fVar25 = fVar2 * -0.04441841 + fVar25;
            fVar29 = fVar2 * 0.21324362 + fVar29;
            fVar33 = fVar2 * -0.17132746 + fVar33;
            param_1[12] = fVar25;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            param_1[34] = fVar2 * 0.10135869 + param_1[34];
            fVar2 = param_2[35] * 0.14991152 + param_2[31] * -0.113793656 + param_2[3] * 0.19947115 +
                    param_2[13] * 0.06785024;
            fVar8 = param_3[35] * 0.14991152 + param_3[31] * -0.113793656 + param_3[3] * 0.19947115 +
                    param_3[13] * 0.06785024;
            fVar28 = param_2[23] * fVar8 + param_3[23] * fVar2 + fVar28;
            param_1[14] = fVar28;
            param_1[23] = fVar8 * param_2[14] + fVar2 * param_3[14] + param_1[23];
            fVar2 = param_3[14] * param_2[23] + param_3[23] * param_2[14];
            fVar32 = fVar2 * 0.06785024 + fVar32;
            fVar3 = fVar2 * 0.19947115 + fVar3;
            fVar12 = fVar2 * -0.113793656 + fVar12;
            fVar7 = fVar2 * 0.14991152 + fVar7;
            param_1[13] = fVar32;
            param_1[3] = fVar3;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar2 = param_2[24] * -0.077413976 + (param_2[6] * 0.19018827 - param_2[20] * 0.06542675);
            fVar8 = param_3[24] * -0.077413976 + (param_3[6] * 0.19018827 - param_3[20] * 0.06542675);
            fVar28 = param_2[32] * fVar8 + param_3[32] * fVar2 + fVar28;
            param_1[14] = fVar28;
            fVar10 = fVar8 * param_2[14] + fVar2 * param_3[14] + fVar10;
            param_1[32] = fVar10;
            fVar2 = param_3[14] * param_2[32] + param_3[32] * param_2[14];
            fVar13 = fVar13 - fVar2 * 0.06542675;
            fVar5 = fVar2 * 0.19018827 + fVar5;
            fVar23 = fVar2 * -0.077413976 + fVar23;
            param_1[20] = fVar13;
            param_1[6] = fVar5;
            param_1[24] = fVar23;
            fVar22 = (param_3[20] * 0.07693494 + param_3[6] * -0.21026105 + *param_3 * 0.2820948) * param_2[15] +
                     (param_2[20] * 0.07693494 + param_2[6] * -0.21026105 + *param_2 * 0.2820948) * param_3[15] +
                     fVar22;
            param_1[15] = fVar22;
            fVar2 = param_3[15] * param_2[15];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * -0.21026105 + fVar5;
            fVar13 = fVar2 * 0.07693494 + fVar13;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            fVar2 = param_2[34] * -0.1316688 + param_2[32] * 0.12669836 + param_2[14] * -0.09932259;
            fVar8 = param_3[34] * -0.1316688 + param_3[32] * 0.12669836 + param_3[14] * -0.09932259;
            fVar22 = param_2[21] * fVar8 + param_3[21] * fVar2 + fVar22;
            param_1[15] = fVar22;
            param_1[21] = fVar8 * param_2[15] + fVar2 * param_3[15] + param_1[21];
            fVar2 = param_3[15] * param_2[21] + param_3[21] * param_2[15];
            fVar28 = fVar2 * -0.09932259 + fVar28;
            fVar10 = fVar2 * 0.12669836 + fVar10;
            param_1[14] = fVar28;
            param_1[32] = fVar10;
            param_1[34] = fVar2 * -0.1316688 + param_1[34];
            fVar2 = param_2[35] * -0.09814013 + param_2[31] * -0.10158469 + param_2[3] * -0.043528173 +
                    param_2[13] * 0.13325523;
            fVar8 = param_3[35] * -0.09814013 + param_3[31] * -0.10158469 + param_3[3] * -0.043528173 +
                    param_3[13] * 0.13325523;
            fVar22 = param_2[22] * fVar8 + param_3[22] * fVar2 + fVar22;
            param_1[15] = fVar22;
            fVar30 = fVar8 * param_2[15] + fVar2 * param_3[15] + fVar30;
            param_1[22] = fVar30;
            fVar2 = param_3[15] * param_2[22] + param_3[22] * param_2[15];
            fVar32 = fVar2 * 0.13325523 + fVar32;
            fVar3 = fVar2 * -0.043528173 + fVar3;
            fVar12 = fVar2 * -0.10158469 + fVar12;
            fVar7 = fVar2 * -0.09814013 + fVar7;
            param_1[13] = fVar32;
            param_1[3] = fVar3;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar2 = param_2[30] * 0.09814013 + (param_2[2] * 0.1628675 - param_2[12] * 0.20355073);
            fVar8 = param_3[30] * 0.09814013 + (param_3[2] * 0.1628675 - param_3[12] * 0.20355073);
            fVar22 = param_2[23] * fVar8 + param_3[23] * fVar2 + fVar22;
            param_1[15] = fVar22;
            param_1[23] = fVar8 * param_2[15] + fVar2 * param_3[15] + param_1[23];
            fVar2 = param_3[15] * param_2[23] + param_3[23] * param_2[15];
            fVar25 = fVar25 - fVar2 * 0.20355073;
            fVar29 = fVar2 * 0.1628675 + fVar29;
            fVar33 = fVar2 * 0.09814013 + fVar33;
            param_1[12] = fVar25;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            fVar2 = param_2[6] * 0.12679218 - param_2[20] * 0.19628026;
            fVar8 = param_3[6] * 0.12679218 - param_3[20] * 0.19628026;
            fVar22 = param_2[33] * fVar8 + param_3[33] * fVar2 + fVar22;
            param_1[15] = fVar22;
            fVar17 = fVar8 * param_2[15] + fVar2 * param_3[15] + fVar17;
            param_1[33] = fVar17;
            fVar2 = param_3[15] * param_2[33] + param_3[33] * param_2[15];
            fVar5 = fVar2 * 0.12679218 + fVar5;
            fVar13 = fVar13 - fVar2 * 0.19628026;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            fVar8 = (param_3[20] * 0.10652531 + param_3[6] * -0.22937569 + *param_3 * 0.2820948) * param_2[16] +
                    (param_2[20] * 0.10652531 + param_2[6] * -0.22937569 + *param_2 * 0.2820948) * param_3[16] +
                    param_1[16];
            param_1[16] = fVar8;
            fVar2 = param_3[16] * param_2[16];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * -0.22937569 + fVar5;
            fVar13 = fVar2 * 0.10652531 + fVar13;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            fVar14 = param_2[22] * 0.13504547 + param_2[8] * -0.07508082;
            fVar2 = param_3[22] * 0.13504547 + param_3[8] * -0.07508082;
            fVar8 = param_2[18] * fVar2 + param_3[18] * fVar14 + fVar8;
            param_1[16] = fVar8;
            param_1[18] = fVar2 * param_2[16] + fVar14 * param_3[16] + param_1[18];
            fVar2 = param_3[16] * param_2[18] + param_3[18] * param_2[16];
            fVar26 = fVar2 * -0.07508082 + fVar26;
            fVar30 = fVar2 * 0.13504547 + fVar30;
            param_1[8] = fVar26;
            param_1[22] = fVar30;
            fVar2 = param_2[5] * 0.14046335 + param_2[19] * -0.11909891;
            fVar14 = param_3[5] * 0.14046335 + param_3[19] * -0.11909891;
            fVar8 = param_2[23] * fVar14 + param_3[23] * fVar2 + fVar8;
            param_1[16] = fVar8;
            param_1[23] = fVar14 * param_2[16] + fVar2 * param_3[16] + param_1[23];
            fVar2 = param_3[16] * param_2[23] + param_3[23] * param_2[16];
            param_1[19] = fVar2 * -0.11909891 + param_1[19];
            param_1[5] = fVar2 * 0.14046335 + param_1[5];
            fVar2 = param_2[30] * 0.1301976 + (param_2[2] * 0.1473192 - param_2[12] * 0.2077235);
            fVar14 = param_3[30] * 0.1301976 + (param_3[2] * 0.1473192 - param_3[12] * 0.2077235);
            fVar8 = param_2[26] * fVar14 + param_3[26] * fVar2 + fVar8;
            param_1[16] = fVar8;
            param_1[26] = fVar14 * param_2[16] + fVar2 * param_3[16] + param_1[26];
            fVar2 = param_3[16] * param_2[26] + param_3[26] * param_2[16];
            fVar25 = fVar25 - fVar2 * 0.2077235;
            fVar29 = fVar2 * 0.1473192 + fVar29;
            fVar33 = fVar2 * 0.1301976 + fVar33;
            param_1[12] = fVar25;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            fVar14 = param_2[32] * 0.12837656 + param_2[14] * -0.077413976;
            fVar2 = param_3[32] * 0.12837656 + param_3[14] * -0.077413976;
            fVar8 = param_2[28] * fVar2 + param_3[28] * fVar14 + fVar8;
            param_1[16] = fVar8;
            param_1[28] = fVar2 * param_2[16] + fVar14 * param_3[16] + param_1[28];
            fVar2 = param_3[16] * param_2[28] + param_3[28] * param_2[16];
            fVar28 = fVar2 * -0.077413976 + fVar28;
            fVar10 = fVar2 * 0.12837656 + fVar10;
            param_1[14] = fVar28;
            param_1[32] = fVar10;
            fVar14 = param_2[35] * -0.053152945 + param_2[33] * -0.1188536 + param_2[15] * 0.03583571;
            fVar2 = param_3[35] * -0.053152945 + param_3[33] * -0.1188536 + param_3[15] * 0.03583571;
            fVar8 = param_2[29] * fVar2 + param_3[29] * fVar14 + fVar8;
            param_1[16] = fVar8;
            param_1[29] = fVar2 * param_2[16] + fVar14 * param_3[16] + param_1[29];
            fVar2 = param_3[16] * param_2[29] + param_3[29] * param_2[16];
            fVar22 = fVar2 * 0.03583571 + fVar22;
            fVar17 = fVar2 * -0.1188536 + fVar17;
            fVar7 = fVar2 * -0.053152945 + fVar7;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            param_1[35] = fVar7;
            fVar14 = param_2[25] * 0.053152945 + param_2[9] * 0.03583571 + param_2[27] * -0.1188536;
            fVar2 = param_3[25] * 0.053152945 + param_3[9] * 0.03583571 + param_3[27] * -0.1188536;
            param_1[16] = param_2[31] * fVar2 + param_3[31] * fVar14 + fVar8;
            fVar12 = fVar2 * param_2[16] + fVar14 * param_3[16] + fVar12;
            param_1[31] = fVar12;
            fVar2 = param_3[16] * param_2[31] + param_3[31] * param_2[16];
            fVar9 = fVar2 * -0.1188536 + fVar9;
            param_1[27] = fVar9;
            param_1[9] = fVar2 * 0.03583571 + param_1[9];
            fVar6 = fVar2 * 0.053152945 + fVar6;
            param_1[25] = fVar6;
            fVar2 = (param_3[20] * -0.15978795 + param_3[6] * -0.057343923 + *param_3 * 0.2820948) * param_2[17] +
                    (param_2[20] * -0.15978795 + param_2[6] * -0.057343923 + *param_2 * 0.2820948) * param_3[17] +
                    param_1[17];
            param_1[17] = fVar2;
            fVar8 = param_3[17] * param_2[17];
            fVar4 = fVar8 * 0.2820948 + fVar4;
            fVar5 = fVar8 * -0.057343923 + fVar5;
            fVar13 = fVar8 * -0.15978795 + fVar13;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            fVar14 = param_2[24] * 0.11909891 + (param_2[22] * 0.045015156 - param_2[8] * 0.112621225);
            fVar8 = param_3[24] * 0.11909891 + (param_3[22] * 0.045015156 - param_3[8] * 0.112621225);
            fVar2 = param_2[19] * fVar8 + param_3[19] * fVar14 + fVar2;
            param_1[17] = fVar2;
            param_1[19] = fVar8 * param_2[17] + fVar14 * param_3[17] + param_1[19];
            fVar8 = param_3[17] * param_2[19] + param_3[19] * param_2[17];
            fVar26 = fVar26 - fVar8 * 0.112621225;
            fVar30 = fVar8 * 0.045015156 + fVar30;
            fVar23 = fVar8 * 0.11909891 + fVar23;
            param_1[8] = fVar26;
            param_1[22] = fVar30;
            param_1[24] = fVar23;
            fVar8 = param_2[18] * 0.045015156 + (param_2[16] * -0.11909891 - param_2[4] * 0.112621225);
            fVar14 = param_3[18] * 0.045015156 + (param_3[16] * -0.11909891 - param_3[4] * 0.112621225);
            fVar2 = param_2[21] * fVar14 + param_3[21] * fVar8 + fVar2;
            param_1[17] = fVar2;
            param_1[21] = fVar14 * param_2[17] + fVar8 * param_3[17] + param_1[21];
            fVar8 = param_3[17] * param_2[21] + param_3[21] * param_2[17];
            param_1[16] = fVar8 * -0.11909891 + param_1[16];
            param_1[4] = param_1[4] - fVar8 * 0.112621225;
            param_1[18] = fVar8 * 0.045015156 + param_1[18];
            fVar14 = param_2[31] * -0.1188536 + param_2[13] * 0.029982306 + param_2[3] * 0.20834081;
            fVar8 = param_3[31] * -0.1188536 + param_3[13] * 0.029982306 + param_3[3] * 0.20834081;
            fVar2 = param_2[26] * fVar8 + param_3[26] * fVar14 + fVar2;
            param_1[17] = fVar2;
            param_1[26] = fVar8 * param_2[17] + fVar14 * param_3[17] + param_1[26];
            fVar8 = param_3[17] * param_2[26] + param_3[26] * param_2[17];
            fVar3 = fVar8 * 0.20834081 + fVar3;
            fVar32 = fVar8 * 0.029982306 + fVar32;
            fVar12 = fVar8 * -0.1188536 + fVar12;
            param_1[3] = fVar3;
            param_1[13] = fVar32;
            param_1[31] = fVar12;
            fVar8 = param_2[30] * -0.1301976 + param_2[2] * 0.1964256 + param_2[12] * -0.10386175;
            fVar14 = param_3[30] * -0.1301976 + param_3[2] * 0.1964256 + param_3[12] * -0.10386175;
            fVar2 = param_2[27] * fVar14 + param_3[27] * fVar8 + fVar2;
            param_1[17] = fVar2;
            fVar9 = fVar14 * param_2[17] + fVar8 * param_3[17] + fVar9;
            param_1[27] = fVar9;
            fVar8 = param_3[17] * param_2[27] + param_3[27] * param_2[17];
            fVar25 = fVar8 * -0.10386175 + fVar25;
            fVar29 = fVar8 * 0.1964256 + fVar29;
            fVar33 = fVar8 * -0.1301976 + fVar33;
            param_1[12] = fVar25;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            fVar8 = param_2[35] * 0.09944005 + param_2[31] * 0.03431008 + param_2[3] * -0.06014281 +
                    param_2[13] * 0.12117204;
            fVar14 = param_3[35] * 0.09944005 + param_3[31] * 0.03431008 + param_3[3] * -0.06014281 +
                     param_3[13] * 0.12117204;
            fVar2 = param_2[28] * fVar14 + param_3[28] * fVar8 + fVar2;
            param_1[17] = fVar2;
            param_1[28] = fVar14 * param_2[17] + fVar8 * param_3[17] + param_1[28];
            fVar8 = param_3[17] * param_2[28] + param_3[28] * param_2[17];
            fVar32 = fVar8 * 0.12117204 + fVar32;
            fVar3 = fVar8 * -0.06014281 + fVar3;
            fVar12 = fVar8 * 0.03431008 + fVar12;
            fVar7 = fVar8 * 0.09944005 + fVar7;
            param_1[13] = fVar32;
            param_1[3] = fVar3;
            param_1[31] = fVar12;
            param_1[35] = fVar7;
            fVar8 = param_2[29] * 0.03431008 + param_2[25] * -0.09944005 + param_2[1] * -0.06014281 +
                    param_2[11] * 0.12117204;
            fVar14 = param_3[29] * 0.03431008 + param_3[25] * -0.09944005 + param_3[1] * -0.06014281 +
                     param_3[11] * 0.12117204;
            fVar2 = param_2[32] * fVar14 + param_3[32] * fVar8 + fVar2;
            param_1[17] = fVar2;
            fVar10 = fVar14 * param_2[17] + fVar8 * param_3[17] + fVar10;
            param_1[32] = fVar10;
            fVar8 = param_3[17] * param_2[32] + param_3[32] * param_2[17];
            param_1[11] = fVar8 * 0.12117204 + param_1[11];
            param_1[1] = fVar8 * -0.06014281 + param_1[1];
            fVar6 = fVar8 * -0.09944005 + fVar6;
            param_1[25] = fVar6;
            fVar18 = fVar8 * 0.03431008 + param_1[29];
            param_1[29] = fVar18;
            fVar14 = param_2[1] * -0.20834081 + (param_2[29] * 0.1188536 - param_2[11] * 0.029982306);
            fVar8 = param_3[1] * -0.20834081 + (param_3[29] * 0.1188536 - param_3[11] * 0.029982306);
            param_1[17] = param_2[34] * fVar8 + param_3[34] * fVar14 + fVar2;
            param_1[34] = fVar8 * param_2[17] + fVar14 * param_3[17] + param_1[34];
            fVar2 = param_3[17] * param_2[34] + param_3[34] * param_2[17];
            param_1[29] = fVar2 * 0.1188536 + fVar18;
            param_1[11] = param_1[11] - fVar2 * 0.029982306;
            param_1[1] = fVar2 * -0.20834081 + param_1[1];
            fVar2 = (param_3[24] * -0.13504547 + param_3[20] * -0.08369845 + *param_3 * 0.2820948 +
                     param_3[6] * 0.06553591) *
                        param_2[18] +
                    (param_2[24] * -0.13504547 + param_2[20] * -0.08369845 + *param_2 * 0.2820948 +
                     param_2[6] * 0.06553591) *
                        param_3[18] +
                    param_1[18];
            param_1[18] = fVar2;
            fVar8 = param_3[18] * param_2[18];
            fVar5 = fVar8 * 0.06553591 + fVar5;
            fVar4 = fVar8 * 0.2820948 + fVar4;
            fVar13 = fVar8 * -0.08369845 + fVar13;
            fVar23 = fVar8 * -0.13504547 + fVar23;
            param_1[6] = fVar5;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            fVar8 = param_2[23] * -0.045015156 + param_2[21] * 0.102084786 + param_2[7] * 0.09029786;
            fVar14 = param_3[23] * -0.045015156 + param_3[21] * 0.102084786 + param_3[7] * 0.09029786;
            fVar2 = param_2[19] * fVar14 + param_3[19] * fVar8 + fVar2;
            param_1[18] = fVar2;
            param_1[19] = fVar14 * param_2[18] + fVar8 * param_3[18] + param_1[19];
            fVar8 = param_3[18] * param_2[19] + param_3[19] * param_2[18];
            param_1[7] = fVar8 * 0.09029786 + param_1[7];
            param_1[21] = fVar8 * 0.102084786 + param_1[21];
            param_1[23] = fVar8 * -0.045015156 + param_1[23];
            fVar8 = param_2[33] * 0.1301976 + param_2[15] * -0.09814013;
            fVar14 = param_3[33] * 0.1301976 + param_3[15] * -0.09814013;
            fVar2 = param_2[25] * fVar14 + param_3[25] * fVar8 + fVar2;
            param_1[18] = fVar2;
            fVar6 = fVar14 * param_2[18] + fVar8 * param_3[18] + fVar6;
            param_1[25] = fVar6;
            fVar8 = param_3[18] * param_2[25] + param_3[25] * param_2[18];
            fVar22 = fVar8 * -0.09814013 + fVar22;
            fVar17 = fVar8 * 0.1301976 + fVar17;
            param_1[15] = fVar22;
            param_1[33] = fVar17;
            fVar8 = param_2[32] * 0.084042184 + param_2[14] * 0.10135869;
            fVar14 = param_3[32] * 0.084042184 + param_3[14] * 0.10135869;
            fVar2 = param_2[26] * fVar14 + param_3[26] * fVar8 + fVar2;
            param_1[18] = fVar2;
            param_1[26] = fVar14 * param_2[18] + fVar8 * param_3[18] + param_1[26];
            fVar8 = param_3[18] * param_2[26] + param_3[26] * param_2[18];
            fVar28 = fVar8 * 0.10135869 + fVar28;
            fVar10 = fVar8 * 0.084042184 + fVar10;
            param_1[14] = fVar28;
            param_1[32] = fVar10;
            fVar14 = param_2[35] * -0.1301976 + param_2[3] * 0.18373932 + param_2[13] * 0.101990215;
            fVar8 = param_3[35] * -0.1301976 + param_3[3] * 0.18373932 + param_3[13] * 0.101990215;
            fVar2 = param_2[27] * fVar8 + param_3[27] * fVar14 + fVar2;
            param_1[18] = fVar2;
            fVar9 = fVar8 * param_2[18] + fVar14 * param_3[18] + fVar9;
            param_1[27] = fVar9;
            fVar8 = param_3[18] * param_2[27] + param_3[27] * param_2[18];
            fVar32 = fVar8 * 0.101990215 + fVar32;
            fVar3 = fVar8 * 0.18373932 + fVar3;
            fVar7 = fVar8 * -0.1301976 + fVar7;
            param_1[13] = fVar32;
            param_1[3] = fVar3;
            param_1[35] = fVar7;
            fVar14 = param_2[34] * -0.084042184 + param_2[30] * -0.09944005 + param_2[12] * 0.022664493 +
                     param_2[2] * 0.22503379;
            fVar8 = param_3[34] * -0.084042184 + param_3[30] * -0.09944005 + param_3[12] * 0.022664493 +
                    param_3[2] * 0.22503379;
            fVar2 = param_2[28] * fVar8 + param_3[28] * fVar14 + fVar2;
            param_1[18] = fVar2;
            param_1[28] = fVar8 * param_2[18] + fVar14 * param_3[18] + param_1[28];
            fVar8 = param_3[18] * param_2[28] + param_3[28] * param_2[18];
            fVar29 = fVar8 * 0.22503379 + fVar29;
            fVar25 = fVar8 * 0.022664493 + fVar25;
            fVar33 = fVar8 * -0.09944005 + fVar33;
            param_1[2] = fVar29;
            param_1[12] = fVar25;
            param_1[30] = fVar33;
            param_1[34] = fVar8 * -0.084042184 + param_1[34];
            fVar8 = param_2[31] * 0.09704356 + param_2[15] * 0.10158469 + param_2[13] * 0.075189956 +
                    param_2[3] * -0.08505478;
            fVar14 = param_3[31] * 0.09704356 + param_3[15] * 0.10158469 + param_3[13] * 0.075189956 +
                     param_3[3] * -0.08505478;
            param_1[18] = param_2[29] * fVar14 + param_3[29] * fVar8 + fVar2;
            param_1[29] = fVar14 * param_2[18] + fVar8 * param_3[18] + param_1[29];
            fVar2 = param_3[18] * param_2[29] + param_3[29] * param_2[18];
            fVar3 = fVar2 * -0.08505478 + fVar3;
            fVar32 = fVar2 * 0.075189956 + fVar32;
            fVar22 = fVar2 * 0.10158469 + fVar22;
            fVar12 = fVar2 * 0.09704356 + fVar12;
            param_1[3] = fVar3;
            param_1[13] = fVar32;
            param_1[15] = fVar22;
            param_1[31] = fVar12;
            fVar14 = (param_3[22] * -0.102084786 + param_3[20] * 0.06848055 + *param_3 * 0.2820948 +
                      param_3[8] * -0.14188941 + param_3[6] * 0.13926381) *
                         param_2[19] +
                     (param_2[22] * -0.102084786 + param_2[20] * 0.06848055 + *param_2 * 0.2820948 +
                      param_2[8] * -0.14188941 + param_2[6] * 0.13926381) *
                         param_3[19] +
                     param_1[19];
            param_1[19] = fVar14;
            fVar2 = param_3[19] * param_2[19];
            fVar5 = fVar2 * 0.13926381 + fVar5;
            fVar26 = fVar2 * -0.14188941 + fVar26;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar13 = fVar2 * 0.06848055 + fVar13;
            fVar30 = fVar2 * -0.102084786 + fVar30;
            param_1[6] = fVar5;
            param_1[8] = fVar26;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            param_1[22] = fVar30;
            fVar2 = param_2[34];
            fVar8 = param_3[34];
            fVar14 = param_2[25] * fVar8 * -0.1301976 + param_3[25] * fVar2 * -0.1301976 + fVar14;
            param_1[19] = fVar14;
            fVar6 = fVar8 * -0.1301976 * param_2[19] + fVar2 * -0.1301976 * param_3[19] + fVar6;
            param_1[25] = fVar6;
            param_1[34] = (param_3[19] * param_2[25] + param_3[25] * param_2[19]) * -0.1301976 + param_1[34];
            fVar8 = param_2[35] * 0.1301976 + param_2[15] * -0.1316688;
            fVar2 = param_3[35] * 0.1301976 + param_3[15] * -0.1316688;
            fVar14 = param_2[26] * fVar2 + param_3[26] * fVar8 + fVar14;
            param_1[19] = fVar14;
            param_1[26] = fVar2 * param_2[19] + fVar8 * param_3[19] + param_1[26];
            fVar2 = param_3[19] * param_2[26] + param_3[26] * param_2[19];
            fVar22 = fVar2 * -0.1316688 + fVar22;
            fVar7 = fVar2 * 0.1301976 + fVar7;
            param_1[15] = fVar22;
            param_1[35] = fVar7;
            fVar2 = param_2[32] * 0.084042184 + param_2[14] * 0.025339672;
            fVar8 = param_3[32] * 0.084042184 + param_3[14] * 0.025339672;
            fVar14 = param_2[27] * fVar8 + param_3[27] * fVar2 + fVar14;
            param_1[19] = fVar14;
            fVar9 = fVar8 * param_2[19] + fVar2 * param_3[19] + fVar9;
            param_1[27] = fVar9;
            fVar2 = param_3[19] * param_2[27] + param_3[27] * param_2[19];
            fVar28 = fVar2 * 0.025339672 + fVar28;
            fVar10 = fVar2 * 0.084042184 + fVar10;
            param_1[14] = fVar28;
            param_1[32] = fVar10;
            fVar2 = param_2[33] * -0.084042184 + param_2[31] * 0.09077594 + param_2[15] * -0.12669836 +
                    param_2[3] * 0.15912293 + param_2[13] * 0.1046828;
            fVar8 = param_3[33] * -0.084042184 + param_3[31] * 0.09077594 + param_3[15] * -0.12669836 +
                    param_3[3] * 0.15912293 + param_3[13] * 0.1046828;
            fVar14 = param_2[28] * fVar8 + param_3[28] * fVar2 + fVar14;
            param_1[19] = fVar14;
            param_1[28] = fVar8 * param_2[19] + fVar2 * param_3[19] + param_1[28];
            fVar2 = param_3[19] * param_2[28] + param_3[28] * param_2[19];
            fVar32 = fVar2 * 0.1046828 + fVar32;
            fVar3 = fVar2 * 0.15912293 + fVar3;
            param_1[13] = fVar32;
            param_1[3] = fVar3;
            param_1[15] = fVar2 * -0.12669836 + fVar22;
            fVar12 = fVar2 * 0.09077594 + fVar12;
            fVar17 = fVar2 * -0.084042184 + fVar17;
            param_1[31] = fVar12;
            param_1[33] = fVar17;
            fVar8 = param_2[32] * -0.09077594 + param_2[30] * 0.053152945 + param_2[2] * 0.24057125 +
                    param_2[14] * -0.09774991 + param_2[12] * 0.11508947;
            fVar2 = param_3[32] * -0.09077594 + param_3[30] * 0.053152945 + param_3[2] * 0.24057125 +
                    param_3[14] * -0.09774991 + param_3[12] * 0.11508947;
            param_1[19] = param_2[29] * fVar2 + param_3[29] * fVar8 + fVar14;
            param_1[29] = fVar2 * param_2[19] + fVar8 * param_3[19] + param_1[29];
            fVar2 = param_3[19] * param_2[29] + param_3[29] * param_2[19];
            fVar25 = fVar2 * 0.11508947 + fVar25;
            fVar28 = fVar2 * -0.09774991 + fVar28;
            fVar29 = fVar2 * 0.24057125 + fVar29;
            fVar33 = fVar2 * 0.053152945 + fVar33;
            fVar10 = fVar2 * -0.09077594 + fVar10;
            param_1[12] = fVar25;
            param_1[14] = fVar28;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            param_1[32] = fVar10;
            fVar13 = (*param_3 * 0.2820948 + param_3[6] * 0.1638398) * param_2[20] +
                     (*param_2 * 0.2820948 + param_2[6] * 0.1638398) * param_3[20] + fVar13;
            param_1[20] = fVar13;
            fVar2 = param_3[20] * param_2[20];
            fVar5 = fVar2 * 0.1638398 + fVar5;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar13 = fVar2 * 0.13696113 + fVar13;
            param_1[6] = fVar5;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            fVar14 = (param_3[22] * 0.102084786 + param_3[8] * 0.14188941 + *param_3 * 0.2820948 +
                      param_3[20] * 0.06848055 + param_3[6] * 0.13926381) *
                         param_2[21] +
                     (param_2[22] * 0.102084786 + param_2[8] * 0.14188941 + *param_2 * 0.2820948 +
                      param_2[20] * 0.06848055 + param_2[6] * 0.13926381) *
                         param_3[21] +
                     param_1[21];
            param_1[21] = fVar14;
            fVar2 = param_3[21] * param_2[21];
            fVar5 = fVar2 * 0.13926381 + fVar5;
            fVar13 = fVar2 * 0.06848055 + fVar13;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar26 = fVar2 * 0.14188941 + fVar26;
            fVar30 = fVar2 * 0.102084786 + fVar30;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            *param_1 = fVar4;
            param_1[8] = fVar26;
            param_1[22] = fVar30;
            fVar2 = param_2[24] * -0.11909891 + (param_2[22] * 0.045015156 - param_2[8] * 0.112621225);
            fVar8 = param_3[24] * -0.11909891 + (param_3[22] * 0.045015156 - param_3[8] * 0.112621225);
            fVar14 = param_2[23] * fVar8 + param_3[23] * fVar2 + fVar14;
            param_1[21] = fVar14;
            param_1[23] = fVar8 * param_2[21] + fVar2 * param_3[21] + param_1[23];
            fVar2 = param_3[21] * param_2[23] + param_3[23] * param_2[21];
            param_1[8] = fVar26 - fVar2 * 0.112621225;
            fVar30 = fVar2 * 0.045015156 + fVar30;
            fVar23 = fVar2 * -0.11909891 + fVar23;
            param_1[22] = fVar30;
            param_1[24] = fVar23;
            fVar2 = param_2[25] * -0.1301976 + param_2[9] * -0.1316688;
            fVar8 = param_3[25] * -0.1301976 + param_3[9] * -0.1316688;
            fVar14 = param_2[26] * fVar8 + param_3[26] * fVar2 + fVar14;
            param_1[21] = fVar14;
            param_1[26] = fVar8 * param_2[21] + fVar2 * param_3[21] + param_1[26];
            fVar2 = param_3[21] * param_2[26] + param_3[26] * param_2[21];
            param_1[9] = fVar2 * -0.1316688 + param_1[9];
            fVar6 = fVar2 * -0.1301976 + fVar6;
            param_1[25] = fVar6;
            fVar2 = param_2[29] * 0.09077594 + param_2[9] * 0.12669836 + param_2[11] * 0.1046828 +
                    param_2[1] * 0.15912293 + param_2[27] * 0.084042184;
            fVar8 = param_3[29] * 0.09077594 + param_3[9] * 0.12669836 + param_3[11] * 0.1046828 +
                    param_3[1] * 0.15912293 + param_3[27] * 0.084042184;
            fVar14 = param_2[28] * fVar8 + param_3[28] * fVar2 + fVar14;
            param_1[21] = fVar14;
            param_1[28] = fVar8 * param_2[21] + fVar2 * param_3[21] + param_1[28];
            fVar2 = param_3[21] * param_2[28] + param_3[28] * param_2[21];
            fVar9 = fVar2 * 0.084042184 + fVar9;
            param_1[27] = fVar9;
            param_1[1] = fVar2 * 0.15912293 + param_1[1];
            param_1[11] = fVar2 * 0.1046828 + param_1[11];
            param_1[9] = fVar2 * 0.12669836 + param_1[9];
            param_1[29] = fVar2 * 0.09077594 + param_1[29];
            fVar8 = param_2[32] * 0.09077594 + param_2[12] * 0.11508947 + param_2[30] * 0.053152945 +
                    param_2[2] * 0.24057125 + param_2[14] * 0.09774991;
            fVar2 = param_3[32] * 0.09077594 + param_3[12] * 0.11508947 + param_3[30] * 0.053152945 +
                    param_3[2] * 0.24057125 + param_3[14] * 0.09774991;
            fVar14 = param_2[31] * fVar2 + param_3[31] * fVar8 + fVar14;
            param_1[21] = fVar14;
            fVar12 = fVar2 * param_2[21] + fVar8 * param_3[21] + fVar12;
            param_1[31] = fVar12;
            fVar2 = param_3[21] * param_2[31] + param_3[31] * param_2[21];
            fVar28 = fVar2 * 0.09774991 + fVar28;
            fVar29 = fVar2 * 0.24057125 + fVar29;
            fVar33 = fVar2 * 0.053152945 + fVar33;
            fVar25 = fVar2 * 0.11508947 + fVar25;
            fVar10 = fVar2 * 0.09077594 + fVar10;
            param_1[14] = fVar28;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            param_1[12] = fVar25;
            param_1[32] = fVar10;
            fVar2 = param_2[14] * 0.025339672 + param_2[32] * 0.084042184;
            fVar8 = param_3[14] * 0.025339672 + param_3[32] * 0.084042184;
            fVar14 = param_2[33] * fVar8 + param_3[33] * fVar2 + fVar14;
            param_1[21] = fVar14;
            fVar17 = fVar8 * param_2[21] + fVar2 * param_3[21] + fVar17;
            param_1[33] = fVar17;
            fVar2 = param_3[21] * param_2[33] + param_3[33] * param_2[21];
            fVar10 = fVar2 * 0.084042184 + fVar10;
            param_1[32] = fVar10;
            param_1[14] = fVar2 * 0.025339672 + fVar28;
            fVar2 = param_2[35];
            fVar8 = param_3[35];
            param_1[21] = param_2[34] * fVar8 * -0.1301976 + param_3[34] * fVar2 * -0.1301976 + fVar14;
            param_1[34] = fVar8 * -0.1301976 * param_2[21] + fVar2 * -0.1301976 * param_3[21] + param_1[34];
            fVar7 = (param_3[21] * param_2[34] + param_3[34] * param_2[21]) * -0.1301976 + fVar7;
            param_1[35] = fVar7;
            fVar30 = (param_3[24] * 0.13504547 + *param_3 * 0.2820948 + param_3[20] * -0.08369845 +
                      param_3[6] * 0.06553591) *
                         param_2[22] +
                     (param_2[24] * 0.13504547 + *param_2 * 0.2820948 + param_2[20] * -0.08369845 +
                      param_2[6] * 0.06553591) *
                         param_3[22] +
                     fVar30;
            param_1[22] = fVar30;
            fVar2 = param_3[22] * param_2[22];
            fVar5 = fVar2 * 0.06553591 + fVar5;
            fVar13 = fVar2 * -0.08369845 + fVar13;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar23 = fVar2 * 0.13504547 + fVar23;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            *param_1 = fVar4;
            param_1[24] = fVar23;
            fVar2 = param_2[28] * 0.084042184 + param_2[10] * 0.10135869;
            fVar8 = param_3[28] * 0.084042184 + param_3[10] * 0.10135869;
            fVar30 = param_2[26] * fVar8 + param_3[26] * fVar2 + fVar30;
            param_1[22] = fVar30;
            param_1[26] = fVar8 * param_2[22] + fVar2 * param_3[22] + param_1[26];
            fVar2 = param_3[22] * param_2[26] + param_3[26] * param_2[22];
            param_1[10] = fVar2 * 0.10135869 + param_1[10];
            param_1[28] = fVar2 * 0.084042184 + param_1[28];
            fVar2 = param_2[25] * 0.1301976 + param_2[11] * 0.101990215 + param_2[1] * 0.18373932;
            fVar8 = param_3[25] * 0.1301976 + param_3[11] * 0.101990215 + param_3[1] * 0.18373932;
            fVar30 = param_2[27] * fVar8 + param_3[27] * fVar2 + fVar30;
            param_1[22] = fVar30;
            fVar9 = fVar8 * param_2[22] + fVar2 * param_3[22] + fVar9;
            param_1[27] = fVar9;
            fVar2 = param_3[22] * param_2[27] + param_3[27] * param_2[22];
            param_1[1] = fVar2 * 0.18373932 + param_1[1];
            param_1[11] = fVar2 * 0.101990215 + param_1[11];
            fVar6 = fVar2 * 0.1301976 + fVar6;
            param_1[25] = fVar6;
            fVar2 = param_2[34] * 0.084042184 + param_2[12] * 0.022664493 + param_2[30] * -0.09944005 +
                    param_2[2] * 0.22503379;
            fVar8 = param_3[34] * 0.084042184 + param_3[12] * 0.022664493 + param_3[30] * -0.09944005 +
                    param_3[2] * 0.22503379;
            fVar30 = param_2[32] * fVar8 + param_3[32] * fVar2 + fVar30;
            param_1[22] = fVar30;
            fVar10 = fVar8 * param_2[22] + fVar2 * param_3[22] + fVar10;
            param_1[32] = fVar10;
            fVar2 = param_3[22] * param_2[32] + param_3[32] * param_2[22];
            fVar29 = fVar2 * 0.22503379 + fVar29;
            fVar33 = fVar2 * -0.09944005 + fVar33;
            fVar25 = fVar2 * 0.022664493 + fVar25;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            param_1[12] = fVar25;
            param_1[34] = fVar2 * 0.084042184 + param_1[34];
            fVar2 = param_2[35] * 0.1301976 + param_2[13] * 0.101990215 + param_2[3] * 0.18373932;
            fVar8 = param_3[35] * 0.1301976 + param_3[13] * 0.101990215 + param_3[3] * 0.18373932;
            fVar30 = param_2[33] * fVar8 + param_3[33] * fVar2 + fVar30;
            param_1[22] = fVar30;
            fVar17 = fVar8 * param_2[22] + fVar2 * param_3[22] + fVar17;
            param_1[33] = fVar17;
            fVar2 = param_3[22] * param_2[33] + param_3[33] * param_2[22];
            fVar3 = fVar2 * 0.18373932 + fVar3;
            fVar32 = fVar2 * 0.101990215 + fVar32;
            fVar7 = fVar2 * 0.1301976 + fVar7;
            param_1[3] = fVar3;
            param_1[13] = fVar32;
            param_1[35] = fVar7;
            fVar8 = (*param_3 * 0.2820948 + param_3[20] * -0.15978795 + param_3[6] * -0.057343923) * param_2[23] +
                    (*param_2 * 0.2820948 + param_2[20] * -0.15978795 + param_2[6] * -0.057343923) * param_3[23] +
                    param_1[23];
            param_1[23] = fVar8;
            fVar2 = param_3[23] * param_2[23];
            fVar5 = fVar2 * -0.057343923 + fVar5;
            fVar13 = fVar2 * -0.15978795 + fVar13;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            *param_1 = fVar4;
            fVar2 = param_2[29] * -0.1188536 + param_2[11] * 0.029982306 + param_2[1] * 0.20834081;
            fVar14 = param_3[29] * -0.1188536 + param_3[11] * 0.029982306 + param_3[1] * 0.20834081;
            fVar8 = param_2[26] * fVar14 + param_3[26] * fVar2 + fVar8;
            param_1[23] = fVar8;
            param_1[26] = fVar14 * param_2[23] + fVar2 * param_3[23] + param_1[26];
            fVar2 = param_3[23] * param_2[26] + param_3[26] * param_2[23];
            param_1[1] = fVar2 * 0.20834081 + param_1[1];
            param_1[11] = fVar2 * 0.029982306 + param_1[11];
            param_1[29] = fVar2 * -0.1188536 + param_1[29];
            fVar14 = param_2[29] * -0.03431008 + param_2[1] * 0.06014281 + param_2[11] * -0.12117204 +
                     param_2[25] * -0.09944005;
            fVar2 = param_3[29] * -0.03431008 + param_3[1] * 0.06014281 + param_3[11] * -0.12117204 +
                    param_3[25] * -0.09944005;
            fVar8 = param_2[28] * fVar2 + param_3[28] * fVar14 + fVar8;
            param_1[23] = fVar8;
            param_1[28] = fVar2 * param_2[23] + fVar14 * param_3[23] + param_1[28];
            fVar2 = param_3[23] * param_2[28] + param_3[28] * param_2[23];
            fVar6 = fVar2 * -0.09944005 + fVar6;
            param_1[25] = fVar6;
            param_1[11] = fVar2 * -0.12117204 + param_1[11];
            param_1[1] = fVar2 * 0.06014281 + param_1[1];
            param_1[29] = fVar2 * -0.03431008 + param_1[29];
            fVar2 = param_2[35] * -0.09944005 + param_2[3] * -0.06014281 + param_2[13] * 0.12117204 +
                    param_2[31] * 0.03431008;
            fVar14 = param_3[35] * -0.09944005 + param_3[3] * -0.06014281 + param_3[13] * 0.12117204 +
                     param_3[31] * 0.03431008;
            fVar8 = param_2[32] * fVar14 + param_3[32] * fVar2 + fVar8;
            param_1[23] = fVar8;
            fVar10 = fVar14 * param_2[23] + fVar2 * param_3[23] + fVar10;
            param_1[32] = fVar10;
            fVar2 = param_3[23] * param_2[32] + param_3[32] * param_2[23];
            fVar12 = fVar2 * 0.03431008 + fVar12;
            fVar32 = fVar2 * 0.12117204 + fVar32;
            fVar3 = fVar2 * -0.06014281 + fVar3;
            fVar7 = fVar2 * -0.09944005 + fVar7;
            param_1[31] = fVar12;
            param_1[13] = fVar32;
            param_1[3] = fVar3;
            param_1[35] = fVar7;
            fVar2 = param_2[12] * -0.10386175 + param_2[30] * -0.1301976 + param_2[2] * 0.1964256;
            fVar14 = param_3[12] * -0.10386175 + param_3[30] * -0.1301976 + param_3[2] * 0.1964256;
            fVar8 = param_2[33] * fVar14 + param_3[33] * fVar2 + fVar8;
            param_1[23] = fVar8;
            fVar17 = fVar14 * param_2[23] + fVar2 * param_3[23] + fVar17;
            param_1[33] = fVar17;
            fVar2 = param_3[23] * param_2[33] + param_3[33] * param_2[23];
            fVar29 = fVar2 * 0.1964256 + fVar29;
            fVar33 = fVar2 * -0.1301976 + fVar33;
            fVar25 = fVar2 * -0.10386175 + fVar25;
            param_1[2] = fVar29;
            param_1[30] = fVar33;
            param_1[12] = fVar25;
            fVar2 = param_2[31] * -0.1188536 + param_2[13] * 0.029982306 + param_2[3] * 0.20834081;
            fVar14 = param_3[31] * -0.1188536 + param_3[13] * 0.029982306 + param_3[3] * 0.20834081;
            param_1[23] = param_2[34] * fVar14 + param_3[34] * fVar2 + fVar8;
            param_1[34] = fVar14 * param_2[23] + fVar2 * param_3[23] + param_1[34];
            fVar2 = param_3[23] * param_2[34] + param_3[34] * param_2[23];
            param_1[3] = fVar2 * 0.20834081 + fVar3;
            param_1[13] = fVar2 * 0.029982306 + fVar32;
            fVar12 = fVar2 * -0.1188536 + fVar12;
            param_1[31] = fVar12;
            fVar23 = (param_3[20] * 0.10652531 + *param_3 * 0.2820948 + param_3[6] * -0.22937569) * param_2[24] +
                     (param_2[20] * 0.10652531 + *param_2 * 0.2820948 + param_2[6] * -0.22937569) * param_3[24] +
                     fVar23;
            param_1[24] = fVar23;
            fVar2 = param_3[24] * param_2[24];
            fVar5 = fVar2 * -0.22937569 + fVar5;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar13 = fVar2 * 0.10652531 + fVar13;
            param_1[6] = fVar5;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            fVar8 = param_2[25] * 0.053152945 + (param_2[27] * 0.1188536 - param_2[9] * 0.03583571);
            fVar2 = param_3[25] * 0.053152945 + (param_3[27] * 0.1188536 - param_3[9] * 0.03583571);
            fVar23 = param_2[29] * fVar2 + param_3[29] * fVar8 + fVar23;
            param_1[24] = fVar23;
            param_1[29] = fVar2 * param_2[24] + fVar8 * param_3[24] + param_1[29];
            fVar2 = param_3[24] * param_2[29] + param_3[29] * param_2[24];
            param_1[9] = param_1[9] - fVar2 * 0.03583571;
            fVar9 = fVar2 * 0.1188536 + fVar9;
            fVar6 = fVar2 * 0.053152945 + fVar6;
            param_1[27] = fVar9;
            param_1[25] = fVar6;
            fVar2 = param_2[35] * 0.053152945 + param_2[33] * -0.1188536 + param_2[15] * 0.03583571;
            fVar8 = param_3[35] * 0.053152945 + param_3[33] * -0.1188536 + param_3[15] * 0.03583571;
            fVar23 = param_2[31] * fVar8 + param_3[31] * fVar2 + fVar23;
            param_1[24] = fVar23;
            fVar12 = fVar8 * param_2[24] + fVar2 * param_3[24] + fVar12;
            param_1[31] = fVar12;
            fVar2 = param_3[24] * param_2[31] + param_3[31] * param_2[24];
            param_1[15] = fVar2 * 0.03583571 + param_1[15];
            fVar17 = fVar2 * -0.1188536 + fVar17;
            fVar7 = fVar2 * 0.053152945 + fVar7;
            param_1[33] = fVar17;
            param_1[35] = fVar7;
            fVar2 = param_2[2] * 0.1473192 + (param_2[30] * 0.1301976 - param_2[12] * 0.2077235);
            fVar8 = param_3[2] * 0.1473192 + (param_3[30] * 0.1301976 - param_3[12] * 0.2077235);
            fVar23 = param_2[34] * fVar8 + param_3[34] * fVar2 + fVar23;
            param_1[24] = fVar23;
            param_1[34] = fVar8 * param_2[24] + fVar2 * param_3[24] + param_1[34];
            fVar2 = param_3[24] * param_2[34] + param_3[34] * param_2[24];
            param_1[12] = fVar25 - fVar2 * 0.2077235;
            fVar33 = fVar2 * 0.1301976 + fVar33;
            param_1[30] = fVar33;
            param_1[2] = fVar2 * 0.1473192 + fVar29;
            param_1[25] = (param_3[20] * 0.1301976 + param_3[6] * -0.24260889 + *param_3 * 0.2820948) * param_2[25] +
                          (param_2[20] * 0.1301976 + param_2[6] * -0.24260889 + *param_2 * 0.2820948) * param_3[25] +
                          fVar6;
            fVar2 = param_3[25] * param_2[25];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar5 = fVar2 * -0.24260889 + fVar5;
            fVar13 = fVar2 * 0.1301976 + fVar13;
            *param_1 = fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            param_1[26] = (*param_3 * 0.2820948 + param_3[20] * -0.1301976 + param_3[6] * -0.09704356) * param_2[26] +
                          (*param_2 * 0.2820948 + param_2[20] * -0.1301976 + param_2[6] * -0.09704356) * param_3[26] +
                          param_1[26];
            fVar2 = param_3[26] * param_2[26];
            fVar5 = fVar2 * -0.09704356 + fVar5;
            fVar13 = fVar2 * -0.1301976 + fVar13;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            param_1[6] = fVar5;
            param_1[20] = fVar13;
            *param_1 = fVar4;
            param_1[27] = (param_3[6] * 0.016173927 + param_3[20] * -0.1301976 + *param_3 * 0.2820948) * param_2[27] +
                          (param_2[6] * 0.016173927 + param_2[20] * -0.1301976 + *param_2 * 0.2820948) * param_3[27] +
                          fVar9;
            fVar2 = param_3[27] * param_2[27];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar13 = fVar2 * -0.1301976 + fVar13;
            fVar5 = fVar2 * 0.016173927 + fVar5;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            param_1[6] = fVar5;
            param_1[28] = (param_3[24] * -0.12837656 + param_3[20] * -0.0216996 + *param_3 * 0.2820948 +
                           param_3[6] * 0.09704356) *
                              param_2[28] +
                          (param_2[24] * -0.12837656 + param_2[20] * -0.0216996 + *param_2 * 0.2820948 +
                           param_2[6] * 0.09704356) *
                              param_3[28] +
                          param_1[28];
            fVar2 = param_3[28] * param_2[28];
            fVar5 = fVar2 * 0.09704356 + fVar5;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar13 = fVar2 * -0.0216996 + fVar13;
            fVar23 = fVar2 * -0.12837656 + fVar23;
            param_1[6] = fVar5;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            param_1[24] = fVar23;
            param_1[29] = (param_3[8] * -0.1400703 + param_3[22] * -0.09704356 + *param_3 * 0.2820948 +
                           param_3[6] * 0.14556533 + param_3[20] * 0.0867984) *
                              param_2[29] +
                          (param_2[8] * -0.1400703 + param_2[22] * -0.09704356 + *param_2 * 0.2820948 +
                           param_2[6] * 0.14556533 + param_2[20] * 0.0867984) *
                              param_3[29] +
                          param_1[29];
            fVar2 = param_3[29] * param_2[29];
            fVar13 = fVar2 * 0.0867984 + fVar13;
            fVar5 = fVar2 * 0.14556533 + fVar5;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar30 = fVar2 * -0.09704356 + fVar30;
            param_1[20] = fVar13;
            param_1[6] = fVar5;
            *param_1 = fVar4;
            param_1[22] = fVar30;
            param_1[8] = fVar2 * -0.1400703 + param_1[8];
            param_1[30] = (param_3[6] * 0.16173929 + param_3[20] * 0.13019763 + *param_3 * 0.2820948) * param_2[30] +
                          (param_2[6] * 0.16173929 + param_2[20] * 0.13019763 + *param_2 * 0.2820948) * param_3[30] +
                          fVar33;
            fVar2 = param_3[30] * param_2[30];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            fVar13 = fVar2 * 0.13019763 + fVar13;
            fVar5 = fVar2 * 0.16173929 + fVar5;
            *param_1 = fVar4;
            param_1[20] = fVar13;
            param_1[6] = fVar5;
            param_1[31] = (*param_3 * 0.2820948 + param_3[22] * 0.09704356 + param_3[20] * 0.0867984 +
                           param_3[8] * 0.1400703 + param_3[6] * 0.14556533) *
                              param_2[31] +
                          (*param_2 * 0.2820948 + param_2[22] * 0.09704356 + param_2[20] * 0.0867984 +
                           param_2[8] * 0.1400703 + param_2[6] * 0.14556533) *
                              param_3[31] +
                          fVar12;
            fVar2 = param_3[31] * param_2[31];
            fVar5 = fVar2 * 0.14556533 + fVar5;
            param_1[6] = fVar5;
            param_1[8] = fVar2 * 0.1400703 + param_1[8];
            fVar13 = fVar2 * 0.0867984 + fVar13;
            param_1[20] = fVar13;
            param_1[22] = fVar2 * 0.09704356 + fVar30;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            *param_1 = fVar4;
            param_1[32] =
                (param_3[6] * 0.09704356 + param_3[20] * -0.0216996 + param_3[24] * 0.12837656 + *param_3 * 0.2820948) *
                    param_2[32] +
                (param_2[6] * 0.09704356 + param_2[20] * -0.0216996 + param_2[24] * 0.12837656 + *param_2 * 0.2820948) *
                    param_3[32] +
                fVar10;
            fVar2 = param_3[32] * param_2[32];
            fVar4 = fVar2 * 0.2820948 + fVar4;
            *param_1 = fVar4;
            param_1[24] = fVar2 * 0.12837656 + fVar23;
            fVar13 = fVar2 * -0.0216996 + fVar13;
            param_1[20] = fVar13;
            fVar5 = fVar2 * 0.09704356 + fVar5;
            param_1[6] = fVar5;
            param_1[33] = (*param_3 * 0.2820948 + param_3[20] * -0.1301976 + param_3[6] * 0.016173927) * param_2[33] +
                          (*param_2 * 0.2820948 + param_2[20] * -0.1301976 + param_2[6] * 0.016173927) * param_3[33] +
                          fVar17;
            fVar2 = param_3[33] * param_2[33];
            fVar5 = fVar2 * 0.016173927 + fVar5;
            param_1[6] = fVar5;
            fVar13 = fVar2 * -0.1301976 + fVar13;
            param_1[20] = fVar13;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            *param_1 = fVar4;
            param_1[34] = (*param_3 * 0.2820948 + param_3[6] * -0.09704356 + param_3[20] * -0.1301976) * param_2[34] +
                          (*param_2 * 0.2820948 + param_2[6] * -0.09704356 + param_2[20] * -0.1301976) * param_3[34] +
                          param_1[34];
            fVar2 = param_3[34] * param_2[34];
            fVar13 = fVar2 * -0.1301976 + fVar13;
            param_1[20] = fVar13;
            fVar5 = fVar2 * -0.09704356 + fVar5;
            param_1[6] = fVar5;
            fVar4 = fVar2 * 0.2820948 + fVar4;
            *param_1 = fVar4;
            param_1[35] = (param_3[20] * 0.1301976 + *param_3 * 0.2820948 + param_3[6] * -0.24260889) * param_2[35] +
                          (param_2[20] * 0.1301976 + *param_2 * 0.2820948 + param_2[6] * -0.24260889) * param_3[35] +
                          fVar7;
            fVar2 = param_3[35] * param_2[35];
            param_1[6] = fVar2 * -0.24260889 + fVar5;
            *param_1 = fVar2 * 0.2820948 + fVar4;
            param_1[20] = fVar2 * 0.1301976 + fVar13;
            pfVar1 = param_1;
        }
        return pfVar1;
    }

    // 0x1008c5260, 400 bytes, placed by neighbouring functions
    // SHEvalDirectionalLight(unsigned long, math::Vector4T<float> const&, math::Vector4T<float> const&, float*, float*, float*)
    ulong SHEvalDirectionalLight(ulong param_1, Vector4T* param_2, Vector4T* param_3, float* param_4, float* param_5,
                                 float* param_6) {
        float fVar1;
        vector* pvVar2;
        long lVar3;
        float* pfVar4;
        long lVar5;
        undefined8 unaff_R14;
        bool bVar7;
        float fVar8;
        float local_c8[36];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar7 = 4 < param_1 - 2;
        if (!bVar7 && param_4 != (float*)0) {
            SHEvalDirection(local_c8, param_1, param_2);
            fVar8 = (float)CosWtInt(param_1);
            fVar8 = 3.1415927 / fVar8;
            lVar5 = param_1 * param_1;
            pvVar2 = param_3->SSOBeginPtr(param_1);
            if (lVar5 != 0) {
                fVar1 = *(float*)pvVar2;
                lVar3 = 0;
                do {
                    param_4[lVar3] = local_c8[lVar3] * fVar1 * fVar8;
                    lVar3 = lVar3 + 1;
                } while (lVar5 != lVar3);
            }
            if (param_5 != (float*)0) {
                pfVar4 = (float*)param_3->y();
                if (lVar5 != 0) {
                    fVar1 = *pfVar4;
                    lVar3 = 0;
                    do {
                        param_5[lVar3] = local_c8[lVar3] * fVar1 * fVar8;
                        lVar3 = lVar3 + 1;
                    } while (lVar5 != lVar3);
                }
            }
            if (param_6 != (float*)0) {
                pfVar4 = (float*)param_3->second();
                if (lVar5 != 0) {
                    fVar1 = *pfVar4;
                    lVar3 = 0;
                    do {
                        param_6[lVar3] = local_c8[lVar3] * fVar8 * fVar1;
                        lVar3 = lVar3 + 1;
                    } while (lVar5 != lVar3);
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (CONCAT71((int7)((ulong)unaff_R14 >> 8), bVar7 || param_4 == (float*)0) ^ 1) & 4294967295;
    }

    // 0x1008c53f0, 48 bytes, placed by neighbouring functions
    // CosWtInt(unsigned long)
    float CosWtInt(ulong param_1) {
        float fVar1;

        fVar1 = *(float*)(&DAT_100d4b708 + (ulong)(2 < param_1) * 4);
        if (4 < param_1) {
            fVar1 = fVar1 + -0.09375;
        }
        return fVar1;
    }

    // 0x1008c5420, 1312 bytes, placed by debug map only (low confidence)
    // SHEvalSphericalLight(unsigned long, math::Vector4T<float> const&, float, math::Vector4T<float> const&, float*, float*, float*)
    ulong SHEvalSphericalLight(ulong param_1, Vector4T* param_2, float param_3, Vector4T* param_4, float* param_5,
                               float* param_6, float* param_7) {
        undefined8* puVar1;
        vector* pvVar2;
        undefined4* puVar3;
        float* pfVar4;
        long lVar5;
        float* pfVar6;
        ulong uVar7;
        type* ptVar8;
        ulong uVar9;
        ulong uVar10;
        Vector3T<float>* this;
        ulong uVar11;
        float fVar12;
        float fVar13;
        undefined4 uVar14;
        undefined8 local_128;
        undefined4 local_120;
        float local_10c;
        long local_f8;
        ulong local_f0;
        type local_e8[32];
        undefined8 local_c8;
        float local_c0;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar7 = 0;
        if ((param_5 != (float*)0) && (uVar14 = 0, 0.0 <= param_3)) {
            local_f0 = CONCAT44(local_f0._4_4_, param_3);
            local_c8 = param_2->GetXYZ();
            local_c0 = (float)uVar14;
            fVar12 = (float)local_c8.Length();
            if (fVar12 <= (float)local_f0) {
                fVar13 = 1.5707964;
                fVar12 = (float)local_f0;
            } else {
                fVar12 = (float)local_f0 / fVar12;
                fVar13 = (float)asin(fVar12);
            }
            local_f0._0_4_ = fVar13;
            local_c8 = param_2->GetXYZ();
            this = (Vector3T<float>*)&local_c8;
            local_c0 = fVar12;
            puVar1 = (undefined8*)Normalize();
            uVar11 = param_1;
            local_128 = *puVar1;
            local_120 = *(undefined4*)(puVar1 + 1);
            ptVar8 = local_e8;
            ComputeCapInt(param_1, (float)local_f0, (float*)ptVar8);
            pvVar2 = local_128.SSOBeginPtr(ptVar8);
            local_f0 = CONCAT44(local_f0._4_4_, *(undefined4*)pvVar2);
            puVar3 = (undefined4*)local_128.y();
            local_f8 = CONCAT44(local_f8._4_4_, *puVar3);
            pfVar4 = (float*)local_128.second();
            uVar7 = uVar11 - 2;
            if (uVar7 < 5) {
                fVar12 = *pfVar4;
                switch (uVar7) {
                case 0:
                    sh_eval_basis_1((float)local_f0, (float)local_f8, fVar12, (float*)&local_c8);
                    break;
                case 1:
                    sh_eval_basis_2((float)local_f0, (float)local_f8, fVar12, (float*)&local_c8);
                    break;
                case 2:
                    sh_eval_basis_3((float)local_f0, (float)local_f8, fVar12, (float*)&local_c8);
                    break;
                case 3:
                    sh_eval_basis_4((float)local_f0, (float)local_f8, fVar12, (float*)&local_c8);
                    break;
                case 4:
                    sh_eval_basis_5((float)local_f0, (float)local_f8, fVar12, (float*)&local_c8);
                }
                if (param_1 != 0) {
                    uVar7 = 1;
                    lVar5 = 4;
                    uVar9 = 0;
                    do {
                        uVar11 = 1;
                        if (1 < uVar7) {
                            uVar11 = uVar7;
                        }
                        local_10c = *(float*)(local_e8 + uVar9 * 4);
                        local_f8 = lVar5;
                        local_f0 = uVar7;
                        pvVar2 = param_4->SSOBeginPtr(ptVar8);
                        fVar12 = *(float*)pvVar2;
                        fVar13 = (float)(&fExtraNormFac)[uVar9];
                        uVar7 = 0;
                        do {
                            param_5[uVar7] = *(float*)(this + uVar7 * 4) * local_10c * fVar12 * fVar13;
                            uVar7 = uVar7 + 1;
                        } while (uVar11 != uVar7);
                        uVar9 = uVar9 + 1;
                        uVar7 = local_f0 + 2;
                        param_5 = (float*)((long)param_5 + local_f8);
                        this = this + local_f8;
                        lVar5 = local_f8 + 8;
                    } while (uVar9 != param_1);
                }
                if ((param_6 != (float*)0) && (param_1 != 0)) {
                    uVar9 = 1;
                    uVar7 = 4;
                    puVar1 = &local_c8;
                    uVar11 = 0;
                    do {
                        uVar10 = 1;
                        if (1 < uVar9) {
                            uVar10 = uVar9;
                        }
                        local_f8 = CONCAT44(local_f8._4_4_, *(undefined4*)(local_e8 + uVar11 * 4));
                        local_f0 = uVar7;
                        pfVar4 = (float*)param_4->y();
                        fVar12 = *pfVar4;
                        fVar13 = (float)(&fExtraNormFac)[uVar11];
                        uVar7 = 0;
                        do {
                            param_6[uVar7] = *(float*)((long)puVar1 + uVar7 * 4) * (float)local_f8 * fVar12 * fVar13;
                            uVar7 = uVar7 + 1;
                        } while (uVar10 != uVar7);
                        uVar11 = uVar11 + 1;
                        uVar9 = uVar9 + 2;
                        param_6 = (float*)((long)param_6 + local_f0);
                        puVar1 = (undefined8*)((long)puVar1 + local_f0);
                        uVar7 = local_f0 + 8;
                    } while (uVar11 != param_1);
                }
                uVar7 = CONCAT71((int7)(uVar11 >> 8), 1);
                if ((param_7 != (float*)0) && (param_1 != 0)) {
                    uVar11 = 1;
                    uVar7 = 4;
                    puVar1 = &local_c8;
                    uVar9 = 0;
                    pfVar4 = param_7;
                    do {
                        uVar10 = 1;
                        if (1 < uVar11) {
                            uVar10 = uVar11;
                        }
                        local_f8 = CONCAT44(local_f8._4_4_, *(undefined4*)(local_e8 + uVar9 * 4));
                        local_f0 = uVar7;
                        pfVar6 = (float*)param_4->second();
                        fVar12 = *pfVar6;
                        fVar13 = (float)(&fExtraNormFac)[uVar9];
                        uVar7 = 0;
                        do {
                            pfVar4[uVar7] = *(float*)((long)puVar1 + uVar7 * 4) * (float)local_f8 * fVar12 * fVar13;
                            uVar7 = uVar7 + 1;
                        } while (uVar10 != uVar7);
                        uVar9 = uVar9 + 1;
                        uVar11 = uVar11 + 2;
                        pfVar4 = (float*)((long)pfVar4 + local_f0);
                        puVar1 = (undefined8*)((long)puVar1 + local_f0);
                        uVar7 = local_f0 + 8;
                    } while (uVar9 != param_1);
                    uVar7 = CONCAT71((int7)(uVar9 >> 8), 1);
                }
            } else {
                if (uVar7 < 5) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                              4677, (char*)0);
                }
                uVar7 = 0;
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar7 & 4294967295;
    }

    // 0x1008c5950, 400 bytes, placed by neighbouring functions
    // ComputeCapInt(unsigned long, float, float*)
    void ComputeCapInt(ulong param_1, float param_2, float* param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;

        fVar2 = (float)::cos(param_2);
        fVar1 = ComputeCapInt_t1;
        fVar4 = ComputeCapInt_t1 * fVar2;
        fVar3 = (float)::sin(param_2);
        *param_3 = fVar1 - fVar4;
        fVar1 = ComputeCapInt_t1;
        param_3[1] = fVar3 * fVar3 * ComputeCapInt_t1 * 0.5 * ComputeCapInt_t5;
        if (2 < param_1) {
            fVar3 = fVar2 * fVar2;
            param_3[2] = fVar2 * -0.5 * (fVar3 + -1.0) * fVar1 * ComputeCapInt_t11;
            if (param_1 != 3) {
                fVar2 = fVar3 * fVar3;
                param_3[3] = (fVar3 * 0.75 + fVar2 * -0.625 + -0.125) * ComputeCapInt_t18 * fVar1;
                if ((4 < param_1) &&
                    (param_3[4] = (fVar3 * -10.0 + 3.0 + fVar2 * 7.0) * fVar4 * -0.375, param_1 != 5)) {
                    param_3[5] = ((fVar3 * -1.3125 + 2.1875) * fVar2 + 0.0625) * fVar1 * ComputeCapInt_t32 +
                                 fVar3 * fVar1 * ComputeCapInt_t32 * -0.9375;
                }
            }
        }
    }

    // 0x1008c5ae0, 1280 bytes, placed by debug map only (low confidence)
    // SHEvalConeLight(unsigned long, math::Vector4T<float> const&, float, math::Vector4T<float> const&, float*, float*, float*)
    ulong SHEvalConeLight(ulong param_1, Vector4T* param_2, float param_3, Vector4T* param_4, float* param_5,
                          float* param_6, float* param_7) {
        float fVar1;
        float fVar2;
        uint uVar3;
        vector* pvVar4;
        float* pfVar5;
        long lVar6;
        ulong uVar7;
        float* pfVar8;
        ulong uVar9;
        type* ptVar10;
        ulong uVar11;
        ulong uVar12;
        float fVar13;
        float fVar14;
        float local_e8[36];
        type local_58[32];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_5 != (float*)0) {
            uVar12 = 0;
            if ((param_3 < 0.0) || (3.1416242 < param_3))
                goto LAB_1008c5c51;
            if (param_3 < 0.0001) {
                uVar3 = SHEvalDirectionalLight(param_1, param_2, param_4, param_5, param_6, param_7);
                uVar12 = (ulong)uVar3;
                goto LAB_1008c5c51;
            }
            fVar14 = 1.5707964;
            if (param_3 <= 1.5707964) {
                fVar14 = param_3;
            }
            fVar13 = (float)::sin(fVar14);
            ptVar10 = local_58;
            ComputeCapInt(param_1, param_3, (float*)ptVar10);
            pvVar4 = param_2->SSOBeginPtr(ptVar10);
            fVar14 = *(float*)pvVar4;
            pfVar5 = (float*)param_2->y();
            fVar1 = *pfVar5;
            pfVar5 = (float*)param_2->second();
            uVar12 = param_1 - 2;
            if (uVar12 < 5) {
                fVar2 = *pfVar5;
                switch (uVar12) {
                case 0:
                    sh_eval_basis_1(fVar14, fVar1, fVar2, local_e8);
                    break;
                case 1:
                    sh_eval_basis_2(fVar14, fVar1, fVar2, local_e8);
                    break;
                case 2:
                    sh_eval_basis_3(fVar14, fVar1, fVar2, local_e8);
                    break;
                case 3:
                    sh_eval_basis_4(fVar14, fVar1, fVar2, local_e8);
                    break;
                case 4:
                    sh_eval_basis_5(fVar14, fVar1, fVar2, local_e8);
                }
                fVar14 = 1.0 / (fVar13 * fVar13);
                uVar12 = 0;
                if (param_1 != 0) {
                    uVar9 = 1;
                    lVar6 = 4;
                    pfVar5 = local_e8;
                    uVar11 = 0;
                    do {
                        uVar12 = 1;
                        if (1 < uVar9) {
                            uVar12 = uVar9;
                        }
                        fVar1 = *(float*)(local_58 + uVar11 * 4);
                        pvVar4 = param_4->SSOBeginPtr(ptVar10);
                        fVar13 = *(float*)pvVar4;
                        fVar2 = (float)(&fExtraNormFac)[uVar11];
                        uVar7 = 0;
                        do {
                            param_5[uVar7] = pfVar5[uVar7] * fVar1 * fVar14 * fVar13 * fVar2;
                            uVar7 = uVar7 + 1;
                        } while (uVar12 != uVar7);
                        uVar11 = uVar11 + 1;
                        uVar9 = uVar9 + 2;
                        param_5 = (float*)((long)param_5 + lVar6);
                        pfVar5 = (float*)((long)pfVar5 + lVar6);
                        lVar6 = lVar6 + 8;
                    } while (uVar11 != param_1);
                }
                if ((param_6 != (float*)0) && (param_1 != 0)) {
                    uVar12 = 1;
                    lVar6 = 4;
                    pfVar5 = local_e8;
                    uVar9 = 0;
                    do {
                        uVar11 = 1;
                        if (1 < uVar12) {
                            uVar11 = uVar12;
                        }
                        fVar1 = *(float*)(local_58 + uVar9 * 4);
                        pfVar8 = (float*)param_4->y();
                        fVar13 = *pfVar8;
                        fVar2 = (float)(&fExtraNormFac)[uVar9];
                        uVar7 = 0;
                        do {
                            param_6[uVar7] = pfVar5[uVar7] * fVar1 * fVar14 * fVar13 * fVar2;
                            uVar7 = uVar7 + 1;
                        } while (uVar11 != uVar7);
                        uVar9 = uVar9 + 1;
                        uVar12 = uVar12 + 2;
                        param_6 = (float*)((long)param_6 + lVar6);
                        pfVar5 = (float*)((long)pfVar5 + lVar6);
                        lVar6 = lVar6 + 8;
                    } while (uVar9 != param_1);
                }
                uVar12 = CONCAT71((int7)(uVar12 >> 8), 1);
                if ((param_7 != (float*)0) && (param_1 != 0)) {
                    uVar12 = 1;
                    lVar6 = 4;
                    pfVar5 = local_e8;
                    uVar9 = 0;
                    do {
                        uVar11 = 1;
                        if (1 < uVar12) {
                            uVar11 = uVar12;
                        }
                        fVar1 = *(float*)(local_58 + uVar9 * 4);
                        pfVar8 = (float*)param_4->second();
                        fVar13 = *pfVar8;
                        fVar2 = (float)(&fExtraNormFac)[uVar9];
                        uVar7 = 0;
                        do {
                            param_7[uVar7] = pfVar5[uVar7] * fVar1 * fVar14 * fVar13 * fVar2;
                            uVar7 = uVar7 + 1;
                        } while (uVar11 != uVar7);
                        uVar9 = uVar9 + 1;
                        uVar12 = uVar12 + 2;
                        param_7 = (float*)((long)param_7 + lVar6);
                        pfVar5 = (float*)((long)pfVar5 + lVar6);
                        lVar6 = lVar6 + 8;
                    } while (uVar9 != param_1);
                    uVar12 = CONCAT71((int7)(uVar12 >> 8), 1);
                }
                goto LAB_1008c5c51;
            }
            if (uVar12 < 5) {
                /* WARNING: Subroutine does not return */
                LogAssert("order < SH_MINORDER || order > SH_MAXORDER",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/sphericalharmonics/SphericalHarmonics.cpp",
                          4796, (char*)0);
            }
        }
        uVar12 = 0;
    LAB_1008c5c51:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar12 & 4294967295;
    }

    // 0x1008c5fe0, 1232 bytes, placed by debug map only (low confidence)
    // SHEvalHemisphereLight(unsigned long, math::Vector4T<float> const&, math::Vector4T<float> const&, math::Vector4T<float> const&, float*, float*, float*)
    ulong SHEvalHemisphereLight(ulong param_1, Vector4T* param_2, Vector4T* param_3, Vector4T* param_4, float* param_5,
                                float* param_6, float* param_7) {
        float fVar1;
        float fVar2;
        undefined7 uVar7;
        vector* pvVar3;
        float* pfVar4;
        float* pfVar5;
        long lVar6;
        long lVar8;
        long lVar9;
        ulong uVar10;
        ulong uVar12;
        long lVar13;
        ulong uVar14;
        ulong uVar15;
        bool bVar16;
        float local_e8[8];
        float local_c8[36];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar14 = param_1 - 2;
        bVar16 = 4 < uVar14;
        uVar7 = (undefined7)(uVar14 >> 8);
        if (!bVar16 && param_5 != (float*)0) {
            pvVar3 = param_2->SSOBeginPtr(param_2);
            fVar1 = *(float*)pvVar3;
            pfVar4 = (float*)param_2->y();
            fVar2 = *pfVar4;
            pfVar5 = (float*)param_2->second();
            pfVar4 = local_c8;
            sh_eval_basis_1(fVar1, fVar2, *pfVar5, pfVar4);
            pvVar3 = param_3->SSOBeginPtr(param_2);
            fVar1 = *(float*)pvVar3;
            pvVar3 = param_3->SSOBeginPtr(param_2);
            fVar2 = *(float*)pvVar3;
            pvVar3 = param_4->SSOBeginPtr(param_2);
            local_e8[0] = (fVar2 + *(float*)pvVar3) * SHEvalHemisphereLight_fSqrtPi;
            local_e8[1] = (SHEvalHemisphereLight_fSqrtPi3 + SHEvalHemisphereLight_fSqrtPi3) *
                          ((fVar2 + *(float*)pvVar3) * -0.5 + fVar1);
            lVar6 = 1;
            lVar9 = 4;
            lVar8 = 0;
            pfVar5 = param_5;
            do {
                fVar1 = local_e8[lVar8];
                fVar2 = (float)(&fExtraNormFac)[lVar8];
                lVar13 = 0;
                do {
                    pfVar5[lVar13] = pfVar4[lVar13] * fVar1 * 1.5 * fVar2;
                    lVar13 = lVar13 + 1;
                } while (lVar6 != lVar13);
                lVar8 = lVar8 + 1;
                lVar6 = lVar6 + 2;
                pfVar5 = (float*)((long)pfVar5 + lVar9);
                pfVar4 = (float*)((long)pfVar4 + lVar9);
                lVar9 = lVar9 + 8;
            } while (lVar8 != 2);
            if (2 < param_1) {
                pfVar4 = param_5 + 4;
                lVar8 = 20;
                uVar15 = uVar14;
                do {
                    lVar6 = ___bzero(pfVar4, lVar8);
                    pfVar4 = (float*)((long)pfVar4 + lVar8);
                    lVar8 = lVar8 + 8;
                    uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
            }
            if (param_6 != (float*)0) {
                pfVar4 = (float*)param_3->y();
                fVar1 = *pfVar4;
                pfVar4 = (float*)param_3->y();
                fVar2 = *pfVar4;
                pfVar4 = (float*)param_4->y();
                local_e8[0] = (fVar2 + *pfVar4) * SHEvalHemisphereLight_fSqrtPi;
                local_e8[1] = (SHEvalHemisphereLight_fSqrtPi3 + SHEvalHemisphereLight_fSqrtPi3) *
                              ((fVar2 + *pfVar4) * -0.5 + fVar1);
                lVar6 = 1;
                lVar9 = 4;
                pfVar4 = local_c8;
                lVar8 = 0;
                pfVar5 = param_6;
                do {
                    fVar1 = local_e8[lVar8];
                    fVar2 = (float)(&fExtraNormFac)[lVar8];
                    lVar13 = 0;
                    do {
                        pfVar5[lVar13] = pfVar4[lVar13] * fVar1 * 1.5 * fVar2;
                        lVar13 = lVar13 + 1;
                    } while (lVar6 != lVar13);
                    lVar8 = lVar8 + 1;
                    lVar6 = lVar6 + 2;
                    pfVar5 = (float*)((long)pfVar5 + lVar9);
                    pfVar4 = (float*)((long)pfVar4 + lVar9);
                    lVar9 = lVar9 + 8;
                } while (lVar8 != 2);
                if (2 < param_1) {
                    pfVar4 = param_6 + 4;
                    uVar10 = 5;
                    lVar8 = 20;
                    uVar15 = uVar14;
                    do {
                        uVar12 = 1;
                        if (1 < uVar10) {
                            uVar12 = uVar10;
                        }
                        lVar6 = ___bzero(pfVar4, uVar12 << 2);
                        pfVar4 = (float*)((long)pfVar4 + lVar8);
                        uVar10 = uVar10 + 2;
                        lVar8 = lVar8 + 8;
                        uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                }
            }
            if (param_7 != (float*)0) {
                pfVar4 = (float*)param_3->second();
                fVar1 = *pfVar4;
                pfVar4 = (float*)param_3->second();
                fVar2 = *pfVar4;
                pfVar4 = (float*)param_4->second();
                local_e8[0] = (fVar2 + *pfVar4) * SHEvalHemisphereLight_fSqrtPi;
                local_e8[1] = (SHEvalHemisphereLight_fSqrtPi3 + SHEvalHemisphereLight_fSqrtPi3) *
                              ((fVar2 + *pfVar4) * -0.5 + fVar1);
                lVar6 = 1;
                lVar9 = 4;
                pfVar4 = local_c8;
                lVar8 = 0;
                pfVar5 = param_7;
                do {
                    fVar1 = local_e8[lVar8];
                    fVar2 = (float)(&fExtraNormFac)[lVar8];
                    lVar13 = 0;
                    do {
                        pfVar5[lVar13] = pfVar4[lVar13] * fVar1 * 1.5 * fVar2;
                        lVar13 = lVar13 + 1;
                    } while (lVar6 != lVar13);
                    lVar8 = lVar8 + 1;
                    lVar6 = lVar6 + 2;
                    pfVar5 = (float*)((long)pfVar5 + lVar9);
                    pfVar4 = (float*)((long)pfVar4 + lVar9);
                    lVar9 = lVar9 + 8;
                } while (lVar8 != 2);
                if (2 < param_1) {
                    pfVar4 = param_7 + 4;
                    uVar15 = 5;
                    lVar8 = 20;
                    do {
                        uVar10 = 1;
                        if (1 < uVar15) {
                            uVar10 = uVar15;
                        }
                        lVar6 = ___bzero(pfVar4, uVar10 << 2);
                        pfVar4 = (float*)((long)pfVar4 + lVar8);
                        uVar15 = uVar15 + 2;
                        lVar8 = lVar8 + 8;
                        uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                }
            }
            uVar7 = (undefined7)((ulong)lVar6 >> 8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71(uVar7, bVar16 || param_5 == (float*)0) ^ 1;
    }

} // namespace jag::graphics

// 0x1008b4780, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x1008b4790, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x1008c5940, 16 bytes, placed by neighbouring functions
// asin(float)
void asin(float param_1) {
    _asinf();
}
