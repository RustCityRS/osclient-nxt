// libs/graphics/runetek7/effects/water/WaterExtinctionShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterExtinctionShaderEffect {
    public:
        // virtual methods in vtable order
        virtual ~WaterExtinctionShaderEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetUniforms(render::ShaderProgram const&) const;
        void SetParameters(WaterParameters const&, math::Matrix44T<float> const&);
        WaterExtinctionShaderEffect(RT7Core&, int);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[8];
        ColourHSL field_32;  // offset 32
        undefined8 field_48; // offset 48
        undefined4 field_56; // offset 56
        float field_60;      // offset 60
        char _unknown_64[8];
    };

    // 0x10093d140, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WaterExtinctionShaderEffect::WaterExtinctionShaderEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093d160, 128 bytes, base-object constructor, inline, placed by class name and debug map
    // WaterExtinctionShaderEffect::WaterExtinctionShaderEffect(RT7Core&, int)
    void WaterExtinctionShaderEffect::WaterExtinctionShaderEffect(RT7Core* param_1, int param_2) {
        undefined* puVar1;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__RefCounterAndData_100f19988;
        new (field_32, 45.0, 75.0, 300.0) math::ColourHSL();
        puVar1 = PTR_ONE_100ee66d8;
        field_56 = *(undefined4*)(PTR_ONE_100ee66d8 + 8);
        field_48 = *(undefined8*)puVar1;
        field_60 = 10.0;
        new (&field_64) math::Matrix44T<float>();
    }

} // namespace jag::graphics
