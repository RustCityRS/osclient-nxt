// projects/osclient/ui/InputFieldRenderer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class InputFieldRenderer {
    public:
        void Draw(InputFieldLayoutParams const&, InputFieldColourParams const&, jag::graphics::TextRun const&,
                  shared_ptr<jstring::PixfontGeneric> const&, graphics::Pix2D&);
    };

    // 0x100102f10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // InputFieldLayoutParams::InputFieldLayoutParams(): jumps straight to the base-object constructor

    // 0x100104cf0, 16 bytes, inline, placed by debug map only (low confidence)
    // CoordType<UICoordSpecializer>::operator+=(CoordType<UICoordSpecializer>)
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(CoordType<UICoordSpecializer>)
    */

    CoordType<UICoordSpecializer>* CoordType<UICoordSpecializer>::operator+=(int param_2) {
        *(int*)this = *(int*)this + param_2;
        return this;
    }

    // 0x100104d00, 32 bytes, inline, placed by debug map only (low confidence)
    // CoordType<UICoordSpecializer>::operator*(int) const
    /* CoordType<UICoordSpecializer>::TEMPNAMEPLACEHOLDERVALUE(int) const
    */

    undefined4 CoordType<UICoordSpecializer>::operator*(int param_1) {
        undefined4 local_10[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_10, param_1 * *(int*)this);
        return local_10[0];
    }

} // namespace jag::oldscape
