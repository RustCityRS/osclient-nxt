// libs/graphics/postprocess/shaders/ToneMapOperators.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class ToneMapOperators {
    public:
        auto BuildFragment(ToneMapOperator arg1);
    };

    // 0x1009a7f60
    auto ToneMapOperators::BuildFragment(ToneMapOperator arg1) {
        basic_ostream<char, std::char_traits<char> _> local_120;

        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_130;
        switch (param_2) {
        case 0:
            std::operator<<(&local_120, "#define REINHARD_ADVANCED_RGB\n");
            break;
        case 1:
            std::operator<<(&local_120, "#define REINHARD_ADVANCED_LUM\n");
            break;
        case 2:
            std::operator<<(&local_120, "#define FILMIC_HEJL_DAWSON\n");
            break;
        case 3:
            std::operator<<(&local_120, "#define FILMIC_UNCHARTED2\n");
            break;
        case 4:
            std::operator<<(&local_120, "#define FILMIC_HABLE\n");
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                            "postprocess/shaders/ToneMapOperators.cpp",
                            34, "Unknown tone map operator");
        }
        auto str = graphics::shadersourceprovider::GetShaderString(107);
        std::operator<<(&local_120, str);
        auto result = local_130.str();
        return result;
    }

} // namespace jag::postprocess
