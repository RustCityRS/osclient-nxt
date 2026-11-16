// libs/graphics/runetek7/effects/debug/DebugEmissiveEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DebugEmissiveEffect {
    public:
        // virtual methods in vtable order
        virtual ~DebugEmissiveEffect();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        DebugEmissiveEffect(RT7Core&);
        static float /* 4 bytes */ m_maskMultiplier; // = 1.0f
        static /* 16 bytes */ m_emissiveScale;

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
    };

    // 0x10093a630, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DebugEmissiveEffect::DebugEmissiveEffect(RT7Core&): jumps straight to the base-object constructor

    // 0x10093a650, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // DebugEmissiveEffect::DebugEmissiveEffect(RT7Core&)
    void DebugEmissiveEffect::DebugEmissiveEffect(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__RefCounterAndData_100f1a0c0;
    }

} // namespace jag::graphics
