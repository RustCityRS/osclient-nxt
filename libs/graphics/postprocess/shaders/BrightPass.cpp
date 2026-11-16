// libs/graphics/postprocess/shaders/BrightPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class BrightPass {
    public:
        auto BuildFSFragment(ToneMapOperator arg1, LuminanceShaderOutputFormat arg2);
    };

    // 0x1009b8cf0
    auto BrightPass::BuildFSFragment(ToneMapOperator arg1, LuminanceShaderOutputFormat arg2) {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_158[280];

        new (local_158) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_40 = ToneMapOperators::BuildFragment(param_2);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_158 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_40);
        local_40 = LuminanceUtils::BuildUnpackFragment(param_3);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_40);
        auto str = graphics::shadersourceprovider::GetShaderString(4);
        std::operator<<(basic_ostream, str);
        auto result = local_158->str();
        return result;
    }

} // namespace jag::postprocess

namespace jag::postprocess::luminance {
    // 0x1009b8f00
    void IsPowerOfTwo(unsigned int arg1) {
        return (arg1 & arg1 - 1) == 0;
    }

} // namespace jag::postprocess::luminance
