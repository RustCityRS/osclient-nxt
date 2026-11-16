// libs/math/vector/Vector2.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x100102c90, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int>::operator=(Vector2T<int> const&)
    /* eastl::pair<int, unsigned int>::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int, unsigned int> const&)
    */

    pair<int, unsigned int>* eastl::pair<int, unsigned int>::operator=(pair<int, unsigned int>* this, pair* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
        return this;
    }

    // 0x100102cf0, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int> operator-<int>(Vector2T<int> const&)
    /* Vector2T<int> TEMPNAMEPLACEHOLDERVALUE(Vector2T<int> const&) */

    undefined8 operator-(Vector2T* param_1) {
        undefined8 uVar1;
        undefined1 local_10[8];

        new (local_10) oldscape::sidebars::SideBarData(-(int)field_0, -(int)field_4);
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

} // namespace jag::math
