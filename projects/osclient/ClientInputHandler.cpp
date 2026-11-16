// projects/osclient/ClientInputHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ClientInputHandler.h"
#include "libs/errstring/ErrString.h"
#include "libs/math/primitives/Capsule3D.h"

namespace jag::oldscape {
    // 0x100029ea0: ClientInputHandler::TextCommandReceived(int, unsigned long long) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10017ea20
    void ClientInputHandler::Init() {
        SetScreenDPI(100);
        CheckMoveToRest();
        auto pCVar1 = Client::Instance();
        field_104 = pCVar1->field_8425 ^ 1;
        pCVar1 = Client::Instance();
        field_105 = pCVar1->field_8425;
    }

    // 0x10017ea60
    void ClientInputHandler::SetScreenDPI(int arg1) {
        m_screenDPI = arg1;
        UpdateDragDeadZonePixels();
    }

    // 0x10017ea80
    void ClientInputHandler::CheckMoveToRest() {
        unsigned int* puVar2;
        unsigned int local_20[2];

        if (field_20 == 0) {
            field_12 = field_8;
            field_8 = 0;
            ResetDragAction();
            field_16 = 0;
            ResetPointers();
            local_20->XPlotBlender<int>(4294967295);
            if (field_10040 != ((CoordType<UICoordSpecializer>*)(unsigned long)local_20[0]) != '\0') {
                puVar2 = &field_64[0];
                *puVar2 = field_10040;
                puVar2 = &field_80[0];
                *puVar2 = field_10044;
            }
            field_10032 = 0;
        }
    }

    // 0x10017eb20
    uint32_t ClientInputHandler::GetFlickVerticalVelocity() {
        return local_20;

        auto RVar1 = field_10448->GetAverage();
        field_10448->Reset();
        ResultType resultType = 0;
        if (8 < RVar1 + 4) {
            resultType = RVar1;
        }
        local_20.XPlotBlender<int>(resultType);
        return local_20[0];
    }

    // 0x10017ebc0
    uint32_t ClientInputHandler::GetFlickHorizontalVelocity() {
        return local_20;

        auto RVar1 = field_10504->GetAverage();
        field_10504->Reset();
        ResultType resultType = 0;
        if (8 < RVar1 + 4) {
            resultType = RVar1;
        }
        local_20.XPlotBlender<int>(resultType);
        return local_20[0];
    }

    // 0x10017ec10
    void ClientInputHandler::UpdateDragDeadZonePixels() {
        unsigned int in_EAX;
        unsigned int local_18[2];

        int iVar1 = m_screenDPI;
        int iVar2 = iVar1 + 7;
        if (-1 < iVar1) {
            iVar2 = iVar1;
        }
        local_18[0] = in_EAX;
        local_18->XPlotBlender<int>(iVar2 >> 3);
        field_10056 = local_18[0];
    }

    // 0x10017ec50
    void ClientInputHandler::ResetOnLogin() {
        field_2024 = 0;
        ResetMouseWatchClick();
    }

    // 0x10017ec70
    void ClientInputHandler::ResetMouseWatchClick() {
        int in_EAX;
        int local_18[2];

        local_18[0] = in_EAX;
        local_18->XPlotBlender<int>(4294967295);
        field_1996 = local_18[0];
        field_1992 = local_18[0];
        field_2000 = -1;
        field_2004 = -1;
    }

    // 0x10017ecb0
    void ClientInputHandler::RequestMinimenuBuild() {
        unsigned int* puVar2 = &field_64[0];
        unsigned int uVar1 = *puVar2;
        puVar2 = &field_80[0];
        SetMinimenuBuildCoords((CoordType<UICoordSpecializer>*)(unsigned long)uVar1,
                               (CoordType<UICoordSpecializer>*)(unsigned long)*puVar2);
    }

    // 0x10017ecf0
    void ClientInputHandler::SetMinimenuBuildCoords(CoordType<UICoordSpecializer> coordType1,
                                                    CoordType<UICoordSpecializer> coordType2) {
        m_minimenuBuildCoords = (int)coordType1;
        field_100 = (int)coordType2;
    }

