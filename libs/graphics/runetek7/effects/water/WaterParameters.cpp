// libs/graphics/runetek7/effects/water/WaterParameters.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WaterParameters.h"

namespace jag::graphics {
    // 0x100f444e8, 4 bytes, __data
    float WaterParameters::m_waterDepthFoamOverride = 32.0f;

    // 0x100f444ec, 4 bytes, __data
    float WaterParameters::m_waterFoamScaleOverride = 1.0f;

    // 0x100f444f0, 4 bytes, __data
    float WaterParameters::m_reflectionStrengthOverride = 1.0f;

    // 0x100f444f4, 4 bytes, __data
    float WaterParameters::m_waterSpecularShininessOverride = 1.0f;

    // 0x100f444f8, 4 bytes, __data
    float WaterParameters::m_waterSpecularPowerOverride = 800.0f;

    // 0x100f444fc, 4 bytes, __data
    WaterParameters::m_stillWaterNormalStrengthOverride = 1050253722;

    // 0x100f44500, 4 bytes, __data
    float WaterParameters::m_noiseFlowOverride = 0.25f;

    // 0x100f44510, 4 bytes, __data
    float WaterParameters::m_emissiveSourceOverride = 1.0f;

    // 0x100f44514, 4 bytes, __data
    float WaterParameters::m_emissiveScaleOverride = 1.0f;

    // 0x100f44520, 4 bytes, __data
    float WaterParameters::m_emissiveMapRefractionDepthOverride = 1.0f;

    // 0x100f44524, 4 bytes, __data
    float WaterParameters::m_emissiveFlowSpeedOverride = 1.0f;

    // 0x100f44528, 4 bytes, __data
    WaterParameters::m_forceFlowAlignedEmissiveUVOverride = 1;

    // 0x100f4452c, 4 bytes, __data
    float WaterParameters::m_extinctionVisibilityMetresOverride = 50.0f;

    // 0x100f44530, 4 bytes, __data
    float WaterParameters::m_causticsScaleOverride = 5.0f;

    // 0x100f44534, 4 bytes, __data
    WaterParameters::m_causticsRefractionScaleOverride = 1043878380;

    // 0x100f44538, 4 bytes, __data
    float WaterParameters::m_causticsDepthFadeCutoffOverride = 2400.0f;

    // 0x100f4453c, 4 bytes, __data
    float WaterParameters::m_causticsDepthFadeScaleOverride = 3.0f;

    // 0x100f44540, 4 bytes, __data
    float WaterParameters::m_causticsEdgeFadeStartOverride = 100.0f;

    // 0x100f44544, 4 bytes, __data
    float WaterParameters::m_causticsEdgeFadeEndOverride = 200.0f;

    // 0x100f44548, 4 bytes, __data
    float WaterParameters::m_causticsOverWaterFadeStartOverride = 700.0f;

    // 0x100f4454c, 4 bytes, __data
    float WaterParameters::m_causticsOverWaterFadeEndOverride = 2300.0f;

    // 0x103bc04f0, 4 bytes, __common; zero-initialised
    WaterParameters::m_overrideEnabled;

    // 0x103bc04f4, 4 bytes, __common; zero-initialised
    WaterParameters::m_waterSpecularInheritAlbedoOverride;

    // 0x103bc04f8, 4 bytes, __common; zero-initialised
    WaterParameters::m_fresnelBiasOverride;

    // 0x103bc04fc, 12 bytes, __common; zero-initialised
    WaterParameters::m_emissiveColourOverride;

    // 0x103bc0508, 8 bytes, __common; set at startup by ___cxx_global_var_init.71
    WaterParameters::m_emissiveUVScaleOverride = *(undefined8*)PTR_ONE_100ee66a0;

    // 0x103bc0510, 4 bytes, __common; zero-initialised
    WaterParameters::m_emissiveFlowRotationDegreesOverride;

    // 0x103bc0514, 4 bytes, __common; zero-initialised
    WaterParameters::m_emissiveBlendOverride;

    // 0x103bc0518, 12 bytes, __common; set at startup by ___cxx_global_var_init.72
    math::ColourHSL WaterParameters::m_extinctionRGBDepthMetresOverride = ColourHSL(45.0, 75.0, 300.0);

