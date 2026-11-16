// libs/graphics/runetek7/effects/irradiance/LightProbe.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class LightProbe : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LightProbe();
        virtual void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager);
        Option<float>* GetMaterial();
        void SetWorldPosition(const math::Vector3T<float>& vector3);
        uint8_t* GetEnvMapRT();
        LightProbe();
        void Initialise(LightProbeRenderer& lightProbeRenderer);
        void SetRenderingResources(shared_ptr<render::BufferedRenderTargets>& bufferedRenderTargets);
        bool IsInit() const;
        void UpdateForwardPassEffect(DrawableSortKey drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                     RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                     const SceneViewData& sceneViewData, const EffectManager& effectManager);
        void ClearRenderingResources();
        static float OVERBRIGHT_DEFAULT;              // = 0.25f
        static int32_t m_LightProbeRenderModes__[12]; // = { 0, 0, 14512292, 1, 1, 0, 14755552, 1, 2, 0, 14755561, 1 }
        static StringEnum m_LightProbeRenderModes;    // = StringEnum((StringEnumEntry *)&m_LightProbeRenderModes__, 3)
        static int64_t m_LightProbeRenderMode;

    private:
        unsigned int field_8;
        uint8_t _unknown_12[20];
        LightProbeMaterial field_32;
        uint8_t m_envMapRT[16];
        uint8_t _unknown_704[8];
    };

    // 0x1004797e0
    void LightProbe::SetWorldPosition(const math::Vector3T<float>& vector3) {
        field_12.SetXYZ(vector3);
    }

    // 0x100931660
    void LightProbe::ClearRenderingResources() {
        m_envMapRT->reset();
    }

} // namespace jag::graphics
