// libs/hal/render/utils/RenderTypeUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    template <typename...> // 1 instantiations, e.g. <256ul>
    class FixedPrimitiveBatchData {
    public:
        FixedPrimitiveBatchData();
        void AddPrimitiveBatch(int arg1, int arg2);
        void GetBatchCount() const;
        ~FixedPrimitiveBatchData();
    };

    // 0x1007b9610
    void FixedPrimitiveBatchData<256ul>::AddPrimitiveBatch(int arg1, int arg2) {
        int local_18;
        int local_14;

        _local_18 = (((uint64_t)arg2 << 32) | (uint32_t)arg1);
        push_back(local_18);
        ((this + 1064))->push_back(local_14);
    }

    // 0x1007b9650
    void FixedPrimitiveBatchData<256ul>::GetBatchCount() const {
        size();
    }

    // 0x100be3370
    unsigned int GetFormatByteCount(Format format) {
        unsigned int uVar1 = GetFormatBitCount(format);
        if ((uVar1 & 7) != 0) {
            LogAssert("bitCount % 8 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/utils/"
                      "RenderTypeUtils.h",
                      31, "Attempted to retrieve byte count for a format bit count (%u) that is not divisible by 8",
                      (unsigned long)uVar1);
        }
        return uVar1 >> 3;
    }

} // namespace jag::render
