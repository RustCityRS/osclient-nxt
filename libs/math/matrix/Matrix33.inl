// libs/math/matrix/Matrix33.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::math {
    // 0x10017a0d0
    Matrix33T<float> Matrix33Scaling<float>(float arg1, float arg2, float arg3) {
        Matrix33T<float>* in_RDI;

        new (in_RDI) Matrix33T<float>(arg1, 0.0, 0.0, 0.0, arg2, 0.0, 0.0, 0.0, arg3);
    }

    // 0x10017a110: ColourHSL::ColourHSL() has the same machine code as Vector3T<float>::Vector3T()

} // namespace jag::math

namespace jag::render {
    // 0x10017a110: DispatchCallParams::DispatchCallParams() has the same machine code as math::Vector3T<float>::Vector3T()

    // 0x10017a110: QueryView::QueryView() has the same machine code as math::Vector3T<float>::Vector3T()

} // namespace jag::render

namespace jag::graphics {
    // 0x10017a110: TextRunCharacter::TextRunCharacter() has the same machine code as math::Vector3T<float>::Vector3T()

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x10017a110: FaceNormal::FaceNormal() has the same machine code as jag::math::Vector3T<float>::Vector3T()

} // namespace jag::oldscape::dash3d
