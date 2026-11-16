// projects/osclient/client_UI.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "client.h"

namespace jag::oldscape {
    // 0x1000b7810
    void Client::SetMinimapZoom(int arg1) {
        world* world;

        auto this_00 = field_8152.operator->();
        world = (world*)field_19184.get();
        this_00->SetZoom(world, arg1, field_51984);
    }

    // 0x1000b7890
    void Client::RedrawMinimap() {
        ((Minimap*)field_8152.operator->())->Redraw();
    }

    // 0x1000b7970
    auto Client::FindClientObj(const rs2lib::CoordGrid& coordGrid, int arg2, int arg3) {
        uint8_t bVar2;
        list<console::Line>* this_00;
        shared_ptr<ClientObj>* this_01;
        long lVar3;
        uint64_t local_50;
        uint64_t local_48;
        ReturnValue* local_40;

        if (ClientConstants::IsCoordInBuildArea(coordGrid) != '\0') {
            local_40 = &result;
            this_00 = (list<console::Line>*)GetObjectsOnTile(coordGrid);
            local_50 = this_00->begin();
            local_48 = this_00->end();
            bVar2 = local_50 != local_48;
            if (bVar2 != 0) {
                do {
                    this_01 = (shared_ptr<ClientObj>*)*local_50;
                    lVar3 = (*this_01).operator->();
                    if ((*(int*)(lVar3 + 24) == arg2) &&
                        (lVar3 = (*this_01).operator->(), &result = local_40, *(int*)(lVar3 + 28) == arg3)) {
                        new (local_40) shared_ptr(this_01);
                        if ((bVar2 & 1) != 0) {
                            return result;
                        }
                        goto LAB_1000b7a4c;
                    }
                    ++local_50;
                    bVar2 = local_50 != local_48;
                } while (bVar2 != 0);
            }
            &result = local_40;
        }
    LAB_1000b7a4c:
        return auto();
    }

    // 0x1000f1610
    void Client::ExecuteHardcodedMouseEvent(const InterfaceMouseEvent& interfaceMouseEvent) {
        bool bVar1;
        bool cVar2;
        bool arg4;
        int iVar3;
        int iVar4;
        unsigned int uVar5;
        shared_ptr<configdecoder::ObjType>* objType;
        long lVar7;
        shared_ptr<ClientScript>* clientScript1;
        CRMViewHandler* this_01;
        shared_ptr<ApplicationContext>* this_02;
        long* plVar9;
        Logger* this_03;
        InputField* pIVar10;
        ServerConnection* pSVar11;
        Isaac* isaac;
        ShuffledPacket3* this_04;
        ShuffledPacket4* pSVar12;
        ShuffledPacket2* this_05;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_06;
        char* str2;
        uint8_t local_a8[64];
        shared_ptr<dash3d::Decor> local_68;
        shared_ptr<dash3d::Decor> local_58;
        InputField* local_48;
        SuperShuffledPacketFactory local_40;

        uint8_t* this_00 = &interfaceMouseEvent.field_16;
        long lVar6 = (*this_00).operator->();
        if (-1 < *(int*)(lVar6 + 8)) {
            local_68 = shared_ptr(this_00);
            objType = (shared_ptr<configdecoder::ObjType>*)GetInterfaceLayer(&local_68);
            bVar1 = *objType == nullptr;
            if (bVar1) {
                return;
            }
            lVar6 = (*objType).operator->();
            cVar2 = ((lVar6 + 2000))->empty();
            if (cVar2) {
                return;
            }
            lVar6 = (*this_00).operator->();
            iVar4 = *(int*)(lVar6 + 8);
            lVar6 = (*objType).operator->();
            iVar3 = ((lVar6 + 2000))->end();
            if (iVar3 <= iVar4) {
                return;
            }
            lVar6 = (*objType).operator->();
            lVar7 = (*this_00).operator->();
            clientScript1 = (shared_ptr<ClientScript>*)(*((lVar6 + 2000)))[(long)*(int*)(lVar7 + 8)];
            bVar1 = *clientScript1 != *this_00;
            if (bVar1) {
                return;
            }
        }
        lVar6 = (*this_00).operator->();
        iVar4 = *(int*)(lVar6 + 12);
        iVar3 = interfaceMouseEvent.field_8;
        IfType* pIVar8 = (IfType*)(*this_00).operator->();
        if ((iVar4 == 11) && (iVar3 == 0)) {
            this_01 = pIVar8->GetCRMViewHandler();
            if (this_01 != nullptr) {
                pIVar8 = (IfType*)(*this_00).operator->();
                cVar2 = pIVar8->IsInsideCRMClickBounds(*(int*)&interfaceMouseEvent.field_0,
                                                       *(int*)((long)&interfaceMouseEvent.field_0 + 4), 0, 0);
                if (cVar2) {
                    iVar4 = this_01->GetActionType();
                    if (iVar4 == 1) {
                        iVar4 = GetActive(*this_00);
                        cVar2 = rs2lib::ServerActive::IsCRMTarget(iVar4);
                        if (!cVar2) {
                            this_03 = logger::default_logger();
                            str2 = "Unable to perform IF_CRMVIEW_OP - Make sure to use if_setevents";
                            iVar4 = 3576;
                        } else {
                            cVar2 = this_01->GeneratePayloadData();
                            if (cVar2) {
                                pSVar11 = (ServerConnection*)field_19120.operator->();
                                isaac = pSVar11->GetOutgoingEncryption();
                                *local_a8 = shared::ClientMessage::MakeClientMessage(95, *isaac);
                                local_40 = SuperShuffledPacketFactory(*((local_a8 + 8)));
                                this_04 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                                iVar4 = this_01->GetPayload(1);
                                this_04->p4<unsigned int>(iVar4);
                                pSVar12 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                                lVar6 = (*this_00).operator->();
                                pSVar12->p4<unsigned int>(*(int*)(lVar6 + 4));
                                this_05 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                                lVar6 = (*this_00).operator->();
                                this_05->p2<int>(*(int*)(lVar6 + 8));
                                this_06 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)
                                    ShuffledPacketFactory::p2_alt2();
                                uVar5 = this_01->GetServerTarget();
                                this_06->p4<int>((unsigned long)uVar5);
                                pSVar12 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                                iVar4 = this_01->GetPayload(2);
                                pSVar12->p4<unsigned int>(iVar4);
                                pSVar12 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                                iVar4 = this_01->GetPayload(0);
                                pSVar12->p4<unsigned int>(iVar4);
                                pSVar11 = (ServerConnection*)field_19120.operator->();
                                pSVar11->SendClientMessage(*local_a8);
                                return;
                            }
                            this_03 = logger::default_logger();
                            str2 = "Unable to perform IF_CRMVIEW_OP - Invalid payload data";
                            iVar4 = 3580;
                        }
                    } else {
                        if (iVar4 != 0) {
                            return;
                        }
                        this_02 = (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)(this);
                        plVar9 = (long*)(*this_02).operator->();
                        *local_a8 = this_01->GetEndpointURL();
                        cVar2 = (**(void (**)(...))(*plVar9 + 192))(plVar9, (ReturnValue*)local_a8, 1);
                        if (cVar2) {
                            return;
                        }
                        this_03 = logger::default_logger();
                        str2 = "Unable to open CRM URL";
                        iVar4 = 3570;
                    }
                    this_03->Log(false, 3,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "client_UI.cpp",
                                 iVar4, str2);
                }
            }
        } else if (pIVar8->field_12 == 12) {
            pIVar8 = (IfType*)(*this_00).operator->();
            pIVar10 = (InputField*)pIVar8->GetInputField();
            cVar2 = pIVar10->CanHaveFocus();
            if (cVar2) {
                if (interfaceMouseEvent.field_8 == 1) {
                    pIVar8 = (IfType*)(*this_00).operator->();
                    pIVar10 = (InputField*)pIVar8->GetInputField();
                    pIVar10->MouseHeld(*(int*)&interfaceMouseEvent.field_0,
                                       *(int*)((long)&interfaceMouseEvent.field_0 + 4));
                } else if (interfaceMouseEvent.field_8 == 0) {
                    local_58 = shared_ptr(this_00);
                    field_19072->SetFocusedComponent(&local_58);
                    pIVar8 = (IfType*)(*this_00).operator->();
                    pIVar10 = (InputField*)pIVar8->GetInputField();
                    pIVar10->SetFocus(true);
                    pIVar8 = (IfType*)(*this_00).operator->();
                    local_48 = (InputField*)pIVar8->GetInputField();
                    iVar4 = *(int*)&interfaceMouseEvent.field_0;
                    iVar3 = *(int*)((long)&interfaceMouseEvent.field_0 + 4);
                    bVar1 = (bool)field_8496.KeyHeld(107);
                    arg4 = (bool)field_8496.KeyHeld(81);
                    local_48->MouseDown(iVar4, iVar3, bVar1, arg4);
                }
            }
        }
    }

    // 0x1000f1b40
    void Client::GlWorldMap() {
        int arg1;
        int iVar1;
        unsigned int uVar2;
        long lVar3;

        Worldmap* this_00 = m_pWorldmap;
        if (this_00 != nullptr) {
            arg1 = field_51984;
            lVar3 = field_52016.operator->();
            iVar1 = *(int*)(lVar3 + 24);
            uVar2 = field_53220;
            lVar3 = field_52016.operator->();
            this_00->UpdateMaparea(arg1, (iVar1 >> 7) + uVar2, (*(int*)(lVar3 + 28) >> 7) + field_53224, false);
            m_pWorldmap->Load();
        }
    }

    // 0x1000f1bc0
    void Client::LoopIf3Drag() {
        Minimenu* this_00;
        unsigned int uVar5;
        unsigned int uVar7;
        Logger* pLVar8;
        long lVar9;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ServerConnection* pSVar11;
        Isaac* isaac;
        ShuffledPacket3* this_02;
        ShuffledPacket2* this_03;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar12;
        ShuffledPacket4* pSVar13;
        uint8_t local_140[32];
        shared_ptr<rs2lib::IfType> local_120;
        shared_ptr<rs2lib::IfType> local_100;
        unsigned int local_c0[2];
        unsigned int local_b8[2];
        unsigned int local_b0[2];
        unsigned int local_a8[2];
        unsigned int local_a0[2];
        unsigned int local_98[2];
        unsigned int local_90[2];
        unsigned int local_88[2];
        unsigned int local_80[2];
        unsigned int local_78[2];
        SuperShuffledPacketFactory local_70;
        uint32_t local_60[2];
        uint8_t local_58[16];
        unsigned int local_48[2];
        unsigned int local_40[2];
        unsigned int local_38[2];

        bool cVar3 = field_52344->IsOpen();
        if (cVar3) {
            return;
        }
        if (field_54760 != '\0') {
            pLVar8 = logger::default_logger();
            lVar9 = field_2505104.operator->();
            pLVar8->Log(
                false, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                3687, "loop_if3drag: %i", *(uint32_t*)(lVar9 + 88));
        }
        uint8_t* ifType = &field_2505104;
        ComponentUpdated(*ifType);
        unsigned int* puVar10 = &field_8560[0];
        local_40[0] = *puVar10;
        puVar10 = &field_8576[0];
        local_38[0] = *puVar10;
        *local_40 -= ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505136);
        *local_38 -= ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505140);
        local_140._0_4_ = *local_40 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505164);
        uint8_t* puVar1 = &field_2505120;
        lVar9 = (*puVar1).operator->();
        local_c0->XPlotBlender<int>(*(ResultType*)(lVar9 + 96));
        local_58._0_4_ = *local_140 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_c0[0]);
        local_140._0_4_ = *local_38 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505168);
        lVar9 = (*puVar1).operator->();
        local_b8->XPlotBlender<int>(*(ResultType*)(lVar9 + 100));
        local_58._8_4_ = *local_140 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_b8[0]);
        int iVar6 = field_2505188;
        field_2505188 = iVar6 + 1;
        int iVar2 = field_8504;
        if (iVar2 == 1) {
            return;
        }
        if (iVar2 == 8) {
            if (field_2505184 == '\0') {
                cVar3 = IsMiniMenuOpenRequired();
                this_00 = field_52344;
                if (!cVar3) {
                    iVar6 = this_00->GetNumEntries();
                    if (0 < iVar6) {
                        uVar5 = field_2505136 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505176);
                        uVar7 = field_2505140 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505180);
                        DoStashed((CoordType<UICoordSpecializer>*)(unsigned long)uVar5,
                                  (CoordType<UICoordSpecializer>*)(unsigned long)uVar7);
                    }
                } else {
                    uVar5 = field_2505136 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505176);
                    uVar7 = field_2505140 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505180);
                    this_00->Open((CoordType<UICoordSpecializer>*)(unsigned long)uVar5,
                                  (CoordType<UICoordSpecializer>*)(unsigned long)uVar7);
                }
            } else {
                lVar9 = (*ifType).operator->();
                cVar3 = ((lVar9 + 1048))->empty();
                if (!cVar3) {
                    new (local_140) HookReq();
                    local_120 = *ifType;
                    local_120._16_4_ = local_58->GetX();
                    local_120._20_4_ = ((local_58 + 8))->GetX();
                    local_100 = field_2505144;
                    lVar9 = (*ifType).operator->();
                    *local_140 = (*((lVar9 + 1048)));
                    ScriptRunner::ExecuteScript(*local_140, 500000);
                }
                puVar1 = &field_2505144;
                if (*puVar1 != nullptr) {
                    midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)ServerDraggable(*ifType);
                    if (*midiPlayerMainThread != nullptr) {
                        pSVar11 = (ServerConnection*)field_19120.operator->();
                        isaac = pSVar11->GetOutgoingEncryption();
                        *local_140 = shared::ClientMessage::MakeClientMessage(93, *isaac);
                        local_70 = SuperShuffledPacketFactory(*((local_140 + 8)));
                        this_02 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                        lVar9 = (*ifType).operator->();
                        this_02->p4<unsigned int>(*(int*)(lVar9 + 4));
                        this_03 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                        lVar9 = (*puVar1).operator->();
                        this_03->p4<unsigned int>(*(int*)(lVar9 + 4));
                        pPVar12 =
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                        lVar9 = (*ifType).operator->();
                        pPVar12->p2<int>(*(unsigned int*)(lVar9 + 8));
                        pPVar12 =
                            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                        lVar9 = (*puVar1).operator->();
                        pPVar12->p2<int>(*(unsigned int*)(lVar9 + 1984));
                        pSVar13 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                        lVar9 = (*puVar1).operator->();
                        pSVar13->p2<int>(*(int*)(lVar9 + 8));
                        pSVar13 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                        lVar9 = (*ifType).operator->();
                        pSVar13->p2<int>(*(int*)(lVar9 + 1984));
                        pSVar11 = (ServerConnection*)field_19120.operator->();
                        pSVar11->SendClientMessage(*local_140);
                    }
                }
            }
            new (local_140) shared_ptr();
            *ifType = *local_140;
        } else {
            if (iVar2 == 7) {
                if ((field_2505172 == 0) || (field_2505160 == 0)) {
                    if (iVar6 < 1) {
                        return;
                    }
                    if (field_54760 != '\0') {
                        pLVar8 = logger::default_logger();
                        pLVar8->Log(false, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_UI.cpp",
                                    3714, "Aborting: dragcom_found: %d draglayer_found: %d if3_dragtime: %d",
                                    (unsigned int)field_2505172, (unsigned int)field_2505160, field_2505188);
                    }
                    new (local_140) shared_ptr();
                    *ifType = *local_140;
                    if (field_2505184 != '\0') {
                        return;
                    }
                    iVar6 = field_52344->GetNumEntries();
                    if (iVar6 < 1) {
                        return;
                    }
                    uVar5 = field_2505136 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505176);
                    uVar7 = field_2505140 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505180);
                    DoStashed((CoordType<UICoordSpecializer>*)(unsigned long)uVar5,
                              (CoordType<UICoordSpecializer>*)(unsigned long)uVar7);
                    return;
                }
                cVar3 = CoordType<UICoordSpecializer>::operator<(
                    (CoordType<UICoordSpecializer>*)local_40,
                    (CoordType<UICoordSpecializer>*)(unsigned long)field_2505164);
                if (cVar3) {
                    local_40[0] = field_2505164;
                }
                lVar9 = (*ifType).operator->();
                local_b0->XPlotBlender<int>(*(ResultType*)(lVar9 + 72));
                local_140._0_4_ = *local_40 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_b0[0]);
                lVar9 = (*puVar1).operator->();
                local_a8->XPlotBlender<int>(*(ResultType*)(lVar9 + 72));
                uVar5 = field_2505164 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_a8[0]);
                cVar3 = *local_140 > ((CoordType<UICoordSpecializer>*)(unsigned long)uVar5);
                if (cVar3) {
                    lVar9 = (*puVar1).operator->();
                    iVar6 = *(int*)(lVar9 + 72);
                    lVar9 = (*ifType).operator->();
                    local_a0->XPlotBlender<int>(iVar6 - *(int*)(lVar9 + 72));
                    local_40[0] = field_2505164 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_a0[0]);
                }
                cVar3 = CoordType<UICoordSpecializer>::operator<(
                    (CoordType<UICoordSpecializer>*)local_38,
                    (CoordType<UICoordSpecializer>*)(unsigned long)field_2505168);
                if (cVar3) {
                    local_38[0] = field_2505168;
                }
                lVar9 = (*ifType).operator->();
                local_98->XPlotBlender<int>(*(ResultType*)(lVar9 + 76));
                local_140._0_4_ = *local_38 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_98[0]);
                lVar9 = (*puVar1).operator->();
                local_90->XPlotBlender<int>(*(ResultType*)(lVar9 + 76));
                uVar5 = field_2505168 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_90[0]);
                cVar3 = *local_140 > ((CoordType<UICoordSpecializer>*)(unsigned long)uVar5);
                if (cVar3) {
                    lVar9 = (*puVar1).operator->();
                    iVar6 = *(int*)(lVar9 + 76);
                    lVar9 = (*ifType).operator->();
                    local_88->XPlotBlender<int>(iVar6 - *(int*)(lVar9 + 76));
                    local_38[0] = field_2505168 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_88[0]);
                }
                local_70.field_0._0_4_ = *local_40 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505176);
                local_60[0] = *local_38 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505180);
                lVar9 = (*ifType).operator->();
                local_48->XPlotBlender<int>(*(ResultType*)(lVar9 + 776));
                iVar6 = field_2505188;
                lVar9 = (*ifType).operator->();
                if (*(int*)(lVar9 + 780) < iVar6) {
                    cVar3 = local_70 > ((CoordType<UICoordSpecializer>*)(unsigned long)local_48[0]);
                    if (!cVar3) {
                        uVar5 = -*local_48;
                        cVar3 = CoordType<UICoordSpecializer>::operator<(
                            (CoordType<UICoordSpecializer>*)&local_70,
                            (CoordType<UICoordSpecializer>*)(unsigned long)uVar5);
                        if ((!cVar3) &&
                            (cVar3 = *local_60 > ((CoordType<UICoordSpecializer>*)(unsigned long)local_48[0]),
                             !cVar3)) {
                            uVar5 = -*local_48;
                            cVar3 = CoordType<UICoordSpecializer>::operator<(
                                (CoordType<UICoordSpecializer>*)local_60,
                                (CoordType<UICoordSpecializer>*)(unsigned long)uVar5);
                            if (!cVar3)
                                goto LAB_1000f1fbd;
                        }
                    }
                    if (field_2505184 == '\0') {
                        cVar3 = ((GameOptions*)field_8384.operator->())->GetHapticOnDrag();
                        if (cVar3) {
                            Vibrate(4);
                        }
                    }
                    field_2505184 = 1;
                }
            LAB_1000f1fbd:
                local_140._0_4_ = *local_40 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505164);
                lVar9 = (*puVar1).operator->();
                local_80->XPlotBlender<int>(*(ResultType*)(lVar9 + 96));
                local_58._0_4_ = *local_140 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_80[0]);
                local_140._0_4_ = *local_38 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505168);
                lVar9 = (*puVar1).operator->();
                local_78->XPlotBlender<int>(*(ResultType*)(lVar9 + 100));
                local_58._8_4_ = *local_140 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_78[0]);
                lVar9 = (*ifType).operator->();
                cVar3 = ((lVar9 + 1024))->empty();
                if (cVar3) {
                    return;
                }
                if (field_2505184 == '\0') {
                    return;
                }
                new (local_140) HookReq();
                local_120 = *ifType;
                local_120._16_4_ = local_58->GetX();
                local_120._20_4_ = ((local_58 + 8))->GetX();
                lVar9 = (*ifType).operator->();
                *local_140 = (*((lVar9 + 1024)));
                ScriptRunner::ExecuteScript(*local_140, 500000);
                return;
            }
            new (local_140) shared_ptr();
            *ifType = *local_140;
        }
    }

    // 0x1000f2510
    void Client::GlIf3DragContents() {
        shared_ptr<rs2lib::IfType>* this_00;
        int iVar2;
        int iVar3;
        int iVar4;
        unsigned int uVar6;
        uint32_t uVar7;
        long lVar8;
        CoordType<UICoordSpecializer>* pCVar9;
        unsigned int* puVar10;
        unsigned int local_50[2];
        unsigned int local_48[2];

        if (field_2505224 == '\0') {
            local_40 = shared_ptr();
            (*((field_2505204 + 4))) = local_40;
            goto LAB_1000f25c7;
        }
        int iVar1 = field_8504;
        if (iVar1 == 1) {
            lVar8 = (*((field_2505204 + 4))).operator->();
            local_40.XPlotBlender<int>(*(ResultType*)(lVar8 + 96));
            field_2505228 = local_40.m_x;
            lVar8 = (*((field_2505204 + 4))).operator->();
            local_40.XPlotBlender<int>(*(ResultType*)(lVar8 + 100));
            field_2505232 = local_40.m_x;
            local_40.XPlotBlender<int>(0);
            field_2505240 = local_40.m_x;
            field_2505236 = local_40.m_x;
            return;
        }
        field_2505225 = 0;
        if (iVar1 == 10) {
            uVar6 = field_8496.GetFlickHorizontalVelocity();
            field_2505244 = uVar6;
            uVar6 = field_8496.GetFlickVerticalVelocity();
            field_2505248 = uVar6;
        LAB_1000f26a1:
            field_2505236 += ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505244);
            local_40.m_x = field_2505244 * 97;
            uVar6 = local_40 / 100;
            field_2505244 = uVar6;
            field_2505240 += ((CoordType<UICoordSpecializer>*)(unsigned long)field_2505248);
            local_40.m_x = field_2505248 * 97;
            uVar6 = local_40 / 100;
            field_2505248 = uVar6;
        } else {
            if (iVar1 != 9)
                goto LAB_1000f26a1;
            pCVar9 = &field_8560[0];
            puVar10 = &field_8528[0];
            uVar6 = *pCVar9 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar10);
            field_2505236 = uVar6;
            pCVar9 = &field_8576[0];
            puVar10 = &field_8544[0];
            uVar6 = *pCVar9 - ((CoordType<UICoordSpecializer>*)(unsigned long)*puVar10);
            field_2505240 = uVar6;
            local_40.XPlotBlender<int>(0);
            field_2505248 = local_40.m_x;
            field_2505244 = local_40.m_x;
        }
        local_50->XPlotBlender<int>(0);
        bool cVar5 = field_2505236 != ((CoordType<UICoordSpecializer>*)(unsigned long)local_50[0]);
        if (!cVar5) {
            local_48->XPlotBlender<int>(0);
            cVar5 = field_2505240 != ((CoordType<UICoordSpecializer>*)(unsigned long)local_48[0]);
            if (cVar5)
                goto LAB_1000f276f;
        } else {
        LAB_1000f276f:
            this_00 = (shared_ptr<rs2lib::IfType>*)(field_2505204 + 4);
            lVar8 = (*this_00).operator->();
            iVar1 = *(int*)(lVar8 + 96);
            lVar8 = (*this_00).operator->();
            iVar2 = *(int*)(lVar8 + 100);
            uVar6 = field_2505236 * 2;
            local_40.m_x = field_2505228 - ((CoordType<UICoordSpecializer>*)(unsigned long)uVar6);
            uVar7 = local_40.GetX();
            lVar8 = (*this_00).operator->();
            *(uint32_t*)(lVar8 + 96) = uVar7;
            lVar8 = (*this_00).operator->();
            iVar3 = *(int*)(lVar8 + 96);
            lVar8 = (*this_00).operator->();
            iVar4 = *(int*)(lVar8 + 104);
            lVar8 = (*this_00).operator->();
            if (iVar4 - *(int*)(lVar8 + 72) < iVar3) {
                lVar8 = (*this_00).operator->();
                iVar3 = *(int*)(lVar8 + 104);
                lVar8 = (*this_00).operator->();
                iVar4 = *(int*)(lVar8 + 72);
                lVar8 = (*this_00).operator->();
                *(int*)(lVar8 + 96) = iVar3 - iVar4;
            }
            lVar8 = (*this_00).operator->();
            if (*(int*)(lVar8 + 96) < 0) {
                lVar8 = (*this_00).operator->();
                *(uint32_t*)(lVar8 + 96) = 0;
            }
            uVar6 = field_2505240 * 2;
            local_40.m_x = field_2505232 - ((CoordType<UICoordSpecializer>*)(unsigned long)uVar6);
            uVar7 = local_40.GetX();
            lVar8 = (*this_00).operator->();
            *(uint32_t*)(lVar8 + 100) = uVar7;
            lVar8 = (*this_00).operator->();
            iVar3 = *(int*)(lVar8 + 100);
            lVar8 = (*this_00).operator->();
            iVar4 = *(int*)(lVar8 + 108);
            lVar8 = (*this_00).operator->();
            if (iVar4 - *(int*)(lVar8 + 76) < iVar3) {
                lVar8 = (*this_00).operator->();
                iVar3 = *(int*)(lVar8 + 108);
                lVar8 = (*this_00).operator->();
                iVar4 = *(int*)(lVar8 + 76);
                lVar8 = (*this_00).operator->();
                *(int*)(lVar8 + 100) = iVar3 - iVar4;
            }
            lVar8 = (*this_00).operator->();
            if (*(int*)(lVar8 + 100) < 0) {
                lVar8 = (*this_00).operator->();
                *(uint32_t*)(lVar8 + 100) = 0;
            }
            lVar8 = (*this_00).operator->();
            if ((*(int*)(lVar8 + 96) != iVar1) || (lVar8 = (*this_00).operator->(), *(int*)(lVar8 + 100) != iVar2)) {
                ComponentUpdated(*this_00);
                field_2505225 = 1;
            }
        }
        if (field_2505225 != '\0') {
            return;
        }
        local_40.XPlotBlender<int>(0);
        field_2505248 = local_40.m_x;
        field_2505244 = local_40.m_x;
        if (field_8504 == 9) {
            return;
        }
        CoordMapSquare local_40;
        (*((field_2505204 + 4))) = local_40;
    LAB_1000f25c7:
    }

    // 0x1000f2980
    void Client::ComponentUpdated(const shared_ptr<rs2lib::IfType>& ifType) {
        long lVar2;
        uint8_t* puVar3;

        if (ifType.operator_cast_to_bool() != '\0') {
            lVar2 = ifType.operator->();
            if (*(int*)(lVar2 + 2048) == field_2506572) {
                lVar2 = ifType.operator->();
                puVar3 = &field_2506576[(long)*(int*)(lVar2 + 2044)];
                *puVar3 = 1;
            }
        }
    }

    // 0x1000f29e0
    void Client::GlFollowCamera() {
        uint8_t bVar2;
        int iVar5;
        unsigned int uVar6;
        long lVar7;
        array<int, _2048ul>* this_00;
        array<int, _2048ul>* this_01;
        int* piVar8;
        unsigned int* puVar9;
        GameOptions* pGVar10;
        int iVar11;
        Client* this_02;
        Client* this_03;
        int iVar12;
        unsigned long arg1;
        int iVar13;
        int arg4;
        int iVar14;
        bool bVar15;
        float fVar16;
        unsigned int local_50[2];
        unsigned int local_48[2];
        Client* local_40;
        unsigned int local_38[2];

        if (m_cameraMode != 1) {
            if (m_cameraMode == 0) {
                this_03 = (Client*)&field_52016;
                lVar7 = (*this_03).operator->();
                uVar6 = *(unsigned int*)(lVar7 + 24);
                this_02 = this_03;
                lVar7 = (*this_03).operator->();
                fVar16 = *(float*)(lVar7 + 28);
                if ((1000 < (field_7294716 - uVar6) + 500) || (1000 < ((int)field_7294724 - (int)fVar16) + 500U)) {
                    field_7294716 = uVar6;
                    field_7294724 = fVar16;
                }
                iVar13 = uVar6 - field_7294716;
                if (iVar13 != 0) {
                    iVar5 = iVar13 + 15;
                    if (-1 < iVar13) {
                        iVar5 = iVar13;
                    }
                    field_7294716 = (iVar5 >> 4) + field_7294716;
                }
                iVar13 = (int)fVar16 - (int)field_7294724;
                if (iVar13 != 0) {
                    iVar5 = iVar13 + 15;
                    if (-1 < iVar13) {
                        iVar5 = iVar13;
                    }
                    field_7294724 = (float)((iVar5 >> 4) + (int)field_7294724);
                }
                uVar6 = field_7294716;
                fVar16 = field_7294724;
                iVar5 = GetAvH(this_02, uVar6, (int)fVar16, field_51984);
                iVar13 = 0;
                if (((((int)uVar6 < 12800) && (511 < (int)uVar6)) && (511 < (int)fVar16)) && ((int)fVar16 < 12800)) {
                    iVar13 = 0;
                    iVar14 = ((int)uVar6 >> 7) - 4;
                    local_40 = this;
                    do {
                        iVar11 = -4;
                        do {
                            arg4 = ((int)fVar16 >> 7) + iVar11;
                            iVar12 = local_40->field_51984;
                            if (iVar12 < 3) {
                                bVar2 = ClientBuild::Read3DArray<signed char>((Array<signed char>*)&ClientBuild::m_mapl,
                                                                              1, iVar14, arg4);
                                iVar12 = iVar12 + (unsigned int)(bVar2 >> 1 & 1);
                            }
                            iVar12 = ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, iVar12, iVar14,
                                                                   arg4);
                            if (iVar13 < iVar5 - iVar12) {
                                iVar13 = iVar5 - iVar12;
                            }
                            iVar11 = iVar11 + 1;
                        } while (iVar11 != 5);
                        bVar15 = iVar14 != ((int)uVar6 >> 7) + 4;
                        iVar14 = iVar14 + 1;
                    } while (bVar15);
                    iVar13 = iVar13 * 192;
                    this = local_40;
                }
                iVar5 = 98048;
                if (iVar13 < 98048) {
                    iVar5 = iVar13;
                }
                iVar13 = 32768;
                if (32768 < iVar5) {
                    iVar13 = iVar5;
                }
                iVar5 = field_7294756;
                iVar14 = 24;
                if ((iVar13 - iVar5 != 0 && iVar5 <= iVar13) || (iVar14 = 80, iVar13 < iVar5)) {
                    field_7294756 = (iVar13 - iVar5) / iVar14 + iVar5;
                }
                lVar7 = (*this_03).operator->();
                iVar13 = *(int*)(lVar7 + 24);
                lVar7 = (*this_03).operator->();
                iVar13 = GetAvH(this_03, iVar13, *(int*)(lVar7 + 28), field_51984);
                field_7294720 = iVar13 - field_52404;
            }
            goto LAB_1000f2e58;
        }
        CheckRecentreFreecam();
        uint8_t* puVar1 = &field_8496;
        local_40 = this;
        bool cVar4 = puVar1->KeyHeld(33);
        bVar2 = 0;
        iVar13 = 0;
        if (!cVar4) {
            bVar2 = puVar1->KeyHeld(49);
            iVar13 = -1;
            if (bVar2 != 0) {
                iVar13 = 1024;
            }
        }
        if (!(puVar1->KeyHeld(48))) {
            if (puVar1->KeyHeld(50)) {
                iVar5 = (bVar2 | 2) << 8;
                iVar13 = 256;
                goto LAB_1000f2ccf;
            }
        } else {
            iVar5 = (unsigned int)(bVar2 ^ 1) * 256 + 1280;
            iVar13 = 1792;
        LAB_1000f2ccf:
            if (!cVar4) {
                iVar13 = iVar5;
            }
        }
        cVar4 = puVar1->KeyHeld(35);
        if (!cVar4) {
            bVar2 = puVar1->KeyHeld(51);
            uVar6 = (unsigned int)bVar2;
        } else {
            uVar6 = 4294967295;
            bVar2 = 1;
        }
        this = local_40;
        if ((-1 < iVar13) || (iVar5 = 0, bVar2 != 0)) {
            bVar2 = puVar1->KeyHeld(81);
            iVar5 = *(int*)(field_52936 + (unsigned long)bVar2 * 4 - 528) << 4;
            field_7294732 = iVar13;
            field_7294736 = uVar6;
        }
        iVar13 = field_7294728;
        if (iVar13 < iVar5) {
            iVar14 = iVar5 + 7;
            if (-1 < iVar5) {
                iVar14 = iVar5;
            }
            iVar13 = iVar13 + (iVar14 >> 3);
            if (iVar5 < iVar13) {
                iVar13 = iVar5;
            }
        LAB_1000f2d71:
            field_7294728 = iVar13;
        } else if (iVar5 < iVar13) {
            iVar13 = (iVar13 * 9) / 10;
            goto LAB_1000f2d71;
        }
        iVar13 = field_7294728;
        if (iVar13 < 1) {
            field_7294732 = -1;
            field_7294736 = 4294967295;
        } else {
            iVar5 = iVar13 + 15;
            if (-1 < iVar13) {
                iVar5 = iVar13;
            }
            iVar5 = iVar5 >> 4;
            if (-1 < field_7294732) {
                arg1 = (unsigned long)(field_7294732 - field_53104 & 2047);
                this_00 = dash3d::Pix3D::GetSinTable();
                this_01 = dash3d::Pix3D::GetCosTable();
                piVar8 = (int*)(*this_00)[arg1];
                iVar14 = *piVar8 * iVar5;
                piVar8 = (int*)(*this_01)[arg1];
                iVar13 = iVar14 + 65535;
                if (-1 < iVar14) {
                    iVar13 = iVar14;
                }
                iVar14 = *piVar8 * iVar5;
                local_40->field_7294716 = local_40->field_7294716 + (iVar13 >> 16);
                iVar13 = iVar14 + 65535;
                if (-1 < iVar14) {
                    iVar13 = iVar14;
                }
                local_40->field_7294724 = (float)((int)local_40->field_7294724 + (iVar13 >> 16));
                this = local_40;
            }
            if (field_7294736 != 0) {
                uVar6 = field_7294736 * iVar5 + field_7294720;
                field_7294720 = (int)uVar6 >> 31 & uVar6;
            }
        }
        cVar4 = puVar1->KeyHeld(13);
        if (cVar4) {
            ExitFreecamMode();
        }
    LAB_1000f2e58:
        if (field_8504 == 12) {
            iVar13 = *(int*)&field_18528;
            puVar9 = &field_8560[(long)iVar13];
            local_50[0] = *puVar9;
            puVar9 = &field_8576[(long)iVar13];
            local_48[0] = *puVar9;
            local_38[0] = *local_48 - ((CoordType<UICoordSpecializer>*)(unsigned long)field_53136);
            iVar13 = local_38->GetX();
            local_40 = (Client*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)iVar13));
            pGVar10 = (GameOptions*)field_8384.operator->();
            fVar16 = (float)pGVar10->GetCameraSensitivity();
            iVar5 = jag::math::RoundFloatToInt(fVar16 * local_40._0_4_);
            field_53128 = iVar5;
            if ((iVar13 == 1) || (iVar13 == -1)) {
                uVar6 = local_48[0];
            } else {
                local_38[0] = *local_48 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_53136);
                uVar6 = *local_38 / 2;
            }
            field_53136 = uVar6;
            local_38[0] = field_53132 - ((CoordType<UICoordSpecializer>*)(unsigned long)local_50[0]);
            iVar13 = local_38->GetX();
            local_40 = (Client*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((float)iVar13));
            pGVar10 = (GameOptions*)field_8384.operator->();
            fVar16 = (float)pGVar10->GetCameraSensitivity();
            iVar5 = jag::math::RoundFloatToInt(fVar16 * local_40._0_4_);
            field_53124 = iVar5;
            if ((iVar13 == 1) || (iVar13 == -1)) {
                uVar6 = local_50[0];
            } else {
                local_38[0] = *local_50 + ((CoordType<UICoordSpecializer>*)(unsigned long)field_53132);
                uVar6 = *local_38 / 2;
            }
        } else {
            puVar1 = &field_8496;
            cVar4 = puVar1->KeyHeld(96);
            if (!cVar4) {
                cVar4 = puVar1->KeyHeld(97);
                iVar13 = field_53124;
                if (!cVar4) {
                    iVar13 = iVar13 / 2;
                } else {
                    iVar5 = (24 - iVar13) * 3;
                    iVar14 = (24 - iVar13) * 3 + 3;
                    if (-1 < iVar5) {
                        iVar14 = iVar5;
                    }
                    iVar13 = (iVar14 >> 2) + iVar13;
                }
                field_53124 = iVar13;
            } else {
                iVar5 = -24 - field_53124;
                iVar13 = iVar5 * 3;
                iVar5 = iVar5 * 3 + 3;
                if (-1 < iVar13) {
                    iVar5 = iVar13;
                }
                field_53124 = (iVar5 >> 2) + field_53124;
            }
            cVar4 = puVar1->KeyHeld(98);
            if (!cVar4) {
                cVar4 = puVar1->KeyHeld(99);
                iVar13 = field_53128;
                if (!cVar4) {
                    iVar13 = iVar13 / 2;
                } else {
                    iVar5 = (-12 - iVar13) * 3;
                    iVar14 = (-12 - iVar13) * 3 + 3;
                    if (-1 < iVar5) {
                        iVar14 = iVar5;
                    }
                    iVar13 = (iVar14 >> 2) + iVar13;
                }
                field_53128 = iVar13;
            } else {
                iVar5 = 12 - field_53128;
                iVar13 = iVar5 * 3;
                iVar5 = iVar5 * 3 + 3;
                if (-1 < iVar13) {
                    iVar5 = iVar13;
                }
                field_53128 = (iVar5 >> 2) + field_53128;
            }
            puVar9 = &field_8576[0];
            field_53136 = *puVar9;
            puVar9 = &field_8560[0];
            uVar6 = *puVar9;
        }
        field_53132 = uVar6;
        field_53112 = field_53120 + field_53112 & 2047;
        iVar13 = field_53108 + field_53116;
        field_53108 = iVar13;
        field_53120 = field_53124 / 2;
        field_53116 = field_53128 / 2;
        iVar13 = dash3d::world::ClampPitchAngle(iVar13);
        field_53108 = iVar13;
    }

    // 0x1000f3160
    void Client::SmoothResetCamera() {
        CinemaCameraData local_58;

        CinemaCameraMovePosition(field_53044, field_53052, field_53048);
        CinemaCameraMoveAngle(field_53056, field_53060);
        if ((((field_53088 == field_53044) && (field_53092 == field_53048)) && (field_53096 == field_53052)) &&
            ((field_53100 == field_53056 && (field_53104 == field_53060)))) {
            local_58.field_32 = 0;
            local_58.field_40 = 0;
            local_58.field_16 = 0;
            local_58.field_24 = 0;
            local_58.field_0 = 0;
            local_58.field_4 = 0;
            local_58._5_3_ = 0;
            local_58.field_8 = 0;
            local_58 = CinemaCameraData();
            field_53060 = 0;
            field_53044 = (uint32_t)0;
            field_53048 = (0)._4_4_;
            field_53052 = (uint32_t)0;
            field_53056 = (0)._4_4_;
            field_53028 = (uint32_t)local_58.field_32;
            field_53032 = local_58.field_32._4_4_;
            field_53036 = (uint32_t)local_58.field_40;
            field_53040 = local_58.field_40._4_4_;
            field_53012 = (uint32_t)local_58.field_16;
            field_53016 = local_58.field_16._4_4_;
            field_53020 = (uint32_t)local_58.field_24;
            field_53024 = local_58.field_24._4_4_;
            *(uint64_t*)&field_52996 = local_58._0_8_;
            field_53004 = (uint32_t)local_58.field_8;
            field_53008 = local_58.field_8._4_4_;
            field_53064.reset(nullptr);
            field_53072.reset(nullptr);
            field_53080.reset(nullptr);
        }
    }

    // 0x1000f3280
    void Client::GlCinemaCamera() {
        uint8_t* puVar1;
        bool cVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        long* plVar6;
        Client* pCVar7;
        CinemaCameraRotationTween* pCVar8;
        CinemaCameraTween* pCVar9;
        unsigned int uVar10;
        int arg2;
        unsigned int uVar11;
        int arg1;
        double dVar12;
        double dVar13;

        if (field_52998 == '\0') {
            uVar11 = field_53004 << 7 | 64;
            uVar10 = field_53008 << 7 | 64;
            iVar3 = GetAvH(uVar11, uVar10, field_51984);
            pCVar7 = this;
            CinemaCameraMovePosition(uVar11, uVar10, iVar3 - field_53012);
        } else {
            puVar1 = &field_53064;
            pCVar7 = (Client*)puVar1;
            cVar2 = puVar1->operator_cast_to_bool();
            if (cVar2) {
                plVar6 = (long*)(*puVar1).operator->();
                iVar3 = (**(void (**)(...))(*plVar6 + 16))(plVar6);
                field_53088 = iVar3;
                pCVar7 = (Client*)(*puVar1).operator->();
                iVar3 = (**(void (**)(...))(*(long*)pCVar7 + 24))();
                field_53096 = iVar3;
                if (field_53000 == '\0') {
                    iVar3 = GetAvH(pCVar7, field_53088, iVar3, field_51984);
                    plVar6 = (long*)(*puVar1).operator->();
                    iVar4 = (**(void (**)(...))(*plVar6 + 32))(plVar6);
                    iVar3 = iVar3 - iVar4;
                } else {
                    plVar6 = (long*)(*puVar1).operator->();
                    iVar3 = (**(void (**)(...))(*plVar6 + 32))(plVar6);
                }
                field_53092 = iVar3;
                pCVar7 = (Client*)(*puVar1).operator->();
                pCVar7->AdvanceCycle();
                cVar2 = field_52999;
                goto joined_r0x0001000f334f;
            }
        }
        cVar2 = field_52999;
    joined_r0x0001000f334f:
        if (!cVar2) {
            uVar11 = field_53024 << 7 | 64;
            uVar10 = field_53028 << 7 | 64;
            iVar5 = GetAvH(pCVar7, uVar11, uVar10, field_51984);
            iVar3 = field_53032;
            arg1 = uVar11 - field_53088;
            iVar4 = field_53092;
            arg2 = uVar10 - field_53096;
            dVar12 = (double)sqrt<int>(arg2 * arg2 + arg1 * arg1);
            dVar12 = (double)atan2<int, int>(iVar5 - (iVar3 + iVar4), (int)dVar12);
            dVar13 = (double)atan2<int, int>(arg1, arg2);
            CinemaCameraMoveAngle((int)(dVar12 * 325.949f) & 2047, (int)(dVar13 * -325.949f) & 2047);
        } else {
            puVar1 = &field_53072;
            cVar2 = puVar1->operator_cast_to_bool();
            if (cVar2) {
                pCVar8 = (CinemaCameraRotationTween*)(*puVar1).operator->();
                iVar3 = pCVar8->GetValue();
                field_53100 = iVar3;
                iVar3 = dash3d::world::ClampPitchAngle(iVar3);
                field_53100 = iVar3;
                pCVar9 = (CinemaCameraTween*)(*puVar1).operator->();
                pCVar9->AdvanceCycle();
            }
            puVar1 = &field_53080;
            cVar2 = puVar1->operator_cast_to_bool();
            if (cVar2) {
                pCVar8 = (CinemaCameraRotationTween*)(*puVar1).operator->();
                uVar10 = pCVar8->GetValue();
                field_53104 = uVar10 & 2047;
                pCVar9 = (CinemaCameraTween*)(*puVar1).operator->();
                pCVar9->AdvanceCycle();
            }
        }
    }

    // 0x1000f3630
    void Client::ServicePendingKeyFrameSets() {
        uint8_t* this_00 = &field_7306808;
        auto arg1 = this_00->HeapBeginPtr();
        auto piVar1 = this_00->end();
        if (arg1 != piVar1) {
            do {
                if ((uint8_t*)(*arg1)->GetKeyFrameSetStatus() == DataStatus::MISSING) {
                    arg1 = arg1 + 1;
                } else {
                    arg1 = (int*)this_00->erase(arg1);
                }
                piVar1 = (int*)this_00->end();
            } while (arg1 != piVar1);
        }
    }

    // 0x1000f37d0
    void Client::GlEntityOverlays(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        void result;
        int arg1_00;
        int* piVar3;
        Array<shared_ptr<rs2lib::IfType>>* ifTypes;
        ReturnValue result;
        uint32_t in_register_0000003c;
        int in_stack_00000008;
        ReturnValue local_b0;
        function<void(Array<shared_ptr<rs2lib::IfType>>&)> local_68[48];
        long local_38;

        Client* pCVar4 = (Client*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        uint8_t* uint8_t = &pCVar4->field_2505256;
        int local_7c = arg6;
        int local_78 = arg5;
        int local_74 = arg4;
        int local_70 = arg3;
        int local_6c = arg2;
        auto local_b8 = uint8_t->rbegin();
        uint8_t* this_00 = pCVar4->m_entityOverlays;
        &result = &local_b0;
        Client* local_88 = pCVar4;
        result = uint8_t->rend();
        bool bVar1 = local_b8 != result;
        if (bVar1) {
            do {
                piVar3 = (int*)*local_b8;
                arg1_00 = *piVar3;
                if (this_00->OverlayExistsAtIndex(arg1_00)) {
                    ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)this_00->GetOverlay(arg1_00);
                    LoopLayer(local_88, ifTypes, -1, local_6c, local_70, local_74, local_78, local_7c,
                              in_stack_00000008);
                }
                ++local_b8;
                local_b0 = uint8_t->rend();
                &result = &local_b0;
                bVar1 = local_b8 != local_b0;
            } while (bVar1);
        }
        Client* local_a8 = local_88;
        int iStack_a0 = local_6c;
        int iStack_9c = local_70;
        int local_98 = local_74;
        int iStack_94 = local_78;
        int iStack_90 = local_7c;
        std::function<void(Array<shared_ptr<rs2lib::IfType>>&)>::function<
            Client::GlEntityOverlays(int, int, int, int, int, int)::__8, void>(local_68, &result);
        this_00->ForEachOverlay(local_68);
    }

    // 0x1000f39f0
    void Client::LoopLayer(Array<shared_ptr<rs2lib::IfType>>& ifTypes, int arg2, int arg3, int arg4, int arg5, int arg6,
                           int arg7, int arg8) {
        unsigned short uVar1;
        uint32_t uVar2;
        Worldmap* pWVar3;
        Minimenu* this_00;
        ResultType RVar4;
        uint64_t uVar5;
        bool bVar6;
        char cVar7;
        uint8_t bVar8;
        uint8_t bVar9;
        bool bVar10;
        int iVar12;
        int iVar13;
        int iVar14;
        unsigned int uVar15;
        int arg7_00;
        unsigned long uVar17;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        char* pcVar18;
        IfType* pIVar19;
        unsigned int* puVar20;
        NXTPixToolkit* this_03;
        SoundInstance* this_04;
        array<Array<unsigned char>, 11ul>* paVar21;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar22;
        Array<unsigned char>* pAVar23;
        uint8_t* pbVar24;
        int* piVar25;
        uint32_t* puVar26;
        Logger* this_05;
        unsigned short* puVar27;
        Layout* pLVar28;
        uint32_t* puVar29;
        long lVar30;
        Array<shared_ptr<rs2lib::IfType>>* ifTypes_00;
        shared_ptr<rs2lib::IfType>* ifType;
        char cVar31;
        int arg2_00;
        unsigned long uVar32;
        ObjType* pOVar33;
        CoordType<UICoordSpecializer>* coordType2;
        unsigned int uVar34;
        float fVar35;
        shared_ptr<dash3d::Decor> local_2d8;
        ReturnValue local_2c8;
        unsigned long local_2a8;
        array<CoordType<UICoordSpecializer>, 4ul>* local_2a0;
        array<CoordType<UICoordSpecializer>, 4ul>* local_298;
        array<int, 128ul>* local_290;
        array<char16_t, 128ul>* local_288;
        unique_ptr<minimap::Minimap>* local_280;
        array<int, 32ul>* local_278;
        array<int, 32ul>* local_270;
        array<int, 32ul>* local_268;
        list<HookReq>* local_260;
        shared_ptr<rs2lib::IfType>* local_258;
        shared_ptr<rs2lib::IfType>* local_250;
        EntityOverlays* local_248;
        hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_240;
        list<HookReq>* local_238;
        list<InterfaceMouseEvent>* local_230;
        int local_21c;
        unsigned int local_218[2];
        unsigned int local_210[2];
        unsigned int local_208[2];
        unsigned int local_200[2];
        unsigned int local_1f8[2];
        unsigned int local_1f0[2];
        unsigned int local_1e8[2];
        unsigned int local_1e0[2];
        unsigned int local_1d8[2];
        unsigned int local_1d0[2];
        unsigned int local_1c8[2];
        unsigned int local_1c0[2];
        unsigned int local_1b8[2];
        unsigned int local_1b0[2];
        unsigned int local_1a8[2];
        unsigned int local_1a0[2];
        unsigned int local_198[2];
        unsigned int local_190[2];
        unsigned int local_188[2];
        unsigned int local_180[2];
        unsigned int local_178[2];
        unsigned int local_170[2];
        shared_ptr<midi2::MidiRequest>* local_168;
        Array<shared_ptr<rs2lib::IfType>>* local_160;
        shared_ptr<ClientScript>* local_158;
        shared_ptr<ClientScript>* local_150;
        RenderContextDesc local_148;
        shared_ptr<midi2::MidiRequest>* local_128;
        unsigned int local_11c;
        ObjType* local_118;
        uint8_t local_110[24];
        uint8_t local_f8;
        shared_ptr<rs2lib::IfType> local_f0;
        int local_e0;
        int local_dc;
        uint32_t local_c0;
        unsigned int local_bc;
        unsigned long local_90;
        unsigned long local_88;
        unsigned long local_80;
        ResultType local_78;
        ResultType local_74;
        ResultType local_70;
        ResultType local_6c;
        list<HookReq>* local_68;
        uint32_t local_5c;
        uint8_t local_58[8];
        uint8_t local_50[16];
        shared_ptr<rs2lib::IfType> local_40;

        local_50._8_8_ = this;
        long lVar16 = ifTypes.end();
        if (lVar16 != 0) {
            local_158 = (shared_ptr<ClientScript>*)(local_50._8_8_ + 2505056);
            local_150 = (shared_ptr<ClientScript>*)(local_50._8_8_ + 2505120);
            local_68 = (list<HookReq>*)(local_50._8_8_ + 2506384);
            local_128 = (shared_ptr<midi2::MidiRequest>*)(local_50._8_8_ + 2505104);
            local_168 = (shared_ptr<midi2::MidiRequest>*)((uint8_t*)(local_50._8_8_ + 2505204) + 4);
            pOVar33 = (ObjType*)(local_50._8_8_ + 8496);
            local_2a0 = (array<CoordType<UICoordSpecializer>, 4ul>*)(local_50._8_8_ + 8560);
            local_298 = (array<CoordType<UICoordSpecializer>, 4ul>*)(local_50._8_8_ + 8576);
            local_230 = (list<InterfaceMouseEvent>*)(local_50._8_8_ + 2506480);
            local_258 = (shared_ptr<rs2lib::IfType>*)(local_50._8_8_ + 2505144);
            local_238 = (list<HookReq>*)(local_50._8_8_ + 2506448);
            local_260 = (list<HookReq>*)(local_50._8_8_ + 2506416);
            local_278 = (array<int, 32ul>*)(local_50._8_8_ + 2505812);
            local_270 = (array<int, 32ul>*)(local_50._8_8_ + 2505944);
            local_268 = (array<int, 32ul>*)(local_50._8_8_ + 2506076);
            local_290 = (array<int, 128ul>*)(local_50._8_8_ + 8616);
            local_288 = (array<char16_t, 128ul>*)(local_50._8_8_ + 9128);
            local_250 = (shared_ptr<rs2lib::IfType>*)(local_50._8_8_ + 2505072);
            local_240 =
                (hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                           eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                           eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)(local_50._8_8_ + 53160);
            local_248 = (EntityOverlays*)(local_50._8_8_ + 6815056);
            local_280 = (unique_ptr<minimap::Minimap>*)(local_50._8_8_ + 8152);
            uVar32 = 0;
            local_21c = arg2;
            local_160 = ifTypes;
            local_118 = pOVar33;
            do {
                local_2a8 = uVar32;
                groundDecor = &ifTypes[uVar32];
                local_40 = shared_ptr(groundDecor);
                bVar6 = local_40 == nullptr;
                if (!bVar6) {
                    iVar12 = *(int*)(local_50._8_8_ + 7294676);
                    lVar16 = local_40.operator->();
                    *(int*)(lVar16 + 28) = iVar12;
                    lVar16 = local_40.operator->();
                    if (*(int*)(lVar16 + 88) == arg2) {
                        pcVar18 = (char*)local_40.operator->();
                        if (*pcVar18 == '\0') {
                            lVar16 = local_40.operator->();
                            if ((*(int*)(lVar16 + 12) == 0) && (bVar6 = *local_158 != local_40, bVar6)) {
                                cVar7 = Hide((Client*)local_50._8_8_, &local_40);
                                goto LAB_1000f3c43;
                            }
                        } else {
                            cVar7 = Hide((Client*)local_50._8_8_, &local_40);
                        LAB_1000f3c43:
                            if (cVar7)
                                goto LAB_1000f3bb0;
                        }
                        lVar16 = local_40.operator->();
                        if ((((*(int*)(lVar16 + 1984) != -1) &&
                              (lVar16 = local_40.operator->(), *(int*)(lVar16 + 680) == -1)) &&
                             (lVar16 = local_40.operator->(), *(int*)(lVar16 + 12) == 5)) &&
                            (lVar16 = local_40.operator->(), (*(uint8_t*)(lVar16 + 292) & 4) != 0)) {
                            local_2d8 = shared_ptr(&local_40);
                            CreateObjOverlay((Client*)local_50._8_8_, &local_2d8);
                        }
                        pIVar19 = (IfType*)local_40.operator->();
                        cVar7 = pIVar19->IsActiveComponent();
                        if ((!cVar7) && (iVar12 = GetActive((Client*)local_50._8_8_, &local_40), iVar12 == 0)) {
                            bVar6 = local_40 != *local_150;
                            if (bVar6)
                                goto LAB_1000f3bb0;
                        }
                        lVar16 = local_40.operator->();
                        if (*(int*)(lVar16 + 12) == 11) {
                            pIVar19 = (IfType*)local_40.operator->();
                            cVar7 = pIVar19->ServiceCRMView();
                            if (cVar7) {
                                pIVar19 = (IfType*)local_40.operator->();
                                cVar7 = pIVar19->GetCRMViewHandler()->HasSuccessfulResponse();
                                if (cVar7) {
                                    ComponentUpdated((Client*)local_50._8_8_, &local_40);
                                    lVar16 = local_40.operator->();
                                    InterfaceCalculateSizeAndPosSubcomponents(
                                        (Client*)local_50._8_8_, (Array<shared_ptr<rs2lib::IfType>>*)(lVar16 + 2000),
                                        &local_40, true);
                                }
                                lVar16 = local_40.operator->();
                                cVar7 = ((lVar16 + 1720))->empty();
                                if (!cVar7) {
                                    new (local_110) HookReq();
                                    local_f0 = local_40;
                                    lVar16 = local_40.operator->();
                                    *local_110 = (*((lVar16 + 1720)));
                                    local_68->push_back(*local_110);
                                }
                            }
                        } else {
                            lVar16 = local_40.operator->();
                            if (*(int*)(lVar16 + 12) == 12) {
                                pIVar19 = (IfType*)local_40.operator->();
                                cVar7 = pIVar19->ServiceInputField();
                                if (cVar7) {
                                    ComponentUpdated((Client*)local_50._8_8_, &local_40);
                                }
                            }
                        }
                        lVar16 = local_40.operator->();
                        local_88 = (unsigned long)(unsigned int)(*(int*)(lVar16 + 64) + arg7);
                        lVar16 = local_40.operator->();
                        local_80 = (unsigned long)(unsigned int)(*(int*)(lVar16 + 68) + arg8);
                        lVar16 = local_40.operator->();
                        if (*(int*)(lVar16 + 12) == 9) {
                            lVar16 = local_40.operator->();
                            iVar12 = *(int*)(lVar16 + 72);
                            lVar16 = local_40.operator->();
                            RVar4 = (ResultType)local_88;
                            local_70 = RVar4 + iVar12;
                            if (iVar12 < 0) {
                                local_78 = local_70;
                                local_70 = RVar4;
                            } else {
                                local_78 = RVar4;
                            }
                            RVar4 = (ResultType)local_80;
                            local_6c = *(int*)(lVar16 + 76) + RVar4;
                            if (*(int*)(lVar16 + 76) < 0) {
                                local_74 = local_6c;
                                local_6c = RVar4;
                            } else {
                                local_74 = RVar4;
                            }
                            local_70 = local_70 + 1;
                            local_6c = local_6c + 1;
                        } else {
                            lVar16 = local_40.operator->();
                            iVar12 = *(int*)(lVar16 + 72);
                            lVar16 = local_40.operator->();
                            local_78 = (ResultType)local_88;
                            local_70 = iVar12 + local_78;
                            local_74 = (ResultType)local_80;
                            local_6c = *(int*)(lVar16 + 76) + local_74;
                        }
                        if ((int)local_78 <= (int)(ResultType)arg3) {
                            local_78 = (ResultType)arg3;
                        }
                        if ((int)local_74 <= (int)(ResultType)arg4) {
                            local_74 = (ResultType)arg4;
                        }
                        if ((int)(ResultType)arg5 <= (int)local_70) {
                            local_70 = (ResultType)arg5;
                        }
                        if (arg6 <= (int)local_6c) {
                            local_6c = arg6;
                        }
                        bVar6 = local_40 == *local_128;
                        uVar5 = local_50._8_8_;
                        if (bVar6) {
                            *(uint8_t*)(local_50._8_8_ + 2505172) = 1;
                            local_110->XPlotBlender<int>((ResultType)local_88);
                            *(uint32_t*)(uVar5 + 2505176) = local_110._0_4_;
                            local_110->XPlotBlender<int>((ResultType)local_80);
                            *(uint32_t*)(uVar5 + 2505180) = local_110._0_4_;
                            *(uint8_t*)(uVar5 + 8605) = 1;
                        }
                        bVar6 = local_40 == *local_168;
                        if (bVar6) {
                            *(uint8_t*)(local_50._8_8_ + 2505224) = 1;
                            *(uint8_t*)(local_50._8_8_ + 8604) = 1;
                        }
                        lVar16 = local_40.operator->();
                        if (*(char*)(lVar16 + 688) == '\0') {
                        LAB_1000f3fe6:
                            bVar6 = false;
                        LAB_1000f401c:
                            pIVar19 = (IfType*)local_40.operator->();
                            cVar7 = pIVar19->CanSkipLogicIfNotVisible();
                            if ((cVar7) && (((int)local_70 <= (int)local_78 || ((int)local_6c <= (int)local_74))))
                                goto LAB_1000f3bb0;
                        } else {
                            iVar12 = *(int*)(local_50._8_8_ + 54160);
                            if (iVar12 == 0) {
                                bVar6 = true;
                            } else {
                                if (iVar12 == 2) {
                                    lVar16 = local_40.operator->();
                                    iVar12 = *(int*)(lVar16 + 4) >> 16;
                                } else {
                                    if (iVar12 != 3)
                                        goto LAB_1000f3fe6;
                                    lVar16 = local_40.operator->();
                                    iVar12 = *(int*)(lVar16 + 4);
                                }
                                bVar6 = iVar12 == *(int*)((long)(local_50._8_8_ + 54160) + 4);
                                if (!bVar6)
                                    goto LAB_1000f401c;
                            }
                        }
                        pcVar18 = (char*)local_40.operator->();
                        if (*pcVar18 != '\0') {
                            local_148.XPlotBlender<int>(4294967295);
                            local_2c8.XPlotBlender<int>(4294967295);
                            cVar7 = NeedBuildMinimenu((Client*)local_50._8_8_);
                            if (cVar7) {
                                local_148.field_0 = *(unsigned int*)(local_50._8_8_ + 8592);
                                local_2c8[0]._0_4_ = *(unsigned int*)(local_50._8_8_ + 8596);
                            }
                            local_218->XPlotBlender<int>(local_78);
                            cVar7 = local_148 >= ((CoordType<UICoordSpecializer>*)(unsigned long)local_218[0]);
                            if (!cVar7) {
                            LAB_1000f413e:
                                cVar7 = '\0';
                            } else {
                                local_210->XPlotBlender<int>(local_74);
                                cVar7 = local_2c8 >= ((CoordType<UICoordSpecializer>*)(unsigned long)local_210[0]);
                                if (!cVar7)
                                    goto LAB_1000f413e;
                                local_208->XPlotBlender<int>(local_70);
                                cVar7 = CoordType<UICoordSpecializer>::operator<(
                                    (CoordType<UICoordSpecializer>*)&local_148,
                                    (CoordType<UICoordSpecializer>*)(unsigned long)local_208[0]);
                                if (!cVar7)
                                    goto LAB_1000f413e;
                                local_200->XPlotBlender<int>(local_6c);
                                cVar7 = CoordType<UICoordSpecializer>::operator<(
                                    &local_2c8, (CoordType<UICoordSpecializer>*)(unsigned long)local_200[0]);
                            }
                            lVar16 = local_40.operator->();
                            if (*(char*)(lVar16 + 2080) == '\0') {
                                lVar16 = local_40.operator->();
                                if ((*(char*)(lVar16 + 2081) != '\0') && (cVar7 == '\x01')) {
                                    ClearHookQueueMouseEvents((Client*)local_50._8_8_, true);
                                    ResetDragScrollLayer((Client*)local_50._8_8_);
                                }
                            } else if (cVar7) {
                                ClearHookQueueMouseEvents((Client*)local_50._8_8_, false);
                                uVar5 = local_50._8_8_;
                                ClearHardcodedMouseEvents((Client*)local_50._8_8_);
                                if (*(int*)(uVar5 + 2505188) == 0) {
                                    new (local_110) shared_ptr();
                                    *local_128 = *local_110;
                                    new (local_110) shared_ptr();
                                    *local_150 = *local_110;
                                }
                                pOVar33->ResetDragAction();
                                ResetDragScrollLayer((Client*)local_50._8_8_);
                                cVar7 = NeedBuildMinimenu((Client*)local_50._8_8_);
                                if (cVar7) {
                                    (*(Minimenu**)(local_50._8_8_ + 52344))->ResetMinimenu();
                                }
                            }
                        }
                        puVar20 = (unsigned int*)(*local_2a0)[0];
                        local_58._0_4_ = *puVar20;
                        puVar20 = (unsigned int*)(*local_298)[0];
                        local_50._0_4_ = *puVar20;
                        local_1f8->XPlotBlender<int>(local_78);
                        cVar7 = *local_58 >= ((CoordType<UICoordSpecializer>*)(unsigned long)local_1f8[0]);
                        if (!cVar7) {
                        LAB_1000f42d2:
                            local_5c = 0;
                        } else {
                            local_1f0->XPlotBlender<int>(local_74);
                            cVar7 = *local_50 >= ((CoordType<UICoordSpecializer>*)(unsigned long)local_1f0[0]);
                            if (!cVar7)
                                goto LAB_1000f42d2;
                            local_1e8->XPlotBlender<int>(local_70);
                            cVar7 = CoordType<UICoordSpecializer>::operator<(
                                (CoordType<UICoordSpecializer>*)local_58,
                                (CoordType<UICoordSpecializer>*)(unsigned long)local_1e8[0]);
                            if (!cVar7)
                                goto LAB_1000f42d2;
                            local_1e0->XPlotBlender<int>(local_6c);
                            local_5c = CoordType<UICoordSpecializer>::operator<(
                                (CoordType<UICoordSpecializer>*)local_50,
                                (CoordType<UICoordSpecializer>*)(unsigned long)local_1e0[0]);
                        }
                        lVar16 = local_40.operator->();
                        if (*(int*)(lVar16 + 20) == 1337) {
                            if (*(uint8_t*)(local_50._8_8_ + 54832) == '\0') {
                                bVar8 = NeedBuildMinimenu((Client*)local_50._8_8_);
                                uVar5 = local_50._8_8_;
                                if ((bVar8 & (uint8_t)local_5c) != 1)
                                    goto LAB_1000f44a3;
                                this_03 = (NXTPixToolkit*)local_50._8_8_->GetMemoryCache();
                                this_04 = (SoundInstance*)this_03->GetScreen();
                                fVar35 = (float)this_04->GetSoundSpatialSizeMax();
                                local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)fVar35);
                                iVar12 =
                                    jag::math::RoundFloatToInt((float)(int)*(unsigned int*)(uVar5 + 52736) * fVar35);
                                iVar13 = jag::math::RoundFloatToInt((float)(int)*(unsigned int*)(uVar5 + 52740) *
                                                                    (float)local_90);
                                (*(Minimenu**)(uVar5 + 52344))
                                    ->Build(
                                        (CoordType<UICoordSpecializer>*)(unsigned long)*(unsigned int*)(uVar5 + 8592),
                                        (CoordType<UICoordSpecializer>*)(unsigned long)*(unsigned int*)(uVar5 + 8596),
                                        iVar12, iVar13);
                                cVar7 = local_118->AllowDragGameScreen();
                                if (cVar7) {
                                    *(uint8_t*)(local_50._8_8_ + 8603) = 1;
                                }
                            } else {
                            LAB_1000f44a3:
                                (*(Minimenu**)(local_50._8_8_ + 52344))->field_0 = '\0';
                            }
                            lVar16 = local_40.operator->();
                            iVar12 = *(int*)(lVar16 + 96);
                            local_40.operator->();
                            GlEntityOverlays(local_50._8_4_, local_78, local_74, local_70, local_6c,
                                             (int)local_88 - iVar12);
                        } else {
                            lVar16 = local_40.operator->();
                            if (*(int*)(lVar16 + 20) == 1338) {
                                ((Minimap*)(*local_280).operator->())
                                    ->GlMinimap(local_40, (int)local_88, (int)local_80, (bool)(uint8_t)local_5c);
                            } else {
                                lVar16 = local_40.operator->();
                                uVar2 = local_58._0_4_;
                                if (*(int*)(lVar16 + 20) == 1400) {
                                    pWVar3 = *(Worldmap**)(local_50._8_8_ + 2509304);
                                    coordType2 =
                                        (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)local_50._0_4_;
                                    lVar16 = local_40.operator->();
                                    iVar12 = *(int*)(lVar16 + 72);
                                    lVar16 = local_40.operator->();
                                    pWVar3->LogicLoop(
                                        (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)uVar2, coordType2,
                                        (bool)(uint8_t)local_5c, (int)local_88, (int)local_80, iVar12,
                                        *(int*)(lVar16 + 76));
                                }
                                bVar8 = NeedBuildMinimenu((Client*)local_50._8_8_);
                                if ((bVar8 & (uint8_t)local_5c) == 1) {
                                    lVar16 = local_40.operator->();
                                    if (*(int*)(lVar16 + 20) == 1400) {
                                        pWVar3 = *(Worldmap**)(local_50._8_8_ + 2509304);
                                        lVar16 = local_40.operator->();
                                        iVar12 = *(int*)(lVar16 + 72);
                                        lVar16 = local_40.operator->();
                                        iVar13 = *(int*)(lVar16 + 76);
                                        iVar14 = local_58->GetX();
                                        local_50->GetX();
                                        worldmap::Worldmap::BuildMinimenu((int)pWVar3, (int)local_88, (int)local_80,
                                                                          iVar12, iVar13, iVar14);
                                    } else {
                                        (*(Minimenu**)(local_50._8_8_ + 52344))->AddComponent(local_40);
                                    }
                                }
                                if (bVar6) {
                                    local_90 = 0;
                                    while (true) {
                                        local_40.operator->();
                                        if (local_90 == 11)
                                            break;
                                        lVar16 = local_40.operator->();
                                        paVar21 = (array<Array<unsigned char>, 11ul>*)(*((lVar16 + 696))).operator->();
                                        pvVar22 = (vector<dash3d::EntityHighlight*,
                                                          BucketAllocatorEASTL>*)(*paVar21)[local_90];
                                        lVar16 = pvVar22->end();
                                        bVar6 = false;
                                        if (lVar16 == 0) {
                                            local_11c = 0;
                                        } else {
                                            uVar32 = 0;
                                            local_11c = 0;
                                            while (true) {
                                                lVar16 = local_40.operator->();
                                                paVar21 = (array<Array<unsigned char>, 11ul>*)(*((lVar16 + 696)))
                                                              .operator->();
                                                pvVar22 = (vector<dash3d::EntityHighlight*,
                                                                  BucketAllocatorEASTL>*)(*paVar21)[local_90];
                                                uVar17 = pvVar22->end();
                                                if (uVar17 <= uVar32)
                                                    break;
                                                lVar16 = local_40.operator->();
                                                cVar7 = ((lVar16 + 2056))->empty();
                                                if (!cVar7) {
                                                    lVar16 = local_40.operator->();
                                                    paVar21 = (array<Array<unsigned char>, 11ul>*)(*((lVar16 + 696)))
                                                                  .operator->();
                                                    pAVar23 = (Array<unsigned char>*)(*paVar21)[local_90];
                                                    pbVar24 = (uint8_t*)(*pAVar23)[uVar32];
                                                    bVar8 = local_118->KeyHeld((unsigned int)*pbVar24);
                                                } else {
                                                    bVar8 = 0;
                                                }
                                                lVar16 = local_40.operator->();
                                                paVar21 = (array<Array<unsigned char>, 11ul>*)(*((lVar16 + 696)))
                                                              .operator->();
                                                pAVar23 = (Array<unsigned char>*)(*paVar21)[local_90];
                                                pbVar24 = (uint8_t*)(*pAVar23)[uVar32];
                                                bVar9 = KeyPressed((Client*)local_50._8_8_, (unsigned int)*pbVar24);
                                                iVar12 = 0;
                                                if ((bVar9 | bVar8) == 1) {
                                                    lVar16 = local_40.operator->();
                                                    cVar7 = ((lVar16 + 2056))->empty();
                                                    if (!cVar7) {
                                                        lVar16 = local_40.operator->();
                                                        puVar20 = (unsigned int*)(*((lVar16 + 2056)))[local_90];
                                                        uVar17 = (unsigned long)*puVar20;
                                                        if ((int)*puVar20 <= *(int*)(local_50._8_8_ + 8488))
                                                            goto LAB_1000f46c4;
                                                    } else {
                                                    LAB_1000f46c4:
                                                        lVar16 = local_40.operator->();
                                                        lVar16 = (*((lVar16 + 696))).operator->();
                                                        pAVar23 = (Array<unsigned char>*)(*((lVar16 + 264)))[local_90];
                                                        pbVar24 = (uint8_t*)(*pAVar23)[uVar32];
                                                        pOVar33 = local_118;
                                                        bVar8 = *pbVar24;
                                                        if (bVar8 == 0) {
                                                        LAB_1000f4758:
                                                            iVar12 = 0;
                                                            bVar6 = true;
                                                            bVar10 = true;
                                                        } else {
                                                            if ((bVar8 & 8) == 0) {
                                                            LAB_1000f4707:
                                                                if (((((bVar8 & 2) == 0) ||
                                                                      (pbVar24 = (uint8_t*)local_118->KeyHeld(86),
                                                                       (char)pbVar24 != '\0')) &&
                                                                     (((bVar8 & 1) == 0 ||
                                                                       (pbVar24 = (uint8_t*)local_118->KeyHeld(82),
                                                                        (char)pbVar24 != '\0')))) &&
                                                                    (((bVar8 & 4) == 0 ||
                                                                      (pbVar24 = (uint8_t*)local_118->KeyHeld(81),
                                                                       (char)pbVar24 != '\0'))))
                                                                    goto LAB_1000f4758;
                                                            } else {
                                                                pbVar24 = (uint8_t*)local_118->KeyHeld(86);
                                                                iVar12 = 11;
                                                                if (((char)pbVar24 != '\0') ||
                                                                    (pbVar24 = (uint8_t*)pOVar33->KeyHeld(82),
                                                                     (char)pbVar24 != '\0')) {
                                                                    bVar10 = false;
                                                                    goto LAB_1000f479e;
                                                                }
                                                                pbVar24 = (uint8_t*)pOVar33->KeyHeld(81);
                                                                if ((char)pbVar24 == '\0')
                                                                    goto LAB_1000f4707;
                                                            }
                                                            iVar12 = 11;
                                                            bVar10 = false;
                                                        }
                                                    LAB_1000f479e:
                                                        uVar17 =
                                                            (((uint64_t)((int64_t)((unsigned long)pbVar24 >> 8)) << 8) |
                                                             (uint8_t)1);
                                                        local_11c = (unsigned int)uVar17;
                                                        if (!bVar10)
                                                            goto LAB_1000f47b7;
                                                    }
                                                    iVar12 = 9;
                                                    local_11c =
                                                        (unsigned int)(((uint64_t)((int64_t)(uVar17 >> 8)) << 8) |
                                                                       (uint8_t)1);
                                                }
                                            LAB_1000f47b7:
                                                if ((iVar12 != 11) && (iVar12 != 0))
                                                    break;
                                                uVar32 = uVar32 + 1;
                                            }
                                        }
                                        if (bVar6) {
                                            if (local_90 < 10) {
                                                new (local_110) eastl::string("");
                                                lVar16 = local_40.operator->();
                                                IfButtonX((Client*)local_50._8_8_, (int)local_90 + 1, &local_40,
                                                          (eastl::string*)local_110, *(int*)(lVar16 + 1984));
                                            } else {
                                                (*(Minimenu**)(local_50._8_8_ + 52344))->EndTargetMode();
                                                this_00 = *(Minimenu**)(local_50._8_8_ + 52344);
                                                lVar16 = local_40.operator->();
                                                iVar12 = *(int*)(lVar16 + 4);
                                                lVar16 = local_40.operator->();
                                                iVar13 = *(int*)(lVar16 + 8);
                                                iVar14 = GetActive((Client*)local_50._8_8_, &local_40);
                                                iVar14 = rs2lib::ServerActive::TargetMask(iVar14);
                                                lVar16 = local_40.operator->();
                                                this_00->EnterTargetMode(iVar12, iVar13, iVar14,
                                                                         *(int*)(lVar16 + 1984));
                                                TargetVerb((ReturnValue*)local_110, (Client*)local_50._8_8_, &local_40);
                                                cVar7 = local_110->empty();
                                                if (cVar7) {
                                                    *local_110 = ((eastl::string*)&constants::text::null);
                                                }
                                                lVar16 = local_40.operator->();
                                                local_2c8 = StringConstants::TAG_COLOUR(16777215);
                                                local_148 + (*((lVar16 + 704)));
                                                (*(Minimenu**)(local_50._8_8_ + 52344))
                                                    ->SetTargetStrings(*local_110, local_148);
                                            }
                                            lVar16 = local_40.operator->();
                                            lVar16 = (*((lVar16 + 696))).operator->();
                                            piVar25 = (int*)(*((lVar16 + 528)))[local_90];
                                            iVar12 = *piVar25;
                                            if (iVar12 == 0) {
                                                lVar16 = local_40.operator->();
                                                puVar26 = (uint32_t*)(*((lVar16 + 2056)))[local_90];
                                                *puVar26 = 2147483647;
                                            } else {
                                                lVar16 = local_40.operator->();
                                                piVar25 = (int*)(*((lVar16 + 2056)))[local_90];
                                                iVar13 = *(int*)(local_50._8_8_ + 8488);
                                                if (*piVar25 == 0) {
                                                    lVar16 = local_40.operator->();
                                                    lVar16 = (*((lVar16 + 696))).operator->();
                                                    piVar25 = (int*)(*((lVar16 + 572)))[local_90];
                                                    iVar13 = iVar13 + iVar12 + *piVar25;
                                                    lVar16 = local_40.operator->();
                                                    piVar25 = (int*)(*((lVar16 + 2056)))[local_90];
                                                } else {
                                                    lVar16 = local_40.operator->();
                                                    piVar25 = (int*)(*((lVar16 + 2056)))[local_90];
                                                    iVar13 = iVar13 + iVar12;
                                                }
                                                *piVar25 = iVar13;
                                            }
                                        }
                                        if ((local_11c & 1) == 0) {
                                            lVar16 = local_40.operator->();
                                            puVar26 = (uint32_t*)(*((lVar16 + 2056)))[local_90];
                                            *puVar26 = 0;
                                        }
                                        local_90 = local_90 + 1;
                                    }
                                }
                                pcVar18 = (char*)local_40.operator->();
                                if (*pcVar18 != '\0') {
                                    if ((uint8_t)local_5c == '\0') {
                                        bVar6 = false;
                                    LAB_1000f4afa:
                                        bVar8 = 0;
                                    } else {
                                        bVar6 = *(uint8_t*)(local_50._8_8_ + 8606) != '\0';
                                        if ((uint8_t)local_5c == '\0')
                                            goto LAB_1000f4afa;
                                        if (*(int*)(local_50._8_8_ + 8516) < 1) {
                                            bVar10 = true;
                                            bVar8 = 0;
                                        } else {
                                            bVar8 = 1;
                                            if (*(int*)(local_50._8_8_ + 8504) == 1) {
                                                local_1d8->XPlotBlender<int>((ResultType)local_88);
                                                uVar34 = *local_58 -
                                                         ((CoordType<UICoordSpecializer>*)(unsigned long)local_1d8[0]);
                                                local_1d0->XPlotBlender<int>((ResultType)local_80);
                                                uVar15 = *local_50 -
                                                         ((CoordType<UICoordSpecializer>*)(unsigned long)local_1d0[0]);
                                                DragTryPickup((Client*)local_50._8_8_, &local_40,
                                                              (CoordType<UICoordSpecializer>*)(unsigned long)uVar34,
                                                              (CoordType<UICoordSpecializer>*)(unsigned long)uVar15);
                                                lVar16 = local_40.operator->();
                                                iVar12 = *(int*)(lVar16 + 108);
                                                lVar16 = local_40.operator->();
                                                if (iVar12 <= *(int*)(lVar16 + 76)) {
                                                    lVar16 = local_40.operator->();
                                                    iVar12 = *(int*)(lVar16 + 104);
                                                    lVar16 = local_40.operator->();
                                                    if (iVar12 <= *(int*)(lVar16 + 72))
                                                        goto LAB_1000f4bbe;
                                                }
                                                TryStartDragContents((Client*)local_50._8_8_, &local_40);
                                            }
                                        LAB_1000f4bbe:
                                            bVar10 = false;
                                        }
                                        pIVar19 = (IfType*)local_40.operator->();
                                        cVar7 = pIVar19->HasHardcodedMouseInputBehaviour();
                                        if (cVar7) {
                                            new (local_110) UISceneSettings();
                                            iVar12 = local_58->GetX();
                                            local_110._0_4_ = iVar12 - (int)local_88;
                                            local_110._4_4_ = local_50->GetX();
                                            local_110._4_4_ = local_110._4_4_ - (int)local_80;
                                            (*((local_110 + 16))) = local_40;
                                            if (bVar6) {
                                                local_148 = render::RenderContextDesc(*local_110);
                                                local_148.field_8 = 0;
                                                local_230->push_back(local_148);
                                            }
                                            if (!bVar10) {
                                                local_148 = render::RenderContextDesc(*local_110);
                                                local_148.field_8 = 1;
                                                local_230->push_back(local_148);
                                            }
                                        }
                                    }
                                    lVar16 = local_40.operator->();
                                    if (*(int*)(lVar16 + 20) == 1400) {
                                        (*(Worldmap**)(local_50._8_8_ + 2509304))
                                            ->HandleMouse((CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)
                                                              local_58._0_4_,
                                                          (CoordType<UICoordSpecializer>*)(unsigned long)(unsigned int)
                                                              local_50._0_4_,
                                                          (bool)(bVar8 & (uint8_t)local_5c),
                                                          (bool)((uint8_t)local_5c & bVar6));
                                    }
                                    bVar10 = *local_128 != nullptr;
                                    if (bVar10) {
                                        bVar10 = *local_128 != local_40;
                                        if ((bVar10 & (uint8_t)local_5c) == 1) {
                                            iVar12 = GetActive((Client*)local_50._8_8_, &local_40);
                                            cVar7 = rs2lib::ServerActive::IsDragTarget(iVar12);
                                            if (cVar7) {
                                                *local_258 = local_40;
                                            }
                                        }
                                    }
                                    bVar10 = local_40 == *local_150;
                                    uVar5 = local_50._8_8_;
                                    if (bVar10) {
                                        *(uint8_t*)(local_50._8_8_ + 2505160) = 1;
                                        local_110->XPlotBlender<int>((ResultType)local_88);
                                        *(uint32_t*)(uVar5 + 2505164) = local_110._0_4_;
                                        local_110->XPlotBlender<int>((ResultType)local_80);
                                        *(uint32_t*)(uVar5 + 2505168) = local_110._0_4_;
                                    }
                                    lVar16 = local_40.operator->();
                                    if (*(char*)(lVar16 + 824) != '\0') {
                                        lVar16 = local_40.operator->();
                                        cVar31 = (char)local_5c;
                                        cVar7 = ((lVar16 + 1360))->empty();
                                        if (!cVar7 && cVar31 == '\x01') {
                                            bVar10 = *(int*)(local_50._8_8_ + 53140) != 0;
                                        } else {
                                            bVar10 = false;
                                        }
                                        if ((*local_128 != nullptr) ||
                                            (cVar7 = (*(Minimenu**)(local_50._8_8_ + 52344))->IsOpen(), cVar7)) {
                                            bVar6 = false;
                                            bVar8 = 0;
                                            local_5c = 0;
                                        }
                                        lVar16 = local_40.operator->();
                                        if ((*(char*)(lVar16 + 2025) == '\0') && (bVar6 == true)) {
                                            lVar16 = local_40.operator->();
                                            *(uint8_t*)(lVar16 + 2025) = 1;
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 856))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                local_f0 = local_40;
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 856)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        lVar16 = local_40.operator->();
                                        if ((bVar8 != 0) && (*(char*)(lVar16 + 2025) != '\0')) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 880))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                local_f0 = local_40;
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 880)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        lVar16 = local_40.operator->();
                                        if ((bVar8 == 0) && (*(char*)(lVar16 + 2025) != '\0')) {
                                            lVar16 = local_40.operator->();
                                            *(uint8_t*)(lVar16 + 2025) = 0;
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 904))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                local_f0 = local_40;
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 904)));
                                                local_238->push_back(*local_110);
                                            }
                                        }
                                        if (bVar8 != 0) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 928))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                local_f0 = local_40;
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 928)));
                                                local_68->push_back(*local_110);
                                                lVar16 = local_40.operator->();
                                                uVar32 = ((lVar16 + 736))->end();
                                                if (uVar32 < 2) {
                                                    *(uint8_t*)(local_50._8_8_ + 18532) = 1;
                                                }
                                            }
                                        }
                                        lVar16 = local_40.operator->();
                                        if ((*(char*)(lVar16 + 2024) == '\0') && ((uint8_t)local_5c != '\0')) {
                                            lVar16 = local_40.operator->();
                                            *(uint8_t*)(lVar16 + 2024) = 1;
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 952))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                local_f0 = local_40;
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 952)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        lVar16 = local_40.operator->();
                                        if ((*(char*)(lVar16 + 2024) != '\0') && ((uint8_t)local_5c != '\0')) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 976))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                local_f0 = local_40;
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 976)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        lVar16 = local_40.operator->();
                                        if ((*(char*)(lVar16 + 2024) != '\0') && ((uint8_t)local_5c == '\0')) {
                                            lVar16 = local_40.operator->();
                                            *(uint8_t*)(lVar16 + 2024) = 0;
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1000))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                local_f0 = local_40;
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1000)));
                                                local_238->push_back(*local_110);
                                            }
                                        }
                                        lVar16 = local_40.operator->();
                                        if ((*(int*)(lVar16 + 4) >> 16 == *(uint32_t*)(local_50._8_8_ + 2505052)) ||
                                            (lVar16 = local_40.operator->(), *(char*)(lVar16 + 785) != '\0')) {
                                            iVar12 = *(int*)(local_50._8_8_ + 53144);
                                            if (iVar12 == 0) {
                                                iVar12 = *(int*)((long)(local_50._8_8_ + 53148) + 4);
                                                if (iVar12 != 0) {
                                                    *(int*)(local_50._8_8_ + 53148) = iVar12;
                                                }
                                            } else {
                                                *(int*)(local_50._8_8_ + 53140) = iVar12;
                                                local_5c =
                                                    (uint32_t)(((uint64_t)((uint64_t)(uint32_t)((unsigned int)iVar12 >>
                                                                                                8))
                                                                << 8) |
                                                               (uint8_t)1);
                                                bVar10 = true;
                                            }
                                        }
                                        lVar16 = local_40.operator->();
                                        cVar7 = ((lVar16 + 1360))->empty();
                                        if ((!cVar7) &&
                                            ((bVar10 ||
                                              ((bVar6 = local_40 == *local_168,
                                                bVar6 && (*(uint8_t*)(local_50._8_8_ + 2505225) != '\0')))))) {
                                            new (local_110) HookReq();
                                            local_f8 = 1;
                                            local_f0 = local_40;
                                            bVar6 = local_40 == *local_168;
                                            if ((!bVar6) ||
                                                (local_dc = 0, *(uint8_t*)(local_50._8_8_ + 2505225) == '\0')) {
                                                local_dc = *(int*)(local_50._8_8_ + 53140);
                                            }
                                            if (*(char*)(local_50._8_8_ + 54760) != '\0') {
                                                this_05 = logger::default_logger();
                                                lVar16 = local_40.operator->();
                                                iVar12 = *(int*)(lVar16 + 4);
                                                lVar16 = local_40.operator->();
                                                uVar1 = *(unsigned short*)(lVar16 + 4);
                                                lVar16 = local_40.operator->();
                                                this_05->Log(false, 5,
                                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                             "OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                                                             3116, "com:%i %i %i scrollrotation:%i", iVar12 >> 16,
                                                             (unsigned int)uVar1, *(uint32_t*)(lVar16 + 20),
                                                             *(int*)(local_50._8_8_ + 53140));
                                            }
                                            lVar16 = local_40.operator->();
                                            *local_110 = (*((lVar16 + 1360)));
                                            local_68->push_back(*local_110);
                                        }
                                        lVar16 = local_40.operator->();
                                        cVar7 = ((lVar16 + 1288))->empty();
                                        if (!cVar7) {
                                            new (local_110) HookReq();
                                            local_f0 = local_40;
                                            lVar16 = local_40.operator->();
                                            *local_110 = (*((lVar16 + 1288)));
                                            local_260->push_back(*local_110);
                                        }
                                        lVar16 = local_40.operator->();
                                        cVar7 = ((lVar16 + 1120))->empty();
                                        if ((!cVar7) &&
                                            (iVar12 = *(uint32_t*)(local_50._8_8_ + 2505940),
                                             lVar16 = local_40.operator->(), *(int*)(lVar16 + 2032) < iVar12)) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1144))->empty();
                                            if ((!cVar7) && (iVar12 = *(uint32_t*)(local_50._8_8_ + 2505940),
                                                             lVar16 = local_40.operator->(),
                                                             iVar12 - *(int*)(lVar16 + 2032) < 33)) {
                                                lVar16 = local_40.operator->();
                                                uVar34 = *(unsigned int*)(lVar16 + 2032);
                                                if ((int)uVar34 < (int)*(uint32_t*)(local_50._8_8_ + 2505940)) {
                                                    bVar6 = false;
                                                    do {
                                                        piVar25 = (int*)(*local_278)[(unsigned long)(uVar34 & 31)];
                                                        iVar12 = *piVar25;
                                                        uVar32 = 0;
                                                        do {
                                                            lVar16 = local_40.operator->();
                                                            uVar17 = ((lVar16 + 1144))->size();
                                                            if (uVar17 <= uVar32)
                                                                goto LAB_1000f65d8;
                                                            lVar16 = local_40.operator->();
                                                            piVar25 = (int*)(*((lVar16 + 1144)))[uVar32];
                                                            uVar32 = uVar32 + 1;
                                                        } while (*piVar25 != iVar12);
                                                        new (local_110) HookReq();
                                                        local_f0 = local_40;
                                                        lVar16 = local_40.operator->();
                                                        *local_110 = (*((lVar16 + 1120)));
                                                        local_68->push_back(*local_110);
                                                        bVar6 = true;
                                                    LAB_1000f65d8:
                                                        uVar34 = uVar34 + 1;
                                                    } while (
                                                        ((int)uVar34 < (int)*(uint32_t*)(local_50._8_8_ + 2505940)) &&
                                                        (!bVar6));
                                                }
                                            } else {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1120)));
                                                local_68->push_back(*local_110);
                                            }
                                            uVar2 = *(uint32_t*)(local_50._8_8_ + 2505940);
                                            lVar16 = local_40.operator->();
                                            *(uint32_t*)(lVar16 + 2032) = uVar2;
                                        }
                                        lVar16 = local_40.operator->();
                                        cVar7 = ((lVar16 + 1176))->empty();
                                        if ((!cVar7) &&
                                            (iVar12 = *(uint32_t*)(local_50._8_8_ + 2506072),
                                             lVar16 = local_40.operator->(), *(int*)(lVar16 + 2036) < iVar12)) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1200))->empty();
                                            if ((!cVar7) && (iVar12 = *(uint32_t*)(local_50._8_8_ + 2506072),
                                                             lVar16 = local_40.operator->(),
                                                             iVar12 - *(int*)(lVar16 + 2036) < 33)) {
                                                lVar16 = local_40.operator->();
                                                uVar34 = *(unsigned int*)(lVar16 + 2036);
                                                if ((int)uVar34 < (int)*(uint32_t*)(local_50._8_8_ + 2506072)) {
                                                    bVar6 = false;
                                                    do {
                                                        piVar25 = (int*)(*local_270)[(unsigned long)(uVar34 & 31)];
                                                        iVar12 = *piVar25;
                                                        uVar32 = 0;
                                                        do {
                                                            lVar16 = local_40.operator->();
                                                            uVar17 = ((lVar16 + 1200))->size();
                                                            if (uVar17 <= uVar32)
                                                                goto LAB_1000f66e8;
                                                            lVar16 = local_40.operator->();
                                                            piVar25 = (int*)(*((lVar16 + 1200)))[uVar32];
                                                            uVar32 = uVar32 + 1;
                                                        } while (*piVar25 != iVar12);
                                                        new (local_110) HookReq();
                                                        local_f0 = local_40;
                                                        lVar16 = local_40.operator->();
                                                        *local_110 = (*((lVar16 + 1176)));
                                                        local_68->push_back(*local_110);
                                                        bVar6 = true;
                                                    LAB_1000f66e8:
                                                        uVar34 = uVar34 + 1;
                                                    } while (
                                                        ((int)uVar34 < (int)*(uint32_t*)(local_50._8_8_ + 2506072)) &&
                                                        (!bVar6));
                                                }
                                            } else {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1176)));
                                                local_68->push_back(*local_110);
                                            }
                                            uVar2 = *(uint32_t*)(local_50._8_8_ + 2506072);
                                            lVar16 = local_40.operator->();
                                            *(uint32_t*)(lVar16 + 2036) = uVar2;
                                        }
                                        lVar16 = local_40.operator->();
                                        cVar7 = ((lVar16 + 1232))->empty();
                                        if ((!cVar7) &&
                                            (iVar12 = *(uint32_t*)(local_50._8_8_ + 2506204),
                                             lVar16 = local_40.operator->(), *(int*)(lVar16 + 2040) < iVar12)) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1256))->empty();
                                            if ((!cVar7) && (iVar12 = *(uint32_t*)(local_50._8_8_ + 2506204),
                                                             lVar16 = local_40.operator->(),
                                                             iVar12 - *(int*)(lVar16 + 2040) < 33)) {
                                                lVar16 = local_40.operator->();
                                                uVar34 = *(unsigned int*)(lVar16 + 2040);
                                                if ((int)uVar34 < (int)*(uint32_t*)(local_50._8_8_ + 2506204)) {
                                                    bVar6 = false;
                                                    do {
                                                        piVar25 = (int*)(*local_268)[(unsigned long)(uVar34 & 31)];
                                                        iVar12 = *piVar25;
                                                        uVar32 = 0;
                                                        do {
                                                            lVar16 = local_40.operator->();
                                                            uVar17 = ((lVar16 + 1256))->size();
                                                            if (uVar17 <= uVar32)
                                                                goto LAB_1000f67f8;
                                                            lVar16 = local_40.operator->();
                                                            piVar25 = (int*)(*((lVar16 + 1256)))[uVar32];
                                                            uVar32 = uVar32 + 1;
                                                        } while (*piVar25 != iVar12);
                                                        new (local_110) HookReq();
                                                        local_f0 = local_40;
                                                        lVar16 = local_40.operator->();
                                                        *local_110 = (*((lVar16 + 1232)));
                                                        local_68->push_back(*local_110);
                                                        bVar6 = true;
                                                    LAB_1000f67f8:
                                                        uVar34 = uVar34 + 1;
                                                    } while (
                                                        ((int)uVar34 < (int)*(uint32_t*)(local_50._8_8_ + 2506204)) &&
                                                        (!bVar6));
                                                }
                                            } else {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1232)));
                                                local_68->push_back(*local_110);
                                            }
                                            uVar2 = *(uint32_t*)(local_50._8_8_ + 2506204);
                                            lVar16 = local_40.operator->();
                                            *(uint32_t*)(lVar16 + 2040) = uVar2;
                                        }
                                        iVar12 = *(int*)(local_50._8_8_ + 2506340);
                                        lVar16 = local_40.operator->();
                                        if (*(int*)(lVar16 + 2028) < iVar12) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1384))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1384)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        iVar12 = *(int*)(local_50._8_8_ + 2506344);
                                        lVar16 = local_40.operator->();
                                        if (*(int*)(lVar16 + 2028) < iVar12) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1480))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1480)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        iVar12 = *(int*)(local_50._8_8_ + 2506348);
                                        lVar16 = local_40.operator->();
                                        if (*(int*)(lVar16 + 2028) < iVar12) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1504))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1504)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        iVar12 = *(int*)(local_50._8_8_ + 2506352);
                                        lVar16 = local_40.operator->();
                                        if (*(int*)(lVar16 + 2028) < iVar12) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1528))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1528)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        iVar12 = *(int*)(local_50._8_8_ + 2506356);
                                        lVar16 = local_40.operator->();
                                        if (*(int*)(lVar16 + 2028) < iVar12) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1552))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1552)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        iVar12 = *(int*)(local_50._8_8_ + 2506360);
                                        lVar16 = local_40.operator->();
                                        if (*(int*)(lVar16 + 2028) < iVar12) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1744))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1744)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        iVar12 = *(int*)((long)(local_50._8_8_ + 2506360) + 4);
                                        lVar16 = local_40.operator->();
                                        if (*(int*)(lVar16 + 2028) < iVar12) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1768))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1768)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        iVar12 = *(uint32_t*)(local_50._8_8_ + 2506368);
                                        lVar16 = local_40.operator->();
                                        if (*(int*)(lVar16 + 2028) < iVar12) {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1576))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1576)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        iVar12 = *(int*)(local_50._8_8_ + 2505808);
                                        lVar16 = local_40.operator->();
                                        *(int*)(lVar16 + 2028) = iVar12;
                                        lVar16 = local_40.operator->();
                                        cVar7 = ((lVar16 + 1408))->empty();
                                        if ((!cVar7) && (*(unsigned long*)(local_50._8_8_ + 8608) != 0)) {
                                            uVar32 = 0;
                                            do {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                puVar26 = (uint32_t*)(*local_290)[uVar32];
                                                local_c0 = *puVar26;
                                                puVar27 = (unsigned short*)(*local_288)[uVar32];
                                                local_bc = (unsigned int)*puVar27;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1408)));
                                                local_68->push_back(*local_110);
                                                uVar32 = uVar32 + 1;
                                            } while (uVar32 < *(unsigned long*)(local_50._8_8_ + 8608));
                                        }
                                        lVar16 = local_40.operator->();
                                        cVar7 = ((lVar16 + 1432))->empty();
                                        if (!cVar7) {
                                            pLVar28 = (Layout*)local_118->GetManAppearance();
                                            puVar26 = (uint32_t*)pLVar28->HeapBeginPtr();
                                            puVar29 = (uint32_t*)pLVar28->end();
                                            for (; puVar26 != puVar29; puVar26 = puVar26 + 1) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                local_c0 = *puVar26;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1432)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        lVar16 = local_40.operator->();
                                        cVar7 = ((lVar16 + 1456))->empty();
                                        if (!cVar7) {
                                            pLVar28 = (Layout*)local_118->GetKeysUp();
                                            puVar26 = (uint32_t*)pLVar28->HeapBeginPtr();
                                            puVar29 = (uint32_t*)pLVar28->end();
                                            for (; puVar26 != puVar29; puVar26 = puVar26 + 1) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                local_c0 = *puVar26;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1456)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                        if (*(uint8_t*)(local_50._8_8_ + 53256) != '\0') {
                                            lVar16 = local_40.operator->();
                                            cVar7 = ((lVar16 + 1696))->empty();
                                            if (!cVar7) {
                                                new (local_110) HookReq();
                                                local_f0 = local_40;
                                                lVar16 = local_40.operator->();
                                                *local_110 = (*((lVar16 + 1696)));
                                                local_68->push_back(*local_110);
                                            }
                                        }
                                    }
                                }
                                pcVar18 = (char*)local_40.operator->();
                                if (*pcVar18 == '\0') {
                                    bVar6 = *local_128 != nullptr;
                                    if ((bVar6) || (cVar7 = (*(Minimenu**)(local_50._8_8_ + 52344))->IsOpen(), cVar7))
                                        goto LAB_1000f3b94;
                                    lVar16 = local_40.operator->();
                                    if ((-1 < *(int*)(lVar16 + 1864)) ||
                                        (lVar16 = local_40.operator->(), *(int*)(lVar16 + 124) != 0)) {
                                        local_1c8->XPlotBlender<int>(local_78);
                                        cVar7 =
                                            *local_58 >= ((CoordType<UICoordSpecializer>*)(unsigned long)local_1c8[0]);
                                        if (cVar7) {
                                            local_1c0->XPlotBlender<int>(local_74);
                                            cVar7 = *local_50 >=
                                                    ((CoordType<UICoordSpecializer>*)(unsigned long)local_1c0[0]);
                                            if (cVar7) {
                                                local_1b8->XPlotBlender<int>(local_70);
                                                cVar7 = CoordType<UICoordSpecializer>::operator<(
                                                    (CoordType<UICoordSpecializer>*)local_58,
                                                    (CoordType<UICoordSpecializer>*)(unsigned long)local_1b8[0]);
                                                if (cVar7) {
                                                    local_1b0->XPlotBlender<int>(local_6c);
                                                    cVar7 = CoordType<UICoordSpecializer>::operator<(
                                                        (CoordType<UICoordSpecializer>*)local_50,
                                                        (CoordType<UICoordSpecializer>*)(unsigned long)local_1b0[0]);
                                                    if (cVar7) {
                                                        lVar16 = local_40.operator->();
                                                        if (*(int*)(lVar16 + 1864) < 0) {
                                                            *local_158 = local_40;
                                                        } else {
                                                            lVar16 = local_40.operator->();
                                                            ifType = (shared_ptr<rs2lib::IfType>*)(*local_160)[(long)*(
                                                                int*)(lVar16 + 1864)];
                                                            *local_158 = *ifType;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    lVar16 = local_40.operator->();
                                    if (*(int*)(lVar16 + 12) == 8) {
                                        local_1a8->XPlotBlender<int>(local_78);
                                        cVar7 =
                                            *local_58 >= ((CoordType<UICoordSpecializer>*)(unsigned long)local_1a8[0]);
                                        if (cVar7) {
                                            local_1a0->XPlotBlender<int>(local_74);
                                            cVar7 = *local_50 >=
                                                    ((CoordType<UICoordSpecializer>*)(unsigned long)local_1a0[0]);
                                            if (cVar7) {
                                                local_198->XPlotBlender<int>(local_70);
                                                cVar7 = CoordType<UICoordSpecializer>::operator<(
                                                    (CoordType<UICoordSpecializer>*)local_58,
                                                    (CoordType<UICoordSpecializer>*)(unsigned long)local_198[0]);
                                                if (cVar7) {
                                                    local_190->XPlotBlender<int>(local_6c);
                                                    cVar7 = CoordType<UICoordSpecializer>::operator<(
                                                        (CoordType<UICoordSpecializer>*)local_50,
                                                        (CoordType<UICoordSpecializer>*)(unsigned long)local_190[0]);
                                                    if (cVar7) {
                                                        *local_250 = local_40;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    lVar16 = local_40.operator->();
                                    iVar12 = *(int*)(lVar16 + 108);
                                    lVar16 = local_40.operator->();
                                    if (*(int*)(lVar16 + 76) < iVar12) {
                                        if (((uint8_t)local_5c != '\0') && (*(int*)(local_50._8_8_ + 8504) == 1)) {
                                            *(uint8_t*)(local_50._8_8_ + 8604) = 1;
                                            TryStartDragContents((Client*)local_50._8_8_, &local_40);
                                        }
                                        lVar16 = local_40.operator->();
                                        arg2_00 = *(int*)(lVar16 + 72) + (int)local_88;
                                        lVar16 = local_40.operator->();
                                        iVar12 = *(int*)(lVar16 + 76);
                                        lVar16 = local_40.operator->();
                                        iVar13 = *(int*)(lVar16 + 108);
                                        iVar14 = local_58->GetX();
                                        arg7_00 = local_50->GetX();
                                        DoScrollbar((Client*)local_50._8_8_, &local_40, arg2_00, (int)local_80, iVar12,
                                                    iVar13, iVar14, arg7_00);
                                    }
                                }
                                lVar16 = local_40.operator->();
                                if (*(int*)(lVar16 + 12) == 0) {
                                    lVar16 = local_40.operator->();
                                    iVar12 = *(int*)(lVar16 + 4);
                                    lVar16 = local_40.operator->();
                                    iVar13 = *(int*)(lVar16 + 96);
                                    lVar16 = local_40.operator->();
                                    LoopLayer((Client*)local_50._8_8_, local_160, iVar12, local_78, local_74, local_70,
                                              local_6c, (int)local_88 - iVar13, (int)local_80 - *(int*)(lVar16 + 100));
                                    lVar16 = local_40.operator->();
                                    cVar7 = ((lVar16 + 2000))->empty();
                                    if (!cVar7) {
                                        lVar16 = local_40.operator->();
                                        lVar30 = local_40.operator->();
                                        iVar12 = *(int*)(lVar30 + 4);
                                        lVar30 = local_40.operator->();
                                        iVar13 = *(int*)(lVar30 + 96);
                                        lVar30 = local_40.operator->();
                                        LoopLayer((Client*)local_50._8_8_,
                                                  (Array<shared_ptr<rs2lib::IfType>>*)(lVar16 + 2000), iVar12, local_78,
                                                  local_74, local_70, local_6c, (int)local_88 - iVar13,
                                                  (int)local_80 - *(int*)(lVar30 + 100));
                                    }
                                    lVar16 = local_40.operator->();
                                    if (*(char*)(lVar16 + 24) == '\0') {
                                        lVar16 = local_40.operator->();
                                        *local_110 = local_240->find(*((lVar16 + 4)));
                                        local_148 = local_240->end();
                                        cVar7 = *local_110 != local_148;
                                        if (cVar7) {
                                            lVar16 = local_110->HeapBeginPtr();
                                            if (*(int*)(lVar16 + 8) == 0) {
                                                local_188->XPlotBlender<int>(local_78);
                                                cVar7 = *local_58 >=
                                                        ((CoordType<UICoordSpecializer>*)(unsigned long)local_188[0]);
                                                if (cVar7) {
                                                    local_180->XPlotBlender<int>(local_74);
                                                    cVar7 =
                                                        *local_50 >=
                                                        ((CoordType<UICoordSpecializer>*)(unsigned long)local_180[0]);
                                                    if (cVar7) {
                                                        local_178->XPlotBlender<int>(local_70);
                                                        cVar7 = CoordType<UICoordSpecializer>::operator<(
                                                            (CoordType<UICoordSpecializer>*)local_58,
                                                            (CoordType<UICoordSpecializer>*)(unsigned long)
                                                                local_178[0]);
                                                        if (cVar7) {
                                                            local_170->XPlotBlender<int>(local_6c);
                                                            cVar7 = CoordType<UICoordSpecializer>::operator<(
                                                                (CoordType<UICoordSpecializer>*)local_50,
                                                                (CoordType<UICoordSpecializer>*)(unsigned long)
                                                                    local_170[0]);
                                                            if (((cVar7) &&
                                                                 (cVar7 =
                                                                      (*(Minimenu**)(local_50._8_8_ + 52344))->IsOpen(),
                                                                  !cVar7)) &&
                                                                (*(char*)(local_50._8_8_ + 53265) == '\0')) {
                                                                ClearHookQueueMouseEvents((Client*)local_50._8_8_,
                                                                                          false);
                                                                uVar5 = local_50._8_8_;
                                                                ClearHardcodedMouseEvents((Client*)local_50._8_8_);
                                                                if (*(int*)(uVar5 + 2505188) == 0) {
                                                                    local_148 = shared_ptr();
                                                                    *local_128 = local_148;
                                                                    local_148 = shared_ptr();
                                                                    *local_150 = local_148;
                                                                }
                                                                cVar7 = NeedBuildMinimenu((Client*)local_50._8_8_);
                                                                if (cVar7) {
                                                                    (*(Minimenu**)(local_50._8_8_ + 52344))
                                                                        ->ResetMinimenu();
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            lVar16 = local_110->HeapBeginPtr();
                                            LoopInterface((Client*)local_50._8_8_, *(int*)(lVar16 + 4), local_78,
                                                          local_74, local_70, local_6c, (int)local_88, (int)local_80);
                                        }
                                    }
                                }
                                lVar16 = local_40.operator->();
                                cVar7 = local_248->OverlayExistsAtIndex(*(int*)(lVar16 + 680));
                                if (cVar7) {
                                    lVar16 = local_40.operator->();
                                    ifTypes_00 = (Array<shared_ptr<rs2lib::IfType>>*)local_248->GetOverlay(
                                        *(int*)(lVar16 + 680));
                                    if (ifTypes_00 != nullptr) {
                                        lVar16 = local_40.operator->();
                                        iVar12 = *(int*)(lVar16 + 96);
                                        lVar16 = local_40.operator->();
                                        LoopLayer((Client*)local_50._8_8_, ifTypes_00, -1, local_78, local_74, local_70,
                                                  local_6c, (int)local_88 - iVar12,
                                                  (int)local_80 - *(int*)(lVar16 + 100));
                                    }
                                }
                            }
                        }
                    LAB_1000f3b94:
                        pOVar33 = local_118;
                        ifTypes = local_160;
                        arg2 = local_21c;
                    }
                }
            LAB_1000f3bb0:
                uVar32 = local_2a8 + 1;
                uVar17 = ifTypes.end();
            } while (uVar32 < uVar17);
        }
    }

    // 0x1000f6c50
    void Client::ToggleUI() {
        NXTPixToolkit* this_00 = field_144;
        uint8_t bVar1 = this_00->GetUIVisible();
        this_00->ShowUI((bool)(bVar1 ^ 1));
    }

    // 0x1000f6c80
    void Client::ClientDrop() {
        if ((&field_19120)->operator_cast_to_bool() != '\0') {
            ((ServerConnection*)field_19120.operator->())->Close();
        }
    }

    // 0x1000f6cc0
    void Client::SetClanTransit() {
        field_2506352 = field_2505808;
        field_2506356 = field_2505808;
    }

    // 0x1000f6ce0
    void Client::ShowCoord() {
        m_pWorldmap->field_0 = m_pWorldmap->field_0 ^ 1;
    }

    // 0x1000f6cf0
    void Client::HardError() {
        field_54884 = 1;
    }

    // 0x1000f6d00
    void Client::ToggleRenderSelf() {
        field_52033 = field_52033 ^ 1;
    }

    // 0x1000f6d10
    void Client::ToggleMouseOverText() {
        uint8_t* puVar1 = &field_52344->field_2;
        *puVar1 = *puVar1 ^ 1;
    }

    // 0x1000f6d30
    void Client::ToggleAntiDrag() {
        field_54384 = field_54384 ^ 1;
    }

    // 0x1000f6d40
    void Client::SteamShop() {
        function<bool()> local_58[56];
        long local_20;

        shared_ptr<ApplicationContext>* this_00 =
            (shared_ptr<ApplicationContext>*)(*(void (*)(...)) * *(uint64_t**)this)();
        long* plVar1 = (long*)(*this_00).operator->();
        __9* arg1 = (__9*)(**(void (**)(...))(*plVar1 + 72))(plVar1);
        std::function<bool()>::function<Client::SteamShop()::__9, void>(local_58, arg1);
        (*(void (*)(...))arg1->field_0[10])(arg1, 0, 10);
        AddScheduledFunction(*local_58, 50, -1);
    }

    // 0x1000f6e00
    long long Client::AddScheduledFunction(std::function<bool()>& callback, unsigned long long arg2, long long arg3) {
        if (arg3 == -1) {
            arg3 = field_7306792;
            field_7306792 = arg3 + 1;
        }
        return local_80 = arg3;
        RemoveScheduledFunction(arg3);
        uint64_t local_48 = 0;
        uint64_t uStack_40 = 0;
        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        local_78._16_8_ = 0;
        uint64_t uStack_60 = 0;
        local_78.field_0 = 0;
        local_78.field_8 = 0;
        TransitionInfo local_78;
        auto local_98 = field_7306736.emplace<long long&, Client::ScheduledFunction>(local_80, local_78);
        long* plVar1 = &field_7306736[local_80];
        (*((plVar1 + 2))) = callback;
        unsigned long long uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        *plVar1 = uVar2 + arg2;
        plVar1[1] = arg2;
        return local_80;
    }

    // 0x1000f6f00
    void Client::ReloadHighlights() {
        m_highlightManager->LoadFromFiles();
    }

    // 0x1000f6f30
    void Client::SendTestNotification() {

        eastl::string local_68("Heyo!");
        eastl::string local_40("This is a friendly local notification!");
        notifications::SendLocalNotification(local_68, local_40, 0, 0);
    }

    // 0x1000f6fe0
    void Client::PrintDrawDistance() {
        unsigned int uVar1 = ((world*)field_19184.operator->())->GetDrawDistance();
        eastl::string local_68;
        local_68.append_sprintf("Current Draw Distance is %d", (unsigned long)uVar1);
        eastl::string local_48("");
        AddChat(99, local_48, local_68);
    }

    // 0x1000f70b0
    void Client::ToggleSkybox() {
        eastl::string local_70;
        eastl::string local_48;

        bool bVar1 = field_7164752;
        field_7164752 = (bool)(bVar1 ^ 1);
        if (bVar1 == false) {
            local_70 = eastl::string("");
            local_48 = eastl::string("Turning on Skybox");
            AddChat(99, local_70, local_48);
        } else {
            local_70 = eastl::string("");
            new (&local_48) eastl::string("Turning off Skybox");
            AddChat(99, local_70, local_48);
        }
        field_7164656->DrawSkybox(field_7164752);
    }

    // 0x1000f71e0
    void Client::SetSkyboxColour(int arg1, int arg2, int arg3) {
        unsigned long long arg4 = FrameTime::GetCurrentTimeNS();
        field_7164753 = 1;
        field_7164656->SetSkyboxColour((float)arg1, (float)arg2, (float)arg3, arg4);
    }

    // 0x1000f7230
    void Client::DefaultSkybox() {

        field_7164753 = 0;
        eastl::string local_70("");
        eastl::string local_48("Resetting Skybox Colour");
        AddChat(99, local_70, local_48);
    }

    // 0x1000f72f0
    void Client::ToggleFog() {
        eastl::string local_70;
        eastl::string local_48;

        uint8_t* this_00 = &field_7164760;
        uint8_t bVar1 = this_00->Enabled();
        unsigned long long arg2 = FrameTime::GetCurrentTimeMS();
        this_00->SetEnabled((bool)(bVar1 ^ 1), arg2);
        if (this_00->Enabled() == '\0') {
            local_70 = eastl::string("");
            local_48 = eastl::string("Turning off Fog Effect");
            AddChat(99, local_70, local_48);
        } else {
            local_70 = eastl::string("");
            local_48 = eastl::string("Turning on Fog Effect");
            AddChat(99, local_70, local_48);
        }
    }

    // 0x1000f7430
    void Client::SetFogIntensity(int arg1) {
        unsigned long long arg2 = FrameTime::GetCurrentTimeMS();
        *(uint8_t*)((long)&field_7164880 + 1) = 1;
        field_7164760.SetFogIntensity(arg1, arg2);
    }

    // 0x1000f7470
    void Client::SetFogIntensity(float arg1) {
        unsigned long long arg2 = FrameTime::GetCurrentTimeMS();
        *(uint8_t*)((long)&field_7164880 + 1) = 1;
        field_7164760.SetFogIntensity(arg1, arg2);
    }

    // 0x1000f74b0
    void Client::SetFogDistance(int arg1) {
        unsigned long long arg2 = FrameTime::GetCurrentTimeMS();
        *(uint8_t*)&field_7164880 = 1;
        field_7164760.SetFogDistance(arg1, arg2);
    }

    // 0x1000f74f0
    void Client::SetFogDistance(float arg1) {
        unsigned long long arg2 = FrameTime::GetCurrentTimeMS();
        *(uint8_t*)&field_7164880 = 1;
        field_7164760.SetFogDistance(arg1, arg2);
    }

    // 0x1000f7530
    void Client::DefaultFogSettings() {

        field_7164880 = 0;
        eastl::string local_70("");
        eastl::string local_48("Resetting Fog Settings");
        AddChat(99, local_70, local_48);
    }

    // 0x1000f75f0
    void Client::GetLootSourceCount() {
        unsigned int uVar1 = m_lootTrackerSaveHandler->GetNumberOfTrackedSources();
        eastl::string local_58((CtorSprintf*)"Current number of sources being tracked: %d",
                               (char*)(unsigned long)uVar1);
        eastl::string local_38("");
        AddChat(99, local_38, local_58);
    }

    // 0x1000f7690
    void Client::ResetLootTracker() {
        char* str;

        m_lootTrackerSaveHandler->Clear();
        eastl::string local_58(
            (CtorSprintf*)"Resetting loot tracker. Clearning Loot table and Resetting counts to 0 for Source table.",
            str);
        eastl::string local_38("");
        AddChat(99, local_38, local_58);
    }

    // 0x1000f7730
    void Client::SetUsingRSeven(bool arg1, bool arg2) {
        long* plVar2;
        uint32_t in_register_00000011;

        field_53258 = arg1;
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            plVar2 = (long*)OSRenderCore_AudioThread::Instance();
            if (((OSRenderCore_LogicThread_Common*)((long)plVar2 + *(long*)(*plVar2 - 24)))->IsLogicThread() != '\0') {
                RebuildMap();
                return;
            }
        }
        field_53257 = 1;
    }

    // 0x1000f77a0
    void Client::RequestMapRebuild() {
        field_53257 = 1;
        field_53258 = m_usingRSeven;
    }

    // 0x1000f77c0
    Fog* Client::GetFog() {
        return (Fog*)&field_7164760;
    }

    // 0x1000f77d0
    void Client::DoCheat(const eastl::string& str) {
        ((Console*)field_7306800.operator->())
            ->QueueCommand((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), "", -1, true);
    }

    // 0x1000f7820
    void Client::SendCheatToServer(const eastl::string& str) {
        int iVar1;
        ServerConnection* pSVar2;
        Isaac* isaac;
        uint8_t local_60[64];

        if (field_8448 == 30) {
            pSVar2 = (ServerConnection*)field_19120.operator->();
            isaac = pSVar2->GetOutgoingEncryption();
            *local_60 = shared::ClientMessage::MakeClientMessage(11, *isaac);
            iVar1 = str.size();
            ((local_60 + 8))->p1<shared::LoginProt::ID>(iVar1 + 1);
            ((local_60 + 8))->pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(str, false);
            pSVar2 = (ServerConnection*)field_19120.operator->();
            pSVar2->SendClientMessage(*local_60);
        }
    }

    // 0x1000f78d0
    uint32_t Client::RemoveScheduledFunction(long long arg1) {
        hashtable_iterator<eastl::pair<long long const, Client::ScheduledFunction>, true, false>* local_38[2];

        uint8_t* this_00 = &field_7306736;
        auto local_58 = this_00->find(arg1);
        auto local_48 = this_00->end();
        uint32_t uVar1 = local_58 != local_48;
        if ((char)uVar1 != '\0') {
            new (local_38) eastl::hashtable_iterator(&local_58);
            local_48 = this_00->erase(local_38[0]);
        }
        return uVar1;
    }

    // 0x1000f7b80
    void Client::CinemaCameraMovePosition(int arg1, int arg2, int arg3) {
        int iVar1;

        int iVar2 = field_53088;
        if (iVar2 < arg1) {
            iVar2 = iVar2 + field_53016 + ((arg1 - iVar2) * field_53020) / 1000;
            if (arg1 < iVar2) {
                iVar2 = arg1;
            }
            field_53088 = iVar2;
        }
        iVar2 = field_53088;
        if (iVar2 - arg1 != 0 && arg1 <= iVar2) {
            iVar1 = (int)((unsigned long)((long)((iVar2 - arg1) * field_53020) * -274877907) >> 32);
            iVar2 = (iVar2 - field_53016) + ((iVar1 >> 6) - (iVar1 >> 31));
            if (iVar2 < arg1) {
                iVar2 = arg1;
            }
            field_53088 = iVar2;
        }
        iVar2 = field_53092;
        if (iVar2 < arg3) {
            iVar2 = iVar2 + field_53016 + ((arg3 - iVar2) * field_53020) / 1000;
            if (arg3 < iVar2) {
                iVar2 = arg3;
            }
            field_53092 = iVar2;
        }
        iVar2 = field_53092;
        if (iVar2 - arg3 != 0 && arg3 <= iVar2) {
            iVar1 = (int)((unsigned long)((long)((iVar2 - arg3) * field_53020) * -274877907) >> 32);
            iVar2 = (iVar2 - field_53016) + ((iVar1 >> 6) - (iVar1 >> 31));
            if (iVar2 < arg3) {
                iVar2 = arg3;
            }
            field_53092 = iVar2;
        }
        iVar2 = field_53096;
        if (iVar2 < arg2) {
            iVar2 = iVar2 + field_53016 + ((arg2 - iVar2) * field_53020) / 1000;
            if (arg2 < iVar2) {
                iVar2 = arg2;
            }
            field_53096 = iVar2;
        }
        iVar2 = field_53096;
        if (iVar2 - arg2 != 0 && arg2 <= iVar2) {
            iVar1 = (int)((unsigned long)((long)((iVar2 - arg2) * field_53020) * -274877907) >> 32);
            iVar2 = (iVar2 - field_53016) + ((iVar1 >> 6) - (iVar1 >> 31));
            if (iVar2 < arg2) {
                iVar2 = arg2;
            }
            field_53096 = iVar2;
        }
    }

    // 0x1000f7d10
    void Client::CinemaCameraMoveAngle(int arg1, int arg2) {
        int iVar3;

        int iVar1 = dash3d::world::ClampPitchAngle(arg1);
        int iVar2 = field_53100;
        if (iVar2 < iVar1) {
            iVar2 = iVar2 + field_53036 + ((iVar1 - iVar2) * field_53040) / 1000;
            if (iVar1 < iVar2) {
                iVar2 = iVar1;
            }
        LAB_1000f7d8e:
            field_53100 = iVar2;
        } else if (iVar2 - iVar1 != 0 && iVar1 <= iVar2) {
            iVar3 = (int)((unsigned long)((long)((iVar2 - iVar1) * field_53040) * -274877907) >> 32);
            iVar2 = (iVar2 - field_53036) + ((iVar3 >> 6) - (iVar3 >> 31));
            if (iVar2 < iVar1) {
                iVar2 = iVar1;
            }
            goto LAB_1000f7d8e;
        }
        iVar1 = arg2 - field_53104;
        iVar2 = iVar1 + 2048;
        if (-1025 < iVar1) {
            iVar2 = iVar1;
        }
        if (1024 < iVar1) {
            iVar2 = iVar1 - 2048;
        }
        if (iVar2 < 1) {
            if (-1 < iVar2)
                goto LAB_1000f7df9;
            iVar1 = (int)((unsigned long)((long)-(field_53040 * iVar2) * -274877907) >> 32);
            iVar3 = (iVar1 >> 6) - (iVar1 >> 31);
            iVar1 = -field_53036;
        } else {
            iVar3 = (field_53040 * iVar2) / 1000;
            iVar1 = field_53036;
        }
        field_53104 = field_53104 + iVar1 + iVar3 & 2047;
    LAB_1000f7df9:
        iVar3 = arg2 - field_53104;
        iVar1 = iVar3 + 2048;
        if (-1025 < iVar3) {
            iVar1 = iVar3;
        }
        if (1024 < iVar3) {
            iVar1 = iVar3 - 2048;
        }
        if ((((iVar1 < 0) && (0 < iVar2)) || (0 < iVar1 && iVar2 < 0)) || (field_53104 == arg2)) {
            field_53104 = arg2;
        }
    }

    // 0x1000fd4c0
    void Client::DrawLayer(const Array<shared_ptr<rs2lib::IfType>>& ifTypes, int arg2, int arg3, int arg4, int arg5,
                           int arg6, int arg7, int arg8, int arg9) {
        Worldmap* this_00;
        uint8_t auVar1[16];
        RSevenModelLitRenderer* this_01;
        hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_02;
        unique_ptr<ServerConnection, std::default_delete<ServerConnection> _>* this_03;
        RollingAverageCounter* this_04;
        shared_ptr<ClientPlayer>* this_05;
        unsigned int uVar2;
        bool bVar4;
        char cVar5;
        uint8_t bVar6;
        unsigned int uVar7;
        uint32_t uVar8;
        unsigned int uVar9;
        uint64_t extraout_var;
        unsigned long uVar12;
        shared_ptr<configdecoder::ObjType>* psVar13;
        int* piVar14;
        uint32_t* puVar15;
        char* pcVar16;
        unsigned int* puVar17;
        EnvLightProbeSettings* this_07;
        ServerConnection* pSVar18;
        InputFieldKeyboardHandler* pIVar19;
        uint64_t uVar20;
        uint64_t uVar21;
        Minimap* pMVar23;
        NXTRenderer* pNVar24;
        long lVar25;
        long lVar26;
        long* plVar27;
        IfType* pIVar28;
        PixfontGeneric* pPVar29;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<graphics::Pix32>* pix32;
        ClientPlayer* this_09;
        Logger* this_10;
        Pix32* pPVar30;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_11;
        FixedPrimitiveBatchData<256ul>* this_12;
        PlayerModel* pPVar31;
        SeqType* pSVar32;
        bool* arg5_00;
        array<int, _2048ul>* paVar33;
        uint64_t extraout_var_00;
        NXTPixToolkit* this_14;
        SoundInstance* this_15;
        Client* pCVar34;
        SoftwareWorldRenderer* this_16;
        ModelLit* pMVar35;
        PostProcessManager* this_17;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        TextRun* pTVar36;
        uint8_t arg3_00;
        int iVar37;
        unsigned long uVar38;
        unsigned int arg6_00;
        void* arg2_00;
        eastl::string* str;
        array<bool, 100ul>* this_18;
        NpcType* this_19;
        shared_ptr<configdecoder::ObjType>* psVar39;
        GridRect* this_20;
        int iVar40;
        unsigned int uVar41;
        unsigned int uVar42;
        int iVar43;
        int iVar44;
        uint32_t uVar45;
        int iVar46;
        unique_ptr<dash3d::SoftwarePix3D>* this_21;
        NXTPix3D* pNVar47;
        float fVar48;
        NpcType* in_stack_fffffffffffffc58;
        uint32_t uVar49;
        PixfontGeneric* in_stack_fffffffffffffc60;
        uint32_t uVar50;
        unsigned long in_stack_fffffffffffffc68;
        uint32_t uVar51;
        ReturnValue local_360;
        eastl::string local_340;
        SideBarData local_320;
        eastl::string local_300;
        ReturnValue local_2e0;
        uint8_t local_2d0[32];
        LocationData local_2b0;
        Vector3T<int>* local_2a0;
        unsigned int local_298;
        unsigned long local_290;
        array<int, 100ul>* local_288;
        array<int, 100ul>* local_280;
        array<int, 100ul>* local_278;
        array<int, 100ul>* local_270;
        unique_ptr<option::DeviceOptions>* local_268;
        array<CoordType<UICoordSpecializer>, 4ul>* local_260;
        array<CoordType<UICoordSpecializer>, 4ul>* local_258;
        array<bool, 100ul>* local_250;
        hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_248;
        array<bool, 100ul>* local_240;
        unique_ptr<ServerConnection, std::default_delete<ServerConnection> _>* local_238;
        RollingAverageCounter* local_230;
        RollingAverageCounter* local_228;
        RollingAverageCounter* local_220;
        RollingAverageCounter* local_218;
        RollingAverageCounter* local_210;
        CoordMapSquare* local_208;
        CoordMapSquare* local_200;
        CoordMapSquare* local_1f8;
        CoordMapSquare* local_1f0;
        array<bool, 100ul>* local_1e8;
        shared_ptr<midi2::MidiRequest>* local_1e0;
        shared_ptr<midi2::MidiRequest>* local_1d8;
        unique_ptr<dash3d::SoftwareWorldRenderer>* local_1d0;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1c8;
        shared_ptr<rs2lib::PlayerModel>* local_1c0;
        array<shared_ptr<ClientNpc>, 65536ul>* local_1b8;
        unsigned long local_1b0;
        shared_ptr<ClientScript>* local_1a8;
        CoordType<UICoordSpecializer>* local_1a0;
        CoordType<UICoordSpecializer>* local_198;
        unique_ptr<minimap::Minimap>* local_190;
        float local_188;
        float local_184;
        float local_180;
        unsigned int local_178[2];
        unsigned int local_170[2];
        unsigned int local_168[2];
        unsigned int local_160[2];
        unsigned int local_158[2];
        unsigned int local_150[2];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_148;
        shared_ptr<rs2lib::IfType>* local_140;
        shared_ptr<ClientPlayer>* local_130;
        unsigned long local_128;
        shared_ptr<ClientScript>* local_120;
        int local_114;
        GridRect local_110;
        uint8_t local_f0[16];
        int local_e0;
        int local_dc;
        unsigned long local_d8;
        uint64_t local_d0;
        uint8_t local_c8;
        unsigned int local_bc;
        Array<shared_ptr<rs2lib::IfType>>* local_b8;
        CoordMapSquare local_b0;
        unsigned int local_a4;
        unsigned long local_90;
        uint64_t local_88;
        bool local_7d;
        unsigned long local_70;
        PixfontGeneric* local_60;
        PixfontGeneric* local_58;
        NXTPix3D* local_50;
        ModelLit* local_40;
        shared_ptr<configdecoder::ObjType>* local_38;

        uint8_t uVar3 = field_144->GetPix2D();
        NpcType* local_68 = (NpcType*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
        local_68->SetClipping(arg3, arg4, arg5, arg6);
        uint8_t* puVar22 = &field_1120488;
        Client* local_48 = this;
        Pix3D* pPVar10 = (Pix3D*)(*puVar22).operator->();
        pPVar10->SetClipping(arg3, arg4, arg5, arg6);
        unique_ptr<dash3d::SoftwarePix3D>* local_138 = (unique_ptr<dash3d::SoftwarePix3D>*)puVar22;
        pPVar10 = (Pix3D*)(*puVar22).operator->();
        pPVar10->SetRenderClipping();
        long lVar11 = ifTypes.end();
        if (lVar11 != 0) {
            local_1a8 = (shared_ptr<ClientScript>*)&local_48->field_2505104;
            local_288 = (array<int, 100ul>*)&local_48->field_2506876;
            local_280 = (array<int, 100ul>*)&local_48->field_2507276;
            local_278 = (array<int, 100ul>*)&local_48->field_2507676;
            local_270 = (array<int, 100ul>*)&local_48->field_2508076;
            local_260 = (array<CoordType<UICoordSpecializer>, 4ul>*)&local_48->field_8560;
            local_258 = (array<CoordType<UICoordSpecializer>, 4ul>*)&local_48->field_8576;
            local_188 = (float)(int)(unsigned int)arg3;
            local_1a0 = (CoordType<UICoordSpecializer>*)&local_48->field_2505164;
            local_184 = (float)(int)(unsigned int)arg5;
            local_140 = (shared_ptr<rs2lib::IfType>*)&local_48->field_2505120;
            local_180 = (float)(int)(unsigned int)arg4;
            local_198 = (CoordType<UICoordSpecializer>*)&local_48->field_2505168;
            local_190 = (unique_ptr<minimap::Minimap>*)&local_48->field_8152;
            local_1e8 = (array<bool, 100ul>*)&local_48->field_2506676;
            local_250 = (array<bool, 100ul>*)&local_48->field_2506576;
            local_268 = (unique_ptr<option::DeviceOptions>*)&local_48->field_8376;
            local_238 = (unique_ptr<ServerConnection, std::default_delete<ServerConnection> _>*)&local_48->field_19120;
            local_230 = (RollingAverageCounter*)local_48->field_8;
            local_228 = (RollingAverageCounter*)local_48->field_64;
            local_220 = (RollingAverageCounter*)local_48->field_52936;
            local_218 = (RollingAverageCounter*)local_48->field_6814944;
            local_210 = (RollingAverageCounter*)local_48->field_6815000;
            local_208 = (CoordMapSquare*)&local_48->field_19056;
            local_200 = (CoordMapSquare*)&local_48->field_19060;
            local_1f8 = (CoordMapSquare*)&local_48->field_19064;
            local_1f0 = (CoordMapSquare*)&local_48->field_19068;
            local_130 = (shared_ptr<ClientPlayer>*)&local_48->field_52016;
            local_120 = (shared_ptr<ClientScript>*)&local_48->field_2505056;
            local_248 =
                (hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                           eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                           eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)local_48->field_53160;
            local_240 = (array<bool, 100ul>*)&local_48->field_2506776;
            local_1d8 = (shared_ptr<midi2::MidiRequest>*)&local_48->field_2505072;
            local_1c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_48->field_1104224;
            local_1b8 = (array<shared_ptr<ClientNpc>, 65536ul>*)&local_48->field_55272;
            local_1c0 = (shared_ptr<rs2lib::PlayerModel>*)&local_48->field_2508968;
            local_1d0 = (unique_ptr<dash3d::SoftwareWorldRenderer>*)&local_48->field_1120496;
            local_1e0 = (shared_ptr<midi2::MidiRequest>*)&local_48->field_52424;
            uVar38 = 0;
            local_148 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)ifTypes;
            do {
                local_290 = uVar38;
                psVar13 = &ifTypes[uVar38];
                bVar4 = *psVar13 == nullptr;
                if ((!bVar4) && ((lVar11 = (*psVar13).operator->(),
                                  *(int*)(lVar11 + 88) == arg2 ||
                                      ((arg2 == -1412584499 && (bVar4 = *psVar13 != *local_1a8, !bVar4)))))) {
                    uVar7 = arg9;
                    local_38 = psVar13;
                    if (arg9 == -1) {
                        lVar11 = (*psVar13).operator->();
                        pCVar34 = local_48;
                        iVar40 = *(int*)(lVar11 + 64);
                        piVar14 = (int*)(*local_288)[(long)(int)local_48->field_2506568];
                        *piVar14 = iVar40 + arg7;
                        lVar11 = (*psVar13).operator->();
                        iVar40 = *(int*)(lVar11 + 68);
                        piVar14 = (int*)(*local_280)[(long)(int)pCVar34->field_2506568];
                        *piVar14 = iVar40 + arg8;
                        lVar11 = (*psVar13).operator->();
                        uVar45 = *(uint32_t*)(lVar11 + 72);
                        puVar15 = (uint32_t*)(*local_278)[(long)(int)pCVar34->field_2506568];
                        *puVar15 = uVar45;
                        lVar11 = (*psVar13).operator->();
                        uVar45 = *(uint32_t*)(lVar11 + 76);
                        puVar15 = (uint32_t*)(*local_270)[(long)(int)pCVar34->field_2506568];
                        *puVar15 = uVar45;
                        uVar7 = pCVar34->field_2506568;
                        pCVar34->field_2506568 = uVar7 + 1;
                    }
                    psVar13 = local_38;
                    lVar11 = (*local_38).operator->();
                    *(unsigned int*)(lVar11 + 2044) = uVar7;
                    iVar40 = local_48->field_8488;
                    local_58 = (PixfontGeneric*)(unsigned long)uVar7;
                    lVar11 = (*psVar13).operator->();
                    *(int*)(lVar11 + 2048) = iVar40;
                    pcVar16 = (char*)(*psVar13).operator->();
                    if ((*pcVar16 == '\0') || (cVar5 = Hide(local_48, (shared_ptr<rs2lib::IfType>*)psVar13), !cVar5)) {
                        lVar11 = (*psVar13).operator->();
                        if (0 < *(int*)(lVar11 + 20)) {
                            ClientComponent(local_48, (shared_ptr<rs2lib::IfType>*)psVar13);
                        }
                        lVar11 = (*psVar13).operator->();
                        local_40 = (ModelLit*)(unsigned long)(unsigned int)(*(int*)(lVar11 + 64) + arg7);
                        lVar11 = (*psVar13).operator->();
                        local_50 = (NXTPix3D*)(unsigned long)(unsigned int)(*(int*)(lVar11 + 68) + arg8);
                        lVar11 = (*psVar13).operator->();
                        uVar45 = *(uint32_t*)(lVar11 + 140);
                        bVar4 = *local_1a8 == *psVar13;
                        if (bVar4) {
                            if (arg2 != -1412584499) {
                                lVar11 = (*local_38).operator->();
                                pCVar34 = local_48;
                                if (*(char*)(lVar11 + 784) == '\0') {
                                    local_48->field_2505192 = (Array<shared_ptr<rs2lib::IfType>>*)local_148;
                                    local_f0->XPlotBlender<int>(arg7);
                                    *(uint32_t*)&pCVar34->field_2505200 = local_f0._0_4_;
                                    local_f0->XPlotBlender<int>(arg8);
                                    *(uint32_t*)pCVar34->field_2505204 = local_f0._0_4_;
                                    goto LAB_1000fd7d0;
                                }
                            }
                            if ((local_48->field_2505184 != '\0') && (local_48->field_2505160 != 0)) {
                                puVar17 = (unsigned int*)(*local_260)[0];
                                local_f0._0_4_ = *puVar17;
                                puVar17 = (unsigned int*)(*local_258)[0];
                                pCVar34 = local_48;
                                local_b0.m_x = *puVar17;
                                *local_f0 -= ((CoordType<UICoordSpecializer>*)(unsigned long)local_48->field_2505136);
                                local_b0 -= ((CoordType<UICoordSpecializer>*)(unsigned long)pCVar34->field_2505140);
                                cVar5 = CoordType<UICoordSpecializer>::operator<(
                                    (CoordType<UICoordSpecializer>*)local_f0,
                                    (CoordType<UICoordSpecializer>*)(unsigned long)pCVar34->field_2505164);
                                if (cVar5) {
                                    local_f0._0_4_ = local_48->field_2505164;
                                }
                                lVar11 = (*local_38).operator->();
                                local_178->XPlotBlender<int>(*(ResultType*)(lVar11 + 72));
                                local_110.field_0 =
                                    *local_f0 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_178[0]);
                                lVar11 = (*local_140).operator->();
                                local_170->XPlotBlender<int>(*(ResultType*)(lVar11 + 72));
                                uVar7 = *local_1a0 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_170[0]);
                                cVar5 = local_110 > ((CoordType<UICoordSpecializer>*)(unsigned long)uVar7);
                                if (cVar5) {
                                    lVar11 = (*local_140).operator->();
                                    iVar40 = *(int*)(lVar11 + 72);
                                    lVar11 = (*local_38).operator->();
                                    local_168->XPlotBlender<int>(iVar40 - *(int*)(lVar11 + 72));
                                    local_f0._0_4_ =
                                        *local_1a0 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_168[0]);
                                }
                                cVar5 = CoordType<UICoordSpecializer>::operator<(
                                    (CoordType<UICoordSpecializer>*)&local_b0,
                                    (CoordType<UICoordSpecializer>*)(unsigned long)local_48->field_2505168);
                                if (cVar5) {
                                    local_b0.m_x = local_48->field_2505168;
                                }
                                lVar11 = (*local_38).operator->();
                                local_160->XPlotBlender<int>(*(ResultType*)(lVar11 + 76));
                                local_110.field_0 =
                                    local_b0 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_160[0]);
                                lVar11 = (*local_140).operator->();
                                local_158->XPlotBlender<int>(*(ResultType*)(lVar11 + 76));
                                uVar7 = *local_198 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_158[0]);
                                cVar5 = local_110 > ((CoordType<UICoordSpecializer>*)(unsigned long)uVar7);
                                if (cVar5) {
                                    lVar11 = (*local_140).operator->();
                                    iVar40 = *(int*)(lVar11 + 76);
                                    lVar11 = (*local_38).operator->();
                                    local_150->XPlotBlender<int>(iVar40 - *(int*)(lVar11 + 76));
                                    local_b0.m_x =
                                        *local_198 + ((CoordType<UICoordSpecializer>*)(unsigned long)local_150[0]);
                                }
                                local_40 = (ModelLit*)local_f0->GetX();
                                local_50 = (NXTPix3D*)local_b0.GetX();
                            }
                            psVar13 = local_38;
                            lVar11 = (*local_38).operator->();
                            if (*(char*)(lVar11 + 784) == '\0') {
                                uVar45 = 128;
                            }
                            local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)uVar45);
                        } else {
                            local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)uVar45);
                            psVar13 = local_38;
                        }
                        lVar11 = (*psVar13).operator->();
                        iVar40 = *(int*)(lVar11 + 12);
                        lVar11 = (*psVar13).operator->();
                        iVar43 = *(int*)(lVar11 + 72);
                        uVar7 = (unsigned int)local_40;
                        uVar41 = iVar43 + uVar7;
                        lVar11 = (*psVar13).operator->();
                        psVar13 = local_38;
                        uVar9 = (unsigned int)local_50;
                        arg6_00 = *(int*)(lVar11 + 76) + uVar9;
                        if (iVar40 == 9) {
                            if (iVar43 < 0) {
                                uVar42 = uVar41;
                                uVar41 = uVar7;
                            } else {
                                uVar42 = uVar7;
                            }
                            uVar2 = arg6_00;
                            uVar7 = uVar9;
                            if (-1 < *(int*)(lVar11 + 76)) {
                                uVar2 = uVar9;
                                uVar7 = arg6_00;
                            }
                            uVar9 = uVar2;
                            uVar41 = uVar41 + 1;
                            arg6_00 = uVar7 + 1;
                            uVar7 = uVar42;
                        }
                        if ((int)uVar7 <= (int)(unsigned int)arg3) {
                            uVar7 = (unsigned int)arg3;
                        }
                        local_60 = (PixfontGeneric*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar7);
                        if ((int)uVar9 <= (int)(unsigned int)arg4) {
                            uVar9 = (unsigned int)arg4;
                        }
                        if ((int)(unsigned int)arg5 <= (int)uVar41) {
                            uVar41 = (unsigned int)arg5;
                        }
                        if (arg6 <= (int)arg6_00) {
                            arg6_00 = arg6;
                        }
                        pcVar16 = (char*)(*local_38).operator->();
                        if ((*pcVar16 == '\0') ||
                            (((int)(unsigned int)local_60 < (int)uVar41 && ((int)uVar9 < (int)arg6_00)))) {
                            lVar11 = (*psVar13).operator->();
                            if (*(int*)(lVar11 + 20) == 0) {
                            LAB_1000fe5b8:
                                lVar11 = (*psVar13).operator->();
                                iVar40 = *(int*)(lVar11 + 12);
                                pcVar16 = (char*)(*psVar13).operator->();
                                psVar13 = local_38;
                                uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                if (iVar40 == 0) {
                                    if (*pcVar16 == '\0') {
                                        cVar5 = Hide(local_48, (shared_ptr<rs2lib::IfType>*)local_38);
                                        uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                        uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                        uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                        if (cVar5) {
                                            bVar4 = *local_120 != *psVar13;
                                            uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                            uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                            uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                            if (bVar4)
                                                goto LAB_1000fd7d0;
                                        }
                                    }
                                    local_88 = (Worldmap*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)uVar9);
                                    local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)uVar41);
                                    pcVar16 = (char*)(*psVar13).operator->();
                                    if (*pcVar16 == '\0') {
                                        lVar11 = (*psVar13).operator->();
                                        iVar40 = *(int*)(lVar11 + 100);
                                        lVar11 = (*psVar13).operator->();
                                        iVar43 = *(int*)(lVar11 + 108);
                                        lVar11 = (*psVar13).operator->();
                                        if (iVar43 - *(int*)(lVar11 + 76) < iVar40) {
                                            lVar11 = (*psVar13).operator->();
                                            iVar40 = *(int*)(lVar11 + 108);
                                            lVar11 = (*psVar13).operator->();
                                            iVar43 = *(int*)(lVar11 + 76);
                                            lVar11 = (*psVar13).operator->();
                                            *(int*)(lVar11 + 100) = iVar40 - iVar43;
                                        }
                                        lVar11 = (*psVar13).operator->();
                                        if (*(int*)(lVar11 + 100) < 0) {
                                            lVar11 = (*psVar13).operator->();
                                            *(uint32_t*)(lVar11 + 100) = 0;
                                        }
                                    }
                                    lVar11 = (*psVar13).operator->();
                                    local_b8 =
                                        (Array<shared_ptr<rs2lib::IfType>>*)(((uint64_t)local_b8._4_4_ << 32) |
                                                                             (uint32_t)(*(uint32_t*)(lVar11 + 4)));
                                    lVar11 = (*psVar13).operator->();
                                    iVar37 = (int)local_40 - *(int*)(lVar11 + 96);
                                    lVar11 = (*psVar13).operator->();
                                    pCVar34 = local_48;
                                    iVar43 = (int)local_50;
                                    iVar40 = iVar43 - *(int*)(lVar11 + 100);
                                    in_stack_fffffffffffffc68 = (((uint64_t)uVar51 << 32) | (uint32_t)iVar40);
                                    in_stack_fffffffffffffc60 =
                                        (PixfontGeneric*)(((uint64_t)uVar50 << 32) | (uint32_t)iVar37);
                                    in_stack_fffffffffffffc58 =
                                        (NpcType*)(((uint64_t)uVar45 << 32) | (uint32_t)arg6_00);
                                    DrawLayer(local_48, (Array<shared_ptr<rs2lib::IfType>>*)local_148,
                                              (unsigned int)local_b8, (unsigned int)local_60, (unsigned int)local_88,
                                              (unsigned int)local_90, arg6_00, iVar37, iVar40, (int)local_58);
                                    lVar11 = (*psVar13).operator->();
                                    lVar11 = ((lVar11 + 2000))->end();
                                    uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                    uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                    uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                    if (lVar11 != 0) {
                                        lVar11 = (*psVar13).operator->();
                                        local_b8 = (Array<shared_ptr<rs2lib::IfType>>*)(lVar11 + 2000);
                                        lVar11 = (*psVar13).operator->();
                                        local_bc = *(int*)(lVar11 + 4);
                                        lVar11 = (*psVar13).operator->();
                                        iVar40 = (int)local_40 - *(int*)(lVar11 + 96);
                                        lVar11 = (*psVar13).operator->();
                                        iVar43 = iVar43 - *(int*)(lVar11 + 100);
                                        in_stack_fffffffffffffc68 = (((uint64_t)uVar51 << 32) | (uint32_t)iVar43);
                                        in_stack_fffffffffffffc60 =
                                            (PixfontGeneric*)(((uint64_t)uVar50 << 32) | (uint32_t)iVar40);
                                        in_stack_fffffffffffffc58 =
                                            (NpcType*)(((uint64_t)uVar45 << 32) | (uint32_t)arg6_00);
                                        DrawLayer(pCVar34, local_b8, local_bc, (unsigned int)local_60,
                                                  (unsigned int)local_88, (unsigned int)local_90, arg6_00, iVar40,
                                                  iVar43, (int)local_58);
                                    }
                                    lVar11 = (*psVar13).operator->();
                                    this_02 = local_248;
                                    *local_f0 = local_248->find(*((lVar11 + 4)));
                                    local_b0 = this_02->end();
                                    cVar5 = *local_f0 != local_b0;
                                    uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                    uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                    uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                    if (cVar5) {
                                        lVar11 = local_f0->HeapBeginPtr();
                                        in_stack_fffffffffffffc68 =
                                            (((uint64_t)uVar51 << 32) | (uint32_t)((int)local_58));
                                        in_stack_fffffffffffffc60 =
                                            (PixfontGeneric*)(((uint64_t)uVar50 << 32) | (uint32_t)((int)local_50));
                                        in_stack_fffffffffffffc58 =
                                            (NpcType*)(((uint64_t)uVar45 << 32) | (uint32_t)((int)local_40));
                                        DrawInterface(local_48, *(int*)(lVar11 + 4), (unsigned int)local_60,
                                                      (unsigned int)local_88, (unsigned int)local_90, arg6_00,
                                                      (int)local_40, (int)local_50, (int)local_58);
                                    }
                                    uVar9 = (unsigned int)arg5;
                                    uVar7 = (unsigned int)arg3;
                                    uVar41 = (unsigned int)arg4;
                                    local_68->SetClipping((unsigned int)arg3, (unsigned int)arg4, (unsigned int)arg5,
                                                          arg6);
                                    this_21 = local_138;
                                    pPVar10 = (Pix3D*)(*local_138).operator->();
                                LAB_1000fe957:
                                    pPVar10->SetClipping(uVar7, uVar41, uVar9, arg6);
                                    pPVar10 = (Pix3D*)(*this_21).operator->();
                                    pPVar10->SetRenderClipping();
                                } else if (*(int*)(pcVar16 + 12) == 11) {
                                    cVar5 = Hide(local_48, (shared_ptr<rs2lib::IfType>*)local_38);
                                    if ((cVar5) && (bVar4 = *local_120 != *psVar13, bVar4))
                                        goto LAB_1000fd7d0;
                                    lVar11 = (*psVar13).operator->();
                                    lVar11 = ((lVar11 + 2000))->end();
                                    uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                    uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                    uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                    if (lVar11 != 0) {
                                        lVar11 = (*psVar13).operator->();
                                        local_88 = (Worldmap*)(lVar11 + 2000);
                                        lVar11 = (*psVar13).operator->();
                                        local_b8 =
                                            (Array<shared_ptr<rs2lib::IfType>>*)(((uint64_t)local_b8._4_4_ << 32) |
                                                                                 (uint32_t)(*(uint32_t*)(lVar11 + 4)));
                                        lVar11 = (*psVar13).operator->();
                                        iVar43 = (int)local_40 - *(int*)(lVar11 + 96);
                                        lVar11 = (*psVar13).operator->();
                                        iVar40 = (int)local_50 - *(int*)(lVar11 + 100);
                                        in_stack_fffffffffffffc68 = (((uint64_t)uVar51 << 32) | (uint32_t)iVar40);
                                        in_stack_fffffffffffffc60 =
                                            (PixfontGeneric*)(((uint64_t)uVar50 << 32) | (uint32_t)iVar43);
                                        in_stack_fffffffffffffc58 =
                                            (NpcType*)(((uint64_t)uVar45 << 32) | (uint32_t)arg6_00);
                                        DrawLayer(local_48, (Array<shared_ptr<rs2lib::IfType>>*)local_88,
                                                  (unsigned int)local_b8, (unsigned int)local_60, uVar9, uVar41,
                                                  arg6_00, iVar43, iVar40, (int)local_58);
                                    }
                                    uVar9 = (unsigned int)arg5;
                                    uVar7 = (unsigned int)arg3;
                                    uVar41 = (unsigned int)arg4;
                                    local_68->SetClipping((unsigned int)arg3, (unsigned int)arg4, (unsigned int)arg5,
                                                          arg6);
                                    this_21 = local_138;
                                    pPVar10 = (Pix3D*)(*local_138).operator->();
                                    goto LAB_1000fe957;
                                }
                                psVar13 = local_38;
                                if (local_48->field_52456 == 0) {
                                    pcVar16 = (char*)(*local_240)[(long)(int)(unsigned int)local_58];
                                    if ((*pcVar16 == '\0') && ((int)local_48->field_2508476 < 2))
                                        goto LAB_1000fd7d0;
                                }
                                lVar11 = (*psVar13).operator->();
                                if ((*(int*)(lVar11 + 12) == 0) &&
                                    (pcVar16 = (char*)(*psVar13).operator->(), *pcVar16 == '\0')) {
                                    lVar11 = (*psVar13).operator->();
                                    iVar40 = *(int*)(lVar11 + 108);
                                    lVar11 = (*psVar13).operator->();
                                    if (*(int*)(lVar11 + 76) < iVar40) {
                                        lVar11 = (*psVar13).operator->();
                                        iVar37 = *(int*)(lVar11 + 72) + (int)local_40._0_4_;
                                        lVar11 = (*psVar13).operator->();
                                        iVar40 = *(int*)(lVar11 + 100);
                                        lVar11 = (*psVar13).operator->();
                                        iVar43 = *(int*)(lVar11 + 76);
                                        lVar11 = (*psVar13).operator->();
                                        DrawScrollbar(local_48, iVar37, (int)local_50, iVar40, iVar43,
                                                      *(int*)(lVar11 + 108));
                                    }
                                }
                                lVar11 = (*psVar13).operator->();
                                if (*(int*)(lVar11 + 12) != 1) {
                                    lVar11 = (*psVar13).operator->();
                                    if (*(int*)(lVar11 + 12) == 3) {
                                        cVar5 = GetIfActive(local_48, (shared_ptr<rs2lib::IfType>*)psVar13);
                                        lVar11 = (*psVar13).operator->();
                                        pMVar35 = local_40;
                                        if (!cVar5) {
                                            uVar7 = *(unsigned int*)(lVar11 + 116);
                                            bVar4 = *local_120 == *psVar13;
                                            if ((bVar4) &&
                                                (lVar11 = (*psVar13).operator->(), *(int*)(lVar11 + 124) != 0)) {
                                                lVar11 = (*psVar13).operator->();
                                                uVar7 = *(unsigned int*)(lVar11 + 124);
                                            }
                                        } else {
                                            uVar7 = *(unsigned int*)(lVar11 + 120);
                                            bVar4 = *local_120 == *psVar13;
                                            if ((bVar4) &&
                                                (lVar11 = (*psVar13).operator->(), *(int*)(lVar11 + 128) != 0)) {
                                                lVar11 = (*psVar13).operator->();
                                                uVar7 = *(unsigned int*)(lVar11 + 128);
                                            }
                                        }
                                        lVar11 = (*psVar13).operator->();
                                        iVar40 = (int)pMVar35;
                                        if (*(char*)(lVar11 + 132) == '\0') {
                                            lVar11 = (*psVar13).operator->();
                                            iVar43 = *(int*)(lVar11 + 72);
                                            lVar11 = (*psVar13).operator->();
                                            if ((unsigned int)local_70 == 0) {
                                                local_68->DrawRect(iVar40, (int)local_50, iVar43, *(int*)(lVar11 + 76),
                                                                   uVar7);
                                            } else {
                                                in_stack_fffffffffffffc58 =
                                                    (NpcType*)((((uint64_t)((
                                                                     int)((unsigned long)in_stack_fffffffffffffc58 >>
                                                                          32))
                                                                 << 32) |
                                                                (uint32_t)(~(unsigned int)local_70)) &
                                                               18446744069414584575);
                                                local_68->DrawRectTrans(iVar40, (int)local_50, iVar43,
                                                                        *(int*)(lVar11 + 76), uVar7,
                                                                        (unsigned int)in_stack_fffffffffffffc58);
                                            }
                                        } else {
                                            lVar11 = (*psVar13).operator->();
                                            psVar13 = local_38;
                                            uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                            uVar50 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                            uVar9 = (unsigned int)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                            if (*(int*)(lVar11 + 136) == 2) {
                                                lVar11 = (*local_38).operator->();
                                                local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                             (uint32_t)(*(uint32_t*)(lVar11 + 72)));
                                                lVar11 = (*psVar13).operator->();
                                                local_60 = (PixfontGeneric*)(((uint64_t)local_60._4_4_ << 32) |
                                                                             (uint32_t)(*(uint32_t*)(lVar11 + 76)));
                                                lVar11 = (*psVar13).operator->();
                                                uVar51 = *(uint32_t*)(lVar11 + 116);
                                                lVar11 = (*psVar13).operator->();
                                                uVar8 = *(uint32_t*)(lVar11 + 120);
                                                lVar11 = (*psVar13).operator->();
                                                iVar40 = *(int*)(lVar11 + 140);
                                                lVar11 = (*psVar13).operator->();
                                                in_stack_fffffffffffffc68 = (((uint64_t)uVar50 << 32) |
                                                                             (uint32_t)(255 - *(int*)(lVar11 + 144))) &
                                                                            18446744069414584575;
                                                in_stack_fffffffffffffc60 =
                                                    (PixfontGeneric*)((((uint64_t)uVar45 << 32) |
                                                                       (uint32_t)(255 - iVar40)) &
                                                                      18446744069414584575);
                                                in_stack_fffffffffffffc58 =
                                                    (NpcType*)(((uint64_t)uVar9 << 32) | (uint32_t)uVar8);
                                                (**(void (**)(...))(*(long*)local_68 + 40))(
                                                    local_68, (unsigned long)pMVar35 & 4294967295, local_50,
                                                    (unsigned long)local_58 & 4294967295,
                                                    (unsigned long)local_60 & 4294967295, uVar51,
                                                    in_stack_fffffffffffffc58, in_stack_fffffffffffffc60,
                                                    in_stack_fffffffffffffc68);
                                            } else if (*(int*)(lVar11 + 136) == 1) {
                                                lVar11 = (*local_38).operator->();
                                                iVar40 = *(int*)(lVar11 + 72);
                                                lVar11 = (*psVar13).operator->();
                                                uVar7 = *(unsigned int*)(lVar11 + 76);
                                                lVar11 = (*psVar13).operator->();
                                                uVar41 = *(unsigned int*)(lVar11 + 116);
                                                (*psVar13).operator->();
                                                in_stack_fffffffffffffc58 = (NpcType*)((unsigned long)uVar9 << 32);
                                                graphics::Pix2D::FillRectVGrad((int)local_68, (int)local_40,
                                                                               (int)local_50, iVar40, uVar7, uVar41);
                                            } else {
                                                lVar11 = (*local_38).operator->();
                                                uVar45 = *(uint32_t*)(lVar11 + 72);
                                                lVar11 = (*psVar13).operator->();
                                                if ((unsigned int)local_70 == 0) {
                                                    (**(void (**)(...))(*(long*)local_68 + 32))(
                                                        local_68, local_40, local_50, uVar45, *(uint32_t*)(lVar11 + 76),
                                                        uVar7);
                                                } else {
                                                    in_stack_fffffffffffffc58 =
                                                        (NpcType*)((((uint64_t)((int)((unsigned long)
                                                                                          in_stack_fffffffffffffc58 >>
                                                                                      32))
                                                                     << 32) |
                                                                    (uint32_t)(~(unsigned int)local_70)) &
                                                                   18446744069414584575);
                                                    (**(void (**)(...))(*(long*)local_68 + 24))(
                                                        local_68, local_40, local_50, uVar45, *(uint32_t*)(lVar11 + 76),
                                                        uVar7, in_stack_fffffffffffffc58);
                                                }
                                            }
                                        }
                                    } else {
                                        lVar11 = (*psVar13).operator->();
                                        iVar40 = (int)local_40;
                                        if (*(int*)(lVar11 + 12) == 4) {
                                            local_7d = false;
                                            pIVar28 = (IfType*)(*psVar13).operator->();
                                            local_58 = (PixfontGeneric*)pIVar28->GetFont(local_7d);
                                            bVar4 = *local_58 == nullptr;
                                            uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                            uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                            uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                            if (bVar4) {
                                                if (local_7d == false) {
                                                    ComponentUpdated(local_48, (shared_ptr<rs2lib::IfType>*)local_38);
                                                }
                                            } else {
                                                lVar11 = (*psVar13).operator->();
                                                new (local_f0) eastl::string(*((lVar11 + 320)));
                                                cVar5 = GetIfActive(local_48, (shared_ptr<rs2lib::IfType>*)psVar13);
                                                psVar13 = local_38;
                                                if (!cVar5) {
                                                    lVar11 = (*local_38).operator->();
                                                    iVar40 = *(int*)(lVar11 + 116);
                                                    bVar4 = *local_120 == *psVar13;
                                                    psVar13 = local_38;
                                                    if (!bVar4)
                                                        goto LAB_1000ff100;
                                                    lVar11 = (*local_38).operator->();
                                                    if (*(int*)(lVar11 + 124) != 0) {
                                                        lVar11 = (*psVar13).operator->();
                                                        iVar40 = *(int*)(lVar11 + 124);
                                                    }
                                                } else {
                                                    lVar11 = (*local_38).operator->();
                                                    iVar40 = *(int*)(lVar11 + 120);
                                                    bVar4 = *local_120 == *psVar13;
                                                    if ((bVar4) && (lVar11 = (*local_38).operator->(),
                                                                    *(int*)(lVar11 + 128) != 0)) {
                                                        lVar11 = (*local_38).operator->();
                                                        iVar40 = *(int*)(lVar11 + 128);
                                                    }
                                                    lVar11 = (*local_38).operator->();
                                                    lVar11 = ((lVar11 + 352))->size();
                                                    psVar13 = local_38;
                                                    if (lVar11 == 0) {
                                                    LAB_1000ff100:
                                                        psVar13 = local_38;
                                                    } else {
                                                        lVar11 = (*local_38).operator->();
                                                        *local_f0 = ((lVar11 + 352));
                                                    }
                                                }
                                                pcVar16 = (char*)(*psVar13).operator->();
                                                if ((*pcVar16 != '\0') &&
                                                    (lVar11 = (*local_38).operator->(), *(int*)(lVar11 + 1984) != -1)) {
                                                    lVar11 = (*local_38).operator->();
                                                    local_2e0 = configdecoder::ObjType::List(*(int*)(lVar11 + 1984));
                                                    lVar11 = local_2e0.operator->();
                                                    *local_f0 = ((lVar11 + 8));
                                                    cVar5 = local_f0->empty();
                                                    if (cVar5) {
                                                        *local_f0 = ((eastl::string*)&constants::text::null);
                                                    }
                                                    lVar11 = local_2e0.operator->();
                                                    if (((*(int*)(lVar11 + 200) == 1) ||
                                                         (lVar11 = (*local_38).operator->(),
                                                          *(int*)(lVar11 + 1988) != 1)) &&
                                                        (lVar11 = (*local_38).operator->(),
                                                         *(int*)(lVar11 + 1988) != -1)) {
                                                        local_360 = StringConstants::TAG_COLOUR(16748608);
                                                        local_300 + local_360;
                                                        local_320 + local_300;
                                                        str = (eastl::string*)local_2d0;
                                                        *str + local_320;
                                                        local_110 + *str;
                                                        iVar43 = (int)str;
                                                        (*local_38).operator->();
                                                        NiceNumber(&local_340, iVar43);
                                                        local_b0 + local_110;
                                                        *local_f0 = &local_b0;
                                                    }
                                                }
                                                bVar4 = *local_1e0 == *local_38;
                                                if (bVar4) {
                                                    *local_f0 = ((eastl::string*)&constants::text::pleasewait);
                                                    lVar11 = (*local_38).operator->();
                                                    iVar40 = *(int*)(lVar11 + 116);
                                                }
                                                pcVar16 = (char*)(*local_38).operator->();
                                                if (*pcVar16 == '\0') {
                                                    SubstituteVars((Client*)&local_b0, (eastl::string*)local_48,
                                                                   (shared_ptr<rs2lib::IfType>*)local_f0);
                                                    *local_f0 = &local_b0;
                                                }
                                                local_58 = (PixfontGeneric*)(*local_58).operator->();
                                                psVar13 = local_38;
                                                lVar11 = (*local_38).operator->();
                                                local_60 = (PixfontGeneric*)(((uint64_t)local_60._4_4_ << 32) |
                                                                             (uint32_t)(*(uint32_t*)(lVar11 + 72)));
                                                lVar11 = (*psVar13).operator->();
                                                local_70 = (((uint64_t)local_70._4_4_ << 32) |
                                                            (uint32_t)(*(uint32_t*)(lVar11 + 76)));
                                                lVar11 = (*psVar13).operator->();
                                                bVar6 = *(uint8_t*)(lVar11 + 396);
                                                lVar11 = (*psVar13).operator->();
                                                uVar8 = graphics::TransparencyToAlpha(*(int*)(lVar11 + 140));
                                                local_90 = (((uint64_t)local_90._4_4_ << 32) | (uint32_t)uVar8);
                                                lVar11 = (*psVar13).operator->();
                                                iVar43 = *(int*)(lVar11 + 388);
                                                lVar11 = (*psVar13).operator->();
                                                iVar37 = *(int*)(lVar11 + 392);
                                                lVar11 = (*psVar13).operator->();
                                                iVar44 = bVar6 - 1;
                                                in_stack_fffffffffffffc68 =
                                                    (((uint64_t)uVar51 << 32) | (uint32_t)((unsigned int)local_90));
                                                in_stack_fffffffffffffc60 =
                                                    (PixfontGeneric*)(((uint64_t)uVar50 << 32) | (uint32_t)iVar44);
                                                in_stack_fffffffffffffc58 =
                                                    (NpcType*)(((uint64_t)uVar45 << 32) | (uint32_t)iVar40);
                                                local_58->DrawStringMultiline(
                                                    *local_f0, (int)local_40, (int)local_50, (unsigned int)local_60,
                                                    (unsigned int)local_70, iVar40, iVar44, (unsigned int)local_90,
                                                    iVar43, iVar37, *(int*)(lVar11 + 384), *local_68);
                                            }
                                        } else {
                                            lVar11 = (*psVar13).operator->();
                                            if (*(int*)(lVar11 + 12) == 5) {
                                                local_110 = rs2lib::TempSetUsingRSeven(false);
                                                pcVar16 = (char*)(*psVar13).operator->();
                                                if (*pcVar16 == '\0') {
                                                    local_b0.m_x = local_b0.m_x & 4294967040;
                                                    pIVar28 = (IfType*)(*local_38).operator->();
                                                    bVar4 = (bool)GetIfActive(local_48,
                                                                              (shared_ptr<rs2lib::IfType>*)local_38);
                                                    groundDecor = (shared_ptr<dash3d::GroundDecor>*)pIVar28->GetGraphic(
                                                        bVar4, local_b0);
                                                    new (local_f0) shared_ptr(groundDecor);
                                                    bVar4 = *local_f0 != nullptr;
                                                    if (bVar4) {
                                                        uVar20 = **local_f0;
                                                        (**(void (**)(...))(*(long*)local_68 + 176))(
                                                            local_68, uVar20, local_40, local_50);
                                                    } else if ((char)local_b0.m_x == '\0') {
                                                        ComponentUpdated(local_48,
                                                                         (shared_ptr<rs2lib::IfType>*)local_38);
                                                    }
                                                } else {
                                                    iVar40 = 0;
                                                    new (local_f0) shared_ptr();
                                                    lVar11 = (*local_38).operator->();
                                                    psVar13 = local_38;
                                                    uVar7 =
                                                        (unsigned int)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                                    if (*(int*)(lVar11 + 1984) == -1) {
                                                        local_b0.m_x = local_b0.m_x & 4294967040;
                                                        pIVar28 = (IfType*)(*local_38).operator->();
                                                        pix32 = (shared_ptr<graphics::Pix32>*)pIVar28->GetGraphic(
                                                            false, local_b0);
                                                        if ((char)local_b0.m_x == '\0') {
                                                            ComponentUpdated(local_48,
                                                                             (shared_ptr<rs2lib::IfType>*)local_38);
                                                        } else {
                                                            *local_f0 = *pix32;
                                                        }
                                                    } else {
                                                        (*local_38).operator->();
                                                        (*psVar13).operator->();
                                                        lVar11 = (*psVar13).operator->();
                                                        iVar43 = *(int*)(lVar11 + 1984);
                                                        lVar11 = (*psVar13).operator->();
                                                        iVar37 = *(int*)(lVar11 + 1988);
                                                        lVar11 = (*psVar13).operator->();
                                                        iVar44 = *(int*)(lVar11 + 216);
                                                        lVar11 = (*psVar13).operator->();
                                                        iVar46 = *(int*)(lVar11 + 220);
                                                        (*psVar13).operator->();
                                                        in_stack_fffffffffffffc58 =
                                                            (NpcType*)((unsigned long)uVar7 << 32);
                                                        GetObjSprite((Client*)&local_b0, iVar40, iVar43, iVar37, iVar44,
                                                                     iVar46);
                                                        *local_f0 = local_b0;
                                                    }
                                                    bVar4 = *local_f0 != nullptr;
                                                    if (bVar4) {
                                                        lVar11 = (*local_f0).operator->();
                                                        local_128 = (unsigned long)*(unsigned int*)(lVar11 + 40);
                                                        lVar11 = (*local_f0).operator->();
                                                        local_60 = (PixfontGeneric*)(unsigned long)*(
                                                            unsigned int*)(lVar11 + 44);
                                                        lVar11 = (*local_38).operator->();
                                                        if (*(char*)(lVar11 + 212) == '\0') {
                                                            lVar11 = (*local_38).operator->();
                                                            iVar40 = (*(int*)(lVar11 + 72) << 12) / (int)local_128;
                                                            lVar11 = (*local_38).operator->();
                                                            uVar45 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >>
                                                                           32);
                                                            if (*(int*)(lVar11 + 208) == 0) {
                                                                if ((unsigned int)local_70 == 0) {
                                                                    lVar11 = (*local_38).operator->();
                                                                    if ((*(int*)(lVar11 + 72) == (int)local_128) &&
                                                                        (lVar11 = (*local_38).operator->(),
                                                                         *(int*)(lVar11 + 76) == (int)local_60)) {
                                                                        uVar20 = **local_f0;
                                                                        (**(void (**)(...))(*(long*)local_68 + 176))(
                                                                            local_68, uVar20, local_40, local_50);
                                                                    } else {
                                                                        uVar20 = **local_f0;
                                                                        lVar11 = (*local_38).operator->();
                                                                        uVar45 = *(uint32_t*)(lVar11 + 72);
                                                                        lVar11 = (*local_38).operator->();
                                                                        (**(void (**)(...))(*(long*)local_68 + 208))(
                                                                            local_68, uVar20, local_40, local_50,
                                                                            uVar45, *(uint32_t*)(lVar11 + 76));
                                                                    }
                                                                } else {
                                                                    uVar20 = **local_f0;
                                                                    lVar11 = (*local_38).operator->();
                                                                    uVar50 = *(uint32_t*)(lVar11 + 72);
                                                                    lVar11 = (*local_38).operator->();
                                                                    in_stack_fffffffffffffc58 =
                                                                        (NpcType*)((((uint64_t)uVar45 << 32) |
                                                                                    (uint32_t)(~(
                                                                                        unsigned int)local_70)) &
                                                                                   18446744069414584575);
                                                                    (**(void (**)(...))(*(long*)local_68 + 240))(
                                                                        local_68, uVar20, local_40, local_50, uVar50,
                                                                        *(uint32_t*)(lVar11 + 76),
                                                                        in_stack_fffffffffffffc58);
                                                                }
                                                            } else {
                                                                pPVar30 = (Pix32*)**local_f0;
                                                                lVar11 = (*local_38).operator->();
                                                                iVar43 = *(int*)(lVar11 + 72);
                                                                lVar11 = (*local_38).operator->();
                                                                iVar37 = *(int*)(lVar11 + 76);
                                                                lVar11 = (*local_38).operator->();
                                                                local_68->PixelPerfectRotateScalePlotSprite(
                                                                    *pPVar30, iVar43 / 2 + (int)local_40._0_4_,
                                                                    iVar37 / 2 + (unsigned int)local_50,
                                                                    *(int*)(lVar11 + 208), iVar40);
                                                            }
                                                        } else {
                                                            lVar11 = (*local_38).operator->();
                                                            iVar40 = *(int*)(lVar11 + 72);
                                                            lVar11 = (*local_38).operator->();
                                                            local_68->SetSubClipping(
                                                                (int)local_40, (int)local_50, iVar40 + (int)local_40,
                                                                *(int*)(lVar11 + 76) + (int)local_50);
                                                            psVar13 = local_38;
                                                            lVar11 = (*local_38).operator->();
                                                            iVar43 = (*(int*)(lVar11 + 72) + (int)local_128 - 1) /
                                                                     (int)local_128;
                                                            lVar11 = (*psVar13).operator->();
                                                            iVar40 = (int)local_60;
                                                            local_bc = (*(int*)(lVar11 + 76) + iVar40 - 1) / iVar40;
                                                            local_114 = iVar43;
                                                            if (0 < iVar43) {
                                                                uVar38 = (unsigned long)local_60 >> 31;
                                                                local_1b0 =
                                                                    (unsigned long)(unsigned int)(((int)(((unsigned int)(local_128 >>
                                                                                                                         31) &
                                                                                                          1) +
                                                                                                         (int)
                                                                                                             local_128) >>
                                                                                                   1) +
                                                                                                  (int)local_40._0_4_);
                                                                local_88 =
                                                                    (Worldmap*)((((uint64_t)local_88._4_4_ << 32) |
                                                                                 (uint32_t)(~(unsigned int)local_70)) &
                                                                                18446744069414584575);
                                                                local_b8 =
                                                                    (Array<shared_ptr<
                                                                         rs2lib::IfType>>*)((unsigned long)local_b8 &
                                                                                            18446744069414584320);
                                                                do {
                                                                    if (0 < (int)local_bc) {
                                                                        iVar37 =
                                                                            (unsigned int)local_b8 * (int)local_128;
                                                                        iVar43 = (int)local_1b0;
                                                                        local_90 =
                                                                            (unsigned long)(unsigned int)(iVar37 +
                                                                                                          (int)local_40
                                                                                                              ._0_4_);
                                                                        pNVar47 = local_50;
                                                                        uVar7 = local_bc;
                                                                        do {
                                                                            lVar11 = (*local_38).operator->();
                                                                            if (*(int*)(lVar11 + 208) == 0) {
                                                                                if ((unsigned int)local_70 == 0) {
                                                                                    uVar20 = **local_f0;
                                                                                    (**(void (**)(...))(
                                                                                        *(long*)local_68 + 176))(
                                                                                        local_68, uVar20, local_90,
                                                                                        (unsigned long)pNVar47 &
                                                                                            4294967295);
                                                                                } else {
                                                                                    uVar20 = **local_f0;
                                                                                    (**(void (**)(...))(
                                                                                        *(long*)local_68 + 232))(
                                                                                        local_68, uVar20, local_90,
                                                                                        (unsigned long)pNVar47 &
                                                                                            4294967295,
                                                                                        (unsigned long)local_88 &
                                                                                            4294967295);
                                                                                }
                                                                            } else {
                                                                                pPVar30 = (Pix32*)**local_f0;
                                                                                lVar11 = (*local_38).operator->();
                                                                                local_68
                                                                                    ->PixelPerfectRotateScalePlotSprite(
                                                                                        *pPVar30, iVar43 + iVar37,
                                                                                        ((int)(((unsigned int)uVar38 &
                                                                                                1) +
                                                                                               iVar40) >>
                                                                                         1) +
                                                                                            (int)pNVar47,
                                                                                        *(int*)(lVar11 + 208), 4096);
                                                                            }
                                                                            pNVar47 =
                                                                                (NXTPix3D*)(unsigned long)((int)
                                                                                                               pNVar47 +
                                                                                                           (unsigned int)
                                                                                                               local_60);
                                                                            uVar7 = uVar7 - 1;
                                                                        } while (uVar7 != 0);
                                                                    }
                                                                    iVar43 = (unsigned int)local_b8 + 1;
                                                                    local_b8 =
                                                                        (Array<shared_ptr<
                                                                             rs2lib::IfType>>*)(((uint64_t)
                                                                                                     local_b8._4_4_
                                                                                                 << 32) |
                                                                                                (uint32_t)iVar43);
                                                                } while (iVar43 != local_114);
                                                            }
                                                            local_68->SetClipping((unsigned int)arg3,
                                                                                  (unsigned int)arg4,
                                                                                  (unsigned int)arg5, arg6);
                                                        }
                                                        lVar11 = (*local_38).operator->();
                                                        pPVar29 = local_58;
                                                        uVar45 =
                                                            (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                                        uVar50 =
                                                            (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                                        uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                                        if (-1 < *(int*)(lVar11 + 680)) {
                                                            lVar11 = (*local_38).operator->();
                                                            in_stack_fffffffffffffc68 =
                                                                (((uint64_t)uVar51 << 32) | (uint32_t)((int)pPVar29));
                                                            in_stack_fffffffffffffc60 =
                                                                (PixfontGeneric*)(((uint64_t)uVar50 << 32) |
                                                                                  (uint32_t)((int)local_50));
                                                            in_stack_fffffffffffffc58 =
                                                                (NpcType*)(((uint64_t)uVar45 << 32) |
                                                                           (uint32_t)((int)local_40));
                                                            DrawOverlay(local_48, *(int*)(lVar11 + 680),
                                                                        (unsigned int)arg3, (unsigned int)arg4,
                                                                        (unsigned int)arg5, arg6, (int)local_40,
                                                                        (int)local_50, (int)pPVar29);
                                                            local_68->SetClipping((unsigned int)arg3,
                                                                                  (unsigned int)arg4,
                                                                                  (unsigned int)arg5, arg6);
                                                        }
                                                    }
                                                }
                                            } else {
                                                lVar11 = (*psVar13).operator->();
                                                psVar39 = local_38;
                                                pCVar34 = local_48;
                                                if (*(int*)(lVar11 + 12) == 6) {
                                                    if (local_48->m_usingRSeven == false) {
                                                        uVar45 = 0;
                                                    } else {
                                                        lVar11 = (*local_38).operator->();
                                                        uVar45 = (uint32_t)(((uint64_t)((
                                                                                 int64_t)((unsigned long)lVar11 >> 8))
                                                                             << 8) |
                                                                            (uint8_t)(*(char*)(lVar11 + 289) != '\0'));
                                                    }
                                                    local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                                 (uint32_t)uVar45);
                                                    local_300 = rs2lib::TempSetUsingRSeven((uint8_t)uVar45);
                                                    bVar6 = GetIfActive(pCVar34, (shared_ptr<rs2lib::IfType>*)psVar39);
                                                    if (bVar6 == 0) {
                                                        lVar11 = (*local_38).operator->();
                                                        piVar14 = (int*)(lVar11 + 244);
                                                    } else {
                                                        lVar11 = (*local_38).operator->();
                                                        piVar14 = (int*)(lVar11 + 248);
                                                    }
                                                    iVar40 = *piVar14;
                                                    local_b0 = shared_ptr();
                                                    lVar11 = (*local_38).operator->();
                                                    if (*(int*)(lVar11 + 1984) == -1) {
                                                        lVar11 = (*local_38).operator->();
                                                        if (*(int*)(lVar11 + 228) == 5) {
                                                            lVar11 = (*local_38).operator->();
                                                            if (*(int*)(lVar11 + 232) == 0) {
                                                                pPVar31 = (PlayerModel*)(*local_1c0).operator->();
                                                                *local_f0 =
                                                                    pPVar31->GetTempModel(nullptr, -1, nullptr, -1);
                                                                local_b0 = *local_f0;
                                                            } else {
                                                                this_09 = (ClientPlayer*)(*local_130).operator->();
                                                                *local_f0 = this_09->GetTempModel(pCVar34->field_8488);
                                                                local_b0 = *local_f0;
                                                            }
                                                        } else {
                                                            lVar11 = (*local_38).operator->();
                                                            if (*(int*)(lVar11 + 228) == 7) {
                                                                lVar11 = (*local_38).operator->();
                                                                bVar4 = (*((lVar11 + 296))) == nullptr;
                                                                if (bVar4) {
                                                                    this_10 = logger::default_logger();
                                                                    local_60 =
                                                                        (PixfontGeneric*)((unsigned long)local_60 &
                                                                                          18446744069414584320);
                                                                    this_10->Log(true, 2,
                                                                                 "/Users/bamboo/bamboo-home-01/"
                                                                                 "xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                                                 "projects/osclient/client_UI.cpp",
                                                                                 826,
                                                                                 "Trying to render a null PlayerModel");
                                                                    goto LAB_10010035e;
                                                                }
                                                                lVar11 = (*local_38).operator->();
                                                                pPVar31 =
                                                                    (PlayerModel*)(*((lVar11 + 296))).operator->();
                                                                lVar11 = (*local_130).operator->();
                                                                local_110 =
                                                                    configdecoder::SeqType::List(*(int*)(lVar11 + 48));
                                                                pSVar32 = (SeqType*)local_110.end();
                                                                lVar11 = (*local_130).operator->();
                                                                *local_f0 = pPVar31->GetTempModel(
                                                                    nullptr, -1, pSVar32, *(int*)(lVar11 + 360));
                                                                local_b0 = *local_f0;
                                                                this_20 = &local_110;
                                                            } else {
                                                                lVar11 = (*local_38).operator->();
                                                                local_70 = 0;
                                                                local_60 = nullptr;
                                                                if (*(int*)(lVar11 + 228) == 6) {
                                                                    lVar11 = (*local_38).operator->();
                                                                    this_11 =
                                                                        (vector<dash3d::EntityHighlight*,
                                                                                BucketAllocatorEASTL>*)(*local_1b8)
                                                                            [(long)*(int*)(lVar11 + 232)];
                                                                    this_12 =
                                                                        (FixedPrimitiveBatchData<256ul>*)this_11->end();
                                                                    if (this_12 == nullptr) {
                                                                        local_70 = 0;
                                                                        local_60 = nullptr;
                                                                    } else {
                                                                        local_60 =
                                                                            (PixfontGeneric*)((this_12 + 1024))->end();
                                                                        local_70 =
                                                                            ((unique_ptr<
                                                                                 configdecoder::NPCTypeCustomisation,
                                                                                 BucketDeleter<
                                                                                     configdecoder::
                                                                                         NPCTypeCustomisation>>*)
                                                                                 this_12->GetVertexCount())
                                                                                ->get();
                                                                    }
                                                                }
                                                                new (local_f0) shared_ptr();
                                                                if (iVar40 == -1) {
                                                                    arg3_00 = 255;
                                                                } else {
                                                                    local_110 = configdecoder::SeqType::List(iVar40);
                                                                    *local_f0 = local_110;
                                                                    lVar11 = (*local_38).operator->();
                                                                    arg3_00 = (uint8_t)*(uint32_t*)(lVar11 + 1992);
                                                                }
                                                                local_2d0._0_8_ =
                                                                    local_2d0._0_8_ & 18446744073709551360;
                                                                pSVar32 = (SeqType*)(*local_38).operator->();
                                                                iVar40 = local_f0->end();
                                                                lVar11 = (*local_130).operator->();
                                                                arg5_00 = (bool*)((lVar11 + 1008))->end();
                                                                in_stack_fffffffffffffc58 = (NpcType*)local_2d0;
                                                                in_stack_fffffffffffffc60 = local_60;
                                                                in_stack_fffffffffffffc68 = local_70;
                                                                local_110.GetTempModel(
                                                                    pSVar32, iVar40, (bool)arg3_00,
                                                                    (PlayerModel*)(unsigned long)bVar6, *arg5_00,
                                                                    in_stack_fffffffffffffc58, local_60);
                                                                if (local_2d0[0] == (eastl::string)0) {
                                                                    ComponentUpdated(
                                                                        pCVar34, (shared_ptr<rs2lib::IfType>*)local_38);
                                                                } else {
                                                                    local_b0 = local_110;
                                                                }
                                                                this_20 = (GridRect*)local_f0;
                                                            }
                                                            this_20->~shared_ptr();
                                                        }
                                                        local_60 = (PixfontGeneric*)((unsigned long)local_60 &
                                                                                     18446744069414584320);
                                                    } else {
                                                        lVar11 = (*local_38).operator->();
                                                        *local_f0 =
                                                            configdecoder::ObjType::List(*(int*)(lVar11 + 1984));
                                                        bVar4 = *local_f0 != nullptr;
                                                        local_60 = (PixfontGeneric*)((unsigned long)local_60 &
                                                                                     18446744069414584320);
                                                        if (bVar4) {
                                                            lVar11 = (*local_38).operator->();
                                                            local_110 = configdecoder::ObjType::GetStackSizeAlt(
                                                                *local_f0, *(int*)(lVar11 + 1988));
                                                            *local_f0 = local_110;
                                                            iVar40 = (*local_f0).operator->();
                                                            local_110.GetModelLit(iVar40);
                                                            local_b0 = local_110;
                                                            bVar4 = local_b0 != nullptr;
                                                            if (bVar4) {
                                                                plVar27 = (long*)local_b0.operator->();
                                                                (**(void (**)(...))(*plVar27 + 64))(plVar27);
                                                                lVar11 = local_b0.operator->();
                                                                local_60 =
                                                                    (PixfontGeneric*)(((uint64_t)local_60._4_4_ << 32) |
                                                                                      (uint32_t)(*(int*)(lVar11 + 8) /
                                                                                                 2));
                                                            } else {
                                                                ComponentUpdated(pCVar34,
                                                                                 (shared_ptr<rs2lib::IfType>*)local_38);
                                                            }
                                                        }
                                                    }
                                                LAB_10010035e:
                                                    paVar33 = dash3d::Pix3D::GetSinTable();
                                                    lVar11 = (*local_38).operator->();
                                                    piVar14 = (int*)(*paVar33)[(long)*(int*)(lVar11 + 260)];
                                                    iVar40 = *piVar14;
                                                    lVar11 = (*local_38).operator->();
                                                    iVar43 = *(int*)(lVar11 + 272);
                                                    paVar33 = dash3d::Pix3D::GetCosTable();
                                                    lVar11 = (*local_38).operator->();
                                                    piVar14 = (int*)(*paVar33)[(long)*(int*)(lVar11 + 260)];
                                                    iVar37 = *piVar14;
                                                    lVar11 = (*local_38).operator->();
                                                    iVar44 = *(int*)(lVar11 + 272);
                                                    bVar4 = local_b0 != nullptr;
                                                    if (bVar4) {
                                                        plVar27 = (long*)local_b0.operator->();
                                                        cVar5 = (**(void (**)(...))(*plVar27 + 56))(plVar27);
                                                        if ((char)local_58 != cVar5) {
                                                            LogAssert(
                                                                "m->IsForRSeven() == wantRSeven",
                                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                "OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                                                                872, nullptr);
                                                        }
                                                        lVar11 = (*local_38).operator->();
                                                        pCVar34 = local_48;
                                                        uVar45 =
                                                            (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                                        uVar50 =
                                                            (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                                        uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                                        local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                                     (uint32_t)(iVar40 * iVar43 >> 16));
                                                        local_70 = (((uint64_t)local_70._4_4_ << 32) |
                                                                    (uint32_t)(iVar37 * iVar44 >> 16));
                                                        if (*(char*)(lVar11 + 289) == '\0') {
                                                            plVar27 = (long*)local_b0.operator->();
                                                            cVar5 = (**(void (**)(...))(*plVar27 + 56))(plVar27);
                                                            if (cVar5) {
                                                                LogAssert(
                                                                    "m->IsForRSeven() == false",
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                                                                    939, nullptr);
                                                            }
                                                            plVar27 = (long*)(*local_138).operator->();
                                                            lVar11 = (*local_38).operator->();
                                                            iVar40 = *(int*)(lVar11 + 72);
                                                            lVar11 = (*local_38).operator->();
                                                            (**(void (**)(...))(*plVar27 + 40))(
                                                                plVar27, iVar40 / 2 + (int)local_40._0_4_,
                                                                *(int*)(lVar11 + 76) / 2 + (unsigned int)local_50);
                                                            this_16 = (SoftwareWorldRenderer*)(*local_1d0).operator->();
                                                            local_40 = (ModelLit*)this_16->GetModelLitRenderer();
                                                            pcVar16 = (char*)(*local_38).operator->();
                                                            uVar45 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >>
                                                                           32);
                                                            if (*pcVar16 == '\0') {
                                                                uVar20 = *local_b0;
                                                                lVar11 = (*local_38).operator->();
                                                                uVar7 = *(unsigned int*)(lVar11 + 264);
                                                                lVar11 = (*local_38).operator->();
                                                                (*(void (*)(...)) * *(uint64_t**)local_40)(
                                                                    local_40, uVar20, 0, (unsigned long)uVar7, 0,
                                                                    (unsigned long)*(unsigned int*)(lVar11 + 260),
                                                                    (unsigned long)in_stack_fffffffffffffc58 &
                                                                        18446744069414584320,
                                                                    (((uint64_t)uVar50 << 32) |
                                                                     (uint32_t)((unsigned int)local_58)),
                                                                    (((uint64_t)uVar51 << 32) |
                                                                     (uint32_t)((unsigned int)local_70)));
                                                            }
                                                            plVar27 = (long*)local_b0.operator->();
                                                            (**(void (**)(...))(*plVar27 + 64))(plVar27);
                                                            lVar11 = (*local_38).operator->();
                                                            if (*(char*)(lVar11 + 288) == '\0') {
                                                                uVar20 = *local_b0;
                                                                lVar11 = (*local_38).operator->();
                                                                uVar7 = *(unsigned int*)(lVar11 + 264);
                                                                lVar11 = (*local_38).operator->();
                                                                local_50 =
                                                                    (NXTPix3D*)(((uint64_t)local_50._4_4_ << 32) |
                                                                                (uint32_t)(*(uint32_t*)(lVar11 + 268)));
                                                                lVar11 = (*local_38).operator->();
                                                                uVar9 = *(unsigned int*)(lVar11 + 260);
                                                                lVar11 = (*local_38).operator->();
                                                                uVar8 = *(uint32_t*)(lVar11 + 252);
                                                                lVar11 = (*local_38).operator->();
                                                                iVar40 = *(int*)(lVar11 + 256);
                                                                lVar11 = (*local_38).operator->();
                                                                (*(void (*)(...)) * *(uint64_t**)local_40)(
                                                                    local_40, uVar20, 0, (unsigned long)uVar7,
                                                                    (unsigned long)local_50 & 4294967295,
                                                                    (unsigned long)uVar9,
                                                                    (((uint64_t)uVar45 << 32) | (uint32_t)uVar8),
                                                                    (((uint64_t)uVar50 << 32) |
                                                                     (uint32_t)((unsigned int)local_58 +
                                                                                (unsigned int)local_60 + iVar40)),
                                                                    (((uint64_t)uVar51 << 32) |
                                                                     (uint32_t)((unsigned int)local_70 +
                                                                                *(int*)(lVar11 + 256))));
                                                            }
                                                            local_50 = (NXTPix3D*)*local_b0;
                                                            lVar11 = (*local_38).operator->();
                                                            local_90 = (((uint64_t)local_90._4_4_ << 32) |
                                                                        (uint32_t)(*(uint32_t*)(lVar11 + 264)));
                                                            lVar11 = (*local_38).operator->();
                                                            local_88 =
                                                                (Worldmap*)(((uint64_t)local_88._4_4_ << 32) |
                                                                            (uint32_t)(*(uint32_t*)(lVar11 + 268)));
                                                            lVar11 = (*local_38).operator->();
                                                            uVar7 = *(unsigned int*)(lVar11 + 260);
                                                            lVar11 = (*local_38).operator->();
                                                            uVar8 = *(uint32_t*)(lVar11 + 252);
                                                            lVar11 = (*local_38).operator->();
                                                            iVar37 = (unsigned int)local_58 + (unsigned int)local_60;
                                                            iVar40 = *(int*)(lVar11 + 256);
                                                            lVar11 = (*local_38).operator->();
                                                            iVar43 = *(int*)(lVar11 + 256);
                                                            lVar11 = (*local_38).operator->();
                                                            (**(void (**)(...))(*(long*)local_40 + 8))(
                                                                local_40, local_50, 0, local_90 & 4294967295,
                                                                (unsigned long)local_88 & 4294967295,
                                                                (unsigned long)uVar7,
                                                                (((uint64_t)uVar45 << 32) | (uint32_t)uVar8),
                                                                (((uint64_t)uVar50 << 32) |
                                                                 (uint32_t)(iVar37 + iVar40)),
                                                                (((uint64_t)uVar51 << 32) |
                                                                 (uint32_t)(iVar43 + (unsigned int)local_70)),
                                                                *(uint32_t*)(lVar11 + 272));
                                                        }
                                                        uVar3 = local_48->field_144->GetPix3D();
                                                        local_50 = (NXTPix3D*)(((uint64_t)extraout_var_00 << 8) |
                                                                               (uint8_t)uVar3);
                                                        this_14 = (NXTPixToolkit*)pCVar34->GetMemoryCache();
                                                        this_15 = (SoundInstance*)this_14->GetScreen();
                                                        fVar48 = (float)this_15->GetSoundSpatialSizeMax();
                                                        local_40 = (ModelLit*)(((uint64_t)local_40._4_4_ << 32) |
                                                                               (uint32_t)fVar48);
                                                        iVar40 = jag::math::RoundFloatToInt(fVar48 * local_188);
                                                        iVar43 = jag::math::RoundFloatToInt(local_40._0_4_ * local_184);
                                                        iVar37 = jag::math::RoundFloatToInt(local_40._0_4_ * local_180);
                                                        uVar7 =
                                                            jag::math::RoundFloatToInt(local_40._0_4_ * (float)arg6);
                                                        pNVar47 = local_50;
                                                        uVar50 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                                        iVar46 = (iVar43 + iVar40) / 2;
                                                        iVar44 = (int)(uVar7 + iVar37) / 2;
                                                        if (pCVar34->m_usingRSeven == false) {
                                                            local_50->SetClipping(iVar40, iVar37, iVar43, uVar7);
                                                            pNVar47->SetRenderClipping();
                                                            pNVar47->SetRenderOrigin(iVar46, iVar44);
                                                            pNVar47->SetRenderZoom((int)pNVar47,
                                                                                   (int)(local_40._0_4_ * 512.0));
                                                            plVar27 = (long*)pCVar34->field_144->GetServerPosition();
                                                            local_40 =
                                                                (ModelLit*)(**(void (**)(...))(*plVar27 + 8))(plVar27);
                                                            pcVar16 = (char*)(*local_38).operator->();
                                                            uVar51 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >>
                                                                           32);
                                                            if (*pcVar16 == '\0') {
                                                                local_60 = (PixfontGeneric*)*local_b0;
                                                                paVar33 = dash3d::Pix3D::GetSinTable();
                                                                lVar11 = (*local_38).operator->();
                                                                puVar15 =
                                                                    (uint32_t*)(*paVar33)[(long)*(int*)(lVar11 + 260)];
                                                                local_90 = (((uint64_t)local_90._4_4_ << 32) |
                                                                            (uint32_t)(*puVar15));
                                                                paVar33 = dash3d::Pix3D::GetCosTable();
                                                                lVar11 = (*local_38).operator->();
                                                                puVar17 = (unsigned int*)(*paVar33)[(long)*(
                                                                    int*)(lVar11 + 260)];
                                                                uVar7 = *puVar17;
                                                                paVar33 = dash3d::Pix3D::GetSinTable();
                                                                lVar11 = (*local_38).operator->();
                                                                puVar17 = (unsigned int*)(*paVar33)[(long)*(
                                                                    int*)(lVar11 + 264)];
                                                                uVar9 = *puVar17;
                                                                paVar33 = dash3d::Pix3D::GetCosTable();
                                                                lVar11 = (*local_38).operator->();
                                                                puVar15 =
                                                                    (uint32_t*)(*paVar33)[(long)*(int*)(lVar11 + 264)];
                                                                uVar51 = *puVar15;
                                                                iVar40 = local_48->field_8488;
                                                                local_f0._4_4_ = local_f0._4_4_ & 4294901760;
                                                                local_f0._0_4_ = 0;
                                                                new (local_f0) game::GamepadEvent();
                                                                (**(void (**)(...))(*(long*)local_40 + 16))(
                                                                    local_40, local_60, 0, local_90 & 4294967295,
                                                                    (unsigned long)uVar7, (unsigned long)uVar9,
                                                                    (((uint64_t)uVar45 << 32) | (uint32_t)uVar51),
                                                                    (unsigned long)in_stack_fffffffffffffc60 &
                                                                        18446744069414584320,
                                                                    (((uint64_t)uVar50 << 32) |
                                                                     (uint32_t)((unsigned int)local_58)),
                                                                    (unsigned int)local_70, 0, iVar40,
                                                                    (GamepadEvent*)local_f0, 0);
                                                            }
                                                            plVar27 = (long*)local_b0.operator->();
                                                            (**(void (**)(...))(*plVar27 + 64))(plVar27);
                                                            local_90 = *local_b0;
                                                            paVar33 = dash3d::Pix3D::GetSinTable();
                                                            lVar11 = (*local_38).operator->();
                                                            puVar15 =
                                                                (uint32_t*)(*paVar33)[(long)*(int*)(lVar11 + 260)];
                                                            local_88 = (Worldmap*)(((uint64_t)local_88._4_4_ << 32) |
                                                                                   (uint32_t)(*puVar15));
                                                            paVar33 = dash3d::Pix3D::GetCosTable();
                                                            lVar11 = (*local_38).operator->();
                                                            puVar15 =
                                                                (uint32_t*)(*paVar33)[(long)*(int*)(lVar11 + 260)];
                                                            local_b8 = (Array<shared_ptr<
                                                                            rs2lib::IfType>>*)(((uint64_t)local_b8._4_4_
                                                                                                << 32) |
                                                                                               (uint32_t)(*puVar15));
                                                            paVar33 = dash3d::Pix3D::GetSinTable();
                                                            lVar11 = (*local_38).operator->();
                                                            puVar17 =
                                                                (unsigned int*)(*paVar33)[(long)*(int*)(lVar11 + 264)];
                                                            local_bc = *puVar17;
                                                            paVar33 = dash3d::Pix3D::GetCosTable();
                                                            lVar11 = (*local_38).operator->();
                                                            puVar15 =
                                                                (uint32_t*)(*paVar33)[(long)*(int*)(lVar11 + 264)];
                                                            local_114 = *puVar15;
                                                            lVar11 = (*local_38).operator->();
                                                            uVar8 = *(uint32_t*)(lVar11 + 252);
                                                            lVar11 = (*local_38).operator->();
                                                            iVar40 = *(int*)(lVar11 + 256);
                                                            lVar11 = (*local_38).operator->();
                                                            iVar44 = (unsigned int)local_58 + (unsigned int)local_60;
                                                            iVar37 = (unsigned int)local_70 + *(int*)(lVar11 + 256);
                                                            iVar43 = local_48->field_8488;
                                                            local_f0._4_4_ = local_f0._4_4_ & 4294901760;
                                                            local_f0._0_4_ = 0;
                                                            new (local_f0) game::GamepadEvent();
                                                            (**(void (**)(...))(*(long*)local_40 + 16))(
                                                                local_40, local_90, 0,
                                                                (unsigned long)local_88 & 4294967295,
                                                                (unsigned long)local_b8 & 4294967295,
                                                                (unsigned long)local_bc,
                                                                (((uint64_t)uVar45 << 32) | (uint32_t)local_114),
                                                                (((uint64_t)uVar51 << 32) | (uint32_t)uVar8),
                                                                (((uint64_t)uVar50 << 32) |
                                                                 (uint32_t)(iVar44 + iVar40)),
                                                                iVar37, 0, iVar43, (GamepadEvent*)local_f0, 0);
                                                        }
                                                        local_50 = (NXTPix3D*)(unsigned long)uVar7;
                                                        new (local_f0) shared_ptr();
                                                        new (&local_e0) jag::math::Vector2T();
                                                        local_d8 = local_d8 & 18446744069414584320;
                                                        local_110 = dash3d::GridRect(iVar40, iVar37, iVar43 - iVar40,
                                                                                     (int)local_50 - iVar37);
                                                        *local_f0 = local_110;
                                                        local_110 = sidebars::SideBarData(iVar46, iVar44);
                                                        local_e0 = local_110;
                                                        local_d8 = (((uint64_t)local_d8._4_4_ << 32) |
                                                                    (uint32_t)local_40._0_4_);
                                                        pCVar34 = Instance();
                                                        uVar7 = pCVar34->field_52736;
                                                        pCVar34 = Instance();
                                                        local_320 = sidebars::SideBarData(uVar7, pCVar34->field_52740);
                                                        local_2d0._0_8_ = jag::math::operator-(&local_320);
                                                        local_110.Vector2T<int>(*local_2d0);
                                                        local_f0->Translate(local_110);
                                                        pcVar16 = (char*)(*local_38).operator->();
                                                        this_01 = dash3d::world::m_modelLitRendererRt7;
                                                        if (*pcVar16 == '\0') {
                                                            pMVar35 = (ModelLit*)*local_b0;
                                                            lVar11 = (*local_38).operator->();
                                                            iVar40 = *(int*)(lVar11 + 260);
                                                            lVar11 = (*local_38).operator->();
                                                            iVar43 = *(int*)(lVar11 + 264);
                                                            local_2b0 = rs2lib::worldmap::LocationData(
                                                                0, (unsigned int)local_58, (unsigned int)local_70);
                                                            in_stack_fffffffffffffc58 = (NpcType*)local_f0;
                                                            this_01->SubmitOverlayModel(
                                                                *pMVar35, iVar40, iVar43, local_2b0._0_8_,
                                                                *((OverlayViewportState*)(unsigned long)(unsigned int)
                                                                      local_2b0.field_8));
                                                        } else {
                                                            local_40 = (ModelLit*)*local_b0;
                                                            lVar11 = (*local_38).operator->();
                                                            iVar40 = *(int*)(lVar11 + 260);
                                                            lVar11 = (*local_38).operator->();
                                                            iVar43 = *(int*)(lVar11 + 264);
                                                            lVar11 = (*local_38).operator->();
                                                            iVar37 = *(int*)(lVar11 + 252);
                                                            lVar11 = (*local_38).operator->();
                                                            iVar44 = *(int*)(lVar11 + 256);
                                                            lVar11 = (*local_38).operator->();
                                                            new (&local_2a0) rs2lib::worldmap::LocationData(
                                                                iVar37,
                                                                (unsigned int)local_58 + (unsigned int)local_60 +
                                                                    iVar44,
                                                                (unsigned int)local_70 + *(int*)(lVar11 + 256));
                                                            in_stack_fffffffffffffc58 = (NpcType*)local_f0;
                                                            this_01->SubmitOverlayModel(
                                                                *local_40, iVar40, iVar43, local_2a0,
                                                                *((OverlayViewportState*)(unsigned long)local_298));
                                                        }
                                                    }
                                                } else {
                                                    lVar11 = (*psVar13).operator->();
                                                    if (*(int*)(lVar11 + 12) == 8) {
                                                        bVar4 = *local_1d8 == *psVar13;
                                                        if ((bVar4) && (*(int*)&local_48->field_2505088 ==
                                                                        *(int*)((long)&local_48->field_2505088 + 4))) {
                                                            pPVar29 = (PixfontGeneric*)local_1c8->end();
                                                            lVar11 = (*psVar13).operator->();
                                                            new (local_f0) eastl::string(*((lVar11 + 320)));
                                                            local_b0 = eastl::string();
                                                            SubstituteVars((Client*)&local_110,
                                                                           (eastl::string*)local_48,
                                                                           (shared_ptr<rs2lib::IfType>*)local_f0);
                                                            *local_f0 = &local_110;
                                                            lVar11 = local_f0->size();
                                                            if (lVar11 == 0) {
                                                                iVar40 = 0;
                                                                iVar43 = 0;
                                                            } else {
                                                                iVar43 = 0;
                                                                iVar40 = 0;
                                                                local_60 = pPVar29;
                                                                do {
                                                                    uVar7 =
                                                                        local_f0->find(StringConstants::TAG_BREAK, 0);
                                                                    if (uVar7 == 4294967295) {
                                                                        local_b0 = local_f0;
                                                                        local_f0->assign("");
                                                                    } else {
                                                                        local_110 =
                                                                            local_f0->substr(0, (long)(int)uVar7);
                                                                        local_b0 = &local_110;
                                                                        local_110 = local_f0->substr(
                                                                            (long)(((unsigned long)uVar7 << 32) +
                                                                                   17179869184) >>
                                                                                32,
                                                                            18446744073709551615);
                                                                        *local_f0 = &local_110;
                                                                        pPVar29 = local_60;
                                                                    }
                                                                    iVar37 = pPVar29->StringWid(local_b0);
                                                                    if (iVar40 < iVar37) {
                                                                        iVar40 = iVar37;
                                                                    }
                                                                    iVar43 = iVar43 + pPVar29->field_0 + 1;
                                                                    lVar11 = local_f0->size();
                                                                } while (lVar11 != 0);
                                                            }
                                                            psVar13 = local_38;
                                                            lVar11 = (*local_38).operator->();
                                                            iVar37 = *(int*)(lVar11 + 72);
                                                            lVar11 = (*psVar13).operator->();
                                                            iVar43 = iVar43 + 7;
                                                            iVar44 = iVar40 + 6;
                                                            iVar40 = ((int)local_40 - iVar40) + iVar37 - 11;
                                                            iVar37 = (int)local_40 + 5;
                                                            if (iVar40 < iVar37) {
                                                                iVar40 = iVar37;
                                                            }
                                                            iVar37 = (unsigned int)arg5 - iVar44;
                                                            if (iVar40 + iVar44 <= (int)(unsigned int)arg5) {
                                                                iVar37 = iVar40;
                                                            }
                                                            iVar40 = arg6 - iVar43;
                                                            if ((int)local_50 + *(int*)(lVar11 + 76) + iVar43 + 5 <=
                                                                arg6) {
                                                                iVar40 = (int)local_50 + 5 + *(int*)(lVar11 + 76);
                                                            }
                                                            local_58 =
                                                                (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                                  (uint32_t)iVar37);
                                                            (**(void (**)(...))(*(long*)local_68 + 32))(
                                                                local_68, iVar37, iVar40, iVar44, iVar43);
                                                            local_68->DrawRect((unsigned int)local_58, iVar40, iVar44,
                                                                               iVar43, 0);
                                                            lVar11 = (*local_38).operator->();
                                                            *local_f0 = ((lVar11 + 320));
                                                            iVar43 = pPVar29->field_0;
                                                            SubstituteVars((Client*)&local_110,
                                                                           (eastl::string*)local_48,
                                                                           (shared_ptr<rs2lib::IfType>*)local_f0);
                                                            *local_f0 = &local_110;
                                                            lVar11 = local_f0->size();
                                                            if (lVar11 != 0) {
                                                                iVar40 = iVar43 + iVar40 + 2;
                                                                local_58 =
                                                                    (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                                      (uint32_t)((unsigned int)
                                                                                                     local_58 +
                                                                                                 3));
                                                                do {
                                                                    uVar7 =
                                                                        local_f0->find(StringConstants::TAG_BREAK, 0);
                                                                    if (uVar7 == 4294967295) {
                                                                        local_b0 = local_f0;
                                                                        local_f0->assign("");
                                                                    } else {
                                                                        local_110 =
                                                                            local_f0->substr(0, (long)(int)uVar7);
                                                                        local_b0 = &local_110;
                                                                        local_110 = local_f0->substr(
                                                                            (long)(((unsigned long)uVar7 << 32) +
                                                                                   17179869184) >>
                                                                                32,
                                                                            18446744073709551615);
                                                                        *local_f0 = &local_110;
                                                                    }
                                                                    in_stack_fffffffffffffc58 = local_68;
                                                                    jstring::PixfontGeneric::DrawString(
                                                                        *pPVar29, (int)&local_b0,
                                                                        (unsigned int)local_58, iVar40, 0, *4294967295);
                                                                    iVar40 = iVar40 + pPVar29->field_0 + 1;
                                                                    lVar11 = local_f0->size();
                                                                } while (lVar11 != 0);
                                                            }
                                                            iVar40 = (int)local_40;
                                                            psVar13 = local_38;
                                                        }
                                                    }
                                                    lVar11 = (*psVar13).operator->();
                                                    iVar43 = *(int*)(lVar11 + 12);
                                                    lVar11 = (*psVar13).operator->();
                                                    psVar39 = local_38;
                                                    if (iVar43 == 9) {
                                                        cVar5 = *(char*)(lVar11 + 152);
                                                        lVar11 = (*psVar13).operator->();
                                                        if (!cVar5) {
                                                            iVar40 = *(int*)(lVar11 + 72);
                                                            lVar11 = (*psVar13).operator->();
                                                            iVar43 = (int)local_50;
                                                            local_50 =
                                                                (NXTPix3D*)(unsigned long)(unsigned int)(*(int*)(lVar11 +
                                                                                                                 76) +
                                                                                                         iVar43);
                                                        } else {
                                                            iVar43 = *(int*)(lVar11 + 76) + (unsigned int)local_50;
                                                            lVar11 = (*psVar13).operator->();
                                                            iVar40 = *(int*)(lVar11 + 72);
                                                        }
                                                        pMVar35 = local_40;
                                                        iVar46 = (int)local_40;
                                                        iVar40 = iVar40 + iVar46;
                                                        lVar11 = (*psVar13).operator->();
                                                        iVar37 = *(int*)(lVar11 + 148);
                                                        lVar11 = (*psVar13).operator->();
                                                        uVar7 =
                                                            (unsigned int)((unsigned long)in_stack_fffffffffffffc58 >>
                                                                           32);
                                                        iVar44 = *(int*)(lVar11 + 116);
                                                        if (iVar37 == 1) {
                                                            (**(void (**)(...))(*(long*)local_68 + 88))(
                                                                local_68, (unsigned long)pMVar35 & 4294967295, iVar43,
                                                                iVar40);
                                                        } else {
                                                            (*psVar13).operator->();
                                                            in_stack_fffffffffffffc58 =
                                                                (NpcType*)((unsigned long)uVar7 << 32);
                                                            DrawLineWithStrokeWidth((int)local_48, iVar46, iVar43,
                                                                                    iVar40, (int)local_50, iVar44);
                                                        }
                                                    } else {
                                                        if (*(int*)(lVar11 + 12) == 10) {
                                                            lVar11 = (*local_38).operator->();
                                                            lVar25 = (*psVar39).operator->();
                                                            piVar14 = std::min<int>(*((lVar11 + 72)), *((lVar25 + 76)));
                                                            iVar37 = (*piVar14 - (*piVar14 - 1 >> 31)) - 1 >> 1;
                                                            local_60 =
                                                                (PixfontGeneric*)(((uint64_t)local_60._4_4_ << 32) |
                                                                                  (uint32_t)(iVar40 + iVar37));
                                                            local_58 =
                                                                (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                                  (uint32_t)((int)local_50 + iVar37));
                                                            lVar11 = (*psVar39).operator->();
                                                            cVar5 = *(char*)(lVar11 + 132);
                                                            lVar11 = (*psVar39).operator->();
                                                            iVar40 = *(int*)(lVar11 + 156);
                                                            lVar11 = (*psVar39).operator->();
                                                            iVar43 = *(int*)(lVar11 + 160);
                                                            lVar11 = (*psVar39).operator->();
                                                            psVar13 = local_38;
                                                            uVar50 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >>
                                                                           32);
                                                            uVar45 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >>
                                                                           32);
                                                            if (!cVar5) {
                                                                if (iVar40 == iVar43) {
                                                                    uVar45 = *(uint32_t*)(lVar11 + 148);
                                                                    lVar11 = (*local_38).operator->();
                                                                    if ((unsigned int)local_70 == 0) {
                                                                        (**(void (**)(...))(*(long*)local_68 + 120))(
                                                                            local_68,
                                                                            (unsigned long)local_60 & 4294967295,
                                                                            (unsigned long)local_58 & 4294967295,
                                                                            iVar37, uVar45, *(uint32_t*)(lVar11 + 116));
                                                                    } else {
                                                                        in_stack_fffffffffffffc58 =
                                                                            (NpcType*)((unsigned long)
                                                                                           in_stack_fffffffffffffc58 &
                                                                                       18446744069414584320);
                                                                        (**(void (**)(...))(*(long*)local_68 + 128))(
                                                                            local_68,
                                                                            (unsigned long)local_60 & 4294967295,
                                                                            (unsigned long)local_58 & 4294967295);
                                                                    }
                                                                } else {
                                                                    uVar51 = *(uint32_t*)(lVar11 + 156);
                                                                    lVar11 = (*local_38).operator->();
                                                                    uVar8 = *(uint32_t*)(lVar11 + 160);
                                                                    lVar11 = (*psVar13).operator->();
                                                                    uVar49 = *(uint32_t*)(lVar11 + 148);
                                                                    lVar11 = (*psVar13).operator->();
                                                                    if ((unsigned int)local_70 == 0) {
                                                                        in_stack_fffffffffffffc60 =
                                                                            (PixfontGeneric*)(((uint64_t)uVar50 << 32) |
                                                                                              (uint32_t)(*(
                                                                                                  uint32_t*)(lVar11 +
                                                                                                             116)));
                                                                        in_stack_fffffffffffffc58 =
                                                                            (NpcType*)(((uint64_t)uVar45 << 32) |
                                                                                       (uint32_t)uVar49);
                                                                        (**(void (**)(...))(*(long*)local_68 + 152))(
                                                                            local_68,
                                                                            (unsigned long)local_60 & 4294967295,
                                                                            (unsigned long)local_58 & 4294967295,
                                                                            iVar37, uVar51, uVar8,
                                                                            in_stack_fffffffffffffc58,
                                                                            in_stack_fffffffffffffc60);
                                                                    } else {
                                                                        in_stack_fffffffffffffc68 =
                                                                            (((uint64_t)((
                                                                                  int)(in_stack_fffffffffffffc68 >> 32))
                                                                              << 32) |
                                                                             (uint32_t)(~(unsigned int)local_70)) &
                                                                            18446744069414584575;
                                                                        in_stack_fffffffffffffc60 =
                                                                            (PixfontGeneric*)(((uint64_t)uVar50 << 32) |
                                                                                              (uint32_t)(*(
                                                                                                  uint32_t*)(lVar11 +
                                                                                                             116)));
                                                                        in_stack_fffffffffffffc58 =
                                                                            (NpcType*)(((uint64_t)uVar45 << 32) |
                                                                                       (uint32_t)uVar49);
                                                                        (**(void (**)(...))(*(long*)local_68 + 160))(
                                                                            local_68,
                                                                            (unsigned long)local_60 & 4294967295,
                                                                            (unsigned long)local_58 & 4294967295,
                                                                            iVar37, uVar51, uVar8,
                                                                            in_stack_fffffffffffffc58,
                                                                            in_stack_fffffffffffffc60,
                                                                            in_stack_fffffffffffffc68);
                                                                    }
                                                                }
                                                            } else if (iVar40 == iVar43) {
                                                                if ((unsigned int)local_70 == 0) {
                                                                    (**(void (**)(...))(*(long*)local_68 + 104))(
                                                                        local_68, (unsigned long)local_60 & 4294967295,
                                                                        (unsigned long)local_58 & 4294967295);
                                                                } else {
                                                                    (**(void (**)(...))(*(long*)local_68 + 112))(
                                                                        local_68, (unsigned long)local_60 & 4294967295,
                                                                        (unsigned long)local_58 & 4294967295, iVar37,
                                                                        *(uint32_t*)(lVar11 + 116),
                                                                        ~(unsigned int)local_70 & 255);
                                                                }
                                                            } else {
                                                                uVar50 = *(uint32_t*)(lVar11 + 156);
                                                                lVar11 = (*local_38).operator->();
                                                                uVar51 = *(uint32_t*)(lVar11 + 160);
                                                                lVar11 = (*psVar13).operator->();
                                                                if ((unsigned int)local_70 == 0) {
                                                                    in_stack_fffffffffffffc58 =
                                                                        (NpcType*)(((uint64_t)uVar45 << 32) |
                                                                                   (uint32_t)(*(uint32_t*)(lVar11 +
                                                                                                           116)));
                                                                    (**(void (**)(...))(*(long*)local_68 + 136))(
                                                                        local_68, (unsigned long)local_60 & 4294967295,
                                                                        (unsigned long)local_58 & 4294967295, iVar37,
                                                                        uVar50, uVar51, in_stack_fffffffffffffc58);
                                                                } else {
                                                                    in_stack_fffffffffffffc60 =
                                                                        (PixfontGeneric*)((((uint64_t)((
                                                                                                int)((unsigned long)
                                                                                                         in_stack_fffffffffffffc60 >>
                                                                                                     32))
                                                                                            << 32) |
                                                                                           (uint32_t)(~(
                                                                                               unsigned int)local_70)) &
                                                                                          18446744069414584575);
                                                                    in_stack_fffffffffffffc58 =
                                                                        (NpcType*)(((uint64_t)uVar45 << 32) |
                                                                                   (uint32_t)(*(uint32_t*)(lVar11 +
                                                                                                           116)));
                                                                    (**(void (**)(...))(*(long*)local_68 + 144))(
                                                                        local_68, (unsigned long)local_60 & 4294967295,
                                                                        (unsigned long)local_58 & 4294967295, iVar37,
                                                                        uVar50, uVar51, in_stack_fffffffffffffc58,
                                                                        in_stack_fffffffffffffc60);
                                                                }
                                                            }
                                                        }
                                                        psVar13 = local_38;
                                                        lVar11 = (*local_38).operator->();
                                                        if (*(int*)(lVar11 + 12) == 12) {
                                                            pIVar28 = (IfType*)(*psVar13).operator->();
                                                            this_17 = (PostProcessManager*)pIVar28->GetInputField();
                                                            pIVar28 = (IfType*)(*psVar13).operator->();
                                                            puVar17 = (unsigned int*)pIVar28->GetInputFieldAppearance();
                                                            if ((this_17 == nullptr) || (puVar17 == nullptr)) {
                                                                LogAssert(
                                                                    "inputField != nullptr && appearance != nullptr",
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                                                                    1138, nullptr);
                                                            }
                                                            cVar5 = this_17->Is64BitOS();
                                                            psVar13 = local_38;
                                                            if (cVar5) {
                                                                local_110.field_0 = local_110.field_0 & 4294967040;
                                                                pIVar28 = (IfType*)(*local_38).operator->();
                                                                midiPlayerMainThread =
                                                                    (shared_ptr<midi2::MidiPlayerMainThread>*)
                                                                        pIVar28->GetFont(local_110);
                                                                bVar4 = *midiPlayerMainThread != nullptr;
                                                                if (bVar4) {
                                                                    new (local_f0) InputFieldLayoutParams();
                                                                    local_f0._0_4_ = (uint32_t)local_40;
                                                                    local_f0._4_4_ = (uint32_t)local_50;
                                                                    lVar11 = (*psVar13).operator->();
                                                                    local_f0._8_4_ = *(int*)(lVar11 + 72);
                                                                    lVar11 = (*psVar13).operator->();
                                                                    local_f0._12_4_ = *(int*)(lVar11 + 76);
                                                                    local_e0 = this_17->GetFont11pxRegularID();
                                                                    local_dc = this_17->GetUsageType();
                                                                    local_c8 = this_17->ShowCaret();
                                                                    local_d8 = this_17->GetWrapV();
                                                                    local_d0 = this_17->GetRenderTargetsManager();
                                                                    local_a4 = puVar17[1];
                                                                    local_b0._8_4_ = *puVar17;
                                                                    lVar11 = (*psVar13).operator->();
                                                                    if (*(char*)(lVar11 + 396) == '\0') {
                                                                        local_b0.m_z = 4294967295;
                                                                    } else {
                                                                        lVar11 = (*psVar13).operator->();
                                                                        local_b0.m_z = *(unsigned int*)(lVar11 + 220);
                                                                    }
                                                                    cVar5 = this_17->HasFocus();
                                                                    if (!cVar5) {
                                                                        pTVar36 = (TextRun*)this_17->SSOBeginPtr();
                                                                        cVar5 = pTVar36->IsEmpty();
                                                                        if (!cVar5)
                                                                            goto LAB_100100ee5;
                                                                        local_b0.m_x = puVar17[2];
                                                                        pTVar36 = (TextRun*)this_17->GetOrigin();
                                                                    } else {
                                                                    LAB_100100ee5:
                                                                        lVar11 = (*local_38).operator->();
                                                                        local_b0.m_x = *(unsigned int*)(lVar11 + 116);
                                                                        pTVar36 = (TextRun*)this_17->SSOBeginPtr();
                                                                    }
                                                                    this_19 = local_68;
                                                                    InputFieldRenderer::Draw(
                                                                        *local_f0, local_b0, *pTVar36,
                                                                        *midiPlayerMainThread, *local_68);
                                                                    goto LAB_1000fded9;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                lVar11 = (*psVar13).operator->();
                                if (*(int*)(lVar11 + 20) == 1336) {
                                    cVar5 = ((DeviceOptions*)(*local_268).operator->())->GetDisplayFps();
                                    if (cVar5) {
                                        iVar40 = (int)local_50;
                                        lVar11 = (*psVar13).operator->();
                                        pCVar34 = local_48;
                                        uVar7 = *(int*)(lVar11 + 72) + (int)local_40._0_4_;
                                        this_07 = (EnvLightProbeSettings*)local_48->field_152->GetFPSCounter();
                                        fVar48 = (float)this_07->GetOverbright();
                                        arg2_00 = (void*)(unsigned long)uVar7;
                                        DrawDebugString(pCVar34, uVar7, iVar40 + 15, "Fps:%0.1f", (double)fVar48);
                                        this_03 = local_238;
                                        uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                        uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                        uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                        uVar7 = iVar40 + 30;
                                        if (pCVar34->field_54877 == '\0') {
                                            iVar40 = (int)local_40;
                                            psVar13 = local_38;
                                            pCVar34 = local_48;
                                        } else {
                                            bVar4 = local_238 != arg2_00;
                                            if (bVar4) {
                                                lVar11 = (*local_38).operator->();
                                                iVar43 = *(int*)(lVar11 + 72) + (int)local_40._0_4_;
                                                pSVar18 = (ServerConnection*)(*this_03).operator->();
                                                local_58 = (PixfontGeneric*)pSVar18->GetBytesReceived();
                                                pSVar18 = (ServerConnection*)(*this_03).operator->();
                                                local_60 = (PixfontGeneric*)pSVar18->GetBytesSent();
                                                pIVar19 = (InputFieldKeyboardHandler*)(*this_03).operator->();
                                                uVar20 = pIVar19->PointerRelease();
                                                pIVar19 = (InputFieldKeyboardHandler*)(*this_03).operator->();
                                                uVar21 = pIVar19->PointerRelease();
                                                psVar13 = local_38;
                                                DrawDebugString(local_48, iVar43, uVar7,
                                                                "TCP I/O: %zu/%zu Avg: %zu/%zu", local_58, local_60,
                                                                uVar20, uVar21);
                                                uVar50 = (uint32_t)((unsigned long)uVar21 >> 32);
                                                uVar45 = (uint32_t)((unsigned long)uVar20 >> 32);
                                                uVar7 = iVar40 + 45;
                                            } else {
                                                psVar13 = local_38;
                                            }
                                            local_50 = (NXTPix3D*)(unsigned long)uVar7;
                                            lVar11 = local_230->GetAverage();
                                            pNVar24 = dash3d::NXTRenderer::GetInstance();
                                            lVar25 = pNVar24->field_224->GetAverage();
                                            lVar26 = (*psVar13).operator->();
                                            iVar43 = *(int*)(lVar26 + 72) + (int)local_40._0_4_;
                                            lVar26 = local_228->GetAverage();
                                            pCVar34 = local_48;
                                            auVar1 = (__int128)(lVar11 - lVar25) * (__int128)2361183241434822607;
                                            uVar20 = (((uint64_t)uVar45 << 32) |
                                                      (uint32_t)((int)((uint64_t)(((__int128)lVar25 *
                                                                                   (__int128)2361183241434822607) >>
                                                                                  64) >>
                                                                       7) -
                                                                 ((uint64_t)(((__int128)lVar25 *
                                                                              (__int128)2361183241434822607) >>
                                                                             96) >>
                                                                  31)));
                                            iVar40 = (int)local_50;
                                            DrawDebugString(
                                                local_48, iVar43, iVar40, "Logic:%6i Redraw:%6i Flip:%6i",
                                                (unsigned long)(unsigned int)((int)((uint64_t)(((__int128)lVar26 *
                                                                                                (__int128)2361183241434822607) >>
                                                                                               64) >>
                                                                                    7) -
                                                                              ((uint64_t)(((__int128)lVar26 *
                                                                                           (__int128)2361183241434822607) >>
                                                                                          96) >>
                                                                               31)),
                                                (unsigned long)(unsigned int)((int)(auVar1._8_8_ >> 7) -
                                                                              (auVar1._12_4_ >> 31)),
                                                uVar20);
                                            uVar49 = (uint32_t)((unsigned long)uVar20 >> 32);
                                            local_58._0_4_ = iVar40 + 15;
                                            lVar11 = (*psVar13).operator->();
                                            iVar40 = *(int*)(lVar11 + 72);
                                            iVar37 = (int)local_40;
                                            lVar11 = local_220->GetAverage();
                                            DrawDebugString(
                                                pCVar34, iVar40 + iVar37, (unsigned int)local_58, "IF3:%i",
                                                (unsigned long)(unsigned int)((int)((uint64_t)(((__int128)lVar11 *
                                                                                                (__int128)2361183241434822607) >>
                                                                                               64) >>
                                                                                    7) -
                                                                              ((uint64_t)(((__int128)lVar11 *
                                                                                           (__int128)2361183241434822607) >>
                                                                                          96) >>
                                                                               31)));
                                            iVar43 = (int)local_50;
                                            local_58._0_4_ = iVar43 + 30;
                                            lVar11 = (*psVar13).operator->();
                                            iVar40 = *(int*)(lVar11 + 72);
                                            lVar11 = local_218->GetAverage();
                                            pCVar34 = local_48;
                                            DrawDebugString(
                                                local_48, iVar40 + iVar37, (unsigned int)local_58, "GDM:%i",
                                                (unsigned long)(unsigned int)((int)((uint64_t)(((__int128)lVar11 *
                                                                                                (__int128)2361183241434822607) >>
                                                                                               64) >>
                                                                                    7) -
                                                                              ((uint64_t)(((__int128)lVar11 *
                                                                                           (__int128)2361183241434822607) >>
                                                                                          96) >>
                                                                               31)));
                                            this_04 = local_210;
                                            local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                         (uint32_t)(iVar43 + 45));
                                            local_210->AddSample(
                                                dash3d::ModelLitRenderer_lastModelLitWorldRenderTotalNanos);
                                            lVar11 = (*local_38).operator->();
                                            iVar40 = *(int*)(lVar11 + 72) + (int)local_40._0_4_;
                                            lVar11 = this_04->GetAverage();
                                            uVar45 = (uint32_t)dash3d::ModelLitRenderer_lastModelLitWorldRenderTotal;
                                            local_60 =
                                                (PixfontGeneric*)(((uint64_t)local_60._4_4_ << 32) |
                                                                  (uint32_t)((uint32_t)dash3d::
                                                                                 ModelLitRenderer_lastModelLitUploadTotal));
                                            plVar27 = (long*)OSRenderCore_AudioThread::Instance();
                                            uVar8 = ((OSRenderCore_LogicThread_Common*)((long)plVar27 +
                                                                                        *(long*)(*plVar27 - 24)))
                                                        ->GetLastModelLitNXTTotal();
                                            in_stack_fffffffffffffc68 =
                                                (((uint64_t)uVar51 << 32) |
                                                 (uint32_t)((uint32_t)dash3d::ModelLitRenderer_lastCachedModelsTotal));
                                            uVar21 = (((uint64_t)uVar50 << 32) | (uint32_t)uVar8);
                                            uVar20 = (((uint64_t)uVar49 << 32) | (uint32_t)uVar45);
                                            DrawDebugString(
                                                pCVar34, iVar40, (unsigned int)local_58, "Model:%i (%i/%i/%i/%i)",
                                                (unsigned long)(unsigned int)((int)((uint64_t)(((__int128)lVar11 *
                                                                                                (__int128)2361183241434822607) >>
                                                                                               64) >>
                                                                                    7) -
                                                                              ((uint64_t)(((__int128)lVar11 *
                                                                                           (__int128)2361183241434822607) >>
                                                                                          96) >>
                                                                               31)),
                                                (unsigned long)local_60 & 4294967295, uVar20, uVar21,
                                                in_stack_fffffffffffffc68);
                                            psVar13 = local_38;
                                            uVar50 = (uint32_t)((unsigned long)uVar21 >> 32);
                                            uVar45 = (uint32_t)((unsigned long)uVar20 >> 32);
                                            uVar7 = iVar43 + 60;
                                            if (pCVar34->field_136 == 1) {
                                                local_58 = (PixfontGeneric*)(unsigned long)uVar7;
                                                lVar11 = (*local_38).operator->();
                                                iVar40 = *(int*)(lVar11 + 72);
                                                iVar37 = (int)local_40;
                                                plVar27 = (long*)OSRenderCore_AudioThread::Instance();
                                                uVar20 = ((OSRenderCore_LogicThread_Common*)((long)plVar27 +
                                                                                             *(long*)(*plVar27 - 24)))
                                                             ->GetLastNumNXTRenderables();
                                                DrawDebugString(pCVar34, iVar40 + iVar37, (int)local_58,
                                                                "Renderables:%zu", uVar20);
                                                local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                             (uint32_t)(iVar43 + 75));
                                                lVar11 = (*psVar13).operator->();
                                                iVar40 = *(int*)(lVar11 + 72);
                                                pNVar24 = dash3d::NXTRenderer::GetInstance();
                                                lVar11 = pNVar24->GetAverage();
                                                pNVar24 = dash3d::NXTRenderer::GetInstance();
                                                lVar25 = pNVar24->field_56->GetAverage();
                                                pNVar24 = dash3d::NXTRenderer::GetInstance();
                                                lVar26 = pNVar24->field_112->GetAverage();
                                                pCVar34 = local_48;
                                                uVar20 = (((uint64_t)uVar45 << 32) |
                                                          (uint32_t)((int)((uint64_t)(((__int128)lVar26 *
                                                                                       (__int128)2361183241434822607) >>
                                                                                      64) >>
                                                                           7) -
                                                                     ((uint64_t)(((__int128)lVar26 *
                                                                                  (__int128)2361183241434822607) >>
                                                                                 96) >>
                                                                      31)));
                                                DrawDebugString(
                                                    local_48, iVar40 + iVar37, (unsigned int)local_58,
                                                    "NXT:%6i %6i %6i",
                                                    (unsigned long)(unsigned int)((int)((uint64_t)(((__int128)lVar11 *
                                                                                                    (__int128)2361183241434822607) >>
                                                                                                   64) >>
                                                                                        7) -
                                                                                  ((uint64_t)(((__int128)lVar11 *
                                                                                               (__int128)2361183241434822607) >>
                                                                                              96) >>
                                                                                   31)),
                                                    (unsigned long)(unsigned int)((int)((uint64_t)(((__int128)lVar25 *
                                                                                                    (__int128)2361183241434822607) >>
                                                                                                   64) >>
                                                                                        7) -
                                                                                  ((uint64_t)(((__int128)lVar25 *
                                                                                               (__int128)2361183241434822607) >>
                                                                                              96) >>
                                                                                   31)),
                                                    uVar20);
                                                uVar45 = (uint32_t)((unsigned long)uVar20 >> 32);
                                                iVar37 = (int)local_50;
                                                lVar11 = (*local_38).operator->();
                                                iVar43 = *(int*)(lVar11 + 72);
                                                iVar40 = (int)local_40;
                                                pNVar24 = dash3d::NXTRenderer::GetInstance();
                                                uVar7 = pNVar24->field_168->GetAverage();
                                                DrawDebugString(pCVar34, iVar43 + iVar40, iVar37 + 90, "Verts:%i",
                                                                (unsigned long)uVar7);
                                                uVar7 = iVar37 + 105;
                                            } else {
                                                iVar40 = (int)local_40;
                                            }
                                            lVar11 = (*local_38).operator->();
                                            iVar43 = *(int*)(lVar11 + 72);
                                            uVar9 = local_208->GetX();
                                            uVar41 = local_200->GetX();
                                            DrawDebugString(pCVar34, iVar43 + iVar40, uVar7, "Pointer 0 Press:%i,%i",
                                                            (unsigned long)uVar9, (unsigned long)uVar41);
                                            lVar11 = (*local_38).operator->();
                                            iVar43 = *(int*)(lVar11 + 72);
                                            uVar9 = local_1f8->GetX();
                                            uVar41 = local_1f0->GetX();
                                            DrawDebugString(local_48, iVar43 + iVar40, uVar7 + 15,
                                                            "Pointer 0 Release:%i,%i", (unsigned long)uVar9,
                                                            (unsigned long)uVar41);
                                            lVar11 = (*local_38).operator->();
                                            DrawDebugString(local_48, *(int*)(lVar11 + 72) + iVar40, uVar7 + 30,
                                                            "Action Current:%i, Last:%i",
                                                            (unsigned long)(unsigned int)local_48->field_8504,
                                                            (unsigned long)*(unsigned int*)&local_48->field_8508);
                                            local_50 =
                                                (NXTPix3D*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(uVar7 + 45));
                                            lVar11 = (*local_38).operator->();
                                            this_05 = local_130;
                                            iVar43 = *(int*)(lVar11 + 72);
                                            lVar11 = (*local_130).operator->();
                                            local_58 = (PixfontGeneric*)(((uint64_t)local_58._4_4_ << 32) |
                                                                         (uint32_t)(*(uint32_t*)(lVar11 + 24)));
                                            lVar11 = (*this_05).operator->();
                                            local_60 = (PixfontGeneric*)(((uint64_t)local_60._4_4_ << 32) |
                                                                         (uint32_t)(*(uint32_t*)(lVar11 + 28)));
                                            lVar11 = (*this_05).operator->();
                                            iVar37 = *(int*)(lVar11 + 24);
                                            iVar44 = iVar37 + 127;
                                            if (-1 < iVar37) {
                                                iVar44 = iVar37;
                                            }
                                            lVar11 = (*this_05).operator->();
                                            psVar13 = local_38;
                                            pCVar34 = local_48;
                                            iVar37 = *(int*)(lVar11 + 28);
                                            iVar46 = iVar37 + 127;
                                            if (-1 < iVar37) {
                                                iVar46 = iVar37;
                                            }
                                            in_stack_fffffffffffffc58 =
                                                (NpcType*)(((uint64_t)uVar45 << 32) | (uint32_t)(iVar44 >> 7));
                                            in_stack_fffffffffffffc60 =
                                                (PixfontGeneric*)(((uint64_t)uVar50 << 32) | (uint32_t)(iVar46 >> 7));
                                            DrawDebugString(local_48, iVar43 + iVar40, (unsigned int)local_50,
                                                            "Loc:%d,%d (%d,%d)", (unsigned long)local_58 & 4294967295,
                                                            (unsigned long)local_60 & 4294967295,
                                                            in_stack_fffffffffffffc58, in_stack_fffffffffffffc60);
                                            uVar7 = uVar7 + 60;
                                        }
                                        lVar11 = (*psVar13).operator->();
                                        iVar43 = *(int*)(lVar11 + 72);
                                        dash3d::NXTRenderer::GetInstance();
                                        DrawDebugString(pCVar34, iVar40 + iVar43, uVar7, "Mem:%zik");
                                    }
                                    goto LAB_1000fd7d0;
                                }
                                lVar11 = (*psVar13).operator->();
                                pCVar34 = local_48;
                                if (*(int*)(lVar11 + 20) == 1337) {
                                    iVar43 = (int)local_40;
                                    *(int*)&local_48->field_2505044 = iVar43;
                                    iVar37 = (int)local_50;
                                    *(int*)((long)&local_48->field_2505044 + 4) = iVar37;
                                    lVar11 = (*psVar13).operator->();
                                    pCVar34->field_2505052 = *(int*)(lVar11 + 4) >> 16;
                                    lVar11 = (*psVar13).operator->();
                                    iVar40 = *(int*)(lVar11 + 72);
                                    lVar11 = (*psVar13).operator->();
                                    GameDrawMain(pCVar34, iVar43, iVar37, iVar40, *(int*)(lVar11 + 76), (int)local_58);
                                    lVar11 = (*psVar13).operator->();
                                    this_18 = local_250;
                                    uVar7 = *(unsigned int*)(lVar11 + 2044);
                                LAB_1000fdecd:
                                    puVar22 = (uint8_t*)(*this_18)[(long)(int)uVar7];
                                    *puVar22 = 1;
                                } else {
                                    lVar11 = (*psVar13).operator->();
                                    uVar45 = (uint32_t)((unsigned long)in_stack_fffffffffffffc58 >> 32);
                                    uVar50 = (uint32_t)((unsigned long)in_stack_fffffffffffffc60 >> 32);
                                    uVar51 = (uint32_t)(in_stack_fffffffffffffc68 >> 32);
                                    if (*(int*)(lVar11 + 20) == 1338) {
                                        if (local_48->field_8161 == '\0')
                                            goto LAB_1000fd7d0;
                                        pMVar23 = (Minimap*)(*local_190).operator->();
                                        in_stack_fffffffffffffc68 =
                                            (((uint64_t)uVar51 << 32) | (uint32_t)(*(int*)&local_48->field_54892));
                                        in_stack_fffffffffffffc60 =
                                            (PixfontGeneric*)(((uint64_t)uVar50 << 32) |
                                                              (uint32_t)(*(int*)&local_48->field_54896));
                                        in_stack_fffffffffffffc58 =
                                            (NpcType*)(((uint64_t)uVar45 << 32) | (uint32_t)local_48->field_54888);
                                        cVar5 =
                                            pMVar23->Draw(*psVar13, (int)local_40, (int)local_50, local_48->field_54900,
                                                          local_48->field_54904, local_48->field_54888,
                                                          *(int*)&local_48->field_54896, *(int*)&local_48->field_54892);
                                        if (cVar5) {
                                            this_18 = local_1e8;
                                            uVar7 = (unsigned int)local_58;
                                            goto LAB_1000fdecd;
                                        }
                                    } else {
                                        lVar11 = (*psVar13).operator->();
                                        if (*(int*)(lVar11 + 20) != 1339) {
                                            lVar11 = (*psVar13).operator->();
                                            pCVar34 = local_48;
                                            if (*(int*)(lVar11 + 20) == 1400) {
                                                local_88 = local_48->m_pWorldmap;
                                                lVar11 = (*psVar13).operator->();
                                                local_b8 =
                                                    (Array<shared_ptr<rs2lib::IfType>>*)(((uint64_t)local_b8._4_4_
                                                                                          << 32) |
                                                                                         (uint32_t)(*(
                                                                                             uint32_t*)(lVar11 + 72)));
                                                lVar11 = (*psVar13).operator->();
                                                in_stack_fffffffffffffc58 = local_68;
                                                worldmap::Worldmap::RenderWorldmap(
                                                    (int)local_88, (int)local_40, (int)local_50, (unsigned int)local_b8,
                                                    *(int*)(lVar11 + 76),
                                                    *((Pix2D*)(unsigned long)(unsigned int)pCVar34->field_8488));
                                            }
                                            lVar11 = (*psVar13).operator->();
                                            if (*(int*)(lVar11 + 20) == 1401) {
                                                this_00 = local_48->m_pWorldmap;
                                                lVar11 = (*psVar13).operator->();
                                                local_88 = (Worldmap*)(((uint64_t)local_88._4_4_ << 32) |
                                                                       (uint32_t)(*(uint32_t*)(lVar11 + 72)));
                                                lVar11 = (*psVar13).operator->();
                                                this_00->RenderOverview((int)local_40, (int)local_50,
                                                                        (unsigned int)local_88, *(int*)(lVar11 + 76),
                                                                        *local_68);
                                            }
                                            psVar39 = psVar13;
                                            lVar11 = (*psVar13).operator->();
                                            if (*(int*)(lVar11 + 20) == 1402) {
                                                ((TitleFlames*)(*psVar39).operator->())
                                                    ->RenderFlames((int)local_40, local_48->field_8488, *local_68);
                                            }
                                            goto LAB_1000fe5b8;
                                        }
                                        pMVar23 = (Minimap*)(*local_190).operator->();
                                        pMVar23->CompassDraw(*psVar13, (int)local_40, (int)local_50, (int)local_58,
                                                             local_48->field_53112);
                                    }
                                }
                                this_19 = local_68;
                            LAB_1000fded9:
                                this_19->SetClipping((unsigned int)arg3, (unsigned int)arg4, (unsigned int)arg5, arg6);
                            }
                        }
                    }
                }
            LAB_1000fd7d0:
                ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)local_148;
                uVar38 = local_290 + 1;
                uVar12 = local_148->end();
            } while (uVar38 < uVar12);
        }
    }

    // 0x1001011f0
    Client* Client::GetObjSprite(int arg1, int arg2, int arg3, int arg4, int arg5) {
        bool bVar1;
        long lVar3;
        Client* pCVar5;
        unsigned int in_stack_00000008;
        shared_ptr<dash3d::ModelLit> local_90;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        char cVar2 = (char)((in_stack_00000008 & 4) >> 2);
        if ((in_stack_00000008 & 4) == 0) {
            bVar1 = true;
        } else {
            local_78 = configdecoder::ObjType::List(arg2);
            local_50 = local_78;
            bVar1 = local_50 != nullptr;
            if (bVar1) {
                lVar3 = local_50.operator->();
                bVar1 = *(int*)(lVar3 + 200) == 0;
            } else {
                bVar1 = true;
                cVar2 = '\0';
            }
        }
        uint8_t bVar4 = (uint8_t)in_stack_00000008 & 1;
        uint8_t bVar6 = bVar4;
        if (arg3 == -1) {
            bVar6 = 0;
        }
        if ((in_stack_00000008 & 1) == 0) {
            bVar6 = bVar4;
        }
        if (bVar6 != 0) {
            bVar4 = 0;
            if ((in_stack_00000008 & 2) != 0 || arg3 != 1) {
                bVar4 = bVar6;
            }
            if (!bVar1) {
                bVar4 = bVar6;
            }
            bVar6 = bVar4;
        }
        if ((bVar6 == 0) && (cVar2)) {
            lVar3 = local_50.operator->();
            cVar2 = ((lVar3 + 40))->empty();
            if (!cVar2) {
                lVar3 = local_50.operator->();
                local_78.GetSprite(arg2, arg3, arg4, arg5, 2, false, *((lVar3 + 40)));
                pCVar5 = this;
                shared_ptr<FileRSevenDebugPresetProvider, void>(local_78);
                goto LAB_1001013b1;
            }
        }
        eastl::string local_78("");
        local_90.GetSprite(arg2, arg3, arg4, arg5, (unsigned int)bVar6, false, local_78);
        pCVar5 = this;
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_90);
    LAB_1001013b1:
        return pCVar5;
    }

    // 0x100101470
    bool Client::Hide(const shared_ptr<rs2lib::IfType>& ifType) {
        long lVar2;
        bool bVar3;

        if (field_53265 == '\0') {
        LAB_1001014a0:
            lVar2 = ifType.operator->();
            bVar3 = *(char*)(lVar2 + 92) != '\0';
        } else {
            if (GetActive(ifType) == 0) {
                lVar2 = ifType.operator->();
                if (*(int*)(lVar2 + 12) != 0)
                    goto LAB_1001014a0;
            }
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x1001014c0
    void Client::ClientComponent(const shared_ptr<rs2lib::IfType>& ifType) {
        int iVar1;
        GraphicsDefaults* pGVar3;
        double dVar4;

        long lVar2 = ifType.operator->();
        switch (*(uint32_t*)(lVar2 + 20)) {
        case 324:
            if (field_2508984 == -1) {
                lVar2 = ifType.operator->();
                field_2508984 = *(int*)(lVar2 + 164);
                lVar2 = ifType.operator->();
                field_2508988 = *(uint32_t*)(lVar2 + 168);
            }
            pGVar3 = (GraphicsDefaults*)field_2508968.operator->();
            iVar1 = pGVar3->GetSpriteCompassID();
            if (iVar1 != 1)
                goto LAB_10010159c;
        LAB_100101546:
            iVar1 = field_2508984;
            goto LAB_1001015a3;
        case 325:
            if (field_2508984 == -1) {
                lVar2 = ifType.operator->();
                field_2508984 = *(int*)(lVar2 + 164);
                lVar2 = ifType.operator->();
                field_2508988 = *(uint32_t*)(lVar2 + 168);
            }
            pGVar3 = (GraphicsDefaults*)field_2508968.operator->();
            iVar1 = pGVar3->GetSpriteCompassID();
            if (iVar1 != 1)
                goto LAB_100101546;
        LAB_10010159c:
            iVar1 = field_2508988;
        LAB_1001015a3:
            lVar2 = ifType.operator->();
            *(int*)(lVar2 + 164) = iVar1;
            break;
        case 327:
            lVar2 = ifType.operator->();
            *(uint32_t*)(lVar2 + 260) = 150;
            dVar4 = (double)_sin((double)field_8488 * 0.025);
            lVar2 = ifType.operator->();
            *(unsigned int*)(lVar2 + 264) = (int)(dVar4 * 256.0) & 2047;
            lVar2 = ifType.operator->();
            *(uint32_t*)(lVar2 + 228) = 5;
            lVar2 = ifType.operator->();
            *(uint32_t*)(lVar2 + 232) = 0;
            break;
        case 328:
            lVar2 = ifType.operator->();
            *(uint32_t*)(lVar2 + 260) = 150;
            dVar4 = (double)_sin((double)field_8488 * 0.025);
            lVar2 = ifType.operator->();
            *(unsigned int*)(lVar2 + 264) = (int)(dVar4 * 256.0) & 2047;
            lVar2 = ifType.operator->();
            *(uint32_t*)(lVar2 + 228) = 5;
            lVar2 = ifType.operator->();
            *(uint32_t*)(lVar2 + 232) = 1;
        }
    }

    // 0x1001016e0
    void Client::DrawDebugString(int arg1, int arg2, const char* str, ...) {
        char in_AL;
        uint64_t in_R8;
        uint64_t in_R9;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_958[32];
        uint64_t local_928;
        uint64_t local_918;
        uint64_t local_908;
        uint64_t local_8f8;
        uint64_t local_8e8;
        uint64_t local_8d8;
        uint64_t local_8c8;
        uint64_t local_8b8;

        if (in_AL != '\0') {
            local_928 = in_XMM0_Qa;
            local_918 = in_XMM1_Qa;
            local_908 = in_XMM2_Qa;
            local_8f8 = in_XMM3_Qa;
            local_8e8 = in_XMM4_Qa;
            local_8d8 = in_XMM5_Qa;
            local_8c8 = in_XMM6_Qa;
            local_8b8 = in_XMM7_Qa;
        }
        uint8_t* local_48 = local_958;
        uint8_t* local_50 = &uStack0000000000000008;
        uint64_t local_58 = 206158430240;
        uint64_t local_938 = in_R8;
        uint64_t local_930 = in_R9;
        fixed_string<char, 2048> local_880;
        local_880.sprintf_va_list(str, &local_58);
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_8a8(str_00);
        DrawDebugString(this, &local_8a8, arg1, arg2);
    }

    // 0x100101930
    void Client::DrawScrollbar(int arg1, int arg2, int arg3, int arg4, int arg5) {
        uint64_t extraout_var;

        uint8_t uVar2 = field_144->GetPix2D();
        long* plVar3 = (long*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2);
        uint64_t uVar4 = field_1115800[0];
        (**(void (**)(...))(*plVar3 + 184))(plVar3, uVar4, arg1, arg2);
        uVar4 = field_1115800[1];
        (**(void (**)(...))(*plVar3 + 184))(plVar3, uVar4, arg1, arg2 + arg4 - 16);
        int iVar6 = arg4 - 32;
        (**(void (**)(...))(*plVar3 + 32))(plVar3, arg1, arg2 + 16, 16, iVar6, field_1115840);
        unsigned long uVar1 = (long)(iVar6 * arg4) / (long)arg5;
        unsigned long uVar9 = 8;
        if (8 < (int)uVar1) {
            uVar9 = uVar1 & 4294967295;
        }
        int iVar8 = (int)uVar9;
        iVar6 = ((iVar6 - iVar8) * arg3) / (arg5 - arg4);
        int iVar7 = iVar6 + arg2 + 16;
        (**(void (**)(...))(*plVar3 + 32))(plVar3, arg1, iVar7, 16, uVar9, field_1115844);
        (**(void (**)(...))(*plVar3 + 72))(plVar3, arg1, iVar7, uVar9, field_1115852);
        (**(void (**)(...))(*plVar3 + 72))(plVar3, arg1 + 1, iVar7, uVar9, field_1115852);
        (**(void (**)(...))(*plVar3 + 56))(plVar3, arg1, iVar7, 16, field_1115852);
        int iVar5 = iVar6 + arg2 + 17;
        (**(void (**)(...))(*plVar3 + 56))(plVar3, arg1, iVar5, 16, field_1115852);
        (**(void (**)(...))(*plVar3 + 72))(plVar3, arg1 + 15, iVar7, uVar9, field_1115848);
        (**(void (**)(...))(*plVar3 + 72))(plVar3, arg1 + 14, iVar5, iVar8 - 1, field_1115848);
        (**(void (**)(...))(*plVar3 + 56))(plVar3, arg1, iVar6 + arg2 + iVar8 + 15, 16, field_1115848);
        (**(void (**)(...))(*plVar3 + 56))(plVar3, arg1 + 1, iVar6 + arg2 + iVar8 + 14, 15, field_1115848);
    }

    // 0x100101b60
    unsigned long Client::GetIfActive(const shared_ptr<rs2lib::IfType>& ifType) {
        int iVar2;
        int iVar3;
        int* piVar5;
        unsigned long uVar6;
        bool bVar7;
        uint64_t unaff_R15;

        long lVar4 = ifType.operator->();
        if (((lVar4 + 1816))->empty() == '\0') {
            lVar4 = ifType.operator->();
            iVar2 = ((lVar4 + 1816))->end();
            bVar7 = 0 < iVar2;
            if (0 < iVar2) {
                uVar6 = 0;
                do {
                    iVar3 = GetIfVar(ifType, (int)uVar6);
                    lVar4 = ifType.operator->();
                    piVar5 = (int*)(*((lVar4 + 1840)))[uVar6];
                    iVar2 = *piVar5;
                    lVar4 = ifType.operator->();
                    piVar5 = (int*)(*((lVar4 + 1816)))[uVar6];
                    if (*piVar5 == 2) {
                        if (iVar2 <= iVar3)
                            break;
                    } else {
                        lVar4 = ifType.operator->();
                        piVar5 = (int*)(*((lVar4 + 1816)))[uVar6];
                        if (*piVar5 == 3) {
                            if (iVar3 <= iVar2)
                                break;
                        } else {
                            lVar4 = ifType.operator->();
                            piVar5 = (int*)(*((lVar4 + 1816)))[uVar6];
                            if (*piVar5 == 4) {
                                if (iVar3 == iVar2)
                                    break;
                            } else if (iVar3 != iVar2)
                                break;
                        }
                    }
                    uVar6 = uVar6 + 1;
                    lVar4 = ifType.operator->();
                    iVar2 = ((lVar4 + 1816))->end();
                    bVar7 = (long)uVar6 < (long)iVar2;
                } while ((long)uVar6 < (long)iVar2);
            }
            uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)bVar7) ^ 1;
        } else {
            uVar6 = 0;
        }
        return uVar6 & 4294967041;
    }

    // 0x100101de0
    Client* Client::NiceNumber(int arg1) {
        long lVar2;
        unsigned int in_EDX;
        ReturnValue* this_00;
        unsigned long uVar3;
        eastl::string local_178;
        eastl::string local_158;
        value_type local_138;
        ReturnValue local_118;
        ReturnValue local_f8;
        ReturnValue local_d8;
        eastl::string local_98;
        ReturnValue local_78;
        eastl::string local_58;

        eastl::string local_b8;
        local_b8.sprintf("%i", (unsigned long)in_EDX);
        int iVar1 = local_b8.size();
        if (0 < iVar1 - 3) {
            uVar3 = (unsigned long)(iVar1 - 3);
            do {
                local_78 = local_b8.substr(0, uVar3);
                local_58 + local_78;
                local_d8 = local_b8.substr(uVar3, 18446744073709551615);
                local_98 + local_58;
                local_b8 = &local_98;
                uVar3 = uVar3 - 3;
            } while (0 < (int)uVar3);
        }
        uVar3 = local_b8.size();
        if (uVar3 < 10) {
            uVar3 = local_b8.size();
            if (uVar3 < 7) {
                local_78 = StringConstants::TAG_COLOUR(16776960);
                local_58 + DAT_100e35840;
                local_98 + local_58;
                *this + local_98;
                this_00 = &local_78;
                goto LAB_1001021cb;
            }
            local_118 = StringConstants::TAG_COLOUR(16777215);
            local_138 + DAT_100e35840;
            lVar2 = local_b8.size();
            local_f8 = local_b8.substr(0, lVar2 - 4);
            local_158 + local_138;
            local_178 + local_158;
            local_d8 + local_178;
            local_78 + local_d8;
            local_58 + local_78;
            local_98 + local_58;
            *this + local_98;
        } else {
            local_118 = StringConstants::TAG_COLOUR(65408);
            local_138 + DAT_100e35840;
            lVar2 = local_b8.size();
            local_f8 = local_b8.substr(0, lVar2 - 8);
            local_158 + local_138;
            local_178 + local_158;
            local_d8 + local_178;
            local_78 + local_d8;
            local_58 + local_78;
            local_98 + local_58;
            *this + local_98;
        }
        this_00 = &local_118;
    LAB_1001021cb:
        this_00->~basic_string();
        return this;
    }

    // 0x100102330
    Client* Client::SubstituteVars(const eastl::string& str, const shared_ptr<rs2lib::IfType>& ifType) {
        int arg1;
        unsigned long uVar3;
        char* pcVar4;
        long lVar5;
        shared_ptr<rs2lib::IfType>* in_RCX;
        Client* pCVar6;
        ReturnValue local_70;
        unsigned long local_40;

        shared_ptr<rs2lib::IfType>* local_50 = in_RCX;
        new (this) eastl::string();
        unsigned long uVar1 = ifType.size();
        reserve(uVar1);
        unsigned long uVar2 = ifType.size();
        uVar1 = 0;
        do {
            local_40 = uVar1;
            do {
                uVar3 = ifType.find("%", uVar1);
                if (uVar2 <= uVar3) {
                    lVar5 = ifType.size();
                    pCVar6 = this;
                    append(ifType, local_40, lVar5 - local_40);
                    return pCVar6;
                }
                uVar1 = uVar3 + 1;
                pcVar4 = &ifType[uVar1];
            } while (4 < (uint8_t)(*pcVar4 - 49U));
            arg1 = GetIfVar((Client*)str, local_50, *pcVar4 - 49);
            pCVar6 = (Client*)ifType;
            append(ifType, local_40, uVar3 - local_40);
            Inf(&local_70, pCVar6, arg1);
            append(&local_70);
            uVar1 = uVar3 + 2;
        } while (true);
    }

    // 0x100102560
    void Client::DrawOverlay(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        Array<shared_ptr<rs2lib::IfType>>* ifTypes;

        if (m_entityOverlays->OverlayExistsAtIndex(arg1) != '\0') {
            ifTypes = (Array<shared_ptr<rs2lib::IfType>>*)m_entityOverlays->GetOverlay(arg1);
            if (ifTypes != nullptr) {
                DrawLayer(*ifTypes, -1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
            }
        }
    }

    // 0x100102d50
    void Client::DrawLineWithStrokeWidth(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        uint64_t* puVar1;
        int iVar3;
        long lVar4;
        Pix3D* pPVar5;
        SoftwarePix3D* pSVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int arg3_00;
        uint32_t in_register_0000003c;
        int iVar12;
        unique_ptr<dash3d::SoftwarePix3D>* unique_ptr;
        int iVar13;
        int iVar14;
        int iVar15;
        int in_stack_00000008;

        unsigned int uVar16 = arg4 - arg2;
        unsigned int uVar10 = arg5 - arg3;
        unsigned int uVar2 = -uVar16;
        if ((int)-uVar16 < 0) {
            uVar2 = uVar16;
        }
        unsigned int uVar11 = -uVar10;
        if ((int)-uVar10 < 0) {
            uVar11 = uVar10;
        }
        if (uVar11 <= uVar2) {
            uVar11 = uVar2;
        }
        if (uVar11 != 0) {
            iVar7 = (int)(uVar16 * 65536) / (int)uVar11;
            iVar3 = (int)(uVar10 * 65536) / (int)uVar11;
            iVar14 = -iVar3;
            if (iVar3 <= iVar7) {
                iVar7 = -iVar7;
                iVar14 = iVar3;
            }
            iVar13 = iVar14 * in_stack_00000008 >> 17;
            iVar15 = iVar14 * in_stack_00000008 + 1 >> 17;
            iVar3 = iVar7 * in_stack_00000008 >> 17;
            iVar12 = iVar7 * in_stack_00000008 + 1 >> 17;
            puVar1 = *(uint64_t**)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) + 144);
            lVar4 = (**(void (**)(...))*puVar1)(puVar1, in_stack_00000008,
                                                (long)(int)(uVar10 * 65536) % (long)(int)uVar11 & 4294967295);
            iVar8 = arg2 - *(int*)(lVar4 + 24);
            iVar9 = arg3 - *(int*)(lVar4 + 16);
            iVar14 = iVar8 + iVar13;
            iVar7 = iVar8 - iVar15;
            iVar15 = (iVar8 + uVar16) - iVar15;
            iVar13 = iVar8 + uVar16 + iVar13;
            iVar8 = iVar9 + iVar3;
            arg3_00 = (iVar9 + uVar10) - iVar12;
            unique_ptr =
                (unique_ptr<dash3d::SoftwarePix3D>*)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) +
                                                     1120488);
            pPVar5 = (Pix3D*)(*unique_ptr).operator->();
            pPVar5->SetHClip(iVar14, iVar7, iVar15);
            pSVar6 = (SoftwarePix3D*)(*unique_ptr).operator->();
            pSVar6->FlatTriangle(iVar8, iVar9 - iVar12, arg3_00, iVar14, iVar7, iVar15, arg6);
            pPVar5 = (Pix3D*)(*unique_ptr).operator->();
            pPVar5->SetHClip(iVar14, iVar15, iVar13);
            pSVar6 = (SoftwarePix3D*)(*unique_ptr).operator->();
            pSVar6->FlatTriangle(iVar8, arg3_00, iVar9 + uVar10 + iVar3, iVar14, iVar15, iVar13, arg6);
        }
    }

    // 0x100102fd0
    void Client::InterfaceCalculateSizeAndPosInterface(int arg1, int arg2, int arg3, bool arg4, bool arg5) {
        int arg2_00;

        if (((IfType*)(unsigned long)(unsigned int)arg1)->OpenInterface(arg1) != '\0') {
            arg2_00 = (*((Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)arg1];
            InterfaceCalculateSizeAndPosArray((Array<shared_ptr<rs2lib::IfType>>*)this, arg2_00, -1, arg2,
                                              (uint8_t)arg3, arg4);
        }
    }

    // 0x100103040
    void Client::InterfaceCalculateSizeAndPosComponent(const shared_ptr<rs2lib::IfType>& ifType) {
        shared_ptr<rs2lib::IfType>* this_00;
        int arg2;
        int arg3;
        shared_ptr<dash3d::Decor> local_40;
        unsigned int local_30[2];

        long lVar1 = ifType.operator->();
        if (*(int*)(lVar1 + 88) == -1) {
            local_30[0] = ((WorldmapAreaMetadata*)field_144->GetScreen())->GetMinMapX();
            arg2 = local_30->GetX();
            local_30[0] = ((NXTPixScreen*)field_144->GetScreen())->GetUIHeight();
            arg3 = local_30->GetX();
        } else {
            local_40 = shared_ptr(ifType);
            this_00 = (shared_ptr<rs2lib::IfType>*)GetInterfaceLayer(&local_40);
            lVar1 = (*this_00).operator->();
            arg2 = *(int*)(lVar1 + 72);
            lVar1 = (*this_00).operator->();
            arg3 = *(int*)(lVar1 + 76);
        }
        InterfaceCalculateSize(ifType, arg2, arg3, false, false);
        InterfaceCalculatePosition(ifType, arg2, arg3);
    }

    // 0x100103130
    void Client::InterfaceCalculateSize(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, bool arg4,
                                        bool arg5) {
        int iVar1;
        int iVar2;
        IfType* this_00;
        InputField* this_01;
        uint32_t in_register_00000081;
        uint32_t in_register_00000089;
        uint8_t local_c8[132];

        uint32_t local_38 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
        long lVar4 = ifType.operator->();
        int local_40 = *(int*)(lVar4 + 72);
        lVar4 = ifType.operator->();
        int local_3c = *(int*)(lVar4 + 76);
        lVar4 = ifType.operator->();
        int iVar5 = *(int*)(lVar4 + 40);
        lVar4 = ifType.operator->();
        uint32_t local_44 = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4);
        if (iVar5 == 0) {
            iVar5 = *(int*)(lVar4 + 56);
        LAB_1001031cd:
            lVar4 = ifType.operator->();
            *(int*)(lVar4 + 72) = iVar5;
        } else {
            iVar5 = *(int*)(lVar4 + 40);
            lVar4 = ifType.operator->();
            if (iVar5 == 1) {
                iVar5 = arg2 - *(int*)(lVar4 + 56);
                goto LAB_1001031cd;
            }
            if (*(int*)(lVar4 + 40) == 2) {
                lVar4 = ifType.operator->();
                iVar5 = arg2 * *(int*)(lVar4 + 56) >> 14;
                goto LAB_1001031cd;
            }
        }
        lVar4 = ifType.operator->();
        iVar5 = *(int*)(lVar4 + 44);
        lVar4 = ifType.operator->();
        if (iVar5 == 0) {
            iVar5 = *(int*)(lVar4 + 60);
        LAB_100103225:
            lVar4 = ifType.operator->();
            *(int*)(lVar4 + 76) = iVar5;
        } else {
            iVar5 = *(int*)(lVar4 + 44);
            lVar4 = ifType.operator->();
            iVar1 = arg3;
            if (iVar5 == 1) {
                iVar5 = arg3 - *(int*)(lVar4 + 60);
                goto LAB_100103225;
            }
            if (*(int*)(lVar4 + 44) == 2) {
                lVar4 = ifType.operator->();
                iVar5 = iVar1 * *(int*)(lVar4 + 60) >> 14;
                goto LAB_100103225;
            }
        }
        lVar4 = ifType.operator->();
        if (*(int*)(lVar4 + 40) == 4) {
            lVar4 = ifType.operator->();
            iVar5 = *(int*)(lVar4 + 76);
            lVar4 = ifType.operator->();
            iVar1 = *(int*)(lVar4 + 80);
            lVar4 = ifType.operator->();
            iVar2 = *(int*)(lVar4 + 84);
            lVar4 = ifType.operator->();
            *(int*)(lVar4 + 72) = (iVar5 * iVar1) / iVar2;
        }
        lVar4 = ifType.operator->();
        if (*(int*)(lVar4 + 44) == 4) {
            lVar4 = ifType.operator->();
            iVar5 = *(int*)(lVar4 + 72);
            lVar4 = ifType.operator->();
            iVar1 = *(int*)(lVar4 + 84);
            lVar4 = ifType.operator->();
            iVar2 = *(int*)(lVar4 + 80);
            lVar4 = ifType.operator->();
            *(int*)(lVar4 + 76) = (iVar5 * iVar1) / iVar2;
        }
        if ((field_53265 != '\0') && (lVar4 = ifType.operator->(), *(int*)(lVar4 + 12) == 0)) {
            lVar4 = ifType.operator->();
            if ((*(int*)(lVar4 + 76) < 5) && (lVar4 = ifType.operator->(), *(int*)(lVar4 + 72) < 5)) {
                lVar4 = ifType.operator->();
                *(uint32_t*)(lVar4 + 76) = 5;
            } else {
                lVar4 = ifType.operator->();
                if (*(int*)(lVar4 + 76) < 1) {
                    lVar4 = ifType.operator->();
                    *(uint32_t*)(lVar4 + 76) = 5;
                }
                lVar4 = ifType.operator->();
                if (0 < *(int*)(lVar4 + 72))
                    goto LAB_100103340;
            }
            lVar4 = ifType.operator->();
            *(uint32_t*)(lVar4 + 72) = 5;
        }
    LAB_100103340:
        lVar4 = ifType.operator->();
        if (*(int*)(lVar4 + 20) == 1337) {
            field_52472 = ifType;
        }
        lVar4 = ifType.operator->();
        if (*(int*)(lVar4 + 12) == 12) {
            this_00 = (IfType*)ifType.operator->();
            this_01 = (InputField*)this_00->GetInputField();
            if (this_01 != nullptr) {
                lVar4 = ifType.operator->();
                iVar5 = *(int*)(lVar4 + 72);
                lVar4 = ifType.operator->();
                this_01->SetSize(iVar5, *(int*)(lVar4 + 76));
            }
        }
        if ((char)local_44 != '\0') {
            lVar4 = ifType.operator->();
            if (((lVar4 + 1648))->empty() == '\0') {
                lVar4 = ifType.operator->();
                if (((local_40 == *(int*)(lVar4 + 72)) &&
                     (lVar4 = ifType.operator->(), local_3c == *(int*)(lVar4 + 76))) &&
                    ((char)local_38 == '\0')) {
                    return;
                }
                new (local_c8) HookReq();
                (*((local_c8 + 32))) = ifType;
                lVar4 = ifType.operator->();
                *local_c8 = (*((lVar4 + 1648)));
                field_2506384.push_back(*local_c8);
            }
        }
    }

    // 0x100103480
    void Client::InterfaceCalculatePosition(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3) {
        int iVar1;

        long lVar2 = ifType.operator->();
        int iVar3 = *(int*)(lVar2 + 32);
        lVar2 = ifType.operator->();
        if (iVar3 == 0) {
            iVar3 = *(int*)(lVar2 + 48);
        } else {
            iVar3 = *(int*)(lVar2 + 32);
            lVar2 = ifType.operator->();
            if (iVar3 == 1) {
                iVar3 = *(int*)(lVar2 + 72);
                lVar2 = ifType.operator->();
                iVar3 = (arg2 - iVar3) / 2 + *(int*)(lVar2 + 48);
            } else {
                iVar3 = *(int*)(lVar2 + 32);
                lVar2 = ifType.operator->();
                if (iVar3 == 2) {
                    iVar3 = *(int*)(lVar2 + 72);
                    lVar2 = ifType.operator->();
                    iVar3 = arg2 - (iVar3 + *(int*)(lVar2 + 48));
                } else {
                    iVar3 = *(int*)(lVar2 + 32);
                    lVar2 = ifType.operator->();
                    if (iVar3 == 3) {
                        iVar3 = *(int*)(lVar2 + 48) * arg2 >> 14;
                    } else {
                        iVar3 = *(int*)(lVar2 + 32);
                        lVar2 = ifType.operator->();
                        iVar1 = *(int*)(lVar2 + 72);
                        if (iVar3 == 4) {
                            lVar2 = ifType.operator->();
                            iVar3 = (*(int*)(lVar2 + 48) * arg2 >> 14) + (arg2 - iVar1) / 2;
                        } else {
                            lVar2 = ifType.operator->();
                            iVar3 = arg2 - (iVar1 + (*(int*)(lVar2 + 48) * arg2 >> 14));
                        }
                    }
                }
            }
        }
        lVar2 = ifType.operator->();
        *(int*)(lVar2 + 64) = iVar3;
        lVar2 = ifType.operator->();
        iVar3 = *(int*)(lVar2 + 36);
        lVar2 = ifType.operator->();
        if (iVar3 == 0) {
            iVar3 = *(int*)(lVar2 + 52);
        } else {
            iVar3 = *(int*)(lVar2 + 36);
            lVar2 = ifType.operator->();
            if (iVar3 == 1) {
                iVar3 = *(int*)(lVar2 + 76);
                lVar2 = ifType.operator->();
                iVar3 = (arg3 - iVar3) / 2 + *(int*)(lVar2 + 52);
            } else {
                iVar3 = *(int*)(lVar2 + 36);
                lVar2 = ifType.operator->();
                if (iVar3 == 2) {
                    iVar3 = *(int*)(lVar2 + 76);
                    lVar2 = ifType.operator->();
                    iVar3 = iVar3 + *(int*)(lVar2 + 52);
                } else {
                    iVar3 = *(int*)(lVar2 + 36);
                    lVar2 = ifType.operator->();
                    if (iVar3 == 3) {
                        iVar3 = *(int*)(lVar2 + 52) * arg3 >> 14;
                        goto LAB_1001036ab;
                    }
                    iVar1 = *(int*)(lVar2 + 36);
                    lVar2 = ifType.operator->();
                    iVar3 = *(int*)(lVar2 + 76);
                    if (iVar1 == 4) {
                        lVar2 = ifType.operator->();
                        iVar3 = (*(int*)(lVar2 + 52) * arg3 >> 14) + (arg3 - iVar3) / 2;
                        goto LAB_1001036ab;
                    }
                    lVar2 = ifType.operator->();
                    iVar3 = iVar3 + (*(int*)(lVar2 + 52) * arg3 >> 14);
                }
                iVar3 = arg3 - iVar3;
            }
        }
    LAB_1001036ab:
        lVar2 = ifType.operator->();
        *(int*)(lVar2 + 68) = iVar3;
        if ((field_53265 != '\0') && (lVar2 = ifType.operator->(), *(int*)(lVar2 + 12) == 0)) {
            lVar2 = ifType.operator->();
            iVar3 = *(int*)(lVar2 + 64);
            lVar2 = ifType.operator->();
            if (iVar3 < 0) {
                *(uint32_t*)(lVar2 + 64) = 0;
            } else {
                iVar3 = *(int*)(lVar2 + 64);
                lVar2 = ifType.operator->();
                if (arg2 < iVar3 + *(int*)(lVar2 + 72)) {
                    lVar2 = ifType.operator->();
                    iVar3 = *(int*)(lVar2 + 72);
                    lVar2 = ifType.operator->();
                    *(int*)(lVar2 + 64) = arg2 - iVar3;
                }
            }
            lVar2 = ifType.operator->();
            iVar3 = *(int*)(lVar2 + 68);
            lVar2 = ifType.operator->();
            if (iVar3 < 0) {
                *(uint32_t*)(lVar2 + 68) = 0;
            } else {
                iVar3 = *(int*)(lVar2 + 68);
                lVar2 = ifType.operator->();
                if (arg3 < iVar3 + *(int*)(lVar2 + 76)) {
                    lVar2 = ifType.operator->();
                    iVar3 = *(int*)(lVar2 + 76);
                    lVar2 = ifType.operator->();
                    *(int*)(lVar2 + 68) = arg3 - iVar3;
                }
            }
        }
    }

    // 0x100103780
    void Client::InterfaceCalculateSizeAndPosSubcomponents(Array<shared_ptr<rs2lib::IfType>>& ifTypes,
                                                           const shared_ptr<rs2lib::IfType>& ifType, bool arg3) {
        uint64_t in_register_00000009;
        ReturnValue local_68;
        ReturnValue local_58;
        uint32_t local_3c;

        Array<shared_ptr<rs2lib::IfType>>* local_38 = ifTypes;
        long lVar6 = ifType.operator->();
        int iVar1 = *(int*)(lVar6 + 104);
        lVar6 = ifType.operator->();
        iVar1 = *(int*)((unsigned long)(iVar1 != 0) * 32 + 72 + lVar6);
        lVar6 = ifType.operator->();
        int iVar5 = *(int*)(lVar6 + 108);
        lVar6 = ifType.operator->();
        uint32_t uVar2 = *(uint32_t*)((unsigned long)(iVar5 != 0) * 32 + 76 + lVar6);
        lVar6 = ifType.operator->();
        Array<shared_ptr<rs2lib::IfType>>* pAVar3 = local_38;
        local_38 = (Array<shared_ptr<rs2lib::IfType>>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar2);
        InterfaceCalculateSizeAndPosArray((Array<shared_ptr<rs2lib::IfType>>*)this, (int)pAVar3, *(int*)(lVar6 + 4),
                                          iVar1, (uint8_t)uVar2, arg3);
        lVar6 = ifType.operator->();
        if (!(((lVar6 + 2000))->empty())) {
            iVar5 = ifType.operator->();
            lVar6 = ifType.operator->();
            InterfaceCalculateSizeAndPosArray((Array<shared_ptr<rs2lib::IfType>>*)this, iVar5 + 2000,
                                              *(int*)(lVar6 + 4), iVar1, (uint8_t)local_38, arg3);
        }
        lVar6 = ifType.operator->();
        if (*(char*)(lVar6 + 24) == '\0') {
            local_3c = (int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
            lVar6 = ifType.operator->();
            local_58 = field_53160->find(*((lVar6 + 4)));
            local_68 = field_53160->end();
            if (local_58 != local_68) {
                lVar6 = local_58.HeapBeginPtr();
                InterfaceCalculateSizeAndPosInterface(*(int*)(lVar6 + 4), iVar1, (int)local_38, local_3c._0_1_, false);
            }
            ifType.operator->();
        }
    }

    // 0x1001038f0
    void Client::InterfaceCalculateSizeAndPosArray(Array<shared_ptr<rs2lib::IfType>>& ifTypes, int arg2, int arg3,
                                                   int arg4, bool arg5, bool arg6) {
        int iVar1;
        int iVar2;
        unsigned long uVar5;
        shared_ptr<rs2lib::IfType>* objType;
        Array<shared_ptr<rs2lib::IfType>>* array;
        shared_ptr<rs2lib::IfType>* ifType1;
        uint32_t in_register_00000034;
        uint64_t in_register_00000081;
        unsigned long arg1;
        bool in_stack_00000008;

        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)in_register_00000034 << 32) |
                                                                      (uint32_t)arg2);
        int arg3_00 = (int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg5);
        long lVar4 = this_00->end();
        if (lVar4 != 0) {
            arg1 = 0;
            do {
                objType = (shared_ptr<rs2lib::IfType>*)(*this_00)[arg1];
                if (!*objType == nullptr) {
                    lVar4 = (*objType).operator->();
                    if (*(int*)(lVar4 + 88) == arg3) {
                        if (arg3 < 0) {
                            arg3 = -1;
                        }
                        InterfaceCalculateSize((Client*)ifTypes, objType, arg4, arg3_00, arg6, in_stack_00000008);
                        InterfaceCalculatePosition((Client*)ifTypes, objType, arg4, arg3_00);
                        lVar4 = (*objType).operator->();
                        iVar1 = *(int*)(lVar4 + 96);
                        lVar4 = (*objType).operator->();
                        iVar2 = *(int*)(lVar4 + 104);
                        lVar4 = (*objType).operator->();
                        if (iVar2 - *(int*)(lVar4 + 72) < iVar1) {
                            lVar4 = (*objType).operator->();
                            iVar1 = *(int*)(lVar4 + 104);
                            lVar4 = (*objType).operator->();
                            iVar2 = *(int*)(lVar4 + 72);
                            lVar4 = (*objType).operator->();
                            *(int*)(lVar4 + 96) = iVar1 - iVar2;
                        }
                        lVar4 = (*objType).operator->();
                        if (*(int*)(lVar4 + 96) < 0) {
                            lVar4 = (*objType).operator->();
                            *(uint32_t*)(lVar4 + 96) = 0;
                        }
                        lVar4 = (*objType).operator->();
                        iVar1 = *(int*)(lVar4 + 100);
                        lVar4 = (*objType).operator->();
                        iVar2 = *(int*)(lVar4 + 108);
                        lVar4 = (*objType).operator->();
                        if (iVar2 - *(int*)(lVar4 + 76) < iVar1) {
                            lVar4 = (*objType).operator->();
                            iVar1 = *(int*)(lVar4 + 108);
                            lVar4 = (*objType).operator->();
                            iVar2 = *(int*)(lVar4 + 76);
                            lVar4 = (*objType).operator->();
                            *(int*)(lVar4 + 100) = iVar1 - iVar2;
                        }
                        lVar4 = (*objType).operator->();
                        if (*(int*)(lVar4 + 100) < 0) {
                            lVar4 = (*objType).operator->();
                            *(uint32_t*)(lVar4 + 100) = 0;
                        }
                        lVar4 = (*objType).operator->();
                        if (*(int*)(lVar4 + 12) == 0) {
                            InterfaceCalculateSizeAndPosSubcomponents(
                                (Client*)ifTypes, (Array<shared_ptr<rs2lib::IfType>>*)this_00, objType, arg6);
                        } else {
                            lVar4 = (*objType).operator->();
                            if (-1 < *(int*)(lVar4 + 680)) {
                                lVar4 = (*objType).operator->();
                                array = (Array<shared_ptr<rs2lib::IfType>>*)((ifTypes + 6815056))
                                            ->GetOverlay(*(int*)(lVar4 + 680));
                                if (array != nullptr) {
                                    ifType1 = (shared_ptr<rs2lib::IfType>*)(*array)[0];
                                    InterfacePositionOverlay((Client*)ifTypes, ifType1, objType, arg6);
                                }
                            }
                        }
                    }
                }
                arg1 = arg1 + 1;
                uVar5 = this_00->end();
            } while (arg1 < uVar5);
        }
    }

    // 0x100103b30
    void Client::InterfacePositionOverlay(const shared_ptr<rs2lib::IfType>& ifType1,
                                          const shared_ptr<rs2lib::IfType>& ifType2, bool arg3) {
        long lVar3 = ifType1.operator->();
        *(uint32_t*)(lVar3 + 48) = 0;
        lVar3 = ifType1.operator->();
        *(uint32_t*)(lVar3 + 52) = 0;
        lVar3 = ifType2.operator->();
        uint32_t uVar1 = *(uint32_t*)(lVar3 + 72);
        lVar3 = ifType1.operator->();
        *(uint32_t*)(lVar3 + 56) = uVar1;
        lVar3 = ifType2.operator->();
        uVar1 = *(uint32_t*)(lVar3 + 76);
        lVar3 = ifType1.operator->();
        *(uint32_t*)(lVar3 + 60) = uVar1;
        lVar3 = ifType2.operator->();
        int iVar2 = *(int*)(lVar3 + 72);
        lVar3 = ifType2.operator->();
        InterfaceCalculateSize(ifType1, iVar2, *(int*)(lVar3 + 76), false, false);
        lVar3 = ifType2.operator->();
        iVar2 = *(int*)(lVar3 + 72);
        lVar3 = ifType2.operator->();
        InterfaceCalculatePosition(ifType1, iVar2, *(int*)(lVar3 + 76));
        lVar3 = ifType1.operator->();
        InterfaceCalculateSizeAndPosSubcomponents(*((lVar3 + 2000)), ifType1, arg3);
    }

    // 0x100103c20
    void Client::DoScrollbar(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, int arg4, int arg5, int arg6,
                             int arg7) {
        int iVar1;
        unsigned int uVar2;
        long lVar3;
        unsigned int uVar4;

        field_1115860 = (unsigned int)field_1115856 << 5;
        field_1115856 = 0;
        if (field_8504 == 7) {
            iVar1 = arg2 + 16;
            if (((iVar1 <= arg6 || arg6 < arg2) || (arg7 < arg3)) || (arg3 + 16 <= arg7)) {
                if (((iVar1 <= arg6 || arg6 < arg2) || (arg7 < arg4 + arg3 - 16)) || (arg4 + arg3 <= arg7)) {
                    if ((((int)(arg2 - field_1115860) <= arg6) && (arg6 < (int)(field_1115860 + iVar1))) &&
                        ((arg3 + 16 <= arg7 && (arg7 < arg4 + arg3 - 16)))) {
                        uVar2 = ((arg4 - 32) * arg4) / arg5;
                        uVar4 = 8;
                        if (8 < (int)uVar2) {
                            uVar4 = uVar2;
                        }
                        lVar3 = ifType.operator->();
                        *(int*)(lVar3 + 100) =
                            (int)((arg5 - arg4) * ((arg7 - ((uVar4 >> 1) + arg3)) - 16)) / (int)((arg4 - 32) - uVar4);
                        ComponentUpdated(ifType);
                        field_1115856 = 1;
                    }
                    goto LAB_100103d86;
                }
                lVar3 = ifType.operator->();
                *(int*)(lVar3 + 100) = *(int*)(lVar3 + 100) + 4;
            } else {
                lVar3 = ifType.operator->();
                *(int*)(lVar3 + 100) = *(int*)(lVar3 + 100) - 4;
            }
            ComponentUpdated(ifType);
        }
    LAB_100103d86:
        if (field_53140 != 0) {
            lVar3 = ifType.operator->();
            if ((((arg2 - *(int*)(lVar3 + 72) <= arg6) && (arg3 <= arg7)) && (arg6 < arg2 + 16)) &&
                (arg7 <= arg4 + arg3)) {
                iVar1 = field_53140;
                lVar3 = ifType.operator->();
                *(int*)(lVar3 + 100) = *(int*)(lVar3 + 100) + iVar1 * 45;
                ComponentUpdated(ifType);
            }
        }
    }

    // 0x100103e10
    auto Client::Inf(int arg1) {

        if (arg1 < 999999999) {
            auto result;
            result.sprintf("%i", (unsigned long)(unsigned int)arg1);
        } else {
            new (&result) eastl::string("*");
        }
        return result;
    }

    // 0x100103e90
    int Client::GetIfVar(const shared_ptr<rs2lib::IfType>& ifType, int arg2) {
        uint8_t* this_00;
        uint8_t* this_01;
        int iVar1;
        Array<int>* pAVar2;
        int iVar4;
        unsigned int uVar5;
        int* piVar7;
        shared_ptr<rs2lib::IfType>* psVar8;
        unsigned long uVar9;
        uint8_t* pbVar10;
        unsigned int* puVar11;
        unsigned int uVar12;
        unsigned long uVar13;
        array<int, 25ul>* this_02;
        unsigned int uVar14;
        ReturnValue local_80;
        shared_ptr<ClientPlayer>* local_70;
        unsigned long local_68;
        array<int, 25ul>* local_60;
        int local_54;
        Array<int>* local_48;
        unsigned long local_40;
        int local_34;

        Client* local_50 = this;
        long lVar6 = ifType.operator->();
        bool cVar3 = ((lVar6 + 1792))->empty();
        int local_58 = -2;
        if (!cVar3) {
            lVar6 = ifType.operator->();
            iVar4 = ((lVar6 + 1792))->end();
            if (arg2 < iVar4) {
                lVar6 = ifType.operator->();
                local_48 = (Array<int>*)(*((lVar6 + 1792)))[(long)arg2];
                this_00 = &local_50->field_52040;
                this_02 = (array<int, 25ul>*)&local_50->field_52140;
                this_01 = &local_50->field_52240;
                local_70 = (shared_ptr<ClientPlayer>*)&local_50->field_52016;
                local_68 = 0;
                local_40 = 0;
                local_54 = 0;
                local_60 = this_02;
                do {
                    iVar1 = (int)local_40;
                    local_40 = (unsigned long)(iVar1 + 1);
                    piVar7 = (int*)(*local_48)[(long)iVar1];
                    iVar4 = *piVar7;
                    if (iVar4 == 0) {
                        local_58 = local_54;
                    } else {
                        uVar14 = 0;
                        local_34 = iVar4;
                        if (iVar4 == 1) {
                            piVar7 = (int*)(*local_48)[(long)(int)local_40];
                            puVar11 = (unsigned int*)(*this_00)[(long)*piVar7];
                            uVar14 = *puVar11;
                            local_40 = (unsigned long)(iVar1 + 2);
                        }
                        if (local_34 == 2) {
                            iVar4 = (int)local_40;
                            local_40 = (unsigned long)(iVar4 + 1);
                            piVar7 = (int*)(*local_48)[(long)iVar4];
                            puVar11 = (unsigned int*)(*this_02)[(long)*piVar7];
                            uVar14 = *puVar11;
                        }
                        pAVar2 = local_48;
                        if (local_34 == 3) {
                            iVar4 = (int)local_40;
                            local_40 = (unsigned long)(iVar4 + 1);
                            piVar7 = (int*)(*local_48)[(long)iVar4];
                            puVar11 = (unsigned int*)(*this_01)[(long)*piVar7];
                            uVar14 = *puVar11;
                            pAVar2 = local_48;
                        }
                        local_48 = pAVar2;
                        if (local_34 == 4) {
                            iVar1 = (int)local_40;
                            piVar7 = (int*)(*pAVar2)[(long)iVar1];
                            iVar4 = *piVar7;
                            piVar7 = (int*)(*pAVar2)[(long)(iVar1 + 1)];
                            psVar8 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar4 * 65536 + *piVar7);
                            piVar7 = (int*)(*pAVar2)[(long)(iVar1 + 2)];
                            iVar4 = *piVar7;
                            local_80 = configdecoder::ObjType::List(iVar4);
                            if (iVar4 == -1) {
                                this_02 = local_60;
                            } else {
                                lVar6 = local_80.operator->();
                                this_02 = local_60;
                                if ((*(char*)(lVar6 + 220) != '\0') || (local_50->field_8424 != false)) {
                                    uVar13 = 0;
                                    while (true) {
                                        lVar6 = (*psVar8).operator->();
                                        uVar9 = ((lVar6 + 1936))->end();
                                        if (uVar9 <= uVar13)
                                            break;
                                        lVar6 = (*psVar8).operator->();
                                        piVar7 = (int*)(*((lVar6 + 1936)))[uVar13];
                                        if (*piVar7 == iVar4 + 1) {
                                            lVar6 = (*psVar8).operator->();
                                            piVar7 = (int*)(*((lVar6 + 1960)))[uVar13];
                                            uVar14 = uVar14 + *piVar7;
                                        }
                                        uVar13 = uVar13 + 1;
                                    }
                                }
                            }
                            local_40 = (unsigned long)((int)local_40 + 3);
                        }
                        if (local_34 == 5) {
                            iVar4 = (int)local_40;
                            local_40 = (unsigned long)(iVar4 + 1);
                            piVar7 = (int*)(*local_48)[(long)iVar4];
                            puVar11 = (unsigned int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)*piVar7];
                            uVar14 = *puVar11;
                        }
                        if (local_34 == 6) {
                            iVar4 = (int)local_40;
                            local_40 = (unsigned long)(iVar4 + 1);
                            piVar7 = (int*)(*local_48)[(long)iVar4];
                            uVar13 = (unsigned long)*piVar7;
                            piVar7 = (int*)(*this_02)[uVar13];
                            puVar11 = (unsigned int*)(*((array<int, 99ul>*)((long)*piVar7 - 1)))[uVar13];
                            uVar14 = *puVar11;
                        }
                        if (local_34 == 7) {
                            iVar4 = (int)local_40;
                            local_40 = (unsigned long)(iVar4 + 1);
                            piVar7 = (int*)(*local_48)[(long)iVar4];
                            piVar7 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)*piVar7];
                            uVar14 = (*piVar7 * 100) / 46875;
                        }
                        if (local_34 == 8) {
                            lVar6 = (*local_70).operator->();
                            uVar14 = *(unsigned int*)(lVar6 + 1128);
                        }
                        if (local_34 == 9) {
                            uVar13 = 0;
                            do {
                                if (1 < (int)uVar13 - 23U) {
                                    piVar7 = (int*)(*this_02)[uVar13];
                                    uVar14 = uVar14 + *piVar7;
                                }
                                uVar13 = uVar13 + 1;
                            } while (uVar13 != 25);
                        }
                        pAVar2 = local_48;
                        if (local_34 == 10) {
                            iVar1 = (int)local_40;
                            piVar7 = (int*)(*local_48)[(long)iVar1];
                            iVar4 = *piVar7;
                            piVar7 = (int*)(*pAVar2)[(long)(iVar1 + 1)];
                            psVar8 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar4 * 65536 + *piVar7);
                            piVar7 = (int*)(*pAVar2)[(long)(iVar1 + 2)];
                            iVar4 = *piVar7;
                            local_80 = configdecoder::ObjType::List(iVar4);
                            if (iVar4 == -1) {
                                this_02 = local_60;
                            } else {
                                lVar6 = local_80.operator->();
                                this_02 = local_60;
                                if ((*(char*)(lVar6 + 220) != '\0') || (local_50->field_8424 != false)) {
                                    uVar13 = 0;
                                    do {
                                        lVar6 = (*psVar8).operator->();
                                        uVar9 = ((lVar6 + 1936))->end();
                                        if (uVar9 <= uVar13)
                                            goto LAB_100104389;
                                        lVar6 = (*psVar8).operator->();
                                        piVar7 = (int*)(*((lVar6 + 1936)))[uVar13];
                                        uVar13 = uVar13 + 1;
                                    } while (*piVar7 != iVar4 + 1);
                                    uVar14 = 999999999;
                                }
                            }
                        LAB_100104389:
                            local_40 = (unsigned long)((int)local_40 + 3);
                        }
                        pAVar2 = local_48;
                        if (local_34 == 11) {
                            uVar14 = *(unsigned int*)&local_50->field_53272;
                        LAB_1001043b2:
                            if (local_34 == 13) {
                                iVar4 = (int)local_40;
                                piVar7 = (int*)(*local_48)[(long)iVar4];
                                puVar11 = (unsigned int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)*piVar7];
                                uVar14 = *puVar11;
                                pbVar10 = (uint8_t*)(*pAVar2)[(long)(iVar4 + 1)];
                                uVar14 = uVar14 >> (*pbVar10 & 31) & 1;
                                local_40 = (unsigned long)(iVar4 + 2);
                            }
                        } else {
                            if (local_34 != 12)
                                goto LAB_1001043b2;
                            uVar14 = local_50->field_53276;
                        }
                        if (local_34 == 14) {
                            iVar4 = (int)local_40;
                            local_40 = (unsigned long)(iVar4 + 1);
                            piVar7 = (int*)(*local_48)[(long)iVar4];
                            uVar14 = ClientVarCache::GetVarbit(*piVar7);
                        }
                        uVar13 = (unsigned long)(local_34 == 15);
                        if (local_34 == 16) {
                            uVar13 = 2;
                        }
                        if (local_34 == 17) {
                            uVar13 = 3;
                        }
                        if (local_34 == 18) {
                            lVar6 = (*local_70).operator->();
                            uVar14 = (*(int*)(lVar6 + 24) >> 7) + local_50->field_53220;
                            if (local_34 != 19)
                                goto LAB_100104418;
                        LAB_1001044e8:
                            lVar6 = (*local_70).operator->();
                            uVar14 = (*(int*)(lVar6 + 28) >> 7) + local_50->field_53224;
                            if (local_34 != 20)
                                goto LAB_100104421;
                        LAB_100104510:
                            iVar4 = (int)local_40;
                            local_40 = (unsigned long)(iVar4 + 1);
                            puVar11 = (unsigned int*)(*local_48)[(long)iVar4];
                            uVar14 = *puVar11;
                            if ((int)uVar13 == 0)
                                goto LAB_100104532;
                        LAB_100103f50:
                            local_68 = uVar13;
                        } else {
                            if (local_34 == 19)
                                goto LAB_1001044e8;
                        LAB_100104418:
                            if (local_34 == 20)
                                goto LAB_100104510;
                        LAB_100104421:
                            if ((int)uVar13 != 0)
                                goto LAB_100103f50;
                        LAB_100104532:
                            iVar4 = (int)local_68;
                            uVar5 = 0;
                            if (iVar4 == 0) {
                                uVar5 = uVar14;
                            }
                            uVar12 = 0;
                            if (iVar4 == 1) {
                                uVar12 = uVar14;
                            }
                            local_54 = (uVar5 + local_54) - uVar12;
                            if ((iVar4 == 2) && (uVar14 != 0)) {
                                local_54 = local_54 / (int)uVar14;
                            }
                            if (iVar4 != 3) {
                                uVar14 = 1;
                            }
                            local_54 = uVar14 * local_54;
                            local_68 = 0;
                        }
                        iVar4 = local_34;
                    }
                } while (iVar4 != 0);
            }
        }
        return local_58;
    }

    // 0x100104660
    unsigned long Client::KeyPressed(int arg1) {
        int* piVar2;
        unsigned long arg1_00;
        uint64_t unaff_R12;

        unsigned long uVar1 = field_8608;
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)(uVar1 != 0));
        if (uVar1 != 0) {
            piVar2 = &field_8616[0];
            if (*piVar2 != arg1) {
                arg1_00 = 1;
                do {
                    uVar3 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) | (uint8_t)(arg1_00 < uVar1));
                    if (uVar1 == arg1_00)
                        break;
                    piVar2 = &field_8616[arg1_00];
                    arg1_00 = arg1_00 + 1;
                } while (*piVar2 != arg1);
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1001046e0
    void Client::RunHookLayer(Array<shared_ptr<rs2lib::IfType>>& ifTypes, rs2lib::IfType::HookTypes hookTypes) {
        int iVar1;
        uint32_t uVar2;
        bool bVar3;
        int iVar5;
        unsigned long uVar7;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<configdecoder::ObjType>* objType;
        long lVar8;
        shared_ptr<ClientScript>* clientScript1;
        Logger* this_00;
        unsigned long arg1;
        ReturnValue local_f8;
        shared_ptr<RSevenDebugPresetProvider> local_e8;
        uint8_t local_d8[128];
        shared_ptr<dash3d::Decor> local_58;
        hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_48;

        long lVar6 = ifTypes.end();
        if (lVar6 != 0) {
            local_48 =
                (hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                           eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                           eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)field_53160;
            arg1 = 0;
            do {
                groundDecor = &ifTypes[arg1];
                local_e8 = shared_ptr(groundDecor);
                bVar3 = local_e8 == nullptr;
                if (!bVar3) {
                    lVar6 = local_e8.operator->();
                    if (*(int*)(lVar6 + 12) == 0) {
                        lVar6 = local_e8.operator->();
                        if (!(((lVar6 + 2000))->empty())) {
                            lVar6 = local_e8.operator->();
                            RunHookLayer(*((lVar6 + 2000)), hookTypes);
                        }
                        lVar6 = local_e8.operator->();
                        *local_d8 = local_48->find(*((lVar6 + 4)));
                        local_f8 = local_48->end();
                        if (*local_d8 != local_f8) {
                            lVar6 = local_d8->HeapBeginPtr();
                            RunHookImmediate(*(int*)(lVar6 + 4), hookTypes);
                        }
                    }
                    if (hookTypes == 26) {
                    LAB_100104898:
                        lVar6 = local_e8.operator->();
                        if (!(((lVar6 + 1672))->empty())) {
                            new (local_d8) HookReq();
                            (*((local_d8 + 32))) = local_e8;
                            lVar6 = local_e8.operator->();
                            *local_d8 = (*((lVar6 + 1672)));
                            ScriptRunner::ExecuteScript(*local_d8, 500000);
                        LAB_100104729:
                        }
                    } else if (hookTypes == 24) {
                    LAB_100104874:
                        lVar6 = local_e8.operator->();
                        if (!(((lVar6 + 1624))->empty())) {
                            lVar6 = local_e8.operator->();
                            if (*(int*)(lVar6 + 8) < 0) {
                            LAB_100104a73:
                                new (local_d8) HookReq();
                                (*((local_d8 + 32))) = local_e8;
                                lVar6 = local_e8.operator->();
                                *local_d8 = (*((lVar6 + 1624)));
                                ScriptRunner::ExecuteScript(*local_d8, 500000);
                                goto LAB_100104729;
                            }
                            local_58 = shared_ptr(&local_e8);
                            objType = (shared_ptr<configdecoder::ObjType>*)GetParentInterface(&local_58);
                            bVar3 = *objType == nullptr;
                            if (!bVar3) {
                                lVar6 = (*objType).operator->();
                                if (!(((lVar6 + 2000))->empty())) {
                                    lVar6 = local_e8.operator->();
                                    iVar1 = *(int*)(lVar6 + 8);
                                    lVar6 = (*objType).operator->();
                                    iVar5 = ((lVar6 + 2000))->end();
                                    if (iVar1 < iVar5) {
                                        lVar6 = (*objType).operator->();
                                        lVar8 = local_e8.operator->();
                                        clientScript1 =
                                            (shared_ptr<ClientScript>*)(*((lVar6 + 2000)))[(long)*(int*)(lVar8 + 8)];
                                        bVar3 = *clientScript1 != local_e8;
                                        if (!bVar3)
                                            goto LAB_100104a73;
                                    }
                                }
                            }
                            if (field_54760 != '\0') {
                                this_00 = logger::default_logger();
                                lVar6 = local_e8.operator->();
                                uVar2 = *(uint32_t*)(lVar6 + 4);
                                lVar6 = local_e8.operator->();
                                this_00->Log(false, 5,
                                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                             "projects/osclient/client_UI.cpp",
                                             3496, "Skipping script execution for deleted component - com:%i subid:%i",
                                             uVar2, *(uint32_t*)(lVar6 + 8));
                            }
                        } else if (hookTypes == 26)
                            goto LAB_100104898;
                    } else if (hookTypes == 23) {
                        lVar6 = local_e8.operator->();
                        if (!(((lVar6 + 1600))->empty())) {
                            new (local_d8) HookReq();
                            (*((local_d8 + 32))) = local_e8;
                            lVar6 = local_e8.operator->();
                            *local_d8 = (*((lVar6 + 1600)));
                            ScriptRunner::ExecuteScript(*local_d8, 500000);
                            goto LAB_100104729;
                        }
                        if (hookTypes == 26)
                            goto LAB_100104898;
                        if (hookTypes == 24)
                            goto LAB_100104874;
                    }
                }
                arg1 = arg1 + 1;
                uVar7 = ifTypes.end();
            } while (arg1 < uVar7);
        }
    }

    // 0x100104b20
    uint8_t Client::UsingOneButtonMouse() {
        return m_usingOneButtonMouse;
    }

    // 0x100104b30
    void Client::TryStartDragContents(const shared_ptr<rs2lib::IfType>& ifType) {
        long lVar3;
        unsigned int local_30[2];
        unsigned int local_28[2];

        if (!(*((field_2505204 + 4))) != nullptr) {
            if (field_52344->IsOpen() == '\0') {
                field_8604 = 1;
                (*((field_2505204 + 4))) = ifType;
                field_2505224 = 1;
                lVar3 = ifType.operator->();
                local_30->XPlotBlender<int>(*(ResultType*)(lVar3 + 96));
                field_2505228 = local_30[0];
                lVar3 = ifType.operator->();
                local_28->XPlotBlender<int>(*(ResultType*)(lVar3 + 100));
                field_2505232 = local_28[0];
            }
        }
    }

    // 0x100104bd0
    void Client::SetIf3ComponentScrollPos(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3) {
        long lVar3 = ifType.operator->();
        *(int*)(lVar3 + 96) = arg2;
        lVar3 = ifType.operator->();
        int iVar1 = *(int*)(lVar3 + 96);
        lVar3 = ifType.operator->();
        int iVar2 = *(int*)(lVar3 + 104);
        lVar3 = ifType.operator->();
        if (iVar2 - *(int*)(lVar3 + 72) < iVar1) {
            lVar3 = ifType.operator->();
            iVar1 = *(int*)(lVar3 + 104);
            lVar3 = ifType.operator->();
            iVar2 = *(int*)(lVar3 + 72);
            lVar3 = ifType.operator->();
            *(int*)(lVar3 + 96) = iVar1 - iVar2;
        }
        lVar3 = ifType.operator->();
        if (*(int*)(lVar3 + 96) < 0) {
            lVar3 = ifType.operator->();
            *(uint32_t*)(lVar3 + 96) = 0;
        }
        lVar3 = ifType.operator->();
        *(int*)(lVar3 + 100) = arg3;
        lVar3 = ifType.operator->();
        iVar1 = *(int*)(lVar3 + 100);
        lVar3 = ifType.operator->();
        iVar2 = *(int*)(lVar3 + 108);
        lVar3 = ifType.operator->();
        if (iVar2 - *(int*)(lVar3 + 76) < iVar1) {
            lVar3 = ifType.operator->();
            iVar1 = *(int*)(lVar3 + 108);
            lVar3 = ifType.operator->();
            iVar2 = *(int*)(lVar3 + 76);
            lVar3 = ifType.operator->();
            *(int*)(lVar3 + 100) = iVar1 - iVar2;
        }
        lVar3 = ifType.operator->();
        if (*(int*)(lVar3 + 100) < 0) {
            lVar3 = ifType.operator->();
            *(uint32_t*)(lVar3 + 100) = 0;
        }
        ComponentUpdated(ifType);
    }

    // 0x100104d20
    void Client::DragTryPickup(const shared_ptr<rs2lib::IfType>& ifType, CoordType<UICoordSpecializer> coordType1,
                               CoordType<UICoordSpecializer> coordType2) {
        unsigned int uVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned int uVar7;
        unsigned int uVar8;
        int arg1;
        shared_ptr<configdecoder::ObjType>* objType;
        Logger* this_00;
        long lVar9;
        uint64_t uVar10;
        shared_ptr<rs2lib::IfType>* ifType_00;
        CoordMapSquare local_40;

        local_40.m_x = (unsigned int)coordType1;
        local_40._8_4_ = (uint32_t)coordType2;
        if (!(field_2505104 != nullptr)) {
            if (field_52344->IsOpen() == '\0') {
                if (!(ifType == nullptr)) {
                    objType = (shared_ptr<configdecoder::ObjType>*)GetDragLayer(ifType);
                    if (!(*objType == nullptr)) {
                        if (field_54760 != '\0') {
                            this_00 = logger::default_logger();
                            lVar9 = ifType.operator->();
                            uVar10 = ((lVar9 + 760))->end();
                            lVar9 = ifType.operator->();
                            uVar1 = *(unsigned int*)(lVar9 + 72);
                            lVar9 = ifType.operator->();
                            uVar2 = *(unsigned int*)(lVar9 + 76);
                            lVar9 = ifType.operator->();
                            uVar3 = *(unsigned int*)(lVar9 + 64);
                            lVar9 = ifType.operator->();
                            uVar4 = *(unsigned int*)(lVar9 + 68);
                            uVar7 = local_40.GetX();
                            uVar8 = local_40.field_8.GetX();
                            this_00->Log(false, 5,
                                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                         "osclient/client_UI.cpp",
                                         1815, "setting dragcom - %p %i %i x:%i y:%i pickupx:%i pickupy:%i", uVar10,
                                         (unsigned long)uVar1, (unsigned long)uVar2, (unsigned long)uVar3,
                                         (unsigned long)uVar4, (unsigned long)uVar7, (unsigned long)uVar8);
                        }
                        field_8605 = 1;
                        field_2505104 = ifType;
                        ifType_00 = (shared_ptr<rs2lib::IfType>*)GetDragLayer(ifType);
                        field_2505120 = *ifType_00;
                        field_2505136 = local_40.m_x;
                        field_2505140 = local_40._8_4_;
                        field_2505188 = 0;
                        field_2505184 = 0;
                        arg1 = field_52344->GetDefaultClickIndex();
                        if (arg1 != -1) {
                            StashEntry(arg1);
                        }
                    }
                }
            }
        }
    }

    // 0x100104ee0
    shared_ptr<configdecoder::ObjType>* Client::GetDragLayer(const shared_ptr<rs2lib::IfType>& ifType) {
        long lVar2;

        auto objType = ServerDraggable(ifType);
        if (*objType == nullptr) {
            lVar2 = ifType.operator->();
            objType = (shared_ptr<configdecoder::ObjType>*)(lVar2 + 760);
        }
        return objType;
    }

    // 0x100104f20
    void Client::StashEntry(int arg1) {
        field_52344->StashEntry(arg1);
    }

    // 0x100104f40
    void Client::CancelDrag() {
        field_2505184 = 0;
    }

    // 0x100104f50
    void Client::LegacyUpdated() {
        void result;
        unsigned int uVar1;
        long lVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar5;
        uint8_t* pbVar6;
        unsigned long uVar7;
        int* piVar8;
        uint8_t bVar9;
        int arg1;
        ReturnValue result;
        unsigned long arg1_00;
        ReturnValue local_50;
        hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* local_40;

        hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_01 =
            (hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                       eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                       eastl::prime_rehash_policy, false, true, true>*)field_53160;
        auto local_60 = this_01->begin();
        &result = &local_50;
        result = this_01->end();
        bool cVar2 = local_60 != result;
        if (cVar2) {
            local_40 = this_01;
            do {
                arg1 = (int)&result;
                lVar4 = local_60.HeapBeginPtr();
                uVar1 = *(unsigned int*)(lVar4 + 4);
                cVar2 = ((IfType*)(unsigned long)uVar1)->OpenInterface(arg1);
                if (cVar2) {
                    this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                        (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)(int)uVar1];
                    lVar4 = this_00->end();
                    bVar9 = 1;
                    if (lVar4 != 0) {
                        arg1_00 = 0;
                        do {
                            psVar5 = (shared_ptr<midi2::MidiPlayerMainThread>*)(*this_00)[arg1_00];
                            if (*psVar5 != nullptr) {
                                pbVar6 = (uint8_t*)(*psVar5).operator->();
                                bVar9 = *pbVar6;
                                break;
                            }
                            arg1_00 = arg1_00 + 1;
                            uVar7 = this_00->end();
                        } while (arg1_00 < uVar7);
                    }
                    this_01 = local_40;
                    if ((bVar9 & 1) == 0) {
                        piVar8 = (int*)local_60.HeapBeginPtr();
                        psVar5 = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get(*piVar8);
                        if (*psVar5 != nullptr) {
                            ComponentUpdated(*psVar5);
                        }
                    }
                }
                &result = &local_50;
                (result)++;
                result = this_01->end();
                cVar2 = local_60 != result;
            } while (cVar2);
        }
    }

    // 0x1001050c0
    shared_ptr<configdecoder::ObjType>* Client::ServerDraggable(const shared_ptr<rs2lib::IfType>& ifType) {
        bool bVar1;
        int iVar3;
        shared_ptr<configdecoder::ObjType>* unaff_RBX;
        int arg1;

        long lVar4 = ifType.operator->();
        shared_ptr<configdecoder::ObjType>* psVar5 = (shared_ptr<configdecoder::ObjType>*)&rs2lib::NULL_IFTYPE;
        if (*(char*)(lVar4 + 24) == '\0') {
            iVar3 = GetActive(ifType);
            iVar3 = rs2lib::ServerActive::ServerDraggable(iVar3);
            if (iVar3 != 0) {
                lVar4 = ifType.operator->();
                arg1 = *(int*)(lVar4 + 88);
                do {
                    iVar3 = iVar3 - 1;
                    psVar5 = (shared_ptr<configdecoder::ObjType>*)rs2lib::IfType::Get(arg1);
                    bVar1 = false;
                    if (iVar3 != 0) {
                        if (!*psVar5 == nullptr) {
                            lVar4 = (*psVar5).operator->();
                            arg1 = *(int*)(lVar4 + 88);
                            bVar1 = true;
                            psVar5 = unaff_RBX;
                        }
                    }
                    unaff_RBX = psVar5;
                    psVar5 = unaff_RBX;
                } while (bVar1);
            }
        }
        return psVar5;
    }

    // 0x100105170
    void Client::DraggingInterface() {
        field_2505104 != nullptr;
    }

    // 0x100105190
    void Client::IfAnimReset(int arg1) {
        uint64_t in_RAX;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long lVar3;
        unsigned long uVar4;
        shared_ptr<configdecoder::ObjType>* objType;
        unsigned long arg1_00;

        uint32_t uVar5 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (((IfType*)(unsigned long)(unsigned int)arg1)->OpenInterface(arg1) != '\0') {
            if (field_54760 != '\0') {
                (logger::default_logger())
                    ->Log(false, 5,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "client_UI.cpp",
                          1919, "Resetting anims for ifid:%d", (((uint64_t)uVar5 << 32) | (uint32_t)arg1));
            }
            this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)arg1];
            lVar3 = this_01->end();
            if (lVar3 != 0) {
                arg1_00 = 0;
                do {
                    objType = (shared_ptr<configdecoder::ObjType>*)(*this_01)[arg1_00];
                    if (!*objType == nullptr) {
                        lVar3 = (*objType).operator->();
                        *(uint32_t*)(lVar3 + 1992) = 0;
                        lVar3 = (*objType).operator->();
                        *(uint32_t*)(lVar3 + 1996) = 0;
                    }
                    arg1_00 = arg1_00 + 1;
                    uVar4 = this_01->end();
                } while (arg1_00 < uVar4);
            }
        }
    }

    // 0x100105270
    void Client::AnimateLayer(Array<shared_ptr<rs2lib::IfType>>& ifTypes, int arg2) {
        unsigned short uVar1;
        unsigned short uVar2;
        hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        bool bVar3;
        bool cVar4;
        unsigned int uVar5;
        int iVar6;
        int iVar7;
        unsigned long uVar9;
        shared_ptr<configdecoder::ObjType>* objType;
        char* pcVar10;
        long lVar11;
        SeqType* pSVar12;
        int* piVar13;
        unsigned long arg1;
        ReturnValue local_70;
        hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                  eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_60;
        shared_ptr<ClientScript>* local_58;
        ReturnValue local_48;

        Client* local_38 = this;
        long lVar8 = ifTypes.end();
        if (lVar8 != 0) {
            local_58 = (shared_ptr<ClientScript>*)&local_38->field_2505056;
            local_60 =
                (hashtable<int, eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>, eastl::allocator,
                           eastl::use_first<eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer>>>,
                           eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                           eastl::prime_rehash_policy, false, true, true>*)local_38->field_53160;
            arg1 = 0;
            do {
                objType = &ifTypes[arg1];
                bVar3 = *objType == nullptr;
                if (((!bVar3) && (lVar8 = (*objType).operator->(), *(int*)(lVar8 + 88) == arg2)) &&
                    ((pcVar10 = (char*)(*objType).operator->(),
                      *pcVar10 == '\0' || (cVar4 = Hide(local_38, (shared_ptr<rs2lib::IfType>*)objType), !cVar4)))) {
                    lVar8 = (*objType).operator->();
                    if (*(int*)(lVar8 + 12) == 0) {
                        pcVar10 = (char*)(*objType).operator->();
                        if (((*pcVar10 == '\0') &&
                             (cVar4 = Hide(local_38, (shared_ptr<rs2lib::IfType>*)objType), cVar4)) &&
                            (bVar3 = *local_58 != *objType, bVar3))
                            goto LAB_1001052c0;
                        lVar8 = (*objType).operator->();
                        AnimateLayer(local_38, ifTypes, *(int*)(lVar8 + 4));
                        lVar8 = (*objType).operator->();
                        cVar4 = ((lVar8 + 2000))->empty();
                        if (!cVar4) {
                            lVar8 = (*objType).operator->();
                            lVar11 = (*objType).operator->();
                            AnimateLayer(local_38, (Array<shared_ptr<rs2lib::IfType>>*)(lVar8 + 2000),
                                         *(int*)(lVar11 + 4));
                        }
                        lVar8 = (*objType).operator->();
                        this_00 = local_60;
                        local_48 = local_60->find(*((lVar8 + 4)));
                        local_70 = this_00->end();
                        cVar4 = local_48 != local_70;
                        if (cVar4) {
                            lVar8 = local_48.HeapBeginPtr();
                            AnimateInterface(local_38, *(int*)(lVar8 + 4));
                        }
                    }
                    lVar8 = (*objType).operator->();
                    if (*(int*)(lVar8 + 12) == 6) {
                        lVar8 = (*objType).operator->();
                        if ((*(int*)(lVar8 + 244) != -1) ||
                            (lVar8 = (*objType).operator->(), *(int*)(lVar8 + 248) != -1)) {
                            uVar5 = GetIfActive(local_38, (shared_ptr<rs2lib::IfType>*)objType);
                            lVar8 = (*objType).operator->();
                            iVar6 = *(int*)(lVar8 + 244 + ((unsigned long)uVar5 & 255) * 4);
                            if (iVar6 != -1) {
                                local_48 = configdecoder::SeqType::List(iVar6);
                                pSVar12 = (SeqType*)local_48.operator->();
                                cVar4 = pSVar12->IsKeyFramed();
                                iVar6 = local_38->field_1115692;
                                if (!cVar4) {
                                    lVar8 = (*objType).operator->();
                                    *(int*)(lVar8 + 1996) = *(int*)(lVar8 + 1996) + iVar6;
                                    while (true) {
                                        lVar8 = (*objType).operator->();
                                        iVar6 = *(int*)(lVar8 + 1996);
                                        lVar8 = local_48.operator->();
                                        lVar11 = (*objType).operator->();
                                        piVar13 = (int*)(*((lVar8 + 120)))[(long)*(int*)(lVar11 + 1992)];
                                        if (iVar6 <= *piVar13)
                                            break;
                                        lVar8 = local_48.operator->();
                                        lVar11 = (*objType).operator->();
                                        piVar13 = (int*)(*((lVar8 + 120)))[(long)*(int*)(lVar11 + 1992)];
                                        iVar6 = *piVar13;
                                        lVar8 = (*objType).operator->();
                                        *(int*)(lVar8 + 1996) = *(int*)(lVar8 + 1996) - iVar6;
                                        lVar8 = (*objType).operator->();
                                        *(int*)(lVar8 + 1992) = *(int*)(lVar8 + 1992) + 1;
                                        lVar8 = (*objType).operator->();
                                        iVar6 = *(int*)(lVar8 + 1992);
                                        lVar8 = local_48.operator->();
                                        iVar7 = ((lVar8 + 72))->end();
                                        if (iVar7 <= iVar6) {
                                            lVar8 = local_48.operator->();
                                            iVar6 = *(int*)(lVar8 + 168);
                                            lVar8 = (*objType).operator->();
                                            *(int*)(lVar8 + 1992) = *(int*)(lVar8 + 1992) - iVar6;
                                            lVar8 = (*objType).operator->();
                                            if (-1 < *(int*)(lVar8 + 1992)) {
                                                lVar8 = (*objType).operator->();
                                                iVar6 = *(int*)(lVar8 + 1992);
                                                lVar8 = local_48.operator->();
                                                iVar7 = ((lVar8 + 72))->end();
                                                if (iVar6 < iVar7)
                                                    goto LAB_100105602;
                                            }
                                            lVar8 = (*objType).operator->();
                                            *(uint32_t*)(lVar8 + 1992) = 0;
                                        }
                                    LAB_100105602:
                                        ComponentUpdated(local_38, (shared_ptr<rs2lib::IfType>*)objType);
                                    }
                                } else {
                                    lVar8 = (*objType).operator->();
                                    *(int*)(lVar8 + 1992) = *(int*)(lVar8 + 1992) + iVar6;
                                    pSVar12 = (SeqType*)local_48.operator->();
                                    iVar6 = pSVar12->GetDuration();
                                    lVar8 = (*objType).operator->();
                                    if (iVar6 <= *(int*)(lVar8 + 1992)) {
                                        lVar8 = local_48.operator->();
                                        iVar7 = *(int*)(lVar8 + 168);
                                        lVar8 = (*objType).operator->();
                                        *(int*)(lVar8 + 1992) = *(int*)(lVar8 + 1992) - iVar7;
                                        lVar8 = (*objType).operator->();
                                        if ((*(int*)(lVar8 + 1992) < 0) ||
                                            (lVar8 = (*objType).operator->(), iVar6 <= *(int*)(lVar8 + 1992))) {
                                            lVar8 = (*objType).operator->();
                                            *(uint32_t*)(lVar8 + 1992) = 0;
                                        }
                                    }
                                    ComponentUpdated(local_38, (shared_ptr<rs2lib::IfType>*)objType);
                                }
                            }
                        }
                        lVar8 = (*objType).operator->();
                        if ((*(int*)(lVar8 + 284) != 0) &&
                            (pcVar10 = (char*)(*objType).operator->(), *pcVar10 == '\0')) {
                            lVar8 = (*objType).operator->();
                            uVar1 = *(unsigned short*)(lVar8 + 286);
                            lVar8 = (*objType).operator->();
                            uVar2 = *(unsigned short*)(lVar8 + 284);
                            iVar6 = local_38->field_1115692;
                            lVar8 = (*objType).operator->();
                            iVar7 = *(int*)(lVar8 + 260);
                            lVar8 = (*objType).operator->();
                            *(unsigned int*)(lVar8 + 260) = (unsigned int)uVar1 * iVar6 + iVar7 & 2047;
                            lVar8 = (*objType).operator->();
                            iVar7 = *(int*)(lVar8 + 264);
                            lVar8 = (*objType).operator->();
                            *(unsigned int*)(lVar8 + 264) = (unsigned int)uVar2 * iVar6 + iVar7 & 2047;
                            ComponentUpdated(local_38, (shared_ptr<rs2lib::IfType>*)objType);
                        }
                    }
                }
            LAB_1001052c0:
                arg1 = arg1 + 1;
                uVar9 = ifTypes.end();
            } while (arg1 < uVar9);
        }
    }

    // 0x100105750
    void Client::DrawDebugString(const eastl::string& str, int arg2, int arg3) {
        DrawDebugString((eastl::string*)this, (int)str, arg2, arg3);
    }

    // 0x100105760
    void Client::DrawDebugString(const eastl::string& str, int arg2, int arg3, int arg4) {
        eastl::string* str_00 = (eastl::string*)(*((str + 1104256))).operator->();
        (**(void (**)(...)) * *(uint64_t**)(str + 144))();
        jstring::PixfontGeneric::RightString(*str_00, arg2, arg3, arg4, 16776960, *4294967295);
    }

    // 0x1001058a0
    void Client::CreateObjOverlay(shared_ptr<rs2lib::IfType> ifType) {
        Array<shared_ptr<rs2lib::IfType>>* this_01;
        shared_ptr<rs2lib::IfType>* ifType1;
        IfType* this_02;
        function<void(rs2lib::IfType const&)> local_68[56];
        long local_30;

        uint8_t* this_00 = m_entityOverlays;
        uint32_t uVar2 = this_00->CreateOverlay();
        long lVar3 = (*ifType).operator->();
        *(uint32_t*)(lVar3 + 680) = uVar2;
        bool cVar1 = ScriptRunner::ExecuteHeldObjOverlayTrigger(*ifType, 500000);
        lVar3 = (*ifType).operator->();
        if (!cVar1) {
            this_00->DestroyOverlay(*(int*)(lVar3 + 680));
            lVar3 = (*ifType).operator->();
            *(uint32_t*)(lVar3 + 680) = 4294967294;
        } else {
            this_01 = (Array<shared_ptr<rs2lib::IfType>>*)this_00->GetOverlay(*(int*)(lVar3 + 680));
            ifType1 = (shared_ptr<rs2lib::IfType>*)(*this_01)[0];
            InterfacePositionOverlay(*ifType1, *ifType, true);
            this_02 = (IfType*)(*ifType).operator->();
            std::function<void(rs2lib::IfType const&)>::function<
                Client::CreateObjOverlay(shared_ptr<rs2lib::IfType>)::__13, void>(local_68, (__13*)this);
            this_02->SetOnDestroyCallback(local_68);
        }
    }

    // 0x1001059f0
    uint32_t Client::GetActive(const shared_ptr<rs2lib::IfType>& ifType) {
        uint32_t* puVar4;

        long lVar3 = ifType.operator->();
        unsigned int uVar1 = *(unsigned int*)(lVar3 + 4);
        lVar3 = ifType.operator->();
        auto local_48 = field_2506512->find((long)*(int*)(lVar3 + 8) + ((unsigned long)uVar1 << 32));
        auto local_58 = field_2506512->end();
        if (local_48 != local_58 == '\0') {
            lVar3 = ifType.operator->();
            puVar4 = (uint32_t*)(lVar3 + 684);
        } else {
            lVar3 = local_48.HeapBeginPtr();
            puVar4 = (uint32_t*)(lVar3 + 8);
        }
        return *puVar4;
    }

    // 0x100105ab0
    void Client::ClearHookQueueMouseEvents(bool arg1) {
        uint64_t in_register_00000031;

        (&field_2506384)
            ->remove_if<Client::ClearHookQueueMouseEvents(bool)::__14>(
                (__14*)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1));
    }

    // 0x100105ad0
    void Client::ClearHardcodedMouseEvents() {
        field_2506480.clear();
    }

    // 0x100105af0
    void Client::ResetDragScrollLayer() {

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        (*((field_2505204 + 4))) = local_28;
        field_2505224 = 0;
        field_8604 = 0;
    }

    // 0x100105b90
    void Client::IfButtonX(int arg1, const shared_ptr<rs2lib::IfType>& ifType, const eastl::string& str, int arg4) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar1;
        ServerConnection* pSVar7;
        Isaac* pIVar8;
        uint8_t local_b8[32];
        shared_ptr<rs2lib::IfType> local_98;
        int local_80;
        eastl::string local_60;

        if (ifType == nullptr) {
            return;
        }
        long lVar6 = ifType.operator->();
        int iVar5 = *(int*)(lVar6 + 20);
        lVar6 = ifType.operator->();
        bool cVar4 = ((lVar6 + 1312))->empty();
        if (!cVar4) {
            new (local_b8) HookReq();
            local_98 = ifType;
            local_80 = arg1;
            local_60 = str;
            lVar6 = ifType.operator->();
            *local_b8 = (*((lVar6 + 1312)));
            ScriptRunner::ExecuteScript(*local_b8, 500000);
        }
        if ((0 < iVar5) && (cVar4 = ClientButton(iVar5), !cVar4)) {
            return;
        }
        iVar5 = GetActive(ifType);
        unsigned int arg2 = arg1 - 1;
        cVar4 = rs2lib::ServerActive::HasOp(iVar5, arg2);
        if (!cVar4) {
            if (field_54760 == '\0') {
                return;
            }
            (logger::default_logger())
                ->Log(
                    false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                    5139, "Skipping ifbuttonx transmit for op:%i as if_setevents not set for that op", arg1);
            return;
        }
        lVar6 = ifType.operator->();
        unsigned int uVar2 = *(unsigned int*)(lVar6 + 4);
        lVar6 = ifType.operator->();
        if (9 < arg2) {
            return;
        }
        unsigned int local_34 = *(unsigned int*)(lVar6 + 8);
        switch (arg2) {
        case 0:
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pIVar8 = pSVar7->GetOutgoingEncryption();
            *local_b8 = shared::ClientMessage::MakeClientMessage(26, *pIVar8);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            pPVar1->p4<int>((unsigned long)uVar2);
            pPVar1->p2<int>(local_34);
            pPVar1->p2<int>((unsigned int)arg4);
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pSVar7->SendClientMessage(*local_b8);
            switch (arg1) {
            case 2:
                goto switchD_100105cba_caseD_1;
            case 3:
                goto switchD_100105cba_caseD_2;
            case 4:
                goto switchD_100105cba_caseD_3;
            case 5:
                goto switchD_100105cba_caseD_4;
            case 6:
                goto switchD_100105cba_caseD_5;
            case 7:
                goto switchD_100105cba_caseD_6;
            case 8:
                goto switchD_100105cba_caseD_7;
            case 9:
                goto switchD_100105cba_caseD_8;
            case 10:
                break;
            default:
                goto switchD_10010602c_default;
            }
        case 1:
        switchD_100105cba_caseD_1:
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pIVar8 = pSVar7->GetOutgoingEncryption();
            *local_b8 = shared::ClientMessage::MakeClientMessage(16, *pIVar8);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            pPVar1->p4<int>((unsigned long)uVar2);
            pPVar1->p2<int>(local_34);
            pPVar1->p2<int>((unsigned int)arg4);
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pSVar7->SendClientMessage(*local_b8);
            switch (arg1) {
            case 3:
                goto switchD_100105cba_caseD_2;
            case 4:
                goto switchD_100105cba_caseD_3;
            case 5:
                goto switchD_100105cba_caseD_4;
            case 6:
                goto switchD_100105cba_caseD_5;
            case 7:
                goto switchD_100105cba_caseD_6;
            case 8:
                goto switchD_100105cba_caseD_7;
            case 9:
                goto switchD_100105cba_caseD_8;
            case 10:
                break;
            default:
                goto switchD_10010602c_default;
            }
        case 2:
        switchD_100105cba_caseD_2:
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pIVar8 = pSVar7->GetOutgoingEncryption();
            *local_b8 = shared::ClientMessage::MakeClientMessage(68, *pIVar8);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            pPVar1->p4<int>((unsigned long)uVar2);
            pPVar1->p2<int>(local_34);
            pPVar1->p2<int>((unsigned int)arg4);
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pSVar7->SendClientMessage(*local_b8);
            switch (arg1) {
            case 4:
                goto switchD_100105cba_caseD_3;
            case 5:
                goto switchD_100105cba_caseD_4;
            case 6:
                goto switchD_100105cba_caseD_5;
            case 7:
                goto switchD_100105cba_caseD_6;
            case 8:
                goto switchD_100105cba_caseD_7;
            case 9:
                goto switchD_100105cba_caseD_8;
            case 10:
                break;
            default:
                goto switchD_10010602c_default;
            }
        case 3:
        switchD_100105cba_caseD_3:
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pIVar8 = pSVar7->GetOutgoingEncryption();
            *local_b8 = shared::ClientMessage::MakeClientMessage(5, *pIVar8);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            pPVar1->p4<int>((unsigned long)uVar2);
            pPVar1->p2<int>(local_34);
            pPVar1->p2<int>((unsigned int)arg4);
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pSVar7->SendClientMessage(*local_b8);
            switch (arg1) {
            case 5:
                goto switchD_100105cba_caseD_4;
            case 6:
                goto switchD_100105cba_caseD_5;
            case 7:
                goto switchD_100105cba_caseD_6;
            case 8:
                goto switchD_100105cba_caseD_7;
            case 9:
                goto switchD_100105cba_caseD_8;
            case 10:
                break;
            default:
                goto switchD_10010602c_default;
            }
        case 4:
        switchD_100105cba_caseD_4:
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pIVar8 = pSVar7->GetOutgoingEncryption();
            *local_b8 = shared::ClientMessage::MakeClientMessage(89, *pIVar8);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            pPVar1->p4<int>((unsigned long)uVar2);
            pPVar1->p2<int>(local_34);
            pPVar1->p2<int>((unsigned int)arg4);
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pSVar7->SendClientMessage(*local_b8);
            switch (arg1) {
            case 6:
                goto switchD_100105cba_caseD_5;
            case 7:
                goto switchD_100105cba_caseD_6;
            case 8:
                goto switchD_100105cba_caseD_7;
            case 9:
                goto switchD_100105cba_caseD_8;
            case 10:
                break;
            default:
                goto switchD_10010602c_default;
            }
        case 5:
        switchD_100105cba_caseD_5:
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pIVar8 = pSVar7->GetOutgoingEncryption();
            *local_b8 = shared::ClientMessage::MakeClientMessage(6, *pIVar8);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            pPVar1->p4<int>((unsigned long)uVar2);
            pPVar1->p2<int>(local_34);
            pPVar1->p2<int>((unsigned int)arg4);
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pSVar7->SendClientMessage(*local_b8);
            switch (arg1) {
            case 7:
                goto switchD_100105cba_caseD_6;
            case 8:
                goto switchD_100105cba_caseD_7;
            case 9:
                goto switchD_100105cba_caseD_8;
            case 10:
                break;
            default:
                goto switchD_10010602c_default;
            }
        case 6:
        switchD_100105cba_caseD_6:
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pIVar8 = pSVar7->GetOutgoingEncryption();
            *local_b8 = shared::ClientMessage::MakeClientMessage(55, *pIVar8);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            pPVar1->p4<int>((unsigned long)uVar2);
            pPVar1->p2<int>(local_34);
            pPVar1->p2<int>((unsigned int)arg4);
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pSVar7->SendClientMessage(*local_b8);
            if (arg1 == 8)
                goto switchD_100105cba_caseD_7;
            goto LAB_100106120;
        case 7:
        switchD_100105cba_caseD_7:
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pIVar8 = pSVar7->GetOutgoingEncryption();
            *local_b8 = shared::ClientMessage::MakeClientMessage(1, *pIVar8);
            pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            pPVar1->p4<int>((unsigned long)uVar2);
            pPVar1->p2<int>(local_34);
            pPVar1->p2<int>((unsigned int)arg4);
            pSVar7 = (ServerConnection*)field_19120.operator->();
            pSVar7->SendClientMessage(*local_b8);
        LAB_100106120:
            if (arg1 == 9) {
            switchD_100105cba_caseD_8:
                pSVar7 = (ServerConnection*)field_19120.operator->();
                pIVar8 = pSVar7->GetOutgoingEncryption();
                *local_b8 = shared::ClientMessage::MakeClientMessage(76, *pIVar8);
                pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
                pPVar1->p4<int>((unsigned long)uVar2);
                pPVar1->p2<int>(local_34);
                pPVar1->p2<int>((unsigned int)arg4);
                pSVar7 = (ServerConnection*)field_19120.operator->();
                pSVar7->SendClientMessage(*local_b8);
            }
            if (arg1 != 10) {
                return;
            }
            break;
        case 8:
            goto switchD_100105cba_caseD_8;
        }
        pSVar7 = (ServerConnection*)field_19120.operator->();
        pIVar8 = pSVar7->GetOutgoingEncryption();
        *local_b8 = shared::ClientMessage::MakeClientMessage(32, *pIVar8);
        pPVar1 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
        pPVar1->p4<int>((unsigned long)uVar2);
        pPVar1->p2<int>(local_34);
        pPVar1->p2<int>((unsigned int)arg4);
        pSVar7 = (ServerConnection*)field_19120.operator->();
        pSVar7->SendClientMessage(*local_b8);
    switchD_10010602c_default:
    }

    // 0x100106390
    auto Client::TargetVerb(const shared_ptr<rs2lib::IfType>& ifType) {
        long lVar3;
        eastl::string local_48;

        int iVar2 = GetActive(ifType);
        iVar2 = rs2lib::ServerActive::TargetMask(iVar2);
        if (iVar2 == 0) {
            auto result("");
        } else {
            lVar3 = ifType.operator->();
            local_48 = eastl::string(*((lVar3 + 792)));
            local_48.trim();
            if (local_48.empty() == '\0') {
                lVar3 = ifType.operator->();
                new (&result) eastl::string(*((lVar3 + 792)));
            } else {
                new (&result) eastl::string("");
            }
        }
        return result;
    }

    // 0x100106560
    void Client::GetParentInterface(shared_ptr<rs2lib::IfType> ifType) {
        long lVar1 = (*ifType).operator->();
        if (*(char*)(lVar1 + 24) == '\0') {
            lVar1 = (*ifType).operator->();
            rs2lib::IfType::Get(*(int*)(lVar1 + 4));
        } else {
            lVar1 = (*ifType).operator->();
            m_entityOverlays->GetLayer(*(int*)(lVar1 + 4));
        }
    }

    // 0x1001066f0
    uint8_t Client::RenderAllPlayerNames() {
        return ((uint8_t)field_52036 & 4) >> 2;
    }

    // 0x100106710
    uint8_t Client::RenderFriendNames() {
        return (uint8_t)field_52036 & 1;
    }

    // 0x100106720
    uint8_t Client::RenderFriendChatNames() {
        return ((uint8_t)field_52036 & 2) >> 1;
    }

    // 0x100106730
    uint8_t Client::RenderSelfName() {
        return ((uint8_t)field_52036 & 8) >> 3;
    }

    // 0x100106750
    unsigned long Client::ShouldRenderPlayerName(ClientPlayer* clientPlayer) {
        bool cVar1;
        unsigned int uVar2;
        uint64_t unaff_R15;
        unsigned long uVar4;

        if (field_52036 == 0) {
        LAB_1001067b7:
            uVar4 = 0;
        } else {
            if ((ClientPlayer*)field_52016.end() == clientPlayer) {
                uVar2 = RenderSelfName();
            } else {
                cVar1 = RenderAllPlayerNames();
                uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
                if (cVar1)
                    goto LAB_1001067c7;
                cVar1 = RenderFriendNames();
                if (cVar1) {
                    cVar1 = clientPlayer->IsOnlineFriend();
                    if (cVar1)
                        goto LAB_1001067c7;
                }
                cVar1 = RenderFriendChatNames();
                if (!cVar1)
                    goto LAB_1001067b7;
                uVar2 = clientPlayer->IsFriendChat();
            }
            uVar4 = (unsigned long)uVar2;
        }
    LAB_1001067c7:
        return uVar4 & 4294967295;
    }

    // 0x100106840
    void Client::DoStashed(CoordType<UICoordSpecializer> coordType1, CoordType<UICoordSpecializer> coordType2) {
        int arg4;
        MinimenuSubject* minimenuSubject;
        eastl::string* in_R9;
        CoordType<UICoordSpecializer>* in_stack_ffffffffffffff90;
        CoordType<UICoordSpecializer>* in_stack_ffffffffffffff98;
        ReturnValue local_50;
        int local_3c;
        int local_38;
        int local_34;

        auto this_00 = field_52344->GetStashed();
        if (this_00 != nullptr) {
            local_3c = this_00->GetX();
            local_38 = this_00->GetZ();
            local_34 = this_00->GetPos();
            arg4 = this_00->GetLevel();
            this_00->second();
            minimenuSubject = (MinimenuSubject*)this_00->GetLogStreams();
            local_50 = this_00->GetComponent();
            DoAction(local_3c, local_38, local_34, arg4, *in_R9, *minimenuSubject, in_stack_ffffffffffffff90,
                     in_stack_ffffffffffffff98, local_50);
        }
        minimenu::Minimenu::ClearStashed();
    }

    // 0x100106960
    unsigned long Client::IsMiniMenuOpenRequired() {
        bool cVar1;
        int iVar2;

        int arg1 = field_52344->GetDefaultClickIndex();
        if (((m_usingOneButtonMouse == false) || (iVar2 = field_52344->GetNumEntries(), iVar2 < 3)) &&
            (cVar1 = field_52344->MenuOnly(arg1), !cVar1)) {
            return 0;
        }
        return field_52344->IsDefaultShiftClickOption() ^ 1;
    }

    // 0x1001069c0
    void Client::RequestGroundCoordsForDeferredMove(CoordType<UICoordSpecializer> coordType1,
                                                    CoordType<UICoordSpecializer> coordType2) {
        int local_30;
        int local_2c;

        auto this_00 = GetMemoryCache();
        ((NXTPixScreen*)this_00->GetScreen())
            ->CalculateCanvasCoords((CoordType<UICoordSpecializer>*)((unsigned long)coordType1 & 4294967295),
                                    (CoordType<UICoordSpecializer>*)((unsigned long)coordType2 & 4294967295), local_30,
                                    local_2c);
        int arg2 = local_30 - field_52736;
        int arg3 = local_2c - field_52740;
        local_30 = arg2;
        local_2c = arg3;
        ((world*)field_19184.operator->())->RequestGroundCoordsForOp(field_51984, arg2, arg3, false);
    }

    // 0x100106a50
    bool Client::IsLocOnPlayersLevel(int arg1, int arg2, long long arg3) {
        int iVar1 = ((world*)field_19184.operator->())->TypeCode2(field_51984, arg1, arg2, arg3);
        return -1 < iVar1;
    }

    // 0x100106aa0
    void Client::IsMiniMenuOpen() {
        field_52344->IsOpen();
    }

    // 0x100106ac0
    void Client::ExecuteOnClickObjTrigger(const minimenu::MinimenuSubject& minimenuSubject) {
        long lVar3;
        int* piVar4;
        weak_ptr<ClientObj>* clientObj;
        CoordGrid local_60;
        shared_ptr local_50;
        ReturnValue local_40;

        int iVar2 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(minimenuSubject.field_40);
        int arg2 = dash3d::MousePickingHelper::GetEntityXFromTypecode(minimenuSubject.field_40);
        int arg3 = dash3d::MousePickingHelper::GetEntityZFromTypecode(minimenuSubject.field_40);
        CoordGrid local_70(iVar2, arg2, arg3);
        iVar2 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(minimenuSubject.field_40);
        FindClientObj((ReturnValue*)&local_50, this, &local_70, iVar2, *(int*)&minimenuSubject.field_48);
        if (shared_ptr::operator_cast_to_bool(&local_50) == '\0') {
            (logger::default_logger())
                ->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                    3903, "Trying to fire onclickobj script trigger, but could not find obj based on typecode: %lld",
                    minimenuSubject.field_40);
        } else {
            lVar3 = local_50.operator->();
            local_40 = configdecoder::ObjType::List(*(int*)(lVar3 + 24));
            local_60 = weak_ptr(local_50);
            local_70.SetActiveObj(local_60, clientObj);
            piVar4 = (int*)local_40.operator->();
            iVar2 = *piVar4;
            lVar3 = local_40.operator->();
            ScriptRunner::ExecuteScript(79, iVar2, *(int*)(lVar3 + 672), 500000);
        }
    }

    // 0x100106c30
    void Client::ExecuteOnClickLocTrigger(int arg1, long long arg2) {
        int arg2_00;
        int* piVar2;
        long lVar3;

        LocInfo local_30(arg2);
        ScriptRunner::SetActiveLoc(local_30);
        auto this_00 = configdecoder::LocType::List(arg1);
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            (logger::default_logger())
                ->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                    3917, "Trying to fire onclickloc script trigger, but could not find loc type for loc id: %d", arg1);
        } else {
            piVar2 = (int*)(*this_00).operator->();
            arg2_00 = *piVar2;
            lVar3 = (*this_00).operator->();
            ScriptRunner::ExecuteScript(78, arg2_00, *(int*)(lVar3 + 440), 500000);
        }
    }

    // 0x100106cf0
    void Client::ExecuteOnClickNPCTrigger(int arg1) {
        int arg2;
        int* piVar2;

        long lVar1 = GetClientNpc(arg1);
        if (lVar1 == 0) {
            (logger::default_logger())
                ->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                    3932, "Trying to fire onclicknpc script trigger, but NPC no longer exists. NPC id: %d", arg1);
        } else {
            ScriptRunner::SetActiveNPC(arg1);
            piVar2 = (int*)(*((lVar1 + 1024))).operator->();
            arg2 = *piVar2;
            lVar1 = (*((lVar1 + 1024))).operator->();
            ScriptRunner::ExecuteScript(80, arg2, *(int*)(lVar1 + 156), 500000);
        }
    }

    // 0x100106d80
    void Client::ExecuteOnClickPlayerTrigger(int arg1) {
        uint64_t in_RAX;

        uint32_t uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
        shared_ptr* this_00 = &field_19216[(long)arg1];
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            (logger::default_logger())
                ->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                    3945, "Trying to fire onclickplayer script trigger, but player no longer exists. Player id: %d",
                    (((uint64_t)uVar2 << 32) | (uint32_t)arg1));
        } else {
            ScriptRunner::SetActivePlayer(arg1);
            ScriptRunner::ExecuteScript(81, -1, -1, 500000);
        }
    }

    // 0x100106e00
    void Client::SendExamineObj(int arg1) {
        uint8_t local_68[64];

        auto pSVar1 = field_19120.operator->();
        auto isaac = pSVar1->GetOutgoingEncryption();
        *local_68 = shared::ClientMessage::MakeClientMessage(30, *isaac);
        SuperShuffledPacketFactory local_28(*((local_68 + 8)));
        ((ShuffledPacket4*)ShuffledPacketFactory::p2_alt2())->p2<int>(arg1);
        pSVar1 = (ServerConnection*)field_19120.operator->();
        pSVar1->SendClientMessage(*local_68);
    }

    // 0x100106ea0
    void Client::SendExamineObjV2(rs2lib::CoordGrid& coordGrid, int arg2) {
        uint8_t local_78[64];

        auto pSVar1 = field_19120.operator->();
        auto isaac = pSVar1->GetOutgoingEncryption();
        *local_78 = shared::ClientMessage::MakeClientMessage(46, *isaac);
        SuperShuffledPacketFactory local_38(*((local_78 + 8)));
        auto this_00 = ShuffledPacketFactory::p2_alt2();
        unsigned int arg1 = coordGrid.GetZ();
        this_00->p2<int>(arg1);
        ((ShuffledPacket3*)ShuffledPacketFactory::p2_alt2())->p2<int>(arg2);
        auto this_02 = ShuffledPacketFactory::p2_alt2();
        int arg1_00 = coordGrid.GetPos();
        this_02->p2<int>(arg1_00);
        pSVar1 = (ServerConnection*)field_19120.operator->();
        pSVar1->SendClientMessage(*local_78);
    }

    // 0x100106f90
    void Client::DoAction(int arg1, int arg2, int arg3, int arg4, const eastl::string& str,
                          const minimenu::MinimenuSubject& minimenuSubject, CoordType<UICoordSpecializer> coordType1,
                          CoordType<UICoordSpecializer> coordType2, const shared_ptr<rs2lib::IfType>& ifType) {
        uint8_t* objType;
        uint32_t uVar1;
        Minimenu* this_00;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        uint8_t bVar5;
        bool bVar6;
        bool cVar7;
        int iVar8;
        int iVar9;
        Array<int>* pAVar10;
        uint32_t* puVar11;
        ShuffledPacket2* pSVar12;
        shared_ptr<dash3d::GroundDecor>* psVar13;
        Client* pCVar14;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar15;
        NpcType* this_01;
        int* piVar16;
        long lVar17;
        ServerConnection* pSVar18;
        Isaac* pIVar19;
        ShuffledPacket4* pSVar20;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar21;
        ShuffledPacket3* pSVar22;
        HookArg* pHVar23;
        char* pcVar24;
        weak_ptr<ClientObj>* clientObj;
        CoordGrid* this_02;
        CoordGrid local_1a0;
        ReturnValue local_180;
        CoordGrid local_160;
        unsigned long local_150;
        CoordGrid local_148;
        SuperShuffledPacketFactory local_128;
        uint8_t local_108[8];
        uint8_t local_100[48];
        unsigned int local_d0;
        eastl::string local_b0;
        int local_8c;
        HookArg local_88;

        unsigned int arg1_00 = minimenu::Minimenu::RemovePriorityModifier(arg3);
        int iVar25 = arg1_00 - 1;
        switch (iVar25) {
        case 0:
        switchD_100106fd7_caseD_0:
            uVar4 = (unsigned int)arg1;
            uVar3 = (unsigned int)arg2;
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(18, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_52364);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p4<int>((unsigned long)field_52360);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_52356);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>((unsigned int)arg4);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_53224 + uVar3);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_53220 + uVar4);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
            pCVar14 = (Client*)field_19120.operator->();
            pCVar14->SendClientMessage(*local_108);
            ExecuteOnClickLocTrigger(pCVar14, (unsigned int)arg4, minimenuSubject.field_40);
            switch (arg1_00) {
            case 2:
                goto switchD_100106fd7_caseD_1;
            case 3:
                goto switchD_100106fd7_caseD_2;
            case 4:
                goto switchD_100106fd7_caseD_3;
            case 5:
                goto switchD_100106fd7_caseD_4;
            case 6:
                goto switchD_100106fd7_caseD_5;
            case 7:
                goto switchD_100106fd7_caseD_6;
            case 8:
                goto switchD_100106fd7_caseD_7;
            case 9:
                goto switchD_100106fd7_caseD_8;
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
                break;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 1:
        switchD_100106fd7_caseD_1:
            uVar4 = (unsigned int)arg1;
            uVar3 = (unsigned int)arg2;
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(12, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>((unsigned int)arg4);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_53220 + uVar4);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_53224 + uVar3);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            iVar25 = field_52344->GetTargetSubinterfaceId();
            pSVar22->p2<int>(iVar25);
            pSVar20 = (ShuffledPacket4*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pSVar20->p1<int>((unsigned int)bVar5);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            iVar25 = field_52344->GetTargetLinkObject();
            pSVar22->p2<int>(iVar25);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            iVar25 = field_52344->GetTargetComponent();
            pSVar12->p4<unsigned int>(iVar25);
            pCVar14 = (Client*)field_19120.operator->();
            pCVar14->SendClientMessage(*local_108);
            ExecuteOnClickLocTrigger(pCVar14, (unsigned int)arg4, minimenuSubject.field_40);
            switch (arg1_00) {
            case 3:
                goto switchD_100106fd7_caseD_2;
            case 4:
                goto switchD_100106fd7_caseD_3;
            case 5:
                goto switchD_100106fd7_caseD_4;
            case 6:
                goto switchD_100106fd7_caseD_5;
            case 7:
                goto switchD_100106fd7_caseD_6;
            case 8:
                goto switchD_100106fd7_caseD_7;
            case 9:
                goto switchD_100106fd7_caseD_8;
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
                break;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 2:
        switchD_100106fd7_caseD_2:
            uVar4 = (unsigned int)arg1;
            uVar3 = (unsigned int)arg2;
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(79, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_53220 + uVar4);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>(field_53224 + uVar3);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>((unsigned int)arg4);
            pCVar14 = (Client*)field_19120.operator->();
            pCVar14->SendClientMessage(*local_108);
            ExecuteOnClickLocTrigger(pCVar14, (unsigned int)arg4, minimenuSubject.field_40);
            switch (arg1_00) {
            case 4:
                goto switchD_100106fd7_caseD_3;
            case 5:
                goto switchD_100106fd7_caseD_4;
            case 6:
                goto switchD_100106fd7_caseD_5;
            case 7:
                goto switchD_100106fd7_caseD_6;
            case 8:
                goto switchD_100106fd7_caseD_7;
            case 9:
                goto switchD_100106fd7_caseD_8;
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
                break;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 3:
        switchD_100106fd7_caseD_3:
            uVar4 = (unsigned int)arg1;
            uVar3 = (unsigned int)arg2;
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(3, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_53220 + uVar4);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_53224 + uVar3);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>((unsigned int)arg4);
            pSVar22 = (ShuffledPacket3*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pSVar22->p1<int>((unsigned int)bVar5);
            pCVar14 = (Client*)field_19120.operator->();
            pCVar14->SendClientMessage(*local_108);
            ExecuteOnClickLocTrigger(pCVar14, (unsigned int)arg4, minimenuSubject.field_40);
            switch (arg1_00) {
            case 5:
                goto switchD_100106fd7_caseD_4;
            case 6:
                goto switchD_100106fd7_caseD_5;
            case 7:
                goto switchD_100106fd7_caseD_6;
            case 8:
                goto switchD_100106fd7_caseD_7;
            case 9:
                goto switchD_100106fd7_caseD_8;
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
                break;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 4:
        switchD_100106fd7_caseD_4:
            uVar3 = (unsigned int)arg2;
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(39, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>((unsigned int)arg4);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>(field_53220 + (unsigned int)arg1);
            pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pSVar12->p1<int>((unsigned int)bVar5);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_53224 + uVar3);
            pCVar14 = (Client*)field_19120.operator->();
            pCVar14->SendClientMessage(*local_108);
            ExecuteOnClickLocTrigger(pCVar14, (unsigned int)arg4, minimenuSubject.field_40);
            switch (arg1_00) {
            case 6:
                goto switchD_100106fd7_caseD_5;
            case 7:
                goto switchD_100106fd7_caseD_6;
            case 8:
                goto switchD_100106fd7_caseD_7;
            case 9:
                goto switchD_100106fd7_caseD_8;
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
                break;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 5:
        switchD_100106fd7_caseD_5:
            uVar3 = (unsigned int)arg2;
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(73, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_53224 + uVar3);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>((unsigned int)arg4);
            uVar3 = (unsigned int)arg1;
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>(field_53220 + uVar3);
            pCVar14 = (Client*)field_19120.operator->();
            pCVar14->SendClientMessage(*local_108);
            ExecuteOnClickLocTrigger(pCVar14, (unsigned int)arg4, minimenuSubject.field_40);
            switch (arg1_00) {
            case 7:
                goto switchD_100106fd7_caseD_6;
            case 8:
                goto switchD_100106fd7_caseD_7;
            case 9:
                goto switchD_100106fd7_caseD_8;
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
                break;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 6:
        switchD_100106fd7_caseD_6:
            psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
            bVar6 = *psVar15 != nullptr;
            if (bVar6) {
                SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(69, *pIVar19);
                local_88 = SuperShuffledPacketFactory(*local_100);
                pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar12->p2<int>(field_52356);
                pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar12->p2<int>(field_52364);
                pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar12->p4<unsigned int>(field_52360);
                pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar12->p2<int>((unsigned int)arg4);
                pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
                bVar5 = field_8496.KeyHeld(107);
                pSVar12->p1<int>((unsigned int)bVar5);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pSVar18->SendClientMessage(*local_108);
                ExecuteOnClickNPCTrigger((unsigned int)arg4);
            }
            if (1001 < (int)arg1_00)
                goto LAB_10010951a;
            switch (arg1_00) {
            case 8:
                goto switchD_100106fd7_caseD_7;
            case 9:
                goto switchD_100106fd7_caseD_8;
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            }
            break;
        case 7:
        switchD_100106fd7_caseD_7:
            psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
            bVar6 = *psVar15 != nullptr;
            if (bVar6) {
                SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(78, *pIVar19);
                local_88 = SuperShuffledPacketFactory(*local_100);
                pSVar20 = (ShuffledPacket4*)local_88.HeapBeginPtr();
                bVar5 = field_8496.KeyHeld(107);
                pSVar20->p1<int>((unsigned int)bVar5);
                pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar20->p2<int>((unsigned int)arg4);
                pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                iVar25 = field_52344->GetTargetLinkObject();
                pSVar12->p2<int>(iVar25);
                pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                iVar25 = field_52344->GetTargetComponent();
                pSVar20->p4<unsigned int>(iVar25);
                pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                iVar25 = field_52344->GetTargetSubinterfaceId();
                pSVar22->p2<int>(iVar25);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pSVar18->SendClientMessage(*local_108);
                ExecuteOnClickNPCTrigger((unsigned int)arg4);
            }
            if (1001 < (int)arg1_00)
                goto LAB_10010951a;
            switch (arg1_00) {
            case 9:
                goto switchD_100106fd7_caseD_8;
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            }
            break;
        case 8:
        switchD_100106fd7_caseD_8:
            psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
            bVar6 = *psVar15 != nullptr;
            if (bVar6) {
                SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(34, *pIVar19);
                local_88 = SuperShuffledPacketFactory(*local_100);
                pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
                bVar5 = field_8496.KeyHeld(107);
                pSVar12->p1<int>((unsigned int)bVar5);
                pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar20->p2<int>((unsigned int)arg4);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pSVar18->SendClientMessage(*local_108);
                ExecuteOnClickNPCTrigger((unsigned int)arg4);
            }
            if (1001 < (int)arg1_00)
                goto LAB_10010951a;
            switch (arg1_00) {
            case 10:
                goto switchD_100106fd7_caseD_9;
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            }
            break;
        case 9:
        switchD_100106fd7_caseD_9:
            psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
            bVar6 = *psVar15 != nullptr;
            if (bVar6) {
                SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(53, *pIVar19);
                local_88 = SuperShuffledPacketFactory(*local_100);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
                bVar5 = field_8496.KeyHeld(107);
                pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
                pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar12->p2<int>((unsigned int)arg4);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pSVar18->SendClientMessage(*local_108);
                ExecuteOnClickNPCTrigger((unsigned int)arg4);
            }
            if (1001 < (int)arg1_00)
                goto LAB_10010951a;
            switch (arg1_00) {
            case 11:
                goto switchD_100106fd7_caseD_a;
            case 12:
                goto switchD_100106fd7_caseD_b;
            case 13:
                goto switchD_100106fd7_caseD_c;
            case 14:
                goto switchD_100106fd7_caseD_d;
            case 15:
                goto switchD_100106fd7_caseD_e;
            case 23:
                goto switchD_100106fd7_caseD_16;
            case 44:
                goto switchD_100106fd7_caseD_2b;
            case 45:
                goto switchD_100106fd7_caseD_2c;
            case 46:
                goto switchD_100106fd7_caseD_2d;
            case 47:
                goto switchD_100106fd7_caseD_2e;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            }
            break;
        case 10:
        switchD_100106fd7_caseD_a:
            psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
            bVar6 = *psVar15 != nullptr;
            if (bVar6) {
                SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(81, *pIVar19);
                local_88 = SuperShuffledPacketFactory(*local_100);
                pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar22->p2<int>((unsigned int)arg4);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
                bVar5 = field_8496.KeyHeld(107);
                pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pSVar18->SendClientMessage(*local_108);
                ExecuteOnClickNPCTrigger((unsigned int)arg4);
            }
            if ((int)arg1_00 < 1002) {
                switch (arg1_00) {
                case 12:
                    goto switchD_100106fd7_caseD_b;
                case 13:
                    goto switchD_100106fd7_caseD_c;
                case 14:
                    goto switchD_100106fd7_caseD_d;
                case 15:
                    goto switchD_100106fd7_caseD_e;
                case 23:
                    goto switchD_100106fd7_caseD_16;
                case 44:
                    goto switchD_100106fd7_caseD_2b;
                case 45:
                    goto switchD_100106fd7_caseD_2c;
                case 46:
                    goto switchD_100106fd7_caseD_2d;
                case 47:
                    goto switchD_100106fd7_caseD_2e;
                case 48:
                    goto switchD_100106fd7_caseD_2f;
                case 49:
                    goto switchD_100106fd7_caseD_30;
                case 50:
                    goto switchD_100106fd7_caseD_31;
                case 51:
                    goto switchD_100106fd7_caseD_32;
                }
                break;
            }
            goto LAB_10010951a;
        case 11:
        switchD_100106fd7_caseD_b:
            psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
            bVar6 = *psVar15 != nullptr;
            if (bVar6) {
                SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(59, *pIVar19);
                local_88 = SuperShuffledPacketFactory(*local_100);
                pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
                bVar5 = field_8496.KeyHeld(107);
                pSVar12->p1<int>((unsigned int)bVar5);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                pPVar21->p2<int>((unsigned int)arg4);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pSVar18->SendClientMessage(*local_108);
                ExecuteOnClickNPCTrigger((unsigned int)arg4);
            }
            goto switchD_1001075cb_caseD_c;
        case 12:
            goto switchD_100106fd7_caseD_c;
        case 13:
            goto switchD_100106fd7_caseD_d;
        case 14:
            goto switchD_100106fd7_caseD_e;
        case 15:
        switchD_100106fd7_caseD_f:
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(54, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>(field_52364);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>((unsigned int)arg4);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_52356);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>(field_53220 + (unsigned int)arg1);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_53224 + (unsigned int)arg2);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p4<unsigned int>(field_52360);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            ExecuteOnClickObjTrigger(minimenuSubject);
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 16:
                goto switchD_100106fd7_caseD_10;
            case 17:
                goto switchD_100106fd7_caseD_11;
            case 18:
                goto switchD_100106fd7_caseD_12;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 16:
        switchD_100106fd7_caseD_10:
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(77, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>(field_53220 + (unsigned int)arg1);
            pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pSVar12->p1<int>((unsigned int)bVar5);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar8 = field_52344->GetTargetLinkObject();
            pSVar20->p2<int>(iVar8);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            iVar8 = field_52344->GetTargetSubinterfaceId();
            pSVar22->p2<int>(iVar8);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            iVar8 = field_52344->GetTargetComponent();
            pSVar20->p4<unsigned int>(iVar8);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_53224 + (unsigned int)arg2);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>((unsigned int)arg4);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            ExecuteOnClickObjTrigger(minimenuSubject);
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
            case 16:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 17:
                goto switchD_100106fd7_caseD_11;
            case 18:
                goto switchD_100106fd7_caseD_12;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 17:
        switchD_100106fd7_caseD_11:
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(28, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>((unsigned int)arg4);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>(field_53220 + (unsigned int)arg1);
            pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pSVar12->p1<int>((unsigned int)bVar5);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_53224 + (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            ExecuteOnClickObjTrigger(minimenuSubject);
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
            case 16:
            case 17:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 18:
                goto switchD_100106fd7_caseD_12;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 18:
        switchD_100106fd7_caseD_12:
            uVar3 = (unsigned int)arg2;
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(50, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_53224 + uVar3);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>(field_53220 + (unsigned int)arg1);
            pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pSVar12->p1<int>((unsigned int)bVar5);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>((unsigned int)arg4);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            ExecuteOnClickObjTrigger(minimenuSubject);
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
            case 16:
            case 17:
            case 18:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 19:
        switchD_100106fd7_caseD_13:
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(25, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>(field_53224 + (unsigned int)arg2);
            pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pSVar12->p1<int>((unsigned int)bVar5);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>((unsigned int)arg4);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>(field_53220 + (unsigned int)arg1);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            ExecuteOnClickObjTrigger(minimenuSubject);
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 20:
        switchD_100106fd7_caseD_14:
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(44, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>(field_53220 + (unsigned int)arg1);
            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
            pSVar20->p2<int>(field_53224 + (unsigned int)arg2);
            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
            pSVar12->p2<int>((unsigned int)arg4);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            ExecuteOnClickObjTrigger(minimenuSubject);
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 21:
        switchD_100106fd7_caseD_15:
            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(71, *pIVar19);
            local_88 = SuperShuffledPacketFactory(*local_100);
            pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
            pSVar22->p2<int>(field_53220 + (unsigned int)arg1);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>(field_53224 + (unsigned int)arg2);
            pSVar12 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar5 = field_8496.KeyHeld(107);
            pSVar12->p1<int>((unsigned int)bVar5);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
            pPVar21->p2<int>((unsigned int)arg4);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            ExecuteOnClickObjTrigger(minimenuSubject);
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 22:
            goto switchD_100106fd7_caseD_16;
        case 23:
            cVar7 = ifType.operator_cast_to_bool();
            if (cVar7) {
                lVar17 = ifType.operator->();
                if (0 < *(int*)(lVar17 + 20)) {
                    lVar17 = ifType.operator->();
                    cVar7 = ClientButton(*(int*)(lVar17 + 20));
                    if (!cVar7)
                        goto LAB_100107303;
                }
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(52, *pIVar19);
                local_100->p4<int>((unsigned long)(unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pSVar18->SendClientMessage(*local_108);
            }
        LAB_100107303:
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
                goto switchD_100106fd7_caseD_f;
            case 16:
                goto switchD_100106fd7_caseD_10;
            case 17:
                goto switchD_100106fd7_caseD_11;
            case 18:
                goto switchD_100106fd7_caseD_12;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 23:
            case 24:
            case 26:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 25:
                goto switchD_100106fd7_caseD_19;
            case 27:
                goto switchD_100106fd7_caseD_1b;
            case 28:
                goto switchD_100106fd7_caseD_1c;
            case 29:
                goto switchD_100106fd7_caseD_1d;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            default:
                if (arg1_00 == 1001)
                    goto switchD_10010714f_caseD_3e9;
            }
            goto switchD_10010731b_caseD_17;
        case 24:
            cVar7 = ifType.operator_cast_to_bool();
            if (!cVar7) {
                return;
            }
            field_52344->EndTargetMode();
            this_00 = field_52344;
            iVar25 = GetActive(ifType);
            iVar25 = rs2lib::ServerActive::TargetMask(iVar25);
            this_00->EnterTargetMode((unsigned int)arg2, (unsigned int)arg1, iVar25,
                                     *(int*)((long)&minimenuSubject.field_48 + 4));
            field_52352 = 0;
            TargetVerb((ReturnValue*)local_108, this, ifType);
            cVar7 = local_108->empty();
            if (cVar7) {
                *local_108 = ((eastl::string*)&constants::text::null);
            }
            local_88 = eastl::string();
            pcVar24 = (char*)ifType.operator->();
            if (*pcVar24 == '\0') {
                local_1a0 = StringConstants::TAG_COLOUR(65280);
                ifType.operator->();
                local_148 + local_1a0;
                local_180 = StringConstants::TAG_COLOUR(16777215);
                local_128 + local_148;
                local_88 = &local_128;
                this_02 = &local_1a0;
            } else {
                lVar17 = ifType.operator->();
                local_148 = StringConstants::TAG_COLOUR(16777215);
                local_128 + (*((lVar17 + 704)));
                local_88 = &local_128;
                this_02 = &local_148;
            }
            this_02->~basic_string();
            field_52344->SetTargetStrings(*local_108, local_88);
            return;
        case 25:
        switchD_100106fd7_caseD_19:
            CloseModal();
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
                goto switchD_100106fd7_caseD_f;
            case 16:
                goto switchD_100106fd7_caseD_10;
            case 17:
                goto switchD_100106fd7_caseD_11;
            case 18:
                goto switchD_100106fd7_caseD_12;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 23:
            case 24:
            case 25:
            case 26:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 27:
                goto switchD_100106fd7_caseD_1b;
            case 28:
                goto switchD_100106fd7_caseD_1c;
            case 29:
                goto switchD_100106fd7_caseD_1d;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                switch (arg1_00) {
                case 1001:
                    goto switchD_10010714f_caseD_3e9;
                case 1002:
                    goto switchD_10010714f_caseD_3ea;
                case 1003:
                    goto switchD_10010714f_caseD_3eb;
                case 1004:
                    goto switchD_10010714f_caseD_3ec;
                }
            }
            break;
        case 26:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
            break;
        case 27:
        switchD_100106fd7_caseD_1b:
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(52, *pIVar19);
            local_100->p4<int>((unsigned long)(unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            cVar7 = ifType.operator_cast_to_bool();
            if (cVar7) {
                lVar17 = ifType.operator->();
                cVar7 = ((lVar17 + 1792))->empty();
                if (!cVar7) {
                    lVar17 = ifType.operator->();
                    pAVar10 = (Array<int>*)(*((lVar17 + 1792)))[0];
                    piVar16 = (int*)(*pAVar10)[0];
                    if (*piVar16 == 5) {
                        lVar17 = ifType.operator->();
                        pAVar10 = (Array<int>*)(*((lVar17 + 1792)))[0];
                        piVar16 = (int*)(*pAVar10)[1];
                        iVar8 = *piVar16;
                        piVar16 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)iVar8];
                        iVar9 = *piVar16;
                        piVar16 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)iVar8];
                        *piVar16 = 1 - iVar9;
                        ClientVar(iVar8);
                    }
                }
            }
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
                goto switchD_100106fd7_caseD_f;
            case 16:
                goto switchD_100106fd7_caseD_10;
            case 17:
                goto switchD_100106fd7_caseD_11;
            case 18:
                goto switchD_100106fd7_caseD_12;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
                break;
            case 28:
                goto switchD_100106fd7_caseD_1c;
            case 29:
                goto switchD_100106fd7_caseD_1d;
            default:
                if (arg1_00 == 1001)
                    goto switchD_10010714f_caseD_3e9;
            }
            goto switchD_10010746a_caseD_16;
        case 28:
        switchD_100106fd7_caseD_1c:
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pIVar19 = pSVar18->GetOutgoingEncryption();
            *local_108 = shared::ClientMessage::MakeClientMessage(52, *pIVar19);
            local_100->p4<int>((unsigned long)(unsigned int)arg2);
            pSVar18 = (ServerConnection*)field_19120.operator->();
            pSVar18->SendClientMessage(*local_108);
            cVar7 = ifType.operator_cast_to_bool();
            if (cVar7) {
                lVar17 = ifType.operator->();
                cVar7 = ((lVar17 + 1792))->empty();
                if (!cVar7) {
                    lVar17 = ifType.operator->();
                    pAVar10 = (Array<int>*)(*((lVar17 + 1792)))[0];
                    piVar16 = (int*)(*pAVar10)[0];
                    if (*piVar16 == 5) {
                        lVar17 = ifType.operator->();
                        pAVar10 = (Array<int>*)(*((lVar17 + 1792)))[0];
                        piVar16 = (int*)(*pAVar10)[1];
                        iVar8 = *piVar16;
                        piVar16 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)iVar8];
                        iVar9 = *piVar16;
                        lVar17 = ifType.operator->();
                        piVar16 = (int*)(*((lVar17 + 1840)))[0];
                        if (iVar9 != *piVar16) {
                            lVar17 = ifType.operator->();
                            puVar11 = (uint32_t*)(*((lVar17 + 1840)))[0];
                            uVar1 = *puVar11;
                            puVar11 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_var))[(long)iVar8];
                            *puVar11 = uVar1;
                            ClientVar(iVar8);
                        }
                    }
                }
            }
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
            case 13:
            case 14:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
                break;
            case 15:
                goto switchD_100106fd7_caseD_f;
            case 16:
                goto switchD_100106fd7_caseD_10;
            case 17:
                goto switchD_100106fd7_caseD_11;
            case 18:
                goto switchD_100106fd7_caseD_12;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 29:
                goto switchD_100106fd7_caseD_1d;
            default:
                if (arg1_00 == 1001)
                    goto switchD_10010714f_caseD_3e9;
            }
        switchD_1001075cb_caseD_c:
            if (1001 < (int)arg1_00)
                goto LAB_10010951a;
            switch (arg1_00) {
            case 13:
            switchD_100106fd7_caseD_c:
                psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
                bVar6 = *psVar15 != nullptr;
                if (bVar6) {
                    SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pIVar19 = pSVar18->GetOutgoingEncryption();
                    *local_108 = shared::ClientMessage::MakeClientMessage(35, *pIVar19);
                    local_88 = SuperShuffledPacketFactory(*local_100);
                    pSVar20 = (ShuffledPacket4*)local_88.HeapBeginPtr();
                    bVar5 = field_8496.KeyHeld(107);
                    pSVar20->p1<int>((unsigned int)bVar5);
                    pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    pSVar12->p2<int>((unsigned int)arg4);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pSVar18->SendClientMessage(*local_108);
                    ExecuteOnClickNPCTrigger((unsigned int)arg4);
                }
                if (1001 < (int)arg1_00)
                    goto LAB_10010951a;
                switch (arg1_00) {
                case 14:
                    goto switchD_100106fd7_caseD_d;
                case 15:
                    goto switchD_100106fd7_caseD_e;
                case 23:
                    goto switchD_100106fd7_caseD_16;
                case 44:
                    goto switchD_100106fd7_caseD_2b;
                case 45:
                    goto switchD_100106fd7_caseD_2c;
                case 46:
                    goto switchD_100106fd7_caseD_2d;
                case 47:
                    goto switchD_100106fd7_caseD_2e;
                case 48:
                    goto switchD_100106fd7_caseD_2f;
                case 49:
                    goto switchD_100106fd7_caseD_30;
                case 50:
                    goto switchD_100106fd7_caseD_31;
                case 51:
                    goto switchD_100106fd7_caseD_32;
                }
                break;
            case 14:
            switchD_100106fd7_caseD_d:
                psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                local_88 = shared_ptr(psVar13);
                bVar6 = local_88 != nullptr;
                if (bVar6) {
                    SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pIVar19 = pSVar18->GetOutgoingEncryption();
                    *local_108 = shared::ClientMessage::MakeClientMessage(51, *pIVar19);
                    local_128 = SuperShuffledPacketFactory(*local_100);
                    pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    pSVar12->p4<unsigned int>(field_52360);
                    pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    pSVar20->p2<int>(field_52364);
                    pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    pSVar20->p2<int>(field_52356);
                    pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    pSVar20->p2<int>((unsigned int)arg4);
                    pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128.HeapBeginPtr();
                    bVar5 = field_8496.KeyHeld(107);
                    pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pSVar18->SendClientMessage(*local_108);
                    ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                }
                if (1001 < (int)arg1_00)
                    goto LAB_10010951a;
                switch (arg1_00) {
                case 15:
                    goto switchD_100106fd7_caseD_e;
                case 23:
                    goto switchD_100106fd7_caseD_16;
                case 44:
                    goto switchD_100106fd7_caseD_2b;
                case 45:
                    goto switchD_100106fd7_caseD_2c;
                case 46:
                    goto switchD_100106fd7_caseD_2d;
                case 47:
                    goto switchD_100106fd7_caseD_2e;
                case 48:
                    goto switchD_100106fd7_caseD_2f;
                case 49:
                    goto switchD_100106fd7_caseD_30;
                case 50:
                    goto switchD_100106fd7_caseD_31;
                case 51:
                    goto switchD_100106fd7_caseD_32;
                }
                break;
            case 15:
            switchD_100106fd7_caseD_e:
                psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                local_88 = shared_ptr(psVar13);
                bVar6 = local_88 != nullptr;
                if (bVar6) {
                    SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pIVar19 = pSVar18->GetOutgoingEncryption();
                    *local_108 = shared::ClientMessage::MakeClientMessage(58, *pIVar19);
                    local_128 = SuperShuffledPacketFactory(*local_100);
                    pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                    iVar25 = field_52344->GetTargetSubinterfaceId();
                    pSVar22->p2<int>(iVar25);
                    pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    iVar25 = field_52344->GetTargetLinkObject();
                    pSVar12->p2<int>(iVar25);
                    pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    iVar25 = field_52344->GetTargetComponent();
                    pSVar20->p4<unsigned int>(iVar25);
                    pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    pSVar12->p2<int>((unsigned int)arg4);
                    pSVar12 = (ShuffledPacket2*)local_128.HeapBeginPtr();
                    bVar5 = field_8496.KeyHeld(107);
                    pSVar12->p1<int>((unsigned int)bVar5);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pSVar18->SendClientMessage(*local_108);
                    ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                }
            switchD_10010746a_caseD_16:
                if (1001 < (int)arg1_00)
                    goto LAB_10010951a;
                switch (arg1_00) {
                case 23:
                    goto switchD_100106fd7_caseD_16;
                case 44:
                    goto switchD_100106fd7_caseD_2b;
                case 45:
                    goto switchD_100106fd7_caseD_2c;
                case 46:
                    goto switchD_100106fd7_caseD_2d;
                case 47:
                    goto switchD_100106fd7_caseD_2e;
                case 48:
                    goto switchD_100106fd7_caseD_2f;
                case 49:
                    goto switchD_100106fd7_caseD_30;
                case 50:
                    goto switchD_100106fd7_caseD_31;
                case 51:
                    goto switchD_100106fd7_caseD_32;
                }
                break;
            case 23:
            switchD_100106fd7_caseD_16:
                SetDeferredGroundOp(23, -1, (unsigned int)arg1, (unsigned int)arg2);
                switch (arg1_00) {
                case 44:
                    goto switchD_100106fd7_caseD_2b;
                case 45:
                    goto switchD_100106fd7_caseD_2c;
                case 46:
                    goto switchD_100106fd7_caseD_2d;
                case 47:
                    goto switchD_100106fd7_caseD_2e;
                }
                goto switchD_10010731b_caseD_17;
            case 44:
            switchD_100106fd7_caseD_2b:
                psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                local_88 = shared_ptr(psVar13);
                bVar6 = local_88 != nullptr;
                if (bVar6) {
                    SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pIVar19 = pSVar18->GetOutgoingEncryption();
                    *local_108 = shared::ClientMessage::MakeClientMessage(10, *pIVar19);
                    local_128 = SuperShuffledPacketFactory(*local_100);
                    pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                    pSVar22->p2<int>((unsigned int)arg4);
                    pSVar20 = (ShuffledPacket4*)local_128.HeapBeginPtr();
                    bVar5 = field_8496.KeyHeld(107);
                    pSVar20->p1<int>((unsigned int)bVar5);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pSVar18->SendClientMessage(*local_108);
                    ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                }
                if (1001 < (int)arg1_00)
                    goto LAB_10010951a;
                switch (arg1_00) {
                case 45:
                    goto switchD_100106fd7_caseD_2c;
                case 46:
                    goto switchD_100106fd7_caseD_2d;
                case 47:
                    goto switchD_100106fd7_caseD_2e;
                case 48:
                    goto switchD_100106fd7_caseD_2f;
                case 49:
                    goto switchD_100106fd7_caseD_30;
                case 50:
                    goto switchD_100106fd7_caseD_31;
                case 51:
                    goto switchD_100106fd7_caseD_32;
                }
                break;
            case 45:
            switchD_100106fd7_caseD_2c:
                psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                local_88 = shared_ptr(psVar13);
                bVar6 = local_88 != nullptr;
                if (bVar6) {
                    SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pIVar19 = pSVar18->GetOutgoingEncryption();
                    *local_108 = shared::ClientMessage::MakeClientMessage(31, *pIVar19);
                    local_128 = SuperShuffledPacketFactory(*local_100);
                    pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                    pSVar22->p2<int>((unsigned int)arg4);
                    pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128.HeapBeginPtr();
                    bVar5 = field_8496.KeyHeld(107);
                    pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pSVar18->SendClientMessage(*local_108);
                    ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                }
                if (1001 < (int)arg1_00)
                    goto LAB_10010951a;
                switch (arg1_00) {
                case 46:
                    goto switchD_100106fd7_caseD_2d;
                case 47:
                    goto switchD_100106fd7_caseD_2e;
                case 48:
                    goto switchD_100106fd7_caseD_2f;
                case 49:
                    goto switchD_100106fd7_caseD_30;
                case 50:
                    goto switchD_100106fd7_caseD_31;
                case 51:
                    goto switchD_100106fd7_caseD_32;
                }
                break;
            case 46:
            switchD_100106fd7_caseD_2d:
                psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                local_88 = shared_ptr(psVar13);
                bVar6 = local_88 != nullptr;
                if (bVar6) {
                    SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pIVar19 = pSVar18->GetOutgoingEncryption();
                    *local_108 = shared::ClientMessage::MakeClientMessage(63, *pIVar19);
                    local_128 = SuperShuffledPacketFactory(*local_100);
                    pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                    pSVar12->p2<int>((unsigned int)arg4);
                    pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128.HeapBeginPtr();
                    bVar5 = field_8496.KeyHeld(107);
                    pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pSVar18->SendClientMessage(*local_108);
                    ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                }
                if (1001 < (int)arg1_00)
                    goto LAB_10010951a;
                switch (arg1_00) {
                case 47:
                    goto switchD_100106fd7_caseD_2e;
                case 48:
                    goto switchD_100106fd7_caseD_2f;
                case 49:
                    goto switchD_100106fd7_caseD_30;
                case 50:
                    goto switchD_100106fd7_caseD_31;
                case 51:
                    goto switchD_100106fd7_caseD_32;
                }
                break;
            case 47:
            switchD_100106fd7_caseD_2e:
                psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                local_88 = shared_ptr(psVar13);
                bVar6 = local_88 != nullptr;
                if (bVar6) {
                    SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pIVar19 = pSVar18->GetOutgoingEncryption();
                    *local_108 = shared::ClientMessage::MakeClientMessage(66, *pIVar19);
                    local_128 = SuperShuffledPacketFactory(*local_100);
                    pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                    pSVar20->p2<int>((unsigned int)arg4);
                    pSVar22 = (ShuffledPacket3*)local_128.HeapBeginPtr();
                    bVar5 = field_8496.KeyHeld(107);
                    pSVar22->p1<int>((unsigned int)bVar5);
                    pSVar18 = (ServerConnection*)field_19120.operator->();
                    pSVar18->SendClientMessage(*local_108);
                    ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                }
            switchD_10010731b_caseD_17:
                if ((int)arg1_00 < 1002) {
                    switch (arg1_00) {
                    case 48:
                    switchD_100106fd7_caseD_2f:
                        psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                        local_88 = shared_ptr(psVar13);
                        bVar6 = local_88 != nullptr;
                        if (bVar6) {
                            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                            pSVar18 = (ServerConnection*)field_19120.operator->();
                            pIVar19 = pSVar18->GetOutgoingEncryption();
                            *local_108 = shared::ClientMessage::MakeClientMessage(13, *pIVar19);
                            local_128 = SuperShuffledPacketFactory(*local_100);
                            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                            pSVar20->p2<int>((unsigned int)arg4);
                            pSVar20 = (ShuffledPacket4*)local_128.HeapBeginPtr();
                            bVar5 = field_8496.KeyHeld(107);
                            pSVar20->p1<int>((unsigned int)bVar5);
                            pSVar18 = (ServerConnection*)field_19120.operator->();
                            pSVar18->SendClientMessage(*local_108);
                            ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                        }
                        if ((int)arg1_00 < 1002) {
                            if (arg1_00 == 49)
                                goto switchD_100106fd7_caseD_30;
                            goto LAB_10010952c;
                        }
                        goto LAB_10010951a;
                    case 49:
                    switchD_100106fd7_caseD_30:
                        psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                        local_88 = shared_ptr(psVar13);
                        bVar6 = local_88 != nullptr;
                        if (bVar6) {
                            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                            pSVar18 = (ServerConnection*)field_19120.operator->();
                            pIVar19 = pSVar18->GetOutgoingEncryption();
                            *local_108 = shared::ClientMessage::MakeClientMessage(48, *pIVar19);
                            local_128 = SuperShuffledPacketFactory(*local_100);
                            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                            pSVar20->p2<int>((unsigned int)arg4);
                            pSVar20 = (ShuffledPacket4*)local_128.HeapBeginPtr();
                            bVar5 = field_8496.KeyHeld(107);
                            pSVar20->p1<int>((unsigned int)bVar5);
                            pSVar18 = (ServerConnection*)field_19120.operator->();
                            pSVar18->SendClientMessage(*local_108);
                            ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                        }
                        if (1001 < (int)arg1_00)
                            goto LAB_10010951a;
                    LAB_10010952c:
                        if (arg1_00 == 50)
                            goto switchD_100106fd7_caseD_31;
                        if (arg1_00 == 51)
                            goto switchD_100106fd7_caseD_32;
                        break;
                    case 50:
                    switchD_100106fd7_caseD_31:
                        psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                        local_88 = shared_ptr(psVar13);
                        bVar6 = local_88 != nullptr;
                        if (bVar6) {
                            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                            pSVar18 = (ServerConnection*)field_19120.operator->();
                            pIVar19 = pSVar18->GetOutgoingEncryption();
                            *local_108 = shared::ClientMessage::MakeClientMessage(20, *pIVar19);
                            local_128 = SuperShuffledPacketFactory(*local_100);
                            pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                            pSVar12->p2<int>((unsigned int)arg4);
                            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128.HeapBeginPtr();
                            bVar5 = field_8496.KeyHeld(107);
                            pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
                            pSVar18 = (ServerConnection*)field_19120.operator->();
                            pSVar18->SendClientMessage(*local_108);
                            ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                        }
                        if ((int)arg1_00 < 1003) {
                            if (arg1_00 == 51)
                                goto switchD_100106fd7_caseD_32;
                        LAB_10010975e:
                            if (arg1_00 != 1002)
                                break;
                            goto switchD_10010714f_caseD_3ea;
                        }
                        goto LAB_1001097ed;
                    case 51:
                    switchD_100106fd7_caseD_32:
                        psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                        local_88 = shared_ptr(psVar13);
                        bVar6 = local_88 != nullptr;
                        if (bVar6) {
                            SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                            pSVar18 = (ServerConnection*)field_19120.operator->();
                            pIVar19 = pSVar18->GetOutgoingEncryption();
                            *local_108 = shared::ClientMessage::MakeClientMessage(61, *pIVar19);
                            local_128 = SuperShuffledPacketFactory(*local_100);
                            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128.HeapBeginPtr();
                            bVar5 = field_8496.KeyHeld(107);
                            pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
                            pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                            pSVar20->p2<int>((unsigned int)arg4);
                            pSVar18 = (ServerConnection*)field_19120.operator->();
                            pSVar18->SendClientMessage(*local_108);
                            ExecuteOnClickPlayerTrigger((unsigned int)arg4);
                        }
                    switchD_10010762e_caseD_17:
                        if (arg1_00 == 1004)
                            goto switchD_10010714f_caseD_3ec;
                        if (arg1_00 != 1003)
                            goto LAB_10010975e;
                        goto switchD_10010714f_caseD_3eb;
                    }
                } else {
                LAB_10010951a:
                    if (arg1_00 == 1002) {
                    switchD_10010714f_caseD_3ea:
                        pSVar18 = (ServerConnection*)field_19120.operator->();
                        pIVar19 = pSVar18->GetOutgoingEncryption();
                        *local_108 = shared::ClientMessage::MakeClientMessage(64, *pIVar19);
                        local_88 = SuperShuffledPacketFactory(*local_100);
                        pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                        pSVar22->p2<int>((unsigned int)arg4);
                        pCVar14 = (Client*)field_19120.operator->();
                        pCVar14->SendClientMessage(*local_108);
                        ExecuteOnClickLocTrigger(pCVar14, (unsigned int)arg4, minimenuSubject.field_40);
                    }
                LAB_1001097ed:
                    if (arg1_00 == 1003) {
                    switchD_10010714f_caseD_3eb:
                        psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
                        bVar6 = *psVar15 != nullptr;
                        if (bVar6) {
                            lVar17 = (*psVar15).operator->();
                            local_88 = shared_ptr((lVar17 + 1024));
                            lVar17 = local_88.operator->();
                            cVar7 = ((lVar17 + 488))->empty();
                            if (!cVar7) {
                                this_01 = (NpcType*)local_88.operator->();
                                *local_108 = this_01->GetMultiNpc();
                                local_88 = *local_108;
                            }
                            bVar6 = local_88 != nullptr;
                            if (bVar6) {
                                pSVar18 = (ServerConnection*)field_19120.operator->();
                                pIVar19 = pSVar18->GetOutgoingEncryption();
                                *local_108 = shared::ClientMessage::MakeClientMessage(65, *pIVar19);
                                local_128 = SuperShuffledPacketFactory(*local_100);
                                pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                                piVar16 = (int*)local_88.operator->();
                                pSVar20->p2<int>(*piVar16);
                                pSVar18 = (ServerConnection*)field_19120.operator->();
                                pSVar18->SendClientMessage(*local_108);
                                ExecuteOnClickNPCTrigger((unsigned int)arg4);
                            }
                        }
                    } else if (arg1_00 == 1004) {
                    switchD_10010714f_caseD_3ec:
                        WorldCoordFromBuildCoord((Client*)local_108, (int)this, 0, (unsigned int)arg1);
                        SendExamineObjV2(*local_108, (unsigned int)arg4);
                        ExecuteOnClickObjTrigger(minimenuSubject);
                        if (arg1_00 == 1003)
                            goto switchD_10010714f_caseD_3eb;
                    }
                }
                break;
            case 48:
                goto switchD_100106fd7_caseD_2f;
            case 49:
                goto switchD_100106fd7_caseD_30;
            case 50:
                goto switchD_100106fd7_caseD_31;
            case 51:
                goto switchD_100106fd7_caseD_32;
            }
            break;
        case 29:
        switchD_100106fd7_caseD_1d:
            objType = &field_52424;
            bVar6 = *objType == nullptr;
            if ((bVar6) && (bVar6 = ifType != nullptr, bVar6)) {
                PauseContinue((unsigned int)arg2, (unsigned int)arg1);
                *objType = ifType;
                ComponentUpdated(*objType);
            }
            switch (iVar25) {
            case 0:
                goto switchD_100106fd7_caseD_0;
            case 1:
                goto switchD_100106fd7_caseD_1;
            case 2:
                goto switchD_100106fd7_caseD_2;
            case 3:
                goto switchD_100106fd7_caseD_3;
            case 4:
                goto switchD_100106fd7_caseD_4;
            case 5:
                goto switchD_100106fd7_caseD_5;
            case 6:
                goto switchD_100106fd7_caseD_6;
            case 7:
                goto switchD_100106fd7_caseD_7;
            case 8:
                goto switchD_100106fd7_caseD_8;
            case 9:
                goto switchD_100106fd7_caseD_9;
            case 10:
                goto switchD_100106fd7_caseD_a;
            case 11:
                goto switchD_100106fd7_caseD_b;
            case 12:
                goto switchD_100106fd7_caseD_c;
            case 13:
                goto switchD_100106fd7_caseD_d;
            case 14:
                goto switchD_100106fd7_caseD_e;
            case 15:
                goto switchD_100106fd7_caseD_f;
            case 16:
                goto switchD_100106fd7_caseD_10;
            case 17:
                goto switchD_100106fd7_caseD_11;
            case 18:
                goto switchD_100106fd7_caseD_12;
            case 19:
                goto switchD_100106fd7_caseD_13;
            case 20:
                goto switchD_100106fd7_caseD_14;
            case 21:
                goto switchD_100106fd7_caseD_15;
            case 22:
                goto switchD_100106fd7_caseD_16;
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
                break;
            case 43:
                goto switchD_100106fd7_caseD_2b;
            case 44:
                goto switchD_100106fd7_caseD_2c;
            case 45:
                goto switchD_100106fd7_caseD_2d;
            case 46:
                goto switchD_100106fd7_caseD_2e;
            case 47:
                goto switchD_100106fd7_caseD_2f;
            case 48:
                goto switchD_100106fd7_caseD_30;
            case 49:
                goto switchD_100106fd7_caseD_31;
            case 50:
                goto switchD_100106fd7_caseD_32;
            default:
                if (arg1_00 == 1001)
                    goto switchD_10010714f_caseD_3e9;
            }
            goto switchD_10010762e_caseD_17;
        case 43:
            goto switchD_100106fd7_caseD_2b;
        case 44:
            goto switchD_100106fd7_caseD_2c;
        case 45:
            goto switchD_100106fd7_caseD_2d;
        case 46:
            goto switchD_100106fd7_caseD_2e;
        case 47:
            goto switchD_100106fd7_caseD_2f;
        case 48:
            goto switchD_100106fd7_caseD_30;
        case 49:
            goto switchD_100106fd7_caseD_31;
        case 50:
            goto switchD_100106fd7_caseD_32;
        default:
            switch (arg1_00) {
            case 1001:
            switchD_10010714f_caseD_3e9:
                uVar4 = (unsigned int)arg1;
                uVar3 = (unsigned int)arg2;
                SetPlayerDestination((unsigned int)arg1, (unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(36, *pIVar19);
                local_88 = SuperShuffledPacketFactory(*local_100);
                pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar22->p2<int>(field_53224 + uVar3);
                pSVar12 = (ShuffledPacket2*)ShuffledPacketFactory::p2_alt2();
                pSVar12->p2<int>(field_53220 + uVar4);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
                bVar5 = field_8496.KeyHeld(107);
                pPVar21->p1<shared::LoginProt::ID>((unsigned int)bVar5);
                pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                pSVar20->p2<int>((unsigned int)arg4);
                pCVar14 = (Client*)field_19120.operator->();
                pCVar14->SendClientMessage(*local_108);
                ExecuteOnClickLocTrigger(pCVar14, (unsigned int)arg4, minimenuSubject.field_40);
                if ((int)arg1_00 < 1002) {
                    switch (arg1_00) {
                    case 7:
                        goto switchD_100106fd7_caseD_6;
                    case 8:
                        goto switchD_100106fd7_caseD_7;
                    case 9:
                        goto switchD_100106fd7_caseD_8;
                    case 10:
                        goto switchD_100106fd7_caseD_9;
                    case 11:
                        goto switchD_100106fd7_caseD_a;
                    case 12:
                        goto switchD_100106fd7_caseD_b;
                    case 13:
                        goto switchD_100106fd7_caseD_c;
                    case 14:
                        goto switchD_100106fd7_caseD_d;
                    case 15:
                        goto switchD_100106fd7_caseD_e;
                    case 23:
                        goto switchD_100106fd7_caseD_16;
                    case 44:
                        goto switchD_100106fd7_caseD_2b;
                    case 45:
                        goto switchD_100106fd7_caseD_2c;
                    case 46:
                        goto switchD_100106fd7_caseD_2d;
                    case 47:
                        goto switchD_100106fd7_caseD_2e;
                    case 48:
                        goto switchD_100106fd7_caseD_2f;
                    case 49:
                        goto switchD_100106fd7_caseD_30;
                    case 50:
                        goto switchD_100106fd7_caseD_31;
                    case 51:
                        goto switchD_100106fd7_caseD_32;
                    }
                    break;
                }
                goto LAB_10010951a;
            case 1002:
                goto switchD_10010714f_caseD_3ea;
            case 1003:
                goto switchD_10010714f_caseD_3eb;
            case 1004:
                goto switchD_10010714f_caseD_3ec;
            default:
                break;
            }
        }
        if (arg1_00 == 1007) {
        LAB_10010999a:
            IfButtonX((unsigned int)arg4, ifType, minimenuSubject, *(int*)((long)&minimenuSubject.field_48 + 4));
            if (4 < arg1_00 - 1008) {
                switch (arg1_00) {
                case 1850:
                    goto switchD_1001099da_caseD_73a;
                case 1851:
                    goto switchD_1001099da_caseD_73b;
                case 1852:
                    goto switchD_1001099da_caseD_73c;
                case 1853:
                    goto switchD_1001099da_caseD_73d;
                case 1854:
                    goto switchD_1001099da_caseD_73e;
                default:
                    if (arg1_00 != 58)
                        goto switchD_100109bf9_default;
                    goto LAB_1001099e6;
                }
            }
            goto LAB_100109ba2;
        }
        if (arg1_00 == 58) {
        LAB_1001099e6:
            bVar6 = ifType != nullptr;
            if (bVar6) {
                lVar17 = ifType.operator->();
                cVar7 = ((lVar17 + 1336))->empty();
                if (!cVar7) {
                    new (local_108) HookReq();
                    (*((local_100 + 24))) = ifType;
                    local_d0 = (unsigned int)arg4;
                    local_b0 = minimenuSubject;
                    lVar17 = ifType.operator->();
                    *local_108 = (*((lVar17 + 1336)));
                    ScriptRunner::ExecuteScript(*local_108, 500000);
                }
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pIVar19 = pSVar18->GetOutgoingEncryption();
                *local_108 = shared::ClientMessage::MakeClientMessage(14, *pIVar19);
                local_88 = SuperShuffledPacketFactory(*local_100);
                pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                iVar25 = field_52344->GetTargetLinkObject();
                pSVar20->p2<int>(iVar25);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                pPVar21->p2<int>((unsigned int)arg1);
                pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                iVar25 = field_52344->GetTargetSubinterfaceId();
                pSVar22->p2<int>(iVar25);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)ShuffledPacketFactory::p2_alt2();
                pPVar21->p2<int>(*(unsigned int*)((long)&minimenuSubject.field_48 + 4));
                pSVar20 = (ShuffledPacket4*)ShuffledPacketFactory::p2_alt2();
                iVar25 = field_52344->GetTargetComponent();
                pSVar20->p4<unsigned int>(iVar25);
                pSVar22 = (ShuffledPacket3*)ShuffledPacketFactory::p2_alt2();
                pSVar22->p4<unsigned int>((unsigned int)arg2);
                pSVar18 = (ServerConnection*)field_19120.operator->();
                pSVar18->SendClientMessage(*local_108);
            }
        } else if (arg1_00 == 57)
            goto LAB_10010999a;
        switch (arg1_00) {
        case 1850:
        switchD_1001099da_caseD_73a:
            psVar15 = &field_55272[(long)(int)(unsigned int)arg4];
            bVar6 = *psVar15 != nullptr;
            if (bVar6) {
                ScriptRunner::SetActiveNPC((unsigned int)arg4);
                new (local_108) HookReq();
                local_108->set_max_size(1, 3);
                local_88 = HookArg((unsigned int)arg1);
                pHVar23 = (HookArg*)(*local_108)[0];
                *pHVar23 = local_88;
                local_8c = 30;
                ScriptRunner::ExecuteScript(*local_108, 500000);
            }
            switch (arg1_00) {
            case 1851:
                goto switchD_1001099da_caseD_73b;
            case 1852:
                goto switchD_1001099da_caseD_73c;
            case 1853:
                goto switchD_1001099da_caseD_73d;
            case 1854:
                goto switchD_1001099da_caseD_73e;
            default:
                goto switchD_100109bf9_default;
            }
        case 1851:
        switchD_1001099da_caseD_73b:
            new (local_108) LocInfo(minimenuSubject.field_40);
            ScriptRunner::SetActiveLoc(*local_108);
            new (local_108) HookReq();
            local_108->set_max_size(1, 3);
            local_88 = HookArg((unsigned int)arg1);
            pHVar23 = (HookArg*)(*local_108)[0];
            *pHVar23 = local_88;
            local_8c = 31;
            ScriptRunner::ExecuteScript(*local_108, 500000);
            if (arg1_00 == 1852)
                goto switchD_1001099da_caseD_73c;
            goto joined_r0x000100109f1d;
        case 1852:
        switchD_1001099da_caseD_73c:
            local_150 = (unsigned long)arg1_00;
            iVar25 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(minimenuSubject.field_40);
            iVar8 = dash3d::MousePickingHelper::GetEntityXFromTypecode(minimenuSubject.field_40);
            iVar9 = dash3d::MousePickingHelper::GetEntityZFromTypecode(minimenuSubject.field_40);
            local_148 = rs2lib::CoordGrid(iVar25, iVar8, iVar9);
            iVar25 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(minimenuSubject.field_40);
            FindClientObj(&local_128, this, &local_148, iVar25, *(int*)&minimenuSubject.field_48);
            local_160 = weak_ptr(local_128);
            local_148.SetActiveObj(local_160, clientObj);
            new (local_108) HookReq();
            uVar2 = local_150;
            local_108->set_max_size(1, 3);
            local_88 = HookArg((unsigned int)arg1);
            pHVar23 = (HookArg*)(*local_108)[0];
            *pHVar23 = local_88;
            local_8c = 32;
            ScriptRunner::ExecuteScript(*local_108, 500000);
            arg1_00 = (unsigned int)uVar2;
        joined_r0x000100109f1d:
            if (arg1_00 == 1853) {
            switchD_1001099da_caseD_73d:
                psVar13 = &field_19216[(long)(int)(unsigned int)arg4];
                local_128 = shared_ptr(psVar13);
                bVar6 = local_128 != nullptr;
                if (bVar6) {
                    ScriptRunner::SetActivePlayer((unsigned int)arg4);
                    new (local_108) HookReq();
                    local_108->set_max_size(1, 3);
                    local_88 = HookArg((unsigned int)arg1);
                    pHVar23 = (HookArg*)(*local_108)[0];
                    *pHVar23 = local_88;
                    local_8c = 33;
                    ScriptRunner::ExecuteScript(*local_108, 500000);
                }
            }
            if (arg1_00 != 1854)
                goto switchD_100109bf9_default;
        switchD_1001099da_caseD_73e:
            SetDeferredGroundOp(1854, (unsigned int)arg4, (unsigned int)arg1, (unsigned int)arg2);
        switchD_100109bf9_default:
            if (field_52352 != 0) {
                field_52352 = 0;
                ComponentUpdated(ifType);
            }
            cVar7 = field_52344->GetTargetMode();
            if (cVar7) {
                field_52344->EndTargetMode();
            }
            return;
        case 1853:
            goto switchD_1001099da_caseD_73d;
        case 1854:
            goto switchD_1001099da_caseD_73e;
        default:
            if (4 < arg1_00 - 1008)
                goto switchD_100109bf9_default;
        LAB_100109ba2:
            new (local_108) rs2lib::CoordGrid((unsigned int)arg1);
            local_88 = rs2lib::CoordGrid((unsigned int)arg2);
            m_pWorldmap->OpMapElement(arg1_00, (unsigned int)arg4, *local_108, local_88);
            switch (arg1_00) {
            case 1850:
                goto switchD_1001099da_caseD_73a;
            case 1851:
                goto switchD_1001099da_caseD_73b;
            case 1852:
                goto switchD_1001099da_caseD_73c;
            case 1853:
                goto switchD_1001099da_caseD_73d;
            case 1854:
                goto switchD_1001099da_caseD_73e;
            default:
                goto switchD_100109bf9_default;
            }
        }
    }

    // 0x10010bfe0
    unsigned long Client::ClientButton(int arg1) {
        PlayerModel* pPVar1;
        ServerConnection* pSVar2;
        Isaac* isaac;
        uint8_t* unaff_RBX;
        unsigned long uVar3;
        uint8_t local_68[64];

        if (arg1 == 205) {
            if (field_54760 != '\0') {
                (logger::default_logger())
                    ->Log(false, 5,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                          "client_UI.cpp",
                          5567, "Disconnects for the next 5 secs will be assumed to be deliberate");
            }
            field_54156 = 250;
        } else {
            if (arg1 - 300U < 14) {
                pPVar1 = (PlayerModel*)field_2508968.operator->();
                pPVar1->IdkChangePart((int)(arg1 - 300U) / 2, (bool)((uint8_t)arg1 & 1));
            }
            if (arg1 - 314U < 10) {
                pPVar1 = (PlayerModel*)field_2508968.operator->();
                pPVar1->IdkChangeColour((int)(arg1 - 314U) / 2, (bool)((uint8_t)arg1 & 1));
            }
            if (arg1 != 326) {
                if (arg1 == 325) {
                    pPVar1 = (PlayerModel*)field_2508968.operator->();
                    pPVar1->IdkChangeBodytype(1);
                } else if (arg1 == 324) {
                    pPVar1 = (PlayerModel*)field_2508968.operator->();
                    uVar3 = 0;
                    pPVar1->IdkChangeBodytype(0);
                    goto LAB_10010c177;
                }
                uVar3 = 0;
                goto LAB_10010c177;
            }
            unaff_RBX = &field_19120;
            pSVar2 = (ServerConnection*)(*unaff_RBX).operator->();
            isaac = pSVar2->GetOutgoingEncryption();
            *local_68 = shared::ClientMessage::MakeClientMessage(60, *isaac);
            pPVar1 = (PlayerModel*)field_2508968.operator->();
            pPVar1->IdkSaveDesign(*((local_68 + 8)));
            pSVar2 = (ServerConnection*)(*unaff_RBX).operator->();
            pSVar2->SendClientMessage(*local_68);
        }
        uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
    LAB_10010c177:
        return uVar3 & 4294967295;
    }

} // namespace jag::oldscape
