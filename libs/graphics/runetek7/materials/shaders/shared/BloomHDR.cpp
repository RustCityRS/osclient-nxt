// libs/graphics/runetek7/materials/shaders/shared/BloomHDR.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class BloomHDR {
    public:
        BloomHDR* BuildFSFragment();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100853300, 32 bytes, placed by class name and debug map
    // BloomHDR::BuildFSFragment()
    BloomHDR* BloomHDR::BuildFSFragment() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "\nvec4 HDRScale(vec4 inputColour, float hdrScaleRatio)\n{\n    return vec4(inputColour.rgb * (1.0 + "
            "(hdrScaleRatio * 31.0)), inputColour.a);\n}\n");
        return this;
    }

} // namespace jag::graphics
