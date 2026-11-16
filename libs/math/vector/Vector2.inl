// libs/math/vector/Vector2.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x100102c90
    pair<int, unsigned int>* Vector2T<int>::operator=(const Vector2T<int>& vector2) {
        *(uint32_t*)this = *(uint32_t*)vector2;
        *(uint32_t*)(this + 4) = *(uint32_t*)(vector2 + 4);
        return this;
    }

    // 0x100102cf0
    Vector2T<int> operator- <int>(const Vector2T<int>& vector2) {
        uint64_t uVar1;
        uint8_t local_10[8];

        new (local_10) oldscape::sidebars::SideBarData(-*(int*)vector2, -*(int*)(vector2 + 4));
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

} // namespace jag::math
