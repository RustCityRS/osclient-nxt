// libs/hal/render/textures/OGL/Texture2D_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/textures/Texture2D.h"

namespace jag::render {
    // 0x103bd9e40, 16 bytes, __common; set at startup by ___cxx_global_var_init
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> Texture2D::NullTexture;

    // 0x100bca8c0, 48 bytes, base-object constructor, placed by class name and debug map
    // Texture2D::Texture2D(char const*)
    void Texture2D::Texture2D(char* param_1) {
        new (this) Texture(param_1);
        field_0 = &PTR__Texture2D_100f27c60;
        field_16 = 3553;
    }

    // 0x100bca8f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Texture2D::Texture2D(char const*): jumps straight to the base-object constructor

    // 0x100bca900, 1504 bytes, placed by class name and debug map
    // Texture2D::Create(Texture::Desc const&, ResourceDataT<unsigned char const> const*, unsigned int)
    undefined4 Texture2D::Create(Desc* param_1, ResourceDataT* param_2, uint param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        undefined4 uVar7;
        int iVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined3 uVar13;
        undefined1 uVar14;
        undefined3 uVar15;
        undefined1 uVar16;
        undefined3 uVar17;
        char cVar19;
        undefined4 uVar20;
        undefined8 uVar21;
        MapArea* pMVar22;
        long lVar23;
        RenderDevice* this_00;
        RenderContext* this_01;
        ImmediateRenderContext* pIVar24;
        char* pcVar25;
        char* pcVar26;
        Singleton<RenderDevice>* pSVar27;
        undefined8 in_stack_ffffffffffffff20;
        ActiveTextureSaveRestore local_d0;
        uint local_b4;
        undefined4 local_ac;
        undefined1 local_a8[20];
        undefined4 local_94;
        String local_90[88];
        long local_38;

        uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff20 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar1 = param_1->field_0;
        iVar2 = param_1->field_4;
        uVar21 = GetName();
        pSVar27 = (Singleton<RenderDevice>*)(local_a8 + 16);
        1077936128->~AutoSingleton(pSVar27, "Texture2D Create (width: %i, height: %i, name: %s)", iVar1, iVar2, uVar21);
        if (*(int*)field_296 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      29, "Call Destroy() before calling Create() again");
        }
        pMVar22 = (MapArea*)pSVar27->Instance();
        lVar23 = pMVar22->GetOrigin();
        local_b4 = param_1->field_16;
        local_94 = 3553;
        if (1 < local_b4) {
            local_94 = 37120;
        }
        this_00 = (RenderDevice*)pMVar22->Instance();
        this_01 = (RenderContext*)this_00->GetCurrentThreadRenderContext();
        pIVar24 = (ImmediateRenderContext*)this_01->GetImmediateContext();
        new (&local_d0) ActiveTextureSaveRestore(pIVar24);
        GenerateBindTextures(local_94);
        cVar19 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar19 == '\0') {
            local_ac = *(undefined4*)field_296;
            pcVar25 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar26 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            Instrumentation::String::String(local_90, pcVar25, pcVar26);
            5890->~AutoSingleton(local_ac, local_90);
            local_90->~String();
        }
        uVar3 = param_1->field_0;
        uVar4 = param_1->field_4;
        uVar5 = param_1->field_8;
        uVar6 = param_1->field_12;
        uVar7 = param_1->field_16;
        iVar1 = param_1->field_20;
        iVar2 = param_1->field_24;
        iVar8 = param_1->field_28;
        uVar14 = param_1->field_32;
        uVar15 = *(undefined3*)&param_1->field_33;
        uVar9 = param_1->field_36;
        uVar16 = param_1->field_40;
        uVar17 = *(undefined3*)&param_1->field_41;
        uVar10 = *(undefined4*)&param_1->field_44;
        uVar11 = *(undefined4*)((long)&param_1->field_48 + 4);
        cVar19 = param_1->field_56;
        uVar13 = *(undefined3*)&param_1->field_57;
        uVar12 = param_1->field_60;
        *(undefined4*)&field_72 = *(undefined4*)&param_1->field_48;
        *(undefined4*)&field_76 = uVar11;
        field_80 = cVar19;
        *(undefined3*)&field_81 = uVar13;
        *(undefined4*)&field_84 = uVar12;
        field_56 = uVar14;
        *(undefined3*)&field_57 = uVar15;
        *(undefined4*)&field_60 = uVar9;
        field_64 = uVar16;
        *(undefined3*)&field_65 = uVar17;
        *(undefined4*)&field_68 = uVar10;
        *(undefined4*)&field_40 = uVar7;
        *(int*)&field_44 = iVar1;
        *(int*)&field_48 = iVar2;
        *(int*)&field_52 = iVar8;
        field_24 = uVar3;
        field_28 = uVar4;
        field_32 = uVar5;
        field_36 = uVar6;
        if ((param_1->field_56 != '\0') && (*(char*)(lVar23 + 326) != '\0')) {
            if (1 < local_b4) {
                /* WARNING: Subroutine does not return */
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
        SetFaceMipLevels(param_1);
        new (local_a8) GLFormat(param_1->field_12);
        if ((uint)param_1->field_16 < 2) {
            if (*(char*)(lVar23 + 330) == '\0') {
                iVar1 = param_1->field_12;
                cVar19 = IsCompressedFormat(iVar1);
                if (cVar19 == '\0') {
                    if (param_2 == (ResourceDataT*)0) {
                        uVar21 = 0;
                    } else {
                        uVar21 = *(undefined8*)param_2;
                    }
                    _glTexImage2D(local_94, param_1->field_36, local_a8._0_4_, param_1->field_0, param_1->field_4, 0,
                                  local_a8._4_4_, CONCAT44(uVar20, local_a8._8_4_), uVar21);
                    CheckGlErrorInternal("glTexImage2D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         145);
                } else {
                    uVar20 = GetImageByteSize(param_1->field_0, param_1->field_4, iVar1, 0);
                    if (param_2 == (ResourceDataT*)0) {
                        uVar21 = 0;
                    } else {
                        uVar21 = *(undefined8*)param_2;
                    }
                    (*___glewCompressedTexImage2D)(local_94, param_1->field_36, local_a8._0_4_, param_1->field_0,
                                                   param_1->field_4, 0, uVar20, uVar21);
                    CheckGlErrorInternal("glCompressedTexImage2D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         131);
                }
            } else {
                if (local_a8._12_4_ == 0) {
                    local_a8._12_4_ = local_a8._0_4_;
                }
                (*___glewTexStorage2D)(local_94, *(undefined4*)&field_88, local_a8._12_4_, param_1->field_0,
                                       param_1->field_4);
                CheckGlErrorInternal("glTexStorage2D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2D_OGL.cpp",
                                     110);
                if ((param_2 != (ResourceDataT*)0) && (*(long*)param_2 != 0)) {
                    UpdateOnCurrentThread(this, 0, 0, 0, param_1->field_0, param_1->field_4, param_1->field_12,
                                          *(long*)param_2);
                }
            }
            uVar3 = *(uint*)&field_88;
            uVar4 = param_1->field_24;
            if ((1 < uVar3) && (uVar4 < 2)) {
                pSVar27 = (Singleton<RenderDevice>*)(ulong)(uint)param_1->field_12;
                cVar19 = IsCompressedFormat();
                if (cVar19 == '\0') {
                    pMVar22 = (MapArea*)pSVar27->Instance();
                    lVar23 = pMVar22->GetOrigin();
                    if (*(char*)(lVar23 + 336) == '\0') {
                        uVar21 = logger::default_logger();
                        logger::Logger::Log(uVar21, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/textures/OGL/Texture2D_OGL.cpp",
                                            163,
                                            "Auto-generating mips isn\'t supported on this device. Disabling mips.");
                        *(undefined4*)&field_88 = 1;
                        iVar1 = field_16;
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
            if (1 < uVar3) {
                if (uVar4 < 2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("textureDesc.m_DataMipLevels > 1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2D_OGL.cpp",
                              169, (char*)0);
                }
                CreateSubLevelMips(this, param_1->field_24, param_2, param_3);
            }
        } else {
            if (*(char*)(lVar23 + 167) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("deviceCaps.m_MultisampleTextures == true",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          69, (char*)0);
            }
            if (*(char*)(lVar23 + 331) == '\0') {
                (*___glewTexImage2DMultisample)(local_94, param_1->field_16, local_a8._0_4_, param_1->field_0,
                                                param_1->field_4, 1);
                CheckGlErrorInternal("glTexImage2DMultisample",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2D_OGL.cpp",
                                     97);
            } else {
                (*___glewTexStorage2DMultisample)(local_94, param_1->field_16, local_a8._0_4_, param_1->field_0,
                                                  param_1->field_4, 1);
                CheckGlErrorInternal("glTexStorage2DMultisample",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2D_OGL.cpp",
                                     86);
            }
        }
    LAB_100bcadb5:
        iVar1 = field_16;
    joined_r0x000100bcaeaf:
        if ((iVar1 == 37120) && (*(int*)&field_88 != 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_faceMipLevels == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      178, "Multisample textures only support 1 mip level");
        }
        uVar20 = FinaliseCreate("Texture2D", param_1);
        local_d0.~ActiveTextureSaveRestore();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar20;
    }

    // 0x100bcaef0, 960 bytes, placed by class name and debug map
    // Texture2D::UpdateOnCurrentThread(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)
    void Texture2D::UpdateOnCurrentThread(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5,
                                          uint param_7, long param_8) {
        undefined4 uVar1;
        uint uVar3;
        uint uVar4;
        char cVar5;
        int iVar6;
        uint uVar7;
        uint uVar8;
        undefined8 uVar9;
        RenderDevice* pRVar10;
        RenderContext* pRVar11;
        ImmediateRenderContext* pIVar12;
        uint* puVar13;
        MapArea* pMVar14;
        long lVar15;
        Texture* this_01;
        unique_lock<std::mutex>* this_02;
        Singleton<RenderDevice>* pSVar16;
        ActiveTextureSaveRestore local_88;
        undefined1 local_78[16];
        int local_68[5];
        uint local_54[3];
        undefined4 local_44;
        undefined1 local_40[4];
        uint local_38;
        uint local_34;

        local_38 = param_4;
        local_34 = param_5;
        if (*(int*)field_296 != 0) {
            iVar6 = GetMaxLineWidth();
            if (iVar6 != -1) {
                local_54[2] = param_2;
                ValidateUpdateParams(param_1, param_2, param_3, 0, local_38, local_34, 1);
                if (param_8 == 0) {
                    pMVar14 = (MapArea*)((Texture2D*)this)->Instance();
                    lVar15 = pMVar14->GetOrigin();
                    if (*(char*)(lVar15 + 324) != '\0') {
                        _glGetIntegerv(35055, local_68);
                        if (local_68[0] == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("currentPixelBufferId",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture2D_OGL.cpp",
                                      293, (char*)0);
                        }
                    }
                }
                local_44 = GetImageByteSize(local_38, local_34, param_7, param_1);
                uVar4 = local_34;
                uVar3 = local_38;
                uVar1 = *(undefined4*)field_296;
                uVar9 = GetName();
                uVar8 = param_3;
                uVar7 = local_54[2];
                this_01 = (Texture*)local_40;
                this_01->~AutoSingleton(
                    "Texture2D Update (mip: %u, x: %u, y: %u, width: %u, height: %u, ID: %u, name: %s)", param_1,
                    local_54[2], param_3, uVar3, uVar4, uVar1, uVar9);
                cVar5 = this_01->UseGLWriteMutex();
                if (cVar5 == '\0') {
                    this_02 = (unique_lock<std::mutex>*)local_68;
                    std::unique_lock<std::mutex>::unique_lock(this_02);
                } else {
                    this_02 = (unique_lock<std::mutex>*)local_68;
                    std::unique_lock<std::mutex>::unique_lock(this_02, (mutex*)&field_368);
                }
                pRVar10 = (RenderDevice*)this_02->Instance();
                pRVar11 = (RenderContext*)pRVar10->GetCurrentThreadRenderContext();
                pIVar12 = (ImmediateRenderContext*)pRVar11->GetImmediateContext();
                new (&local_88) ActiveTextureSaveRestore(pIVar12);
                pRVar10 = (RenderDevice*)local_88.Instance();
                pRVar11 = (RenderContext*)pRVar10->GetCurrentThreadRenderContext();
                pIVar12 = (ImmediateRenderContext*)pRVar11->GetImmediateContext();
                pIVar12->BindTexture(this, 0);
                new (local_78) GLFormat(param_7);
                cVar5 = IsCompressedFormat(field_36);
                if (cVar5 == '\0') {
                    pSVar16 = (Singleton<RenderDevice>*)(ulong)param_7;
                    iVar6 = GetFormatDepthBits();
                    if (iVar6 != 0) {
                        pMVar14 = (MapArea*)pSVar16->Instance();
                        lVar15 = pMVar14->GetOrigin();
                        if (*(char*)(lVar15 + 152) == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("GetFormatDepthBits(format) == 0 || "
                                      "RenderDevice::Instance().GetDeviceCaps().m_DepthTextureLoad",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture2D_OGL.cpp",
                                      335, (char*)0);
                        }
                    }
                    _glTexSubImage2D(field_16, param_1, uVar7, uVar8, local_38, local_34, local_78._4_4_,
                                     local_78._8_4_, param_8);
                    CheckGlErrorInternal("glTexSubImage2D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         345);
                LAB_100bcb214:
                    local_88.~ActiveTextureSaveRestore();
                    local_68->~unique_lock();
                    return;
                }
                if (((uVar7 | uVar8) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("x % 4 == 0 && y % 4 == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2D_OGL.cpp",
                              312, (char*)0);
                }
                local_54[0] = 4;
                puVar13 = std::max<unsigned int>(&local_38, local_54);
                if ((*puVar13 & 3) == 0) {
                    local_54[1] = 4;
                    puVar13 = std::max<unsigned int>(&local_34, local_54 + 1);
                    if ((*puVar13 & 3) == 0) {
                        pSVar16 = (Singleton<RenderDevice>*)(ulong)field_36;
                        cVar5 = IsETC2CompressedFormat();
                        if (cVar5 != '\0') {
                            pMVar14 = (MapArea*)pSVar16->Instance();
                            lVar15 = pMVar14->GetOrigin();
                            if (*(char*)(lVar15 + 163) != '\0') {
                                local_44 = GetImageByteSize(local_38, local_34 + uVar8, param_7, 0);
                            }
                        }
                        (*___glewCompressedTexSubImage2D)(field_16, param_1, uVar7, uVar8, local_38, local_34,
                                                          local_78._0_4_, local_44, param_8);
                        CheckGlErrorInternal("glCompressedTexSubImage2D",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture2D_OGL.cpp",
                                             331);
                        goto LAB_100bcb214;
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("std::max(width, 4u) % 4 == 0 && std::max(height, 4u) % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          313, (char*)0);
            }
        }
        uVar7 = GetNativeTextureId();
        uVar8 = GetMaxLineWidth();
        /* WARNING: Subroutine does not return */
        LogAssert("m_GLTexture && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture2D_OGL.cpp",
                  285, "Invalid native texture ID %d or type %d", (ulong)uVar7, (ulong)uVar8);
    }

    // 0x100bcb2b0, 640 bytes, placed by class name and debug map
    // Texture2D::CreateSubLevelMips(unsigned int, ResourceDataT<unsigned char const> const*, unsigned int)
    void Texture2D::CreateSubLevelMips(uint param_1, ResourceDataT* param_2, uint param_3) {
        long lVar1;
        ResourceDataT* pRVar2;
        uint uVar4;
        uint uVar5;
        int iVar6;
        MapArea* this_00;
        undefined8 uVar7;
        ulong uVar8;
        int iVar9;
        char* pcVar10;
        ulong uVar11;
        long lVar12;
        undefined1 local_88[24];
        ResourceDataT* local_70;
        ulong local_68;
        ulong local_60;
        ulong local_58;
        undefined4 local_48;
        uint local_44;
        Texture2D* local_40;
        uint local_38;
        uint local_34;

        this_00 = (MapArea*)Instance();
        local_88._16_8_ = this_00->GetOrigin();
        uVar4 = GetImageByteSize(field_24, field_28, field_36);
        new (local_88) GLFormat(field_36);
        uVar5 = 1;
        if (1 < param_1) {
            local_48 = local_88._0_4_;
            local_60 = (ulong)(uint)local_88._4_4_;
            local_58 = (ulong)(uint)local_88._8_4_;
            local_68 = (ulong)param_1;
            local_38 = field_24;
            local_34 = field_28;
            uVar11 = 1;
            local_70 = param_2;
            local_44 = param_1;
            local_40 = this;
            do {
                pRVar2 = local_70;
                param_2 = param_2 + 24;
                if ((param_3 <= uVar4) && (local_70 != (ResourceDataT*)0)) {
                    uVar8 = uVar11 & 4294967295;
                    break;
                }
                local_34 = local_34 >> 1;
                local_38 = local_38 >> 1;
                uVar7 = GetImageByteSize(local_38, local_34, local_40->field_36);
                iVar6 = (int)uVar7;
                if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("mipImageSize > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2D_OGL.cpp",
                              367, (char*)0);
                }
                if (pRVar2 == (ResourceDataT*)0) {
                    lVar12 = 0;
                } else if (uVar11 < *(uint*)&local_40->field_48) {
                    lVar1 = *(long*)param_2;
                    lVar12 = 0;
                    if (iVar6 + uVar4 <= param_3) {
                        lVar12 = lVar1;
                    }
                    if (lVar1 == 0) {
                        lVar12 = lVar1;
                    }
                } else {
                    lVar12 = 0;
                }
                if (*(char*)(local_88._16_8_ + 330) == '\0') {
                    if (IsCompressedFormat(local_40->field_36) == '\0') {
                        _glTexImage2D(3553, uVar11 & 4294967295, local_48, local_38, local_34, 0, local_60, local_58,
                                      lVar12);
                        pcVar10 = "glTexImage2D";
                        iVar9 = 411;
                    } else {
                        (*___glewCompressedTexImage2D)(3553, uVar11 & 4294967295, local_48, local_38, local_34, 0,
                                                       uVar7, lVar12);
                        pcVar10 = "glCompressedTexImage2D";
                        iVar9 = 397;
                    }
                    CheckGlErrorInternal(pcVar10,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2D_OGL.cpp",
                                         iVar9);
                } else if (lVar12 != 0) {
                    UpdateOnCurrentThread(local_40, uVar11 & 4294967295, 0, 0, local_38, local_34, local_40->field_36,
                                          lVar12);
                }
                uVar4 = uVar4 + iVar6;
                uVar11 = uVar11 + 1;
                uVar8 = local_68;
            } while (local_68 != uVar11);
            uVar5 = (uint)uVar8;
            param_1 = local_44;
        }
        if (uVar5 != param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iMip == maxLevels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      421, (char*)0);
        }
    }

    // 0x100bcb530, 1088 bytes, placed by class name and debug map
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)
    void Texture2D::Update(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, undefined4 param_7,
                           uchar* param_8) {
        char cVar1;
        bool bVar2;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        Texture2D* this_00;
        long lVar7;
        MapArea* pMVar8;
        RenderDevice* pRVar9;
        GraphicsApp* pGVar10;
        Singleton<RenderDevice>* this_01;
        WrapArrayValueCopy<unsigned char, eastl::allocator>* this_02;
        WrapArrayValueCopy<unsigned char, eastl::allocator> local_170[48];
        undefined1 local_140[84];
        int local_ec;
        uint local_e8;
        uint local_e4;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Texture2D*)Instance();
        lVar7 = this_00->GetOrigin();
        if (*(char*)(lVar7 + 228) != '\0') {
            if (*(int*)field_296 == 0) {
            LAB_100bcb598:
                uVar4 = GetNativeTextureId();
                local_e4 = param_1;
                uVar5 = GetMaxLineWidth();
                /* WARNING: Subroutine does not return */
                LogAssert("!RenderDevice::Instance().GetDeviceCaps().m_MultithreadedTextureUpdates || (m_GLTexture && "
                          "(GetType() != TEXTURE_TYPE_UNKNOWN))",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          196, "Invalid native texture ID %d or type %d", (ulong)uVar4, (ulong)uVar5);
            }
            this_00 = this;
            if (GetMaxLineWidth() == -1)
                goto LAB_100bcb598;
        }
        local_ec = 0;
        pMVar8 = (MapArea*)this_00->Instance();
        lVar7 = pMVar8->GetOrigin();
        if (*(char*)(lVar7 + 324) != '\0') {
            pMVar8 = (MapArea*)35055;
            _glGetIntegerv(35055, &local_ec);
        }
        cVar1 = this_thread::IsMainThread();
        uVar5 = param_4;
        uVar4 = param_5;
        if ((cVar1 == '\0') || (local_ec != 0)) {
            if (local_ec == 0) {
                pRVar9 = (RenderDevice*)pMVar8->Instance();
                cVar1 = pRVar9->IsRenderThread();
                if (cVar1 == '\0') {
                    pMVar8 = (MapArea*)pRVar9->Instance();
                    lVar7 = pMVar8->GetOrigin();
                    uVar5 = param_4;
                    uVar4 = param_5;
                    if (*(char*)(lVar7 + 228) == '\0') {
                        if (param_8 == (uchar*)0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("pSrcTexelData",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture2D_OGL.cpp",
                                      213, (char*)0);
                        }
                        local_e8 = param_3;
                        ValidateUpdateParams(param_1, param_2, param_3, 0, param_4, param_5, 1);
                        uVar4 = GetImageByteSize(uVar5, uVar4, param_7, param_1);
                        pGVar10 = (GraphicsApp*)local_170;
                        new (pGVar10) WrapArrayValueCopy<unsigned char, eastl::allocator>(param_8, (ulong)uVar4, true);
                        pGVar10 = (GraphicsApp*)pGVar10->Instance();
                        local_140._16_4_ = local_e8;
                        local_140._20_4_ = param_4;
                        local_140._24_4_ = param_5;
                        local_140._28_4_ = param_7;
                        local_140._0_8_ = this;
                        local_140._8_4_ = param_1;
                        local_140._12_4_ = param_2;
                        new ((local_140 + 32)) WrapArrayValueCopy<unsigned char, eastl::allocator>(local_170);
                        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                            Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                              Format, void_const*)::__6,
                            void>((function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                                  (__6*)local_140);
                        pGVar10->QueueMainDrawThreadEvent(&local_d8);
                        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                            ~function(
                                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
                        Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                               void_const*)::$_6::~__6((__6*)local_140);
                        goto LAB_100bcb75d;
                    }
                }
            }
            UpdateOnCurrentThread(this, param_1, param_2, param_3, param_4, param_5, param_7, param_8);
        } else {
            if (param_8 == (uchar*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("pSrcTexelData",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2D_OGL.cpp",
                          249, (char*)0);
            }
            local_e8 = param_3;
            local_e4 = param_2;
            ValidateUpdateParams(param_1, param_2, param_3, 0, param_4, param_5, 1);
            this_01 = (Singleton<RenderDevice>*)(ulong)uVar5;
            uVar6 = GetImageByteSize(this_01, uVar4, param_7, param_1);
            pRVar9 = (RenderDevice*)this_01->Instance();
            bVar2 = (bool)pRVar9->ShouldDefer();
            this_02 = local_170;
            WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(this_02, param_8, (ulong)uVar6,
                                                                                    bVar2);
            pRVar9 = (RenderDevice*)this_02->Instance();
            local_140._12_4_ = local_e4;
            local_140._16_4_ = local_e8;
            local_140._20_4_ = uVar5;
            local_140._24_4_ = uVar4;
            local_140._28_4_ = param_7;
            local_140._0_8_ = this;
            local_140._8_4_ = param_1;
            new ((local_140 + 32)) WrapArrayValueCopy<unsigned char, eastl::allocator>(local_170);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                                  void_const*)::__7,
                void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                      (__7*)local_140);
            pRVar9->RunOnRenderThread(&local_d8);
            fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                   void_const*)::$_7::~__7((__7*)local_140);
        LAB_100bcb75d:
            local_170->~WrapArrayValueCopy();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bcb9a0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::~$_6(): jumps straight to the base-object destructor

    // 0x100bcb9d0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_7::~$_7(): jumps straight to the base-object destructor

    // 0x100bcb9f0, 576 bytes, placed by class name and debug map
    // Texture2D::BindExternalTexture(unsigned int, TextureType, Texture::Desc const&)
    void Texture2D::BindExternalTexture(undefined4 param_1, int param_3, Desc* param_4) {
        undefined4 uVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        undefined1 uVar7;
        undefined3 uVar8;
        undefined4 uVar9;
        undefined1 uVar10;
        undefined7 uVar11;
        undefined3 uVar12;
        undefined4 uVar13;
        char cVar14;
        int iVar15;
        RenderDevice* pRVar16;
        RenderContext* pRVar17;
        ImmediateRenderContext* pIVar18;
        undefined8 uVar19;
        ActiveTextureSaveRestore local_40;

        if (*(int*)field_296 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      426, "Call Destroy() before calling BindExternalTexture() again");
        }
        pRVar16 = (RenderDevice*)Instance();
        iVar15 = pRVar16->GetReadyState();
        if (iVar15 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetReadyState() == RenderContextReadyState::STATE_READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      427, (char*)0);
        }
        pRVar16 = (RenderDevice*)pRVar16->Instance();
        pRVar17 = (RenderContext*)pRVar16->GetCurrentThreadRenderContext();
        cVar14 = pRVar17->IsLocked();
        if (cVar14 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().GetCurrentThreadRenderContext()->IsLocked()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      428, (char*)0);
        }
        if (((param_3 != 3553) && (param_3 != 34037)) && (param_3 != 37120)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "type == TEXTURE_TYPE_RECTANGLE || type == TEXTURE_TYPE_2D || type == TEXTURE_TYPE_2D_MULTISAMPLE",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                "Texture2D_OGL.cpp",
                430, (char*)0);
        }
        if ((param_4->field_16 != 1) && (param_3 != 37120)) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureDesc.m_SampleCount == 1 || type == TEXTURE_TYPE_2D_MULTISAMPLE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      434, (char*)0);
        }
        *(undefined4*)field_296 = param_1;
        field_16 = param_3;
        iVar15 = param_4->field_4;
        iVar2 = param_4->field_8;
        iVar3 = param_4->field_12;
        uVar1 = param_4->field_16;
        iVar4 = param_4->field_20;
        iVar5 = param_4->field_24;
        iVar6 = param_4->field_28;
        uVar7 = param_4->field_32;
        uVar8 = *(undefined3*)&param_4->field_33;
        uVar9 = param_4->field_36;
        uVar10 = param_4->field_40;
        uVar11 = *(undefined7*)&param_4->field_41;
        uVar19 = param_4->field_48;
        cVar14 = param_4->field_56;
        uVar12 = *(undefined3*)&param_4->field_57;
        uVar13 = param_4->field_60;
        field_24 = param_4->field_0;
        field_28 = iVar15;
        field_32 = iVar2;
        field_36 = iVar3;
        *(undefined4*)&field_40 = uVar1;
        *(int*)&field_44 = iVar4;
        *(int*)&field_48 = iVar5;
        *(int*)&field_52 = iVar6;
        field_56 = uVar7;
        *(undefined3*)&field_57 = uVar8;
        *(undefined4*)&field_60 = uVar9;
        field_64 = uVar10;
        *(undefined7*)&field_65 = uVar11;
        *(undefined8*)&field_72 = uVar19;
        field_80 = cVar14;
        *(undefined3*)&field_81 = uVar12;
        *(undefined4*)&field_84 = uVar13;
        pRVar16 = (RenderDevice*)pRVar17->Instance();
        pRVar17 = (RenderContext*)pRVar16->GetCurrentThreadRenderContext();
        pIVar18 = (ImmediateRenderContext*)pRVar17->GetImmediateContext();
        new (&local_40) ActiveTextureSaveRestore(pIVar18);
        pRVar16 = (RenderDevice*)local_40.Instance();
        pRVar17 = (RenderContext*)pRVar16->GetCurrentThreadRenderContext();
        pIVar18 = (ImmediateRenderContext*)pRVar17->GetImmediateContext();
        pIVar18->BindTexture(this, 0);
        cVar14 = (*(code*)field_0[4])(this);
        if (cVar14 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsCreatedNative()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2D_OGL.cpp",
                      445, (char*)0);
        }
        cVar14 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar14 != '\0') {
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                (fixed_string<char, 16, true, eastl::allocator>*)&field_96, "ExternalTexture");
        }
        uVar1 = *(undefined4*)field_296;
        uVar19 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        5890->~AutoSingleton(uVar1, uVar19);
        SetFaceMipLevels(param_4);
        FinaliseCreate("Texture2D", param_4);
        local_40.~ActiveTextureSaveRestore();
    }

    // 0x100bd2110, 16 bytes, base-object destructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::~$_6()
    /* ~$_6() */

    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void_const*)::$_6::~__6() {
        (&field_32)->~WrapArrayValueCopy();
    }

    // 0x100bd2130, 16 bytes, base-object destructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_7::~$_7()
    /* ~$_7() */

    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void_const*)::$_7::~__7() {
        (&field_32)->~WrapArrayValueCopy();
    }

    // 0x100bd8830, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::$_6($_6&&): jumps straight to the base-object constructor

    // 0x100bd8840, 48 bytes, base-object constructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::$_6($_6&&)
    /* $_6($_6&&) */

    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void_const*)::$_6::__6(__6* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((ulong)uVar4 >> 32);
        field_0 = uVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((ulong)uVar2 >> 32);
        new (&field_32, (WrapArrayValueCopy*)(param_1 + 32)) WrapArrayValueCopy<unsigned char, eastl::allocator>();
    }

    // 0x100bd88a0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::$_6($_6 const&): jumps straight to the base-object constructor

    // 0x100bd88b0, 48 bytes, base-object constructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::$_6($_6 const&)
    /* $_6($_6 const&) */

    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void_const*)::$_6::__6(__6* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((ulong)uVar4 >> 32);
        field_0 = uVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((ulong)uVar2 >> 32);
        new (&field_32, (WrapArrayValueCopy*)(param_1 + 32)) WrapArrayValueCopy<unsigned char, eastl::allocator>();
    }

    // 0x100bd8900, 272 bytes, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::operator()(BaseApp*) const
    /* Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, Format, void const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const */

    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void_const*)::$_6::operator()(BaseApp* param_1) {
        undefined8 uVar1;
        RenderDevice* this_00;
        undefined8 local_118;
        undefined4 local_110;
        undefined4 local_10c;
        undefined4 local_108;
        undefined4 local_104;
        undefined4 local_100;
        undefined4 local_fc;
        WrapArrayValueCopy<unsigned char, eastl::allocator> local_f8[48];
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = field_0;
        this_00 = (RenderDevice*)Instance();
        local_110 = field_8;
        local_10c = field_12;
        local_108 = field_16;
        local_104 = field_20;
        local_100 = field_24;
        local_fc = field_28;
        local_118 = uVar1;
        WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(local_f8,
                                                                                (WrapArrayValueCopy*)&field_32);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8,
            (_lambda_jag__render__RenderContext___1_*)&local_118);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        const ::{
            lambda(RenderContext&) #1
        }
        ::~RenderContext((_lambda_jag__render__RenderContext___1_*)&local_118);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bd8a20, 16 bytes, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(RenderContext&)#1}::~RenderContext()
    /* ~RenderContext() */

    void const ::{
        lambda(RenderContext&) #1
    }
    ::~RenderContext() {
        ~RenderContext(this);
    }

    // 0x100bd8a80, 16 bytes, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(RenderContext&)#1}::RenderContext({lambda(RenderContext&)#1}&&)
    void const ::{
        lambda(RenderContext&) #1
    }
    ::RenderContext___1____() {
        RenderContext___1____();
    }

    // 0x100bd8a90, 48 bytes, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(RenderContext&)#1}::RenderContext({lambda(RenderContext&)#1}&&)
    void const ::{
        lambda(RenderContext&) #1
    }
    ::RenderContext___1____(undefined8* param_1, undefined8* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = uVar3;
        *param_1 = uVar1;
        param_1[1] = uVar2;
        new ((param_1 + 4)) WrapArrayValueCopy<unsigned char, eastl::allocator>((WrapArrayValueCopy*)(param_2 + 4));
    }

    // 0x100bd8af0, 16 bytes, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(RenderContext&)#1}::RenderContext({lambda(RenderContext&)#1} const&)
    void const ::{
        lambda(RenderContext&) #1
    }
    ::RenderContext___1__const__() {
        RenderContext___1__const__();
    }

    // 0x100bd8b00, 48 bytes, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(RenderContext&)#1}::RenderContext({lambda(RenderContext&)#1} const&)
    void const ::{
        lambda(RenderContext&) #1
    }
    ::RenderContext___1__const__(undefined8* param_1, undefined8* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = uVar3;
        *param_1 = uVar1;
        param_1[1] = uVar2;
        new ((param_1 + 4)) WrapArrayValueCopy<unsigned char, eastl::allocator>((WrapArrayValueCopy*)(param_2 + 4));
    }

    // 0x100bd8b50, 272 bytes, placed by __FILE__ string
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(RenderContext&)#1}::operator()(RenderContext&) const
    /* Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, Format, void const*)::$_6::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const::{lambda(RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(RenderContext&)
   const */

    _func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr* const ::{
        lambda(RenderContext&) #1
    }
    ::operator()(RenderContext * param_1) {
        uint uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        Texture2D* this_00;
        _func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr* p_Var8;
        MapArea* this_01;
        long lVar9;
        undefined8 uVar10;
        Texture2D* this_02;

        this_00 = *(Texture2D**)this;
        p_Var8 = (_func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr*)param_1->IsObjectAlive(this_00->field_8);
        if ((char)p_Var8 != '\0') {
            this_02 = this_00;
            p_Var8 = (_func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr*)this_00->IsCreated();
            if ((char)p_Var8 != '\0') {
                uVar1 = this_00->field_24;
                if (uVar1 == 0) {
                    uVar10 = logger::default_logger();
                    p_Var8 = (_func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr*)logger::Logger::Log(
                        uVar10, 0, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                        "Texture2D_OGL.cpp",
                        236, "Attempting to update texture where texture desc is 0x0 pixels.");
                } else {
                    this_01 = (MapArea*)this_02->Instance();
                    lVar9 = this_01->GetOrigin();
                    if (*(uint*)(lVar9 + 52) < uVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_Desc.m_Width <= (uint)RenderDevice::Instance().GetDeviceCaps().m_MaxTextureSize",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/Texture2D_OGL.cpp",
                                  230, "Dead texture object in deferred Update (impossible dimensions)");
                    }
                    uVar2 = *(undefined4*)(this + 8);
                    uVar3 = *(undefined4*)(this + 12);
                    uVar4 = *(undefined4*)(this + 16);
                    uVar5 = *(undefined4*)(this + 20);
                    uVar6 = *(undefined4*)(this + 24);
                    uVar7 = *(undefined4*)(this + 28);
                    uVar10 = ((this + 32))->end();
                    p_Var8 = (_func_TEMPNAMEPLACEHOLDERVALUE_BaseApp_ptr*)this_00->UpdateOnCurrentThread(
                        uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, uVar10);
                }
            }
        }
        return p_Var8;
    }

    // 0x100bd8c80, 16 bytes, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_6::operator()(BaseApp*) const::{lambda(RenderContext&)#1}::~RenderContext()
    /* ~RenderContext() */

    void const ::{
        lambda(RenderContext&) #1
    }
    ::~RenderContext() {
        ((this + 32))->~WrapArrayValueCopy();
    }

    // 0x100bd8d00, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_7::$_7($_7&&): jumps straight to the base-object constructor

    // 0x100bd8d10, 48 bytes, base-object constructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_7::$_7($_7&&)
    /* $_7($_7&&) */

    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void_const*)::$_7::__7(__7* param_1) {
        Texture* pTVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        pTVar1 = *(Texture**)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((ulong)uVar4 >> 32);
        field_0 = pTVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((ulong)uVar2 >> 32);
        new (&field_32, (WrapArrayValueCopy*)(param_1 + 32)) WrapArrayValueCopy<unsigned char, eastl::allocator>();
    }

    // 0x100bd8d70, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_7::$_7($_7 const&): jumps straight to the base-object constructor

    // 0x100bd8d80, 48 bytes, base-object constructor, placed by class name and neighbouring functions
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_7::$_7($_7 const&)
    /* $_7($_7 const&) */

    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void_const*)::$_7::__7(__7* param_1) {
        Texture* pTVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        pTVar1 = *(Texture**)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((ulong)uVar4 >> 32);
        field_0 = pTVar1;
        field_8 = (int)uVar2;
        field_12 = (int)((ulong)uVar2 >> 32);
        new (&field_32, (WrapArrayValueCopy*)(param_1 + 32)) WrapArrayValueCopy<unsigned char, eastl::allocator>();
    }

    // 0x100bd8dd0, 272 bytes, placed by __FILE__ string
    // Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_7::operator()(RenderContext&) const
    /* Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, Format, void
   const*)::$_7::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void Texture2D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format,
                           void_const*)::$_7::operator()(RenderContext* param_1) {
        uint uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        Texture2D* this_00;
        char cVar8;
        MapArea* this_01;
        long lVar9;
        undefined8 uVar10;
        Texture2D* this_02;

        this_00 = (Texture2D*)field_0;
        cVar8 = param_1->IsObjectAlive(this_00->field_8);
        if (cVar8 != '\0') {
            this_02 = this_00;
            cVar8 = this_00->IsCreated();
            if (cVar8 != '\0') {
                uVar1 = this_00->field_24;
                if (uVar1 == 0) {
                    uVar10 = logger::default_logger();
                    logger::Logger::Log(uVar10, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/textures/OGL/Texture2D_OGL.cpp",
                                        268, "Attempting to update texture where texture desc is 0x0 pixels.");
                } else {
                    this_01 = (MapArea*)this_02->Instance();
                    lVar9 = this_01->GetOrigin();
                    if (*(uint*)(lVar9 + 52) < uVar1) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_Desc.m_Width <= (uint)RenderDevice::Instance().GetDeviceCaps().m_MaxTextureSize",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "textures/OGL/Texture2D_OGL.cpp",
                                  262, "Dead texture object in deferred Update (impossible dimensions)");
                    }
                    uVar2 = field_8;
                    uVar3 = field_12;
                    uVar4 = field_16;
                    uVar5 = field_20;
                    uVar6 = field_24;
                    uVar7 = field_28;
                    uVar10 = (&field_32)->end();
                    UpdateOnCurrentThread(this_00, uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, uVar10);
                }
            }
        }
    }

    // 0x100bdb5f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&Texture2D::NullTexture) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5328, &Texture2D::NullTexture, 4294967296);
    }

} // namespace jag::render
