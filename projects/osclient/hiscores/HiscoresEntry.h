// projects/osclient/hiscores/HiscoresEntry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class HiscoresEntry {
    public:
        HiscoresEntry();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[4];
        uint64_t field_8;
    };

    // 0x1001a2cf0
    ClientGosubFrame::ClientGosubFrame() : shared_ptr(), field_16(4294967295) {}

    // 0x1001a2d50
    ClientGosubFrame::~ClientGosubFrame() {
        field_56.~vector();
        field_24.~vector();
    }

    // 0x1001a3030
    HiscoresEntry::HiscoresEntry() : field_0(4294967295), field_8(18446744073709551615) {}

} // namespace jag::oldscape

namespace jag {
    // 0x1001a3930
    unsigned long ref_counter_base::IncRefIfNZ() {
        uint8_t bVar1;
        int iVar2;
        uint64_t in_RAX;
        unsigned long unaff_RBX;

        uint64_t uStack_28 = in_RAX;
        do {
            iVar2 = (&field_8)->operator_cast_to_int();
            uStack_28 = (((uint64_t)iVar2 << 32) | (uint32_t)((uint32_t)uStack_28));
            if (iVar2 == 0) {
                unaff_RBX = 0;
                break;
            }
            bVar1 = ref_counter_atomic_type_compare_exchange((atomic<int>*)&field_8, (int*)((long)&uStack_28 + 4),
                                                             iVar2 + 1);
            unaff_RBX = (((uint64_t)((int64_t)(unaff_RBX >> 8)) << 8) | (uint8_t)((uint8_t)unaff_RBX | bVar1));
        } while (bVar1 != 1);
        return unaff_RBX & 4294967041;
    }

    // 0x1001a39a0
    void ref_counter_atomic_type_compare_exchange(std::atomic<int>& atomic, int& arg2, int arg3) {
        memory_order in_ECX;

        atomic.compare_exchange_strong(arg2, arg3, in_ECX);
    }

} // namespace jag
