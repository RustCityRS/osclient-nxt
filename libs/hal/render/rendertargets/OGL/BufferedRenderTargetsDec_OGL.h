// libs/hal/render/rendertargets/OGL/BufferedRenderTargetsDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class BufferedImageData {
    public:
        BufferedImageData();
        ~BufferedImageData();

        // data members, from how the methods use this: 48 bytes
        BufferedRenderTargets* field_0; // offset 0
        char _unknown_8[24];
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
    };

    // 0x100be5560, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BufferedImageData::BufferedImageData(): jumps straight to the base-object constructor

    // 0x100be5570, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BufferedImageData::~BufferedImageData(): jumps straight to the base-object destructor

} // namespace jag::render

namespace jag::fixedfunction {
    // 0x100be5720, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(render::BufferedRenderTargets::WriteFinished()::$_3&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x100be6200, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector4T<float>::Vector4T(float): jumps straight to the base-object constructor

} // namespace jag::math
