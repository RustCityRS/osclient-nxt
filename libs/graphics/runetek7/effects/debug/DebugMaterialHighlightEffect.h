// libs/graphics/runetek7/effects/debug/DebugMaterialHighlightEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class DebugMaterialHighlightEffect {
    public:
        // virtual methods in vtable order
        virtual ~DebugMaterialHighlightEffect();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        BuildUniforms();
        DebugMaterialHighlightEffect(RT7Core&);
        static /* 4 bytes */ m_materialHighlightID; // = -1

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
    };

    class FogShaderConsts {
    public:
        FogShaderConsts();
    };

    // 0x10093a9b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DebugMaterialHighlightEffect::DebugMaterialHighlightEffect(RT7Core&): jumps straight to the base-object constructor

    // 0x10093a9d0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // DebugMaterialHighlightEffect::DebugMaterialHighlightEffect(RT7Core&)
    void DebugMaterialHighlightEffect::DebugMaterialHighlightEffect(RT7Core* param_1) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__RefCounterAndData_100f1a140;
    }

    // 0x10093c080, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FogShaderConsts::FogShaderConsts(): jumps straight to the base-object constructor

    // 0x10093c0b0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FogShaderConsts::FogShaderConsts()
    /* tweak::Gradient::Gradient() */

    void tweak::Gradient::Gradient() {
        new (this) math::Vector4T<float>();
        new (&field_16) math::Vector4T<float>();
    }

} // namespace jag::graphics

namespace jag::tweak {
    // 0x10093c080: the linker folded this into graphics::FogShaderConsts::FogShaderConsts(), which has identical code
    Gradient::Gradient();

    // 0x10093c0b0: the linker folded this into graphics::FogShaderConsts::FogShaderConsts(), which has identical code
    Gradient::Gradient();

} // namespace jag::tweak
