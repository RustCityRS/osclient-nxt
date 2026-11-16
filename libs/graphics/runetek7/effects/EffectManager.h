// libs/graphics/runetek7/effects/EffectManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class EffectManager {
    public:
        void EnabledEffectList() const;
        LightScatteringEffect& GetEffect<LightScatteringEffect>(EffectType effectType);
        void IsEnabled(EffectType effectType) const;
        void DisableEffect(EffectType effectType);
        PointLightShadows const& GetEffect<PointLightShadows>(EffectType effectType) const;
        EffectManager(RT7Core& rt7Core);
        void MakeEffect<Effect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<DebugEmissiveEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<DebugTexelDensityEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<DebugMaterialHighlightEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<DeferredShadows>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<SunlightDirectLighting>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<SunlightShadows>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<PointLightShadows>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<PointLightSMPassEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<Caustics>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<LightScatteringEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<VolumetricScatteringEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<GlobalEnvironmentMapping>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<ViewportMapEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<FogEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<ViewTransformsEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<VertexTransforms2D>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<ClipPlaneEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<WaterCommonShaderEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<WaterNormalMapsShaderEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<WaterFoamShaderEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<WaterExtinctionShaderEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<WaterEmissiveShaderEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<ViewportLookupScale>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<PlanarReflection>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<Refraction>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<SSAOEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<StippleCutoutEffect>(RT7Core& rt7Core, EffectType effectType);
        void MakeEffect<DebugTerrainSpecularEffect>(RT7Core& rt7Core, EffectType effectType);
        void Destroy();
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void InitialiseTweakVars(tweak::ContainerGroup& containerGroup);
        void SetEffectsQuality(GraphicsQuality graphicsQuality);
        void EnableEffect(EffectType effectType, bool arg2);
        uint8_t ToggleEffect(EffectType effectType);
        uint8_t[16] BuildShaderEffectList(const EffectList& effectList) const;
        void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                Shader& shader, EffectList effectList);
        void BindConstBufferToShader(const render::ShaderProgram& shaderProgram, const EffectList& effectList) const;
        void RenderDebug(const render::Viewport& viewport) const;
        void OnEndFrame();
        unsigned long SetEffectQuality(EffectType effectType, GraphicsQuality graphicsQuality);
        void GetEffectQuality(EffectType effectType) const;
        ~EffectManager();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t _unknown_16[16];
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint8_t _unknown_64[8];
    };

    // 0x1001bcb10
    LightScatteringEffect& EffectManager::GetEffect<LightScatteringEffect>(EffectType effectType) {
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        return (FogEffect*)this_00->get();
    }

    // 0x1001be5a0
    void EffectManager::IsEnabled(EffectType effectType) const {
        Contains(effectType);
    }

    // 0x1005f8050
    void EffectManager::DisableEffect(EffectType effectType) {
        EnableEffect(effectType, false);
    }

    // 0x1007b8990
    PointLightShadows const& EffectManager::GetEffect<PointLightShadows>(EffectType effectType) const {
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        return (FogEffect*)this_00->get();
    }

    // 0x10092b210
    void EffectManager::MakeEffect<Effect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<Effect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
    }

    // 0x10092b260
    void EffectManager::MakeEffect<DebugEmissiveEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<DebugEmissiveEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b2c0
    void EffectManager::MakeEffect<DebugTexelDensityEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<DebugTexelDensityEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b320
    void EffectManager::MakeEffect<DebugMaterialHighlightEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<DebugMaterialHighlightEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b380
    void EffectManager::MakeEffect<DeferredShadows>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<DeferredShadows, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b3e0
    void EffectManager::MakeEffect<SunlightDirectLighting>(RT7Core& rt7Core, EffectType effectType) {
        ReturnValue local_28 = std::make_unique<SunlightDirectLighting, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b440
    void EffectManager::MakeEffect<SunlightShadows>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<SunlightShadows, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b4a0
    void EffectManager::MakeEffect<PointLightShadows>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<PointLightShadows, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b500
    void EffectManager::MakeEffect<PointLightSMPassEffect>(RT7Core& rt7Core, EffectType effectType) {
        ReturnValue local_28 = std::make_unique<PointLightSMPassEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b560
    void EffectManager::MakeEffect<Caustics>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<Caustics, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b5c0
    void EffectManager::MakeEffect<LightScatteringEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<LightScatteringEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b620
    void EffectManager::MakeEffect<VolumetricScatteringEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<VolumetricScatteringEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b680
    void EffectManager::MakeEffect<GlobalEnvironmentMapping>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<GlobalEnvironmentMapping, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b6e0
    void EffectManager::MakeEffect<ViewportMapEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<ViewportMapEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b740
    void EffectManager::MakeEffect<FogEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<FogEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b7a0
    void EffectManager::MakeEffect<ViewTransformsEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<ViewTransformsEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b800
    void EffectManager::MakeEffect<VertexTransforms2D>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<VertexTransforms2D, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b860
    void EffectManager::MakeEffect<ClipPlaneEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<ClipPlaneEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b8c0
    void EffectManager::MakeEffect<WaterCommonShaderEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<WaterCommonShaderEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b920
    void EffectManager::MakeEffect<WaterNormalMapsShaderEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<WaterNormalMapsShaderEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b980
    void EffectManager::MakeEffect<WaterFoamShaderEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<WaterFoamShaderEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092b9e0
    void EffectManager::MakeEffect<WaterExtinctionShaderEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<WaterExtinctionShaderEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092ba40
    void EffectManager::MakeEffect<WaterEmissiveShaderEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<WaterEmissiveShaderEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092baa0
    void EffectManager::MakeEffect<ViewportLookupScale>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<ViewportLookupScale, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092bb00
    void EffectManager::MakeEffect<PlanarReflection>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<PlanarReflection, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092bb60
    void EffectManager::MakeEffect<Refraction>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<Refraction, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092bbc0
    void EffectManager::MakeEffect<SSAOEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<SSAOEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092bc20
    void EffectManager::MakeEffect<StippleCutoutEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<StippleCutoutEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x10092bc80
    void EffectManager::MakeEffect<DebugTerrainSpecularEffect>(RT7Core& rt7Core, EffectType effectType) {
        auto local_28 = std::make_unique<DebugTerrainSpecularEffect, RT7Core&>(rt7Core);
        unique_ptr<Effect>* this_00 = &field_64[(unsigned long)effectType];
        *this_00 = local_28;
        field_16.Add(effectType);
    }

    // 0x100990ed0
    EffectManager::~EffectManager() {
        field_64.~array();
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001bcb30
    void OSRenderCore_LogicThread_RSeven::SetMaterials(jagex3::Js5& js5) {
        mrp.LoadMaterials(js5);
        auto local_28 = std::make_unique<jag::graphics::MaterialManager>();
        uint8_t* this_00 = &field_672;
        *this_00 = local_28;
        MaterialManager* pMVar1 = (MaterialManager*)(*this_00).operator->();
        pMVar1->Initialise(&mrp);
        pMVar1 = (MaterialManager*)(*this_00).operator->();
        pMVar1->MainLogic();
    }

} // namespace jag::oldscape
