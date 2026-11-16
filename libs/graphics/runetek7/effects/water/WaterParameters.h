// libs/graphics/runetek7/effects/water/WaterParameters.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterParameters {
    public:
        uint8_t* GetEmissiveMapTexutre() const;
        uint32_t* GetFoamTexture() const;
        float GetEmissiveMapMaterialScale() const;
        void SetFeatureFlags(const math::Vector4T<float>& vector4);
        WaterParameters();
        void SetNormalMapParams(unsigned long arg1, const WaterNormalMapParams& waterNormalMapParams);
        void SetNormalMapMacroParams(unsigned long arg1, const WaterNormalMapParams& waterNormalMapParams);
        void SetStillWaterNormalStrength(float arg1);
        void SetWaterNormalMapTextureScalesFlowNoiseScale(const math::Vector4T<float>& vector4);
        void SetWaterFoamScale(float arg1);
        void SetEmissiveMapMaterialScale(float arg1);
        void SetWaterDepthFoam(float arg1);
        void SetWaterSpecularPower(float arg1);
        void SetWaterSpecularShininess(float arg1);
        void SetFresnelBias(float arg1);
        void SetReflectionStrength(float arg1);
        void SetFade(float arg1);
        void SetEmissiveUVScale(const math::Vector2T<float>& vector2);
        void SetEmissiveColour(const math::Vector3T<float>& vector3);
        void SetEmissiveSource(float arg1);
        void SetEmissiveScale(float arg1);
        void SetEmissiveMapRefractionDepth(float arg1);
        void SetEmissiveMapMode(WaterEmissiveMapMode waterEmissiveMapMode);
        void SetEmissiveUVMode(WaterEmissiveUVMode waterEmissiveUVMode);
        void SetEmissiveFlowSpeed(float arg1);
        void SetEmissiveFlowRotationDegrees(float arg1);
        void SetEmissiveBlend(float arg1);
        void SetExtinctionRGBDepthMetres(const math::Vector3T<float>& vector3);
        void SetExtinctionOpaqueWaterColour(const math::Vector3T<float>& vector3);
        void SetExtinctionVisibilityMetres(float arg1);
        void SetCausticsScale(float arg1);
        void SetCausticsRefractionScale(float arg1);
        void SetCausticsDepthFadeCutoff(float arg1);
        void SetCausticsDepthFadeScale(float arg1);
        void SetCausticsEdgeFadeStart(float arg1);
        void SetCausticsEdgeFadeEnd(float arg1);
        void SetCausticsOverWaterFadeStart(float arg1);
        void SetCausticsOverWaterFadeEnd(float arg1);
        void SetNormalMapTexture(unsigned long arg1, const shared_ptr<render::Texture>& texture);
        void SetFoamTexture(const shared_ptr<render::Texture>& texture);
        void SetEmissiveMapTexture(const shared_ptr<render::Texture>& texture);
        void GetNormalMapTexture(unsigned long arg1) const;
        ~WaterParameters();
        uint8_t[16] GetWaterNormalMapTextureScalesFlowNoiseScale() const;
        void GetFeatureFlags();
        float GetWaterSpecularShininess() const;
        float GetWaterSpecularPower() const;
        float GetFresnelBias() const;
        float GetFade() const;
        uint8_t* GetEmissiveColour() const;
        float GetEmissiveSource() const;
        float GetEmissiveScale() const;
        float GetEmissiveMapRefractionDepth() const;
        char GetEmissiveMapMode() const;
        uint64_t* GetEmissiveUVScale() const;
        float GetEmissiveFlowSpeed() const;
        float GetEmissiveFlowRotationDegrees() const;
        char GetEmissiveUVMode() const;
        float GetEmissiveBlend() const;
        uint8_t* GetExtinctionRGBDepthMetres() const;
        uint64_t GetExtinctionOpaqueWaterColour() const;
        float GetExtinctionVisibilityMetres() const;
        float GetWaterFoamScale() const;
        float GetWaterDepthFoam() const;
        void GetNormalMapParams(unsigned long arg1) const;
        void GetNormalMapMacroParams(unsigned long arg1) const;
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
        static float m_waterDepthFoamOverride;               // = 32.0f
        static float m_waterFoamScaleOverride;               // = 1.0f
        static float m_reflectionStrengthOverride;           // = 1.0f
        static float m_waterSpecularShininessOverride;       // = 1.0f
        static float m_waterSpecularPowerOverride;           // = 800.0f
        static int32_t m_stillWaterNormalStrengthOverride;   // = 1050253722
        static float m_noiseFlowOverride;                    // = 0.25f
        static float m_emissiveSourceOverride;               // = 1.0f
        static float m_emissiveScaleOverride;                // = 1.0f
        static float m_emissiveMapRefractionDepthOverride;   // = 1.0f
        static float m_emissiveFlowSpeedOverride;            // = 1.0f
        static int32_t m_forceFlowAlignedEmissiveUVOverride; // = 1
        static float m_extinctionVisibilityMetresOverride;   // = 50.0f
        static float m_causticsScaleOverride;                // = 5.0f
        static int32_t m_causticsRefractionScaleOverride;    // = 1043878380
        static float m_causticsDepthFadeCutoffOverride;      // = 2400.0f
        static float m_causticsDepthFadeScaleOverride;       // = 3.0f
        static float m_causticsEdgeFadeStartOverride;        // = 100.0f
        static float m_causticsEdgeFadeEndOverride;          // = 200.0f
        static float m_causticsOverWaterFadeStartOverride;   // = 700.0f
        static float m_causticsOverWaterFadeEndOverride;     // = 2300.0f
        static int32_t m_overrideEnabled;
        static int32_t m_waterSpecularInheritAlbedoOverride;
        static float m_fresnelBiasOverride;
        static uint8_t m_emissiveColourOverride[12];
        static int64_t m_emissiveUVScaleOverride; // = *(undefined8 *)PTR_ONE_100ee66a0
        static float m_emissiveFlowRotationDegreesOverride;
        static float m_emissiveBlendOverride;
        static math::ColourHSL m_extinctionRGBDepthMetresOverride;    // = ColourHSL(45.0, 75.0, 300.0)
        static math::ColourHSL m_extinctionOpaqueWaterColourOverride; // = ColourHSL(0.616, 0.616, 0.616)
        static std::array<WaterNormalMapParams, 3ul> m_normalMapMacroParamsOverride;
        static std::array<WaterNormalMapParams, 3ul> m_normalMapParamsOverride;
        static ImVec4 m_waterFeatureFlags; // = ImVec4(1.0, 1.0, 1.0, 1.0)

    private:
        uint8_t _unknown_0[240];
        float m_stillWaterNormalStrength;
        uint8_t _unknown_244[12];
        uint64_t field_256;
        uint64_t field_264;
        float m_waterFoamScale;
        float m_waterDepthFoam;
        float m_waterSpecularPower;
        float m_waterSpecularShininess;
        float m_fade;
        float m_fresnelBias;
        float m_reflectionStrength;
        uint8_t _unknown_300[84];
        float m_emissiveMapMaterialScale;
        uint8_t _unknown_388[20];
        float m_emissiveSource;
        float m_emissiveScale;
        float m_emissiveMapRefractionDepth;
        char m_emissiveMapMode;
        char m_emissiveUVMode;
        uint8_t _unknown_422[2];
        float m_emissiveFlowSpeed;
        float m_emissiveFlowRotationDegrees;
        float m_emissiveBlend;
        uint8_t _unknown_436[12];
        uint64_t field_448;
        uint8_t _unknown_456[4];
        float m_causticsScale;
        float m_causticsRefractionScale;
        float m_causticsDepthFadeCutoff;
        float m_causticsDepthFadeScale;
        float m_causticsEdgeFadeStart;
        float m_causticsEdgeFadeEnd;
        float m_causticsOverWaterFadeStart;
        float m_causticsOverWaterFadeEnd;
        float m_extinctionVisibilityMetres;
        uint8_t _unknown_496[4];
    };

    // 0x1007a7db0
    void WaterParameters::SetFeatureFlags(const math::Vector4T<float>& vector4) {
        m_waterFeatureFlags = vector4;
    }

    // 0x1007ba1b0
    void WaterParameters::SetNormalMapParams(unsigned long arg1, const WaterNormalMapParams& waterNormalMapParams) {
        WaterNormalMapParams* this_00 = (WaterNormalMapParams*)(*this)[arg1];
        *this_00 = waterNormalMapParams;
    }

    // 0x1007ba1d0
    void WaterParameters::SetNormalMapMacroParams(unsigned long arg1,
                                                  const WaterNormalMapParams& waterNormalMapParams) {
        WaterNormalMapParams* this_00 = &field_120[arg1];
        *this_00 = waterNormalMapParams;
    }

    // 0x1007ba200
    void WaterParameters::SetStillWaterNormalStrength(float arg1) {
        m_stillWaterNormalStrength = arg1;
    }

    // 0x1007ba280
    void WaterParameters::SetWaterNormalMapTextureScalesFlowNoiseScale(const math::Vector4T<float>& vector4) {
        field_256 = vector4;
    }

    // 0x1007ba2a0
    void WaterParameters::SetWaterFoamScale(float arg1) {
        m_waterFoamScale = arg1;
    }

    // 0x1007ba2b0
    void WaterParameters::SetEmissiveMapMaterialScale(float arg1) {
        m_emissiveMapMaterialScale = arg1;
    }

    // 0x1007ba2c0
    void WaterParameters::SetWaterDepthFoam(float arg1) {
        m_waterDepthFoam = arg1;
    }

    // 0x1007ba2d0
    void WaterParameters::SetWaterSpecularPower(float arg1) {
        m_waterSpecularPower = arg1;
    }

    // 0x1007ba2e0
    void WaterParameters::SetWaterSpecularShininess(float arg1) {
        m_waterSpecularShininess = arg1;
    }

    // 0x1007ba2f0
    void WaterParameters::SetFresnelBias(float arg1) {
        m_fresnelBias = arg1;
    }

    // 0x1007ba300
    void WaterParameters::SetReflectionStrength(float arg1) {
        m_reflectionStrength = arg1;
    }

    // 0x1007ba310
    void WaterParameters::SetFade(float arg1) {
        m_fade = arg1;
    }

    // 0x1007ba320
    void WaterParameters::SetEmissiveUVScale(const math::Vector2T<float>& vector2) {
        field_388 = vector2;
    }

    // 0x1007ba340
    void WaterParameters::SetEmissiveColour(const math::Vector3T<float>& vector3) {
        field_396.SetXYZ(vector3);
    }

    // 0x1007ba360
    void WaterParameters::SetEmissiveSource(float arg1) {
        m_emissiveSource = arg1;
    }

    // 0x1007ba370
    void WaterParameters::SetEmissiveScale(float arg1) {
        m_emissiveScale = arg1;
    }

    // 0x1007ba380
    void WaterParameters::SetEmissiveMapRefractionDepth(float arg1) {
        m_emissiveMapRefractionDepth = arg1;
    }

    // 0x1007ba390
    void WaterParameters::SetEmissiveMapMode(WaterEmissiveMapMode waterEmissiveMapMode) {
        m_emissiveMapMode = (char)waterEmissiveMapMode;
    }

    // 0x1007ba3a0
    void WaterParameters::SetEmissiveUVMode(WaterEmissiveUVMode waterEmissiveUVMode) {
        m_emissiveUVMode = (char)waterEmissiveUVMode;
    }

    // 0x1007ba3b0
    void WaterParameters::SetEmissiveFlowSpeed(float arg1) {
        m_emissiveFlowSpeed = arg1;
    }

    // 0x1007ba3c0
    void WaterParameters::SetEmissiveFlowRotationDegrees(float arg1) {
        m_emissiveFlowRotationDegrees = arg1;
    }

    // 0x1007ba3d0
    void WaterParameters::SetEmissiveBlend(float arg1) {
        m_emissiveBlend = arg1;
    }

    // 0x1007ba3e0
    void WaterParameters::SetExtinctionRGBDepthMetres(const math::Vector3T<float>& vector3) {
        field_436.SetXYZ(vector3);
    }

    // 0x1007ba400
    void WaterParameters::SetExtinctionOpaqueWaterColour(const math::Vector3T<float>& vector3) {
        field_448.SetXYZ(vector3);
    }

    // 0x1007ba420
    void WaterParameters::SetExtinctionVisibilityMetres(float arg1) {
        m_extinctionVisibilityMetres = arg1;
    }

    // 0x1007ba430
    void WaterParameters::SetCausticsScale(float arg1) {
        m_causticsScale = arg1;
    }

    // 0x1007ba440
    void WaterParameters::SetCausticsRefractionScale(float arg1) {
        m_causticsRefractionScale = arg1;
    }

    // 0x1007ba450
    void WaterParameters::SetCausticsDepthFadeCutoff(float arg1) {
        m_causticsDepthFadeCutoff = arg1;
    }

    // 0x1007ba460
    void WaterParameters::SetCausticsDepthFadeScale(float arg1) {
        m_causticsDepthFadeScale = arg1;
    }

    // 0x1007ba470
    void WaterParameters::SetCausticsEdgeFadeStart(float arg1) {
        m_causticsEdgeFadeStart = arg1;
    }

    // 0x1007ba480
    void WaterParameters::SetCausticsEdgeFadeEnd(float arg1) {
        m_causticsEdgeFadeEnd = arg1;
    }

    // 0x1007ba490
    void WaterParameters::SetCausticsOverWaterFadeStart(float arg1) {
        m_causticsOverWaterFadeStart = arg1;
    }

    // 0x1007ba4a0
    void WaterParameters::SetCausticsOverWaterFadeEnd(float arg1) {
        m_causticsOverWaterFadeEnd = arg1;
    }

    // 0x1007ba5d0
    void WaterParameters::SetNormalMapTexture(unsigned long arg1, const shared_ptr<render::Texture>& texture) {
        if (2 < arg1) {
            LogAssert("index < NUM_SUPORTED_NORMAL_MAPS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "water/WaterParameters.h",
                      75, nullptr);
        }
        shared_ptr<render::Texture>* this_00 = &field_304[arg1];
        *this_00 = texture;
    }

    // 0x1007ba710
    void WaterParameters::SetFoamTexture(const shared_ptr<render::Texture>& texture) {
        field_352 = texture;
    }

    // 0x1007ba730
    void WaterParameters::SetEmissiveMapTexture(const shared_ptr<render::Texture>& texture) {
        field_368 = texture;
    }

    // 0x1007ba7d0
    void WaterParameters::GetNormalMapTexture(unsigned long arg1) const {
        if (2 < arg1) {
            LogAssert("index < NUM_SUPORTED_NORMAL_MAPS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/effects/"
                      "water/WaterParameters.h",
                      72, nullptr);
        }
        field_304[arg1];
    }

    // 0x1007bd130
    WaterParameters::WaterParameters()
        : std::array<WaterNormalMapParams, 3ul>(), m_stillWaterNormalStrength(0.25), field_256(0.0, 0.0, 0.0, 0.0),
          m_waterFoamScale(0.0), m_waterDepthFoam(0.0), m_waterSpecularPower(1.0), m_waterSpecularShininess(0.0),
          m_fade(-1.0), m_fresnelBias(0.0), m_reflectionStrength(1.0), m_emissiveMapMaterialScale(1.0) {
        m_emissiveUVMode = '\x01';
        m_emissiveFlowSpeed = 0.0;
        m_emissiveFlowRotationDegrees = 0.0;
        m_emissiveBlend = 0.0;
        new (&field_436) math::ColourHSL(45.0, 75.0, 300.0);
        new (&field_448) math::ColourHSL(0.616, 0.616, 0.616);
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

    // 0x1007bd440
    WaterParameters::~WaterParameters() {
        field_368.~shared_ptr();
        field_352.~shared_ptr();
        field_304.~array();
    }

    // 0x100920250
    float WaterParameters::GetFade() const {
        return m_fade;
    }

    // 0x1009207e0
    char WaterParameters::GetEmissiveMapMode() const {
        return m_emissiveMapMode;
    }

} // namespace jag::graphics
