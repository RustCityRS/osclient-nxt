// libs/graphics/runetek7/materials/Material.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Material.h"

namespace jag::graphics {
    // 0x100009720: the linker folded this into BaseApp::GetExitCode(), which has identical code
    Material::GetEnvironmentMaterialID() const;

    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    Material::IsValid() const;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint Material::GetSize() const;

    // 0x100061e30: the linker folded this into render::RenderStats::GetTriangleCount() const, which has identical code
    Material::GetMetalnessRoughnessMapSize() const;

    // 0x100064240: the linker folded this into SunlightOptions::GetSunIntensity() const, which has identical code
    float Material::GetSpecularExponent() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint Material::GetID() const;

    // 0x1000b9a40: the linker folded this into oldscape::configdecoder::DBRowType::GetDbTableId() const, which has identical code
    Material::GetMetalnessRoughnessMapID() const;

    // 0x100102f90: the linker folded this into oldscape::rs2lib::InputField::GetCaretIndex() const, which has identical code
    Material::GetWrapV() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    Material::GetDiffuseMapID() const;

    // 0x100159b70: the linker folded this into oldscape::rs2lib::InputField::GetEnterAction() const, which has identical code
    int Material::GetAlphaTestThreshold() const;

    // 0x10016b490: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetMinMapZ() const, which has identical code
    Material::GetViewportMapID() const;

    // 0x1001b8a60: the linker folded this into oldscape::OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const, which has identical code
    Material::GetHideFacesMode() const;

    // 0x1001be5d0: the linker folded this into SunlightOptions::GetShadowQuality() const, which has identical code
    Material::GetNormalEmissiveMapSize() const;

    // 0x1001c21e0: the linker folded this into oldscape::MutationTracked<EffectList>::IsDirty() const, which has identical code
    Material::HasCubemap() const;

    // 0x1001c4630: the linker folded this into oldscape::dash3d::NXTRenderCanvas::Get2DOnlyFrame() const, which has identical code
    Material::HasHighlighting() const;

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    Material::GetViewportMapUVScaleAndAnim() const;

    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    int Material::GetDiffuseAlphaMapID() const;

    // 0x1003cf2a0: the linker folded this into game::WorldMapDefaults::GetDropShadowColourRGBA() const, which has identical code
    Material::GetHDRNormalMapID() const;

    // 0x100429880: the linker folded this into Headbar::GetDuration() const, which has identical code
    Material::GetDiffuseAlphaMapSize() const;

    // 0x100429b10: the linker folded this into game::StaticPointLight::GetRGB() const, which has identical code
    int Material::GetEmissiveSourceColourARGB() const;

    // 0x100429c00: the linker folded this into game::StaticPointLight::GetShadowStrength() const, which has identical code
    Material::GetMaterialAnimationH() const;

    // 0x100445750: the linker folded this into FaceGroupRenderMasks::HasCustomisationMask() const, which has identical code
    Material::IsRT7() const;

    // 0x1004491e0: the linker folded this into math::Sphere2D::IsValid() const, which has identical code
    char Material::HasDiffuseMap() const;

    // 0x1004c67a0: the linker folded this into game::WaterType::GetFoamMaterialScale() const, which has identical code
    float Material::GetFresnelExponent() const;

    // 0x10053c040: the linker folded this into game::Cutscene2D::Scene::GetPlaybackEnd() const, which has identical code
    Material::GetDefaultNonMetalSpecular() const;

    // 0x10064c760: the linker folded this into game::LocationContainer::GetConfigProvider() const, which has identical code
    Material::GetWrapU() const;

    // 0x100828750: the linker folded this into ModularParticleEmitterTemplate::GetWarmupTime() const, which has identical code
    Material::GetEmissiveScale() const;

    // 0x10082a9b0: the linker folded this into ModularParticleSystemTemplate::GetRenderPassBits() const, which has identical code
    Material::GetNormalEmissiveMapID() const;

    // 0x1008c6c40, 128 bytes, base-object constructor, placed by class name and debug map
    // Material::Material()
    void Material::Material() {
        m_valid = 0;
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
        new (&field_112, 0.0, 0.0, 0.0, 0.0) ImVec4();
        m_refractionAmount = 0;
        m_refractionIndex = 0;
        m_refractionDepthBias = 0;
    }

    // 0x1008c6cc0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Material::Material(): jumps straight to the base-object constructor

