// libs/graphics/runetek7/effects/alphatesting/AlphaTesting.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class AlphaTesting {
    public:
        void SetShaderConstants(Shader& shader, int arg2);
    };

    // 0x10092ce40
    void AlphaTesting::SetShaderConstants(Shader& shader, int arg2) {
        shader.GetProgram()->SetShaderConstFloat1((HashedString*)graphics::operator*(25),
                                                  (float)arg2 * 0.003921569f + 0.0019607844f);
    }

} // namespace jag::graphics
