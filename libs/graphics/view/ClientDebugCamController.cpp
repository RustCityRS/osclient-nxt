// libs/graphics/view/ClientDebugCamController.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.view

#include "projects/osclient/client.h"

namespace jag {
    // 0x1009db730
    ClientDebugCamController::ClientDebugCamController() : EulerCamController(2048.0, 50.0) {}

    // 0x1009db7e0
    ClientDebugCamController::~ClientDebugCamController() {}

    // 0x1009db810
    void ClientDebugCamController::UpdateFromInputState() {
        bool cVar1;
        float* pfVar3;
        MouseButton in_ESI;

        char cVar2 = input::InputState::IsKeyDown(-1);
        if (cVar2) {
            field_56 = field_56 + 10.0;
        }
        cVar2 = input::InputState::IsKeyDown(27);
        if (cVar2) {
            field_56 = field_56 - 10.0;
        }
        float local_24 = field_56;
        cVar2 = input::InputState::IsKeyDown(59);
        if (((cVar2) || (cVar2 = input::InputState::IsKeyDown(58), cVar2)) ||
            (cVar2 = input::InputState::IsKeyDown(49), cVar2)) {
            local_24 = local_24 * field_60;
        }
        cVar2 = input::InputState::IsKeyDown(13);
        if (cVar2) {
            pfVar3 = (float*)field_8.second();
            *pfVar3 = *pfVar3 + local_24;
        }
        cVar2 = input::InputState::IsKeyDown(1);
        if (cVar2) {
            pfVar3 = (float*)field_8.second();
            *pfVar3 = *pfVar3 - local_24;
        }
        cVar2 = input::InputState::IsKeyDown(0);
        if (cVar2) {
            pfVar3 = (float*)field_8.SSOBeginPtr();
            *pfVar3 = *pfVar3 - local_24;
        }
        cVar2 = input::InputState::IsKeyDown(2);
        if (cVar2) {
            pfVar3 = (float*)field_8.SSOBeginPtr();
            *pfVar3 = local_24 + *pfVar3;
        }
        UpdateGamepadFromInputState();
        cVar2 = DAT_00000001.IsMouseDown(in_ESI);
        if (cVar2) {
            input::InputState::GetMousePosition(0.0, 0.0);
            if (field_40 == '\0') {
                field_41 = 400.0 < 0.0;
                field_32 = 0.0;
                field_36 = 0.0;
                cVar1 = field_41;
            } else {
                cVar1 = field_41;
            }
            if (cVar1) {
                local_24 = (0.0 - field_32) * 6.0;
                pfVar3 = (float*)field_20.SSOBeginPtr();
                *pfVar3 = local_24 + *pfVar3;
                local_24 = (0.0 - field_36) * 6.0;
                pfVar3 = (float*)field_20.y();
                *pfVar3 = local_24 + *pfVar3;
            }
            field_32 = 0.0;
            field_36 = 0.0;
        }
        field_40 = cVar2;
    }

} // namespace jag
