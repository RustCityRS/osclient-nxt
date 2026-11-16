// libs/graphics/postprocess/shaders/BrightPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class BrightPass {
    public:
        BrightPass* BuildFSFragment(ToneMapOperator, LuminanceShaderOutputFormat);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009b8cf0, 272 bytes, placed by class name and debug map
    // BrightPass::BuildFSFragment(ToneMapOperator, LuminanceShaderOutputFormat)
    BrightPass* BrightPass::BuildFSFragment(undefined4 param_2, undefined4 param_3) {
        ostream* poVar1;
        char* pcVar2;
        undefined1 local_158[280];
        ToneMapOperators local_40[24];

        new (local_158) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        local_40->BuildFragment(param_2);
        poVar1 = (ostream*)(local_158 + 16);
        std::operator<<(poVar1, (basic_string*)local_40);
        local_40->~basic_string();
        local_40->BuildUnpackFragment(param_3);
        std::operator<<(poVar1, (basic_string*)local_40);
        local_40->~basic_string();
        pcVar2 = (char*)graphics::shadersourceprovider::GetShaderString(4);
        std::operator<<(poVar1, pcVar2);
        str();
        local_158->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::postprocess

namespace jag::postprocess::luminance {
    // 0x1009b8f00, 16 bytes, inline, placed by debug map only (low confidence)
    // IsPowerOfTwo(unsigned int)
    undefined4 IsPowerOfTwo(uint param_1) {
        return CONCAT31((int3)(param_1 - 1 >> 8), (param_1 & param_1 - 1) == 0);
    }

} // namespace jag::postprocess::luminance
