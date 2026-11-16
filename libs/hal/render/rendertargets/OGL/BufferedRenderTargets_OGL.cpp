// libs/hal/render/rendertargets/OGL/BufferedRenderTargets_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "libs/hal/render/rendertargets/BufferedRenderTargets.h"

namespace jag::render {
    // 0x103bda930, 1856 bytes, __common; set at startup by ___cxx_global_var_init.101
    ShaderProgram BufferedRenderTargets::m_SSBOCopyShaderFloat1 = ShaderProgram("");

    // 0x103bdb070, 1856 bytes, __common; set at startup by ___cxx_global_var_init.102
    ShaderProgram BufferedRenderTargets::m_SSBOCopyShaderFloat4 = ShaderProgram("");

    // 0x103bdb7b0, 1856 bytes, __common; set at startup by ___cxx_global_var_init.103
    ShaderProgram BufferedRenderTargets::m_SSBOCopyShaderInt4 = ShaderProgram("");

    // 0x103bdbef0, 1856 bytes, __common; set at startup by ___cxx_global_var_init.104
    ShaderProgram BufferedRenderTargets::m_SSBOCopyShaderInt4RBSwizzle = ShaderProgram("");

    // 0x103bdc630, 192 bytes, __common; set at startup by ___cxx_global_var_init.105
    InputAssemblerState BufferedRenderTargets::m_IAState = InputAssemblerState();

    // 0x103bdc6f0, 80 bytes, __common; set at startup by ___cxx_global_var_init.106
    VertexBuffer BufferedRenderTargets::m_quadVB = VertexBuffer();

    // 0x103bdc740, 16 bytes, __common; set at startup by ___cxx_global_var_init.107
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> BufferedRenderTargets::m_SSBOCopyRT;

    // 0x103bdc750, 8 bytes, __common; zero-initialised
    BufferedRenderTargets::m_cvTextureCache;

    // 0x100be2e20, 1344 bytes, base-object constructor, placed by __FILE__ string
    // BufferedRenderTargets::BufferedRenderTargets(unsigned int, unsigned int, unsigned int, Format, char const*)
    void BufferedRenderTargets::BufferedRenderTargets(uint param_1, int param_2, int param_3, uint param_5,
                                                      char* param_6) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        uint uVar1;
        uint uVar2;
        char cVar3;
        int iVar4;
        MapArea* this_04;
        RenderDeviceCaps* pRVar5;
        ShaderStorageBuffer* this_05;
        ShaderStorageBuffer* pSVar6;
        undefined8 uVar7;
        PixelBuffer* this_06;
        PixelBuffer* pPVar8;
        Singleton<RenderDevice>* this_07;

