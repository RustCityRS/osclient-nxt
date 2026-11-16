// libs/core/utils/EndiannessReorder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1001a0130
    void ByteReorder<EndianSwap, short>::swap(short& arg1) {
        arg1 = arg1 << 8 | (unsigned short)*arg1 >> 8;
    }

    // 0x1001a0140
    void PacketT<Array<unsigned char>>::pArrayBuffer(const unsigned char* arg1, unsigned long arg2,
                                                     unsigned long arg3) {
        unsigned long uVar1;
        long lVar2;
        unsigned long* puVar3;
        unsigned long local_38;
        unsigned long local_30;

        if (arg3 != 0) {
            lVar2 = *(long*)(this + 24);
            local_30 = arg3;
            uVar1 = end();
            if (uVar1 < arg3 + lVar2) {
                LogAssert(
                    "m_pos + size <= m_data.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 325,
                    nullptr);
            }
            if (arg1 == nullptr) {
                LogAssert(
                    "val != nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 326,
                    nullptr);
            }
            lVar2 = end();
            uVar1 = *(unsigned long*)(this + 24);
            local_38 = lVar2 - uVar1;
            puVar3 = std::min<unsigned long>(local_30, local_38);
            local_30 = *puVar3;
            _memcpy((void*)(*this)[uVar1], arg1 + arg2, local_30);
            *(unsigned long*)(this + 24) = *(long*)(this + 24) + local_30;
        }
    }

} // namespace jag
