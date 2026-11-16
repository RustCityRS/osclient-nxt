// projects/osclient/ScriptRunnerImpl_2600To2699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x10015ab40, 1904 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand2600To2699(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand2600To2699(long param_1, int param_2) {
        array<int, 1000ul>* this;
        int iVar1;
        byte bVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        uint uVar7;
        int* piVar8;
        shared_ptr* this_00;
        IfType* this_01;
        PostProcessManager* this_02;
        int* piVar9;
        KeyConsumptionMap* pKVar10;
        wchar16* pwVar11;
        undefined4* puVar12;
        WorldmapAreaMetadata* this_03;
        TextRun* this_04;
        Bucket* this_05;
        long lVar13;
        char* pcVar14;
        eastl::string* pbVar15;
        Material* this_06;
        PackableArea* this_07;
        MapSquare* this_08;
        InputField* pIVar16;
        uint* puVar17;
        ulong uVar18;
        TextRunSlice local_70;
        basic_string local_50[24];
        allocator local_38[8];

        this = (array<int, 1000ul>*)(param_1 + 100092);
        uVar18 = (long)*(int*)(param_1 + 104092) - 1;
        *(int*)(param_1 + 104092) = (int)uVar18;
        piVar8 = (int*)std::array<int, 1000ul>::operator[](this, uVar18);
        this_00 = (shared_ptr*)rs2lib::IfType::Get(*piVar8);
        if (operator==(this_00, (_func_decltype_nullptr*)0)) {
            ((param_1 + 141000))->Raise(1);
            return 0;
        }
        this_01 = (IfType*)shared_ptr<rs2lib::IfType>::operator*((shared_ptr<rs2lib::IfType>*)this_00);
        if (34 < param_2 - 2600U) {
            return 2;
        }
        piVar8 = (int*)(param_1 + 104092);
        switch (param_2) {
        case 2600:
            uVar7 = *(uint*)&this_01->field_96;
            break;
        case 2601:
            uVar7 = *(uint*)((long)&this_01->field_96 + 4);
            break;
        case 2602:
            if ((this_01->field_12 != 12) || (lVar13 = this_01->GetInputField(), lVar13 == 0)) {
                iVar4 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar4 + 1;
                pbVar15 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar4);
                eastl::string::operator=(pbVar15, (basic_string*)&this_01->field_320);
                return 1;
            }
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            local_70.GetSelectedText();
            local_70.ConvertToUTF8(local_50);
            pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar18 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            new (&local_70) eastl::string(pcVar14, uVar18, local_38);
            iVar4 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar4 + 1;
            pbVar15 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar4);
            eastl::string::operator=(pbVar15, (basic_string*)&local_70);
            goto LAB_10015b090;
        case 2603:
            uVar7 = this_01->field_104;
            break;
        case 2604:
            uVar7 = this_01->field_108;
            break;
        case 2605:
            uVar7 = this_01->field_272;
            break;
        case 2606:
            uVar7 = this_01->field_260;
            break;
        case 2607:
            uVar7 = this_01->field_268;
            break;
        case 2608:
            uVar7 = this_01->field_264;
            break;
        case 2609:
            uVar7 = this_01->field_140;
            break;
        case 2610:
            uVar7 = this_01->field_144;
            break;
        case 2611:
            uVar7 = this_01->field_116;
            break;
        case 2612:
            uVar7 = this_01->field_120;
            break;
        case 2613:
            uVar7 = *(uint*)&this_01->field_136;
            break;
        case 2614:
            uVar7 = (uint)(byte)this_01->field_289;
            break;
        case 2615:
            uVar7 = this_01->field_156;
            break;
        case 2616:
            uVar7 = this_01->field_160;
            break;
        case 2617:
            puVar12 = (undefined4*)this_01->GetInputFieldAppearance();
            if (puVar12 != (undefined4*)0) {
                uVar6 = *puVar12;
                goto LAB_10015af76;
            }
            goto LAB_10015af73;
        case 2618:
            lVar13 = this_01->GetInputFieldAppearance();
            if (lVar13 != 0) {
                uVar6 = *(undefined4*)(lVar13 + 4);
                goto LAB_10015af76;
            }
            goto LAB_10015af73;
        case 2619:
            this_03 = (WorldmapAreaMetadata*)this_01->GetInputField();
            if (this_03 == (WorldmapAreaMetadata*)0) {
            LAB_10015b16c:
                iVar4 = *(int*)(param_1 + 136096);
                *(int*)(param_1 + 136096) = iVar4 + 1;
                pbVar15 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar4);
                eastl::string::assign(pbVar15, "");
                return 1;
            }
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            this_04 = (TextRun*)this_03->GetOrigin();
            this_04->ConvertToUTF8(local_50);
            pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar18 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            new (&local_70) eastl::string(pcVar14, uVar18, local_38);
            iVar4 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar4 + 1;
            pbVar15 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar4);
            eastl::string::operator=(pbVar15, (basic_string*)&local_70);
            goto LAB_10015b090;
        case 2620:
            lVar13 = this_01->GetInputFieldAppearance();
            if (lVar13 != 0) {
                uVar6 = *(undefined4*)(lVar13 + 8);
                goto LAB_10015af76;
            }
        LAB_10015af73:
            uVar6 = 0;
        LAB_10015af76:
            iVar4 = *piVar8;
            *piVar8 = iVar4 + 1;
            puVar12 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar4);
            *puVar12 = uVar6;
            return 1;
        case 2621:
            pIVar16 = (InputField*)this_01->GetInputField();
            if (pIVar16 == (InputField*)0) {
            LAB_10015b135:
                uVar7 = 0;
            } else {
                uVar7 = pIVar16->GetMaxLineWidth();
            }
            goto LAB_10015b137;
        case 2622:
            pIVar16 = (InputField*)this_01->GetInputField();
            if (pIVar16 == (InputField*)0)
                goto LAB_10015b135;
            uVar7 = pIVar16->GetMaxLineCount();
            goto LAB_10015b137;
        case 2623:
            this_05 = (Bucket*)this_01->GetInputField();
            if (this_05 != (Bucket*)0) {
                uVar6 = this_05->GetSlotAlignment();
                goto LAB_10015b19f;
            }
            goto LAB_10015b19d;
        case 2624:
            pIVar16 = (InputField*)this_01->GetInputField();
            if (pIVar16 == (InputField*)0)
                goto LAB_10015b135;
            bVar3 = pIVar16->HasFocus();
            uVar7 = (uint)bVar3;
            goto LAB_10015b137;
        case 2625:
            pIVar16 = (InputField*)this_01->GetInputField();
            if (pIVar16 == (InputField*)0)
                goto LAB_10015b135;
            bVar3 = pIVar16->CanHaveFocus();
            uVar7 = (uint)bVar3;
            goto LAB_10015b137;
        case 2626:
            lVar13 = this_01->GetInputField();
            if (lVar13 == 0)
                goto LAB_10015b16c;
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            local_70.GetSelectedText();
            local_70.ConvertToUTF8(local_50);
            pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar18 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            new (&local_70) eastl::string(pcVar14, uVar18, local_38);
            iVar4 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar4 + 1;
            pbVar15 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar4);
            eastl::string::operator=(pbVar15, (basic_string*)&local_70);
        LAB_10015b090:
            local_70.~basic_string();
            local_50->~basic_string();
            return 1;
        case 2627:
            this_02 = (PostProcessManager*)this_01->GetInputField();
            iVar5 = 0;
            iVar4 = 0;
            if (this_02 != (PostProcessManager*)0) {
                iVar4 = this_02->GetRenderTargetsManager();
                iVar5 = this_02->GetWrapV();
            }
            uVar6 = eastl::min<jag::graphics::GraphicsQuality>(iVar4, iVar5);
            iVar1 = *piVar8;
            *piVar8 = iVar1 + 1;
            puVar12 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar1);
            *puVar12 = uVar6;
            uVar7 = eastl::max<int>(iVar4, iVar5);
            uVar18 = (ulong)*piVar8;
            *piVar8 = *piVar8 + 1;
            goto LAB_10015b142;
        case 2628:
            this_06 = (Material*)this_01->GetInputField();
            if (this_06 != (Material*)0) {
                uVar6 = this_06->GetWrapV();
                goto LAB_10015b19f;
            }
        LAB_10015b19d:
            uVar6 = 0;
        LAB_10015b19f:
            iVar4 = *piVar8;
            *piVar8 = iVar4 + 1;
            puVar12 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar4);
            *puVar12 = uVar6;
            return 1;
        case 2629:
            pIVar16 = (InputField*)this_01->GetInputField();
            if (pIVar16 == (InputField*)0)
                goto LAB_10015b135;
            uVar7 = pIVar16->GetWrapMode();
            goto LAB_10015b137;
        case 2630:
            this_07 = (PackableArea*)this_01->GetInputField();
            if (this_07 == (PackableArea*)0)
                goto LAB_10015b135;
            uVar7 = this_07->GetMaxLevels();
            goto LAB_10015b137;
        case 2631:
            this_08 = (MapSquare*)this_01->GetInputField();
            if (this_08 == (MapSquare*)0)
                goto LAB_10015b135;
            uVar7 = this_08->GetMapSquareX();
            goto LAB_10015b137;
        case 2632:
            pIVar16 = (InputField*)this_01->GetInputField();
            if (pIVar16 == (InputField*)0)
                goto LAB_10015b135;
            uVar7 = pIVar16->GetVisibility();
        LAB_10015b137:
            uVar18 = (ulong)*piVar8;
            *piVar8 = *piVar8 + 1;
            goto LAB_10015b142;
        case 2633:
            pKVar10 = (KeyConsumptionMap*)this_01->GetInputFieldKeyMap();
            if (pKVar10 == (KeyConsumptionMap*)0) {
                return 1;
            }
            iVar4 = *piVar8;
            *piVar8 = (int)((long)iVar4 - 1U);
            piVar9 = (int*)std::array<int, 1000ul>::operator[](this, (long)iVar4 - 1U);
            uVar6 = pKVar10->GetKey(*piVar9);
            goto LAB_10015ad5f;
        case 2634:
            pKVar10 = (KeyConsumptionMap*)this_01->GetInputFieldKeyMap();
            if (pKVar10 == (KeyConsumptionMap*)0) {
                return 1;
            }
            iVar4 = *piVar8;
            *piVar8 = (int)((long)iVar4 - 1U);
            pwVar11 = (wchar16*)std::array<int, 1000ul>::operator[](this, (long)iVar4 - 1U);
            uVar6 = pKVar10->GetChar(*pwVar11);
        LAB_10015ad5f:
            iVar4 = *piVar8;
            *piVar8 = iVar4 + 1;
            puVar12 = (undefined4*)std::array<int, 1000ul>::operator[](this, (long)iVar4);
            *puVar12 = uVar6;
            return 1;
        }
        uVar18 = (ulong)*piVar8;
        *piVar8 = *piVar8 + 1;
    LAB_10015b142:
        puVar17 = (uint*)std::array<int, 1000ul>::operator[](this, uVar18);
        *puVar17 = uVar7;
        return 1;
    }

} // namespace jag::oldscape
