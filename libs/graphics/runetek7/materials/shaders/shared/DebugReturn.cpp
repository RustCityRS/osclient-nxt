// libs/graphics/runetek7/materials/shaders/shared/DebugReturn.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DebugReturn {
    public:
        auto BuildUniforms();
        void SetShaderConstants(const render::ShaderProgram& shaderProgram);
    };

    // 0x100853320
    auto DebugReturn::BuildUniforms() {
        auto result;
        result.basic_string<decltype(nullptr)>("uniform float uDebugReturn;\n");
        return result;
    }

    // 0x100853340
    void DebugReturn::SetShaderConstants(const render::ShaderProgram& shaderProgram) {
        shaderProgram.SetShaderConstFloat1((HashedString*)graphics::operator*(198), 1.0);
    }

} // namespace jag::graphics
