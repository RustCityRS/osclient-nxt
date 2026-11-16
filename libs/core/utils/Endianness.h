// libs/core/utils/Endianness.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100148150
    void ReorderToBE<unsigned short>(unsigned short& arg1) {
        if (IsLittleEndian() != '\0') {
            DoByteReorder<EndianSwap, unsigned short>(arg1);
        }
    }

    // 0x10014cc40
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4_alt1(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned long uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            LogAssert("m_pos + 4 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      773, nullptr);
        }
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        uint8_t* puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)arg1;
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 8);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 16);
        uVar2 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar2 + 1;
        puVar3 = (uint8_t*)(*this)[uVar2];
        *puVar3 = (char)((unsigned int)arg1 >> 24);
    }

    // 0x10014cd00
    oldscape::DesktopApplicationContext*
    placement_new<oldscape::DesktopApplicationContext, std::unique_ptr<Steam>&>(void* arg1,
                                                                                std::unique_ptr<Steam>& steam) {
        new (arg1) oldscape::DesktopApplicationContext(steam);
        return arg1;
    }

    // 0x10014cd20
    ref_counter_shared<oldscape::DesktopApplicationContext>*
    placement_new<ref_counter_shared<oldscape::DesktopApplicationContext>, int, oldscape::DesktopApplicationContext*&>(
        void* arg1, int&& arg2, oldscape::DesktopApplicationContext*& arg3) {
        new (arg1) ref_counter_shared<oldscape::DesktopApplicationContext>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag
