// libs/graphics/graphicutils/createtexture/CreateHALTexture3D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb7830
    ReturnValue* CreateHALTexture3D(unsigned int arg1, unsigned int arg2, unsigned int arg3, const unsigned char* arg4,
                                    unsigned int arg5, unsigned int arg6, bool arg7, bool arg8, bool arg9,
                                    render::TextureFormatBitSet textureFormatBitSet) {
        int iVar5;
        uint32_t in_register_0000003c;
        Singleton<render::RenderDevice>* pSVar11;
        ReturnValue* pRVar12;
        uint32_t in_register_00000084;
        unsigned int uVar13;
        TextureFormatBitSet TStack0000000000000028;
        uint8_t local_230[72];

        local_230._64_8_ = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg5);
        ReturnValue* local_1e8 = (ReturnValue*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        auto pMVar6 = local_1e8->Instance();
        long lVar7 = pMVar6->GetOrigin();
        if (*(char*)(lVar7 + 165) == '\0') {
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_3DTextures",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture3D.cpp",
                      27,
                      "We can\'t load a texture as a volume texture because hardware 3d textures are not supported");
        }
        new (local_230) render::Texture::Desc();
        local_230._8_4_ = (uint32_t)arg4;
        local_230._12_4_ = 0;
        local_230[32] = arg8 && arg6 == 1;
        local_230._0_4_ = arg2;
        local_230._4_4_ = arg3;
        local_230._24_4_ = arg6;
        bool cVar3 = TStack0000000000000028.HasFormatType(0);
        Format FVar4 = 24;
        if (!cVar3) {
            cVar3 = TStack0000000000000028.HasFormatType(1);
            FVar4 = 26;
            if (!cVar3) {
                cVar3 = TStack0000000000000028.HasFormatType(2);
                FVar4 = 30;
                if (!cVar3) {
                    cVar3 = TStack0000000000000028.HasFormatType(4);
                    FVar4 = 16;
                    if (!cVar3) {
                        cVar3 = TStack0000000000000028.HasFormatType(5);
                        FVar4 = 7;
                        if (!cVar3) {
                            pSVar11 = (Singleton<render::RenderDevice>*)&TStack0000000000000028;
                            cVar3 = pSVar11->HasFormatType(3);
                            if (!cVar3)
                                goto LAB_100bb7994;
                            pMVar6 = (MapArea*)pSVar11->Instance();
                            FVar4 = render::GetAlpha8TextureFormat(*((RenderDeviceCaps*)pMVar6->GetOrigin()));
                        }
                    }
                }
            }
        }
        local_230._12_4_ = FVar4;
    LAB_100bb7994:
        pSVar11 = (Singleton<render::RenderDevice>*)&TStack0000000000000028;
        cVar3 = pSVar11->HasFormatType(7);
        if (cVar3) {
            pMVar6 = (MapArea*)pSVar11->Instance();
            lVar7 = pMVar6->GetOrigin();
            if (*(char*)(lVar7 + 147) != '\0') {
                local_230._12_4_ = render::GetSRGBFormat(local_230._12_4_);
            }
        }
        if (local_230._12_4_ == 0) {
            LogAssert("textureDesc.m_Format != FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture3D.cpp",
                      69, nullptr);
        }
        fixed_vector<render::ResourceDataT<unsigned char const>, 16ul> local_1e0;
        if (arg6 == 0) {
            LogAssert("dataMipLevels > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture3D.cpp",
                      75, nullptr);
        }
        local_1e0.resize((unsigned long)arg6);
        auto plVar8 = local_1e0.HeapBeginPtr();
        auto plVar9 = local_1e0.end();
        if (plVar8 != plVar9) {
            uVar13 = 0;
            do {
                *plVar8 = (unsigned long)uVar13 + local_230._64_8_;
                iVar5 = render::GetImageByteSize(arg2, arg3, local_230._12_4_, 0);
                uVar13 = uVar13 + iVar5;
                arg2 = (int)arg2 / 2;
                arg3 = (int)arg3 / 2;
                plVar8 = plVar8 + 3;
            } while (plVar8 != plVar9);
        }
        ReturnValue* returnValue = local_1e8;
        make_shared<render::Texture3D, char const(&)[32]>(local_1e8, "TextureManager GetHALTexture 3D");
        Texture3D* this_00 = (Texture3D*)(*returnValue).operator->();
        auto resourceData = local_1e0.HeapBeginPtr();
        cVar3 = this_00->Create(*local_230, resourceData);
        if (cVar3) {
            if (arg9) {
                if ((char)textureFormatBitSet.m_bits == '\0') {
                    pRVar12 = returnValue;
                    plVar8 = (long*)(*returnValue).operator->();
                    lVar7 = pRVar12->Instance();
                    (**(void (**)(...))(*plVar8 + 24))(plVar8, lVar7 + 208, 0);
                } else {
                    pRVar12 = returnValue;
                    plVar8 = (long*)(*returnValue).operator->();
                    lVar7 = pRVar12->Instance();
                    (**(void (**)(...))(*plVar8 + 24))(plVar8, lVar7 + 336, 0);
                }
            } else if ((char)textureFormatBitSet.m_bits == '\0') {
                pRVar12 = returnValue;
                plVar8 = (long*)(*returnValue).operator->();
                lVar7 = pRVar12->Instance();
                (**(void (**)(...))(*plVar8 + 24))(plVar8, lVar7 + 80, 0);
            } else {
                pRVar12 = returnValue;
                plVar8 = (long*)(*returnValue).operator->();
                lVar7 = pRVar12->Instance();
                (**(void (**)(...))(*plVar8 + 24))(plVar8, lVar7 + 144, 0);
            }
            if (cVar3) {
                return returnValue;
            }
        }
        uint32_t uVar2 = local_230._4_4_;
        uint32_t uVar1 = local_230._0_4_;
        uint64_t uVar10 = render::GetFormatName(local_230._12_4_);
        LogAssert("success",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                  "createtexture/CreateHALTexture3D.cpp",
                  123, "Failed to create 3D texture %ux%u %s", (unsigned long)(unsigned int)uVar1,
                  (unsigned long)(unsigned int)uVar2, uVar10);
    }

} // namespace jag::graphicutils
