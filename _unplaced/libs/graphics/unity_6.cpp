// _unplaced/libs/graphics/unity_6.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x100f44000, 48 bytes, __data
    gSpriteLoadModeNames__ = {0, 0, 14704238, 1, 1, 0, 14704243, 1, 2, 0, 14704249, 1};

    // 0x100f44030, 224 bytes, __data
    ShaderTypeStrings = {
        "MODEL_GEOMETRY",
        "MODEL_GEOMETRY_HIGHLIGHT",
        "MODEL_GEOMETRY_NORMAL",
        "MODEL_GEOMETRY_SHADOW",
        "MODEL_GEOMETRY_POINT_SHADOW",
        "MODEL_BILLBOARDS",
        "TERRAIN",
        "TERRAIN_NORMAL",
        "TERRAIN_SIMPLE",
        "TERRAIN_SHADOW",
        "WATER",
        "PARTICLE",
        "PARTICLE_SHADOW",
        "PARTICLE_DISTORTION",
        "PARTICLE_OVERDRAW",
        "GUI",
        "LINE",
        "SKYBOX",
        "TEXTURE_TO_QUAD",
        "GEOMETRY_AWARE_BLUR",
        "HBAO",
        "SSAO",
        "LIGHTPROBE",
        "CUBEMAP_BLEND",
        "SHADOW_CASCADE_SELECTION",
        "DEFERRED_SHADOWS",
        "DEPTH_DOWNSAMPLE",
        "DEPTH_DOWNSAMPLE_PACKED",
    };

    // 0x103bbdff0, 16 bytes, __common; set at startup by ___cxx_global_var_init.12
    StringEnum gSpriteLoadModeNames = StringEnum((StringEnumEntry*)&gSpriteLoadModeNames__, 3);

    // 0x103bbe010, 448 bytes, __common; zero-initialised
    _shaderTypes;

    // 0x104232a10, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x104232a50, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x1008a29d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        math::Vector3T<int>::Vector3T(local_28);
        new (&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1008a2a30, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1008a2a50, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1008a2ab0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1008a2b10, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1008a2bb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.12
    void ___cxx_global_var_init_12() {
        new (&gSpriteLoadModeNames) StringEnum((StringEnumEntry*)&gSpriteLoadModeNames__, 3);
        ___cxa_atexit(StringEnum::~StringEnum, &gSpriteLoadModeNames, 4294967296);
    }

    // 0x1008a2bf0, 4208 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55(undefined8 param_1, unique_ptr* param_2) {
        unique_ptr* puVar1;
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1e0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1d8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1d0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1c8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1c0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1b8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1b0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1a8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_1a0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_198[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_190[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_188[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_180[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_178[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_170[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_168[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_160[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_158[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_150[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_148[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_140[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_138[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_130[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_128[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_120[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_118[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_110[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_108[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_100[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_f8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_f0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_e8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_e0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_d8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_d0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_c8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_c0[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_b8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_b0[8];
        unique_ptr local_a8[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_a0[8];
        unique_ptr local_98[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_90[8];
        unique_ptr local_88[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_80[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_78[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_70[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_68[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_60[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_58[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_50[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_48[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_40[8];
        unique_ptr local_38[8];
        unique_ptr<ShaderSource, std::default_delete<ShaderSource>> local_30[8];
        unique_ptr local_28[8];

        std::make_unique<ModelGeometryVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryVS, std::default_delete<ModelGeometryVS>, void, void>(local_1d8, param_2);
        std::make_unique<ModelGeometryFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryFS, std::default_delete<ModelGeometryFS>, void, void>(local_1d0, param_2);
        std::make_unique<ModelGeometryHighlightVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryHighlightVS, std::default_delete<ModelGeometryHighlightVS>, void, void>(local_1c8, param_2);
        std::make_unique<ModelGeometryHighlightFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryHighlightFS, std::default_delete<ModelGeometryHighlightFS>, void, void>(local_1c0, param_2);
        std::make_unique<ModelGeometryNormalVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryNormalVS, std::default_delete<ModelGeometryNormalVS>, void, void>(local_1b8, param_2);
        std::make_unique<ModelGeometryNormalFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryNormalFS, std::default_delete<ModelGeometryNormalFS>, void, void>(local_1b0, param_2);
        std::make_unique<ModelGeometryShadowVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryShadowVS, std::default_delete<ModelGeometryShadowVS>, void, void>(local_1a8, param_2);
        std::make_unique<ModelGeometryShadowFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryShadowFS, std::default_delete<ModelGeometryShadowFS>, void, void>(local_1a0, param_2);
        std::make_unique<ModelGeometryPointShadowVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryPointShadowVS, std::default_delete<ModelGeometryPointShadowVS>, void, void>(local_198,
                                                                                                     param_2);
        std::make_unique<ModelGeometryPointShadowFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelGeometryPointShadowFS, std::default_delete<ModelGeometryPointShadowFS>, void, void>(local_190,
                                                                                                     param_2);
        std::make_unique<ModelBillboardVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelBillboardVS, std::default_delete<ModelBillboardVS>, void, void>(local_188, param_2);
        std::make_unique<ModelBillboardFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ModelBillboardFS, std::default_delete<ModelBillboardFS>, void, void>(local_180, param_2);
        std::make_unique<TerrainVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TerrainVS, std::default_delete<TerrainVS>, void, void>(local_178, param_2);
        std::make_unique<TerrainFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TerrainFS, std::default_delete<TerrainFS>, void, void>(local_170, param_2);
        std::make_unique<TerrainNormalVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TerrainNormalVS, std::default_delete<TerrainNormalVS>, void, void>(local_168, param_2);
        std::make_unique<TerrainNormalFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TerrainNormalFS, std::default_delete<TerrainNormalFS>, void, void>(local_160, param_2);
        std::make_unique<TerrainSimpleVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TerrainSimpleVS, std::default_delete<TerrainSimpleVS>, void, void>(local_158, param_2);
        std::make_unique<TerrainSimpleFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TerrainSimpleFS, std::default_delete<TerrainSimpleFS>, void, void>(local_150, param_2);
        std::make_unique<TerrainShadowVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TerrainShadowVS, std::default_delete<TerrainShadowVS>, void, void>(local_148, param_2);
        std::make_unique<TerrainShadowFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TerrainShadowFS, std::default_delete<TerrainShadowFS>, void, void>(local_140, param_2);
        std::make_unique<WaterVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            WaterVS, std::default_delete<WaterVS>, void, void>(local_138, param_2);
        std::make_unique<WaterFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            WaterFS, std::default_delete<WaterFS>, void, void>(local_130, param_2);
        std::make_unique<ParticleVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ParticleVS, std::default_delete<ParticleVS>, void, void>(local_128, param_2);
        std::make_unique<ParticleFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ParticleFS, std::default_delete<ParticleFS>, void, void>(local_120, param_2);
        std::make_unique<ParticleShadowVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ParticleShadowVS, std::default_delete<ParticleShadowVS>, void, void>(local_118, param_2);
        std::make_unique<ParticleShadowFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ParticleShadowFS, std::default_delete<ParticleShadowFS>, void, void>(local_110, param_2);
        std::make_unique<ParticleDistortionVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ParticleDistortionVS, std::default_delete<ParticleDistortionVS>, void, void>(local_108, param_2);
        std::make_unique<ParticleDistortionFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ParticleDistortionFS, std::default_delete<ParticleDistortionFS>, void, void>(local_100, param_2);
        std::make_unique<ParticleOverdrawVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ParticleOverdrawVS, std::default_delete<ParticleOverdrawVS>, void, void>(local_f8, param_2);
        std::make_unique<ParticleOverdrawFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ParticleOverdrawFS, std::default_delete<ParticleOverdrawFS>, void, void>(local_f0, param_2);
        std::make_unique<GUIVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<GUIVS, std::default_delete<GUIVS>,
                                                                                     void, void>(local_e8, param_2);
        std::make_unique<GUIFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<GUIFS, std::default_delete<GUIFS>,
                                                                                     void, void>(local_e0, param_2);
        std::make_unique<LineVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            LineVS, std::default_delete<LineVS>, void, void>(local_d8, param_2);
        std::make_unique<LineFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            LineFS, std::default_delete<LineFS>, void, void>(local_d0, param_2);
        std::make_unique<SkyBoxVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            SkyBoxVS, std::default_delete<SkyBoxVS>, void, void>(local_c8, param_2);
        std::make_unique<SkyBoxFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            SkyBoxFS, std::default_delete<SkyBoxFS>, void, void>(local_c0, param_2);
        std::make_unique<TextureToQuadVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TextureToQuadVS, std::default_delete<TextureToQuadVS>, void, void>(local_b8, param_2);
        std::make_unique<TextureToQuadFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            TextureToQuadFS, std::default_delete<TextureToQuadFS>, void, void>(local_b0, param_2);
        std::make_unique<SSAOVS>();
        puVar1 = local_a8;
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            SSAOVS, std::default_delete<SSAOVS>, void, void>(
            (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)&DAT_103bbe140, puVar1);
        std::make_unique<GeometryAwareBlurFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            GeometryAwareBlurFS, std::default_delete<GeometryAwareBlurFS>, void, void>(local_a0, puVar1);
        std::make_unique<SSAOVS>();
        puVar1 = local_98;
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            SSAOVS, std::default_delete<SSAOVS>, void, void>(
            (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)&DAT_103bbe150, puVar1);
        std::make_unique<HBAOFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            HBAOFS, std::default_delete<HBAOFS>, void, void>(local_90, puVar1);
        std::make_unique<SSAOVS>();
        puVar1 = local_88;
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            SSAOVS, std::default_delete<SSAOVS>, void, void>(
            (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)&DAT_103bbe160, puVar1);
        std::make_unique<SSAOFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            SSAOFS, std::default_delete<SSAOFS>, void, void>(local_80, puVar1);
        std::make_unique<LightProbeVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            LightProbeVS, std::default_delete<LightProbeVS>, void, void>(local_78, puVar1);
        std::make_unique<LightProbeFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            LightProbeFS, std::default_delete<LightProbeFS>, void, void>(local_70, puVar1);
        std::make_unique<CubemapBlendVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            CubemapBlendVS, std::default_delete<CubemapBlendVS>, void, void>(local_68, puVar1);
        std::make_unique<CubemapBlendFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            CubemapBlendFS, std::default_delete<CubemapBlendFS>, void, void>(local_60, puVar1);
        std::make_unique<ShadowCascadeSelectionVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ShadowCascadeSelectionVS, std::default_delete<ShadowCascadeSelectionVS>, void, void>(local_58, puVar1);
        std::make_unique<ShadowCascadeSelectionFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            ShadowCascadeSelectionFS, std::default_delete<ShadowCascadeSelectionFS>, void, void>(local_50, puVar1);
        std::make_unique<DeferredShadowsVS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            DeferredShadowsVS, std::default_delete<DeferredShadowsVS>, void, void>(local_48, puVar1);
        std::make_unique<DeferredShadowsFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            DeferredShadowsFS, std::default_delete<DeferredShadowsFS>, void, void>(local_40, puVar1);
        std::make_unique<DepthDownsampleVS>();
        puVar1 = local_38;
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            DepthDownsampleVS, std::default_delete<DepthDownsampleVS>, void, void>(
            (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)&DAT_103bbe1b0, puVar1);
        std::make_unique<DepthDownsampleFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            DepthDownsampleFS, std::default_delete<DepthDownsampleFS>, void, void>(local_30, puVar1);
        std::make_unique<DepthDownsampleVS>();
        puVar1 = local_28;
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            DepthDownsampleVS, std::default_delete<DepthDownsampleVS>, void, void>(
            (unique_ptr<ShaderSource, std::default_delete<ShaderSource>>*)&DAT_103bbe1c0, puVar1);
        std::make_unique<DepthDownsamplePackedFS>();
        std::unique_ptr<ShaderSource, std::default_delete<ShaderSource>>::unique_ptr<
            DepthDownsamplePackedFS, std::default_delete<DepthDownsamplePackedFS>, void, void>(local_1e0, puVar1);
        local_1e0->~unique_ptr();
        local_28->~unique_ptr();
        local_30->~unique_ptr();
        local_38->~unique_ptr();
        local_40->~unique_ptr();
        local_48->~unique_ptr();
        local_50->~unique_ptr();
        local_58->~unique_ptr();
        local_60->~unique_ptr();
        local_68->~unique_ptr();
        local_70->~unique_ptr();
        local_78->~unique_ptr();
        local_80->~unique_ptr();
        local_88->~unique_ptr();
        local_90->~unique_ptr();
        local_98->~unique_ptr();
        local_a0->~unique_ptr();
        local_a8->~unique_ptr();
        local_b0->~unique_ptr();
        local_b8->~unique_ptr();
        local_c0->~unique_ptr();
        local_c8->~unique_ptr();
        local_d0->~unique_ptr();
        local_d8->~unique_ptr();
        local_e0->~unique_ptr();
        local_e8->~unique_ptr();
        local_f0->~unique_ptr();
        local_f8->~unique_ptr();
        local_100->~unique_ptr();
        local_108->~unique_ptr();
        local_110->~unique_ptr();
        local_118->~unique_ptr();
        local_120->~unique_ptr();
        local_128->~unique_ptr();
        local_130->~unique_ptr();
        local_138->~unique_ptr();
        local_140->~unique_ptr();
        local_148->~unique_ptr();
        local_150->~unique_ptr();
        local_158->~unique_ptr();
        local_160->~unique_ptr();
        local_168->~unique_ptr();
        local_170->~unique_ptr();
        local_178->~unique_ptr();
        local_180->~unique_ptr();
        local_188->~unique_ptr();
        local_190->~unique_ptr();
        local_198->~unique_ptr();
        local_1a0->~unique_ptr();
        local_1a8->~unique_ptr();
        local_1b0->~unique_ptr();
        local_1b8->~unique_ptr();
        local_1c0->~unique_ptr();
        local_1c8->~unique_ptr();
        local_1d0->~unique_ptr();
        local_1d8->~unique_ptr();
        ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
    }

} // namespace jag::graphics

// 0x1008a3c60, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_array_dtor
void ___cxx_global_array_dtor() {
    long lVar1;

    lVar1 = 432;
    do {
        ((&jag::graphics::_shaderTypes + lVar1))->~ShaderTypeValue();
        lVar1 = lVar1 + -16;
    } while (lVar1 != -16);
}
