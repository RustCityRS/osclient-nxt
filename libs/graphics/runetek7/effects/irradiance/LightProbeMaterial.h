// libs/graphics/runetek7/effects/irradiance/LightProbeMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class LightProbeMaterial : public SkyBoxMaterial // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LightProbeMaterial();
        void SetIrradianceSHConsts(const IrradianceSHCoefConsts& irradianceSHCoefConsts);
        IrradianceSHCoefConsts GetIrradianceSHConsts() const;
        LightProbeMaterial();
        void Init();
        LightProbeMaterial(LightProbeMaterial&& lightProbeMaterial);
        LightProbeMaterial(const LightProbeMaterial& lightProbeMaterial);
        void InitRenderPassEffects();
        LightProbeMaterial* operator=(const LightProbeMaterial& lightProbeMaterial);

    private:
        IrradianceSHCoefConsts m_irradianceSHConsts;
        uint64_t field_648;
    };

    // 0x100414c60
    void LightProbeMaterial::SetIrradianceSHConsts(const IrradianceSHCoefConsts& irradianceSHCoefConsts) {
        *m_irradianceSHConsts = irradianceSHCoefConsts;
    }

} // namespace jag::graphics
