// libs/graphics/postprocess/shaders/RGBLogLuminance2x2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class RGBLogLuminance2x2 {
    public:
        auto BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat);
    };

    // 0x1009b7820
    auto RGBLogLuminance2x2::BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat) {
        uint8_t local_148[280];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_30 = LuminanceUtils::BuildFragment(luminanceShaderOutputFormat);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
            "\nuniform highp vec4 uSampleOffsets2x2[2];\n\nin vec2 vTexCoord;\n\nuniform highp sampler2D "
            "sSceneHDRTex;\n\nvoid main()\n{\n   // Sample & box-filter 4 taps\n   highp vec3 rgb = "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets2x2[0].xy, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets2x2[0].zw, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets2x2[1].xy, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets2x2[1].zw, 0.0).xyz;\n   // Compute the "
            "average\n   rgb /= 4.0;\n\n   // Convert RGB triple into a greyscale value\n   highp float lum = "
            "CalculateLuminance(rgb);\n   highp float logLum = log(lum);\n   OutputLuminanceLogFloat(logLum);\n}\n");
        auto result = local_148->str();
        return result;
    }

} // namespace jag::postprocess
