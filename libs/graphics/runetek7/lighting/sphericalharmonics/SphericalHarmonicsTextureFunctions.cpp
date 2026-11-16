// libs/graphics/runetek7/lighting/sphericalharmonics/SphericalHarmonicsTextureFunctions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x1008c64b0
    void SHProjectCubeMap(unsigned long arg1, const eastl::fixed_vector<render::ImageData, 6ul>& imageDatas,
                          float* arg3, float* arg4, float* arg5) {
        int iVar1;
        long lVar2;
        unsigned int uVar3;
        long lVar4;
        long* plVar5;
        long lVar6;
        float* pfVar7;
        float* pfVar8;
        float* pfVar9;
        float* pfVar10;
        uint8_t* pbVar11;
        float* pfVar12;
        unsigned long uVar13;
        unsigned int arg1_00;
        vector<render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true>>* pvVar15;
        float fVar16;
        uint8_t auVar17[16];
        float arg3_00;
        float fVar18;
        float arg1_01;
        array<float, 36ul> local_1f8;
        array<float, 36ul> local_168;
        Vector4T<float> local_d8;
        ColourHSL local_c8;
        ColourHSL local_b8;
        uint8_t* local_a8;
        unsigned long local_a0;
        unsigned long local_98;
        unsigned int local_7c;
        float local_78;
        float local_74;
        float local_70;
        unsigned int local_6c;
        float* local_68;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        float local_3c;
        float local_38;
        float local_34;

        uint32_t uVar14 = 1;
        if ((arg1 - 2 < 5) && (local_68 = arg5, lVar4 = imageDatas.size(), lVar4 == 6)) {
            lVar4 = imageDatas[0];
            iVar1 = *(int*)(lVar4 + 24);
            lVar4 = imageDatas[0];
            if (iVar1 == *(int*)(lVar4 + 28)) {
                lVar4 = imageDatas[0];
                pvVar15 =
                    (vector<render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true>>*)imageDatas;
                if ((16 < *(unsigned int*)(lVar4 + 32)) || ((65920U >> (*(unsigned int*)(lVar4 + 32) & 31) & 1) == 0)) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/lighting/sphericalharmonics/SphericalHarmonicsTextureFunctions.cpp",
                                    62, nullptr);
                }
                lVar4 = imageDatas[0];
                if (*(int*)(lVar4 + 24) == 0) {
                    LogAssert("cubeMapImageData[0].m_width > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "lighting/sphericalharmonics/SphericalHarmonicsTextureFunctions.cpp",
                              66, nullptr);
                }
                lVar4 = (*pvVar15)[0];
                local_34 = (float)*(unsigned int*)(lVar4 + 24);
                local_38 = 1.0 / local_34;
                lVar4 = (*pvVar15)[0];
                local_4c = 0.0;
                if (1 < *(unsigned int*)(lVar4 + 24)) {
                    local_4c = (2.0 - (local_38 + local_38)) / (local_34 - 1.0);
                }
                if (arg3 != nullptr) {
                    ___bzero(arg3);
                }
                if (arg4 != nullptr) {
                    ___bzero(arg4);
                }
                pfVar12 = local_68;
                if (local_68 != nullptr) {
                    ___bzero(local_68);
                }
                pvVar15 =
                    (vector<render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true>>*)imageDatas;
                local_58 = local_38 - 1.0;
                lVar4 = imageDatas[0];
                uVar3 = render::GetFormatByteCount(*(Format*)(lVar4 + 32));
                local_98 = (unsigned long)uVar3;
                local_54 = 0.0;
                uVar13 = 0;
                do {
                    lVar4 = (*pvVar15)[0];
                    if (*(int*)(lVar4 + 28) != 0) {
                        uVar3 = 0;
                        local_a0 = uVar13;
                        do {
                            plVar5 = (long*)(*pvVar15)[uVar13];
                            lVar4 = *plVar5;
                            lVar2 = plVar5[1];
                            local_50 = (float)uVar3;
                            local_34 = (local_50 + local_50 + 1.0) * local_38;
                            local_70 = local_34 - 1.0;
                            lVar6 = (*pvVar15)[uVar13];
                            local_6c = uVar3;
                            if (*(int*)(lVar6 + 24) == 0) {
                                pfVar12 = local_68;
                            } else {
                                fVar16 = local_50 * local_4c + local_58;
                                local_3c = 1.0 - local_34;
                                local_50 = fVar16 * fVar16 + 1.0;
                                pbVar11 = (uint8_t*)(lVar4 + (unsigned long)((int)lVar2 * uVar3) + 2);
                                uVar3 = 0;
                                do {
                                    fVar18 = (float)uVar3;
                                    arg1_00 = (unsigned int)pbVar11[-2] | (unsigned int)pbVar11[-1] << 8 |
                                              (unsigned int)*pbVar11 << 16;
                                    local_34 = local_4c * fVar18 + local_58;
                                    fVar16 = local_3c;
                                    local_a8 = pbVar11;
                                    local_7c = uVar3;
                                    switch (uVar13 & 4294967295) {
                                    case 0:
                                        arg1_01 = 1.0;
                                        arg3_00 = 1.0 - (fVar18 + fVar18 + 1.0) * local_38;
                                        goto LAB_1008c6915;
                                    case 1:
                                        arg1_01 = -1.0;
                                        arg3_00 = (fVar18 + fVar18 + 1.0) * local_38 - 1.0;
                                        break;
                                    case 2:
                                        arg1_01 = (fVar18 + fVar18 + 1.0) * local_38 - 1.0;
                                        arg3_00 = local_70;
                                        fVar16 = 1.0;
                                        break;
                                    case 3:
                                        arg1_01 = (fVar18 + fVar18 + 1.0) * local_38 - 1.0;
                                        arg3_00 = local_3c;
                                        fVar16 = -1.0;
                                        break;
                                    case 4:
                                        arg3_00 = -1.0;
                                        arg1_01 = (-1.0 - (fVar18 + fVar18)) * local_38 + 1.0;
                                        goto LAB_1008c6915;
                                    case 5:
                                        arg3_00 = 1.0;
                                        arg1_01 = (fVar18 + fVar18 + 1.0) * local_38 - 1.0;
                                    LAB_1008c6915:
                                        break;
                                    default:
                                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/graphics/runetek7/lighting/"
                                                        "sphericalharmonics/SphericalHarmonicsTextureFunctions.cpp",
                                                        157, nullptr);
                                    }
                                    local_c8 = math::ColourHSL(arg1_01, fVar16, arg3_00);
                                    local_c8 = math::Vector3T<float>::Normalize();
                                    local_d8 = math::Vector4T(local_c8, 0.0);
                                    pfVar7 = local_1f8.data();
                                    SHEvalDirection(pfVar7, arg1, &local_d8);
                                    uVar3 = extract_bits(arg1_00, 0, 8);
                                    local_78 = (float)uVar3;
                                    uVar3 = extract_bits(arg1_00, 8, 8);
                                    local_74 = (float)uVar3;
                                    uVar3 = extract_bits(arg1_00, 16, 8);
                                    local_b8 = math::ColourHSL(local_78, local_74, (float)uVar3);
                                    local_b8 /= 256.0;
                                    pfVar12 = arg3;
                                    fVar16 = local_34 * local_34 + local_50;
                                    fVar16 = fVar16 * fVar16 * fVar16;
                                    auVar17 = rsqrtss((unsigned __int128)0, (unsigned __int128)((unsigned int)fVar16));
                                    fVar18 = auVar17._0_4_;
                                    local_34 = fVar18 * -0.5 * (fVar16 * fVar18 * fVar18 - 3.0) * 4.0;
                                    if (arg3 != nullptr) {
                                        pfVar8 = local_168.data();
                                        pfVar9 = (float*)local_b8.SSOBeginPtr();
                                        uVar13 = arg1;
                                        pfVar8 = (float*)SHScale(pfVar8, arg1, pfVar7, *pfVar9 * local_34);
                                        SHAdd(pfVar12, uVar13, pfVar12, pfVar8);
                                    }
                                    pfVar12 = local_68;
                                    pfVar8 = arg4;
                                    if (arg4 != nullptr) {
                                        pfVar9 = local_168.data();
                                        pfVar10 = (float*)local_b8.y();
                                        uVar13 = arg1;
                                        pfVar9 = (float*)SHScale(pfVar9, arg1, pfVar7, *pfVar10 * local_34);
                                        SHAdd(pfVar8, uVar13, pfVar8, pfVar9);
                                    }
                                    if (pfVar12 != nullptr) {
                                        pfVar8 = local_168.data();
                                        pfVar9 = (float*)local_b8.second();
                                        uVar13 = arg1;
                                        pfVar7 = (float*)SHScale(pfVar8, arg1, pfVar7, *pfVar9 * local_34);
                                        SHAdd(pfVar12, uVar13, pfVar12, pfVar7);
                                    }
                                    pvVar15 =
                                        (vector<render::ImageData,
                                                eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true>>*)imageDatas;
                                    uVar13 = local_a0;
                                    local_54 = local_54 + local_34;
                                    uVar3 = local_7c + 1;
                                    lVar4 = imageDatas[local_a0];
                                    pbVar11 = local_a8 + local_98;
                                } while (uVar3 < *(unsigned int*)(lVar4 + 24));
                            }
                            uVar3 = local_6c + 1;
                            lVar4 = (*pvVar15)[0];
                        } while (uVar3 < *(unsigned int*)(lVar4 + 28));
                    }
                    uVar13 = uVar13 + 1;
                } while (uVar13 != 6);
                local_34 = 12.566371f / local_54;
                if (arg3 != nullptr) {
                    SHScale(arg3, arg1, arg3, local_34);
                }
                if (arg4 != nullptr) {
                    SHScale(arg4, arg1, arg4, local_34);
                }
                if (pfVar12 != nullptr) {
                    SHScale(pfVar12, arg1, pfVar12, local_34);
                }
                uVar14 = 0;
            }
        }
        return uVar14;
    }

} // namespace jag::graphics
