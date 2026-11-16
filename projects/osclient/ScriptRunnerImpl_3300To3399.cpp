// projects/osclient/ScriptRunnerImpl_3300To3399.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015e640, 1632 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand3300To3399(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand3300To3399(long param_1, undefined4 param_2) {
        array<int, 1000ul>* this;
        char cVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        uint uVar5;
        int iVar6;
        uint uVar7;
        Client* this_00;
        int* piVar8;
        int* piVar9;
        CoordMapSquare* this_01;
        undefined4* puVar10;
        uint* puVar11;
        long lVar12;
        ulong uVar13;
        undefined8 uVar14;
        array<int, 25ul>* this_02;
        undefined1* puVar15;
        InvType local_58;
        int* local_48;
        ulong local_40;
        int local_34;

        uVar14 = 2;
        this_00 = (Client*)Client::Instance();
        switch (param_2) {
        case 3300:
            uVar7 = this_00->field_8488;
            break;
        case 3301:
            lVar12 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar12 - 2U);
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 2U);
            iVar6 = *piVar9;
            goto LAB_10015e83f;
        case 3302:
            lVar12 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar12 - 2U);
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 2U);
            iVar6 = *piVar9;
            goto LAB_10015e887;
        case 3303:
            lVar12 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar12 - 2U);
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 2U);
            iVar6 = *piVar9;
            goto LAB_10015e8cc;
        case 3304:
            uVar13 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar13;
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            local_58.List(*piVar9);
            puVar10 = (undefined4*)shared_ptr<configdecoder::InvType>::operator->(
                (shared_ptr<configdecoder::InvType>*)&local_58);
            uVar4 = *puVar10;
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            puVar10 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            *puVar10 = uVar4;
            local_58.~shared_ptr();
            goto LAB_10015ebe3;
        case 3305:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar6 - 1U);
            piVar9 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6 - 1U);
            uVar13 = (ulong)*piVar9;
            this_02 = (array<int, 25ul>*)&this_00->field_52040;
            goto LAB_10015e798;
        case 3306:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar6 - 1U);
            piVar9 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6 - 1U);
            uVar13 = (ulong)*piVar9;
            this_02 = (array<int, 25ul>*)&this_00->field_52140;
            goto LAB_10015e798;
        case 3307:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar6 - 1U);
            piVar9 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6 - 1U);
            uVar13 = (ulong)*piVar9;
            this_02 = (array<int, 25ul>*)&this_00->field_52240;
        LAB_10015e798:
            piVar8 = (int*)std::array<int, 25ul>::operator[](this_02, uVar13);
            iVar2 = *piVar8;
            *(int*)(param_1 + 104092) = iVar6;
            *piVar9 = iVar2;
            goto LAB_10015ebe3;
        case 3308:
            iVar6 = this_00->m_playerLevel;
            lVar12 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00->field_52016);
            uVar7 = *(uint*)(lVar12 + 24);
            uVar5 = this_00->field_53220;
            lVar12 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_00->field_52016);
            uVar7 =
                ((uVar7 >> 7) + uVar5) * 16384 + iVar6 * 268435456 + this_00->field_53224 + (*(int*)(lVar12 + 28) >> 7);
            break;
        case 3309:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar6 - 1U);
            puVar11 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6 - 1U);
            uVar7 = *puVar11 >> 14 & 16383;
            goto LAB_10015eb6c;
        case 3310:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar6 - 1U);
            puVar11 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6 - 1U);
            uVar7 = (int)*puVar11 >> 28;
            goto LAB_10015eb6c;
        case 3311:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)((long)iVar6 - 1U);
            puVar11 =
                (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6 - 1U);
            uVar7 = *puVar11 & 16383;
        LAB_10015eb6c:
            *(int*)(param_1 + 104092) = iVar6;
            *puVar11 = uVar7;
            goto LAB_10015ebe3;
        case 3312:
            uVar7 = (uint)this_00->field_8424;
            break;
        case 3313:
            lVar12 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar12 - 2U);
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 2U);
            iVar6 = *piVar9 + 32768;
        LAB_10015e83f:
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 1);
            uVar7 = ClientInvCache::GetType(iVar6, *piVar9);
        LAB_10015e8e5:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            goto LAB_10015ebdc;
        case 3314:
            lVar12 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar12 - 2U);
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 2U);
            iVar6 = *piVar9 + 32768;
        LAB_10015e887:
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 1);
            uVar7 = ClientInvCache::GetCount(iVar6, *piVar9);
            goto LAB_10015e8e5;
        case 3315:
            lVar12 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar12 - 2U);
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 2U);
            iVar6 = *piVar9 + 32768;
        LAB_10015e8cc:
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), lVar12 - 1);
            uVar7 = ClientInvCache::InvTotal(iVar6, *piVar9);
            goto LAB_10015e8e5;
        case 3316:
            uVar7 = this_00->field_53260;
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            if ((int)uVar7 < 2) {
            LAB_10015eba0:
                *puVar11 = 0;
                goto LAB_10015ebe3;
            }
            goto LAB_10015ebe1;
        case 3317:
            uVar7 = this_00->field_53268;
            break;
        case 3318:
            uVar7 = this_00->GetWorldId();
            break;
        default:
            goto switchD_10015e681_caseD_cf7;
        case 3321:
            iVar6 = *(int*)&this_00->field_53272;
            iVar2 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar2 + 1;
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar2);
            *piVar9 = iVar6 / 100;
            goto LAB_10015ebe3;
        case 3322:
            uVar7 = this_00->field_53276;
            break;
        case 3323:
            cVar1 = this_00->field_53264;
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            if (cVar1 == '\0')
                goto LAB_10015eba0;
            *puVar11 = 1;
            goto LAB_10015ebe3;
        case 3324:
            uVar7 = this_00->field_52992;
            break;
        case 3325:
            lVar12 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar12 - 4U);
            this = (array<int, 1000ul>*)(param_1 + 100092);
            local_48 = (int*)std::array<int, 1000ul>::operator[](this, lVar12 - 4U);
            local_34 = *local_48;
            local_40 = lVar12 - 3;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](this, local_40);
            iVar6 = *piVar9;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](this, lVar12 - 2);
            iVar2 = *piVar9;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](this, lVar12 - 1);
            iVar3 = *piVar9;
            *(int*)(param_1 + 104092) = (int)local_40;
            *local_48 = iVar2 * 268435456 + iVar6 * 16384 + local_34 + iVar3;
            goto LAB_10015ebe3;
        case 3326:
            puVar15 = &this_00->field_8560;
            goto LAB_10015ea23;
        case 3327:
            puVar15 = &this_00->field_8576;
        LAB_10015ea23:
            this_01 = (CoordMapSquare*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[]((ulong)puVar15);
            uVar7 = this_01->GetX();
            break;
        case 3328:
            uVar7 = this_00->GetIdleTimeRemaining();
            break;
        case 3329:
            this_00->ResetIdleTimeRemaining();
            goto LAB_10015ebe3;
        case 3330:
            local_58.GetMinimapFlagCoord();
            iVar6 = local_58.GetZ();
            local_58.SetX(iVar6 + this_00->field_53220);
            iVar6 = local_58.GetPos();
            local_58.SetZ(iVar6 + this_00->field_53224);
            uVar7 = local_58.ToBitPacked();
            break;
        case 3331:
            uVar7 = *(uint*)&this_00->field_53272;
        }
        iVar6 = *(int*)(param_1 + 104092);
        *(int*)(param_1 + 104092) = iVar6 + 1;
    LAB_10015ebdc:
        puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
    LAB_10015ebe1:
        *puVar11 = uVar7;
    LAB_10015ebe3:
        uVar14 = 1;
    switchD_10015e681_caseD_cf7:
        return uVar14;
    }

} // namespace jag::oldscape
