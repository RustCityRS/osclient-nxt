// libs/graphics/postprocess/shaders/LuminanceUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class LuminanceUtils {
    public:
        LuminanceUtils* BuildFragment(LuminanceShaderOutputFormat);
        LuminanceUtils* BuildUnpackFragment(LuminanceShaderOutputFormat);
        static /* 4 bytes */ PACKED_FLOAT_LOG_RANGE;               // = 32
        static float /* 4 bytes */ PACKED_FLOAT_LOG_RANGE_INVERSE; // = 0.03125f

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100d4fd08, 4 bytes, __const
    LuminanceUtils::PACKED_FLOAT_LOG_RANGE = 32;

    // 0x100d4fd0c, 4 bytes, __const
    float LuminanceUtils::PACKED_FLOAT_LOG_RANGE_INVERSE = 0.03125f;

    // 0x1009b9140, 304 bytes, placed by class name and debug map
    // LuminanceUtils::BuildFragment(LuminanceShaderOutputFormat)
    LuminanceUtils* LuminanceUtils::BuildFragment(int param_2) {
        char* pcVar1;
        ostream* poVar2;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_158[16];
        ostream local_148[264];
        LuminanceUtils local_40[24];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_158);
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(28);
        poVar2 = std::operator<<(local_148, pcVar1);
        BuildUnpackFragment(local_40, param_2);
        std::operator<<(poVar2, (basic_string*)local_40);
        local_40->~basic_string();
        if (param_2 == 0) {
            std::operator<<(
                local_148,
                "void OutputLuminanceLogFloat(float valueToOutput)\n{\n    gl_FragColor.r = valueToOutput;\n}\n\nvoid "
                "OutputLuminanceExpFloat(float valueToOutput)\n{\n    gl_FragColor.r = valueToOutput;\n}\n");
        } else {
            if (param_2 == 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/shaders/LuminanceUtils.cpp",
                                24, "Not implemented");
            }
            if (param_2 == 2) {
                poVar2 = std::operator<<(local_148, "void OutputLuminanceLogFloat(float valueToOutput)\n{\n    "
                                                    "gl_FragColor = PackFloatToRGBA(valueToOutput * ");
                poVar2 = (ostream*)std::ostream::operator<<(poVar2, 0.03125);
                std::operator<<(poVar2, " + 0.5);\n}\n\nvoid OutputLuminanceExpFloat(float valueToOutput)\n{\n    "
                                        "gl_FragColor = PackFloatToRGBA(valueToOutput);\n}\n");
            }
        }
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_158);
        return this;
    }

    // 0x1009b9270, 272 bytes, placed by class name and debug map
    // LuminanceUtils::BuildUnpackFragment(LuminanceShaderOutputFormat)
    LuminanceUtils* LuminanceUtils::BuildUnpackFragment(int param_2) {
        char* pcVar1;
        ostream* poVar2;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_140[16];
        ostream local_130[264];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_140);
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(42);
        poVar2 = std::operator<<(local_130, pcVar1);
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(109);
        std::operator<<(poVar2, pcVar1);
        if (param_2 == 0) {
            std::operator<<(
                local_130,
                "float UnpackLuminanceLogFloat(vec4 valueToUnpack)\n{\n    return valueToUnpack.r;\n}\n\nfloat "
                "UnpackLuminanceExpFloat(vec4 valueToUnpack)\n{\n    return valueToUnpack.r;\n}\n");
        } else {
            if (param_2 == 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "postprocess/shaders/LuminanceUtils.cpp",
                                76, "Not implemented");
            }
            if (param_2 == 2) {
                poVar2 = std::operator<<(local_130, "float UnpackLuminanceLogFloat(vec4 valueToUnpack)\n{\n    return "
                                                    "(UnpackRGBAToFloat(valueToUnpack) - 0.5) * ");
                poVar2 = (ostream*)std::ostream::operator<<(poVar2, 32);
                std::operator<<(poVar2, ".0;\n}\n\nfloat UnpackLuminanceExpFloat(vec4 valueToUnpack)\n{\n    return "
                                        "UnpackRGBAToFloat(valueToUnpack);\n}\n");
            }
        }
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_140);
        return this;
    }

} // namespace jag::postprocess
