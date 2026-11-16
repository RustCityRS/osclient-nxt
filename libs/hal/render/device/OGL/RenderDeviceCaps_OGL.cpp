// libs/hal/render/device/OGL/RenderDeviceCaps_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

namespace jag::render {
    // 0x100c2f5d0
    void RenderDeviceCaps::PrintBackendDeviceCaps() {
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
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                  "RenderDeviceCaps_OGL.cpp",
                  930, "");
    }

    // 0x100c2f8b0
    void RenderDeviceCaps::Initialise(hardware::GPUVendor gpuVendor, const eastl::string& str, int arg3, int arg4,
                                      bool arg5, std::function<void(RenderDeviceCaps const&)> callback) {
        unsigned long uVar3;
        Logger* this_00;
        uint32_t in_register_00000014;
        eastl::string* str_00;
        unsigned long arg1;
        uint32_t in_register_0000003c;
        uint64_t in_register_00000081;
        bool bVar9;
        function<void(RenderDeviceCaps const&)>* in_stack_00000008;
        int local_1260[1162];
        long local_38;

        eastl::string local_12a0;
        new (local_1260) eastl::fixed_vector<eastl::fixed_string<char, 32>, 64ul>();
        uint32_t local_1268 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        GPUVendor local_126c = (GPUVendor)str;
        eastl::string* pbVar4 = (eastl::string*)(unsigned long)(unsigned int)arg4;
        RenderDeviceCaps* local_1280 =
            (RenderDeviceCaps*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)gpuVendor);
        eastl::string* local_1278 = (eastl::string*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        int local_1264 = arg4;
        GetGLExtensions((fixed_vector<eastl::fixed_string<char, _32>, _64ul>*)local_1260, arg4);
        long lVar2 = local_1260->size();
        if (lVar2 != 0) {
            arg1 = 0;
            do {
                (*local_1260)[arg1];
                pbVar4 = (eastl::string*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_12a0.append(pbVar4);
                if ((arg1 == 0) || ((arg1 / 5) * 5 != arg1)) {
                    pbVar4 = (eastl::string*)&DAT_100e35840;
                    local_12a0.append(" ");
                } else {
                    local_12a0.AddLog(pbVar4);
                    local_12a0.clear();
                }
                arg1 = arg1 + 1;
                uVar3 = local_1260->size();
            } while (arg1 < uVar3);
        }
        if (!(local_12a0.empty())) {
            local_12a0.AddLog(pbVar4);
        }
        RenderDeviceCaps* renderDeviceCaps = local_1280;
        _glGetIntegerv(34024, &local_1280->field_44);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_RENDERBUFFER_SIZE",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             57);
        _glGetFloatv(34047, &renderDeviceCaps->field_48);
        CheckGlErrorInternal("glGetFloatv GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             58);
        _glGetIntegerv(34921, &renderDeviceCaps->field_100);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VERTEX_ATTRIBS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             59);
        _glGetIntegerv(3379, &renderDeviceCaps->field_52);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_TEXTURE_SIZE",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             60);
        _glGetIntegerv(34076, &renderDeviceCaps->field_56);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_CUBE_MAP_TEXTURE_SIZE",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             61);
        _glGetIntegerv(34930, &renderDeviceCaps->field_60);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_TEXTURE_IMAGE_UNITS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             62);
        _glGetIntegerv(37308, &renderDeviceCaps->field_64);
        CheckGlErrorInternal("glGetIntegerv MAX_COMPUTE_TEXTURE_IMAGE_UNITS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             63);
        _glGetIntegerv(36664, &renderDeviceCaps->field_72);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_IMAGE_UNITS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             64);
        _glGetIntegerv(35661, &renderDeviceCaps->field_76);
        char* pcVar8 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                       "RenderDeviceCaps_OGL.cpp";
        CheckGlErrorInternal("glGetIntegerv GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             65);
        uint64_t uVar5 = renderDeviceCaps->field_136[(unsigned long)pcVar8];
        _glGetIntegerv(3386, uVar5);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VIEWPORT_DIMS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             66);
        _glGetIntegerv(36348, &renderDeviceCaps->field_80);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VARYING_VECTORS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             67);
        _glGetIntegerv(36183, &renderDeviceCaps->field_96);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_SAMPLES",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             68);
        local_1260[0] = 32;
        auto piVar6 = std::min<int>(renderDeviceCaps->field_68, *local_1260);
        *(int*)&renderDeviceCaps->field_68 = *piVar6;
        local_1260[0] = 32;
        piVar6 = std::min<int>(renderDeviceCaps->field_72, *local_1260);
        GPUVendor gpuVendor_00 = local_126c;
        renderDeviceCaps->field_72 = *piVar6;
        InitialiseDeviceCapsOGL((GPUVendor)renderDeviceCaps, local_126c, local_1264, (uint8_t)local_1268);
        QueryGLVersion(&renderDeviceCaps->field_308, &renderDeviceCaps->field_312);
        piVar6 = &renderDeviceCaps->field_32;
        int* arg2 = &renderDeviceCaps->field_36;
        QueryGLSLVersion(piVar6, arg2, (eastl::string*)renderDeviceCaps);
        pbVar4 = local_1278;
        if (((renderDeviceCaps->field_308 == 4) && (*arg2 == 40)) && (gpuVendor_00 == 0)) {
            *arg2 = 30;
        }
        if ((renderDeviceCaps->field_308 < 4) && (gpuVendor_00 == 1)) {
            renderDeviceCaps->field_165 = false;
        }
        if (((gpuVendor_00 == 1) && (*piVar6 == 1)) && (*arg2 < 21)) {
            renderDeviceCaps->field_175 = false;
        }
        if (*piVar6 == 1) {
            if (29 < *arg2)
                goto LAB_100c2fcbd;
        } else if (0 < *piVar6)
            goto LAB_100c2fcbd;
        renderDeviceCaps->field_146 = false;
        renderDeviceCaps->field_168 = false;
    LAB_100c2fcbd:
        renderDeviceCaps->field_177 = true;
        if (renderDeviceCaps->field_230 != false) {
            this_00 = logger::default_logger();
            this_00->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                         "RenderDeviceCaps_OGL.cpp",
                         140,
                         "Running with an external GPU debugger attached - performance and visuals may be affected!");
        }
        ApplyCapOverrides(renderDeviceCaps);
        if (renderDeviceCaps->field_225 == false) {
            bVar9 = false;
        } else {
            bVar9 = renderDeviceCaps->field_224 != false;
        }
        renderDeviceCaps->field_225 = bVar9;
        bool bVar7 = false;
        if ((renderDeviceCaps->field_226 != false) && (bVar9 != false)) {
            if (renderDeviceCaps->field_224 == false) {
                bVar7 = false;
            } else {
                bVar7 = renderDeviceCaps->field_187;
            }
        }
        renderDeviceCaps->field_226 = bVar7;
        if (renderDeviceCaps->field_227 == false) {
            bVar7 = false;
        } else {
            bVar7 = renderDeviceCaps->field_224;
        }
        renderDeviceCaps->field_227 = bVar7;
        if (renderDeviceCaps->field_228 == false) {
            bVar7 = false;
        } else {
            bVar7 = renderDeviceCaps->field_224;
        }
        renderDeviceCaps->field_228 = bVar7;
        if (renderDeviceCaps->field_229 == false) {
            bVar7 = false;
        } else {
            bVar7 = false;
            if ((renderDeviceCaps->field_224 != false) && (bVar7 = bVar9, renderDeviceCaps->field_187 == false)) {
                bVar7 = false;
            }
        }
        renderDeviceCaps->field_229 = bVar7;
        if ((renderDeviceCaps->field_188 != false) && (renderDeviceCaps->field_187 == false)) {
            LogAssert("!m_SyncFenceObjectsAsync || m_SyncFenceObjectsSync",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                      "RenderDeviceCaps_OGL.cpp",
                      155, nullptr);
        }
        std::function<void(RenderDeviceCaps const&)>::operator()(in_stack_00000008, renderDeviceCaps);
        InitialiseRenderTargetCaps(renderDeviceCaps, gpuVendor_00, pbVar4);
        InitialiseComputeShaderCaps(renderDeviceCaps, gpuVendor_00, str_00);
        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        PrintDeviceCaps(renderDeviceCaps, pcVar8);
        renderDeviceCaps->field_280[24] = 1;
    }

    // 0x100c2fef0
    void RenderDeviceCaps::InitialiseDeviceCapsOGL(hardware::GPUVendor gpuVendor, int arg2, int arg3, bool arg4) {
        Logger* pLVar7;
        uint64_t in_register_00000009;
        uint32_t in_register_0000003c;
        int local_44;
        int local_40;

        long lVar11 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)gpuVendor);
        int local_38 = (int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg4);
        _glGetIntegerv(36063, lVar11 + 40);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_COLOR_ATTACHMENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             588);
        _glGetIntegerv(35658, lVar11 + 104);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VERTEX_UNIFORM_COMPONENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             589);
        _glGetIntegerv(35657, lVar11 + 108);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_FRAGMENT_UNIFORM_COMPONENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             590);
        _glGetIntegerv(37154, lVar11 + 112);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_VERTEX_OUTPUT_COMPONENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             591);
        _glGetIntegerv(37157, lVar11 + 116);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_FRAGMENT_INPUT_COMPONENTS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             592);
        int iVar4 = *(int*)(lVar11 + 104);
        int iVar9 = *(int*)(lVar11 + 108);
        int iVar5 = iVar4 + 3;
        if (-1 < iVar4) {
            iVar5 = iVar4;
        }
        *(int*)(lVar11 + 104) = iVar5 >> 2;
        iVar4 = iVar9 + 3;
        if (-1 < iVar9) {
            iVar4 = iVar9;
        }
        *(int*)(lVar11 + 108) = iVar4 >> 2;
        iVar4 = *(int*)(lVar11 + 112);
        iVar9 = iVar4 + 3;
        if (-1 < iVar4) {
            iVar9 = iVar4;
        }
        *(int*)(lVar11 + 112) = iVar9 >> 2;
        iVar4 = *(int*)(lVar11 + 116);
        iVar9 = iVar4 + 3;
        if (-1 < iVar4) {
            iVar9 = iVar4;
        }
        *(int*)(lVar11 + 116) = iVar9 >> 2;
        uint8_t bVar1 = QueryGLExtension("GL_ARB_framebuffer_object", arg3);
        bool bVar8 = 2 < arg3;
        *(uint8_t*)(lVar11 + 318) = bVar1 | bVar8;
        uint8_t uVar2 = QueryGLExtension("GL_EXT_framebuffer_object", arg3);
        *(uint8_t*)(lVar11 + 319) = uVar2;
        bVar1 = QueryGLExtension("GL_EXT_texture_array", arg3);
        *(uint8_t*)(lVar11 + 146) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_EXT_texture_sRGB", arg3);
        *(uint8_t*)(lVar11 + 147) = bVar1 | bVar8;
        *(uint8_t*)(lVar11 + 152) = 1;
        *(uint16_t*)(lVar11 + 148) = 257;
        bVar1 = QueryGLExtension("GL_EXT_packed_depth_stencil", arg3);
        *(uint8_t*)(lVar11 + 150) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_depth_buffer_float", arg3);
        *(uint8_t*)(lVar11 + 151) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_EXT_packed_float", arg3);
        *(uint8_t*)(lVar11 + 153) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_texture_float", arg3);
        *(uint8_t*)(lVar11 + 154) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_texture_float", arg3);
        *(uint8_t*)(lVar11 + 155) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_texture_non_power_of_two", arg3);
        *(uint8_t*)(lVar11 + 156) = 1 < arg3 | bVar1;
        char cVar3 = QueryGLExtension("GL_EXT_texture_compression_s3tc", arg3);
        if (((!cVar3) && (cVar3 = QueryGLExtension("GL_EXT_texture_compression_dxt5", arg3), !cVar3)) && (arg3 < 3)) {
            uVar2 = 0;
        } else {
            uVar2 = QueryCompressedTextureFormatsDXT((bool*)(lVar11 + 147));
        }
        iVar4 = local_38;
        *(uint8_t*)(lVar11 + 161) = uVar2;
        cVar3 = QueryGLExtension("GL_ARB_ES3_compatibility", arg3);
        uVar2 = 0;
        if (cVar3) {
            uVar2 = QueryCompressedTextureFormatsETC((bool*)(lVar11 + 147), (bool*)(lVar11 + 163));
        }
        uint8_t uVar10 = 0;
        if (*(char*)(lVar11 + 161) == '\0') {
            uVar10 = uVar2;
        }
        *(uint8_t*)(lVar11 + 162) = uVar10;
        bVar1 = QueryGLExtension("GL_EXT_texture3D", arg3);
        *(uint8_t*)(lVar11 + 165) = bVar1 | 2 < arg3;
        bVar1 = QueryGLExtension("GL_EXT_texture_filter_anisotropic", arg3);
        *(uint8_t*)(lVar11 + 166) = bVar1 | 2 < arg3;
        cVar3 = QueryGLExtension("ARB_texture_multisample", arg3);
        bool bVar12 = true;
        bVar8 = cVar3 || 0 < iVar4 && 2 < arg3;
        *(bool*)(lVar11 + 167) = bVar8;
        *(bool*)(lVar11 + 168) = *(char*)(lVar11 + 146) != '\0' && bVar8;
        cVar3 = QueryGLExtension("GL_ARB_shader_atomic_counters", arg3);
        if (!cVar3) {
            bVar12 = 4 < arg3 || 3 < iVar4 && arg3 == 4;
        }
        *(bool*)(lVar11 + 169) = bVar12;
        bVar1 = QueryGLExtension("GL_ARB_occlusion_query", arg3);
        *(uint8_t*)(lVar11 + 170) = bVar1 | 2 < arg3;
        *(uint8_t*)(lVar11 + 173) = 1;
        cVar3 = QueryGLExtension("GL_ARB_shader_texture_lod", arg3);
        uVar2 = 1;
        bVar1 = 1;
        if (!cVar3) {
            bVar1 = QueryGLExtension("GL_ATI_shader_texture_lod", arg3);
            bVar1 = bVar1 | 2 < arg3;
        }
        bVar8 = 2 < arg3;
        *(uint8_t*)(lVar11 + 174) = bVar1;
        *(uint8_t*)(lVar11 + 175) = bVar1;
        bVar1 = QueryGLExtension("GL_ARB_texture_gather", arg3);
        *(uint8_t*)(lVar11 + 176) = 3 < arg3 | bVar1;
        *(uint16_t*)(lVar11 + 178) = 257;
        bVar1 = QueryGLExtension("GL_ARB_map_buffer_range", arg3);
        *(uint8_t*)(lVar11 + 180) = bVar1 | bVar8;
        bVar1 = QueryGLExtension("GL_ARB_shadow", arg3);
        *(uint8_t*)(lVar11 + 182) = bVar1 | bVar8;
        uint8_t local_31 = 1 < local_38 && bVar8;
        if (((1 >= local_38 || !bVar8) && (cVar3 = QueryGLExtension("GL_ARB_depth_clamp", arg3), !cVar3)) &&
            (cVar3 = QueryGLExtension("GL_NV_depth_clamp", arg3), !cVar3)) {
            uVar2 = QueryGLExtension("GL_EXT_depth_clamp", arg3);
        }
        *(uint8_t*)(lVar11 + 184) = uVar2;
        *(uint16_t*)(lVar11 + 185) = 1;
        cVar3 = QueryGLExtension("GL_ARB_get_program_binary", arg3);
        iVar4 = local_38;
        bVar12 = true;
        bVar8 = true;
        if (!cVar3) {
            bVar8 = 4 < arg3 || 0 < local_38 && arg3 == 4;
        }
        *(bool*)(lVar11 + 223) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_sync", arg3);
        if (!cVar3) {
            bVar12 = arg3 == 3 && 1 < iVar4 || 3 < arg3;
        }
        *(bool*)(lVar11 + 187) = bVar12;
        *(uint8_t*)(lVar11 + 188) = 0;
        cVar3 = QueryGLExtension("GL_KHR_debug", arg3);
        bVar12 = true;
        bVar8 = true;
        if (!cVar3) {
            bVar8 = 4 < arg3 || 2 < iVar4 && arg3 == 4;
        }
        *(bool*)(lVar11 + 316) = bVar8;
        cVar3 = QueryGLExtension("GL_EXT_debug_label", arg3);
        if (!cVar3) {
            bVar12 = 4 < arg3 || 2 < iVar4 && arg3 == 4;
        }
        *(bool*)(lVar11 + 317) = bVar12;
        bVar1 = QueryGLExtension("GL_ARB_vertex_array_object", arg3);
        bVar1 = bVar1 | 2 < arg3;
        *(uint8_t*)(lVar11 + 321) = bVar1;
        *(uint8_t*)(lVar11 + 322) = bVar1;
        cVar3 = QueryGLExtension("GL_ARB_uniform_buffer_object", arg3);
        bVar12 = true;
        bVar8 = true;
        if (!cVar3) {
            bVar8 = 0 < iVar4 && arg3 == 3 || 3 < arg3;
        }
        *(bool*)(lVar11 + 120) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_shader_bit_encoding", arg3);
        iVar9 = arg2;
        if (!cVar3) {
            bVar12 = 2 < iVar4 && arg3 == 3 || 3 < arg3;
        }
        *(bool*)(lVar11 + 220) = bVar12;
        cVar3 = QueryGLExtension("GL_ARB_pixel_buffer_object", arg3);
        bVar8 = true;
        if (!cVar3) {
            bVar8 = 0 < iVar4 && arg3 == 2 || 2 < arg3;
        }
        *(bool*)(lVar11 + 323) = bVar8;
        *(bool*)(lVar11 + 324) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_shader_storage_buffer_object", arg3);
        if (cVar3) {
            cVar3 = QueryGLExtension("GL_ARB_program_interface_query", arg3);
            bVar8 = true;
            if (cVar3)
                goto LAB_100c30582;
        }
        bVar8 = 4 < arg3 || 2 < iVar4 && arg3 == 4;
    LAB_100c30582:
        *(bool*)(lVar11 + 132) = bVar8;
        if (bVar8 != false) {
            _glGetIntegerv(37078, &local_44);
            _glGetIntegerv(37082, &local_40);
            *(bool*)(lVar11 + 132) = 0 < local_40 || 0 < local_44;
        }
        cVar3 = QueryGLExtension("GL_ARB_buffer_storage", arg3);
        bVar12 = true;
        bVar8 = true;
        if (!cVar3) {
            bVar8 = 4 < arg3 || 3 < iVar4 && arg3 == 4;
        }
        *(bool*)(lVar11 + 325) = bVar8;
        *(char*)(lVar11 + 181) = *(char*)(lVar11 + 180) != '\0' & bVar8;
        uVar2 = QueryGLExtension("GL_INTEL_map_texture", arg3);
        *(uint8_t*)(lVar11 + 326) = uVar2;
        cVar3 = QueryGLExtension("GL_ARB_copy_image", arg3);
        if (!cVar3) {
            bVar12 = 4 < arg3 || 2 < iVar4 && arg3 == 4;
        }
        *(bool*)(lVar11 + 332) = bVar12;
        *(bool*)(lVar11 + 333) = bVar12;
        if (iVar9 != 1) {
            *(bool*)(lVar11 + 334) = bVar12;
        }
        cVar3 = QueryGLExtension("GL_ARB_invalidate_subdata", arg3);
        bVar8 = true;
        bVar12 = true;
        if (!cVar3) {
            bVar12 = 4 < arg3 || 2 < iVar4 && arg3 == 4;
        }
        *(bool*)(lVar11 + 328) = bVar12;
        *(bool*)(lVar11 + 329) = bVar12;
        uVar2 = QueryGLExtension("GL_NV_texture_barrier", arg3);
        *(uint8_t*)(lVar11 + 327) = uVar2;
        bVar1 = QueryGLExtension("ARB_seamless_cube_map", arg3);
        *(uint8_t*)(lVar11 + 320) = bVar1 | local_31;
        cVar3 = QueryGLExtension("GL_ARB_shader_image_load_store", arg3);
        if ((!cVar3) && ((arg3 != 4 || (iVar4 < 2)))) {
            bVar8 = 4 < arg3;
        }
        *(bool*)(lVar11 + 222) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_texture_storage", arg3);
        bVar12 = true;
        bVar8 = true;
        if ((!cVar3) && ((arg3 != 4 || (bVar8 = true, iVar4 < 2)))) {
            bVar8 = 4 < arg3;
        }
        *(bool*)(lVar11 + 330) = bVar8;
        cVar3 = QueryGLExtension("GL_ARB_texture_storage_multisample", arg3);
        if ((!cVar3) && ((arg3 < 4 || (iVar4 < 3)))) {
            bVar12 = 4 < arg3;
        }
        *(bool*)(lVar11 + 331) = bVar12;
        if ((*(char*)(lVar11 + 318) == '\0') && (*(char*)(lVar11 + 319) == '\0')) {
            pLVar7 = logger::default_logger();
            pLVar7->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                        "RenderDeviceCaps_OGL.cpp",
                        695, "Device does not support FBOs.");
        }
        *(uint16_t*)(lVar11 + 228) = 257;
        *(bool*)(lVar11 + 228) = 3 < arg3;
        *(uint32_t*)(lVar11 + 224) = 16843009;
        *(uint8_t*)(lVar11 + 145) = 1;
        *(uint16_t*)(lVar11 + 171) = 257;
        if ((iVar9 != 1) || (3 < arg3)) {
            *(uint8_t*)(lVar11 + 337) = 1;
        }
        _glGetIntegerv(35375, lVar11 + 124);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_UNIFORM_BUFFER_BINDINGS",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             735);
        _glGetIntegerv(35376, lVar11 + 128);
        CheckGlErrorInternal("glGetIntegerv GL_MAX_UNIFORM_BLOCK_SIZE",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             736);
        char* this_00 = "GL_EXT_gpu_shader4";
        cVar3 = QueryGLExtension("GL_EXT_gpu_shader4", arg3);
        if ((cVar3) || (2 < arg3)) {
            this_00 = (char*)this_00->Instance();
            iVar5 = this_00->GetUIHeight();
            if (iVar5 != 1) {
                _glGetIntegerv(35077, lVar11 + 84);
                this_00 = "glGetIntegerv GL_MAX_PROGRAM_TEXEL_OFFSET";
                CheckGlErrorInternal("glGetIntegerv GL_MAX_PROGRAM_TEXEL_OFFSET",
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                     "device/OGL/RenderDeviceCaps_OGL.cpp",
                                     745);
            }
        }
        if (local_31 != 0) {
            _glGetIntegerv(37134, lVar11 + 88);
            CheckGlErrorInternal("glGetIntegerv GL_MAX_COLOR_TEXTURE_SAMPLES",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 751);
            _glGetIntegerv(37135, lVar11 + 92);
            this_00 = "glGetIntegerv GL_MAX_DEPTH_TEXTURE_SAMPLES";
            CheckGlErrorInternal("glGetIntegerv GL_MAX_DEPTH_TEXTURE_SAMPLES",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 752);
        }
        uint32_t uVar6 = ((HardwareInfo*)this_00->Instance())->GetGPUDriverYear();
        pLVar7 = logger::default_logger();
        pLVar7->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                    "RenderDeviceCaps_OGL.cpp",
                    759, "GPU driver year: %i", uVar6);
        if ((iVar9 == 1) && (arg3 < 4)) {
            *(uint8_t*)(lVar11 + 165) = 0;
            *(uint8_t*)(lVar11 + 180) = 0;
            *(uint8_t*)(lVar11 + 188) = 0;
            *(uint8_t*)(lVar11 + 225) = 0;
        }
        if ((iVar9 == 1) && ((arg3 < 4 || ((arg3 == 4 && (iVar4 == 0)))))) {
            *(uint8_t*)(lVar11 + 226) = 0;
        }
        if ((iVar9 == 2) && (arg3 < 4)) {
            *(uint8_t*)(lVar11 + 226) = 0;
        }
        if (arg3 < 4) {
            *(uint8_t*)(lVar11 + 330) = 0;
        }
        uVar2 = QueryGLExtension("GL_KHR_parallel_shader_compile", arg3);
        *(uint8_t*)(lVar11 + 335) = uVar2;
        cVar3 = _glIsEnabled(26505);
        *(bool*)(lVar11 + 230) = cVar3;
        CheckGlErrorInternal("glIsEnabled GL_DEBUG_TOOL_EXT",
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                             "OGL/RenderDeviceCaps_OGL.cpp",
                             867);
        *(bool*)(lVar11 + 336) = 2 < arg3;
    }

    // 0x100c309f0
    void RenderDeviceCaps::InitShaderPrecisionProfile(hardware::GPUVendor gpuVendor, const eastl::string& str) {}

    // 0x100c30a10
    void RenderDeviceCaps::InitialiseRenderTargetCaps(hardware::GPUVendor gpuVendor, const eastl::string& str) {
        void result;
        ReturnValue result;
        uint32_t uVar1;
        uint8_t uVar2;
        long lVar4;
        uint32_t* puVar6;
        char* pcVar7;
        Format* pFVar8;
        uint64_t* puVar9;
        array<Format, 8ul>* paVar10;
        array<Format, 8ul>* arg1;
        uint8_t local_198[80];
        uint8_t local_148[64];
        uint8_t local_108[64];
        Desc local_c8;

        bool bVar11 = true;
        if ((field_308 < 4) && (gpuVendor == 0)) {
            lVar4 = str.find("HD 4", 0);
            bVar11 = lVar4 == -1;
        }
        array<bool, 8ul> local_40 = (array<bool, 8ul>)field_155[0];
        uint8_t local_3f = field_154;
        uint8_t local_3e = field_153 != false & bVar11;
        uint8_t local_3d = 1;
        bool* local_60 = &field_148;
        uint8_t local_3c = field_148;
        bool* local_58 = &field_150;
        uint8_t local_3b = field_150;
        bool* local_50 = &field_149;
        uint8_t local_3a = field_149;
        bool* local_80 = &field_159;
        bool* local_78 = &field_158;
        bool* local_70 = &field_157;
        bool* local_68 = &field_160;
        bool* local_48 = local_50;
        uint8_t local_39 = local_3a;
        auto pLVar5 = logger::default_logger();
        pLVar5->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                    "RenderDeviceCaps_OGL.cpp",
                    220, "Testing support for render target texture formats");
        &result = (ReturnValue*)(local_198 + 64);
        array<Format, 8ul>* this_00 = nullptr;
        do {
            arg1 = this_00;
            pcVar7 = &local_40[(unsigned long)this_00];
            paVar10 = this_00;
            if (*pcVar7 == '\0') {
                puVar9 = &local_80[(unsigned long)this_00];
                *(uint8_t*)*puVar9 = 0;
            } else {
                make_shared<RenderTargets>(&result);
                new (local_148) Texture::Desc();
                local_148._0_4_ = 1;
                local_148._4_4_ = 1;
                pFVar8 = (Format*)(*this_00)[(unsigned long)arg1];
                local_148._12_4_ = *pFVar8;
                if (GetFormatDepthBits(*pFVar8) == 0) {
                    pcVar7 = (char*)(result).operator->();
                    local_108._8_8_ = (((uint64_t)local_148._12_4_ << 32) | (uint32_t)local_148._8_4_);
                    local_108._48_8_ = local_148._48_8_;
                    local_108._56_8_ = local_148._56_8_;
                    local_108._32_8_ = local_148._32_8_;
                    local_108._40_8_ = local_148._40_8_;
                    local_108._16_8_ = local_148._16_8_;
                    local_108._24_8_ = local_148._24_8_;
                    local_108._0_8_ = local_148._0_8_;
                    local_c8 = Texture::Desc();
                    new (local_198) Texture::Desc();
                    uVar2 = RenderTargets::Create(pcVar7, 15070065, *3553, (int)local_108, DAT_00000001,
                                                  (unsigned int)(Desc*)local_198);
                } else {
                    pcVar7 = (char*)(result).operator->();
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
                    uVar2 = RenderTargets::Create(pcVar7, 15070065, *3553, (int)local_108, nullptr,
                                                  (unsigned int)local_148);
                }
                puVar9 = &local_80[(unsigned long)this_00];
                *(uint8_t*)*puVar9 = uVar2;
                RenderTargets::SafeReset(result);
                result.~shared_ptr();
            }
            pLVar5 = logger::default_logger();
            puVar6 = (uint32_t*)(*this_00)[(unsigned long)paVar10];
            uVar1 = *puVar6;
            puVar9 = &local_80[(unsigned long)this_00];
            pcVar7 = "true";
            if (*(char*)*puVar9 == '\0') {
                pcVar7 = "false";
            }
            pLVar5->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/OGL/"
                        "RenderDeviceCaps_OGL.cpp",
                        245, "Format %i (index %zu): %s", uVar1, this_00, pcVar7);
            this_00 = this_00 + 1;
        } while (this_00 != (array<Format, 8ul>*)8);
    }

    // 0x100c30db0
    void RenderDeviceCaps::InitialiseComputeShaderCaps(hardware::GPUVendor gpuVendor, const eastl::string& str) {
        if ((field_308 < 4) || (field_312 < 3)) {
            field_189 = (bool)QueryGLExtension("GL_ARB_compute_shader", field_308);
        } else {
            field_189 = true;
        }
        bool* pbVar1 = &field_189;
        *pbVar1 = (bool)(*pbVar1 & field_222);
        if (*pbVar1 != false) {
            (*___glewGetIntegeri_v)(37310, 0, &field_192);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_COUNT - X)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 293);
            (*___glewGetIntegeri_v)(37310, 1, &field_196);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_COUNT - Y)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 294);
            (*___glewGetIntegeri_v)(37310, 2, &field_200);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_COUNT - Z)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 295);
            (*___glewGetIntegeri_v)(37311, 0, &field_204);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_SIZE - X)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 297);
            (*___glewGetIntegeri_v)(37311, 1, &field_208);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_SIZE - Y)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 298);
            (*___glewGetIntegeri_v)(37311, 2, &field_212);
            CheckGlErrorInternal("glGetIntegeri_v (GL_MAX_COMPUTE_WORK_GROUP_SIZE - Z)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 299);
            _glGetIntegerv(37099, &field_216);
            CheckGlErrorInternal("glGetIntegerv (GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS)",
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/"
                                 "device/OGL/RenderDeviceCaps_OGL.cpp",
                                 301);
        }
    }

    // 0x100c31060
    void RenderDeviceCaps::InitialiseDeviceCapsGLES(hardware::GPUVendor gpuVendor, int arg2, int arg3, bool arg4) {}

} // namespace jag::render

namespace jag {
    // 0x100c30f50
    shared_ptr_if_not_array<render::RenderTargets>::type make_shared<render::RenderTargets>() {
        ref_counter_base* ref_counter_base;
        int local_2c;
        RenderTargets* local_28[2];

        auto arg1 = aligned_alloc(416, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<render::RenderTargets>::type result;
        } else {
            local_28[0] = placement_new<render::RenderTargets>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_base = (ref_counter_base*)
                placement_new<ref_counter_shared<render::RenderTargets>, int, render::RenderTargets*&>(arg1, &local_2c,
                                                                                                       local_28);
            shared_ptr_do_enable_shared_from_this<render::RenderTargets>(ref_counter_base, local_28[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
