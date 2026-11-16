// libs/math/margins/Margins.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

namespace jag::math {
    // 0x100c64760
    void GetEmptyMargins() {
        uint64_t local_28;
        uint64_t uStack_20;

        if (GetEmptyMargins()::emptyMargins == '\0') {
            if (___cxa_guard_acquire(&GetEmptyMargins()::emptyMargins) != 0) {
                local_28 = 0;
                uStack_20 = 0;
                new ((fixed_vector<int, 4ul>*)&GetEmptyMargins()::emptyMargins)
                    eastl::fixed_vector<int, 4ul>(&local_28, *4);
                ___cxa_atexit(PTR__fixed_vector_100ee6ce0, &GetEmptyMargins()::emptyMargins, 4294967296);
                ___cxa_guard_release(&GetEmptyMargins()::emptyMargins);
            }
        }
        return &GetEmptyMargins()::emptyMargins;
    }

} // namespace jag::math
