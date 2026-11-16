// libs/hal/render/textures/OGL/Texture2D_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/textures/Texture2D.h"

namespace jag::render {
    // 0x103bd9e40, set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Texture2D::NullTexture =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100bca8c0
    Texture2D::Texture2D(const char* str) : Texture(str), field_16(3553) {}

    // 0x100bca900
    uint32_t Texture2D::Create(const Texture::Desc& desc, const ResourceDataT<unsigned char const>* resourceData,
                               unsigned int arg3) {
        Format format;
        char* str1;
        char* str2;
        uint64_t uVar22;
        Singleton<RenderDevice>* this_04;
        uint64_t in_stack_ffffffffffffff20;
        int local_ac;
        uint8_t local_a8[20];
        String local_90;

        uint32_t uVar19 = (uint32_t)((unsigned long)in_stack_ffffffffffffff20 >> 32);
        GetName();
        AutoSingleton<ShaderThreadPoolSingleton>* this_03 = (AutoSingleton<ShaderThreadPoolSingleton>*)(local_a8 + 16);
        this_03->~AutoSingleton();
        if (field_296 != 0) {
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      29, "Call Destroy() before calling Create() again");
        }
        auto pMVar20 = this_03->Instance();
        long lVar21 = pMVar20->GetOrigin();
        unsigned int local_b4 = desc.field_16;
        TextureType local_94 = 3553;
        if (1 < local_b4) {
            local_94 = 37120;
        }
        ImmediateRenderContext* immediateRenderContext =
            (((RenderDevice*)pMVar20->Instance())->GetCurrentThreadRenderContext())->GetImmediateContext();
        ActiveTextureSaveRestore local_d0(*immediateRenderContext);
        GenerateBindTextures(local_94);
        char cVar18 = field_96.empty();
        if (!cVar18) {
            local_ac = field_296;
            str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            local_90 = Instrumentation::String(str1, str2);
            5890->~AutoSingleton();
        }
        unsigned int uVar1 = desc.field_0;
        unsigned int uVar2 = desc.field_4;
        unsigned int uVar4 = desc.field_8;
        unsigned int uVar5 = desc.field_12;
        uint32_t uVar6 = desc.field_16;
        int iVar3 = desc.field_20;
        int iVar7 = desc.field_24;
        int iVar8 = desc.field_28;
        uint8_t uVar14 = desc.field_32;
        uint32_t uVar15 = *(uint32_t*)&desc.field_33;
        uint32_t uVar9 = desc.field_36;
        uint8_t uVar16 = desc.field_40;
        uint32_t uVar17 = *(uint32_t*)&desc.field_41;
        uint32_t uVar10 = *(uint32_t*)&desc.field_44;
        uint32_t uVar11 = *(uint32_t*)((long)&desc.field_48 + 4);
        cVar18 = desc.field_56;
        uint32_t uVar13 = *(uint32_t*)&desc.field_57;
        uint32_t uVar12 = desc.field_60;
        *(uint32_t*)&field_72 = *(uint32_t*)&desc.field_48;
        *(uint32_t*)&field_76 = uVar11;
        field_80 = cVar18;
        *(uint32_t*)&field_81 = uVar13;
        *(uint32_t*)&field_84 = uVar12;
        field_56 = uVar14;
        *(uint32_t*)&field_57 = uVar15;
        *(uint32_t*)&field_60 = uVar9;
        field_64 = uVar16;
        *(uint32_t*)&field_65 = uVar17;
        *(uint32_t*)&field_68 = uVar10;
        *(uint32_t*)&field_40 = uVar6;
        *(int*)&field_44 = iVar3;
        *(int*)&field_48 = iVar7;
        *(int*)&field_52 = iVar8;
        field_24 = uVar1;
        field_28 = uVar2;
        field_32 = uVar4;
        field_36 = uVar5;
        if ((desc.field_56 != '\0') && (*(char*)(lVar21 + 326) != '\0')) {
            if (1 < local_b4) {
                LogAssert("type == TEXTURE_TYPE_2D",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          50, "GL_INTEL_map_texture only supports TEXTURE_TYPE_2D");
            }
            _glTexParameteri(local_94, 33791, 2);
            CheckGlErrorInternal("glTexParameteri",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/Texture2D_OGL.cpp",
                                 52);
        }
        SetFaceMipLevels(desc);
        new (local_a8) GLFormat(desc.field_12);
        if ((unsigned int)desc.field_16 < 2) {
            if (*(char*)(lVar21 + 330) == '\0') {
                format = desc.field_12;
                cVar18 = IsCompressedFormat(format);
                if (!cVar18) {
                    if (resourceData == nullptr) {
                        uVar22 = 0;
                    } else {
                        uVar22 = *(uint64_t*)resourceData;
                    }
                    _glTexImage2D(local_94, desc.field_36, local_a8._0_4_, desc.field_0, desc.field_4, 0,
                                  local_a8._4_4_, (((uint64_t)uVar19 << 32) | (uint32_t)local_a8._8_4_), uVar22);
                    CheckGlErrorInternal("glTexImage2D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         145);
                } else {
                    uVar19 = GetImageByteSize(desc.field_0, desc.field_4, format, 0);
                    if (resourceData == nullptr) {
                        uVar22 = 0;
                    } else {
                        uVar22 = *(uint64_t*)resourceData;
                    }
                    (*___glewCompressedTexImage2D)(local_94, desc.field_36, local_a8._0_4_, desc.field_0, desc.field_4,
                                                   0, uVar19, uVar22);
                    CheckGlErrorInternal("glCompressedTexImage2D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         131);
                }
            } else {
                if (local_a8._12_4_ == 0) {
                    local_a8._12_4_ = local_a8._0_4_;
                }
                (*___glewTexStorage2D)(local_94, field_88, local_a8._12_4_, desc.field_0, desc.field_4);
                CheckGlErrorInternal("glTexStorage2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2D_OGL.cpp",
                                     110);
                if ((resourceData != nullptr) && (*(void**)resourceData != nullptr)) {
                    UpdateOnCurrentThread(0, 0, 0, desc.field_0, desc.field_4, desc.field_12, *(void**)resourceData);
                }
            }
            uVar1 = field_88;
            uVar2 = desc.field_24;
            if ((1 < uVar1) && (uVar2 < 2)) {
                this_04 = (Singleton<RenderDevice>*)(unsigned long)(unsigned int)desc.field_12;
                cVar18 = IsCompressedFormat(desc.field_12);
                if (!cVar18) {
                    pMVar20 = (MapArea*)this_04->Instance();
                    lVar21 = pMVar20->GetOrigin();
                    if (*(char*)(lVar21 + 336) == '\0') {
                        (logger::default_logger())
                            ->Log(false, 3,
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/Texture2D_OGL.cpp",
                                  163, "Auto-generating mips isn\'t supported on this device. Disabling mips.");
                        field_88 = 1;
                        iVar3 = field_16;
                        goto joined_r0x000100bcaeaf;
                    }
                    (*___glewGenerateMipmap)(local_94);
                    CheckGlErrorInternal("glGenerateMipmap",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         159);
                    goto LAB_100bcadb5;
                }
            }
            if (1 < uVar1) {
                if (uVar2 < 2) {
                    LogAssert("textureDesc.m_DataMipLevels > 1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2D_OGL.cpp",
                              169, nullptr);
                }
                CreateSubLevelMips(desc.field_24, resourceData, arg3);
            }
        } else {
            if (*(char*)(lVar21 + 167) == '\0') {
                LogAssert("deviceCaps.m_MultisampleTextures == true",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          69, nullptr);
            }
            if (*(char*)(lVar21 + 331) == '\0') {
                (*___glewTexImage2DMultisample)(local_94, desc.field_16, local_a8._0_4_, desc.field_0, desc.field_4, 1);
                CheckGlErrorInternal("glTexImage2DMultisample",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2D_OGL.cpp",
                                     97);
            } else {
                (*___glewTexStorage2DMultisample)(local_94, desc.field_16, local_a8._0_4_, desc.field_0, desc.field_4,
                                                  1);
                CheckGlErrorInternal("glTexStorage2DMultisample",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2D_OGL.cpp",
                                     86);
            }
        }
    LAB_100bcadb5:
        iVar3 = field_16;
    joined_r0x000100bcaeaf:
        if ((iVar3 == 37120) && (field_88 != 1)) {
            LogAssert("m_faceMipLevels == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      178, "Multisample textures only support 1 mip level");
        }
        uVar19 = FinaliseCreate("Texture2D", desc);
        return uVar19;
    }

    // 0x100bcaef0
    void Texture2D::UpdateOnCurrentThread(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                                          unsigned int arg5, Format format, const void* arg7) {
        int iVar3;
        unsigned int uVar4;
        Texture* pTVar5;
        RenderDevice* pRVar6;
        RenderContext* pRVar7;
        ImmediateRenderContext* pIVar8;
        unsigned int* puVar9;
        MapArea* pMVar10;
        long lVar11;
        unique_lock<std::mutex>* this_01;
        Singleton<RenderDevice>* pSVar12;
        ActiveTextureSaveRestore local_88;
        uint8_t local_78[16];
        int local_68[5];
        unsigned int local_54[3];
        uint32_t local_44;
        uint8_t local_40[4];

        if (field_296 != 0) {
            iVar3 = GetMaxLineWidth();
            if (iVar3 != -1) {
                local_54[2] = arg2;
                ValidateUpdateParams(arg1, arg2, arg3, 0, arg4, arg5, 1);
                if (arg7 == nullptr) {
                    pMVar10 = (MapArea*)Instance();
                    lVar11 = pMVar10->GetOrigin();
                    if (*(char*)(lVar11 + 324) != '\0') {
                        _glGetIntegerv(35055, local_68);
                        if (local_68[0] == 0) {
                            LogAssert("currentPixelBufferId",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture2D_OGL.cpp",
                                      293, nullptr);
                        }
                    }
                }
                local_44 = GetImageByteSize(arg4, arg5, format, arg1);
                GetName();
                uVar4 = local_54[2];
                pTVar5 = (Texture*)local_40;
                pTVar5->~AutoSingleton();
                if (!(pTVar5->UseGLWriteMutex())) {
                    this_01 = (unique_lock<std::mutex>*)local_68;
                    new (this_01) std::unique_lock<std::mutex>();
                } else {
                    this_01 = (unique_lock<std::mutex>*)local_68;
                    new (this_01) std::unique_lock<std::mutex>(field_368);
                }
                pRVar6 = (RenderDevice*)this_01->Instance();
                pRVar7 = pRVar6->GetCurrentThreadRenderContext();
                pIVar8 = pRVar7->GetImmediateContext();
                local_88 = ActiveTextureSaveRestore(*pIVar8);
                pRVar6 = (RenderDevice*)local_88.Instance();
                pRVar7 = pRVar6->GetCurrentThreadRenderContext();
                pIVar8 = pRVar7->GetImmediateContext();
                pIVar8->BindTexture(*this, 0);
                new (local_78) GLFormat(format);
                if (!(IsCompressedFormat(field_36))) {
                    pSVar12 = (Singleton<RenderDevice>*)(unsigned long)format;
                    iVar3 = GetFormatDepthBits(format);
                    if (iVar3 != 0) {
                        pMVar10 = (MapArea*)pSVar12->Instance();
                        lVar11 = pMVar10->GetOrigin();
                        if (*(char*)(lVar11 + 152) == '\0') {
                            LogAssert("GetFormatDepthBits(format) == 0 || "
                                      "RenderDevice::Instance().GetDeviceCaps().m_DepthTextureLoad",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture2D_OGL.cpp",
                                      335, nullptr);
                        }
                    }
                    _glTexSubImage2D(field_16, arg1, uVar4, arg3, arg4, arg5, local_78._4_4_, local_78._8_4_, arg7);
                    CheckGlErrorInternal("glTexSubImage2D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         345);
                LAB_100bcb214:
                    return;
                }
                if (((uVar4 | arg3) & 3) != 0) {
                    LogAssert("x % 4 == 0 && y % 4 == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2D_OGL.cpp",
                              312, nullptr);
                }
                local_54[0] = 4;
                puVar9 = std::max<unsigned int>(arg4, *local_54);
                if ((*puVar9 & 3) == 0) {
                    local_54[1] = 4;
                    puVar9 = std::max<unsigned int>(arg5, *(local_54 + 1));
                    if ((*puVar9 & 3) == 0) {
                        pSVar12 = (Singleton<RenderDevice>*)(unsigned long)field_36;
                        if (IsETC2CompressedFormat(field_36)) {
                            pMVar10 = (MapArea*)pSVar12->Instance();
                            lVar11 = pMVar10->GetOrigin();
                            if (*(char*)(lVar11 + 163) != '\0') {
                                local_44 = GetImageByteSize(arg4, arg5 + arg3, format, 0);
                            }
                        }
                        (*___glewCompressedTexSubImage2D)(field_16, arg1, uVar4, arg3, arg4, arg5, local_78._0_4_,
                                                          local_44, arg7);
                        CheckGlErrorInternal("glCompressedTexSubImage2D",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture2D_OGL.cpp",
                                             331);
                        goto LAB_100bcb214;
                    }
                }
                LogAssert("std::max(width, 4u) % 4 == 0 && std::max(height, 4u) % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          313, nullptr);
            }
        }
        pTVar5 = GetNativeTextureId();
        uVar4 = GetMaxLineWidth();
        LogAssert("m_GLTexture && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture2D_OGL.cpp",
                  285, "Invalid native texture ID %d or type %d", (unsigned long)pTVar5 & 4294967295,
                  (unsigned long)uVar4);
    }

    // 0x100bcb2b0
    void Texture2D::CreateSubLevelMips(unsigned int arg1, const ResourceDataT<unsigned char const>* resourceData,
                                       unsigned int arg3) {
        void* pvVar1;
        ResourceDataT<unsigned char const>* pRVar2;
        int iVar6;
        uint64_t uVar7;
        unsigned long uVar8;
        int arg3_00;
        char* str1;
        unsigned long uVar9;
        void* arg7;
        uint8_t local_88[24];
        ResourceDataT<unsigned char const>* local_70;
        unsigned long local_68;
        unsigned long local_60;
        unsigned long local_58;
        uint32_t local_48;
        unsigned int local_44;
        Texture2D* local_40;
        unsigned int local_38;
        unsigned int local_34;

        local_88._16_8_ = ((MapArea*)Instance())->GetOrigin();
        unsigned int uVar4 = GetImageByteSize(field_24, field_28, field_36, 0);
        new (local_88) GLFormat(field_36);
        unsigned int uVar5 = 1;
        if (1 < arg1) {
            local_48 = local_88._0_4_;
            local_60 = (unsigned long)(unsigned int)local_88._4_4_;
            local_58 = (unsigned long)(unsigned int)local_88._8_4_;
            local_68 = (unsigned long)arg1;
            local_38 = field_24;
            local_34 = field_28;
            uVar9 = 1;
            local_70 = resourceData;
            local_44 = arg1;
            local_40 = this;
            do {
                pRVar2 = local_70;
                resourceData = resourceData + 24;
                if ((arg3 <= uVar4) && (local_70 != nullptr)) {
                    uVar8 = uVar9 & 4294967295;
                    break;
                }
                local_34 = local_34 >> 1;
                local_38 = local_38 >> 1;
                uVar7 = GetImageByteSize(local_38, local_34, local_40->field_36, 0);
                iVar6 = (int)uVar7;
                if (iVar6 == 0) {
                    LogAssert("mipImageSize > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2D_OGL.cpp",
                              367, nullptr);
                }
                if (pRVar2 == nullptr) {
                    arg7 = nullptr;
                } else if (uVar9 < *(unsigned int*)&local_40->field_48) {
                    pvVar1 = *(void**)resourceData;
                    arg7 = nullptr;
                    if (iVar6 + uVar4 <= arg3) {
                        arg7 = pvVar1;
                    }
                    if (pvVar1 == nullptr) {
                        arg7 = pvVar1;
                    }
                } else {
                    arg7 = nullptr;
                }
                if (*(char*)(local_88._16_8_ + 330) == '\0') {
                    if (IsCompressedFormat(local_40->field_36) == '\0') {
                        _glTexImage2D(3553, uVar9 & 4294967295, local_48, local_38, local_34, 0, local_60, local_58,
                                      arg7);
                        str1 = "glTexImage2D";
                        arg3_00 = 411;
                    } else {
                        (*___glewCompressedTexImage2D)(3553, uVar9 & 4294967295, local_48, local_38, local_34, 0, uVar7,
                                                       arg7);
                        str1 = "glCompressedTexImage2D";
                        arg3_00 = 397;
                    }
                    CheckGlErrorInternal(str1,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         arg3_00);
                } else if (arg7 != nullptr) {
                    UpdateOnCurrentThread(local_40, (unsigned int)uVar9, 0, 0, local_38, local_34, local_40->field_36,
                                          arg7);
                }
                uVar4 = uVar4 + iVar6;
                uVar9 = uVar9 + 1;
                uVar8 = local_68;
            } while (local_68 != uVar9);
            uVar5 = (unsigned int)uVar8;
            arg1 = local_44;
        }
        if (uVar5 != arg1) {
            LogAssert("iMip == maxLevels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      421, nullptr);
        }
    }

    // 0x100bcb530
    void Texture2D::Update(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4,
                           unsigned int arg5, Format format, const void* arg7) {
        bool arg3_00;
        int iVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        Texture* pTVar7;
        RenderDevice* pRVar9;
        GraphicsApp* this_01;
        Singleton<RenderDevice>* this_02;
        WrapArrayValueCopy<unsigned char>* this_03;
        WrapArrayValueCopy<unsigned char> local_170;
        uint8_t local_140[84];
        unsigned int local_e8;
        unsigned int local_e4;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        unsigned int local_e0 = arg5;
        unsigned int local_dc = arg4;
        auto this_00 = Instance();
        long lVar6 = this_00->GetOrigin();
        if (*(char*)(lVar6 + 228) != '\0') {
            if (field_296 == 0) {
            LAB_100bcb598:
                pTVar7 = GetNativeTextureId();
                local_e4 = arg1;
                uVar4 = GetMaxLineWidth();
                LogAssert("!RenderDevice::Instance().GetDeviceCaps().m_MultithreadedTextureUpdates || (m_GLTexture && "
                          "(GetType() != TEXTURE_TYPE_UNKNOWN))",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          196, "Invalid native texture ID %d or type %d", (unsigned long)pTVar7 & 4294967295,
                          (unsigned long)uVar4);
            }
            this_00 = this;
            iVar3 = GetMaxLineWidth();
            if (iVar3 == -1)
                goto LAB_100bcb598;
        }
        int local_ec = 0;
        auto pMVar8 = this_00->Instance();
        lVar6 = pMVar8->GetOrigin();
        if (*(char*)(lVar6 + 324) != '\0') {
            pMVar8 = (MapArea*)35055;
            _glGetIntegerv(35055, &local_ec);
        }
        bool cVar2 = this_thread::IsMainThread();
        unsigned int uVar1 = local_dc;
        uVar4 = local_e0;
        if ((!cVar2) || (local_ec != 0)) {
            if (local_ec == 0) {
                pRVar9 = (RenderDevice*)pMVar8->Instance();
                cVar2 = pRVar9->IsRenderThread();
                if (!cVar2) {
                    pMVar8 = (MapArea*)pRVar9->Instance();
                    lVar6 = pMVar8->GetOrigin();
                    uVar1 = local_dc;
                    uVar4 = local_e0;
                    if (*(char*)(lVar6 + 228) == '\0') {
                        if (arg7 == nullptr) {
                            LogAssert("pSrcTexelData",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture2D_OGL.cpp",
                                      213, nullptr);
                        }
                        local_e8 = arg3;
                        ValidateUpdateParams(arg1, arg2, arg3, 0, local_dc, local_e0, 1);
                        uVar4 = GetImageByteSize(uVar1, uVar4, format, arg1);
                        local_170 = WrapArrayValueCopy<unsigned char>(arg7, (unsigned long)uVar4, true);
                        this_01 = (GraphicsApp*)GraphicsApp::Instance();
                        local_140._16_4_ = local_e8;
                        local_140._20_4_ = local_dc;
                        local_140._24_4_ = local_e0;
                        local_140._28_4_ = format;
                        local_140._0_8_ = this;
                        local_140._8_4_ = arg1;
                        local_140._12_4_ = arg2;
                        new ((local_140 + 32)) WrapArrayValueCopy<unsigned char>(local_170);
                        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                            Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                              Format, void const*)::__6,
                            void>((function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8,
                                  (__6*)local_140);
                        this_01->QueueMainDrawThreadEvent(*local_d8);
                        Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                               void const*)::$_6::~__6((__6*)local_140);
                        goto LAB_100bcb75d;
                    }
                }
            }
            UpdateOnCurrentThread(arg1, arg2, arg3, local_dc, local_e0, format, arg7);
        } else {
            if (arg7 == nullptr) {
                LogAssert("pSrcTexelData",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          249, nullptr);
            }
            local_e8 = arg3;
            local_e4 = arg2;
            ValidateUpdateParams(arg1, arg2, arg3, 0, local_dc, local_e0, 1);
            this_02 = (Singleton<RenderDevice>*)(unsigned long)uVar1;
            uVar5 = GetImageByteSize(uVar1, uVar4, format, arg1);
            pRVar9 = (RenderDevice*)this_02->Instance();
            arg3_00 = (bool)pRVar9->ShouldDefer();
            this_03 = &local_170;
            new (this_03) WrapArrayValueCopy<unsigned char>(arg7, (unsigned long)uVar5, arg3_00);
            pRVar9 = (RenderDevice*)this_03->Instance();
            local_140._12_4_ = local_e4;
            local_140._16_4_ = local_e8;
            local_140._20_4_ = uVar1;
            local_140._24_4_ = uVar4;
            local_140._28_4_ = format;
            local_140._0_8_ = this;
            local_140._8_4_ = arg1;
            new ((local_140 + 32)) WrapArrayValueCopy<unsigned char>(local_170);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                                  void const*)::__7,
                void>(local_d8, (__7*)local_140);
            pRVar9->RunOnRenderThread(*local_d8);
            Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                   void const*)::$_7::~__7((__7*)local_140);
        LAB_100bcb75d:
        }
    }

    // 0x100bcb9f0
    void Texture2D::BindExternalTexture(unsigned int arg1, TextureType textureType, const Texture::Desc& desc) {
        if (field_296 != 0) {
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      426, "Call Destroy() before calling BindExternalTexture() again");
        }
        auto pRVar17 = Instance();
        int iVar16 = pRVar17->GetReadyState();
        if (iVar16 != 0) {
            LogAssert("RenderDevice::Instance().GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      427, nullptr);
        }
        pRVar17 = (RenderDevice*)pRVar17->Instance();
        auto pRVar18 = pRVar17->GetCurrentThreadRenderContext();
        char cVar15 = pRVar18->IsLocked();
        if (!cVar15) {
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      428, nullptr);
        }
        if (((textureType != 3553) && (textureType != 34037)) && (textureType != 37120)) {
            LogAssert(
                "type == TEXTURE_TYPE_RECTANGLE || type == TEXTURE_TYPE_2D || type == TEXTURE_TYPE_2D_MULTISAMPLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                "Texture2D_OGL.cpp",
                430, nullptr);
        }
        if ((desc.field_16 != 1) && (textureType != 37120)) {
            LogAssert("textureDesc.m_SampleCount == 1 || type == TEXTURE_TYPE_2D_MULTISAMPLE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      434, nullptr);
        }
        field_296 = arg1;
        field_16 = textureType;
        iVar16 = desc.field_4;
        int iVar2 = desc.field_8;
        int iVar3 = desc.field_12;
        uint32_t uVar4 = desc.field_16;
        int iVar5 = desc.field_20;
        int iVar6 = desc.field_24;
        int iVar7 = desc.field_28;
        uint8_t uVar8 = desc.field_32;
        uint32_t uVar9 = *(uint32_t*)&desc.field_33;
        uint32_t uVar10 = desc.field_36;
        uint8_t uVar11 = desc.field_40;
        uint64_t uVar12 = *(uint64_t*)&desc.field_41;
        uint64_t uVar1 = desc.field_48;
        cVar15 = desc.field_56;
        uint32_t uVar13 = *(uint32_t*)&desc.field_57;
        uint32_t uVar14 = desc.field_60;
        field_24 = desc.field_0;
        field_28 = iVar16;
        field_32 = iVar2;
        field_36 = iVar3;
        *(uint32_t*)&field_40 = uVar4;
        *(int*)&field_44 = iVar5;
        *(int*)&field_48 = iVar6;
        *(int*)&field_52 = iVar7;
        field_56 = uVar8;
        *(uint32_t*)&field_57 = uVar9;
        *(uint32_t*)&field_60 = uVar10;
        field_64 = uVar11;
        *(uint64_t*)&field_65 = uVar12;
        *(uint64_t*)&field_72 = uVar1;
        field_80 = cVar15;
        *(uint32_t*)&field_81 = uVar13;
        *(uint32_t*)&field_84 = uVar14;
        pRVar17 = (RenderDevice*)pRVar18->Instance();
        pRVar18 = pRVar17->GetCurrentThreadRenderContext();
        auto pIVar19 = pRVar18->GetImmediateContext();
        ActiveTextureSaveRestore local_40(*pIVar19);
        pRVar17 = (RenderDevice*)local_40.Instance();
        pRVar18 = pRVar17->GetCurrentThreadRenderContext();
        pIVar19 = pRVar18->GetImmediateContext();
        pIVar19->BindTexture(*this, 0);
        cVar15 = IsCreatedNative();
        if (!cVar15) {
            LogAssert("IsCreatedNative()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      445, nullptr);
        }
        cVar15 = field_96.empty();
        if (cVar15) {
            field_96 = "ExternalTexture";
        }
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        5890->~AutoSingleton();
        SetFaceMipLevels(desc);
        FinaliseCreate("Texture2D", desc);
    }

    // 0x100bd2110
    Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                      void const*)::$_6::~$_6() {
        field_32.~WrapArrayValueCopy();
    }

    // 0x100bd2130
    Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                      void const*)::$_7::~$_7() {
        field_32.~WrapArrayValueCopy();
    }

    // 0x100bd8840
    Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                      void const*)::$_6::$_6($_6&& arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((unsigned long)uVar4 >> 32);
        field_0 = uVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((unsigned long)uVar2 >> 32);
        new (&field_32) WrapArrayValueCopy<unsigned char>(*((arg1 + 32)));
    }

