// libs/graphics/runetek7/effects/objecthighlight/ObjectHighlightEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ObjectHighlight {
    public:
        void SetShaderConstants(Shader& shader, const math::Vector4T<float>& vector4, float arg3);
    };

    // 0x100918060
    void ObjectHighlight::SetShaderConstants(Shader& shader, const math::Vector4T<float>& vector4, float arg3) {
        auto pSVar1 = shader.GetProgram();
        auto pHVar2 = graphics::operator*(114);
        pSVar1->SetShaderConstVector4(pHVar2, vector4);
        pSVar1 = shader.GetProgram();
        pHVar2 = (HashedString*)graphics::operator*(115);
        pSVar1->SetShaderConstFloat1(pHVar2, arg3);
    }

} // namespace jag::graphics
