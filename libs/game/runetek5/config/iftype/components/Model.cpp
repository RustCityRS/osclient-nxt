// libs/game/runetek5/config/iftype/components/Model.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Model.h"

namespace jag::game {
    // 0x100269a50: Model::GetType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings::GetID() const

    // 0x100536380
    void Model::SetRecol(int arg1, unsigned short arg2, unsigned short arg3) {
        uint8_t* this_00;
        unsigned short* puVar1;

        if ((unsigned int)arg1 < 16) {
            this_00 = &field_448;
            if (this_00->empty() != '\0') {
                this_00->set_max_size(16, 0);
                field_472.set_max_size(16, 0);
            }
            puVar1 = (unsigned short*)(*this_00)[(long)arg1];
            *puVar1 = arg2;
            puVar1 = &field_472[(long)arg1];
            *puVar1 = arg3;
            ClearModelCache(true);
        }
    }

    // 0x100536460
    void Model::SetRemat(int arg1, int arg2, int arg3) {
        uint8_t* this_00;
        uint16_t* puVar1;

        if ((unsigned int)arg1 < 16) {
            this_00 = &field_496;
            if (this_00->empty() != '\0') {
                this_00->set_max_size(16, 0);
                field_520.set_max_size(16, 0);
            }
            if ((((unsigned int)arg2 < 65535) && (arg3 < 65535)) && (-2 < arg3)) {
                puVar1 = (uint16_t*)(*this_00)[(long)arg1];
                *puVar1 = (short)arg2;
                puVar1 = &field_520[(long)arg1];
                *puVar1 = (short)arg3;
                ClearModelCache(true);
            }
        }
    }

    // 0x100536520
    void Model::SetModelTransform(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                  const math::Vector3T<float>& vector33, unsigned int arg4) {
        unsigned long long uVar1 = FrameTime::GetCurrentTimeMS();
        field_568.SetValue(vector31, (unsigned long)arg4, uVar1);
        uVar1 = FrameTime::GetCurrentTimeMS();
        field_616.SetValue(vector32, (unsigned long)arg4, uVar1);
        uVar1 = FrameTime::GetCurrentTimeMS();
        field_664.SetValue(vector33, (unsigned long)arg4, uVar1);
        GetModelTransform(true);
    }

    // 0x1005365c0
    uint8_t* Model::GetModelTransform(bool arg1) {
        bool cVar1;
        unsigned long long uVar2;
        uint64_t in_register_00000031;
        Vector3T<float> local_60;
        uint64_t local_40[2];
        uint64_t local_30[2];

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            uVar2 = FrameTime::GetCurrentTimeMS();
            cVar1 = field_616.IsTransitioning(uVar2);
            if (!cVar1) {
                uVar2 = FrameTime::GetCurrentTimeMS();
                cVar1 = field_568.IsTransitioning(uVar2);
                if (!cVar1) {
                    uVar2 = FrameTime::GetCurrentTimeMS();
                    cVar1 = field_664.IsTransitioning(uVar2);
                    if (!cVar1)
                        goto LAB_1005366c5;
                }
            }
        }
        uVar2 = FrameTime::GetCurrentTimeMS();
        uint64_t local_50 = field_616.GetValue(uVar2);
        math::QuaternionYawPitchRoll<float>(&local_60);
        uVar2 = FrameTime::GetCurrentTimeMS();
        local_40[0] = field_568.GetValue(uVar2);
        uVar2 = FrameTime::GetCurrentTimeMS();
        local_30[0] = field_664.GetValue(uVar2);
        Matrix44T<float> local_a8(local_60, *local_40, *local_30);
        field_720 = local_a8;
    LAB_1005366c5:
        return &field_720;
    }

    // 0x100536710
    void Model::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint8_t* puVar1;
        short sVar3;
        unsigned short uVar4;
        unsigned int uVar6;
        int* piVar7;
        unsigned int* puVar8;

        field_392 = 1;
        uint32_t uVar5 = arg1.gSmart2or4s();
        field_396 = uVar5;
        uint8_t bVar2 = arg1.g1();
        uint8_t bVar9 = bVar2 >> 1 & 1;
        field_560 = bVar9;
        field_440 = bVar2 >> 2 & 1;
        field_441 = bVar2 >> 3 & 1;
        if ((bVar2 & 1) == 0) {
            if (bVar9 == 0)
                goto LAB_1005368d5;
            sVar3 = arg1.g2s();
            puVar1 = &field_416;
            piVar7 = (int*)(*puVar1)[0];
            *piVar7 = (int)sVar3;
            sVar3 = arg1.g2s();
            piVar7 = (int*)(*puVar1)[1];
            *piVar7 = (int)sVar3;
            sVar3 = arg1.g2s();
            piVar7 = (int*)(*puVar1)[2];
            *piVar7 = (int)sVar3;
            uVar4 = arg1.g2();
            puVar1 = &field_404;
            puVar8 = (unsigned int*)(*puVar1)[0];
            *puVar8 = (unsigned int)uVar4;
            uVar4 = arg1.g2();
            puVar8 = (unsigned int*)(*puVar1)[1];
            *puVar8 = (unsigned int)uVar4;
            uVar4 = arg1.g2();
            puVar8 = (unsigned int*)(*puVar1)[2];
            *puVar8 = (unsigned int)uVar4;
            sVar3 = arg1.g2s();
            uVar6 = (unsigned int)sVar3;
        } else {
            sVar3 = arg1.g2s();
            piVar7 = &field_416[0];
            *piVar7 = (int)sVar3;
            sVar3 = arg1.g2s();
            piVar7 = &field_416[1];
            *piVar7 = (int)sVar3;
            uVar4 = arg1.g2();
            puVar1 = &field_404;
            puVar8 = (unsigned int*)(*puVar1)[0];
            *puVar8 = (unsigned int)uVar4;
            uVar4 = arg1.g2();
            puVar8 = (unsigned int*)(*puVar1)[1];
            *puVar8 = (unsigned int)uVar4;
            uVar4 = arg1.g2();
            puVar8 = (unsigned int*)(*puVar1)[2];
            *puVar8 = (unsigned int)uVar4;
            uVar4 = arg1.g2();
            uVar6 = (unsigned int)uVar4;
        }
        field_428 = uVar6;
    LAB_1005368d5:
        uVar5 = arg1.gSmart2or4s();
        field_564 = uVar5;
        if (field_52 != '\0') {
            uVar4 = arg1.g2();
            field_432 = (unsigned int)uVar4;
        }
        if (field_53 != '\0') {
            uVar4 = arg1.g2();
            field_436 = (unsigned int)uVar4;
        }
    }

    // 0x100c92b50: Model::~Model() has the same machine code as InlineFatalBreak()

} // namespace jag::game
