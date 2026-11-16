// libs/hal/render/utils/RenderTypeUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    template <typename...> // 1 instantiations, e.g. <256ul>
    class FixedPrimitiveBatchData {
    public:
        FixedPrimitiveBatchData();
        void AddPrimitiveBatch(int, int);
        void GetBatchCount() const;
        ~FixedPrimitiveBatchData();
    };

    // 0x1007b9500, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FixedPrimitiveBatchData<256ul>::FixedPrimitiveBatchData(): jumps straight to the base-object constructor

    // 0x1007b9610, 64 bytes, inline, placed by debug map only (low confidence)
    // FixedPrimitiveBatchData<256ul>::AddPrimitiveBatch(int, int)
    void FixedPrimitiveBatchData<256ul>::AddPrimitiveBatch(int param_1, int param_2) {
        undefined4 in_register_0000003c;

        eastl::fixed_vector<int, 256ul, true, eastl::allocator>::push_back(
            (int*)CONCAT44(in_register_0000003c, param_1));
        eastl::fixed_vector<int, 256ul, true, eastl::allocator>::push_back(
            (int*)CONCAT44(in_register_0000003c, param_1) + 266);
    }

    // 0x1007b9650, 16 bytes, inline, placed by debug map only (low confidence)
    // FixedPrimitiveBatchData<256ul>::GetBatchCount() const
    /* FixedIndexPrimitiveBatchData<300ul>::GetBatchCount() const */

    void FixedIndexPrimitiveBatchData<300ul>::GetBatchCount() {
        size();
    }

    // 0x1007b9660, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // FixedPrimitiveBatchData<256ul>::~FixedPrimitiveBatchData(): jumps straight to the base-object destructor

    // 0x100be3370, 80 bytes, inline, placed by __FILE__ string
    // GetFormatByteCount(Format)
    uint GetFormatByteCount() {
        uint uVar1;

        uVar1 = GetFormatBitCount();
        if ((uVar1 & 7) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("bitCount % 8 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                      "RenderTypeUtils.h",
                      31, "Attempted to retrieve byte count for a format bit count (%u) that is not divisible by 8",
                      (ulong)uVar1);
        }
        return uVar1 >> 3;
    }

} // namespace jag::render
