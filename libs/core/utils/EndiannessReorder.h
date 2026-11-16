// libs/core/utils/EndiannessReorder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1001a0130, 16 bytes, inline, placed by debug map only (low confidence)
    // ByteReorder<EndianSwap, short>::swap(short&)
    /* ByteReorder<EndianSwap, unsigned short>::swap(unsigned short&) */

    void ByteReorder<EndianSwap, unsigned short>::swap(ushort* param_1) {
        *param_1 = *param_1 << 8 | *param_1 >> 8;
    }

    // 0x1001a0140, 224 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pArrayBuffer(unsigned char const*, unsigned long, unsigned long)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::pArrayBuffer(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  uchar* param_1, ulong param_2, ulong param_3) {
        ulong uVar1;
        long lVar2;
        ulong* puVar3;
        void* pvVar4;
        ulong local_38;
        ulong local_30;

        if (param_3 != 0) {
            lVar2 = *(long*)(this + 24);
            local_30 = param_3;
            uVar1 = end();
            if (uVar1 < param_3 + lVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "m_pos + size <= m_data.size()",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 325,
                    (char*)0);
            }
            if (param_1 == (uchar*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "val != nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl", 326,
                    (char*)0);
            }
            lVar2 = end();
            uVar1 = *(ulong*)(this + 24);
            local_38 = lVar2 - uVar1;
            puVar3 = std::min<unsigned long>(&local_30, &local_38);
            local_30 = *puVar3;
            pvVar4 = (void*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar1);
            _memcpy(pvVar4, param_1 + param_2, local_30);
            *(ulong*)(this + 24) = *(long*)(this + 24) + local_30;
        }
    }

} // namespace jag
