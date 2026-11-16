// libs/hal/render/device/RenderDeviceCaps.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

namespace jag::render {
    class RenderDeviceCaps {
    public:
        ~RenderDeviceCaps();
        RenderDeviceCaps();
        bool GetCompressedTextures() const;
        void PrintGenericDeviceCaps();
        void ApplyCapOverrides();
        void PrintDeviceCaps(const char* str);
        void PrintBackendDeviceCaps();
        void Initialise(hardware::GPUVendor gpuVendor, const eastl::string& str, int arg3, int arg4, bool arg5,
                        std::function<void(RenderDeviceCaps const&)> callback);
        void InitialiseDeviceCapsOGL(hardware::GPUVendor gpuVendor, int arg2, int arg3, bool arg4);
        void InitShaderPrecisionProfile(hardware::GPUVendor gpuVendor, const eastl::string& str);
        void InitialiseRenderTargetCaps(hardware::GPUVendor gpuVendor, const eastl::string& str);
        void InitialiseComputeShaderCaps(hardware::GPUVendor gpuVendor, const eastl::string& str);
        void InitialiseDeviceCapsGLES(hardware::GPUVendor gpuVendor, int arg2, int arg3, bool arg4);
        static const char* DEVICE_CAP_POSTFIX; // = ";"

    private:
        uint8_t _unknown_0[32];
        int field_32;
        int field_36;
        int field_40;
        int field_44;
        float field_48;
        int field_52;
        int field_56;
        int field_60;
        int field_64;
        uint8_t _unknown_68[4];
        int field_72;
        int field_76;
        int field_80;
        uint32_t field_84;
        int field_88;
        int field_92;
        uint32_t field_96;
        int field_100;
        int field_104;
        int field_108;
        int field_112;
        int field_116;
        bool field_120;
        uint8_t _unknown_121[3];
        int field_124;
        int field_128;
        bool field_132;
        uint8_t _unknown_133[3];
        uint64_t field_136;
        bool field_144;
        bool field_145;
        bool field_146;
        bool field_147;
        bool field_148;
        bool field_149;
        bool field_150;
        bool field_151;
        bool field_152;
        bool field_153;
        bool field_154;
        array<bool, 8ul> field_155;
        bool field_156;
        bool field_157;
        bool field_158;
        bool field_159;
        bool field_160;
        bool field_161;
        bool field_162;
        bool field_163;
        bool field_164;
        bool field_165;
        bool field_166;
        bool field_167;
        bool field_168;
        bool field_169;
        bool field_170;
        bool field_171;
        bool field_172;
        bool field_173;
        bool field_174;
        bool field_175;
        bool field_176;
        bool field_177;
        bool field_178;
        bool field_179;
        bool field_180;
        bool field_181;
        bool field_182;
        bool field_183;
        bool field_184;
        bool field_185;
        uint8_t _unknown_186[1];
        bool field_187;
        bool field_188;
        bool field_189;
        uint8_t _unknown_190[2];
        int field_192;
        int field_196;
        int field_200;
        int field_204;
        int field_208;
        int field_212;
        int field_216;
        bool field_220;
        bool field_221;
        bool field_222;
        bool field_223;
        bool field_224;
        bool field_225;
        bool field_226;
        bool field_227;
        bool field_228;
        bool field_229;
        bool field_230;
        uint8_t _unknown_231[49];
        ShaderPrecisionProfile field_280;
        int field_308;
        int field_312;
        bool field_316;
        bool field_317;
        bool field_318;
        bool field_319;
        bool field_320;
        bool field_321;
        bool field_322;
        bool field_323;
        bool field_324;
        bool field_325;
        bool field_326;
        bool field_327;
        bool field_328;
        bool field_329;
        bool field_330;
        bool field_331;
        bool field_332;
        bool field_333;
        bool field_334;
        bool field_335;
        uint8_t _unknown_336[1];
        bool field_337;
    };

    // 0x100f488f8
    const char* RenderDeviceCaps::DEVICE_CAP_POSTFIX = ";";

    // 0x100024070: RenderDeviceCaps::~RenderDeviceCaps() has the same machine code as eastl::pair<eastl::string, oldscape::option::IOption*>::~pair()

    // 0x10002dfe0: RenderDeviceCaps::~RenderDeviceCaps() has the same machine code as eastl::hash_node<eastl::string, false>::~hash_node()

