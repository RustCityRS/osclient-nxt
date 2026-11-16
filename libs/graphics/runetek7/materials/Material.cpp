// libs/graphics/runetek7/materials/Material.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Material.h"

namespace jag::graphics {
    // 0x100009720: Material::GetEnvironmentMaterialID() const has the same machine code as BaseApp::GetExitCode()

    // 0x100023af0: Material::IsValid() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x100024170: Material::GetSize() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100061e30: Material::GetMetalnessRoughnessMapSize() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x100064240: Material::GetSpecularExponent() const has the same machine code as SunlightOptions::GetSunIntensity() const

    // 0x100073980: Material::GetID() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9a40: Material::GetMetalnessRoughnessMapID() const has the same machine code as oldscape::configdecoder::DBRowType::GetDbTableId() const

    // 0x100102f90: Material::GetWrapV() const has the same machine code as oldscape::rs2lib::InputField::GetCaretIndex() const

    // 0x1001117e0: Material::GetDiffuseMapID() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x100159b70: Material::GetAlphaTestThreshold() const has the same machine code as oldscape::rs2lib::InputField::GetEnterAction() const

    // 0x10016b490: Material::GetViewportMapID() const has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetMinMapZ() const

    // 0x1001b8a60, the same machine code as oldscape::OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const
    uint8_t* Material::GetHideFacesMode() const {
        return m_pHideFacesMode;
    }

    // 0x1001be5d0: Material::GetNormalEmissiveMapSize() const has the same machine code as SunlightOptions::GetShadowQuality() const

    // 0x1001c21e0: Material::HasCubemap() const has the same machine code as oldscape::MutationTracked<EffectList>::IsDirty() const

    // 0x1001c4630: Material::HasHighlighting() const has the same machine code as oldscape::dash3d::NXTRenderCanvas::Get2DOnlyFrame() const

    // 0x1001fb280: Material::GetViewportMapUVScaleAndAnim() const has the same machine code as http::CRMData::GetActionInfo() const

    // 0x100293ee0: Material::GetDiffuseAlphaMapID() const has the same machine code as hal::audio::AudioRenderer::GetState() const

    // 0x1003cf2a0: Material::GetHDRNormalMapID() const has the same machine code as game::WorldMapDefaults::GetDropShadowColourRGBA() const

    // 0x100429880: Material::GetDiffuseAlphaMapSize() const has the same machine code as Headbar::GetDuration() const

    // 0x100429b10: Material::GetEmissiveSourceColourARGB() const has the same machine code as game::StaticPointLight::GetRGB() const

    // 0x100429c00: Material::GetMaterialAnimationH() const has the same machine code as game::StaticPointLight::GetShadowStrength() const

    // 0x100445750: Material::IsRT7() const has the same machine code as FaceGroupRenderMasks::HasCustomisationMask() const

    // 0x1004491e0: Material::HasDiffuseMap() const has the same machine code as math::Sphere2D::IsValid() const

    // 0x1004c67a0: Material::GetFresnelExponent() const has the same machine code as game::WaterType::GetFoamMaterialScale() const

    // 0x10053c040: Material::GetDefaultNonMetalSpecular() const has the same machine code as game::Cutscene2D::Scene::GetPlaybackEnd() const

    // 0x10064c760: Material::GetWrapU() const has the same machine code as game::LocationContainer::GetConfigProvider() const

    // 0x100828750: Material::GetEmissiveScale() const has the same machine code as ModularParticleEmitterTemplate::GetWarmupTime() const

    // 0x10082a9b0: Material::GetNormalEmissiveMapID() const has the same machine code as ModularParticleSystemTemplate::GetRenderPassBits() const

    // 0x1008c6c40
    Material::Material() : m_valid(0) {
        field_1 = '\0';
        m_specularExponent = 0.0;
        m_diffuseAlphaMapID = -1;
        m_normalEmissiveMapID = 4294967295;
        m_metalnessRoughnessMapID = 4294967295;
        m_diffuseAlphaMapSize = 0;
        m_normalEmissiveMapSize = 0;
        m_metalnessRoughnessMapSize = 0;
        m_emissiveSourceColourARGB = 0;
        m_emissiveScale = 1065353216;
        m_fresnelExponent = 0.0;
        m_defaultNonMetalSpecular = 0;
        field_80 = 1.0;
        m_pHideFacesMode = HideFacesMode::NEVER;
        new (&field_112) ImVec4(0.0, 0.0, 0.0, 0.0);
        m_refractionAmount = 0;
        m_refractionIndex = 0;
        m_refractionDepthBias = 0;
    }

