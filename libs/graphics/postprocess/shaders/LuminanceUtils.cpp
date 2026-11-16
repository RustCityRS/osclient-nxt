// libs/graphics/postprocess/shaders/LuminanceUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class LuminanceUtils {
    public:
        auto BuildFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat);
        auto BuildUnpackFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat);
        static int32_t PACKED_FLOAT_LOG_RANGE;       // = 32
        static float PACKED_FLOAT_LOG_RANGE_INVERSE; // = 0.03125f
    };

    // 0x100d4fd08
    int32_t LuminanceUtils::PACKED_FLOAT_LOG_RANGE = 32;

    // 0x100d4fd0c
    float LuminanceUtils::PACKED_FLOAT_LOG_RANGE_INVERSE = 0.03125f;

    // 0x1009b9140
    auto LuminanceUtils::BuildFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat) {
        basic_ostream<char, std::char_traits<char> _> local_148;
        ReturnValue local_40;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_158;
        auto str = graphics::shadersourceprovider::GetShaderString(28);
        basic_ostream<char, std::char_traits<char> _>* pbVar1 = std::operator<<(&local_148, str);
        BuildUnpackFragment(&local_40, luminanceShaderOutputFormat);
        std::operator<<(pbVar1, &local_40);
        if (luminanceShaderOutputFormat == 0) {
            std::operator<<(
                &local_148,
                "void OutputLuminanceLogFloat(float valueToOutput)\n{\n    gl_FragColor.r = valueToOutput;\n}\n\nvoid "
                "OutputLuminanceExpFloat(float valueToOutput)\n{\n    gl_FragColor.r = valueToOutput;\n}\n");
        } else {
            if (luminanceShaderOutputFormat == 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/shaders/LuminanceUtils.cpp",
                                24, "Not implemented");
            }
            if (luminanceShaderOutputFormat == 2) {
                pbVar1 = std::operator<<(&local_148, "void OutputLuminanceLogFloat(float valueToOutput)\n{\n    "
                                                     "gl_FragColor = PackFloatToRGBA(valueToOutput * ");
                pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1,
                                                                                                  0.03125f);
                std::operator<<(pbVar1, " + 0.5);\n}\n\nvoid OutputLuminanceExpFloat(float valueToOutput)\n{\n    "
                                        "gl_FragColor = PackFloatToRGBA(valueToOutput);\n}\n");
            }
        }
        auto result = local_158.str();
        return result;
    }

    // 0x1009b9270
    auto LuminanceUtils::BuildUnpackFragment(LuminanceShaderOutputFormat luminanceShaderOutputFormat) {
        basic_ostream<char, std::char_traits<char> _> local_130;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_140;
        auto pcVar1 = graphics::shadersourceprovider::GetShaderString(42);
        basic_ostream<char, std::char_traits<char> _>* pbVar2 = std::operator<<(&local_130, pcVar1);
        pcVar1 = graphics::shadersourceprovider::GetShaderString(109);
        std::operator<<(pbVar2, pcVar1);
        if (luminanceShaderOutputFormat == 0) {
            std::operator<<(
                &local_130,
                "float UnpackLuminanceLogFloat(vec4 valueToUnpack)\n{\n    return valueToUnpack.r;\n}\n\nfloat "
                "UnpackLuminanceExpFloat(vec4 valueToUnpack)\n{\n    return valueToUnpack.r;\n}\n");
        } else {
            if (luminanceShaderOutputFormat == 1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/shaders/LuminanceUtils.cpp",
                                76, "Not implemented");
            }
            if (luminanceShaderOutputFormat == 2) {
                pbVar2 = std::operator<<(&local_130, "float UnpackLuminanceLogFloat(vec4 valueToUnpack)\n{\n    return "
                                                     "(UnpackRGBAToFloat(valueToUnpack) - 0.5) * ");
                pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2, 32);
                std::operator<<(pbVar2, ".0;\n}\n\nfloat UnpackLuminanceExpFloat(vec4 valueToUnpack)\n{\n    return "
                                        "UnpackRGBAToFloat(valueToUnpack);\n}\n");
            }
        }
        auto result = local_140.str();
        return result;
    }

} // namespace jag::postprocess
