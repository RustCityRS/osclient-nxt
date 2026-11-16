// libs/graphics/runetek7/particles/modules/EffectorModules.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "EffectorModules.h"
#include "ModulePropertyCurve.h"

namespace jag::graphics::particlemodules {
    // 0x1007d7d80, 80 bytes, placed by debug map only (low confidence)
    // Gravity::LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator> >&)
    undefined8 Gravity::LoadFromPacket(uchar param_1, PacketT* param_2) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_8, param_1, param_2)->LoadFromPacket();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_96, param_1, param_2)->LoadFromPacket();
        }
        return uVar2;
    }

    // 0x1007d83a0, 704 bytes, placed by __FILE__ string
    // TriggerPlane::ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&, ParticleData&) const
    void TriggerPlane::ProcessTick(float param_1, ParticleModuleUpdateParams* param_2,
                                   ParticleModuleUpdateState* param_3, ParticleData* param_4) {
        byte bVar1;
        long lVar2;
        type* ptVar3;
        Layout* pLVar4;
        vector* pvVar5;
        ParticleData* pPVar6;
        ParticleData* pPVar7;
        type* ptVar8;
        ParticleData* pPVar9;
        float fVar10;
        undefined8 local_60[2];
        undefined8 local_50;
        float local_44;
        undefined8 local_40[2];

        if (DAT_1039bd37c == '\0') {
            pPVar7 = param_4;
            local_40[0] = (&field_8, 0.0)->Eval();
            local_50 = math::operator*((QuaternionT*)&param_2->field_44, (Vector3T*)local_40);
            local_60[0] = math::operator+((Vector3T*)&param_2->field_32, (Vector3T*)&local_50);
            local_40[0] = (&field_112, 0.0)->Eval();
            local_50 = math::operator*((QuaternionT*)&param_2->field_44, (Vector3T*)local_40);
            local_44 = (float)(&field_224, 0.0)->Eval();
            bVar1 = field_216;
            if (bVar1 == 1) {
                lVar2 = param_4->GetCount();
                if (lVar2 != 0) {
                    pPVar9 = (ParticleData*)0;
                    do {
                        pPVar6 = pPVar9;
                        pLVar4 = (Layout*)eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                                        SafeBucketAllocatorEASTL>::
                        operator[]((vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                           SafeBucketAllocatorEASTL>*)&param_4->field_120,
                                   (ulong)pPVar9);
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar4, (type*)pPVar6);
                        local_40[0] = math::operator-((Vector3T*)pvVar5, (Vector3T*)local_60);
                        fVar10 = math::Vector3Dot<float>((Vector3T*)local_40, (Vector3T*)&local_50);
                        if (fVar10 <= 0.0) {
                            ApplyBounce((TriggerPlane*)param_4, pPVar9, (ulong)&local_50, (Vector3T*)pPVar7, local_44);
                        }
                        pPVar9 = (ParticleData*)((long)&pPVar9->field_0 + 1);
                        pPVar6 = (ParticleData*)param_4->GetCount();
                    } while (pPVar9 < pPVar6);
                }
            } else if (bVar1 == 3) {
                lVar2 = param_4->GetCount();
                if (lVar2 != 0) {
                    pPVar9 = (ParticleData*)0;
                    do {
                        pPVar6 = pPVar9;
                        pLVar4 = (Layout*)eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                                        SafeBucketAllocatorEASTL>::
                        operator[]((vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                           SafeBucketAllocatorEASTL>*)&param_4->field_120,
                                   (ulong)pPVar9);
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar4, (type*)pPVar6);
                        local_40[0] = math::operator-((Vector3T*)pvVar5, (Vector3T*)local_60);
                        fVar10 = math::Vector3Dot<float>((Vector3T*)local_40, (Vector3T*)&local_50);
                        if (fVar10 <= 0.0) {
                            ApplyBounce((TriggerPlane*)param_4, pPVar9, (ulong)&local_50, (Vector3T*)pPVar7, local_44);
                            ApplyKill(param_4, (ulong)pPVar9, local_44);
                        }
                        pPVar9 = (ParticleData*)((long)&pPVar9->field_0 + 1);
                        pPVar6 = (ParticleData*)param_4->GetCount();
                    } while (pPVar9 < pPVar6);
                }
            } else {
                if (bVar1 != 2) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/particles/modules/EffectorModules.cpp",
                                    101, (char*)0);
                }
                lVar2 = param_4->GetCount();
                if (lVar2 != 0) {
                    ptVar8 = (type*)0;
                    do {
                        ptVar3 = ptVar8;
                        pLVar4 = (Layout*)eastl::vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                                        SafeBucketAllocatorEASTL>::
                        operator[]((vector<ParticleVertexDataProxy<ParticleData::PositionTimeData>,
                                           SafeBucketAllocatorEASTL>*)&param_4->field_120,
                                   (ulong)ptVar8);
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(pLVar4, ptVar3);
                        local_40[0] = math::operator-((Vector3T*)pvVar5, (Vector3T*)local_60);
                        fVar10 = math::Vector3Dot<float>((Vector3T*)local_40, (Vector3T*)&local_50);
                        if (fVar10 <= 0.0) {
                            ApplyKill(param_4, (ulong)ptVar8, local_44);
                        }
                        ptVar8 = ptVar8 + 1;
                        ptVar3 = (type*)param_4->GetCount();
                    } while (ptVar8 < ptVar3);
                }
            }
        }
    }

} // namespace jag::graphics::particlemodules
