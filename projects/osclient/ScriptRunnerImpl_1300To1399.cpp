// projects/osclient/ScriptRunnerImpl_1300To1399.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100193c20
    uint8_t ScriptRunnerImpl::ExecuteCommand1300To1399Or2300To2399(ScriptOp scriptOp, const ClientScript& clientScript,
                                                                   bool arg3, bool arg4) {
        uint32_t uVar1;
        unsigned int uVar2;
        int* piVar5;
        shared_ptr<rs2lib::IfType>* ifType;
        eastl::string* pbVar6;
        uint32_t* puVar7;
        uint8_t* puVar8;
        unsigned int* puVar9;
        char* pcVar10;
        int* piVar11;
        uint8_t* puVar12;
        eastl::string* this_01;
        long lVar14;
        unsigned int uVar15;
        unsigned long uVar16;
        uint64_t in_register_00000081;
        int iVar18;
        uint8_t* local_88;
        uint64_t local_80;
        shared_ptr<configdecoder::ObjType>* local_78;
        Array<unsigned char> local_70;
        uint8_t** local_50;
        uint64_t local_48;
        uint8_t local_31;

        int iVar13 = -1;
        if ((int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4) != 0) {
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            iVar13 = *piVar5;
        }
        auto objType = SafeGetComponent(iVar13, arg4, arg3);
        bool bVar3 = *objType == nullptr;
        if (bVar3) {
            field_141000->Raise(1);
            return false;
        }
        IfType* this_00 = (IfType*)**objType;
        uint8_t uVar17 = 2;
        switch (scriptOp) {
        case 1300:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            iVar13 = *piVar5;
            if (iVar13 - 1U < 10) {
                uVar16 = (long)field_136096 - 1;
                field_136096 = (int)uVar16;
                pbVar6 = &field_104096[uVar16];
                this_00->SetOpName(iVar13 - 1U, *pbVar6);
            } else {
                field_136096 = field_136096 - 1;
            }
            break;
        case 1301:
            iVar13 = field_104092;
            uVar16 = (long)iVar13 - 2;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            iVar18 = *piVar5;
            piVar5 = &field_100092[(long)iVar13 - 1];
            ifType = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar18, *piVar5);
            this_00->field_760 = *ifType;
            break;
        case 1302:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            *(bool*)&this_00->field_784 = *piVar5 == 1;
            break;
        case 1303:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar7 = &field_100092[uVar16];
            *(uint32_t*)&this_00->field_776 = *puVar7;
            break;
        case 1304:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar7 = &field_100092[uVar16];
            *(uint32_t*)((long)&this_00->field_776 + 4) = *puVar7;
            break;
        case 1305:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar6 = &field_104096[uVar16];
            this_01 = (eastl::string*)&this_00->field_704;
            goto LAB_100193eb4;
        case 1306:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar6 = &field_104096[uVar16];
            this_01 = (eastl::string*)&this_00->field_792;
        LAB_100193eb4:
            *this_01 = pbVar6;
            break;
        case 1307:
            this_00->field_736.clear();
            break;
        case 1308:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            this_00->field_2082 = *piVar5 == 1;
            break;
        case 1309:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            *(bool*)((long)&this_00->field_784 + 1) = *piVar5 == 1;
            break;
        default:
            goto switchD_100193cd5_caseD_51e;
        case 1350:
            local_78 = objType;
            local_70 = Array<unsigned char>(1);
            new (&local_50) Array<unsigned char>(1);
            if (arg4) {
                iVar13 = field_104092 - 2;
                field_104092 = iVar13;
                puVar7 = &field_100092[(long)iVar13];
                uVar1 = *puVar7;
                puVar8 = &local_70[0];
                *puVar8 = (char)uVar1;
                puVar7 = &field_100092[(long)field_104092 + 1];
                uVar1 = *puVar7;
                puVar8 = &local_50[0];
                *puVar8 = (char)uVar1;
            } else {
                lVar14 = (long)field_104092 - 10;
                field_104092 = (int)lVar14;
                puVar8 = &field_100092;
                uVar16 = 0;
                do {
                    piVar5 = (int*)(*puVar8)[lVar14 + uVar16];
                    if (*piVar5 < 0)
                        goto LAB_100194264;
                    bVar3 = uVar16 < 8;
                    uVar16 = uVar16 + 2;
                } while (bVar3);
                uVar16 = 10;
            LAB_100194264:
                iVar13 = (int)uVar16;
                if (iVar13 != 0) {
                    uVar16 = uVar16 >> 1 & 2147483647;
                    local_70.set_max_size(uVar16, 3);
                    local_50.set_max_size(uVar16, 3);
                    if (1 < iVar13) {
                        do {
                            iVar18 = iVar13 - 2;
                            puVar7 = (uint32_t*)(*puVar8)[(long)(field_104092 + iVar18)];
                            uVar1 = *puVar7;
                            puVar12 = &local_70[(unsigned long)(unsigned int)(iVar18 / 2)];
                            *puVar12 = (char)uVar1;
                            puVar7 = (uint32_t*)(*puVar8)[(long)(field_104092 + iVar18 + 1)];
                            uVar1 = *puVar7;
                            puVar12 = &local_50[(unsigned long)(unsigned int)(iVar18 / 2)];
                            *puVar12 = (char)uVar1;
                            bVar3 = 3 < iVar13;
                            iVar13 = iVar18;
                        } while (bVar3);
                    }
                }
            }
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            uVar15 = *piVar5 - 1;
            if (uVar15 < 10) {
                CcIfSetOpOptKey((shared_ptr<rs2lib::IfType>*)local_78, uVar15, &local_70,
                                (Array<unsigned char>*)&local_50);
            } else {
                field_141000->Raise(1);
            }
            return uVar15 < 10;
        case 1351:
            uVar16 = (long)field_104092 - 2;
            field_104092 = (int)uVar16;
            puVar8 = &field_100092[uVar16];
            local_88 = (uint8_t*)(((uint64_t)local_88._1_7_ << 8) | (uint8_t)(*puVar8));
            local_50 = &local_88;
            local_48 = 1;
            local_70 = Array<unsigned char>(&local_50);
            puVar8 = &field_100092[(long)field_104092 + 1];
            local_31 = *puVar8;
            local_88 = &local_31;
            local_80 = 1;
            new (&local_50) Array<unsigned char>(&local_88);
            CcIfSetOpOptKey((shared_ptr<rs2lib::IfType>*)objType, 10, &local_70, (Array<unsigned char>*)&local_50);
            break;
        case 1352:
            iVar13 = field_104092;
            uVar16 = (long)iVar13 - 3;
            field_104092 = (int)uVar16;
            puVar8 = &field_100092;
            local_78 = objType;
            puVar9 = (unsigned int*)(*puVar8)[uVar16];
            uVar2 = *puVar9;
            uVar15 = uVar2 - 1;
            if (9 < uVar15) {
                local_70 = eastl::string();
                local_70.sprintf("setopkeyrate: Op ID out of range: %i", (unsigned long)uVar2);
                pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1300To1399.cpp",
                                166, pcVar10);
            }
            piVar5 = (int*)(*puVar8)[(long)iVar13 - 1];
            piVar11 = (int*)(*puVar8)[(long)(iVar13 - 2)];
            iVar18 = *piVar11;
            iVar13 = *piVar5;
            objType = local_78;
            goto LAB_1001941f6;
        case 1353:
            iVar13 = field_104092;
            uVar16 = (long)iVar13 - 1;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            iVar18 = *piVar5;
            uVar16 = (long)iVar13 - 2;
            field_104092 = (int)uVar16;
            piVar5 = &field_100092[uVar16];
            iVar13 = *piVar5;
            uVar15 = 10;
        LAB_1001941f6:
            CcIfSetOpOptKeyRate((shared_ptr<rs2lib::IfType>*)objType, uVar15, iVar18, iVar13,
                                (ErrorCapture*)field_141000);
        LAB_100194212:
            return field_141000->IsRaised() ^ 1;
        case 1354:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar9 = &field_100092[uVar16];
            uVar2 = *puVar9;
            uVar15 = uVar2 - 1;
            if (9 < uVar15) {
                local_70 = eastl::string();
                local_70.sprintf("setopkeyrate: Op ID out of range: %i", (unsigned long)uVar2);
                pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_1300To1399.cpp",
                                199, pcVar10);
            }
            goto LAB_10019420a;
        case 1355:
            uVar15 = 10;
        LAB_10019420a:
            CcIfSetOpOptKeyIgnoreHeld((shared_ptr<rs2lib::IfType>*)objType, uVar15, (ErrorCapture*)field_141000);
            goto LAB_100194212;
        }
        uVar17 = 1;
    switchD_100193cd5_caseD_51e:
        return uVar17;
    }

} // namespace jag::oldscape