    // 0x100bd88b0
    Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                      void const*)::$_6::$_6(const $_6& arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((unsigned long)uVar4 >> 32);
        field_0 = uVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((unsigned long)uVar2 >> 32);
        new (&field_32) WrapArrayValueCopy<unsigned char>(*((arg1 + 32)));
    }

    // 0x100bd8900
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_6::operator()(BaseApp* baseApp) const {
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        uint64_t uVar1 = field_0;
        auto this_00 = Instance();
        uint32_t local_110 = field_8;
        uint32_t local_10c = field_12;
        uint32_t local_108 = field_16;
        uint32_t local_104 = field_20;
        uint32_t local_100 = field_24;
        uint32_t local_fc = field_28;
        uint64_t local_118 = uVar1;
        WrapArrayValueCopy<unsigned char> local_f8(field_32);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            local_c8, (_lambda_jag__render__RenderContext___1_*)&local_118);
        this_00->RunOnRenderThread(*local_c8);
        const ::{
            lambda(RenderContext&) #1
        }
        ::~RenderContext((_lambda_jag__render__RenderContext___1_*)&local_118);
    }

    // 0x100bd8a20
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_6::operator()(BaseApp*) const ::{
        lambda(RenderContext&) #1
    }
    ::~RenderContext() {
        ~RenderContext(this);
    }

    // 0x100bd8a80
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_6::operator()(BaseApp*) const ::{
        lambda(RenderContext&) #1
    }
    ::RenderContext({ lambda(RenderContext&) #1 } && arg1) {
        RenderContext___1____(this, arg1);
    }

    // 0x100bd8a90
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_6::operator()(BaseApp*) const ::{
        lambda(RenderContext&) #1
    }
    ::RenderContext({ lambda(RenderContext&) #1 } && arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)(arg1 + 16);
        *(uint64_t*)(this + 24) = uVar3;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        new ((this + 32)) WrapArrayValueCopy<unsigned char>(*((arg1 + 32)));
    }

    // 0x100bd8af0
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_6::operator()(BaseApp*) const ::{
        lambda(RenderContext&) #1
    }
    ::RenderContext({ lambda(RenderContext&) #1 } const& arg1) {
        RenderContext___1__const__(this, arg1);
    }

    // 0x100bd8b00
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_6::operator()(BaseApp*) const ::{
        lambda(RenderContext&) #1
    }
    ::RenderContext({ lambda(RenderContext&) #1 } const& arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)(arg1 + 16);
        *(uint64_t*)(this + 24) = uVar3;
        *(uint64_t*)this = uVar1;
        *(uint64_t*)(this + 8) = uVar2;
        new ((this + 32)) WrapArrayValueCopy<unsigned char>(*((arg1 + 32)));
    }

    // 0x100bd8b50
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_6::operator()(BaseApp*) const ::{
        lambda(RenderContext&) #1
    }
    ::operator()(RenderContext & renderContext) const {
        unsigned int uVar1;
        unsigned int arg2;
        unsigned int arg3;
        unsigned int arg4;
        unsigned int arg5;
        Format format;
        long lVar3;
        void* arg7;
        Texture* this_03;

        Texture* this_00 = *(Texture**)this;
        if (renderContext.IsObjectAlive(&this_00->field_8)) {
            this_03 = this_00;
            if (this_00->IsCreated()) {
                uVar1 = this_00->field_24;
                if (uVar1 == 0) {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2D_OGL.cpp",
                              236, "Attempting to update texture where texture desc is 0x0 pixels.");
                } else {
                    lVar3 = ((MapArea*)this_03->Instance())->GetOrigin();
                    if (*(unsigned int*)(lVar3 + 52) < uVar1) {
                        LogAssert("m_Desc.m_Width <= (uint)RenderDevice::Instance().GetDeviceCaps().m_MaxTextureSize",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/Texture2D_OGL.cpp",
                                  230, "Dead texture object in deferred Update (impossible dimensions)");
                    }
                    uVar1 = *(unsigned int*)(this + 8);
                    arg2 = *(unsigned int*)(this + 12);
                    arg3 = *(unsigned int*)(this + 16);
                    arg4 = *(unsigned int*)(this + 20);
                    arg5 = *(unsigned int*)(this + 24);
                    format = *(Format*)(this + 28);
                    arg7 = (void*)((this + 32))->end();
                    this_00->UpdateOnCurrentThread(uVar1, arg2, arg3, arg4, arg5, format, arg7);
                }
            }
        }
    }

    // 0x100bd8c80
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_6::operator()(BaseApp*) const ::{
        lambda(RenderContext&) #1
    }
    ::~RenderContext() {
        ((this + 32))->~WrapArrayValueCopy();
    }

    // 0x100bd8d10
    Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                      void const*)::$_7::$_7($_7&& arg1) {
        Texture* pTVar1 = *(Texture**)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((unsigned long)uVar4 >> 32);
        field_0 = pTVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((unsigned long)uVar2 >> 32);
        new (&field_32) WrapArrayValueCopy<unsigned char>(*((arg1 + 32)));
    }

    // 0x100bd8d80
    Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                      void const*)::$_7::$_7(const $_7& arg1) {
        Texture* pTVar1 = *(Texture**)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((unsigned long)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((unsigned long)uVar4 >> 32);
        field_0 = pTVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((unsigned long)uVar2 >> 32);
        new (&field_32) WrapArrayValueCopy<unsigned char>(*((arg1 + 32)));
    }

    // 0x100bd8dd0
    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void const*)::$_7::operator()(RenderContext& renderContext) const {
        unsigned int uVar1;
        unsigned int arg2;
        unsigned int arg3;
        unsigned int arg4;
        unsigned int arg5;
        Format format;
        long lVar3;
        void* arg7;
        Texture* this_03;

        Texture* this_00 = field_0;
        if (renderContext.IsObjectAlive(&this_00->field_8)) {
            this_03 = this_00;
            if (this_00->IsCreated()) {
                uVar1 = this_00->field_24;
                if (uVar1 == 0) {
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2D_OGL.cpp",
                              268, "Attempting to update texture where texture desc is 0x0 pixels.");
                } else {
                    lVar3 = ((MapArea*)this_03->Instance())->GetOrigin();
                    if (*(unsigned int*)(lVar3 + 52) < uVar1) {
                        LogAssert("m_Desc.m_Width <= (uint)RenderDevice::Instance().GetDeviceCaps().m_MaxTextureSize",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/Texture2D_OGL.cpp",
                                  262, "Dead texture object in deferred Update (impossible dimensions)");
                    }
                    uVar1 = field_8;
                    arg2 = field_12;
                    arg3 = field_16;
                    arg4 = field_20;
                    arg5 = field_24;
                    format = field_28;
                    arg7 = (void*)field_32.end();
                    UpdateOnCurrentThread((Texture2D*)this_00, uVar1, arg2, arg3, arg4, arg5, format, arg7);
                }
            }
        }
    }

} // namespace jag::render
