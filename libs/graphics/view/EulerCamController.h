// libs/graphics/view/EulerCamController.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics.view

namespace jag {
    class EulerCamController {
    public:
        // virtual methods in vtable order
        virtual void UpdateFromInputState();
        EulerCamController(float arg1, float arg2);
        void UpdateGamepadFromInputState();
        void Update(float arg1);

    private:
        uint8_t _unknown_8[24];
        float field_32;
        float field_36;
        char field_40;
        char field_41;
        uint8_t _unknown_42[6];
        EulerCamera* field_48;
        float field_56;
        float field_60;
        float field_64;
        uint8_t field_68;
        uint8_t field_69;
        uint8_t _unknown_70[2];
    };

    // 0x1009db760
    EulerCamController::EulerCamController(float arg1, float arg2) : field_32(0.0), field_36(0.0) {
        field_40 = '\0';
        field_41 = '\x01';
        field_48 = nullptr;
        field_56 = arg1;
        field_60 = 5.0;
        field_64 = arg2;
    }

    // 0x1009dba30
    void EulerCamController::UpdateGamepadFromInputState() {
        float* pfVar3;
        float fVar4;
        float local_28;
        float local_24;

        char cVar1 = input::InputState::IsButtonDown(0, 12);
        if (cVar1) {
            field_56 = field_56 + 10.0;
        }
        cVar1 = input::InputState::IsButtonDown(0, 13);
        if ((cVar1) && (fVar4 = field_56 - 10.0, field_56 = fVar4, fVar4 < 0.0)) {
            field_56 = 0.0;
        }
        float local_14 = field_56 * 0.008;
        input::InputState::GetTrigger(0, 0, 1);
        if (1 < 1) {
            local_28 = (float)1 * -0.003921569 + 1.0;
            local_24 = 0.25;
            fVar4 = math::Lerp<float, float>(local_28, local_24, 1.0);
            local_14 = local_14 * fVar4;
        }
        input::InputState::GetTrigger(0, 1, 1);
        if (1 < 1) {
            local_14 = local_14 * 0.0004901961f * (float)1 * field_60;
        }
        input::InputState::GetAxis(0, 0, 0);
        float local_18 = (float)(int)0;
        fVar4 = (float)::abs(local_18);
        if (6553.0 < fVar4) {
            local_18 = local_14 * 0.025 * local_18;
            pfVar3 = (float*)field_8.SSOBeginPtr();
            *pfVar3 = local_18 + *pfVar3;
        }
        input::InputState::GetAxis(0, 1, 0);
        local_18 = (float)(int)0;
        fVar4 = (float)::abs(local_18);
        if (6553.0 < fVar4) {
            local_18 = local_14 * 0.025 * local_18;
            pfVar3 = (float*)field_8.second();
            *pfVar3 = local_18 + *pfVar3;
        }
        cVar1 = input::InputState::IsButtonDown(0, 8);
        if (cVar1) {
            local_18 = local_14 * 800.0;
            pfVar3 = (float*)field_8.y();
            *pfVar3 = local_18 + *pfVar3;
        }
        cVar1 = input::InputState::IsButtonDown(0, 9);
        if (cVar1) {
            local_14 = local_14 * -800.0;
            pfVar3 = (float*)field_8.y();
            *pfVar3 = local_14 + *pfVar3;
        }
        if (field_69 == 0) {
            local_14 = 1.0;
        } else {
            local_14 = field_64 * 0.005;
            if (1 < 1) {
                local_28 = (float)1 * -0.003921569 + 1.0;
                local_24 = 0.25;
                fVar4 = math::Lerp<float, float>(local_28, local_24, 1.0);
                local_14 = local_14 * fVar4;
            }
            if (1 < 1) {
                local_14 = local_14 * 0.0004901961f * (float)1 * field_60;
            }
        }
        input::InputState::GetAxis(0, 3, 0);
        local_18 = (float)(int)0;
        fVar4 = (float)::abs(local_18);
        if (6553.0 < fVar4) {
            local_18 = local_14 * -0.0016666667 * local_18;
            pfVar3 = (float*)field_20.y();
            *pfVar3 = local_18 + *pfVar3;
        }
        input::InputState::GetAxis(0, 2, 0);
        local_18 = (float)(int)0;
        fVar4 = (float)::abs(local_18);
        if (6553.0 < fVar4) {
            local_14 = local_14 * 0.0016666667f * local_18;
            pfVar3 = (float*)field_20.SSOBeginPtr();
            *pfVar3 = local_14 + *pfVar3;
        }
        cVar1 = input::InputState::IsButtonDown(0, 14);
        if ((cVar1) && (cVar1 = input::InputState::IsButtonDown(0, 14), field_68 != cVar1)) {
            field_69 = field_69 ^ 1;
        }
        field_68 = input::InputState::IsButtonDown(0, 14);
    }

