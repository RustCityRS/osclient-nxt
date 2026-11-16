// libs/graphics/postprocess/shaders/RGBLogLuminance2x2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class RGBLogLuminance2x2 {
    public:
        RGBLogLuminance2x2* BuildFSFragment(LuminanceShaderOutputFormat);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009b7820, 208 bytes, placed by class name and debug map
    // RGBLogLuminance2x2::BuildFSFragment(LuminanceShaderOutputFormat)
    RGBLogLuminance2x2* RGBLogLuminance2x2::BuildFSFragment(undefined4 param_2) {
        undefined1 local_148[280];
        LuminanceUtils local_30[24];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        local_30->BuildFragment(param_2);
        std::operator<<((ostream*)(local_148 + 16), (basic_string*)local_30);
        local_30->~basic_string();
        std::operator<<(
            (ostream*)(local_148 + 16),
            "\nuniform highp vec4 uSampleOffsets2x2[2];\n\nin vec2 vTexCoord;\n\nuniform highp sampler2D "
            "sSceneHDRTex;\n\nvoid main()\n{\n   // Sample & box-filter 4 taps\n   highp vec3 rgb = "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets2x2[0].xy, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets2x2[0].zw, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets2x2[1].xy, 0.0).xyz;\n   rgb += "
            "texture2DLodCompat(sSceneHDRTex, vTexCoord + uSampleOffsets2x2[1].zw, 0.0).xyz;\n   // Compute the "
            "average\n   rgb /= 4.0;\n\n   // Convert RGB triple into a greyscale value\n   highp float lum = "
            "CalculateLuminance(rgb);\n   highp float logLum = log(lum);\n   OutputLuminanceLogFloat(logLum);\n}\n");
        str();
        local_148->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::postprocess
