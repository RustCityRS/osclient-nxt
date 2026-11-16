// libs/graphics/view/EulerCamController.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics.view

namespace jag {
    class EulerCamController {
    public:
        // virtual methods in vtable order
        virtual void UpdateFromInputState();
        EulerCamController(float, float);
        void UpdateGamepadFromInputState();
        void Update(float);

        // data members, from how the methods use this: 72 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        float field_32; // offset 32
        float field_36; // offset 36
        char field_40;  // offset 40
        char field_41;  // offset 41
        char _unknown_42[6];
        EulerCamera* field_48; // offset 48
        float field_56;        // offset 56
        float field_60;        // offset 60
        float field_64;        // offset 64
        undefined1 field_68;   // offset 68
        byte field_69;         // offset 69
        char _unknown_70[2];
    };

    // 0x1009db760, 112 bytes, base-object constructor, placed by class name
    // EulerCamController::EulerCamController(float, float)
    void EulerCamController::EulerCamController(float param_1, float param_2) {
        field_0 = &PTR_UpdateFromInputState_100f1cc78;
        new (&field_8) math::Vector3T<int>();
        new (&field_20) math::Vector3T<int>();
        field_32 = 0.0;
        field_36 = 0.0;
        field_40 = '\0';
        field_41 = '\x01';
        field_48 = (EulerCamera*)0;
        field_56 = param_1;
        field_60 = 5.0;
        field_64 = param_2;
    }

    // 0x1009dba30, 976 bytes, placed by class name
    // EulerCamController::UpdateGamepadFromInputState()
    void EulerCamController::UpdateGamepadFromInputState() {
        char cVar1;
        vector* pvVar3;
        float* pfVar4;
        type* ptVar5;
        float fVar6;
        float local_28;
        float local_24;
        short local_1e;
        short local_1c;
        byte local_1a;
        byte local_19;
        float local_18;
        float local_14;

        cVar1 = input::InputState::IsButtonDown(0, 12);
        if (cVar1 != '\0') {
            field_56 = field_56 + 10.0;
        }
        cVar1 = input::InputState::IsButtonDown(0, 13);
        if ((cVar1 != '\0') && (fVar6 = field_56 + -10.0, field_56 = fVar6, fVar6 < 0.0)) {
            field_56 = 0.0;
        }
        local_1a = 1;
        local_19 = 1;
        local_14 = field_56 * 0.008;
        input::InputState::GetTrigger(0, 0, &local_1a);
        if (1 < local_1a) {
            local_28 = (float)local_1a * -0.003921569 + 1.0;
            local_24 = 0.25;
            fVar6 = math::Lerp<float, float>(&local_28, &local_24, 1.0);
            local_14 = local_14 * fVar6;
        }
        input::InputState::GetTrigger(0, 1, &local_19);
        if (1 < local_19) {
            local_14 = local_14 * 0.0004901961 * (float)local_19 * field_60;
        }
        local_1e = 0;
        local_1c = 0;
        ptVar5 = (type*)0;
        input::InputState::GetAxis(0, 0, &local_1e);
        local_18 = (float)(int)local_1e;
        fVar6 = (float)::abs(local_18);
        if (6553.0 < fVar6) {
            local_18 = local_14 * 0.025 * local_18;
            pvVar3 = (&field_8, ptVar5)->SSOBeginPtr();
            *(float*)pvVar3 = local_18 + *(float*)pvVar3;
        }
        input::InputState::GetAxis(0, 1, &local_1c);
        local_18 = (float)(int)local_1c;
        fVar6 = (float)::abs(local_18);
        if (6553.0 < fVar6) {
            local_18 = local_14 * 0.025 * local_18;
            pfVar4 = (float*)(&field_8)->second();
            *pfVar4 = local_18 + *pfVar4;
        }
        cVar1 = input::InputState::IsButtonDown(0, 8);
        if (cVar1 != '\0') {
            local_18 = local_14 * 800.0;
            pfVar4 = (float*)(&field_8)->y();
            *pfVar4 = local_18 + *pfVar4;
        }
        cVar1 = input::InputState::IsButtonDown(0, 9);
        if (cVar1 != '\0') {
            local_14 = local_14 * -800.0;
            pfVar4 = (float*)(&field_8)->y();
            *pfVar4 = local_14 + *pfVar4;
        }
        if (field_69 == 0) {
            local_14 = 1.0;
        } else {
            local_14 = field_64 * 0.005;
            if (1 < local_1a) {
                local_28 = (float)local_1a * -0.003921569 + 1.0;
                local_24 = 0.25;
                fVar6 = math::Lerp<float, float>(&local_28, &local_24, 1.0);
                local_14 = local_14 * fVar6;
            }
            if (1 < local_19) {
                local_14 = local_14 * 0.0004901961 * (float)local_19 * field_60;
            }
        }
        input::InputState::GetAxis(0, 3, &local_1c);
        local_18 = (float)(int)local_1c;
        fVar6 = (float)::abs(local_18);
        if (6553.0 < fVar6) {
            local_18 = local_14 * -0.0016666667 * local_18;
            pfVar4 = (float*)(&field_20)->y();
            *pfVar4 = local_18 + *pfVar4;
        }
        ptVar5 = (type*)2;
        input::InputState::GetAxis(0, 2, &local_1e);
        local_18 = (float)(int)local_1e;
        fVar6 = (float)::abs(local_18);
        if (6553.0 < fVar6) {
            local_14 = local_14 * 0.0016666667 * local_18;
            pvVar3 = (&field_20, ptVar5)->SSOBeginPtr();
            *(float*)pvVar3 = local_14 + *(float*)pvVar3;
        }
        cVar1 = input::InputState::IsButtonDown(0, 14);
        if ((cVar1 != '\0') && (cVar1 = input::InputState::IsButtonDown(0, 14), field_68 != cVar1)) {
            field_69 = field_69 ^ 1;
        }
        field_68 = input::InputState::IsButtonDown(0, 14);
    }

