// libs/graphics/runetek7/effects/stippletransparency/StippleCutoutEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class StippleCutoutEffect {
    public:
        // virtual methods in vtable order
        virtual ~StippleCutoutEffect();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        StippleCutoutEffect* BuildUniforms();
        StippleCutoutEffect(RT7Core&);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[16];
    };

    // 0x10093dcd0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // StippleCutoutEffect::StippleCutoutEffect(RT7Core&): jumps straight to the base-object constructor

    // 0x10093dcf0, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // StippleCutoutEffect::StippleCutoutEffect(RT7Core&)
    void StippleCutoutEffect::StippleCutoutEffect(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__RefCounterAndData_100f19688;
        new (&field_32) StippleCutoutParameters();
    }

} // namespace jag::graphics
