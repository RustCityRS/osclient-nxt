// libs/hal/render/textures/OGL/Texture2DArray_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/textures/Texture2DArray.h"

namespace jag::render {
    // 0x100bc98c0, 48 bytes, base-object constructor, placed by class name and debug map
    // Texture2DArray::Texture2DArray(char const*)
    void Texture2DArray::Texture2DArray(char* param_1) {
        new (this) Texture(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee8668 + 16);
        field_16 = 3553;
    }

    // 0x100bc9a00, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Texture2DArray::Texture2DArray(char const*): jumps straight to the base-object constructor

    // 0x100bc9a10, 1440 bytes, placed by __FILE__ string
    // Texture2DArray::Create(Texture::Desc const&, ResourceDataT<unsigned char const> const*)
    undefined4 Texture2DArray::Create(Desc* param_1, ResourceDataT* param_2) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        undefined3 uVar4;
        undefined4 uVar5;
        undefined1 uVar6;
        undefined3 uVar7;
        undefined4 uVar8;
        undefined1 uVar9;
        undefined7 uVar10;
        undefined4 uVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        int iVar16;
        int iVar17;
        char cVar18;
        undefined4 uVar19;
        MapArea* pMVar20;
        long lVar21;
        RenderDevice* this_00;
        RenderContext* this_01;
        ImmediateRenderContext* pIVar22;
        char* pcVar23;
        char* pcVar24;
        undefined8 uVar25;
        Singleton<RenderDevice>* this_02;
        undefined4 uVar26;
        undefined8 in_stack_ffffffffffffff28;
        ActiveTextureSaveRestore local_c8;
        Desc* local_b8;
        undefined4 local_ac;
        undefined1 local_a8[24];
        String local_90[88];
        long local_38;

