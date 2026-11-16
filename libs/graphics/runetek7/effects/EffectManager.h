// libs/graphics/runetek7/effects/EffectManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class EffectManager {
    public:
        EnabledEffectList() const;
        LightScatteringEffect& GetEffect<LightScatteringEffect>(EffectType);
        void IsEnabled(EffectType) const;
        void DisableEffect(EffectType);
        PointLightShadows const& GetEffect<PointLightShadows>(EffectType) const;
        EffectManager(RT7Core&);
        void MakeEffect<Effect>(RT7Core&, EffectType);
        void MakeEffect<DebugEmissiveEffect>(RT7Core&, EffectType);
        void MakeEffect<DebugTexelDensityEffect>(RT7Core&, EffectType);
        void MakeEffect<DebugMaterialHighlightEffect>(RT7Core&, EffectType);
        void MakeEffect<DeferredShadows>(RT7Core&, EffectType);
        void MakeEffect<SunlightDirectLighting>(RT7Core&, EffectType);
        void MakeEffect<SunlightShadows>(RT7Core&, EffectType);
        void MakeEffect<PointLightShadows>(RT7Core&, EffectType);
        void MakeEffect<PointLightSMPassEffect>(RT7Core&, EffectType);
        void MakeEffect<Caustics>(RT7Core&, EffectType);
        void MakeEffect<LightScatteringEffect>(RT7Core&, EffectType);
        void MakeEffect<VolumetricScatteringEffect>(RT7Core&, EffectType);
        void MakeEffect<GlobalEnvironmentMapping>(RT7Core&, EffectType);
        void MakeEffect<ViewportMapEffect>(RT7Core&, EffectType);
        void MakeEffect<FogEffect>(RT7Core&, EffectType);
        void MakeEffect<ViewTransformsEffect>(RT7Core&, EffectType);
        void MakeEffect<VertexTransforms2D>(RT7Core&, EffectType);
        void MakeEffect<ClipPlaneEffect>(RT7Core&, EffectType);
        void MakeEffect<WaterCommonShaderEffect>(RT7Core&, EffectType);
        void MakeEffect<WaterNormalMapsShaderEffect>(RT7Core&, EffectType);
        void MakeEffect<WaterFoamShaderEffect>(RT7Core&, EffectType);
        void MakeEffect<WaterExtinctionShaderEffect>(RT7Core&, EffectType);
        void MakeEffect<WaterEmissiveShaderEffect>(RT7Core&, EffectType);
        void MakeEffect<ViewportLookupScale>(RT7Core&, EffectType);
        void MakeEffect<PlanarReflection>(RT7Core&, EffectType);
        void MakeEffect<Refraction>(RT7Core&, EffectType);
        void MakeEffect<SSAOEffect>(RT7Core&, EffectType);
        void MakeEffect<StippleCutoutEffect>(RT7Core&, EffectType);
        void MakeEffect<DebugTerrainSpecularEffect>(RT7Core&, EffectType);
        void Destroy();
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void InitialiseTweakVars(tweak::ContainerGroup&);
        void SetEffectsQuality(GraphicsQuality);
        void EnableEffect(EffectType, bool);
        byte ToggleEffect(EffectType);
        BuildShaderEffectList(EffectList const&) const;
        void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&, EffectList);
        void BindConstBufferToShader(render::ShaderProgram const&, EffectList const&) const;
        void RenderDebug(render::Viewport const&) const;
        void OnEndFrame();
        ulong SetEffectQuality(EffectType, GraphicsQuality);
        void GetEffectQuality(EffectType) const;
        ~EffectManager();

        // data members, from how the methods use this: 72 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[16];
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        char _unknown_64[8];
    };

    // 0x1001bcb10, 32 bytes, inline, placed by class name and debug map
    // LightScatteringEffect& EffectManager::GetEffect<LightScatteringEffect>(EffectType)
    /* SunlightDirectLighting&
   EffectManager::GetEffect<SunlightDirectLighting>(EffectType)
    */

    SunlightDirectLighting* EffectManager::GetEffect<SunlightDirectLighting>(uint param_2) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        SunlightDirectLighting* pSVar1;

        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_2);
        pSVar1 = (SunlightDirectLighting*)std::unique_ptr<Effect, std::default_delete<Effect>>::get(this_00);
        return pSVar1;
    }

    // 0x1001be5a0, 16 bytes, inline, placed by class name
    // EffectManager::IsEnabled(EffectType) const
    void EffectManager::IsEnabled() {
        EffectList::Contains();
    }

    // 0x1005f8050, 16 bytes, inline, placed by class name
    // EffectManager::DisableEffect(EffectType)
    void EffectManager::DisableEffect(undefined8 param_2) {
        EnableEffect(this, param_2, 0);
    }

    // 0x1007b8990, 32 bytes, inline, placed by class name
    // PointLightShadows const& EffectManager::GetEffect<PointLightShadows>(EffectType) const
    /* PlanarReflection const&
   EffectManager::GetEffect<PlanarReflection>(EffectType)
   const */

    PlanarReflection* EffectManager::GetEffect<PlanarReflection>(uint param_2) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        PlanarReflection* pPVar1;

        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_2);
        pPVar1 = (PlanarReflection*)std::unique_ptr<Effect, std::default_delete<Effect>>::get(this_00);
        return pPVar1;
    }

    // 0x10092b210, 80 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<Effect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<Effect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<Effect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
    }

    // 0x10092b260, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<DebugEmissiveEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<DebugEmissiveEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<DebugEmissiveEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b2c0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<DebugTexelDensityEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<DebugTexelDensityEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<DebugTexelDensityEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b320, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<DebugMaterialHighlightEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<DebugMaterialHighlightEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<DebugMaterialHighlightEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b380, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<DeferredShadows>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<DeferredShadows>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<DeferredShadows, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b3e0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<SunlightDirectLighting>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<SunlightDirectLighting>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<SunlightDirectLighting, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b440, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<SunlightShadows>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<SunlightShadows>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<SunlightShadows, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b4a0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<PointLightShadows>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<PointLightShadows>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<PointLightShadows, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b500, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<PointLightSMPassEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<PointLightSMPassEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<PointLightSMPassEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b560, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<Caustics>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<Caustics>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<Caustics, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b5c0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<LightScatteringEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<LightScatteringEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<LightScatteringEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b620, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<VolumetricScatteringEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<VolumetricScatteringEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<VolumetricScatteringEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b680, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<GlobalEnvironmentMapping>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<GlobalEnvironmentMapping>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<GlobalEnvironmentMapping, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b6e0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<ViewportMapEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<ViewportMapEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<ViewportMapEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b740, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<FogEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<FogEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<FogEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b7a0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<ViewTransformsEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<ViewTransformsEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<ViewTransformsEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b800, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<VertexTransforms2D>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<VertexTransforms2D>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<VertexTransforms2D, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b860, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<ClipPlaneEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<ClipPlaneEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<ClipPlaneEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b8c0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<WaterCommonShaderEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<WaterCommonShaderEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<WaterCommonShaderEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b920, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<WaterNormalMapsShaderEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<WaterNormalMapsShaderEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<WaterNormalMapsShaderEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b980, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<WaterFoamShaderEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<WaterFoamShaderEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<WaterFoamShaderEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092b9e0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<WaterExtinctionShaderEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<WaterExtinctionShaderEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<WaterExtinctionShaderEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092ba40, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<WaterEmissiveShaderEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<WaterEmissiveShaderEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<WaterEmissiveShaderEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092baa0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<ViewportLookupScale>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<ViewportLookupScale>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<ViewportLookupScale, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092bb00, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<PlanarReflection>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<PlanarReflection>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<PlanarReflection, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092bb60, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<Refraction>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<Refraction>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<Refraction, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092bbc0, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<SSAOEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<SSAOEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<SSAOEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092bc20, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<StippleCutoutEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<StippleCutoutEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<StippleCutoutEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10092bc80, 96 bytes, inline, placed by class name
    // void EffectManager::MakeEffect<DebugTerrainSpecularEffect>(RT7Core&, EffectType)
    void EffectManager::MakeEffect<DebugTerrainSpecularEffect>(undefined8 param_2, uint param_3) {
        unique_ptr<Effect, std::default_delete<Effect>>* this_00;
        undefined1 local_28[8];

        std::make_unique<DebugTerrainSpecularEffect, RT7Core&>((RT7Core*)local_28);
        this_00 = (unique_ptr<Effect, std::default_delete<Effect>>*)
            std::array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>::operator[](
                (array<std::unique_ptr<Effect, std::default_delete<Effect>>, 121ul>*)&field_64, (ulong)param_3);
        std::unique_ptr<Effect, std::default_delete<Effect>>::operator=(this_00, (unique_ptr*)local_28);
        local_28->~unique_ptr();
        (&field_16, param_3)->Add();
    }

    // 0x10097ee40, 16 bytes, complete-object destructor, inline, placed by class name
    // EffectManager::~EffectManager(): jumps straight to the base-object destructor

    // 0x100990ed0, 16 bytes, base-object destructor, inline, placed by class name
    // EffectManager::~EffectManager()
    void EffectManager::~EffectManager() {
        (&field_64)->~array();
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001bcb30, 112 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_RSeven::SetMaterials(jagex3::Js5&)
    void OSRenderCore_LogicThread_RSeven::SetMaterials(Js5* param_1) {
        MaterialManager* pMVar1;
        undefined1* this_00;
        unique_ptr local_28[8];

        mrp.LoadMaterials(param_1);
        std::make_unique<jag::graphics::MaterialManager>();
        this_00 = &field_672;
        std::unique_ptr<jag::graphics::MaterialManager, std::default_delete<jag::graphics::MaterialManager>>::operator=(
            (unique_ptr<jag::graphics::MaterialManager, std::default_delete<jag::graphics::MaterialManager>>*)this_00,
            local_28);
        local_28->~unique_ptr();
        pMVar1 =
            (MaterialManager*)
                std::unique_ptr<jag::graphics::MaterialManager, std::default_delete<jag::graphics::MaterialManager>>::
                operator->(
                    (unique_ptr<jag::graphics::MaterialManager, std::default_delete<jag::graphics::MaterialManager>>*)
                        this_00);
        pMVar1->Initialise((MaterialRawProvider*)&mrp);
        pMVar1 =
            (MaterialManager*)
                std::unique_ptr<jag::graphics::MaterialManager, std::default_delete<jag::graphics::MaterialManager>>::
                operator->(
                    (unique_ptr<jag::graphics::MaterialManager, std::default_delete<jag::graphics::MaterialManager>>*)
                        this_00);
        pMVar1->MainLogic();
    }

} // namespace jag::oldscape
