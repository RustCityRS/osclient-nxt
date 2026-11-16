// libs/graphics/runetek7/effects/alphatesting/AlphaTesting.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class AlphaTesting {
    public:
        void SetShaderConstants(Shader&, int);
    };

    // 0x10092ce40, 96 bytes, placed by class name and debug map
    // AlphaTesting::SetShaderConstants(Shader&, int)
    void AlphaTesting::SetShaderConstants(Shader* param_1, int param_2) {
        ShaderProgram* this;
        HashedString* pHVar1;

        this = (ShaderProgram*)param_1->GetProgram();
        pHVar1 = (HashedString*)graphics::operator*((graphics*)25);
        SetShaderConstFloat1(pHVar1, (float)param_2 * 0.003921569 + 0.0019607844);
    }

} // namespace jag::graphics
