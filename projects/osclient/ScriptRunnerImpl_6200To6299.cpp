// projects/osclient/ScriptRunnerImpl_6200To6299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x1001688e0
    int ScriptRunnerImpl::ConvertCameraLogarithmicToLinearScale(int arg1) {
        double dVar1 = (double)pow<int, float>(arg1, (float)arg1 * 0.00390625f + 7.0);
        return (int)dVar1;
    }

    // 0x100168930
    int ScriptRunnerImpl::ConvertCameraLinearToLogarithmicScale(int arg1) {
        double dVar1 = (double)log<int>((int)this);
        return (int)((dVar1 * 256.0) / LOG_E_2 - 1792.0);
    }

    // 0x100168960
    uint64_t ScriptRunnerImpl::ExecuteCommand6200To6299(ScriptOp scriptOp, const ClientScript& clientScript,
                                                        bool arg3) {
        ScaledUIQuality scaledUIQuality;
        short sVar2;
        unsigned int uVar3;
        uint32_t uVar4;
        int iVar5;
        int iVar6;
        Client* this_01;
        long lVar7;
        unsigned int* puVar8;
        StaticPointLight* this_02;
        uint32_t* puVar9;
        NXTPixToolkit* pNVar10;
        ScaledUIQuality* pSVar11;
        int* piVar12;
        uint8_t* puVar13;
        unsigned long uVar14;
        float fVar16;
        SideBarData aSStackY_648[128];
        SideBarData in_stack_ffffffffffffffb8;

        uint64_t uVar15 = 2;
        auto this_00 = Client::Instance();
        switch (scriptOp) {
        case 6200:
            iVar6 = field_104092;
            uVar14 = (long)iVar6 - 2;
            field_104092 = (int)uVar14;
            piVar12 = &field_100092[uVar14];
            sVar2 = ConvertCameraLogarithmicToLinearScale(*piVar12);
            if (sVar2 < 1) {
                sVar2 = 256;
            }
            this_00->field_52712 = sVar2;
            piVar12 = &field_100092[(long)iVar6 - 1];
            sVar2 = ConvertCameraLogarithmicToLinearScale(*piVar12);
            if (sVar2 < 1) {
                sVar2 = 256;
            }
            this_00->field_52714 = sVar2;
            break;
        case 6201:
            iVar6 = field_104092;
            uVar14 = (long)iVar6 - 2;
            field_104092 = (int)uVar14;
            puVar9 = &field_100092[uVar14];
            sVar2 = 256;
            if (0 < (short)*puVar9) {
                sVar2 = (short)*puVar9;
            }
            this_00->field_52716 = sVar2;
            puVar9 = &field_100092[(long)iVar6 - 1];
            sVar2 = 320;
            if (0 < (short)*puVar9) {
                sVar2 = (short)*puVar9;
            }
            this_00->field_52718 = sVar2;
            break;
        case 6202:
            iVar6 = field_104092;
            lVar7 = (long)iVar6;
            field_104092 = (int)(lVar7 - 4U);
            puVar13 = &field_100092;
            puVar8 = (unsigned int*)(*puVar13)[lVar7 - 4U];
            uVar3 = 1;
            if (0 < (short)*puVar8) {
                uVar3 = *puVar8;
            }
            this_00->field_52720 = (short)uVar3;
            piVar12 = (int*)(*puVar13)[lVar7 - 3];
            iVar5 = *piVar12;
            this_00->field_52728 = (short)iVar5;
            iVar5 = iVar5 * 65536;
            sVar2 = 32767;
            if ((iVar5 < 65536) || (sVar2 = (short)uVar3, iVar5 >> 16 < (int)(uVar3 & 65535))) {
                this_00->field_52728 = sVar2;
            }
            puVar8 = (unsigned int*)(*puVar13)[lVar7 - 2];
            uVar3 = *puVar8;
            if ((short)uVar3 < 1) {
                uVar3 = 1;
            }
            this_00->field_52730 = (short)uVar3;
            piVar12 = (int*)(*puVar13)[(long)(iVar6 - 1)];
            iVar6 = *piVar12;
            this_00->field_52732 = (short)iVar6;
            iVar6 = iVar6 * 65536;
            if (iVar6 < 65536) {
                this_00->field_52732 = 32767;
                return 1;
            }
            if (iVar6 >> 16 < (int)(uVar3 & 65535)) {
                this_00->field_52732 = (short)uVar3;
                return 1;
            }
            return 1;
        case 6203:
            puVar13 = &this_00->field_52472;
            if (*puVar13 != nullptr) {
                this_01 = Client::Instance();
                lVar7 = (*puVar13).operator->();
                iVar6 = *(int*)(lVar7 + 72);
                lVar7 = (*puVar13).operator->();
                this_01->GdmCalcWindowSize(0, 0, iVar6, *(int*)(lVar7 + 76), false);
                uVar3 = this_00->field_52744;
                iVar6 = field_104092;
                field_104092 = iVar6 + 1;
                puVar8 = &field_100092[(long)iVar6];
                *puVar8 = uVar3;
                uVar3 = this_00->field_52748;
                goto LAB_100168b62;
            }
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = &field_100092[(long)iVar6];
            *puVar9 = 4294967295;
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = &field_100092[(long)iVar6];
            *puVar9 = 4294967295;
            break;
        case 6204:
            sVar2 = this_00->field_52716;
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            piVar12 = &field_100092[(long)iVar6];
            *piVar12 = (int)sVar2;
            uVar3 = (unsigned int)this_00->field_52718;
            goto LAB_100168b62;
        case 6205:
            uVar4 = ConvertCameraLinearToLogarithmicScale(
                (ScriptRunnerImpl*)(unsigned long)(unsigned int)(int)this_00->field_52712, scriptOp);
            uVar14 = (unsigned long)field_104092;
            field_104092 = field_104092 + 1;
            puVar9 = &field_100092[uVar14];
            *puVar9 = uVar4;
            uVar3 = ConvertCameraLinearToLogarithmicScale(
                (ScriptRunnerImpl*)(unsigned long)(unsigned int)(int)this_00->field_52714, (int)uVar14);
        LAB_100168b62:
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar8 = &field_100092[(long)iVar6];
            *puVar8 = uVar3;
            break;
        default:
            goto switchD_1001689a1_caseD_183e;
        case 6210:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar12 = &field_100092[uVar14];
            iVar6 = *piVar12;
            pNVar10 = (NXTPixToolkit*)this_00->GetMemoryCache();
            pNVar10->ZoomUI((float)iVar6 * 0.01);
            this_00->InterfaceCalculateSizeAndPosAll(true, true);
            this_00->OnWindowModeChanged();
            return 1;
        case 6211:
            pNVar10 = (NXTPixToolkit*)this_00->GetMemoryCache();
            this_02 = (StaticPointLight*)pNVar10->GetScreen();
            fVar16 = (float)this_02->GetAttenuationFalloff();
            uVar4 = jag::math::RoundFloatToInt(fVar16 * 100.0);
            goto LAB_100168d4b;
        case 6212:
            pNVar10 = (NXTPixToolkit*)this_00->GetMemoryCache();
            fVar16 = (float)this_00->GetDefaultUIZoom();
            pNVar10->ZoomUI(fVar16);
            this_00->InterfaceCalculateSizeAndPosAll(true, true);
            return 1;
        case 6213:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            pSVar11 = &field_100092[uVar14];
            scaledUIQuality = *pSVar11;
            if (IsValidEnumValue<ChatTimestampMode>((type*)(unsigned long)scaledUIQuality)) {
                ((DeviceOptions*)this_00->field_8376.operator->())->SetUIQuality(scaledUIQuality);
                return 1;
            }
            return 1;
        case 6220:
            *((aSStackY_648 + 128)) = this_00->GetUISafeArea();
            uVar4 = ((aSStackY_648 + 128))->GetX();
            goto LAB_100168d4b;
        case 6221:
            *((aSStackY_648 + 128)) = this_00->GetUISafeArea();
            uVar4 = ((aSStackY_648 + 128))->GetZ();
            goto LAB_100168d4b;
        case 6222:
            *((aSStackY_648 + 128)) = this_00->GetUISafeArea();
            uVar4 = ((aSStackY_648 + 128))->Right();
            goto LAB_100168d4b;
        case 6223:
            *((aSStackY_648 + 128)) = this_00->GetUISafeArea();
            uVar4 = ((aSStackY_648 + 128))->MaxZ();
        LAB_100168d4b:
            iVar6 = field_104092;
            field_104092 = iVar6 + 1;
            puVar9 = &field_100092[(long)iVar6];
            *puVar9 = uVar4;
            break;
        case 6230:
            field_104092 = field_104092 - 1;
            break;
        case 6231:
            iVar6 = field_104092;
            uVar14 = (long)iVar6 - 2;
            field_104092 = (int)uVar14;
            piVar12 = &field_100092[uVar14];
            iVar5 = *piVar12;
            piVar12 = &field_100092[(long)iVar6 - 1];
            new (aSStackY_648 + 128) sidebars::SideBarData(iVar5, *piVar12);
            Client::RequestOpenPopoutSideBar(in_stack_ffffffffffffffb8);
            break;
        case 6232:
            uVar14 = (long)field_104092 - 1;
            field_104092 = (int)uVar14;
            piVar12 = &field_100092[uVar14];
            this_00->RequestClosePopoutSideBar(*piVar12);
        }
        uVar15 = 1;
    switchD_1001689a1_caseD_183e:
        return uVar15;
    }

} // namespace jag::oldscape
