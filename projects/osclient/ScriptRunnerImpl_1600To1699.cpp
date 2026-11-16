// projects/osclient/ScriptRunnerImpl_1600To1699.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100159390, 1888 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand1600To1699(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand1600To1699(undefined4 param_2, undefined8 param_3, ulong param_4) {
        int iVar1;
        bool bVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        undefined4 uVar7;
        IfType* this_00;
        Layout* this_01;
        WorldmapAreaMetadata* this_02;
        TextRun* pTVar8;
        Bucket* this_03;
        long lVar9;
        char* pcVar10;
        eastl::string* pbVar11;
        PostProcessManager* this_04;
        Material* this_05;
        PackableArea* this_06;
        MapSquare* this_07;
        InputField* pIVar12;
        uint* puVar13;
        int* piVar14;
        KeyConsumptionMap* pKVar15;
        wchar16* pwVar16;
        undefined4* puVar17;
        ulong uVar19;
        TextRunSlice local_70;
        basic_string local_50[24];
        allocator local_38[8];

        bVar2 = operator==((shared_ptr*)(field_140504 + (param_4 & 4294967295) * 16), (_func_decltype_nullptr*)0);
        if (bVar2) {
            (&field_141000, 1)->Raise();
            return 0;
        }
        this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator*(
            (shared_ptr<rs2lib::IfType>*)(field_140504 + (param_4 & 4294967295) * 16));
        switch (param_2) {
        case 1600:
            uVar6 = *(uint*)&this_00->field_96;
            break;
        case 1601:
            uVar6 = *(uint*)((long)&this_00->field_96 + 4);
            break;
        case 1602:
            if ((this_00->field_12 != 12) || (this_01 = (Layout*)this_00->GetInputField(), this_01 == (Layout*)0)) {
                uVar6 = field_136096;
                field_136096 = uVar6 + 1;
                pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar6);
                eastl::string::operator=(pbVar11, (basic_string*)&this_00->field_320);
                return 1;
            }
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            pTVar8 = (TextRun*)eastl::string::Layout::SSOBeginPtr(this_01, (type*)0);
            pTVar8->ConvertToUTF8(local_50);
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar19 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            new (&local_70) eastl::string(pcVar10, uVar19, local_38);
            uVar6 = field_136096;
            field_136096 = uVar6 + 1;
            pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar6);
            eastl::string::operator=(pbVar11, (basic_string*)&local_70);
            goto LAB_10015978a;
        case 1603:
            uVar6 = this_00->field_104;
            break;
        case 1604:
            uVar6 = this_00->field_108;
            break;
        case 1605:
            uVar6 = this_00->field_272;
            break;
        case 1606:
            uVar6 = this_00->field_260;
            break;
        case 1607:
            uVar6 = this_00->field_268;
            break;
        case 1608:
            uVar6 = this_00->field_264;
            break;
        case 1609:
            uVar6 = this_00->field_140;
            break;
        case 1610:
            uVar6 = this_00->field_144;
            break;
        case 1611:
            uVar6 = this_00->field_116;
            break;
        case 1612:
            uVar6 = this_00->field_120;
            break;
        case 1613:
            uVar6 = *(uint*)&this_00->field_136;
            break;
        case 1614:
            uVar6 = (uint)(byte)this_00->field_289;
            break;
        case 1615:
            uVar6 = this_00->field_156;
            break;
        case 1616:
            uVar6 = this_00->field_160;
            break;
        case 1617:
            puVar13 = (uint*)this_00->GetInputFieldAppearance();
            if (puVar13 != (uint*)0) {
                uVar6 = *puVar13;
                break;
            }
            goto LAB_1001598ba;
        case 1618:
            lVar9 = this_00->GetInputFieldAppearance();
            if (lVar9 != 0) {
                uVar6 = *(uint*)(lVar9 + 4);
                break;
            }
            goto LAB_1001598ba;
        case 1619:
            this_02 = (WorldmapAreaMetadata*)this_00->GetInputField();
            if (this_02 == (WorldmapAreaMetadata*)0) {
            LAB_1001599a5:
                uVar6 = field_136096;
                field_136096 = uVar6 + 1;
                pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                    (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar6);
                eastl::string::assign(pbVar11, "");
                return 1;
            }
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            pTVar8 = (TextRun*)this_02->GetOrigin();
            pTVar8->ConvertToUTF8(local_50);
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar19 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            new (&local_70) eastl::string(pcVar10, uVar19, local_38);
            uVar6 = field_136096;
            field_136096 = uVar6 + 1;
            pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar6);
            eastl::string::operator=(pbVar11, (basic_string*)&local_70);
            goto LAB_10015978a;
        case 1620:
            lVar9 = this_00->GetInputFieldAppearance();
            if (lVar9 != 0) {
                uVar6 = *(uint*)(lVar9 + 8);
                break;
            }
            goto LAB_1001598ba;
        case 1621:
            pIVar12 = (InputField*)this_00->GetInputField();
            if (pIVar12 != (InputField*)0) {
                uVar6 = pIVar12->GetMaxLineWidth();
                break;
            }
            goto LAB_1001598ba;
        case 1622:
            pIVar12 = (InputField*)this_00->GetInputField();
            if (pIVar12 != (InputField*)0) {
                uVar6 = pIVar12->GetMaxLineCount();
                break;
            }
            goto LAB_1001598ba;
        case 1623:
            this_03 = (Bucket*)this_00->GetInputField();
            if (this_03 != (Bucket*)0) {
                uVar7 = this_03->GetSlotAlignment();
                goto LAB_1001599d8;
            }
            goto LAB_1001599d6;
        case 1624:
            pIVar12 = (InputField*)this_00->GetInputField();
            if (pIVar12 != (InputField*)0) {
                bVar3 = pIVar12->HasFocus();
                uVar6 = (uint)bVar3;
                break;
            }
            goto LAB_1001598ba;
        case 1625:
            pIVar12 = (InputField*)this_00->GetInputField();
            if (pIVar12 != (InputField*)0) {
                bVar3 = pIVar12->CanHaveFocus();
                uVar6 = (uint)bVar3;
                break;
            }
            goto LAB_1001598ba;
        case 1626:
            lVar9 = this_00->GetInputField();
            if (lVar9 == 0)
                goto LAB_1001599a5;
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
            local_70.GetSelectedText();
            local_70.ConvertToUTF8(local_50);
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar19 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::allocator::allocator(local_38, "EASTL basic_string");
            new (&local_70) eastl::string(pcVar10, uVar19, local_38);
            uVar6 = field_136096;
            field_136096 = uVar6 + 1;
            pbVar11 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)&field_104096, (long)(int)uVar6);
            eastl::string::operator=(pbVar11, (basic_string*)&local_70);
        LAB_10015978a:
            local_70.~basic_string();
            local_50->~basic_string();
            return 1;
        case 1627:
            this_04 = (PostProcessManager*)this_00->GetInputField();
            iVar5 = 0;
            iVar4 = 0;
            if (this_04 != (PostProcessManager*)0) {
                iVar4 = this_04->GetRenderTargetsManager();
                iVar5 = this_04->GetWrapV();
            }
            uVar7 = eastl::min<jag::graphics::GraphicsQuality>(iVar4, iVar5);
            iVar1 = field_104092;
            field_104092 = iVar1 + 1;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar1);
            *puVar17 = uVar7;
            uVar7 = eastl::max<int>(iVar4, iVar5);
            iVar4 = field_104092;
            field_104092 = iVar4 + 1;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar4);
            *puVar17 = uVar7;
            return 1;
        case 1628:
            this_05 = (Material*)this_00->GetInputField();
            if (this_05 != (Material*)0) {
                uVar7 = this_05->GetWrapV();
                goto LAB_1001599d8;
            }
        LAB_1001599d6:
            uVar7 = 0;
        LAB_1001599d8:
            iVar4 = field_104092;
            field_104092 = iVar4 + 1;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar4);
            *puVar17 = uVar7;
            return 1;
        case 1629:
            pIVar12 = (InputField*)this_00->GetInputField();
            if (pIVar12 != (InputField*)0) {
                uVar6 = pIVar12->GetWrapMode();
                break;
            }
            goto LAB_1001598ba;
        case 1630:
            this_06 = (PackableArea*)this_00->GetInputField();
            if (this_06 != (PackableArea*)0) {
                uVar6 = this_06->GetMaxLevels();
                break;
            }
            goto LAB_1001598ba;
        case 1631:
            this_07 = (MapSquare*)this_00->GetInputField();
            if (this_07 != (MapSquare*)0) {
                uVar6 = this_07->GetMapSquareX();
                break;
            }
            goto LAB_1001598ba;
        case 1632:
            pIVar12 = (InputField*)this_00->GetInputField();
            if (pIVar12 != (InputField*)0) {
                uVar6 = pIVar12->GetVisibility();
                break;
            }
        LAB_1001598ba:
            uVar6 = 0;
            break;
        case 1633:
            pKVar15 = (KeyConsumptionMap*)this_00->GetInputFieldKeyMap();
            if (pKVar15 == (KeyConsumptionMap*)0) {
                return 1;
            }
            uVar19 = (long)field_104092 - 1;
            field_104092 = (int)uVar19;
            piVar14 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar19);
            uVar7 = pKVar15->GetKey(*piVar14);
            goto LAB_100159978;
        case 1634:
            pKVar15 = (KeyConsumptionMap*)this_00->GetInputFieldKeyMap();
            if (pKVar15 == (KeyConsumptionMap*)0) {
                return 1;
            }
            uVar19 = (long)field_104092 - 1;
            field_104092 = (int)uVar19;
            pwVar16 = (wchar16*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar19);
            uVar7 = pKVar15->GetChar(*pwVar16);
        LAB_100159978:
            iVar4 = field_104092;
            field_104092 = iVar4 + 1;
            puVar17 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar4);
            *puVar17 = uVar7;
            return 1;
        default:
            return 2;
        }
        iVar4 = field_104092;
        field_104092 = iVar4 + 1;
        puVar13 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar4);
        *puVar13 = uVar6;
        return 1;
    }

} // namespace jag::oldscape
