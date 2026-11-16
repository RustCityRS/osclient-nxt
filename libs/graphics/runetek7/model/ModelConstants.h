// libs/graphics/runetek7/model/ModelConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class FaceGroupRenderMasks {
    public:
        bool IsEmpty() const;
        bool IsHiddenByMask(unsigned char arg1) const;
        bool HasCustomisationMask(unsigned char arg1) const;
        bool HasCustomisationMask() const;
        FaceGroupRenderMasks();
        bool IsHidden() const;
        bool IsVisible() const;

    private:
        uint8_t field_0;
        uint8_t field_1;
    };

    // 0x100445540
    bool FaceGroupRenderMasks::IsEmpty() const {
        if (field_0 == 0) {
            return field_1 == '\0';
        }
        return false;
    }

    // 0x100445660
    bool FaceGroupRenderMasks::IsHiddenByMask(unsigned char arg1) const {
        return (field_0 & arg1) != 0;
    }

    // 0x1004456c0
    bool FaceGroupRenderMasks::HasCustomisationMask(unsigned char arg1) const {
        return (field_1 & arg1) != 0;
    }

    // 0x100445750
    bool FaceGroupRenderMasks::HasCustomisationMask() const {
        return field_1 != '\0';
    }

    // 0x100869890
    bool FaceGroupRenderMasks::IsHidden() const {
        return IsVisible() ^ 1;
    }

    // 0x10086b230
    bool FaceGroupRenderMasks::IsVisible() const {
        return field_0 == 0;
    }

} // namespace jag::graphics
