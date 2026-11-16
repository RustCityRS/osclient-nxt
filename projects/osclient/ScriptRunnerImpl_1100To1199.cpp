// projects/osclient/ScriptRunnerImpl_1100To1199.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001925c0
    uint64_t ScriptRunnerImpl::ExecuteCommand1100To1199Or2100To2199(ScriptOp scriptOp, const ClientScript& clientScript,
                                                                    bool arg3, bool arg4) {
        char16_t arg1;
        int iVar1;
        bool cVar3;
        int* piVar5;
        uint32_t* puVar6;
        uint32_t* puVar7;
        TextWrapMode* pTVar8;
        InputField* pIVar9;
        TextContentVisibility* pTVar10;
        eastl::string* pbVar11;
        Array<shared_ptr<rs2lib::IfType>>* ifTypes;
        unsigned int* puVar12;
        basic_string<char, BucketAllocatorEASTL>* this_01;
        ClientDataProvider* clientDataProvider;
        CRMViewHandler* pCVar14;
        unsigned char* puVar15;
        InputEnterAction* pIVar16;
        InputFieldFilter* pIVar17;
        KeyConsumptionMap* pKVar18;
        char16_t* pwVar19;
        InputKeyConsumptionMode* pIVar20;
        Logger* pLVar21;
        long lVar22;
        long lVar23;
        unsigned long uVar24;
        uint64_t in_register_00000081;
        uint8_t* puVar25;
        unsigned long arg1_00;
        shared_ptr<dash3d::Decor> local_70;
        ReturnValue local_60;
        int local_3c;

        int iVar4 = -1;
        auto local_38 = Client::Instance();
        if ((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) {
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            iVar4 = *piVar5;
        }
        auto objType = SafeGetComponent(iVar4, arg4, arg3);
        bool bVar2 = *objType == nullptr;
        if (bVar2) {
            field_141000->Raise(1);
            return 0;
        }
        IfType* this_00 = (IfType*)**objType;
        Client* pCVar13 = local_38;
        switch (scriptOp) {
        case 1100:
            iVar4 = field_104092;
            uVar24 = (long)iVar4 - 2;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            iVar1 = *piVar5;
            piVar5 = &field_100092[(long)iVar4 - 1];
            iVar4 = *piVar5;
            if (this_00->field_12 != 12) {
                local_38->SetIf3ComponentScrollPos(*objType, iVar1, iVar4);
                return 1;
            }
            pIVar9 = (InputField*)this_00->GetInputField();
            pCVar13 = local_38;
            if (pIVar9 == nullptr) {
                return 1;
            }
            cVar3 = pIVar9->SetScroll(iVar1, iVar4);
            if (!cVar3) {
                return 1;
            }
            goto LAB_100193442;
        case 1101:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar7 = &field_100092[uVar24];
            this_00->field_116 = *puVar7;
            break;
        case 1102:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_132 = *piVar5 == 1;
            break;
        case 1103:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_140 = *puVar12;
            break;
        case 1104:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_148 = *puVar12;
            break;
        case 1105:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_164 = *piVar5;
            break;
        case 1106:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_208 = *puVar12;
            break;
        case 1107:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_212 = *piVar5 == 1;
            break;
        case 1108:
            this_00->field_228 = 1;
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_232 = *puVar12;
            break;
        case 1109:
            lVar22 = (long)field_104092;
            field_104092 = (int)(lVar22 - 6U);
            puVar25 = &field_100092;
            piVar5 = (int*)(*puVar25)[lVar22 - 6U];
            this_00->field_252 = *piVar5;
            piVar5 = (int*)(*puVar25)[lVar22 - 5];
            this_00->field_256 = *piVar5;
            puVar12 = (unsigned int*)(*puVar25)[lVar22 - 4];
            this_00->field_260 = *puVar12;
            puVar12 = (unsigned int*)(*puVar25)[lVar22 - 3];
            this_00->field_264 = *puVar12;
            puVar12 = (unsigned int*)(*puVar25)[lVar22 - 2];
            this_00->field_268 = *puVar12;
            puVar12 = (unsigned int*)(*puVar25)[lVar22 - 1];
            this_00->field_272 = *puVar12;
            break;
        case 1110:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            if (this_00->field_244 == *puVar12) {
                return 1;
            }
            this_00->field_244 = *puVar12;
            this_00->field_1992 = 0;
            goto LAB_10019343e;
        case 1111:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_288 = *piVar5 == 1;
            break;
        case 1112:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar11 = &field_104096[uVar24];
            local_60 = eastl::string(*pbVar11);
            iVar4 = local_60.compare(&this_00->field_320);
            if (iVar4 != 0) {
                this_00->field_320 = &local_60;
                local_38->ComponentUpdated(*objType);
            }
            goto LAB_100192dcd;
        case 1113:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            if (this_00->field_312 == *puVar12) {
                return 1;
            }
            this_00->field_312 = *puVar12;
            if ((this_00->field_12 == 12) && (pIVar9 = (InputField*)this_00->GetInputField(), pIVar9 != nullptr)) {
                pIVar9->ClearFont();
            }
            goto LAB_10019343e;
        case 1114:
            iVar4 = field_104092;
            uVar24 = (long)iVar4 - 3;
            field_104092 = (int)uVar24;
            if (this_00->field_12 == 12) {
                pIVar9 = (InputField*)this_00->GetInputField();
                if (pIVar9 != nullptr) {
                    puVar25 = &field_100092;
                    iVar4 = field_104092;
                    piVar5 = (int*)(*puVar25)[(long)iVar4];
                    local_3c = *piVar5;
                    piVar5 = (int*)(*puVar25)[(long)iVar4 + 1];
                    pIVar9->SetAlignment(local_3c, *piVar5);
                    piVar5 = (int*)(*puVar25)[(long)field_104092 + 2];
                    pIVar9->SetLineSpacing(*piVar5);
                }
            } else {
                puVar25 = &field_100092;
                puVar12 = (unsigned int*)(*puVar25)[uVar24];
                this_00->field_388 = *puVar12;
                puVar12 = (unsigned int*)(*puVar25)[(long)iVar4 - 2];
                this_00->field_392 = *puVar12;
                puVar12 = (unsigned int*)(*puVar25)[(long)(iVar4 - 1)];
                this_00->field_384 = *puVar12;
            }
            break;
        case 1115:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_396 = *piVar5 == 1;
            break;
        case 1116:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_216 = *puVar12;
            break;
        case 1117:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_220 = *puVar12;
            break;
        case 1118:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_224 = *piVar5 == 1;
            break;
        case 1119:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_225 = *piVar5 == 1;
            break;
        case 1120:
            iVar1 = field_104092;
            uVar24 = (long)iVar1 - 2;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_104 = *puVar12;
            puVar12 = &field_100092[(long)iVar1 - 1];
            pCVar13 = local_38;
            this_00->field_108 = *puVar12;
            local_38->ComponentUpdated(*objType);
            if (iVar4 == -1) {
                return 1;
            }
            if (this_00->field_12 == 0) {
                ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)(*(
                    (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)(iVar4 >> 16)];
                pCVar13->InterfaceCalculateSizeAndPosSubcomponents(*ifTypes, *objType, false);
                return 1;
            }
            return 1;
        case 1121:
            local_38->PauseContinue(this_00->field_4, this_00->field_8);
            pCVar13->field_52424 = *objType;
            goto LAB_1001935a0;
        case 1122:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_168 = *piVar5;
            break;
        case 1123:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar7 = &field_100092[uVar24];
            this_00->field_120 = *puVar7;
            break;
        case 1124:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar7 = &field_100092[uVar24];
            this_00->field_144 = *puVar7;
            break;
        case 1125:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            if (2 < *puVar12) {
                return 1;
            }
            *(unsigned int*)&this_00->field_136 = *puVar12;
            goto LAB_10019343e;
        case 1126:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_152 = *piVar5 == 1;
            return 1;
        case 1127:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            this_00->field_289 = *piVar5 == 1;
            return 1;
        case 1128:
            iVar4 = field_104092;
            uVar24 = (long)iVar4 - 1;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_160 = *puVar12;
            uVar24 = (long)iVar4 - 2;
            field_104092 = (int)uVar24;
            puVar12 = &field_100092[uVar24];
            this_00->field_156 = *puVar12;
            return 1;
        case 1129:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            this_01 = &field_104096[uVar24];
            iVar4 = this_01->compare(&this_00->field_176);
            if (iVar4 == 0) {
                return 1;
            }
            this_00->field_176 = this_01;
            goto LAB_10019343e;
        case 1130:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar11 = &field_104096[uVar24];
            pCVar13 = Client::Instance();
            clientDataProvider = (ClientDataProvider*)pCVar13->GetEndpointURLProvider();
            this_00->InitialiseCRM(*pbVar11, clientDataProvider);
            return 1;
        case 1131:
            iVar4 = field_104092;
            uVar24 = (long)iVar4 - 2;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            iVar1 = *piVar5;
            piVar5 = &field_100092[(long)iVar4 - 1];
            iVar4 = *piVar5;
            pCVar14 = this_00->GetCRMViewHandler();
            if (pCVar14 == nullptr) {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_1100To1199.cpp",
                             331,
                             "Can\'t set CRMView font as the CRMView is not yet set up. Call setcrm_url or "
                             "setcrm_fromjson first.");
                return 1;
            }
            pCVar14->AssignFont(iVar1, iVar4);
            return 1;
        case 1132:
            pCVar14 = this_00->GetCRMViewHandler();
            if (pCVar14 == nullptr) {
                pLVar21 = logger::default_logger();
                pLVar21->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                             "ScriptRunnerImpl_1100To1199.cpp",
                             345,
                             "Can\'t set CRMView servertarget as the CRMView is not yet set up. Call setcrm_url or "
                             "setcrm_fromjson first.");
                field_136096 = field_136096 - 1;
                field_104092 = field_104092 - 1;
                return 1;
            }
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar11 = &field_104096[uVar24];
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            pCVar14->AssignServerTarget(*pbVar11, *piVar5);
            return 1;
        case 1133:
            field_104092 = field_104092 - 1;
            puVar7 = (uint32_t*)this_00->GetInputFieldAppearance();
            if (puVar7 == nullptr) {
                return 1;
            }
            puVar6 = &field_100092[(long)field_104092];
            *puVar7 = *puVar6;
            goto LAB_10019343e;
        case 1134:
            field_104092 = field_104092 - 1;
            lVar22 = this_00->GetInputFieldAppearance();
            if (lVar22 == 0) {
                return 1;
            }
            puVar7 = &field_100092[(long)field_104092];
            *(uint32_t*)(lVar22 + 4) = *puVar7;
            goto LAB_10019343e;
        case 1135:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar11 = &field_104096[uVar24];
            local_60 = eastl::string(*pbVar11);
            lVar22 = this_00->GetInputField();
            if (lVar22 != 0) {
                this_00->field_352 = &local_60;
            }
        LAB_100192dcd:
            return 1;
        case 1136:
            field_104092 = field_104092 - 1;
            lVar22 = this_00->GetInputFieldAppearance();
            if (lVar22 == 0) {
                return 1;
            }
            puVar7 = &field_100092[(long)field_104092];
            *(uint32_t*)(lVar22 + 8) = *puVar7;
            goto LAB_10019343e;
        case 1137:
            field_104092 = field_104092 - 1;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            piVar5 = &field_100092[(long)field_104092];
            cVar3 = pIVar9->SetMaxLineWidth(*piVar5);
            goto LAB_100193436;
        case 1138:
            field_104092 = field_104092 - 1;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            puVar15 = &field_100092[(long)field_104092];
            cVar3 = pIVar9->SetMaxLineCount(*puVar15);
            goto LAB_100193436;
        case 1139:
            field_104092 = field_104092 - 1;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            piVar5 = &field_100092[(long)field_104092];
            cVar3 = pIVar9->SetCharacterLimit((long)*piVar5);
            goto LAB_100193436;
        case 1140:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            pCVar13 = local_38;
            iVar4 = *piVar5;
            puVar25 = local_38->field_19072;
            puVar25->ClearFocusedComponent();
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            cVar3 = pIVar9->SetFocus(iVar4 != 0);
            if (!cVar3) {
                return 1;
            }
            if (iVar4 != 0) {
                local_70 = shared_ptr(objType);
                puVar25->SetFocusedComponent(&local_70);
            }
            goto LAB_100193442;
        case 1141:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            iVar4 = *piVar5;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (iVar4 == 0) {
                local_60 = local_38->field_19072->GetFocusedComponent();
                lVar22 = local_60.end();
                lVar23 = objType->end();
                bVar2 = lVar22 == lVar23;
            } else {
                bVar2 = false;
            }
            pCVar13 = local_38;
            if (bVar2) {
                local_38->field_19072->ClearFocusedComponent();
                pCVar13->ComponentUpdated(*objType);
            }
            if (pIVar9 == nullptr) {
                return 1;
            }
            pIVar9->SetFocusAllowed(iVar4 != 0);
            return 1;
        case 1142:
            iVar4 = field_104092;
            uVar24 = (long)iVar4 - 2;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            arg1_00 = (unsigned long)*piVar5;
            piVar5 = &field_100092[(long)iVar4 - 1];
            uVar24 = (unsigned long)*piVar5;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            goto LAB_100193431;
        case 1143:
            uVar24 = (long)field_104092 - 1;
            field_104092 = (int)uVar24;
            piVar5 = &field_100092[uVar24];
            uVar24 = (unsigned long)*piVar5;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            arg1_00 = uVar24;
        LAB_100193431:
            cVar3 = pIVar9->SetSelection(arg1_00, uVar24);
        LAB_100193436:
            if (!cVar3) {
                return 1;
            }
            goto LAB_10019343e;
        case 1144:
            field_104092 = field_104092 - 1;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            pTVar8 = &field_100092[(long)field_104092];
            pIVar9->SetWrapMode(*pTVar8);
            goto LAB_10019343e;
        case 1145:
            field_104092 = field_104092 - 1;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            pIVar16 = &field_100092[(long)field_104092];
            pIVar9->SetEnterAction(*pIVar16);
            return 1;
        case 1146:
            field_104092 = field_104092 - 1;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            pIVar17 = &field_100092[(long)field_104092];
            pIVar9->SetInputFilter(*pIVar17);
            return 1;
        case 1147:
            field_104092 = field_104092 - 1;
            pIVar9 = (InputField*)this_00->GetInputField();
            if (pIVar9 == nullptr) {
                return 1;
            }
            pTVar10 = &field_100092[(long)field_104092];
            pIVar9->SetVisibility(*pTVar10);
        LAB_10019343e:
            pCVar13 = local_38;
        LAB_100193442:
            pCVar13->ComponentUpdated(*objType);
            return 1;
        case 1148:
            field_104092 = field_104092 - 2;
            pKVar18 = this_00->GetInputFieldKeyMap();
            if (pKVar18 == nullptr) {
                return 1;
            }
            iVar4 = field_104092;
            piVar5 = &field_100092[(long)iVar4];
            iVar1 = *piVar5;
            pIVar20 = &field_100092[(long)iVar4 + 1];
            pKVar18->SetKey(iVar1, *pIVar20);
            return 1;
        case 1149:
            field_104092 = field_104092 - 2;
            pKVar18 = this_00->GetInputFieldKeyMap();
            if (pKVar18 == nullptr) {
                return 1;
            }
            iVar4 = field_104092;
            pwVar19 = &field_100092[(long)iVar4];
            arg1 = *pwVar19;
            pIVar20 = &field_100092[(long)iVar4 + 1];
            pKVar18->SetChar(arg1, *pIVar20);
            return 1;
        case 1150:
            uVar24 = (long)field_136096 - 1;
            field_136096 = (int)uVar24;
            pbVar11 = &field_104096[uVar24];
            this_00->InitialiseCRMFromJSON(*pbVar11);
            return 1;
        default:
            return 2;
        }
        pCVar13 = local_38;
    LAB_1001935a0:
        pCVar13->ComponentUpdated(*objType);
        return 1;
    }

} // namespace jag::oldscape
