// libs/graphics/graphicutils/createtexture/CreateHALTexture2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

#include "CreateHALTexture2D.h"

namespace jag::graphicutils {
    // 0x100bb7270, 416 bytes, placed by debug map only (low confidence)
    // LoadPackedPNGIntoTexture2D(render::Texture2D&, unsigned char const*, unsigned long, bool)
    void LoadPackedPNGIntoTexture2D(Texture2D* param_1, uchar* param_2, ulong param_3, bool param_4) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this;
        uchar* puVar5;
        PacketView local_d0;
        Texture2D* local_a8;
        undefined4 local_9c;
        TextureFormatBitSet local_98[2];
        RGBAImage local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_90) RGBAImage();
        new (&local_d0) PacketView(param_2, param_3);
        local_a8 = param_1;
        PNGDecoder::LoadFromPacket(&local_90, &local_d0);
        if (param_4) {
            local_90.FlipVertical();
        }
        uVar1 = local_90.GetX();
        uVar2 = local_90.GetZ();
        this =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)local_90.GetDevCredentialsOutputDirectory();
        puVar5 = (uchar*)data();
        iVar3 = local_90.GetX();
        iVar4 = local_90.GetZ();
        local_9c = 5;
        render::TextureFormatBitSet::TextureFormatBitSet(local_98, &local_9c, 1);
        CreateHALTexture2D<render::Texture2D>(local_a8, uVar1, uVar2, puVar5, 1, iVar3 * iVar4 * 4, false, true, true,
                                              local_98[0], 0);
        local_d0.~PacketView();
        local_90.~RGBAImage();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bb7410, 1040 bytes, inline, placed by debug map only (low confidence)
    // bool CreateHALTexture2D<render::Texture2D>(render::Texture2D&, unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned int, bool, bool, bool, render::TextureFormatBitSet, unsigned int)
    bool CreateHALTexture2D<render::Texture2D>(Texture2D* param_1, uint param_2, uint param_3, uchar* param_4,
                                               uint param_5, uint param_6, bool param_7, bool param_8, bool param_9,
                                               TextureFormatBitSet param_10, uint param_11) {
        undefined4 uVar1;
        undefined4 uVar2;
        uint uVar3;
        char cVar4;
        int iVar5;
        MapArea* pMVar6;
        RenderDeviceCaps* pRVar7;
        long lVar8;
        long* plVar9;
        long* plVar10;
        ResourceDataT* pRVar11;
        undefined8 uVar12;
        uint uVar13;
        Singleton<render::RenderDevice>* pSVar14;
        Texture2D* this;
        ulong uVar15;
        undefined1 local_230[76];
        uint local_1e4;
        fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator> local_1e0[424];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_230._64_8_ = param_4;
        local_1e4 = param_6;
        cVar4 = param_1->IsCreated();
        if (cVar4 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!textureOut.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture2D.h",
                      21, (char*)0);
        }
        new (local_230) render::Texture::Desc();
        local_230._12_4_ = 0;
        local_230._28_4_ = param_11;
        local_230[32] = param_7;
        local_230._0_4_ = param_2;
        local_230._4_4_ = param_3;
        local_230._24_4_ = param_5;
        cVar4 = param_10.HasFormatType(0);
        iVar5 = 24;
        if (cVar4 == '\0') {
            cVar4 = param_10.HasFormatType(1);
            iVar5 = 26;
            if (cVar4 == '\0') {
                cVar4 = param_10.HasFormatType(2);
                iVar5 = 30;
                if (cVar4 == '\0') {
                    cVar4 = param_10.HasFormatType(4);
                    iVar5 = 16;
                    if (cVar4 == '\0') {
                        cVar4 = param_10.HasFormatType(5);
                        iVar5 = 7;
                        if (cVar4 == '\0') {
                            pSVar14 = (Singleton<render::RenderDevice>*)&param_10;
                            cVar4 = pSVar14->HasFormatType(3);
                            if (cVar4 == '\0')
                                goto LAB_100bb755b;
                            pMVar6 = (MapArea*)pSVar14->Instance();
                            pRVar7 = (RenderDeviceCaps*)pMVar6->GetOrigin();
                            iVar5 = render::GetAlpha8TextureFormat(pRVar7);
                        }
                    }
                }
            }
        }
        local_230._12_4_ = iVar5;
    LAB_100bb755b:
        pSVar14 = (Singleton<render::RenderDevice>*)&param_10;
        cVar4 = pSVar14->HasFormatType(7);
        if (cVar4 != '\0') {
            pMVar6 = (MapArea*)pSVar14->Instance();
            lVar8 = pMVar6->GetOrigin();
            if ((*(char*)(lVar8 + 147) != '\0') && (iVar5 = render::GetSRGBFormat(local_230._12_4_), iVar5 != 0)) {
                local_230._12_4_ = iVar5;
            }
        }
        if (local_230._12_4_ == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureDesc.m_Format != render::FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture2D.h",
                      67, (char*)0);
        }
        if ((uchar*)local_230._64_8_ == (uchar*)0) {
            this = param_1;
            cVar4 = param_1->Create(local_230, 0, 0);
        } else {
            eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul, true, eastl::allocator>::fixed_vector(
                local_1e0);
            if (param_5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("dataMipLevels > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                          "createtexture/CreateHALTexture2D.h",
                          76, (char*)0);
            }
            local_1e0->resize((ulong)param_5);
            plVar9 = (long*)local_1e0->HeapBeginPtr();
            plVar10 = (long*)local_1e0->end();
            if (plVar9 == plVar10) {
                uVar13 = 0;
            } else {
                uVar15 = 0;
                do {
                    *plVar9 = (long)(local_230._64_8_ + uVar15);
                    iVar5 = render::GetImageByteSize(param_2, param_3, local_230._12_4_, 0);
                    uVar13 = iVar5 + (int)uVar15;
                    param_2 = (int)param_2 / 2;
                    param_3 = (int)param_3 / 2;
                    plVar9 = plVar9 + 3;
                    uVar15 = (ulong)uVar13;
                } while (plVar9 != plVar10);
            }
            uVar3 = local_1e4;
            if (((param_7) && (local_230._24_4_ != 1)) && (local_1e4 < uVar13)) {
                /* WARNING: Subroutine does not return */
                LogAssert("!hasMipLevels || textureDesc.m_DataMipLevels == 1 || totalMipImageSize <= byteLength",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                          "createtexture/CreateHALTexture2D.h",
                          93, (char*)0);
            }
            pRVar11 = (ResourceDataT*)local_1e0->HeapBeginPtr();
            cVar4 = param_1->Create(local_230, pRVar11, uVar3);
            this = (Texture2D*)local_1e0;
            ~fixed_vector();
        }
        if (cVar4 != '\0') {
            lVar8 = Instance();
            if (param_8) {
                if (param_9) {
                    lVar8 = lVar8 + 336;
                } else {
                    lVar8 = lVar8 + 208;
                }
            } else if (param_9) {
                lVar8 = lVar8 + 144;
            } else {
                lVar8 = lVar8 + 80;
            }
            (*(code*)param_1->field_0[3])(param_1, lVar8, 0);
            if (cVar4 != '\0') {
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return (bool)cVar4;
            }
        }
        uVar2 = local_230._4_4_;
        uVar1 = local_230._0_4_;
        uVar12 = render::GetFormatName(local_230._12_4_);
        /* WARNING: Subroutine does not return */
        LogAssert("success",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                  "createtexture/CreateHALTexture2D.h",
                  130, "Failed to create 2d texture %ux%u %s", (ulong)(uint)uVar1, (ulong)(uint)uVar2, uVar12);
    }

} // namespace jag::graphicutils
