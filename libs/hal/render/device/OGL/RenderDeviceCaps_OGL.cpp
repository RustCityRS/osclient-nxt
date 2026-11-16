// libs/hal/render/device/OGL/RenderDeviceCaps_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

namespace jag::render {
    // 0x100c2f5d0, 736 bytes, placed by class name and debug map
    // RenderDeviceCaps::PrintBackendDeviceCaps()
    void RenderDeviceCaps::PrintBackendDeviceCaps() {
        undefined8 uVar1;

        PrintDeviceCap("m_GLVerMajor", field_308, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLVerMinor", field_312, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLDebugOutput", field_316, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLDebugObjectLabels", field_317, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLFramebufferObject", field_318, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLFramebufferObjectExt", field_319, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLVertexArrayObjects", field_321, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLUseVertexArrayObjects", field_322, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLSeamlessCubeMapFiltering", field_320, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLPixelBufferObjects", field_323, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLPixelUnpackBufferObjects", field_324, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLBufferStorage", field_325, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLIntelMapTexture", field_326, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLTextureBarrier", field_327, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLInvalidateSubData", field_328, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLInvalidateFrameBuffer", field_329, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLImmutableTextureStorage", field_330, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLImmutableTextureStorageMultisample", field_331, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLCopyImage", field_332, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLCopyImageRenderTargets", field_333, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLCopyImageRenderTargetsMultisample", field_334, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLParallelShaderCompile", field_335, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLBindBufferBaseStateCache", field_337, "\t\t", DEVICE_CAP_POSTFIX);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "OGL/RenderDeviceCaps_OGL.cpp",
                            930, "");
    }

    // 0x100c2f8b0, 1472 bytes, placed by class name and debug map
    // RenderDeviceCaps::Initialise(hardware::GPUVendor, eastl::string const&, int, int, bool, std::function<void (RenderDeviceCaps const&)>)
    /* RenderDeviceCaps::Initialise(hardware::GPUVendor, eastl::basic_string<char,
   eastl::allocator> const&, int, int, bool, std::function<void (RenderDeviceCaps
   const&)>) */

    void RenderDeviceCaps::Initialise(int param_2, undefined8 param_3, int param_4, undefined4 param_5,
                                      undefined8 param_6, function<void(RenderDeviceCaps_const&)>* param_7) {
        int* piVar1;
        RenderDeviceCaps* this_00;
        int iVar2;
        long lVar4;
        ulong uVar5;
        char* pcVar6;
        undefined8 uVar7;
        int* piVar8;
        undefined8 uVar9;
        bool bVar10;
        ulong uVar11;
        bool bVar12;
        eastl::string local_12a0[32];
        RenderDeviceCaps* local_1280;
        undefined8 local_1278;
        int local_126c;
        undefined4 local_1268;
        int local_1264;
        int local_1260[1162];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::string::basic_string(local_12a0);
        new (local_1260)
            eastl::fixed_vector<eastl::fixed_string<char, 32, true, eastl::allocator>, 64ul, true, eastl::allocator>();
        local_1280 = this;
        local_1278 = param_3;
        local_126c = param_2;
        local_1268 = param_5;
        local_1264 = param_4;
        GetGLExtensions((fixed_vector*)local_1260, param_4);
        lVar4 = local_1260->size();
        if (lVar4 != 0) {
            uVar11 = 0;
            do {
                eastl::vector<eastl::fixed_string<char, 32, true, eastl::allocator>,
                              eastl::fixed_vector_allocator<72ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::fixed_string<char, 32, true, eastl::allocator>,
                            eastl::fixed_vector_allocator<72ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)local_1260,
                    uVar11);
                pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::append(local_12a0, pcVar6);
                if ((uVar11 == 0) || ((uVar11 / 5) * 5 != uVar11)) {
                    eastl::string::append(local_12a0, " ");
                } else {
                    MetaData::AddLog((basic_string*)local_12a0);
                    eastl::string::clear();
                }
                uVar11 = uVar11 + 1;
                uVar5 = local_1260->size();
            } while (uVar11 < uVar5);
        }
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            MetaData::AddLog((basic_string*)local_12a0);
        }
        local_1260->~fixed_vector();
        eastl::string::~basic_string(local_12a0);
        this_00 = local_1280;
        _glGetIntegerv(34024, &local_1280->field_44);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_RENDERBUFFER_SIZE",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             57);
        _glGetFloatv(34047, &this_00->field_48);
        CheckGlErrorInternal("glGetFloatv GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             58);
        _glGetIntegerv(34921, &this_00->field_100);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VERTEX_ATTRIBS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             59);
        _glGetIntegerv(3379, &this_00->field_52);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_TEXTURE_SIZE",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             60);
        _glGetIntegerv(34076, &this_00->field_56);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_CUBE_MAP_TEXTURE_SIZE",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             61);
        _glGetIntegerv(34930, &this_00->field_60);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_TEXTURE_IMAGE_UNITS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             62);
        _glGetIntegerv(37308, &this_00->field_64);
        CheckGlErrorInternal("glGetIntegerv MAX_COMPUTE_TEXTURE_IMAGE_UNITS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             63);
        _glGetIntegerv(36664, &this_00->field_72);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_IMAGE_UNITS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             64);
        _glGetIntegerv(35661, &this_00->field_76);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             65);
        uVar7 = std::array<int, 2ul>::operator[]((ulong)&this_00->field_136);
        _glGetIntegerv(3386, uVar7);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VIEWPORT_DIMS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             66);
        _glGetIntegerv(36348, &this_00->field_80);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VARYING_VECTORS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             67);
        _glGetIntegerv(36183, &this_00->field_96);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_SAMPLES",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             68);
        local_1260[0] = 32;
        piVar8 = std::min<int>((int*)&this_00->field_68, local_1260);
        *(int*)&this_00->field_68 = *piVar8;
        local_1260[0] = 32;
        piVar8 = std::min<int>(&this_00->field_72, local_1260);
        iVar2 = local_126c;
        this_00->field_72 = *piVar8;
        InitialiseDeviceCapsOGL(this_00, local_126c, local_1264, local_1268, 0);
        QueryGLVersion(&this_00->field_308, &this_00->field_312);
        piVar8 = &this_00->field_32;
        piVar1 = &this_00->field_36;
        QueryGLSLVersion(piVar8, piVar1, (basic_string*)this_00);
        uVar7 = local_1278;
        if (((this_00->field_308 == 4) && (*piVar1 == 40)) && (iVar2 == 0)) {
            *piVar1 = 30;
        }
        if ((this_00->field_308 < 4) && (iVar2 == 1)) {
            this_00->field_165 = false;
        }
        if (((iVar2 == 1) && (*piVar8 == 1)) && (*piVar1 < 21)) {
            this_00->field_175 = false;
        }
        if (*piVar8 == 1) {
            if (29 < *piVar1)
                goto LAB_100c2fcbd;
        } else if (0 < *piVar8)
            goto LAB_100c2fcbd;
        this_00->field_146 = false;
        this_00->field_168 = false;
    LAB_100c2fcbd:
        this_00->field_177 = true;
        if (this_00->field_230 != false) {
            uVar9 = logger::default_logger();
            logger::Logger::Log(
                uVar9, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                "RenderDeviceCaps_OGL.cpp",
                140, "Running with an external GPU debugger attached - performance and visuals may be affected!");
        }
        ApplyCapOverrides(this_00);
        if (this_00->field_225 == false) {
            bVar12 = false;
        } else {
            bVar12 = this_00->field_224 != false;
        }
        this_00->field_225 = bVar12;
        bVar10 = false;
        if ((this_00->field_226 != false) && (bVar12 != false)) {
            if (this_00->field_224 == false) {
                bVar10 = false;
            } else {
                bVar10 = this_00->field_187;
            }
        }
        this_00->field_226 = bVar10;
        if (this_00->field_227 == false) {
            bVar10 = false;
        } else {
            bVar10 = this_00->field_224;
        }
        this_00->field_227 = bVar10;
        if (this_00->field_228 == false) {
            bVar10 = false;
        } else {
            bVar10 = this_00->field_224;
        }
        this_00->field_228 = bVar10;
        if (this_00->field_229 == false) {
            bVar10 = false;
        } else {
            bVar10 = false;
            if ((this_00->field_224 != false) && (bVar10 = bVar12, this_00->field_187 == false)) {
                bVar10 = false;
            }
        }
        this_00->field_229 = bVar10;
        if ((this_00->field_188 != false) && (this_00->field_187 == false)) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_SyncFenceObjectsAsync || m_SyncFenceObjectsSync",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                      "RenderDeviceCaps_OGL.cpp",
                      155, (char*)0);
        }
        std::function<void(RenderDeviceCaps_const&)>::operator()(param_7, this_00);
        InitialiseRenderTargetCaps(this_00, iVar2, uVar7);
        InitialiseComputeShaderCaps(this_00);
        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        PrintDeviceCaps(this_00, pcVar6);
        this_00->field_280[24] = 1;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c2fef0, 2816 bytes, placed by class name and debug map
    // RenderDeviceCaps::InitialiseDeviceCapsOGL(hardware::GPUVendor, int, int, bool)
    void RenderDeviceCaps::InitialiseDeviceCapsOGL(long param_1, int param_2, int param_3, int param_4) {
        byte bVar1;
        undefined1 uVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        undefined8 uVar7;
        HardwareInfo* this;
        bool bVar8;
        int iVar9;
        undefined1 uVar10;
        char* this_00;
        bool bVar11;
        int local_44;
        int local_40;
        byte local_31;

        _glGetIntegerv(36063, param_1 + 40);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_COLOR_ATTACHMENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             588);
        _glGetIntegerv(35658, param_1 + 104);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VERTEX_UNIFORM_COMPONENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             589);
        _glGetIntegerv(35657, param_1 + 108);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_FRAGMENT_UNIFORM_COMPONENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             590);
        _glGetIntegerv(37154, param_1 + 112);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VERTEX_OUTPUT_COMPONENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             591);
        _glGetIntegerv(37157, param_1 + 116);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_FRAGMENT_INPUT_COMPONENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             592);
        iVar4 = *(int*)(param_1 + 104);
        iVar9 = *(int*)(param_1 + 108);
        iVar5 = iVar4 + 3;
        if (-1 < iVar4) {
            iVar5 = iVar4;
        }
        *(int*)(param_1 + 104) = iVar5 >> 2;
        iVar4 = iVar9 + 3;
        if (-1 < iVar9) {
            iVar4 = iVar9;
        }
        *(int*)(param_1 + 108) = iVar4 >> 2;
        iVar4 = *(int*)(param_1 + 112);
        iVar9 = iVar4 + 3;
        if (-1 < iVar4) {
            iVar9 = iVar4;
        }
        *(int*)(param_1 + 112) = iVar9 >> 2;
        iVar4 = *(int*)(param_1 + 116);
        iVar9 = iVar4 + 3;
        if (-1 < iVar4) {
            iVar9 = iVar4;
        }
        *(int*)(param_1 + 116) = iVar9 >> 2;
        bVar1 = QueryGLExtension("GL_ARB_framebuffer_object", param_3);
        bVar8 = 2 < param_3;
        *(byte*)(param_1 + 318) = bVar1 | bVar8;
        uVar2 = QueryGLExtension("GL_EXT_framebuffer_object", param_3);
        *(undefined1*)(param_1 + 319) = uVar2;
        bVar1 = QueryGLExtension("GL_EXT_texture_array", param_3);
        *(byte*)(param_1 + 146) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_EXT_texture_sRGB", param_3);
        *(byte*)(param_1 + 147) = bVar1 | bVar8;
        *(undefined1*)(param_1 + 152) = 1;
        *(undefined2*)(param_1 + 148) = 257;
        bVar1 = QueryGLExtension("GL_EXT_packed_depth_stencil", param_3);
        *(byte*)(param_1 + 150) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_depth_buffer_float", param_3);
        *(byte*)(param_1 + 151) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_EXT_packed_float", param_3);
        *(byte*)(param_1 + 153) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_texture_float", param_3);
        *(byte*)(param_1 + 154) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_texture_float", param_3);
        *(byte*)(param_1 + 155) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_texture_non_power_of_two", param_3);
        *(byte*)(param_1 + 156) = 1 < param_3 | bVar1;
        cVar3 = QueryGLExtension("GL_EXT_texture_compression_s3tc", param_3);
        if (((cVar3 == '\0') &&
             (cVar3 = QueryGLExtension("GL_EXT_texture_compression_dxt5", param_3), cVar3 == '\0')) &&
            (param_3 < 3)) {
            uVar2 = 0;
        } else {
            uVar2 = QueryCompressedTextureFormatsDXT((bool*)(param_1 + 147));
        }
        iVar4 = param_4;
        *(undefined1*)(param_1 + 161) = uVar2;
        cVar3 = QueryGLExtension("GL_ARB_ES3_compatibility", param_3);
        uVar2 = 0;
        if (cVar3 != '\0') {
            uVar2 = QueryCompressedTextureFormatsETC((bool*)(param_1 + 147), (bool*)(param_1 + 163));
        }
        uVar10 = 0;
        if (*(char*)(param_1 + 161) == '\0') {
            uVar10 = uVar2;
        }
        *(undefined1*)(param_1 + 162) = uVar10;
        bVar1 = QueryGLExtension("GL_EXT_texture3D", param_3);
        *(byte*)(param_1 + 165) = bVar1 | 2 < param_3;
        bVar1 = QueryGLExtension("GL_EXT_texture_filter_anisotropic", param_3);
        *(byte*)(param_1 + 166) = bVar1 | 2 < param_3;
        cVar3 = QueryGLExtension("ARB_texture_multisample", param_3);
        bVar11 = true;
        bVar8 = cVar3 != '\0' || 0 < iVar4 && 2 < param_3;
        *(bool*)(param_1 + 167) = bVar8;
        *(bool*)(param_1 + 168) = *(char*)(param_1 + 146) != '\0' && bVar8;
        cVar3 = QueryGLExtension("GL_ARB_shader_atomic_counters", param_3);
        if (cVar3 == '\0') {
            bVar11 = 4 < param_3 || 3 < iVar4 && param_3 == 4;
        }
        *(bool*)(param_1 + 169) = bVar11;
        bVar1 = QueryGLExtension("GL_ARB_occlusion_query", param_3);
        *(byte*)(param_1 + 170) = bVar1 | 2 < param_3;
        *(undefined1*)(param_1 + 173) = 1;
        cVar3 = QueryGLExtension("GL_ARB_shader_texture_lod", param_3);
        uVar2 = 1;
        bVar1 = 1;
        if (cVar3 == '\0') {
            bVar1 = QueryGLExtension("GL_ATI_shader_texture_lod", param_3);
            bVar1 = bVar1 | 2 < param_3;
        }
        bVar8 = 2 < param_3;
        *(byte*)(param_1 + 174) = bVar1;
        *(byte*)(param_1 + 175) = bVar1;
        bVar1 = QueryGLExtension("GL_ARB_texture_gather", param_3);
        *(byte*)(param_1 + 176) = 3 < param_3 | bVar1;
        *(undefined2*)(param_1 + 178) = 257;
        bVar1 = QueryGLExtension("GL_ARB_map_buffer_range", param_3);
        *(byte*)(param_1 + 180) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_shadow", param_3);
        *(byte*)(param_1 + 182) = bVar1 | bVar8;
        local_31 = 1 < param_4 && bVar8;
        if (((1 >= param_4 || !bVar8) && (cVar3 = QueryGLExtension("GL_ARB_depth_clamp", param_3), cVar3 == '\0')) &&
            (cVar3 = QueryGLExtension("GL_NV_depth_clamp", param_3), cVar3 == '\0')) {
            uVar2 = QueryGLExtension("GL_EXT_depth_clamp", param_3);
        }
        *(undefined1*)(param_1 + 184) = uVar2;
        *(undefined2*)(param_1 + 185) = 1;
        cVar3 = QueryGLExtension("GL_ARB_get_program_binary", param_3);
        iVar4 = param_4;
        bVar11 = true;
        bVar8 = true;
        if (cVar3 == '\0') {
            bVar8 = 4 < param_3 || 0 < param_4 && param_3 == 4;
        }
        *(bool*)(param_1 + 223) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_sync", param_3);
        if (cVar3 == '\0') {
            bVar11 = param_3 == 3 && 1 < iVar4 || 3 < param_3;
        }
        *(bool*)(param_1 + 187) = bVar11;
        *(undefined1*)(param_1 + 188) = 0;
        cVar3 = QueryGLExtension("GL_KHR_debug", param_3);
        bVar11 = true;
        bVar8 = true;
        if (cVar3 == '\0') {
            bVar8 = 4 < param_3 || 2 < iVar4 && param_3 == 4;
        }
        *(bool*)(param_1 + 316) = bVar8;
        cVar3 = QueryGLExtension("GL_EXT_debug_label", param_3);
        if (cVar3 == '\0') {
            bVar11 = 4 < param_3 || 2 < iVar4 && param_3 == 4;
        }
        *(bool*)(param_1 + 317) = bVar11;
        bVar1 = QueryGLExtension("GL_ARB_vertex_array_object", param_3);
        bVar1 = bVar1 | 2 < param_3;
        *(byte*)(param_1 + 321) = bVar1;
        *(byte*)(param_1 + 322) = bVar1;
        cVar3 = QueryGLExtension("GL_ARB_uniform_buffer_object", param_3);
        bVar11 = true;
        bVar8 = true;
        if (cVar3 == '\0') {
            bVar8 = 0 < iVar4 && param_3 == 3 || 3 < param_3;
        }
        *(bool*)(param_1 + 120) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_shader_bit_encoding", param_3);
        iVar9 = param_2;
        if (cVar3 == '\0') {
            bVar11 = 2 < iVar4 && param_3 == 3 || 3 < param_3;
        }
        *(bool*)(param_1 + 220) = bVar11;
        cVar3 = QueryGLExtension("GL_ARB_pixel_buffer_object", param_3);
        bVar8 = true;
        if (cVar3 == '\0') {
            bVar8 = 0 < iVar4 && param_3 == 2 || 2 < param_3;
        }
        *(bool*)(param_1 + 323) = bVar8;
        *(bool*)(param_1 + 324) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_shader_storage_buffer_object", param_3);
        if (cVar3 != '\0') {
            cVar3 = QueryGLExtension("GL_ARB_program_interface_query", param_3);
            bVar8 = true;
            if (cVar3 != '\0')
                goto LAB_100c30582;
        }
        bVar8 = 4 < param_3 || 2 < iVar4 && param_3 == 4;
    LAB_100c30582:
        *(bool*)(param_1 + 132) = bVar8;
        if (bVar8 != false) {
            _glGetIntegerv(37078, &local_44);
            _glGetIntegerv(37082, &local_40);
            *(bool*)(param_1 + 132) = 0 < local_40 || 0 < local_44;
        }
        cVar3 = QueryGLExtension("GL_ARB_buffer_storage", param_3);
        bVar11 = true;
        bVar8 = true;
        if (cVar3 == '\0') {
            bVar8 = 4 < param_3 || 3 < iVar4 && param_3 == 4;
        }
        *(bool*)(param_1 + 325) = bVar8;
        *(char*)(param_1 + 181) = *(char*)(param_1 + 180) != '\0' & bVar8;
        uVar2 = QueryGLExtension("GL_INTEL_map_texture", param_3);
        *(undefined1*)(param_1 + 326) = uVar2;
        cVar3 = QueryGLExtension("GL_ARB_copy_image", param_3);
        if (cVar3 == '\0') {
            bVar11 = 4 < param_3 || 2 < iVar4 && param_3 == 4;
        }
        *(bool*)(param_1 + 332) = bVar11;
        *(bool*)(param_1 + 333) = bVar11;
        if (iVar9 != 1) {
            *(bool*)(param_1 + 334) = bVar11;
        }
        cVar3 = QueryGLExtension("GL_ARB_invalidate_subdata", param_3);
        bVar8 = true;
        bVar11 = true;
        if (cVar3 == '\0') {
            bVar11 = 4 < param_3 || 2 < iVar4 && param_3 == 4;
        }
        *(bool*)(param_1 + 328) = bVar11;
        *(bool*)(param_1 + 329) = bVar11;
        uVar2 = QueryGLExtension("GL_NV_texture_barrier", param_3);
        *(undefined1*)(param_1 + 327) = uVar2;
        bVar1 = QueryGLExtension("ARB_seamless_cube_map", param_3);
        *(byte*)(param_1 + 320) = bVar1 | local_31;
        cVar3 = QueryGLExtension("GL_ARB_shader_image_load_store", param_3);
        if ((cVar3 == '\0') && ((param_3 != 4 || (iVar4 < 2)))) {
            bVar8 = 4 < param_3;
        }
        *(bool*)(param_1 + 222) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_texture_storage", param_3);
        bVar11 = true;
        bVar8 = true;
        if ((cVar3 == '\0') && ((param_3 != 4 || (bVar8 = true, iVar4 < 2)))) {
            bVar8 = 4 < param_3;
        }
        *(bool*)(param_1 + 330) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_texture_storage_multisample", param_3);
        if ((cVar3 == '\0') && ((param_3 < 4 || (iVar4 < 3)))) {
            bVar11 = 4 < param_3;
        }
        *(bool*)(param_1 + 331) = bVar11;
        if ((*(char*)(param_1 + 318) == '\0') && (*(char*)(param_1 + 319) == '\0')) {
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/OGL/RenderDeviceCaps_OGL.cpp",
                                695, "Device does not support FBOs.");
        }
        *(undefined2*)(param_1 + 228) = 257;
        *(bool*)(param_1 + 228) = 3 < param_3;
        *(undefined4*)(param_1 + 224) = 16843009;
        *(undefined1*)(param_1 + 145) = 1;
        *(undefined2*)(param_1 + 171) = 257;
        if ((iVar9 != 1) || (3 < param_3)) {
            *(undefined1*)(param_1 + 337) = 1;
        }
        _glGetIntegerv(35375, param_1 + 124);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_UNIFORM_BUFFER_BINDINGS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             735);
        _glGetIntegerv(35376, param_1 + 128);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_UNIFORM_BLOCK_SIZE",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             736);
        this_00 = "GL_EXT_gpu_shader4";
        cVar3 = QueryGLExtension("GL_EXT_gpu_shader4", param_3);
        if ((cVar3 != '\0') || (2 < param_3)) {
            this_00 = (char*)this_00->Instance();
            iVar5 = this_00->GetUIHeight();
            if (iVar5 != 1) {
                _glGetIntegerv(35077, param_1 + 84);
                this_00 = "glGetIntegerv GL_MAX_PROGRAM_TEXEL_OFFSET";
                CheckGlErrorInternal("glGetIntegerv GL_MAX_PROGRAM_TEXEL_OFFSET",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "device/OGL/RenderDeviceCaps_OGL.cpp",
                                     745);
            }
        }
        if (local_31 != 0) {
            _glGetIntegerv(37134, param_1 + 88);
            CheckGlErrorInternal("glGetIntegerv GL_MAX_COLOR_TEXTURE_SAMPLES",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 751);
            _glGetIntegerv(37135, param_1 + 92);
            this_00 = "glGetIntegerv GL_MAX_DEPTH_TEXTURE_SAMPLES";
            CheckGlErrorInternal("glGetIntegerv GL_MAX_DEPTH_TEXTURE_SAMPLES",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 752);
        }
        this = (HardwareInfo*)this_00->Instance();
        uVar6 = GetGPUDriverYear();
        uVar7 = logger::default_logger();
        logger::Logger::Log(uVar7, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "OGL/RenderDeviceCaps_OGL.cpp",
                            759, "GPU driver year: %i", uVar6);
        if ((iVar9 == 1) && (param_3 < 4)) {
            *(undefined1*)(param_1 + 165) = 0;
            *(undefined1*)(param_1 + 180) = 0;
            *(undefined1*)(param_1 + 188) = 0;
            *(undefined1*)(param_1 + 225) = 0;
        }
        if ((iVar9 == 1) && ((param_3 < 4 || ((param_3 == 4 && (iVar4 == 0)))))) {
            *(undefined1*)(param_1 + 226) = 0;
        }
        if ((iVar9 == 2) && (param_3 < 4)) {
            *(undefined1*)(param_1 + 226) = 0;
        }
        if (param_3 < 4) {
            *(undefined1*)(param_1 + 330) = 0;
        }
        uVar2 = QueryGLExtension("GL_KHR_parallel_shader_compile", param_3);
        *(undefined1*)(param_1 + 335) = uVar2;
        cVar3 = _glIsEnabled(26505);
        *(bool*)(param_1 + 230) = cVar3 != '\0';
        CheckGlErrorInternal("glIsEnabled GL_DEBUG_TOOL_EXT",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             867);
        *(bool*)(param_1 + 336) = 2 < param_3;
    }

    // 0x100c309f0, 16 bytes, placed by class name and debug map
    // RenderDeviceCaps::InitShaderPrecisionProfile(hardware::GPUVendor, eastl::string const&)
    void RenderDeviceCaps::InitShaderPrecisionProfile() {}

    // 0x100c30a10, 928 bytes, placed by class name and debug map
    // RenderDeviceCaps::InitialiseRenderTargetCaps(hardware::GPUVendor, eastl::string const&)
    void RenderDeviceCaps::InitialiseRenderTargetCaps(
        int param_2,
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* param_3) {
        shared_ptr* this_00;
        undefined4 uVar1;
        undefined1 uVar2;
        long lVar4;
        undefined8 uVar5;
        undefined4* puVar6;
        char* pcVar7;
        int* piVar8;
        RenderTargets* pRVar9;
        undefined8* puVar10;
        ulong uVar11;
        bool bVar12;
        undefined1 local_198[80];
        undefined1 local_148[64];
        undefined1 local_108[64];
        Desc local_c8;
        bool* local_80;
        bool* local_78;
        bool* local_70;
        bool* local_68;
        bool* local_60;
        bool* local_58;
        bool* local_50;
        bool* local_48;
        array<bool, 8ul> local_40;
        undefined1 local_3f;
        byte local_3e;
        undefined1 local_3d;
        undefined1 local_3c;
        undefined1 local_3b;
        undefined1 local_3a;
        undefined1 local_39;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar12 = true;
        if ((field_308 < 4) && (param_2 == 0)) {
            lVar4 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(param_3,
                                                                                                         "HD 4", 0);
            bVar12 = lVar4 == -1;
        }
        local_40 = (array<bool, 8ul>)field_155[0];
        local_3f = field_154;
        local_3e = field_153 != false & bVar12;
        local_3d = 1;
        local_60 = &field_148;
        local_3c = field_148;
        local_58 = &field_150;
        local_3b = field_150;
        local_50 = &field_149;
        local_3a = field_149;
        local_80 = &field_159;
        local_78 = &field_158;
        local_70 = &field_157;
        local_68 = &field_160;
        local_48 = local_50;
        local_39 = local_3a;
        uVar5 = logger::default_logger();
        logger::Logger::Log(uVar5, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "OGL/RenderDeviceCaps_OGL.cpp",
                            220, "Testing support for render target texture formats");
        this_00 = (shared_ptr*)(local_198 + 64);
        uVar11 = 0;
        do {
            pcVar7 = (char*)std::array<bool, 8ul>::operator[](&local_40, uVar11);
            if (*pcVar7 == '\0') {
                puVar10 = (undefined8*)std::array<bool*, 8ul>::operator[]((array<bool*, 8ul>*)&local_80, uVar11);
                *(undefined1*)*puVar10 = 0;
            } else {
                make_shared<RenderTargets>((jag*)this_00);
                new (local_148) Texture::Desc();
                local_148._0_4_ = 1;
                local_148._4_4_ = 1;
                piVar8 = (int*)std::array<Format, 8ul>::operator[](uVar11);
                local_148._12_4_ = *piVar8;
                if (GetFormatDepthBits(*piVar8) == 0) {
                    pRVar9 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                    local_108._8_8_ = CONCAT44(local_148._12_4_, local_148._8_4_);
                    local_108._48_8_ = local_148._48_8_;
                    local_108._56_8_ = local_148._56_8_;
                    local_108._32_8_ = local_148._32_8_;
                    local_108._40_8_ = local_148._40_8_;
                    local_108._16_8_ = local_148._16_8_;
                    local_108._24_8_ = local_148._24_8_;
                    local_108._0_8_ = local_148._0_8_;
                    new (&local_c8) Texture::Desc();
                    new (local_198) Texture::Desc();
                    uVar2 = pRVar9->Create("CapsTestRT", 3553, local_108, 1, local_198, 12);
                } else {
                    pRVar9 = (RenderTargets*)shared_ptr<RenderTargets>::operator->((shared_ptr<RenderTargets>*)this_00);
                    local_c8.field_48 = 0;
                    local_c8.field_56 = '\0';
                    local_c8._57_3_ = 0;
                    local_c8.field_60 = 0;
                    local_c8.field_32 = 0;
                    local_c8._33_3_ = 0;
                    local_c8.field_36 = 0;
                    local_c8.field_40 = 0;
                    local_c8._41_7_ = 0;
                    local_c8.field_16 = 0;
                    local_c8.field_20 = 0;
                    local_c8.field_24 = 0;
                    local_c8.field_28 = 0;
                    local_c8.field_0 = 0;
                    local_c8.field_4 = 0;
                    local_c8.field_8 = 0;
                    local_c8.field_12 = 0;
                    local_108._48_8_ = 0;
                    local_108[56] = '\0';
                    local_108._57_3_ = 0;
                    local_108._60_4_ = 0;
                    local_108[32] = 0;
                    local_108._33_3_ = 0;
                    local_108._36_4_ = 0;
                    local_108._40_8_ = 0;
                    local_108._16_4_ = 0;
                    local_108._20_4_ = 0;
                    local_108._24_4_ = 0;
                    local_108._28_4_ = 0;
                    local_108._0_4_ = 0;
                    local_108._4_4_ = 0;
                    local_108._8_8_ = 0;
                    lVar4 = 0;
                    do {
                        new ((local_108 + lVar4)) Texture::Desc();
                        lVar4 = lVar4 + 64;
                    } while (lVar4 != 128);
                    uVar2 = pRVar9->Create("CapsTestRT", 3553, local_108, 0, local_148, 12);
                }
                puVar10 = (undefined8*)std::array<bool*, 8ul>::operator[]((array<bool*, 8ul>*)&local_80, uVar11);
                *(undefined1*)*puVar10 = uVar2;
                RenderTargets::SafeReset(this_00);
                this_00->~shared_ptr();
            }
            uVar5 = logger::default_logger();
            puVar6 = (undefined4*)std::array<Format, 8ul>::operator[](uVar11);
            uVar1 = *puVar6;
            puVar10 = (undefined8*)std::array<bool*, 8ul>::operator[]((array<bool*, 8ul>*)&local_80, uVar11);
            pcVar7 = "true";
            if (*(char*)*puVar10 == '\0') {
                pcVar7 = "false";
            }
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                "device/OGL/RenderDeviceCaps_OGL.cpp",
                                245, "Format %i (index %zu): %s", uVar1, uVar11, pcVar7);
            uVar11 = uVar11 + 1;
        } while (uVar11 != 8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c30db0, 400 bytes, placed by class name and debug map
    // RenderDeviceCaps::InitialiseComputeShaderCaps(hardware::GPUVendor, eastl::string const&)
    void RenderDeviceCaps::InitialiseComputeShaderCaps(long param_1) {
        byte* pbVar1;
        undefined1 uVar2;

        if ((*(int*)(param_1 + 308) < 4) || (*(int*)(param_1 + 312) < 3)) {
            uVar2 = QueryGLExtension("GL_ARB_compute_shader", *(int*)(param_1 + 308));
            *(undefined1*)(param_1 + 189) = uVar2;
        } else {
            *(undefined1*)(param_1 + 189) = 1;
        }
        pbVar1 = (byte*)(param_1 + 189);
        *pbVar1 = *pbVar1 & *(byte*)(param_1 + 222);
        if (*pbVar1 != 0) {
            (*___glewGetIntegeri_v)(37310, 0, param_1 + 192);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_COUNT - X)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 293);
            (*___glewGetIntegeri_v)(37310, 1, param_1 + 196);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_COUNT - Y)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 294);
            (*___glewGetIntegeri_v)(37310, 2, param_1 + 200);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_COUNT - Z)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 295);
            (*___glewGetIntegeri_v)(37311, 0, param_1 + 204);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_SIZE - X)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 297);
            (*___glewGetIntegeri_v)(37311, 1, param_1 + 208);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_SIZE - Y)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 298);
            (*___glewGetIntegeri_v)(37311, 2, param_1 + 212);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_SIZE - Z)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 299);
            _glGetIntegerv(37099, param_1 + 216);
            CheckGlErrorInternal("glGetIntegerv (GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 301);
        }
    }

    // 0x100c31060, 16 bytes, placed by class name and debug map
    // RenderDeviceCaps::InitialiseDeviceCapsGLES(hardware::GPUVendor, int, int, bool)
    void RenderDeviceCaps::InitialiseDeviceCapsGLES() {}

} // namespace jag::render

namespace jag {
    // 0x100c30f50, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::RenderTargets>::type make_shared<render::RenderTargets>()
    jag* make_shared<render::RenderTargets>() {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_2c;
        RenderTargets* local_28[2];

        pvVar1 = (void*)aligned_alloc(416, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<render::RenderTargets>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = (ref_counter_base*)
                placement_new<ref_counter_shared<render::RenderTargets>, int, render::RenderTargets*&>(
                    pvVar1, &local_2c, local_28);
            shared_ptr_do_enable_shared_from_this<render::RenderTargets>(prVar2, local_28[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
