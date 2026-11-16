// libs/graphics/runetek7/effects/water/WaterParameters.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WaterParameters.h"

namespace jag::graphics {
    // 0x100f444e8
    float WaterParameters::m_waterDepthFoamOverride = 32.0f;

    // 0x100f444ec
    float WaterParameters::m_waterFoamScaleOverride = 1.0f;

    // 0x100f444f0
    float WaterParameters::m_reflectionStrengthOverride = 1.0f;

    // 0x100f444f4
    float WaterParameters::m_waterSpecularShininessOverride = 1.0f;

    // 0x100f444f8
    float WaterParameters::m_waterSpecularPowerOverride = 800.0f;

    // 0x100f444fc
    int32_t WaterParameters::m_stillWaterNormalStrengthOverride = 1050253722;

    // 0x100f44500
    float WaterParameters::m_noiseFlowOverride = 0.25f;

    // 0x100f44510
    float WaterParameters::m_emissiveSourceOverride = 1.0f;

    // 0x100f44514
    float WaterParameters::m_emissiveScaleOverride = 1.0f;

    // 0x100f44520
    float WaterParameters::m_emissiveMapRefractionDepthOverride = 1.0f;

    // 0x100f44524
    float WaterParameters::m_emissiveFlowSpeedOverride = 1.0f;

    // 0x100f44528
    int32_t WaterParameters::m_forceFlowAlignedEmissiveUVOverride = 1;

    // 0x100f4452c
    float WaterParameters::m_extinctionVisibilityMetresOverride = 50.0f;

    // 0x100f44530
    float WaterParameters::m_causticsScaleOverride = 5.0f;

    // 0x100f44534
    int32_t WaterParameters::m_causticsRefractionScaleOverride = 1043878380;

    // 0x100f44538
    float WaterParameters::m_causticsDepthFadeCutoffOverride = 2400.0f;

    // 0x100f4453c
    float WaterParameters::m_causticsDepthFadeScaleOverride = 3.0f;

    // 0x100f44540
    float WaterParameters::m_causticsEdgeFadeStartOverride = 100.0f;

    // 0x100f44544
    float WaterParameters::m_causticsEdgeFadeEndOverride = 200.0f;

    // 0x100f44548
    float WaterParameters::m_causticsOverWaterFadeStartOverride = 700.0f;

    // 0x100f4454c
    float WaterParameters::m_causticsOverWaterFadeEndOverride = 2300.0f;

    // 0x103bc04f0
    int32_t WaterParameters::m_overrideEnabled;

    // 0x103bc04f4
    int32_t WaterParameters::m_waterSpecularInheritAlbedoOverride;

    // 0x103bc04f8
    float WaterParameters::m_fresnelBiasOverride;

    // 0x103bc04fc
    uint8_t WaterParameters::m_emissiveColourOverride[12];

    // 0x103bc0508, set at startup by ___cxx_global_var_init.71
    int64_t WaterParameters::m_emissiveUVScaleOverride = *(undefined8*)PTR_ONE_100ee66a0;

    // 0x103bc0510
    float WaterParameters::m_emissiveFlowRotationDegreesOverride;

    // 0x103bc0514
    float WaterParameters::m_emissiveBlendOverride;

    // 0x103bc0518, set at startup by ___cxx_global_var_init.72
    math::ColourHSL WaterParameters::m_extinctionRGBDepthMetresOverride = ColourHSL(45.0, 75.0, 300.0);

    // 0x103bc0524, set at startup by ___cxx_global_var_init.73
    math::ColourHSL WaterParameters::m_extinctionOpaqueWaterColourOverride = ColourHSL(0.616, 0.616, 0.616);

    // 0x103bc0530
    std::array<WaterNormalMapParams, 3ul> WaterParameters::m_normalMapMacroParamsOverride;

    // 0x103bc05a8
    std::array<WaterNormalMapParams, 3ul> WaterParameters::m_normalMapParamsOverride;

    // 0x103bc0620, set at startup by ___cxx_global_var_init.76
    ImVec4 WaterParameters::m_waterFeatureFlags = ImVec4(1.0, 1.0, 1.0, 1.0);

    // 0x100123da0: WaterParameters::GetEmissiveMapTexutre() const has the same machine code as oldscape::LoginManager::GetDevCredentialsFilename()

    // 0x1004ab8a0: WaterParameters::GetFoamTexture() const has the same machine code as game::EnvironmentOverride::GetVolumetricOverrides() const

    // 0x1004c69a0: WaterParameters::GetEmissiveMapMaterialScale() const has the same machine code as game::WaterType::GetEmissiveFlowRotationDegrees() const

    // 0x100920140
    uint8_t[16] WaterParameters::GetWaterNormalMapTextureScalesFlowNoiseScale() const {
        uint8_t auVar2[16];

        uint64_t uVar1 = field_264;
        if (m_overrideEnabled != '\0') {
            uVar1 = (((uint64_t)m_noiseFlowOverride << 32) | (uint32_t)((int)uVar1));
        }
        auVar2._8_8_ = uVar1;
        auVar2._0_8_ = field_256;
        return auVar2;
    }

