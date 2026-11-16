// projects/osclient/ScriptRunnerImpl_1200To1299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001937b0
    uint64_t ScriptRunnerImpl::ExecuteCommand1200To1299Or2200To2299(ScriptOp scriptOp, const ClientScript& clientScript,
                                                                    bool arg3, bool arg4) {
        uint8_t* this_00;
        int iVar1;
        uint32_t uVar2;
        unsigned int uVar4;
        int* piVar5;
        IfType* ifType;
        Client* pCVar6;
        unsigned int* puVar7;
        long lVar8;
        uint32_t* puVar9;
        unsigned int uVar10;
        unsigned long uVar11;
        uint32_t in_register_00000081;
        ReturnValue local_40;

        int iVar12 = -1;
        if ((((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) {
            uVar11 = (long)field_104092 - 1;
            field_104092 = (int)uVar11;
            piVar5 = &field_100092[uVar11];
            iVar12 = *piVar5;
        }
        auto objType = SafeGetComponent(iVar12, arg4, arg3);
        uint64_t uVar13 = 0;
        if (*objType == nullptr) {
            field_141000->Raise(1);
        } else {
            ifType = (IfType*)**objType;
            pCVar6 = Client::Instance();
            pCVar6->ComponentUpdated(*objType);
            uVar13 = 2;
            switch (scriptOp - 1200) {
            case 1:
                ifType->field_228 = 2;
                uVar11 = (long)field_104092 - 1;
                field_104092 = (int)uVar11;
                puVar7 = &field_100092[uVar11];
                ifType->field_232 = *puVar7;
                break;
            case 2:
                ifType->field_228 = 3;
                pCVar6 = Client::Instance();
                lVar8 = pCVar6->field_52016.operator->();
                uVar4 = ((PlayerModel*)(*((lVar8 + 1008))).operator->())->GetHeadModelCacheId();
                ifType->field_232 = uVar4;
                break;
            default:
                goto switchD_100193873_caseD_3;
            case 7:
                uVar11 = (long)field_104092 - 1;
                field_104092 = (int)uVar11;
                piVar5 = &field_100092[uVar11];
                PlayerModelUtil::SetPlayerModel(*ifType, *piVar5 != 0);
                break;
            case 8:
                uVar11 = (long)field_104092 - 1;
                field_104092 = (int)uVar11;
                piVar5 = &field_100092[uVar11];
                PlayerModelUtil::SetPlayerModelObj(*ifType, *piVar5);
                break;
            case 9:
                iVar12 = field_104092;
                uVar11 = (long)iVar12 - 2;
                field_104092 = (int)uVar11;
                piVar5 = &field_100092[uVar11];
                iVar1 = *piVar5;
                piVar5 = &field_100092[(long)iVar12 - 1];
                PlayerModelUtil::SetPlayerModelColour(*ifType, iVar1, *piVar5);
                break;
            case 10:
                uVar11 = (long)field_104092 - 1;
                field_104092 = (int)uVar11;
                piVar5 = &field_100092[uVar11];
                PlayerModelUtil::SetPlayerModelBodyType(*ifType, *piVar5);
                break;
            case 13:
                field_104092 = field_104092 - 1;
            case 0:
            case 5:
            case 12:
                iVar12 = field_104092;
                uVar11 = (long)iVar12 - 2;
                field_104092 = (int)uVar11;
                this_00 = &field_100092;
                piVar5 = (int*)(*this_00)[uVar11];
                iVar1 = *piVar5;
                puVar9 = (uint32_t*)(*this_00)[(long)iVar12 - 1];
                uVar2 = *puVar9;
                local_40 = configdecoder::ObjType::List(iVar1);
                iVar12 = 3;
                switch (scriptOp - 1200) {
                case 0:
                    lVar8 = local_40.operator->();
                    iVar12 = (unsigned int)(*(int*)(lVar8 + 200) != 0) * 2 + 1;
                    break;
                default:
                    LogAssert("c == ScriptOp::SET_OBJECT_NO_NUM",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "ScriptRunnerImpl_1200To1299.cpp",
                              63, nullptr);
                case 5:
                    iVar12 = 0;
                    break;
                case 12:
                    break;
                case 13:
                    piVar5 = (int*)(*this_00)[(long)field_104092 + 2];
                    iVar12 = *piVar5;
                }
                *(int*)&ifType->field_1984 = iVar1;
                *(uint32_t*)((long)&ifType->field_1984 + 4) = uVar2;
                lVar8 = local_40.operator->();
                ifType->field_260 = *(unsigned int*)(lVar8 + 180);
                lVar8 = local_40.operator->();
                ifType->field_264 = *(unsigned int*)(lVar8 + 184);
                lVar8 = local_40.operator->();
                ifType->field_268 = *(unsigned int*)(lVar8 + 188);
                lVar8 = local_40.operator->();
                ifType->field_252 = *(int*)(lVar8 + 192);
                lVar8 = local_40.operator->();
                ifType->field_256 = *(int*)(lVar8 + 196);
                lVar8 = local_40.operator->();
                uVar4 = *(unsigned int*)(lVar8 + 176);
                ifType->field_272 = uVar4;
                ifType->field_292 = iVar12;
                uVar10 = ifType->field_276;
                if ((0 < (int)uVar10) || (uVar10 = ifType->field_56, 0 < (int)uVar10)) {
                    ifType->field_272 = (int)(uVar4 << 5) / (int)uVar10;
                }
                if ((ifType->field_12 == 5) && (-1 < ifType->field_680)) {
                    pCVar6 = Client::Instance();
                    pCVar6->GetEntityOverlays()->DestroyOverlay(ifType->field_680);
                }
                ifType->field_680 = -1;
            }
            uVar13 = 1;
        }
    switchD_100193873_caseD_3:
        return uVar13;
    }

} // namespace jag::oldscape
