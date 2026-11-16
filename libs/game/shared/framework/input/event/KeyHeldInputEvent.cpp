// libs/game/shared/framework/input/event/KeyHeldInputEvent.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "KeyHeldInputEvent.h"

namespace jag::game {
    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    KeyHeldInputEvent::GetEventType() const;

    // 0x1006e4570, 16 bytes, complete-object constructor, placed by class name and debug map
    // KeyHeldInputEvent::KeyHeldInputEvent(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1006e45b0, 144 bytes, placed by class name and debug map
    // KeyHeldInputEvent::EventOccurred(MouseEvent const*, eastl::vector<KeyEvent, eastl::allocator> const&, unsigned int, Keyboard&) const
    ulong KeyHeldInputEvent::EventOccurred(MouseEvent* param_1, vector* param_2, uint param_3, Keyboard* param_4) {
        char cVar1;
        long lVar2;
        int* piVar3;
        ulong uVar4;
        uint uVar5;
        ulong uVar6;
        undefined8 unaff_R12;
        undefined1* this_00;
        bool bVar7;

        this_00 = &field_8;
        lVar2 = this_00->end();
        bVar7 = lVar2 != 0;
        if (bVar7) {
            piVar3 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                (Array<unsigned int, eastl::allocator>*)this_00, 0);
            cVar1 = param_4->IsKeyDown(*piVar3);
            if (cVar1 != '\0') {
                uVar5 = 1;
                do {
                    uVar6 = (ulong)uVar5;
                    uVar4 = this_00->end();
                    bVar7 = uVar6 < uVar4;
                    if (uVar4 <= uVar6)
                        break;
                    piVar3 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)this_00, uVar6);
                    cVar1 = param_4->IsKeyDown(*piVar3);
                    uVar5 = uVar5 + 1;
                } while (cVar1 != '\0');
            }
        }
        return (CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar7) ^ 1) & 4294967295;
    }

    // 0x1006e4660, 192 bytes, base-object constructor, placed by class name and debug map
    // KeyHeldInputEvent::KeyHeldInputEvent(PacketT<Array<unsigned char, eastl::allocator> >&)
    void KeyHeldInputEvent::KeyHeldInputEvent(PacketT* param_1) {
        undefined1* this_00;
        byte bVar1;
        uint uVar2;
        uint* puVar3;
        ulong uVar4;

        new (this) InputEvent();
        field_0 = &PTR__KeyHeldInputEvent_100f11660;
        this_00 = &field_8;
        new (this_00) Array<unsigned int, eastl::allocator>();
        bVar1 = param_1->g1();
        this_00->set_max_size((ulong)bVar1, 0);
        if (bVar1 != 0) {
            uVar4 = 0;
            do {
                uVar2 = param_1->g1();
                puVar3 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_00, uVar4);
                *puVar3 = uVar2 & 255;
                uVar4 = uVar4 + 1;
            } while (bVar1 != uVar4);
        }
    }

    // 0x1006e4740, 128 bytes, placed by class name
    // KeyHeldInputEvent::Pack(PacketT<Array<unsigned char, eastl::allocator> >&) const
    void KeyHeldInputEvent::Pack(PacketT* param_1) {
        ulong uVar1;
        long lVar2;
        uint* puVar3;
        ulong uVar4;
        uint uVar5;
        undefined1* this_00;

        this_00 = &field_8;
        uVar1 = this_00->end();
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, uVar1);
        lVar2 = this_00->end();
        if (lVar2 != 0) {
            uVar5 = 1;
            uVar1 = 0;
            do {
                puVar3 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_00, uVar1);
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)*puVar3);
                uVar1 = (ulong)uVar5;
                uVar4 = this_00->end();
                uVar5 = uVar5 + 1;
            } while (uVar1 < uVar4);
        }
    }

} // namespace jag::game
