// libs/graphics/runetek7/effects/irradiance/LightProbeMaterial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class LightProbeMaterial : public SkyBoxMaterial // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LightProbeMaterial();
        void SetIrradianceSHConsts(IrradianceSHCoefConsts const&);
        GetIrradianceSHConsts() const;
        LightProbeMaterial();
        void Init();
        LightProbeMaterial(LightProbeMaterial&&);
        LightProbeMaterial(LightProbeMaterial const&);
        void InitRenderPassEffects();
        LightProbeMaterial* operator=(LightProbeMaterial const&);

        // data members, from how the methods use this: 656 bytes, the first 544 are SkyBoxMaterial
        undefined8 m_irradianceSHConsts; // offset 544
        undefined8 field_552;            // offset 552
        undefined8 field_560;            // offset 560
        undefined8 field_568;            // offset 568
        undefined8 field_576;            // offset 576
        undefined8 field_584;            // offset 584
        undefined8 field_592;            // offset 592
        undefined8 field_600;            // offset 600
        undefined8 field_608;            // offset 608
        undefined8 field_616;            // offset 616
        undefined8 field_624;            // offset 624
        undefined8 field_632;            // offset 632
        undefined8 field_640;            // offset 640
        undefined8 field_648;            // offset 648
    };

    // 0x100414c60, 32 bytes, inline, placed by class name and debug map
    // LightProbeMaterial::SetIrradianceSHConsts(IrradianceSHCoefConsts const&)
    void LightProbeMaterial::SetIrradianceSHConsts(IrradianceSHCoefConsts* param_1) {
        IrradianceSHCoefConsts::operator=((IrradianceSHCoefConsts*)&m_irradianceSHConsts, param_1);
    }

} // namespace jag::graphics
