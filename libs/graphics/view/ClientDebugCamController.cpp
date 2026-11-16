// libs/graphics/view/ClientDebugCamController.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.view

#include "projects/osclient/client.h"

namespace jag {
    // 0x1009db730, 48 bytes, base-object constructor, placed by class name and debug map
    // ClientDebugCamController::ClientDebugCamController()
    void ClientDebugCamController::ClientDebugCamController() {
        new (this) EulerCamController(2048.0, 50.0);
        field_0 = &PTR_UpdateFromInputState_100f1cc50;
    }

    // 0x1009db7d0, 16 bytes, complete-object constructor, placed by class name
    // ClientDebugCamController::ClientDebugCamController(): jumps straight to the base-object constructor

    // 0x1009db7e0, 16 bytes, base-object destructor, placed by class name
    // ClientDebugCamController::~ClientDebugCamController()
    void ClientDebugCamController::~ClientDebugCamController() {}

    // 0x1009db7f0, 16 bytes, complete-object destructor, placed by class name
    // ClientDebugCamController::~ClientDebugCamController(): jumps straight to the base-object destructor

    // 0x1009db800, 16 bytes, deleting destructor, placed by class name
    // ClientDebugCamController::~ClientDebugCamController()
    void ClientDebugCamController::~ClientDebugCamController() {
        operator_delete(this);
    }

    // 0x1009db810, 544 bytes, placed by class name
    // ClientDebugCamController::UpdateFromInputState()
    void ClientDebugCamController::UpdateFromInputState() {
        char cVar1;
        char cVar2;
        float* pfVar3;
        vector* pvVar4;
        type* in_RSI;
        float local_2c;
        float local_28;
        float local_24;

        cVar2 = input::InputState::IsKeyDown(-1);
        if (cVar2 != '\0') {
            field_56 = field_56 + 10.0;
        }
        cVar2 = input::InputState::IsKeyDown(27);
        if (cVar2 != '\0') {
            field_56 = field_56 + -10.0;
        }
        local_24 = field_56;
        cVar2 = input::InputState::IsKeyDown(59);
        if (((cVar2 != '\0') || (cVar2 = input::InputState::IsKeyDown(58), cVar2 != '\0')) ||
            (cVar2 = input::InputState::IsKeyDown(49), cVar2 != '\0')) {
            local_24 = local_24 * field_60;
        }
        cVar2 = input::InputState::IsKeyDown(13);
        if (cVar2 != '\0') {
            pfVar3 = (float*)(&field_8)->second();
            *pfVar3 = *pfVar3 + local_24;
        }
        cVar2 = input::InputState::IsKeyDown(1);
        if (cVar2 != '\0') {
            pfVar3 = (float*)(&field_8)->second();
            *pfVar3 = *pfVar3 - local_24;
        }
        cVar2 = input::InputState::IsKeyDown(0);
        if (cVar2 != '\0') {
            pvVar4 = (&field_8, in_RSI)->SSOBeginPtr();
            *(float*)pvVar4 = *(float*)pvVar4 - local_24;
        }
        cVar2 = input::InputState::IsKeyDown(2);
        if (cVar2 != '\0') {
            pvVar4 = (&field_8, in_RSI)->SSOBeginPtr();
            *(float*)pvVar4 = local_24 + *(float*)pvVar4;
        }
        UpdateGamepadFromInputState();
        cVar2 = input::InputState::IsMouseDown(1);
        if (cVar2 != '\0') {
            local_2c = 0.0;
            local_28 = 0.0;
            input::InputState::GetMousePosition(&local_2c, (float*)(type*)&local_28);
            if (field_40 == '\0') {
                field_41 = 400.0 < local_2c;
                field_32 = local_2c;
                field_36 = local_28;
                cVar1 = field_41;
            } else {
                cVar1 = field_41;
            }
            if (cVar1 != '\0') {
                local_24 = (local_2c - field_32) * 6.0;
                pvVar4 = (&field_20, (type*)&local_28)->SSOBeginPtr();
                *(float*)pvVar4 = local_24 + *(float*)pvVar4;
                local_24 = (local_28 - field_36) * 6.0;
                pfVar3 = (float*)(&field_20)->y();
                *pfVar3 = local_24 + *pfVar3;
            }
            field_32 = local_2c;
            field_36 = local_28;
        }
        field_40 = cVar2;
    }

} // namespace jag
