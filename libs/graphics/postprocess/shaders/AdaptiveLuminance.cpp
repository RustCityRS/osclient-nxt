// libs/graphics/postprocess/shaders/AdaptiveLuminance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class AdaptiveLuminance {
    public:
        auto BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat);
    };

    // 0x1009b7ad0
    auto AdaptiveLuminance::BuildFSFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat) {
        uint8_t local_148[280];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_30 = LuminanceUtils::BuildFragment(luminanceShaderOutputFormat);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
            "\nuniform highp float uTimeDelta;\nuniform highp float uExposureSpeedMul;\n\nuniform highp sampler2D "
            "sAvgLumTex;\nuniform highp sampler2D sPrevAdaptedLumTex;\n\nvoid main()\n{\n   // Sample average "
            "luminance from the centre of the texture\n   highp float currAvgLum = "
            "UnpackLuminanceExpFloat(texture2DLodCompat(sAvgLumTex, vec2(0.0, 0.0), 0.0));\n   highp float "
            "prevAdaptedLum = UnpackLuminanceExpFloat(texture2DLodCompat(sPrevAdaptedLumTex, vec2(0.0, 0.0), 0.0));\n  "
            " // The clamp value needs to be non-zero and positive, but small enough to not affect dark areas that "
            "legitimately need small values\n   float adaptiveLum = max(0.00001, CalcAdaptedLumRodsCones(currAvgLum, "
            "prevAdaptedLum, uTimeDelta, uExposureSpeedMul));\n   OutputLuminanceExpFloat(adaptiveLum);\n}\n");
        auto result = local_148->str();
        return result;
    }

} // namespace jag::postprocess
