// projects/osclient/ScriptRunnerImpl_3300To3399.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015e640
    uint64_t ScriptRunnerImpl::ExecuteCommand3300To3399(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* this_00;
        bool cVar1;
        int iVar2;
        int iVar3;
        uint32_t uVar4;
        unsigned int uVar5;
        int iVar6;
        unsigned int uVar7;
        int* piVar8;
        int* piVar9;
        uint32_t* puVar10;
        unsigned int* puVar11;
        long lVar12;
        uint32_t in_register_00000034;
        array<int, 25ul>* this_03;
        array<CoordType<UICoordSpecializer>, 4ul>* this_04;
        ReturnValue local_58;
        int* local_48;
        unsigned long local_40;
        int local_34;

        unsigned long uVar13 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)scriptOp);
        uint64_t uVar14 = 2;
        auto this_01 = Client::Instance();
        switch (scriptOp) {
        case 3300:
            uVar7 = this_01->field_8488;
            break;
        case 3301:
            lVar12 = (long)field_104092;
            field_104092 = (int)(lVar12 - 2U);
            piVar9 = &field_100092[lVar12 - 2U];
            iVar6 = *piVar9;
            goto LAB_10015e83f;
        case 3302:
            lVar12 = (long)field_104092;
            field_104092 = (int)(lVar12 - 2U);
            piVar9 = &field_100092[lVar12 - 2U];
            iVar6 = *piVar9;
            goto LAB_10015e887;
        case 3303:
            lVar12 = (long)field_104092;
            field_104092 = (int)(lVar12 - 2U);
            piVar9 = &field_100092[lVar12 - 2U];
            iVar6 = *piVar9;
            goto LAB_10015e8cc;
        case 3304:
            uVar13 = (long)field_104092 - 1;
            field_104092 = (int)uVar13;
            piVar9 = &field_100092[uVar13];
            local_58 = configdecoder::InvType::List(*piVar9);
            puVar10 = (uint32_t*)local_58.operator->();
            uVar4 = *puVar10;
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar10 = &field_100092[(long)iVar6];
            *puVar10 = uVar4;
            goto LAB_10015ebe3;
        case 3305:
            iVar6 = field_104092;
            field_104092 = (int)((long)iVar6 - 1U);
            piVar9 = &field_100092[(long)iVar6 - 1U];
            uVar13 = (unsigned long)*piVar9;
            this_03 = (array<int, 25ul>*)&this_01->field_52040;
            goto LAB_10015e798;
        case 3306:
            iVar6 = field_104092;
            field_104092 = (int)((long)iVar6 - 1U);
            piVar9 = &field_100092[(long)iVar6 - 1U];
            uVar13 = (unsigned long)*piVar9;
            this_03 = (array<int, 25ul>*)&this_01->field_52140;
            goto LAB_10015e798;
        case 3307:
            iVar6 = field_104092;
            field_104092 = (int)((long)iVar6 - 1U);
            piVar9 = &field_100092[(long)iVar6 - 1U];
            uVar13 = (unsigned long)*piVar9;
            this_03 = (array<int, 25ul>*)&this_01->field_52240;
        LAB_10015e798:
            piVar8 = (int*)(*this_03)[uVar13];
            iVar2 = *piVar8;
            field_104092 = iVar6;
            *piVar9 = iVar2;
            goto LAB_10015ebe3;
        case 3308:
            iVar6 = this_01->field_51984;
            lVar12 = this_01->field_52016.operator->();
            uVar7 = *(unsigned int*)(lVar12 + 24);
            uVar5 = this_01->field_53220;
            lVar12 = this_01->field_52016.operator->();
            uVar7 =
                ((uVar7 >> 7) + uVar5) * 16384 + iVar6 * 268435456 + this_01->field_53224 + (*(int*)(lVar12 + 28) >> 7);
            break;
        case 3309:
            iVar6 = field_104092;
            field_104092 = (int)((long)iVar6 - 1U);
            puVar11 = &field_100092[(long)iVar6 - 1U];
            uVar7 = *puVar11 >> 14 & 16383;
            goto LAB_10015eb6c;
        case 3310:
            iVar6 = field_104092;
            field_104092 = (int)((long)iVar6 - 1U);
            puVar11 = &field_100092[(long)iVar6 - 1U];
            uVar7 = (int)*puVar11 >> 28;
            goto LAB_10015eb6c;
        case 3311:
            iVar6 = field_104092;
            field_104092 = (int)((long)iVar6 - 1U);
            puVar11 = &field_100092[(long)iVar6 - 1U];
            uVar7 = *puVar11 & 16383;
        LAB_10015eb6c:
            field_104092 = iVar6;
            *puVar11 = uVar7;
            goto LAB_10015ebe3;
        case 3312:
            uVar7 = (unsigned int)this_01->field_8424;
            break;
        case 3313:
            lVar12 = (long)field_104092;
            field_104092 = (int)(lVar12 - 2U);
            piVar9 = &field_100092[lVar12 - 2U];
            iVar6 = *piVar9 + 32768;
        LAB_10015e83f:
            piVar9 = &field_100092[lVar12 - 1];
            uVar7 = ClientInvCache::GetType(iVar6, *piVar9);
        LAB_10015e8e5:
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            goto LAB_10015ebdc;
        case 3314:
            lVar12 = (long)field_104092;
            field_104092 = (int)(lVar12 - 2U);
            piVar9 = &field_100092[lVar12 - 2U];
            iVar6 = *piVar9 + 32768;
        LAB_10015e887:
            piVar9 = &field_100092[lVar12 - 1];
            uVar7 = ClientInvCache::GetCount(iVar6, *piVar9);
            goto LAB_10015e8e5;
        case 3315:
            lVar12 = (long)field_104092;
            field_104092 = (int)(lVar12 - 2U);
            piVar9 = &field_100092[lVar12 - 2U];
            iVar6 = *piVar9 + 32768;
        LAB_10015e8cc:
            piVar9 = &field_100092[lVar12 - 1];
            uVar7 = ClientInvCache::InvTotal(iVar6, *piVar9);
            goto LAB_10015e8e5;
        case 3316:
            uVar7 = this_01->field_53260;
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar11 = &field_100092[(long)iVar6];
            if ((int)uVar7 < 2) {
            LAB_10015eba0:
                *puVar11 = 0;
                goto LAB_10015ebe3;
            }
            goto LAB_10015ebe1;
        case 3317:
            uVar7 = this_01->field_53268;
            break;
        case 3318:
            uVar7 = this_01->GetWorldId();
            break;
        default:
            goto switchD_10015e681_caseD_cf7;
        case 3321:
            iVar6 = *(int*)&this_01->field_53272;
            iVar2 = field_104092;
            field_104092 = iVar2 + 1;
            piVar9 = &field_100092[(long)iVar2];
            *piVar9 = iVar6 / 100;
            goto LAB_10015ebe3;
        case 3322:
            uVar7 = this_01->field_53276;
            break;
        case 3323:
            cVar1 = this_01->field_53264;
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar11 = &field_100092[(long)iVar6];
            if (!cVar1)
                goto LAB_10015eba0;
            *puVar11 = 1;
            goto LAB_10015ebe3;
        case 3324:
            uVar7 = this_01->field_52992;
            break;
        case 3325:
            lVar12 = (long)field_104092;
            field_104092 = (int)(lVar12 - 4U);
            this_00 = &field_100092;
            local_48 = (int*)(*this_00)[lVar12 - 4U];
            local_34 = *local_48;
            local_40 = lVar12 - 3;
            piVar9 = (int*)(*this_00)[local_40];
            iVar6 = *piVar9;
            piVar9 = (int*)(*this_00)[lVar12 - 2];
            iVar2 = *piVar9;
            piVar9 = (int*)(*this_00)[lVar12 - 1];
            iVar3 = *piVar9;
            field_104092 = (int)local_40;
            *local_48 = iVar2 * 268435456 + iVar6 * 16384 + local_34 + iVar3;
            goto LAB_10015ebe3;
        case 3326:
            this_04 = (array<CoordType<UICoordSpecializer>, 4ul>*)&this_01->field_8560;
            goto LAB_10015ea23;
        case 3327:
            this_04 = (array<CoordType<UICoordSpecializer>, 4ul>*)&this_01->field_8576;
        LAB_10015ea23:
            uVar7 = ((CoordMapSquare*)(*this_04)[uVar13])->GetX();
            break;
        case 3328:
            uVar7 = this_01->GetIdleTimeRemaining();
            break;
        case 3329:
            this_01->ResetIdleTimeRemaining();
            goto LAB_10015ebe3;
        case 3330:
            local_58 = this_01->GetMinimapFlagCoord();
            iVar6 = local_58.GetZ();
            local_58.SetX(iVar6 + this_01->field_53220);
            iVar6 = local_58.GetPos();
            local_58.SetZ(iVar6 + this_01->field_53224);
            uVar7 = local_58.ToBitPacked();
            break;
        case 3331:
            uVar7 = *(unsigned int*)&this_01->field_53272;
        }
        iVar6 = field_104092;
        field_104092 = iVar6 + 1;
    LAB_10015ebdc:
        puVar11 = &field_100092[(long)iVar6];
    LAB_10015ebe1:
        *puVar11 = uVar7;
    LAB_10015ebe3:
        uVar14 = 1;
    switchD_10015e681_caseD_cf7:
        return uVar14;
    }

} // namespace jag::oldscape
