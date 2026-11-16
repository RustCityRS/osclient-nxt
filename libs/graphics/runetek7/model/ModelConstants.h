// libs/graphics/runetek7/model/ModelConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class FaceGroupRenderMasks {
    public:
        bool IsEmpty() const;
        bool IsHiddenByMask(unsigned char) const;
        bool HasCustomisationMask(unsigned char) const;
        HasCustomisationMask() const;
        FaceGroupRenderMasks();
        byte IsHidden() const;
        bool IsVisible() const;

        // data members, from how the methods use this: 2 bytes
        byte field_0;       // offset 0
        undefined1 field_1; // offset 1
    };

    // 0x100445540, 32 bytes, inline, placed by debug map only (low confidence)
    // FaceGroupRenderMasks::IsEmpty() const
    bool FaceGroupRenderMasks::IsEmpty() {
        if (field_0 == 0) {
            return field_1 == '\0';
        }
        return false;
    }

    // 0x100445660, 16 bytes, inline, placed by debug map only (low confidence)
    // FaceGroupRenderMasks::IsHiddenByMask(unsigned char) const
    bool FaceGroupRenderMasks::IsHiddenByMask(uchar param_1) {
        return (field_0 & param_1) != 0;
    }

    // 0x1004456c0, 16 bytes, inline, placed by debug map only (low confidence)
    // FaceGroupRenderMasks::HasCustomisationMask(unsigned char) const
    bool FaceGroupRenderMasks::HasCustomisationMask(uchar param_1) {
        return (field_1 & param_1) != 0;
    }

    // 0x100445750, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FaceGroupRenderMasks::HasCustomisationMask() const
    /* Material::IsRT7() const */

    bool Material::IsRT7() {
        return field_1 != '\0';
    }

    // 0x100869890, 16 bytes, inline, placed by class header (inline)
    // FaceGroupRenderMasks::IsHidden() const
    byte FaceGroupRenderMasks::IsHidden() {
        return IsVisible(this) ^ 1;
    }

    // 0x10086b230, 16 bytes, inline, placed by class header (inline)
    // FaceGroupRenderMasks::IsVisible() const
    bool FaceGroupRenderMasks::IsVisible() {
        return field_0 == 0;
    }

} // namespace jag::graphics