        new (this) RenderDeviceOnEndFrame(true);
        new (field_12) RenderResource();
        field_0 = &PTR__BufferedRenderTargets_100f280b8;
        this_00 = &field_24;
        new (this_00) Array<shared_ptr<RenderTargets>, eastl::allocator>();
        new (&field_48) Array<unsigned char, eastl::allocator>();
        field_72 = param_5;
        field_76 = 1;
        field_80 = 0;
        field_84 = param_1;
        field_88 = param_2;
        field_92 = param_3;
        iVar4 = GetFormatByteCount(param_5);
        field_96 = iVar4 * param_3 * param_2;
        new (&field_104) std::mutex();
        new (&field_168, param_6) eastl::fixed_string<char, 128, true, eastl::allocator>();
        this_01 = &field_336;
        new (this_01) Array<PixelBuffer, eastl::allocator>();
        this_02 = &field_360;
        new (this_02) Array<ShaderStorageBuffer, eastl::allocator>();
        new (&field_384) Array<std::unique_ptr<Texture2D, std::default_delete<Texture2D>>, eastl::allocator>();
        new (&field_408) Array<SyncFence, eastl::allocator>();
        new (&field_432) Array<int, eastl::allocator>();
        new (&field_456) Array<unsigned char, BucketAllocatorEASTL>();
        new (&field_480) Array<__CVBuffer*, eastl::allocator>();
        this_03 = &field_504;
        this_07 = (Singleton<RenderDevice>*)this_03;
        new (this_03) Array<__CVBuffer*, eastl::allocator>();
        if ((field_84 == 0) || (field_96 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_bufferedFrames > 0 && m_sizeInBytes > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      54, (char*)0);
        }
        this_04 = (MapArea*)this_07->Instance();
        pRVar5 = (RenderDeviceCaps*)this_04->GetOrigin();
        if ((field_84 != 1) && (cVar3 = IsContinuousReadbackSupported(pRVar5, field_72), cVar3 == '\0')) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_bufferedFrames == 1 || IsContinuousReadbackSupported(deviceCaps, m_format)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      58, "Continuous readbacks (bufferedFrames > 1) are not supported by this device");
        }
        uVar1 = field_84;
        if ((ulong)uVar1 == 1) {
            field_76 = 0;
        }
        uVar2 = field_72;
        cVar3 = UseAppleCVPixelBuffers();
        if (cVar3 == '\0') {
            if (pRVar5->field_326 == false) {
                cVar3 = UseShaderStorageBuffers(this, pRVar5);
                if (cVar3 == '\0') {
                    cVar3 = UsePixelBuffers(pRVar5);
                    if (cVar3 == '\0') {
                        uVar7 = logger::default_logger();
                        logger::Logger::Log(uVar7, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                            105, "Using unbuffered path for BufferedRenderTargets (slow)");
                        this_00->set_max_size((ulong)field_84, 0);
                        (&field_48, (ulong)field_96, 0)->set_max_size();
                    } else {
                        uVar7 = logger::default_logger();
                        logger::Logger::Log(uVar7, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                            95, "Using pixel buffer path for BufferedRenderTargets (potentially slow)");
                        this_00->set_max_size(1, 0);
                        this_01->set_max_size((ulong)field_84, 0);
                        this_06 = (PixelBuffer*)this_01->data();
                        pPVar8 = (PixelBuffer*)this_01->end();
                        for (; this_06 != pPVar8; this_06 = this_06 + 1) {
                            this_06->Create(field_96, 0, (void*)0);
                        }
                    }
                } else {
                    this_00->set_max_size(1, 0);
                    this_02->set_max_size((ulong)field_84, 0);
                    this_05 = (ShaderStorageBuffer*)this_02->data();
                    pSVar6 = (ShaderStorageBuffer*)this_02->end();
                    for (; this_05 != pSVar6; this_05 = (ShaderStorageBuffer*)((long)&this_05[1].field_16 + 7)) {
                        iVar4 = GetFormatByteCount(field_72);
                        this_05->Create(iVar4 * param_3 * param_2, 3, 0);
                    }
                    if ((pRVar5->field_155[0] == '\0') && ((field_72 == 11 || (field_72 == 1)))) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("deviceCaps.m_FloatTextures || (m_format != FORMAT_R32G32B32A32_FLOAT && m_format != "
                                  "FORMAT_R32_FLOAT)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                  91, (char*)0);
                    }
                }
            } else {
                this_00->set_max_size((ulong)uVar1, 0);
            }
        } else {
            if ((uVar2 == 21) && (pRVar5->field_158 == false)) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_format != FORMAT_R16_FLOAT || deviceCaps.m_HalfFloatColourTargets",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                          69, (char*)0);
            }
            this_00->set_max_size((ulong)field_84, 0);
            (&field_384, (ulong)field_84, 0)->set_max_size();
            this_03->set_max_size((ulong)field_84, 0);
            (&field_480, (ulong)field_84, 0)->set_max_size();
        }
        (&field_408, (ulong)field_84, 0)->set_max_size();
        (&field_432, (ulong)field_84, 0)->set_max_size();
    }

    // 0x100be3410, 16 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::IsContinuousReadbackSupported(RenderDeviceCaps const&, Format)
    void BufferedRenderTargets::IsContinuousReadbackSupported() {
        UseAppleCVPixelBuffers();
    }

    // 0x100be3420, 32 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::UseAppleCVPixelBuffers(RenderDeviceCaps const&, Format)
    bool BufferedRenderTargets::UseAppleCVPixelBuffers(undefined8 param_1, int param_2) {
        return param_2 == 29 || param_2 == 7;
    }

    // 0x100be39a0, 48 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::UsePixelBuffers(RenderDeviceCaps const&)
    bool BufferedRenderTargets::UsePixelBuffers(RenderDeviceCaps* param_1) {
        if (param_1->field_323 == false) {
            return false;
        }
        if (param_1->field_180 == false) {
            return param_1->field_179 != false;
        }
        return true;
    }

    // 0x100be3cc0, 16 bytes, complete-object constructor, placed by class name and neighbouring functions
    // BufferedRenderTargets::BufferedRenderTargets(unsigned int, unsigned int, unsigned int, Format, char const*): jumps straight to the base-object constructor

    // 0x100be3cd0, 496 bytes, base-object destructor, placed by __FILE__ string
    // BufferedRenderTargets::~BufferedRenderTargets()
    void BufferedRenderTargets::~BufferedRenderTargets() {
        shared_ptr* this_00;
        shared_ptr* psVar2;

        field_0 = &PTR__BufferedRenderTargets_100f280b8;
        this_00 = (shared_ptr*)(&field_24)->data();
        psVar2 = (shared_ptr*)(&field_24)->end();
        while (true) {
            if (this_00 == psVar2) {
                (&field_504)->~Array();
                (&field_480)->~Array();
                (&field_456)->~Array();
                (&field_432)->~Array();
                (&field_408)->~Array();
                (&field_384)->~Array();
                (&field_360)->~Array();
                (&field_336)->~Array();
                /* WARNING: Subroutine does not return */
                (&field_168)->~fixed_string();
            }
            if (shared_ptr::operator_cast_to_bool(this_00))
                break;
            this_00 = this_00 + 1;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("!renderTargets",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/OGL/"
                  "BufferedRenderTargets_OGL.cpp",
                  122, "Failed to call Destroy on BufferedRenderTargets");
    }

    // 0x100be3ec0, 16 bytes, complete-object destructor, placed by class name and neighbouring functions
    // BufferedRenderTargets::~BufferedRenderTargets(): jumps straight to the base-object destructor

    // 0x100be3ed0, 32 bytes, deleting destructor, placed by class name and neighbouring functions
    // BufferedRenderTargets::~BufferedRenderTargets()
    void BufferedRenderTargets::~BufferedRenderTargets() {
        ~BufferedRenderTargets(this);
        operator_delete(this);
    }

    // 0x100be3ef0, 80 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::UseShaderStorageBuffers(RenderDeviceCaps const&, Format)
    undefined8 BufferedRenderTargets::UseShaderStorageBuffers(long param_1, int param_2) {
        undefined8 uVar1;

        if (((param_2 == 11) || (param_2 == 1)) && (*(char*)(param_1 + 155) == '\0')) {
            return 0;
        }
        uVar1 = 0;
        if ((*(char*)(param_1 + 132) != '\0') && (*(char*)(param_1 + 180) != '\0')) {
            if (28 < param_2 - 1U) {
                return 0;
            }
            uVar1 = CONCAT71(1048580, (268436545U >> (param_2 - 1U & 31) & 1) != 0);
        }
        return uVar1;
    }

    // 0x100be3f40, 48 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::GetOptimalDepthReadbackFormat()
    undefined8 BufferedRenderTargets::GetOptimalDepthReadbackFormat() {
        MapArea* this_00;
        long lVar1;
        undefined8 uVar2;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        uVar2 = 11;
        if (*(char*)(lVar1 + 132) == '\0') {
            uVar2 = 29;
        }
        return uVar2;
    }

    // 0x100be3f70, 64 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::GetWriteRTInternal()
    void BufferedRenderTargets::GetWriteRTInternal() {
        long lVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar2;

        lVar1 = (&field_24)->end();
        if (lVar1 == 1) {
            uVar2 = 0;
        } else {
            uVar2 = (ulong)field_80;
        }
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
                (Array<shared_ptr<RenderTargets>, eastl::allocator>*)&field_24, uVar2);
        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
    }

    // 0x100be4030, 64 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::GetReadRTInternal()
    void BufferedRenderTargets::GetReadRTInternal() {
        long lVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar2;

        lVar1 = (&field_24)->end();
        if (lVar1 == 1) {
            uVar2 = 0;
        } else {
            uVar2 = (ulong)field_76;
        }
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
                (Array<shared_ptr<RenderTargets>, eastl::allocator>*)&field_24, uVar2);
        eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
    }

    // 0x100be4070, 80 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::GetWriteRT()
    undefined8 BufferedRenderTargets::GetWriteRT() {
        undefined8 uVar1;
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_104);
        uVar1 = GetWriteRTInternal(this);
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        return uVar1;
    }

    // 0x100be40c0, 80 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::GetReadRT()
    undefined8 BufferedRenderTargets::GetReadRT() {
        undefined8 uVar1;
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_104);
        uVar1 = GetReadRTInternal(this);
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        return uVar1;
    }

    // 0x100be4110, 64 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::GetWriteIndex()
    uint BufferedRenderTargets::GetWriteIndex() {
        uint uVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_104);
        uVar1 = field_80;
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar1;
    }

    // 0x100be4150, 64 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::GetReadIndex()
    uint BufferedRenderTargets::GetReadIndex() {
        uint uVar1;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_104);
        uVar1 = field_76;
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar1;
    }

    // 0x100be4190, 1136 bytes, placed by __FILE__ string
    // BufferedRenderTargets::Create(int, int, unsigned int)
    ulong BufferedRenderTargets::Create(int param_1, int param_2, uint param_3) {
        shared_ptr* psVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        MapArea* this_00;
        long lVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar6;
        ulong uVar7;
        RenderTargets* pRVar8;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar9;
        undefined8* puVar10;
        uint* puVar11;
        undefined8 uVar12;
        ulong uVar13;
        undefined1 local_178[64];
        shared_ptr local_138[3];
        undefined8 local_108;
        undefined8 uStack_100;
        Desc local_f8;
        undefined1* local_b0;
        undefined1 local_a8[72];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_60;
        int* local_58;
        int* local_50;
        int local_48;
        uint local_44;
        int local_40;
        uint local_3c;
        uint local_38;
        bool local_31;

        local_44 = param_3;
        local_40 = param_2;
        this_00 = (MapArea*)Instance();
        local_a8._64_8_ = this_00->GetOrigin();
        pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_24;
        lVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar6);
        local_31 = lVar5 != 0;
        if (local_31) {
            local_58 = &field_88;
            local_50 = &field_92;
            local_b0 = &field_168;
            uVar13 = 0;
            local_60 = pvVar6;
            local_48 = param_1;
            do {
                iVar4 = local_48;
                pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
                        (Array<shared_ptr<RenderTargets>, eastl::allocator>*)pvVar6, uVar13);
                lVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar6);
                if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderTarget.get() == nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                              246, (char*)0);
                }
                psVar1 = (shared_ptr*)(local_178 + 64);
                make_shared<RenderTargets>((jag*)psVar1);
                shared_ptr<RenderTargets>::operator=((shared_ptr<RenderTargets>*)pvVar6, psVar1);
                psVar1->~shared_ptr();
                cVar2 = UseAppleCVPixelBuffers(this, (RenderDeviceCaps*)local_a8._64_8_);
                if (cVar2 == '\0') {
                    new (local_a8) Texture::Desc();
                    local_a8._12_4_ = field_72;
                    local_a8._0_4_ = field_88;
                    local_a8._4_4_ = field_92;
                    local_a8[56] = '\x01';
                    new (local_178) Texture::Desc();
                    if (iVar4 != 0) {
                        local_178._4_4_ = local_a8._4_4_;
                        local_178._0_4_ = local_a8._0_4_;
                        local_178._12_4_ = local_a8._12_4_;
                        local_178._8_4_ = local_a8._8_4_;
                        local_178._57_7_ = local_a8._57_7_;
                        local_178[56] = local_a8[56];
                        local_178._48_8_ = local_a8._48_8_;
                        local_178._32_8_ = local_a8._32_8_;
                        local_178._40_8_ = local_a8._40_8_;
                        local_178._16_8_ = local_a8._16_8_;
                        local_178._24_8_ = local_a8._24_8_;
                        iVar4 = GetFormatFromDepthStencilBits(iVar4, local_40, false);
                        local_178._12_4_ = iVar4;
                    }
                    pRVar8 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)pvVar6);
                    uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_138[0]._0_8_ = CONCAT44(local_a8._4_4_, local_a8._0_4_);
                    local_138[0].field_8 = CONCAT44(local_a8._12_4_, local_a8._8_4_);
                    uStack_100 = CONCAT71(local_a8._57_7_, local_a8[56]);
                    local_108 = local_a8._48_8_;
                    local_138[2]._0_8_ = local_a8._32_8_;
                    local_138[2].field_8 = local_a8._40_8_;
                    local_138[1]._0_8_ = local_a8._16_8_;
                    local_138[1].field_8 = local_a8._24_8_;
                    new (&local_f8) Texture::Desc();
                    cVar2 = pRVar8->Create(uVar12, 3553, local_178 + 64, 1, local_178, local_44);
                } else {
                    cVar2 = CreateAppleCVRenderTarget(this, uVar13, iVar4, local_40, local_44);
                }
                pvVar6 = local_60;
                if (cVar2 == '\0') {
                    uVar12 = logger::default_logger();
                    logger::Logger::Log(uVar12, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                        285, "Failed to create render target for BufferedRenderTargets");
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                    286, (char*)0);
                }
                uVar7 = UseShaderStorageBuffers(this, (RenderDeviceCaps*)local_a8._64_8_);
                if ((char)uVar7 != '\0') {
                    local_3c = 0;
                    local_38 = 0;
                    bVar3 = m_SSBOCopyRT.operator_cast_to_bool();
                    if (bVar3) {
                        pRVar8 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(
                            (shared_ptr<RenderTargets>*)&m_SSBOCopyRT);
                        pvVar9 = (vector<Texture*,
                                         eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                     pRVar8->GetColourTargetTextures();
                        puVar10 = (undefined8*)
                            eastl::vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>::operator[](pvVar9,
                                                                                                                 0);
                        puVar11 = (uint*)(*puVar10)->second();
                        local_3c = *puVar11;
                        pRVar8 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(
                            (shared_ptr<RenderTargets>*)&m_SSBOCopyRT);
                        pvVar9 = (vector<Texture*,
                                         eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                     pRVar8->GetColourTargetTextures();
                        puVar10 = (undefined8*)
                            eastl::vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>::operator[](pvVar9,
                                                                                                                 0);
                        lVar5 = (*puVar10)->second();
                        local_38 = *(uint*)(lVar5 + 4);
                    }
                    if ((local_3c < (uint)*local_58) || (uVar7 = (ulong)local_38, local_38 < (uint)*local_50)) {
                        RenderTargets::SafeReset((shared_ptr*)&m_SSBOCopyRT);
                        new (local_a8) Texture::Desc();
                        local_a8._12_4_ = 23;
                        puVar11 = std::max<unsigned int>(&local_3c, (uint*)local_58);
                        local_a8._0_4_ = *puVar11;
                        puVar11 = std::max<unsigned int>(&local_38, (uint*)local_50);
                        local_a8._4_4_ = *puVar11;
                        psVar1 = (shared_ptr*)(local_178 + 64);
                        make_shared<RenderTargets>((jag*)psVar1);
                        shared_ptr<RenderTargets>::operator=((shared_ptr<RenderTargets>*)&m_SSBOCopyRT, psVar1);
                        psVar1->~shared_ptr();
                        pRVar8 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(
                            (shared_ptr<RenderTargets>*)&m_SSBOCopyRT);
                        local_138[0]._0_8_ = CONCAT44(local_a8._4_4_, local_a8._0_4_);
                        local_138[0].field_8 = CONCAT44(local_a8._12_4_, local_a8._8_4_);
                        uStack_100 = CONCAT71(local_a8._57_7_, local_a8[56]);
                        local_108 = local_a8._48_8_;
                        local_138[2]._0_8_ = local_a8._32_8_;
                        local_138[2].field_8 = local_a8._40_8_;
                        local_138[1]._0_8_ = local_a8._16_8_;
                        local_138[1].field_8 = local_a8._24_8_;
                        new (&local_f8) Texture::Desc();
                        new (local_178) Texture::Desc();
                        uVar7 = pRVar8->Create("SSBOTemp", 3553, local_178 + 64, 1, local_178, 4);
                        pvVar6 = local_60;
                    }
                }
                if (cVar2 == '\0')
                    goto LAB_100be45c6;
                uVar13 = uVar13 + 1;
                uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar6);
                local_31 = uVar13 < uVar7;
            } while (local_31);
        }
        uVar7 = field_12->UndoMarkAsDead();
    LAB_100be45c6:
        return CONCAT71((int7)(uVar7 >> 8), ~local_31) & 18446744073709551361;
    }

    // 0x100be4610, 1184 bytes, placed by __FILE__ string
    // BufferedRenderTargets::CreateAppleCVRenderTarget(unsigned long, int, int, unsigned int)
    undefined4 BufferedRenderTargets::CreateAppleCVRenderTarget(ulong param_1, int param_2, int param_3, uint param_4) {
        undefined1* puVar1;
        uint uVar2;
        int iVar3;
        undefined* puVar4;
        BufferedRenderTargets* pBVar5;
        int iVar7;
        undefined4 uVar8;
        ID IVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        undefined8* puVar13;
        undefined8 uVar14;
        unique_ptr<Texture2D, std::default_delete<Texture2D>>* puVar15;
        Texture2D* pTVar16;
        shared_ptr<RenderTargets>* psVar17;
        RenderTargets* pRVar18;
        long lVar19;
        undefined1 local_1a8[20];
        int local_194;
        uint local_18c;
        undefined1 local_158[64];
        undefined1 local_118[72];
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        BufferedRenderTargets* local_90;
        undefined4 local_7c;
        Array<shared_ptr<RenderTargets>, eastl::allocator>* local_70;
        undefined8 local_68;
        undefined1 local_60[8];
        undefined8 local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        long local_38;

        local_70 = (Array<shared_ptr<RenderTargets>, eastl::allocator>*)CONCAT44(local_70._4_4_, param_2);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_1a8) GLFormat(field_72);
        local_58 = *(undefined8*)PTR__kCVPixelBufferOpenGLCompatibilityKey_100ee9df0;
        IVar9 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber, "numberWithBool:", 1);
        uVar10 = _objc_retainAutoreleasedReturnValue(IVar9);
        local_50 = *(undefined8*)PTR__kCVPixelBufferIOSurfacePropertiesKey_100ee9de8;
        local_48 = uVar10;
        IVar9 = NSDictionary::dictionaryWithObjects_forKeys_count_(
            (ID)&_OBJC_CLASS___NSDictionary, "dictionaryWithObjects:forKeys:count:", local_60, local_60, 0);
        uVar11 = _objc_retainAutoreleasedReturnValue(IVar9);
        local_40 = uVar11;
        IVar9 = NSDictionary::dictionaryWithObjects_forKeys_count_(
            (ID)&_OBJC_CLASS___NSDictionary, "dictionaryWithObjects:forKeys:count:", &local_48, &local_58, 2);
        local_68 = _objc_retainAutoreleasedReturnValue(IVar9);
        puVar4 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar11);
        (*(code*)puVar4)(uVar10);
        uVar2 = field_72;
        if (uVar2 != 7) {
            if (uVar2 == 21) {
                uVar10 = 1278226536;
                goto LAB_100be473e;
            }
            if (uVar2 != 29) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                941, (char*)0);
            }
        }
        uVar10 = 1111970369;
    LAB_100be473e:
        iVar7 = field_88;
        iVar3 = field_92;
        local_90 = this;
        uVar12 = Array<__CVBuffer*, eastl::allocator>::operator[]((Array<__CVBuffer*, eastl::allocator>*)&field_504,
                                                                  param_1);
        uVar11 = *(undefined8*)PTR__kCFAllocatorDefault_100ee9dc8;
        iVar7 = _CVPixelBufferCreate(uVar11, iVar7, iVar3, uVar10, local_68, uVar12);
        uVar10 = m_cvTextureCache;
        if (iVar7 == 0) {
            puVar13 = (undefined8*)Array<__CVBuffer*, eastl::allocator>::operator[](
                (Array<__CVBuffer*, eastl::allocator>*)&field_504, param_1);
            uVar12 = *puVar13;
            puVar1 = &local_90->field_480;
            uVar14 = Array<__CVBuffer*, eastl::allocator>::operator[]((Array<__CVBuffer*, eastl::allocator>*)puVar1,
                                                                      param_1);
            iVar7 = _CVOpenGLTextureCacheCreateTextureFromImage(uVar11, uVar10, uVar12, 0, uVar14);
            if (iVar7 == 0) {
                new ((local_1a8 + 16)) Texture::Desc();
                pBVar5 = local_90;
                local_1a8._16_4_ = local_90->field_88;
                local_194 = local_90->field_92;
                local_18c = local_90->field_72;
                puVar13 = (undefined8*)Array<__CVBuffer*, eastl::allocator>::operator[](
                    (Array<__CVBuffer*, eastl::allocator>*)puVar1, param_1);
                local_7c = _CVOpenGLTextureGetName(*puVar13);
                puVar13 = (undefined8*)Array<__CVBuffer*, eastl::allocator>::operator[](
                    (Array<__CVBuffer*, eastl::allocator>*)puVar1, param_1);
                uVar8 = _CVOpenGLTextureGetTarget(*puVar13);
                std::make_unique<Texture2D>();
                puVar1 = &pBVar5->field_384;
                puVar15 = (unique_ptr<Texture2D, std::default_delete<Texture2D>>*)
                    Array<std::unique_ptr<Texture2D, std::default_delete<Texture2D>>, eastl::allocator>::operator[](
                        (Array<std::unique_ptr<Texture2D, std::default_delete<Texture2D>>, eastl::allocator>*)puVar1,
                        param_1);
                std::unique_ptr<Texture2D, std::default_delete<Texture2D>>::operator=(puVar15, (unique_ptr*)local_118);
                local_118->~unique_ptr();
                puVar15 = (unique_ptr<Texture2D, std::default_delete<Texture2D>>*)
                    Array<std::unique_ptr<Texture2D, std::default_delete<Texture2D>>, eastl::allocator>::operator[](
                        (Array<std::unique_ptr<Texture2D, std::default_delete<Texture2D>>, eastl::allocator>*)puVar1,
                        param_1);
                pTVar16 = (Texture2D*)std::unique_ptr<Texture2D, std::default_delete<Texture2D>>::operator->(puVar15);
                pTVar16->BindExternalTexture(local_7c, uVar8, local_1a8 + 16);
                new (local_158) Texture::Desc();
                if ((int)local_70 != 0) {
                    local_158._0_4_ = pBVar5->field_88;
                    local_158._4_4_ = pBVar5->field_92;
                    local_158._12_4_ = GetFormatFromDepthStencilBits((int)local_70, param_3, false);
                }
                local_70 = (Array<shared_ptr<RenderTargets>, eastl::allocator>*)&pBVar5->field_24;
                psVar17 = (shared_ptr<RenderTargets>*)Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
                    local_70, param_1);
                pRVar18 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(psVar17);
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_a8 = 0;
                uStack_a0 = 0;
                local_b8 = 0;
                uStack_b0 = 0;
                local_c8 = 0;
                uStack_c0 = 0;
                local_118._64_8_ = 0;
                uStack_d0 = 0;
                local_118._48_8_ = 0;
                local_118._56_8_ = 0;
                local_118._32_8_ = 0;
                local_118._40_8_ = 0;
                local_118._16_8_ = 0;
                local_118._24_8_ = 0;
                local_118._0_8_ = 0;
                local_118._8_8_ = 0;
                lVar19 = 0;
                do {
                    new ((local_118 + lVar19)) Texture::Desc();
                    lVar19 = lVar19 + 64;
                } while (lVar19 != 128);
                uVar8 = pRVar18->Create(uVar10, 3553, local_118, 0, local_158, param_4 & 4294967291);
                if ((char)uVar8 != '\0') {
                    psVar17 =
                        (shared_ptr<RenderTargets>*)Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
                            local_70, param_1);
                    pRVar18 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(psVar17);
                    puVar15 = (unique_ptr<Texture2D, std::default_delete<Texture2D>>*)
                        Array<std::unique_ptr<Texture2D, std::default_delete<Texture2D>>, eastl::allocator>::operator[](
                            (Array<std::unique_ptr<Texture2D, std::default_delete<Texture2D>>, eastl::allocator>*)
                                puVar1,
                            param_1);
                    uVar10 = std::unique_ptr<Texture2D, std::default_delete<Texture2D>>::get(puVar15);
                    pRVar18->BindColourTargetTexture(uVar10, 0, 0, 34069);
                }
            } else {
                uVar10 = logger::default_logger();
                uVar8 = 0;
                logger::Logger::Log(uVar10, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                    978, "CVOpenGLTextureCacheCreateTextureFromImage failed: %i", iVar7);
            }
        } else {
            uVar10 = logger::default_logger();
            uVar8 = 0;
            logger::Logger::Log(uVar10, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                952, "CVPixelBufferCreate failed: %i", iVar7);
        }
        (*(code*)PTR__objc_release_100ee9e60)(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar8;
    }

    // 0x100be4ab0, 304 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::Destroy()
    void BufferedRenderTargets::Destroy() {
        undefined1* puVar1;
        shared_ptr* psVar2;
        shared_ptr* psVar3;
        undefined8* puVar4;
        undefined8* puVar5;
        scoped_lock<std::mutex> local_30[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&field_104);
        field_12->MarkAsDead();
        psVar2 = (shared_ptr*)(&field_24)->data();
        psVar3 = (shared_ptr*)(&field_24)->end();
        for (; psVar2 != psVar3; psVar2 = psVar2 + 1) {
            RenderTargets::SafeReset(psVar2);
        }
        (&field_384)->clear();
        puVar1 = &field_480;
        puVar4 = (undefined8*)puVar1->data();
        puVar5 = (undefined8*)puVar1->end();
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
            _CFRelease(*puVar4);
        }
        puVar1->clear();
        puVar1 = &field_504;
        puVar4 = (undefined8*)puVar1->data();
        puVar5 = (undefined8*)puVar1->end();
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
            _CFRelease(*puVar4);
        }
        puVar1->clear();
        ResetSyncFences(this);
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }

    // 0x100be4d20, 112 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::ResetSyncFences()
    void BufferedRenderTargets::ResetSyncFences() {
        MapArea* this_00;
        long lVar1;
        SyncFence* this_01;
        SyncFence* pSVar2;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 188) != '\0') {
            this_01 = (SyncFence*)(&field_408)->data();
            pSVar2 = (SyncFence*)(&field_408)->end();
            for (; this_01 != pSVar2; this_01 = this_01 + 1) {
                this_01->Destroy();
            }
        }
    }

    // 0x100be4d90, 1152 bytes, placed by __FILE__ string
    // BufferedRenderTargets::MapColourTargetData(BufferedImageData&)
    void BufferedRenderTargets::MapColourTargetData(BufferedImageData* param_1) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        undefined4 uVar3;
        int iVar4;
        RenderDevice* this_01;
        RenderContext* this_02;
        long lVar5;
        MapArea* this_03;
        RenderDeviceCaps* pRVar6;
        undefined8* puVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        ulong uVar10;
        shared_ptr<RenderTargets>* this_04;
        RenderTargets* this_05;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_06;
        NpcUID* in_RDX;
        char* pcVar11;
        scoped_lock<std::mutex>* this_07;
        Singleton<RenderDevice>* this_08;
        undefined8 in_stack_ffffffffffffff78;
        uint uVar12;
        undefined8 in_stack_ffffffffffffff80;
        uint uVar13;
        scoped_lock<std::mutex> local_60[8];
        int local_58;
        undefined4 uStack_54;
        int local_3c;
        eastl local_38[8];

        uVar12 = (uint)((ulong)in_stack_ffffffffffffff78 >> 32);
        uVar13 = (uint)((ulong)in_stack_ffffffffffffff80 >> 32);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"MapColourTargetData", in_RDX);
        this_07 = local_60;
        std::scoped_lock<std::mutex>::scoped_lock(this_07, (mutex*)&field_104);
        this_01 = (RenderDevice*)this_07->Instance();
        this_02 = (RenderContext*)this_01->GetCurrentThreadRenderContext();
        lVar5 = this_02->GetDesc();
        if (*(char*)(lVar5 + 11) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!renderContext.GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      360, (char*)0);
        }
        if ((field_84 == 0) || (field_96 == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_bufferedFrames > 0 && m_sizeInBytes > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      361, (char*)0);
        }
        this_08 = (Singleton<RenderDevice>*)(ulong)field_72;
        iVar4 = field_88;
        iVar2 = GetFormatByteCount();
        iVar2 = iVar2 * iVar4;
        *(uint*)&param_1->field_40 = field_72;
        *(int*)&param_1->field_32 = field_88;
        *(int*)((long)&param_1->field_32 + 4) = field_92;
        *(uint*)((long)&param_1->field_40 + 4) = field_96;
        *(int*)&param_1->field_16 = iVar2;
        *(int*)&param_1->field_20 = iVar2;
        param_1->field_0 = this;
        this_03 = (MapArea*)this_08->Instance();
        pRVar6 = (RenderDeviceCaps*)this_03->GetOrigin();
        cVar1 = UseAppleCVPixelBuffers(this, pRVar6);
        if (cVar1 == '\0') {
            if (pRVar6->field_326 != false) {
                this_04 = (shared_ptr<RenderTargets>*)Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
                    (Array<shared_ptr<RenderTargets>, eastl::allocator>*)&field_24, (ulong)field_76);
                this_05 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(this_04);
                this_06 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              this_05->GetColourTargetTextures();
                puVar7 = (undefined8*)
                    eastl::vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_06, 0);
                uVar3 = (*puVar7)->GetNativeTextureId();
                lVar5 = (*___glewMapTexture2DINTEL)(uVar3, 0, 1, &local_3c, &local_58);
                CheckGlErrorInternal("glMapTexture2DINTEL",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                     406);
                if (lVar5 == 0) {
                    if ((ulong)(long)local_58 < 3) {
                        pcVar11 = (&PTR_s_GL_LAYOUT_DEFAULT_INTEL_100f28e78)[local_58];
                    } else {
                        uVar8 = logger::default_logger();
                        logger::Logger::Log(uVar8, 0, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                            "render/rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                            422, "Unknown glMapTexture2DINTEL layout - %d", CONCAT44(uVar12, local_58));
                        pcVar11 = "Unknown";
                    }
                    uVar8 = logger::default_logger();
                    uVar9 = GetFormatName(field_72);
                    logger::Logger::Log(uVar8, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/"
                                        "render/rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                        425, "glMapTexture2DINTEL failed (Format: %s - Layout: %s - %u bytes)", uVar9,
                                        pcVar11, field_96);
                }
                iVar4 = GetFormatByteCount(field_72);
                if (local_3c != iVar4 * field_88) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("stride == (int)(GetFormatByteCount(m_format) * m_width)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                              428, (char*)0);
                }
                *(long*)&param_1->field_8 = lVar5;
                goto LAB_100be5173;
            }
            cVar1 = UseShaderStorageBuffers(this, pRVar6);
            if (cVar1 == '\0') {
                cVar1 = UsePixelBuffers(pRVar6);
                if (cVar1 == '\0') {
                    uVar8 = GetReadRTInternal(this);
                    uVar9 = Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)&field_48, 0);
                    RenderContext::ReadColourTargetData(this_02, uVar8, uVar9, field_72, 0, 0, (ulong)uVar12 << 32,
                                                        (ulong)uVar13 << 32, field_88, field_92);
                    uVar8 = Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)&field_48, 0);
                    goto LAB_100be4f8c;
                }
                uVar8 = Array<PixelBuffer, eastl::allocator>::operator[](
                    (Array<PixelBuffer, eastl::allocator>*)&field_336, (ulong)field_76);
                PixelBuffer::MapRead(&local_58, uVar8, 1, 0, 0, 0);
            } else {
                uVar8 = Array<ShaderStorageBuffer, eastl::allocator>::operator[](
                    (Array<ShaderStorageBuffer, eastl::allocator>*)&field_360, (ulong)field_76);
                ShaderStorageBuffer::MapRead(&local_58, uVar8, 7, 0, 0, 0);
            }
            *(ulong*)&param_1->field_8 = CONCAT44(uStack_54, local_58);
            local_58.~ResourceDataT();
        } else {
            this_00 = &field_504;
            puVar7 = (undefined8*)Array<__CVBuffer*, eastl::allocator>::operator[](
                (Array<__CVBuffer*, eastl::allocator>*)this_00, (ulong)field_76);
            _CVPixelBufferLockBaseAddress(*puVar7, 1);
            puVar7 = (undefined8*)Array<__CVBuffer*, eastl::allocator>::operator[](
                (Array<__CVBuffer*, eastl::allocator>*)this_00, (ulong)field_76);
            lVar5 = _CVPixelBufferGetBaseAddress(*puVar7);
            *(long*)&param_1->field_8 = lVar5;
            if (lVar5 == 0) {
                uVar8 = logger::default_logger();
                uVar9 = GetFormatName(field_72);
                pcVar11 = "valid";
                if (*(long*)&param_1->field_8 == 0) {
                    pcVar11 = "null";
                }
                logger::Logger::Log(uVar8, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                    382, "Failed to map texture via CVPixelBuffer (format: %s, ptr: %s)", uVar9,
                                    pcVar11);
            }
            uVar12 = *(uint*)&param_1->field_16;
            puVar7 = (undefined8*)Array<__CVBuffer*, eastl::allocator>::operator[](
                (Array<__CVBuffer*, eastl::allocator>*)this_00, (ulong)field_76);
            uVar10 = _CVPixelBufferGetBytesPerRow(*puVar7);
            if (uVar10 != uVar12) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "imageDataOut.m_pixelData.m_RowPitch == CVPixelBufferGetBytesPerRow(m_cvPixelBuffers[m_readRT])",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                    "OGL/BufferedRenderTargets_OGL.cpp",
                    386, (char*)0);
            }
            if (field_72 != 7)
                goto LAB_100be5173;
            (&field_456, (ulong)field_96, 0)->set_max_size();
            SwapRBChannels(this, *(uchar**)&param_1->field_8);
            uVar8 = (&field_456)->data();
        LAB_100be4f8c:
            *(undefined8*)&param_1->field_8 = uVar8;
        }
    LAB_100be5173:
        std::scoped_lock<std::mutex>::~scoped_lock(local_60);
    }

    // 0x100be5290, 256 bytes, placed by __FILE__ string
    // BufferedRenderTargets::SwapRBChannels(unsigned char const*)
    void BufferedRenderTargets::SwapRBChannels(uchar* param_1) {
        undefined1* this_00;
        uchar uVar1;
        uchar uVar2;
        char cVar3;
        uint uVar5;
        uchar* puVar6;
        ulong uVar7;

        if ((field_72 != 7) && (field_72 != 29)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_format == FORMAT_B8G8R8A8_UNORM || m_format == FORMAT_R8G8B8A8_UNORM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      464, (char*)0);
        }
        this_00 = &field_456;
        cVar3 = this_00->empty();
        if (cVar3 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_convertedData.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      465, (char*)0);
        }
        uVar5 = GetFormatChannelCount(field_72) * field_88 * field_92;
        if (uVar5 != 0) {
            uVar7 = 0;
            do {
                uVar1 = param_1[uVar7];
                uVar2 = param_1[uVar7 + 2];
                puVar6 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar7);
                *puVar6 = uVar2;
                uVar2 = param_1[uVar7 + 1];
                puVar6 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar7 + 1);
                *puVar6 = uVar2;
                puVar6 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar7 + 2);
                *puVar6 = uVar1;
                uVar1 = param_1[uVar7 + 3];
                puVar6 = (uchar*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this_00, uVar7 + 3);
                *puVar6 = uVar1;
                uVar7 = uVar7 + 4;
            } while (uVar7 < uVar5);
        }
    }

    // 0x100be5490, 208 bytes, placed by __FILE__ string
    // BufferedRenderTargets::CopyColourTargetData(ImageData&)
    ulong BufferedRenderTargets::CopyColourTargetData(ImageData* param_1) {
        uint uVar1;
        void* pvVar2;
        undefined1 local_50[32];
        undefined4 local_30;
        undefined4 local_2c;
        undefined4 local_28;
        undefined4 local_24;

        new (local_50) BufferedImageData();
        MapColourTargetData(this, (BufferedImageData*)local_50);
        if ((void*)local_50._8_8_ == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("bufferedImageData.m_pixelData.m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      485, (char*)0);
        }
        if ((void*)local_50._8_8_ != (void*)0) {
            *(undefined4*)&param_1->field_8 = local_50._16_4_;
            *(undefined4*)&param_1->field_12 = local_50._20_4_;
            *(undefined4*)&param_1->field_32 = local_28;
            *(undefined4*)&param_1->field_24 = local_30;
            *(undefined4*)((long)&param_1->field_24 + 4) = local_2c;
            *(undefined4*)((long)&param_1->field_32 + 4) = local_24;
            uVar1 = field_96;
            pvVar2 = operator_new__((ulong)uVar1);
            *(void**)param_1 = pvVar2;
            param_1->field_16 = 1;
            _memcpy(pvVar2, (void*)local_50._8_8_, (ulong)uVar1);
        }
        local_50->~BufferedImageData();
        return CONCAT71((int7)((ulong)param_1 >> 8), (void*)local_50._8_8_ != (void*)0) & 4294967295;
    }

    // 0x100be5580, 416 bytes, placed by __FILE__ string
    // BufferedRenderTargets::WriteFinished()
    void BufferedRenderTargets::WriteFinished() {
        uint uVar1;
        char cVar2;
        BufferedRenderTargets* this_00;
        RenderDeviceCaps* pRVar3;
        RenderDevice* pRVar4;
        undefined4* puVar5;
        scoped_lock<std::mutex>* this_01;
        Singleton<RenderDevice>* this_02;
        __3 local_f0;
        scoped_lock<std::mutex> local_e0[8];
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_01 = local_e0;
        std::scoped_lock<std::mutex>::scoped_lock(this_01, (mutex*)&field_104);
        this_00 = (BufferedRenderTargets*)this_01->Instance();
        pRVar3 = (RenderDeviceCaps*)this_00->GetOrigin();
        uVar1 = field_80;
        if (field_84 == 1) {
        LAB_100be55df:
            pRVar4 = (RenderDevice*)this_00->Instance();
            cVar2 = pRVar4->ShouldDefer();
            if (cVar2 != '\0') {
                this_02 = (Singleton<RenderDevice>*)&field_432;
                puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02,
                                                                               (long)(int)uVar1);
                *puVar5 = 4;
                pRVar4 = (RenderDevice*)this_02->Instance();
                local_f0.field_0 = this;
                local_f0.field_8 = uVar1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    BufferedRenderTargets::WriteFinished()::__3, void>(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_f0);
                pRVar4->RunOnRenderThread(&local_d8);
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                    (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
                goto LAB_100be56a2;
            }
        } else {
            this_00 = this;
            cVar2 = UseShaderStorageBuffers(this, pRVar3);
            if (cVar2 != '\0')
                goto LAB_100be55df;
        }
        cVar2 = UseAppleCVPixelBuffers(this, pRVar3);
        if (cVar2 == '\0') {
            WriteFinishedInternal(this, uVar1);
        } else {
            cVar2 = this_thread::IsMainThread();
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                          539, (char*)0);
            }
            puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_432,
                                                                           (long)(int)uVar1);
            *puVar5 = 4;
        }
    LAB_100be56a2:
        field_76 = (field_76 + 1) % field_84;
        field_80 = (field_80 + 1) % field_84;
        std::scoped_lock<std::mutex>::~scoped_lock(local_e0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100be5730, 304 bytes, placed by __FILE__ string
    // BufferedRenderTargets::WriteFinishedInternal(int)
    void BufferedRenderTargets::WriteFinishedInternal(int param_1) {
        char cVar1;
        MapArea* this_00;
        RenderDeviceCaps* pRVar2;
        RenderDevice* this_01;
        SyncFence* pSVar3;
        undefined4* puVar4;
        undefined1 auVar6[16];
        eastl local_30[8];

        this_00 = (MapArea*)Instance();
        pRVar2 = (RenderDeviceCaps*)this_00->GetOrigin();
        this_01 = (RenderDevice*)this_00->Instance();
        auVar6 = this_01->GetCurrentThreadRenderContext();
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)"WriteFinishedInternal", auVar6._8_8_);
        if (pRVar2->field_326 == false) {
            cVar1 = UseAppleCVPixelBuffers(this, pRVar2);
            if (cVar1 == '\0') {
                cVar1 = UseShaderStorageBuffers(this, pRVar2);
                if (cVar1 == '\0') {
                    cVar1 = UsePixelBuffers(pRVar2);
                    if (cVar1 != '\0') {
                        CopyToPixelBuffer(this, auVar6._0_8_, param_1);
                    }
                } else {
                    CopyToShaderStorageBuffer(this, auVar6._0_8_, param_1);
                }
            }
        }
        if (pRVar2->field_188 == false) {
            puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_432,
                                                                           (long)param_1);
            *puVar4 = 4;
        } else {
            pSVar3 = (SyncFence*)Array<SyncFence, eastl::allocator>::operator[](
                (Array<SyncFence, eastl::allocator>*)&field_408, (ulong)param_1);
            pSVar3->Destroy();
            pSVar3 = (SyncFence*)Array<SyncFence, eastl::allocator>::operator[](
                (Array<SyncFence, eastl::allocator>*)&field_408, (ulong)param_1);
            cVar1 = pSVar3->Create();
            if (cVar1 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("result",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                          576, (char*)0);
            }
            puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_432,
                                                                           (ulong)param_1);
            *puVar4 = 60;
        }
    }

    // 0x100be5860, 1216 bytes, placed by __FILE__ string
    // BufferedRenderTargets::CopyToShaderStorageBuffer(RenderContext&, int)
    void BufferedRenderTargets::CopyToShaderStorageBuffer(RenderContext* param_1, int param_2) {
        Texture* pTVar1;
        undefined8 this_00;
        RenderContext* this_01;
        bool bVar2;
        int iVar3;
        uint uVar4;
        shared_ptr<RenderTargets>* this_02;
        RenderTargets* pRVar5;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined8* puVar6;
        ImmediateRenderContext* this_04;
        long lVar7;
        Vector4T* pVVar8;
        RenderPipelineState* pRVar9;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_05;
        Layout* this_06;
        ShaderStorageBuffer* pSVar10;
        int* piVar11;
        Viewport* pVVar12;
        OutputMergerState* this_07;
        VertexDeclaration* pVVar13;
        RenderContext* this_08;
        DrawCallState* pDVar14;
        ShaderProgram* this_09;
        ShaderProgram* this_10;
        undefined1 auVar15[16];
        Vector4T<float> local_5c8[16];
        undefined1 local_5b8[32];
        DrawCallState local_598;
        RenderContext* local_568;
        int local_55c;
        OutputMergerState local_558;
        RenderPipelineState local_488;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_568 = param_1;
        bVar2 = m_SSBOCopyRT.operator_cast_to_bool();
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_SSBOCopyRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      672, (char*)0);
        }
        this_10 = (ShaderProgram*)0;
        this_02 = (shared_ptr<RenderTargets>*)Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
            (Array<shared_ptr<RenderTargets>, eastl::allocator>*)&field_24, 0);
        pRVar5 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(this_02);
        this_03 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar5->GetColourTargetTextures();
        puVar6 = (undefined8*)eastl::vector<
            Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_03,
                                                                                                             0);
        bVar2 = true;
        switch (field_72) {
        case 1:
            this_10 = (ShaderProgram*)&m_SSBOCopyShaderFloat4;
            break;
        default:
            goto switchD_100be5901_caseD_2;
        case 7:
            this_10 = (ShaderProgram*)&m_SSBOCopyShaderInt4;
            break;
        case 11:
            this_10 = (ShaderProgram*)&m_SSBOCopyShaderFloat1;
            break;
        case 29:
            this_10 = (ShaderProgram*)&m_SSBOCopyShaderInt4RBSwizzle;
        }
        bVar2 = false;
    switchD_100be5901_caseD_2:
        if (!bVar2) {
            pTVar1 = (Texture*)*puVar6;
            iVar3 = this_10->GetNativeShaderProgram();
            if (iVar3 != 0) {
                local_5b8._24_8_ = pTVar1;
                local_55c = param_2;
                math::Vector4T<float>::Vector4T(local_5c8, 0.0);
                this_01 = local_568;
                this_08 = local_568;
                this_04 = (ImmediateRenderContext*)local_568->GetImmediateContext();
                lVar7 = this_08->Instance();
                this_04->SetBlendState((BlendState*)(lVar7 + 1524));
                pRVar5 = (RenderTargets*)this_01->GetImmediateContext();
                pVVar8 = (Vector4T*)m_SSBOCopyRT.end();
                pRVar5->ClearRenderTargets(pVVar8, (ulong)local_5c8);
                new (&local_598) DrawCallState();
                new (&local_488) RenderPipelineState();
                local_598.SetRenderPipelineState(&local_488);
                new (&local_558) OutputMergerState();
                this_00 = local_5b8._24_8_;
                local_598.SetOutputMergerState(&local_558);
                pDVar14 = &local_598;
                pRVar9 = (RenderPipelineState*)pDVar14->GetRenderPipelineState();
                lVar7 = pDVar14->Instance();
                pRVar9->SetRasteriserState((RasteriserState*)(lVar7 + 1200));
                pDVar14 = &local_598;
                this_05 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                              pDVar14->GetRenderPipelineState();
                auVar15 = pDVar14->Instance();
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                           2>::compressed_pair_imp(this_05, (EntityHighlight**)(auVar15._0_8_ + 2208),
                                                                   auVar15._8_8_);
                pDVar14 = &local_598;
                this_06 = (Layout*)pDVar14->GetRenderPipelineState();
                lVar7 = pDVar14->Instance();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::SetHeapSize(this_06, lVar7 + 1080);
                pRVar9 = (RenderPipelineState*)local_598.GetRenderPipelineState();
                pRVar9->SetShaderProgram(this_10);
                pRVar9 = (RenderPipelineState*)local_598.GetRenderPipelineState();
                new (local_5b8) HashedString("sTexture");
                this_09 = this_10;
                iVar3 = this_10->GetConstIndex(local_5b8);
                lVar7 = this_09->Instance();
                pRVar9->SetPSTextureSamplerPair(0, this_00, iVar3, (SamplerState*)(lVar7 + 80), false);
                pRVar9 = (RenderPipelineState*)local_598.GetRenderPipelineState();
                new (local_5b8) HashedString("uStorageBuffer");
                uVar4 = this_10->GetStorageBufferIndex(local_5b8);
                pSVar10 = (ShaderStorageBuffer*)Array<ShaderStorageBuffer, eastl::allocator>::operator[](
                    (Array<ShaderStorageBuffer, eastl::allocator>*)&field_360, (long)local_55c);
                pRVar9->SetPSShaderStorageBuffer(uVar4, pSVar10);
                piVar11 = (int*)this_00->second();
                iVar3 = *piVar11;
                lVar7 = this_00->second();
                new (local_5b8) Viewport(0, 0, iVar3, *(int*)(lVar7 + 4), 0.0, 1.0);
                pVVar12 = (Viewport*)local_598.GetOutputMergerState();
                OutputMergerState::SetViewports(pVVar12, (uint)local_5b8);
                this_07 = (OutputMergerState*)local_598.GetOutputMergerState();
                pRVar5 = (RenderTargets*)m_SSBOCopyRT.end();
                this_07->SetRenderTargets(pRVar5);
                pVVar13 = (VertexDeclaration*)this_10->second();
                m_IAState.SetVertexStreamData(pVVar13, (VertexBuffer*)&m_quadVB);
                local_598.SetInputAssemblerState((InputAssemblerState*)&m_IAState);
                local_568->DrawPrimitives(&local_598, 5, 0, 4);
                local_558.~OutputMergerState();
                local_488.~RenderPipelineState();
                local_598.~DrawCallState();
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                        "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                        687, "Attempting to read back unsupported texture format");
    }

    // 0x100be5d20, 272 bytes, placed by __FILE__ string
    // BufferedRenderTargets::CopyToPixelBuffer(RenderContext&, int)
    void BufferedRenderTargets::CopyToPixelBuffer(RenderContext* param_1, int param_2) {
        PixelBuffer* pPVar1;
        ImmediateRenderContext* pIVar2;
        shared_ptr<RenderTargets>* this_00;
        RenderTargets* this_01;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        undefined8* puVar3;
        ActiveTextureSaveRestore local_50;
        undefined1 local_40[16];

        pPVar1 = (PixelBuffer*)Array<PixelBuffer, eastl::allocator>::operator[](
            (Array<PixelBuffer, eastl::allocator>*)&field_336, (long)param_2);
        pPVar1->Bind();
        pIVar2 = (ImmediateRenderContext*)param_1->GetImmediateContext();
        new (&local_50) ActiveTextureSaveRestore(pIVar2);
        pIVar2 = (ImmediateRenderContext*)param_1->GetImmediateContext();
        this_00 = (shared_ptr<RenderTargets>*)Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
            (Array<shared_ptr<RenderTargets>, eastl::allocator>*)&field_24, 0);
        this_01 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(this_00);
        this_02 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      this_01->GetColourTargetTextures();
        puVar3 = (undefined8*)eastl::vector<
            Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_02,
                                                                                                             0);
        pIVar2->BindTexture((Texture*)*puVar3, 0);
        new (local_40) GLFormat(field_72);
        _glGetTexImage(3553, 0, local_40._4_4_, local_40._8_4_, 0);
        CheckGlErrorInternal("glGetTexImage",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                             733);
        pPVar1 = (PixelBuffer*)Array<PixelBuffer, eastl::allocator>::operator[](
            (Array<PixelBuffer, eastl::allocator>*)&field_336, (long)param_2);
        pPVar1->Unbind();
        local_50.~ActiveTextureSaveRestore();
    }

    // 0x100be5eb0, 384 bytes, placed by __FILE__ string
    // BufferedRenderTargets::UnmapColourTargetData()
    void BufferedRenderTargets::UnmapColourTargetData() {
        undefined1* this_00;
        code* pcVar1;
        char cVar2;
        undefined4 uVar3;
        MapArea* this_01;
        RenderDeviceCaps* pRVar4;
        undefined8* puVar5;
        shared_ptr<RenderTargets>* this_02;
        RenderTargets* this_03;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_04;
        PixelBuffer* this_05;
        BufferInterface* this_06;
        ShaderStorageBuffer* this_07;
        NpcUID* in_RDX;
        scoped_lock<std::mutex>* this_08;
        scoped_lock<std::mutex> local_28[8];
        eastl local_20[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_20, (NpcUID*)"UnmapColourTargetData", in_RDX);
        this_08 = local_28;
        std::scoped_lock<std::mutex>::scoped_lock(this_08, (mutex*)&field_104);
        this_01 = (MapArea*)this_08->Instance();
        pRVar4 = (RenderDeviceCaps*)this_01->GetOrigin();
        cVar2 = UseAppleCVPixelBuffers(this, pRVar4);
        if (cVar2 != '\0') {
            puVar5 = (undefined8*)Array<__CVBuffer*, eastl::allocator>::operator[](
                (Array<__CVBuffer*, eastl::allocator>*)&field_504, (ulong)field_76);
            _CVPixelBufferUnlockBaseAddress(*puVar5);
        }
        pcVar1 = ___glewUnmapTexture2DINTEL;
        if (pRVar4->field_326 != false) {
            this_02 = (shared_ptr<RenderTargets>*)Array<shared_ptr<RenderTargets>, eastl::allocator>::operator[](
                (Array<shared_ptr<RenderTargets>, eastl::allocator>*)&field_24, (ulong)field_76);
            this_03 = (RenderTargets*)shared_ptr<RenderTargets>::operator->(this_02);
            this_04 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                          this_03->GetColourTargetTextures();
            puVar5 = (undefined8*)eastl::
                vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](
                    this_04, 0);
            uVar3 = (*puVar5)->GetNativeTextureId();
            (*pcVar1)(uVar3, 0);
            CheckGlErrorInternal("glUnmapTexture2DINTEL",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                 607);
        }
        cVar2 = (&field_336)->empty();
        if (cVar2 == '\0') {
            this_05 = (PixelBuffer*)Array<PixelBuffer, eastl::allocator>::operator[](
                (Array<PixelBuffer, eastl::allocator>*)&field_336, (ulong)field_76);
            this_05->Unmap();
        }
        this_00 = &field_360;
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            this_06 = (BufferInterface*)Array<ShaderStorageBuffer, eastl::allocator>::operator[](
                (Array<ShaderStorageBuffer, eastl::allocator>*)this_00, (ulong)field_76);
            cVar2 = this_06->IsMapped();
            if (cVar2 != '\0') {
                this_07 = (ShaderStorageBuffer*)Array<ShaderStorageBuffer, eastl::allocator>::operator[](
                    (Array<ShaderStorageBuffer, eastl::allocator>*)this_00, (ulong)field_76);
                this_07->Unmap();
            }
        }
        cVar2 = (&field_456)->empty();
        if (cVar2 == '\0') {
            (&field_456, 0, 0)->set_max_size();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100be6030, 96 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::IsReadyToRead() const
    ulong BufferedRenderTargets::IsReadyToRead() {
        int iVar1;
        int* piVar2;
        scoped_lock<std::mutex> local_18[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_18, (mutex*)&field_104);
        piVar2 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_432, (ulong)field_76);
        iVar1 = *piVar2;
        std::scoped_lock<std::mutex>::~scoped_lock(local_18);
        return CONCAT71((int7)((ulong)&field_432 >> 8), iVar1 < 1) & 4294967295;
    }

    // 0x100be6090, 368 bytes, placed by __FILE__ string
    // BufferedRenderTargets::OnEndFrame()
    void BufferedRenderTargets::OnEndFrame() {
        undefined1* this_00;
        char cVar1;
        MapArea* this_01;
        RenderDeviceCaps* pRVar3;
        long lVar4;
        long lVar5;
        ulong uVar6;
        SyncFence* this_02;
        int* piVar7;
        NXTPixScreen* this_03;
        ulong uVar8;
        bool bVar9;
        scoped_lock<std::mutex> local_38[8];

        this_01 = (MapArea*)Instance();
        pRVar3 = (RenderDeviceCaps*)this_01->GetOrigin();
        std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_104);
        this_00 = &field_408;
        lVar4 = this_00->end();
        lVar5 = (&field_432)->end();
        if (lVar4 != lVar5) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_syncFences.size() == m_frameDelays.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      637, (char*)0);
        }
        lVar4 = this_00->end();
        if (lVar4 != 0) {
            uVar6 = 0;
            uVar8 = 1;
            do {
                this_02 = (SyncFence*)Array<SyncFence, eastl::allocator>::operator[](
                    (Array<SyncFence, eastl::allocator>*)this_00, uVar6);
                piVar7 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_432, uVar6);
                cVar1 = this_02->IsCreated();
                if (cVar1 != '\0') {
                    cVar1 = this_02->HasBeenNotified();
                    if (cVar1 != '\0') {
                        bVar9 = true;
                        if (pRVar3->field_326 == false) {
                            cVar1 = UseAppleCVPixelBuffers(this, pRVar3);
                            if (cVar1 == '\0') {
                                this_03 = (NXTPixScreen*)((BufferedRenderTargets*)this)->Instance();
                                bVar9 = this_03->GetUIHeight() == 3;
                            }
                        }
                        *piVar7 = (uint)(bVar9 ^ 1) << 2;
                        this_02->Destroy();
                    }
                }
                *piVar7 = *piVar7 + -1;
                uVar6 = this_00->end();
                bVar9 = uVar8 < uVar6;
                uVar6 = uVar8;
                uVar8 = (ulong)((int)uVar8 + 1);
            } while (bVar9);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_38);
    }

    // 0x100be63d0, 1648 bytes, placed by __FILE__ string
    // BufferedRenderTargets::CreateStaticRenderingResources()
    void BufferedRenderTargets::CreateStaticRenderingResources() {
        undefined* puVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        byte bVar5;
        byte bVar6;
        int iVar7;
        RenderDevice* pRVar8;
        RenderContext* this_00;
        undefined8 uVar9;
        Singleton<RenderDevice>* this_01;
        NXTPixToolkit* this_02;
        ImmediateRenderContext* this_03;
        undefined8 uVar10;
        undefined8 uVar11;
        MapArea* this_04;
        long lVar12;
        char* pcVar13;
        char* pcVar14;
        Singleton<RenderDevice>* this_05;
        undefined1 local_600[280];
        undefined1 local_4e8[280];
        undefined1 local_3d0[280];
        undefined1 local_2b8[280];
        undefined1 local_1a0[280];
        VertexElementDesc local_88;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_60[24];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_48[24];

        if (CreateStaticRenderingResources()::quadVertices == '\0') {
            this = (BufferedRenderTargets*)&CreateStaticRenderingResources()::quadVertices;
            iVar7 = ___cxa_guard_acquire();
            if (iVar7 != 0) {
                new (&CreateStaticRenderingResources()::quadVertices) math::Point<float>(0.0, 1.0);
                new (&DAT_104235078) math::Point<float>(1.0, 1.0);
                new (&DAT_104235080) math::Point<float>(0.0, 0.0);
                new (&DAT_104235088) math::Point<float>(1.0, 0.0);
                this = (BufferedRenderTargets*)&CreateStaticRenderingResources()::quadVertices;
                ___cxa_guard_release();
            }
        }
        pRVar8 = (RenderDevice*)Instance();
        this_00 = (RenderContext*)pRVar8->GetPrimaryRenderContext();
        uVar9 = this_00->GetOpenGLContext();
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        this_01 = (Singleton<RenderDevice>*)_objc_retainAutorelease(uVar9);
        this_05 = this_01;
        uVar9 = (*(code*)PTR__objc_msgSend_100ee9e50)(this_01, "CGLContextObj");
        pRVar8 = (RenderDevice*)this_05->Instance();
        this_02 = (NXTPixToolkit*)pRVar8->GetPrimaryRenderContext();
        this_03 = (ImmediateRenderContext*)this_02->GetScreen();
        uVar10 = this_03->GetOpenGLPixelFormat();
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar10 = _objc_retainAutorelease(uVar10);
        uVar11 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar10, "CGLPixelFormatObj");
        iVar7 = _CVOpenGLTextureCacheCreate(*(undefined8*)PTR__kCFAllocatorDefault_100ee9dc8, 0, uVar9, uVar11, 0,
                                            &m_cvTextureCache);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar10);
        (*(code*)puVar1)();
        if (iVar7 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("result == kCVReturnSuccess",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      758, (char*)0);
        }
        this_04 = (MapArea*)this_01->Instance();
        lVar12 = this_04->GetOrigin();
        if (*(char*)(lVar12 + 132) != '\0') {
            bVar2 = m_quadVB.Create(32, 8, &CreateStaticRenderingResources()::quadVertices);
            new (&local_88) VertexElementDesc(0, "aTexCoord", 1, 0, 5, 0);
            new (local_1a0) VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_1a0 + 16),
                "attribute vec2 aTexCoord;                                              \n                             "
                "                                          \nout vec2 vTexCoord;                                       "
                "             \n                                                                       \nvoid main()   "
                "                                                         \n{                                          "
                "                            \n   vTexCoord = aTexCoord;                                              "
                "\n                                                                       \n   gl_Position = "
                "vec4(aTexCoord * 2.0 - 1.0, 0.0, 1.0);                \n}                                             "
                "                         \n");
            new (local_600) PixelShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_600 + 16),
                "                                                                 \nin vec2 vTexCoord;                 "
                "                              \n                                                                 "
                "\nuniform sampler2D sTexture;                                      \n                                 "
                "                                \nlayout (std430) restrict buffer uStorageBuffer                   "
                "\n{                                                                \n   float data[];                 "
                "                                \n};                                                               \n "
                "                                                                \nvoid main()                         "
                "                             \n{                                                                \n   "
                "float texColour = texture2D(sTexture, vTexCoord).r;           \n   ivec2 texSize = "
                "textureSize(sTexture, 0);                     \n   ivec2 intTexCoord = ivec2(vTexCoord * "
                "vec2(texSize));         \n   int dataOffset = intTexCoord.y * texSize.x + intTexCoord.x;   \n         "
                "                                                        \n   data[dataOffset] = texColour;            "
                "                     \n}\n");
            new (local_4e8) PixelShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_4e8 + 16),
                "                                                                 \nin vec2 vTexCoord;                 "
                "                              \n                                                                 "
                "\nuniform sampler2D sTexture;                                      \n                                 "
                "                                \nlayout (std430) restrict buffer uStorageBuffer                   "
                "\n{                                                                \n   vec4 data[];                  "
                "                                \n};                                                               \n "
                "                                                                \nvoid main()                         "
                "                             \n{                                                                \n   "
                "vec4 texColour = texture2D(sTexture, vTexCoord);              \n   ivec2 texSize = "
                "textureSize(sTexture, 0);                     \n   ivec2 intTexCoord = ivec2(vTexCoord * "
                "vec2(texSize));         \n   int dataOffset = intTexCoord.y * texSize.x + intTexCoord.x;   \n         "
                "                                                        \n   data[dataOffset] = texColour;            "
                "                     \n}\n");
            new (local_3d0) PixelShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_3d0 + 16),
                "                                                                                                      "
                "\nin vec2 vTexCoord;                                                                                  "
                "  \n                                                                                                  "
                "    \nuniform sampler2D sTexture;                                                                     "
                "      \n                                                                                              "
                "        \nlayout (std430) restrict buffer uStorageBuffer                                              "
                "          \n{                                                                                         "
                "            \n   uint data[];                                                                         "
                "              \n};                                                                                    "
                "                \n                                                                                    "
                "                  \nvoid main()                                                                       "
                "                    \n{                                                                               "
                "                      \n   uvec4 texColour = uvec4(texture2D(sTexture, vTexCoord) * 255.0);           "
                "                        \n   ivec2 texSize = textureSize(sTexture, 0);                                "
                "                          \n   ivec2 intTexCoord = ivec2(vTexCoord * vec2(texSize));                  "
                "                            \n   int dataOffset = intTexCoord.y * texSize.x + intTexCoord.x;          "
                "                              \n                                                                      "
                "                                \n   data[dataOffset] = (texColour.a << 24) | (texColour.b << 16) | "
                "(texColour.g << 8) | (texColour.r); \n}\n");
            new (local_2b8) PixelShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
            std::operator<<(
                (ostream*)(local_2b8 + 16),
                "                                                                                                      "
                "\nin vec2 vTexCoord;                                                                                  "
                "  \n                                                                                                  "
                "    \nuniform sampler2D sTexture;                                                                     "
                "      \n                                                                                              "
                "        \nlayout (std430) restrict buffer uStorageBuffer                                              "
                "          \n{                                                                                         "
                "            \n   uint data[];                                                                         "
                "              \n};                                                                                    "
                "                \n                                                                                    "
                "                  \nvoid main()                                                                       "
                "                    \n{                                                                               "
                "                      \n   uvec4 texColour = uvec4(texture2D(sTexture, vTexCoord) * 255.0);           "
                "                        \n   ivec2 texSize = textureSize(sTexture, 0);                                "
                "                          \n   ivec2 intTexCoord = ivec2(vTexCoord * vec2(texSize));                  "
                "                            \n   int dataOffset = intTexCoord.y * texSize.x + intTexCoord.x;          "
                "                              \n                                                                      "
                "                                \n   data[dataOffset] = (texColour.a << 24) | (texColour.r << 16) | "
                "(texColour.g << 8) | (texColour.b); \n}\n");
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_60);
            pcVar13 = (char*)local_60->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_48);
            pcVar14 = (char*)local_48->c_str();
            bVar3 = m_SSBOCopyShaderFloat1.CreateFromSourceString(pcVar13, pcVar14, &local_88, 1, '\x04');
            local_48->~basic_string();
            local_60->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_60);
            pcVar13 = (char*)local_60->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_48);
            pcVar14 = (char*)local_48->c_str();
            bVar4 = m_SSBOCopyShaderFloat4.CreateFromSourceString(pcVar13, pcVar14, &local_88, 1, '\x04');
            local_48->~basic_string();
            local_60->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_60);
            pcVar13 = (char*)local_60->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_48);
            pcVar14 = (char*)local_48->c_str();
            bVar5 = m_SSBOCopyShaderInt4.CreateFromSourceString(pcVar13, pcVar14, &local_88, 1, '\x04');
            local_48->~basic_string();
            local_60->~basic_string();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_60);
            pcVar13 = (char*)local_60->c_str();
            std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_48);
            pcVar14 = (char*)local_48->c_str();
            bVar6 = m_SSBOCopyShaderInt4RBSwizzle.CreateFromSourceString(pcVar13, pcVar14, &local_88, 1, '\x04');
            local_48->~basic_string();
            local_60->~basic_string();
            if ((bVar2 & bVar3 & bVar4 & bVar5 & bVar6) == 0) {
                uVar9 = logger::default_logger();
                logger::Logger::Log(uVar9, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                    905, "Failed to initialise BufferedRenderTargets static resources");
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                906, (char*)0);
            }
            local_2b8->~PixelShaderSourceStream();
            local_3d0->~PixelShaderSourceStream();
            local_4e8->~PixelShaderSourceStream();
            local_600->~PixelShaderSourceStream();
            local_1a0->~VertexShaderSourceStream();
        }
    }

    // 0x100be6a60, 96 bytes, placed by class name and neighbouring functions
    // BufferedRenderTargets::DestroyStaticRenderingResources()
    void BufferedRenderTargets::DestroyStaticRenderingResources() {
        m_SSBOCopyShaderInt4RBSwizzle.Destroy();
        m_SSBOCopyShaderInt4.Destroy();
        m_SSBOCopyShaderFloat4.Destroy();
        m_SSBOCopyShaderFloat1.Destroy();
        m_IAState.Destroy();
        m_quadVB.Destroy();
        RenderTargets::SafeReset((shared_ptr*)&m_SSBOCopyRT);
    }

    // 0x100c0c3b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.101
    void ___cxx_global_var_init_101() {
        new (&BufferedRenderTargets::m_SSBOCopyShaderFloat1) ShaderProgram("");
        ___cxa_atexit(ShaderProgram::~ShaderProgram, &BufferedRenderTargets::m_SSBOCopyShaderFloat1, 4294967296);
    }

    // 0x100c0c3f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.102
    void ___cxx_global_var_init_102() {
        new (&BufferedRenderTargets::m_SSBOCopyShaderFloat4) ShaderProgram("");
        ___cxa_atexit(ShaderProgram::~ShaderProgram, &BufferedRenderTargets::m_SSBOCopyShaderFloat4, 4294967296);
    }

    // 0x100c0c430, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.103
    void ___cxx_global_var_init_103() {
        new (&BufferedRenderTargets::m_SSBOCopyShaderInt4) ShaderProgram("");
        ___cxa_atexit(ShaderProgram::~ShaderProgram, &BufferedRenderTargets::m_SSBOCopyShaderInt4, 4294967296);
    }

    // 0x100c0c470, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.104
    void ___cxx_global_var_init_104() {
        new (&BufferedRenderTargets::m_SSBOCopyShaderInt4RBSwizzle) ShaderProgram("");
        ___cxa_atexit(ShaderProgram::~ShaderProgram, &BufferedRenderTargets::m_SSBOCopyShaderInt4RBSwizzle, 4294967296);
    }

    // 0x100c0c4b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.105
    void ___cxx_global_var_init_105() {
        new (&BufferedRenderTargets::m_IAState) InputAssemblerState();
        ___cxa_atexit(InputAssemblerState::~InputAssemblerState, &BufferedRenderTargets::m_IAState, 4294967296);
    }

    // 0x100c0c4f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.106
    void ___cxx_global_var_init_106() {
        new (&BufferedRenderTargets::m_quadVB) VertexBuffer();
        ___cxa_atexit(VertexBuffer::~VertexBuffer, &BufferedRenderTargets::m_quadVB, 4294967296);
    }

    // 0x100c0c530, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.107
    void ___cxx_global_var_init_107(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&BufferedRenderTargets::m_SSBOCopyRT)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5318, &BufferedRenderTargets::m_SSBOCopyRT, 4294967296);
    }

} // namespace jag::render
