// libs/graphics/graphicutils/createtexture/CreateHALTexture3D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    // 0x100bb7830, 1040 bytes, placed by debug map only (low confidence)
    // CreateHALTexture3D(unsigned int, unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned int, bool, bool, bool, render::TextureFormatBitSet)
    graphicutils* CreateHALTexture3D(uint param_1, uint param_2, uint param_3, uchar* param_4, uint param_5,
                                     uint param_6, bool param_7, bool param_8, bool param_9,
                                     TextureFormatBitSet param_10) {
        undefined4 uVar1;
        undefined4 uVar2;
        graphicutils* this_00;
        char cVar3;
        int iVar4;
        MapArea* pMVar5;
        long lVar6;
        RenderDeviceCaps* pRVar7;
        long* plVar8;
        long* plVar9;
        Texture3D* this_01;
        ResourceDataT* pRVar10;
        undefined8 uVar11;
        Singleton<render::RenderDevice>* pSVar12;
        graphicutils* pgVar13;
        uint uVar14;
        undefined1 local_230[72];
        graphicutils* local_1e8;
        fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator> local_1e0[424];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_230._64_8_ = param_4;
        local_1e8 = this;
        pMVar5 = (MapArea*)Instance();
        lVar6 = pMVar5->GetOrigin();
        if (*(char*)(lVar6 + 165) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetDeviceCaps().m_3DTextures",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture3D.cpp",
                      27,
                      "We can\'t load a texture as a volume texture because hardware 3d textures are not supported");
        }
        new (local_230) render::Texture::Desc();
        local_230._12_4_ = 0;
        local_230[32] = param_7 && param_5 == 1;
        local_230._0_4_ = param_1;
        local_230._4_4_ = param_2;
        local_230._8_4_ = param_3;
        local_230._24_4_ = param_5;
        cVar3 = param_10.HasFormatType(0);
        iVar4 = 24;
        if (cVar3 == '\0') {
            cVar3 = param_10.HasFormatType(1);
            iVar4 = 26;
            if (cVar3 == '\0') {
                cVar3 = param_10.HasFormatType(2);
                iVar4 = 30;
                if (cVar3 == '\0') {
                    cVar3 = param_10.HasFormatType(4);
                    iVar4 = 16;
                    if (cVar3 == '\0') {
                        cVar3 = param_10.HasFormatType(5);
                        iVar4 = 7;
                        if (cVar3 == '\0') {
                            pSVar12 = (Singleton<render::RenderDevice>*)&param_10;
                            cVar3 = pSVar12->HasFormatType(3);
                            if (cVar3 == '\0')
                                goto LAB_100bb7994;
                            pMVar5 = (MapArea*)pSVar12->Instance();
                            pRVar7 = (RenderDeviceCaps*)pMVar5->GetOrigin();
                            iVar4 = render::GetAlpha8TextureFormat(pRVar7);
                        }
                    }
                }
            }
        }
        local_230._12_4_ = iVar4;
    LAB_100bb7994:
        pSVar12 = (Singleton<render::RenderDevice>*)&param_10;
        cVar3 = pSVar12->HasFormatType(7);
        if (cVar3 != '\0') {
            pMVar5 = (MapArea*)pSVar12->Instance();
            lVar6 = pMVar5->GetOrigin();
            if (*(char*)(lVar6 + 147) != '\0') {
                local_230._12_4_ = render::GetSRGBFormat(local_230._12_4_);
            }
        }
        if (local_230._12_4_ == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureDesc.m_Format != FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture3D.cpp",
                      69, (char*)0);
        }
        eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator>::fixed_vector(
            local_1e0);
        if (param_5 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dataMipLevels > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture3D.cpp",
                      75, (char*)0);
        }
        local_1e0->resize((ulong)param_5);
        plVar8 = (long*)local_1e0->HeapBeginPtr();
        plVar9 = (long*)local_1e0->end();
        if (plVar8 != plVar9) {
            uVar14 = 0;
            do {
                *plVar8 = (long)(local_230._64_8_ + (ulong)uVar14);
                iVar4 = render::GetImageByteSize(param_1, param_2, local_230._12_4_, 0);
                uVar14 = uVar14 + iVar4;
                param_1 = (int)param_1 / 2;
                param_2 = (int)param_2 / 2;
                plVar8 = plVar8 + 3;
            } while (plVar8 != plVar9);
        }
        this_00 = local_1e8;
        make_shared<render::Texture3D, char const(&)[32]>((jag*)local_1e8, "TextureManager GetHALTexture 3D");
        this_01 = (Texture3D*)shared_ptr<render::Texture3D>::operator->((shared_ptr<render::Texture3D>*)this_00);
        pRVar10 = (ResourceDataT*)local_1e0->HeapBeginPtr();
        cVar3 = this_01->Create(local_230, pRVar10);
        if (cVar3 != '\0') {
            if (param_8) {
                if (param_9) {
                    pgVar13 = this_00;
                    plVar8 = (long*)shared_ptr<render::Texture3D>::operator->((shared_ptr<render::Texture3D>*)this_00);
                    lVar6 = pgVar13->Instance();
                    (**(code**)(*plVar8 + 24))(plVar8, lVar6 + 336, 0);
                } else {
                    pgVar13 = this_00;
                    plVar8 = (long*)shared_ptr<render::Texture3D>::operator->((shared_ptr<render::Texture3D>*)this_00);
                    lVar6 = pgVar13->Instance();
                    (**(code**)(*plVar8 + 24))(plVar8, lVar6 + 208, 0);
                }
            } else if (param_9) {
                pgVar13 = this_00;
                plVar8 = (long*)shared_ptr<render::Texture3D>::operator->((shared_ptr<render::Texture3D>*)this_00);
                lVar6 = pgVar13->Instance();
                (**(code**)(*plVar8 + 24))(plVar8, lVar6 + 144, 0);
            } else {
                pgVar13 = this_00;
                plVar8 = (long*)shared_ptr<render::Texture3D>::operator->((shared_ptr<render::Texture3D>*)this_00);
                lVar6 = pgVar13->Instance();
                (**(code**)(*plVar8 + 24))(plVar8, lVar6 + 80, 0);
            }
            if (cVar3 != '\0') {
                eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true,
                                    eastl::allocator>::~fixed_vector(local_1e0);
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return this_00;
            }
        }
        uVar2 = local_230._4_4_;
        uVar1 = local_230._0_4_;
        uVar11 = render::GetFormatName(local_230._12_4_);
        /* WARNING: Subroutine does not return */
        LogAssert("success",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                  "createtexture/CreateHALTexture3D.cpp",
                  123, "Failed to create 3D texture %ux%u %s", (ulong)(uint)uVar1, (ulong)(uint)uVar2, uVar11);
    }

} // namespace jag::graphicutils
