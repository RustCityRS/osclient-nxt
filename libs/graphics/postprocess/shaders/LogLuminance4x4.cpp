// libs/graphics/postprocess/shaders/LogLuminance4x4.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class LogLuminance4x4 {
    public:
        LogLuminance4x4* BuildFSFragment(LuminanceShaderOutputFormat, bool);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009b79c0, 272 bytes, placed by class name and debug map
    // LogLuminance4x4::BuildFSFragment(LuminanceShaderOutputFormat, bool)
    LogLuminance4x4* LogLuminance4x4::BuildFSFragment(undefined4 param_2, char param_3) {
        ostream* poVar1;
        undefined1 local_150[280];
        LuminanceUtils local_38[24];

        new (local_150) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        local_38->BuildFragment(param_2);
        poVar1 = (ostream*)(local_150 + 16);
        std::operator<<(poVar1, (basic_string*)local_38);
        local_38->~basic_string();
        std::operator<<(poVar1,
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
        if (param_3 == '\0') {
            std::operator<<(poVar1, "   OutputLuminanceLogFloat(avgLuminance);\n");
        } else {
            std::operator<<(poVar1, "   OutputLuminanceExpFloat(exp(avgLuminance));\n");
        }
        std::operator<<(poVar1, "}\n");
        str();
        local_150->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::postprocess
