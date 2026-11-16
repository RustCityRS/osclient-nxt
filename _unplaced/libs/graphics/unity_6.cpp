// _unplaced/libs/graphics/unity_6.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x100f44000
    int32_t gSpriteLoadModeNames__[12] = {0, 0, 14704238, 1, 1, 0, 14704243, 1, 2, 0, 14704249, 1};

    // 0x100f44030
    const void* ShaderTypeStrings[28] = {
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

    // 0x103bbdff0, set at startup by ___cxx_global_var_init.12
    StringEnum gSpriteLoadModeNames = StringEnum((StringEnumEntry*)&gSpriteLoadModeNames__, 3);

    // 0x103bbe010
    uint8_t _shaderTypes[448];

    // 0x104232a10
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x104232a50
    uint8_t WORLD_ORTHOGONAL[16];

    // 0x1008a29d0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1008a2a30
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1008a2a50
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1008a2ab0
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1008a2b10
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1008a2bf0
    void ___cxx_global_var_init_55(undefined8 param_1,
                                   unique_ptr<TextureToQuadFS, std::default_delete<TextureToQuadFS> _>* param_2) {
        auto local_1d8 = std::make_unique<ModelGeometryVS>();
        local_1d8.unique_ptr<ModelGeometryVS, std::default_delete<ModelGeometryVS>, void, void>(*param_2);
        auto local_1d0 = std::make_unique<ModelGeometryFS>();
        local_1d0.unique_ptr<ModelGeometryFS, std::default_delete<ModelGeometryFS>, void, void>(*param_2);
        auto local_1c8 = std::make_unique<ModelGeometryHighlightVS>();
        local_1c8.unique_ptr<ModelGeometryHighlightVS, std::default_delete<ModelGeometryHighlightVS>, void, void>(
            *param_2);
        auto local_1c0 = std::make_unique<ModelGeometryHighlightFS>();
        local_1c0.unique_ptr<ModelGeometryHighlightFS, std::default_delete<ModelGeometryHighlightFS>, void, void>(
            *param_2);
        auto local_1b8 = std::make_unique<ModelGeometryNormalVS>();
        local_1b8.unique_ptr<ModelGeometryNormalVS, std::default_delete<ModelGeometryNormalVS>, void, void>(*param_2);
        auto local_1b0 = std::make_unique<ModelGeometryNormalFS>();
        local_1b0.unique_ptr<ModelGeometryNormalFS, std::default_delete<ModelGeometryNormalFS>, void, void>(*param_2);
        auto local_1a8 = std::make_unique<ModelGeometryShadowVS>();
        local_1a8.unique_ptr<ModelGeometryShadowVS, std::default_delete<ModelGeometryShadowVS>, void, void>(*param_2);
        auto local_1a0 = std::make_unique<ModelGeometryShadowFS>();
        local_1a0.unique_ptr<ModelGeometryShadowFS, std::default_delete<ModelGeometryShadowFS>, void, void>(*param_2);
        auto local_198 = std::make_unique<ModelGeometryPointShadowVS>();
        local_198.unique_ptr<ModelGeometryPointShadowVS, std::default_delete<ModelGeometryPointShadowVS>, void, void>(
            *param_2);
        auto local_190 = std::make_unique<ModelGeometryPointShadowFS>();
        local_190.unique_ptr<ModelGeometryPointShadowFS, std::default_delete<ModelGeometryPointShadowFS>, void, void>(
            *param_2);
        auto local_188 = std::make_unique<ModelBillboardVS>();
        local_188.unique_ptr<ModelBillboardVS, std::default_delete<ModelBillboardVS>, void, void>(*param_2);
        auto local_180 = std::make_unique<ModelBillboardFS>();
        local_180.unique_ptr<ModelBillboardFS, std::default_delete<ModelBillboardFS>, void, void>(*param_2);
        auto local_178 = std::make_unique<TerrainVS>();
        local_178.unique_ptr<TerrainVS, std::default_delete<TerrainVS>, void, void>(*param_2);
        auto local_170 = std::make_unique<TerrainFS>();
        local_170.unique_ptr<TerrainFS, std::default_delete<TerrainFS>, void, void>(*param_2);
        auto local_168 = std::make_unique<TerrainNormalVS>();
        local_168.unique_ptr<TerrainNormalVS, std::default_delete<TerrainNormalVS>, void, void>(*param_2);
        auto local_160 = std::make_unique<TerrainNormalFS>();
        local_160.unique_ptr<TerrainNormalFS, std::default_delete<TerrainNormalFS>, void, void>(*param_2);
        auto local_158 = std::make_unique<TerrainSimpleVS>();
        local_158.unique_ptr<TerrainSimpleVS, std::default_delete<TerrainSimpleVS>, void, void>(*param_2);
        auto local_150 = std::make_unique<TerrainSimpleFS>();
        local_150.unique_ptr<TerrainSimpleFS, std::default_delete<TerrainSimpleFS>, void, void>(*param_2);
        auto local_148 = std::make_unique<TerrainShadowVS>();
        local_148.unique_ptr<TerrainShadowVS, std::default_delete<TerrainShadowVS>, void, void>(*param_2);
        auto local_140 = std::make_unique<TerrainShadowFS>();
        local_140.unique_ptr<TerrainShadowFS, std::default_delete<TerrainShadowFS>, void, void>(*param_2);
        auto local_138 = std::make_unique<WaterVS>();
        local_138.unique_ptr<WaterVS, std::default_delete<WaterVS>, void, void>(*param_2);
        auto local_130 = std::make_unique<WaterFS>();
        local_130.unique_ptr<WaterFS, std::default_delete<WaterFS>, void, void>(*param_2);
        auto local_128 = std::make_unique<ParticleVS>();
        local_128.unique_ptr<ParticleVS, std::default_delete<ParticleVS>, void, void>(*param_2);
        auto local_120 = std::make_unique<ParticleFS>();
        local_120.unique_ptr<ParticleFS, std::default_delete<ParticleFS>, void, void>(*param_2);
        auto local_118 = std::make_unique<ParticleShadowVS>();
        local_118.unique_ptr<ParticleShadowVS, std::default_delete<ParticleShadowVS>, void, void>(*param_2);
        auto local_110 = std::make_unique<ParticleShadowFS>();
        local_110.unique_ptr<ParticleShadowFS, std::default_delete<ParticleShadowFS>, void, void>(*param_2);
        auto local_108 = std::make_unique<ParticleDistortionVS>();
        local_108.unique_ptr<ParticleDistortionVS, std::default_delete<ParticleDistortionVS>, void, void>(*param_2);
        auto local_100 = std::make_unique<ParticleDistortionFS>();
        local_100.unique_ptr<ParticleDistortionFS, std::default_delete<ParticleDistortionFS>, void, void>(*param_2);
        auto local_f8 = std::make_unique<ParticleOverdrawVS>();
        local_f8.unique_ptr<ParticleOverdrawVS, std::default_delete<ParticleOverdrawVS>, void, void>(*param_2);
        auto local_f0 = std::make_unique<ParticleOverdrawFS>();
        local_f0.unique_ptr<ParticleOverdrawFS, std::default_delete<ParticleOverdrawFS>, void, void>(*param_2);
        auto local_e8 = std::make_unique<GUIVS>();
        local_e8.unique_ptr<GUIVS, std::default_delete<GUIVS>, void, void>(*param_2);
        auto local_e0 = std::make_unique<GUIFS>();
        local_e0.unique_ptr<GUIFS, std::default_delete<GUIFS>, void, void>(*param_2);
        auto local_d8 = std::make_unique<LineVS>();
        local_d8.unique_ptr<LineVS, std::default_delete<LineVS>, void, void>(*param_2);
        auto local_d0 = std::make_unique<LineFS>();
        local_d0.unique_ptr<LineFS, std::default_delete<LineFS>, void, void>(*param_2);
        auto local_c8 = std::make_unique<SkyBoxVS>();
        local_c8.unique_ptr<SkyBoxVS, std::default_delete<SkyBoxVS>, void, void>(*param_2);
        auto local_c0 = std::make_unique<SkyBoxFS>();
        local_c0.unique_ptr<SkyBoxFS, std::default_delete<SkyBoxFS>, void, void>(*param_2);
        auto local_b8 = std::make_unique<TextureToQuadVS>();
        local_b8.unique_ptr<TextureToQuadVS, std::default_delete<TextureToQuadVS>, void, void>(*param_2);
        auto local_b0 = std::make_unique<TextureToQuadFS>();
        local_b0.unique_ptr<TextureToQuadFS, std::default_delete<TextureToQuadFS>, void, void>(*param_2);
        auto local_a8 = std::make_unique<SSAOVS>();
        ReturnValue* pRVar1 = &local_a8;
        ((unique_ptr<ShaderSource>*)&reinterpret_cast<const uint64_t*>(&_shaderTypes)[38])
            ->unique_ptr<SSAOVS, std::default_delete<SSAOVS>, void, void>(*pRVar1);
        auto local_a0 = std::make_unique<GeometryAwareBlurFS>();
        local_a0.unique_ptr<GeometryAwareBlurFS, std::default_delete<GeometryAwareBlurFS>, void, void>(*pRVar1);
        auto local_98 = std::make_unique<SSAOVS>();
        pRVar1 = &local_98;
        ((unique_ptr<ShaderSource>*)&reinterpret_cast<const uint64_t*>(&_shaderTypes)[40])
            ->unique_ptr<SSAOVS, std::default_delete<SSAOVS>, void, void>(*pRVar1);
        auto local_90 = std::make_unique<HBAOFS>();
        local_90.unique_ptr<HBAOFS, std::default_delete<HBAOFS>, void, void>(*pRVar1);
        auto local_88 = std::make_unique<SSAOVS>();
        pRVar1 = &local_88;
        ((unique_ptr<ShaderSource>*)&reinterpret_cast<const uint64_t*>(&_shaderTypes)[42])
            ->unique_ptr<SSAOVS, std::default_delete<SSAOVS>, void, void>(*pRVar1);
        auto local_80 = std::make_unique<SSAOFS>();
        local_80.unique_ptr<SSAOFS, std::default_delete<SSAOFS>, void, void>(*pRVar1);
        auto local_78 = std::make_unique<LightProbeVS>();
        local_78.unique_ptr<LightProbeVS, std::default_delete<LightProbeVS>, void, void>(*pRVar1);
        auto local_70 = std::make_unique<LightProbeFS>();
        local_70.unique_ptr<LightProbeFS, std::default_delete<LightProbeFS>, void, void>(*pRVar1);
        auto local_68 = std::make_unique<CubemapBlendVS>();
        local_68.unique_ptr<CubemapBlendVS, std::default_delete<CubemapBlendVS>, void, void>(*pRVar1);
        auto local_60 = std::make_unique<CubemapBlendFS>();
        local_60.unique_ptr<CubemapBlendFS, std::default_delete<CubemapBlendFS>, void, void>(*pRVar1);
        auto local_58 = std::make_unique<ShadowCascadeSelectionVS>();
        local_58.unique_ptr<ShadowCascadeSelectionVS, std::default_delete<ShadowCascadeSelectionVS>, void, void>(
            *pRVar1);
        auto local_50 = std::make_unique<ShadowCascadeSelectionFS>();
        local_50.unique_ptr<ShadowCascadeSelectionFS, std::default_delete<ShadowCascadeSelectionFS>, void, void>(
            *pRVar1);
        auto local_48 = std::make_unique<DeferredShadowsVS>();
        local_48.unique_ptr<DeferredShadowsVS, std::default_delete<DeferredShadowsVS>, void, void>(*pRVar1);
        auto local_40 = std::make_unique<DeferredShadowsFS>();
        local_40.unique_ptr<DeferredShadowsFS, std::default_delete<DeferredShadowsFS>, void, void>(*pRVar1);
        auto local_38 = std::make_unique<DepthDownsampleVS>();
        pRVar1 = &local_38;
        ((unique_ptr<ShaderSource>*)&reinterpret_cast<const uint64_t*>(&_shaderTypes)[52])
            ->unique_ptr<DepthDownsampleVS, std::default_delete<DepthDownsampleVS>, void, void>(*pRVar1);
        auto local_30 = std::make_unique<DepthDownsampleFS>();
        local_30.unique_ptr<DepthDownsampleFS, std::default_delete<DepthDownsampleFS>, void, void>(*pRVar1);
        auto local_28 = std::make_unique<DepthDownsampleVS>();
        pRVar1 = &local_28;
        ((unique_ptr<ShaderSource>*)&reinterpret_cast<const uint64_t*>(&_shaderTypes)[54])
            ->unique_ptr<DepthDownsampleVS, std::default_delete<DepthDownsampleVS>, void, void>(*pRVar1);
        auto local_1e0 = std::make_unique<DepthDownsamplePackedFS>();
        local_1e0.unique_ptr<DepthDownsamplePackedFS, std::default_delete<DepthDownsamplePackedFS>, void, void>(
            *pRVar1);
        ___cxa_atexit(___cxx_global_array_dtor, 0, 4294967296);
    }

} // namespace jag::graphics

// 0x1008a3c60
void ___cxx_global_array_dtor(void) {
    long lVar1 = 432;
    do {
        ((&jag::graphics::_shaderTypes + lVar1))->~ShaderTypeValue();
        lVar1 = lVar1 - 16;
    } while (lVar1 != -16);
}
