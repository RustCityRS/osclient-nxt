// projects/osclient/ScriptRunnerImpl_1600To1699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100159390
    uint64_t ScriptRunnerImpl::ExecuteCommand1600To1699(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int iVar1;
        uint8_t bVar3;
        EnumOptionToggle enumOptionToggle1;
        EnumOptionToggle enumOptionToggle2;
        unsigned int uVar4;
        uint32_t uVar5;
        Layout* this_01;
        WorldmapAreaMetadata* this_02;
        TextRun* pTVar6;
        long lVar7;
        Bucket* this_03;
        char* pcVar8;
        eastl::string* pbVar9;
        PostProcessManager* this_04;
        Material* this_05;
        PackableArea* this_06;
        MapSquare* this_07;
        InputField* pIVar10;
        unsigned int* puVar11;
        int* piVar12;
        KeyConsumptionMap* pKVar13;
        char16_t* pwVar14;
        uint32_t* puVar15;
        uint64_t in_register_00000009;
        unsigned long uVar16;
        TextRunSlice local_70;
        basic_string<char, BucketAllocatorEASTL> local_50;

        if ((*((shared_ptr<configdecoder::ObjType>*)(field_140856 +
                                                     ((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) &
                                                      4294967295) *
                                                         16 -
                                                     352))) == nullptr) {
            field_141000->Raise(1);
            return 0;
        }
        auto this_00 = *(*(
            (shared_ptr<rs2lib::IfType>*)(field_140856 +
                                          ((((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) & 4294967295) * 16 -
                                          352)));
        switch (scriptOp) {
        case 1600:
            uVar4 = *(unsigned int*)&this_00->field_96;
            break;
        case 1601:
            uVar4 = *(unsigned int*)((long)&this_00->field_96 + 4);
            break;
        case 1602:
            if ((this_00->field_12 != 12) || (this_01 = (Layout*)this_00->GetInputField(), this_01 == nullptr)) {
                iVar1 = field_136096;
                field_136096 = iVar1 + 1;
                pbVar9 = &field_104096[(long)iVar1];
                *pbVar9 = &this_00->field_320;
                return 1;
            }
            local_50 = eastl::basic_string<char, BucketAllocatorEASTL>();
            pTVar6 = (TextRun*)this_01->SSOBeginPtr();
            pTVar6->ConvertToUTF8(local_50);
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar16 = local_50.size();
            local_70 = eastl::string(pcVar8, uVar16);
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar9 = &field_104096[(long)iVar1];
            *pbVar9 = &local_70;
            goto LAB_10015978a;
        case 1603:
            uVar4 = this_00->field_104;
            break;
        case 1604:
            uVar4 = this_00->field_108;
            break;
        case 1605:
            uVar4 = this_00->field_272;
            break;
        case 1606:
            uVar4 = this_00->field_260;
            break;
        case 1607:
            uVar4 = this_00->field_268;
            break;
        case 1608:
            uVar4 = this_00->field_264;
            break;
        case 1609:
            uVar4 = this_00->field_140;
            break;
        case 1610:
            uVar4 = this_00->field_144;
            break;
        case 1611:
            uVar4 = this_00->field_116;
            break;
        case 1612:
            uVar4 = this_00->field_120;
            break;
        case 1613:
            uVar4 = *(unsigned int*)&this_00->field_136;
            break;
        case 1614:
            uVar4 = (unsigned int)(uint8_t)this_00->field_289;
            break;
        case 1615:
            uVar4 = this_00->field_156;
            break;
        case 1616:
            uVar4 = this_00->field_160;
            break;
        case 1617:
            puVar11 = (unsigned int*)this_00->GetInputFieldAppearance();
            if (puVar11 != nullptr) {
                uVar4 = *puVar11;
                break;
            }
            goto LAB_1001598ba;
        case 1618:
            lVar7 = this_00->GetInputFieldAppearance();
            if (lVar7 != 0) {
                uVar4 = *(unsigned int*)(lVar7 + 4);
                break;
            }
            goto LAB_1001598ba;
        case 1619:
            this_02 = (WorldmapAreaMetadata*)this_00->GetInputField();
            if (this_02 == nullptr) {
            LAB_1001599a5:
                iVar1 = field_136096;
                field_136096 = iVar1 + 1;
                pbVar9 = &field_104096[(long)iVar1];
                eastl::string::assign(pbVar9, "");
                return 1;
            }
            local_50 = eastl::basic_string<char, BucketAllocatorEASTL>();
            pTVar6 = (TextRun*)this_02->GetOrigin();
            pTVar6->ConvertToUTF8(local_50);
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar16 = local_50.size();
            local_70 = eastl::string(pcVar8, uVar16);
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar9 = &field_104096[(long)iVar1];
            *pbVar9 = &local_70;
            goto LAB_10015978a;
        case 1620:
            lVar7 = this_00->GetInputFieldAppearance();
            if (lVar7 != 0) {
                uVar4 = *(unsigned int*)(lVar7 + 8);
                break;
            }
            goto LAB_1001598ba;
        case 1621:
            pIVar10 = (InputField*)this_00->GetInputField();
            if (pIVar10 != nullptr) {
                uVar4 = pIVar10->GetMaxLineWidth();
                break;
            }
            goto LAB_1001598ba;
        case 1622:
            pIVar10 = (InputField*)this_00->GetInputField();
            if (pIVar10 != nullptr) {
                uVar4 = pIVar10->GetMaxLineCount();
                break;
            }
            goto LAB_1001598ba;
        case 1623:
            this_03 = (Bucket*)this_00->GetInputField();
            if (this_03 != nullptr) {
                uVar5 = this_03->GetSlotAlignment();
                goto LAB_1001599d8;
            }
            goto LAB_1001599d6;
        case 1624:
            pIVar10 = (InputField*)this_00->GetInputField();
            if (pIVar10 != nullptr) {
                bVar3 = pIVar10->HasFocus();
                uVar4 = (unsigned int)bVar3;
                break;
            }
            goto LAB_1001598ba;
        case 1625:
            pIVar10 = (InputField*)this_00->GetInputField();
            if (pIVar10 != nullptr) {
                bVar3 = pIVar10->CanHaveFocus();
                uVar4 = (unsigned int)bVar3;
                break;
            }
            goto LAB_1001598ba;
        case 1626:
            pIVar10 = (InputField*)this_00->GetInputField();
            if (pIVar10 == nullptr)
                goto LAB_1001599a5;
            local_50 = eastl::basic_string<char, BucketAllocatorEASTL>();
            local_70 = pIVar10->GetSelectedText();
            local_70.ConvertToUTF8(local_50);
            pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar16 = local_50.size();
            local_70 = eastl::string(pcVar8, uVar16);
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar9 = &field_104096[(long)iVar1];
            *pbVar9 = &local_70;
        LAB_10015978a:
            return 1;
        case 1627:
            this_04 = (PostProcessManager*)this_00->GetInputField();
            enumOptionToggle2 = 0;
            enumOptionToggle1 = 0;
            if (this_04 != nullptr) {
                enumOptionToggle1 = this_04->GetRenderTargetsManager();
                enumOptionToggle2 = this_04->GetWrapV();
            }
            uVar5 = eastl::min<jag::graphics::GraphicsQuality>(enumOptionToggle1, enumOptionToggle2);
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar15 = &field_100092[(long)iVar1];
            *puVar15 = uVar5;
            uVar5 = eastl::max<int>(enumOptionToggle1, enumOptionToggle2);
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar15 = &field_100092[(long)iVar1];
            *puVar15 = uVar5;
            return 1;
        case 1628:
            this_05 = (Material*)this_00->GetInputField();
            if (this_05 != nullptr) {
                uVar5 = this_05->GetWrapV();
                goto LAB_1001599d8;
            }
        LAB_1001599d6:
            uVar5 = 0;
        LAB_1001599d8:
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar15 = &field_100092[(long)iVar1];
            *puVar15 = uVar5;
            return 1;
        case 1629:
            pIVar10 = (InputField*)this_00->GetInputField();
            if (pIVar10 != nullptr) {
                uVar4 = pIVar10->GetWrapMode();
                break;
            }
            goto LAB_1001598ba;
        case 1630:
            this_06 = (PackableArea*)this_00->GetInputField();
            if (this_06 != nullptr) {
                uVar4 = this_06->GetMaxLevels();
                break;
            }
            goto LAB_1001598ba;
        case 1631:
            this_07 = (MapSquare*)this_00->GetInputField();
            if (this_07 != nullptr) {
                uVar4 = this_07->GetMapSquareX();
                break;
            }
            goto LAB_1001598ba;
        case 1632:
            pIVar10 = (InputField*)this_00->GetInputField();
            if (pIVar10 != nullptr) {
                uVar4 = pIVar10->GetVisibility();
                break;
            }
        LAB_1001598ba:
            uVar4 = 0;
            break;
        case 1633:
            pKVar13 = this_00->GetInputFieldKeyMap();
            if (pKVar13 == nullptr) {
                return 1;
            }
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            uVar5 = pKVar13->GetKey(*piVar12);
            goto LAB_100159978;
        case 1634:
            pKVar13 = this_00->GetInputFieldKeyMap();
            if (pKVar13 == nullptr) {
                return 1;
            }
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            pwVar14 = &field_100092[uVar16];
            uVar5 = pKVar13->GetChar(*pwVar14);
        LAB_100159978:
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar15 = &field_100092[(long)iVar1];
            *puVar15 = uVar5;
            return 1;
        default:
            return 2;
        }
        iVar1 = field_104092;
        field_104092 = iVar1 + 1;
        puVar11 = &field_100092[(long)iVar1];
        *puVar11 = uVar4;
        return 1;
    }

} // namespace jag::oldscape
