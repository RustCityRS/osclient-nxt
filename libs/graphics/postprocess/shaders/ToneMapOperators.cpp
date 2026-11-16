// libs/graphics/postprocess/shaders/ToneMapOperators.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class ToneMapOperators {
    public:
        ToneMapOperators* BuildFragment(ToneMapOperator);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009a7f60, 304 bytes, placed by class name and debug map
    // ToneMapOperators::BuildFragment(ToneMapOperator)
    ToneMapOperators* ToneMapOperators::BuildFragment(undefined4 param_2) {
        char* pcVar1;
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_130[16];
        ostream local_120[264];

        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_stringstream(local_130);
        switch (param_2) {
        case 0:
            std::operator<<(local_120, "#define REINHARD_ADVANCED_RGB\n");
            break;
        case 1:
            std::operator<<(local_120, "#define REINHARD_ADVANCED_LUM\n");
            break;
        case 2:
            std::operator<<(local_120, "#define FILMIC_HEJL_DAWSON\n");
            break;
        case 3:
            std::operator<<(local_120, "#define FILMIC_UNCHARTED2\n");
            break;
        case 4:
            std::operator<<(local_120, "#define FILMIC_HABLE\n");
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                            "postprocess/shaders/ToneMapOperators.cpp",
                            34, "Unknown tone map operator");
        }
        pcVar1 = (char*)graphics::shadersourceprovider::GetShaderString(107);
        std::operator<<(local_120, pcVar1);
        str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_stringstream(local_130);
        return this;
    }

} // namespace jag::postprocess
