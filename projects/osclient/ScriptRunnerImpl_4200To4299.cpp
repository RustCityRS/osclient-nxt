// projects/osclient/ScriptRunnerImpl_4200To4299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100165a40
    uint64_t ScriptRunnerImpl::ExecuteCommand4200To4299(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        unsigned short uVar1;
        uint32_t uVar2;
        int iVar3;
        int iVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* pbVar6;
        eastl::string* pbVar7;
        eastl::string* pbVar8;
        unsigned short* puVar9;
        int* piVar10;
        long lVar11;
        unsigned int* puVar12;
        uint32_t* puVar13;
        unsigned int uVar14;
        unsigned long uVar15;
        eastl::string local_70;
        ReturnValue local_50;

        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 4200:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            lVar11 = local_50.operator->();
            iVar5 = field_136096;
            field_136096 = iVar5 + 1;
            pbVar7 = &field_104096[(long)iVar5];
            *pbVar7 = ((lVar11 + 8));
            goto LAB_100166172;
        case 4201:
            iVar5 = field_104092;
            uVar15 = (long)iVar5 - 2;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            iVar3 = *piVar10;
            piVar10 = &field_100092[(long)iVar5 - 1];
            iVar5 = *piVar10;
            local_50 = configdecoder::ObjType::List(iVar3);
            uVar14 = iVar5 - 1;
            if (uVar14 < 5) {
                lVar11 = local_50.operator->();
                pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*(
                    (lVar11 + 224)))[(unsigned long)uVar14];
                if (!(pbVar6->empty())) {
                    lVar11 = local_50.operator->();
                    pbVar8 = (eastl::string*)(*((lVar11 + 224)))[(unsigned long)uVar14];
                    iVar5 = field_136096;
                    field_136096 = iVar5 + 1;
                    pbVar7 = &field_104096[(long)iVar5];
                    *pbVar7 = pbVar8;
                    goto LAB_100166172;
                }
            }
            iVar5 = field_136096;
            field_136096 = iVar5 + 1;
            pbVar7 = &field_104096[(long)iVar5];
            eastl::string::assign(pbVar7, "");
            goto LAB_100166172;
        case 4202:
            iVar5 = field_104092;
            uVar15 = (long)iVar5 - 2;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            iVar3 = *piVar10;
            piVar10 = &field_100092[(long)iVar5 - 1];
            iVar5 = *piVar10;
            local_50 = configdecoder::ObjType::List(iVar3);
            uVar14 = iVar5 - 1;
            if (uVar14 < 5) {
                lVar11 = local_50.operator->();
                pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*(
                    (lVar11 + 424)))[(unsigned long)uVar14];
                if (!(pbVar6->empty())) {
                    lVar11 = local_50.operator->();
                    pbVar8 = (eastl::string*)(*((lVar11 + 424)))[(unsigned long)uVar14];
                    iVar5 = field_136096;
                    field_136096 = iVar5 + 1;
                    pbVar7 = &field_104096[(long)iVar5];
                    *pbVar7 = pbVar8;
                    goto LAB_100166172;
                }
            }
            iVar5 = field_136096;
            field_136096 = iVar5 + 1;
            pbVar7 = &field_104096[(long)iVar5];
            eastl::string::assign(pbVar7, "");
            goto LAB_100166172;
        case 4203:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            lVar11 = local_50.operator->();
            uVar14 = *(unsigned int*)(lVar11 + 204);
            break;
        case 4204:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            lVar11 = local_50.operator->();
            uVar14 = (unsigned int)(*(int*)(lVar11 + 200) == 1);
            goto LAB_100165fba;
        case 4205:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            iVar5 = *piVar10;
            local_50 = configdecoder::ObjType::List(iVar5);
            lVar11 = local_50.operator->();
            if ((*(int*)(lVar11 + 732) == -1) && (lVar11 = local_50.operator->(), -1 < *(int*)(lVar11 + 728))) {
                lVar11 = local_50.operator->();
            LAB_100165d91:
                iVar5 = *(int*)(lVar11 + 728);
            }
            goto LAB_100166156;
        case 4206:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            iVar5 = *piVar10;
            local_50 = configdecoder::ObjType::List(iVar5);
            lVar11 = local_50.operator->();
            if ((-1 < *(int*)(lVar11 + 732)) && (lVar11 = local_50.operator->(), -1 < *(int*)(lVar11 + 728))) {
                lVar11 = local_50.operator->();
                goto LAB_100165d91;
            }
            goto LAB_100166156;
        case 4207:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            lVar11 = local_50.operator->();
            uVar14 = (unsigned int)*(uint8_t*)(lVar11 + 220);
            break;
        case 4208:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            iVar5 = *piVar10;
            local_50 = configdecoder::ObjType::List(iVar5);
            lVar11 = local_50.operator->();
            if ((*(int*)(lVar11 + 840) == -1) && (lVar11 = local_50.operator->(), -1 < *(int*)(lVar11 + 836))) {
                lVar11 = local_50.operator->();
            LAB_10016614f:
                iVar5 = *(int*)(lVar11 + 836);
            }
            goto LAB_100166156;
        case 4209:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            iVar5 = *piVar10;
            local_50 = configdecoder::ObjType::List(iVar5);
            lVar11 = local_50.operator->();
            if ((-1 < *(int*)(lVar11 + 840)) && (lVar11 = local_50.operator->(), -1 < *(int*)(lVar11 + 836))) {
                lVar11 = local_50.operator->();
                goto LAB_10016614f;
            }
        LAB_100166156:
            iVar3 = field_104092;
            field_104092 = iVar3 + 1;
            piVar10 = &field_100092[(long)iVar3];
            *piVar10 = iVar5;
            goto LAB_100166172;
        case 4210:
            uVar15 = (long)field_136096 - 1;
            field_136096 = (int)uVar15;
            pbVar8 = &field_104096[uVar15];
            local_50 = eastl::string(*pbVar8);
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            iVar5 = *piVar10;
            local_70 = eastl::string(local_50);
            this_00->FindObjects(&local_70, iVar5 == 1);
            uVar2 = *(uint32_t*)((long)&this_00->field_52912 + 4);
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar13 = &field_100092[(long)iVar5];
            *puVar13 = uVar2;
            return 1;
        case 4211:
            if (!(this_00->field_52880.empty())) {
                iVar5 = *(int*)&this_00->field_52912;
                if (iVar5 < *(int*)((long)&this_00->field_52912 + 4)) {
                    *(int*)&this_00->field_52912 = iVar5 + 1;
                    puVar9 = &this_00->field_52880[(long)iVar5];
                    uVar1 = *puVar9;
                    iVar5 = field_104092;
                    field_104092 = iVar5 + 1;
                    puVar12 = &field_100092[(long)iVar5];
                    *puVar12 = (unsigned int)uVar1;
                    return 1;
                }
            }
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            puVar13 = &field_100092[(long)iVar5];
            *puVar13 = 4294967295;
            return 1;
        case 4212:
            *(uint32_t*)&this_00->field_52912 = 0;
            return 1;
        case 4213:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            iVar5 = ((ObjType*)local_50.operator->())->GetShiftClickIOp();
            uVar14 = 4294967295;
            if (iVar5 + 1U != 0) {
                uVar14 = iVar5 + 1U;
            }
        LAB_100165fba:
            iVar5 = field_104092;
            field_104092 = iVar5 + 1;
            goto LAB_1001660e4;
        case 4214:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            lVar11 = local_50.operator->();
            uVar14 = *(unsigned int*)(lVar11 + 208);
            break;
        case 4215:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            lVar11 = local_50.operator->();
            uVar14 = *(unsigned int*)(lVar11 + 212);
            break;
        case 4216:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            lVar11 = local_50.operator->();
            uVar14 = *(unsigned int*)(lVar11 + 216);
            break;
        case 4217:
            uVar15 = (long)field_104092 - 1;
            field_104092 = (int)uVar15;
            piVar10 = &field_100092[uVar15];
            local_50 = configdecoder::ObjType::List(*piVar10);
            lVar11 = local_50.operator->();
            uVar14 = *(unsigned int*)(lVar11 + 760);
            break;
        default:
            return 2;
        }
        iVar5 = field_104092;
        field_104092 = iVar5 + 1;
    LAB_1001660e4:
        puVar12 = &field_100092[(long)iVar5];
        *puVar12 = uVar14;
    LAB_100166172:
        return 1;
    }

} // namespace jag::oldscape
