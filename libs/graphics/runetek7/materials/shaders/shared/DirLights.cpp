// libs/graphics/runetek7/materials/shaders/shared/DirLights.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DirLights {
    public:
        DirLights* BuildUniforms();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100854410, 32 bytes, placed by class name and debug map
    // DirLights::BuildUniforms()
    DirLights* DirLights::BuildUniforms() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "\nUNIFORM_BUFFER_BEGIN(Sunlight)\n   uniform highp vec3 uInvSunDirection;\n   uniform mediump vec3 "
            "uAmbientColour;\n   uniform mediump vec3 uSunColour;\n   uniform mediump float "
            "uDummy;\nUNIFORM_BUFFER_END\n");
        return this;
    }

} // namespace jag::graphics
