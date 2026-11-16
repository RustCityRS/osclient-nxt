// projects/osclient/ScriptRunnerImpl_4000To4099.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag {
    // 0x1001646d0, 80 bytes, inline, placed by debug map only (low confidence)
    // number_of_set_bits(unsigned int)
    uint number_of_set_bits(uint param_1) {
        uint uVar1;

        uVar1 = (param_1 >> 1 & 1431655765) + (param_1 & 1431655765);
        uVar1 = (uVar1 >> 2 & 858993459) + (uVar1 & 858993459);
        uVar1 = (uVar1 >> 4) + uVar1 & 252645135;
        uVar1 = (uVar1 >> 8) + uVar1;
        return (uVar1 >> 16) + uVar1 & 255;
    }

    // 0x100164720, 32 bytes, inline, placed by debug map only (low confidence)
    // GetBitMask(int)
    uint GetBitMask(int param_1) {
        return ~(-1 << ((byte)param_1 & 31));
    }

    // 0x100164740, 48 bytes, inline, placed by debug map only (low confidence)
    // ClearBitRange(int, int, int)
    uint ClearBitRange(int param_1, int param_2, int param_3) {
        int iVar1;

        iVar1 = GetBitMask((param_3 - param_2) + 1);
        return ~(iVar1 << ((byte)param_2 & 31)) & param_1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100163b20, 2912 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand4000To4099(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand4000To4099(long param_1, undefined4 param_2) {
        int iVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        undefined4 uVar6;
        uint uVar7;
        undefined8 uVar8;
        int* piVar9;
        int* piVar10;
        uint* puVar11;
        uint* puVar12;
        byte* pbVar13;
        undefined4* puVar14;
        basic_string* pbVar15;
        byte bVar16;
        int iVar17;
        ulong uVar18;
        array<int, 1000ul>* paVar19;
        long lVar20;
        double dVar21;
        eastl::string local_68[32];
        ulong local_48;
        array<int, 1000ul>* local_40;
        int local_34;

        uVar8 = 2;
        switch (param_2) {
        case 4000:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = uVar7 + *piVar10;
            goto LAB_1001642d9;
        case 4001:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = uVar7 - *piVar10;
            goto LAB_1001642d9;
        case 4002:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = uVar7 * *piVar10;
            goto LAB_1001642d9;
        case 4003:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar18 = (long)iVar17 - 1;
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar17 = *piVar9;
            if (iVar17 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_4000To4099.cpp",
                                53, "Attempted divide-by-0 in divide command");
            }
            iVar3 = *piVar10;
            *(int*)(param_1 + 104092) = (int)uVar18;
            *piVar10 = iVar3 / iVar17;
            break;
        case 4004:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar17 = *piVar10;
            goto LAB_100163fc3;
        case 4005:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar17 = *piVar10 + 1;
        LAB_100163fc3:
            uVar7 = (&jag::math::g_Rand)->Rand(iVar17);
            goto LAB_100163fd2;
        case 4006:
            lVar20 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar20 - 5U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            local_40 = (array<int, 1000ul>*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 5U);
            local_34 = *(int*)local_40;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 3);
            iVar17 = *piVar10;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 2);
            iVar3 = *piVar10 - iVar17;
            if (iVar3 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_4000To4099.cpp",
                                80, "Attempted divide-by-0 in interpolate command");
            }
            local_48 = lVar20 - 4;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 1);
            uVar18 = local_48;
            piVar9 = (int*)std::array<int, 1000ul>::operator[](paVar19, local_48);
            iVar5 = *piVar9;
            iVar1 = *piVar10;
            *(int*)(param_1 + 104092) = (int)uVar18;
            *(int*)local_40 = ((iVar1 - iVar17) * (iVar5 - local_34)) / iVar3 + local_34;
            break;
        case 4007:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar3 = *piVar10;
            uVar18 = (long)iVar17 - 1;
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar17 = *piVar9;
            *(int*)(param_1 + 104092) = (int)uVar18;
            *piVar10 = (iVar17 * iVar3) / 100 + iVar3;
            break;
        case 4008:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            pbVar13 = (byte*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = uVar7 | 1 << (*pbVar13 & 31);
            goto LAB_1001642d9;
        case 4009:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            pbVar13 = (byte*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar4 = (-1 << (*pbVar13 & 31)) - 1U & uVar7;
            goto LAB_10016428f;
        case 4010:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            pbVar13 = (byte*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = uVar7 >> (*pbVar13 & 31) & 1;
            goto LAB_1001642d9;
        case 4011:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar3 = *piVar10;
            uVar18 = (long)iVar17 - 1;
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar17 = *piVar9;
            *(int*)(param_1 + 104092) = (int)uVar18;
            *piVar10 = iVar3 % iVar17;
            break;
        case 4012:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar3 = *piVar10;
            uVar18 = (long)iVar17 - 1;
            if (iVar3 != 0) {
                piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
                dVar21 = (double)pow<int, int>(iVar3, *piVar9);
                goto LAB_100163c1b;
            }
        LAB_10016449b:
            *(int*)(param_1 + 104092) = (int)uVar18;
            *piVar10 = 0;
            break;
        case 4013:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            iVar3 = *piVar10;
            uVar18 = (long)iVar17 - 1;
            piVar9 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            if (iVar3 == 0)
                goto LAB_10016449b;
            switch (*piVar9) {
            case 0:
                *(int*)(param_1 + 104092) = (int)uVar18;
                *piVar10 = 2147483647;
                goto LAB_100164556;
            case 1:
                *(int*)(param_1 + 104092) = (int)uVar18;
                *piVar10 = iVar3;
                goto LAB_100164556;
            case 2:
                dVar21 = (double)sqrt<int>(iVar3);
                break;
            case 3:
                dVar21 = (double)cbrt<int>(iVar3);
                break;
            case 4:
                dVar21 = (double)sqrt<int>(iVar3);
                dVar21 = SQRT(dVar21);
                break;
            default:
                dVar21 = (double)pow<int, double>(iVar3, 1.0 / (double)*piVar9);
            }
        LAB_100163c1b:
            *(int*)(param_1 + 104092) = (int)uVar18;
            *piVar10 = (int)dVar21;
            break;
        case 4014:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = uVar7 & *puVar12;
            goto LAB_1001642d9;
        case 4015:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = uVar7 | *puVar12;
            goto LAB_1001642d9;
        case 4016:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar4 = *puVar12;
            if ((int)uVar7 < (int)*puVar12) {
                uVar4 = uVar7;
            }
            goto LAB_10016428f;
        case 4017:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar4 = *puVar12;
            if ((int)*puVar12 < (int)uVar7) {
                uVar4 = uVar7;
            }
        LAB_10016428f:
            *(int*)(param_1 + 104092) = (int)uVar18;
            *puVar11 = uVar4;
            break;
        case 4018:
            lVar20 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar20 - 3U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            local_40 = (array<int, 1000ul>*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 3U);
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 2U);
            iVar17 = *piVar10;
            if ((long)iVar17 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_4000To4099.cpp",
                                228, "Attempted divide-by-0 in scale command");
            }
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 1);
            iVar3 = *(int*)local_40;
            iVar5 = *piVar10;
            *(int*)(param_1 + 104092) = (int)(lVar20 - 2U);
            *(int*)local_40 = (int)(((long)iVar5 * (long)iVar3) / (long)iVar17);
            break;
        default:
            goto switchD_100163b56_caseD_fb3;
        case 4025:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = number_of_set_bits(*puVar11);
            goto LAB_100163fd2;
        case 4026:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = *puVar11;
            uVar18 = (long)iVar17 - 1;
            pbVar13 = (byte*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar18);
            uVar7 = uVar7 ^ 1 << (*pbVar13 & 31);
        LAB_1001642d9:
            *(int*)(param_1 + 104092) = (int)uVar18;
            *puVar11 = uVar7;
            break;
        case 4027:
            lVar20 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar20 - 3U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar11 = (uint*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 3U);
            uVar7 = *puVar11;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 2);
            iVar17 = *piVar10;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 1);
            iVar3 = GetBitMask((*piVar10 - iVar17) + 1);
            uVar7 = iVar3 << ((byte)iVar17 & 31) | uVar7;
            goto LAB_100163fd2;
        case 4028:
            lVar20 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar20 - 3U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 3U);
            iVar17 = *piVar10;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 2);
            iVar3 = *piVar10;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 1);
            uVar7 = ClearBitRange(iVar17, iVar3, *piVar10);
        LAB_100163fd2:
            iVar17 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar17 + 1;
        LAB_100163fe6:
            puVar11 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar17);
            *puVar11 = uVar7;
            break;
        case 4029:
            lVar20 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar20 - 3U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            local_40 = (array<int, 1000ul>*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 3U);
            uVar7 = *(uint*)local_40;
            puVar14 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 2U);
            local_34 = *puVar14;
            puVar14 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 1);
            bVar16 = 31 - (char)*puVar14;
            *(int*)(param_1 + 104092) = (int)(lVar20 - 2U);
            *(uint*)local_40 = (uVar7 << (bVar16 & 31)) >> (bVar16 + (char)local_34 & 31);
            break;
        case 4030:
            lVar20 = (long)*(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = (int)(lVar20 - 4U);
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 4U);
            local_34 = *piVar10;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 3);
            iVar17 = *piVar10;
            local_40 = paVar19;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 2);
            iVar3 = *piVar10;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, lVar20 - 1);
            iVar5 = *piVar10;
            uVar7 = ClearBitRange(local_34, iVar3, iVar5);
            iVar5 = GetBitMask((iVar5 - iVar3) + 1);
            if (iVar5 < iVar17) {
                iVar17 = iVar5;
            }
            uVar7 = iVar17 << ((byte)iVar3 & 31) | uVar7;
            uVar18 = (ulong) * (int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + 1;
            paVar19 = local_40;
            goto LAB_1001643b8;
        case 4032:
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                (long)*(int*)(param_1 + 104092) - 1);
            uVar7 = game::Conversion::Sin(*piVar10);
            goto LAB_1001643a7;
        case 4033:
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                (long)*(int*)(param_1 + 104092) - 1);
            uVar7 = game::Conversion::Cos(*piVar10);
        LAB_1001643a7:
            uVar18 = (long)*(int*)(param_1 + 104092) - 1;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
        LAB_1001643b8:
            puVar11 = (uint*)std::array<int, 1000ul>::operator[](paVar19, uVar18);
            *puVar11 = uVar7;
            break;
        case 4034:
            iVar17 = *(int*)(param_1 + 104092);
            uVar18 = (long)iVar17 - 2;
            *(int*)(param_1 + 104092) = (int)uVar18;
            paVar19 = (array<int, 1000ul>*)(param_1 + 100092);
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, uVar18);
            iVar3 = *piVar10;
            piVar10 = (int*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar17 - 1);
            uVar6 = game::Conversion::Atan2(iVar3, *piVar10);
            iVar17 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar17 + 1;
            puVar14 = (undefined4*)std::array<int, 1000ul>::operator[](paVar19, (long)iVar17);
            *puVar14 = uVar6;
            break;
        case 4035:
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                (long)*(int*)(param_1 + 104092) - 1);
            iVar17 = -*piVar10;
            if (iVar17 < 0) {
                iVar17 = *piVar10;
            }
            *piVar10 = iVar17;
            break;
        case 4036:
            uVar18 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar18;
            pbVar15 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar18);
            eastl::string::basic_string(local_68, pbVar15);
            cVar2 = core::stringtools::general::StringTools::IsInt(local_68);
            eastl::string::~basic_string(local_68);
            uVar7 = 4294967295;
            if (cVar2 != '\0') {
                uVar7 = core::stringtools::general::StringTools::ParseInt(pbVar15);
            }
            iVar17 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar17 + 1;
            goto LAB_100163fe6;
        }
    LAB_100164556:
        uVar8 = 1;
    switchD_100163b56_caseD_fb3:
        return uVar8;
    }

} // namespace jag::oldscape
