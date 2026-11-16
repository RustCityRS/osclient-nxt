// libs/core/utils/Endianness.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100148150, 48 bytes, inline, placed by debug map only (low confidence)
    // void ReorderToBE<unsigned short>(unsigned short&)
    /* void ReorderToBE<short>(short&) */

    void ReorderToBE<short>(short* param_1) {
        if (IsLittleEndian() != '\0') {
            DoByteReorder<EndianSwap, unsigned short>((ushort*)param_1);
        }
    }

    // 0x10014cc40, 192 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, BucketAllocatorEASTL> >::p4_alt1(int)
    void PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4_alt1(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this, int param_1) {
        long lVar1;
        ulong uVar2;
        undefined1* puVar3;

        lVar1 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + 4 <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      773, (char*)0);
        }
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)param_1;
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 8);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 16);
        uVar2 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar2 + 1;
        puVar3 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
        *puVar3 = (char)((uint)param_1 >> 24);
    }

    // 0x10014cd00, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::DesktopApplicationContext* placement_new<oldscape::DesktopApplicationContext, std::unique_ptr<Steam, std::default_delete<Steam> >&>(void*, std::unique_ptr<Steam, std::default_delete<Steam> >&)
    /* oldscape::DesktopApplicationContext*
   placement_new<oldscape::DesktopApplicationContext, std::unique_ptr<Steam,
   std::default_delete<Steam> >&>(void*, std::unique_ptr<Steam,
   std::default_delete<Steam> >&) */

    DesktopApplicationContext*
    jag::placement_new<oldscape::DesktopApplicationContext, std::unique_ptr<Steam, std::default_delete<Steam>>&>(
        void* param_1, unique_ptr* param_2) {
        oldscape::DesktopApplicationContext::DesktopApplicationContext(param_1, param_2);
        return param_1;
    }

    // 0x10014cd20, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::DesktopApplicationContext>* placement_new<ref_counter_shared<oldscape::DesktopApplicationContext>, int, oldscape::DesktopApplicationContext*&>(void*, int&&, oldscape::DesktopApplicationContext*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::DesktopApplicationContext>, int,
                                           oldscape::DesktopApplicationContext*&>(void* param_1, int* param_2,
                                                                                  DesktopApplicationContext** param_3) {
        ref_counter_shared<oldscape::DesktopApplicationContext>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
