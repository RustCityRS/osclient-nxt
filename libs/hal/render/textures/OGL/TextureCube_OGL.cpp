// libs/hal/render/textures/OGL/TextureCube_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/textures/TextureCube.h"

namespace jag::render {
    // 0x100bcc2d0, 48 bytes, base-object constructor, placed by class name and debug map
    // TextureCube::TextureCube(char const*)
    void TextureCube::TextureCube(char* param_1) {
        new (this) Texture(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee8650 + 16);
        field_16 = 34067;
    }

    // 0x100bcc300, 16 bytes, complete-object constructor, placed by class name and debug map
    // TextureCube::TextureCube(char const*): jumps straight to the base-object constructor

    // 0x100bcc310, 896 bytes, placed by class name and debug map
    // TextureCube::Create(Texture::Desc const&, std::array<ResourceDataT<unsigned char const> const*, 6ul> const&)
    /* TextureCube::Create(Texture::Desc const&,
   std::array<ResourceDataT<unsigned char const> const*, 6ul> const&) */

    undefined4 TextureCube::Create(Desc* param_1, array* param_2) {
        uint uVar1;
        uint uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        char cVar11;
        undefined4 uVar12;
        MapArea* pMVar13;
        long lVar14;
        RenderDevice* this_00;
        RenderContext* this_01;
        ImmediateRenderContext* pIVar15;
        char* pcVar16;
        char* pcVar17;
        long* plVar18;
        undefined8 uVar19;
        ulong uVar20;
        Singleton<RenderDevice>* this_02;
        ActiveTextureSaveRestore local_c0;
        undefined1 local_b0[28];
        undefined4 local_94;
        String local_90[88];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_296 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureCube_OGL.cpp",
                      26, "Call Destroy() before calling Create() again");
        }
        pMVar13 = (MapArea*)Instance();
        lVar14 = pMVar13->GetOrigin();
        this_00 = (RenderDevice*)pMVar13->Instance();
        this_01 = (RenderContext*)this_00->GetCurrentThreadRenderContext();
        pIVar15 = (ImmediateRenderContext*)this_01->GetImmediateContext();
        new (&local_c0) ActiveTextureSaveRestore(pIVar15);
        GenerateBindTextures(34067);
        cVar11 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar11 == '\0') {
            local_94 = field_296;
            pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b0._16_8_ = lVar14;
            pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            Instrumentation::String::String(local_90, pcVar16, pcVar17);
            5890->~AutoSingleton(local_94, local_90);
            lVar14 = local_b0._16_8_;
            local_90->~String();
        }
        iVar7 = param_1->field_0;
        iVar8 = param_1->field_4;
        iVar9 = param_1->field_8;
        iVar10 = param_1->field_12;
        uVar19 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        uVar4 = *(undefined8*)&param_1->field_32;
        uVar5 = *(undefined8*)&param_1->field_40;
        uVar6 = *(undefined8*)&param_1->field_56;
        field_72 = param_1->field_48;
        field_80 = uVar6;
        field_56 = uVar4;
        field_64 = uVar5;
        field_40 = uVar19;
        field_48 = uVar3;
        field_24 = iVar7;
        field_28 = iVar8;
        field_32 = iVar9;
        field_36 = iVar10;
        SetFaceMipLevels(param_1);
        new (local_b0) GLFormat(param_1->field_12);
        if (*(char*)(lVar14 + 330) == '\0') {
            uVar20 = 0;
            do {
                GetCubeMapFace((int)uVar20);
                std::array<ResourceDataT<unsigned char const> const*, 6ul>::operator[](
                    (array<ResourceDataT<unsigned char const> const*, 6ul>*)param_2, uVar20);
                CreateCubeFaceTopLevelMip();
                uVar20 = uVar20 + 1;
            } while (uVar20 != 6);
        } else {
            if (local_b0._12_4_ == 0) {
                local_b0._12_4_ = local_b0._0_4_;
            }
            (*___glewTexStorage2D)(34067, field_88, local_b0._12_4_, param_1->field_0, param_1->field_4);
            CheckGlErrorInternal("glTexStorage2D",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "textures/OGL/TextureCube_OGL.cpp",
                                 57);
            uVar20 = 0;
            do {
                plVar18 = (long*)std::array<ResourceDataT<unsigned char const> const*, 6ul>::operator[](
                    (array<ResourceDataT<unsigned char const> const*, 6ul>*)param_2, uVar20);
                if (((long*)*plVar18 != (long*)0) && (lVar14 = *(long*)*plVar18, lVar14 != 0)) {
                    uVar12 = GetCubeMapFace((int)uVar20);
                    UpdateOnCurrentThread(this, uVar12, 0, 0, 0, param_1->field_0, param_1->field_4, param_1->field_12,
                                          lVar14);
                }
                uVar20 = uVar20 + 1;
            } while (uVar20 != 6);
        }
        uVar1 = field_88;
        uVar2 = param_1->field_24;
        if ((1 < uVar1) && (uVar2 < 2)) {
            this_02 = (Singleton<RenderDevice>*)(ulong)(uint)param_1->field_12;
            cVar11 = IsCompressedFormat();
            if (cVar11 == '\0') {
                pMVar13 = (MapArea*)this_02->Instance();
                lVar14 = pMVar13->GetOrigin();
                if (*(char*)(lVar14 + 336) == '\0') {
                    uVar19 = logger::default_logger();
                    logger::Logger::Log(uVar19, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/textures/OGL/TextureCube_OGL.cpp",
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
                /* WARNING: Subroutine does not return */
                LogAssert("textureDesc.m_DataMipLevels > 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/TextureCube_OGL.cpp",
                          94, (char*)0);
            }
            CreateSubLevelMips(this, param_1->field_24, param_2);
        }
    LAB_100bcc61d:
        uVar12 = FinaliseCreate("TextureCube", param_1);
        local_c0.~ActiveTextureSaveRestore();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar12;
    }

    // 0x100bcc6a0, 720 bytes, placed by class name and debug map
    // TextureCube::UpdateOnCurrentThread(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)
    void TextureCube::UpdateOnCurrentThread(undefined4 param_2, uint param_3, uint param_4, uint param_5, uint param_6,
                                            uint param_7, uint param_8, long param_9) {
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        RenderDevice* this_00;
        RenderContext* this_01;
        ImmediateRenderContext* this_02;
        uint* puVar5;
        MapArea* this_03;
        long lVar6;
        unique_lock<std::mutex>* this_05;
        Singleton<RenderDevice>* this_06;
        ActiveTextureSaveRestore local_70;
        unique_lock<std::mutex> local_60[16];
        GLFormat local_50;
        uint local_3c;
        uint local_34;

        local_34 = param_6;
        if (param_9 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSrcTexelData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "TextureCube_OGL.cpp",
                      145, (char*)0);
        }
        iVar3 = GetNativeTextureId();
        if (iVar3 != 0) {
            iVar3 = GetMaxLineWidth();
            if (iVar3 != -1) {
                ValidateUpdateParams(param_3, param_4, param_5, 0, local_34, param_7, 1);
                cVar2 = ((TextureCube*)this)->UseGLWriteMutex();
                if (cVar2 == '\0') {
                    this_05 = local_60;
                    std::unique_lock<std::mutex>::unique_lock(this_05);
                } else {
                    this_05 = local_60;
                    std::unique_lock<std::mutex>::unique_lock(this_05, (mutex*)&field_368);
                }
                this_00 = (RenderDevice*)this_05->Instance();
                this_01 = (RenderContext*)this_00->GetCurrentThreadRenderContext();
                this_02 = (ImmediateRenderContext*)this_01->GetImmediateContext();
                new (&local_70) ActiveTextureSaveRestore(this_02);
                this_02->BindTexture(this, 0);
                new (&local_50) GLFormat(param_8);
                cVar2 = IsCompressedFormat(param_8);
                if (cVar2 == '\0') {
                    this_06 = (Singleton<RenderDevice>*)(ulong)param_8;
                    iVar3 = GetFormatDepthBits();
                    if (iVar3 != 0) {
                        this_03 = (MapArea*)this_06->Instance();
                        lVar6 = this_03->GetOrigin();
                        if (*(char*)(lVar6 + 152) == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("GetFormatDepthBits(format) == 0 || "
                                      "RenderDevice::Instance().GetDeviceCaps().m_DepthTextureLoad",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/TextureCube_OGL.cpp",
                                      177, (char*)0);
                        }
                    }
                    _glTexSubImage2D(param_2, param_3, param_4, param_5, local_34, param_7, local_50.field_0._4_4_,
                                     local_50.field_0._8_4_, param_9);
                    CheckGlErrorInternal("glTexSubImage2D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/TextureCube_OGL.cpp",
                                         187);
                LAB_100bcc91a:
                    local_70.~ActiveTextureSaveRestore();
                    std::unique_lock<std::mutex>::~unique_lock(local_60);
                    return;
                }
                if (((param_4 | param_5) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("x % 4 == 0 && y % 4 == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/TextureCube_OGL.cpp",
                              161, (char*)0);
                }
                local_50._16_4_ = 4;
                puVar5 = std::max<unsigned int>(&local_34, (uint*)&local_50.field_16);
                if ((*puVar5 & 3) == 0) {
                    local_3c = 4;
                    puVar5 = std::max<unsigned int>(&param_7, &local_3c);
                    if ((*puVar5 & 3) == 0) {
                        uVar4 = GetImageByteSize(local_34, param_7, param_8, param_3);
                        (*___glewCompressedTexSubImage2D)(param_2, param_3, param_4, param_5, local_34, param_7,
                                                          local_50.field_0._0_4_, uVar4, param_9);
                        CheckGlErrorInternal("glCompressedTexSubImage2D",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/TextureCube_OGL.cpp",
                                             173);
                        goto LAB_100bcc91a;
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("std::max(width, 4u) % 4 == 0 && std::max(height, 4u) % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/TextureCube_OGL.cpp",
                          162, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "TextureCube_OGL.cpp",
                  146, (char*)0);
    }

    // 0x100bcc980, 240 bytes, placed by class name and debug map
    // TextureCube::CreateCubeFaceTopLevelMip(CubeFace, Texture::Desc const&, ResourceDataT<unsigned char const> const*)
    void TextureCube::CreateCubeFaceTopLevelMip(undefined8 param_1, undefined4 param_2, undefined4* param_3,
                                                undefined8* param_4) {
        undefined4 uVar1;
        undefined8 uVar3;
        undefined8 uVar4;
        int iVar5;
        char* pcVar6;
        undefined1 local_40[16];

        new (local_40) GLFormat(param_3[3]);
        uVar1 = param_3[3];
        if (IsCompressedFormat(uVar1) == '\0') {
            if (param_4 == (undefined8*)0) {
                uVar4 = 0;
            } else {
                uVar4 = *param_4;
            }
            _glTexImage2D(param_2, param_3[9], local_40._0_4_, *param_3, param_3[1], 0, local_40._4_4_, local_40._8_4_,
                          uVar4);
            pcVar6 = "glTexImage2D";
            iVar5 = 227;
        } else {
            uVar4 = 0;
            uVar3 = GetImageByteSize(*param_3, param_3[1], uVar1, 0);
            if (param_4 != (undefined8*)0) {
                uVar4 = *param_4;
            }
            (*___glewCompressedTexImage2D)(param_2, param_3[9], local_40._0_4_, *param_3, param_3[1], 0, uVar3, uVar4);
            pcVar6 = "glCompressedTexImage2D";
            iVar5 = 213;
        }
        CheckGlErrorInternal(pcVar6,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/TextureCube_OGL.cpp",
                             iVar5);
    }

    // 0x100bcca70, 592 bytes, placed by class name and debug map
    // TextureCube::CreateSubLevelMips(unsigned int, std::array<ResourceDataT<unsigned char const> const*, 6ul> const&)
    /* TextureCube::CreateSubLevelMips(unsigned int,
   std::array<ResourceDataT<unsigned char const> const*, 6ul> const&) */

    void TextureCube::CreateSubLevelMips(uint param_1, array* param_2) {
        undefined4 uVar2;
        int iVar3;
        MapArea* this_00;
        long* plVar4;
        ulong uVar5;
        undefined8 uVar6;
        char* pcVar7;
        uint uVar8;
        ulong uVar9;
        ulong uVar10;
        undefined1 local_88[24];
        long local_70;
        ulong local_68;
        ulong local_60;
        ulong local_58;
        ulong local_50;
        uint local_44;
        undefined4 local_40;
        undefined4 local_3c;
        TextureCube* local_38;

        local_88._16_8_ = param_2;
        this_00 = (MapArea*)Instance();
        local_70 = this_00->GetOrigin();
        local_38 = this;
        new (local_88) GLFormat(field_36);
        local_40 = local_88._0_4_;
        local_60 = (ulong)(uint)local_88._4_4_;
        local_58 = (ulong)(uint)local_88._8_4_;
        local_68 = (ulong)param_1;
        uVar5 = 0;
        local_44 = param_1;
        while (true) {
            uVar2 = GetCubeMapFace((int)uVar5);
            uVar10 = 1;
            if (1 < param_1) {
                uVar8 = local_38->field_24;
                uVar9 = (ulong)local_38->field_28;
                uVar10 = 1;
                local_50 = uVar5;
                local_3c = uVar2;
                do {
                    uVar9 = uVar9 >> 1;
                    uVar8 = uVar8 >> 1;
                    iVar3 = GetImageByteSize(uVar8, uVar9, local_38->field_36);
                    if (iVar3 == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("mipImageSize > 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/TextureCube_OGL.cpp",
                                  248, (char*)0);
                    }
                    plVar4 = (long*)std::array<ResourceDataT<unsigned char const> const*, 6ul>::operator[](
                        (array<ResourceDataT<unsigned char const> const*, 6ul>*)local_88._16_8_, local_50);
                    if (*plVar4 == 0) {
                        uVar6 = 0;
                    } else if (uVar10 < *(uint*)&local_38->field_48) {
                        uVar6 = *(undefined8*)(*plVar4 + uVar10 * 24);
                    } else {
                        uVar6 = 0;
                    }
                    if (*(char*)(local_70 + 330) == '\0') {
                        if (IsCompressedFormat(local_38->field_36) == '\0') {
                            _glTexImage2D(local_3c, uVar10 & 4294967295, local_40, uVar8, uVar9, 0, local_60, local_58,
                                          uVar6);
                            pcVar7 = "glTexImage2D";
                            iVar3 = 289;
                        } else {
                            (*___glewCompressedTexImage2D)(local_3c, uVar10 & 4294967295, local_40);
                            pcVar7 = "glCompressedTexImage2D";
                            iVar3 = 275;
                        }
                        CheckGlErrorInternal(pcVar7,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/TextureCube_OGL.cpp",
                                             iVar3);
                    } else {
                        UpdateOnCurrentThread(local_38, local_3c, uVar10 & 4294967295, 0, 0, uVar8, uVar9,
                                              local_38->field_36, uVar6);
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 != local_68);
                uVar5 = local_50;
                param_1 = local_44;
            }
            if ((uint)uVar10 != param_1)
                break;
            uVar5 = uVar5 + 1;
            if (uVar5 == 6) {
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("iMip == maxLevels",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "TextureCube_OGL.cpp",
                  297, (char*)0);
    }

    // 0x100bcccc0, 48 bytes, placed by class name and debug map
    // TextureCube::Create(Texture::Desc const&)
    void TextureCube::Create(Desc* param_1) {
        undefined8 local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        undefined8 uStack_20;
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = 0;
        uStack_10 = 0;
        local_28 = 0;
        uStack_20 = 0;
        local_38 = 0;
        uStack_30 = 0;
        Create(this, param_1, (array*)&local_38);
    }

    // 0x100bcccf0, 560 bytes, placed by class name and debug map
    // TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)
    void TextureCube::Update(undefined4 param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7,
                             undefined4 param_8, uchar* param_9) {
        bool bVar1;
        int iVar2;
        uint uVar3;
        RenderDevice* pRVar4;
        Singleton<RenderDevice>* this_00;
        WrapArrayValueCopy<unsigned char, eastl::allocator>* this_01;
        WrapArrayValueCopy<unsigned char, eastl::allocator> local_178[48];
        undefined1 local_148[92];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar2 = GetNativeTextureId();
        if (iVar2 != 0) {
            iVar2 = GetMaxLineWidth();
            local_148._24_4_ = param_6;
            local_148._20_4_ = param_5;
            if (iVar2 != -1) {
                if (param_9 == (uchar*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pSrcTexelData",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/TextureCube_OGL.cpp",
                              119, (char*)0);
                }
                ValidateUpdateParams(param_3, param_4, param_5, 0, param_6, param_7, 1);
                this_00 = (Singleton<RenderDevice>*)(ulong)(uint)local_148._24_4_;
                uVar3 = GetImageByteSize(this_00, param_7, param_8, param_3);
                pRVar4 = (RenderDevice*)this_00->Instance();
                bVar1 = (bool)pRVar4->ShouldDefer();
                this_01 = local_178;
                WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(this_01, param_9, (ulong)uVar3,
                                                                                        bVar1);
                pRVar4 = (RenderDevice*)this_01->Instance();
                local_148._8_4_ = param_2;
                local_148._12_4_ = param_3;
                local_148._16_4_ = param_4;
                local_148._28_4_ = param_7;
                local_148._32_4_ = param_8;
                local_148._0_8_ = this;
                new ((local_148 + 40)) WrapArrayValueCopy<unsigned char, eastl::allocator>(local_178);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                        Format, void_const*)::__9,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                          (__9*)local_148);
                pRVar4->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
                Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                       void_const*)::$_9::~__9((__9*)local_148);
                local_178->~WrapArrayValueCopy();
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "TextureCube_OGL.cpp",
                  118, (char*)0);
    }

    // 0x100bccf30, 16 bytes, complete-object destructor, placed by class name and debug map
    // TextureCube::Update(CubeFace, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_9::~$_9(): jumps straight to the base-object destructor

} // namespace jag::render
