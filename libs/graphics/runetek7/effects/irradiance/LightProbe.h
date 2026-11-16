// libs/graphics/runetek7/effects/irradiance/LightProbe.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class LightProbe : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LightProbe();
        virtual void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        GetMaterial();
        void SetWorldPosition(math::Vector3T<float> const&);
        shared_ptr GetEnvMapRT();
        LightProbe();
        void Initialise(LightProbeRenderer&);
        void SetRenderingResources(shared_ptr<render::BufferedRenderTargets>&);
        uint IsInit() const;
        void UpdateForwardPassEffect(DrawableSortKey, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                     SceneViewData const&, EffectManager const&);
        void ClearRenderingResources();
        static float /* 4 bytes */ OVERBRIGHT_DEFAULT; // = 0.25f
        static                                         /* 48 bytes */
            m_LightProbeRenderModes__;                 // = { 0, 0, 14512292, 1, 1, 0, 14755552, 1, 2, 0, 14755561, 1 }
        static StringEnum                              /* 16 bytes */
            m_LightProbeRenderModes;                   // = StringEnum((StringEnumEntry *)&m_LightProbeRenderModes__, 3)
        static /* 8 bytes */ m_LightProbeRenderMode;

        // data members, from how the methods use this: 712 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[20];
        LightProbeMaterial field_32; // offset 32
        shared_ptr m_envMapRT;       // offset 688
        char _unknown_704[8];
    };

    // 0x1004797e0, 16 bytes, inline, placed by class name and debug map
    // LightProbe::SetWorldPosition(math::Vector3T<float> const&)
    void LightProbe::SetWorldPosition(Vector3T* param_1) {
        (&field_12, param_1)->SetXYZ();
    }

    // 0x100931660, 32 bytes, inline, placed by class name
    // LightProbe::ClearRenderingResources()
    void LightProbe::ClearRenderingResources() {
        shared_ptr<render::BufferedRenderTargets>::reset();
    }

} // namespace jag::graphics
