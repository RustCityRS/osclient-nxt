// libs/graphics/runetek7/effects/tint/TintingEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TintingEffect {
    public:
        void SetShaderConstants(Shader& shader, const math::Vector4T<float>& vector4);
    };

    // 0x10091e690
    void TintingEffect::SetShaderConstants(Shader& shader, const math::Vector4T<float>& vector4) {
        shader.GetProgram()->SetShaderConstVector4((HashedString*)graphics::operator*(114), vector4);
    }

} // namespace jag::graphics
