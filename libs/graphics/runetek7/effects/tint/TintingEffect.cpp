// libs/graphics/runetek7/effects/tint/TintingEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TintingEffect {
    public:
        void SetShaderConstants(Shader&, math::Vector4T<float> const&);
    };

    // 0x10091e690, 48 bytes, placed by class name and debug map
    // TintingEffect::SetShaderConstants(Shader&, math::Vector4T<float> const&)
    void TintingEffect::SetShaderConstants(Shader* param_1, Vector4T* param_2) {
        ShaderProgram* this;
        HashedString* pHVar1;

        this = (ShaderProgram*)param_1->GetProgram();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)114);
        SetShaderConstVector4(pHVar1, param_2);
    }

} // namespace jag::graphics
