// projects/osclient/ScriptRunnerImpl_7000To7099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1000b3b70
    uint64_t ScriptRunnerImpl::ExecuteCommand7000To7099(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        int iVar1;
        uint8_t bVar2;
        uint16_t uVar3;
        EntityHighlightBitFlags EVar4;
        HighlightCategory HVar5;
        unsigned int uVar6;
        uint32_t* puVar7;
        unsigned short* puVar8;
        HighlightManager* pHVar9;
        char* str;
        eastl::string* this_01;
        eastl::string* pbVar10;
        unsigned int* puVar11;
        int* piVar12;
        ObjTagManager* pOVar13;
        int iVar14;
        long lVar15;
        unsigned long uVar16;
        uint8_t* puVar18;
        OpGroup local_1a8;
        int local_40;
        unsigned int local_3c;
        int local_38;
        int local_34;

        uint64_t uVar17 = 2;
        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 7000:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = (HighlightCategory)pHVar9;
            EVar4 = EVar4 & 255;
            iVar14 = 0;
            goto LAB_1000b4e5d;
        case 7001:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 3U);
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[lVar15 - 3U];
            iVar14 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar15 - 2];
            iVar1 = *piVar12;
            puVar11 = (unsigned int*)(*puVar18)[lVar15 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddNPCHighlight(iVar14, iVar1, uVar6);
            break;
        case 7002:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 3U);
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[lVar15 - 3U];
            iVar14 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar15 - 2];
            iVar1 = *piVar12;
            puVar11 = (unsigned int*)(*puVar18)[lVar15 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemoveNPCHighlight(iVar14, iVar1, uVar6);
            break;
        case 7003:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 3U);
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[lVar15 - 3U];
            local_34 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar15 - 2];
            iVar14 = *piVar12;
            puVar11 = (unsigned int*)(*puVar18)[lVar15 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsNPCHighlighted(local_34, iVar14, uVar6);
            goto LAB_1000b52b8;
        case 7004:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = 0;
            goto LAB_1000b4f78;
        case 7005:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            highlight::HighlightManager::ConfigureChannel((HighlightCategory)pHVar9, 1, (unsigned short)local_34,
                                                          (unsigned short)local_38, (unsigned char)local_3c,
                                                          EVar4 & 255);
            return 1;
        case 7006:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddNPCTypeHighlight(iVar1, uVar6, false);
            break;
        case 7007:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemoveNPCTypeHighlight(iVar1, uVar6);
            break;
        case 7008:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsNPCTypeHighlighted(iVar1, uVar6);
            goto LAB_1000b52b8;
        case 7009:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->ClearHighlights(1, iVar14);
            return 1;
        case 7010:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = (HighlightCategory)pHVar9;
            EVar4 = EVar4 & 255;
            iVar14 = 2;
            goto LAB_1000b4e5d;
        case 7011:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 4;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[uVar16];
            iVar1 = *piVar12;
            piVar12 = (int*)(*puVar18)[(long)iVar14 - 3];
            local_1a8 = rs2lib::CoordGrid(*piVar12);
            iVar14 = field_104092;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 + 2];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddLocHighlight(iVar1, local_1a8, uVar6, iVar14 != 0, false);
            break;
        case 7012:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 4;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[uVar16];
            iVar1 = *piVar12;
            piVar12 = (int*)(*puVar18)[(long)iVar14 - 3];
            local_1a8 = rs2lib::CoordGrid(*piVar12);
            iVar14 = field_104092;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 + 2];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemoveLocHighlight(iVar1, local_1a8, uVar6, iVar14 != 0);
            break;
        case 7013:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 4U);
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[lVar15 - 4U];
            local_34 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar15 - 3];
            local_38 = *piVar12;
            puVar11 = (unsigned int*)(*puVar18)[lVar15 - 2];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[lVar15 - 1];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsLocHighlighted(local_34, local_38, uVar6, iVar14 != 0);
            goto LAB_1000b4d4c;
        case 7014:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = 2;
            goto LAB_1000b4f78;
        case 7015:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = (HighlightCategory)pHVar9;
            EVar4 = EVar4 & 255;
            iVar14 = 3;
            goto LAB_1000b4e5d;
        case 7016:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddLocTypeHighlight(iVar1, uVar6, false);
            break;
        case 7017:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemoveLocTypeHighlight(iVar1, uVar6);
            break;
        case 7018:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsLocTypeHighlighted(iVar1, uVar6);
            goto LAB_1000b52b8;
        case 7019:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = 3;
            goto LAB_1000b4f78;
        case 7020:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = (HighlightCategory)pHVar9;
            EVar4 = EVar4 & 255;
            iVar14 = 4;
            goto LAB_1000b4e5d;
        case 7021:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 4;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[uVar16];
            iVar1 = *piVar12;
            piVar12 = (int*)(*puVar18)[(long)iVar14 - 3];
            local_1a8 = rs2lib::CoordGrid(*piVar12);
            iVar14 = field_104092;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 + 2];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddObjHighlight(iVar1, local_1a8, uVar6, iVar14 != 0, false);
            break;
        case 7022:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 4;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[uVar16];
            iVar1 = *piVar12;
            piVar12 = (int*)(*puVar18)[(long)iVar14 - 3];
            local_1a8 = rs2lib::CoordGrid(*piVar12);
            iVar14 = field_104092;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 + 2];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemoveObjHighlight(iVar1, local_1a8, uVar6, iVar14 != 0);
            break;
        case 7023:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 4U);
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[lVar15 - 4U];
            local_34 = *piVar12;
            piVar12 = (int*)(*puVar18)[lVar15 - 3];
            local_38 = *piVar12;
            puVar11 = (unsigned int*)(*puVar18)[lVar15 - 2];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[lVar15 - 1];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsObjHighlighted(local_34, local_38, uVar6, iVar14 != 0);
            goto LAB_1000b4d4c;
        case 7024:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = 4;
            goto LAB_1000b4f78;
        case 7025:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = (HighlightCategory)pHVar9;
            EVar4 = EVar4 & 255;
            iVar14 = 5;
            goto LAB_1000b4e5d;
        case 7026:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddObjTypeHighlight(iVar1, uVar6, false);
            break;
        case 7027:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemoveObjTypeHighlight(iVar1, uVar6);
            break;
        case 7028:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar1 = *piVar12;
            puVar11 = &field_100092[(long)iVar14 - 1];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsObjTypeHighlighted(iVar1, uVar6);
            goto LAB_1000b52b8;
        case 7029:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = 5;
            goto LAB_1000b4f78;
        case 7030:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = (HighlightCategory)pHVar9;
            EVar4 = EVar4 & 255;
            iVar14 = 6;
            goto LAB_1000b4e5d;
        case 7031:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = eastl::string(*pbVar10);
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddPlayerHighlight(local_1a8, uVar6, false);
            goto LAB_1000b53b5;
        case 7032:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = eastl::string(*pbVar10);
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemovePlayerHighlight(local_1a8, uVar6);
            goto LAB_1000b53b5;
        case 7033:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = eastl::string(*pbVar10);
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsPlayerHighlighted(local_1a8, uVar6);
            goto LAB_1000b5260;
        case 7034:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = 6;
            goto LAB_1000b4f78;
        case 7035:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = (HighlightCategory)pHVar9;
            EVar4 = EVar4 & 255;
            iVar14 = 7;
            goto LAB_1000b4e5d;
        case 7036:
            uVar16 = (long)field_104092 - 3;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[uVar16];
            local_1a8 = rs2lib::CoordGrid(*piVar12);
            iVar14 = field_104092;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 + 1];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 2];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddTileHighlight(local_1a8, uVar6, iVar14 != 0, false);
            break;
        case 7037:
            uVar16 = (long)field_104092 - 3;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[uVar16];
            local_1a8 = rs2lib::CoordGrid(*piVar12);
            iVar14 = field_104092;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 + 1];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 2];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemoveTileHighlight(local_1a8, uVar6, iVar14 != 0);
            break;
        case 7038:
            lVar15 = (long)field_104092;
            field_104092 = (int)(lVar15 - 3U);
            puVar18 = &field_100092;
            piVar12 = (int*)(*puVar18)[lVar15 - 3U];
            local_34 = *piVar12;
            puVar11 = (unsigned int*)(*puVar18)[lVar15 - 2];
            uVar6 = *puVar11;
            piVar12 = (int*)(*puVar18)[lVar15 - 1];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsTileHighlighted(local_34, uVar6, iVar14 != 0);
        LAB_1000b4d4c:
            uVar6 = (unsigned int)bVar2;
            uVar16 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b53f5;
        case 7039:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = 7;
            goto LAB_1000b4f78;
        case 7040:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 5;
            field_104092 = (int)uVar16;
            puVar18 = &field_100092;
            puVar7 = (uint32_t*)(*puVar18)[uVar16];
            local_34 = *puVar7;
            puVar11 = (unsigned int*)(*puVar18)[(long)iVar14 - 4];
            uVar3 = jag::math::RunetekColour::RGBToHSL(*puVar11);
            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)uVar3);
            iVar14 = field_104092;
            puVar8 = (unsigned short*)(*puVar18)[(long)iVar14 + 2];
            local_3c = (unsigned int)*puVar8;
            piVar12 = (int*)(*puVar18)[(long)iVar14 + 3];
            local_1a8.field_0 = 0;
            local_40 = 255;
            EVar4 = jag::math::Clamp<int>(*piVar12, local_1a8, local_40);
            (*puVar18)[(long)field_104092 + 4];
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = (HighlightCategory)pHVar9;
            EVar4 = EVar4 & 255;
            iVar14 = 8;
        LAB_1000b4e5d:
            highlight::HighlightManager::ConfigureChannel(HVar5, iVar14, (unsigned short)local_34,
                                                          (unsigned short)local_38, (unsigned char)local_3c, EVar4);
            break;
        case 7041:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = OpGroup::Create(*pbVar10, false);
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->AddOpGroupHighlight(local_1a8, uVar6, false);
            goto LAB_1000b54b8;
        case 7042:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = OpGroup::Create(*pbVar10, false);
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            pHVar9->RemoveOpGroupHighlight(local_1a8, uVar6);
            goto LAB_1000b54b8;
        case 7043:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = OpGroup::Create(*pbVar10, false);
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            pHVar9 = this_00->GetHighlightManager();
            bVar2 = pHVar9->IsOpGroupHighlighted(local_1a8, uVar6);
            iVar14 = field_104092;
            field_104092 = iVar14 + 1;
            puVar11 = &field_100092[(long)iVar14];
            *puVar11 = (unsigned int)bVar2;
        LAB_1000b54b8:
            break;
        case 7044:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pHVar9 = this_00->GetHighlightManager();
            HVar5 = 8;
        LAB_1000b4f78:
            pHVar9->ClearHighlights(HVar5, iVar14);
            break;
        default:
            goto switchD_1000b3bb4_caseD_1b85;
        case 7060:
            uVar16 = (long)field_104092 - 2;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = eastl::string(*pbVar10);
            piVar12 = &field_100092[(long)field_104092 + 1];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            pOVar13->AddTag(uVar6, local_1a8, iVar14);
            goto LAB_1000b53b5;
        case 7061:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = eastl::string(*pbVar10);
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            bVar2 = pOVar13->DeleteTag(local_1a8, iVar14);
            goto LAB_1000b5260;
        case 7062:
            uVar16 = (long)field_104092 - 2;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = eastl::string(*pbVar10);
            piVar12 = &field_100092[(long)field_104092 + 1];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            bVar2 = pOVar13->RemoveTagFromObj(uVar6, local_1a8, iVar14);
            goto LAB_1000b5397;
        case 7063:
            iVar14 = field_104092;
            uVar16 = (long)iVar14 - 2;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            piVar12 = &field_100092[(long)iVar14 - 1];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            bVar2 = pOVar13->FindTagsById(uVar6, iVar14);
            goto LAB_1000b52b8;
        case 7064:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            bVar2 = pOVar13->FindTagsByGroup(iVar14);
            goto LAB_1000b52b8;
        case 7065:
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            str = (char*)pOVar13->GetNextTag();
            iVar14 = field_136096;
            field_136096 = iVar14 + 1;
            this_01 = &field_104096[(long)iVar14];
            eastl::string::assign(this_01, str);
            break;
        case 7066:
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            pOVar13->RestartFindTags();
            break;
        case 7067:
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = eastl::string(*pbVar10);
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            bVar2 = pOVar13->FindIdsByTag(local_1a8, iVar14);
        LAB_1000b5260:
            iVar14 = field_104092;
            field_104092 = iVar14 + 1;
        LAB_1000b53ae:
            puVar11 = &field_100092[(long)iVar14];
            *puVar11 = (unsigned int)bVar2;
        LAB_1000b53b5:
            break;
        case 7068:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            bVar2 = pOVar13->FindIdsByGroup(iVar14);
        LAB_1000b52b8:
            uVar6 = (unsigned int)bVar2;
            uVar16 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
        LAB_1000b53f5:
            puVar11 = &field_100092[uVar16];
            *puVar11 = uVar6;
            break;
        case 7069:
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            uVar6 = pOVar13->GetNextId();
            goto LAB_1000b53dd;
        case 7070:
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            pOVar13->RestartFindIds();
            break;
        case 7071:
            uVar16 = (long)field_104092 - 2;
            field_104092 = (int)uVar16;
            puVar11 = &field_100092[uVar16];
            uVar6 = *puVar11;
            uVar16 = (long)field_136096 - 1;
            field_136096 = (int)uVar16;
            pbVar10 = &field_104096[uVar16];
            local_1a8 = eastl::string(*pbVar10);
            piVar12 = &field_100092[(long)field_104092 + 1];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            bVar2 = pOVar13->HasTag(uVar6, local_1a8, iVar14);
        LAB_1000b5397:
            iVar14 = field_104092;
            field_104092 = iVar14 + 1;
            goto LAB_1000b53ae;
        case 7072:
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            bVar2 = pOVar13->AreTagsEmpty();
            uVar6 = (unsigned int)bVar2;
        LAB_1000b53dd:
            uVar16 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            goto LAB_1000b53f5;
        case 7073:
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            pOVar13->ResetAll();
            break;
        case 7074:
            uVar16 = (long)field_104092 - 1;
            field_104092 = (int)uVar16;
            piVar12 = &field_100092[uVar16];
            iVar14 = *piVar12;
            pOVar13 = (ObjTagManager*)this_00->field_54720.operator->();
            pOVar13->ClearGroup(iVar14);
        }
        uVar17 = 1;
    switchD_1000b3bb4_caseD_1b85:
        return uVar17;
    }

} // namespace jag::oldscape
