// libs/graphics/runetek7/effects/objecthighlight/ObjectHighlightEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ObjectHighlight {
    public:
        void SetShaderConstants(Shader&, math::Vector4T<float> const&, float);
    };

    // 0x100918060, 112 bytes, placed by debug map only (low confidence)
    // ObjectHighlight::SetShaderConstants(Shader&, math::Vector4T<float> const&, float)
    void ObjectHighlight::SetShaderConstants(Shader* param_1, Vector4T* param_2, float param_3) {
        ShaderProgram* pSVar1;
        HashedString* pHVar2;

        pSVar1 = (ShaderProgram*)param_1->GetProgram();
        pHVar2 = (HashedString*)graphics::operator*((graphics*)114);
        pSVar1->SetShaderConstVector4(pHVar2, param_2);
        pSVar1 = (ShaderProgram*)param_1->GetProgram();
        pHVar2 = (HashedString*)graphics::operator*((graphics*)115);
        pSVar1->SetShaderConstFloat1(pHVar2, param_3);
    }

} // namespace jag::graphics
