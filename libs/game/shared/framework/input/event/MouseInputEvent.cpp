// libs/game/shared/framework/input/event/MouseInputEvent.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "MouseInputEvent.h"

namespace jag::game {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    MouseInputEvent::GetEventType() const;

    // 0x1006e4550, 16 bytes, complete-object constructor, placed by class name and debug map
    // MouseInputEvent::MouseInputEvent(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1006e48f0, 208 bytes, placed by class name
    // MouseInputEvent::EventOccurred(MouseEvent const*, eastl::vector<KeyEvent, eastl::allocator> const&, unsigned int, Keyboard&) const
    undefined8 MouseInputEvent::EventOccurred(MouseEvent* param_1, vector* param_2, uint param_3, Keyboard* param_4) {
        char cVar1;
        long lVar2;
        int* piVar3;
        ulong uVar4;
        uint uVar5;
        undefined1* this_00;
        ulong uVar6;

        if (param_1 == (MouseEvent*)0) {
            if (field_8 == 4294967295) {
                return 1;
            }
            return 0;
        }
        uVar5 = *(uint*)param_1;
        cVar1 = param_4->IsMetaDown();
        if (cVar1 != '\0') {
            if (uVar5 == 0) {
                if (field_8 != 2) {
                    return 0;
                }
                goto LAB_1006e4931;
            }
            if (uVar5 == 3) {
                uVar5 = 5;
            }
        }
        if (field_8 != uVar5) {
            return 0;
        }
    LAB_1006e4931:
        if ((uint)param_1->field_32 < field_12) {
            return 0;
        }
        this_00 = &field_16;
        lVar2 = this_00->end();
        if (lVar2 != 0) {
            uVar5 = 1;
            uVar6 = 0;
            do {
                piVar3 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_00, uVar6);
                cVar1 = param_4->IsKeyDown(*piVar3);
                if (cVar1 == '\0') {
                    return 0;
                }
                uVar6 = (ulong)uVar5;
                uVar4 = this_00->end();
                uVar5 = uVar5 + 1;
            } while (uVar6 < uVar4);
        }
        return 1;
    }

    // 0x1006e49d0, 240 bytes, base-object constructor, placed by class name
    // MouseInputEvent::MouseInputEvent(PacketT<Array<unsigned char, eastl::allocator> >&)
    void MouseInputEvent::MouseInputEvent(PacketT* param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        byte bVar3;
        uint uVar4;
        long lVar5;
        uint* puVar6;
        ulong uVar7;
        ulong uVar8;

        new (this) InputEvent();
        field_0 = &PTR__MouseInputEvent_100f116e0;
        this_00 = &field_16;
        new (this_00) Array<unsigned int, eastl::allocator>();
        cVar2 = param_1->g1s();
        field_8 = (int)cVar2;
        bVar3 = param_1->g1();
        field_12 = (uint)bVar3;
        bVar3 = param_1->g1();
        this_00->set_max_size((ulong)bVar3, 0);
        lVar5 = this_00->end();
        if (lVar5 != 0) {
            uVar7 = 0;
            uVar8 = 1;
            do {
                uVar4 = param_1->g1();
                puVar6 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_00, uVar7);
                *puVar6 = uVar4 & 255;
                uVar7 = this_00->end();
                bVar1 = uVar8 < uVar7;
                uVar7 = uVar8;
                uVar8 = (ulong)((int)uVar8 + 1);
            } while (bVar1);
        }
    }

    // 0x1006e4ac0, 160 bytes, placed by class name
    // MouseInputEvent::Pack(PacketT<Array<unsigned char, eastl::allocator> >&) const
    void MouseInputEvent::Pack(PacketT* param_1) {
        ulong uVar1;
        long lVar2;
        uint* puVar3;
        ulong uVar4;
        uint uVar5;
        undefined1* this_00;

        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_8);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (ulong)field_12);
        this_00 = &field_16;
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