    // 0x1009dbe10
    void EulerCamController::Update(float arg1) {
        void result;
        uint8_t result;
        uint8_t* __return_storage_ptr___00;

        UpdateFromInputState();
        if (field_48 != nullptr) {
            &result = &field_8;
            result *= arg1;
            field_48->TranslateXYZ(result);
            __return_storage_ptr___00 = &field_20;
            *__return_storage_ptr___00 *= arg1;
            *__return_storage_ptr___00 *= 0.017453292f;
            field_48->YawPitchRoll(*__return_storage_ptr___00);
            result = math::Vector3T<float>::SetToZero();
            *__return_storage_ptr___00 = math::Vector3T<float>::SetToZero();
        }
    }

    // 0x1009dbf80
    void EulerCamController::UpdateFromInputState() {
        float* pfVar2;
        MouseButton in_ESI;
        float fVar3;
        float local_28;

        float local_24 = field_56;
        char cVar1 = input::InputState::IsKeyDown(-1);
        if (cVar1) {
            field_56 = field_56 + 2.5;
        }
        cVar1 = input::InputState::IsKeyDown(27);
        if (cVar1) {
            field_56 = field_56 - 2.5;
        }
        cVar1 = input::InputState::IsKeyDown(59);
        if (!cVar1) {
            fVar3 = 8.0;
        } else {
            fVar3 = field_60;
        }
        local_24 = local_24 * fVar3;
        cVar1 = input::InputState::IsKeyDown(58);
        if (cVar1) {
            local_24 = local_24 * 0.125 * field_60;
        }
        cVar1 = input::InputState::IsKeyDown(13);
        if (cVar1) {
            pfVar2 = (float*)field_8.second();
            *pfVar2 = *pfVar2 + local_24;
        }
        cVar1 = input::InputState::IsKeyDown(0);
        if (cVar1) {
            pfVar2 = (float*)field_8.SSOBeginPtr();
            *pfVar2 = *pfVar2 - local_24;
        }
        cVar1 = input::InputState::IsKeyDown(1);
        if (cVar1) {
            pfVar2 = (float*)field_8.second();
            *pfVar2 = *pfVar2 - local_24;
        }
        cVar1 = input::InputState::IsKeyDown(2);
        if (cVar1) {
            pfVar2 = (float*)field_8.SSOBeginPtr();
            *pfVar2 = *pfVar2 + local_24;
        }
        cVar1 = input::InputState::IsKeyDown(56);
        if (cVar1) {
            pfVar2 = (float*)field_8.y();
            *pfVar2 = *pfVar2 - local_24;
        }
        cVar1 = input::InputState::IsKeyDown(49);
        if (cVar1) {
            pfVar2 = (float*)field_8.y();
            *pfVar2 = *pfVar2 + local_24;
        }
        cVar1 = input::InputState::IsKeyDown(63232);
        if (cVar1) {
            local_28 = field_64;
            pfVar2 = (float*)field_20.y();
            *pfVar2 = local_28 + *pfVar2;
        }
        cVar1 = input::InputState::IsKeyDown(63233);
        if (cVar1) {
            local_28 = field_64;
            pfVar2 = (float*)field_20.y();
            *pfVar2 = *pfVar2 - local_28;
        }
        cVar1 = input::InputState::IsKeyDown(63234);
        if (cVar1) {
            local_28 = field_64;
            pfVar2 = (float*)field_20.SSOBeginPtr();
            *pfVar2 = *pfVar2 - local_28;
        }
        cVar1 = input::InputState::IsKeyDown(63235);
        if (cVar1) {
            local_28 = field_64;
            pfVar2 = (float*)field_20.SSOBeginPtr();
            *pfVar2 = local_28 + *pfVar2;
        }
        UpdateGamepadFromInputState();
        cVar1 = nullptr->IsMouseDown(in_ESI);
        if (cVar1) {
            input::InputState::GetMousePosition(0.0, 0.0);
            if (field_40 == '\0') {
                field_32 = 0.0;
                field_36 = 0.0;
            }
            local_28 = field_32 - 0.0;
            if (field_41 == '\0') {
                local_24 = local_24 * 6.0;
                local_28 = local_28 * local_24;
                pfVar2 = (float*)field_8.SSOBeginPtr();
                *pfVar2 = *pfVar2 - local_28;
                local_24 = (field_36 - 0.0) * local_24;
                pfVar2 = (float*)field_8.second();
            } else {
                local_28 = local_28 * 6.0;
                pfVar2 = (float*)field_20.SSOBeginPtr();
                *pfVar2 = *pfVar2 - local_28;
                local_24 = (0.0 - field_36) * 6.0;
                pfVar2 = (float*)field_20.y();
            }
            *pfVar2 = local_24 + *pfVar2;
            field_32 = 0.0;
            field_36 = 0.0;
        }
        field_40 = cVar1;
    }

} // namespace jag
