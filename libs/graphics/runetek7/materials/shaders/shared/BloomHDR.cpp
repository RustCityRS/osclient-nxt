// libs/graphics/runetek7/materials/shaders/shared/BloomHDR.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class BloomHDR {
    public:
        auto BuildFSFragment();
    };

    // 0x100853300
    auto BloomHDR::BuildFSFragment() {
        auto result;
        result.basic_string<decltype(nullptr)>(
            "\nvec4 HDRScale(vec4 inputColour, float hdrScaleRatio)\n{\n return vec4(inputColour.rgb * (1.0 + "
            "(hdrScaleRatio * 31.0)), inputColour.a);\n}\n");
        return result;
    }

} // namespace jag::graphics
