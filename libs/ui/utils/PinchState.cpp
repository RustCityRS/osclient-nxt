// libs/ui/utils/PinchState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "PinchState.h"

namespace jag::ui {
    // 0x1005654b0: PinchState::SetVerticallyPinched(bool) has the same machine code as game::LocTypeList::SetMembersServer(bool)

    // 0x100677240
    void PinchState::Init(const shared_ptr<Component>& component, const std::pair<PinchPoint, PinchPoint>& arg2) {
        SetComponent(component);
        SetStartPinchPair(arg2);
        SetCurrentPinchPair(arg2);
        SetLastTriggeredPinchPair(arg2);
        SetMembersServer(false);
        SetHorizontallyPinched(false);
    }

    // 0x1006772e0
    void PinchState::Clear() {
        pair<PinchPoint, PinchPoint> local_38;

        SetComponent(nullptr);
        local_38.pair<true, false>();
        SetStartPinchPair(local_38);
        local_38.pair<true, false>();
        SetCurrentPinchPair(local_38);
        local_38.pair<true, false>();
        SetLastTriggeredPinchPair(local_38);
        SetMembersServer(false);
        SetHorizontallyPinched(false);
    }

    // 0x100677380
    char PinchState::GetPinchPointCount() const {
        return (field_32 != 4294967295) + (field_16 != 4294967295);
    }

    // 0x1006773a0
    int PinchState::GetDisplacementX(const std::pair<PinchPoint, PinchPoint>& arg1) const {
        int iVar1 = -(*(int*)(arg1 + 8) - *(int*)(arg1 + 24));
        if (iVar1 < 0) {
            iVar1 = *(int*)(arg1 + 8) - *(int*)(arg1 + 24);
        }
        return iVar1;
    }

    // 0x1006773c0
    int PinchState::GetDisplacementY(const std::pair<PinchPoint, PinchPoint>& arg1) const {
        int iVar1 = -(*(int*)(arg1 + 12) - *(int*)(arg1 + 28));
        if (iVar1 < 0) {
            iVar1 = *(int*)(arg1 + 12) - *(int*)(arg1 + 28);
        }
        return iVar1;
    }

    // 0x1006773e0
    uint64_t PinchState::InterpolateX(unsigned char arg1) {
        uint64_t in_register_00000031;
        uint64_t uVar3;
        float fVar4;
        float local_30;
        float local_2c;

        int iVar1 = GetDisplacementX(field_48);
        int iVar2 = GetDisplacementX(field_80);
        iVar1 = iVar1 - iVar2;
        iVar2 = (int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        if (iVar1 < -iVar2) {
            local_30 = (float)field_88;
            local_2c = (float)field_56;
            fVar4 = math::Lerp<float, float>(local_30, local_2c, -(float)arg1 / (float)iVar1);
            field_88 = (int)fVar4;
            local_30 = (float)field_104;
            local_2c = (float)field_72;
            fVar4 = math::Lerp<float, float>(local_30, local_2c, -(float)arg1 / (float)iVar1);
            field_104 = (int)fVar4;
            uVar3 = 4;
        } else {
            if (iVar1 <= iVar2) {
                return 1;
            }
            local_30 = (float)field_88;
            local_2c = (float)field_56;
            fVar4 = math::Lerp<float, float>(local_30, local_2c, (float)arg1 / (float)iVar1);
            field_88 = (int)fVar4;
            local_30 = (float)field_104;
            local_2c = (float)field_72;
            fVar4 = math::Lerp<float, float>(local_30, local_2c, (float)arg1 / (float)iVar1);
            field_104 = (int)fVar4;
            uVar3 = 2;
        }
        SetHorizontallyPinched(true);
        return uVar3;
    }

    // 0x100677560
    uint64_t PinchState::InterpolateY(unsigned char arg1) {
        uint64_t in_register_00000031;
        uint64_t uVar3;
        float fVar4;
        float local_30;
        float local_2c;

        int iVar1 = GetDisplacementY(field_48);
        int iVar2 = GetDisplacementY(field_80);
        iVar1 = iVar1 - iVar2;
        iVar2 = (int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        if (iVar1 < -iVar2) {
            local_30 = (float)field_92;
            local_2c = (float)field_60;
            fVar4 = math::Lerp<float, float>(local_30, local_2c, -(float)arg1 / (float)iVar1);
            field_92 = (int)fVar4;
            local_30 = (float)field_108;
            local_2c = (float)field_76;
            fVar4 = math::Lerp<float, float>(local_30, local_2c, -(float)arg1 / (float)iVar1);
            field_108 = (int)fVar4;
            uVar3 = 16;
        } else {
            if (iVar1 <= iVar2) {
                return 1;
            }
            local_30 = (float)field_92;
            local_2c = (float)field_60;
            fVar4 = math::Lerp<float, float>(local_30, local_2c, (float)arg1 / (float)iVar1);
            field_92 = (int)fVar4;
            local_30 = (float)field_108;
            local_2c = (float)field_76;
            fVar4 = math::Lerp<float, float>(local_30, local_2c, (float)arg1 / (float)iVar1);
            field_108 = (int)fVar4;
            uVar3 = 8;
        }
        SetMembersServer(true);
        return uVar3;
    }

} // namespace jag::ui
