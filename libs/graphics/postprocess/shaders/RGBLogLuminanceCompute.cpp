// libs/graphics/postprocess/shaders/RGBLogLuminanceCompute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class RGBLogLuminanceCompute {
    public:
        RGBLogLuminanceCompute* BuildFirstPassCSFragment(render::Format, bool, bool, bool);
        RGBLogLuminanceCompute* BuildSecondPassCSFragment(render::Format, bool, bool, bool);
        void BuildCommonCSFragment(render::ComputeShaderSourceStream&, render::Format, unsigned int, bool, bool, bool);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009b5c10, 224 bytes, placed by class name and debug map
    // RGBLogLuminanceCompute::BuildFirstPassCSFragment(render::Format, bool, bool, bool)
    RGBLogLuminanceCompute* RGBLogLuminanceCompute::BuildFirstPassCSFragment(undefined4 param_2, undefined4 param_3,
                                                                             undefined4 param_4, undefined4 param_5) {
        undefined1 local_150[284];

        new (local_150) render::ComputeShaderSourceStream(2, 2, 2, 2, 2, 2, 24);
        BuildCommonCSFragment((ComputeShaderSourceStream*)local_150, param_2, 8, param_3, param_4, param_5);
        std::operator<<((ostream*)(local_150 + 16), "void main()\n{\n   FirstPassEntryPoint();\n}\n");
        str();
        local_150->~ComputeShaderSourceStream();
        return this;
    }

    // 0x1009b5cf0, 224 bytes, placed by class name and debug map
    // RGBLogLuminanceCompute::BuildSecondPassCSFragment(render::Format, bool, bool, bool)
    RGBLogLuminanceCompute* RGBLogLuminanceCompute::BuildSecondPassCSFragment(undefined4 param_2, undefined4 param_3,
                                                                              undefined4 param_4, undefined4 param_5) {
        undefined1 local_150[284];

        new (local_150) render::ComputeShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        BuildCommonCSFragment((ComputeShaderSourceStream*)local_150, param_2, 2, param_3, param_4, param_5);
        std::operator<<((ostream*)(local_150 + 16), "void main()\n{\n   SecondPassEntryPoint();\n}\n");
        str();
        local_150->~ComputeShaderSourceStream();
        return this;
    }

    // 0x1009b9430, 608 bytes, placed by class name
    // RGBLogLuminanceCompute::BuildCommonCSFragment(render::ComputeShaderSourceStream&, render::Format, unsigned int, bool, bool, bool)
    void RGBLogLuminanceCompute::BuildCommonCSFragment(long param_1, int param_2, uint param_3, char param_4,
                                                       char param_5, char param_6) {
        char* pcVar1;
        undefined8 uVar2;
        ostream* poVar3;
        ostream* poVar4;

        poVar4 = (ostream*)(param_1 + 16);
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(28);
        std::operator<<(poVar4, pcVar1);
        pcVar1 = "r32f";
        if (param_2 != 11) {
            if (param_2 == 21) {
                pcVar1 = "r16f";
            } else {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "postprocess/shaders/RGBLogLuminanceCompute.cpp",
                                    34, "Unsupported luminance format");
            }
        }
        poVar3 = std::operator<<(poVar4, "\nuniform highp sampler2D sSourceTex;\nlayout(");
        poVar3 = std::operator<<(poVar3, pcVar1);
        poVar3 = std::operator<<(poVar3, ", binding = 0) uniform readonly highp image2D uPrevAdaptedLumTex;\nlayout(");
        poVar3 = std::operator<<(poVar3, pcVar1);
        poVar3 = std::operator<<(poVar3, ", binding = 1) uniform writeonly highp image2D uTargetAvgLumTex;\nlayout(");
        poVar3 = std::operator<<(poVar3, pcVar1);
        std::operator<<(poVar3, ", binding = 2) uniform writeonly highp image2D uTargetAdaptedLumTex;\n");
        if (param_4 == '\0') {
            pcVar1 = "\n#define AVG_LUMINANCE_FILTER_COMPUTE_DOWNSAMPLE_DEBUG 0\n";
            poVar3 = poVar4;
        } else {
            std::operator<<(poVar4, "\n#define AVG_LUMINANCE_FILTER_COMPUTE_DOWNSAMPLE_DEBUG 1\n");
            poVar3 = std::operator<<(poVar4, "\nlayout(");
            poVar3 = std::operator<<(poVar3, pcVar1);
            poVar3 = std::operator<<(
                poVar3, ", binding = 3) uniform writeonly highp image2D uDebugTargetAvgLumTex64x64;\nlayout(");
            poVar3 = std::operator<<(poVar3, pcVar1);
            poVar3 = std::operator<<(
                poVar3, ", binding = 4) uniform writeonly highp image2D uDebugTargetAvgLumTex32x32;\nlayout(");
            poVar3 = std::operator<<(poVar3, pcVar1);
            poVar3 = std::operator<<(
                poVar3, ", binding = 5) uniform writeonly highp image2D uDebugTargetAvgLumTex16x16;\nlayout(");
            poVar3 = std::operator<<(poVar3, pcVar1);
            poVar3 = std::operator<<(
                poVar3, ", binding = 6) uniform writeonly highp image2D uDebugTargetAvgLumTex8x8;\nlayout(");
            poVar3 = std::operator<<(poVar3, pcVar1);
            pcVar1 = ", binding = 7) uniform writeonly highp image2D uDebugTargetAvgLumTex2x2;\n";
        }
        std::operator<<(poVar3, pcVar1);
        pcVar1 = "\n#define AVG_LUMINANCE_FILTER_COMPUTE_DOWNSAMPLE_LOG_ENCODE 0\n";
        if (param_5 != '\0') {
            pcVar1 = "\n#define AVG_LUMINANCE_FILTER_COMPUTE_DOWNSAMPLE_LOG_ENCODE 1\n";
        }
        std::operator<<(poVar4, pcVar1);
        pcVar1 = "\n#define AVG_LUMINANCE_FILTER_LINEAR_ATTEN_APPROX 0\n";
        if (param_6 != '\0') {
            pcVar1 = "\n#define AVG_LUMINANCE_FILTER_LINEAR_ATTEN_APPROX 1\n";
        }
        std::operator<<(poVar4, pcVar1);
        poVar3 = std::operator<<(poVar4, "\nconst uint cGroupSharedDim = ");
        poVar3 = (ostream*)std::ostream::operator<<(poVar3, param_3);
        std::operator<<(poVar3, "u;\nshared highp float gsLogLuminanceSamples[cGroupSharedDim * cGroupSharedDim];\n");
        poVar3 = std::operator<<(poVar4, "\nlayout(local_size_x = ");
        poVar3 = (ostream*)std::ostream::operator<<(poVar3, param_3);
        poVar3 = std::operator<<(poVar3, ", local_size_y = ");
        poVar3 = (ostream*)std::ostream::operator<<(poVar3, param_3);
        std::operator<<(poVar3, ", local_size_z = 1) in;\n");
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(52);
        std::operator<<(poVar4, pcVar1);
    }

} // namespace jag::postprocess
