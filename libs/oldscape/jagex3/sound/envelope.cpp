// libs/oldscape/jagex3/sound/envelope.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "envelope.h"

namespace jag::oldscape::sound {
    // 0x100295d40, 208 bytes, base-object constructor, placed by class name and debug map
    // Envelope::Envelope()
    void Envelope::Envelope() {
        undefined1* this_00;
        undefined1* this_01;
        undefined4* puVar1;

        field_0 = 0;
        field_4 = 0;
        field_8 = 0;
        field_12 = true;
        this_00 = &field_40;
        field_16 = 0;
        field_20 = 0;
        field_24 = 0;
        field_28 = 0;
        field_32 = 0;
        field_36 = 0;
        new (this_00) Array<int, eastl::allocator>(2);
        this_01 = &field_64;
        new (this_01) Array<int, eastl::allocator>(2);
        field_36 = 2;
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, 0);
        *puVar1 = 0;
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, 1);
        *puVar1 = 65535;
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, 0);
        *puVar1 = 0;
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, 1);
        *puVar1 = 65535;
    }

    // 0x100295e10, 16 bytes, complete-object constructor, placed by class name and debug map
    // Envelope::Envelope(): jumps straight to the base-object constructor

    // 0x100295e20, 64 bytes, placed by class name and debug map
    // Envelope::Load(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Envelope::Load(PacketJ* param_1) {
        byte bVar1;
        undefined4 uVar2;

        bVar1 = param_1->g1();
        field_8 = (uint)bVar1;
        uVar2 = param_1->g4();
        field_0 = uVar2;
        uVar2 = param_1->g4();
        field_4 = uVar2;
        LoadPoints(this, param_1);
    }

    // 0x100295e60, 192 bytes, placed by class name and debug map
    // Envelope::LoadPoints(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Envelope::LoadPoints(PacketJ* param_1) {
        byte bVar1;
        ushort uVar2;
        uint* puVar3;
        ulong uVar4;

        bVar1 = param_1->g1();
        field_36 = (uint)bVar1;
        (&field_40, (ulong)bVar1, 3)->set_max_size();
        (&field_64, (long)(int)field_36, 3)->set_max_size();
        if (0 < (int)field_36) {
            uVar4 = 0;
            do {
                uVar2 = param_1->g2();
                puVar3 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40, uVar4);
                *puVar3 = (uint)uVar2;
                uVar2 = param_1->g2();
                puVar3 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_64, uVar4);
                *puVar3 = (uint)uVar2;
                uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)field_36);
        }
    }

    // 0x100295f20, 80 bytes, placed by class name and debug map
    // Envelope::LoadUncompressed(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Envelope::LoadUncompressed(PacketJ* param_1) {
        undefined4* puVar1;

        Load(this, param_1);
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40, 0);
        *puVar1 = 0;
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40,
                                                                       (long)(int)field_36 - 1);
        *puVar1 = 65535;
        field_12 = field_8 != 0;
    }

    // 0x100295f70, 176 bytes, placed by class name and debug map
    // Envelope::SaveUncompressed(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void Envelope::SaveUncompressed(PacketJ* param_1) {
        uint* puVar1;
        ulong uVar2;

        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_8);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, field_0);
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, field_4);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_36);
        if (0 < (int)field_36) {
            uVar2 = 0;
            do {
                puVar1 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40, uVar2);
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)*puVar1);
                puVar1 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_64, uVar2);
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)*puVar1);
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)(int)field_36);
        }
    }

    // 0x100296020, 32 bytes, placed by class name and debug map
    // Envelope::GenInit()
    void Envelope::GenInit() {
        field_16 = 0;
        field_20 = 0;
        field_24 = 0;
        field_28 = 0;
        field_32 = 0;
    }

    // 0x100296040, 176 bytes, placed by class name and debug map
    // Envelope::GenNext(int)
    int Envelope::GenNext(int param_1) {
        uint uVar1;
        int iVar2;
        int* piVar3;

        if (field_16 <= field_32) {
            uVar1 = field_20;
            field_20 = uVar1 + 1;
            piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_64,
                                                                    (long)(int)uVar1);
            field_28 = *piVar3 << 15;
            if ((int)field_36 <= (int)field_20) {
                field_20 = field_36 - 1;
            }
            piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_40,
                                                                    (long)(int)field_20);
            iVar2 = (int)((double)param_1 * 1.52587890625e-05 * (double)*piVar3);
            field_16 = iVar2;
            if (field_32 < iVar2) {
                piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_64,
                                                                        (long)(int)field_20);
                field_24 = (*piVar3 * 32768 - field_28) / (field_16 - field_32);
            }
        }
        iVar2 = field_28;
        field_28 = field_24 + iVar2;
        field_32 = field_32 + 1;
        return iVar2 >> 15;
    }

} // namespace jag::oldscape::sound
