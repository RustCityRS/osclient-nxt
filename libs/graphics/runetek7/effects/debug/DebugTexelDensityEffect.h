// libs/graphics/runetek7/effects/debug/DebugTexelDensityEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DebugTexelDensityEffect {
    public:
        // virtual methods in vtable order
        virtual ~DebugTexelDensityEffect();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        DebugTexelDensityEffect(RT7Core&);
        static float /* 4 bytes */ m_resolutionPerTile; // = 256.0f
        static float /* 4 bytes */ m_targetMultiplier;  // = 4.0f
        static float /* 4 bytes */ m_densityRadius;     // = 0.25f

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
    };

    // 0x10093a7f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DebugTexelDensityEffect::DebugTexelDensityEffect(RT7Core&): jumps straight to the base-object constructor

    // 0x10093a810, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // DebugTexelDensityEffect::DebugTexelDensityEffect(RT7Core&)
    void DebugTexelDensityEffect::DebugTexelDensityEffect(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__RefCounterAndData_100f1a040;
    }

} // namespace jag::graphics
