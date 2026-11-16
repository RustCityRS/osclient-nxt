// libs/math/matrix/Matrix33.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::math {
    // 0x10017a0d0, 64 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33Scaling<float>(float, float, float)
    math* Matrix33Scaling<float>(float param_1, float param_2, float param_3) {
        new (this) Matrix33T<float>(param_1, 0.0, 0.0, 0.0, param_2, 0.0, 0.0, 0.0, param_3);
        return this;
    }

    // 0x10017a110, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T(): jumps straight to the base-object constructor

    // 0x10017a110: the linker folded this into Vector3T<float>::Vector3T(), which has identical code
    ColourHSL::ColourHSL();

} // namespace jag::math

namespace jag::render {
    // 0x10017a110: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    DispatchCallParams::DispatchCallParams();

    // 0x10017a110: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    QueryView::QueryView();

} // namespace jag::render

namespace jag::graphics {
    // 0x10017a110: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    TextRunCharacter::TextRunCharacter();

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x10017a110: the linker folded this into jag::math::Vector3T<float>::Vector3T(), which has identical code
    FaceNormal::FaceNormal();

} // namespace jag::oldscape::dash3d
