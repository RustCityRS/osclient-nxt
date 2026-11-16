// libs/graphics/runetek7/materials/shaders/shared/DebugReturn.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DebugReturn {
    public:
        DebugReturn* BuildUniforms();
        void SetShaderConstants(render::ShaderProgram const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100853320, 32 bytes, placed by class name and debug map
    // DebugReturn::BuildUniforms()
    DebugReturn* DebugReturn::BuildUniforms() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "uniform float uDebugReturn;\n");
        return this;
    }

    // 0x100853340, 48 bytes, placed by class name and debug map
    // DebugReturn::SetShaderConstants(render::ShaderProgram const&)
    void DebugReturn::SetShaderConstants(ShaderProgram* param_1) {
        HashedString* pHVar1;

        pHVar1 = (HashedString*)graphics::operator*((graphics*)198);
        param_1->SetShaderConstFloat1(pHVar1, 1.0);
    }

} // namespace jag::graphics
