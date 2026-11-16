// projects/osclient/ScriptRunnerImpl_1100To1199.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001925c0, 4592 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1100To1199Or2100To2199(ScriptOp, ClientScript const&, bool, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1100To1199Or2100To2199(undefined4 param_2, undefined8 param_3,
                                                                      bool param_4, int param_5) {
        undefined2 uVar1;
        undefined4 uVar2;
        int iVar3;
        bool bVar4;
        char cVar5;
        int iVar6;
        int* piVar7;
        shared_ptr* this_00;
        IfType* this_01;
        undefined4* puVar8;
        basic_string* pbVar9;
        long lVar10;
        Array* pAVar11;
        uint* puVar12;
        Client* pCVar13;
        ClientDataProvider* pCVar14;
        CRMViewHandler* pCVar15;
        uchar* puVar16;
        InputField* pIVar17;
        KeyConsumptionMap* pKVar18;
        undefined2* puVar19;
        undefined4* puVar20;
        undefined8 uVar21;
        long lVar22;
        ulong uVar23;
        undefined1* puVar24;
        ulong uVar25;
        shared_ptr in_stack_ffffffffffffff88;
        shared_ptr<dash3d::Decor> asStack_66[6];
        InputFieldKeyboardHandler local_60;
        int local_3c;
        Client* local_38;

        iVar6 = -1;
        local_38 = (Client*)Client::Instance();
        if (param_5 != 0) {
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            iVar6 = *piVar7;
        }
        this_00 = (shared_ptr*)SafeGetComponent(this, iVar6, SUB41(param_5, 0), param_4);
        bVar4 = operator==(this_00, (_func_decltype_nullptr*)0);
        if (bVar4) {
            (&field_141000, 1)->Raise();
            return 0;
        }
        this_01 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this_00);
        pCVar13 = local_38;
        switch (param_2) {
        case 1100:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            iVar3 = *piVar7;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6 - 1);
            iVar6 = *piVar7;
            if (this_01->field_12 != 12) {
                local_38->SetIf3ComponentScrollPos(this_00, iVar3, iVar6);
                return 1;
            }
            pIVar17 = (InputField*)this_01->GetInputField();
            pCVar13 = local_38;
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            cVar5 = pIVar17->SetScroll(iVar3, iVar6);
            if (cVar5 == '\0') {
                return 1;
            }
            goto LAB_100193442;
        case 1101:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_116 = *puVar20;
            break;
        case 1102:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_132 = *piVar7 == 1;
            break;
        case 1103:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_140 = *puVar12;
            break;
        case 1104:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_148 = *puVar12;
            break;
        case 1105:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_164 = *puVar12;
            break;
        case 1106:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_208 = *puVar12;
            break;
        case 1107:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_212 = *piVar7 == 1;
            break;
        case 1108:
            this_01->field_228 = 1;
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_232 = *puVar12;
            break;
        case 1109:
            lVar10 = (long)field_104092;
            field_104092 = (int)(lVar10 - 6U);
            puVar24 = &field_100092;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar10 - 6U);
            this_01->field_252 = *piVar7;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar10 - 5);
            this_01->field_256 = *piVar7;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar10 - 4);
            this_01->field_260 = *puVar12;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar10 - 3);
            this_01->field_264 = *puVar12;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar10 - 2);
            this_01->field_268 = *puVar12;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, lVar10 - 1);
            this_01->field_272 = *puVar12;
            break;
        case 1110:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            if (this_01->field_244 == *puVar12) {
                return 1;
            }
            this_01->field_244 = *puVar12;
            this_01->field_1992 = 0;
            goto LAB_10019343e;
        case 1111:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_288 = *piVar7 == 1;
            break;
        case 1112:
            uVar23 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar23;
            pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar23);
            new (&local_60) eastl::string(pbVar9);
            iVar6 = local_60.compare();
            if (iVar6 != 0) {
                eastl::string::operator=((eastl::string*)&this_01->field_320, (basic_string*)&local_60);
                local_38->ComponentUpdated(this_00);
            }
            goto LAB_100192dcd;
        case 1113:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            if (this_01->field_312 == *puVar12) {
                return 1;
            }
            this_01->field_312 = *puVar12;
            if ((this_01->field_12 == 12) &&
                (pIVar17 = (InputField*)this_01->GetInputField(), pIVar17 != (InputField*)0)) {
                pIVar17->ClearFont();
            }
            goto LAB_10019343e;
        case 1114:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 3;
            field_104092 = (int)uVar23;
            if (this_01->field_12 == 12) {
                pIVar17 = (InputField*)this_01->GetInputField();
                if (pIVar17 != (InputField*)0) {
                    puVar24 = &field_100092;
                    iVar6 = field_104092;
                    piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)iVar6);
                    local_3c = *piVar7;
                    piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)iVar6 + 1);
                    pIVar17->SetAlignment(local_3c, *piVar7);
                    piVar7 =
                        (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)field_104092 + 2);
                    pIVar17->SetLineSpacing(*piVar7);
                }
            } else {
                puVar24 = &field_100092;
                puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, uVar23);
                this_01->field_388 = *puVar12;
                puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)iVar6 - 2);
                this_01->field_392 = *puVar12;
                puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar24, (long)(iVar6 + -1));
                this_01->field_384 = *puVar12;
            }
            break;
        case 1115:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_396 = *piVar7 == 1;
            break;
        case 1116:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_216 = *puVar12;
            break;
        case 1117:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_220 = *puVar12;
            break;
        case 1118:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_224 = *piVar7 == 1;
            break;
        case 1119:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_225 = *piVar7 == 1;
            break;
        case 1120:
            iVar3 = field_104092;
            uVar23 = (long)iVar3 - 2;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_104 = *puVar12;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar3 - 1);
            pCVar13 = local_38;
            this_01->field_108 = *puVar12;
            local_38->ComponentUpdated(this_00);
            if (iVar6 == -1) {
                return 1;
            }
            if (this_01->field_12 == 0) {
                pAVar11 =
                    (Array*)Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>,
                               eastl::allocator>*)&rs2lib::IfType::m_list,
                        (long)(iVar6 >> 16));
                pCVar13->InterfaceCalculateSizeAndPosSubcomponents(pAVar11, this_00, false);
                return 1;
            }
            return 1;
        case 1121:
            local_38->PauseContinue(this_01->field_4, this_01->field_8);
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)pCVar13->field_52424, this_00);
            goto LAB_1001935a0;
        case 1122:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_168 = *puVar12;
            break;
        case 1123:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_120 = *puVar20;
            break;
        case 1124:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_144 = *puVar20;
            break;
        case 1125:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            if (2 < *puVar12) {
                return 1;
            }
            *(uint*)&this_01->field_136 = *puVar12;
            goto LAB_10019343e;
        case 1126:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_152 = *piVar7 == 1;
            return 1;
        case 1127:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_289 = *piVar7 == 1;
            return 1;
        case 1128:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 1;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_160 = *puVar12;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            this_01->field_156 = *puVar12;
            return 1;
        case 1129:
            uVar23 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar23;
            pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar23);
            iVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar9);
            if (iVar6 == 0) {
                return 1;
            }
            eastl::string::operator=((eastl::string*)&this_01->field_176, pbVar9);
            goto LAB_10019343e;
        case 1130:
            uVar23 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar23;
            pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar23);
            pCVar13 = (Client*)Client::Instance();
            pCVar14 = (ClientDataProvider*)pCVar13->GetEndpointURLProvider();
            this_01->InitialiseCRM(pbVar9, pCVar14);
            return 1;
        case 1131:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            iVar3 = *piVar7;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6 - 1);
            iVar6 = *piVar7;
            pCVar15 = (CRMViewHandler*)this_01->GetCRMViewHandler();
            if (pCVar15 == (CRMViewHandler*)0) {
                uVar21 = logger::default_logger();
                logger::Logger::Log(uVar21, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_1100To1199.cpp",
                                    331,
                                    "Can\'t set CRMView font as the CRMView is not yet set up. Call setcrm_url or "
                                    "setcrm_fromjson first.");
                return 1;
            }
            pCVar15->AssignFont(iVar3, iVar6);
            return 1;
        case 1132:
            pCVar15 = (CRMViewHandler*)this_01->GetCRMViewHandler();
            if (pCVar15 == (CRMViewHandler*)0) {
                uVar21 = logger::default_logger();
                logger::Logger::Log(uVar21, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_1100To1199.cpp",
                                    345,
                                    "Can\'t set CRMView servertarget as the CRMView is not yet set up. Call setcrm_url "
                                    "or setcrm_fromjson first.");
                field_136096 = field_136096 - 1;
                field_104092 = field_104092 + -1;
                return 1;
            }
            uVar23 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar23;
            pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar23);
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            pCVar15->AssignServerTarget(pbVar9, *piVar7);
            return 1;
        case 1133:
            field_104092 = field_104092 + -1;
            puVar20 = (undefined4*)this_01->GetInputFieldAppearance();
            if (puVar20 == (undefined4*)0) {
                return 1;
            }
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                      (long)field_104092);
            *puVar20 = *puVar8;
            goto LAB_10019343e;
        case 1134:
            field_104092 = field_104092 + -1;
            lVar10 = this_01->GetInputFieldAppearance();
            if (lVar10 == 0) {
                return 1;
            }
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                       (long)field_104092);
            *(undefined4*)(lVar10 + 4) = *puVar20;
            goto LAB_10019343e;
        case 1135:
            uVar23 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar23;
            pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, uVar23);
            new (&local_60) eastl::string(pbVar9);
            lVar10 = this_01->GetInputField();
            if (lVar10 != 0) {
                eastl::string::operator=((eastl::string*)&this_01->field_352, (basic_string*)&local_60);
            }
        LAB_100192dcd:
            local_60.~basic_string();
            return 1;
        case 1136:
            field_104092 = field_104092 + -1;
            lVar10 = this_01->GetInputFieldAppearance();
            if (lVar10 == 0) {
                return 1;
            }
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                       (long)field_104092);
            *(undefined4*)(lVar10 + 8) = *puVar20;
            goto LAB_10019343e;
        case 1137:
            field_104092 = field_104092 + -1;
            pIVar17 = (InputField*)this_01->GetInputField();
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)field_104092);
            cVar5 = pIVar17->SetMaxLineWidth(*piVar7);
            goto LAB_100193436;
        case 1138:
            field_104092 = field_104092 + -1;
            pIVar17 = (InputField*)this_01->GetInputField();
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            puVar16 =
                (uchar*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)field_104092);
            cVar5 = pIVar17->SetMaxLineCount(*puVar16);
            goto LAB_100193436;
        case 1139:
            field_104092 = field_104092 + -1;
            pIVar17 = (InputField*)this_01->GetInputField();
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)field_104092);
            cVar5 = pIVar17->SetCharacterLimit((long)*piVar7);
            goto LAB_100193436;
        case 1140:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            pCVar13 = local_38;
            iVar6 = *piVar7;
            puVar24 = local_38->field_19072;
            puVar24->ClearFocusedComponent();
            pIVar17 = (InputField*)this_01->GetInputField();
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            cVar5 = pIVar17->SetFocus(iVar6 != 0);
            if (cVar5 == '\0') {
                return 1;
            }
            if (iVar6 != 0) {
                shared_ptr<dash3d::Decor>::shared_ptr(asStack_66 + -10, this_00);
                puVar24->SetFocusedComponent(in_stack_ffffffffffffff88);
                ((asStack_66 + -10))->~shared_ptr();
            }
            goto LAB_100193442;
        case 1141:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            iVar6 = *piVar7;
            pIVar17 = (InputField*)this_01->GetInputField();
            if (iVar6 == 0) {
                local_60.GetFocusedComponent();
                lVar10 = local_60.end();
                lVar22 = this_00->end();
                bVar4 = lVar10 == lVar22;
                local_60.~shared_ptr();
            } else {
                bVar4 = false;
            }
            pCVar13 = local_38;
            if (bVar4) {
                local_38->field_19072->ClearFocusedComponent();
                pCVar13->ComponentUpdated(this_00);
            }
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            pIVar17->SetFocusAllowed(iVar6 != 0);
            return 1;
        case 1142:
            iVar6 = field_104092;
            uVar23 = (long)iVar6 - 2;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            uVar25 = (ulong)*piVar7;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6 - 1);
            uVar23 = (ulong)*piVar7;
            pIVar17 = (InputField*)this_01->GetInputField();
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            goto LAB_100193431;
        case 1143:
            uVar23 = (long)field_104092 - 1;
            field_104092 = (int)uVar23;
            piVar7 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar23);
            uVar23 = (ulong)*piVar7;
            pIVar17 = (InputField*)this_01->GetInputField();
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            uVar25 = uVar23;
        LAB_100193431:
            cVar5 = pIVar17->SetSelection(uVar25, uVar23);
        LAB_100193436:
            if (cVar5 == '\0') {
                return 1;
            }
            goto LAB_10019343e;
        case 1144:
            field_104092 = field_104092 + -1;
            lVar10 = this_01->GetInputField();
            if (lVar10 == 0) {
                return 1;
            }
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                       (long)field_104092);
            rs2lib::InputField::SetWrapMode(lVar10, *puVar20);
            goto LAB_10019343e;
        case 1145:
            field_104092 = field_104092 + -1;
            pIVar17 = (InputField*)this_01->GetInputField();
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                       (long)field_104092);
            pIVar17->SetEnterAction(*puVar20);
            return 1;
        case 1146:
            field_104092 = field_104092 + -1;
            pIVar17 = (InputField*)this_01->GetInputField();
            if (pIVar17 == (InputField*)0) {
                return 1;
            }
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                       (long)field_104092);
            pIVar17->SetInputFilter(*puVar20);
            return 1;
        case 1147:
            field_104092 = field_104092 + -1;
            lVar10 = this_01->GetInputField();
            if (lVar10 == 0) {
                return 1;
            }
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092,
                                                                       (long)field_104092);
            rs2lib::InputField::SetVisibility(lVar10, *puVar20);
        LAB_10019343e:
            pCVar13 = local_38;
        LAB_100193442:
            pCVar13->ComponentUpdated(this_00);
            return 1;
        case 1148:
            field_104092 = field_104092 + -2;
            pKVar18 = (KeyConsumptionMap*)this_01->GetInputFieldKeyMap();
            if (pKVar18 == (KeyConsumptionMap*)0) {
                return 1;
            }
            iVar6 = field_104092;
            puVar20 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6);
            uVar2 = *puVar20;
            puVar20 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6 + 1);
            pKVar18->SetKey(uVar2, *puVar20);
            return 1;
        case 1149:
            field_104092 = field_104092 + -2;
            pKVar18 = (KeyConsumptionMap*)this_01->GetInputFieldKeyMap();
            if (pKVar18 == (KeyConsumptionMap*)0) {
                return 1;
            }
            iVar6 = field_104092;
            puVar19 = (undefined2*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6);
            uVar1 = *puVar19;
            puVar20 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar6 + 1);
            pKVar18->SetChar(uVar1, *puVar20);
            return 1;
        case 1150:
            uVar23 = (long)(int)field_136096 - 1;
            field_136096 = (uint)uVar23;
            std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)&field_104096, uVar23);
            rs2lib::IfType::InitialiseCRMFromJSON((basic_string*)this_01);
            return 1;
        default:
            return 2;
        }
        pCVar13 = local_38;
    LAB_1001935a0:
        pCVar13->ComponentUpdated(this_00);
        return 1;
    }

} // namespace jag::oldscape
