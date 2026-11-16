// projects/osclient/hiscores/HiscoresEntry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class HiscoresEntry {
    public:
        HiscoresEntry();

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[4];
        undefined8 field_8; // offset 8
    };

    // 0x1001a2bd0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HiscoresEntry::HiscoresEntry(): jumps straight to the base-object constructor

    // 0x1001a2cd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ClientGosubFrame::ClientGosubFrame(): jumps straight to the base-object constructor

    // 0x1001a2ce0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ClientGosubFrame::~ClientGosubFrame(): jumps straight to the base-object destructor

    // 0x1001a2cf0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ClientGosubFrame::ClientGosubFrame()
    void ClientGosubFrame::ClientGosubFrame() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_16 = 4294967295;
        new (&field_24) eastl::vector<int, eastl::allocator>();
        new (&field_56) eastl::vector<eastl::string, eastl::allocator>();
    }

    // 0x1001a2d50, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ClientGosubFrame::~ClientGosubFrame()
    void ClientGosubFrame::~ClientGosubFrame() {
        (&field_56)->~vector();
        (&field_24)->~vector();
        ~shared_ptr();
    }

    // 0x1001a3030, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // HiscoresEntry::HiscoresEntry()
    void HiscoresEntry::HiscoresEntry() {
        field_0 = 4294967295;
        field_8 = 18446744073709551615;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1001a3930, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_base::IncRefIfNZ()
    ulong ref_counter_base::IncRefIfNZ() {
        byte bVar1;
        int iVar2;
        undefined8 in_RAX;
        ulong unaff_RBX;
        undefined8 uStack_28;

        uStack_28 = in_RAX;
        do {
            iVar2 = (&field_8)->operator_cast_to_int();
            uStack_28 = CONCAT44(iVar2, (undefined4)uStack_28);
            if (iVar2 == 0) {
                unaff_RBX = 0;
                break;
            }
            bVar1 =
                ref_counter_atomic_type_compare_exchange((atomic*)&field_8, (int*)((long)&uStack_28 + 4), iVar2 + 1);
            unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8), (byte)unaff_RBX | bVar1);
        } while (bVar1 != 1);
        return unaff_RBX & 4294967041;
    }

    // 0x1001a39a0, 16 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_atomic_type_compare_exchange(std::atomic<int>&, int&, int)
    /* ref_counter_atomic_type_compare_exchange(std::atomic<int>&, int&, int) */

    void ref_counter_atomic_type_compare_exchange(atomic* param_1, int* param_2, int param_3) {
        std::__atomic_base<int, false>::compare_exchange_strong();
    }

} // namespace jag
