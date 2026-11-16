// projects/osclient/ui/InputFieldRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class InputFieldRenderer {
    public:
        void Draw(const InputFieldLayoutParams& inputFieldLayoutParams,
                  const InputFieldColourParams& inputFieldColourParams, const jag::graphics::TextRun& textRun,
                  const shared_ptr<jstring::PixfontGeneric>& pixfontGeneric, graphics::Pix2D& pix2D);
    };

    // 0x100104cf0
    CoordType<UICoordSpecializer>* CoordType<UICoordSpecializer>::operator+=(CoordType<UICoordSpecializer> coordType) {
        *(int*)this = *(int*)this + (int)coordType;
        return this;
    }

    // 0x100104d00
    uint32_t CoordType<UICoordSpecializer>::operator*(int arg1) const {
        return local_10;

        local_10.XPlotBlender<int>(arg1 * *(int*)this);
        return local_10[0];
    }

} // namespace jag::oldscape
