// libs/graphics/postprocess/filters/LuminanceFilterCommon.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess::luminance {
    // 0x1009b50b0, 752 bytes, placed by debug map only (low confidence)
    // TryCreateRenderTarget(LuminanceShaderOutputFormat&, render::RenderTargetsManager*, char const*, unsigned int, unsigned int, render::ShaderType)
    shared_ptr* TryCreateRenderTarget(Format* param_1, RenderTargetsManager* param_2, undefined8 param_3, uint param_4,
                                      uint param_5, int param_7) {
        char cVar1;
        MapArea* this_01;
        long lVar2;
        uint* puVar3;
        uint* puVar4;
        uint* puVar5;
        Format* pFVar6;
        Singleton<render::RenderDevice>* this_02;
        undefined1 local_170[64];
        undefined4 local_130;
        undefined1 local_b0[32];
        fixed_vector<render::Format, 4ul, true, eastl::allocator> local_70[56];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pFVar6 = param_1;
        local_b0._16_8_ = param_3;
        cVar1 = IsPowerOfTwo(param_4);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsPowerOfTwo(width)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      23, (char*)0);
        }
        this_02 = (Singleton<render::RenderDevice>*)(ulong)param_5;
        cVar1 = IsPowerOfTwo(param_5);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsPowerOfTwo(height)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      24, (char*)0);
        }
        this_01 = (MapArea*)this_02->Instance();
        lVar2 = this_01->GetOrigin();
        eastl::fixed_vector<render::Format, 4ul, true, eastl::allocator>::fixed_vector(local_70);
        if (*(char*)(lVar2 + 158) != '\0') {
            local_130 = 21;
            pFVar6 = (Format*)&local_130;
            eastl::fixed_vector<render::Format, 4ul, true, eastl::allocator>::push_back(local_70, pFVar6);
        }
        if (*(char*)(lVar2 + 159) != '\0') {
            local_130 = 11;
            pFVar6 = (Format*)&local_130;
            eastl::fixed_vector<render::Format, 4ul, true, eastl::allocator>::push_back(local_70, pFVar6);
        }
        if (param_7 != 37305) {
            if (*(char*)(lVar2 + 158) != '\0') {
                local_130 = 4;
                eastl::fixed_vector<render::Format, 4ul, true, eastl::allocator>::push_back(local_70,
                                                                                            (Format*)&local_130);
            }
            local_130 = 7;
            pFVar6 = (Format*)&local_130;
            eastl::fixed_vector<render::Format, 4ul, true, eastl::allocator>::push_back(local_70, pFVar6);
        }
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pFVar6);
        *(undefined4*)param_1 = 0;
        local_b0._24_8_ = param_1;
        puVar3 = (uint*)local_70->HeapBeginPtr();
        puVar4 = (uint*)local_70->end();
        if (puVar3 != puVar4) {
            do {
                new (&local_130) std::array<render::Texture::Desc, 2ul>();
                puVar5 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)&local_130);
                *puVar5 = param_4;
                puVar5[1] = param_5;
                puVar5[6] = 0;
                *(undefined1*)(puVar5 + 8) = 0;
                puVar5[3] = *puVar3;
                new (local_170) render::Texture::Desc();
                local_b0->Register(param_2, local_b0._16_8_, 3553, (array<render::Texture::Desc, 2ul>*)&local_130, 1,
                                   local_170, 0, 0);
                lVar2 = local_b0->end();
                if (lVar2 != 0) {
                    lVar2 = ((shared_ptr*)this)->end();
                    if (lVar2 != 0) {
                        param_2->Unregister(this);
                    }
                    shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)(shared_ptr*)this,
                                                                 (shared_ptr*)local_b0);
                    *(uint*)local_b0._24_8_ = (uint)(*puVar3 == 7) * 2;
                    local_b0->~shared_ptr();
                    break;
                }
                local_b0->~shared_ptr();
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        }
        eastl::fixed_vector<render::Format, 4ul, true, eastl::allocator>::~fixed_vector(local_70);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (shared_ptr*)this;
    }

    // 0x1009b8880, 1008 bytes, placed by __FILE__ string
    // CreateDownsampleChain(WrapArray<shared_ptr<render::RenderTargets> >, render::RenderTargetsManager*, char const*, unsigned int)
    ulong CreateDownsampleChain(WrapArray<shared_ptr<render::RenderTargets>>* param_1, undefined8 param_2,
                                undefined8 param_3, uint param_4) {
        WrapArray<shared_ptr<render::RenderTargets>>* this;
        uint uVar1;
        char cVar2;
        uint uVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar4;
        long lVar5;
        shared_ptr<render::RenderTargets>* psVar6;
        RenderTargets* pRVar7;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8* puVar8;
        uint* puVar9;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        ulong uVar10;
        undefined8 uVar11;
        ulong uVar12;
        undefined8 unaff_RBX;
        ulong uVar13;
        uint uVar14;
        undefined4 local_188[32];
        RenderTargetsManager local_108;
        Desc local_b8;
        uint local_70[6];
        undefined8 local_58;
        undefined8 local_50;
        WrapArray<shared_ptr<render::RenderTargets>>* local_48;
        uint local_40;
        uint local_3c;
        uint local_38;
        uint local_34;

        local_58 = param_3;
        local_50 = param_2;
        local_38 = param_4;
        pvVar4 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            WrapArray<shared_ptr<render::RenderTargets>>::operator[](param_1, 0);
        lVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar4);
        if (lVar5 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderTargetsInOut[0u].get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      125, (char*)0);
        }
        cVar2 = IsPowerOfTwo(local_38);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsPowerOfTwo(sizeDivider)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      128, (char*)0);
        }
        psVar6 =
            (shared_ptr<render::RenderTargets>*)WrapArray<shared_ptr<render::RenderTargets>>::operator[](param_1, 0);
        pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar6);
        this_00 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar7->GetColourTargetTextures();
        puVar8 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_00, 0);
        puVar9 = (uint*)(*puVar8)->second();
        local_34 = *puVar9;
        uVar14 = puVar9[1];
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
        new (&local_b8) render::Texture::Desc();
        psVar6 =
            (shared_ptr<render::RenderTargets>*)WrapArray<shared_ptr<render::RenderTargets>>::operator[](param_1, 0);
        pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar6);
        lVar5 = pRVar7->GetDepthStencilTargetTexture();
        if (lVar5 != 0) {
            psVar6 = (shared_ptr<render::RenderTargets>*)WrapArray<shared_ptr<render::RenderTargets>>::operator[](
                param_1, 0);
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(psVar6);
            this_01 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    pRVar7->GetDepthStencilTargetTexture();
            puVar8 = (undefined8*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
            local_b8._0_8_ = *puVar8;
            local_b8._8_8_ = puVar8[1];
            local_b8._16_8_ = puVar8[2];
            local_b8._24_8_ = puVar8[3];
            local_b8._32_8_ = puVar8[4];
            local_b8._40_8_ = puVar8[5];
            local_b8.field_48 = puVar8[6];
            local_b8._56_8_ = puVar8[7];
        }
        cVar2 = IsPowerOfTwo(local_34);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsPowerOfTwo(colourTargetDesc.m_Width)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      139, (char*)0);
        }
        cVar2 = IsPowerOfTwo(uVar14);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsPowerOfTwo(colourTargetDesc.m_Height)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      140, (char*)0);
        }
        cVar2 = IsPowerOfTwo(local_b8.field_0);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsPowerOfTwo(depthTargetDesc.m_Width)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      141, (char*)0);
        }
        cVar2 = IsPowerOfTwo(local_b8.field_4);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsPowerOfTwo(depthTargetDesc.m_Height)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/LuminanceFilterCommon.cpp",
                      142, (char*)0);
        }
        uVar10 = param_1->HeapBeginPtr();
        uVar13 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (1 < uVar10) {
            uVar13 = 1;
            uVar10 = 1;
            local_48 = param_1;
            do {
                uVar1 = local_38;
                local_3c = (uint)uVar13;
                local_188[0] = 1;
                local_70[0] = local_34 / local_38;
                local_40 = uVar14;
                puVar9 = std::max<unsigned int>((uint*)local_188, local_70);
                uVar3 = *puVar9;
                local_188[0] = 1;
                local_70[0] = local_40 / uVar1;
                puVar9 = std::max<unsigned int>((uint*)local_188, local_70);
                uVar14 = *puVar9;
                local_b8.field_4 = uVar14;
                local_b8.field_0 = uVar3;
                local_34 = uVar3;
                new (local_70) eastl::basic_string<char, BucketAllocatorEASTL>("%s%d", local_58, uVar10);
                new (local_188) std::array<render::Texture::Desc, 2ul>();
                puVar9 = (uint*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_188);
                *puVar9 = local_34;
                puVar9[1] = uVar14;
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
                uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_108.Register(local_50, uVar11, 3553, local_188, 1, &local_b8, 0, 1);
                this = local_48;
                psVar6 = (shared_ptr<render::RenderTargets>*)WrapArray<shared_ptr<render::RenderTargets>>::operator[](
                    local_48, uVar10);
                shared_ptr<render::RenderTargets>::operator=(psVar6, (shared_ptr*)&local_108);
                local_108.~shared_ptr();
                pvVar4 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    WrapArray<shared_ptr<render::RenderTargets>>::operator[](this, uVar10);
                lVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar4);
                local_70->~basic_string();
                uVar3 = local_3c & lVar5 != 0;
                uVar13 = (ulong)uVar3;
                if (uVar3 == 0)
                    break;
                uVar10 = uVar10 + 1;
                uVar12 = local_48->HeapBeginPtr();
            } while (uVar10 < uVar12);
        }
        return uVar13 & 4294967295;
    }

    // 0x1009b8ff0, 336 bytes, placed by __FILE__ string
    // DebugGetLuminance(render::RenderContext&, LuminanceShaderOutputFormat, render::RenderTargets&, bool)
    float DebugGetLuminance(undefined8 param_1, int param_2, RenderTargets* param_3, char param_4) {
        uint uVar1;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this;
        undefined8* puVar2;
        uint* puVar3;
        char cVar4;
        uint local_38;
        float local_34;

        this = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                   param_3->GetColourTargetTextures();
        puVar2 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this,
                                                                                                                 0);
        puVar3 = (uint*)(*puVar2)->second();
        cVar4 = (puVar3[3] != 7) * '\x04' + '\a';
        uVar1 = render::GetFormatByteCount(cVar4);
        if (param_2 == 2) {
            local_38 = 0;
            if (4 < uVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("sizeof(pixelData) >= imageSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "filters/LuminanceFilterCommon.cpp",
                          189, (char*)0);
            }
            render::RenderContext::ReadColourTargetData(param_1, param_3, &local_38, cVar4, 0, 0, *puVar3 >> 1,
                                                        puVar3[1] >> 1, 1, 1);
            ReorderToBE<int>((int*)&local_38);
            local_34 = (float)UnpackUtils::UnpackModPack(local_38);
            if (param_4 == '\0') {
                local_34 = local_34 * 32.0 + -16.0;
            }
        } else {
            local_34 = -1.0;
            if (4 < uVar1) {
                /* WARNING: Subroutine does not return */
                LogAssert("sizeof(pixelData) >= imageSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "filters/LuminanceFilterCommon.cpp",
                          207, (char*)0);
            }
            render::RenderContext::ReadColourTargetData(param_1, param_3, &local_34, cVar4, 0, 0, *puVar3 >> 1,
                                                        puVar3[1] >> 1, 1, 1);
        }
        return local_34;
    }

} // namespace jag::postprocess::luminance