    // 0x100c2e690
    void PrintDeviceCap(const char* str1, const eastl::string& str2, const char* str3, const char* str4) {
        Logger* logger;

        logger = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                    "RenderDeviceCaps.cpp",
                    12, "%s%s = %s%s", str3, str1, uVar1, str4);
    }

    // 0x100c2e700
    void PrintDeviceCap(const char* str1, bool arg2, const char* str2, const char* str3) {
        Logger* logger;
        uint64_t in_register_00000031;

        logger = logger::default_logger();
        char* pcVar1 = "false";
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2) != 0) {
            pcVar1 = "true";
        }
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                    "RenderDeviceCaps.cpp",
                    17, "%s%s = %s%s", str2, str1, pcVar1, str3);
    }

    // 0x100c2e770
    void PrintDeviceCap(const char* str1, int arg2, const char* str2, const char* str3) {
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                  "RenderDeviceCaps.cpp",
                  22, "%s%s = %i%s", str2, str1, (unsigned long)(unsigned int)arg2, str3);
    }

    // 0x100c2e7d0
    void PrintDeviceCap(const char* str1, float arg2, const char* str2, const char* str3) {
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                  "RenderDeviceCaps.cpp",
                  27, "%s%s = %f%s", (double)arg2, str2, str1, str3);
    }

    // 0x100c2e830
    void PrintDeviceCap(const char* str1, hardware::ShaderModel shaderModel, const char* str2, const char* str3) {
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                  "RenderDeviceCaps.cpp",
                  32, "%s%s = %i%s", str2, str1, (unsigned long)shaderModel, str3);
    }

    // 0x100c2e890
    RenderDeviceCaps::RenderDeviceCaps()
        : eastl::string(), field_32(0), field_36(0), field_40(0), field_44(0), field_48(1.0), field_52(0), field_56(0),
          field_60(0), field_64(0) {
        *(uint64_t*)&field_68 = 0;
        field_76 = 0;
        field_80 = 0;
        field_84 = 0;
        field_88 = 1;
        field_92 = 1;
        field_96 = 1;
        field_100 = 0;
        field_104 = 0;
        field_108 = 0;
        field_112 = 0;
        *(uint64_t*)((long)&field_112 + 1) = 0;
        field_124 = 0;
        field_128 = 0;
        field_132 = false;
        field_136 = 0;
        field_144 = false;
        field_145 = false;
        field_146 = false;
        field_147 = false;
        field_148 = false;
        field_149 = false;
        field_150 = false;
        field_151 = false;
        field_152 = false;
        field_153 = false;
        field_154 = false;
        field_155[0] = 0;
        field_156 = false;
        field_157 = false;
        field_158 = false;
        field_159 = false;
        field_160 = false;
        field_161 = false;
        field_162 = false;
        field_163 = false;
        field_164 = false;
        field_165 = false;
        field_166 = false;
        field_167 = false;
        field_168 = false;
        field_169 = false;
        field_170 = false;
        field_171 = false;
        field_172 = false;
        field_173 = false;
        field_174 = false;
        field_175 = false;
        field_176 = false;
        field_177 = false;
        field_178 = false;
        field_179 = false;
        field_180 = false;
        field_181 = false;
        field_182 = false;
        field_183 = false;
        field_182 = false;
        field_183 = false;
        field_184 = false;
        field_185 = false;
        field_186 = 0;
        field_187 = false;
        field_188 = false;
        field_189 = false;
        field_208 = 0;
        field_212 = 0;
        field_216 = 0;
        field_220 = false;
        field_221 = false;
        field_222 = false;
        field_223 = false;
        field_192 = 0;
        field_196 = 0;
        field_200 = 0;
        field_204 = 0;
        field_223 = false;
        field_224 = false;
        field_225 = false;
        field_226 = false;
        field_227 = false;
        field_228 = false;
        field_229 = false;
        field_230 = false;
        new (&field_232) ShaderPrecisionProfile(2, 2, 1, 1, 1, 1);
        new (&field_256) ShaderPrecisionProfile(1, 1, 1, 1, 1, 1);
        new (field_280) ShaderPrecisionProfile(2, 2, 1, 1, 1, 1);
        field_280[24] = 0;
        new ((field_280 + 25)) eastl::bitset<5ul, unsigned char>(0);
        field_321 = false;
        field_322 = false;
        field_323 = false;
        field_324 = false;
        field_325 = false;
        field_326 = false;
        field_327 = false;
        field_328 = false;
        field_329 = false;
        field_330 = false;
        field_331 = false;
        field_332 = false;
        field_333 = false;
        field_334 = false;
        field_335 = false;
        field_336 = 0;
        field_308 = 0;
        field_312 = 0;
        field_316 = false;
        field_317 = false;
        field_318 = false;
        field_319 = false;
        field_320 = false;
        field_321 = false;
        field_322 = false;
        field_323 = false;
    }

    // 0x100c2ea20
    bool RenderDeviceCaps::GetCompressedTextures() const {
        if (field_161 == false) {
            return field_162 != false;
        }
        return true;
    }

    // 0x100c2ea40
    void RenderDeviceCaps::PrintGenericDeviceCaps() {
        PrintDeviceCap("m_ShaderLanguageVer", (eastl::string*)this, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLSLVerMajor", field_32, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GLSLVerMinor", field_36, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxSimultaneousRTs", field_40, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxRenderTargetSize", field_44, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxAnisotropy", field_48, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxTextureSize", field_52, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxCubeTextureSize", field_56, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxFSTextureUnits", field_60, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxCSTextureUnits", field_64, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxShaderImageUnits", field_72, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxCombinedTextureUnits", field_76, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxVaryingVectors", field_80, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxTextureOffset", field_84, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxColourTextureSamples", field_88, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxDepthTextureSamples", field_92, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxSamples", field_96, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxVertexAttribs", field_100, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxVertexConstantVectors", field_104, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxPixelConstantVectors", field_108, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxVertexOutputVectors", field_112, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxFragmentInputVector", field_116, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_UniformBuffers", field_120, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxUniformBufferBindings", field_124, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MaxUniformBlockSize", field_128, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ShaderStorageBuffers", field_132, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ClearDepthf", field_144, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_FragDepth", field_145, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_TextureArrays", field_146, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_sRGBTextures", field_147, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_24BitDepthTextures", field_148, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_32BitDepthTextures", field_149, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_PackedDepthStencilTextures", field_150, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_DepthFloatTextures", field_151, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_DepthTextureLoad", field_152, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_PackedFloatTextures", field_153, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_HalfFloatTextures", field_154, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_FloatTextures", (bool)field_155[0], "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_PackedFloatColourTargets", field_157, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_HalfFloatColourTargets", field_158, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_FloatColourTargets", field_159, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_Alpha8Targets", field_160, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_NonPowerOfTwoTextures", field_156, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_CompressedTexturesDXT", field_161, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_CompressedTexturesETC", field_162, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_CompressedTexturesETCImageSizeWorkaround", field_163, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_CompressedTexturesETCMaxSizeWorkaround", field_164, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_3DTextures", field_165, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_AnisotropicFiltering", field_166, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MultisampleTextures", field_167, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MultisampleTextureArrays", field_168, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_NonConstantTextureOffset", field_169, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_OcclusionQueries", field_170, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_HardwareQueries", field_171, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_HardwareTimeQueries", field_172, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_StandardDerivatives", field_173, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_TextureLod", field_174, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_TextureGrad", field_175, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_TextureGather", field_176, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_TextureMipLimit", field_177, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_32bitIndices", field_178, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_BufferMapping", field_179, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_RangeBufferMapping", field_180, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_PersistentBufferMapping", field_181, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_HardwarePCF", field_182, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_DepthBoundsTest", field_183, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_DepthClamp", field_184, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_VSyncControl", field_185, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_SyncFenceObjectsSync", field_187, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_SyncFenceObjectsAsync", field_188, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ComputeShaders", field_189, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ComputeMaxWorkGroupCountX", field_192, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ComputeMaxWorkGroupCountY", field_196, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ComputeMaxWorkGroupCountZ", field_200, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ComputeMaxWorkGroupSizeX", field_204, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ComputeMaxWorkGroupSizeY", field_208, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ComputeMaxWorkGroupSizeZ", field_212, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ComputeMaxWorkGroupSizeTotal", field_216, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_FloatIntReinterpretCast", field_220, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_HalfFloatUintUnpack", field_221, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ImageLoadStore", field_222, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MultiContext", field_224, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ShaderThreadSafe", field_225, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MultithreadedShaderCompilation", field_226, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MultithreadedBufferManagement", field_227, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_MultithreadedTextureUpdates", field_228, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_DeferredRendering", field_229, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_ShaderBinary", field_223, "\t\t", DEVICE_CAP_POSTFIX);
        PrintDeviceCap("m_GpuDebuggerAttached", field_230, "\t\t", DEVICE_CAP_POSTFIX);
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                  "RenderDeviceCaps.cpp",
                  156, "");
    }

    // 0x100c2f430
    void RenderDeviceCaps::ApplyCapOverrides() {
        uint8_t bVar1;

        if (field_229 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25))->test(0);
            bVar1 = bVar1 ^ 1;
        }
        field_229 = (bool)bVar1;
        if (field_224 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25))->test(1);
            bVar1 = bVar1 ^ 1;
        }
        field_224 = (bool)bVar1;
        if (field_226 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25))->test(2);
            bVar1 = bVar1 ^ 1;
        }
        field_226 = (bool)bVar1;
        if (field_227 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25))->test(3);
            bVar1 = bVar1 ^ 1;
        }
        field_227 = (bool)bVar1;
        if (field_228 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25))->test(4);
            bVar1 = bVar1 ^ 1;
        }
        field_228 = (bool)bVar1;
    }

    // 0x100c2f540
    void RenderDeviceCaps::PrintDeviceCaps(const char* str) {
        auto pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                    "RenderDeviceCaps.cpp",
                    170, "\n\t%s Render Device Caps:", str);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                    "RenderDeviceCaps.cpp",
                    171, "\t--------------------------------------------");
        PrintGenericDeviceCaps();
        PrintBackendDeviceCaps();
    }

} // namespace jag::render
