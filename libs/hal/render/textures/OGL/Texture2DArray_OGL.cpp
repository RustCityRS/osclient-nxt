// libs/hal/render/textures/OGL/Texture2DArray_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/textures/Texture2DArray.h"

namespace jag::render {
    // 0x100bc98c0
    Texture2DArray::Texture2DArray(const char* str) : Texture(str), field_16(3553) {}

    // 0x100bc9a10
    uint32_t Texture2DArray::Create(const Texture::Desc& desc, const ResourceDataT<unsigned char const>* resourceData) {
        Format format;
        unsigned int uVar1;
        unsigned int uVar2;
        char* str1;
        char* str2;
        uint64_t uVar22;
        Singleton<RenderDevice>* this_03;
        uint64_t in_stack_ffffffffffffff28;
        Desc* local_b8;
        uint32_t local_ac;
        uint8_t local_a8[24];
        String local_90;

        uint32_t uVar19 = (uint32_t)((unsigned long)in_stack_ffffffffffffff28 >> 32);
        local_a8._16_8_ = resourceData;
        if (field_296 != 0) {
            LogAssert("m_GLTexture == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2DArray_OGL.cpp",
                      24, "Call Destroy() before calling Create() again");
        }
        auto pMVar20 = Instance();
        long lVar21 = pMVar20->GetOrigin();
        TextureType textureType = 35866;
        if (1 < (unsigned int)desc.field_16) {
            textureType = 37122;
        }
        ImmediateRenderContext* immediateRenderContext =
            (((RenderDevice*)pMVar20->Instance())->GetCurrentThreadRenderContext())->GetImmediateContext();
        ActiveTextureSaveRestore local_c8(*immediateRenderContext);
        GenerateBindTextures(textureType);
        char cVar18 = field_96.empty();
        if (!cVar18) {
            local_ac = field_296;
            str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b8 = desc;
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            desc = local_b8;
            local_90 = Instrumentation::String(str1, str2);
            5890->~AutoSingleton();
        }
        int iVar14 = desc.field_0;
        int iVar15 = desc.field_4;
        int iVar16 = desc.field_8;
        int iVar17 = desc.field_12;
        uint32_t uVar11 = desc.field_16;
        int iVar3 = desc.field_20;
        int iVar12 = desc.field_24;
        int iVar13 = desc.field_28;
        uint8_t uVar6 = desc.field_32;
        uint32_t uVar7 = *(uint32_t*)&desc.field_33;
        uint32_t uVar8 = desc.field_36;
        uint8_t uVar9 = desc.field_40;
        uint64_t uVar10 = *(uint64_t*)&desc.field_41;
        cVar18 = desc.field_56;
        uint32_t uVar4 = *(uint32_t*)&desc.field_57;
        uint32_t uVar5 = desc.field_60;
        *(uint64_t*)&field_72 = desc.field_48;
        field_80 = cVar18;
        *(uint32_t*)&field_81 = uVar4;
        *(uint32_t*)&field_84 = uVar5;
        field_56 = uVar6;
        *(uint32_t*)&field_57 = uVar7;
        *(uint32_t*)&field_60 = uVar8;
        field_64 = uVar9;
        *(uint64_t*)&field_65 = uVar10;
        *(uint32_t*)&field_40 = uVar11;
        *(int*)&field_44 = iVar3;
        field_48 = iVar12;
        *(int*)&field_52 = iVar13;
        field_24 = iVar14;
        field_28 = iVar15;
        field_32 = iVar16;
        field_36 = iVar17;
        SetFaceMipLevels(desc);
        new (local_a8) GLFormat(desc.field_12);
        if ((unsigned int)desc.field_16 < 2) {
            if (*(char*)(lVar21 + 330) == '\0') {
                format = desc.field_12;
                cVar18 = IsCompressedFormat(format);
                if (!cVar18) {
                    if ((ResourceDataT<unsigned char const>*)local_a8._16_8_ == nullptr) {
                        uVar22 = 0;
                    } else {
                        uVar22 = *(uint64_t*)local_a8._16_8_;
                    }
                    (*___glewTexImage3D)(textureType, desc.field_36, local_a8._0_4_, desc.field_0, desc.field_4,
                                         desc.field_8, 0, local_a8._4_4_,
                                         (((uint64_t)uVar19 << 32) | (uint32_t)local_a8._8_4_), uVar22);
                    CheckGlErrorInternal("glTexImage3D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         139);
                } else {
                    uVar19 = GetImageByteSize(desc.field_0, desc.field_4, format, 0);
                    if ((ResourceDataT<unsigned char const>*)local_a8._16_8_ == nullptr) {
                        uVar22 = 0;
                    } else {
                        uVar22 = *(uint64_t*)local_a8._16_8_;
                    }
                    (*___glewCompressedTexImage3D)(textureType, desc.field_36, local_a8._0_4_, desc.field_0,
                                                   desc.field_4, desc.field_8, 0, uVar19, uVar22);
                    CheckGlErrorInternal("glCompressedTexImage3D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         124);
                }
            } else {
                if (local_a8._12_4_ == 0) {
                    local_a8._12_4_ = local_a8._0_4_;
                }
                (*___glewTexStorage3D)(textureType, field_88, local_a8._12_4_, desc.field_0, desc.field_4,
                                       desc.field_8);
                CheckGlErrorInternal("glTexStorage3D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2DArray_OGL.cpp",
                                     102);
                if (((ResourceDataT<unsigned char const>*)local_a8._16_8_ != nullptr) &&
                    (*(void**)local_a8._16_8_ != nullptr)) {
                    Update(0, 0, 0, 0, desc.field_0, desc.field_4, desc.field_8, desc.field_12,
                           *(void**)local_a8._16_8_);
                }
            }
            uVar1 = field_88;
            uVar2 = desc.field_24;
            if ((1 < uVar1) && (uVar2 < 2)) {
                this_03 = (Singleton<RenderDevice>*)(unsigned long)(unsigned int)desc.field_12;
                cVar18 = IsCompressedFormat(desc.field_12);
                if (!cVar18) {
                    pMVar20 = (MapArea*)this_03->Instance();
                    lVar21 = pMVar20->GetOrigin();
                    if (*(char*)(lVar21 + 336) == '\0') {
                        (logger::default_logger())
                            ->Log(false, 3,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/Texture2DArray_OGL.cpp",
                                  157, "Auto-generating mips isn\'t supported on this device. Disabling mips.");
                        field_88 = 1;
                        iVar3 = field_16;
                        goto joined_r0x000100bc9f81;
                    }
                    (*___glewGenerateMipmap)(textureType);
                    CheckGlErrorInternal("glGenerateMipmap",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         153);
                    goto LAB_100bc9e8a;
                }
            }
            if (1 < uVar1) {
                if (uVar2 < 2) {
                    LogAssert("textureDesc.m_DataMipLevels > 1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2DArray_OGL.cpp",
                              163, nullptr);
                }
                CreateSubLevelMips(desc.field_24, local_a8._16_8_);
            }
        } else {
            if (*(char*)(lVar21 + 167) == '\0') {
                LogAssert("deviceCaps.m_MultisampleTextures == true",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2DArray_OGL.cpp",
                          57, nullptr);
            }
            if (*(char*)(lVar21 + 331) == '\0') {
                (*___glewTexImage3DMultisample)(textureType, desc.field_16, local_a8._0_4_, desc.field_0, desc.field_4,
                                                desc.field_8, 1);
                CheckGlErrorInternal("glTexImage3DMultisample",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2DArray_OGL.cpp",
                                     87);
            } else {
                (*___glewTexStorage3DMultisample)(textureType, desc.field_16, local_a8._0_4_, desc.field_0,
                                                  desc.field_4, desc.field_8, 1);
                CheckGlErrorInternal("glTexStorage3DMultisample",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2DArray_OGL.cpp",
                                     75);
            }
        }
    LAB_100bc9e8a:
        iVar3 = field_16;
    joined_r0x000100bc9f81:
        if ((iVar3 == 37120) && (field_88 != 1)) {
            LogAssert("m_faceMipLevels == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2DArray_OGL.cpp",
                      172, "Multisample textures only support 1 mip level");
        }
        uVar19 = FinaliseCreate("Texture2DArray", desc);
        return uVar19;
    }

    // 0x100bca160
    void Texture2DArray::Update(unsigned int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                Format format, const void* arg9) {
        int iVar2;
        uint32_t uVar3;
        RenderDevice* pRVar5;
        RenderContext* pRVar6;
        ImmediateRenderContext* pIVar7;
        uint8_t* pbVar8;
        long lVar9;
        unique_lock<std::mutex>* this_01;
        Singleton<RenderDevice>* this_03;
        ActiveTextureSaveRestore local_78;
        unique_lock<std::mutex> local_68;
        GLFormat local_58;
        int local_44[3];

        local_44[2] = arg4;
        if (arg9 == nullptr) {
            LogAssert("pSrcTexelData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2DArray_OGL.cpp",
                      191, nullptr);
        }
        auto pTVar4 = GetNativeTextureId();
        if ((int)pTVar4 != 0) {
            iVar2 = GetMaxLineWidth();
            if (iVar2 != -1) {
                pTVar4 = (Texture*)this;
                ValidateUpdateParams(arg1, arg2, (unsigned int)arg3, local_44[2], (unsigned int)arg5, arg6, arg7);
                if (!(pTVar4->UseGLWriteMutex())) {
                    this_01 = &local_68;
                    new (this_01) std::unique_lock<std::mutex>();
                } else {
                    this_01 = &local_68;
                    new (this_01) std::unique_lock<std::mutex>(field_368);
                }
                pRVar5 = (RenderDevice*)this_01->Instance();
                pRVar6 = pRVar5->GetCurrentThreadRenderContext();
                pIVar7 = pRVar6->GetImmediateContext();
                local_78 = ActiveTextureSaveRestore(*pIVar7);
                pRVar5 = (RenderDevice*)local_78.Instance();
                pRVar6 = pRVar5->GetCurrentThreadRenderContext();
                pIVar7 = pRVar6->GetImmediateContext();
                pIVar7->BindTexture(*this, 0);
                local_58 = GLFormat(format);
                if (!(IsCompressedFormat(field_36))) {
                    this_03 = (Singleton<RenderDevice>*)(unsigned long)format;
                    iVar2 = GetFormatDepthBits(format);
                    if (iVar2 != 0) {
                        lVar9 = ((MapArea*)this_03->Instance())->GetOrigin();
                        if (*(char*)(lVar9 + 152) == '\0') {
                            LogAssert("GetFormatDepthBits(format) == 0 || "
                                      "RenderDevice::Instance().GetDeviceCaps().m_DepthTextureLoad",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture2DArray_OGL.cpp",
                                      222, nullptr);
                        }
                    }
                    (*___glewTexSubImage3D)(field_16, arg1, arg2, (unsigned int)arg3, local_44[2], (unsigned int)arg5,
                                            arg6, arg7, local_58.field_0._4_4_, local_58.field_0._8_4_, arg9);
                    CheckGlErrorInternal("glTexSubImage3D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         232);
                LAB_100bca41a:
                    return;
                }
                if (((arg2 | (unsigned int)arg3) & 3) != 0) {
                    LogAssert("x % 4 == 0 && y % 4 == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2DArray_OGL.cpp",
                              206, nullptr);
                }
                local_44[0] = 4;
                pbVar8 = (uint8_t*)std::max<int>((unsigned int)arg5, *local_44);
                if ((*pbVar8 & 3) == 0) {
                    local_44[1] = 4;
                    pbVar8 = (uint8_t*)std::max<int>(arg6, *(local_44 + 1));
                    if ((*pbVar8 & 3) == 0) {
                        uVar3 = GetImageByteSize((unsigned int)arg5, arg6, format, arg1);
                        (*___glewCompressedTexSubImage3D)(field_16, arg1, arg2, (unsigned int)arg3, local_44[2],
                                                          (unsigned int)arg5, arg6, arg7, local_58.field_0._0_4_, uVar3,
                                                          arg9);
                        CheckGlErrorInternal("glCompressedTexSubImage3D",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture2DArray_OGL.cpp",
                                             218);
                        goto LAB_100bca41a;
                    }
                }
                LogAssert("std::max(width, 4) % 4 == 0 && std::max(height, 4) % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2DArray_OGL.cpp",
                          207, nullptr);
            }
        }
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture2DArray_OGL.cpp",
                  192, nullptr);
    }

    // 0x100bca470
    void Texture2DArray::CreateSubLevelMips(unsigned int arg1, const ResourceDataT<unsigned char const>* resourceData) {
        int iVar2;
        char* str1;
        void* arg9;
        unsigned int arg2;
        unsigned int arg1_00;
        uint8_t local_80[24];
        unsigned long local_68;
        unsigned long local_58;
        unsigned long local_50;
        ResourceDataT<unsigned char const>* local_48;
        void* local_40;
        unsigned int local_38;
        uint32_t local_34;

        local_80._16_8_ = ((MapArea*)Instance())->GetOrigin();
        new (local_80) GLFormat(field_36);
        unsigned long uVar3 = 1;
        if (1 < arg1) {
            local_34 = local_80._0_4_;
            local_58 = (unsigned long)(unsigned int)local_80._4_4_;
            local_50 = (unsigned long)(unsigned int)local_80._8_4_;
            arg2 = field_28 >> 1;
            arg1_00 = field_24 >> 1;
            local_48 = resourceData + 24;
            uVar3 = 1;
            local_68 = (unsigned long)arg1;
            local_38 = arg1;
            do {
                iVar2 = GetImageByteSize(arg1_00, arg2, field_36, 0);
                iVar2 = iVar2 * field_32;
                if (iVar2 == 0) {
                    LogAssert("mipImageSize > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2DArray_OGL.cpp",
                              250, nullptr);
                }
                if ((resourceData == nullptr) || (field_48 <= uVar3)) {
                    arg9 = nullptr;
                } else {
                    arg9 = *(void**)local_48;
                }
                if (*(char*)(local_80._16_8_ + 330) == '\0') {
                    local_40 = arg9;
                    if (IsCompressedFormat(field_36) == '\0') {
                        (*___glewTexImage3D)(field_16, uVar3 & 4294967295, local_34, arg1_00, arg2, field_32, 0,
                                             local_58, local_50, local_40);
                        str1 = "glTexImage3D";
                        iVar2 = 293;
                    } else {
                        (*___glewCompressedTexImage3D)(field_16, uVar3 & 4294967295, local_34, arg1_00, arg2, field_32,
                                                       0, iVar2, local_40);
                        str1 = "glCompressedTexImage3D";
                        iVar2 = 278;
                    }
                    CheckGlErrorInternal(str1,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         iVar2);
                } else {
                    Update((unsigned int)uVar3, 0, 0, 0, arg1_00, arg2, field_32, field_36, arg9);
                }
                arg1_00 = (int)arg1_00 / 2;
                arg2 = (int)arg2 / 2;
                uVar3 = uVar3 + 1;
                local_48 = local_48 + 24;
            } while (local_68 != uVar3);
            arg1 = local_38;
        }
        if ((unsigned int)uVar3 != arg1) {
            LogAssert("iMip == maxLevels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2DArray_OGL.cpp",
                      301, nullptr);
        }
    }

} // namespace jag::render
