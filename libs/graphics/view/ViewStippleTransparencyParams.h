// libs/graphics/view/ViewStippleTransparencyParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class StipplePlaneClipParams {
    public:
        StipplePlaneClipParams();

        // data members, from how the methods use this: 8 bytes
        undefined8 field_0; // offset 0
    };

    // 0x1007e4da0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // StipplePlaneClipParams::StipplePlaneClipParams(): jumps straight to the base-object constructor

} // namespace jag

namespace jag::graphics {
    // 0x1007e50f0, 32 bytes, inline, placed by debug map only (low confidence)
    // RenderPassBitSet::RemoveRenderPass(unsigned int)
    void RenderPassBitSet::RemoveRenderPass(uint param_1) {
        byte bVar1;

        bVar1 = (byte)param_1 & 31;
        field_0 = field_0 & (-2 << bVar1 | 4294967294U >> 32 - bVar1);
    }

} // namespace jag::graphics
