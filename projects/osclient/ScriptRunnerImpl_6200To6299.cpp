// projects/osclient/ScriptRunnerImpl_6200To6299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001688e0, 48 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ConvertCameraLogarithmicToLinearScale(int)
    int ScriptRunnerImpl::ConvertCameraLogarithmicToLinearScale(int param_1) {
        double dVar1;

        dVar1 = (double)pow<int, float>(param_1, (float)param_1 * 0.00390625 + 7.0);
        return (int)dVar1;
    }

    // 0x100168930, 48 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ConvertCameraLinearToLogarithmicScale(int)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* ScriptRunnerImpl::ConvertCameraLinearToLogarithmicScale(int) */

    int ScriptRunnerImpl::ConvertCameraLinearToLogarithmicScale(int param_1) {
        double dVar1;

        dVar1 = (double)log<int>(param_1);
        return (int)((dVar1 * 256.0) / _LOG_E_2 + -1792.0);
    }

    // 0x100168960, 1584 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand6200To6299(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand6200To6299(long param_1, undefined4 param_2) {
        bool bVar1;
        short sVar2;
        uint uVar3;
        undefined4 uVar4;
        int iVar5;
        int iVar6;
        Client* this;
        Client* this_00;
        long lVar7;
        uint* puVar8;
        StaticPointLight* this_01;
        undefined4* puVar9;
        NXTPixToolkit* pNVar10;
        DeviceOptions* pDVar11;
        int* piVar12;
        undefined1* this_02;
        ulong uVar13;
        undefined8 uVar14;
        array<int, 1000ul>* this_03;
        float fVar15;
        GameShell aGStackY_fe848[128];
        SideBarData in_stack_ffffffffffffffb8;

        uVar14 = 2;
        this = (Client*)Client::Instance();
        switch (param_2) {
        case 6200:
            iVar6 = *(int*)(param_1 + 104092);
            uVar13 = (long)iVar6 - 2;
            *(int*)(param_1 + 104092) = (int)uVar13;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            sVar2 = ConvertCameraLogarithmicToLinearScale(*piVar12);
            if (sVar2 < 1) {
                sVar2 = 256;
            }
            field_52712 = sVar2;
            piVar12 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6 - 1);
            sVar2 = ConvertCameraLogarithmicToLinearScale(*piVar12);
            if (sVar2 < 1) {
                sVar2 = 256;
            }
            field_52714 = sVar2;
            break;
        case 6201:
            iVar6 = *(int*)(param_1 + 104092);
            uVar13 = (long)iVar6 - 2;
            *(int*)(param_1 + 104092) = (int)uVar13;
            puVar9 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            sVar2 = 256;
            if (0 < (short)*puVar9) {
                sVar2 = (short)*puVar9;
            }
            field_52716 = sVar2;
            puVar9 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                      (long)iVar6 - 1);
            sVar2 = 320;
            if (0 < (short)*puVar9) {
                sVar2 = (short)*puVar9;
            }
            field_52718 = sVar2;
            break;
        case 6202:
            iVar6 = *(int*)(param_1 + 104092);
            lVar7 = (long)iVar6;
            *(int*)(param_1 + 104092) = (int)(lVar7 - 4U);
            this_03 = (array<int, 1000ul>*)(param_1 + 100092);
            puVar8 = (uint*)std::array<int, 1000ul>::operator[](this_03, lVar7 - 4U);
            uVar3 = 1;
            if (0 < (short)*puVar8) {
                uVar3 = *puVar8;
            }
            field_52720 = (short)uVar3;
            piVar12 = (int*)std::array<int, 1000ul>::operator[](this_03, lVar7 - 3);
            iVar5 = *piVar12;
            field_52728 = (short)iVar5;
            iVar5 = iVar5 * 65536;
            sVar2 = 32767;
            if ((iVar5 < 65536) || (sVar2 = (short)uVar3, iVar5 >> 16 < (int)(uVar3 & 65535))) {
                field_52728 = sVar2;
            }
            puVar8 = (uint*)std::array<int, 1000ul>::operator[](this_03, lVar7 - 2);
            uVar3 = *puVar8;
            if ((short)uVar3 < 1) {
                uVar3 = 1;
            }
            field_52730 = (short)uVar3;
            piVar12 = (int*)std::array<int, 1000ul>::operator[](this_03, (long)(iVar6 + -1));
            iVar6 = *piVar12;
            field_52732 = (short)iVar6;
            iVar6 = iVar6 * 65536;
            if (iVar6 < 65536) {
                field_52732 = 32767;
                return 1;
            }
            if (iVar6 >> 16 < (int)(uVar3 & 65535)) {
                field_52732 = (short)uVar3;
                return 1;
            }
            return 1;
        case 6203:
            this_02 = &field_52472;
            bVar1 = operator!=((shared_ptr*)this_02, (_func_decltype_nullptr*)0);
            if (bVar1) {
                this_00 = (Client*)Client::Instance();
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_02);
                iVar6 = *(int*)(lVar7 + 72);
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_02);
                this_00->GdmCalcWindowSize(0, 0, iVar6, *(int*)(lVar7 + 76), false);
                uVar3 = field_52744;
                iVar6 = *(int*)(param_1 + 104092);
                *(int*)(param_1 + 104092) = iVar6 + 1;
                puVar8 =
                    (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
                *puVar8 = uVar3;
                uVar3 = field_52748;
                goto LAB_100168b62;
            }
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            puVar9 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            *puVar9 = 4294967295;
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            puVar9 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            *puVar9 = 4294967295;
            break;
        case 6204:
            sVar2 = field_52716;
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            *piVar12 = (int)sVar2;
            uVar3 = (uint)field_52718;
            goto LAB_100168b62;
        case 6205:
            uVar4 = ConvertCameraLinearToLogarithmicScale((int)field_52712);
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            puVar9 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            *puVar9 = uVar4;
            uVar3 = ConvertCameraLinearToLogarithmicScale((int)field_52714);
        LAB_100168b62:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            puVar8 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            *puVar8 = uVar3;
            break;
        default:
            goto switchD_1001689a1_caseD_183e;
        case 6210:
            uVar13 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar13;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            iVar6 = *piVar12;
            pNVar10 = (NXTPixToolkit*)GetMemoryCache();
            pNVar10->ZoomUI((float)iVar6 * 0.01);
            InterfaceCalculateSizeAndPosAll(true, true);
            OnWindowModeChanged();
            return 1;
        case 6211:
            pNVar10 = (NXTPixToolkit*)GetMemoryCache();
            this_01 = (StaticPointLight*)pNVar10->GetScreen();
            fVar15 = (float)this_01->GetAttenuationFalloff();
            uVar4 = jag::math::RoundFloatToInt(fVar15 * 100.0);
            goto LAB_100168d4b;
        case 6212:
            pNVar10 = (NXTPixToolkit*)GetMemoryCache();
            fVar15 = (float)GetDefaultUIZoom();
            pNVar10->ZoomUI(fVar15);
            InterfaceCalculateSizeAndPosAll(true, true);
            return 1;
        case 6213:
            uVar13 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar13;
            puVar9 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            uVar4 = *puVar9;
            bVar1 = IsValidEnumValue<ChatTimestampMode>(uVar4);
            if (bVar1) {
                pDVar11 =
                    (DeviceOptions*)
                        std::unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>::operator->((
                            unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&field_8376);
                pDVar11->SetUIQuality(uVar4);
                return 1;
            }
            return 1;
        case 6220:
            (aGStackY_fe848 + 128)->GetUISafeArea();
            uVar4 = ((aGStackY_fe848 + 128))->GetX();
            goto LAB_100168d4b;
        case 6221:
            (aGStackY_fe848 + 128)->GetUISafeArea();
            uVar4 = ((aGStackY_fe848 + 128))->GetZ();
            goto LAB_100168d4b;
        case 6222:
            (aGStackY_fe848 + 128)->GetUISafeArea();
            uVar4 = ((aGStackY_fe848 + 128))->Right();
            goto LAB_100168d4b;
        case 6223:
            (aGStackY_fe848 + 128)->GetUISafeArea();
            uVar4 = ((aGStackY_fe848 + 128))->MaxZ();
        LAB_100168d4b:
            iVar6 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar6 + 1;
            puVar9 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6);
            *puVar9 = uVar4;
            break;
        case 6230:
            *(int*)(param_1 + 104092) = *(int*)(param_1 + 104092) + -1;
            break;
        case 6231:
            iVar6 = *(int*)(param_1 + 104092);
            uVar13 = (long)iVar6 - 2;
            *(int*)(param_1 + 104092) = (int)uVar13;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            iVar5 = *piVar12;
            piVar12 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar6 - 1);
            new ((aGStackY_fe848 + 128)) sidebars::SideBarData(iVar5, *piVar12);
            RequestOpenPopoutSideBar(in_stack_ffffffffffffffb8);
            break;
        case 6232:
            uVar13 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar13;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar13);
            RequestClosePopoutSideBar(*piVar12);
        }
        uVar14 = 1;
    switchD_1001689a1_caseD_183e:
        return uVar14;
    }

} // namespace jag::oldscape
