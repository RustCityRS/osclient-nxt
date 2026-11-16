// libs/graphics/runetek7/effects/water/WaterCommonShaderEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterCommonShaderEffect {
    public:
        // virtual methods in vtable order
        virtual ~WaterCommonShaderEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        void SetParameters(WaterParameters const&);
        WaterCommonShaderEffect* BuildDefines();
        UseGLES2CompatMode();
        WaterCommonShaderEffect* BuildUniforms();
        WaterCommonShaderEffect(RT7Core&, int);

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        float field_24;    // offset 24
        char _unknown_28[4];
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        float field_64;      // offset 64
        float field_68;      // offset 68
        float field_72;      // offset 72
        char _unknown_76[4];
    };

    // 0x10093c900, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WaterCommonShaderEffect::WaterCommonShaderEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093c920, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // WaterCommonShaderEffect::WaterCommonShaderEffect(RT7Core&, int)
    void WaterCommonShaderEffect::WaterCommonShaderEffect(RT7Core* param_1, int param_2) {
        undefined8 uVar1;
        undefined* puVar2;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__RefCounterAndData_100f19888;
        field_24 = -1.0;
        puVar2 = PTR_ZERO_100ee6708;
        uVar1 = *(undefined8*)(PTR_ZERO_100ee6708 + 8);
        field_32 = *(undefined8*)PTR_ZERO_100ee6708;
        field_40 = uVar1;
        uVar1 = *(undefined8*)(puVar2 + 8);
        field_48 = *(undefined8*)puVar2;
        field_56 = uVar1;
        field_64 = 0.0;
        field_68 = 0.0;
        field_72 = 0.0;
    }

} // namespace jag::graphics
