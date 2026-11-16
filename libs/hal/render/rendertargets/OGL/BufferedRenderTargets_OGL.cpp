// libs/hal/render/rendertargets/OGL/BufferedRenderTargets_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "libs/hal/render/rendertargets/BufferedRenderTargets.h"

namespace jag::render {
    // 0x103bda930, set at startup by ___cxx_global_var_init.101
    ShaderProgram BufferedRenderTargets::m_SSBOCopyShaderFloat1 = ShaderProgram("");

    // 0x103bdb070, set at startup by ___cxx_global_var_init.102
    ShaderProgram BufferedRenderTargets::m_SSBOCopyShaderFloat4 = ShaderProgram("");

    // 0x103bdb7b0, set at startup by ___cxx_global_var_init.103
    ShaderProgram BufferedRenderTargets::m_SSBOCopyShaderInt4 = ShaderProgram("");

    // 0x103bdbef0, set at startup by ___cxx_global_var_init.104
    ShaderProgram BufferedRenderTargets::m_SSBOCopyShaderInt4RBSwizzle = ShaderProgram("");

    // 0x103bdc630, set at startup by ___cxx_global_var_init.105
    InputAssemblerState BufferedRenderTargets::m_IAState = InputAssemblerState();

    // 0x103bdc6f0, set at startup by ___cxx_global_var_init.106
    VertexBuffer BufferedRenderTargets::m_quadVB = VertexBuffer();

    // 0x103bdc740, set at startup by ___cxx_global_var_init.107
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> BufferedRenderTargets::m_SSBOCopyRT =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x103bdc750
    int64_t BufferedRenderTargets::m_cvTextureCache;

    // 0x100be2e20
    BufferedRenderTargets::BufferedRenderTargets(unsigned int arg1, unsigned int arg2, unsigned int arg3, Format format,
                                                 const char* str)
        : RenderDeviceOnEndFrame(true) {
        bool cVar2;
        BufferedRenderTargets* renderDeviceCaps;
        ShaderStorageBuffer* this_05;
        ShaderStorageBuffer* pSVar4;
        Logger* pLVar5;
        PixelBuffer* this_06;
        PixelBuffer* pPVar6;
        uint8_t auVar7[12];

        uint8_t* this_00 = &field_24;
        new (this_00) Array<shared_ptr<RenderTargets>>();
        new (&field_48) Array<unsigned char>();
        field_72 = format;
        field_76 = 1;
        field_80 = 0;
        field_84 = arg1;
        field_88 = arg2;
        field_92 = arg3;
        int iVar3 = GetFormatByteCount(format);
        field_96 = iVar3 * arg3 * arg2;
        new (&field_104) std::mutex();
        new (&field_168) eastl::fixed_string<char, 128>(str);
        uint8_t* this_01 = &field_336;
        new (this_01) Array<PixelBuffer>();
        uint8_t* this_02 = &field_360;
        new (this_02) Array<ShaderStorageBuffer>();
        new (&field_384) Array<std::unique_ptr<Texture2D>>();
        new (&field_408) Array<SyncFence>();
        new (&field_432) Array<int>();
        new (&field_456) Array<unsigned char, BucketAllocatorEASTL>();
        new (&field_480) Array<__CVBuffer*>();
        uint8_t* this_03 = &field_504;
        Singleton<RenderDevice>* this_07 = (Singleton<RenderDevice>*)this_03;
        new (this_03) Array<__CVBuffer*>();
        if ((field_84 == 0) || (field_96 == 0)) {
            LogAssert("m_bufferedFrames > 0 && m_sizeInBytes > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      54, nullptr);
        }
        renderDeviceCaps = (BufferedRenderTargets*)this_07->Instance();
        auVar7 = renderDeviceCaps->GetOrigin();
        BufferedRenderTargets* this_04 = auVar7._0_8_;
        if ((field_84 != 1) &&
            (renderDeviceCaps = this_04,
             cVar2 = IsContinuousReadbackSupported(this_04, (RenderDeviceCaps*)(unsigned long)field_72, auVar7._8_4_),
             !cVar2)) {
            LogAssert("m_bufferedFrames == 1 || IsContinuousReadbackSupported(deviceCaps, m_format)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      58, "Continuous readbacks (bufferedFrames > 1) are not supported by this device");
        }
        unsigned int uVar1 = field_84;
        if ((unsigned long)uVar1 == 1) {
            field_76 = 0;
        }
        Format format_00 = field_72;
        cVar2 = UseAppleCVPixelBuffers((RenderDeviceCaps*)renderDeviceCaps, format_00);
        if (!cVar2) {
            if (this_04->field_326 == '\0') {
                cVar2 = UseShaderStorageBuffers(this, (RenderDeviceCaps*)this_04);
                if (!cVar2) {
                    cVar2 = UsePixelBuffers((RenderDeviceCaps*)this_04);
                    if (!cVar2) {
                        pLVar5 = logger::default_logger();
                        pLVar5->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                    105, "Using unbuffered path for BufferedRenderTargets (slow)");
                        this_00->set_max_size((unsigned long)field_84, 0);
                        field_48.set_max_size((unsigned long)field_96, 0);
                    } else {
                        pLVar5 = logger::default_logger();
                        pLVar5->Log(false, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                    95, "Using pixel buffer path for BufferedRenderTargets (potentially slow)");
                        this_00->set_max_size(1, 0);
                        this_01->set_max_size((unsigned long)field_84, 0);
                        this_06 = (PixelBuffer*)this_01->data();
                        pPVar6 = (PixelBuffer*)this_01->end();
                        for (; this_06 != pPVar6; this_06 = this_06 + 1) {
                            this_06->Create(field_96, 0, nullptr);
                        }
                    }
                } else {
                    this_00->set_max_size(1, 0);
                    this_02->set_max_size((unsigned long)field_84, 0);
                    this_05 = (ShaderStorageBuffer*)this_02->data();
                    pSVar4 = (ShaderStorageBuffer*)this_02->end();
                    for (; this_05 != pSVar4; this_05 = (ShaderStorageBuffer*)((long)&this_05[1].field_16 + 7)) {
                        iVar3 = GetFormatByteCount(field_72);
                        this_05->Create(iVar3 * arg3 * arg2, 3, nullptr);
                    }
                    if ((this_04->field_155 == '\0') && ((field_72 == 11 || (field_72 == 1)))) {
                        LogAssert("deviceCaps.m_FloatTextures || (m_format != FORMAT_R32G32B32A32_FLOAT && m_format != "
                                  "FORMAT_R32_FLOAT)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                  "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                  91, nullptr);
                    }
                }
            } else {
                this_00->set_max_size((unsigned long)uVar1, 0);
            }
        } else {
            if ((format_00 == 21) && (this_04->field_158 == '\0')) {
                LogAssert("m_format != FORMAT_R16_FLOAT || deviceCaps.m_HalfFloatColourTargets",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                          69, nullptr);
            }
            this_00->set_max_size((unsigned long)field_84, 0);
            field_384.set_max_size((unsigned long)field_84, 0);
            this_03->set_max_size((unsigned long)field_84, 0);
            field_480.set_max_size((unsigned long)field_84, 0);
        }
        field_408.set_max_size((unsigned long)field_84, 0);
        field_432.set_max_size((unsigned long)field_84, 0);
    }

    // 0x100be3410
    void BufferedRenderTargets::IsContinuousReadbackSupported(const RenderDeviceCaps& renderDeviceCaps, Format format) {
        UseAppleCVPixelBuffers((RenderDeviceCaps*)this, (Format)renderDeviceCaps);
    }

    // 0x100be3420
    bool BufferedRenderTargets::UseAppleCVPixelBuffers(const RenderDeviceCaps& renderDeviceCaps, Format format) {
        return format == 29 || format == 7;
    }

    // 0x100be39a0
    bool BufferedRenderTargets::UsePixelBuffers(const RenderDeviceCaps& renderDeviceCaps) {
        if (renderDeviceCaps.field_323 == false) {
            return false;
        }
        if (renderDeviceCaps.field_180 == false) {
            return renderDeviceCaps.field_179 != false;
        }
        return true;
    }

    // 0x100be3cd0
    BufferedRenderTargets::~BufferedRenderTargets() {
        auto this_00 = field_24.data();
        auto psVar2 = field_24.end();
        while (true) {
            if (this_00 == psVar2) {
                field_504.~Array();
                field_480.~Array();
                field_456.~Array();
                field_432.~Array();
                field_408.~Array();
                field_384.~Array();
                field_360.~Array();
                field_336.~Array();
                field_168.~fixed_string();
            }
            if (shared_ptr::operator_cast_to_bool(this_00) != '\0')
                break;
            this_00 = this_00 + 1;
        }
        LogAssert("!renderTargets",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/OGL/"
                  "BufferedRenderTargets_OGL.cpp",
                  122, "Failed to call Destroy on BufferedRenderTargets");
    }

    // 0x100be3ef0
    void BufferedRenderTargets::UseShaderStorageBuffers(const RenderDeviceCaps& renderDeviceCaps, Format format) {
        if (((format == 11) || (format == 1)) && (renderDeviceCaps.field_155[0] == '\0')) {
            return 0;
        }
        uint64_t uVar1 = 0;
        if ((renderDeviceCaps.field_132 != false) && (renderDeviceCaps.field_180 != false)) {
            if (28 < format - 1) {
                return 0;
            }
            uVar1 = (((uint64_t)1048580 << 8) | (uint8_t)((268436545U >> (format - 1 & 31) & 1) != 0));
        }
        return uVar1;
    }

    // 0x100be3f40
    uint64_t BufferedRenderTargets::GetOptimalDepthReadbackFormat() {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        uint64_t uVar2 = 11;
        if (*(char*)(lVar1 + 132) == '\0') {
            uVar2 = 29;
        }
        return uVar2;
    }

    // 0x100be3f70
    void BufferedRenderTargets::GetWriteRTInternal() {
        unsigned long arg1;

        if (field_24.end() == 1) {
            arg1 = 0;
        } else {
            arg1 = (unsigned long)field_80;
        }
        ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_24[arg1])->end();
    }

