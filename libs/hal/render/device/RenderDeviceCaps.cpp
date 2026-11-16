// libs/hal/render/device/RenderDeviceCaps.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

namespace jag::render {
    class RenderDeviceCaps {
    public:
        ~RenderDeviceCaps();
        RenderDeviceCaps();
        bool GetCompressedTextures() const;
        void PrintGenericDeviceCaps();
        void ApplyCapOverrides();
        void PrintDeviceCaps(char const*);
        void PrintBackendDeviceCaps();
        void Initialise(hardware::GPUVendor, eastl::string const&, int, int, bool,
                        std::function<void(RenderDeviceCaps const&)>);
        void InitialiseDeviceCapsOGL(hardware::GPUVendor, int, int, bool);
        void InitShaderPrecisionProfile(hardware::GPUVendor, eastl::string const&);
        void InitialiseRenderTargetCaps(hardware::GPUVendor, eastl::string const&);
        void InitialiseComputeShaderCaps(hardware::GPUVendor, eastl::string const&);
        void InitialiseDeviceCapsGLES(hardware::GPUVendor, int, int, bool);
        static /* 8 bytes */ DEVICE_CAP_POSTFIX; // = ";"

        // data members, from how the methods use this: 338 bytes
        char _unknown_0[32];
        int field_32;   // offset 32
        int field_36;   // offset 36
        int field_40;   // offset 40
        int field_44;   // offset 44
        float field_48; // offset 48
        int field_52;   // offset 52
        int field_56;   // offset 56
        int field_60;   // offset 60
        int field_64;   // offset 64
        char _unknown_68[4];
        int field_72;        // offset 72
        int field_76;        // offset 76
        int field_80;        // offset 80
        undefined4 field_84; // offset 84
        int field_88;        // offset 88
        int field_92;        // offset 92
        undefined4 field_96; // offset 96
        int field_100;       // offset 100
        int field_104;       // offset 104
        int field_108;       // offset 108
        int field_112;       // offset 112
        int field_116;       // offset 116
        bool field_120;      // offset 120
        char _unknown_121[3];
        int field_124;  // offset 124
        int field_128;  // offset 128
        bool field_132; // offset 132
        char _unknown_133[3];
        undefined8 field_136;       // offset 136
        bool field_144;             // offset 144
        bool field_145;             // offset 145
        bool field_146;             // offset 146
        bool field_147;             // offset 147
        bool field_148;             // offset 148
        bool field_149;             // offset 149
        bool field_150;             // offset 150
        bool field_151;             // offset 151
        bool field_152;             // offset 152
        bool field_153;             // offset 153
        bool field_154;             // offset 154
        array<bool, 8ul> field_155; // offset 155
        bool field_156;             // offset 156
        bool field_157;             // offset 157
        bool field_158;             // offset 158
        bool field_159;             // offset 159
        bool field_160;             // offset 160
        bool field_161;             // offset 161
        bool field_162;             // offset 162
        bool field_163;             // offset 163
        bool field_164;             // offset 164
        bool field_165;             // offset 165
        bool field_166;             // offset 166
        bool field_167;             // offset 167
        bool field_168;             // offset 168
        bool field_169;             // offset 169
        bool field_170;             // offset 170
        bool field_171;             // offset 171
        bool field_172;             // offset 172
        bool field_173;             // offset 173
        bool field_174;             // offset 174
        bool field_175;             // offset 175
        bool field_176;             // offset 176
        bool field_177;             // offset 177
        bool field_178;             // offset 178
        bool field_179;             // offset 179
        bool field_180;             // offset 180
        bool field_181;             // offset 181
        bool field_182;             // offset 182
        bool field_183;             // offset 183
        bool field_184;             // offset 184
        bool field_185;             // offset 185
        char _unknown_186[1];
        bool field_187; // offset 187
        bool field_188; // offset 188
        bool field_189; // offset 189
        char _unknown_190[2];
        int field_192;  // offset 192
        int field_196;  // offset 196
        int field_200;  // offset 200
        int field_204;  // offset 204
        int field_208;  // offset 208
        int field_212;  // offset 212
        int field_216;  // offset 216
        bool field_220; // offset 220
        bool field_221; // offset 221
        bool field_222; // offset 222
        bool field_223; // offset 223
        bool field_224; // offset 224
        bool field_225; // offset 225
        bool field_226; // offset 226
        bool field_227; // offset 227
        bool field_228; // offset 228
        bool field_229; // offset 229
        bool field_230; // offset 230
        char _unknown_231[49];
        ShaderPrecisionProfile field_280; // offset 280
        int field_308;                    // offset 308
        int field_312;                    // offset 312
        bool field_316;                   // offset 316
        bool field_317;                   // offset 317
        bool field_318;                   // offset 318
        bool field_319;                   // offset 319
        bool field_320;                   // offset 320
        bool field_321;                   // offset 321
        bool field_322;                   // offset 322
        bool field_323;                   // offset 323
        bool field_324;                   // offset 324
        bool field_325;                   // offset 325
        bool field_326;                   // offset 326
        bool field_327;                   // offset 327
        bool field_328;                   // offset 328
        bool field_329;                   // offset 329
        bool field_330;                   // offset 330
        bool field_331;                   // offset 331
        bool field_332;                   // offset 332
        bool field_333;                   // offset 333
        bool field_334;                   // offset 334
        bool field_335;                   // offset 335
        char _unknown_336[1];
        bool field_337; // offset 337
    };

    // 0x100f488f8, 8 bytes, __data
    RenderDeviceCaps::DEVICE_CAP_POSTFIX = ";";

    // 0x100024070: the linker folded this into eastl::pair<eastl::string, oldscape::option::IOption*>::~pair(), which has identical code
    RenderDeviceCaps::~RenderDeviceCaps();

