// libs/hal/render/textures/OGL/Texture3D_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/textures/Texture3D.h"

namespace jag::render {
    // 0x100bcbc30, 48 bytes, base-object constructor, placed by class name and debug map
    // Texture3D::Texture3D(char const*)
    void Texture3D::Texture3D(char* param_1) {
        new (this) Texture(param_1);
        field_0 = (undefined**)(PTR_vtable_100ee86d0 + 16);
        field_16 = 32879;
    }

    // 0x100bcbc60, 16 bytes, complete-object constructor, placed by class name and debug map
    // Texture3D::Texture3D(char const*): jumps straight to the base-object constructor

    // 0x100bcbc70, 736 bytes, placed by class name and debug map
    // Texture3D::Create(Texture::Desc const&, ResourceDataT<unsigned char const> const*)
    undefined4 Texture3D::Create(Desc* param_1, ResourceDataT* param_2) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        undefined3 uVar4;
        undefined1 uVar5;
        undefined3 uVar6;
        undefined4 uVar7;
        undefined1 uVar8;
        undefined7 uVar9;
        undefined4 uVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        int iVar16;
        char cVar17;
        undefined4 uVar18;
        RenderDevice* this_00;
        RenderContext* this_01;
        ImmediateRenderContext* pIVar19;
        char* pcVar20;
        char* pcVar21;
        undefined8 uVar22;
        MapArea* this_02;
        long lVar23;
        undefined8 uVar24;
        Singleton<RenderDevice>* this_03;
        ActiveTextureSaveRestore local_b8;
        undefined1 local_a8[24];
        String local_90[88];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a8._16_8_ = param_2;
        if (field_296 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_GLTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture3D_OGL.cpp",
                      24, "Call Destroy() before calling Create() again");
        }
        this_00 = (RenderDevice*)Instance();
        this_01 = (RenderContext*)this_00->GetCurrentThreadRenderContext();
        pIVar19 = (ImmediateRenderContext*)this_01->GetImmediateContext();
        new (&local_b8) ActiveTextureSaveRestore(pIVar19);
        GenerateBindTextures(32879);
        cVar17 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar17 == '\0') {
            iVar1 = field_296;
            pcVar20 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pcVar21 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
            Instrumentation::String::String(local_90, pcVar20, pcVar21);
            5890->~AutoSingleton(iVar1, local_90);
            local_90->~String();
        }
        iVar13 = param_1->field_0;
        iVar14 = param_1->field_4;
        iVar15 = param_1->field_8;
        iVar16 = param_1->field_12;
        uVar10 = param_1->field_16;
        iVar1 = param_1->field_20;
        iVar11 = param_1->field_24;
        iVar12 = param_1->field_28;
        uVar5 = param_1->field_32;
        uVar6 = *(undefined3*)&param_1->field_33;
        uVar7 = param_1->field_36;
        uVar8 = param_1->field_40;
        uVar9 = *(undefined7*)&param_1->field_41;
        cVar17 = param_1->field_56;
        uVar4 = *(undefined3*)&param_1->field_57;
        uVar18 = param_1->field_60;
        *(undefined8*)&field_72 = param_1->field_48;
        field_80 = cVar17;
        *(undefined3*)&field_81 = uVar4;
        *(undefined4*)&field_84 = uVar18;
        field_56 = uVar5;
        *(undefined3*)&field_57 = uVar6;
        *(undefined4*)&field_60 = uVar7;
        field_64 = uVar8;
        *(undefined7*)&field_65 = uVar9;
        *(undefined4*)&field_40 = uVar10;
        *(int*)&field_44 = iVar1;
        *(int*)&field_48 = iVar11;
        *(int*)&field_52 = iVar12;
        field_24 = iVar13;
        field_28 = iVar14;
        field_32 = iVar15;
        field_36 = iVar16;
        SetFaceMipLevels(param_1);
        new (local_a8) GLFormat(param_1->field_12);
        uVar24 = local_a8._16_8_;
        if ((ResourceDataT*)local_a8._16_8_ == (ResourceDataT*)0) {
            uVar22 = 0;
        } else {
            uVar22 = *(undefined8*)local_a8._16_8_;
        }
        (*___glewTexImage3D)(32879, param_1->field_36, local_a8._0_4_, param_1->field_0, param_1->field_4,
                             param_1->field_8, 0, local_a8._4_4_, local_a8._8_4_, uVar22);
        CheckGlErrorInternal("glTexImage3D",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "textures/OGL/Texture3D_OGL.cpp",
                             56);
        uVar2 = *(uint*)&field_88;
        uVar3 = param_1->field_24;
        if ((1 < uVar2) && (uVar3 < 2)) {
            this_03 = (Singleton<RenderDevice>*)(ulong)(uint)param_1->field_12;
            cVar17 = IsCompressedFormat();
            if (cVar17 == '\0') {
                this_02 = (MapArea*)this_03->Instance();
                lVar23 = this_02->GetOrigin();
                if (*(char*)(lVar23 + 336) == '\0') {
                    uVar24 = logger::default_logger();
                    logger::Logger::Log(uVar24, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/textures/OGL/Texture3D_OGL.cpp",
                                        69, "Auto-generating mips isn\'t supported on this device. Disabling mips.");
                    *(undefined4*)&field_88 = 1;
                } else {
                    (*___glewGenerateMipmap)(32879);
                    CheckGlErrorInternal("glGenerateMipmap",
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                         "render/textures/OGL/Texture3D_OGL.cpp",
                                         65);
                }
                goto LAB_100bcbee0;
            }
        }
        if (1 < uVar2) {
            if (uVar3 < 2) {
                /* WARNING: Subroutine does not return */
                LogAssert("textureDesc.m_DataMipLevels > 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/"
                          "OGL/Texture3D_OGL.cpp",
                          75, (char*)0);
            }
            CreateSubLevelMips(this, param_1->field_24, (ResourceDataT*)uVar24);
        }
    LAB_100bcbee0:
        uVar18 = FinaliseCreate("Texture3D", param_1);
        local_b8.~ActiveTextureSaveRestore();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar18;
    }

    // 0x100bcbf50, 256 bytes, placed by class name and debug map
    // Texture3D::CreateSubLevelMips(unsigned int, ResourceDataT<unsigned char const> const*)
    void Texture3D::CreateSubLevelMips(uint param_1, ResourceDataT* param_2) {
        uint uVar1;
        uint uVar2;
        undefined1 local_58[28];
        uint local_3c;
        uint local_38;
        undefined4 local_34;

        new (local_58) GLFormat(field_36);
        uVar1 = 1;
        if (1 < param_1) {
            local_3c = field_24 >> 1;
            local_38 = field_28 >> 1;
            uVar1 = field_32;
            local_34 = local_58._0_4_;
            local_58._16_8_ = ZEXT48((uint)local_58._4_4_);
            uVar2 = 1;
            do {
                (*___glewTexImage3D)(32879, uVar2, local_34, local_3c, local_38, uVar1 >> 1, 0, local_58._16_8_,
                                     local_58._8_4_, param_2);
                CheckGlErrorInternal("glTexImage3D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture3D_OGL.cpp",
                                     162);
                uVar2 = uVar2 + 1;
            } while (param_1 != uVar2);
            uVar1 = param_1;
        }
        if (uVar1 != param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iMip == maxLevels",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture3D_OGL.cpp",
                      166, (char*)0);
        }
    }

    // 0x100bcc050, 608 bytes, placed by class name and debug map
    // Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)
    void Texture3D::Update(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6,
                           uint param_7, undefined4 param_9, uchar* param_10) {
        char cVar1;
        bool bVar2;
        int iVar3;
        RenderDevice* pRVar4;
        Singleton<RenderDevice>* this_00;
        WrapArrayValueCopy<unsigned char, eastl::allocator>* this_01;
        WrapArrayValueCopy<unsigned char, eastl::allocator> local_178[48];
        undefined1 local_148[88];
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_10 == (uchar*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pSrcTexelData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/textures/OGL/"
                      "Texture3D_OGL.cpp",
                      94, (char*)0);
        }
        iVar3 = GetNativeTextureId();
        if (iVar3 != 0) {
            iVar3 = GetMaxLineWidth();
            if (iVar3 != -1) {
                cVar1 = IsCompressedFormat(field_36);
                local_148._24_4_ = param_4;
                local_148._28_4_ = param_5;
                if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!IsCompressedFormat(m_Desc.m_Format)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "textures/OGL/Texture3D_OGL.cpp",
                              96, (char*)0);
                }
                ValidateUpdateParams(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
                this_00 = (Singleton<RenderDevice>*)(ulong)(uint)local_148._28_4_;
                iVar3 = GetImageByteSize(this_00, param_6, param_9, param_1);
                pRVar4 = (RenderDevice*)this_00->Instance();
                bVar2 = (bool)pRVar4->ShouldDefer();
                this_01 = local_178;
                WrapArrayValueCopy<unsigned char, eastl::allocator>::WrapArrayValueCopy(
                    this_01, param_10, (ulong)(uint)(iVar3 * local_148._24_4_), bVar2);
                pRVar4 = (RenderDevice*)this_01->Instance();
                local_148._0_8_ = (Texture*)this;
                local_148._8_4_ = param_9;
                local_148._20_4_ = param_3;
                local_148._32_4_ = param_6;
                local_148._36_4_ = param_7;
                local_148._12_4_ = param_1;
                local_148._16_4_ = param_2;
                new ((local_148 + 40)) WrapArrayValueCopy<unsigned char, eastl::allocator>(local_178);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                                      unsigned int, unsigned int, Format, void_const*)::__8,
                    void>((function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                          (__8*)local_148);
                pRVar4->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
                Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                       Format, void_const*)::$_8::~__8((__8*)local_148);
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
                  "Texture3D_OGL.cpp",
                  95, (char*)0);
    }

    // 0x100bcc2c0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_8::~$_8(): jumps straight to the base-object destructor

    // 0x100bd8f50, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_8::$_8($_8&&): jumps straight to the base-object constructor

    // 0x100bd8f60, 48 bytes, base-object constructor, placed by class name and neighbouring functions
    // Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_8::$_8($_8&&)
    /* $_8($_8&&) */

    void Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                           unsigned int, Format, void_const*)::$_8::__8(__8* param_1) {
        undefined8 uVar1;
        Texture* pTVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        uVar1 = *(undefined8*)(param_1 + 32);
        field_32 = (int)uVar1;
        field_36 = (int)((ulong)uVar1 >> 32);
        pTVar2 = *(Texture**)param_1;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((ulong)uVar4 >> 32);
        field_0 = pTVar2;
        field_8 = (int)uVar1;
        field_12 = (int)((ulong)uVar1 >> 32);
        new (&field_40, (WrapArrayValueCopy*)(param_1 + 40)) WrapArrayValueCopy<unsigned char, eastl::allocator>();
    }

    // 0x100bd8fc0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_8::$_8($_8 const&): jumps straight to the base-object constructor

    // 0x100bd8fd0, 48 bytes, base-object constructor, placed by class name and neighbouring functions
    // Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_8::$_8($_8 const&)
    /* $_8($_8 const&) */

    void Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                           unsigned int, Format, void_const*)::$_8::__8(__8* param_1) {
        undefined8 uVar1;
        Texture* pTVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        uVar1 = *(undefined8*)(param_1 + 32);
        field_32 = (int)uVar1;
        field_36 = (int)((ulong)uVar1 >> 32);
        pTVar2 = *(Texture**)param_1;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        field_16 = (int)uVar3;
        field_20 = (int)((ulong)uVar3 >> 32);
        field_24 = (int)uVar4;
        field_28 = (int)((ulong)uVar4 >> 32);
        field_0 = pTVar2;
        field_8 = (int)uVar1;
        field_12 = (int)((ulong)uVar1 >> 32);
        new (&field_40, (WrapArrayValueCopy*)(param_1 + 40)) WrapArrayValueCopy<unsigned char, eastl::allocator>();
    }

    // 0x100bd9020, 368 bytes, placed by __FILE__ string
    // Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, Format, void const*)::$_8::operator()(RenderContext&) const
    /* Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, Format, void
   const*)::$_8::TEMPNAMEPLACEHOLDERVALUE(RenderContext&) const */

    void Texture3D::Update(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                           unsigned int, Format, void_const*)::$_8::operator()(RenderContext* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        Texture* this_00;
        char cVar3;
        ImmediateRenderContext* this_01;
        undefined8 uVar4;
        Texture* this_02;
        undefined1 local_80[4];
        undefined4 local_7c;
        undefined4 local_78;
        ActiveTextureSaveRestore local_70;
        unique_lock<std::mutex> local_60[16];
        code* local_50;
        undefined4 local_44;
        undefined4 local_40;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;

        this_00 = field_0;
        cVar3 = param_1->IsObjectAlive((RenderResource*)&this_00->field_8);
        if (cVar3 != '\0') {
            cVar3 = this_00->IsCreated();
            if (cVar3 != '\0') {
                this_02 = (Texture*)local_80;
                new (this_02) GLFormat(field_8);
                cVar3 = this_02->UseGLWriteMutex();
                if (cVar3 == '\0') {
                    std::unique_lock<std::mutex>::unique_lock(local_60);
                } else {
                    std::unique_lock<std::mutex>::unique_lock(local_60, (mutex*)&this_00->field_368);
                }
                this_01 = (ImmediateRenderContext*)param_1->GetImmediateContext();
                new (&local_70) ActiveTextureSaveRestore(this_01);
                this_01->BindTexture(this_00, 0);
                local_50 = ___glewTexSubImage3D;
                local_44 = field_12;
                local_40 = field_16;
                local_3c = field_20;
                local_38 = field_24;
                local_34 = field_28;
                uVar1 = field_32;
                uVar2 = field_36;
                uVar4 = (&field_40)->end();
                (*local_50)(32879, local_44, local_40, local_3c, local_38, local_34, uVar1, uVar2, local_7c, local_78,
                            uVar4);
                CheckGlErrorInternal("glTexSubImage3D",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "textures/OGL/Texture3D_OGL.cpp",
                                     124);
                local_70.~ActiveTextureSaveRestore();
                std::unique_lock<std::mutex>::~unique_lock(local_60);
            }
        }
    }

} // namespace jag::render
