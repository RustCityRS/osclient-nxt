// libs/graphics/postprocess/filters/LuminanceFilterCommon.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess::luminance {
    // 0x1009b50b0
    vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*
    TryCreateRenderTarget(LuminanceShaderOutputFormat& luminanceShaderOutputFormat,
                          render::RenderTargetsManager* renderTargetsManager, const char* str, unsigned int arg4,
                          unsigned int arg5, render::ShaderType shaderType) {
        array<render::Texture::Desc, 2ul>* array;
        unsigned int* puVar5;
        uint32_t in_register_0000000c;
        int in_stack_00000008;
        uint8_t local_170[64];
        RenderTargetsManager local_130;
        uint8_t local_b0[32];

        local_b0._20_4_ = in_register_0000000c;
        local_b0._16_4_ = arg4;
        RenderTargetsManager* format = renderTargetsManager;
        if (!(IsPowerOfTwo(arg5))) {
            LogAssert("IsPowerOfTwo(width)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      23, nullptr);
        }
        Singleton<render::RenderDevice>* this_01 = (Singleton<render::RenderDevice>*)(unsigned long)shaderType;
        if (!(IsPowerOfTwo(shaderType))) {
            LogAssert("IsPowerOfTwo(height)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      24, nullptr);
        }
        long lVar2 = ((MapArea*)this_01->Instance())->GetOrigin();
        fixed_vector<render::Format, 4ul> local_70;
        if (*(char*)(lVar2 + 158) != '\0') {
            local_130._vptr._0_4_ = 21;
            format = (RenderTargetsManager*)(local_170 + 64);
            local_70.push_back(*format);
        }
        if (*(char*)(lVar2 + 159) != '\0') {
            local_130._vptr._0_4_ = 11;
            format = (RenderTargetsManager*)(local_170 + 64);
            local_70.push_back(*format);
        }
        if (in_stack_00000008 != 37305) {
            if (*(char*)(lVar2 + 158) != '\0') {
                local_130._vptr._0_4_ = 4;
                local_70.push_back(*((local_170 + 64)));
            }
            local_130._vptr._0_4_ = 7;
            format = (RenderTargetsManager*)(local_170 + 64);
            local_70.push_back(*format);
        }
        new (luminanceShaderOutputFormat) shared_ptr();
        *(uint32_t*)&renderTargetsManager->_vptr = 0;
        local_b0._24_8_ = renderTargetsManager;
        auto puVar3 = local_70.HeapBeginPtr();
        auto puVar4 = local_70.end();
        if (puVar3 != puVar4) {
            array = (array<render::Texture::Desc, 2ul>*)(local_170 + 64);
            do {
                new (array) std::array<render::Texture::Desc, 2ul>();
                puVar5 = (unsigned int*)(*array)[(unsigned long)format];
                *puVar5 = arg5;
                puVar5[1] = shaderType;
                puVar5[6] = 0;
                *(uint8_t*)(puVar5 + 8) = 0;
                puVar5[3] = *puVar3;
                new (local_170) render::Texture::Desc();
                format = (RenderTargetsManager*)str;
                local_b0->Register((char*)(RenderTargetsManager*)str, local_b0._16_4_, *3553, (int)array, DAT_00000001,
                                   (unsigned int)(Desc*)local_170, false);
                lVar2 = local_b0->end();
                if (lVar2 != 0) {
                    lVar2 = luminanceShaderOutputFormat.end();
                    if (lVar2 != 0) {
                        str->Unregister(
                            *((shared_ptr<render::RenderTargets>*)(vector<oldscape::dash3d::EntityHighlight*,
                                                                          BucketAllocatorEASTL>*)
                                  luminanceShaderOutputFormat));
                    }
                    (*((shared_ptr<render::RenderTargets>*)(vector<oldscape::dash3d::EntityHighlight*,
                                                                   BucketAllocatorEASTL>*)
                           luminanceShaderOutputFormat)) = *local_b0;
                    *(unsigned int*)(RenderTargetsManager_vtbl**)local_b0._24_8_ = (unsigned int)(*puVar3 == 7) * 2;
                    break;
                }
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        }
        return (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)luminanceShaderOutputFormat;
    }

    // 0x1009b8880
    unsigned long CreateDownsampleChain(WrapArray<shared_ptr<render::RenderTargets>> wrapArray,
                                        render::RenderTargetsManager* renderTargetsManager, const char* str,
                                        unsigned int arg4) {
        TextureType textureType;
        unsigned int uVar3;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_01;
        unsigned long uVar11;
        uint64_t unaff_RBX;
        char* arg1;
        uint32_t local_188[32];
        RenderTargetsManager local_108;
        unsigned int local_70[6];
        unsigned int local_40;
        unsigned int local_3c;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar4 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*wrapArray)[0];
        long lVar5 = pvVar4->end();
        if (lVar5 == 0) {
            LogAssert("renderTargetsInOut[0u].get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      125, nullptr);
        }
        if (!(IsPowerOfTwo(arg4))) {
            LogAssert("IsPowerOfTwo(sizeDivider)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      128, nullptr);
        }
        shared_ptr<render::RenderTargets>* psVar6 = (shared_ptr<render::RenderTargets>*)(*wrapArray)[0];
        RenderTargets* pRVar7 = (RenderTargets*)(*psVar6).operator->();
        auto this_00 = pRVar7->GetColourTargetTextures();
        uint64_t* puVar8 = (uint64_t*)(*this_00)[0];
        unsigned int* puVar9 = (unsigned int*)(*puVar8)->second();
        unsigned int local_34 = *puVar9;
        unsigned int arg1_00 = puVar9[1];
        local_108._64_4_ = puVar9[14];
        local_108._68_4_ = puVar9[15];
        local_108.field_48 = puVar9[10];
        local_108.field_52 = puVar9[11];
        local_108.field_56 = puVar9[12];
        local_108._60_4_ = puVar9[13];
        local_108._32_4_ = puVar9[6];
        local_108._36_4_ = puVar9[7];
        local_108._40_4_ = puVar9[8];
        local_108._44_4_ = puVar9[9];
        local_108._16_4_ = puVar9[2];
        local_108._20_4_ = puVar9[3];
        local_108._24_4_ = puVar9[4];
        local_108._28_4_ = puVar9[5];
        Desc local_b8;
        psVar6 = (shared_ptr<render::RenderTargets>*)(*wrapArray)[0];
        pRVar7 = (RenderTargets*)(*psVar6).operator->();
        lVar5 = pRVar7->GetDepthStencilTargetTexture();
        if (lVar5 != 0) {
            psVar6 = (shared_ptr<render::RenderTargets>*)(*wrapArray)[0];
            pRVar7 = (RenderTargets*)(*psVar6).operator->();
            this_01 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                          pRVar7->GetDepthStencilTargetTexture();
            puVar8 = (uint64_t*)this_01->second();
            local_b8._0_8_ = *puVar8;
            local_b8._8_8_ = puVar8[1];
            local_b8._16_8_ = puVar8[2];
            local_b8._24_8_ = puVar8[3];
            local_b8._32_8_ = puVar8[4];
            local_b8._40_8_ = puVar8[5];
            local_b8.field_48 = puVar8[6];
            local_b8._56_8_ = puVar8[7];
        }
        if (!(IsPowerOfTwo(local_34))) {
            LogAssert("IsPowerOfTwo(colourTargetDesc.m_Width)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      139, nullptr);
        }
        if (!(IsPowerOfTwo(arg1_00))) {
            LogAssert("IsPowerOfTwo(colourTargetDesc.m_Height)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      140, nullptr);
        }
        if (!(IsPowerOfTwo(local_b8.field_0))) {
            LogAssert("IsPowerOfTwo(depthTargetDesc.m_Width)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      141, nullptr);
        }
        if (!(IsPowerOfTwo(local_b8.field_4))) {
            LogAssert("IsPowerOfTwo(depthTargetDesc.m_Height)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      142, nullptr);
        }
        unsigned long uVar10 = wrapArray->HeapBeginPtr();
        unsigned long uVar12 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (1 < uVar10) {
            uVar12 = 1;
            uVar10 = 1;
            do {
                local_3c = (unsigned int)uVar12;
                local_188[0] = 1;
                local_70[0] = local_34 / arg4;
                local_40 = arg1_00;
                puVar9 = std::max<unsigned int>(*local_188, *local_70);
                uVar3 = *puVar9;
                local_188[0] = 1;
                local_70[0] = local_40 / arg4;
                puVar9 = std::max<unsigned int>(*local_188, *local_70);
                arg1_00 = *puVar9;
                local_b8.field_4 = arg1_00;
                local_b8.field_0 = uVar3;
                arg1 = "%s%d";
                local_34 = uVar3;
                new (local_70) eastl::basic_string<char, BucketAllocatorEASTL>((CtorSprintf*)"%s%d", str, uVar10);
                new (local_188) std::array<render::Texture::Desc, 2ul>();
                puVar9 = (unsigned int*)(*local_188)[(unsigned long)arg1];
                *puVar9 = local_34;
                puVar9[1] = arg1_00;
                puVar9[2] = local_108._16_4_;
                puVar9[3] = local_108._20_4_;
                puVar9[4] = local_108._24_4_;
                puVar9[5] = local_108._28_4_;
                puVar9[6] = local_108._32_4_;
                puVar9[7] = local_108._36_4_;
                puVar9[8] = local_108._40_4_;
                puVar9[9] = local_108._44_4_;
                puVar9[10] = local_108.field_48;
                puVar9[11] = local_108.field_52;
                puVar9[12] = local_108.field_56;
                puVar9[13] = local_108._60_4_;
                puVar9[14] = local_108._64_4_;
                puVar9[15] = local_108._68_4_;
                textureType = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_108.Register(renderTargetsManager, textureType, *3553,
                                   (int)(array<render::Texture::Desc, 2ul>*)local_188, DAT_00000001,
                                   (unsigned int)&local_b8, false);
                psVar6 = (shared_ptr<render::RenderTargets>*)(*wrapArray)[uVar10];
                *psVar6 = local_108;
                pvVar4 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*wrapArray)[uVar10];
                lVar5 = pvVar4->end();
                uVar3 = local_3c & lVar5 != 0;
                uVar12 = (unsigned long)uVar3;
                if (uVar3 == 0)
                    break;
                uVar10 = uVar10 + 1;
                uVar11 = wrapArray->HeapBeginPtr();
            } while (uVar10 < uVar11);
        }
        return uVar12 & 4294967295;
    }

    // 0x1009b8ff0
    float DebugGetLuminance(render::RenderContext& renderContext,
                            LuminanceShaderOutputFormat luminanceShaderOutputFormat,
                            render::RenderTargets& renderTargets, bool arg4) {
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this;
        unsigned int local_38;
        float local_34;

        this = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                   renderTargets.GetColourTargetTextures();
        uint64_t* puVar2 = (uint64_t*)(*this)[0];
        unsigned int* puVar3 = (unsigned int*)(*puVar2)->second();
        Format format = (unsigned int)(puVar3[3] != 7) * 4 + 7;
        unsigned int uVar1 = render::GetFormatByteCount(format);
        if (luminanceShaderOutputFormat == 2) {
            local_38 = 0;
            if (4 < uVar1) {
                LogAssert("sizeof(pixelData) >= imageSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "filters/LuminanceFilterCommon.cpp",
                          189, nullptr);
            }
            renderContext.ReadColourTargetData(renderTargets, &local_38, format, 0, 0, *puVar3 >> 1, puVar3[1] >> 1, 1,
                                               1);
            uVar1 = (unsigned int)renderTargets;
            ReorderToBE<int>(&local_38);
            local_34 = (float)((UnpackUtils*)(unsigned long)local_38)->UnpackModPack(uVar1);
            if (!arg4) {
                local_34 = local_34 * 32.0 - 16.0;
            }
        } else {
            local_34 = -1.0;
            if (4 < uVar1) {
                LogAssert("sizeof(pixelData) >= imageSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "filters/LuminanceFilterCommon.cpp",
                          207, nullptr);
            }
            renderContext.ReadColourTargetData(renderTargets, &local_34, format, 0, 0, *puVar3 >> 1, puVar3[1] >> 1, 1,
                                               1);
        }
        return local_34;
    }

} // namespace jag::postprocess::luminance
