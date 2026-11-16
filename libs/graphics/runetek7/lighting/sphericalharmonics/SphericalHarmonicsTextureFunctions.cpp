// libs/graphics/runetek7/lighting/sphericalharmonics/SphericalHarmonicsTextureFunctions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x1008c64b0, 1840 bytes, placed by debug map only (low confidence)
    // SHProjectCubeMap(unsigned long, eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator> const&, float*, float*, float*)
    undefined4 SHProjectCubeMap(ulong param_1, fixed_vector* param_2, float* param_3, float* param_4, float* param_5) {
        int iVar1;
        long lVar2;
        uint uVar3;
        long lVar4;
        long* plVar5;
        long lVar6;
        float* pfVar7;
        float* pfVar8;
        vector* pvVar9;
        float* pfVar10;
        float* pfVar11;
        byte* pbVar12;
        type* ptVar13;
        float* pfVar14;
        ulong uVar15;
        undefined4 uVar16;
        uint uVar17;
        vector<render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>* pvVar18;
        float fVar19;
        undefined1 auVar20[16];
        float fVar21;
        float fVar22;
        float fVar23;
        array<float, 36ul> local_1f8[144];
        array<float, 36ul> local_168[144];
        Vector4T<float> local_d8[16];
        ColourHSL local_c8;
        ColourHSL local_b8;
        byte* local_a8;
        ulong local_a0;
        ulong local_98;
        float* local_90;
        float* local_88;
        uint local_7c;
        float local_78;
        float local_74;
        float local_70;
        uint local_6c;
        float* local_68;
        vector<render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>* local_60;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        ulong local_48;
        float local_3c;
        float local_38;
        float local_34;

        uVar16 = 1;
        if ((param_1 - 2 < 5) && (local_68 = param_5, lVar4 = param_2->size(), lVar4 == 6)) {
            local_48 = param_1;
            lVar4 = eastl::vector<render::ImageData,
                                  eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_2,
                0);
            iVar1 = *(int*)(lVar4 + 24);
            lVar4 = eastl::vector<render::ImageData,
                                  eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_2,
                0);
            if (iVar1 == *(int*)(lVar4 + 28)) {
                local_60 = (vector<render::ImageData,
                                   eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)param_2;
                lVar4 = eastl::vector<render::ImageData,
                                      eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<render::ImageData,
                                   eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                           0);
                pvVar18 = local_60;
                if ((16 < *(uint*)(lVar4 + 32)) || ((65920U >> (*(uint*)(lVar4 + 32) & 31) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/lighting/sphericalharmonics/SphericalHarmonicsTextureFunctions.cpp",
                                    62, (char*)0);
                }
                lVar4 = eastl::vector<
                    render::ImageData,
                    eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::operator[](local_60,
                                                                                                            0);
                if (*(int*)(lVar4 + 24) == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("cubeMapImageData[0].m_width > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "lighting/sphericalharmonics/SphericalHarmonicsTextureFunctions.cpp",
                              66, (char*)0);
                }
                lVar4 = eastl::vector<
                    render::ImageData,
                    eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
                local_34 = (float)*(uint*)(lVar4 + 24);
                local_38 = 1.0 / local_34;
                lVar4 = eastl::vector<
                    render::ImageData,
                    eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18, 0);
                local_4c = 0.0;
                if (1 < *(uint*)(lVar4 + 24)) {
                    local_4c = (2.0 - (local_38 + local_38)) / (local_34 + -1.0);
                }
                if (param_3 != (float*)0) {
                    ___bzero(param_3);
                }
                if (param_4 != (float*)0) {
                    ___bzero(param_4);
                }
                pfVar14 = local_68;
                local_90 = param_4;
                local_88 = param_3;
                if (local_68 != (float*)0) {
                    ___bzero(local_68);
                }
                pvVar18 = local_60;
                local_58 = local_38 + -1.0;
                lVar4 = eastl::vector<
                    render::ImageData,
                    eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::operator[](local_60,
                                                                                                            0);
                uVar3 = render::GetFormatByteCount(*(undefined4*)(lVar4 + 32));
                local_98 = (ulong)uVar3;
                local_54 = 0.0;
                uVar15 = 0;
                do {
                    lVar4 = eastl::vector<
                        render::ImageData,
                        eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar18,
                                                                                                                0);
                    if (*(int*)(lVar4 + 28) != 0) {
                        uVar3 = 0;
                        local_a0 = uVar15;
                        do {
                            plVar5 = (long*)eastl::vector<
                                render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true,
                                                                                 eastl::allocator>>::operator[](pvVar18,
                                                                                                                uVar15);
                            lVar4 = *plVar5;
                            lVar2 = plVar5[1];
                            local_50 = (float)uVar3;
                            local_34 = (local_50 + local_50 + 1.0) * local_38;
                            local_70 = local_34 + -1.0;
                            lVar6 = eastl::vector<render::ImageData,
                                                  eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](pvVar18,
                                                                                                               uVar15);
                            local_6c = uVar3;
                            if (*(int*)(lVar6 + 24) == 0) {
                                pfVar14 = local_68;
                            } else {
                                fVar19 = local_50 * local_4c + local_58;
                                local_3c = 1.0 - local_34;
                                local_50 = fVar19 * fVar19 + 1.0;
                                pbVar12 = (byte*)(lVar4 + (ulong)((int)lVar2 * uVar3) + 2);
                                uVar3 = 0;
                                do {
                                    fVar22 = (float)uVar3;
                                    uVar17 = (uint)pbVar12[-2] | (uint)pbVar12[-1] << 8 | (uint)*pbVar12 << 16;
                                    local_34 = local_4c * fVar22 + local_58;
                                    fVar19 = local_3c;
                                    local_a8 = pbVar12;
                                    local_7c = uVar3;
                                    switch (uVar15 & 4294967295) {
                                    case 0:
                                        fVar23 = 1.0;
                                        fVar21 = 1.0 - (fVar22 + fVar22 + 1.0) * local_38;
                                        goto LAB_1008c6915;
                                    case 1:
                                        fVar23 = -1.0;
                                        fVar21 = (fVar22 + fVar22 + 1.0) * local_38 + -1.0;
                                        break;
                                    case 2:
                                        fVar23 = (fVar22 + fVar22 + 1.0) * local_38 + -1.0;
                                        fVar21 = local_70;
                                        fVar19 = 1.0;
                                        break;
                                    case 3:
                                        fVar23 = (fVar22 + fVar22 + 1.0) * local_38 + -1.0;
                                        fVar21 = local_3c;
                                        fVar19 = -1.0;
                                        break;
                                    case 4:
                                        fVar21 = -1.0;
                                        fVar23 = (-1.0 - (fVar22 + fVar22)) * local_38 + 1.0;
                                        goto LAB_1008c6915;
                                    case 5:
                                        fVar21 = 1.0;
                                        fVar23 = (fVar22 + fVar22 + 1.0) * local_38 + -1.0;
                                    LAB_1008c6915:
                                        break;
                                    default:
                                        /* WARNING: Subroutine does not return */
                                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/graphics/runetek7/lighting/"
                                                        "sphericalharmonics/SphericalHarmonicsTextureFunctions.cpp",
                                                        157, (char*)0);
                                    }
                                    new (&local_c8) math::ColourHSL(fVar23, fVar19, fVar21);
                                    local_c8.Normalize();
                                    math::Vector4T<float>::Vector4T(local_d8, (Vector3T*)&local_c8, 0.0);
                                    pfVar7 = (float*)std::array<float, 36ul>::data(local_1f8);
                                    SHEvalDirection(pfVar7, local_48, (Vector4T*)local_d8);
                                    uVar3 = extract_bits(uVar17, 0, 8);
                                    local_78 = (float)uVar3;
                                    uVar3 = extract_bits(uVar17, 8, 8);
                                    local_74 = (float)uVar3;
                                    ptVar13 = (type*)16;
                                    uVar3 = extract_bits(uVar17, 16, 8);
                                    new (&local_b8) math::ColourHSL(local_78, local_74, (float)uVar3);
                                    math::Vector3T<float>::operator/=((Vector3T<float>*)&local_b8, 256.0);
                                    pfVar14 = local_88;
                                    fVar19 = local_34 * local_34 + local_50;
                                    fVar19 = fVar19 * fVar19 * fVar19;
                                    auVar20 = rsqrtss(ZEXT816(0), ZEXT416((uint)fVar19));
                                    fVar22 = auVar20._0_4_;
                                    local_34 = fVar22 * -0.5 * (fVar19 * fVar22 * fVar22 + -3.0) * 4.0;
                                    if (local_88 != (float*)0) {
                                        pfVar8 = (float*)std::array<float, 36ul>::data(local_168);
                                        pvVar9 = local_b8.SSOBeginPtr(ptVar13);
                                        uVar15 = local_48;
                                        pfVar8 = (float*)SHScale(pfVar8, local_48, pfVar7, *(float*)pvVar9 * local_34);
                                        SHAdd(pfVar14, uVar15, pfVar14, pfVar8);
                                    }
                                    pfVar14 = local_68;
                                    pfVar8 = local_90;
                                    if (local_90 != (float*)0) {
                                        pfVar10 = (float*)std::array<float, 36ul>::data(local_168);
                                        pfVar11 = (float*)local_b8.y();
                                        uVar15 = local_48;
                                        pfVar10 = (float*)SHScale(pfVar10, local_48, pfVar7, *pfVar11 * local_34);
                                        SHAdd(pfVar8, uVar15, pfVar8, pfVar10);
                                    }
                                    if (pfVar14 != (float*)0) {
                                        pfVar8 = (float*)std::array<float, 36ul>::data(local_168);
                                        pfVar10 = (float*)local_b8.second();
                                        uVar15 = local_48;
                                        pfVar7 = (float*)SHScale(pfVar8, local_48, pfVar7, *pfVar10 * local_34);
                                        SHAdd(pfVar14, uVar15, pfVar14, pfVar7);
                                    }
                                    pvVar18 = local_60;
                                    uVar15 = local_a0;
                                    local_54 = local_54 + local_34;
                                    uVar3 = local_7c + 1;
                                    lVar4 = eastl::vector<
                                        render::ImageData,
                                        eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](local_60, local_a0);
                                    pbVar12 = local_a8 + local_98;
                                } while (uVar3 < *(uint*)(lVar4 + 24));
                            }
                            uVar3 = local_6c + 1;
                            lVar4 =
                                eastl::vector<render::ImageData,
                                              eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar18, 0);
                        } while (uVar3 < *(uint*)(lVar4 + 28));
                    }
                    uVar15 = uVar15 + 1;
                } while (uVar15 != 6);
                local_34 = 12.566371 / local_54;
                if (local_88 != (float*)0) {
                    SHScale(local_88, local_48, local_88, local_34);
                }
                if (local_90 != (float*)0) {
                    SHScale(local_90, local_48, local_90, local_34);
                }
                if (pfVar14 != (float*)0) {
                    SHScale(pfVar14, local_48, pfVar14, local_34);
                }
                uVar16 = 0;
            }
        }
        return uVar16;
    }

} // namespace jag::graphics
