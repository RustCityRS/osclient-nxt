// libs/graphics/view/ViewStippleTransparencyParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class StipplePlaneClipParams {
    public:
        StipplePlaneClipParams();

    private:
        uint64_t field_0;
    };

} // namespace jag

namespace jag::graphics {
    // 0x1007e50f0
    void RenderPassBitSet::RemoveRenderPass(unsigned int arg1) {
        uint8_t bVar1 = (uint8_t)arg1 & 31;
        m_bits = m_bits & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
    }

} // namespace jag::graphics
