// libs/ui/utils/PinchState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "PinchState.h"

namespace jag::ui {
    // 0x1005654b0: the linker folded this into game::LocTypeList::SetMembersServer(bool), which has identical code
    PinchState::SetVerticallyPinched(bool);

    // 0x100677240, 80 bytes, placed by class name and debug map
    // PinchState::Init(shared_ptr<Component> const&, std::pair<PinchPoint, PinchPoint> const&)
    /* PinchState::Init(shared_ptr<Component> const&,
   std::pair<PinchPoint, PinchPoint> const&) */

    void PinchState::Init(shared_ptr* param_1, pair* param_2) {
        SetComponent(param_1);
        SetStartPinchPair(this, param_2);
        SetCurrentPinchPair(this, param_2);
        SetLastTriggeredPinchPair(this, param_2);
        SetMembersServer(false);
        SetHorizontallyPinched(this, false);
    }

    // 0x1006772e0, 128 bytes, placed by class name
    // PinchState::Clear()
    void PinchState::Clear() {
        pair<PinchPoint, PinchPoint> local_38[32];

        ((_func_decltype_nullptr*)this)->SetComponent();
        std::pair<PinchPoint, PinchPoint>::pair<true, false>(local_38);
        SetStartPinchPair(this, (pair*)local_38);
        std::pair<PinchPoint, PinchPoint>::pair<true, false>(local_38);
        SetCurrentPinchPair(this, (pair*)local_38);
        std::pair<PinchPoint, PinchPoint>::pair<true, false>(local_38);
        SetLastTriggeredPinchPair(this, (pair*)local_38);
        SetMembersServer(false);
        SetHorizontallyPinched(this, false);
    }

    // 0x100677380, 32 bytes, placed by class name
    // PinchState::GetPinchPointCount() const
    char PinchState::GetPinchPointCount() {
        return (field_32 != 4294967295) + (field_16 != 4294967295);
    }

    // 0x1006773a0, 32 bytes, placed by class name
    // PinchState::GetDisplacementX(std::pair<PinchPoint, PinchPoint> const&) const
    /* PinchState::GetDisplacementX(std::pair<PinchPoint, PinchPoint> const&)
   const */

    int PinchState::GetDisplacementX(pair* param_1) {
        int iVar1;

        iVar1 = -(*(int*)(param_1 + 8) - *(int*)(param_1 + 24));
        if (iVar1 < 0) {
            iVar1 = *(int*)(param_1 + 8) - *(int*)(param_1 + 24);
        }
        return iVar1;
    }

    // 0x1006773c0, 32 bytes, placed by class name
    // PinchState::GetDisplacementY(std::pair<PinchPoint, PinchPoint> const&) const
    /* PinchState::GetDisplacementY(std::pair<PinchPoint, PinchPoint> const&)
   const */

    int PinchState::GetDisplacementY(pair* param_1) {
        int iVar1;

        iVar1 = -(*(int*)(param_1 + 12) - *(int*)(param_1 + 28));
        if (iVar1 < 0) {
            iVar1 = *(int*)(param_1 + 12) - *(int*)(param_1 + 28);
        }
        return iVar1;
    }

    // 0x1006773e0, 384 bytes, placed by class name
    // PinchState::InterpolateX(unsigned char)
    undefined8 PinchState::InterpolateX(uchar param_1) {
        int iVar1;
        int iVar2;
        undefined7 in_register_00000031;
        undefined8 uVar3;
        float fVar4;
        float local_30;
        float local_2c;

        iVar1 = GetDisplacementX(this, (pair*)&field_48);
        iVar2 = GetDisplacementX((PinchState*)this, (pair*)&field_80);
        iVar1 = iVar1 - iVar2;
        iVar2 = (int)CONCAT71(in_register_00000031, param_1);
        if (iVar1 < -iVar2) {
            local_30 = (float)field_88;
            local_2c = (float)field_56;
            fVar4 = math::Lerp<float, float>(&local_30, &local_2c, -(float)param_1 / (float)iVar1);
            field_88 = (int)fVar4;
            local_30 = (float)field_104;
            local_2c = (float)field_72;
            fVar4 = math::Lerp<float, float>(&local_30, &local_2c, -(float)param_1 / (float)iVar1);
            field_104 = (int)fVar4;
            uVar3 = 4;
        } else {
            if (iVar1 <= iVar2) {
                return 1;
            }
            local_30 = (float)field_88;
            local_2c = (float)field_56;
            fVar4 = math::Lerp<float, float>(&local_30, &local_2c, (float)param_1 / (float)iVar1);
            field_88 = (int)fVar4;
            local_30 = (float)field_104;
            local_2c = (float)field_72;
            fVar4 = math::Lerp<float, float>(&local_30, &local_2c, (float)param_1 / (float)iVar1);
            field_104 = (int)fVar4;
            uVar3 = 2;
        }
        SetHorizontallyPinched(this, true);
        return uVar3;
    }

    // 0x100677560, 384 bytes, placed by class name
    // PinchState::InterpolateY(unsigned char)
    undefined8 PinchState::InterpolateY(uchar param_1) {
        int iVar1;
        int iVar2;
        undefined7 in_register_00000031;
        undefined8 uVar3;
        float fVar4;
        float local_30;
        float local_2c;

        iVar1 = GetDisplacementY(this, (pair*)&field_48);
        iVar2 = GetDisplacementY((PinchState*)this, (pair*)&field_80);
        iVar1 = iVar1 - iVar2;
        iVar2 = (int)CONCAT71(in_register_00000031, param_1);
        if (iVar1 < -iVar2) {
            local_30 = (float)field_92;
            local_2c = (float)field_60;
            fVar4 = math::Lerp<float, float>(&local_30, &local_2c, -(float)param_1 / (float)iVar1);
            field_92 = (int)fVar4;
            local_30 = (float)field_108;
            local_2c = (float)field_76;
            fVar4 = math::Lerp<float, float>(&local_30, &local_2c, -(float)param_1 / (float)iVar1);
            field_108 = (int)fVar4;
            uVar3 = 16;
        } else {
            if (iVar1 <= iVar2) {
                return 1;
            }
            local_30 = (float)field_92;
            local_2c = (float)field_60;
            fVar4 = math::Lerp<float, float>(&local_30, &local_2c, (float)param_1 / (float)iVar1);
            field_92 = (int)fVar4;
            local_30 = (float)field_108;
            local_2c = (float)field_76;
            fVar4 = math::Lerp<float, float>(&local_30, &local_2c, (float)param_1 / (float)iVar1);
            field_108 = (int)fVar4;
            uVar3 = 8;
        }
        SetMembersServer(true);
        return uVar3;
    }

} // namespace jag::ui