    // 0x1008c6cd0, 688 bytes, placed by class name and debug map
    // Material::Initialise(int, MaterialRaw const&)
    void Material::Initialise(int param_1, MaterialRaw* param_2) {
        bool bVar1;
        int iVar2;
        char cVar3;

        m_valid = 1;
        field_1 = param_2->field_8;
        m_iD = param_1;
        cVar3 = IsRT7(this);
        if (cVar3 == '\0') {
            m_size = param_2->field_12;
            m_hasDiffuseMap = param_2->field_16;
            m_hasNormalMap = param_2->field_17;
            field_14 = param_2->field_18;
            m_hasHDRMap = param_2->field_19;
            cVar3 = param_2->field_20;
            field_16 = cVar3;
            iVar2 = param_2->field_44;
            m_hasEmissiveMap = iVar2 == 6;
            m_hasSpecularMap = iVar2 == 1;
            m_diffuseMapID = param_2->field_24;
            m_hDRNormalMapID = param_2->field_28;
            m_globalEnvironmentMapped = param_2->field_32;
            field_29 = param_2->field_33;
            m_specularExponent = (float)param_2->field_36;
            m_hasForcedTextures = param_2->field_65 ^ 1;
            m_legacyMaterial = param_2->field_40;
            m_legacyWhiteness = param_2->field_67;
            m_legacyBrightness = param_2->field_66;
            bVar1 = param_2->field_64;
            field_39 = bVar1;
            if (bVar1 != false) {
                m_pHideFacesMode = HideFacesMode::TEXTURES_ON;
            }
            if ((m_alphaMode != AlphaMode::ALPHA_OPAQUE) && ((iVar2 == 1 || (cVar3 != '\0')))) {
                m_alphaMode = AlphaMode::ALPHA_OPAQUE;
            }
        } else {
            m_diffuseAlphaMapID = param_2->field_76;
            m_normalEmissiveMapID = param_2->field_80;
            m_metalnessRoughnessMapID = param_2->field_84;
            m_diffuseAlphaMapSize = param_2->field_88;
            m_normalEmissiveMapSize = param_2->field_92;
            m_metalnessRoughnessMapSize = param_2->field_96;
            m_emissiveSourceColourARGB = param_2->field_104;
            m_emissiveScale = param_2->field_108;
            m_specularScale = param_2->field_164;
            m_fresnelExponent = (float)param_2->field_112;
            m_defaultNonMetalSpecular = param_2->field_116;
            field_80 = (float)param_2->field_100;
            m_pHideFacesMode = param_2->field_120;
            m_hasForcedTextures = param_2->field_72;
        }
        m_materialAnimationH = param_2->field_128;
        m_materialAnimationV = param_2->field_132;
        m_environmentMaterialID = param_2->field_136;
        m_viewportMapID = param_2->field_140;
        math::Rect<float>::operator=((Rect<float>*)&field_112, (Rect*)&param_2->field_144);
        m_unlit = param_2->field_160;
        m_shadowCaster = param_2->field_161;
        m_shadowReceiver = param_2->field_162;
        m_specularScale = param_2->field_164;
        m_normalScale = param_2->field_168;
        m_refractionAmount = param_2->field_172;
        m_refractionIndex = param_2->field_176;
        m_refractionDepthBias = param_2->field_180;
        m_blendMode = param_2->field_184;
        m_alphaMode = param_2->field_192;
        m_alphaTestThreshold = param_2->field_200;
        m_pWrapU = param_2->field_208;
        m_pWrapV = param_2->field_216;
        m_hasHighlighting = param_2->field_226;
        m_hasTransparencyCutout = param_2->field_227;
        field_208 = math::RunetekColour::HSLToRGB(param_2->field_224);
    }

    // 0x1008c6f80, 304 bytes, placed by class name and debug map
    // Material::InitialiseDummy(bool)
    void Material::InitialiseDummy(bool param_1) {
        undefined* puVar1;
        undefined3 in_register_00000031;

        m_valid = 1;
        if (CONCAT31(in_register_00000031, param_1) == 0) {
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
        *(undefined4*)((long)&m_materialAnimationV + 3) = 0;
        m_specularScale = 1065353216;
        m_normalScale = 1065353216;
        m_refractionAmount = 0;
        m_refractionIndex = 1065353216;
        m_refractionDepthBias = 0;
        m_blendMode = BlendMode::NORMAL;
        m_alphaMode = AlphaMode::ALPHA_OPAQUE;
        m_alphaTestThreshold = 255;
        puVar1 = graphicutils::TextureWrapMode::CLAMP;
        m_pWrapU = graphicutils::TextureWrapMode::CLAMP;
        m_pWrapV = puVar1;
        m_pHideFacesMode = HideFacesMode::NEVER;
        m_hasForcedTextures = 0;
        field_208 = 0;
        m_hasHighlighting = 0;
        m_hasTransparencyCutout = 0;
    }

    // 0x1008c70b0, 48 bytes, placed by class name and debug map
    // Material::InitialiseLoading(bool)
    void Material::InitialiseLoading(bool param_1) {
        InitialiseDummy(this, param_1);
        m_iD = (uint)(byte)~param_1 * 2 | 4294967292;
        m_diffuseMapID = 4294967292;
    }

} // namespace jag::graphics