    // 0x103bc0524, 12 bytes, __common; set at startup by ___cxx_global_var_init.73
    math::ColourHSL WaterParameters::m_extinctionOpaqueWaterColourOverride = ColourHSL(0.616, 0.616, 0.616);

    // 0x103bc0530, 120 bytes, __common; zero-initialised
    WaterParameters::m_normalMapMacroParamsOverride;

    // 0x103bc05a8, 120 bytes, __common; zero-initialised
    WaterParameters::m_normalMapParamsOverride;

    // 0x103bc0620, 16 bytes, __common; set at startup by ___cxx_global_var_init.76
    ImVec4 WaterParameters::m_waterFeatureFlags = ImVec4(1.0, 1.0, 1.0, 1.0);

    // 0x100123da0: the linker folded this into oldscape::LoginManager::GetDevCredentialsFilename(), which has identical code
    WaterParameters::GetEmissiveMapTexutre() const;

    // 0x1004ab8a0: the linker folded this into game::EnvironmentOverride::GetVolumetricOverrides() const, which has identical code
    WaterParameters::GetFoamTexture() const;

    // 0x1004c69a0: the linker folded this into game::WaterType::GetEmissiveFlowRotationDegrees() const, which has identical code
    float WaterParameters::GetEmissiveMapMaterialScale() const;

    // 0x100920140, 64 bytes, placed by class name and debug map
    // WaterParameters::GetWaterNormalMapTextureScalesFlowNoiseScale() const
    undefined1[16] WaterParameters::GetWaterNormalMapTextureScalesFlowNoiseScale() {
        undefined8 uVar1;
        undefined1 auVar2[16];

        uVar1 = field_264;
        if (m_overrideEnabled != '\0') {
            uVar1 = CONCAT44(m_noiseFlowOverride, (int)uVar1);
        }
        auVar2._8_8_ = uVar1;
        auVar2._0_8_ = field_256;
        return auVar2;
    }

    // 0x100920180, 64 bytes, placed by class name and debug map
    // WaterParameters::GetFeatureFlags()
    undefined1[16] WaterParameters::GetFeatureFlags() {
        undefined8 uVar1;
        undefined1 auVar2[16];

        uVar1 = DAT_103bc0628;
        if (m_overrideEnabled != '\0') {
            uVar1 = CONCAT44(m_waterSpecularInheritAlbedoOverride, (int)DAT_103bc0628);
        }
        auVar2._8_8_ = uVar1;
        auVar2._0_8_ = m_waterFeatureFlags;
        return auVar2;
    }

