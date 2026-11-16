// libs/hal/render/rendertargets/OGL/BufferedRenderTargetsDec_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class BufferedImageData {
    public:
        BufferedImageData();
        ~BufferedImageData();

    private:
        BufferedRenderTargets* field_0;
        uint8_t _unknown_8[24];
        uint64_t field_32;
        uint64_t field_40;
    };

} // namespace jag::render
