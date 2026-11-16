// libs/hal/render/textures/OGL/TextureCube_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/textures/TextureCube.h"

namespace jag::render {
    // 0x100bcc2d0
    TextureCube::TextureCube(const char* str) : Texture(str), field_16(34067) {}

    // 0x100bcc310
    uint32_t TextureCube::Create(const Texture::Desc& desc,
                                 std::array<ResourceDataT<unsigned char const> const*, 6ul> const& resourceDatas) {
        void* arg8;
        CubeFace CVar13;
        char* str1;
        char* str2;
        long* plVar17;
        uint64_t* puVar18;
        unsigned long uVar19;
        Singleton<RenderDevice>* this_04;
        uint8_t local_b0[28];
        uint32_t local_94;
        String local_90;

        if (field_296 != 0) {
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureCube_OGL.cpp",
                      26, "Call Destroy() before calling Create() again");
        }
        auto pMVar15 = Instance();
        long lVar16 = pMVar15->GetOrigin();
        ImmediateRenderContext* immediateRenderContext =
            (((RenderDevice*)pMVar15->Instance())->GetCurrentThreadRenderContext())->GetImmediateContext();
        ActiveTextureSaveRestore local_c0(*immediateRenderContext);
        GenerateBindTextures(34067);
        if (!(field_96.empty())) {
            local_94 = field_296;
            str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b0._16_8_ = lVar16;
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            local_90 = Instrumentation::String(str1, str2);
            5890->~AutoSingleton();
            lVar16 = local_b0._16_8_;
        }
        int iVar8 = desc.field_0;
        int iVar9 = desc.field_4;
        int iVar10 = desc.field_8;
        int iVar11 = desc.field_12;
        uint64_t uVar3 = *(uint64_t*)&desc.field_16;
        uint64_t uVar4 = *(uint64_t*)&desc.field_24;
        uint64_t uVar5 = *(uint64_t*)&desc.field_32;
        uint64_t uVar6 = *(uint64_t*)&desc.field_40;
        uint64_t uVar7 = *(uint64_t*)&desc.field_56;
        field_72 = desc.field_48;
        field_80 = uVar7;
        field_56 = uVar5;
        field_64 = uVar6;
        field_40 = uVar3;
        field_48 = uVar4;
        field_24 = iVar8;
        field_28 = iVar9;
        field_32 = iVar10;
        field_36 = iVar11;
        SetFaceMipLevels(desc);
        new (local_b0) GLFormat(desc.field_12);
        if (*(char*)(lVar16 + 330) == '\0') {
            uVar19 = 0;
            do {
                CVar13 = GetCubeMapFace((int)uVar19);
                puVar18 = &resourceDatas[uVar19];
                CreateCubeFaceTopLevelMip((TextureCube*)resourceDatas, CVar13, desc,
                                          (ResourceDataT<unsigned char const>*)*puVar18);
                uVar19 = uVar19 + 1;
            } while (uVar19 != 6);
        } else {
            if (local_b0._12_4_ == 0) {
                local_b0._12_4_ = local_b0._0_4_;
            }
            (*___glewTexStorage2D)(34067, field_88, local_b0._12_4_);
            CheckGlErrorInternal("glTexStorage2D",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureCube_OGL.cpp",
                                 57);
            uVar19 = 0;
            do {
                plVar17 = &resourceDatas[uVar19];
                if (((uint64_t*)*plVar17 != nullptr) && (arg8 = *(void**)*plVar17, arg8 != nullptr)) {
                    CVar13 = GetCubeMapFace((int)uVar19);
                    UpdateOnCurrentThread(CVar13, 0, 0, 0, desc.field_0, desc.field_4, desc.field_12, arg8);
                }
                uVar19 = uVar19 + 1;
            } while (uVar19 != 6);
        }
        unsigned int uVar1 = field_88;
        unsigned int uVar2 = desc.field_24;
        if ((1 < uVar1) && (uVar2 < 2)) {
            this_04 = (Singleton<RenderDevice>*)(unsigned long)(unsigned int)desc.field_12;
            if (!(IsCompressedFormat(desc.field_12))) {
                pMVar15 = (MapArea*)this_04->Instance();
                lVar16 = pMVar15->GetOrigin();
                if (*(char*)(lVar16 + 336) == '\0') {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/TextureCube_OGL.cpp",
                              88, "Auto-generating mips isn\'t supported on this device. Disabling mips.");
                    field_88 = 1;
                } else {
                    (*___glewGenerateMipmap)(34067);
                    CheckGlErrorInternal("glGenerateMipmap",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/TextureCube_OGL.cpp",
                                         84);
                }
                goto LAB_100bcc61d;
            }
        }
        if (1 < uVar1) {
            if (uVar2 < 2) {
                LogAssert("textureDesc.m_DataMipLevels > 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/TextureCube_OGL.cpp",
                          94, nullptr);
            }
            CreateSubLevelMips(desc.field_24, resourceDatas);
        }
    LAB_100bcc61d:
        uint32_t uVar14 = FinaliseCreate("TextureCube", desc);
        return uVar14;
    }

    // 0x100bcc6a0
    void TextureCube::UpdateOnCurrentThread(CubeFace cubeFace, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                            unsigned int arg5, unsigned int arg6, Format format, const void* arg8) {
        int iVar2;
        uint32_t uVar3;
        ImmediateRenderContext* immediateRenderContext;
        unsigned int* puVar5;
        long lVar6;
        unique_lock<std::mutex>* this_04;
        Singleton<RenderDevice>* this_05;
        ActiveTextureSaveRestore local_70;
        unique_lock<std::mutex> local_60;
        GLFormat local_50;

        if (arg8 == nullptr) {
            LogAssert("pSrcTexelData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureCube_OGL.cpp",
                      145, nullptr);
        }
        auto pTVar4 = GetNativeTextureId();
        if ((int)pTVar4 != 0) {
            iVar2 = GetMaxLineWidth();
            if (iVar2 != -1) {
                ValidateUpdateParams(arg2, arg3, arg4, 0, arg5, arg6, 1);
                if (!(UseGLWriteMutex())) {
                    this_04 = &local_60;
                    new (this_04) std::unique_lock<std::mutex>();
                } else {
                    this_04 = &local_60;
                    new (this_04) std::unique_lock<std::mutex>(field_368);
                }
                immediateRenderContext =
                    (((RenderDevice*)this_04->Instance())->GetCurrentThreadRenderContext())->GetImmediateContext();
                local_70 = ActiveTextureSaveRestore(*immediateRenderContext);
                immediateRenderContext->BindTexture(*this, 0);
                local_50 = GLFormat(format);
                if (!(IsCompressedFormat(format))) {
                    this_05 = (Singleton<RenderDevice>*)(unsigned long)format;
                    iVar2 = GetFormatDepthBits(format);
                    if (iVar2 != 0) {
                        lVar6 = ((MapArea*)this_05->Instance())->GetOrigin();
                        if (*(char*)(lVar6 + 152) == '\0') {
                            LogAssert("GetFormatDepthBits(format) == 0 || "
                                      "RenderDevice::Instance().GetDeviceCaps().m_DepthTextureLoad",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/TextureCube_OGL.cpp",
                                      177, nullptr);
                        }
                    }
                    _glTexSubImage2D(cubeFace, arg2, arg3, arg4, arg5, arg6, local_50.field_0._4_4_,
                                     local_50.field_0._8_4_, arg8);
                    CheckGlErrorInternal("glTexSubImage2D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/TextureCube_OGL.cpp",
                                         187);
                LAB_100bcc91a:
                    return;
                }
                if (((arg3 | arg4) & 3) != 0) {
                    LogAssert("x % 4 == 0 && y % 4 == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/TextureCube_OGL.cpp",
                              161, nullptr);
                }
                local_50._16_4_ = 4;
                puVar5 = std::max<unsigned int>(arg5, local_50.field_16);
                if ((*puVar5 & 3) == 0) {
                    puVar5 = std::max<unsigned int>(arg6, 4);
                    if ((*puVar5 & 3) == 0) {
                        uVar3 = GetImageByteSize(arg5, arg6, format, arg2);
                        (*___glewCompressedTexSubImage2D)(cubeFace, arg2, arg3, arg4, arg5, arg6,
                                                          local_50.field_0._0_4_, uVar3, arg8);
                        CheckGlErrorInternal("glCompressedTexSubImage2D",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/TextureCube_OGL.cpp",
                                             173);
                        goto LAB_100bcc91a;
                    }
                }
                LogAssert("std::max(width, 4u) % 4 == 0 && std::max(height, 4u) % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/TextureCube_OGL.cpp",
                          162, nullptr);
            }
        }
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "TextureCube_OGL.cpp",
                  146, nullptr);
    }

    // 0x100bcc980
    void TextureCube::CreateCubeFaceTopLevelMip(CubeFace cubeFace, const Texture::Desc& desc,
                                                const ResourceDataT<unsigned char const>* resourceData) {
        uint64_t uVar2;
        uint64_t uVar3;
        int arg3;
        char* str1;
        uint8_t local_40[16];

        new (local_40) GLFormat(desc.field_12);
        Format format = desc.field_12;
        if (IsCompressedFormat(format) == '\0') {
            if (resourceData == nullptr) {
                uVar3 = 0;
            } else {
                uVar3 = *(uint64_t*)resourceData;
            }
            _glTexImage2D(cubeFace, desc.field_36, local_40._0_4_, desc.field_0, desc.field_4, 0, local_40._4_4_,
                          local_40._8_4_, uVar3);
            str1 = "glTexImage2D";
            arg3 = 227;
        } else {
            uVar3 = 0;
            uVar2 = GetImageByteSize(desc.field_0, desc.field_4, format, 0);
            if (resourceData != nullptr) {
                uVar3 = *(uint64_t*)resourceData;
            }
            (*___glewCompressedTexImage2D)(cubeFace, desc.field_36, local_40._0_4_, desc.field_0, desc.field_4, 0,
                                           uVar2, uVar3);
            str1 = "glCompressedTexImage2D";
            arg3 = 213;
        }
        CheckGlErrorInternal(str1,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureCube_OGL.cpp",
                             arg3);
    }

    // 0x100bcca70
    void
    TextureCube::CreateSubLevelMips(unsigned int arg1,
                                    std::array<ResourceDataT<unsigned char const> const*, 6ul> const& resourceDatas) {
        CubeFace CVar2;
        int iVar3;
        long* plVar4;
        void* arg8;
        char* str1;
        unsigned int arg5;
        unsigned long uVar6;
        unsigned long uVar7;
        uint8_t local_88[24];
        unsigned long local_50;
        CubeFace local_3c;

        local_88._16_8_ = resourceDatas;
        long local_70 = ((MapArea*)Instance())->GetOrigin();
        TextureCube* local_38 = this;
        new (local_88) GLFormat(field_36);
        uint32_t local_40 = local_88._0_4_;
        unsigned long local_60 = (unsigned long)(unsigned int)local_88._4_4_;
        unsigned long local_58 = (unsigned long)(unsigned int)local_88._8_4_;
        unsigned long local_68 = (unsigned long)arg1;
        unsigned long uVar5 = 0;
        unsigned int local_44 = arg1;
        while (true) {
            CVar2 = GetCubeMapFace((int)uVar5);
            uVar7 = 1;
            if (1 < arg1) {
                arg5 = local_38->field_24;
                uVar6 = (unsigned long)local_38->field_28;
                uVar7 = 1;
                local_50 = uVar5;
                local_3c = CVar2;
                do {
                    uVar6 = uVar6 >> 1;
                    arg5 = arg5 >> 1;
                    iVar3 = GetImageByteSize(arg5, (unsigned int)uVar6, local_38->field_36, 0);
                    if (iVar3 == 0) {
                        LogAssert("mipImageSize > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/TextureCube_OGL.cpp",
                                  248, nullptr);
                    }
                    plVar4 = (long*)(*local_88._16_8_)[local_50];
                    if (*plVar4 == 0) {
                        arg8 = nullptr;
                    } else if (uVar7 < *(unsigned int*)&local_38->field_48) {
                        arg8 = *(void**)(*plVar4 + uVar7 * 24);
                    } else {
                        arg8 = nullptr;
                    }
                    if (*(char*)(local_70 + 330) == '\0') {
                        if (IsCompressedFormat(local_38->field_36) == '\0') {
                            _glTexImage2D(local_3c, uVar7 & 4294967295, local_40, arg5, uVar6, 0, local_60, local_58,
                                          arg8);
                            str1 = "glTexImage2D";
                            iVar3 = 289;
                        } else {
                            (*___glewCompressedTexImage2D)(local_3c, uVar7 & 4294967295, local_40);
                            str1 = "glCompressedTexImage2D";
                            iVar3 = 275;
                        }
                        CheckGlErrorInternal(str1,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/TextureCube_OGL.cpp",
                                             iVar3);
                    } else {
                        UpdateOnCurrentThread(local_38, local_3c, (unsigned int)uVar7, 0, 0, arg5, (unsigned int)uVar6,
                                              local_38->field_36, arg8);
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 != local_68);
                uVar5 = local_50;
                arg1 = local_44;
            }
            if ((unsigned int)uVar7 != arg1)
                break;
            uVar5 = uVar5 + 1;
            if (uVar5 == 6) {
                return;
            }
        }
        LogAssert("iMip == maxLevels",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "TextureCube_OGL.cpp",
                  297, nullptr);
    }

    // 0x100bcccc0
    void TextureCube::Create(const Texture::Desc& desc) {
        uint64_t local_18 = 0;
        uint64_t uStack_10 = 0;
        uint64_t local_28 = 0;
        uint64_t uStack_20 = 0;
        uint64_t uStack_30 = 0;
        Create(desc, 0);
    }

    // 0x100bcccf0
    void TextureCube::Update(CubeFace cubeFace, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                             unsigned int arg5, unsigned int arg6, Format format, const void* arg8) {
        bool arg3_00;
        int iVar1;
        unsigned int uVar2;
        RenderDevice* pRVar4;
        Singleton<RenderDevice>* this_00;
        WrapArrayValueCopy<unsigned char>* this_01;
        WrapArrayValueCopy<unsigned char> local_178;
        uint8_t local_148[92];
        unsigned int local_e0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        unsigned int local_ec = arg4;
        unsigned int local_e8 = arg5;
        CubeFace local_e4 = cubeFace;
        unsigned int local_dc = arg3;
        auto pTVar3 = GetNativeTextureId();
        if ((int)pTVar3 != 0) {
            iVar1 = GetMaxLineWidth();
            local_148._24_4_ = local_e8;
            local_148._20_4_ = local_ec;
            if (iVar1 != -1) {
                if (arg8 == nullptr) {
                    LogAssert("pSrcTexelData",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/TextureCube_OGL.cpp",
                              119, nullptr);
                }
                local_e0 = arg2;
                ValidateUpdateParams(arg2, local_dc, local_ec, 0, local_e8, arg6, 1);
                this_00 = (Singleton<RenderDevice>*)(unsigned long)(unsigned int)local_148._24_4_;
                uVar2 = GetImageByteSize(local_148._24_4_, arg6, format, arg2);
                pRVar4 = (RenderDevice*)this_00->Instance();
                arg3_00 = (bool)pRVar4->ShouldDefer();
                this_01 = &local_178;
                new (this_01) WrapArrayValueCopy<unsigned char>(arg8, (unsigned long)uVar2, arg3_00);
                pRVar4 = (RenderDevice*)this_01->Instance();
                local_148._8_4_ = local_e4;
                local_148._12_4_ = local_e0;
                local_148._16_4_ = local_dc;
                local_148._28_4_ = arg6;
                local_148._32_4_ = format;
                local_148._0_8_ = this;
                new ((local_148 + 40)) WrapArrayValueCopy<unsigned char>(local_178);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        Format, void const*)::__9,
                    void>(local_d8, (__9*)local_148);
                pRVar4->RunOnRenderThread(*local_d8);
                Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                       void const*)::$_9::~__9((__9*)local_148);
                return;
            }
        }
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "TextureCube_OGL.cpp",
                  118, nullptr);
    }

} // namespace jag::render
