// libs/graphics/runetek7/particles/modules/EffectorModules.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "EffectorModules.h"
#include "ModulePropertyCurve.h"

namespace jag::graphics::particlemodules {
    // 0x1007d7d80
    uint64_t Gravity::LoadFromPacket(unsigned char arg1, PacketT<Array<unsigned char>>& arg2) {
        uint64_t uVar2;

        if (field_8.LoadFromPacket(arg1, arg2) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_96.LoadFromPacket(arg1, arg2);
        }
        return uVar2;
    }

    // 0x1007d83a0
    void TriggerPlane::ProcessTick(float arg1, const ParticleModuleUpdateParams& particleModuleUpdateParams,
                                   ParticleModuleUpdateState& particleModuleUpdateState,
                                   ParticleData& particleData) const {
        uint8_t bVar1;
        long lVar2;
        unsigned long uVar3;
        Layout* pLVar4;
        Vector3T<float>* pVVar5;
        unsigned long uVar6;
        float fVar7;
        uint64_t local_60[2];
        uint64_t local_50;
        float local_44;
        uint64_t local_40[2];

        if (DAT_1039bd37c == '\0') {
            local_40[0] = field_8.Eval(0.0);
            local_50 = particleModuleUpdateParams.field_44 * *local_40;
            local_60[0] = particleModuleUpdateParams.field_32 + local_50;
            local_40[0] = field_112.Eval(0.0);
            local_50 = particleModuleUpdateParams.field_44 * *local_40;
            local_44 = (float)field_224.Eval(0.0);
            bVar1 = field_216;
            if (bVar1 == 1) {
                lVar2 = particleData.GetCount();
                if (lVar2 != 0) {
                    uVar6 = 0;
                    do {
                        pLVar4 = &particleData.field_120[uVar6];
                        pVVar5 = (Vector3T<float>*)pLVar4->SSOBeginPtr();
                        local_40[0] = *pVVar5 - *local_60;
                        fVar7 = math::Vector3Dot<float>(*local_40, local_50);
                        if (fVar7 <= 0.0) {
                            ApplyBounce(particleData, uVar6, (Vector3T<float>*)&local_50, local_44);
                        }
                        uVar6 = uVar6 + 1;
                        uVar3 = particleData.GetCount();
                    } while (uVar6 < uVar3);
                }
            } else if (bVar1 == 3) {
                lVar2 = particleData.GetCount();
                if (lVar2 != 0) {
                    uVar6 = 0;
                    do {
                        pLVar4 = &particleData.field_120[uVar6];
                        pVVar5 = (Vector3T<float>*)pLVar4->SSOBeginPtr();
                        local_40[0] = *pVVar5 - *local_60;
                        fVar7 = math::Vector3Dot<float>(*local_40, local_50);
                        if (fVar7 <= 0.0) {
                            ApplyBounce(particleData, uVar6, (Vector3T<float>*)&local_50, local_44);
                            ApplyKill(particleData, uVar6, local_44);
                        }
                        uVar6 = uVar6 + 1;
                        uVar3 = particleData.GetCount();
                    } while (uVar6 < uVar3);
                }
            } else {
                if (bVar1 != 2) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/particles/modules/EffectorModules.cpp",
                                    101, nullptr);
                }
                lVar2 = particleData.GetCount();
                if (lVar2 != 0) {
                    uVar6 = 0;
                    do {
                        pLVar4 = &particleData.field_120[uVar6];
                        pVVar5 = (Vector3T<float>*)pLVar4->SSOBeginPtr();
                        local_40[0] = *pVVar5 - *local_60;
                        fVar7 = math::Vector3Dot<float>(*local_40, local_50);
                        if (fVar7 <= 0.0) {
                            ApplyKill(particleData, uVar6, local_44);
                        }
                        uVar6 = uVar6 + 1;
                        uVar3 = particleData.GetCount();
                    } while (uVar6 < uVar3);
                }
            }
        }
    }

} // namespace jag::graphics::particlemodules
