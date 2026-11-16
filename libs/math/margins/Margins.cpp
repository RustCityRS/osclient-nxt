// libs/math/margins/Margins.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

namespace jag::math {
    // 0x100c64760, 208 bytes, placed by debug map only (low confidence)
    // GetEmptyMargins()
    undefined1* GetEmptyMargins() {
        allocator local_30[8];
        undefined8 local_28;
        undefined8 uStack_20;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (GetEmptyMargins()::emptyMargins == '\0') {
            if (___cxa_guard_acquire(&GetEmptyMargins()::emptyMargins) != 0) {
                local_28 = 0;
                uStack_20 = 0;
                eastl::allocator::allocator(local_30, "EASTL fixed_vector");
                new (&GetEmptyMargins()::emptyMargins)
                    eastl::fixed_vector<int, 4ul, true, eastl::allocator>(&local_28, 4, local_30);
                ___cxa_atexit(PTR__fixed_vector_100ee6ce0, &GetEmptyMargins()::emptyMargins, 4294967296);
                ___cxa_guard_release(&GetEmptyMargins()::emptyMargins);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return &GetEmptyMargins()::emptyMargins;
    }

} // namespace jag::math
