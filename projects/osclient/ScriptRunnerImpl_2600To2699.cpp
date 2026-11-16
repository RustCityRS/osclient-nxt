// projects/osclient/ScriptRunnerImpl_2600To2699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015ab40
    uint64_t ScriptRunnerImpl::ExecuteCommand2600To2699(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int iVar1;
        uint8_t bVar3;
        EnumOptionToggle enumOptionToggle1;
        EnumOptionToggle enumOptionToggle2;
        uint32_t uVar4;
        unsigned int uVar5;
        PostProcessManager* this_02;
        int* piVar7;
        KeyConsumptionMap* pKVar8;
        char16_t* pwVar9;
        uint32_t* puVar10;
        WorldmapAreaMetadata* this_03;
        long lVar11;
        Bucket* this_05;
        char* pcVar12;
        eastl::string* pbVar13;
        Material* this_06;
        PackableArea* this_07;
        MapSquare* this_08;
        InputField* pIVar14;
        TextRunSlice local_70;
        basic_string<char, BucketAllocatorEASTL> local_50;

        uint8_t* this_00 = &field_100092;
        unsigned long uVar16 = (long)field_104092 - 1;
        field_104092 = (int)uVar16;
        int* piVar6 = (int*)(*this_00)[uVar16];
        auto objType = rs2lib::IfType::Get(*piVar6);
        if (*objType == nullptr) {
            field_141000->Raise(1);
            return 0;
        }
        IfType* this_01 = (IfType*)**objType;
        if (34 < scriptOp - 2600) {
            return 2;
        }
        piVar6 = &field_104092;
        switch (scriptOp) {
        case 2600:
            uVar5 = *(unsigned int*)&this_01->field_96;
            break;
        case 2601:
            uVar5 = *(unsigned int*)((long)&this_01->field_96 + 4);
            break;
        case 2602:
            if ((this_01->field_12 != 12) || (pIVar14 = (InputField*)this_01->GetInputField(), pIVar14 == nullptr)) {
                iVar1 = field_136096;
                field_136096 = iVar1 + 1;
                pbVar13 = &field_104096[(long)iVar1];
                *pbVar13 = &this_01->field_320;
                return 1;
            }
            local_50 = eastl::basic_string<char, BucketAllocatorEASTL>();
            local_70 = pIVar14->GetSelectedText();
            local_70.ConvertToUTF8(local_50);
            pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar16 = local_50.size();
            local_70 = eastl::string(pcVar12, uVar16);
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar13 = &field_104096[(long)iVar1];
            *pbVar13 = &local_70;
            goto LAB_10015b090;
        case 2603:
            uVar5 = this_01->field_104;
            break;
        case 2604:
            uVar5 = this_01->field_108;
            break;
        case 2605:
            uVar5 = this_01->field_272;
            break;
        case 2606:
            uVar5 = this_01->field_260;
            break;
        case 2607:
            uVar5 = this_01->field_268;
            break;
        case 2608:
            uVar5 = this_01->field_264;
            break;
        case 2609:
            uVar5 = this_01->field_140;
            break;
        case 2610:
            uVar5 = this_01->field_144;
            break;
        case 2611:
            uVar5 = this_01->field_116;
            break;
        case 2612:
            uVar5 = this_01->field_120;
            break;
        case 2613:
            uVar5 = *(unsigned int*)&this_01->field_136;
            break;
        case 2614:
            uVar5 = (unsigned int)(uint8_t)this_01->field_289;
            break;
        case 2615:
            uVar5 = this_01->field_156;
            break;
        case 2616:
            uVar5 = this_01->field_160;
            break;
        case 2617:
            puVar10 = (uint32_t*)this_01->GetInputFieldAppearance();
            if (puVar10 != nullptr) {
                uVar4 = *puVar10;
                goto LAB_10015af76;
            }
            goto LAB_10015af73;
        case 2618:
            lVar11 = this_01->GetInputFieldAppearance();
            if (lVar11 != 0) {
                uVar4 = *(uint32_t*)(lVar11 + 4);
                goto LAB_10015af76;
            }
            goto LAB_10015af73;
        case 2619:
            this_03 = (WorldmapAreaMetadata*)this_01->GetInputField();
            if (this_03 == nullptr) {
            LAB_10015b16c:
                iVar1 = field_136096;
                field_136096 = iVar1 + 1;
                pbVar13 = &field_104096[(long)iVar1];
                eastl::string::assign(pbVar13, "");
                return 1;
            }
            local_50 = eastl::basic_string<char, BucketAllocatorEASTL>();
            ((TextRun*)this_03->GetOrigin())->ConvertToUTF8(local_50);
            pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar16 = local_50.size();
            local_70 = eastl::string(pcVar12, uVar16);
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar13 = &field_104096[(long)iVar1];
            *pbVar13 = &local_70;
            goto LAB_10015b090;
        case 2620:
            lVar11 = this_01->GetInputFieldAppearance();
            if (lVar11 != 0) {
                uVar4 = *(uint32_t*)(lVar11 + 8);
                goto LAB_10015af76;
            }
        LAB_10015af73:
            uVar4 = 0;
        LAB_10015af76:
            iVar1 = *piVar6;
            *piVar6 = iVar1 + 1;
            puVar10 = (uint32_t*)(*this_00)[(long)iVar1];
            *puVar10 = uVar4;
            return 1;
        case 2621:
            pIVar14 = (InputField*)this_01->GetInputField();
            if (pIVar14 == nullptr) {
            LAB_10015b135:
                uVar5 = 0;
            } else {
                uVar5 = pIVar14->GetMaxLineWidth();
            }
            goto LAB_10015b137;
        case 2622:
            pIVar14 = (InputField*)this_01->GetInputField();
            if (pIVar14 == nullptr)
                goto LAB_10015b135;
            uVar5 = pIVar14->GetMaxLineCount();
            goto LAB_10015b137;
        case 2623:
            this_05 = (Bucket*)this_01->GetInputField();
            if (this_05 != nullptr) {
                uVar4 = this_05->GetSlotAlignment();
                goto LAB_10015b19f;
            }
            goto LAB_10015b19d;
        case 2624:
            pIVar14 = (InputField*)this_01->GetInputField();
            if (pIVar14 == nullptr)
                goto LAB_10015b135;
            bVar3 = pIVar14->HasFocus();
            uVar5 = (unsigned int)bVar3;
            goto LAB_10015b137;
        case 2625:
            pIVar14 = (InputField*)this_01->GetInputField();
            if (pIVar14 == nullptr)
                goto LAB_10015b135;
            bVar3 = pIVar14->CanHaveFocus();
            uVar5 = (unsigned int)bVar3;
            goto LAB_10015b137;
        case 2626:
            pIVar14 = (InputField*)this_01->GetInputField();
            if (pIVar14 == nullptr)
                goto LAB_10015b16c;
            local_50 = eastl::basic_string<char, BucketAllocatorEASTL>();
            local_70 = pIVar14->GetSelectedText();
            local_70.ConvertToUTF8(local_50);
            pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar16 = local_50.size();
            local_70 = eastl::string(pcVar12, uVar16);
            iVar1 = field_136096;
            field_136096 = iVar1 + 1;
            pbVar13 = &field_104096[(long)iVar1];
            *pbVar13 = &local_70;
        LAB_10015b090:
            return 1;
        case 2627:
            this_02 = (PostProcessManager*)this_01->GetInputField();
            enumOptionToggle2 = 0;
            enumOptionToggle1 = 0;
            if (this_02 != nullptr) {
                enumOptionToggle1 = this_02->GetRenderTargetsManager();
                enumOptionToggle2 = this_02->GetWrapV();
            }
            uVar4 = eastl::min<jag::graphics::GraphicsQuality>(enumOptionToggle1, enumOptionToggle2);
            iVar1 = *piVar6;
            *piVar6 = iVar1 + 1;
            puVar10 = (uint32_t*)(*this_00)[(long)iVar1];
            *puVar10 = uVar4;
            uVar5 = eastl::max<int>(enumOptionToggle1, enumOptionToggle2);
            uVar16 = (unsigned long)*piVar6;
            *piVar6 = *piVar6 + 1;
            goto LAB_10015b142;
        case 2628:
            this_06 = (Material*)this_01->GetInputField();
            if (this_06 != nullptr) {
                uVar4 = this_06->GetWrapV();
                goto LAB_10015b19f;
            }
        LAB_10015b19d:
            uVar4 = 0;
        LAB_10015b19f:
            iVar1 = *piVar6;
            *piVar6 = iVar1 + 1;
            puVar10 = (uint32_t*)(*this_00)[(long)iVar1];
            *puVar10 = uVar4;
            return 1;
        case 2629:
            pIVar14 = (InputField*)this_01->GetInputField();
            if (pIVar14 == nullptr)
                goto LAB_10015b135;
            uVar5 = pIVar14->GetWrapMode();
            goto LAB_10015b137;
        case 2630:
            this_07 = (PackableArea*)this_01->GetInputField();
            if (this_07 == nullptr)
                goto LAB_10015b135;
            uVar5 = this_07->GetMaxLevels();
            goto LAB_10015b137;
        case 2631:
            this_08 = (MapSquare*)this_01->GetInputField();
            if (this_08 == nullptr)
                goto LAB_10015b135;
            uVar5 = this_08->GetMapSquareX();
            goto LAB_10015b137;
        case 2632:
            pIVar14 = (InputField*)this_01->GetInputField();
            if (pIVar14 == nullptr)
                goto LAB_10015b135;
            uVar5 = pIVar14->GetVisibility();
        LAB_10015b137:
            uVar16 = (unsigned long)*piVar6;
            *piVar6 = *piVar6 + 1;
            goto LAB_10015b142;
        case 2633:
            pKVar8 = this_01->GetInputFieldKeyMap();
            if (pKVar8 == nullptr) {
                return 1;
            }
            iVar1 = *piVar6;
            *piVar6 = (int)((long)iVar1 - 1U);
            piVar7 = (int*)(*this_00)[(long)iVar1 - 1U];
            uVar4 = pKVar8->GetKey(*piVar7);
            goto LAB_10015ad5f;
        case 2634:
            pKVar8 = this_01->GetInputFieldKeyMap();
            if (pKVar8 == nullptr) {
                return 1;
            }
            iVar1 = *piVar6;
            *piVar6 = (int)((long)iVar1 - 1U);
            pwVar9 = (char16_t*)(*this_00)[(long)iVar1 - 1U];
            uVar4 = pKVar8->GetChar(*pwVar9);
        LAB_10015ad5f:
            iVar1 = *piVar6;
            *piVar6 = iVar1 + 1;
            puVar10 = (uint32_t*)(*this_00)[(long)iVar1];
            *puVar10 = uVar4;
            return 1;
        }
        uVar16 = (unsigned long)*piVar6;
        *piVar6 = *piVar6 + 1;
    LAB_10015b142:
        unsigned int* puVar15 = (unsigned int*)(*this_00)[uVar16];
        *puVar15 = uVar5;
        return 1;
    }

} // namespace jag::oldscape
