// projects/osclient/ScriptRunnerImpl_1200To1299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001937b0, 1136 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1200To1299Or2200To2299(ScriptOp, ClientScript const&, bool, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1200To1299Or2200To2299(int param_2, undefined8 param_3, bool param_4,
                                                                      int param_5) {
        undefined1* this_00;
        int iVar1;
        undefined4 uVar2;
        uint uVar4;
        int* piVar5;
        shared_ptr* this_01;
        IfType* pIVar6;
        Client* pCVar7;
        uint* puVar8;
        long lVar9;
        PlayerModel* this_02;
        undefined4* puVar10;
        EntityOverlays* this_03;
        uint uVar11;
        ulong uVar12;
        int iVar13;
        undefined8 uVar14;
        shared_ptr<configdecoder::ObjType> local_40[16];

        iVar13 = -1;
        if (param_5 != 0) {
            uVar12 = (long)field_104092 - 1;
            field_104092 = (int)uVar12;
            piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar12);
            iVar13 = *piVar5;
        }
        this_01 = (shared_ptr*)SafeGetComponent(this, iVar13, SUB41(param_5, 0), param_4);
        uVar14 = 0;
        if (operator==(this_01, (_func_decltype_nullptr*)0)) {
            (&field_141000, 1)->Raise();
        } else {
            pIVar6 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this_01);
            pCVar7 = (Client*)Client::Instance();
            pCVar7->ComponentUpdated(this_01);
            uVar14 = 2;
            switch (param_2 + -1200) {
            case 1:
                pIVar6->field_228 = 2;
                uVar12 = (long)field_104092 - 1;
                field_104092 = (int)uVar12;
                puVar8 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar12);
                pIVar6->field_232 = *puVar8;
                break;
            case 2:
                pIVar6->field_228 = 3;
                lVar9 = Client::Instance();
                lVar9 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)(lVar9 + 52016));
                this_02 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
                    (shared_ptr<rs2lib::PlayerModel>*)(lVar9 + 1008));
                uVar4 = this_02->GetHeadModelCacheId();
                pIVar6->field_232 = uVar4;
                break;
            default:
                goto switchD_100193873_caseD_3;
            case 7:
                uVar12 = (long)field_104092 - 1;
                field_104092 = (int)uVar12;
                piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar12);
                PlayerModelUtil::SetPlayerModel(pIVar6, *piVar5 != 0);
                break;
            case 8:
                uVar12 = (long)field_104092 - 1;
                field_104092 = (int)uVar12;
                piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar12);
                PlayerModelUtil::SetPlayerModelObj(pIVar6, *piVar5);
                break;
            case 9:
                iVar13 = field_104092;
                uVar12 = (long)iVar13 - 2;
                field_104092 = (int)uVar12;
                piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar12);
                iVar1 = *piVar5;
                piVar5 =
                    (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar13 - 1);
                PlayerModelUtil::SetPlayerModelColour(pIVar6, iVar1, *piVar5);
                break;
            case 10:
                uVar12 = (long)field_104092 - 1;
                field_104092 = (int)uVar12;
                piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar12);
                PlayerModelUtil::SetPlayerModelBodyType(pIVar6, *piVar5);
                break;
            case 13:
                field_104092 = field_104092 + -1;
            case 0:
            case 5:
            case 12:
                iVar13 = field_104092;
                uVar12 = (long)iVar13 - 2;
                field_104092 = (int)uVar12;
                this_00 = &field_100092;
                piVar5 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, uVar12);
                iVar1 = *piVar5;
                puVar10 =
                    (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, (long)iVar13 - 1);
                uVar2 = *puVar10;
                local_40->List(iVar1);
                iVar13 = 3;
                switch (param_2 + -1200) {
                case 0:
                    lVar9 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
                    iVar13 = (uint)(*(int*)(lVar9 + 200) != 0) * 2 + 1;
                    break;
                default:
                    /* WARNING: Subroutine does not return */
                    LogAssert("c == ScriptOp::SET_OBJECT_NO_NUM",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "ScriptRunnerImpl_1200To1299.cpp",
                              63, (char*)0);
                case 5:
                    iVar13 = 0;
                    break;
                case 12:
                    break;
                case 13:
                    piVar5 =
                        (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)this_00, (long)field_104092 + 2);
                    iVar13 = *piVar5;
                }
                *(int*)&pIVar6->field_1984 = iVar1;
                *(undefined4*)((long)&pIVar6->field_1984 + 4) = uVar2;
                lVar9 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
                pIVar6->field_260 = *(uint*)(lVar9 + 180);
                lVar9 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
                pIVar6->field_264 = *(uint*)(lVar9 + 184);
                lVar9 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
                pIVar6->field_268 = *(uint*)(lVar9 + 188);
                lVar9 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
                pIVar6->field_252 = *(int*)(lVar9 + 192);
                lVar9 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
                pIVar6->field_256 = *(int*)(lVar9 + 196);
                lVar9 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
                uVar4 = *(uint*)(lVar9 + 176);
                pIVar6->field_272 = uVar4;
                pIVar6->field_292 = iVar13;
                uVar11 = pIVar6->field_276;
                if ((0 < (int)uVar11) || (uVar11 = pIVar6->field_56, 0 < (int)uVar11)) {
                    pIVar6->field_272 = (int)(uVar4 << 5) / (int)uVar11;
                }
                if ((pIVar6->field_12 == 5) && (-1 < pIVar6->field_680)) {
                    pCVar7 = (Client*)Client::Instance();
                    this_03 = (EntityOverlays*)pCVar7->GetEntityOverlays();
                    this_03->DestroyOverlay(pIVar6->field_680);
                }
                pIVar6->field_680 = -1;
                local_40->~shared_ptr();
            }
            uVar14 = 1;
        }
    switchD_100193873_caseD_3:
        return uVar14;
    }

} // namespace jag::oldscape
