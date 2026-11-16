// libs/graphics/postprocess/shaders/AdaptiveLuminance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class AdaptiveLuminance {
    public:
        AdaptiveLuminance* BuildFSFragment(LuminanceShaderOutputFormat);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009b7ad0, 208 bytes, placed by class name and debug map
    // AdaptiveLuminance::BuildFSFragment(LuminanceShaderOutputFormat)
    AdaptiveLuminance* AdaptiveLuminance::BuildFSFragment(undefined4 param_2) {
        undefined1 local_148[280];
        LuminanceUtils local_30[24];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        local_30->BuildFragment(param_2);
        std::operator<<((ostream*)(local_148 + 16), (basic_string*)local_30);
        local_30->~basic_string();
        std::operator<<(
            (ostream*)(local_148 + 16),
            "\nuniform highp float uTimeDelta;\nuniform highp float uExposureSpeedMul;\n\nuniform highp sampler2D "
            "sAvgLumTex;\nuniform highp sampler2D sPrevAdaptedLumTex;\n\nvoid main()\n{\n   // Sample average "
            "luminance from the centre of the texture\n   highp float currAvgLum = "
            "UnpackLuminanceExpFloat(texture2DLodCompat(sAvgLumTex, vec2(0.0, 0.0), 0.0));\n   highp float "
            "prevAdaptedLum = UnpackLuminanceExpFloat(texture2DLodCompat(sPrevAdaptedLumTex, vec2(0.0, 0.0), 0.0));\n  "
            " // The clamp value needs to be non-zero and positive, but small enough to not affect dark areas that "
            "legitimately need small values\n   float adaptiveLum = max(0.00001, CalcAdaptedLumRodsCones(currAvgLum, "
            "prevAdaptedLum, uTimeDelta, uExposureSpeedMul));\n   OutputLuminanceExpFloat(adaptiveLum);\n}\n");
        str();
        local_148->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::postprocess
