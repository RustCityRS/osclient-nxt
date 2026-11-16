// projects/osclient/ScriptRunnerImpl_3400To3499.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015ece0
    uint64_t ScriptRunnerImpl::ExecuteCommand3400To3499(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        unsigned int uVar3;
        bool bVar4;
        uint32_t uVar5;
        int* piVar6;
        long lVar7;
        unsigned int* puVar8;
        unsigned short* puVar9;
        eastl::string* pbVar10;
        eastl::string* pbVar11;
        uint32_t* puVar12;
        unsigned long uVar13;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        unsigned int local_44;
        ReturnValue local_40;

        if (scriptOp == 3411) {
            uVar13 = (long)field_104092 - 1;
            field_104092 = (int)uVar13;
            piVar6 = &field_100092[uVar13];
            local_40 = configdecoder::EnumType::List(*piVar6);
            uVar5 = 0;
            bVar4 = local_40 != nullptr;
            if (bVar4) {
                uVar5 = ((EnumType*)local_40.operator->())->GetNumOptions();
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar12 = &field_100092[(long)iVar1];
            *puVar12 = uVar5;
        } else if (scriptOp == 3408) {
            lVar7 = (long)field_104092;
            field_104092 = (int)(lVar7 - 4U);
            this_00 = &field_100092;
            puVar8 = (unsigned int*)(*this_00)[lVar7 - 4U];
            uVar3 = *puVar8;
            puVar8 = (unsigned int*)(*this_00)[lVar7 - 3];
            local_44 = *puVar8;
            piVar6 = (int*)(*this_00)[lVar7 - 2];
            iVar1 = *piVar6;
            piVar6 = (int*)(*this_00)[lVar7 - 1];
            iVar2 = *piVar6;
            local_40 = configdecoder::EnumType::List(iVar1);
            bVar4 = local_40 == nullptr;
            if (((bVar4) || (puVar9 = (unsigned short*)local_40.operator->(), uVar3 != *puVar9)) ||
                (lVar7 = local_40.operator->(), local_44 != *(unsigned short*)(lVar7 + 2))) {
                uVar5 = 0;
                if (local_44 == 115) {
                    iVar1 = field_136096;
                    field_136096 = iVar1 + 1;
                    pbVar11 = &field_104096[(long)iVar1];
                    *pbVar11 = ((eastl::string*)&constants::text::null);
                    goto LAB_10015f115;
                }
            } else {
                for (uVar13 = 0; lVar7 = local_40.operator->(), (long)uVar13 < (long)*(int*)(lVar7 + 44);
                     uVar13 = uVar13 + 1) {
                    lVar7 = local_40.operator->();
                    piVar6 = (int*)(*((lVar7 + 48)))[uVar13];
                    if (*piVar6 == iVar2) {
                        if (local_44 == 115) {
                            lVar7 = local_40.operator->();
                            pbVar10 = (eastl::string*)(*((lVar7 + 96)))[uVar13];
                            iVar1 = field_136096;
                            field_136096 = iVar1 + 1;
                            pbVar11 = &field_104096[(long)iVar1];
                            *pbVar11 = pbVar10;
                        } else {
                            lVar7 = local_40.operator->();
                            puVar12 = (uint32_t*)(*((lVar7 + 72)))[uVar13];
                            uVar5 = *puVar12;
                            iVar1 = field_104092;
                            field_104092 = iVar1 + 1;
                            puVar12 = (uint32_t*)(*this_00)[(long)iVar1];
                            *puVar12 = uVar5;
                        }
                        local_58 = shared_ptr();
                        local_40 = local_58;
                        break;
                    }
                }
                bVar4 = local_40 != nullptr;
                if (!bVar4)
                    goto LAB_10015f115;
                if (local_44 == 115) {
                    lVar7 = local_40.operator->();
                    iVar1 = field_136096;
                    field_136096 = iVar1 + 1;
                    pbVar11 = &field_104096[(long)iVar1];
                    *pbVar11 = ((lVar7 + 8));
                    goto LAB_10015f115;
                }
                lVar7 = local_40.operator->();
                uVar5 = *(uint32_t*)(lVar7 + 40);
            }
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar12 = (uint32_t*)(*this_00)[(long)iVar1];
            *puVar12 = uVar5;
        } else {
            if (scriptOp != 3400) {
                return 2;
            }
            iVar1 = field_104092;
            uVar13 = (long)iVar1 - 2;
            field_104092 = (int)uVar13;
            piVar6 = &field_100092[uVar13];
            iVar2 = *piVar6;
            piVar6 = &field_100092[(long)iVar1 - 1];
            iVar1 = *piVar6;
            local_40 = configdecoder::EnumType::List(iVar2);
            bVar4 = local_40 == nullptr;
            if (!bVar4) {
                local_40.operator->();
            }
            for (uVar13 = 0; lVar7 = local_40.operator->(), (long)uVar13 < (long)*(int*)(lVar7 + 44);
                 uVar13 = uVar13 + 1) {
                lVar7 = local_40.operator->();
                piVar6 = (int*)(*((lVar7 + 48)))[uVar13];
                if (*piVar6 == iVar1) {
                    lVar7 = local_40.operator->();
                    pbVar10 = (eastl::string*)(*((lVar7 + 96)))[uVar13];
                    iVar1 = field_136096;
                    field_136096 = iVar1 + 1;
                    pbVar11 = &field_104096[(long)iVar1];
                    *pbVar11 = pbVar10;
                    local_58 = shared_ptr();
                    local_40 = local_58;
                    break;
                }
            }
            bVar4 = local_40 != nullptr;
            if (bVar4) {
                lVar7 = local_40.operator->();
                iVar1 = field_136096;
                field_136096 = iVar1 + 1;
                pbVar11 = &field_104096[(long)iVar1];
                *pbVar11 = ((lVar7 + 8));
            }
        }
    LAB_10015f115:
        return 1;
    }

} // namespace jag::oldscape
