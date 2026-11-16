// projects/osclient/ScriptRunnerImpl_4100To4199.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001647f0
    uint64_t ScriptRunnerImpl::ExecuteCommand4100To4199(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        char arg1;
        short sVar1;
        unsigned int uVar2;
        ReturnValue RVar3;
        uint8_t bVar4;
        uint8_t uVar5;
        bool bVar6;
        uint32_t uVar8;
        int iVar9;
        PixfontGeneric* pPVar10;
        uint16_t* puVar11;
        char16_t* pwVar12;
        unsigned int* puVar13;
        short* psVar14;
        int* piVar15;
        char* pcVar16;
        unsigned char* puVar17;
        uint8_t* puVar18;
        unsigned long uVar19;
        eastl::string* pbVar20;
        array<eastl::string, 1000ul>* paVar21;
        eastl::string* pbVar22;
        uint32_t* puVar23;
        int iVar24;
        long lVar25;
        unsigned long uVar26;
        ReturnValue* this_05;
        ReturnValue RVar27;
        array<eastl::string, 1000ul>* local_a8;
        ReturnValue local_a0;
        ReturnValue local_98;
        ReturnValue local_78;
        array<eastl::string, 1000ul>* local_58;
        ReturnValue local_50;

        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 4100:
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            puVar13 = &field_100092[uVar26];
            uVar2 = *puVar13;
            pbVar22 = &field_104096[(long)field_136096 - 1];
            pbVar22->append_sprintf("%i", (unsigned long)uVar2);
            return 1;
        case 4101:
            uVar26 = (long)field_136096 - 2;
            field_136096 = (int)uVar26;
            puVar18 = &field_104096;
            pbVar20 = (eastl::string*)(*puVar18)[uVar26];
            local_50 = eastl::string(*pbVar20);
            pbVar20 = (eastl::string*)(*puVar18)[(long)field_136096 + 1];
            local_78 = eastl::string(*pbVar20);
            local_98 + local_50;
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*puVar18)[(long)iVar9];
            *pbVar22 = &local_98;
            break;
        case 4102:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            piVar15 = &field_100092[uVar26];
            local_98 = core::stringtools::general::StringTools::FromInt(*piVar15, true);
            local_78 + local_50;
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
            *pbVar22 = &local_78;
            this_05 = &local_98;
            goto LAB_100165661;
        case 4103:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            local_78 = eastl::string();
            stringtools::UTF8ToCP1252<eastl::string>(local_50, local_78);
            lVar25 = local_78.size();
            if (lVar25 != 0) {
                uVar26 = 0;
                do {
                    puVar17 = &local_78[uVar26];
                    uVar5 = core::stringtools::general::CP1252Tools::ToLower(*puVar17);
                    puVar18 = &local_78[uVar26];
                    *puVar18 = uVar5;
                    uVar26 = uVar26 + 1;
                    uVar19 = local_78.size();
                } while (uVar26 < uVar19);
            }
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar20 = &field_104096[(long)iVar9];
            stringtools::CP1252ToUTF8<eastl::string>(local_78, *pbVar20);
            break;
        case 4104:
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            piVar15 = &field_100092[uVar26];
            local_50 = game::TimeTools::FormatRuneDay(*piVar15, this_00->field_8432);
            pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
            eastl::string::assign(pbVar22, pcVar16);
            return 1;
        case 4105:
            iVar9 = field_136096;
            uVar26 = (long)iVar9 - 2;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            paVar21 = &field_104096[(long)iVar9 - 1];
            lVar25 = this_00->field_52016.operator->();
            bVar6 = (*((lVar25 + 1008))) == nullptr;
            if (!bVar6) {
                lVar25 = this_00->field_52016.operator->();
                iVar9 = ((GraphicsDefaults*)(*((lVar25 + 1008))).operator->())->GetSpriteCompassID();
                if (iVar9 != 0)
                    goto LAB_100165562;
            }
        LAB_100165583:
            paVar21 = (array<eastl::string, 1000ul>*)pbVar20;
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
            goto LAB_1001655a2;
        case 4106:
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            piVar15 = &field_100092[uVar26];
            local_50 = core::stringtools::general::StringTools::FromInt(*piVar15, false);
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
            *pbVar22 = &local_50;
            goto LAB_100165666;
        case 4107:
            iVar9 = field_136096;
            uVar26 = (long)iVar9 - 2;
            field_136096 = (int)uVar26;
            iVar9 = ((basic_string<char, BucketAllocatorEASTL>*)field_104096[uVar26])
                        ->compare((basic_string<char, eastl::fixed_vector_allocator<1ul, _64ul, _1ul, _0ul, true> _>*)
                                      field_104096[(long)iVar9 - 1]);
            if (0 < iVar9) {
                iVar9 = field_104092;
                field_104092 = iVar9 + 1;
                puVar23 = &field_100092[(long)iVar9];
                *puVar23 = 1;
                return 1;
            }
            iVar24 = field_104092;
            field_104092 = iVar24 + 1;
            puVar23 = &field_100092[(long)iVar24];
            if (iVar9 < 0) {
                *puVar23 = 4294967295;
                return 1;
            }
            *puVar23 = 0;
            return 1;
        case 4108:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            iVar9 = field_104092;
            uVar26 = (long)iVar9 - 2;
            field_104092 = (int)uVar26;
            piVar15 = &field_100092[uVar26];
            iVar24 = *piVar15;
            piVar15 = &field_100092[(long)iVar9 - 1];
            pPVar10 = this_00->GetFontFromGroupId(*piVar15);
            uVar8 = pPVar10->PredictLinesMultiline(local_50, iVar24);
            goto LAB_100164d2e;
        case 4109:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            iVar9 = field_104092;
            uVar26 = (long)iVar9 - 2;
            field_104092 = (int)uVar26;
            piVar15 = &field_100092[uVar26];
            iVar24 = *piVar15;
            piVar15 = &field_100092[(long)iVar9 - 1];
            pPVar10 = this_00->GetFontFromGroupId(*piVar15);
            uVar8 = pPVar10->PredictWidthMultiline(local_50, iVar24);
        LAB_100164d2e:
            paVar21 = (array<eastl::string, 1000ul>*)&field_100092;
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
        LAB_100165617:
            puVar23 = (uint32_t*)(*paVar21)[(long)iVar9];
            *puVar23 = uVar8;
            goto LAB_100165666;
        case 4110:
            iVar9 = field_136096;
            uVar26 = (long)iVar9 - 2;
            field_136096 = (int)uVar26;
            pbVar22 = &field_104096[uVar26];
            uVar26 = (long)iVar9 - 1;
            uVar19 = (long)field_104092 - 1;
            field_104092 = (int)uVar19;
            piVar15 = &field_100092[uVar19];
            iVar9 = (int)uVar26;
            if (*piVar15 == 1) {
                field_136096 = iVar9;
                *pbVar22 = pbVar22;
                return 1;
            }
            pbVar20 = &field_104096[uVar26];
            field_136096 = iVar9;
            *pbVar22 = pbVar20;
            return 1;
        case 4111:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar26 = local_50.size();
            local_78 = jstring::PixfontGeneric::Escape(pcVar16, uVar26);
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
            *pbVar22 = &local_78;
            break;
        case 4112:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            puVar11 = &field_100092[uVar26];
            local_78[0]._0_2_ = *puVar11;
            eastl::string::append_convert<char16_t>(&local_50, (unsigned long)&local_78);
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
            *pbVar22 = &local_50;
            goto LAB_100165666;
        case 4113:
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            pwVar12 = &field_100092[uVar26];
            bVar4 = core::stringtools::general::StringTools::IsPrintableAsImplementedInJString(*pwVar12);
            goto LAB_100164f65;
        case 4114:
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            pwVar12 = &field_100092[uVar26];
            bVar4 = core::stringtools::general::StringTools::IsASCIIAlphaNumeric(*pwVar12);
            goto LAB_100164f65;
        case 4115:
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            pwVar12 = &field_100092[uVar26];
            bVar4 = core::stringtools::general::StringTools::IsASCIIAlpha(*pwVar12);
            goto LAB_100164f65;
        case 4116:
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            pwVar12 = &field_100092[uVar26];
            bVar4 = core::stringtools::general::StringTools::IsASCIINumeric(*pwVar12);
        LAB_100164f65:
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar13 = &field_100092[(long)iVar9];
            *puVar13 = (unsigned int)bVar4;
            return 1;
        case 4117:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar26 = local_50.size();
            uVar8 = stringtools::GetUTF8StringWidth(pcVar16, uVar26);
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            puVar23 = &field_100092[(long)iVar9];
            *puVar23 = uVar8;
            goto LAB_100165666;
        case 4118:
            local_a8 = (array<eastl::string, 1000ul>*)&field_104096;
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = (eastl::string*)(*local_a8)[uVar26];
            local_50 = eastl::string(*pbVar20);
            iVar9 = field_104092;
            uVar26 = (long)iVar9 - 2;
            field_104092 = (int)uVar26;
            piVar15 = &field_100092[uVar26];
            iVar24 = *piVar15;
            piVar15 = &field_100092[(long)iVar9 - 1];
            iVar9 = *piVar15;
            pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_98[0] = (ReturnValue)0;
            local_58 = (array<eastl::string, 1000ul>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)iVar24);
            if (0 < iVar24) {
                do {
                    stringtools::GetUTF8NextChar16(pcVar16, local_98);
                    iVar24 = iVar24 - 1;
                } while (iVar24 != 0);
            }
            local_a0 = local_98[0];
            iVar24 = iVar9 - (int)local_58;
            if (iVar24 != 0 && (int)local_58 <= iVar9) {
                do {
                    stringtools::GetUTF8NextChar16(pcVar16, local_a0);
                    iVar24 = iVar24 - 1;
                } while (iVar24 != 0);
            }
            RVar3 = local_98[0];
            RVar27 = local_a0;
            local_78 = eastl::string(pcVar16 + (long)RVar3, pcVar16 + (long)RVar27);
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*local_a8)[(long)iVar9];
            *pbVar22 = &local_78;
            break;
        case 4119:
            local_58 = (array<eastl::string, 1000ul>*)&field_104096;
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = (eastl::string*)(*local_58)[uVar26];
            local_50 = eastl::string(*pbVar20);
            local_78 = eastl::string("");
            uVar26 = local_50.size();
            local_78.reserve(uVar26);
            iVar9 = local_50.size();
            if (0 < iVar9) {
                uVar26 = 0;
                bVar6 = false;
                do {
                    pcVar16 = (char*)local_50.at(uVar26);
                    arg1 = *pcVar16;
                    if (arg1 == '<') {
                        bVar6 = true;
                    } else if (arg1 == '>') {
                        bVar6 = false;
                    } else if (!bVar6) {
                        local_78.push_back(arg1);
                    }
                    uVar26 = uVar26 + 1;
                    iVar9 = local_50.size();
                } while ((long)uVar26 < (long)iVar9);
            }
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = (eastl::string*)(*local_58)[(long)iVar9];
            *pbVar22 = &local_78;
            break;
        case 4120:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            local_58 = (array<eastl::string, 1000ul>*)&field_100092;
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            psVar14 = (short*)(*local_58)[uVar26];
            sVar1 = *psVar14;
            pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_78[0] = (ReturnValue)0;
            if (*pcVar16 == '\0') {
                uVar8 = 4294967295;
            } else {
                uVar8 = 4294967295;
                do {
                    RVar27 = local_78[0];
                    if (stringtools::GetUTF8NextChar16(pcVar16, local_78) == sVar1) {
                        uVar8 = RVar27._0_4_;
                        break;
                    }
                } while (pcVar16[local_78[0]] != '\0');
            }
            iVar9 = field_104092;
            field_104092 = iVar9 + 1;
            paVar21 = local_58;
            goto LAB_100165617;
        case 4121:
            uVar26 = (long)field_136096 - 2;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            pbVar20 = &field_104096[(long)field_136096 + 1];
            local_78 = eastl::string(*pbVar20);
            paVar21 = (array<eastl::string, 1000ul>*)&field_100092;
            uVar26 = (long)field_104092 - 1;
            field_104092 = (int)uVar26;
            piVar15 = (int*)(*paVar21)[uVar26];
            iVar9 = ((Layout*)local_50.find(&local_78, (long)*piVar15))->SSOBeginPtr();
            if (0 < iVar9) {
                local_58 = paVar21;
                pcVar16 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                RVar27 = (ReturnValue)(long)iVar9;
                local_98[0] = (ReturnValue)0;
                iVar9 = 0;
                do {
                    stringtools::GetUTF8NextChar16(pcVar16, local_98);
                    iVar9 = iVar9 + 1;
                } while ((unsigned long)local_98[0] < (unsigned long)RVar27);
                if (pcVar16[local_98[0]] == '\0') {
                    LogAssert("pUtf8[n] != 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                              "ScriptRunnerImpl_4100To4199.cpp",
                              302, nullptr);
                }
                paVar21 = local_58;
            }
            iVar24 = field_104092;
            field_104092 = iVar24 + 1;
            piVar15 = (int*)(*paVar21)[(long)iVar24];
            *piVar15 = iVar9;
            break;
        case 4122:
            uVar26 = (long)field_136096 - 1;
            field_136096 = (int)uVar26;
            pbVar20 = &field_104096[uVar26];
            local_50 = eastl::string(*pbVar20);
            local_78 = eastl::string();
            stringtools::UTF8ToCP1252<eastl::string>(local_50, local_78);
            lVar25 = local_78.size();
            if (lVar25 != 0) {
                uVar26 = 0;
                do {
                    puVar17 = &local_78[uVar26];
                    uVar5 = core::stringtools::general::CP1252Tools::ToUpper(*puVar17);
                    puVar18 = &local_78[uVar26];
                    *puVar18 = uVar5;
                    uVar26 = uVar26 + 1;
                    uVar19 = local_78.size();
                } while (uVar26 < uVar19);
            }
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar20 = &field_104096[(long)iVar9];
            stringtools::CP1252ToUTF8<eastl::string>(local_78, *pbVar20);
            break;
        case 4123:
            lVar25 = (long)field_136096;
            field_136096 = (int)(lVar25 - 3U);
            puVar18 = &field_104096;
            local_58 = (array<eastl::string, 1000ul>*)(*puVar18)[lVar25 - 3U];
            pbVar20 = (eastl::string*)(*puVar18)[lVar25 - 2];
            paVar21 = (array<eastl::string, 1000ul>*)(*puVar18)[lVar25 - 1];
            lVar25 = this_00->field_52016.operator->();
            bVar6 = (*((lVar25 + 1008))) == nullptr;
            if (!bVar6) {
                lVar25 = this_00->field_52016.operator->();
                iVar9 = ((Worldmap*)(*((lVar25 + 1008))).operator->())->GetTileHeight();
                if (iVar9 == 1)
                    goto LAB_100165583;
                if (iVar9 == 0) {
                    iVar9 = field_136096;
                    field_136096 = iVar9 + 1;
                    pbVar22 = (eastl::string*)(*puVar18)[(long)iVar9];
                    paVar21 = local_58;
                    goto LAB_1001655a2;
                }
            }
        LAB_100165562:
            iVar9 = field_136096;
            field_136096 = iVar9 + 1;
            pbVar22 = &field_104096[(long)iVar9];
        LAB_1001655a2:
            *pbVar22 = paVar21;
            return 1;
        default:
            return 2;
        }
        this_05 = &local_78;
    LAB_100165661:
        this_05->~basic_string();
    LAB_100165666:
        return 1;
    }

} // namespace jag::oldscape