    // 0x100be4030
    void BufferedRenderTargets::GetReadRTInternal() {
        unsigned long arg1;

        if (field_24.end() == 1) {
            arg1 = 0;
        } else {
            arg1 = (unsigned long)field_76;
        }
        ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_24[arg1])->end();
    }

    // 0x100be4070
    RenderTargets* BufferedRenderTargets::GetWriteRT() {
        scoped_lock<std::mutex> local_18(field_104);
        auto pRVar1 = GetWriteRTInternal();
        return pRVar1;
    }

    // 0x100be40c0
    uint64_t BufferedRenderTargets::GetReadRT() {
        scoped_lock<std::mutex> local_18(field_104);
        uint64_t uVar1 = GetReadRTInternal();
        return uVar1;
    }

    // 0x100be4110
    unsigned int BufferedRenderTargets::GetWriteIndex() {
        scoped_lock<std::mutex> local_20(field_104);
        unsigned int uVar1 = field_80;
        return uVar1;
    }

    // 0x100be4150
    unsigned int BufferedRenderTargets::GetReadIndex() {
        scoped_lock<std::mutex> local_20(field_104);
        unsigned int uVar1 = field_76;
        return uVar1;
    }

    // 0x100be4190
    unsigned long BufferedRenderTargets::Create(int arg1, int arg2, unsigned int arg3) {
        bool cVar1;
        int iVar3;
        TextureType textureType;
        unsigned long uVar6;
        RenderTargets* pRVar7;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar8;
        uint64_t* puVar9;
        unsigned int* puVar10;
        char* pcVar11;
        unsigned long arg1_00;
        uint8_t local_178[64];
        ReturnValue local_138;
        uint64_t uStack_130;
        uint32_t local_128;
        int iStack_124;
        int iStack_120;
        int iStack_11c;
        uint8_t local_118;
        uint32_t uStack_117;
        uint32_t uStack_114;
        uint64_t uStack_110;
        uint64_t local_108;
        uint64_t uStack_100;
        Desc local_f8;
        uint8_t* local_b0;
        uint8_t local_a8[72];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_60;
        int* local_58;
        int* local_50;
        unsigned int local_3c;
        unsigned int local_38;

        local_a8._64_8_ = ((MapArea*)Instance())->GetOrigin();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar5 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_24;
        long lVar4 = pvVar5->end();
        bool local_31 = lVar4 != 0;
        if (local_31) {
            local_58 = &field_88;
            local_50 = &field_92;
            local_b0 = &field_168;
            arg1_00 = 0;
            local_60 = pvVar5;
            do {
                iVar3 = arg1;
                pvVar5 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*pvVar5)[arg1_00];
                lVar4 = pvVar5->end();
                if (lVar4 != 0) {
                    LogAssert("renderTarget.get() == nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                              246, nullptr);
                }
                make_shared<RenderTargets>(&local_138);
                *pvVar5 = local_138;
                cVar1 = UseAppleCVPixelBuffers(this, (RenderDeviceCaps*)local_a8._64_8_);
                if (!cVar1) {
                    new (local_a8) Texture::Desc();
                    local_a8._12_4_ = field_72;
                    local_a8._0_4_ = field_88;
                    local_a8._4_4_ = field_92;
                    local_a8[56] = '\x01';
                    new (local_178) Texture::Desc();
                    if (iVar3 != 0) {
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
                        iVar3 = GetFormatFromDepthStencilBits(iVar3, arg2, false);
                        local_178._12_4_ = iVar3;
                    }
                    pcVar11 = (char*)(*pvVar5).operator->();
                    textureType = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_138._4_4_ = local_a8._4_4_;
                    local_138._0_4_ = local_a8._0_4_;
                    uStack_130 = (((uint64_t)local_a8._12_4_ << 32) | (uint32_t)local_a8._8_4_);
                    uStack_100 = (((uint64_t)local_a8._57_7_ << 8) | (uint8_t)local_a8[56]);
                    local_108 = local_a8._48_8_;
                    local_118 = local_a8[32];
                    uStack_117 = local_a8._33_3_;
                    uStack_114 = local_a8._36_4_;
                    uStack_110 = local_a8._40_8_;
                    local_128 = local_a8._16_4_;
                    iStack_124 = local_a8._20_4_;
                    iStack_120 = local_a8._24_4_;
                    iStack_11c = local_a8._28_4_;
                    local_f8 = Texture::Desc();
                    cVar1 = RenderTargets::Create(pcVar11, textureType, *3553, (int)&local_138, DAT_00000001,
                                                  (unsigned int)local_178);
                } else {
                    cVar1 = CreateAppleCVRenderTarget(arg1_00, iVar3, arg2, arg3);
                }
                pvVar5 = local_60;
                if (!cVar1) {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                              285, "Failed to create render target for BufferedRenderTargets");
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                    286, nullptr);
                }
                uVar6 = UseShaderStorageBuffers(this, (RenderDeviceCaps*)local_a8._64_8_);
                if ((char)uVar6 != '\0') {
                    local_3c = 0;
                    local_38 = 0;
                    if (m_SSBOCopyRT.operator_cast_to_bool() != '\0') {
                        pRVar7 = (RenderTargets*)m_SSBOCopyRT.operator->();
                        pvVar8 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                     pRVar7->GetColourTargetTextures();
                        puVar9 = (uint64_t*)(*pvVar8)[0];
                        puVar10 = (unsigned int*)(*puVar9)->second();
                        local_3c = *puVar10;
                        pRVar7 = (RenderTargets*)m_SSBOCopyRT.operator->();
                        pvVar8 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                     pRVar7->GetColourTargetTextures();
                        puVar9 = (uint64_t*)(*pvVar8)[0];
                        lVar4 = (*puVar9)->second();
                        local_38 = *(unsigned int*)(lVar4 + 4);
                    }
                    if ((local_3c < (unsigned int)*local_58) ||
                        (uVar6 = (unsigned long)local_38, local_38 < (unsigned int)*local_50)) {
                        RenderTargets::SafeReset(m_SSBOCopyRT);
                        new (local_a8) Texture::Desc();
                        local_a8._12_4_ = 23;
                        puVar10 = std::max<unsigned int>(local_3c, *local_58);
                        local_a8._0_4_ = *puVar10;
                        puVar10 = std::max<unsigned int>(local_38, *local_50);
                        local_a8._4_4_ = *puVar10;
                        make_shared<RenderTargets>(&local_138);
                        m_SSBOCopyRT = local_138;
                        pcVar11 = (char*)m_SSBOCopyRT.operator->();
                        local_138._4_4_ = local_a8._4_4_;
                        local_138._0_4_ = local_a8._0_4_;
                        uStack_130 = (((uint64_t)local_a8._12_4_ << 32) | (uint32_t)local_a8._8_4_);
                        uStack_100 = (((uint64_t)local_a8._57_7_ << 8) | (uint8_t)local_a8[56]);
                        local_108 = local_a8._48_8_;
                        local_118 = local_a8[32];
                        uStack_117 = local_a8._33_3_;
                        uStack_114 = local_a8._36_4_;
                        uStack_110 = local_a8._40_8_;
                        local_128 = local_a8._16_4_;
                        iStack_124 = local_a8._20_4_;
                        iStack_120 = local_a8._24_4_;
                        iStack_11c = local_a8._28_4_;
                        local_f8 = Texture::Desc();
                        new (local_178) Texture::Desc();
                        uVar6 = RenderTargets::Create(pcVar11, 15025984, *3553, (int)&local_138, DAT_00000001,
                                                      (unsigned int)(Desc*)local_178);
                        pvVar5 = local_60;
                    }
                }
                if (!cVar1)
                    goto LAB_100be45c6;
                arg1_00 = arg1_00 + 1;
                uVar6 = pvVar5->end();
                local_31 = arg1_00 < uVar6;
            } while (local_31);
        }
        uVar6 = field_12->UndoMarkAsDead();
    LAB_100be45c6:
        return ~local_31 & 18446744073709551361;
    }

    // 0x100be4610
    uint32_t BufferedRenderTargets::CreateAppleCVRenderTarget(unsigned long arg1, int arg2, int arg3,
                                                              unsigned int arg4) {
        uint8_t* puVar1;
        BufferedRenderTargets* pBVar5;
        TextureType TVar7;
        uint32_t uVar8;
        Logger* pLVar13;
        uint64_t* puVar14;
        unique_ptr<Texture2D>* puVar15;
        shared_ptr<RenderTargets>* psVar16;
        char* str;
        RenderTargets* this_01;
        long lVar17;
        uint8_t local_1a8[20];
        int local_194;
        unsigned int local_18c;
        uint8_t local_158[64];
        uint8_t local_118[72];
        uint64_t uStack_d0;
        uint64_t local_c8;
        uint64_t uStack_c0;
        uint64_t local_b8;
        uint64_t uStack_b0;
        uint64_t local_a8;
        uint64_t uStack_a0;
        unsigned int local_7c;
        Array<shared_ptr<RenderTargets>>* local_70;
        uint8_t local_60[8];

        local_70 = (Array<shared_ptr<RenderTargets>>*)(((uint64_t)local_70._4_4_ << 32) | (uint32_t)arg2);
        unsigned int local_84 = arg4;
        new (local_1a8) GLFormat(field_72);
        uint64_t local_58 = *(uint64_t*)PTR__kCVPixelBufferOpenGLCompatibilityKey_100ee9df0;
        auto IVar9 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber, "numberWithBool:", 1);
        uint64_t uVar10 = _objc_retainAutoreleasedReturnValue(IVar9);
        uint64_t local_50 = *(uint64_t*)PTR__kCVPixelBufferIOSurfacePropertiesKey_100ee9de8;
        uint64_t local_48 = uVar10;
        IVar9 = NSDictionary::dictionaryWithObjects_forKeys_count_(
            (ID)&_OBJC_CLASS___NSDictionary, "dictionaryWithObjects:forKeys:count:", local_60, local_60, 0);
        uint64_t uVar11 = _objc_retainAutoreleasedReturnValue(IVar9);
        uint64_t local_40 = uVar11;
        IVar9 = NSDictionary::dictionaryWithObjects_forKeys_count_(
            (ID)&_OBJC_CLASS___NSDictionary, "dictionaryWithObjects:forKeys:count:", &local_48, &local_58, 2);
        uint64_t local_68 = _objc_retainAutoreleasedReturnValue(IVar9);
        uint8_t* puVar4 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar11);
        (*(void (*)(...))puVar4)(uVar10);
        unsigned int uVar2 = field_72;
        if (uVar2 != 7) {
            if (uVar2 == 21) {
                uVar10 = 1278226536;
                goto LAB_100be473e;
            }
            if (uVar2 != 29) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                941, nullptr);
            }
        }
        uVar10 = 1111970369;
    LAB_100be473e:
        int iVar6 = field_88;
        int iVar3 = field_92;
        BufferedRenderTargets* local_90 = this;
        uint64_t uVar12 = field_504[arg1];
        uVar11 = *(uint64_t*)PTR__kCFAllocatorDefault_100ee9dc8;
        iVar6 = _CVPixelBufferCreate(uVar11, iVar6, iVar3, uVar10, local_68, uVar12);
        uVar10 = m_cvTextureCache;
        if (iVar6 == 0) {
            puVar14 = &field_504[arg1];
            uVar12 = *puVar14;
            puVar1 = &local_90->field_480;
            (*puVar1)[arg1];
            iVar6 = _CVOpenGLTextureCacheCreateTextureFromImage(uVar11, uVar10, uVar12, 0);
            if (iVar6 == 0) {
                new ((local_1a8 + 16)) Texture::Desc();
                pBVar5 = local_90;
                local_1a8._16_4_ = local_90->field_88;
                local_194 = local_90->field_92;
                local_18c = local_90->field_72;
                puVar14 = (uint64_t*)(*puVar1)[arg1];
                local_7c = _CVOpenGLTextureGetName(*puVar14);
                puVar14 = (uint64_t*)(*puVar1)[arg1];
                TVar7 = _CVOpenGLTextureGetTarget(*puVar14);
                *local_118 = std::make_unique<Texture2D>();
                puVar1 = &pBVar5->field_384;
                puVar15 = (unique_ptr<Texture2D>*)(*puVar1)[arg1];
                *puVar15 = *local_118;
                puVar15 = (unique_ptr<Texture2D>*)(*puVar1)[arg1];
                ((Texture2D*)(*puVar15).operator->())->BindExternalTexture(local_7c, TVar7, *((local_1a8 + 16)));
                new (local_158) Texture::Desc();
                if ((int)local_70 != 0) {
                    local_158._0_4_ = pBVar5->field_88;
                    local_158._4_4_ = pBVar5->field_92;
                    local_158._12_4_ = GetFormatFromDepthStencilBits((int)local_70, arg3, false);
                }
                local_70 = (Array<shared_ptr<RenderTargets>>*)&pBVar5->field_24;
                psVar16 = (shared_ptr<RenderTargets>*)(*local_70)[arg1];
                str = (char*)(*psVar16).operator->();
                TVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
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
                local_118._0_8_ = (ReturnValue)0;
                local_118._8_8_ = 0;
                lVar17 = 0;
                do {
                    new ((local_118 + lVar17)) Texture::Desc();
                    lVar17 = lVar17 + 64;
                } while (lVar17 != 128);
                uVar8 = RenderTargets::Create(str, TVar7, *3553, (int)local_118, nullptr, (unsigned int)local_158);
                if ((char)uVar8 != '\0') {
                    psVar16 = (shared_ptr<RenderTargets>*)(*local_70)[arg1];
                    this_01 = (RenderTargets*)(*psVar16).operator->();
                    puVar15 = (unique_ptr<Texture2D>*)(*puVar1)[arg1];
                    this_01->BindColourTargetTexture((Texture*)puVar15->get(), 0, 0, 34069);
                }
            } else {
                pLVar13 = logger::default_logger();
                uVar8 = 0;
                pLVar13->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                             978, "CVOpenGLTextureCacheCreateTextureFromImage failed: %i", iVar6);
            }
        } else {
            pLVar13 = logger::default_logger();
            uVar8 = 0;
            pLVar13->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                         "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                         952, "CVPixelBufferCreate failed: %i", iVar6);
        }
        (*(void (*)(...))PTR__objc_release_100ee9e60)(local_68);
        return uVar8;
    }

    // 0x100be4ab0
    void BufferedRenderTargets::Destroy() {
        shared_ptr<RenderTargets>* renderTargets;

        scoped_lock<std::mutex> local_30(field_104);
        field_12->MarkAsDead();
        renderTargets = (shared_ptr<RenderTargets>*)field_24.data();
        auto psVar2 = field_24.end();
        for (; renderTargets != psVar2; renderTargets = renderTargets + 16) {
            RenderTargets::SafeReset(*renderTargets);
        }
        field_384.clear();
        uint8_t* puVar1 = &field_480;
        auto puVar3 = puVar1->data();
        auto puVar4 = puVar1->end();
        for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
            _CFRelease(*puVar3);
        }
        puVar1->clear();
        puVar1 = &field_504;
        puVar3 = (uint64_t*)puVar1->data();
        puVar4 = (uint64_t*)puVar1->end();
        for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
            _CFRelease(*puVar3);
        }
        puVar1->clear();
        ResetSyncFences();
    }

    // 0x100be4d20
    void BufferedRenderTargets::ResetSyncFences() {
        SyncFence* this_01;
        SyncFence* pSVar2;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 188) != '\0') {
            this_01 = (SyncFence*)field_408.data();
            pSVar2 = (SyncFence*)field_408.end();
            for (; this_01 != pSVar2; this_01 = this_01 + 1) {
                this_01->Destroy();
            }
        }
    }

    // 0x100be4d90
    void BufferedRenderTargets::MapColourTargetData(BufferedImageData& bufferedImageData) {
        uint8_t* this_00;
        unsigned int uVar1;
        uint64_t* puVar6;
        Logger* pLVar7;
        uint64_t uVar8;
        shared_ptr<RenderTargets>* this_04;
        RenderTargets* pRVar10;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_05;
        Texture* pTVar11;
        void* arg2;
        char* pcVar12;
        uint64_t in_stack_ffffffffffffff78;
        ReturnValue local_58;
        int local_3c;
        eastl local_38;

        uint32_t uVar13 = (uint32_t)((unsigned long)in_stack_ffffffffffffff78 >> 32);
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        scoped_lock<std::mutex> local_60(field_104);
        RenderContext* this_02 = ((RenderDevice*)&local_60->Instance())->GetCurrentThreadRenderContext();
        long lVar5 = this_02->GetDesc();
        if (*(char*)(lVar5 + 11) != '\0') {
            LogAssert("!renderContext.GetDesc().m_DeferredContext",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      360, nullptr);
        }
        if ((field_84 == 0) || (field_96 == 0)) {
            LogAssert("m_bufferedFrames > 0 && m_sizeInBytes > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      361, nullptr);
        }
        Singleton<RenderDevice>* this_09 = (Singleton<RenderDevice>*)(unsigned long)field_72;
        int iVar4 = field_88;
        int iVar3 = GetFormatByteCount(field_72);
        iVar3 = iVar3 * iVar4;
        *(unsigned int*)&bufferedImageData.field_40 = field_72;
        *(int*)&bufferedImageData.field_32 = field_88;
        *(int*)((long)&bufferedImageData.field_32 + 4) = field_92;
        *(unsigned int*)((long)&bufferedImageData.field_40 + 4) = field_96;
        *(int*)&bufferedImageData.field_16 = iVar3;
        *(int*)&bufferedImageData.field_20 = iVar3;
        bufferedImageData.field_0 = this;
        auto this_03 = this_09->Instance();
        auto renderDeviceCaps = this_03->GetOrigin();
        if (!(UseAppleCVPixelBuffers(this, renderDeviceCaps))) {
            if (renderDeviceCaps->field_326 != false) {
                this_04 = &field_24[(unsigned long)field_76];
                pRVar10 = (RenderTargets*)(*this_04).operator->();
                this_05 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar10->GetColourTargetTextures();
                puVar6 = (uint64_t*)(*this_05)[0];
                pTVar11 = (*puVar6)->GetNativeTextureId();
                lVar5 = (*___glewMapTexture2DINTEL)((unsigned long)pTVar11 & 4294967295, 0, 1, &local_3c, &local_58);
                CheckGlErrorInternal("glMapTexture2DINTEL",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                     406);
                if (lVar5 == 0) {
                    if ((unsigned long)(long)(int)local_58[0]._0_4_ < 3) {
                        pcVar12 = (&PTR_s_GL_LAYOUT_DEFAULT_INTEL_100f28e78)[local_58[0]._0_4_];
                    } else {
                        pLVar7 = logger::default_logger();
                        pLVar7->Log(false, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                    "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                    422, "Unknown glMapTexture2DINTEL layout - %d",
                                    (((uint64_t)uVar13 << 32) | (uint32_t)local_58[0]._0_4_));
                        pcVar12 = "Unknown";
                    }
                    pLVar7 = logger::default_logger();
                    uVar8 = GetFormatName(field_72);
                    pLVar7->Log(false, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                425, "glMapTexture2DINTEL failed (Format: %s - Layout: %s - %u bytes)", uVar8, pcVar12,
                                field_96);
                }
                iVar4 = GetFormatByteCount(field_72);
                if (local_3c != iVar4 * field_88) {
                    LogAssert("stride == (int)(GetFormatByteCount(m_format) * m_width)",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                              "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                              428, nullptr);
                }
                *(long*)&bufferedImageData.field_8 = lVar5;
                goto LAB_100be5173;
            }
            if (!(UseShaderStorageBuffers(this, renderDeviceCaps))) {
                if (!(UsePixelBuffers(renderDeviceCaps))) {
                    pRVar10 = (RenderTargets*)GetReadRTInternal();
                    arg2 = &field_48[0];
                    this_02->ReadColourTargetData(pRVar10, arg2, field_72, 0, 0, 0, 0, field_88, field_92);
                    uVar8 = field_48[0];
                    goto LAB_100be4f8c;
                }
                local_58 = ((PixelBuffer*)field_336[(unsigned long)field_76])->MapRead(1, 0, 0, 0);
            } else {
                local_58 = ((ShaderStorageBuffer*)field_360[(unsigned long)field_76])->MapRead(7, 0, 0, 0);
            }
            *(unsigned long*)&bufferedImageData.field_8 =
                (((uint64_t)local_58[0]._4_4_ << 32) | (uint32_t)local_58[0]._0_4_);
        } else {
            this_00 = &field_504;
            puVar6 = (uint64_t*)(*this_00)[(unsigned long)field_76];
            _CVPixelBufferLockBaseAddress(*puVar6, 1);
            puVar6 = (uint64_t*)(*this_00)[(unsigned long)field_76];
            lVar5 = _CVPixelBufferGetBaseAddress(*puVar6);
            *(long*)&bufferedImageData.field_8 = lVar5;
            if (lVar5 == 0) {
                pLVar7 = logger::default_logger();
                uVar8 = GetFormatName(field_72);
                pcVar12 = "valid";
                if (*(long*)&bufferedImageData.field_8 == 0) {
                    pcVar12 = "null";
                }
                pLVar7->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                            "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                            382, "Failed to map texture via CVPixelBuffer (format: %s, ptr: %s)", uVar8, pcVar12);
            }
            uVar1 = *(unsigned int*)&bufferedImageData.field_16;
            puVar6 = (uint64_t*)(*this_00)[(unsigned long)field_76];
            if (_CVPixelBufferGetBytesPerRow(*puVar6) != uVar1) {
                LogAssert(
                    "imageDataOut.m_pixelData.m_RowPitch == CVPixelBufferGetBytesPerRow(m_cvPixelBuffers[m_readRT])",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                    "OGL/BufferedRenderTargets_OGL.cpp",
                    386, nullptr);
            }
            if (field_72 != 7)
                goto LAB_100be5173;
            field_456.set_max_size((unsigned long)field_96, 0);
            SwapRBChannels(*(unsigned char**)&bufferedImageData.field_8);
            uVar8 = field_456.data();
        LAB_100be4f8c:
            *(uint64_t*)&bufferedImageData.field_8 = uVar8;
        }
    LAB_100be5173:
    }

    // 0x100be5290
    void BufferedRenderTargets::SwapRBChannels(const unsigned char* arg1) {
        unsigned char uVar1;
        unsigned char uVar2;
        unsigned char* puVar6;
        unsigned long arg1_00;

        if ((field_72 != 7) && (field_72 != 29)) {
            LogAssert("m_format == FORMAT_B8G8R8A8_UNORM || m_format == FORMAT_R8G8B8A8_UNORM",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      464, nullptr);
        }
        uint8_t* this_00 = &field_456;
        if (this_00->empty() != '\0') {
            LogAssert("!m_convertedData.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      465, nullptr);
        }
        unsigned int uVar5 = GetFormatChannelCount(field_72) * field_88 * field_92;
        if (uVar5 != 0) {
            arg1_00 = 0;
            do {
                uVar1 = arg1[arg1_00];
                uVar2 = arg1[arg1_00 + 2];
                puVar6 = (unsigned char*)(*this_00)[arg1_00];
                *puVar6 = uVar2;
                uVar2 = arg1[arg1_00 + 1];
                puVar6 = (unsigned char*)(*this_00)[arg1_00 + 1];
                *puVar6 = uVar2;
                puVar6 = (unsigned char*)(*this_00)[arg1_00 + 2];
                *puVar6 = uVar1;
                uVar1 = arg1[arg1_00 + 3];
                puVar6 = (unsigned char*)(*this_00)[arg1_00 + 3];
                *puVar6 = uVar1;
                arg1_00 = arg1_00 + 4;
            } while (arg1_00 < uVar5);
        }
    }

    // 0x100be5490
    unsigned long BufferedRenderTargets::CopyColourTargetData(ImageData& imageData) {
        unsigned int uVar1;
        void* pvVar2;
        uint8_t local_50[32];
        uint32_t local_30;
        uint32_t local_2c;
        uint32_t local_28;
        uint32_t local_24;

        new (local_50) BufferedImageData();
        MapColourTargetData(*local_50);
        if ((void*)local_50._8_8_ == nullptr) {
            LogAssert("bufferedImageData.m_pixelData.m_pData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      485, nullptr);
        }
        if ((void*)local_50._8_8_ != nullptr) {
            *(uint32_t*)&imageData.field_8 = local_50._16_4_;
            *(uint32_t*)&imageData.field_12 = local_50._20_4_;
            *(uint32_t*)&imageData.field_32 = local_28;
            *(uint32_t*)&imageData.field_24 = local_30;
            *(uint32_t*)((long)&imageData.field_24 + 4) = local_2c;
            *(uint32_t*)((long)&imageData.field_32 + 4) = local_24;
            uVar1 = field_96;
            pvVar2 = (void*)operator_new__((unsigned long)uVar1);
            *(void**)imageData = pvVar2;
            imageData.field_16 = 1;
            _memcpy(pvVar2, (void*)local_50._8_8_, (unsigned long)uVar1);
        }
        return (void*)local_50._8_8_ != nullptr & 4294967295;
    }

    // 0x100be5580
    void BufferedRenderTargets::WriteFinished() {
        bool cVar1;
        RenderDevice* pRVar2;
        uint32_t* puVar3;
        Singleton<RenderDevice>* this_02;
        __3 local_f0;
        scoped_lock<std::mutex> local_e0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        scoped_lock<std::mutex>* this_01 = &local_e0;
        new (this_01) std::scoped_lock(field_104);
        auto this_00 = this_01->Instance();
        auto renderDeviceCaps = this_00->GetOrigin();
        unsigned int arg1 = field_80;
        if (field_84 == 1) {
        LAB_100be55df:
            pRVar2 = (RenderDevice*)this_00->Instance();
            cVar1 = pRVar2->ShouldDefer();
            if (cVar1) {
                this_02 = (Singleton<RenderDevice>*)&field_432;
                puVar3 = (uint32_t*)(*this_02)[(long)(int)arg1];
                *puVar3 = 4;
                pRVar2 = (RenderDevice*)this_02->Instance();
                local_f0.field_0 = this;
                local_f0.field_8 = arg1;
                fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                    BufferedRenderTargets::WriteFinished()::__3, void>(local_d8, &local_f0);
                pRVar2->RunOnRenderThread(*local_d8);
                goto LAB_100be56a2;
            }
        } else {
            this_00 = this;
            cVar1 = UseShaderStorageBuffers(this, renderDeviceCaps);
            if (cVar1)
                goto LAB_100be55df;
        }
        cVar1 = UseAppleCVPixelBuffers(this, renderDeviceCaps);
        if (!cVar1) {
            WriteFinishedInternal(arg1);
        } else {
            cVar1 = this_thread::IsMainThread();
            if (!cVar1) {
                LogAssert("this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                          539, nullptr);
            }
            puVar3 = &field_432[(long)(int)arg1];
            *puVar3 = 4;
        }
    LAB_100be56a2:
        field_76 = (field_76 + 1) % field_84;
        field_80 = (field_80 + 1) % field_84;
    }

    // 0x100be5730
    void BufferedRenderTargets::WriteFinishedInternal(int arg1) {
        SyncFence* pSVar2;
        uint32_t* puVar3;
        eastl local_30;

        auto this_00 = Instance();
        auto renderDeviceCaps = this_00->GetOrigin();
        RenderContext* renderContext = ((RenderDevice*)this_00->Instance())->GetCurrentThreadRenderContext();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_30);
        if (renderDeviceCaps->field_326 == false) {
            if (!(UseAppleCVPixelBuffers(this, renderDeviceCaps))) {
                if (!(UseShaderStorageBuffers(this, renderDeviceCaps))) {
                    if (UsePixelBuffers(renderDeviceCaps)) {
                        CopyToPixelBuffer(*renderContext, arg1);
                    }
                } else {
                    CopyToShaderStorageBuffer(*renderContext, arg1);
                }
            }
        }
        if (renderDeviceCaps->field_188 == false) {
            puVar3 = &field_432[(long)arg1];
            *puVar3 = 4;
        } else {
            pSVar2 = &field_408[(unsigned long)arg1];
            pSVar2->Destroy();
            pSVar2 = &field_408[(unsigned long)arg1];
            if (!(pSVar2->Create())) {
                LogAssert("result",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                          576, nullptr);
            }
            puVar3 = &field_432[(unsigned long)arg1];
            *puVar3 = 60;
        }
    }

    // 0x100be5860
    void BufferedRenderTargets::CopyToShaderStorageBuffer(RenderContext& renderContext, int arg2) {
        Texture* pTVar1;
        uint64_t texture;
        int iVar4;
        unsigned int arg1;
        ImmediateRenderContext* pIVar7;
        long lVar8;
        Vector4T<float>* vector4;
        RenderPipelineState* pRVar9;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_03;
        Layout* this_04;
        ShaderStorageBuffer* shaderStorageBuffer;
        int* piVar10;
        OutputMergerState* pOVar11;
        VertexDeclaration* vertexDeclaration;
        DrawCallState* pDVar12;
        ShaderProgram* this_06;
        Vector4T<float> local_5c8;
        uint8_t local_5b8[32];
        DrawCallState local_598;
        OutputMergerState local_558;
        RenderPipelineState local_488;

        if (m_SSBOCopyRT.operator_cast_to_bool() == '\0') {
            LogAssert("m_SSBOCopyRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      672, nullptr);
        }
        ShaderProgram* this_07 = nullptr;
        shared_ptr<RenderTargets>* this_01 = &field_24[0];
        RenderTargets* pRVar5 = (RenderTargets*)(*this_01).operator->();
        auto this_02 = pRVar5->GetColourTargetTextures();
        uint64_t* puVar6 = (uint64_t*)(*this_02)[0];
        bool bVar2 = true;
        switch (field_72) {
        case 1:
            this_07 = (ShaderProgram*)&m_SSBOCopyShaderFloat4;
            break;
        default:
            goto switchD_100be5901_caseD_2;
        case 7:
            this_07 = (ShaderProgram*)&m_SSBOCopyShaderInt4;
            break;
        case 11:
            this_07 = (ShaderProgram*)&m_SSBOCopyShaderFloat1;
            break;
        case 29:
            this_07 = (ShaderProgram*)&m_SSBOCopyShaderInt4RBSwizzle;
        }
        bVar2 = false;
    switchD_100be5901_caseD_2:
        if (!bVar2) {
            pTVar1 = (Texture*)*puVar6;
            iVar4 = this_07->GetNativeShaderProgram();
            if (iVar4 != 0) {
                local_5b8._24_8_ = pTVar1;
                local_5c8 = math::Vector4T(0.0);
                pIVar7 = renderContext.GetImmediateContext();
                lVar8 = renderContext.Instance();
                pIVar7->SetBlendState((lVar8 + 1524));
                pIVar7 = renderContext.GetImmediateContext();
                vector4 = (Vector4T<float>*)m_SSBOCopyRT.end();
                ((RenderTargets*)pIVar7)->ClearRenderTargets(vector4, (unsigned long)&local_5c8);
                local_598 = DrawCallState();
                local_488 = RenderPipelineState();
                local_598.SetRenderPipelineState(&local_488);
                local_558 = OutputMergerState();
                texture = local_5b8._24_8_;
                local_598.SetOutputMergerState(&local_558);
                pDVar12 = &local_598;
                pRVar9 = (RenderPipelineState*)pDVar12->GetRenderPipelineState();
                lVar8 = pDVar12->Instance();
                pRVar9->SetRasteriserState((lVar8 + 1200));
                pDVar12 = &local_598;
                this_03 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                              pDVar12->GetRenderPipelineState();
                lVar8 = pDVar12->Instance();
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                    compressed_pair_imp(this_03,
                                        (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar8 + 2208));
                pDVar12 = &local_598;
                this_04 = (Layout*)pDVar12->GetRenderPipelineState();
                lVar8 = pDVar12->Instance();
                this_04->SetHeapSize((lVar8 + 1080));
                pRVar9 = (RenderPipelineState*)local_598.GetRenderPipelineState();
                pRVar9->SetShaderProgram(this_07);
                pRVar9 = (RenderPipelineState*)local_598.GetRenderPipelineState();
                new (local_5b8) HashedString("sTexture");
                this_06 = this_07;
                iVar4 = this_07->GetConstIndex(*local_5b8);
                lVar8 = this_06->Instance();
                pRVar9->SetPSTextureSamplerPair(0, texture, iVar4, (lVar8 + 80), false);
                pRVar9 = (RenderPipelineState*)local_598.GetRenderPipelineState();
                new (local_5b8) HashedString("uStorageBuffer");
                arg1 = this_07->GetStorageBufferIndex(*local_5b8);
                shaderStorageBuffer = (ShaderStorageBuffer*)field_360[(long)arg2];
                pRVar9->SetPSShaderStorageBuffer(arg1, shaderStorageBuffer);
                piVar10 = (int*)texture->second();
                iVar4 = *piVar10;
                lVar8 = texture->second();
                new (local_5b8) Viewport(0, 0, iVar4, *(int*)(lVar8 + 4), 0.0, 1.0);
                pOVar11 = local_598.GetOutputMergerState();
                pOVar11->SetViewports(local_5b8, 1);
                pOVar11 = local_598.GetOutputMergerState();
                pRVar5 = (RenderTargets*)m_SSBOCopyRT.end();
                pOVar11->SetRenderTargets(pRVar5);
                vertexDeclaration = (VertexDeclaration*)this_07->second();
                m_IAState.SetVertexStreamData(vertexDeclaration, &m_quadVB);
                local_598.SetInputAssemblerState(&m_IAState);
                renderContext.DrawPrimitives(local_598, 5, 0, 4);
                return;
            }
        }
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                        "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                        687, "Attempting to read back unsupported texture format");
    }

    // 0x100be5d20
    void BufferedRenderTargets::CopyToPixelBuffer(RenderContext& renderContext, int arg2) {
        uint8_t local_40[16];

        PixelBuffer* pPVar1 = &field_336[(long)arg2];
        pPVar1->Bind();
        auto pIVar2 = renderContext.GetImmediateContext();
        ActiveTextureSaveRestore local_50(*pIVar2);
        pIVar2 = renderContext.GetImmediateContext();
        shared_ptr<RenderTargets>* this_00 = &field_24[0];
        RenderTargets* this_01 = (RenderTargets*)(*this_00).operator->();
        auto this_02 = this_01->GetColourTargetTextures();
        uint64_t* puVar3 = (uint64_t*)(*this_02)[0];
        pIVar2->BindTexture(*(*puVar3), 0);
        new (local_40) GLFormat(field_72);
        _glGetTexImage(3553, 0, local_40._4_4_, local_40._8_4_, 0);
        CheckGlErrorInternal("glGetTexImage",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                             "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                             733);
        pPVar1 = &field_336[(long)arg2];
        pPVar1->Unbind();
    }

    // 0x100be5eb0
    void BufferedRenderTargets::UnmapColourTargetData() {
        uint64_t* puVar3;
        shared_ptr<RenderTargets>* this_02;
        RenderTargets* this_03;
        vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_04;
        Texture* pTVar4;
        eastl local_20;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_20);
        scoped_lock<std::mutex> local_28(field_104);
        auto this_01 = &local_28->Instance();
        auto renderDeviceCaps = this_01->GetOrigin();
        if (UseAppleCVPixelBuffers(this, renderDeviceCaps)) {
            puVar3 = &field_504[(unsigned long)field_76];
            _CVPixelBufferUnlockBaseAddress(*puVar3);
        }
        void* pcVar1 = ___glewUnmapTexture2DINTEL;
        if (renderDeviceCaps->field_326 != false) {
            this_02 = &field_24[(unsigned long)field_76];
            this_03 = (RenderTargets*)(*this_02).operator->();
            this_04 = (vector<Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          this_03->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*this_04)[0];
            pTVar4 = (*puVar3)->GetNativeTextureId();
            (*pcVar1)((unsigned long)pTVar4 & 4294967295, 0);
            CheckGlErrorInternal("glUnmapTexture2DINTEL",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                 607);
        }
        if (!(field_336.empty())) {
            ((PixelBuffer*)field_336[(unsigned long)field_76])->Unmap();
        }
        uint8_t* this_00 = &field_360;
        if (!(this_00->empty())) {
            if (((BufferInterface*)(*this_00)[(unsigned long)field_76])->IsMapped()) {
                ((ShaderStorageBuffer*)(*this_00)[(unsigned long)field_76])->Unmap();
            }
        }
        if (!(field_456.empty())) {
            field_456.set_max_size(0, 0);
        }
    }

    // 0x100be6030
    unsigned long BufferedRenderTargets::IsReadyToRead() const {
        scoped_lock<std::mutex> local_18(field_104);
        int* piVar2 = &field_432[(unsigned long)field_76];
        int iVar1 = *piVar2;
        return iVar1 < 1 & 4294967295;
    }

    // 0x100be6090
    void BufferedRenderTargets::OnEndFrame() {
        unsigned long uVar5;
        SyncFence* this_02;
        int* piVar6;
        unsigned long uVar7;
        bool bVar8;

        auto this_01 = Instance();
        auto renderDeviceCaps = this_01->GetOrigin();
        scoped_lock<std::mutex> local_38(field_104);
        uint8_t* this_00 = &field_408;
        long lVar3 = this_00->end();
        long lVar4 = field_432.end();
        if (lVar3 != lVar4) {
            LogAssert("m_syncFences.size() == m_frameDelays.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      637, nullptr);
        }
        lVar3 = this_00->end();
        if (lVar3 != 0) {
            uVar5 = 0;
            uVar7 = 1;
            do {
                this_02 = (SyncFence*)(*this_00)[uVar5];
                piVar6 = &field_432[uVar5];
                if (this_02->IsCreated()) {
                    if (this_02->HasBeenNotified()) {
                        bVar8 = true;
                        if (renderDeviceCaps->field_326 == false) {
                            if (!(UseAppleCVPixelBuffers(this, renderDeviceCaps))) {
                                bVar8 = ((NXTPixScreen*)Instance())->GetUIHeight() == 3;
                            }
                        }
                        *piVar6 = (unsigned int)(bVar8 ^ 1) << 2;
                        this_02->Destroy();
                    }
                }
                *piVar6 = *piVar6 - 1;
                uVar5 = this_00->end();
                bVar8 = uVar7 < uVar5;
                uVar5 = uVar7;
                uVar7 = (unsigned long)((int)uVar7 + 1);
            } while (bVar8);
        }
    }

    // 0x100be63d0
    void BufferedRenderTargets::CreateStaticRenderingResources() {
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        uint8_t bVar6;
        int iVar7;
        char* pcVar13;
        char* pcVar14;
        uint8_t local_600[280];
        uint8_t local_4e8[280];
        uint8_t local_3d0[280];
        uint8_t local_2b8[280];
        uint8_t local_1a0[280];
        VertexElementDesc local_88;
        ReturnValue local_60;
        ReturnValue local_48;

        if (CreateStaticRenderingResources()::quadVertices == '\0') {
            this = (BufferedRenderTargets*)&CreateStaticRenderingResources()::quadVertices;
            iVar7 = ___cxa_guard_acquire();
            if (iVar7 != 0) {
                new ((Point<float>*)&CreateStaticRenderingResources()::quadVertices) math::Point(0.0, 1.0);
                new (&DAT_104235078) math::Point(1.0, 1.0);
                new (&DAT_104235080) math::Point(0.0, 0.0);
                new (&DAT_104235088) math::Point(1.0, 0.0);
                this = (BufferedRenderTargets*)&CreateStaticRenderingResources()::quadVertices;
                ___cxa_guard_release();
            }
        }
        auto pRVar8 = Instance();
        uint64_t uVar9 = ((RenderContext*)pRVar8->GetPrimaryRenderContext())->GetOpenGLContext();
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        auto this_01 = _objc_retainAutorelease(uVar9);
        Singleton<RenderDevice>* this_06 = this_01;
        uVar9 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(this_01, "CGLContextObj");
        pRVar8 = (RenderDevice*)this_06->Instance();
        auto this_02 = pRVar8->GetPrimaryRenderContext();
        uint64_t uVar10 = ((ImmediateRenderContext*)this_02->GetScreen())->GetOpenGLPixelFormat();
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        uVar10 = _objc_retainAutorelease(uVar10);
        uint64_t uVar11 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar10, "CGLPixelFormatObj");
        iVar7 = _CVOpenGLTextureCacheCreate(*(uint64_t*)PTR__kCFAllocatorDefault_100ee9dc8, 0, uVar9, uVar11, 0,
                                            &m_cvTextureCache);
        uint8_t* puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar10);
        (*(void (*)(...))puVar1)();
        if (iVar7 != 0) {
            LogAssert("result == kCVReturnSuccess",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/rendertargets/"
                      "OGL/BufferedRenderTargets_OGL.cpp",
                      758, nullptr);
        }
        long lVar12 = ((MapArea*)this_01->Instance())->GetOrigin();
        if (*(char*)(lVar12 + 132) != '\0') {
            bVar2 = m_quadVB.Create(32, 8, &CreateStaticRenderingResources()::quadVertices);
            local_88 = VertexElementDesc(0, "aTexCoord", 1, false, 5, 0);
            new (local_1a0) VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
            std::operator<<(
                (basic_ostream<char, std::char_traits<char> _>*)(local_1a0 + 16),
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
                (basic_ostream<char, std::char_traits<char> _>*)(local_600 + 16),
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
                (basic_ostream<char, std::char_traits<char> _>*)(local_4e8 + 16),
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
                (basic_ostream<char, std::char_traits<char> _>*)(local_3d0 + 16),
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
                (basic_ostream<char, std::char_traits<char> _>*)(local_2b8 + 16),
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
            local_60 = local_1a0->str();
            pcVar13 = (char*)local_60.c_str();
            local_48 = local_600->str();
            pcVar14 = (char*)local_48.c_str();
            bVar3 = m_SSBOCopyShaderFloat1.CreateFromSourceString(pcVar13, pcVar14, &local_88, 1, '\x04');
            local_60 = local_1a0->str();
            pcVar13 = (char*)local_60.c_str();
            local_48 = local_4e8->str();
            pcVar14 = (char*)local_48.c_str();
            bVar4 = m_SSBOCopyShaderFloat4.CreateFromSourceString(pcVar13, pcVar14, &local_88, 1, '\x04');
            local_60 = local_1a0->str();
            pcVar13 = (char*)local_60.c_str();
            local_48 = local_3d0->str();
            pcVar14 = (char*)local_48.c_str();
            bVar5 = m_SSBOCopyShaderInt4.CreateFromSourceString(pcVar13, pcVar14, &local_88, 1, '\x04');
            local_60 = local_1a0->str();
            pcVar13 = (char*)local_60.c_str();
            local_48 = local_2b8->str();
            pcVar14 = (char*)local_48.c_str();
            bVar6 = m_SSBOCopyShaderInt4RBSwizzle.CreateFromSourceString(pcVar13, pcVar14, &local_88, 1, '\x04');
            if ((bVar2 & bVar3 & bVar4 & bVar5 & bVar6) == 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                          "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                          905, "Failed to initialise BufferedRenderTargets static resources");
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "rendertargets/OGL/BufferedRenderTargets_OGL.cpp",
                                906, nullptr);
            }
        }
    }

    // 0x100be6a60
    void BufferedRenderTargets::DestroyStaticRenderingResources() {
        m_SSBOCopyShaderInt4RBSwizzle.Destroy();
        m_SSBOCopyShaderInt4.Destroy();
        m_SSBOCopyShaderFloat4.Destroy();
        m_SSBOCopyShaderFloat1.Destroy();
        m_IAState.Destroy();
        m_quadVB.Destroy();
        RenderTargets::SafeReset(m_SSBOCopyRT);
    }

} // namespace jag::render
