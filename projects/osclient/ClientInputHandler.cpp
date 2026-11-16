// projects/osclient/ClientInputHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ClientInputHandler.h"
#include "libs/errstring/ErrString.h"
#include "libs/math/primitives/Capsule3D.h"

namespace jag::oldscape {
    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientInputHandler::TextCommandReceived(int, unsigned long long);

    // 0x10017ea20, 64 bytes, placed by class name and debug map
    // ClientInputHandler::Init()
    void ClientInputHandler::Init() {
        long lVar1;

        SetScreenDPI(this, 100);
        CheckMoveToRest(this);
        lVar1 = Client::Instance();
        field_104 = *(byte*)(lVar1 + 8425) ^ 1;
        lVar1 = Client::Instance();
        field_105 = *(char*)(lVar1 + 8425);
    }

    // 0x10017ea60, 32 bytes, placed by class name and debug map
    // ClientInputHandler::SetScreenDPI(int)
    void ClientInputHandler::SetScreenDPI(int param_1) {
        m_screenDPI = param_1;
        UpdateDragDeadZonePixels(this);
    }

    // 0x10017ea80, 160 bytes, placed by class name and debug map
    // ClientInputHandler::CheckMoveToRest()
    void ClientInputHandler::CheckMoveToRest() {
        char cVar1;
        undefined4* puVar2;
        XPlotBlender<graphics::XPlot_NormalAlpha> local_20[8];

        if (field_20 == 0) {
            field_12 = field_8;
            field_8 = 0;
            ResetDragAction(this);
            field_16 = 0;
            ResetPointers(this);
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_20, -1);
            cVar1 = CoordType<UICoordSpecializer>::operator!=((CoordType<UICoordSpecializer>*)&field_10040);
            if (cVar1 != '\0') {
                puVar2 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, 0);
                *puVar2 = field_10040;
                puVar2 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, 0);
                *puVar2 = field_10044;
            }
            field_10032 = 0;
        }
    }

    // 0x10017eb20, 80 bytes, placed by class name and debug map
    // ClientInputHandler::GetFlickVerticalVelocity()
    undefined4 ClientInputHandler::GetFlickVerticalVelocity() {
        int iVar1;
        int iVar2;
        undefined4 local_20[2];

        iVar1 = field_10448->GetAverage();
        field_10448->Reset();
        iVar2 = 0;
        if (8 < iVar1 + 4U) {
            iVar2 = iVar1;
        }
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_20, iVar2);
        return local_20[0];
    }

    // 0x10017ebc0, 80 bytes, placed by class name and debug map
    // ClientInputHandler::GetFlickHorizontalVelocity()
    undefined4 ClientInputHandler::GetFlickHorizontalVelocity() {
        int iVar1;
        int iVar2;
        undefined4 local_20[2];

        iVar1 = field_10504->GetAverage();
        field_10504->Reset();
        iVar2 = 0;
        if (8 < iVar1 + 4U) {
            iVar2 = iVar1;
        }
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_20, iVar2);
        return local_20[0];
    }

    // 0x10017ec10, 64 bytes, placed by class name and debug map
    // ClientInputHandler::UpdateDragDeadZonePixels()
    void ClientInputHandler::UpdateDragDeadZonePixels() {
        int iVar1;
        undefined4 in_EAX;
        int iVar2;
        undefined4 local_18[2];

        iVar1 = m_screenDPI;
        iVar2 = iVar1 + 7;
        if (-1 < iVar1) {
            iVar2 = iVar1;
        }
        local_18[0] = in_EAX;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_18, iVar2 >> 3);
        field_10056 = local_18[0];
    }

    // 0x10017ec50, 32 bytes, placed by class name and debug map
    // ClientInputHandler::ResetOnLogin()
    void ClientInputHandler::ResetOnLogin() {
        field_2024 = 0;
        ResetMouseWatchClick(this);
    }

    // 0x10017ec70, 64 bytes, placed by class name and debug map
    // ClientInputHandler::ResetMouseWatchClick()
    void ClientInputHandler::ResetMouseWatchClick() {
        undefined4 in_EAX;
        undefined4 local_18[2];

        local_18[0] = in_EAX;
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_18, -1);
        field_1996 = local_18[0];
        field_1992 = local_18[0];
        field_2000 = -1;
        field_2004 = -1;
    }

    // 0x10017ecb0, 64 bytes, placed by class name and debug map
    // ClientInputHandler::RequestMinimenuBuild()
    void ClientInputHandler::RequestMinimenuBuild() {
        undefined4 uVar1;
        undefined4* puVar2;

        puVar2 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, 0);
        uVar1 = *puVar2;
        puVar2 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, 0);
        SetMinimenuBuildCoords(this, uVar1, *puVar2);
    }

    // 0x10017ecf0, 16 bytes, placed by class name and debug map
    // ClientInputHandler::SetMinimenuBuildCoords(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void ClientInputHandler::SetMinimenuBuildCoords(undefined4 param_2, undefined4 param_3) {
        m_minimenuBuildCoords = param_2;
        field_100 = param_3;
    }

    // 0x10017ed10, 160 bytes, placed by class name and debug map
    // ClientInputHandler::ServicePreDispatch()
    void ClientInputHandler::ServicePreDispatch() {
        undefined1* puVar1;
        ulong uVar2;

        field_112 = 0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_110 = 0;
        ResetMouseWatchClick(this);
        uVar2 = 0;
        do {
            puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10168, uVar2);
            *puVar1 = 0;
            puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10276, uVar2);
            *puVar1 = 0;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 108);
        if ((field_8 | 2) == 10) {
            SetCurrentAction(this, 17);
        }
    }

    // 0x10017edc0, 288 bytes, placed by class name and debug map
    // ClientInputHandler::SetCurrentAction(ClientInputHandler::InputAction)
    void ClientInputHandler::SetCurrentAction(uint param_2) {
        char cVar1;
        ulong in_RAX;
        long lVar2;
        undefined4* puVar3;
        ulong local_28;

        local_28 = in_RAX;
        lVar2 = Client::Instance();
        field_12 = field_8;
        field_8 = param_2;
        if (param_2 == 4) {
            cVar1 = PrimaryOpOnPress(this);
            if ((cVar1 != '\0') || (field_20 == 0)) {
                field_8 = 5;
            }
        } else if (param_2 == 17) {
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_28, -1);
            cVar1 = CoordType<UICoordSpecializer>::operator!=((CoordType<UICoordSpecializer>*)&field_10040,
                                                              local_28 & 4294967295);
            if (cVar1 == '\0') {
                ResetMinimenuBuildCoords(this);
            } else {
                SetMinimenuBuildCoords(this, field_10040, field_10044);
                puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, 0);
                *puVar3 = field_10040;
                puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, 0);
                *puVar3 = field_10044;
            }
            field_10036 = 0;
            CheckMoveToRest(this);
        } else if (param_2 == 12) {
            puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, (long)(int)field_10032);
            *(undefined4*)(lVar2 + 53132) = *puVar3;
            puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, (long)(int)field_10032);
            *(undefined4*)(lVar2 + 53136) = *puVar3;
        }
    }

    // 0x10017eee0, 32 bytes, placed by class name and debug map
    // ClientInputHandler::ResetDragAction()
    void ClientInputHandler::ResetDragAction() {
        field_107 = false;
        field_108 = '\0';
        field_109 = 0;
        field_10048 = 0;
    }

    // 0x10017ef10, 64 bytes, placed by class name and debug map
    // ClientInputHandler::ResetMinimenuBuildCoords()
    void ClientInputHandler::ResetMinimenuBuildCoords() {
        undefined4 local_20[2];
        undefined4 local_18[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_20, -1);
        m_minimenuBuildCoords = local_20[0];
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_18, -1);
        field_100 = local_18[0];
    }

    // 0x10017ef70, 256 bytes, placed by class name and debug map
    // ClientInputHandler::AdvanceBuildingMinimenuState()
    void ClientInputHandler::AdvanceBuildingMinimenuState() {
        ulonglong uVar1;
        char cVar2;
        int iVar3;
        ulonglong uVar4;
        long lVar5;
        GameOptions* this_00;
        undefined8 uVar6;

        if (field_8 == 1) {
            ResetMinimenuBuildCoords(this);
            cVar2 = PrimaryOpOnPress(this);
            if ((cVar2 != '\0') && (field_10048 == '\0')) {
                TrySwitchToDrag(this, 0, field_107);
                if ((field_8 == 9) || (field_8 == 7)) {
                    field_10048 = 1;
                    return;
                }
            }
            if (field_10048 == '\0') {
                cVar2 = PrimaryOpOnPress(this);
                if ((cVar2 == '\0') && (field_20 != 0)) {
                    if (field_106 == '\0') {
                        return;
                    }
                    if (field_20 != 1) {
                        return;
                    }
                    uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)(ClientInputHandler*)this);
                    uVar1 = field_24;
                    lVar5 = Client::Instance();
                    this_00 =
                        (GameOptions*)
                            std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)(lVar5 +
                                                                                                             8384));
                    iVar3 = this_00->GetMinimenuLongPressTime();
                    if (uVar4 < (long)iVar3 + uVar1) {
                        return;
                    }
                    if (field_10036 == '\0') {
                        uVar6 = 4;
                    } else {
                        uVar6 = 17;
                    }
                } else {
                    uVar6 = 2;
                }
                SetCurrentAction(this, uVar6);
            } else {
                TrySwitchToDrag(this, 0, field_107);
            }
        }
    }

    // 0x10017f070, 176 bytes, placed by class name and debug map
    // ClientInputHandler::TrySwitchToDrag(unsigned long long, bool)
    void ClientInputHandler::TrySwitchToDrag(ulonglong param_1, bool param_2) {
        char cVar1;
        int iVar2;
        long lVar3;
        GameOptions* this_00;
        char cVar4;
        float fVar5;

        lVar3 = Client::Instance();
        this_00 =
            (GameOptions*)std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)(lVar3 + 8384));
        iVar2 = this_00->GetMinimenuLongPressTime();
        fVar5 = (float)eastl::min<float>(150.0, (float)iVar2 * 0.6666667);
        if (field_109 != '\0') {
            cVar1 = PrimaryOpOnPress(this);
            cVar4 = '\a';
            if (((cVar1 != '\0') || (field_108 == '\0')) || ((long)(int)fVar5 + field_24 <= param_1))
                goto LAB_10017f10c;
        }
        if (field_108 != '\0') {
            cVar1 = PrimaryOpOnPress(this);
            cVar4 = '\t';
            if (cVar1 == '\0')
                goto LAB_10017f10c;
        }
        cVar4 = !param_2 * '\x05' + '\f';
    LAB_10017f10c:
        SetCurrentAction(this, cVar4);
    }

    // 0x10017f170, 1088 bytes, placed by class name and debug map
    // ClientInputHandler::PointerPress(int, int, int, int, unsigned long long)
    undefined8 ClientInputHandler::PointerPress(int param_1, int param_2, int param_3, int param_4, ulonglong param_5) {
        uint uVar1;
        char cVar2;
        undefined4 uVar4;
        undefined4 uVar5;
        Client* this_00;
        Js5ResourceProvider* this_01;
        NXTPixToolkit* this_02;
        NXTPixScreen* this_03;
        uint* puVar7;
        undefined8 uVar8;
        shared_ptr* psVar9;
        shared_ptr<rs2lib::IfType>* this_04;
        long lVar10;
        int iVar11;
        undefined4 in_register_00000014;
        NpcUID* extraout_RDX;
        undefined4 in_register_00000034;
        NpcUID* pNVar12;
        double dVar14;
        double extraout_XMM0_Qa;
        undefined1 auVar15[16];
        undefined1 local_40[8];
        uint local_38[2];

        pNVar12 = (NpcUID*)CONCAT44(in_register_00000034, param_1);
        auVar15 = Client::Instance();
        this_00 = auVar15._0_8_;
        eastl::destruct<highlight::NpcUID*>((eastl*)local_38, pNVar12, auVar15._8_8_);
        eastl::destruct<highlight::NpcUID*>((eastl*)local_40, pNVar12, extraout_RDX);
        this_01 = (Js5ResourceProvider*)Client::Instance();
        this_02 = (NXTPixToolkit*)this_01->GetMemoryCache();
        this_03 = (NXTPixScreen*)this_02->GetScreen();
        this_03->UICoordFromWindowCoord(param_3, param_4, local_38, local_40);
        if (3 < param_1) {
            return 1;
        }
        if (field_16 < param_1) {
            return 1;
        }
        if (param_1 == 0) {
            field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_03);
        }
        if (field_16 == param_1) {
            field_16 = field_16 + 1;
            puVar7 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_32, (ulong)param_1);
            *puVar7 = local_38[0];
            puVar7 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_48, (ulong)param_1);
            *puVar7 = local_40._0_4_;
        }
        iVar11 = field_20 + 1;
        if (field_16 <= field_20) {
            iVar11 = field_16;
        }
        field_20 = iVar11;
        puVar7 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, (ulong)param_1);
        *puVar7 = local_38[0];
        puVar7 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, (ulong)param_1);
        *puVar7 = local_40._0_4_;
        if (0 < param_2) {
            field_10384 = field_10384 | param_2;
        }
        if ((field_16 == 1) || (cVar2 = PrimaryOpOnPress(this), cVar2 != '\0')) {
            *(uint*)&this_00->field_19056 = local_38[0];
            *(undefined4*)&this_00->field_19060 = local_40._0_4_;
            if ((param_2 == 1) || ((param_1 == 0 && (this_00->field_8425 != false)))) {
                field_110 = 1;
            }
            uVar8 = logger::default_logger();
            uVar4 = local_38->GetX();
            uVar5 = local_40->GetX();
            logger::Logger::Log(
                uVar8, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                "ClientInputHandler.cpp",
                282, "pointer:%i buttonType:%i uiX: %i uiY:%i numPointersCurrent: %i Total:%i currentAction:%i",
                param_1, CONCAT44(in_register_00000014, param_2), uVar4, uVar5, field_20, field_16, field_8);
            switch (field_8) {
            case 0:
            case 12:
            case 17:
                if ((param_2 != 4) || (this_00->field_19105 == '\0')) {
                    cVar2 = this_00->Frozen();
                    if (cVar2 != '\0') {
                        return 1;
                    }
                    SetMinimenuBuildCoords(this, local_38[0], local_40._0_4_);
                    if (param_2 == 2) {
                        SetCurrentAction(this, 4);
                        this_00->field_52344->field_1 = 1;
                    } else {
                        SetCurrentAction(this, 1);
                    }
                    RecordMouseWatchClick(this, local_38[0], local_40._0_4_, param_5, param_2 == 2);
                    return 1;
                }
                break;
            default:
                goto switchD_10017f347_caseD_1;
            case 5:
                if ((param_2 == 1) && (cVar2 = this_00->Frozen(), cVar2 == '\0')) {
                    SetCurrentAction(this, 2);
                    return 1;
                }
                if (param_2 != 4) {
                    return 1;
                }
                if (this_00->field_19105 == '\0') {
                    return 1;
                }
            }
            SetCurrentAction(this, 12);
        } else {
            if (field_16 != 2) {
                return 1;
            }
            psVar9 = (shared_ptr*)this_00->GetInterfaceInteraction();
            if (operator!=(psVar9, (_func_decltype_nullptr*)0)) {
                this_04 = (shared_ptr<rs2lib::IfType>*)this_00->GetInterfaceInteraction();
                lVar10 = shared_ptr<rs2lib::IfType>::operator->(this_04);
                if (*(int*)(lVar10 + 20) == 1338) {
                    SetCurrentAction(this, 14);
                }
            }
            uVar1 = field_8;
            if (1 < uVar1) {
                if (uVar1 == 14) {
                    cVar2 = this_00->Frozen();
                    if (cVar2 == '\0') {
                        SetCurrentAction(this);
                        GetPointerLastDistance(this, 0, 1);
                        field_10440 = extraout_XMM0_Qa;
                        field_10432 = extraout_XMM0_Qa;
                        return 1;
                    }
                    return 1;
                }
                if (uVar1 != 12) {
                    return 1;
                }
            }
            SetCurrentAction(this);
            dVar14 = (double)GetPointerLastDistance(this, 0, 1);
            field_10400 = dVar14;
            field_10392 = dVar14;
            uVar8 = GetPointerLastAngle(this, 0, 1);
            field_10408 = uVar8;
            dVar14 = (double)log<short>(this_00->field_52712);
            field_10416 = dVar14 / Client::VIEWPORT_FOV_EXPONENT_BASE_LOG;
            field_10424 = this_00->field_53112;
        }
    switchD_10017f347_caseD_1:
        return 1;
    }

    // 0x10017f5c0, 32 bytes, placed by class name and debug map
    // ClientInputHandler::RecordMouseWatchClick(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, unsigned long long, bool)
    void ClientInputHandler::RecordMouseWatchClick(undefined4 param_2, undefined4 param_3, undefined8 param_4,
                                                   undefined1 param_5) {
        field_1992 = param_2;
        field_1996 = param_3;
        field_2016 = param_4;
        field_2008 = param_5;
    }

    // 0x10017f630, 160 bytes, placed by class name and debug map
    // ClientInputHandler::GetPointerLastDistance(int, int)
    void ClientInputHandler::GetPointerLastDistance(int param_1, int param_2) {
        CoordType<UICoordSpecializer>* pCVar1;
        undefined4* puVar2;
        int iVar3;
        int iVar4;
        CoordMapSquare local_40;

        pCVar1 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, (long)param_1);
        puVar2 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, (long)param_2);
        local_40.m_x = CoordType<UICoordSpecializer>::operator-(pCVar1, *puVar2);
        iVar3 = local_40.GetX();
        pCVar1 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, (long)param_1);
        puVar2 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, (long)param_2);
        local_40._8_4_ = CoordType<UICoordSpecializer>::operator-(pCVar1, *puVar2);
        iVar4 = local_40.field_8.GetX();
        hypot<int, int>(iVar3, iVar4);
    }

    // 0x10017f6d0, 160 bytes, placed by class name and debug map
    // ClientInputHandler::GetPointerLastAngle(int, int)
    void ClientInputHandler::GetPointerLastAngle(int param_1, int param_2) {
        CoordType<UICoordSpecializer>* pCVar1;
        undefined4* puVar2;
        int iVar3;
        int iVar4;
        CoordMapSquare local_40;

        pCVar1 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, (long)param_1);
        puVar2 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, (long)param_2);
        local_40.m_x = CoordType<UICoordSpecializer>::operator-(pCVar1, *puVar2);
        iVar3 = local_40.GetX();
        pCVar1 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, (long)param_1);
        puVar2 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, (long)param_2);
        local_40._8_4_ = CoordType<UICoordSpecializer>::operator-(pCVar1, *puVar2);
        iVar4 = local_40.field_8.GetX();
        atan2<int, int>(iVar3, iVar4);
    }

    // 0x10017f780, 544 bytes, placed by class name and debug map
    // ClientInputHandler::PointerRelease(int, int, int, int, unsigned long long)
    undefined8 ClientInputHandler::PointerRelease(int param_1, int param_2, int param_3, int param_4,
                                                  ulonglong param_5) {
        int iVar1;
        Js5ResourceProvider* this_00;
        NXTPixToolkit* this_01;
        NXTPixScreen* this_02;
        undefined4* puVar3;
        uint* puVar4;
        NpcUID* extraout_RDX;
        undefined4 in_register_00000034;
        NpcUID* pNVar5;
        undefined8 uVar6;
        undefined1 auVar7[16];
        undefined4 local_48[2];
        uint local_40[2];
        undefined4 local_38[2];

        pNVar5 = (NpcUID*)CONCAT44(in_register_00000034, param_1);
        auVar7 = Client::Instance();
        this_00 = auVar7._0_8_;
        eastl::destruct<highlight::NpcUID*>((eastl*)local_48, pNVar5, auVar7._8_8_);
        eastl::destruct<highlight::NpcUID*>((eastl*)local_40, pNVar5, extraout_RDX);
        this_01 = (NXTPixToolkit*)this_00->GetMemoryCache();
        this_02 = (NXTPixScreen*)this_01->GetScreen();
        this_02->UICoordFromWindowCoord(param_3, param_4, local_48, local_40);
        if (3 < param_1) {
            return 1;
        }
        if (field_20 == 0) {
            return 1;
        }
        field_20 = field_20 + -1;
        if (param_1 == 0) {
            *(undefined4*)&this_00->field_19064 = local_48[0];
            *(uint*)&this_00->field_19068 = local_40[0];
            iVar1 = field_20;
        } else {
            iVar1 = field_20;
        }
        if (iVar1 != 0)
            goto switchD_10017f851_caseD_1;
        switch (field_8 - 1) {
        default:
            goto switchD_10017f851_caseD_1;
        case 3:
            uVar6 = 5;
            break;
        case 4:
            if (PrimaryOpOnPress(this) != '\0')
                goto switchD_10017f851_caseD_1;
            puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, (long)param_1);
            *puVar3 = local_48[0];
            puVar4 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, (long)param_1);
            *puVar4 = local_40[0];
        case 0:
        case 5:
            uVar6 = 2;
            break;
        case 6:
            uVar6 = 8;
            break;
        case 8:
            uVar6 = 10;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
            uVar6 = 17;
            break;
        case 16:
            CheckMoveToRest(this);
            goto switchD_10017f851_caseD_1;
        }
        SetCurrentAction(this, uVar6);
    switchD_10017f851_caseD_1:
        if (field_20 == 1) {
            if (field_8 == 13) {
                field_10032 = (uint)(param_1 == 0);
                SetCurrentAction(this, 12);
            }
            if (field_8 == 15) {
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_38, -1);
                field_10040 = local_38[0];
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_38, -1);
                field_10044 = local_38[0];
                SetCurrentAction(this, 17);
            }
        }
        if (0 < param_2) {
            field_10384 = field_10384 & ~param_2;
        }
        return 1;
    }

    // 0x10017f9a0, 1040 bytes, placed by class name and debug map
    // ClientInputHandler::PointerDrag(int, int, int, unsigned long long)
    undefined8 ClientInputHandler::PointerDrag(int param_1, int param_2, int param_3, ulonglong param_4) {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        Js5ResourceProvider* this_01;
        NXTPixToolkit* this_02;
        NXTPixScreen* this_03;
        ulonglong uVar5;
        uint* puVar6;
        undefined4* puVar7;
        uint* puVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        NpcUID* extraout_RDX;
        undefined4 in_register_00000034;
        NpcUID* pNVar11;
        double dVar12;
        undefined1 auVar13[16];
        undefined1 local_48[8];
        undefined1 local_40[8];
        uint local_38[2];

        pNVar11 = (NpcUID*)CONCAT44(in_register_00000034, param_1);
        auVar13 = Client::Instance();
        this_01 = auVar13._0_8_;
        eastl::destruct<highlight::NpcUID*>((eastl*)local_40, pNVar11, auVar13._8_8_);
        eastl::destruct<highlight::NpcUID*>((eastl*)local_38, pNVar11, extraout_RDX);
        this_02 = (NXTPixToolkit*)this_01->GetMemoryCache();
        this_03 = (NXTPixScreen*)this_02->GetScreen();
        this_03->UICoordFromWindowCoord(param_2, param_3, local_40, local_38);
        if (param_1 < 4) {
            uVar5 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_03);
            this_00 = &field_80;
            puVar6 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)this_00, (long)param_1);
            uVar1 = *puVar6;
            if (field_16 == 1) {
                puVar7 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, 0);
                local_48._0_4_ =
                    CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_40, *puVar7);
                iVar3 = local_48->GetX();
                (field_10504, (long)iVar3)->AddSample();
                puVar7 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)this_00, 0);
                local_48._0_4_ =
                    CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_38, *puVar7);
                iVar3 = local_48->GetX();
                (field_10448, (long)iVar3)->AddSample();
            }
            puVar8 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, (long)param_1);
            *puVar8 = local_40._0_4_;
            *puVar6 = local_38[0];
            if (field_20 == 2) {
                if (field_8 == 15) {
                    dVar12 = (double)GetPointerLastDistance(this, 0, 1);
                    iVar3 = (int)((dVar12 - field_10440) * 0.2);
                    field_10440 = (double)(iVar3 * 5) + field_10440;
                    uVar9 = logger::default_logger();
                    uVar10 = local_40->GetX();
                    uVar4 = local_38->GetX();
                    logger::Logger::Log(uVar9, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ClientInputHandler.cpp",
                                        567, "[MINIMAP_PINCH_MODE] - pinchMode uiX:%i uiY:%i currentAction:%i", uVar10,
                                        uVar4, field_8);
                    *(int*)&this_01->field_53152 = *(int*)&this_01->field_53152 - iVar3;
                } else if (field_8 == 13) {
                    dVar12 = (double)GetPointerLastDistance(this, 0, 1);
                    iVar3 = (int)((dVar12 - field_10400) * 0.2);
                    field_10400 = (double)(iVar3 * 5) + field_10400;
                    uVar9 = logger::default_logger();
                    uVar10 = local_40->GetX();
                    uVar4 = local_38->GetX();
                    logger::Logger::Log(uVar9, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ClientInputHandler.cpp",
                                        539, "[CAMERA_PINCH_MODE] - pinchMode uiX:%i uiY:%i currentAction:%i", uVar10,
                                        uVar4, field_8);
                    *(int*)&this_01->field_53144 = *(int*)&this_01->field_53144 - iVar3;
                }
            }
            if (param_1 == 0) {
                RecordMouseWatchMove(this, local_40._0_4_, local_38[0], param_4);
                cVar2 = PrimaryOpOnPress(this);
                if ((cVar2 != '\0') && (field_8 == 12)) {
                    puVar6 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                        (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, 0);
                    *puVar6 = local_40._0_4_;
                    puVar6 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                        (array<CoordType<UICoordSpecializer>, 4ul>*)this_00, 0);
                    *puVar6 = local_38[0];
                    SetMinimenuBuildCoords(this, local_40._0_4_, local_38[0]);
                }
                if (((field_16 == 1) && (field_24 <= uVar5)) &&
                    (cVar2 = IsDragDeadZoneExceeded(this, local_40._0_4_, local_38[0]), cVar2 != '\0')) {
                    field_10048 = 1;
                    switch (field_8) {
                    case 1:
                        if (field_110 == '\0') {
                            TrySwitchToDrag(this, uVar5, field_107);
                        }
                        break;
                    case 4:
                        SetCurrentAction(this, 5);
                        break;
                    case 6:
                        SetCurrentAction(this, 17);
                        break;
                    case 11:
                        local_48._0_4_ =
                            CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_38, uVar1);
                        uVar4 = local_48->GetX();
                        *(undefined4*)&this_01->field_53140 = uVar4;
                    }
                }
            }
        }
        return 1;
    }

    // 0x10017fe50, 256 bytes, placed by class name and debug map
    // ClientInputHandler::RecordMouseWatchMove(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, unsigned long long)
    void ClientInputHandler::RecordMouseWatchMove(undefined4 param_2, undefined4 param_3, ulong param_4) {
        uint uVar1;
        ulong* puVar2;
        undefined4* puVar3;

        uVar1 = field_2024;
        if (0 < (int)uVar1) {
            puVar2 = (ulong*)std::array<unsigned long long, 500ul>::operator[](
                (array<unsigned long long, 500ul>*)&field_6032, (ulong)(uVar1 - 1));
            if (param_4 / 50 == *puVar2 / 50) {
                field_2024 = uVar1 - 1;
                goto LAB_10017fee3;
            }
        }
        if (499 < (int)uVar1) {
            return;
        }
    LAB_10017fee3:
        puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 500ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 500ul>*)&field_2028, (long)(int)field_2024);
        *puVar3 = param_2;
        puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 500ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 500ul>*)&field_4028, (long)(int)field_2024);
        *puVar3 = param_3;
        uVar1 = field_2024;
        puVar2 = (ulong*)std::array<unsigned long long, 500ul>::operator[](
            (array<unsigned long long, 500ul>*)&field_6032, (long)(int)uVar1);
        *puVar2 = param_4;
        field_2024 = uVar1 + 1;
    }

    // 0x10017ff50, 208 bytes, placed by class name and debug map
    // ClientInputHandler::IsDragDeadZoneExceeded(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    ulong ClientInputHandler::IsDragDeadZoneExceeded(undefined4 param_2, undefined4 param_3) {
        char cVar1;
        undefined4 uVar2;
        uint uVar3;
        CoordType<UICoordSpecializer>* pCVar4;
        undefined8 unaff_R14;
        ulong uVar5;
        undefined4 local_38[2];
        undefined4 local_30[2];

        local_38[0] = param_2;
        local_30[0] = param_3;
        pCVar4 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_32, 0);
        uVar2 = CoordType<UICoordSpecializer>::operator-(pCVar4, field_10056);
        cVar1 = CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_38, uVar2);
        uVar5 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar1 == '\0') {
            CoordType<UICoordSpecializer>::operator+(pCVar4, field_10056);
            cVar1 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)local_38);
            if (cVar1 == '\0') {
                pCVar4 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)&field_48, 0);
                uVar2 = CoordType<UICoordSpecializer>::operator-(pCVar4, field_10056);
                cVar1 = CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_30, uVar2);
                if (cVar1 == '\0') {
                    uVar2 = CoordType<UICoordSpecializer>::operator+(pCVar4, field_10056);
                    uVar3 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)local_30, uVar2);
                    uVar5 = (ulong)uVar3;
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100180020, 352 bytes, placed by class name and debug map
    // ClientInputHandler::MouseMove(int, int, unsigned long long)
    undefined8 ClientInputHandler::MouseMove(int param_1, int param_2, ulonglong param_3) {
        undefined4 uVar1;
        undefined4 uVar2;
        char cVar3;
        Js5ResourceProvider* this_00;
        NXTPixToolkit* this_01;
        NXTPixScreen* this_02;
        undefined4* puVar4;
        ulonglong uVar5;
        undefined4 in_register_00000014;
        NpcUID* extraout_RDX;
        undefined4 in_register_00000034;
        NpcUID* pNVar6;
        ClientInputHandler* this_03;
        undefined4 local_40[2];
        undefined4 local_38[2];

        pNVar6 = (NpcUID*)CONCAT44(in_register_00000034, param_1);
        eastl::destruct<highlight::NpcUID*>((eastl*)local_40, pNVar6, (NpcUID*)CONCAT44(in_register_00000014, param_2));
        eastl::destruct<highlight::NpcUID*>((eastl*)local_38, pNVar6, extraout_RDX);
        this_00 = (Js5ResourceProvider*)Client::Instance();
        this_01 = (NXTPixToolkit*)this_00->GetMemoryCache();
        this_02 = (NXTPixScreen*)this_01->GetScreen();
        this_02->UICoordFromWindowCoord(param_1, param_2, local_40, local_38);
        uVar1 = local_40[0];
        field_10040 = local_40[0];
        puVar4 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, 0);
        uVar2 = local_38[0];
        *puVar4 = uVar1;
        field_10044 = local_38[0];
        puVar4 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, 0);
        *puVar4 = uVar2;
        RecordMouseWatchMove(this, local_40[0], local_38[0], param_3);
        switch (field_8) {
        case 0:
        case 12:
            SetMinimenuBuildCoords(this, local_40[0], local_38[0]);
            break;
        case 1:
            cVar3 = IsMouseButtonPressed(this, 1);
            if (((cVar3 != '\0') && (field_110 == '\0')) &&
                (this_03 = this, cVar3 = IsDragDeadZoneExceeded(this, local_40[0], local_38[0]), cVar3 != '\0')) {
                uVar5 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_03);
                TrySwitchToDrag(this, uVar5, false);
            }
            break;
        case 4:
            SetCurrentAction(this, 5);
        }
        return 1;
    }

    // 0x100180180, 32 bytes, placed by class name and debug map
    // ClientInputHandler::IsMouseButtonPressed(int)
    undefined4 ClientInputHandler::IsMouseButtonPressed(int param_1) {
        return CONCAT31((int3)((uint)~field_10384 >> 8), (param_1 & ~field_10384) == 0);
    }

    // 0x1001801a0, 16 bytes, placed by class name and debug map
    // ClientInputHandler::PointerCancel(int, int, unsigned long long)
    undefined8 ClientInputHandler::PointerCancel(int param_1, int param_2, ulonglong param_3) {
        (*(code*)field_0[12])();
        return 1;
    }

    // 0x1001801b0, 192 bytes, placed by class name and debug map
    // ClientInputHandler::KeyPressed(int, unsigned long long)
    undefined8 ClientInputHandler::KeyPressed(int param_1, ulonglong param_2) {
        long lVar1;
        char* pcVar2;
        undefined1* puVar3;

        lVar1 = Client::Instance();
        (*(code*)field_0[1])(this, param_1, param_2);
        pcVar2 = (char*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10060, (ulong)param_1);
        if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
            puVar3 =
                (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10168, (ulong)param_1);
            *puVar3 = 1;
            puVar3 =
                (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10276, (ulong)param_1);
            *puVar3 = 0;
            eastl::fixed_vector<int, 128ul, true, eastl::allocator>::push_back(&m_keysDown);
        }
        if ((1 < *(int*)(lVar1 + 53260)) && (param_1 == 66)) {
            pcVar2 = (char*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10060, 82);
            if (*pcVar2 != '\0') {
                Client::CopyToClipboard();
            }
        }
        return 1;
    }

    // 0x100180280, 96 bytes, placed by class name and debug map
    // ClientInputHandler::KeyRepeat(int, unsigned long long)
    undefined1 ClientInputHandler::KeyRepeat(int param_1, ulonglong param_2) {
        ulong uVar1;
        int* piVar2;
        undefined2* puVar3;

        uVar1 = field_112;
        if (uVar1 < 128) {
            piVar2 = (int*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)&field_120, uVar1);
            *piVar2 = param_1;
            puVar3 = (undefined2*)std::array<char16_t, 128ul>::operator[]((array<char16_t, 128ul>*)&field_632, uVar1);
            *puVar3 = 0;
            field_112 = uVar1 + 1;
        }
        return 1;
    }

    // 0x100180300, 112 bytes, placed by class name and debug map
    // ClientInputHandler::KeyReleased(int, unsigned long long)
    undefined1 ClientInputHandler::KeyReleased(int param_1, ulonglong param_2) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10060, (ulong)param_1);
        *puVar1 = 0;
        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10168, (ulong)param_1);
        *puVar1 = 0;
        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_10276, (ulong)param_1);
        *puVar1 = 1;
        eastl::fixed_vector<int, 128ul, true, eastl::allocator>::push_back(&m_keysUp);
        return 1;
    }

    // 0x100180370, 96 bytes, placed by class name and debug map
    // ClientInputHandler::KeyTyped(char16_t, unsigned long long)
    undefined1 ClientInputHandler::KeyTyped(wchar16 param_1, ulonglong param_2) {
        ulong uVar1;
        undefined4* puVar2;
        wchar16* pwVar3;

        uVar1 = field_112;
        if (uVar1 < 128) {
            puVar2 = (undefined4*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)&field_120, uVar1);
            *puVar2 = 4294967295;
            pwVar3 = (wchar16*)std::array<char16_t, 128ul>::operator[]((array<char16_t, 128ul>*)&field_632, uVar1);
            *pwVar3 = param_1;
            field_112 = uVar1 + 1;
        }
        return 1;
    }

    // 0x1001803d0, 16 bytes, placed by class name and debug map
    // ClientInputHandler::WheelScroll(int, unsigned long long)
    undefined1 ClientInputHandler::WheelScroll(int param_1, ulonglong param_2) {
        return 1;
    }

    // 0x1001803e0, 16 bytes, placed by class name and debug map
    // ClientInputHandler::KeyboardInputFocusChange(int, unsigned long long)
    undefined1 ClientInputHandler::KeyboardInputFocusChange(int param_1, ulonglong param_2) {
        return 1;
    }

    // 0x1001803f0, 32 bytes, placed by class name and debug map
    // ClientInputHandler::OnLowLevelMouseDown(int, int, int, int)
    undefined1 ClientInputHandler::OnLowLevelMouseDown(int param_1, int param_2, int param_3, int param_4) {
        field_2000 = param_3;
        field_2004 = param_4;
        return 1;
    }

    // 0x100180410, 32 bytes, placed by class name and debug map
    // ClientInputHandler::ResetState()
    void ClientInputHandler::ResetState() {
        ResetPointers(this);
        CheckMoveToRest(this);
    }

    // 0x100180430, 272 bytes, placed by class name and debug map
    // ClientInputHandler::ResetPointers()
    void ClientInputHandler::ResetPointers() {
        undefined4 uVar1;
        undefined4* puVar3;
        ulong uVar4;
        undefined4 local_38[2];

        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_38, -1);
        field_10040 = local_38[0];
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_38, -1);
        field_10044 = local_38[0];
        field_16 = 0;
        field_20 = 0;
        field_10384 = 0;
        uVar4 = 0;
        do {
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_38, -1);
            puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_48, uVar4);
            uVar1 = local_38[0];
            *puVar3 = local_38[0];
            puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_32, uVar4);
            *puVar3 = uVar1;
            if (PrimaryOpOnPress(this) == '\0') {
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_38, -1);
                puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)&field_80, uVar4);
                uVar1 = local_38[0];
                *puVar3 = local_38[0];
                puVar3 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                    (array<CoordType<UICoordSpecializer>, 4ul>*)&field_64, uVar4);
                *puVar3 = uVar1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 4);
    }

    // 0x100180540, 32 bytes, placed by class name and debug map
    // ClientInputHandler::IsDragging() const
    undefined4 ClientInputHandler::IsDragging() {
        uint uVar1;

        uVar1 = field_8 - 7;
        return CONCAT31((int3)(uVar1 >> 8), (37U >> (uVar1 & 31) & 1) != 0 && uVar1 < 6);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10017ebb0: the linker folded this into oldscape::CoordType<oldscape::UICoordSpecializer>::CoordType(int), which has identical code
    Error::Error(int);

} // namespace jag

namespace jag::graphics {
    // 0x10017ebb0: the linker folded this into oldscape::CoordType<oldscape::UICoordSpecializer>::CoordType(int), which has identical code
    SortKeyLessThan::SortKeyLessThan(RenderPassType);

} // namespace jag::graphics