    // 0x10017ed10
    void ClientInputHandler::ServicePreDispatch() {
        uint8_t* puVar1;

        field_112 = 0;
        m_keysDown->clear();
        m_pKeysUp->clear();
        field_110 = 0;
        ResetMouseWatchClick();
        unsigned long arg1 = 0;
        do {
            puVar1 = &field_10168[arg1];
            *puVar1 = 0;
            puVar1 = &field_10276[arg1];
            *puVar1 = 0;
            arg1 = arg1 + 1;
        } while (arg1 != 108);
        if ((field_8 | 2) == 10) {
            SetCurrentAction(17);
        }
    }

    // 0x10017edc0
    void ClientInputHandler::SetCurrentAction(ClientInputHandler::InputAction inputAction) {
        bool cVar1;
        unsigned long in_RAX;
        unsigned int* puVar3;

        unsigned long local_28 = in_RAX;
        auto pCVar2 = Client::Instance();
        field_12 = field_8;
        field_8 = inputAction;
        if (inputAction == 4) {
            cVar1 = PrimaryOpOnPress();
            if ((cVar1) || (field_20 == 0)) {
                field_8 = 5;
            }
        } else if (inputAction == 17) {
            local_28.XPlotBlender<int>(4294967295);
            cVar1 = field_10040 != ((local_28 & 4294967295));
            if (!cVar1) {
                ResetMinimenuBuildCoords();
            } else {
                SetMinimenuBuildCoords((CoordType<UICoordSpecializer>*)(unsigned long)field_10040,
                                       (CoordType<UICoordSpecializer>*)(unsigned long)field_10044);
                puVar3 = &field_64[0];
                *puVar3 = field_10040;
                puVar3 = &field_80[0];
                *puVar3 = field_10044;
            }
            field_10036 = 0;
            CheckMoveToRest();
        } else if (inputAction == 12) {
            puVar3 = &field_64[(long)(int)field_10032];
            pCVar2->field_53132 = *puVar3;
            puVar3 = &field_80[(long)(int)field_10032];
            pCVar2->field_53136 = *puVar3;
        }
    }

    // 0x10017eee0
    void ClientInputHandler::ResetDragAction() {
        field_107 = false;
        field_108 = '\0';
        field_109 = 0;
        field_10048 = 0;
    }

    // 0x10017ef10
    void ClientInputHandler::ResetMinimenuBuildCoords() {
        int local_20[2];
        int local_18[2];

        local_20->XPlotBlender<int>(4294967295);
        m_minimenuBuildCoords = local_20[0];
        local_18->XPlotBlender<int>(4294967295);
        field_100 = local_18[0];
    }

    // 0x10017ef70
    void ClientInputHandler::AdvanceBuildingMinimenuState() {
        unsigned long long uVar1;
        bool cVar2;
        int iVar3;
        unsigned long long uVar4;
        Client* pCVar5;
        InputAction inputAction;

        if (field_8 == 1) {
            ResetMinimenuBuildCoords();
            cVar2 = PrimaryOpOnPress();
            if ((cVar2) && (field_10048 == '\0')) {
                TrySwitchToDrag(0, field_107);
                if ((field_8 == 9) || (field_8 == 7)) {
                    field_10048 = 1;
                    return;
                }
            }
            if (field_10048 == '\0') {
                cVar2 = PrimaryOpOnPress();
                if ((!cVar2) && (field_20 != 0)) {
                    if (field_106 == '\0') {
                        return;
                    }
                    if (field_20 != 1) {
                        return;
                    }
                    uVar4 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
                    uVar1 = field_24;
                    pCVar5 = Client::Instance();
                    iVar3 = ((GameOptions*)pCVar5->field_8384.operator->())->GetMinimenuLongPressTime();
                    if (uVar4 < (long)iVar3 + uVar1) {
                        return;
                    }
                    if (field_10036 == '\0') {
                        inputAction = 4;
                    } else {
                        inputAction = 17;
                    }
                } else {
                    inputAction = 2;
                }
                SetCurrentAction(inputAction);
            } else {
                TrySwitchToDrag(0, field_107);
            }
        }
    }