    // 0x1009201c0, 48 bytes, placed by class name and debug map
    // WaterParameters::GetWaterSpecularShininess() const
    float WaterParameters::GetWaterSpecularShininess() {
        float* pfVar1;

        pfVar1 = (float*)&m_waterSpecularShininessOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_waterSpecularShininess;
        }
        return *pfVar1;
    }

    // 0x1009201f0, 48 bytes, placed by class name and debug map
    // WaterParameters::GetWaterSpecularPower() const
    float WaterParameters::GetWaterSpecularPower() {
        float* pfVar1;

        pfVar1 = (float*)&m_waterSpecularPowerOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_waterSpecularPower;
        }
        return *pfVar1;
    }

    // 0x100920220, 48 bytes, placed by class name and debug map
    // WaterParameters::GetFresnelBias() const
    float WaterParameters::GetFresnelBias() {
        float* pfVar1;

        pfVar1 = (float*)&m_fresnelBiasOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_fresnelBias;
        }
        return *pfVar1;
    }

    // 0x100920730, 32 bytes, placed by class name
    // WaterParameters::GetEmissiveColour() const
    undefined1* WaterParameters::GetEmissiveColour() {
        undefined1* puVar1;

        puVar1 = &m_emissiveColourOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = &field_396;
        }
        return puVar1;
    }

    // 0x100920750, 48 bytes, placed by class name
    // WaterParameters::GetEmissiveSource() const
    float WaterParameters::GetEmissiveSource() {
        float* pfVar1;

        pfVar1 = (float*)&m_emissiveSourceOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveSource;
        }
        return *pfVar1;
    }

    // 0x100920780, 48 bytes, placed by class name
    // WaterParameters::GetEmissiveScale() const
    float WaterParameters::GetEmissiveScale() {
        float* pfVar1;

        pfVar1 = (float*)&m_emissiveScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveScale;
        }
        return *pfVar1;
    }

    // 0x1009207b0, 48 bytes, placed by class name
    // WaterParameters::GetEmissiveMapRefractionDepth() const
    float WaterParameters::GetEmissiveMapRefractionDepth() {
        float* pfVar1;

        pfVar1 = (float*)&m_emissiveMapRefractionDepthOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveMapRefractionDepth;
        }
        return *pfVar1;
    }

    // 0x1009207f0, 32 bytes, placed by class name
    // WaterParameters::GetEmissiveUVScale() const
    undefined8* WaterParameters::GetEmissiveUVScale() {
        undefined8* puVar1;

        puVar1 = &m_emissiveUVScaleOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = (undefined8*)&field_388;
        }
        return puVar1;
    }

    // 0x100920810, 48 bytes, placed by class name
    // WaterParameters::GetEmissiveFlowSpeed() const
    float WaterParameters::GetEmissiveFlowSpeed() {
        float* pfVar1;

        pfVar1 = (float*)&m_emissiveFlowSpeedOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveFlowSpeed;
        }
        return *pfVar1;
    }

    // 0x100920840, 48 bytes, placed by class name
    // WaterParameters::GetEmissiveFlowRotationDegrees() const
    float WaterParameters::GetEmissiveFlowRotationDegrees() {
        float* pfVar1;

        pfVar1 = (float*)&m_emissiveFlowRotationDegreesOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveFlowRotationDegrees;
        }
        return *pfVar1;
    }

    // 0x100920870, 48 bytes, placed by class name
    // WaterParameters::GetEmissiveUVMode() const
    undefined1 WaterParameters::GetEmissiveUVMode() {
        undefined1* puVar1;

        puVar1 = &m_forceFlowAlignedEmissiveUVOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = &m_emissiveUVMode;
        }
        return *puVar1;
    }

    // 0x1009208a0, 48 bytes, placed by class name
    // WaterParameters::GetEmissiveBlend() const
    float WaterParameters::GetEmissiveBlend() {
        float* pfVar1;

        pfVar1 = (float*)&m_emissiveBlendOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_emissiveBlend;
        }
        return *pfVar1;
    }

    // 0x100920a60, 32 bytes, placed by class name
    // WaterParameters::GetExtinctionRGBDepthMetres() const
    undefined1* WaterParameters::GetExtinctionRGBDepthMetres() {
        undefined1* puVar1;

        puVar1 = &m_extinctionRGBDepthMetresOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = &field_436;
        }
        return puVar1;
    }

    // 0x100920a80, 48 bytes, placed by class name
    // WaterParameters::GetExtinctionOpaqueWaterColour() const
    undefined8 WaterParameters::GetExtinctionOpaqueWaterColour() {
        undefined8* puVar1;

        puVar1 = &m_extinctionOpaqueWaterColourOverride;
        if (m_overrideEnabled == '\0') {
            puVar1 = &field_448;
        }
        return *puVar1;
    }

    // 0x100920ab0, 48 bytes, placed by class name
    // WaterParameters::GetExtinctionVisibilityMetres() const
    float WaterParameters::GetExtinctionVisibilityMetres() {
        float* pfVar1;

        pfVar1 = (float*)&m_extinctionVisibilityMetresOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_extinctionVisibilityMetres;
        }
        return *pfVar1;
    }

    // 0x100920c90, 48 bytes, placed by class name
    // WaterParameters::GetWaterFoamScale() const
    float WaterParameters::GetWaterFoamScale() {
        float* pfVar1;

        pfVar1 = (float*)&m_waterFoamScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_waterFoamScale;
        }
        return *pfVar1;
    }

    // 0x100920cc0, 48 bytes, placed by class name
    // WaterParameters::GetWaterDepthFoam() const
    float WaterParameters::GetWaterDepthFoam() {
        float* pfVar1;

        pfVar1 = (float*)&m_waterDepthFoamOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_waterDepthFoam;
        }
        return *pfVar1;
    }

    // 0x1009216f0, 32 bytes, placed by class name
    // WaterParameters::GetNormalMapParams(unsigned long) const
    void WaterParameters::GetNormalMapParams(ulong param_1) {
        if (m_overrideEnabled != '\0') {
            this = (WaterParameters*)&m_normalMapParamsOverride;
        }
        std::array<WaterNormalMapParams, 3ul>::operator[]((array<WaterNormalMapParams, 3ul>*)this, param_1);
    }

    // 0x100921810, 48 bytes, placed by class name
    // WaterParameters::GetNormalMapMacroParams(unsigned long) const
    void WaterParameters::GetNormalMapMacroParams(ulong param_1) {
        array<WaterNormalMapParams, 3ul>* this_00;

        this_00 = (array<WaterNormalMapParams, 3ul>*)&field_120;
        if (m_overrideEnabled != '\0') {
            this_00 = (array<WaterNormalMapParams, 3ul>*)&m_normalMapMacroParamsOverride;
        }
        std::array<WaterNormalMapParams, 3ul>::operator[](this_00, param_1);
    }

    // 0x100921840, 48 bytes, placed by class name
    // WaterParameters::GetStillWaterNormalStrength() const
    float WaterParameters::GetStillWaterNormalStrength() {
        float* pfVar1;

        pfVar1 = (float*)&m_stillWaterNormalStrengthOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_stillWaterNormalStrength;
        }
        return *pfVar1;
    }

    // 0x100921aa0, 160 bytes, placed by class name
    // WaterParameters::$_12::operator()() const
    /* WaterParameters::$_12::TEMPNAMEPLACEHOLDERVALUE() const */

    void WaterParameters::$_12::operator()() {
        long lVar1;

        new (&m_normalMapMacroParamsOverride) std::array<WaterNormalMapParams, 3ul>();
        lVar1 = std::array<WaterNormalMapParams, 3ul>::operator[](
            (array<WaterNormalMapParams, 3ul>*)&m_normalMapMacroParamsOverride, 0);
        *(undefined8*)(lVar1 + 4) = 4561245704516796416;
        *(undefined4*)(lVar1 + 20) = 1073741824;
        *(undefined4*)(lVar1 + 32) = 3258187776;
        lVar1 = std::array<WaterNormalMapParams, 3ul>::operator[](
            (array<WaterNormalMapParams, 3ul>*)&m_normalMapMacroParamsOverride, 1);
        *(undefined8*)(lVar1 + 4) = 4575657222470421709;
        *(undefined4*)(lVar1 + 36) = 1127481344;
        *(undefined4*)(lVar1 + 20) = 1073741824;
        lVar1 = std::array<WaterNormalMapParams, 3ul>::operator[](
            (array<WaterNormalMapParams, 3ul>*)&m_normalMapMacroParamsOverride, 2);
        *(undefined8*)(lVar1 + 4) = 4515128845357610435;
        *(undefined8*)(lVar1 + 32) = 4728779609858113536;
    }

    // 0x100921b40, 176 bytes, placed by class name
    // WaterParameters::$_13::operator()() const
    /* WaterParameters::$_13::TEMPNAMEPLACEHOLDERVALUE() const */

    void WaterParameters::$_13::operator()() {
        long lVar1;
        Point<float> local_28[8];

        new (&m_normalMapParamsOverride) std::array<WaterNormalMapParams, 3ul>();
        math::Point<float>::Point(local_28, -0.87, -1.2);
        lVar1 = std::array<WaterNormalMapParams, 3ul>::operator[](
            (array<WaterNormalMapParams, 3ul>*)&m_normalMapParamsOverride, 0);
        math::Vector2T<float>::operator=((Vector2T<float>*)(lVar1 + 16), (Vector2T*)local_28);
        *(undefined8*)(lVar1 + 8) = 4503599628436688077;
        lVar1 = std::array<WaterNormalMapParams, 3ul>::operator[](
            (array<WaterNormalMapParams, 3ul>*)&m_normalMapParamsOverride, 1);
        *(undefined4*)(lVar1 + 36) = 3251109888;
        *(undefined8*)(lVar1 + 8) = 4503599628432493773;
        lVar1 = std::array<WaterNormalMapParams, 3ul>::operator[](
            (array<WaterNormalMapParams, 3ul>*)&m_normalMapParamsOverride, 2);
        *(undefined8*)(lVar1 + 8) = 4503599628432493773;
        *(undefined8*)(lVar1 + 32) = 4740038611074023424;
    }

    // 0x100921bf0, 96 bytes, placed by class name
    // WaterParameters::ClearTextures()
    void WaterParameters::ClearTextures() {
        ulong uVar1;

        uVar1 = 0;
        do {
            std::array<shared_ptr<render::Texture>, 3ul>::operator[](
                (array<shared_ptr<render::Texture>, 3ul>*)&field_304, uVar1);
            shared_ptr<render::Texture>::reset();
            uVar1 = uVar1 + 1;
        } while (uVar1 != 3);
        shared_ptr<render::Texture>::reset();
    }

    // 0x100921c60, 48 bytes, placed by class name
    // WaterParameters::GetReflectionStrength() const
    float WaterParameters::GetReflectionStrength() {
        float* pfVar1;

        pfVar1 = (float*)&m_reflectionStrengthOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_reflectionStrength;
        }
        return *pfVar1;
    }

    // 0x100921c90, 48 bytes, placed by class name
    // WaterParameters::GetCausticsScale() const
    float WaterParameters::GetCausticsScale() {
        float* pfVar1;

        pfVar1 = (float*)&m_causticsScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsScale;
        }
        return *pfVar1;
    }

    // 0x100921cc0, 48 bytes, placed by class name
    // WaterParameters::GetCausticsRefractionScale() const
    float WaterParameters::GetCausticsRefractionScale() {
        float* pfVar1;

        pfVar1 = (float*)&m_causticsRefractionScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsRefractionScale;
        }
        return *pfVar1;
    }

    // 0x100921cf0, 48 bytes, placed by class name
    // WaterParameters::GetCausticsDepthFadeCutoff() const
    float WaterParameters::GetCausticsDepthFadeCutoff() {
        float* pfVar1;

        pfVar1 = (float*)&m_causticsDepthFadeCutoffOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsDepthFadeCutoff;
        }
        return *pfVar1;
    }

    // 0x100921d20, 48 bytes, placed by class name
    // WaterParameters::GetCausticsDepthFadeScale() const
    float WaterParameters::GetCausticsDepthFadeScale() {
        float* pfVar1;

        pfVar1 = (float*)&m_causticsDepthFadeScaleOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsDepthFadeScale;
        }
        return *pfVar1;
    }

    // 0x100921d50, 48 bytes, placed by class name
    // WaterParameters::GetCausticsEdgeFadeStart() const
    float WaterParameters::GetCausticsEdgeFadeStart() {
        float* pfVar1;

        pfVar1 = (float*)&m_causticsEdgeFadeStartOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsEdgeFadeStart;
        }
        return *pfVar1;
    }

    // 0x100921d80, 48 bytes, placed by class name
    // WaterParameters::GetCausticsEdgeFadeEnd() const
    float WaterParameters::GetCausticsEdgeFadeEnd() {
        float* pfVar1;

        pfVar1 = (float*)&m_causticsEdgeFadeEndOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsEdgeFadeEnd;
        }
        return *pfVar1;
    }

    // 0x100921db0, 48 bytes, placed by class name
    // WaterParameters::GetCausticsOverWaterFadeStart() const
    float WaterParameters::GetCausticsOverWaterFadeStart() {
        float* pfVar1;

        pfVar1 = (float*)&m_causticsOverWaterFadeStartOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsOverWaterFadeStart;
        }
        return *pfVar1;
    }

    // 0x100921de0, 48 bytes, placed by class name
    // WaterParameters::GetCausticsOverWaterFadeEnd() const
    float WaterParameters::GetCausticsOverWaterFadeEnd() {
        float* pfVar1;

        pfVar1 = (float*)&m_causticsOverWaterFadeEndOverride;
        if (m_overrideEnabled == '\0') {
            pfVar1 = &m_causticsOverWaterFadeEnd;
        }
        return *pfVar1;
    }

    // 0x100929eb0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.71
    void ___cxx_global_var_init_71() {
        WaterParameters::m_emissiveUVScaleOverride = *(undefined8*)PTR_ONE_100ee66a0;
    }

    // 0x100929ed0, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.72
    void ___cxx_global_var_init_72() {
        new (&WaterParameters::m_extinctionRGBDepthMetresOverride) math::ColourHSL(45.0, 75.0, 300.0);
    }

    // 0x100929f00, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.73
    void ___cxx_global_var_init_73() {
        new (&WaterParameters::m_extinctionOpaqueWaterColourOverride) math::ColourHSL(0.616, 0.616, 0.616);
    }

    // 0x100929f40, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        new (&WaterParameters::m_waterFeatureFlags) ImVec4(1.0, 1.0, 1.0, 1.0);
    }

} // namespace jag::graphics
