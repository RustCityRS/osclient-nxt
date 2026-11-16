// libs/graphics/runetek7/effects/instancecolour/InstanceColourEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class InstanceColourEffect {
    public:
        void SetShaderConstants(Shader& shader, const math::Vector4T<float>& vector4);
    };

    // 0x10092e570
    void InstanceColourEffect::SetShaderConstants(Shader& shader, const math::Vector4T<float>& vector4) {
        shader.GetProgram()->SetShaderConstVector4((HashedString*)graphics::operator*(199), vector4);
    }

} // namespace jag::graphics
