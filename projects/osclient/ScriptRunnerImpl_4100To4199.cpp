// projects/osclient/ScriptRunnerImpl_4100To4199.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001647f0, 4064 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand4100To4199(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand4100To4199(long param_1, undefined4 param_2) {
        char cVar1;
        short sVar2;
        uint uVar3;
        byte bVar4;
        undefined1 uVar5;
        bool bVar6;
        undefined4 uVar8;
        int iVar9;
        Client* this;
        GraphicsDefaults* this_00;
        PixfontGeneric* pPVar10;
        undefined2* puVar11;
        wchar16* pwVar12;
        uint* puVar13;
        short* psVar14;
        int* piVar15;
        Layout* this_01;
        vector* pvVar16;
        char* pcVar17;
        uchar* puVar18;
        undefined1* puVar19;
        ulong uVar20;
        basic_string* pbVar21;
        array<eastl::string, 1000ul>* paVar22;
        Worldmap* this_02;
        eastl::string* pbVar23;
        undefined4* puVar24;
        int iVar25;
        long lVar26;
        ulong uVar27;
        array<eastl::string, 1000ul>* paVar28;
        array<int, 1000ul>* this_03;
        allocator local_b0[8];
        array<eastl::string, 1000ul>* local_a8;
        ulong local_a0;
        ulong local_98[4];
        ulong local_78[4];
        array<eastl::string, 1000ul>* local_58;
        eastl::string local_50[32];

        this = (Client*)Client::Instance();
        switch (param_2) {
        case 4100:
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            puVar13 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            uVar3 = *puVar13;
            pcVar17 = (char*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)*(int*)(param_1 + 136096) - 1);
            eastl::string::append_sprintf(pcVar17, "%i", (ulong)uVar3);
            return 1;
        case 4101:
            uVar27 = (long)*(int*)(param_1 + 136096) - 2;
            *(int*)(param_1 + 136096) = (int)uVar27;
            paVar28 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](paVar28, uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](paVar28,
                                                                                   (long)*(int*)(param_1 + 136096) + 1);
            new (local_78) eastl::string(pbVar21);
            eastl::operator+((basic_string*)local_98, (basic_string*)local_50);
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar28, (long)iVar9);
            eastl::string::operator=(pbVar23, (basic_string*)local_98);
            local_98->~basic_string();
            break;
        case 4102:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            local_98->FromInt(*piVar15, true);
            eastl::operator+((basic_string*)local_78, (basic_string*)local_50);
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            eastl::string::operator=(pbVar23, (basic_string*)local_78);
            local_78->~basic_string();
            pbVar23 = (eastl::string*)local_98;
            goto LAB_100165661;
        case 4103:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            new (local_78) eastl::string();
            stringtools::UTF8ToCP1252<eastl::string>((basic_string*)local_50, (basic_string*)local_78);
            lVar26 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar26 != 0) {
                uVar27 = 0;
                do {
                    puVar18 = (uchar*)eastl::string::operator[]((eastl::string*)local_78, uVar27);
                    uVar5 = core::stringtools::general::CP1252Tools::ToLower(*puVar18);
                    puVar19 = (undefined1*)eastl::string::operator[]((eastl::string*)local_78, uVar27);
                    *puVar19 = uVar5;
                    uVar27 = uVar27 + 1;
                    uVar20 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                } while (uVar27 < uVar20);
            }
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            stringtools::CP1252ToUTF8<eastl::string>((basic_string*)local_78, pbVar21);
            break;
        case 4104:
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            local_50->FormatRuneDay(*piVar15, field_8432);
            pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            eastl::string::assign(pbVar23, pcVar17);
            local_50->~basic_string();
            return 1;
        case 4105:
            iVar9 = *(int*)(param_1 + 136096);
            uVar27 = (long)iVar9 - 2;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            paVar22 = (array<eastl::string, 1000ul>*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9 - 1);
            lVar26 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
            bVar6 = operator==((shared_ptr*)(lVar26 + 1008), (_func_decltype_nullptr*)0);
            if (!bVar6) {
                lVar26 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
                this_00 = (GraphicsDefaults*)shared_ptr<rs2lib::PlayerModel>::operator->(
                    (shared_ptr<rs2lib::PlayerModel>*)(lVar26 + 1008));
                iVar9 = this_00->GetSpriteCompassID();
                if (iVar9 != 0)
                    goto LAB_100165562;
            }
        LAB_100165583:
            paVar22 = (array<eastl::string, 1000ul>*)pbVar21;
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            goto LAB_1001655a2;
        case 4106:
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            local_50->FromInt(*piVar15, false);
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            eastl::string::operator=(pbVar23, (basic_string*)local_50);
            goto LAB_100165666;
        case 4107:
            iVar9 = *(int*)(param_1 + 136096);
            uVar27 = (long)iVar9 - 2;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)(param_1 + 104096),
                                                          (long)iVar9 - 1);
            iVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar21);
            if (0 < iVar9) {
                iVar9 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar9 + 1;
                puVar24 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                           (long)iVar9);
                *puVar24 = 1;
                return 1;
            }
            iVar25 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar25 + 1;
            puVar24 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar25);
            if (iVar9 < 0) {
                *puVar24 = 4294967295;
                return 1;
            }
            *puVar24 = 0;
            return 1;
        case 4108:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            iVar9 = *(int*)(param_1 + 104092);
            uVar27 = (long)iVar9 - 2;
            *(int*)(param_1 + 104092) = (int)uVar27;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            iVar25 = *piVar15;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9 - 1);
            pPVar10 = (PixfontGeneric*)GetFontFromGroupId(*piVar15);
            uVar8 = pPVar10->PredictLinesMultiline(local_50, iVar25);
            goto LAB_100164d2e;
        case 4109:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            iVar9 = *(int*)(param_1 + 104092);
            uVar27 = (long)iVar9 - 2;
            *(int*)(param_1 + 104092) = (int)uVar27;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            iVar25 = *piVar15;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9 - 1);
            pPVar10 = (PixfontGeneric*)GetFontFromGroupId(*piVar15);
            uVar8 = pPVar10->PredictWidthMultiline(local_50, iVar25);
        LAB_100164d2e:
            paVar28 = (array<eastl::string, 1000ul>*)(param_1 + 100092);
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
        LAB_100165617:
            puVar24 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)paVar28, (long)iVar9);
            *puVar24 = uVar8;
            goto LAB_100165666;
        case 4110:
            iVar9 = *(int*)(param_1 + 136096);
            uVar27 = (long)iVar9 - 2;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            uVar27 = (long)iVar9 - 1;
            uVar20 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar20;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar20);
            uVar8 = (undefined4)uVar27;
            if (*piVar15 == 1) {
                *(undefined4*)(param_1 + 136096) = uVar8;
                eastl::string::operator=(pbVar23, (basic_string*)pbVar23);
                return 1;
            }
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            *(undefined4*)(param_1 + 136096) = uVar8;
            eastl::string::operator=(pbVar23, pbVar21);
            return 1;
        case 4111:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar27 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_78->Escape(pcVar17, uVar27);
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            eastl::string::operator=(pbVar23, (basic_string*)local_78);
            break;
        case 4112:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            puVar11 = (undefined2*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            local_78[0] = CONCAT62(local_78[0]._2_6_, *puVar11);
            eastl::string::append_convert<char16_t>(local_50, (wchar16*)local_78, 1);
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            eastl::string::operator=(pbVar23, (basic_string*)local_50);
            goto LAB_100165666;
        case 4113:
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            pwVar12 = (wchar16*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            bVar4 = core::stringtools::general::StringTools::IsPrintableAsImplementedInJString(*pwVar12);
            goto LAB_100164f65;
        case 4114:
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            pwVar12 = (wchar16*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            bVar4 = core::stringtools::general::StringTools::IsASCIIAlphaNumeric(*pwVar12);
            goto LAB_100164f65;
        case 4115:
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            pwVar12 = (wchar16*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            bVar4 = core::stringtools::general::StringTools::IsASCIIAlpha(*pwVar12);
            goto LAB_100164f65;
        case 4116:
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            pwVar12 = (wchar16*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            bVar4 = core::stringtools::general::StringTools::IsASCIINumeric(*pwVar12);
        LAB_100164f65:
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            puVar13 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9);
            *puVar13 = (uint)bVar4;
            return 1;
        case 4117:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar27 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            uVar8 = stringtools::GetUTF8StringWidth(pcVar17, uVar27);
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            puVar24 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9);
            *puVar24 = uVar8;
            goto LAB_100165666;
        case 4118:
            local_a8 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](local_a8, uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            iVar9 = *(int*)(param_1 + 104092);
            uVar27 = (long)iVar9 - 2;
            *(int*)(param_1 + 104092) = (int)uVar27;
            piVar15 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar27);
            iVar25 = *piVar15;
            piVar15 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar9 - 1);
            iVar9 = *piVar15;
            pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_98[0] = 0;
            local_58 = (array<eastl::string, 1000ul>*)CONCAT44(local_58._4_4_, iVar25);
            if (0 < iVar25) {
                do {
                    stringtools::GetUTF8NextChar16(pcVar17, local_98);
                    iVar25 = iVar25 + -1;
                } while (iVar25 != 0);
            }
            local_a0 = local_98[0];
            iVar25 = iVar9 - (int)local_58;
            if (iVar25 != 0 && (int)local_58 <= iVar9) {
                do {
                    stringtools::GetUTF8NextChar16(pcVar17, &local_a0);
                    iVar25 = iVar25 + -1;
                } while (iVar25 != 0);
            }
            uVar20 = local_98[0];
            uVar27 = local_a0;
            eastl::allocator::allocator(local_b0, "EASTL basic_string");
            new (local_78) eastl::string(pcVar17 + uVar20, pcVar17 + uVar27, local_b0);
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](local_a8, (long)iVar9);
            eastl::string::operator=(pbVar23, (basic_string*)local_78);
            break;
        case 4119:
            local_58 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](local_58, uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            new (local_98) eastl::allocator("EASTL basic_string");
            new (local_78) eastl::string("", local_98);
            uVar27 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_78->reserve(uVar27);
            iVar9 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (0 < iVar9) {
                uVar27 = 0;
                bVar6 = false;
                do {
                    pcVar17 = (char*)eastl::string::at(local_50, uVar27);
                    cVar1 = *pcVar17;
                    if (cVar1 == '<') {
                        bVar6 = true;
                    } else if (cVar1 == '>') {
                        bVar6 = false;
                    } else if (!bVar6) {
                        local_78->push_back(cVar1);
                    }
                    uVar27 = uVar27 + 1;
                    iVar9 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                } while ((long)uVar27 < (long)iVar9);
            }
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](local_58, (long)iVar9);
            eastl::string::operator=(pbVar23, (basic_string*)local_78);
            break;
        case 4120:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            local_58 = (array<eastl::string, 1000ul>*)(param_1 + 100092);
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            psVar14 = (short*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)local_58, uVar27);
            sVar2 = *psVar14;
            pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_78[0] = 0;
            if (*pcVar17 == '\0') {
                uVar8 = 4294967295;
            } else {
                uVar8 = 4294967295;
                do {
                    uVar27 = local_78[0];
                    if (stringtools::GetUTF8NextChar16(pcVar17, local_78) == sVar2) {
                        uVar8 = (undefined4)uVar27;
                        break;
                    }
                } while (pcVar17[local_78[0]] != '\0');
            }
            iVar9 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar9 + 1;
            paVar28 = local_58;
            goto LAB_100165617;
        case 4121:
            uVar27 = (long)*(int*)(param_1 + 136096) - 2;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)*(int*)(param_1 + 136096) + 1);
            pbVar23 = (eastl::string*)local_78;
            eastl::string::basic_string(pbVar23, pbVar21);
            this_03 = (array<int, 1000ul>*)(param_1 + 100092);
            uVar27 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar27;
            piVar15 = (int*)std::array<int, 1000ul>::operator[](this_03, uVar27);
            this_01 = (Layout*)eastl::string::find(local_50, (basic_string*)pbVar23, (long)*piVar15);
            pvVar16 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)pbVar23);
            iVar9 = (int)pvVar16;
            if (0 < iVar9) {
                local_58 = (array<eastl::string, 1000ul>*)this_03;
                pcVar17 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar27 = (ulong)iVar9;
                local_98[0] = 0;
                iVar9 = 0;
                do {
                    stringtools::GetUTF8NextChar16(pcVar17, local_98);
                    iVar9 = iVar9 + 1;
                } while (local_98[0] < uVar27);
                if (pcVar17[local_98[0]] == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("pUtf8[n] != 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "ScriptRunnerImpl_4100To4199.cpp",
                              302, (char*)0);
                }
                this_03 = (array<int, 1000ul>*)local_58;
            }
            iVar25 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar25 + 1;
            piVar15 = (int*)std::array<int, 1000ul>::operator[](this_03, (long)iVar25);
            *piVar15 = iVar9;
            break;
        case 4122:
            uVar27 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar27;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar27);
            eastl::string::basic_string(local_50, pbVar21);
            new (local_78) eastl::string();
            stringtools::UTF8ToCP1252<eastl::string>((basic_string*)local_50, (basic_string*)local_78);
            lVar26 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar26 != 0) {
                uVar27 = 0;
                do {
                    puVar18 = (uchar*)eastl::string::operator[]((eastl::string*)local_78, uVar27);
                    uVar5 = core::stringtools::general::CP1252Tools::ToUpper(*puVar18);
                    puVar19 = (undefined1*)eastl::string::operator[]((eastl::string*)local_78, uVar27);
                    *puVar19 = uVar5;
                    uVar27 = uVar27 + 1;
                    uVar20 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                } while (uVar27 < uVar20);
            }
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
            stringtools::CP1252ToUTF8<eastl::string>((basic_string*)local_78, pbVar21);
            break;
        case 4123:
            lVar26 = (long)*(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = (int)(lVar26 - 3U);
            paVar28 = (array<eastl::string, 1000ul>*)(param_1 + 104096);
            local_58 =
                (array<eastl::string, 1000ul>*)std::array<eastl::string, 1000ul>::operator[](paVar28, lVar26 - 3U);
            pbVar21 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](paVar28, lVar26 - 2);
            paVar22 = (array<eastl::string, 1000ul>*)std::array<eastl::string, 1000ul>::operator[](paVar28, lVar26 - 1);
            lVar26 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
            bVar6 = operator==((shared_ptr*)(lVar26 + 1008), (_func_decltype_nullptr*)0);
            if (!bVar6) {
                lVar26 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
                this_02 = (Worldmap*)shared_ptr<rs2lib::PlayerModel>::operator->(
                    (shared_ptr<rs2lib::PlayerModel>*)(lVar26 + 1008));
                iVar9 = this_02->GetTileHeight();
                if (iVar9 == 1)
                    goto LAB_100165583;
                if (iVar9 == 0) {
                    iVar9 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar9 + 1;
                    pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](paVar28, (long)iVar9);
                    paVar22 = local_58;
                    goto LAB_1001655a2;
                }
            }
        LAB_100165562:
            iVar9 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar9 + 1;
            pbVar23 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar9);
        LAB_1001655a2:
            eastl::string::operator=(pbVar23, (basic_string*)paVar22);
            return 1;
        default:
            return 2;
        }
        pbVar23 = (eastl::string*)local_78;
    LAB_100165661:
        eastl::string::~basic_string(pbVar23);
    LAB_100165666:
        eastl::string::~basic_string(local_50);
        return 1;
    }

} // namespace jag::oldscape
