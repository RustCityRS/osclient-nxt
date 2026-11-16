// libs/graphics/graphicutils/createtexture/CreateHALTextureCube.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb7cc0
    ReturnValue* CreateHALTextureCube(unsigned int arg1, unsigned int arg2, const unsigned char* arg3,
                                      unsigned int arg4, unsigned int arg5, bool arg6, bool arg7,
                                      render::TextureFormatBitSet textureFormatBitSet) {
        ReturnValue* returnValue;
        unsigned int arg1_00;
        long lVar5;
        vector<render::ResourceDataT<unsigned char const>, eastl::fixed_vector_allocator<24ul, 16ul, 8ul, 0ul, true>>*
            this_01;
        long* plVar6;
        uint64_t uVar7;
        uint64_t* puVar8;
        unsigned int uVar10;
        uint32_t in_register_0000000c;
        unsigned int arg2_00;
        unsigned long uVar11;
        uint32_t in_register_0000003c;
        ReturnValue* pRVar12;
        TextureFormatBitSet TStack0000000000000018;
        array<render::ResourceDataT<unsigned char const> const*, 6ul> local_d8[48];
        uint8_t local_a8[72];
        unsigned long local_60;
        unsigned int local_3c;

        long local_48 = (((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        new (local_a8) render::Texture::Desc();
        local_a8._4_4_ = (uint32_t)arg3;
        local_a8._12_4_ = 0;
        local_a8[32] = arg7;
        local_a8._0_4_ = arg2;
        local_a8._24_4_ = arg5;
        unsigned int local_38 = local_a8._4_4_;
        bool cVar3 = TStack0000000000000018.HasFormatType(0);
        Format FVar9 = 24;
        if (!cVar3) {
            cVar3 = TStack0000000000000018.HasFormatType(2);
            FVar9 = 7;
            if (cVar3) {
                FVar9 = 30;
            }
        }
        local_a8._12_4_ = FVar9;
        cVar3 = ((TextureFormatBitSet*)(Singleton<render::RenderDevice>*)&TStack0000000000000018)->HasFormatType(7);
        if (cVar3) {
            lVar5 = ((MapArea*)TStack0000000000000018.Instance())->GetOrigin();
            if (*(char*)(lVar5 + 147) != '\0') {
                local_a8._12_4_ = render::GetSRGBFormat(local_a8._12_4_);
            }
        }
        ReturnValue* local_50 = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if (local_a8._12_4_ == 0) {
            LogAssert("textureDesc.m_Format != render::FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTextureCube.cpp",
                      55, nullptr);
        }
        array<eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul>, 6ul> local_ac8;
        if (local_48 != 0) {
            uVar11 = 0;
            uVar10 = 0;
            do {
                this_01 = &local_ac8[uVar11];
                this_01->resize((unsigned long)arg5);
                local_60 = uVar11;
                plVar6 = (long*)this_01->HeapBeginPtr();
                local_a8._64_8_ = this_01->end();
                local_3c = uVar10;
                if (plVar6 == (long*)local_a8._64_8_) {
                    uVar10 = 0;
                } else {
                    lVar5 = (unsigned long)uVar10 + local_48;
                    uVar11 = 0;
                    arg1_00 = arg2;
                    arg2_00 = local_38;
                    do {
                        *plVar6 = uVar11 + lVar5;
                        uVar10 = render::GetImageByteSize(arg1_00, arg2_00, local_a8._12_4_, 0) + (int)uVar11;
                        arg1_00 = (int)arg1_00 / 2;
                        arg2_00 = (int)arg2_00 / 2;
                        plVar6 = plVar6 + 3;
                        uVar11 = (unsigned long)uVar10;
                    } while (plVar6 != (long*)local_a8._64_8_);
                }
                uVar10 = local_3c + uVar10;
                uVar11 = local_60 + 1;
            } while (uVar11 != 6);
        }
        uVar11 = 0;
        do {
            uVar7 = ((Layout*)local_ac8[uVar11])->HeapBeginPtr();
            puVar8 = (uint64_t*)(*local_d8)[uVar11];
            returnValue = local_50;
            *puVar8 = uVar7;
            uVar11 = uVar11 + 1;
        } while (uVar11 != 6);
        make_shared<render::TextureCube, char const(&)[34]>(local_50, "TextureManager GetHALTexture Cube");
        cVar3 = ((TextureCube*)(*returnValue).operator->())->Create(*local_a8, *local_d8);
        if (cVar3) {
            if ((char)textureFormatBitSet.m_bits == '\0') {
                pRVar12 = returnValue;
                plVar6 = (long*)(*returnValue).operator->();
                lVar5 = pRVar12->Instance();
                (**(void (**)(...))(*plVar6 + 24))(plVar6, lVar5 + 80, 1);
            } else {
                pRVar12 = returnValue;
                plVar6 = (long*)(*returnValue).operator->();
                lVar5 = pRVar12->Instance();
                (**(void (**)(...))(*plVar6 + 24))(plVar6, lVar5 + 208, 1);
            }
            if (cVar3) {
                return returnValue;
            }
        }
        uint32_t uVar2 = local_a8._4_4_;
        uint32_t uVar1 = local_a8._0_4_;
        uVar7 = render::GetFormatName(local_a8._12_4_);
        LogAssert("success",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                  "createtexture/CreateHALTextureCube.cpp",
                  111, "Failed to create cube texture %ux%u %s", (unsigned long)(unsigned int)uVar1,
                  (unsigned long)(unsigned int)uVar2, uVar7);
    }

} // namespace jag::graphicutils

namespace jag {
    // 0x100bb8030
    shared_ptr_if_not_array<render::TextureCube>::type
    make_shared<render::TextureCube, char const (&)[34]>(char const (&arg1)[34]) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        TextureCube* local_30[2];

        auto arg1_00 = aligned_alloc(544, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<render::TextureCube>::type result;
        } else {
            local_30[0] = placement_new<render::TextureCube, char const(&)[34]>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<render::TextureCube>, int, render::TextureCube*&>(arg1_00, &local_34,
                                                                                                   local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