    // 0x1008c6cd0
    void Material::Initialise(int arg1, const MaterialRaw& materialRaw) {
        bool bVar1;
        int iVar2;

        m_valid = 1;
        field_1 = materialRaw.field_8;
        m_iD = arg1;
        char cVar3 = IsRT7();
        if (!cVar3) {
            m_size = materialRaw.field_12;
            m_hasDiffuseMap = materialRaw.field_16;
            m_hasNormalMap = materialRaw.field_17;
            field_14 = materialRaw.field_18;
            m_hasHDRMap = materialRaw.field_19;
            cVar3 = materialRaw.field_20;
            field_16 = cVar3;
            iVar2 = materialRaw.field_44;
            m_hasEmissiveMap = iVar2 == 6;
            m_hasSpecularMap = iVar2 == 1;
            m_diffuseMapID = materialRaw.field_24;
            m_hDRNormalMapID = materialRaw.field_28;
            m_globalEnvironmentMapped = materialRaw.field_32;
            field_29 = materialRaw.field_33;
            m_specularExponent = (float)materialRaw.field_36;
            m_hasForcedTextures = materialRaw.field_65 ^ 1;
            m_legacyMaterial = materialRaw.field_40;
            m_legacyWhiteness = materialRaw.field_67;
            m_legacyBrightness = materialRaw.field_66;
            bVar1 = materialRaw.field_64;
            field_39 = bVar1;
            if (bVar1 != false) {
                m_pHideFacesMode = HideFacesMode::TEXTURES_ON;
            }
            if ((m_alphaMode != AlphaMode::ALPHA_OPAQUE) && ((iVar2 == 1 || (cVar3)))) {
                m_alphaMode = AlphaMode::ALPHA_OPAQUE;
            }
        } else {
            m_diffuseAlphaMapID = materialRaw.field_76;
            m_normalEmissiveMapID = materialRaw.field_80;
            m_metalnessRoughnessMapID = materialRaw.field_84;
            m_diffuseAlphaMapSize = materialRaw.field_88;
            m_normalEmissiveMapSize = materialRaw.field_92;
            m_metalnessRoughnessMapSize = materialRaw.field_96;
            m_emissiveSourceColourARGB = materialRaw.field_104;
            m_emissiveScale = materialRaw.field_108;
            m_specularScale = materialRaw.field_164;
            m_fresnelExponent = (float)materialRaw.field_112;
            m_defaultNonMetalSpecular = materialRaw.field_116;
            field_80 = (float)materialRaw.field_100;
            m_pHideFacesMode = materialRaw.field_120;
            m_hasForcedTextures = materialRaw.field_72;
        }
        m_materialAnimationH = materialRaw.field_128;
        m_materialAnimationV = materialRaw.field_132;
        m_environmentMaterialID = materialRaw.field_136;
        m_viewportMapID = materialRaw.field_140;
        field_112 = materialRaw.field_144;
        m_unlit = materialRaw.field_160;
        m_shadowCaster = materialRaw.field_161;
        m_shadowReceiver = materialRaw.field_162;
        m_specularScale = materialRaw.field_164;
        m_normalScale = materialRaw.field_168;
        m_refractionAmount = materialRaw.field_172;
        m_refractionIndex = materialRaw.field_176;
        m_refractionDepthBias = materialRaw.field_180;
        m_blendMode = materialRaw.field_184;
        m_alphaMode = materialRaw.field_192;
        m_alphaTestThreshold = materialRaw.field_200;
        m_pWrapU = materialRaw.field_208;
        m_pWrapV = materialRaw.field_216;
        m_hasHighlighting = materialRaw.field_226;
        m_hasTransparencyCutout = materialRaw.field_227;
        field_208 = math::RunetekColour::HSLToRGB(materialRaw.field_224);
    }

    // 0x1008c6f80
    void Material::InitialiseDummy(bool arg1) {
        uint32_t in_register_00000031;

        m_valid = 1;
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            m_iD = 4294967295;
            m_size = 8;
            field_1 = '\0';
            m_hasDiffuseMap = '\0';
            m_hasNormalMap = 0;
            field_14 = 0;
            m_hasHDRMap = 0;
            m_hasHDRMap = 0;
            field_16 = '\0';
            m_hasEmissiveMap = false;
            m_hasSpecularMap = false;
            m_diffuseMapID = 4294967295;
            m_hDRNormalMapID = 4294967294;
            m_environmentMaterialID = 4294967294;
            m_globalEnvironmentMapped = 0;
            field_29 = 0;
            m_specularExponent = 0.0;
            m_legacyMaterial = 0;
            m_legacyWhiteness = 0;
            m_legacyBrightness = 0;
            field_39 = '\0';
        } else {
            m_iD = 4294967293;
            field_1 = '\x01';
            m_diffuseAlphaMapID = -1;
            m_normalEmissiveMapID = 4294967294;
            m_metalnessRoughnessMapID = 4294967293;
            m_diffuseAlphaMapSize = 8;
            m_normalEmissiveMapSize = 8;
            m_metalnessRoughnessMapSize = 8;
            m_emissiveSourceColourARGB = 0;
            m_emissiveScale = 1065353216;
            m_specularScale = 1065353216;
            field_80 = 0.0;
        }
        m_viewportMapID = 4294967295;
        m_materialAnimationH = 0;
        m_materialAnimationV = 0;
        *(uint32_t*)((long)&m_materialAnimationV + 3) = 0;
        m_specularScale = 1065353216;
        m_normalScale = 1065353216;
        m_refractionAmount = 0;
        m_refractionIndex = 1065353216;
        m_refractionDepthBias = 0;
        m_blendMode = BlendMode::NORMAL;
        m_alphaMode = AlphaMode::ALPHA_OPAQUE;
        m_alphaTestThreshold = 255;
        uint8_t* puVar1 = graphicutils::TextureWrapMode::CLAMP;
        m_pWrapU = graphicutils::TextureWrapMode::CLAMP;
        m_pWrapV = puVar1;
        m_pHideFacesMode = HideFacesMode::NEVER;
        m_hasForcedTextures = 0;
        field_208 = 0;
        m_hasHighlighting = 0;
        m_hasTransparencyCutout = 0;
    }

    // 0x1008c70b0
    void Material::InitialiseLoading(bool arg1) {
        InitialiseDummy(arg1);
        m_iD = (unsigned int)(uint8_t)~arg1 * 2 | 4294967292;
        m_diffuseMapID = 4294967292;
    }

} // namespace jag::graphics
