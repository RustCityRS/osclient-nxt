// libs/graphics/graphicutils/createtexture/CreateHALTexture2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

#include "CreateHALTexture2D.h"

namespace jag::graphicutils {
    // 0x100bb7270
    void LoadPackedPNGIntoTexture2D(render::Texture2D& texture2D, const unsigned char* arg2, unsigned long arg3,
                                    bool arg4) {
        RGBAImage local_90;
        PacketView local_d0(arg2, arg3);
        PNGDecoder::LoadFromPacket(local_90, local_d0);
        if (arg4) {
            local_90.FlipVertical();
        }
        unsigned int arg2_00 = local_90.GetX();
        unsigned int arg3_00 = local_90.GetZ();
        auto array = local_90.GetDevCredentialsOutputDirectory();
        auto arg4_00 = array->data();
        int iVar1 = local_90.GetX();
        int iVar2 = local_90.GetZ();
        uint32_t local_9c = 5;
        TextureFormatBitSet local_98(&local_9c);
        CreateHALTexture2D<render::Texture2D>(texture2D, arg2_00, arg3_00, arg4_00, 1, iVar1 * iVar2 * 4, false, true,
                                              true, local_98[0], 0);
    }

    // 0x100bb7410
    bool CreateHALTexture2D<render::Texture2D>(render::Texture2D& texture2D, unsigned int arg2, unsigned int arg3,
                                               const unsigned char* arg4, unsigned int arg5, unsigned int arg6,
                                               bool arg7, bool arg8, bool arg9,
                                               render::TextureFormatBitSet textureFormatBitSet, unsigned int arg11) {
        char cVar4;
        MapArea* pMVar7;
        long lVar8;
        long* plVar9;
        long* plVar10;
        ResourceDataT<unsigned char const>* resourceData;
        unsigned int uVar12;
        Singleton<render::RenderDevice>* pSVar13;
        Texture2D texture2D;
        unsigned long uVar14;
        uint8_t local_230[76];
        fixed_vector<render::ResourceDataT<unsigned char const>, 16ul> local_1e0;

        local_230._64_8_ = arg4;
        bool cVar3 = texture2D.IsCreated();
        if (cVar3) {
            LogAssert("!textureOut.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture2D.h",
                      21, nullptr);
        }
        new (local_230) render::Texture::Desc();
        local_230._12_4_ = 0;
        local_230._28_4_ = arg11;
        local_230[32] = arg7;
        local_230._0_4_ = arg2;
        local_230._4_4_ = arg3;
        local_230._24_4_ = arg5;
        cVar3 = textureFormatBitSet.HasFormatType(0);
        Format FVar5 = 24;
        if (!cVar3) {
            cVar3 = textureFormatBitSet.HasFormatType(1);
            FVar5 = 26;
            if (!cVar3) {
                cVar3 = textureFormatBitSet.HasFormatType(2);
                FVar5 = 30;
                if (!cVar3) {
                    cVar3 = textureFormatBitSet.HasFormatType(4);
                    FVar5 = 16;
                    if (!cVar3) {
                        cVar3 = textureFormatBitSet.HasFormatType(5);
                        FVar5 = 7;
                        if (!cVar3) {
                            pSVar13 = (Singleton<render::RenderDevice>*)&textureFormatBitSet;
                            cVar3 = pSVar13->HasFormatType(3);
                            if (!cVar3)
                                goto LAB_100bb755b;
                            pMVar7 = (MapArea*)pSVar13->Instance();
                            FVar5 = render::GetAlpha8TextureFormat(*((RenderDeviceCaps*)pMVar7->GetOrigin()));
                        }
                    }
                }
            }
        }
        local_230._12_4_ = FVar5;
    LAB_100bb755b:
        pSVar13 = (Singleton<render::RenderDevice>*)&textureFormatBitSet;
        cVar3 = pSVar13->HasFormatType(7);
        if (cVar3) {
            pMVar7 = (MapArea*)pSVar13->Instance();
            lVar8 = pMVar7->GetOrigin();
            if ((*(char*)(lVar8 + 147) != '\0') && (FVar5 = render::GetSRGBFormat(local_230._12_4_), FVar5 != 0)) {
                local_230._12_4_ = FVar5;
            }
        }
        if (local_230._12_4_ == 0) {
            LogAssert("textureDesc.m_Format != render::FORMAT_UNKNOWN",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createtexture/CreateHALTexture2D.h",
                      67, nullptr);
        }
        if ((unsigned char*)local_230._64_8_ == nullptr) {
            texture2D = texture2D;
            cVar3 = texture2D.Create(*local_230, nullptr, 0);
        } else {
            local_1e0 = eastl::fixed_vector<render::ResourceDataT<unsigned char const>, 16ul>();
            if (arg5 == 0) {
                LogAssert("dataMipLevels > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                          "createtexture/CreateHALTexture2D.h",
                          76, nullptr);
            }
            local_1e0.resize((unsigned long)arg5);
            plVar9 = (long*)local_1e0.HeapBeginPtr();
            plVar10 = (long*)local_1e0.end();
            if (plVar9 == plVar10) {
                uVar12 = 0;
            } else {
                uVar14 = 0;
                do {
                    *plVar9 = (long)(local_230._64_8_ + uVar14);
                    uVar12 = render::GetImageByteSize(arg2, arg3, local_230._12_4_, 0) + (int)uVar14;
                    arg2 = (int)arg2 / 2;
                    arg3 = (int)arg3 / 2;
                    plVar9 = plVar9 + 3;
                    uVar14 = (unsigned long)uVar12;
                } while (plVar9 != plVar10);
            }
            if (((arg7) && (local_230._24_4_ != 1)) && (arg6 < uVar12)) {
                LogAssert("!hasMipLevels || textureDesc.m_DataMipLevels == 1 || totalMipImageSize <= byteLength",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                          "createtexture/CreateHALTexture2D.h",
                          93, nullptr);
            }
            resourceData = (ResourceDataT<unsigned char const>*)local_1e0.HeapBeginPtr();
            cVar3 = texture2D.Create(*local_230, resourceData, arg6);
            texture2D = &local_1e0;
            texture2D.~fixed_vector();
        }
        if (cVar3) {
            cVar4 = texture2D.Instance();
            if (arg8) {
                if (arg9) {
                    cVar4 = cVar4 + 'P';
                } else {
                    cVar4 = cVar4 - 48;
                }
            } else if (arg9) {
                cVar4 = cVar4 - 112;
            } else {
                cVar4 = cVar4 + 'P';
            }
            (texture2D._vptr->SetSamplerState)((SamplerState*)texture2D, (bool)cVar4);
            if (cVar3) {
                return (bool)cVar3;
            }
        }
        uint32_t uVar2 = local_230._4_4_;
        uint32_t uVar1 = local_230._0_4_;
        uint64_t uVar11 = render::GetFormatName(local_230._12_4_);
        LogAssert("success",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                  "createtexture/CreateHALTexture2D.h",
                  130, "Failed to create 2d texture %ux%u %s", (unsigned long)(unsigned int)uVar1,
                  (unsigned long)(unsigned int)uVar2, uVar11);
    }

} // namespace jag::graphicutils