    // 0x10017f070
    void ClientInputHandler::TrySwitchToDrag(unsigned long long arg1, bool arg2) {
        bool cVar1;
        InputAction inputAction;

        auto pCVar3 = Client::Instance();
        int iVar2 = ((GameOptions*)pCVar3->field_8384.operator->())->GetMinimenuLongPressTime();
        float fVar4 = (float)eastl::min<float>(150.0, (float)iVar2 * 0.6666667f);
        if (field_109 != '\0') {
            cVar1 = PrimaryOpOnPress();
            inputAction = 7;
            if (((cVar1) || (field_108 == '\0')) || ((long)(int)fVar4 + field_24 <= arg1))
                goto LAB_10017f10c;
        }
        if (field_108 != '\0') {
            cVar1 = PrimaryOpOnPress();
            inputAction = 9;
            if (!cVar1)
                goto LAB_10017f10c;
        }
        inputAction = (unsigned int)!arg2 * 5 + 12;
    LAB_10017f10c:
        SetCurrentAction(inputAction);
    }

    // 0x10017f170
    uint64_t ClientInputHandler::PointerPress(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {
        InputAction IVar1;
        bool cVar2;
        unsigned int uVar5;
        unsigned int* puVar7;
        Logger* this_04;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<rs2lib::IfType>* this_05;
        long lVar8;
        uint32_t in_register_00000014;
        double dVar9;
        uint8_t local_40[8];
        unsigned int local_38;

        auto this_00 = Client::Instance();
        local_38.destruct<highlight::NpcUID*>();
        local_40->destruct<highlight::NpcUID*>();
        auto this_01 = Client::Instance();
        auto this_02 = this_01->GetMemoryCache();
        ((NXTPixScreen*)this_02->GetScreen())->UICoordFromWindowCoord(arg3, arg4, local_38, *local_40);
        if (3 < arg1) {
            return 1;
        }
        if ((int)field_16 < arg1) {
            return 1;
        }
        if (arg1 == 0) {
            field_24 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        }
        if (field_16 == arg1) {
            field_16 = field_16 + 1;
            puVar7 = &field_32[(unsigned long)arg1];
            *puVar7 = local_38;
            puVar7 = &field_48[(unsigned long)arg1];
            *puVar7 = local_40._0_4_;
        }
        unsigned int uVar4 = field_20 + 1;
        if ((int)field_16 <= (int)field_20) {
            uVar4 = field_16;
        }
        field_20 = uVar4;
        puVar7 = &field_64[(unsigned long)arg1];
        *puVar7 = local_38;
        puVar7 = &field_80[(unsigned long)arg1];
        *puVar7 = local_40._0_4_;
        if (0 < arg2) {
            field_10384 = field_10384 | arg2;
        }
        if ((field_16 == 1) || (cVar2 = PrimaryOpOnPress(), cVar2)) {
            *(unsigned int*)&this_00->field_19056 = local_38;
            *(uint32_t*)&this_00->field_19060 = local_40._0_4_;
            if ((arg2 == 1) || ((arg1 == 0 && (this_00->field_8425 != false)))) {
                field_110 = 1;
            }
            this_04 = logger::default_logger();
            uVar4 = local_38.GetX();
            uVar5 = local_40->GetX();
            this_04->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ClientInputHandler.cpp",
                         282,
                         "pointer:%i buttonType:%i uiX: %i uiY:%i numPointersCurrent: %i Total:%i currentAction:%i",
                         (unsigned long)(unsigned int)arg1, (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2),
                         (unsigned long)uVar4, (unsigned long)uVar5, (unsigned long)field_20, (unsigned long)field_16,
                         (unsigned long)field_8);
            switch (field_8) {
            case 0:
            case 12:
            case 17:
                if ((arg2 != 4) || (this_00->field_19105 == '\0')) {
                    cVar2 = this_00->Frozen();
                    if (cVar2) {
                        return 1;
                    }
                    SetMinimenuBuildCoords((CoordType<UICoordSpecializer>*)(unsigned long)local_38,
                                           (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_40._0_4_);
                    if (arg2 == 2) {
                        SetCurrentAction(4);
                        this_00->field_52344->field_1 = 1;
                    } else {
                        SetCurrentAction(1);
                    }
                    RecordMouseWatchClick((CoordType<UICoordSpecializer>*)(unsigned long)local_38,
                                          (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_40._0_4_,
                                          arg5, arg2 == 2);
                    return 1;
                }
                break;
            default:
                goto switchD_10017f347_caseD_1;
            case 5:
                if ((arg2 == 1) && (cVar2 = this_00->Frozen(), !cVar2)) {
                    SetCurrentAction(2);
                    return 1;
                }
                if (arg2 != 4) {
                    return 1;
                }
                if (this_00->field_19105 == '\0') {
                    return 1;
                }
            }
            SetCurrentAction(12);
        } else {
            if (field_16 != 2) {
                return 1;
            }
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)this_00->GetInterfaceInteraction();
            if (*midiPlayerMainThread != nullptr) {
                this_05 = (shared_ptr<rs2lib::IfType>*)this_00->GetInterfaceInteraction();
                lVar8 = (*this_05).operator->();
                if (*(int*)(lVar8 + 20) == 1338) {
                    SetCurrentAction(14);
                }
            }
            IVar1 = field_8;
            if (1 < IVar1) {
                if (IVar1 == 14) {
                    cVar2 = this_00->Frozen();
                    if (!cVar2) {
                        SetCurrentAction(15);
                        dVar9 = (double)GetPointerLastDistance(0, 1);
                        field_10440 = dVar9;
                        field_10432 = dVar9;
                        return 1;
                    }
                    return 1;
                }
                if (IVar1 != 12) {
                    return 1;
                }
            }
            SetCurrentAction(13);
            dVar9 = (double)GetPointerLastDistance(0, 1);
            field_10400 = dVar9;
            field_10392 = dVar9;
            field_10408 = GetPointerLastAngle(0, 1);
            dVar9 = (double)log<short>(this_00->field_52712);
            field_10416 = dVar9 / Client::VIEWPORT_FOV_EXPONENT_BASE_LOG;
            field_10424 = this_00->field_53112;
        }
    switchD_10017f347_caseD_1:
        return 1;
    }

    // 0x10017f5c0
    void ClientInputHandler::RecordMouseWatchClick(CoordType<UICoordSpecializer> coordType1,
                                                   CoordType<UICoordSpecializer> coordType2, unsigned long long arg3,
                                                   bool arg4) {
        field_1992 = (int)coordType1;
        field_1996 = (int)coordType2;
        field_2016 = arg3;
        field_2008 = arg4;
    }

    // 0x10017f630
    void ClientInputHandler::GetPointerLastDistance(int arg1, int arg2) {
        CoordMapSquare local_40;

        CoordType<UICoordSpecializer>* pCVar1 = &field_64[(long)arg1];
        unsigned int* puVar2 = &field_64[(long)arg2];
        local_40.m_x = *pCVar1 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar2);
        int arg1_00 = local_40.GetX();
        pCVar1 = &field_80[(long)arg1];
        puVar2 = &field_80[(long)arg2];
        local_40._8_4_ = *pCVar1 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar2);
        int arg2_00 = local_40.field_8.GetX();
        hypot<int, int>(arg1_00, arg2_00);
    }

    // 0x10017f6d0
    void ClientInputHandler::GetPointerLastAngle(int arg1, int arg2) {
        CoordMapSquare local_40;

        CoordType<UICoordSpecializer>* pCVar1 = &field_64[(long)arg1];
        unsigned int* puVar2 = &field_64[(long)arg2];
        local_40.m_x = *pCVar1 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar2);
        int arg1_00 = local_40.GetX();
        pCVar1 = &field_80[(long)arg1];
        puVar2 = &field_80[(long)arg2];
        local_40._8_4_ = *pCVar1 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar2);
        int arg2_00 = local_40.field_8.GetX();
        atan2<int, int>(arg1_00, arg2_00);
    }

    // 0x10017f780
    uint64_t ClientInputHandler::PointerRelease(int arg1, int arg2, int arg3, int arg4, unsigned long long arg5) {
        unsigned int uVar1;
        uint32_t* puVar3;
        InputAction inputAction;
        uint32_t local_48[2];
        uint32_t local_40[2];
        unsigned int local_38[2];

        auto this_00 = Client::Instance();
        local_48->destruct<highlight::NpcUID*>();
        local_40->destruct<highlight::NpcUID*>();
        auto this_01 = this_00->GetMemoryCache();
        ((NXTPixScreen*)this_01->GetScreen())->UICoordFromWindowCoord(arg3, arg4, *local_48, *local_40);
        if (3 < arg1) {
            return 1;
        }
        if (field_20 == 0) {
            return 1;
        }
        field_20 = field_20 - 1;
        if (arg1 == 0) {
            *(uint32_t*)&this_00->field_19064 = local_48[0];
            *(uint32_t*)&this_00->field_19068 = local_40[0];
            uVar1 = field_20;
        } else {
            uVar1 = field_20;
        }
        if (uVar1 != 0)
            goto switchD_10017f851_caseD_1;
        switch (field_8 - 1) {
        default:
            goto switchD_10017f851_caseD_1;
        case 3:
            inputAction = 5;
            break;
        case 4:
            if (PrimaryOpOnPress() != '\0')
                goto switchD_10017f851_caseD_1;
            puVar3 = &field_64[(long)arg1];
            *puVar3 = local_48[0];
            puVar3 = &field_80[(long)arg1];
            *puVar3 = local_40[0];
        case 0:
        case 5:
            inputAction = 2;
            break;
        case 6:
            inputAction = 8;
            break;
        case 8:
            inputAction = 10;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
            inputAction = 17;
            break;
        case 16:
            CheckMoveToRest();
            goto switchD_10017f851_caseD_1;
        }
        SetCurrentAction(inputAction);
    switchD_10017f851_caseD_1:
        if (field_20 == 1) {
            if (field_8 == 13) {
                field_10032 = (unsigned int)(arg1 == 0);
                SetCurrentAction(12);
            }
            if (field_8 == 15) {
                local_38->XPlotBlender<int>(4294967295);
                field_10040 = local_38[0];
                local_38->XPlotBlender<int>(4294967295);
                field_10044 = local_38[0];
                SetCurrentAction(17);
            }
        }
        if (0 < arg2) {
            field_10384 = field_10384 & ~arg2;
        }
        return 1;
    }

    // 0x10017f9a0
    uint64_t ClientInputHandler::PointerDrag(int arg1, int arg2, int arg3, unsigned long long arg4) {
        uint8_t* this_00;
        int* piVar1;
        unsigned int uVar2;
        bool cVar3;
        int iVar4;
        unsigned int uVar5;
        unsigned long long arg1_00;
        unsigned int* puVar6;
        unsigned int* puVar7;
        Logger* pLVar8;
        uint64_t uVar9;
        double dVar10;
        uint8_t local_48[8];
        uint8_t local_40[8];
        unsigned int local_38;

        auto this_01 = Client::Instance();
        local_40->destruct<highlight::NpcUID*>();
        local_38.destruct<highlight::NpcUID*>();
        auto this_02 = this_01->GetMemoryCache();
        ((NXTPixScreen*)this_02->GetScreen())->UICoordFromWindowCoord(arg2, arg3, *local_40, local_38);
        if (arg1 < 4) {
            arg1_00 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            this_00 = &field_80;
            puVar6 = (unsigned int*)(*this_00)[(long)arg1];
            uVar2 = *puVar6;
            if (field_16 == 1) {
                puVar7 = &field_64[0];
                local_48._0_4_ = *local_40 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar7);
                iVar4 = local_48->GetX();
                field_10504->AddSample((long)iVar4);
                puVar7 = (unsigned int*)(*this_00)[0];
                local_48._0_4_ = local_38 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar7);
                iVar4 = local_48->GetX();
                field_10448->AddSample((long)iVar4);
            }
            puVar7 = &field_64[(long)arg1];
            *puVar7 = local_40._0_4_;
            *puVar6 = local_38;
            if (field_20 == 2) {
                if (field_8 == 15) {
                    dVar10 = (double)GetPointerLastDistance(0, 1);
                    iVar4 = (int)((dVar10 - field_10440) * 0.2);
                    field_10440 = (double)(iVar4 * 5) + field_10440;
                    pLVar8 = logger::default_logger();
                    uVar9 = local_40->GetX();
                    uVar5 = local_38.GetX();
                    pLVar8->Log(false, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ClientInputHandler.cpp",
                                567, "[MINIMAP_PINCH_MODE] - pinchMode uiX:%i uiY:%i currentAction:%i", uVar9,
                                (unsigned long)uVar5, (unsigned long)field_8);
                    piVar1 = (int*)((long)&this_01->field_53148 + 4);
                    *piVar1 = *piVar1 - iVar4;
                } else if (field_8 == 13) {
                    dVar10 = (double)GetPointerLastDistance(0, 1);
                    iVar4 = (int)((dVar10 - field_10400) * 0.2);
                    field_10400 = (double)(iVar4 * 5) + field_10400;
                    pLVar8 = logger::default_logger();
                    uVar9 = local_40->GetX();
                    uVar5 = local_38.GetX();
                    pLVar8->Log(false, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ClientInputHandler.cpp",
                                539, "[CAMERA_PINCH_MODE] - pinchMode uiX:%i uiY:%i currentAction:%i", uVar9,
                                (unsigned long)uVar5, (unsigned long)field_8);
                    *(int*)&this_01->field_53144 = *(int*)&this_01->field_53144 - iVar4;
                }
            }
            if (arg1 == 0) {
                RecordMouseWatchMove((CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_40._0_4_,
                                     (CoordType<UICoordSpecializer>*)(unsigned long)local_38, arg4);
                cVar3 = PrimaryOpOnPress();
                if ((cVar3) && (field_8 == 12)) {
                    puVar6 = &field_64[0];
                    *puVar6 = local_40._0_4_;
                    puVar6 = (unsigned int*)(*this_00)[0];
                    *puVar6 = local_38;
                    SetMinimenuBuildCoords((CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_40._0_4_,
                                           (CoordType<UICoordSpecializer>*)(unsigned long)local_38);
                }
                if (((field_16 == 1) && (field_24 <= arg1_00)) &&
                    (cVar3 = IsDragDeadZoneExceeded(
                         (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_40._0_4_,
                         (CoordType<UICoordSpecializer>*)(unsigned long)local_38),
                     cVar3)) {
                    field_10048 = 1;
                    switch (field_8) {
                    case 1:
                        if (field_110 == '\0') {
                            TrySwitchToDrag(arg1_00, field_107);
                        }
                        break;
                    case 4:
                        SetCurrentAction(5);
                        break;
                    case 6:
                        SetCurrentAction(17);
                        break;
                    case 11:
                        local_48._0_4_ = local_38 - ((CoordType<UICoordSpecializer>*)(unsigned long)uVar2);
                        iVar4 = local_48->GetX();
                        this_01->field_53140 = iVar4;
                    }
                }
            }
        }
        return 1;
    }

    // 0x10017fe50
    void ClientInputHandler::RecordMouseWatchMove(CoordType<UICoordSpecializer> coordType1,
                                                  CoordType<UICoordSpecializer> coordType2, unsigned long long arg3) {
        unsigned long* puVar2;

        unsigned int uVar1 = field_2024;
        if (0 < (int)uVar1) {
            puVar2 = &field_6032[(unsigned long)(uVar1 - 1)];
            if (arg3 / 50 == *puVar2 / 50) {
                field_2024 = uVar1 - 1;
                goto LAB_10017fee3;
            }
        }
        if (499 < (int)uVar1) {
            return;
        }
    LAB_10017fee3:
        uint32_t* puVar3 = &field_2028[(long)(int)field_2024];
        *puVar3 = (int)coordType1;
        puVar3 = &field_4028[(long)(int)field_2024];
        *puVar3 = (int)coordType2;
        uVar1 = field_2024;
        unsigned long long* puVar4 = &field_6032[(long)(int)uVar1];
        *puVar4 = arg3;
        field_2024 = uVar1 + 1;
    }

    // 0x10017ff50
    unsigned long ClientInputHandler::IsDragDeadZoneExceeded(CoordType<UICoordSpecializer> coordType1,
                                                             CoordType<UICoordSpecializer> coordType2) {
        uint64_t unaff_R14;
        uint32_t local_38[2];
        uint32_t local_30[2];

        local_30[0] = (uint32_t)coordType2;
        local_38[0] = (uint32_t)coordType1;
        CoordType<UICoordSpecializer>* pCVar3 = &field_32[0];
        unsigned int uVar2 = *pCVar3 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_10056);
        bool cVar1 = CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_38,
                                                              (CoordType<UICoordSpecializer>*)(unsigned long)uVar2);
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (!cVar1) {
            uVar2 = *pCVar3 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_10056);
            cVar1 = *local_38 > ((CoordType<UICoordSpecializer>*)(unsigned long)uVar2);
            if (!cVar1) {
                pCVar3 = &field_48[0];
                uVar2 = *pCVar3 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_10056);
                cVar1 = CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_30,
                                                                 (CoordType<UICoordSpecializer>*)(unsigned long)uVar2);
                if (!cVar1) {
                    uVar2 = *pCVar3 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_10056);
                    uVar2 = *local_30 > ((CoordType<UICoordSpecializer>*)(unsigned long)uVar2);
                    uVar4 = (unsigned long)uVar2;
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100180020
    uint64_t ClientInputHandler::MouseMove(int arg1, int arg2, unsigned long long arg3) {
        bool cVar3;
        unsigned int local_40[2];
        unsigned int local_38[2];

        local_40->destruct<highlight::NpcUID*>();
        local_38->destruct<highlight::NpcUID*>();
        auto this_00 = Client::Instance();
        auto this_01 = this_00->GetMemoryCache();
        ((NXTPixScreen*)this_01->GetScreen())->UICoordFromWindowCoord(arg1, arg2, *local_40, *local_38);
        unsigned int uVar1 = local_40[0];
        field_10040 = local_40[0];
        unsigned int* puVar4 = &field_64[0];
        unsigned int uVar2 = local_38[0];
        *puVar4 = uVar1;
        field_10044 = local_38[0];
        puVar4 = &field_80[0];
        *puVar4 = uVar2;
        RecordMouseWatchMove((CoordType<UICoordSpecializer>*)(unsigned long)local_40[0],
                             (CoordType<UICoordSpecializer>*)(unsigned long)local_38[0], arg3);
        switch (field_8) {
        case 0:
        case 12:
            SetMinimenuBuildCoords((CoordType<UICoordSpecializer>*)(unsigned long)local_40[0],
                                   (CoordType<UICoordSpecializer>*)(unsigned long)local_38[0]);
            break;
        case 1:
            cVar3 = IsMouseButtonPressed(1);
            if (((cVar3) && (field_110 == '\0')) &&
                (cVar3 = IsDragDeadZoneExceeded((CoordType<UICoordSpecializer>*)(unsigned long)local_40[0],
                                                (CoordType<UICoordSpecializer>*)(unsigned long)local_38[0]),
                 cVar3)) {
                TrySwitchToDrag(SystemTimer::GetTimeMS<std::chrono::steady_clock>(), false);
            }
            break;
        case 4:
            SetCurrentAction(5);
        }
        return 1;
    }

    // 0x100180180
    bool ClientInputHandler::IsMouseButtonPressed(int arg1) {
        return (arg1 & ~field_10384) == 0;
    }

    // 0x1001801a0
    uint64_t ClientInputHandler::PointerCancel(int arg1, int arg2, unsigned long long arg3) {
        ResetState();
        return 1;
    }

    // 0x1001801b0
    uint64_t ClientInputHandler::KeyPressed(int arg1, unsigned long long arg2) {
        uint8_t* puVar3;

        auto pCVar1 = Client::Instance();
        KeyRepeat((int)this, (unsigned long long)arg1);
        char* pcVar2 = &field_10060[(unsigned long)arg1];
        if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
            puVar3 = &field_10168[(unsigned long)arg1];
            *puVar3 = 1;
            puVar3 = &field_10276[(unsigned long)arg1];
            *puVar3 = 0;
            m_keysDown->push_back(arg1);
        }
        if ((1 < pCVar1->field_53260) && (arg1 == 66)) {
            pcVar2 = &field_10060[82];
            if (*pcVar2 != '\0') {
                Client::CopyToClipboard();
            }
        }
        return 1;
    }

    // 0x100180280
    uint8_t ClientInputHandler::KeyRepeat(int arg1, unsigned long long arg2) {
        int* piVar1;
        uint16_t* puVar2;

        unsigned long arg1_00 = field_112;
        if (arg1_00 < 128) {
            piVar1 = (int*)field_120[arg1_00];
            *piVar1 = arg1;
            puVar2 = &field_632[arg1_00];
            *puVar2 = 0;
            field_112 = arg1_00 + 1;
        }
        return 1;
    }

    // 0x100180300
    uint8_t ClientInputHandler::KeyReleased(int arg1, unsigned long long arg2) {
        uint8_t* puVar1 = &field_10060[(unsigned long)arg1];
        *puVar1 = 0;
        puVar1 = &field_10168[(unsigned long)arg1];
        *puVar1 = 0;
        puVar1 = &field_10276[(unsigned long)arg1];
        *puVar1 = 1;
        m_pKeysUp->push_back(arg1);
        return 1;
    }

    // 0x100180370
    uint8_t ClientInputHandler::KeyTyped(char16_t arg1, unsigned long long arg2) {
        uint32_t* puVar1;
        char16_t* pwVar2;

        unsigned long arg1_00 = field_112;
        if (arg1_00 < 128) {
            puVar1 = &field_120[arg1_00];
            *puVar1 = 4294967295;
            pwVar2 = &field_632[arg1_00];
            *pwVar2 = arg1;
            field_112 = arg1_00 + 1;
        }
        return 1;
    }

    // 0x1001803d0
    uint8_t ClientInputHandler::WheelScroll(int arg1, unsigned long long arg2) {
        return 1;
    }

    // 0x1001803e0
    uint8_t ClientInputHandler::KeyboardInputFocusChange(int arg1, unsigned long long arg2) {
        return 1;
    }

    // 0x1001803f0
    uint8_t ClientInputHandler::OnLowLevelMouseDown(int arg1, int arg2, int arg3, int arg4) {
        field_2000 = arg3;
        field_2004 = arg4;
        return 1;
    }

    // 0x100180410
    void ClientInputHandler::ResetState() {
        ResetPointers();
        CheckMoveToRest();
    }

    // 0x100180430
    void ClientInputHandler::ResetPointers() {
        unsigned int uVar1;
        unsigned int* puVar3;
        unsigned int local_38[2];

        local_38->XPlotBlender<int>(4294967295);
        field_10040 = local_38[0];
        local_38->XPlotBlender<int>(4294967295);
        field_10044 = local_38[0];
        field_16 = 0;
        field_20 = 0;
        field_10384 = 0;
        unsigned long arg1 = 0;
        do {
            local_38->XPlotBlender<int>(4294967295);
            puVar3 = &field_48[arg1];
            uVar1 = local_38[0];
            *puVar3 = local_38[0];
            puVar3 = &field_32[arg1];
            *puVar3 = uVar1;
            if (PrimaryOpOnPress() == '\0') {
                local_38->XPlotBlender<int>(4294967295);
                puVar3 = &field_80[arg1];
                uVar1 = local_38[0];
                *puVar3 = local_38[0];
                puVar3 = &field_64[arg1];
                *puVar3 = uVar1;
            }
            arg1 = arg1 + 1;
        } while (arg1 != 4);
    }

    // 0x100180540
    bool ClientInputHandler::IsDragging() const {
        unsigned int uVar1 = field_8 - 7;
        return (37U >> (uVar1 & 31) & 1) != 0 && uVar1 < 6;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10017ebb0: Error::Error(int) has the same machine code as oldscape::CoordType<oldscape::UICoordSpecializer>::CoordType(int)

} // namespace jag

namespace jag::graphics {
    // 0x10017ebb0: SortKeyLessThan::SortKeyLessThan(RenderPassType) has the same machine code as oldscape::CoordType<oldscape::UICoordSpecializer>::CoordType(int)

} // namespace jag::graphics
