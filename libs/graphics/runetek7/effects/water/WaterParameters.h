// libs/graphics/runetek7/effects/water/WaterParameters.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterParameters {
    public:
        GetEmissiveMapTexutre() const;
        GetFoamTexture() const;
        float GetEmissiveMapMaterialScale() const;
        void SetFeatureFlags(math::Vector4T<float> const&);
        WaterParameters();
        void SetNormalMapParams(unsigned long, WaterNormalMapParams const&);
        void SetNormalMapMacroParams(unsigned long, WaterNormalMapParams const&);
        void SetStillWaterNormalStrength(float);
        void SetWaterNormalMapTextureScalesFlowNoiseScale(math::Vector4T<float> const&);
        void SetWaterFoamScale(float);
        void SetEmissiveMapMaterialScale(float);
        void SetWaterDepthFoam(float);
        void SetWaterSpecularPower(float);
        void SetWaterSpecularShininess(float);
        void SetFresnelBias(float);
        void SetReflectionStrength(float);
        void SetFade(float);
        void SetEmissiveUVScale(math::Vector2T<float> const&);
        void SetEmissiveColour(math::Vector3T<float> const&);
        void SetEmissiveSource(float);
        void SetEmissiveScale(float);
        void SetEmissiveMapRefractionDepth(float);
        void SetEmissiveMapMode(WaterEmissiveMapMode);
        void SetEmissiveUVMode(WaterEmissiveUVMode);
        void SetEmissiveFlowSpeed(float);
        void SetEmissiveFlowRotationDegrees(float);
        void SetEmissiveBlend(float);
        void SetExtinctionRGBDepthMetres(math::Vector3T<float> const&);
        void SetExtinctionOpaqueWaterColour(math::Vector3T<float> const&);
        void SetExtinctionVisibilityMetres(float);
        void SetCausticsScale(float);
        void SetCausticsRefractionScale(float);
        void SetCausticsDepthFadeCutoff(float);
        void SetCausticsDepthFadeScale(float);
        void SetCausticsEdgeFadeStart(float);
        void SetCausticsEdgeFadeEnd(float);
        void SetCausticsOverWaterFadeStart(float);
        void SetCausticsOverWaterFadeEnd(float);
        void SetNormalMapTexture(unsigned long, shared_ptr<render::Texture> const&);
        void SetFoamTexture(shared_ptr<render::Texture> const&);
        void SetEmissiveMapTexture(shared_ptr<render::Texture> const&);
        void GetNormalMapTexture(unsigned long) const;
        ~WaterParameters();
        GetWaterNormalMapTextureScalesFlowNoiseScale() const;
        GetFeatureFlags();
        float GetWaterSpecularShininess() const;
        float GetWaterSpecularPower() const;
        float GetFresnelBias() const;
        float GetFade() const;
        GetEmissiveColour() const;
        float GetEmissiveSource() const;
        float GetEmissiveScale() const;
        float GetEmissiveMapRefractionDepth() const;
        GetEmissiveMapMode() const;
        GetEmissiveUVScale() const;
        float GetEmissiveFlowSpeed() const;
        float GetEmissiveFlowRotationDegrees() const;
        GetEmissiveUVMode() const;
        float GetEmissiveBlend() const;
        GetExtinctionRGBDepthMetres() const;
        GetExtinctionOpaqueWaterColour() const;
        float GetExtinctionVisibilityMetres() const;
        float GetWaterFoamScale() const;
        float GetWaterDepthFoam() const;
        void GetNormalMapParams(unsigned long) const;
        void GetNormalMapMacroParams(unsigned long) const;
        float GetStillWaterNormalStrength() const;
        void ClearTextures();
        float GetReflectionStrength() const;
        float GetCausticsScale() const;
        float GetCausticsRefractionScale() const;
        float GetCausticsDepthFadeCutoff() const;
        float GetCausticsDepthFadeScale() const;
        float GetCausticsEdgeFadeStart() const;
        float GetCausticsEdgeFadeEnd() const;
        float GetCausticsOverWaterFadeStart() const;
        float GetCausticsOverWaterFadeEnd() const;
        static float /* 4 bytes */ m_waterDepthFoamOverride;             // = 32.0f
        static float /* 4 bytes */ m_waterFoamScaleOverride;             // = 1.0f
        static float /* 4 bytes */ m_reflectionStrengthOverride;         // = 1.0f
        static float /* 4 bytes */ m_waterSpecularShininessOverride;     // = 1.0f
        static float /* 4 bytes */ m_waterSpecularPowerOverride;         // = 800.0f
        static /* 4 bytes */ m_stillWaterNormalStrengthOverride;         // = 1050253722
        static float /* 4 bytes */ m_noiseFlowOverride;                  // = 0.25f
        static float /* 4 bytes */ m_emissiveSourceOverride;             // = 1.0f
        static float /* 4 bytes */ m_emissiveScaleOverride;              // = 1.0f
        static float /* 4 bytes */ m_emissiveMapRefractionDepthOverride; // = 1.0f
        static float /* 4 bytes */ m_emissiveFlowSpeedOverride;          // = 1.0f
        static /* 4 bytes */ m_forceFlowAlignedEmissiveUVOverride;       // = 1
        static float /* 4 bytes */ m_extinctionVisibilityMetresOverride; // = 50.0f
        static float /* 4 bytes */ m_causticsScaleOverride;              // = 5.0f
        static /* 4 bytes */ m_causticsRefractionScaleOverride;          // = 1043878380
        static float /* 4 bytes */ m_causticsDepthFadeCutoffOverride;    // = 2400.0f
        static float /* 4 bytes */ m_causticsDepthFadeScaleOverride;     // = 3.0f
        static float /* 4 bytes */ m_causticsEdgeFadeStartOverride;      // = 100.0f
        static float /* 4 bytes */ m_causticsEdgeFadeEndOverride;        // = 200.0f
        static float /* 4 bytes */ m_causticsOverWaterFadeStartOverride; // = 700.0f
        static float /* 4 bytes */ m_causticsOverWaterFadeEndOverride;   // = 2300.0f
        static /* 4 bytes */ m_overrideEnabled;
        static /* 4 bytes */ m_waterSpecularInheritAlbedoOverride;
        static /* 4 bytes */ m_fresnelBiasOverride;
        static /* 12 bytes */ m_emissiveColourOverride;
        static /* 8 bytes */ m_emissiveUVScaleOverride; // = *(undefined8 *)PTR_ONE_100ee66a0
        static /* 4 bytes */ m_emissiveFlowRotationDegreesOverride;
        static /* 4 bytes */ m_emissiveBlendOverride;
        static math::ColourHSL /* 12 bytes */ m_extinctionRGBDepthMetresOverride;    // = ColourHSL(45.0, 75.0, 300.0)
        static math::ColourHSL /* 12 bytes */ m_extinctionOpaqueWaterColourOverride; // = ColourHSL(0.616, 0.616, 0.616)
        static /* 120 bytes */ m_normalMapMacroParamsOverride;
        static /* 120 bytes */ m_normalMapParamsOverride;
        static ImVec4 /* 16 bytes */ m_waterFeatureFlags; // = ImVec4(1.0, 1.0, 1.0, 1.0)

        // data members, from how the methods use this: 500 bytes
        char _unknown_0[240];
        float m_stillWaterNormalStrength; // offset 240
        char _unknown_244[12];
        undefined8 field_256;           // offset 256
        undefined8 field_264;           // offset 264
        float m_waterFoamScale;         // offset 272
        float m_waterDepthFoam;         // offset 276
        float m_waterSpecularPower;     // offset 280
        float m_waterSpecularShininess; // offset 284
        float m_fade;                   // offset 288
        float m_fresnelBias;            // offset 292
        float m_reflectionStrength;     // offset 296
        char _unknown_300[84];
        float m_emissiveMapMaterialScale; // offset 384
        char _unknown_388[20];
        float m_emissiveSource;             // offset 408
        float m_emissiveScale;              // offset 412
        float m_emissiveMapRefractionDepth; // offset 416
        undefined1 m_emissiveMapMode;       // offset 420
        undefined1 m_emissiveUVMode;        // offset 421
        char _unknown_422[2];
        float m_emissiveFlowSpeed;           // offset 424
        float m_emissiveFlowRotationDegrees; // offset 428
        float m_emissiveBlend;               // offset 432
        char _unknown_436[12];
        undefined8 field_448; // offset 448
        char _unknown_456[4];
        float m_causticsScale;              // offset 460
        float m_causticsRefractionScale;    // offset 464
        float m_causticsDepthFadeCutoff;    // offset 468
        float m_causticsDepthFadeScale;     // offset 472
        float m_causticsEdgeFadeStart;      // offset 476
        float m_causticsEdgeFadeEnd;        // offset 480
        float m_causticsOverWaterFadeStart; // offset 484
        float m_causticsOverWaterFadeEnd;   // offset 488
        float m_extinctionVisibilityMetres; // offset 492
        char _unknown_496[4];
    };

    // 0x1007a7db0, 32 bytes, inline, placed by class name and debug map
    // WaterParameters::SetFeatureFlags(math::Vector4T<float> const&)
    void WaterParameters::SetFeatureFlags(Vector4T* param_1) {
        math::Rect<float>::operator=((Rect<float>*)&m_waterFeatureFlags, (Rect*)param_1);
    }

    // 0x1007b9910, 16 bytes, complete-object constructor, inline, placed by class name
    // WaterParameters::WaterParameters(): jumps straight to the base-object constructor

    // 0x1007ba1b0, 32 bytes, inline, placed by class name
    // WaterParameters::SetNormalMapParams(unsigned long, WaterNormalMapParams const&)
    void WaterParameters::SetNormalMapParams(ulong param_1, WaterNormalMapParams* param_2) {
        WaterNormalMapParams* this_00;

        this_00 = (WaterNormalMapParams*)std::array<WaterNormalMapParams, 3ul>::operator[](
            (array<WaterNormalMapParams, 3ul>*)this, param_1);
        WaterNormalMapParams::operator=(this_00, param_2);
    }

    // 0x1007ba1d0, 48 bytes, inline, placed by class name
    // WaterParameters::SetNormalMapMacroParams(unsigned long, WaterNormalMapParams const&)
    void WaterParameters::SetNormalMapMacroParams(ulong param_1, WaterNormalMapParams* param_2) {
        WaterNormalMapParams* this_00;

        this_00 = (WaterNormalMapParams*)std::array<WaterNormalMapParams, 3ul>::operator[](
            (array<WaterNormalMapParams, 3ul>*)&field_120, param_1);
        WaterNormalMapParams::operator=(this_00, param_2);
    }

    // 0x1007ba200, 16 bytes, inline, placed by class name
    // WaterParameters::SetStillWaterNormalStrength(float)
    void WaterParameters::SetStillWaterNormalStrength(float param_1) {
        m_stillWaterNormalStrength = param_1;
    }

    // 0x1007ba280, 32 bytes, inline, placed by class name
    // WaterParameters::SetWaterNormalMapTextureScalesFlowNoiseScale(math::Vector4T<float> const&)
    void WaterParameters::SetWaterNormalMapTextureScalesFlowNoiseScale(Vector4T* param_1) {
        math::Rect<float>::operator=((Rect<float>*)&field_256, (Rect*)param_1);
    }

    // 0x1007ba2a0, 16 bytes, inline, placed by class name
    // WaterParameters::SetWaterFoamScale(float)
    void WaterParameters::SetWaterFoamScale(float param_1) {
        m_waterFoamScale = param_1;
    }

    // 0x1007ba2b0, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveMapMaterialScale(float)
    void WaterParameters::SetEmissiveMapMaterialScale(float param_1) {
        m_emissiveMapMaterialScale = param_1;
    }

    // 0x1007ba2c0, 16 bytes, inline, placed by class name
    // WaterParameters::SetWaterDepthFoam(float)
    void WaterParameters::SetWaterDepthFoam(float param_1) {
        m_waterDepthFoam = param_1;
    }

    // 0x1007ba2d0, 16 bytes, inline, placed by class name
    // WaterParameters::SetWaterSpecularPower(float)
    void WaterParameters::SetWaterSpecularPower(float param_1) {
        m_waterSpecularPower = param_1;
    }

    // 0x1007ba2e0, 16 bytes, inline, placed by class name
    // WaterParameters::SetWaterSpecularShininess(float)
    void WaterParameters::SetWaterSpecularShininess(float param_1) {
        m_waterSpecularShininess = param_1;
    }

    // 0x1007ba2f0, 16 bytes, inline, placed by class name
    // WaterParameters::SetFresnelBias(float)
    void WaterParameters::SetFresnelBias(float param_1) {
        m_fresnelBias = param_1;
    }

    // 0x1007ba300, 16 bytes, inline, placed by class name
    // WaterParameters::SetReflectionStrength(float)
    void WaterParameters::SetReflectionStrength(float param_1) {
        m_reflectionStrength = param_1;
    }

    // 0x1007ba310, 16 bytes, inline, placed by class name
    // WaterParameters::SetFade(float)
    void WaterParameters::SetFade(float param_1) {
        m_fade = param_1;
    }

    // 0x1007ba320, 32 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveUVScale(math::Vector2T<float> const&)
    void WaterParameters::SetEmissiveUVScale(Vector2T* param_1) {
        math::Vector2T<float>::operator=((Vector2T<float>*)&field_388, param_1);
    }

    // 0x1007ba340, 32 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveColour(math::Vector3T<float> const&)
    void WaterParameters::SetEmissiveColour(Vector3T* param_1) {
        (&field_396, param_1)->SetXYZ();
    }

    // 0x1007ba360, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveSource(float)
    void WaterParameters::SetEmissiveSource(float param_1) {
        m_emissiveSource = param_1;
    }

    // 0x1007ba370, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveScale(float)
    void WaterParameters::SetEmissiveScale(float param_1) {
        m_emissiveScale = param_1;
    }

    // 0x1007ba380, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveMapRefractionDepth(float)
    void WaterParameters::SetEmissiveMapRefractionDepth(float param_1) {
        m_emissiveMapRefractionDepth = param_1;
    }

    // 0x1007ba390, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveMapMode(WaterEmissiveMapMode)
    void WaterParameters::SetEmissiveMapMode(undefined1 param_2) {
        m_emissiveMapMode = param_2;
    }

    // 0x1007ba3a0, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveUVMode(WaterEmissiveUVMode)
    void WaterParameters::SetEmissiveUVMode(undefined1 param_2) {
        m_emissiveUVMode = param_2;
    }

    // 0x1007ba3b0, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveFlowSpeed(float)
    void WaterParameters::SetEmissiveFlowSpeed(float param_1) {
        m_emissiveFlowSpeed = param_1;
    }

    // 0x1007ba3c0, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveFlowRotationDegrees(float)
    void WaterParameters::SetEmissiveFlowRotationDegrees(float param_1) {
        m_emissiveFlowRotationDegrees = param_1;
    }

    // 0x1007ba3d0, 16 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveBlend(float)
    void WaterParameters::SetEmissiveBlend(float param_1) {
        m_emissiveBlend = param_1;
    }

    // 0x1007ba3e0, 32 bytes, inline, placed by class name
    // WaterParameters::SetExtinctionRGBDepthMetres(math::Vector3T<float> const&)
    void WaterParameters::SetExtinctionRGBDepthMetres(Vector3T* param_1) {
        (&field_436, param_1)->SetXYZ();
    }

    // 0x1007ba400, 32 bytes, inline, placed by class name
    // WaterParameters::SetExtinctionOpaqueWaterColour(math::Vector3T<float> const&)
    void WaterParameters::SetExtinctionOpaqueWaterColour(Vector3T* param_1) {
        (&field_448, param_1)->SetXYZ();
    }

    // 0x1007ba420, 16 bytes, inline, placed by class name
    // WaterParameters::SetExtinctionVisibilityMetres(float)
    void WaterParameters::SetExtinctionVisibilityMetres(float param_1) {
        m_extinctionVisibilityMetres = param_1;
    }

    // 0x1007ba430, 16 bytes, inline, placed by class name
    // WaterParameters::SetCausticsScale(float)
    void WaterParameters::SetCausticsScale(float param_1) {
        m_causticsScale = param_1;
    }

    // 0x1007ba440, 16 bytes, inline, placed by class name
    // WaterParameters::SetCausticsRefractionScale(float)
    void WaterParameters::SetCausticsRefractionScale(float param_1) {
        m_causticsRefractionScale = param_1;
    }

    // 0x1007ba450, 16 bytes, inline, placed by class name
    // WaterParameters::SetCausticsDepthFadeCutoff(float)
    void WaterParameters::SetCausticsDepthFadeCutoff(float param_1) {
        m_causticsDepthFadeCutoff = param_1;
    }

    // 0x1007ba460, 16 bytes, inline, placed by class name
    // WaterParameters::SetCausticsDepthFadeScale(float)
    void WaterParameters::SetCausticsDepthFadeScale(float param_1) {
        m_causticsDepthFadeScale = param_1;
    }

    // 0x1007ba470, 16 bytes, inline, placed by class name
    // WaterParameters::SetCausticsEdgeFadeStart(float)
    void WaterParameters::SetCausticsEdgeFadeStart(float param_1) {
        m_causticsEdgeFadeStart = param_1;
    }

    // 0x1007ba480, 16 bytes, inline, placed by class name
    // WaterParameters::SetCausticsEdgeFadeEnd(float)
    void WaterParameters::SetCausticsEdgeFadeEnd(float param_1) {
        m_causticsEdgeFadeEnd = param_1;
    }

    // 0x1007ba490, 16 bytes, inline, placed by class name
    // WaterParameters::SetCausticsOverWaterFadeStart(float)
    void WaterParameters::SetCausticsOverWaterFadeStart(float param_1) {
        m_causticsOverWaterFadeStart = param_1;
    }

    // 0x1007ba4a0, 16 bytes, inline, placed by class name
    // WaterParameters::SetCausticsOverWaterFadeEnd(float)
    void WaterParameters::SetCausticsOverWaterFadeEnd(float param_1) {
        m_causticsOverWaterFadeEnd = param_1;
    }

    // 0x1007ba5d0, 96 bytes, inline, placed by class name
    // WaterParameters::SetNormalMapTexture(unsigned long, shared_ptr<render::Texture> const&)
    void WaterParameters::SetNormalMapTexture(ulong param_1, shared_ptr* param_2) {
        shared_ptr<render::Texture>* this_00;

        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < NUM_SUPORTED_NORMAL_MAPS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "water/WaterParameters.h",
                      75, (char*)0);
        }
        this_00 = (shared_ptr<render::Texture>*)std::array<shared_ptr<render::Texture>, 3ul>::operator[](
            (array<shared_ptr<render::Texture>, 3ul>*)&field_304, param_1);
        shared_ptr<render::Texture>::operator=(this_00, param_2);
    }

    // 0x1007ba710, 32 bytes, inline, placed by class name
    // WaterParameters::SetFoamTexture(shared_ptr<render::Texture> const&)
    void WaterParameters::SetFoamTexture(shared_ptr* param_1) {
        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)&field_352, param_1);
    }

    // 0x1007ba730, 32 bytes, inline, placed by class name
    // WaterParameters::SetEmissiveMapTexture(shared_ptr<render::Texture> const&)
    void WaterParameters::SetEmissiveMapTexture(shared_ptr* param_1) {
        shared_ptr<render::Texture>::operator=((shared_ptr<render::Texture>*)&field_368, param_1);
    }

    // 0x1007ba7d0, 80 bytes, inline, placed by class name
    // WaterParameters::GetNormalMapTexture(unsigned long) const
    void WaterParameters::GetNormalMapTexture(ulong param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < NUM_SUPORTED_NORMAL_MAPS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "water/WaterParameters.h",
                      72, (char*)0);
        }
        std::array<shared_ptr<render::Texture>, 3ul>::operator[]((array<shared_ptr<render::Texture>, 3ul>*)&field_304,
                                                                 param_1);
    }

    // 0x1007bd130, 368 bytes, base-object constructor, inline, placed by class name
    // WaterParameters::WaterParameters()
    void WaterParameters::WaterParameters() {
        _func_decltype_nullptr* in_RSI;

        new (this) std::array<WaterNormalMapParams, 3ul>();
        new (&field_120) std::array<WaterNormalMapParams, 3ul>();
        m_stillWaterNormalStrength = 0.25;
        new (&field_256, 0.0, 0.0, 0.0, 0.0) ImVec4();
        m_waterFoamScale = 0.0;
        m_waterDepthFoam = 0.0;
        m_waterSpecularPower = 1.0;
        m_waterSpecularShininess = 0.0;
        m_fade = -1.0;
        m_fresnelBias = 0.0;
        m_reflectionStrength = 1.0;
        std::array<shared_ptr<render::Texture>, 3ul>::array();
        new (&field_352, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_368, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        m_emissiveMapMaterialScale = 1.0;
        new (&field_388) math::Vector2T<int>();
        new (&field_396) math::Vector3T<int>();
        m_emissiveUVMode = 1;
        m_emissiveFlowSpeed = 0.0;
        m_emissiveFlowRotationDegrees = 0.0;
        m_emissiveBlend = 0.0;
        new (&field_436, 45.0, 75.0, 300.0) math::ColourHSL();
        new (&field_448, 0.616, 0.616, 0.616) math::ColourHSL();
        m_causticsScale = 5.0;
        m_causticsRefractionScale = 0.18;
        m_causticsDepthFadeCutoff = 2400.0;
        m_causticsDepthFadeScale = 3.0;
        m_causticsEdgeFadeStart = 100.0;
        m_causticsEdgeFadeEnd = 200.0;
        m_causticsOverWaterFadeStart = 700.0;
        m_causticsOverWaterFadeEnd = 2300.0;
        m_extinctionVisibilityMetres = 50.0;
    }

    // 0x1007bd430, 16 bytes, complete-object destructor, inline, placed by class name
    // WaterParameters::~WaterParameters(): jumps straight to the base-object destructor

    // 0x1007bd440, 64 bytes, base-object destructor, inline, placed by class name
    // WaterParameters::~WaterParameters()
    void WaterParameters::~WaterParameters() {
        (&field_368)->~shared_ptr();
        (&field_352)->~shared_ptr();
        (&field_304)->~array();
    }

    // 0x100920250, 16 bytes, inline, placed by class name
    // WaterParameters::GetFade() const
    float WaterParameters::GetFade() {
        return m_fade;
    }

    // 0x1009207e0, 16 bytes, inline, placed by class name
    // WaterParameters::GetEmissiveMapMode() const
    undefined1 WaterParameters::GetEmissiveMapMode() {
        return m_emissiveMapMode;
    }

} // namespace jag::graphics