    // 0x10002dfe0: the linker folded this into eastl::hash_node<eastl::string, false>::~hash_node(), which has identical code
    RenderDeviceCaps::~RenderDeviceCaps();

    // 0x100c2e690, 112 bytes, placed by __FILE__ string
    // PrintDeviceCap(char const*, eastl::string const&, char const*, char const*)
    void PrintDeviceCap(char* param_1, basic_string* param_2, char* param_3, char* param_4) {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "RenderDeviceCaps.cpp",
                            12, "%s%s = %s%s", param_3, param_1, uVar2, param_4);
    }

    // 0x100c2e700, 112 bytes, placed by __FILE__ string
    // PrintDeviceCap(char const*, bool, char const*, char const*)
    void PrintDeviceCap(char* param_1, bool param_2, char* param_3, char* param_4) {
        undefined8 uVar1;
        char* pcVar2;
        undefined7 in_register_00000031;

        uVar1 = logger::default_logger();
        pcVar2 = "false";
        if ((int)CONCAT71(in_register_00000031, param_2) != 0) {
            pcVar2 = "true";
        }
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "RenderDeviceCaps.cpp",
                            17, "%s%s = %s%s", param_3, param_1, pcVar2, param_4);
    }

    // 0x100c2e770, 96 bytes, placed by __FILE__ string
    // PrintDeviceCap(char const*, int, char const*, char const*)
    void PrintDeviceCap(char* param_1, int param_2, char* param_3, char* param_4) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "RenderDeviceCaps.cpp",
                            22, "%s%s = %i%s", param_3, param_1, param_2, param_4);
    }

    // 0x100c2e7d0, 96 bytes, placed by __FILE__ string
    // PrintDeviceCap(char const*, float, char const*, char const*)
    void PrintDeviceCap(char* param_1, float param_2, char* param_3, char* param_4) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log((double)param_2, uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "RenderDeviceCaps.cpp",
                            27, "%s%s = %f%s", param_3, param_1, param_4);
    }

    // 0x100c2e830, 96 bytes, placed by __FILE__ string
    // PrintDeviceCap(char const*, hardware::ShaderModel, char const*, char const*)
    void PrintDeviceCap(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "RenderDeviceCaps.cpp",
                            32, "%s%s = %i%s", param_3, param_1, param_2, param_4);
    }

    // 0x100c2e890, 368 bytes, base-object constructor, placed by class name
    // RenderDeviceCaps::RenderDeviceCaps()
    void RenderDeviceCaps::RenderDeviceCaps() {
        new (this) eastl::string();
        field_32 = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
        field_48 = 1.0;
        field_52 = 0;
        field_56 = 0;
        field_60 = 0;
        field_64 = 0;
        *(undefined8*)&field_68 = 0;
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
        *(undefined8*)((long)&field_112 + 1) = 0;
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
        new (&field_232, 2, 2, 1, 1, 1, 1) ShaderPrecisionProfile();
        new (&field_256, 1, 1, 1, 1, 1, 1) ShaderPrecisionProfile();
        new (field_280, 2, 2, 1, 1, 1, 1) ShaderPrecisionProfile();
        field_280[24] = 0;
        new ((field_280 + 25), 0) eastl::bitset<5ul, unsigned char>();
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

    // 0x100c2ea10, 16 bytes, complete-object constructor, placed by class name
    // RenderDeviceCaps::RenderDeviceCaps(): jumps straight to the base-object constructor

    // 0x100c2ea20, 32 bytes, placed by class name
    // RenderDeviceCaps::GetCompressedTextures() const
    bool RenderDeviceCaps::GetCompressedTextures() {
        if (field_161 == false) {
            return field_162 != false;
        }
        return true;
    }

    // 0x100c2ea40, 2544 bytes, placed by class name
    // RenderDeviceCaps::PrintGenericDeviceCaps()
    void RenderDeviceCaps::PrintGenericDeviceCaps() {
        undefined8 uVar1;

        PrintDeviceCap("m_ShaderLanguageVer", (basic_string*)this, "\t\t", DEVICE_CAP_POSTFIX);
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
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "RenderDeviceCaps.cpp",
                            156, "");
    }

    // 0x100c2f430, 208 bytes, placed by class name
    // RenderDeviceCaps::ApplyCapOverrides()
    void RenderDeviceCaps::ApplyCapOverrides() {
        byte bVar1;

        if (field_229 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25), 0)->test();
            bVar1 = bVar1 ^ 1;
        }
        field_229 = (bool)bVar1;
        if (field_224 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25), 1)->test();
            bVar1 = bVar1 ^ 1;
        }
        field_224 = (bool)bVar1;
        if (field_226 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25), 2)->test();
            bVar1 = bVar1 ^ 1;
        }
        field_226 = (bool)bVar1;
        if (field_227 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25), 3)->test();
            bVar1 = bVar1 ^ 1;
        }
        field_227 = (bool)bVar1;
        if (field_228 == false) {
            bVar1 = false;
        } else {
            bVar1 = ((field_280 + 25), 4)->test();
            bVar1 = bVar1 ^ 1;
        }
        field_228 = (bool)bVar1;
    }

    // 0x100c2f540, 144 bytes, placed by class name
    // RenderDeviceCaps::PrintDeviceCaps(char const*)
    void RenderDeviceCaps::PrintDeviceCaps(char* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "RenderDeviceCaps.cpp",
                            170, "\n\t%s Render Device Caps:", param_1);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/device/"
                            "RenderDeviceCaps.cpp",
                            171, "\t--------------------------------------------");
        PrintGenericDeviceCaps(this);
        PrintBackendDeviceCaps(this);
    }

} // namespace jag::render
