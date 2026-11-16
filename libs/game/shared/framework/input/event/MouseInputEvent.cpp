// libs/game/shared/framework/input/event/MouseInputEvent.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "MouseInputEvent.h"

namespace jag::game {
    // 0x100029ea0: MouseInputEvent::GetEventType() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1006e48f0
    uint64_t MouseInputEvent::EventOccurred(const MouseEvent* mouseEvent, const eastl::vector<KeyEvent>& keyEvents,
                                            unsigned int arg3, Keyboard& keyboard) const {
        int* piVar3;
        unsigned long uVar4;
        unsigned int uVar6;
        unsigned long arg1;

        if (mouseEvent == nullptr) {
            if (field_8 == -1) {
                return 1;
            }
            return 0;
        }
        int iVar5 = *(int*)mouseEvent;
        if (keyboard.IsMetaDown()) {
            if (iVar5 == 0) {
                if (field_8 != 2) {
                    return 0;
                }
                goto LAB_1006e4931;
            }
            if (iVar5 == 3) {
                iVar5 = 5;
            }
        }
        if (field_8 != iVar5) {
            return 0;
        }
    LAB_1006e4931:
        if ((unsigned int)mouseEvent->field_32 < field_12) {
            return 0;
        }
        uint8_t* this_00 = &field_16;
        if (this_00->end() != 0) {
            uVar6 = 1;
            arg1 = 0;
            do {
                piVar3 = (int*)(*this_00)[arg1];
                if (!(keyboard.IsKeyDown(*piVar3))) {
                    return 0;
                }
                arg1 = (unsigned long)uVar6;
                uVar4 = this_00->end();
                uVar6 = uVar6 + 1;
            } while (arg1 < uVar4);
        }
        return 1;
    }

    // 0x1006e49d0
    MouseInputEvent::MouseInputEvent(PacketT<Array<unsigned char>>& arg1) : InputEvent() {
        bool bVar1;
        unsigned int uVar4;
        unsigned int* puVar6;
        unsigned long uVar7;
        unsigned long uVar8;

        uint8_t* this_00 = &field_16;
        new (this_00) Array<unsigned int>();
        bool cVar2 = arg1.g1s();
        field_8 = (int)cVar2;
        uint8_t bVar3 = arg1.g1();
        field_12 = (unsigned int)bVar3;
        bVar3 = arg1.g1();
        this_00->set_max_size((unsigned long)bVar3, 0);
        if (this_00->end() != 0) {
            uVar7 = 0;
            uVar8 = 1;
            do {
                uVar4 = arg1.g1();
                puVar6 = (unsigned int*)(*this_00)[uVar7];
                *puVar6 = uVar4 & 255;
                uVar7 = this_00->end();
                bVar1 = uVar8 < uVar7;
                uVar7 = uVar8;
                uVar8 = (unsigned long)((int)uVar8 + 1);
            } while (bVar1);
        }
    }

    // 0x1006e4ac0
    void MouseInputEvent::Pack(PacketT<Array<unsigned char>>& arg1) const {
        ID* pIVar2;
        unsigned long uVar3;
        unsigned int uVar4;
        unsigned long arg1_00;

        arg1.p1<unsigned long>(field_8);
        arg1.p1<unsigned long>(field_12);
        uint8_t* this_00 = &field_16;
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