    // 0x1009dbe00, 16 bytes, complete-object constructor, placed by class name
    // EulerCamController::EulerCamController(float, float): jumps straight to the base-object constructor

    // 0x1009dbe10, 144 bytes, placed by class name
    // EulerCamController::Update(float)
    void EulerCamController::Update(float param_1) {
        undefined1* this_00;
        undefined1* this_01;

        (*(code*)*field_0)();
        if (field_48 != (EulerCamera*)0) {
            this_00 = &field_8;
            math::Vector3T<float>::operator*=((Vector3T<float>*)this_00, param_1);
            (field_48, (Vector3T*)this_00)->TranslateXYZ();
            this_01 = &field_20;
            math::Vector3T<float>::operator*=((Vector3T<float>*)this_01, param_1);
            math::Vector3T<float>::operator*=((Vector3T<float>*)this_01, 0.017453292);
            (field_48, (Vector3T*)this_01)->YawPitchRoll();
            this_00->SetToZero();
            this_01->SetToZero();
        }
    }

    // 0x1009dbf80, 864 bytes, placed by class name
    // EulerCamController::UpdateFromInputState()
    void EulerCamController::UpdateFromInputState() {
        char cVar1;
        float* pfVar2;
        vector* pvVar3;
        type* in_RSI;
        float fVar5;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        local_24 = field_56;
        cVar1 = input::InputState::IsKeyDown(-1);
        if (cVar1 != '\0') {
            field_56 = field_56 + 2.5;
        }
        cVar1 = input::InputState::IsKeyDown(27);
        if (cVar1 != '\0') {
            field_56 = field_56 + -2.5;
        }
        cVar1 = input::InputState::IsKeyDown(59);
        if (cVar1 == '\0') {
            fVar5 = 8.0;
        } else {
            fVar5 = field_60;
        }
        local_24 = local_24 * fVar5;
        cVar1 = input::InputState::IsKeyDown(58);
        if (cVar1 != '\0') {
            local_24 = local_24 * 0.125 * field_60;
        }
        cVar1 = input::InputState::IsKeyDown(13);
        if (cVar1 != '\0') {
            pfVar2 = (float*)(&field_8)->second();
            *pfVar2 = *pfVar2 + local_24;
        }
        cVar1 = input::InputState::IsKeyDown(0);
        if (cVar1 != '\0') {
            pvVar3 = (&field_8, in_RSI)->SSOBeginPtr();
            *(float*)pvVar3 = *(float*)pvVar3 - local_24;
        }
        cVar1 = input::InputState::IsKeyDown(1);
        if (cVar1 != '\0') {
            pfVar2 = (float*)(&field_8)->second();
            *pfVar2 = *pfVar2 - local_24;
        }
        cVar1 = input::InputState::IsKeyDown(2);
        if (cVar1 != '\0') {
            pvVar3 = (&field_8, in_RSI)->SSOBeginPtr();
            *(float*)pvVar3 = *(float*)pvVar3 + local_24;
        }
        cVar1 = input::InputState::IsKeyDown(56);
        if (cVar1 != '\0') {
            pfVar2 = (float*)(&field_8)->y();
            *pfVar2 = *pfVar2 - local_24;
        }
        cVar1 = input::InputState::IsKeyDown(49);
        if (cVar1 != '\0') {
            pfVar2 = (float*)(&field_8)->y();
            *pfVar2 = *pfVar2 + local_24;
        }
        cVar1 = input::InputState::IsKeyDown(63232);
        if (cVar1 != '\0') {
            local_28 = field_64;
            pfVar2 = (float*)(&field_20)->y();
            *pfVar2 = local_28 + *pfVar2;
        }
        cVar1 = input::InputState::IsKeyDown(63233);
        if (cVar1 != '\0') {
            local_28 = field_64;
            pfVar2 = (float*)(&field_20)->y();
            *pfVar2 = *pfVar2 - local_28;
        }
        cVar1 = input::InputState::IsKeyDown(63234);
        if (cVar1 != '\0') {
            local_28 = field_64;
            pvVar3 = (&field_20, in_RSI)->SSOBeginPtr();
            *(float*)pvVar3 = *(float*)pvVar3 - local_28;
        }
        cVar1 = input::InputState::IsKeyDown(63235);
        if (cVar1 != '\0') {
            local_28 = field_64;
            pvVar3 = (&field_20, in_RSI)->SSOBeginPtr();
            *(float*)pvVar3 = local_28 + *(float*)pvVar3;
        }
        UpdateGamepadFromInputState(this);
        cVar1 = input::InputState::IsMouseDown(0);
        if (cVar1 != '\0') {
            local_30 = 0.0;
            local_2c = 0.0;
            input::InputState::GetMousePosition(&local_30, (float*)(type*)&local_2c);
            if (field_40 == '\0') {
                field_32 = local_30;
                field_36 = local_2c;
            }
            local_28 = field_32 - local_30;
            if (field_41 == '\0') {
                local_24 = local_24 * 6.0;
                local_28 = local_28 * local_24;
                pvVar3 = (&field_8, (type*)&local_2c)->SSOBeginPtr();
                *(float*)pvVar3 = *(float*)pvVar3 - local_28;
                local_24 = (field_36 - local_2c) * local_24;
                pfVar2 = (float*)(&field_8)->second();
            } else {
                local_28 = local_28 * 6.0;
                pvVar3 = (&field_20, (type*)&local_2c)->SSOBeginPtr();
                *(float*)pvVar3 = *(float*)pvVar3 - local_28;
                local_24 = (local_2c - field_36) * 6.0;
                pfVar2 = (float*)(&field_20)->y();
            }
            *pfVar2 = local_24 + *pfVar2;
            field_32 = local_30;
            field_36 = local_2c;
        }
        field_40 = cVar1;
    }

} // namespace jag
