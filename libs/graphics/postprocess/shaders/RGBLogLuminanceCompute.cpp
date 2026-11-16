// libs/graphics/postprocess/shaders/RGBLogLuminanceCompute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class RGBLogLuminanceCompute {
    public:
        auto BuildFirstPassCSFragment(render::Format format, bool arg2, bool arg3, bool arg4);
        auto BuildSecondPassCSFragment(render::Format format, bool arg2, bool arg3, bool arg4);
        void BuildCommonCSFragment(render::ComputeShaderSourceStream& computeShaderSourceStream, render::Format format,
                                   unsigned int arg3, bool arg4, bool arg5, bool arg6);
    };

    // 0x1009b5c10
    auto RGBLogLuminanceCompute::BuildFirstPassCSFragment(render::Format format, bool arg2, bool arg3, bool arg4) {
        uint64_t in_register_00000081;
        uint8_t local_150[284];

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        new (local_150) render::ComputeShaderSourceStream(2, 2, 2, 2, 2, 2, 24);
        BuildCommonCSFragment((ComputeShaderSourceStream*)local_150, format, 8, arg2, arg3, (uint8_t)local_34);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_150 + 16),
                        "void main()\n{\n   FirstPassEntryPoint();\n}\n");
        auto result = local_150->str();
        return result;
    }

    // 0x1009b5cf0
    auto RGBLogLuminanceCompute::BuildSecondPassCSFragment(render::Format format, bool arg2, bool arg3, bool arg4) {
        uint64_t in_register_00000081;
        uint8_t local_150[284];

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        new (local_150) render::ComputeShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        BuildCommonCSFragment((ComputeShaderSourceStream*)local_150, format, 2, arg2, arg3, (uint8_t)local_34);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_150 + 16),
                        "void main()\n{\n   SecondPassEntryPoint();\n}\n");
        auto result = local_150->str();
        return result;
    }

    // 0x1009b9430
    void RGBLogLuminanceCompute::BuildCommonCSFragment(render::ComputeShaderSourceStream& computeShaderSourceStream,
                                                       render::Format format, unsigned int arg3, bool arg4, bool arg5,
                                                       bool arg6) {
        uint8_t** basic_ostream = &computeShaderSourceStream.field_16;
        auto pcVar1 = graphics::shadersourceprovider::GetShaderString(28);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        pcVar1 = "r32f";
        if (format != 11) {
            if (format == 21) {
                pcVar1 = "r16f";
            } else {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "shaders/RGBLogLuminanceCompute.cpp",
                          34, "Unsupported luminance format");
            }
        }
        basic_ostream<char, std::char_traits<char> _>* pbVar2 =
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream,
                            "\nuniform highp sampler2D sSourceTex;\nlayout(");
        pbVar2 = std::operator<<(pbVar2, pcVar1);
        pbVar2 = std::operator<<(pbVar2, ", binding = 0) uniform readonly highp image2D uPrevAdaptedLumTex;\nlayout(");
        pbVar2 = std::operator<<(pbVar2, pcVar1);
        pbVar2 = std::operator<<(pbVar2, ", binding = 1) uniform writeonly highp image2D uTargetAvgLumTex;\nlayout(");
        pbVar2 = std::operator<<(pbVar2, pcVar1);
        std::operator<<(pbVar2, ", binding = 2) uniform writeonly highp image2D uTargetAdaptedLumTex;\n");
        if (arg4) {
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream,
                            "\n#define AVG_LUMINANCE_FILTER_COMPUTE_DOWNSAMPLE_DEBUG 1\n");
            pbVar2 = std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, "\nlayout(");
            pbVar2 = std::operator<<(pbVar2, pcVar1);
            pbVar2 = std::operator<<(
                pbVar2, ", binding = 3) uniform writeonly highp image2D uDebugTargetAvgLumTex64x64;\nlayout(");
            pbVar2 = std::operator<<(pbVar2, pcVar1);
            pbVar2 = std::operator<<(
                pbVar2, ", binding = 4) uniform writeonly highp image2D uDebugTargetAvgLumTex32x32;\nlayout(");
            pbVar2 = std::operator<<(pbVar2, pcVar1);
            pbVar2 = std::operator<<(
                pbVar2, ", binding = 5) uniform writeonly highp image2D uDebugTargetAvgLumTex16x16;\nlayout(");
            pbVar2 = std::operator<<(pbVar2, pcVar1);
            pbVar2 = std::operator<<(
                pbVar2, ", binding = 6) uniform writeonly highp image2D uDebugTargetAvgLumTex8x8;\nlayout(");
            pbVar2 = std::operator<<(pbVar2, pcVar1);
            pcVar1 = ", binding = 7) uniform writeonly highp image2D uDebugTargetAvgLumTex2x2;\n";
        } else {
            pcVar1 = "\n#define AVG_LUMINANCE_FILTER_COMPUTE_DOWNSAMPLE_DEBUG 0\n";
            pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)basic_ostream;
        }
        std::operator<<(pbVar2, pcVar1);
        pcVar1 = "\n#define AVG_LUMINANCE_FILTER_COMPUTE_DOWNSAMPLE_LOG_ENCODE 0\n";
        if (arg5) {
            pcVar1 = "\n#define AVG_LUMINANCE_FILTER_COMPUTE_DOWNSAMPLE_LOG_ENCODE 1\n";
        }
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        pcVar1 = "\n#define AVG_LUMINANCE_FILTER_LINEAR_ATTEN_APPROX 0\n";
        if (arg6) {
            pcVar1 = "\n#define AVG_LUMINANCE_FILTER_LINEAR_ATTEN_APPROX 1\n";
        }
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
        pbVar2 = std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream,
                                 "\nconst uint cGroupSharedDim = ");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, arg3);
        std::operator<<(pbVar2, "u;\nshared highp float gsLogLuminanceSamples[cGroupSharedDim * cGroupSharedDim];\n");
        pbVar2 =
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, "\nlayout(local_size_x = ");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, arg3);
        pbVar2 = std::operator<<(pbVar2, ", local_size_y = ");
        pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, arg3);
        std::operator<<(pbVar2, ", local_size_z = 1) in;\n");
        pcVar1 = graphics::shadersourceprovider::GetShaderString(52);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)basic_ostream, pcVar1);
    }

} // namespace jag::postprocess
