// libs/graphics/postprocess/shaders/RGBLogLuminance3x3.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class RGBLogLuminance3x3 {
    public:
        auto BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat);
    };

    // 0x1009b7750
    auto RGBLogLuminance3x3::BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat) {
        uint8_t local_148[280];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_30 = LuminanceUtils::BuildFragment(luminanceShaderOutputFormat);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
            "\nuniform highp vec4 uSampleOffsets3x3[5];\n\nin vec2 vTexCoord;\n\nuniform highp sampler2D "
            "sSceneHDRTex;\n\nvoid main()\n{\n   // Sample & box-filter 9 taps\n   highp vec3 rgb = "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[0].xy, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[0].zw, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[1].xy, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[1].zw, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[2].xy, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[2].zw, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[3].xy, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[3].zw, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets3x3[4].xy, 0.0).xyz;\n   // Compute the "
            "average\n   rgb /= 9.0;\n\n   // Convert RGB triple into a greyscale value\n   highp float lum = "
            "CalculateLuminance(rgb);\n   highp float logLum = log(lum);\n   OutputLuminanceLogFloat(logLum);\n}\n");
        auto result = local_148->str();
        return result;
    }

} // namespace jag::postprocess