        uVar19 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a8._16_8_ = param_2;
        if (field_296 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GLTexture == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2DArray_OGL.cpp",
                      24, "Call Destroy() before calling Create() again");
        }
        pMVar20 = (MapArea*)Instance();
        lVar21 = pMVar20->GetOrigin();
        uVar26 = 35866;
        if (1 < (uint)param_1->field_16) {
            uVar26 = 37122;
        }
        this_00 = (RenderDevice*)pMVar20->Instance();
        this_01 = (RenderContext*)this_00->GetCurrentThreadRenderContext();
        pIVar22 = (ImmediateRenderContext*)this_01->GetImmediateContext();
        new (&local_c8) ActiveTextureSaveRestore(pIVar22);
        GenerateBindTextures(uVar26);
        cVar18 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar18 == '\0') {
            local_ac = field_296;
            pcVar23 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_b8 = param_1;
            pcVar24 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            param_1 = local_b8;
            Instrumentation::String::String(local_90, pcVar23, pcVar24);
            5890->~AutoSingleton(local_ac, local_90);
            local_90->~String();
        }
        iVar14 = param_1->field_0;
        iVar15 = param_1->field_4;
        iVar16 = param_1->field_8;
        iVar17 = param_1->field_12;
        uVar11 = param_1->field_16;
        iVar3 = param_1->field_20;
        iVar12 = param_1->field_24;
        iVar13 = param_1->field_28;
        uVar6 = param_1->field_32;
        uVar7 = *(undefined3*)&param_1->field_33;
        uVar8 = param_1->field_36;
        uVar9 = param_1->field_40;
        uVar10 = *(undefined7*)&param_1->field_41;
        cVar18 = param_1->field_56;
        uVar4 = *(undefined3*)&param_1->field_57;
        uVar5 = param_1->field_60;
        *(undefined8*)&field_72 = param_1->field_48;
        field_80 = cVar18;
        *(undefined3*)&field_81 = uVar4;
        *(undefined4*)&field_84 = uVar5;
        field_56 = uVar6;
        *(undefined3*)&field_57 = uVar7;
        *(undefined4*)&field_60 = uVar8;
        field_64 = uVar9;
        *(undefined7*)&field_65 = uVar10;
        *(undefined4*)&field_40 = uVar11;
        *(int*)&field_44 = iVar3;
        field_48 = iVar12;
        *(int*)&field_52 = iVar13;
        field_24 = iVar14;
        field_28 = iVar15;
        field_32 = iVar16;
        field_36 = iVar17;
        SetFaceMipLevels(param_1);
        new (local_a8) GLFormat(param_1->field_12);
        if ((uint)param_1->field_16 < 2) {
            if (*(char*)(lVar21 + 330) == '\0') {
                iVar3 = param_1->field_12;
                cVar18 = IsCompressedFormat(iVar3);
                if (cVar18 == '\0') {
                    if ((ResourceDataT*)local_a8._16_8_ == (ResourceDataT*)0) {
                        lVar21 = 0;
                    } else {
                        lVar21 = *(long*)local_a8._16_8_;
                    }
                    (*___glewTexImage3D)(uVar26, param_1->field_36, local_a8._0_4_, param_1->field_0, param_1->field_4,
                                         param_1->field_8, 0, local_a8._4_4_, CONCAT44(uVar19, local_a8._8_4_), lVar21);
                    CheckGlErrorInternal("glTexImage3D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         139);
                } else {
                    uVar19 = GetImageByteSize(param_1->field_0, param_1->field_4, iVar3, 0);
                    if ((ResourceDataT*)local_a8._16_8_ == (ResourceDataT*)0) {
                        lVar21 = 0;
                    } else {
                        lVar21 = *(long*)local_a8._16_8_;
                    }
                    (*___glewCompressedTexImage3D)(uVar26, param_1->field_36, local_a8._0_4_, param_1->field_0,
                                                   param_1->field_4, param_1->field_8, 0, uVar19, lVar21);
                    CheckGlErrorInternal("glCompressedTexImage3D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         124);
                }
            } else {
                if (local_a8._12_4_ == 0) {
                    local_a8._12_4_ = local_a8._0_4_;
                }
                (*___glewTexStorage3D)(uVar26, field_88, local_a8._12_4_, param_1->field_0, param_1->field_4,
                                       param_1->field_8);
                CheckGlErrorInternal("glTexStorage3D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2DArray_OGL.cpp",
                                     102);
                if (((ResourceDataT*)local_a8._16_8_ != (ResourceDataT*)0) && (*(long*)local_a8._16_8_ != 0)) {
                    Update(this, 0, 0, 0, 0, param_1->field_0, param_1->field_4, param_1->field_8,
                           CONCAT44(uVar19, param_1->field_12), *(long*)local_a8._16_8_);
                }
            }
            uVar1 = field_88;
            uVar2 = param_1->field_24;
            if ((1 < uVar1) && (uVar2 < 2)) {
                this_02 = (Singleton<RenderDevice>*)(ulong)(uint)param_1->field_12;
                cVar18 = IsCompressedFormat();
                if (cVar18 == '\0') {
                    pMVar20 = (MapArea*)this_02->Instance();
                    lVar21 = pMVar20->GetOrigin();
                    if (*(char*)(lVar21 + 336) == '\0') {
                        uVar25 = logger::default_logger();
                        logger::Logger::Log(uVar25, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/textures/OGL/Texture2DArray_OGL.cpp",
                                            157,
                                            "Auto-generating mips isn\'t supported on this device. Disabling mips.");
                        field_88 = 1;
                        iVar3 = field_16;
                        goto joined_r0x000100bc9f81;
                    }
                    (*___glewGenerateMipmap)(uVar26);
                    CheckGlErrorInternal("glGenerateMipmap",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         153);
                    goto LAB_100bc9e8a;
                }
            }
            if (1 < uVar1) {
                if (uVar2 < 2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("textureDesc.m_DataMipLevels > 1",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2DArray_OGL.cpp",
                              163, (char*)0);
                }
                CreateSubLevelMips(this, param_1->field_24, (ResourceDataT*)local_a8._16_8_);
            }
        } else {
            if (*(char*)(lVar21 + 167) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("deviceCaps.m_MultisampleTextures == true",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2DArray_OGL.cpp",
                          57, (char*)0);
            }
            if (*(char*)(lVar21 + 331) == '\0') {
                (*___glewTexImage3DMultisample)(uVar26, param_1->field_16, local_a8._0_4_, param_1->field_0,
                                                param_1->field_4, param_1->field_8, 1);
                CheckGlErrorInternal("glTexImage3DMultisample",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture2DArray_OGL.cpp",
                                     87);
            } else {
                (*___glewTexStorage3DMultisample)(uVar26, param_1->field_16, local_a8._0_4_, param_1->field_0,
                                                  param_1->field_4, param_1->field_8, 1);
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
            /* WARNING: Subroutine does not return */
            LogAssert("m_faceMipLevels == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2DArray_OGL.cpp",
                      172, "Multisample textures only support 1 mip level");
        }
        uVar19 = FinaliseCreate("Texture2DArray", param_1);
        local_c8.~ActiveTextureSaveRestore();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar19;
    }

    // 0x100bca160, 784 bytes, placed by __FILE__ string
    // Texture2DArray::Update(unsigned int, int, int, int, int, int, int, Format, void const*)
    void Texture2DArray::Update(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6,
                                uint param_7, uint param_9, long param_10) {
        char cVar3;
        int iVar4;
        undefined4 uVar5;
        RenderDevice* pRVar6;
        RenderContext* pRVar7;
        ImmediateRenderContext* pIVar8;
        byte* pbVar9;
        MapArea* this_00;
        long lVar10;
        unique_lock<std::mutex>* this_02;
        Singleton<RenderDevice>* this_04;
        ActiveTextureSaveRestore local_78;
        unique_lock<std::mutex> local_68[16];
        GLFormat local_58;
        int local_44[3];
        uint local_34;

        local_44[2] = param_4;
        local_34 = param_5;
        if (param_10 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSrcTexelData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2DArray_OGL.cpp",
                      191, (char*)0);
        }
        iVar4 = GetNativeTextureId();
        if (iVar4 != 0) {
            iVar4 = GetMaxLineWidth();
            if (iVar4 != -1) {
                ValidateUpdateParams(param_1, param_2, param_3, local_44[2], local_34, param_6, param_7);
                cVar3 = ((Texture2DArray*)this)->UseGLWriteMutex();
                if (cVar3 == '\0') {
                    this_02 = local_68;
                    std::unique_lock<std::mutex>::unique_lock(this_02);
                } else {
                    this_02 = local_68;
                    std::unique_lock<std::mutex>::unique_lock(this_02, (mutex*)&field_368);
                }
                pRVar6 = (RenderDevice*)this_02->Instance();
                pRVar7 = (RenderContext*)pRVar6->GetCurrentThreadRenderContext();
                pIVar8 = (ImmediateRenderContext*)pRVar7->GetImmediateContext();
                new (&local_78) ActiveTextureSaveRestore(pIVar8);
                pRVar6 = (RenderDevice*)local_78.Instance();
                pRVar7 = (RenderContext*)pRVar6->GetCurrentThreadRenderContext();
                pIVar8 = (ImmediateRenderContext*)pRVar7->GetImmediateContext();
                pIVar8->BindTexture(this, 0);
                new (&local_58) GLFormat(param_9);
                cVar3 = IsCompressedFormat(field_36);
                if (cVar3 == '\0') {
                    this_04 = (Singleton<RenderDevice>*)(ulong)param_9;
                    iVar4 = GetFormatDepthBits();
                    if (iVar4 != 0) {
                        this_00 = (MapArea*)this_04->Instance();
                        lVar10 = this_00->GetOrigin();
                        if (*(char*)(lVar10 + 152) == '\0') {
                            /* WARNING: Subroutine does not return */
                            LogAssert("GetFormatDepthBits(format) == 0 || "
                                      "RenderDevice::Instance().GetDeviceCaps().m_DepthTextureLoad",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                      "render/textures/OGL/Texture2DArray_OGL.cpp",
                                      222, (char*)0);
                        }
                    }
                    (*___glewTexSubImage3D)(field_16, param_1, param_2, param_3, local_44[2], local_34, param_6,
                                            param_7, local_58.field_0._4_4_, local_58.field_0._8_4_, param_10);
                    CheckGlErrorInternal("glTexSubImage3D",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         232);
                LAB_100bca41a:
                    local_78.~ActiveTextureSaveRestore();
                    std::unique_lock<std::mutex>::~unique_lock(local_68);
                    return;
                }
                if (((param_2 | param_3) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("x % 4 == 0 && y % 4 == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2DArray_OGL.cpp",
                              206, (char*)0);
                }
                local_44[0] = 4;
                pbVar9 = (byte*)std::max<int>((int*)&local_34, local_44);
                if ((*pbVar9 & 3) == 0) {
                    local_44[1] = 4;
                    pbVar9 = (byte*)std::max<int>((int*)&param_6, local_44 + 1);
                    if ((*pbVar9 & 3) == 0) {
                        uVar5 = GetImageByteSize(local_34, param_6, param_9, param_1);
                        (*___glewCompressedTexSubImage3D)(field_16, param_1, param_2, param_3, local_44[2], local_34,
                                                          param_6, param_7, local_58.field_0._0_4_, uVar5, param_10);
                        CheckGlErrorInternal("glCompressedTexSubImage3D",
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                             "hal/render/textures/OGL/Texture2DArray_OGL.cpp",
                                             218);
                        goto LAB_100bca41a;
                    }
                }
                /* WARNING: Subroutine does not return */
                LogAssert("std::max(width, 4) % 4 == 0 && std::max(height, 4) % 4 == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture2DArray_OGL.cpp",
                          207, (char*)0);
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(GetNativeTextureId() > 0) && (GetType() != TEXTURE_TYPE_UNKNOWN)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                  "Texture2DArray_OGL.cpp",
                  192, (char*)0);
    }

    // 0x100bca470, 560 bytes, placed by __FILE__ string
    // Texture2DArray::CreateSubLevelMips(unsigned int, ResourceDataT<unsigned char const> const*)
    void Texture2DArray::CreateSubLevelMips(uint param_1, ResourceDataT* param_2) {
        int iVar2;
        MapArea* this_00;
        char* pcVar3;
        undefined8 uVar4;
        uint uVar5;
        ulong uVar6;
        uint uVar7;
        undefined1 local_80[24];
        ulong local_68;
        ulong local_58;
        ulong local_50;
        ResourceDataT* local_48;
        undefined8 local_40;
        uint local_38;
        undefined4 local_34;

        this_00 = (MapArea*)Instance();
        local_80._16_8_ = this_00->GetOrigin();
        new (local_80) GLFormat(field_36);
        uVar6 = 1;
        if (1 < param_1) {
            local_34 = local_80._0_4_;
            local_58 = (ulong)(uint)local_80._4_4_;
            local_50 = (ulong)(uint)local_80._8_4_;
            uVar5 = field_28 >> 1;
            uVar7 = field_24 >> 1;
            local_48 = param_2 + 24;
            uVar6 = 1;
            local_68 = (ulong)param_1;
            local_38 = param_1;
            do {
                iVar2 = GetImageByteSize(uVar7, uVar5, field_36, 0);
                iVar2 = iVar2 * field_32;
                if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("mipImageSize > 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture2DArray_OGL.cpp",
                              250, (char*)0);
                }
                if ((param_2 == (ResourceDataT*)0) || (field_48 <= uVar6)) {
                    uVar4 = 0;
                } else {
                    uVar4 = *(undefined8*)local_48;
                }
                if (*(char*)(local_80._16_8_ + 330) == '\0') {
                    local_40 = uVar4;
                    if (IsCompressedFormat(field_36) == '\0') {
                        (*___glewTexImage3D)(field_16, uVar6 & 4294967295, local_34, uVar7, uVar5, field_32, 0,
                                             local_58, local_50, local_40);
                        pcVar3 = "glTexImage3D";
                        iVar2 = 293;
                    } else {
                        (*___glewCompressedTexImage3D)(field_16, uVar6 & 4294967295, local_34, uVar7, uVar5, field_32,
                                                       0, iVar2, local_40);
                        pcVar3 = "glCompressedTexImage3D";
                        iVar2 = 278;
                    }
                    CheckGlErrorInternal(pcVar3,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture2DArray_OGL.cpp",
                                         iVar2);
                } else {
                    Update(this, uVar6 & 4294967295, 0, 0, 0, uVar7, uVar5, field_32, field_36, uVar4);
                }
                uVar7 = (int)uVar7 / 2;
                uVar5 = (int)uVar5 / 2;
                uVar6 = uVar6 + 1;
                local_48 = local_48 + 24;
            } while (local_68 != uVar6);
            param_1 = local_38;
        }
        if ((uint)uVar6 != param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iMip == maxLevels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture2DArray_OGL.cpp",
                      301, (char*)0);
        }
    }

} // namespace jag::render