    // 0x100920180
    void WaterParameters::GetFeatureFlags() {
        uint8_t auVar2[16];

        uint64_t uVar1 = reinterpret_cast<const uint64_t*>(&m_waterFeatureFlags)[1];
        if (m_overrideEnabled != '\0') {
            uVar1 = (((uint64_t)m_waterSpecularInheritAlbedoOverride << 32) |
                     (uint32_t)((int)reinterpret_cast<const uint64_t*>(&m_waterFeatureFlags)[1]));
        }
        auVar2._8_8_ = uVar1;
        auVar2._0_8_ = m_waterFeatureFlags;
        return auVar2;
    }

    // 0x1009201c0
    float WaterParameters::GetWaterSpecularShininess() const {
        float* pfVar1 = (float*)&m_waterSpecularShininessOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_waterSpecularShininess;
        }
        return *pfVar1;
    }

    // 0x1009201f0
    float WaterParameters::GetWaterSpecularPower() const {
        float* pfVar1 = (float*)&m_waterSpecularPowerOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_waterSpecularPower;
        }
        return *pfVar1;
    }

    // 0x100920220
    float WaterParameters::GetFresnelBias() const {
        float* pfVar1 = (float*)&m_fresnelBiasOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_fresnelBias;
        }
        return *pfVar1;
    }

    // 0x100920730
    uint8_t* WaterParameters::GetEmissiveColour() const {
        uint8_t* puVar1 = &m_emissiveColourOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = &field_396;
        }
        return puVar1;
    }

    // 0x100920750
    float WaterParameters::GetEmissiveSource() const {
        float* pfVar1 = (float*)&m_emissiveSourceOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveSource;
        }
        return *pfVar1;
    }

    // 0x100920780
    float WaterParameters::GetEmissiveScale() const {
        float* pfVar1 = (float*)&m_emissiveScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveScale;
        }
        return *pfVar1;
    }

    // 0x1009207b0
    float WaterParameters::GetEmissiveMapRefractionDepth() const {
        float* pfVar1 = (float*)&m_emissiveMapRefractionDepthOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveMapRefractionDepth;
        }
        return *pfVar1;
    }

    // 0x1009207f0
    uint64_t* WaterParameters::GetEmissiveUVScale() const {
        uint64_t* puVar1 = &m_emissiveUVScaleOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = (uint64_t*)&field_388;
        }
        return puVar1;
    }

    // 0x100920810
    float WaterParameters::GetEmissiveFlowSpeed() const {
        float* pfVar1 = (float*)&m_emissiveFlowSpeedOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveFlowSpeed;
        }
        return *pfVar1;
    }

    // 0x100920840
    float WaterParameters::GetEmissiveFlowRotationDegrees() const {
        float* pfVar1 = (float*)&m_emissiveFlowRotationDegreesOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveFlowRotationDegrees;
        }
        return *pfVar1;
    }

    // 0x100920870
    char WaterParameters::GetEmissiveUVMode() const {
        char* pcVar1 = &m_forceFlowAlignedEmissiveUVOverride;
        if (m_overrideEnabled == '\0') {
            pcVar1 = &m_emissiveUVMode;
        }
        return *pcVar1;
    }

    // 0x1009208a0
    float WaterParameters::GetEmissiveBlend() const {
        float* pfVar1 = (float*)&m_emissiveBlendOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveBlend;
        }
        return *pfVar1;
    }

    // 0x100920a60
    uint8_t* WaterParameters::GetExtinctionRGBDepthMetres() const {
        uint8_t* puVar1 = &m_extinctionRGBDepthMetresOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = &field_436;
        }
        return puVar1;
    }

    // 0x100920a80
    uint64_t WaterParameters::GetExtinctionOpaqueWaterColour() const {
        uint64_t* puVar1 = &m_extinctionOpaqueWaterColourOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = &field_448;
        }
        return *puVar1;
    }

    // 0x100920ab0
    float WaterParameters::GetExtinctionVisibilityMetres() const {
        float* pfVar1 = (float*)&m_extinctionVisibilityMetresOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_extinctionVisibilityMetres;
        }
        return *pfVar1;
    }

    // 0x100920c90
    float WaterParameters::GetWaterFoamScale() const {
        float* pfVar1 = (float*)&m_waterFoamScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_waterFoamScale;
        }
        return *pfVar1;
    }

    // 0x100920cc0
    float WaterParameters::GetWaterDepthFoam() const {
        float* pfVar1 = (float*)&m_waterDepthFoamOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_waterDepthFoam;
        }
        return *pfVar1;
    }

    // 0x1009216f0
    void WaterParameters::GetNormalMapParams(unsigned long arg1) const {
        if (m_overrideEnabled != '\0') {
            this = (WaterParameters*)&m_normalMapParamsOverride;
        }
        (*this)[arg1];
    }

    // 0x100921810
    void WaterParameters::GetNormalMapMacroParams(unsigned long arg1) const {
        array<WaterNormalMapParams, 3ul>* this_00 = (array<WaterNormalMapParams, 3ul>*)&field_120;
        if (m_overrideEnabled != '\0') {
            this_00 = (array<WaterNormalMapParams, 3ul>*)&m_normalMapMacroParamsOverride;
        }
        (*this_00)[arg1];
    }

    // 0x100921840
    float WaterParameters::GetStillWaterNormalStrength() const {
        float* pfVar1 = (float*)&m_stillWaterNormalStrengthOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_stillWaterNormalStrength;
        }
        return *pfVar1;
    }

    // 0x100921aa0
    void WaterParameters::$_12::operator()() const {
        new (&m_normalMapMacroParamsOverride) std::array<WaterNormalMapParams, 3ul>();
        long lVar1 = m_normalMapMacroParamsOverride[0];
        *(uint64_t*)(lVar1 + 4) = 4561245704516796416;
        *(uint32_t*)(lVar1 + 20) = 1073741824;
        *(uint32_t*)(lVar1 + 32) = 3258187776;
        lVar1 = m_normalMapMacroParamsOverride[1];
        *(uint64_t*)(lVar1 + 4) = 4575657222470421709;
        *(uint32_t*)(lVar1 + 36) = 1127481344;
        *(uint32_t*)(lVar1 + 20) = 1073741824;
        lVar1 = m_normalMapMacroParamsOverride[2];
        *(uint64_t*)(lVar1 + 4) = 4515128845357610435;
        *(uint64_t*)(lVar1 + 32) = 4728779609858113536;
    }

    // 0x100921b40
    void WaterParameters::$_13::operator()() const {
        new (&m_normalMapParamsOverride) std::array<WaterNormalMapParams, 3ul>();
        Point<float> local_28(-0.87, -1.2);
        long lVar1 = m_normalMapParamsOverride[0];
        (*((lVar1 + 16))) = local_28;
        *(uint64_t*)(lVar1 + 8) = 4503599628436688077;
        lVar1 = m_normalMapParamsOverride[1];
        *(uint32_t*)(lVar1 + 36) = 3251109888;
        *(uint64_t*)(lVar1 + 8) = 4503599628432493773;
        lVar1 = m_normalMapParamsOverride[2];
        *(uint64_t*)(lVar1 + 8) = 4503599628432493773;
        *(uint64_t*)(lVar1 + 32) = 4740038611074023424;
    }

    // 0x100921bf0
    void WaterParameters::ClearTextures() {
        unsigned long arg1 = 0;
        do {
            ((shared_ptr<render::Texture>*)field_304[arg1])->reset();
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        field_352.reset();
    }

    // 0x100921c60
    float WaterParameters::GetReflectionStrength() const {
        float* pfVar1 = (float*)&m_reflectionStrengthOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_reflectionStrength;
        }
        return *pfVar1;
    }

    // 0x100921c90
    float WaterParameters::GetCausticsScale() const {
        float* pfVar1 = (float*)&m_causticsScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsScale;
        }
        return *pfVar1;
    }

    // 0x100921cc0
    float WaterParameters::GetCausticsRefractionScale() const {
        float* pfVar1 = (float*)&m_causticsRefractionScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsRefractionScale;
        }
        return *pfVar1;
    }

    // 0x100921cf0
    float WaterParameters::GetCausticsDepthFadeCutoff() const {
        float* pfVar1 = (float*)&m_causticsDepthFadeCutoffOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsDepthFadeCutoff;
        }
        return *pfVar1;
    }

    // 0x100921d20
    float WaterParameters::GetCausticsDepthFadeScale() const {
        float* pfVar1 = (float*)&m_causticsDepthFadeScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsDepthFadeScale;
        }
        return *pfVar1;
    }

    // 0x100921d50
    float WaterParameters::GetCausticsEdgeFadeStart() const {
        float* pfVar1 = (float*)&m_causticsEdgeFadeStartOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsEdgeFadeStart;
        }
        return *pfVar1;
    }

    // 0x100921d80
    float WaterParameters::GetCausticsEdgeFadeEnd() const {
        float* pfVar1 = (float*)&m_causticsEdgeFadeEndOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsEdgeFadeEnd;
        }
        return *pfVar1;
    }

    // 0x100921db0
    float WaterParameters::GetCausticsOverWaterFadeStart() const {
        float* pfVar1 = (float*)&m_causticsOverWaterFadeStartOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsOverWaterFadeStart;
        }
        return *pfVar1;
    }

    // 0x100921de0
    float WaterParameters::GetCausticsOverWaterFadeEnd() const {
        float* pfVar1 = (float*)&m_causticsOverWaterFadeEndOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsOverWaterFadeEnd;
        }
        return *pfVar1;
    }

} // namespace jag::graphics
