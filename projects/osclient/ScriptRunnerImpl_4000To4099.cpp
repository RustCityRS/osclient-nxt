// projects/osclient/ScriptRunnerImpl_4000To4099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag {
    // 0x1001646d0
    unsigned int number_of_set_bits(unsigned int arg1) {
        unsigned int uVar1 = (arg1 >> 1 & 1431655765) + (arg1 & 1431655765);
        uVar1 = (uVar1 >> 2 & 858993459) + (uVar1 & 858993459);
        uVar1 = (uVar1 >> 4) + uVar1 & 252645135;
        uVar1 = (uVar1 >> 8) + uVar1;
        return (uVar1 >> 16) + uVar1 & 255;
    }

    // 0x100164720
    unsigned int GetBitMask(int arg1) {
        return ~(-1 << ((uint8_t)arg1 & 31));
    }

    // 0x100164740
    unsigned int ClearBitRange(int arg1, int arg2, int arg3) {
        int iVar1 = GetBitMask((arg3 - arg2) + 1);
        return ~(iVar1 << ((uint8_t)arg2 & 31)) & arg1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100163b20
    uint64_t ScriptRunnerImpl::ExecuteCommand4000To4099(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        uint8_t* puVar1;
        int iVar2;
        bool cVar3;
        int iVar4;
        unsigned int uVar5;
        int iVar6;
        uint32_t uVar7;
        unsigned int uVar8;
        int* piVar10;
        int* piVar11;
        unsigned int* puVar12;
        unsigned int* puVar13;
        uint8_t* pbVar14;
        uint32_t* puVar15;
        eastl::string* str;
        uint8_t bVar16;
        int iVar17;
        unsigned long uVar18;
        array<int, 1000ul>* this_00;
        long lVar19;
        double dVar20;
        uint8_t auVar21[12];
        eastl::string local_68;
        unsigned long local_48;
        array<int, 1000ul>* local_40;
        int local_34;

        uint64_t uVar9 = 2;
        switch (scriptOp) {
        case 4000:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            piVar11 = &field_100092[uVar18];
            uVar8 = uVar8 + *piVar11;
            goto LAB_1001642d9;
        case 4001:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            piVar11 = &field_100092[uVar18];
            uVar8 = uVar8 - *piVar11;
            goto LAB_1001642d9;
        case 4002:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            piVar11 = &field_100092[uVar18];
            uVar8 = uVar8 * *piVar11;
            goto LAB_1001642d9;
        case 4003:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            piVar11 = &field_100092[uVar18];
            uVar18 = (long)iVar17 - 1;
            piVar10 = &field_100092[uVar18];
            iVar17 = *piVar10;
            if (iVar17 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_4000To4099.cpp",
                                53, "Attempted divide-by-0 in divide command");
            }
            iVar4 = *piVar11;
            field_104092 = (int)uVar18;
            *piVar11 = iVar4 / iVar17;
            break;
        case 4004:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar11 = &field_100092[uVar18];
            iVar17 = *piVar11;
            goto LAB_100163fc3;
        case 4005:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            piVar11 = &field_100092[uVar18];
            iVar17 = *piVar11 + 1;
        LAB_100163fc3:
            uVar8 = ((Random*)&jag::math::g_Rand)->Rand(iVar17);
            goto LAB_100163fd2;
        case 4006:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 5U);
            puVar1 = &field_100092;
            local_40 = (array<int, 1000ul>*)(*puVar1)[lVar19 - 5U];
            local_34 = *(int*)local_40;
            piVar11 = (int*)(*puVar1)[lVar19 - 3];
            iVar17 = *piVar11;
            piVar11 = (int*)(*puVar1)[lVar19 - 2];
            iVar4 = *piVar11 - iVar17;
            if (iVar4 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_4000To4099.cpp",
                                80, "Attempted divide-by-0 in interpolate command");
            }
            local_48 = lVar19 - 4;
            piVar11 = (int*)(*puVar1)[lVar19 - 1];
            uVar18 = local_48;
            piVar10 = (int*)(*puVar1)[local_48];
            iVar6 = *piVar10;
            iVar2 = *piVar11;
            field_104092 = (int)uVar18;
            *(int*)local_40 = ((iVar2 - iVar17) * (iVar6 - local_34)) / iVar4 + local_34;
            break;
        case 4007:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            piVar11 = &field_100092[uVar18];
            iVar4 = *piVar11;
            uVar18 = (long)iVar17 - 1;
            piVar10 = &field_100092[uVar18];
            iVar17 = *piVar10;
            field_104092 = (int)uVar18;
            *piVar11 = (iVar17 * iVar4) / 100 + iVar4;
            break;
        case 4008:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            pbVar14 = &field_100092[uVar18];
            uVar8 = uVar8 | 1 << (*pbVar14 & 31);
            goto LAB_1001642d9;
        case 4009:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            pbVar14 = &field_100092[uVar18];
            uVar5 = (-1 << (*pbVar14 & 31)) - 1U & uVar8;
            goto LAB_10016428f;
        case 4010:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            pbVar14 = &field_100092[uVar18];
            uVar8 = uVar8 >> (*pbVar14 & 31) & 1;
            goto LAB_1001642d9;
        case 4011:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            piVar11 = &field_100092[uVar18];
            iVar4 = *piVar11;
            uVar18 = (long)iVar17 - 1;
            piVar10 = &field_100092[uVar18];
            iVar17 = *piVar10;
            field_104092 = (int)uVar18;
            *piVar11 = iVar4 % iVar17;
            break;
        case 4012:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            piVar11 = &field_100092[uVar18];
            iVar4 = *piVar11;
            uVar18 = (long)iVar17 - 1;
            if (iVar4 != 0) {
                piVar10 = &field_100092[uVar18];
                dVar20 = (double)pow<int, int>(iVar4, *piVar10);
                goto LAB_100163c1b;
            }
        LAB_10016449b:
            field_104092 = (int)uVar18;
            *piVar11 = 0;
            break;
        case 4013:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            piVar11 = &field_100092[uVar18];
            iVar4 = *piVar11;
            uVar18 = (long)iVar17 - 1;
            piVar10 = &field_100092[uVar18];
            if (iVar4 == 0)
                goto LAB_10016449b;
            switch (*piVar10) {
            case 0:
                field_104092 = (int)uVar18;
                *piVar11 = 2147483647;
                goto LAB_100164556;
            case 1:
                field_104092 = (int)uVar18;
                *piVar11 = iVar4;
                goto LAB_100164556;
            case 2:
                dVar20 = (double)sqrt<int>(iVar4);
                break;
            case 3:
                dVar20 = (double)cbrt<int>(iVar4);
                break;
            case 4:
                dVar20 = (double)sqrt<int>(iVar4);
                dVar20 = SQRT(dVar20);
                break;
            default:
                dVar20 = (double)pow<int, double>(iVar4, 1.0 / (double)*piVar10);
            }
        LAB_100163c1b:
            field_104092 = (int)uVar18;
            *piVar11 = (int)dVar20;
            break;
        case 4014:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            puVar13 = &field_100092[uVar18];
            uVar8 = uVar8 & *puVar13;
            goto LAB_1001642d9;
        case 4015:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            puVar13 = &field_100092[uVar18];
            uVar8 = uVar8 | *puVar13;
            goto LAB_1001642d9;
        case 4016:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            puVar13 = &field_100092[uVar18];
            uVar5 = *puVar13;
            if ((int)uVar8 < (int)*puVar13) {
                uVar5 = uVar8;
            }
            goto LAB_10016428f;
        case 4017:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            puVar13 = &field_100092[uVar18];
            uVar5 = *puVar13;
            if ((int)*puVar13 < (int)uVar8) {
                uVar5 = uVar8;
            }
        LAB_10016428f:
            field_104092 = (int)uVar18;
            *puVar12 = uVar5;
            break;
        case 4018:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 3U);
            puVar1 = &field_100092;
            local_40 = (array<int, 1000ul>*)(*puVar1)[lVar19 - 3U];
            piVar11 = (int*)(*puVar1)[lVar19 - 2U];
            iVar17 = *piVar11;
            if ((long)iVar17 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_4000To4099.cpp",
                                228, "Attempted divide-by-0 in scale command");
            }
            piVar11 = (int*)(*puVar1)[lVar19 - 1];
            iVar4 = *(int*)local_40;
            iVar6 = *piVar11;
            field_104092 = (int)(lVar19 - 2U);
            *(int*)local_40 = (int)(((long)iVar6 * (long)iVar4) / (long)iVar17);
            break;
        default:
            goto switchD_100163b56_caseD_fb3;
        case 4025:
            uVar18 = (long)field_104092 - 1;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = number_of_set_bits(*puVar12);
            goto LAB_100163fd2;
        case 4026:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar12 = &field_100092[uVar18];
            uVar8 = *puVar12;
            uVar18 = (long)iVar17 - 1;
            pbVar14 = &field_100092[uVar18];
            uVar8 = uVar8 ^ 1 << (*pbVar14 & 31);
        LAB_1001642d9:
            field_104092 = (int)uVar18;
            *puVar12 = uVar8;
            break;
        case 4027:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 3U);
            puVar1 = &field_100092;
            puVar12 = (unsigned int*)(*puVar1)[lVar19 - 3U];
            uVar8 = *puVar12;
            piVar11 = (int*)(*puVar1)[lVar19 - 2];
            iVar17 = *piVar11;
            piVar11 = (int*)(*puVar1)[lVar19 - 1];
            iVar4 = GetBitMask((*piVar11 - iVar17) + 1);
            uVar8 = iVar4 << ((uint8_t)iVar17 & 31) | uVar8;
            goto LAB_100163fd2;
        case 4028:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 3U);
            puVar1 = &field_100092;
            piVar11 = (int*)(*puVar1)[lVar19 - 3U];
            iVar17 = *piVar11;
            piVar11 = (int*)(*puVar1)[lVar19 - 2];
            iVar4 = *piVar11;
            piVar11 = (int*)(*puVar1)[lVar19 - 1];
            uVar8 = ClearBitRange(iVar17, iVar4, *piVar11);
        LAB_100163fd2:
            iVar17 = field_104092;
            field_104092 = iVar17 + 1;
        LAB_100163fe6:
            puVar12 = &field_100092[(long)iVar17];
            *puVar12 = uVar8;
            break;
        case 4029:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 3U);
            puVar1 = &field_100092;
            local_40 = (array<int, 1000ul>*)(*puVar1)[lVar19 - 3U];
            uVar8 = *(unsigned int*)local_40;
            puVar15 = (uint32_t*)(*puVar1)[lVar19 - 2U];
            local_34 = *puVar15;
            puVar15 = (uint32_t*)(*puVar1)[lVar19 - 1];
            bVar16 = 31 - (char)*puVar15;
            field_104092 = (int)(lVar19 - 2U);
            *(unsigned int*)local_40 = (uVar8 << (bVar16 & 31)) >> (bVar16 + (char)local_34 & 31);
            break;
        case 4030:
            lVar19 = (long)field_104092;
            field_104092 = (int)(lVar19 - 4U);
            puVar1 = &field_100092;
            piVar11 = (int*)(*puVar1)[lVar19 - 4U];
            local_34 = *piVar11;
            piVar11 = (int*)(*puVar1)[lVar19 - 3];
            iVar17 = *piVar11;
            local_40 = (array<int, 1000ul>*)puVar1;
            piVar11 = (int*)(*puVar1)[lVar19 - 2];
            iVar4 = *piVar11;
            piVar11 = (int*)(*puVar1)[lVar19 - 1];
            iVar6 = *piVar11;
            uVar8 = ClearBitRange(local_34, iVar4, iVar6);
            iVar6 = GetBitMask((iVar6 - iVar4) + 1);
            if (iVar6 < iVar17) {
                iVar17 = iVar6;
            }
            uVar8 = iVar17 << ((uint8_t)iVar4 & 31) | uVar8;
            uVar18 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            this_00 = local_40;
            goto LAB_1001643b8;
        case 4032:
            piVar11 = &field_100092[(long)field_104092 - 1];
            uVar8 = game::Conversion::Sin(*piVar11);
            goto LAB_1001643a7;
        case 4033:
            piVar11 = &field_100092[(long)field_104092 - 1];
            uVar8 = game::Conversion::Cos(*piVar11);
        LAB_1001643a7:
            uVar18 = (long)field_104092 - 1;
            this_00 = (array<int, 1000ul>*)&field_100092;
        LAB_1001643b8:
            puVar12 = (unsigned int*)(*this_00)[uVar18];
            *puVar12 = uVar8;
            break;
        case 4034:
            iVar17 = field_104092;
            uVar18 = (long)iVar17 - 2;
            field_104092 = (int)uVar18;
            puVar1 = &field_100092;
            puVar12 = (unsigned int*)(*puVar1)[uVar18];
            uVar8 = *puVar12;
            auVar21 = (*puVar1)[(long)iVar17 - 1];
            uVar7 = ((Conversion*)(unsigned long)uVar8)->Atan2(*auVar21._0_8_, auVar21._8_4_);
            iVar17 = field_104092;
            field_104092 = iVar17 + 1;
            puVar15 = (uint32_t*)(*puVar1)[(long)iVar17];
            *puVar15 = uVar7;
            break;
        case 4035:
            piVar11 = &field_100092[(long)field_104092 - 1];
            iVar17 = -*piVar11;
            if (iVar17 < 0) {
                iVar17 = *piVar11;
            }
            *piVar11 = iVar17;
            break;
        case 4036:
            uVar18 = (long)field_136096 - 1;
            field_136096 = (int)uVar18;
            str = &field_104096[uVar18];
            local_68 = eastl::string(*str);
            cVar3 = core::stringtools::general::StringTools::IsInt(&local_68);
            uVar8 = 4294967295;
            if (cVar3) {
                uVar8 = core::stringtools::general::StringTools::ParseInt(*str);
            }
            iVar17 = field_104092;
            field_104092 = iVar17 + 1;
            goto LAB_100163fe6;
        }
    LAB_100164556:
        uVar9 = 1;
    switchD_100163b56_caseD_fb3:
        return uVar9;
    }

} // namespace jag::oldscape
