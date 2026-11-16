// libs/game/shared/framework/input/event/KeyHeldInputEvent.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "KeyHeldInputEvent.h"

namespace jag::game {
    // 0x1002699e0: KeyHeldInputEvent::GetEventType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

    // 0x1006e45b0
    unsigned long KeyHeldInputEvent::EventOccurred(const MouseEvent* mouseEvent,
                                                   const eastl::vector<KeyEvent>& keyEvents, unsigned int arg3,
                                                   Keyboard& keyboard) const {
        bool cVar1;
        int* piVar3;
        unsigned long uVar4;
        unsigned int uVar5;
        unsigned long arg1;
        uint64_t unaff_R12;

        uint8_t* this_00 = &field_8;
        bool bVar6 = this_00->end() != 0;
        if (bVar6) {
            piVar3 = (int*)(*this_00)[0];
            cVar1 = keyboard.IsKeyDown(*piVar3);
            if (cVar1) {
                uVar5 = 1;
                do {
                    arg1 = (unsigned long)uVar5;
                    uVar4 = this_00->end();
                    bVar6 = arg1 < uVar4;
                    if (uVar4 <= arg1)
                        break;
                    piVar3 = (int*)(*this_00)[arg1];
                    cVar1 = keyboard.IsKeyDown(*piVar3);
                    uVar5 = uVar5 + 1;
                } while (cVar1);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar6) ^ 1) & 4294967295;
    }

    // 0x1006e4660
    KeyHeldInputEvent::KeyHeldInputEvent(PacketT<Array<unsigned char>>& arg1) : InputEvent() {
        unsigned int uVar2;
        unsigned int* puVar3;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_8;
        new (this_00) Array<unsigned int>();
        uint8_t bVar1 = arg1.g1();
        this_00->set_max_size((unsigned long)bVar1, 0);
        if (bVar1 != 0) {
            arg1_00 = 0;
            do {
                uVar2 = arg1.g1();
                puVar3 = (unsigned int*)(*this_00)[arg1_00];
                *puVar3 = uVar2 & 255;
                arg1_00 = arg1_00 + 1;
            } while (bVar1 != arg1_00);
        }
    }

    // 0x1006e4740
    void KeyHeldInputEvent::Pack(PacketT<Array<unsigned char>>& arg1) const {
        ID* pIVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_8;
        auto id = this_00->end();
        arg1.p1<unsigned long>(id);
        if (this_00->end() != 0) {
            uVar4 = 1;
            arg1_00 = 0;
            do {
                pIVar2 = (ID*)(*this_00)[arg1_00];
                arg1.p1<unsigned long>(*pIVar2);
                arg1_00 = (unsigned long)uVar4;
                uVar3 = this_00->end();
                uVar4 = uVar4 + 1;
            } while (arg1_00 < uVar3);
        }
    }

} // namespace jag::game
