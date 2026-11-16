// libs/graphics/postprocess/shaders/RGBLogLuminance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class RGBLogLuminance {
    public:
        auto BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat);
    };

    // 0x1009b78f0
    auto RGBLogLuminance::BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat) {
        uint8_t local_148[280];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_30 = LuminanceUtils::BuildFragment(luminanceShaderOutputFormat);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
            "\nin vec2 vTexCoord;\n\nuniform highp sampler2D sSceneHDRTexture;\n\nvoid main()\n{\nhighp vec3 rgb = "
            "texture2DLodCompat(sSceneHDRTexture, vTexCoord, 0.0).xyz;\n\n// @todo Convert to YUV colour space in "
            "order to better cover the human perception of colour\n\n// Convert RGB triple into a greyscale value\n// "
            "1e-5 necessary to stop the singularity at lum == 0\nhighp float lum = CalculateLuminance(rgb);\nhighp "
            "float logLum = log(lum);\nOutputLuminanceLogFloat(logLum);\n}\n");
        auto result = local_148->str();
        return result;
    }

} // namespace jag::postprocess
