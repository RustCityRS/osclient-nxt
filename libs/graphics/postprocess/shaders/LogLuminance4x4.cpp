// libs/graphics/postprocess/shaders/LogLuminance4x4.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class LogLuminance4x4 {
    public:
        auto BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat, bool arg2);
    };

    // 0x1009b79c0
    auto LogLuminance4x4::BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat, bool arg2) {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_150[280];

        new (local_150) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_38 = LuminanceUtils::BuildFragment(luminanceShaderOutputFormat);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_150 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_38);
        std::operator<<(basic_ostream,
                        "\nuniform highp vec4 uSampleOffsets4x4[8];\n\nin vec2 vTexCoord;\n\nuniform highp sampler2D "
                        "sLogLumTex;\n\nvoid main()\n{\n   // Sample & box-filter 16 taps\n   highp float avgLuminance "
                        "= UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + uSampleOffsets4x4[0].xy, "
                        "0.0));\n   avgLuminance += UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + "
                        "uSampleOffsets4x4[0].zw, 0.0));\n   avgLuminance += "
                        "UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + uSampleOffsets4x4[1].xy, "
                        "0.0));\n   avgLuminance += UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + "
                        "uSampleOffsets4x4[1].zw, 0.0));\n   avgLuminance += "
                        "UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + uSampleOffsets4x4[2].xy, "
                        "0.0));\n   avgLuminance += UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + "
                        "uSampleOffsets4x4[2].zw, 0.0));\n   avgLuminance += "
                        "UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + uSampleOffsets4x4[3].xy, "
                        "0.0));\n   avgLuminance += UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + "
                        "uSampleOffsets4x4[3].zw, 0.0));\n   avgLuminance += "
                        "UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + uSampleOffsets4x4[4].xy, "
                        "0.0));\n   avgLuminance += UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + "
                        "uSampleOffsets4x4[4].zw, 0.0));\n   avgLuminance += "
                        "UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + uSampleOffsets4x4[5].xy, "
                        "0.0));\n   avgLuminance += UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + "
                        "uSampleOffsets4x4[5].zw, 0.0));\n   avgLuminance += "
                        "UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + uSampleOffsets4x4[6].xy, "
                        "0.0));\n   avgLuminance += UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + "
                        "uSampleOffsets4x4[6].zw, 0.0));\n   avgLuminance += "
                        "UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + uSampleOffsets4x4[7].xy, "
                        "0.0));\n   avgLuminance += UnpackLuminanceLogFloat(texture2DLodCompat(sLogLumTex, vTexCoord + "
                        "uSampleOffsets4x4[7].zw, 0.0));\n ..." /* TRUNCATED STRING LITERAL */
        );
        if (arg2) {
            std::operator<<(basic_ostream, "   OutputLuminanceExpFloat(exp(avgLuminance));\n");
        } else {
            std::operator<<(basic_ostream, "   OutputLuminanceLogFloat(avgLuminance);\n");
        }
        std::operator<<(basic_ostream, "}\n");
        auto result = local_150->str();
        return result;
    }

} // namespace jag::postprocess
