// libs/graphics/postprocess/shaders/RGBLogLuminance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class RGBLogLuminance {
    public:
        RGBLogLuminance* BuildFSFragment(LuminanceShaderOutputFormat);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009b78f0, 208 bytes, placed by class name and debug map
    // RGBLogLuminance::BuildFSFragment(LuminanceShaderOutputFormat)
    RGBLogLuminance* RGBLogLuminance::BuildFSFragment(undefined4 param_2) {
        undefined1 local_148[280];
        LuminanceUtils local_30[24];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        local_30->BuildFragment(param_2);
        std::operator<<((ostream*)(local_148 + 16), (basic_string*)local_30);
        local_30->~basic_string();
        std::operator<<(
            (ostream*)(local_148 + 16),
            "\nin vec2 vTexCoord;\n\nuniform highp sampler2D sSceneHDRTexture;\n\nvoid main()\n{\nhighp vec3 rgb = "
            "texture2DLodCompat(sSceneHDRTexture, vTexCoord, 0.0).xyz;\n\n// @todo Convert to YUV colour space in "
            "order to better cover the human perception of colour\n\n// Convert RGB triple into a greyscale value\n// "
            "1e-5 necessary to stop the singularity at lum == 0\nhighp float lum = CalculateLuminance(rgb);\nhighp "
            "float logLum = log(lum);\nOutputLuminanceLogFloat(logLum);\n}\n");
        str();
        local_148->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::postprocess
