// libs/graphics/runetek7/effects/instancecolour/InstanceColourEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class InstanceColourEffect {
    public:
        void SetShaderConstants(Shader&, math::Vector4T<float> const&);
    };

    // 0x10092e570, 48 bytes, placed by class name and debug map
    // InstanceColourEffect::SetShaderConstants(Shader&, math::Vector4T<float> const&)
    void InstanceColourEffect::SetShaderConstants(Shader* param_1, Vector4T* param_2) {
        ShaderProgram* this;
        HashedString* pHVar1;

        this = (ShaderProgram*)param_1->GetProgram();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)199);
        SetShaderConstVector4(pHVar1, param_2);
    }

} // namespace jag::graphics
