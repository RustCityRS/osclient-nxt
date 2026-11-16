// projects/osclient/client_UI.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "client.h"

namespace jag::oldscape {
    // 0x1000b7810, 80 bytes, placed by class name and debug map
    // Client::SetMinimapZoom(int)
    void Client::SetMinimapZoom(int param_1) {
        Minimap* this_00;
        world* pwVar1;

        this_00 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
        pwVar1 = (world*)(&field_19184)->get();
        this_00->SetZoom(pwVar1, param_1, m_playerLevel);
    }

    // 0x1000b7890, 32 bytes, placed by class name and debug map
    // Client::RedrawMinimap()
    void Client::RedrawMinimap() {
        Minimap* this_00;

        this_00 = (Minimap*)std::unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(
            (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&field_8152);
        this_00->Redraw();
    }

    // 0x1000b7970, 256 bytes, placed by class name and debug map
    // Client::FindClientObj(rs2lib::CoordGrid const&, int, int)
    Client* Client::FindClientObj(CoordGrid* param_1, int param_2, int param_3) {
        Client* pCVar1;
        bool bVar3;
        shared_ptr* this_00;
        long lVar4;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 in_register_00000014;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        int in_R8D;
        undefined8 local_50;
        undefined8 local_48;
        int local_34;

        if (ClientConstants::IsCoordInBuildArea((CoordGrid*)CONCAT44(in_register_00000014, param_2)) != '\0') {
            local_34 = in_R8D;
            GetObjectsOnTile((Client*)param_1, (CoordGrid*)CONCAT44(in_register_00000014, param_2));
            local_50 = eastl::list<console::Line, eastl::allocator>::begin();
            local_48 = eastl::list<console::Line, eastl::allocator>::end();
            bVar3 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48,
                                      (hashtable_iterator_base*)CONCAT44(extraout_var, extraout_EDX));
            if (bVar3) {
                do {
                    this_00 =
                        (shared_ptr*)eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)&local_50);
                    lVar4 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_00);
                    if ((*(int*)(lVar4 + 24) == param_3) &&
                        (lVar4 = shared_ptr<ClientObj>::operator->((shared_ptr<ClientObj>*)this_00),
                         pCVar1 = (Client*)this, *(int*)(lVar4 + 28) == local_34)) {
                        new ((Client*)this) shared_ptr<dash3d::Decor>(this_00);
                        return pCVar1;
                    }
                    eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)&local_50);
                    bVar3 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48,
                                              (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
                } while (bVar3);
            }
            this = (Client*)this;
        }
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x1000f1610, 1248 bytes, placed by __FILE__ string
    // Client::ExecuteHardcodedMouseEvent(InterfaceMouseEvent const&)
    void Client::ExecuteHardcodedMouseEvent(InterfaceMouseEvent* param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        long lVar7;
        shared_ptr* psVar8;
        long lVar9;
        IfType* pIVar10;
        CRMViewHandler* this_01;
        shared_ptr<ApplicationContext>* this_02;
        long* plVar11;
        undefined8 uVar12;
        InputField* pIVar13;
        ServerConnection* pSVar14;
        ShuffledPacket3* this_03;
        ShuffledPacket4* pSVar15;
        ShuffledPacket2* this_04;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_05;
        undefined8 uVar16;
        char* pcVar17;
        CRMViewHandler aCStackY_e8a8[128];
        shared_ptr in_stack_ffffffffffffff58;
        undefined1 auStack_96[46];
        shared_ptr<dash3d::Decor> local_68[16];
        shared_ptr<dash3d::Decor> local_58[16];
        InputField* local_48;
        SuperShuffledPacketFactory local_40;

        this_00 = &param_1->field_16;
        lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
        if (-1 < *(int*)(lVar7 + 8)) {
            shared_ptr<dash3d::Decor>::shared_ptr(local_68, (shared_ptr*)this_00);
            psVar8 = (shared_ptr*)GetInterfaceLayer(this, in_stack_ffffffffffffff58);
            local_68->~shared_ptr();
            bVar1 = operator==(psVar8, (_func_decltype_nullptr*)0);
            if (bVar1) {
                return;
            }
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar8);
            cVar2 = ((lVar7 + 2000))->empty();
            if (cVar2 != '\0') {
                return;
            }
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            iVar5 = *(int*)(lVar7 + 8);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar8);
            iVar4 = ((lVar7 + 2000))->end();
            if (iVar4 <= iVar5) {
                return;
            }
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar8);
            lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            psVar8 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar7 + 2000), (long)*(int*)(lVar9 + 8));
            bVar1 = operator!=(psVar8, (shared_ptr*)this_00);
            if (bVar1) {
                return;
            }
        }
        lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
        iVar5 = *(int*)(lVar7 + 12);
        iVar4 = param_1->field_8;
        pIVar10 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
        if ((iVar5 == 11) && (iVar4 == 0)) {
            this_01 = (CRMViewHandler*)pIVar10->GetCRMViewHandler();
            if (this_01 != (CRMViewHandler*)0) {
                pIVar10 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                cVar2 = pIVar10->IsInsideCRMClickBounds(*(int*)&param_1->field_0, *(int*)((long)&param_1->field_0 + 4),
                                                        0, 0);
                if (cVar2 != '\0') {
                    iVar5 = this_01->GetActionType();
                    if (iVar5 == 1) {
                        iVar5 = GetActive(this, (shared_ptr*)this_00);
                        cVar2 = rs2lib::ServerActive::IsCRMTarget(iVar5);
                        if (cVar2 == '\0') {
                            uVar12 = logger::default_logger();
                            pcVar17 = "Unable to perform IF_CRMVIEW_OP - Make sure to use if_setevents";
                            uVar16 = 3576;
                        } else {
                            cVar2 = this_01->GeneratePayloadData();
                            if (cVar2 != '\0') {
                                pSVar14 =
                                    (ServerConnection*)std::
                                        unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                            (unique_ptr<ServerConnection,
                                                        std::default_delete<ServerConnection>>*)&field_19120);
                                uVar12 = pSVar14->GetOutgoingEncryption();
                                ((aCStackY_e8a8 + 128))->MakeClientMessage(95, uVar12);
                                new (&local_40) SuperShuffledPacketFactory((SuperPacket*)&aCStackY_e8a8[128].field_8);
                                this_03 = (ShuffledPacket3*)local_40.p2_alt2();
                                uVar6 = this_01->GetPayload(1);
                                ShuffledPacket3::p4<unsigned int>(this_03, uVar6);
                                pSVar15 = (ShuffledPacket4*)local_40.p2_alt2();
                                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                                ShuffledPacket4::p4<unsigned int>(pSVar15, *(uint*)(lVar7 + 4));
                                this_04 = (ShuffledPacket2*)local_40.p2_alt2();
                                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                                ShuffledPacket2::p2<int>(this_04, *(int*)(lVar7 + 8));
                                this_05 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_40.p2_alt2();
                                iVar5 = this_01->GetServerTarget();
                                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(this_05, iVar5);
                                pSVar15 = (ShuffledPacket4*)local_40.p2_alt2();
                                uVar6 = this_01->GetPayload(2);
                                ShuffledPacket4::p4<unsigned int>(pSVar15, uVar6);
                                pSVar15 = (ShuffledPacket4*)local_40.p2_alt2();
                                uVar6 = this_01->GetPayload(0);
                                ShuffledPacket4::p4<unsigned int>(pSVar15, uVar6);
                                pSVar14 =
                                    (ServerConnection*)std::
                                        unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                            (unique_ptr<ServerConnection,
                                                        std::default_delete<ServerConnection>>*)&field_19120);
                                pSVar14->SendClientMessage((ClientMessage*)(aCStackY_e8a8 + 128));
                                ((aCStackY_e8a8 + 128))->~ClientMessage();
                                return;
                            }
                            uVar12 = logger::default_logger();
                            pcVar17 = "Unable to perform IF_CRMVIEW_OP - Invalid payload data";
                            uVar16 = 3580;
                        }
                    } else {
                        if (iVar5 != 0) {
                            return;
                        }
                        this_02 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)(this);
                        plVar11 = (long*)shared_ptr<ApplicationContext>::operator->(this_02);
                        (aCStackY_e8a8 + 128)->GetEndpointURL();
                        cVar2 = (**(code**)(*plVar11 + 192))(plVar11, aCStackY_e8a8 + 128, 1);
                        ((aCStackY_e8a8 + 128))->~basic_string();
                        if (cVar2 != '\0') {
                            return;
                        }
                        uVar12 = logger::default_logger();
                        pcVar17 = "Unable to open CRM URL";
                        uVar16 = 3570;
                    }
                    logger::Logger::Log(uVar12, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/client_UI.cpp",
                                        uVar16, pcVar17);
                }
            }
        } else if (pIVar10->field_12 == 12) {
            pIVar10 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            pIVar13 = (InputField*)pIVar10->GetInputField();
            cVar2 = pIVar13->CanHaveFocus();
            if (cVar2 != '\0') {
                if (param_1->field_8 == 1) {
                    pIVar10 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    pIVar13 = (InputField*)pIVar10->GetInputField();
                    pIVar13->MouseHeld(*(int*)&param_1->field_0, *(int*)((long)&param_1->field_0 + 4));
                } else if (param_1->field_8 == 0) {
                    shared_ptr<dash3d::Decor>::shared_ptr(local_58, (shared_ptr*)this_00);
                    (field_19072, in_stack_ffffffffffffff58)->SetFocusedComponent();
                    local_58->~shared_ptr();
                    pIVar10 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    pIVar13 = (InputField*)pIVar10->GetInputField();
                    pIVar13->SetFocus(true);
                    pIVar10 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    local_48 = (InputField*)pIVar10->GetInputField();
                    iVar5 = *(int*)&param_1->field_0;
                    iVar4 = *(int*)((long)&param_1->field_0 + 4);
                    bVar1 = (bool)(&field_8496, 107)->KeyHeld();
                    bVar3 = (bool)(&field_8496, 81)->KeyHeld();
                    local_48->MouseDown(iVar5, iVar4, bVar1, bVar3);
                }
            }
        }
    }

    // 0x1000f1b40, 128 bytes, placed by class name and neighbouring functions
    // Client::GlWorldMap()
    void Client::GlWorldMap() {
        int iVar1;
        int iVar2;
        uint uVar3;
        Worldmap* this_00;
        long lVar4;

        this_00 = m_pWorldmap;
        if (this_00 != (Worldmap*)0) {
            iVar1 = m_playerLevel;
            lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
            iVar2 = *(int*)(lVar4 + 24);
            uVar3 = field_53220;
            lVar4 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)field_52016);
            this_00->UpdateMaparea(iVar1, (iVar2 >> 7) + uVar3, (*(int*)(lVar4 + 28) >> 7) + field_53224, false);
            m_pWorldmap->Load();
        }
    }

    // 0x1000f1bc0, 2384 bytes, placed by __FILE__ string
    // Client::LoopIf3Drag()
    void Client::LoopIf3Drag() {
        undefined1* this_00;
        undefined1* puVar1;
        int iVar2;
        Minimenu* this_01;
        char cVar3;
        bool bVar4;
        undefined4 uVar5;
        int iVar6;
        undefined4 uVar7;
        undefined8 uVar8;
        long lVar9;
        undefined4* puVar10;
        GameOptions* this_02;
        shared_ptr* psVar11;
        ServerConnection* pSVar12;
        ShuffledPacket3* this_03;
        ShuffledPacket2* this_04;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar13;
        ShuffledPacket4* pSVar14;
        undefined1 local_140[32];
        shared_ptr<rs2lib::IfType> local_120[32];
        shared_ptr<rs2lib::IfType> local_100[64];
        undefined4 local_c0[2];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_b8[8];
        undefined4 local_b0[2];
        undefined4 local_a8[2];
        undefined4 local_a0[2];
        undefined4 local_98[2];
        undefined4 local_90[2];
        undefined4 local_88[2];
        undefined4 local_80[2];
        undefined4 local_78[2];
        SuperShuffledPacketFactory local_70;
        undefined4 local_60[2];
        undefined1 local_58[16];
        undefined4 local_48[2];
        undefined4 local_40[2];
        undefined4 local_38[2];

        cVar3 = field_52344->IsOpen();
        if (cVar3 != '\0') {
            return;
        }
        if (field_54760 != '\0') {
            uVar8 = logger::default_logger();
            lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)field_2505104);
            logger::Logger::Log(
                uVar8, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                3687, "loop_if3drag: %i", *(undefined4*)(lVar9 + 88));
        }
        this_00 = field_2505104;
        ComponentUpdated(this, (shared_ptr*)this_00);
        puVar10 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8560, 0);
        local_40[0] = *puVar10;
        puVar10 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
            (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8576, 0);
        local_38[0] = *puVar10;
        CoordType<UICoordSpecializer>::operator-=((CoordType<UICoordSpecializer>*)local_40, field_2505136);
        CoordType<UICoordSpecializer>::operator-=((CoordType<UICoordSpecializer>*)local_38, field_2505140);
        local_140._0_4_ =
            CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_40, field_2505164);
        puVar1 = &field_2505120;
        lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_c0, *(int*)(lVar9 + 96));
        local_58._0_4_ =
            CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)local_140, local_c0[0]);
        local_140._0_4_ =
            CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_38, field_2505168);
        lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_b8, *(int*)(lVar9 + 100));
        local_58._8_4_ = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)local_140);
        iVar6 = field_2505188;
        field_2505188 = iVar6 + 1;
        iVar2 = field_8504;
        if (iVar2 == 1) {
            return;
        }
        if (iVar2 == 8) {
            if (field_2505184 == '\0') {
                cVar3 = IsMiniMenuOpenRequired(this);
                this_01 = field_52344;
                if (cVar3 == '\0') {
                    iVar6 = this_01->GetNumEntries();
                    if (0 < iVar6) {
                        uVar5 = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)&field_2505136,
                                                                         field_2505176);
                        uVar7 = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)&field_2505140,
                                                                         field_2505180);
                        DoStashed(this, uVar5, uVar7);
                    }
                } else {
                    uVar5 = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)&field_2505136,
                                                                     field_2505176);
                    uVar7 = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)&field_2505140,
                                                                     field_2505180);
                    this_01->Open(uVar5, uVar7);
                }
            } else {
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                cVar3 = ((lVar9 + 1048))->empty();
                if (cVar3 == '\0') {
                    new (local_140) HookReq();
                    shared_ptr<rs2lib::IfType>::operator=(local_120, (shared_ptr*)this_00);
                    local_120._16_4_ = local_58->GetX();
                    local_120._20_4_ = ((local_58 + 8))->GetX();
                    shared_ptr<rs2lib::IfType>::operator=(local_100, (shared_ptr*)field_2505144);
                    lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_140,
                                                                (Array*)(lVar9 + 1048));
                    ScriptRunner::ExecuteScript((HookReq*)local_140, 500000);
                    local_140->~HookReq();
                }
                puVar1 = field_2505144;
                bVar4 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    psVar11 = (shared_ptr*)ServerDraggable(this, (shared_ptr*)this_00);
                    bVar4 = operator!=(psVar11, (_func_decltype_nullptr*)0);
                    if (bVar4) {
                        pSVar12 =
                            (ServerConnection*)
                                std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                        uVar8 = pSVar12->GetOutgoingEncryption();
                        local_140->MakeClientMessage(93, uVar8);
                        new (&local_70) SuperShuffledPacketFactory((SuperPacket*)(local_140 + 8));
                        this_03 = (ShuffledPacket3*)local_70.p2_alt2();
                        lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        ShuffledPacket3::p4<unsigned int>(this_03, *(uint*)(lVar9 + 4));
                        this_04 = (ShuffledPacket2*)local_70.p2_alt2();
                        lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                        ShuffledPacket2::p4<unsigned int>(this_04, *(uint*)(lVar9 + 4));
                        pPVar13 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_70.p2_alt2();
                        lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar13, *(int*)(lVar9 + 8));
                        pPVar13 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_70.p2_alt2();
                        lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar13, *(int*)(lVar9 + 1984));
                        pSVar14 = (ShuffledPacket4*)local_70.p2_alt2();
                        lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                        ShuffledPacket4::p2<int>(pSVar14, *(int*)(lVar9 + 8));
                        pSVar14 = (ShuffledPacket4*)local_70.p2_alt2();
                        lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        ShuffledPacket4::p2<int>(pSVar14, *(int*)(lVar9 + 1984));
                        pSVar12 =
                            (ServerConnection*)
                                std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                        pSVar12->SendClientMessage(local_140);
                        local_140->~ClientMessage();
                    }
                }
            }
            new (local_140) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00, (shared_ptr*)local_140);
        } else {
            if (iVar2 == 7) {
                if ((field_2505172 == '\0') || (field_2505160 == '\0')) {
                    if (iVar6 < 1) {
                        return;
                    }
                    if (field_54760 != '\0') {
                        uVar8 = logger::default_logger();
                        logger::Logger::Log(uVar8, 0, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/client_UI.cpp",
                                            3714, "Aborting: dragcom_found: %d draglayer_found: %d  if3_dragtime: %d",
                                            field_2505172, field_2505160, field_2505188);
                    }
                    new (local_140) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00, (shared_ptr*)local_140);
                    local_140->~shared_ptr();
                    if (field_2505184 != '\0') {
                        return;
                    }
                    iVar6 = field_52344->GetNumEntries();
                    if (iVar6 < 1) {
                        return;
                    }
                    uVar5 = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)&field_2505136,
                                                                     field_2505176);
                    uVar7 = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)&field_2505140,
                                                                     field_2505180);
                    DoStashed(this, uVar5, uVar7);
                    return;
                }
                cVar3 =
                    CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_40, field_2505164);
                if (cVar3 != '\0') {
                    local_40[0] = field_2505164;
                }
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_b0, *(int*)(lVar9 + 72));
                local_140._0_4_ =
                    CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)local_40, local_b0[0]);
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_a8, *(int*)(lVar9 + 72));
                uVar5 = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)&field_2505164,
                                                                 local_a8[0]);
                cVar3 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)local_140, uVar5);
                if (cVar3 != '\0') {
                    lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                    iVar6 = *(int*)(lVar9 + 72);
                    lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                        (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_a0, iVar6 - *(int*)(lVar9 + 72));
                    local_40[0] = CoordType<UICoordSpecializer>::operator+(
                        (CoordType<UICoordSpecializer>*)&field_2505164, local_a0[0]);
                }
                cVar3 =
                    CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_38, field_2505168);
                if (cVar3 != '\0') {
                    local_38[0] = field_2505168;
                }
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_98, *(int*)(lVar9 + 76));
                local_140._0_4_ =
                    CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)local_38, local_98[0]);
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_90, *(int*)(lVar9 + 76));
                uVar5 = CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)&field_2505168,
                                                                 local_90[0]);
                cVar3 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)local_140, uVar5);
                if (cVar3 != '\0') {
                    lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                    iVar6 = *(int*)(lVar9 + 76);
                    lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                        (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_88, iVar6 - *(int*)(lVar9 + 76));
                    local_38[0] = CoordType<UICoordSpecializer>::operator+(
                        (CoordType<UICoordSpecializer>*)&field_2505168, local_88[0]);
                }
                local_70.field_0._0_4_ =
                    CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_40, field_2505176);
                local_60[0] =
                    CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_38, field_2505180);
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_48, *(int*)(lVar9 + 776));
                iVar6 = field_2505188;
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                if (*(int*)(lVar9 + 780) < iVar6) {
                    cVar3 = CoordType<UICoordSpecializer>::operator>((CoordType<UICoordSpecializer>*)&local_70,
                                                                     local_48[0]);
                    if (cVar3 == '\0') {
                        uVar5 = CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_48);
                        cVar3 =
                            CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)&local_70, uVar5);
                        if ((cVar3 == '\0') && (cVar3 = CoordType<UICoordSpecializer>::operator>(
                                                    (CoordType<UICoordSpecializer>*)local_60, local_48[0]),
                                                cVar3 == '\0')) {
                            uVar5 = CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_48);
                            cVar3 = CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_60,
                                                                             uVar5);
                            if (cVar3 == '\0')
                                goto LAB_1000f1fbd;
                        }
                    }
                    if (field_2505184 == '\0') {
                        this_02 =
                            (GameOptions*)std::unique_ptr<option::GameOptions,
                                                          std::default_delete<option::GameOptions>>::
                            operator->((
                                unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
                        cVar3 = this_02->GetHapticOnDrag();
                        if (cVar3 != '\0') {
                            Vibrate(this, 4);
                        }
                    }
                    field_2505184 = 1;
                }
            LAB_1000f1fbd:
                local_140._0_4_ =
                    CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_40, field_2505164);
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_80, *(int*)(lVar9 + 96));
                local_58._0_4_ =
                    CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)local_140, local_80[0]);
                local_140._0_4_ =
                    CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_38, field_2505168);
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)puVar1);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_78, *(int*)(lVar9 + 100));
                local_58._8_4_ =
                    CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)local_140, local_78[0]);
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                cVar3 = ((lVar9 + 1024))->empty();
                if (cVar3 != '\0') {
                    return;
                }
                if (field_2505184 == '\0') {
                    return;
                }
                new (local_140) HookReq();
                shared_ptr<rs2lib::IfType>::operator=(local_120, (shared_ptr*)this_00);
                local_120._16_4_ = local_58->GetX();
                local_120._20_4_ = ((local_58 + 8))->GetX();
                lVar9 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_140,
                                                            (Array*)(lVar9 + 1024));
                ScriptRunner::ExecuteScript((HookReq*)local_140, 500000);
                local_140->~HookReq();
                return;
            }
            new (local_140) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00, (shared_ptr*)local_140);
        }
        local_140->~shared_ptr();
    }

    // 0x1000f2510, 1136 bytes, placed by class name and neighbouring functions
    // Client::GlIf3DragContents()
    void Client::GlIf3DragContents() {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        char cVar5;
        undefined4 uVar6;
        long lVar7;
        CoordType<UICoordSpecializer>* pCVar8;
        XPlotBlender<graphics::XPlot_NormalAlpha> local_50[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_48[8];
        shared_ptr local_40;

        if (field_2505224 == '\0') {
            new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)field_2505208, &local_40);
            goto LAB_1000f25c7;
        }
        iVar1 = field_8504;
        if (iVar1 == 1) {
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)field_2505208);
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_40, *(int*)(lVar7 + 96));
            field_2505228 = local_40._0_4_;
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)field_2505208);
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_40, *(int*)(lVar7 + 100));
            field_2505232 = local_40._0_4_;
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_40, 0);
            field_2505240 = local_40._0_4_;
            field_2505236 = local_40._0_4_;
            return;
        }
        field_2505225 = 0;
        if (iVar1 == 10) {
            uVar6 = (&field_8496)->GetFlickHorizontalVelocity();
            field_2505244 = uVar6;
            uVar6 = (&field_8496)->GetFlickVerticalVelocity();
            field_2505248 = uVar6;
        LAB_1000f26a1:
            CoordType<UICoordSpecializer>::operator+=((CoordType<UICoordSpecializer>*)&field_2505236, field_2505244);
            local_40._0_4_ =
                CoordType<UICoordSpecializer>::operator*((CoordType<UICoordSpecializer>*)&field_2505244, 97);
            uVar6 = CoordType<UICoordSpecializer>::operator/((CoordType<UICoordSpecializer>*)&local_40, 100);
            field_2505244 = uVar6;
            CoordType<UICoordSpecializer>::operator+=((CoordType<UICoordSpecializer>*)&field_2505240, field_2505248);
            local_40._0_4_ =
                CoordType<UICoordSpecializer>::operator*((CoordType<UICoordSpecializer>*)&field_2505248, 97);
            uVar6 = CoordType<UICoordSpecializer>::operator/((CoordType<UICoordSpecializer>*)&local_40, 100);
            field_2505248 = uVar6;
        } else {
            if (iVar1 != 9)
                goto LAB_1000f26a1;
            pCVar8 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8560, 0);
            std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8528, 0);
            uVar6 = CoordType<UICoordSpecializer>::operator-(pCVar8);
            field_2505236 = uVar6;
            pCVar8 = (CoordType<UICoordSpecializer>*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8576, 0);
            std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8544, 0);
            uVar6 = CoordType<UICoordSpecializer>::operator-(pCVar8);
            field_2505240 = uVar6;
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_40, 0);
            field_2505248 = local_40._0_4_;
            field_2505244 = local_40._0_4_;
        }
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_50, 0);
        cVar5 = CoordType<UICoordSpecializer>::operator!=((CoordType<UICoordSpecializer>*)&field_2505236);
        if (cVar5 == '\0') {
            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_48, 0);
            cVar5 = CoordType<UICoordSpecializer>::operator!=((CoordType<UICoordSpecializer>*)&field_2505240);
            if (cVar5 != '\0')
                goto LAB_1000f276f;
        } else {
        LAB_1000f276f:
            this_00 = field_2505208;
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            iVar1 = *(int*)(lVar7 + 96);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            iVar2 = *(int*)(lVar7 + 100);
            uVar6 = CoordType<UICoordSpecializer>::operator*((CoordType<UICoordSpecializer>*)&field_2505236, 2);
            local_40._0_4_ =
                CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)&field_2505228, uVar6);
            uVar6 = local_40.GetX();
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            *(undefined4*)(lVar7 + 96) = uVar6;
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            iVar3 = *(int*)(lVar7 + 96);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            iVar4 = *(int*)(lVar7 + 104);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            if (iVar4 - *(int*)(lVar7 + 72) < iVar3) {
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                iVar3 = *(int*)(lVar7 + 104);
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                iVar4 = *(int*)(lVar7 + 72);
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                *(int*)(lVar7 + 96) = iVar3 - iVar4;
            }
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            if (*(int*)(lVar7 + 96) < 0) {
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                *(undefined4*)(lVar7 + 96) = 0;
            }
            CoordType<UICoordSpecializer>::operator*((CoordType<UICoordSpecializer>*)&field_2505240, 2);
            local_40._0_4_ = CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)&field_2505232);
            uVar6 = local_40.GetX();
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            *(undefined4*)(lVar7 + 100) = uVar6;
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            iVar3 = *(int*)(lVar7 + 100);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            iVar4 = *(int*)(lVar7 + 108);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            if (iVar4 - *(int*)(lVar7 + 76) < iVar3) {
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                iVar3 = *(int*)(lVar7 + 108);
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                iVar4 = *(int*)(lVar7 + 76);
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                *(int*)(lVar7 + 100) = iVar3 - iVar4;
            }
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            if (*(int*)(lVar7 + 100) < 0) {
                lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                *(undefined4*)(lVar7 + 100) = 0;
            }
            lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
            if ((*(int*)(lVar7 + 96) != iVar1) ||
                (lVar7 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00),
                 *(int*)(lVar7 + 100) != iVar2)) {
                ComponentUpdated(this, (shared_ptr*)this_00);
                field_2505225 = 1;
            }
        }
        if (field_2505225 != '\0') {
            return;
        }
        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_40, 0);
        field_2505248 = local_40._0_4_;
        field_2505244 = local_40._0_4_;
        if (field_8504 == 9) {
            return;
        }
        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)field_2505208, &local_40);
    LAB_1000f25c7:
        local_40.~shared_ptr();
    }

    // 0x1000f2980, 96 bytes, placed by class name and neighbouring functions
    // Client::ComponentUpdated(shared_ptr<rs2lib::IfType> const&)
    void Client::ComponentUpdated(shared_ptr* param_1) {
        long lVar2;
        undefined1* puVar3;

        if (shared_ptr::operator_cast_to_bool(param_1)) {
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            if (*(int*)(lVar2 + 2048) == field_2506572) {
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                puVar3 = (undefined1*)std::array<bool, 100ul>::operator[]((array<bool, 100ul>*)&field_2506576,
                                                                          (long)*(int*)(lVar2 + 2044));
                *puVar3 = 1;
            }
        }
    }

    // 0x1000f29e0, 1920 bytes, placed by class name and neighbouring functions
    // Client::GlFollowCamera()
    void Client::GlFollowCamera() {
        undefined1* puVar1;
        byte bVar2;
        char cVar3;
        char cVar4;
        int iVar5;
        uint uVar6;
        undefined4 uVar7;
        long lVar8;
        array<int, 2048ul>* this_00;
        array<int, 2048ul>* this_01;
        int* piVar9;
        undefined4* puVar10;
        GameOptions* pGVar11;
        int iVar12;
        Client* this_02;
        Client* this_03;
        int iVar13;
        ulong uVar14;
        int iVar15;
        int iVar16;
        int iVar17;
        bool bVar18;
        float fVar19;
        undefined4 local_50[2];
        undefined4 local_48[2];
        Client* local_40;
        uint local_38[2];

        if (field_52400 != 1) {
            if (field_52400 == 0) {
                this_03 = (Client*)field_52016;
                lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_03);
                uVar6 = *(uint*)(lVar8 + 24);
                this_02 = this_03;
                lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_03);
                fVar19 = *(float*)(lVar8 + 28);
                if ((1000 < (field_7294716 - uVar6) + 500) || (1000 < ((int)field_7294724 - (int)fVar19) + 500U)) {
                    field_7294716 = uVar6;
                    field_7294724 = fVar19;
                }
                iVar15 = uVar6 - field_7294716;
                if (iVar15 != 0) {
                    iVar5 = iVar15 + 15;
                    if (-1 < iVar15) {
                        iVar5 = iVar15;
                    }
                    field_7294716 = (iVar5 >> 4) + field_7294716;
                }
                iVar15 = (int)fVar19 - (int)field_7294724;
                if (iVar15 != 0) {
                    iVar5 = iVar15 + 15;
                    if (-1 < iVar15) {
                        iVar5 = iVar15;
                    }
                    field_7294724 = (float)((iVar5 >> 4) + (int)field_7294724);
                }
                uVar6 = field_7294716;
                fVar19 = field_7294724;
                iVar5 = GetAvH(this_02, uVar6, (int)fVar19, m_playerLevel);
                iVar15 = 0;
                if (((((int)uVar6 < 12800) && (511 < (int)uVar6)) && (511 < (int)fVar19)) && ((int)fVar19 < 12800)) {
                    iVar15 = 0;
                    iVar17 = ((int)uVar6 >> 7) + -4;
                    local_40 = this;
                    do {
                        iVar12 = -4;
                        do {
                            iVar16 = ((int)fVar19 >> 7) + iVar12;
                            iVar13 = local_40->m_playerLevel;
                            if (iVar13 < 3) {
                                bVar2 = ClientBuild::Read3DArray<signed char>((Array*)&ClientBuild::m_mapl, 1, iVar17,
                                                                              iVar16);
                                iVar13 = iVar13 + (uint)(bVar2 >> 1 & 1);
                            }
                            iVar13 =
                                ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, iVar13, iVar17, iVar16);
                            if (iVar15 < iVar5 - iVar13) {
                                iVar15 = iVar5 - iVar13;
                            }
                            iVar12 = iVar12 + 1;
                        } while (iVar12 != 5);
                        bVar18 = iVar17 != ((int)uVar6 >> 7) + 4;
                        iVar17 = iVar17 + 1;
                    } while (bVar18);
                    iVar15 = iVar15 * 192;
                    this = local_40;
                }
                iVar5 = 98048;
                if (iVar15 < 98048) {
                    iVar5 = iVar15;
                }
                iVar15 = 32768;
                if (32768 < iVar5) {
                    iVar15 = iVar5;
                }
                iVar5 = field_7294756;
                iVar17 = 24;
                if ((iVar15 - iVar5 != 0 && iVar5 <= iVar15) || (iVar17 = 80, iVar15 < iVar5)) {
                    field_7294756 = (iVar15 - iVar5) / iVar17 + iVar5;
                }
                lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_03);
                iVar15 = *(int*)(lVar8 + 24);
                lVar8 = shared_ptr<ClientPlayer>::operator->((shared_ptr<ClientPlayer>*)this_03);
                iVar15 = GetAvH(this_03, iVar15, *(int*)(lVar8 + 28), m_playerLevel);
                field_7294720 = iVar15 - field_52404;
            }
            goto LAB_1000f2e58;
        }
        CheckRecentreFreecam(this);
        puVar1 = &field_8496;
        local_40 = this;
        cVar4 = puVar1->KeyHeld(33);
        bVar2 = 0;
        iVar15 = 0;
        if (cVar4 == '\0') {
            bVar2 = puVar1->KeyHeld(49);
            iVar15 = -1;
            if (bVar2 != 0) {
                iVar15 = 1024;
            }
        }
        cVar3 = puVar1->KeyHeld(48);
        if (cVar3 == '\0') {
            cVar3 = puVar1->KeyHeld(50);
            if (cVar3 != '\0') {
                iVar5 = (bVar2 | 2) << 8;
                iVar15 = 256;
                goto LAB_1000f2ccf;
            }
        } else {
            iVar5 = (uint)(bVar2 ^ 1) * 256 + 1280;
            iVar15 = 1792;
        LAB_1000f2ccf:
            if (cVar4 == '\0') {
                iVar15 = iVar5;
            }
        }
        cVar4 = puVar1->KeyHeld(35);
        if (cVar4 == '\0') {
            bVar2 = puVar1->KeyHeld(51);
            uVar6 = (uint)bVar2;
        } else {
            uVar6 = 4294967295;
            bVar2 = 1;
        }
        this = local_40;
        if ((-1 < iVar15) || (iVar5 = 0, bVar2 != 0)) {
            bVar2 = puVar1->KeyHeld(81);
            iVar5 = *(int*)(field_52424 + (ulong)bVar2 * 4 + -16) << 4;
            field_7294732 = iVar15;
            field_7294736 = uVar6;
        }
        iVar15 = field_7294728;
        if (iVar15 < iVar5) {
            iVar17 = iVar5 + 7;
            if (-1 < iVar5) {
                iVar17 = iVar5;
            }
            iVar15 = iVar15 + (iVar17 >> 3);
            if (iVar5 < iVar15) {
                iVar15 = iVar5;
            }
        LAB_1000f2d71:
            field_7294728 = iVar15;
        } else if (iVar5 < iVar15) {
            iVar15 = (iVar15 * 9) / 10;
            goto LAB_1000f2d71;
        }
        iVar15 = field_7294728;
        if (iVar15 < 1) {
            field_7294732 = -1;
            field_7294736 = 4294967295;
        } else {
            iVar5 = iVar15 + 15;
            if (-1 < iVar15) {
                iVar5 = iVar15;
            }
            iVar5 = iVar5 >> 4;
            if (-1 < field_7294732) {
                uVar14 = (ulong)(field_7294732 - field_53104 & 2047);
                this_00 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
                this_01 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
                piVar9 = (int*)std::array<int, 2048ul>::operator[](this_00, uVar14);
                iVar17 = *piVar9 * iVar5;
                piVar9 = (int*)std::array<int, 2048ul>::operator[](this_01, uVar14);
                iVar15 = iVar17 + 65535;
                if (-1 < iVar17) {
                    iVar15 = iVar17;
                }
                iVar17 = *piVar9 * iVar5;
                local_40->field_7294716 = local_40->field_7294716 + (iVar15 >> 16);
                iVar15 = iVar17 + 65535;
                if (-1 < iVar17) {
                    iVar15 = iVar17;
                }
                local_40->field_7294724 = (float)((int)local_40->field_7294724 + (iVar15 >> 16));
                this = local_40;
            }
            if (field_7294736 != 0) {
                uVar6 = field_7294736 * iVar5 + field_7294720;
                field_7294720 = (int)uVar6 >> 31 & uVar6;
            }
        }
        cVar4 = puVar1->KeyHeld(13);
        if (cVar4 != '\0') {
            ExitFreecamMode(this);
        }
    LAB_1000f2e58:
        if (field_8504 == 12) {
            iVar15 = *(int*)&field_18528;
            puVar10 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8560, (long)iVar15);
            local_50[0] = *puVar10;
            puVar10 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8576, (long)iVar15);
            local_48[0] = *puVar10;
            local_38[0] =
                CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)local_48, field_53136);
            iVar15 = local_38->GetX();
            local_40 = (Client*)CONCAT44(local_40._4_4_, (float)iVar15);
            pGVar11 = (GameOptions*)
                          std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                              (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            fVar19 = (float)pGVar11->GetCameraSensitivity();
            iVar5 = jag::math::RoundFloatToInt(fVar19 * local_40._0_4_);
            field_53128 = iVar5;
            if ((iVar15 == 1) || (iVar15 == -1)) {
                uVar7 = local_48[0];
            } else {
                local_38[0] =
                    CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)local_48, field_53136);
                uVar7 = CoordType<UICoordSpecializer>::operator/((CoordType<UICoordSpecializer>*)local_38, 2);
            }
            field_53136 = uVar7;
            local_38[0] =
                CoordType<UICoordSpecializer>::operator-((CoordType<UICoordSpecializer>*)&field_53132, local_50[0]);
            iVar15 = local_38->GetX();
            local_40 = (Client*)CONCAT44(local_40._4_4_, (float)iVar15);
            pGVar11 = (GameOptions*)
                          std::unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>::operator->(
                              (unique_ptr<option::GameOptions, std::default_delete<option::GameOptions>>*)&field_8384);
            fVar19 = (float)pGVar11->GetCameraSensitivity();
            iVar5 = jag::math::RoundFloatToInt(fVar19 * local_40._0_4_);
            field_53124 = iVar5;
            if ((iVar15 == 1) || (iVar15 == -1)) {
                uVar7 = local_50[0];
            } else {
                local_38[0] =
                    CoordType<UICoordSpecializer>::operator+((CoordType<UICoordSpecializer>*)local_50, field_53132);
                uVar7 = CoordType<UICoordSpecializer>::operator/((CoordType<UICoordSpecializer>*)local_38, 2);
            }
        } else {
            puVar1 = &field_8496;
            cVar4 = puVar1->KeyHeld(96);
            if (cVar4 == '\0') {
                cVar4 = puVar1->KeyHeld(97);
                iVar15 = field_53124;
                if (cVar4 == '\0') {
                    iVar15 = iVar15 / 2;
                } else {
                    iVar5 = (24 - iVar15) * 3;
                    iVar17 = (24 - iVar15) * 3 + 3;
                    if (-1 < iVar5) {
                        iVar17 = iVar5;
                    }
                    iVar15 = (iVar17 >> 2) + iVar15;
                }
                field_53124 = iVar15;
            } else {
                iVar5 = -24 - field_53124;
                iVar15 = iVar5 * 3;
                iVar5 = iVar5 * 3 + 3;
                if (-1 < iVar15) {
                    iVar5 = iVar15;
                }
                field_53124 = (iVar5 >> 2) + field_53124;
            }
            cVar4 = puVar1->KeyHeld(98);
            if (cVar4 == '\0') {
                cVar4 = puVar1->KeyHeld(99);
                iVar15 = field_53128;
                if (cVar4 == '\0') {
                    iVar15 = iVar15 / 2;
                } else {
                    iVar5 = (-12 - iVar15) * 3;
                    iVar17 = (-12 - iVar15) * 3 + 3;
                    if (-1 < iVar5) {
                        iVar17 = iVar5;
                    }
                    iVar15 = (iVar17 >> 2) + iVar15;
                }
                field_53128 = iVar15;
            } else {
                iVar5 = 12 - field_53128;
                iVar15 = iVar5 * 3;
                iVar5 = iVar5 * 3 + 3;
                if (-1 < iVar15) {
                    iVar5 = iVar15;
                }
                field_53128 = (iVar5 >> 2) + field_53128;
            }
            puVar10 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8576, 0);
            field_53136 = *puVar10;
            puVar10 = (undefined4*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](
                (array<CoordType<UICoordSpecializer>, 4ul>*)&field_8560, 0);
            uVar7 = *puVar10;
        }
        field_53132 = uVar7;
        field_53112 = field_53120 + field_53112 & 2047;
        iVar15 = field_53108 + field_53116;
        field_53108 = iVar15;
        field_53120 = field_53124 / 2;
        field_53116 = field_53128 / 2;
        iVar15 = dash3d::world::ClampPitchAngle(iVar15);
        field_53108 = iVar15;
    }

    // 0x1000f3160, 288 bytes, placed by class name and neighbouring functions
    // Client::SmoothResetCamera()
    void Client::SmoothResetCamera() {
        CinemaCameraData local_58;

        CinemaCameraMovePosition(this, field_53044, field_53052, field_53048);
        CinemaCameraMoveAngle(this, field_53056, field_53060);
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
            new (&local_58) CinemaCameraData();
            field_53060 = 0;
            field_53044 = (undefined4)0;
            field_53048 = (0)._4_4_;
            field_53052 = (undefined4)0;
            field_53056 = (0)._4_4_;
            field_53028 = (undefined4)local_58.field_32;
            field_53032 = local_58.field_32._4_4_;
            field_53036 = (undefined4)local_58.field_40;
            field_53040 = local_58.field_40._4_4_;
            field_53012 = (undefined4)local_58.field_16;
            field_53016 = local_58.field_16._4_4_;
            field_53020 = (undefined4)local_58.field_24;
            field_53024 = local_58.field_24._4_4_;
            *(undefined8*)&field_52996 = local_58._0_8_;
            field_53004 = (undefined4)local_58.field_8;
            field_53008 = local_58.field_8._4_4_;
            (&field_53064, (CinemaCameraMovementTween*)0)->reset();
            (&field_53072, (CinemaCameraRotationTween*)0)->reset();
            (&field_53080, (CinemaCameraRotationTween*)0)->reset();
        }
    }

    // 0x1000f3280, 624 bytes, placed by class name and neighbouring functions
    // Client::GlCinemaCamera()
    void Client::GlCinemaCamera() {
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        long* plVar7;
        Client* pCVar8;
        CinemaCameraRotationTween* pCVar9;
        CinemaCameraTween* pCVar10;
        uint uVar11;
        int iVar12;
        uint uVar13;
        int iVar14;
        double dVar15;
        double dVar16;

        if (field_52998 == '\0') {
            uVar13 = field_53004 << 7 | 64;
            uVar11 = field_53008 << 7 | 64;
            iVar4 = GetAvH(this, uVar13, uVar11, m_playerLevel);
            pCVar8 = this;
            CinemaCameraMovePosition(this, uVar13, uVar11, iVar4 - field_53012);
        } else {
            puVar1 = &field_53064;
            pCVar8 = (Client*)puVar1;
            bVar3 = puVar1->operator_cast_to_bool();
            if (bVar3) {
                plVar7 =
                    (long*)std::unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>::
                    operator->(
                        (unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>*)puVar1);
                iVar4 = (**(code**)(*plVar7 + 16))(plVar7);
                field_53088 = iVar4;
                pCVar8 =
                    (Client*)
                        std::unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>::
                        operator->(
                            (unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>*)
                                puVar1);
                iVar4 = (**(code**)(*(long*)pCVar8 + 24))();
                field_53096 = iVar4;
                if (field_53000 == '\0') {
                    iVar4 = GetAvH(pCVar8, field_53088, iVar4, m_playerLevel);
                    plVar7 =
                        (long*)
                            std::unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>::
                            operator->(
                                (unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>*)
                                    puVar1);
                    iVar5 = (**(code**)(*plVar7 + 32))(plVar7);
                    iVar4 = iVar4 - iVar5;
                } else {
                    plVar7 =
                        (long*)
                            std::unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>::
                            operator->(
                                (unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>*)
                                    puVar1);
                    iVar4 = (**(code**)(*plVar7 + 32))(plVar7);
                }
                field_53092 = iVar4;
                pCVar8 =
                    (Client*)
                        std::unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>::
                        operator->(
                            (unique_ptr<CinemaCameraMovementTween, std::default_delete<CinemaCameraMovementTween>>*)
                                puVar1);
                pCVar8->AdvanceCycle();
                cVar2 = field_52999;
                goto joined_r0x0001000f334f;
            }
        }
        cVar2 = field_52999;
    joined_r0x0001000f334f:
        if (cVar2 == '\0') {
            uVar13 = field_53024 << 7 | 64;
            uVar11 = field_53028 << 7 | 64;
            iVar6 = GetAvH(pCVar8, uVar13, uVar11, m_playerLevel);
            iVar4 = field_53032;
            iVar14 = uVar13 - field_53088;
            iVar5 = field_53092;
            iVar12 = uVar11 - field_53096;
            dVar15 = (double)sqrt<int>(iVar12 * iVar12 + iVar14 * iVar14);
            dVar15 = (double)atan2<int, int>(iVar6 - (iVar4 + iVar5), (int)dVar15);
            dVar16 = (double)atan2<int, int>(iVar14, iVar12);
            CinemaCameraMoveAngle(this, (int)(dVar15 * 325.9490051269531) & 2047,
                                  (int)(dVar16 * -325.9490051269531) & 2047);
        } else {
            puVar1 = &field_53072;
            bVar3 = puVar1->operator_cast_to_bool();
            if (bVar3) {
                pCVar9 =
                    (CinemaCameraRotationTween*)
                        std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::
                        operator->(
                            (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)
                                puVar1);
                iVar4 = pCVar9->GetValue();
                field_53100 = iVar4;
                iVar4 = dash3d::world::ClampPitchAngle(iVar4);
                field_53100 = iVar4;
                pCVar10 =
                    (CinemaCameraTween*)
                        std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::
                        operator->(
                            (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)
                                puVar1);
                pCVar10->AdvanceCycle();
            }
            puVar1 = &field_53080;
            bVar3 = puVar1->operator_cast_to_bool();
            if (bVar3) {
                pCVar9 =
                    (CinemaCameraRotationTween*)
                        std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::
                        operator->(
                            (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)
                                puVar1);
                uVar11 = pCVar9->GetValue();
                field_53104 = uVar11 & 2047;
                pCVar10 =
                    (CinemaCameraTween*)
                        std::unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>::
                        operator->(
                            (unique_ptr<CinemaCameraRotationTween, std::default_delete<CinemaCameraRotationTween>>*)
                                puVar1);
                pCVar10->AdvanceCycle();
            }
        }
    }

    // 0x1000f3630, 128 bytes, placed by class name and neighbouring functions
    // Client::ServicePendingKeyFrameSets()
    void Client::ServicePendingKeyFrameSets() {
        int* piVar1;
        int* piVar2;
        undefined1* this_00;

        this_00 = &field_7306808;
        piVar1 = (int*)this_00->HeapBeginPtr();
        piVar2 = (int*)this_00->end();
        if (piVar1 != piVar2) {
            do {
                if ((undefined*)(*piVar1)->GetKeyFrameSetStatus() == DataStatus::MISSING) {
                    piVar1 = piVar1 + 1;
                } else {
                    piVar1 = (int*)this_00->erase(piVar1);
                }
                piVar2 = (int*)this_00->end();
            } while (piVar1 != piVar2);
        }
    }

    // 0x1000f37d0, 448 bytes, placed by class name and neighbouring functions
    // Client::GlEntityOverlays(int, int, int, int, int, int)
    void Client::GlEntityOverlays(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        int iVar1;
        bool bVar2;
        char cVar3;
        int* piVar4;
        Array* pAVar5;
        undefined1* this_00;
        reverse_iterator local_b8[8];
        reverse_iterator local_b0[8];
        Client* local_a8;
        int iStack_a0;
        int iStack_9c;
        int local_98;
        int iStack_94;
        int iStack_90;
        int iStack_8c;
        Client* local_88;
        int local_7c;
        int local_78;
        int local_74;
        int local_70;
        int local_6c;
        function<void(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_7c = param_5;
        local_78 = param_4;
        local_74 = param_3;
        local_70 = param_2;
        local_6c = param_1;
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        this_00 = m_entityOverlays;
        local_88 = this;
        eastl::vector<ObjStackEntry, eastl::allocator>::rend();
        bVar2 = eastl::operator!=(local_b8, local_b0);
        if (bVar2) {
            do {
                piVar4 = (int*)eastl::reverse_iterator<eastl::pair<unsigned int, unsigned short> const*>::operator*(
                    (reverse_iterator<eastl::pair<unsigned int, unsigned short> const*>*)local_b8);
                iVar1 = *piVar4;
                cVar3 = this_00->OverlayExistsAtIndex(iVar1);
                if (cVar3 != '\0') {
                    pAVar5 = (Array*)this_00->GetOverlay(iVar1);
                    LoopLayer(local_88, pAVar5, -1, local_6c, local_70, local_74, local_78, local_7c, param_6);
                }
                eastl::reverse_iterator<unsigned long*>::operator++((reverse_iterator<unsigned long*>*)local_b8);
                eastl::vector<ObjStackEntry, eastl::allocator>::rend();
                bVar2 = eastl::operator!=(local_b8, local_b0);
            } while (bVar2);
        }
        local_a8 = local_88;
        iStack_a0 = local_6c;
        iStack_9c = local_70;
        local_98 = local_74;
        iStack_94 = local_78;
        iStack_90 = local_7c;
        iStack_8c = param_6;
        std::function<void(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&)>::function<
            Client::GlEntityOverlays(int, int, int, int, int, int)::__8, void>(local_68);
        this_00->ForEachOverlay(local_68);
        std::function<void(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&)>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000f39f0, 12752 bytes, placed by __FILE__ string
    // Client::LoopLayer(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, int, int, int, int, int, int, int)
    void Client::LoopLayer(Array* param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                           int param_8) {
        ushort uVar1;
        Worldmap* pWVar2;
        Minimenu* this_00;
        shared_ptr sVar3;
        bool bVar4;
        char cVar5;
        byte bVar6;
        byte bVar7;
        bool bVar8;
        bool bVar9;
        int iVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        int iVar13;
        long lVar14;
        Minimap* this_01;
        ulong uVar15;
        shared_ptr* psVar16;
        char* pcVar17;
        IfType* pIVar18;
        CRMViewHandler* this_02;
        uint* puVar19;
        NXTPixToolkit* pNVar20;
        SoundInstance* this_03;
        array<Array<unsigned char, eastl::allocator>, 11ul>* paVar21;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar22;
        Array<unsigned char, eastl::allocator>* pAVar23;
        byte* pbVar24;
        int* piVar25;
        undefined4* puVar26;
        undefined8 uVar27;
        ushort* puVar28;
        Layout* pLVar29;
        undefined4* puVar30;
        long lVar31;
        Array* pAVar32;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* extraout_RDX_01;
        shared_ptr* extraout_RDX_02;
        shared_ptr* extraout_RDX_03;
        shared_ptr* extraout_RDX_04;
        shared_ptr* extraout_RDX_05;
        shared_ptr* extraout_RDX_06;
        hashtable_iterator_base* extraout_RDX_07;
        char cVar33;
        int iVar34;
        ulong uVar35;
        ObjType* pOVar36;
        uint uVar37;
        float fVar38;
        undefined1 auVar39[16];
        int in_stack_fffffffffffffd08;
        undefined4 in_stack_fffffffffffffd0c;
        uint in_stack_fffffffffffffd10;
        undefined4 in_stack_fffffffffffffd14;
        shared_ptr<dash3d::Decor> local_2d8[16];
        undefined4 local_2c8[8];
        ulong local_2a8;
        array<CoordType<UICoordSpecializer>, 4ul>* local_2a0;
        array<CoordType<UICoordSpecializer>, 4ul>* local_298;
        array<int, 128ul>* local_290;
        array<char16_t, 128ul>* local_288;
        unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>* local_280;
        array<int, 32ul>* local_278;
        array<int, 32ul>* local_270;
        array<int, 32ul>* local_268;
        list<HookReq, eastl::allocator>* local_260;
        shared_ptr<rs2lib::IfType>* local_258;
        shared_ptr<rs2lib::IfType>* local_250;
        EntityOverlays* local_248;
        undefined1* local_240;
        list<HookReq, eastl::allocator>* local_238;
        list<InterfaceMouseEvent, eastl::allocator>* local_230;
        int local_228;
        int local_224;
        int local_220;
        int local_21c;
        XPlotBlender<graphics::XPlot_NormalAlpha> local_218[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_210[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_208[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_200[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_1f8[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_1f0[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_1e8[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_1e0[8];
        undefined4 local_1d8[2];
        undefined4 local_1d0[2];
        undefined4 local_1c8[2];
        undefined4 local_1c0[2];
        undefined4 local_1b8[2];
        undefined4 local_1b0[2];
        undefined4 local_1a8[2];
        undefined4 local_1a0[2];
        undefined4 local_198[2];
        undefined4 local_190[2];
        undefined4 local_188[2];
        undefined4 local_180[2];
        undefined4 local_178[2];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_170[8];
        shared_ptr* local_168;
        Array* local_160;
        shared_ptr* local_158;
        shared_ptr* local_150;
        RenderContextDesc local_148;
        shared_ptr* local_128;
        uint local_11c;
        ObjType* local_118;
        undefined1 local_110[24];
        undefined1 local_f8;
        shared_ptr<rs2lib::IfType> local_f0[16];
        int local_e0;
        int local_dc;
        undefined4 local_c0;
        uint local_bc;
        ulong local_90;
        ulong local_88;
        NXTPixToolkit* local_80;
        int local_78;
        int local_74;
        int local_70;
        int local_6c;
        list<HookReq, eastl::allocator>* local_68;
        uint local_5c;
        undefined1 local_58[8];
        undefined1 local_50[16];
        shared_ptr local_40;

        local_228 = param_5;
        local_224 = param_4;
        local_220 = param_3;
        local_50._8_8_ = this;
        lVar14 = param_1->end();
        if (lVar14 != 0) {
            local_158 = (shared_ptr*)(local_50._8_8_ + 2505056);
            local_150 = (shared_ptr*)(local_50._8_8_ + 2505120);
            local_68 = (list<HookReq, eastl::allocator>*)(local_50._8_8_ + 2506384);
            local_128 = (shared_ptr*)(local_50._8_8_ + 2505104);
            local_168 = (shared_ptr*)(local_50._8_8_ + 2505208);
            pOVar36 = (ObjType*)(local_50._8_8_ + 8496);
            local_2a0 = (array<CoordType<UICoordSpecializer>, 4ul>*)(local_50._8_8_ + 8560);
            local_298 = (array<CoordType<UICoordSpecializer>, 4ul>*)(local_50._8_8_ + 8576);
            local_230 = (list<InterfaceMouseEvent, eastl::allocator>*)(local_50._8_8_ + 2506480);
            local_258 = (shared_ptr<rs2lib::IfType>*)(local_50._8_8_ + 2505144);
            local_238 = (list<HookReq, eastl::allocator>*)(local_50._8_8_ + 2506448);
            local_260 = (list<HookReq, eastl::allocator>*)(local_50._8_8_ + 2506416);
            local_278 = (array<int, 32ul>*)(local_50._8_8_ + 2505812);
            local_270 = (array<int, 32ul>*)(local_50._8_8_ + 2505944);
            local_268 = (array<int, 32ul>*)(local_50._8_8_ + 2506076);
            local_290 = (array<int, 128ul>*)(local_50._8_8_ + 8616);
            local_288 = (array<char16_t, 128ul>*)(local_50._8_8_ + 9128);
            local_250 = (shared_ptr<rs2lib::IfType>*)(local_50._8_8_ + 2505072);
            local_240 = (undefined1*)(local_50._8_8_ + 53160);
            local_248 = (EntityOverlays*)(local_50._8_8_ + 6815056);
            local_280 = (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)(local_50._8_8_ + 8152);
            uVar35 = 0;
            local_21c = param_2;
            local_160 = param_1;
            local_118 = pOVar36;
            do {
                local_2a8 = uVar35;
                psVar16 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)param_1, uVar35);
                new (&local_40) shared_ptr<dash3d::Decor>(psVar16);
                bVar4 = operator==(&local_40, (_func_decltype_nullptr*)0);
                if (!bVar4) {
                    iVar10 = *(int*)(local_50._8_8_ + 7294676);
                    lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                    *(int*)(lVar14 + 28) = iVar10;
                    lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                    if (*(int*)(lVar14 + 88) == param_2) {
                        pcVar17 = (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        if (*pcVar17 == '\0') {
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            if ((*(int*)(lVar14 + 12) == 0) && (bVar4 = operator!=(local_158, &local_40), bVar4)) {
                                cVar5 = Hide((Client*)local_50._8_8_, &local_40);
                                goto LAB_1000f3c43;
                            }
                        } else {
                            cVar5 = Hide((Client*)local_50._8_8_, &local_40);
                        LAB_1000f3c43:
                            if (cVar5 != '\0')
                                goto LAB_1000f3bb0;
                        }
                        lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        if ((((*(int*)(lVar14 + 1984) != -1) &&
                              (lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40),
                               *(int*)(lVar14 + 680) == -1)) &&
                             (lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40),
                              *(int*)(lVar14 + 12) == 5)) &&
                            (lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40),
                             (*(byte*)(lVar14 + 292) & 4) != 0)) {
                            shared_ptr<dash3d::Decor>::shared_ptr(local_2d8, &local_40);
                            sVar3._4_4_ = in_stack_fffffffffffffd0c;
                            sVar3._0_4_ = in_stack_fffffffffffffd08;
                            sVar3.field_8._0_4_ = in_stack_fffffffffffffd10;
                            sVar3.field_8._4_4_ = in_stack_fffffffffffffd14;
                            CreateObjOverlay((Client*)local_50._8_8_, sVar3);
                            local_2d8->~shared_ptr();
                        }
                        pIVar18 =
                            (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        cVar5 = pIVar18->IsActiveComponent();
                        if ((cVar5 == '\0') && (iVar10 = GetActive((Client*)local_50._8_8_, &local_40), iVar10 == 0)) {
                            bVar4 = operator!=(&local_40, local_150);
                            if (bVar4)
                                goto LAB_1000f3bb0;
                        }
                        lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        if (*(int*)(lVar14 + 12) == 11) {
                            pIVar18 =
                                (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            cVar5 = pIVar18->ServiceCRMView();
                            if (cVar5 != '\0') {
                                pIVar18 = (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                this_02 = (CRMViewHandler*)pIVar18->GetCRMViewHandler();
                                cVar5 = this_02->HasSuccessfulResponse();
                                if (cVar5 != '\0') {
                                    ComponentUpdated((Client*)local_50._8_8_, &local_40);
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    InterfaceCalculateSizeAndPosSubcomponents((Client*)local_50._8_8_,
                                                                              (Array*)(lVar14 + 2000), &local_40, true);
                                }
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                cVar5 = ((lVar14 + 1720))->empty();
                                if (cVar5 == '\0') {
                                    new (local_110) HookReq();
                                    shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    Array<HookArg, eastl::allocator>::operator=(
                                        (Array<HookArg, eastl::allocator>*)local_110, (Array*)(lVar14 + 1720));
                                    eastl::list<HookReq, eastl::allocator>::push_back(local_68, (HookReq*)local_110);
                                    local_110->~HookReq();
                                }
                            }
                        } else {
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            if (*(int*)(lVar14 + 12) == 12) {
                                pIVar18 = (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                cVar5 = pIVar18->ServiceInputField();
                                if (cVar5 != '\0') {
                                    ComponentUpdated((Client*)local_50._8_8_, &local_40);
                                }
                            }
                        }
                        lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        local_88 = (ulong)(uint)(*(int*)(lVar14 + 64) + param_7);
                        lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        local_80 = (NXTPixToolkit*)(ulong)(uint)(*(int*)(lVar14 + 68) + param_8);
                        lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        if (*(int*)(lVar14 + 12) == 9) {
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            iVar10 = *(int*)(lVar14 + 72);
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            iVar34 = (int)local_88;
                            local_70 = iVar34 + iVar10;
                            if (iVar10 < 0) {
                                local_78 = local_70;
                                local_70 = iVar34;
                            } else {
                                local_78 = iVar34;
                            }
                            iVar10 = (int)local_80;
                            local_6c = *(int*)(lVar14 + 76) + iVar10;
                            if (*(int*)(lVar14 + 76) < 0) {
                                local_74 = local_6c;
                                local_6c = iVar10;
                            } else {
                                local_74 = iVar10;
                            }
                            local_70 = local_70 + 1;
                            local_6c = local_6c + 1;
                            pNVar20 = local_80;
                        } else {
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            iVar10 = *(int*)(lVar14 + 72);
                            auVar39 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            pNVar20 = auVar39._8_8_;
                            local_78 = (int)local_88;
                            local_70 = iVar10 + local_78;
                            local_74 = (int)local_80;
                            local_6c = *(int*)(auVar39._0_8_ + 76) + local_74;
                        }
                        if (local_78 <= local_220) {
                            local_78 = local_220;
                        }
                        if (local_74 <= local_224) {
                            local_74 = local_224;
                        }
                        if (local_228 <= local_70) {
                            local_70 = local_228;
                        }
                        if (param_6 <= local_6c) {
                            local_6c = param_6;
                        }
                        bVar4 = operator==((jag*)&local_40, local_128, (shared_ptr*)pNVar20);
                        uVar27 = local_50._8_8_;
                        psVar16 = extraout_RDX;
                        if (bVar4) {
                            *(undefined1*)(local_50._8_8_ + 2505172) = 1;
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_110, (int)local_88);
                            *(undefined4*)(uVar27 + 2505176) = local_110._0_4_;
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_110, (int)local_80);
                            *(undefined4*)(uVar27 + 2505180) = local_110._0_4_;
                            *(undefined1*)(uVar27 + 8605) = 1;
                            psVar16 = extraout_RDX_00;
                        }
                        bVar4 = operator==((jag*)&local_40, local_168, psVar16);
                        if (bVar4) {
                            *(undefined1*)(local_50._8_8_ + 2505224) = 1;
                            *(undefined1*)(local_50._8_8_ + 8604) = 1;
                        }
                        lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        if (*(char*)(lVar14 + 688) == '\0') {
                        LAB_1000f3fe6:
                            bVar4 = false;
                        LAB_1000f401c:
                            pIVar18 =
                                (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            cVar5 = pIVar18->CanSkipLogicIfNotVisible();
                            if ((cVar5 != '\0') && ((local_70 <= local_78 || (local_6c <= local_74))))
                                goto LAB_1000f3bb0;
                        } else {
                            iVar10 = *(int*)(local_50._8_8_ + 54160);
                            if (iVar10 == 0) {
                                bVar4 = true;
                            } else {
                                if (iVar10 == 2) {
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    iVar10 = *(int*)(lVar14 + 4) >> 16;
                                } else {
                                    if (iVar10 != 3)
                                        goto LAB_1000f3fe6;
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    iVar10 = *(int*)(lVar14 + 4);
                                }
                                bVar4 = iVar10 == *(int*)((long)(local_50._8_8_ + 54160) + 4);
                                if (!bVar4)
                                    goto LAB_1000f401c;
                            }
                        }
                        pcVar17 = (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        if (*pcVar17 != '\0') {
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_148, -1);
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_2c8, -1);
                            cVar5 = NeedBuildMinimenu((Client*)local_50._8_8_);
                            if (cVar5 != '\0') {
                                local_148.field_0 = *(undefined4*)(local_50._8_8_ + 8592);
                                local_2c8[0] = *(undefined4*)(local_50._8_8_ + 8596);
                            }
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_218, local_78);
                            cVar5 =
                                CoordType<UICoordSpecializer>::operator>=((CoordType<UICoordSpecializer>*)&local_148);
                            if (cVar5 == '\0') {
                            LAB_1000f413e:
                                cVar5 = '\0';
                            } else {
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_210,
                                                                                                       local_74);
                                cVar5 = CoordType<UICoordSpecializer>::operator>=(
                                    (CoordType<UICoordSpecializer>*)local_2c8);
                                if (cVar5 == '\0')
                                    goto LAB_1000f413e;
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_208,
                                                                                                       local_70);
                                cVar5 = CoordType<UICoordSpecializer>::operator<(
                                    (CoordType<UICoordSpecializer>*)&local_148);
                                if (cVar5 == '\0')
                                    goto LAB_1000f413e;
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_200,
                                                                                                       local_6c);
                                cVar5 =
                                    CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_2c8);
                            }
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            if (*(char*)(lVar14 + 2080) == '\0') {
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                if ((*(char*)(lVar14 + 2081) != '\0') && (cVar5 == '\x01')) {
                                    ClearHookQueueMouseEvents(local_50[8]);
                                    ResetDragScrollLayer((Client*)local_50._8_8_);
                                }
                            } else if (cVar5 != '\0') {
                                ClearHookQueueMouseEvents(local_50[8]);
                                uVar27 = local_50._8_8_;
                                ClearHardcodedMouseEvents((Client*)local_50._8_8_);
                                if (*(int*)(uVar27 + 2505188) == 0) {
                                    new (local_110) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                    shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)local_128,
                                                                          (shared_ptr*)local_110);
                                    local_110->~shared_ptr();
                                    new (local_110) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                    shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)local_150,
                                                                          (shared_ptr*)local_110);
                                    local_110->~shared_ptr();
                                }
                                pOVar36->ResetDragAction();
                                ResetDragScrollLayer((Client*)local_50._8_8_);
                                cVar5 = NeedBuildMinimenu((Client*)local_50._8_8_);
                                if (cVar5 != '\0') {
                                    (*(Minimenu**)(local_50._8_8_ + 52344))->ResetMinimenu();
                                }
                            }
                        }
                        puVar19 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](local_2a0, 0);
                        local_58._0_4_ = *puVar19;
                        puVar19 = (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](local_298, 0);
                        local_50._0_4_ = *puVar19;
                        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_1f8, local_78);
                        cVar5 = CoordType<UICoordSpecializer>::operator>=((CoordType<UICoordSpecializer>*)local_58);
                        if (cVar5 == '\0') {
                        LAB_1000f42d2:
                            local_5c = 0;
                        } else {
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_1f0, local_74);
                            cVar5 = CoordType<UICoordSpecializer>::operator>=((CoordType<UICoordSpecializer>*)local_50);
                            if (cVar5 == '\0')
                                goto LAB_1000f42d2;
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_1e8, local_70);
                            cVar5 = CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_58);
                            if (cVar5 == '\0')
                                goto LAB_1000f42d2;
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(local_1e0, local_6c);
                            local_5c =
                                CoordType<UICoordSpecializer>::operator<((CoordType<UICoordSpecializer>*)local_50);
                        }
                        lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                        if (*(int*)(lVar14 + 20) == 1337) {
                            if (*(undefined1*)(local_50._8_8_ + 54832) == '\0') {
                                bVar6 = NeedBuildMinimenu((Client*)local_50._8_8_);
                                uVar27 = local_50._8_8_;
                                if ((bVar6 & (byte)local_5c) != 1)
                                    goto LAB_1000f44a3;
                                pNVar20 = (NXTPixToolkit*)local_50._8_8_->GetMemoryCache();
                                this_03 = (SoundInstance*)pNVar20->GetScreen();
                                fVar38 = (float)this_03->GetSoundSpatialSizeMax();
                                local_90 = CONCAT44(local_90._4_4_, fVar38);
                                uVar11 = jag::math::RoundFloatToInt((float)(int)*(uint*)(uVar27 + 52736) * fVar38);
                                uVar12 =
                                    jag::math::RoundFloatToInt((float)(int)*(uint*)(uVar27 + 52740) * (float)local_90);
                                (*(Minimenu**)(uVar27 + 52344))
                                    ->Build(*(undefined4*)(uVar27 + 8592), *(undefined4*)(uVar27 + 8596), uVar11,
                                            uVar12);
                                cVar5 = local_118->AllowDragGameScreen();
                                if (cVar5 != '\0') {
                                    *(undefined1*)(local_50._8_8_ + 8603) = 1;
                                }
                            } else {
                            LAB_1000f44a3:
                                (*(Minimenu**)(local_50._8_8_ + 52344))->field_0 = '\0';
                            }
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            iVar10 = *(int*)(lVar14 + 96);
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            in_stack_fffffffffffffd08 = (int)local_80 - *(int*)(lVar14 + 100);
                            GlEntityOverlays((Client*)local_50._8_8_, local_78, local_74, local_70, local_6c,
                                             (int)local_88 - iVar10, in_stack_fffffffffffffd08);
                        } else {
                            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                            if (*(int*)(lVar14 + 20) == 1338) {
                                this_01 =
                                    (Minimap*)std::unique_ptr<
                                        minimap::Minimap, std::default_delete<minimap::Minimap>>::operator->(local_280);
                                this_01->GlMinimap(&local_40, (int)local_88, (int)local_80, (bool)(byte)local_5c);
                            } else {
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                uVar12 = local_50._0_4_;
                                uVar11 = local_58._0_4_;
                                if (*(int*)(lVar14 + 20) == 1400) {
                                    pWVar2 = *(Worldmap**)(local_50._8_8_ + 2509304);
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    in_stack_fffffffffffffd08 = *(int*)(lVar14 + 72);
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    in_stack_fffffffffffffd10 = *(uint*)(lVar14 + 76);
                                    pWVar2->LogicLoop(uVar11, uVar12, (byte)local_5c, local_88, local_80);
                                }
                                bVar6 = NeedBuildMinimenu((Client*)local_50._8_8_);
                                if ((bVar6 & (byte)local_5c) == 1) {
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    if (*(int*)(lVar14 + 20) == 1400) {
                                        pWVar2 = *(Worldmap**)(local_50._8_8_ + 2509304);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        iVar10 = *(int*)(lVar14 + 72);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        iVar34 = *(int*)(lVar14 + 76);
                                        iVar13 = local_58->GetX();
                                        in_stack_fffffffffffffd08 = local_50->GetX();
                                        worldmap::Worldmap::BuildMinimenu((int)pWVar2, (int)local_88, (int)local_80,
                                                                          iVar10, iVar34, iVar13);
                                    } else {
                                        (*(Minimenu**)(local_50._8_8_ + 52344))->AddComponent(&local_40);
                                    }
                                }
                                if (bVar4) {
                                    local_90 = 0;
                                    while (true) {
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (local_90 == 11)
                                            break;
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        paVar21 =
                                            (array<Array<unsigned char, eastl::allocator>, 11ul>*)
                                                std::unique_ptr<rs2lib::IfType::ServerKeyData,
                                                                std::default_delete<rs2lib::IfType::ServerKeyData>>::
                                                operator->(
                                                    (unique_ptr<
                                                        rs2lib::IfType::ServerKeyData,
                                                        std::default_delete<rs2lib::IfType::ServerKeyData>>*)(lVar14 +
                                                                                                              696));
                                        pvVar22 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                            std::array<Array<unsigned char, eastl::allocator>, 11ul>::operator[](
                                                paVar21, local_90);
                                        lVar14 =
                                            eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar22);
                                        bVar4 = false;
                                        if (lVar14 == 0) {
                                            local_11c = 0;
                                        } else {
                                            uVar35 = 0;
                                            local_11c = 0;
                                            while (true) {
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                paVar21 =
                                                    (array<Array<unsigned char, eastl::allocator>, 11ul>*)
                                                        std::unique_ptr<
                                                            rs2lib::IfType::ServerKeyData,
                                                            std::default_delete<rs2lib::IfType::ServerKeyData>>::
                                                        operator->(
                                                            (unique_ptr<rs2lib::IfType::ServerKeyData,
                                                                        std::default_delete<
                                                                            rs2lib::IfType::ServerKeyData>>*)(lVar14 +
                                                                                                              696));
                                                pvVar22 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    std::array<Array<unsigned char, eastl::allocator>,
                                                               11ul>::operator[](paVar21, local_90);
                                                uVar15 =
                                                    eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                                        pvVar22);
                                                if (uVar15 <= uVar35)
                                                    break;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                cVar5 = ((lVar14 + 2056))->empty();
                                                if (cVar5 == '\0') {
                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)&local_40);
                                                    paVar21 =
                                                        (array<Array<unsigned char, eastl::allocator>, 11ul>*)
                                                            std::unique_ptr<
                                                                rs2lib::IfType::ServerKeyData,
                                                                std::default_delete<rs2lib::IfType::ServerKeyData>>::
                                                            operator->((unique_ptr<
                                                                        rs2lib::IfType::ServerKeyData,
                                                                        std::default_delete<
                                                                            rs2lib::IfType::ServerKeyData>>*)(lVar14 +
                                                                                                              696));
                                                    pAVar23 = (Array<unsigned char, eastl::allocator>*)
                                                        std::array<Array<unsigned char, eastl::allocator>,
                                                                   11ul>::operator[](paVar21, local_90);
                                                    pbVar24 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                        pAVar23, uVar35);
                                                    bVar6 = local_118->KeyHeld((uint)*pbVar24);
                                                } else {
                                                    bVar6 = 0;
                                                }
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                paVar21 =
                                                    (array<Array<unsigned char, eastl::allocator>, 11ul>*)
                                                        std::unique_ptr<
                                                            rs2lib::IfType::ServerKeyData,
                                                            std::default_delete<rs2lib::IfType::ServerKeyData>>::
                                                        operator->(
                                                            (unique_ptr<rs2lib::IfType::ServerKeyData,
                                                                        std::default_delete<
                                                                            rs2lib::IfType::ServerKeyData>>*)(lVar14 +
                                                                                                              696));
                                                pAVar23 = (Array<unsigned char, eastl::allocator>*)
                                                    std::array<Array<unsigned char, eastl::allocator>,
                                                               11ul>::operator[](paVar21, local_90);
                                                pbVar24 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                    pAVar23, uVar35);
                                                bVar7 = KeyPressed((Client*)local_50._8_8_, (uint)*pbVar24);
                                                iVar10 = 0;
                                                if ((bVar7 | bVar6) == 1) {
                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)&local_40);
                                                    cVar5 = ((lVar14 + 2056))->empty();
                                                    if (cVar5 == '\0') {
                                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                                        puVar19 = (uint*)Array<int, eastl::allocator>::operator[](
                                                            (Array<int, eastl::allocator>*)(lVar14 + 2056), local_90);
                                                        uVar15 = (ulong)*puVar19;
                                                        if ((int)*puVar19 <= *(int*)(local_50._8_8_ + 8488))
                                                            goto LAB_1000f46c4;
                                                    } else {
                                                    LAB_1000f46c4:
                                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                                        lVar14 =
                                                            std::unique_ptr<
                                                                rs2lib::IfType::ServerKeyData,
                                                                std::default_delete<rs2lib::IfType::ServerKeyData>>::
                                                            operator->((unique_ptr<
                                                                        rs2lib::IfType::ServerKeyData,
                                                                        std::default_delete<
                                                                            rs2lib::IfType::ServerKeyData>>*)(lVar14 +
                                                                                                              696));
                                                        pAVar23 = (Array<unsigned char, eastl::allocator>*)
                                                            std::array<Array<unsigned char, eastl::allocator>, 11ul>::
                                                            operator[]((array<Array<unsigned char, eastl::allocator>,
                                                                              11ul>*)(lVar14 + 264),
                                                                       local_90);
                                                        pbVar24 =
                                                            (byte*)Array<unsigned char, eastl::allocator>::operator[](
                                                                pAVar23, uVar35);
                                                        pOVar36 = local_118;
                                                        bVar6 = *pbVar24;
                                                        if (bVar6 == 0) {
                                                        LAB_1000f4758:
                                                            iVar10 = 0;
                                                            bVar4 = true;
                                                            bVar8 = true;
                                                        } else {
                                                            if ((bVar6 & 8) == 0) {
                                                            LAB_1000f4707:
                                                                if (((((bVar6 & 2) == 0) ||
                                                                      (pbVar24 = (byte*)local_118->KeyHeld(86),
                                                                       (char)pbVar24 != '\0')) &&
                                                                     (((bVar6 & 1) == 0 ||
                                                                       (pbVar24 = (byte*)local_118->KeyHeld(82),
                                                                        (char)pbVar24 != '\0')))) &&
                                                                    (((bVar6 & 4) == 0 ||
                                                                      (pbVar24 = (byte*)local_118->KeyHeld(81),
                                                                       (char)pbVar24 != '\0'))))
                                                                    goto LAB_1000f4758;
                                                            } else {
                                                                pbVar24 = (byte*)local_118->KeyHeld(86);
                                                                iVar10 = 11;
                                                                if (((char)pbVar24 != '\0') ||
                                                                    (pbVar24 = (byte*)pOVar36->KeyHeld(82),
                                                                     (char)pbVar24 != '\0')) {
                                                                    bVar8 = false;
                                                                    goto LAB_1000f479e;
                                                                }
                                                                pbVar24 = (byte*)pOVar36->KeyHeld(81);
                                                                if ((char)pbVar24 == '\0')
                                                                    goto LAB_1000f4707;
                                                            }
                                                            iVar10 = 11;
                                                            bVar8 = false;
                                                        }
                                                    LAB_1000f479e:
                                                        uVar15 = CONCAT71((int7)((ulong)pbVar24 >> 8), 1);
                                                        local_11c = (uint)uVar15;
                                                        if (!bVar8)
                                                            goto LAB_1000f47b7;
                                                    }
                                                    iVar10 = 9;
                                                    local_11c = (uint)CONCAT71((int7)(uVar15 >> 8), 1);
                                                }
                                            LAB_1000f47b7:
                                                if ((iVar10 != 11) && (iVar10 != 0))
                                                    break;
                                                uVar35 = uVar35 + 1;
                                            }
                                        }
                                        if (bVar4) {
                                            if (local_90 < 10) {
                                                new (&local_148) eastl::allocator("EASTL basic_string");
                                                new (local_110) eastl::string("", (allocator*)&local_148);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                IfButtonX((Client*)local_50._8_8_, (int)local_90 + 1, &local_40,
                                                          (basic_string*)local_110, *(int*)(lVar14 + 1984));
                                            } else {
                                                (*(Minimenu**)(local_50._8_8_ + 52344))->EndTargetMode();
                                                this_00 = *(Minimenu**)(local_50._8_8_ + 52344);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                iVar10 = *(int*)(lVar14 + 4);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                iVar34 = *(int*)(lVar14 + 8);
                                                iVar13 = GetActive((Client*)local_50._8_8_, &local_40);
                                                iVar13 = rs2lib::ServerActive::TargetMask(iVar13);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                this_00->EnterTargetMode(iVar10, iVar34, iVar13,
                                                                         *(int*)(lVar14 + 1984));
                                                TargetVerb((Client*)local_110, (shared_ptr*)local_50._8_8_);
                                                cVar5 = eastl::basic_string<
                                                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::empty();
                                                if (cVar5 != '\0') {
                                                    eastl::string::operator=((eastl::string*)local_110,
                                                                             (basic_string*)&constants::text::null);
                                                }
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                local_2c8->TAG_COLOUR(16777215);
                                                eastl::operator+((basic_string*)&local_148,
                                                                 (basic_string*)(lVar14 + 704));
                                                local_2c8->~basic_string();
                                                (*(Minimenu**)(local_50._8_8_ + 52344))
                                                    ->SetTargetStrings(local_110, (basic_string*)&local_148);
                                                local_148.~basic_string();
                                            }
                                            local_110->~basic_string();
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            lVar14 =
                                                std::unique_ptr<rs2lib::IfType::ServerKeyData,
                                                                std::default_delete<rs2lib::IfType::ServerKeyData>>::
                                                operator->(
                                                    (unique_ptr<
                                                        rs2lib::IfType::ServerKeyData,
                                                        std::default_delete<rs2lib::IfType::ServerKeyData>>*)(lVar14 +
                                                                                                              696));
                                            piVar25 = (int*)std::array<int, 11ul>::operator[](
                                                (array<int, 11ul>*)(lVar14 + 528), local_90);
                                            iVar10 = *piVar25;
                                            if (iVar10 == 0) {
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                puVar26 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                                    (Array<int, eastl::allocator>*)(lVar14 + 2056), local_90);
                                                *puVar26 = 2147483647;
                                            } else {
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                                    (Array<int, eastl::allocator>*)(lVar14 + 2056), local_90);
                                                iVar34 = *(int*)(local_50._8_8_ + 8488);
                                                if (*piVar25 == 0) {
                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)&local_40);
                                                    lVar14 =
                                                        std::unique_ptr<
                                                            rs2lib::IfType::ServerKeyData,
                                                            std::default_delete<rs2lib::IfType::ServerKeyData>>::
                                                        operator->(
                                                            (unique_ptr<rs2lib::IfType::ServerKeyData,
                                                                        std::default_delete<
                                                                            rs2lib::IfType::ServerKeyData>>*)(lVar14 +
                                                                                                              696));
                                                    piVar25 = (int*)std::array<int, 11ul>::operator[](
                                                        (array<int, 11ul>*)(lVar14 + 572), local_90);
                                                    iVar34 = iVar34 + iVar10 + *piVar25;
                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)&local_40);
                                                    piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                                        (Array<int, eastl::allocator>*)(lVar14 + 2056), local_90);
                                                } else {
                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)&local_40);
                                                    piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                                        (Array<int, eastl::allocator>*)(lVar14 + 2056), local_90);
                                                    iVar34 = iVar34 + iVar10;
                                                }
                                                *piVar25 = iVar34;
                                            }
                                        }
                                        if ((local_11c & 1) == 0) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            puVar26 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                                (Array<int, eastl::allocator>*)(lVar14 + 2056), local_90);
                                            *puVar26 = 0;
                                        }
                                        local_90 = local_90 + 1;
                                    }
                                }
                                pcVar17 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                if (*pcVar17 != '\0') {
                                    if ((byte)local_5c == '\0') {
                                        bVar4 = false;
                                    LAB_1000f4afa:
                                        bVar6 = 0;
                                    } else {
                                        bVar4 = *(undefined1*)(local_50._8_8_ + 8606) != '\0';
                                        if ((byte)local_5c == '\0')
                                            goto LAB_1000f4afa;
                                        if (*(int*)(local_50._8_8_ + 8516) < 1) {
                                            bVar8 = true;
                                            bVar6 = 0;
                                        } else {
                                            bVar6 = 1;
                                            if (*(int*)(local_50._8_8_ + 8504) == 1) {
                                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1d8,
                                                    (int)local_88);
                                                uVar11 = CoordType<UICoordSpecializer>::operator-(
                                                    (CoordType<UICoordSpecializer>*)local_58, local_1d8[0]);
                                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1d0,
                                                    (int)local_80);
                                                uVar12 = CoordType<UICoordSpecializer>::operator-(
                                                    (CoordType<UICoordSpecializer>*)local_50, local_1d0[0]);
                                                DragTryPickup((Client*)local_50._8_8_, &local_40, uVar11, uVar12);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                iVar10 = *(int*)(lVar14 + 108);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                if (iVar10 <= *(int*)(lVar14 + 76)) {
                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)&local_40);
                                                    iVar10 = *(int*)(lVar14 + 104);
                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)&local_40);
                                                    if (iVar10 <= *(int*)(lVar14 + 72))
                                                        goto LAB_1000f4bbe;
                                                }
                                                TryStartDragContents((Client*)local_50._8_8_, &local_40);
                                            }
                                        LAB_1000f4bbe:
                                            bVar8 = false;
                                        }
                                        pIVar18 = (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = pIVar18->HasHardcodedMouseInputBehaviour();
                                        if (cVar5 != '\0') {
                                            new (local_110) UISceneSettings();
                                            iVar10 = local_58->GetX();
                                            local_110._0_4_ = iVar10 - (int)local_88;
                                            iVar10 = local_50->GetX();
                                            local_110._4_4_ = iVar10 - (int)local_80;
                                            shared_ptr<rs2lib::IfType>::operator=(
                                                (shared_ptr<rs2lib::IfType>*)(local_110 + 16), &local_40);
                                            if (bVar4) {
                                                new (&local_148) render::RenderContextDesc(local_110);
                                                local_148.field_8 = 0;
                                                eastl::list<InterfaceMouseEvent, eastl::allocator>::push_back(
                                                    local_230, (InterfaceMouseEvent*)&local_148);
                                                local_148.~InterfaceMouseEvent();
                                            }
                                            if (!bVar8) {
                                                new (&local_148) render::RenderContextDesc(local_110);
                                                local_148.field_8 = 1;
                                                eastl::list<InterfaceMouseEvent, eastl::allocator>::push_back(
                                                    local_230, (InterfaceMouseEvent*)&local_148);
                                                local_148.~InterfaceMouseEvent();
                                            }
                                            local_110->~InterfaceMouseEvent();
                                        }
                                    }
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    if (*(int*)(lVar14 + 20) == 1400) {
                                        (*(Worldmap**)(local_50._8_8_ + 2509304))
                                            ->HandleMouse(local_58._0_4_, local_50._0_4_, (uint)bVar6 & local_5c & 255,
                                                          (byte)local_5c & bVar4);
                                    }
                                    bVar8 = operator!=(local_128, (_func_decltype_nullptr*)0);
                                    psVar16 = extraout_RDX_01;
                                    if (bVar8) {
                                        bVar8 = operator!=(local_128, &local_40);
                                        psVar16 = extraout_RDX_02;
                                        if ((bVar8 & (byte)local_5c) == 1) {
                                            iVar10 = GetActive((Client*)local_50._8_8_, &local_40);
                                            cVar5 = rs2lib::ServerActive::IsDragTarget(iVar10);
                                            psVar16 = extraout_RDX_03;
                                            if (cVar5 != '\0') {
                                                shared_ptr<rs2lib::IfType>::operator=(local_258, &local_40);
                                                psVar16 = extraout_RDX_04;
                                            }
                                        }
                                    }
                                    bVar8 = operator==((jag*)&local_40, local_150, psVar16);
                                    uVar27 = local_50._8_8_;
                                    if (bVar8) {
                                        *(undefined1*)(local_50._8_8_ + 2505160) = 1;
                                        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_110, (int)local_88);
                                        *(undefined4*)(uVar27 + 2505164) = local_110._0_4_;
                                        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_110, (int)local_80);
                                        *(undefined4*)(uVar27 + 2505168) = local_110._0_4_;
                                    }
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    if (*(char*)(lVar14 + 824) != '\0') {
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar33 = (char)local_5c;
                                        cVar5 = ((lVar14 + 1360))->empty();
                                        if (cVar5 == '\0' && cVar33 == '\x01') {
                                            bVar8 = *(int*)(local_50._8_8_ + 53140) != 0;
                                        } else {
                                            bVar8 = false;
                                        }
                                        bVar9 = operator!=(local_128, (_func_decltype_nullptr*)0);
                                        if ((bVar9) || (cVar5 = (*(Minimenu**)(local_50._8_8_ + 52344))->IsOpen(),
                                                        cVar5 != '\0')) {
                                            bVar4 = false;
                                            bVar6 = 0;
                                            local_5c = 0;
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if ((*(char*)(lVar14 + 2025) == '\0') && (bVar4 == true)) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            *(undefined1*)(lVar14 + 2025) = 1;
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 856))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 856));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if ((bVar6 != 0) && (*(char*)(lVar14 + 2025) != '\0')) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 880))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 880));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if ((bVar6 == 0) && (*(char*)(lVar14 + 2025) != '\0')) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            *(undefined1*)(lVar14 + 2025) = 0;
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 904))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 904));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_238,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        if (bVar6 != 0) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 928))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 928));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                uVar35 = ((lVar14 + 736))->end();
                                                if (uVar35 < 2) {
                                                    *(undefined1*)(local_50._8_8_ + 18532) = 1;
                                                }
                                                local_110->~HookReq();
                                            }
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if ((*(char*)(lVar14 + 2024) == '\0') && ((byte)local_5c != '\0')) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            *(undefined1*)(lVar14 + 2024) = 1;
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 952))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 952));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if ((*(char*)(lVar14 + 2024) != '\0') && ((byte)local_5c != '\0')) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 976))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 976));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if ((*(char*)(lVar14 + 2024) != '\0') && ((byte)local_5c == '\0')) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            *(undefined1*)(lVar14 + 2024) = 0;
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1000))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                local_f8 = 1;
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_e0 = local_58->GetX();
                                                local_e0 = local_e0 - (int)local_88;
                                                local_dc = local_50->GetX();
                                                local_dc = local_dc - (int)local_80;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1000));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_238,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if ((*(int*)(lVar14 + 4) >> 16 == *(undefined4*)(local_50._8_8_ + 2505052)) ||
                                            (lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                 (shared_ptr<rs2lib::IfType>*)&local_40),
                                             *(char*)(lVar14 + 785) != '\0')) {
                                            iVar10 = *(int*)(local_50._8_8_ + 53144);
                                            if (iVar10 == 0) {
                                                iVar10 = *(int*)((long)(local_50._8_8_ + 53148) + 4);
                                                if (iVar10 != 0) {
                                                    *(int*)(local_50._8_8_ + 53148) = iVar10;
                                                }
                                            } else {
                                                *(int*)(local_50._8_8_ + 53140) = iVar10;
                                                local_5c = (uint)CONCAT71((uint7)(uint3)((uint)iVar10 >> 8), 1);
                                                bVar8 = true;
                                            }
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = ((lVar14 + 1360))->empty();
                                        if ((cVar5 == '\0') &&
                                            ((bVar8 ||
                                              ((bVar4 = operator==((jag*)&local_40, local_168, extraout_RDX_05),
                                                bVar4 && (*(undefined1*)(local_50._8_8_ + 2505225) != '\0')))))) {
                                            new (local_110) HookReq();
                                            local_f8 = 1;
                                            shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                            bVar4 = operator==((jag*)&local_40, local_168, extraout_RDX_06);
                                            if ((!bVar4) ||
                                                (local_dc = 0, *(undefined1*)(local_50._8_8_ + 2505225) == '\0')) {
                                                local_dc = *(int*)(local_50._8_8_ + 53140);
                                            }
                                            if (*(char*)(local_50._8_8_ + 54760) != '\0') {
                                                uVar27 = logger::default_logger();
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                in_stack_fffffffffffffd08 = *(int*)(lVar14 + 4);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                uVar1 = *(ushort*)(lVar14 + 4);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                in_stack_fffffffffffffd08 = in_stack_fffffffffffffd08 >> 16;
                                                in_stack_fffffffffffffd10 = (uint)uVar1;
                                                logger::Logger::Log(
                                                    uVar27, 0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/client_UI.cpp",
                                                    3116, "com:%i %i %i scrollrotation:%i", in_stack_fffffffffffffd08,
                                                    in_stack_fffffffffffffd10, *(undefined4*)(lVar14 + 20),
                                                    *(int*)(local_50._8_8_ + 53140));
                                            }
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            Array<HookArg, eastl::allocator>::operator=(
                                                (Array<HookArg, eastl::allocator>*)local_110, (Array*)(lVar14 + 1360));
                                            eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                              (HookReq*)local_110);
                                            local_110->~HookReq();
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = ((lVar14 + 1288))->empty();
                                        if (cVar5 == '\0') {
                                            new (local_110) HookReq();
                                            shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            Array<HookArg, eastl::allocator>::operator=(
                                                (Array<HookArg, eastl::allocator>*)local_110, (Array*)(lVar14 + 1288));
                                            eastl::list<HookReq, eastl::allocator>::push_back(local_260,
                                                                                              (HookReq*)local_110);
                                            local_110->~HookReq();
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = ((lVar14 + 1120))->empty();
                                        if ((cVar5 == '\0') && (iVar10 = *(undefined4*)(local_50._8_8_ + 2505940),
                                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)&local_40),
                                                                *(int*)(lVar14 + 2032) < iVar10)) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1144))->empty();
                                            if ((cVar5 == '\0') && (iVar10 = *(undefined4*)(local_50._8_8_ + 2505940),
                                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)&local_40),
                                                                    iVar10 - *(int*)(lVar14 + 2032) < 33)) {
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                uVar37 = *(uint*)(lVar14 + 2032);
                                                if ((int)uVar37 < (int)*(undefined4*)(local_50._8_8_ + 2505940)) {
                                                    bVar4 = false;
                                                    do {
                                                        piVar25 = (int*)std::array<int, 32ul>::operator[](
                                                            local_278, (ulong)(uVar37 & 31));
                                                        iVar10 = *piVar25;
                                                        uVar35 = 0;
                                                        do {
                                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                                            uVar15 = ((lVar14 + 1144))->size();
                                                            if (uVar15 <= uVar35)
                                                                goto LAB_1000f65d8;
                                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                                            piVar25 =
                                                                (int*)eastl::vector<int, eastl::allocator>::operator[](
                                                                    (vector<int, eastl::allocator>*)(lVar14 + 1144),
                                                                    uVar35);
                                                            uVar35 = uVar35 + 1;
                                                        } while (*piVar25 != iVar10);
                                                        new (local_110) HookReq();
                                                        shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                                        Array<HookArg, eastl::allocator>::operator=(
                                                            (Array<HookArg, eastl::allocator>*)local_110,
                                                            (Array*)(lVar14 + 1120));
                                                        eastl::list<HookReq, eastl::allocator>::push_back(
                                                            local_68, (HookReq*)local_110);
                                                        local_110->~HookReq();
                                                        bVar4 = true;
                                                    LAB_1000f65d8:
                                                        uVar37 = uVar37 + 1;
                                                    } while (
                                                        ((int)uVar37 < (int)*(undefined4*)(local_50._8_8_ + 2505940)) &&
                                                        (!bVar4));
                                                }
                                            } else {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1120));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                            uVar11 = *(undefined4*)(local_50._8_8_ + 2505940);
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            *(undefined4*)(lVar14 + 2032) = uVar11;
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = ((lVar14 + 1176))->empty();
                                        if ((cVar5 == '\0') && (iVar10 = *(undefined4*)(local_50._8_8_ + 2506072),
                                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)&local_40),
                                                                *(int*)(lVar14 + 2036) < iVar10)) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1200))->empty();
                                            if ((cVar5 == '\0') && (iVar10 = *(undefined4*)(local_50._8_8_ + 2506072),
                                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)&local_40),
                                                                    iVar10 - *(int*)(lVar14 + 2036) < 33)) {
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                uVar37 = *(uint*)(lVar14 + 2036);
                                                if ((int)uVar37 < (int)*(undefined4*)(local_50._8_8_ + 2506072)) {
                                                    bVar4 = false;
                                                    do {
                                                        piVar25 = (int*)std::array<int, 32ul>::operator[](
                                                            local_270, (ulong)(uVar37 & 31));
                                                        iVar10 = *piVar25;
                                                        uVar35 = 0;
                                                        do {
                                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                                            uVar15 = ((lVar14 + 1200))->size();
                                                            if (uVar15 <= uVar35)
                                                                goto LAB_1000f66e8;
                                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                                            piVar25 =
                                                                (int*)eastl::vector<int, eastl::allocator>::operator[](
                                                                    (vector<int, eastl::allocator>*)(lVar14 + 1200),
                                                                    uVar35);
                                                            uVar35 = uVar35 + 1;
                                                        } while (*piVar25 != iVar10);
                                                        new (local_110) HookReq();
                                                        shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                                        Array<HookArg, eastl::allocator>::operator=(
                                                            (Array<HookArg, eastl::allocator>*)local_110,
                                                            (Array*)(lVar14 + 1176));
                                                        eastl::list<HookReq, eastl::allocator>::push_back(
                                                            local_68, (HookReq*)local_110);
                                                        local_110->~HookReq();
                                                        bVar4 = true;
                                                    LAB_1000f66e8:
                                                        uVar37 = uVar37 + 1;
                                                    } while (
                                                        ((int)uVar37 < (int)*(undefined4*)(local_50._8_8_ + 2506072)) &&
                                                        (!bVar4));
                                                }
                                            } else {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1176));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                            uVar11 = *(undefined4*)(local_50._8_8_ + 2506072);
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            *(undefined4*)(lVar14 + 2036) = uVar11;
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = ((lVar14 + 1232))->empty();
                                        if ((cVar5 == '\0') && (iVar10 = *(undefined4*)(local_50._8_8_ + 2506204),
                                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)&local_40),
                                                                *(int*)(lVar14 + 2040) < iVar10)) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1256))->empty();
                                            if ((cVar5 == '\0') && (iVar10 = *(undefined4*)(local_50._8_8_ + 2506204),
                                                                    lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)&local_40),
                                                                    iVar10 - *(int*)(lVar14 + 2040) < 33)) {
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                uVar37 = *(uint*)(lVar14 + 2040);
                                                if ((int)uVar37 < (int)*(undefined4*)(local_50._8_8_ + 2506204)) {
                                                    bVar4 = false;
                                                    do {
                                                        piVar25 = (int*)std::array<int, 32ul>::operator[](
                                                            local_268, (ulong)(uVar37 & 31));
                                                        iVar10 = *piVar25;
                                                        uVar35 = 0;
                                                        do {
                                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                                            uVar15 = ((lVar14 + 1256))->size();
                                                            if (uVar15 <= uVar35)
                                                                goto LAB_1000f67f8;
                                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                                            piVar25 =
                                                                (int*)eastl::vector<int, eastl::allocator>::operator[](
                                                                    (vector<int, eastl::allocator>*)(lVar14 + 1256),
                                                                    uVar35);
                                                            uVar35 = uVar35 + 1;
                                                        } while (*piVar25 != iVar10);
                                                        new (local_110) HookReq();
                                                        shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                                        Array<HookArg, eastl::allocator>::operator=(
                                                            (Array<HookArg, eastl::allocator>*)local_110,
                                                            (Array*)(lVar14 + 1232));
                                                        eastl::list<HookReq, eastl::allocator>::push_back(
                                                            local_68, (HookReq*)local_110);
                                                        local_110->~HookReq();
                                                        bVar4 = true;
                                                    LAB_1000f67f8:
                                                        uVar37 = uVar37 + 1;
                                                    } while (
                                                        ((int)uVar37 < (int)*(undefined4*)(local_50._8_8_ + 2506204)) &&
                                                        (!bVar4));
                                                }
                                            } else {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1232));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                            uVar11 = *(undefined4*)(local_50._8_8_ + 2506204);
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            *(undefined4*)(lVar14 + 2040) = uVar11;
                                        }
                                        iVar10 = *(int*)(local_50._8_8_ + 2506340);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (*(int*)(lVar14 + 2028) < iVar10) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1384))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1384));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        iVar10 = *(int*)(local_50._8_8_ + 2506344);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (*(int*)(lVar14 + 2028) < iVar10) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1480))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1480));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        iVar10 = *(int*)(local_50._8_8_ + 2506348);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (*(int*)(lVar14 + 2028) < iVar10) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1504))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1504));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        iVar10 = *(int*)(local_50._8_8_ + 2506352);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (*(int*)(lVar14 + 2028) < iVar10) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1528))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1528));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        iVar10 = *(int*)(local_50._8_8_ + 2506356);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (*(int*)(lVar14 + 2028) < iVar10) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1552))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1552));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        iVar10 = *(int*)(local_50._8_8_ + 2506360);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (*(int*)(lVar14 + 2028) < iVar10) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1744))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1744));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        iVar10 = *(int*)((long)(local_50._8_8_ + 2506360) + 4);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (*(int*)(lVar14 + 2028) < iVar10) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1768))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1768));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        iVar10 = *(undefined4*)(local_50._8_8_ + 2506368);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        if (*(int*)(lVar14 + 2028) < iVar10) {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1576))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1576));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        iVar10 = *(int*)(local_50._8_8_ + 2505808);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        *(int*)(lVar14 + 2028) = iVar10;
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = ((lVar14 + 1408))->empty();
                                        if ((cVar5 == '\0') && (*(ulong*)(local_50._8_8_ + 8608) != 0)) {
                                            uVar35 = 0;
                                            do {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                puVar26 =
                                                    (undefined4*)std::array<int, 128ul>::operator[](local_290, uVar35);
                                                local_c0 = *puVar26;
                                                puVar28 =
                                                    (ushort*)std::array<char16_t, 128ul>::operator[](local_288, uVar35);
                                                local_bc = (uint)*puVar28;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1408));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                                uVar35 = uVar35 + 1;
                                            } while (uVar35 < *(ulong*)(local_50._8_8_ + 8608));
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = ((lVar14 + 1432))->empty();
                                        if (cVar5 == '\0') {
                                            pLVar29 = (Layout*)local_118->GetManAppearance();
                                            puVar26 = (undefined4*)eastl::basic_string<
                                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout::
                                                HeapBeginPtr(pLVar29);
                                            puVar30 = (undefined4*)pLVar29->end();
                                            for (; puVar26 != puVar30; puVar26 = puVar26 + 1) {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_c0 = *puVar26;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1432));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        cVar5 = ((lVar14 + 1456))->empty();
                                        if (cVar5 == '\0') {
                                            pLVar29 = (Layout*)local_118->GetKeysUp();
                                            puVar26 = (undefined4*)eastl::basic_string<
                                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout::
                                                HeapBeginPtr(pLVar29);
                                            puVar30 = (undefined4*)pLVar29->end();
                                            for (; puVar26 != puVar30; puVar26 = puVar26 + 1) {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                local_c0 = *puVar26;
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1456));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                        if (*(undefined1*)(local_50._8_8_ + 53256) != '\0') {
                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                            cVar5 = ((lVar14 + 1696))->empty();
                                            if (cVar5 == '\0') {
                                                new (local_110) HookReq();
                                                shared_ptr<rs2lib::IfType>::operator=(local_f0, &local_40);
                                                lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                                Array<HookArg, eastl::allocator>::operator=(
                                                    (Array<HookArg, eastl::allocator>*)local_110,
                                                    (Array*)(lVar14 + 1696));
                                                eastl::list<HookReq, eastl::allocator>::push_back(local_68,
                                                                                                  (HookReq*)local_110);
                                                local_110->~HookReq();
                                            }
                                        }
                                    }
                                }
                                pcVar17 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                    (shared_ptr<rs2lib::IfType>*)&local_40);
                                if (*pcVar17 == '\0') {
                                    bVar4 = operator!=(local_128, (_func_decltype_nullptr*)0);
                                    if ((bVar4) ||
                                        (cVar5 = (*(Minimenu**)(local_50._8_8_ + 52344))->IsOpen(), cVar5 != '\0'))
                                        goto LAB_1000f3b94;
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    if ((-1 < *(int*)(lVar14 + 1864)) ||
                                        (lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                             (shared_ptr<rs2lib::IfType>*)&local_40),
                                         *(int*)(lVar14 + 124) != 0)) {
                                        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1c8, local_78);
                                        cVar5 = CoordType<UICoordSpecializer>::operator>=(
                                            (CoordType<UICoordSpecializer>*)local_58, local_1c8[0]);
                                        if (cVar5 != '\0') {
                                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1c0, local_74);
                                            cVar5 = CoordType<UICoordSpecializer>::operator>=(
                                                (CoordType<UICoordSpecializer>*)local_50, local_1c0[0]);
                                            if (cVar5 != '\0') {
                                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1b8, local_70);
                                                cVar5 = CoordType<UICoordSpecializer>::operator<(
                                                    (CoordType<UICoordSpecializer>*)local_58, local_1b8[0]);
                                                if (cVar5 != '\0') {
                                                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<
                                                        int>((XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1b0,
                                                             local_6c);
                                                    cVar5 = CoordType<UICoordSpecializer>::operator<(
                                                        (CoordType<UICoordSpecializer>*)local_50, local_1b0[0]);
                                                    if (cVar5 != '\0') {
                                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                                        if (*(int*)(lVar14 + 1864) < 0) {
                                                            shared_ptr<rs2lib::IfType>::operator=(
                                                                (shared_ptr<rs2lib::IfType>*)local_158, &local_40);
                                                        } else {
                                                            lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)&local_40);
                                                            psVar16 = (shared_ptr*)
                                                                Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::
                                                                operator[]((Array<shared_ptr<rs2lib::IfType>,
                                                                                  eastl::allocator>*)local_160,
                                                                           (long)*(int*)(lVar14 + 1864));
                                                            shared_ptr<rs2lib::IfType>::operator=(
                                                                (shared_ptr<rs2lib::IfType>*)local_158, psVar16);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    if (*(int*)(lVar14 + 12) == 8) {
                                        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                            (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1a8, local_78);
                                        cVar5 = CoordType<UICoordSpecializer>::operator>=(
                                            (CoordType<UICoordSpecializer>*)local_58, local_1a8[0]);
                                        if (cVar5 != '\0') {
                                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_1a0, local_74);
                                            cVar5 = CoordType<UICoordSpecializer>::operator>=(
                                                (CoordType<UICoordSpecializer>*)local_50, local_1a0[0]);
                                            if (cVar5 != '\0') {
                                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_198, local_70);
                                                cVar5 = CoordType<UICoordSpecializer>::operator<(
                                                    (CoordType<UICoordSpecializer>*)local_58, local_198[0]);
                                                if (cVar5 != '\0') {
                                                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<
                                                        int>((XPlotBlender<graphics::XPlot_NormalAlpha>*)local_190,
                                                             local_6c);
                                                    cVar5 = CoordType<UICoordSpecializer>::operator<(
                                                        (CoordType<UICoordSpecializer>*)local_50, local_190[0]);
                                                    if (cVar5 != '\0') {
                                                        shared_ptr<rs2lib::IfType>::operator=(local_250, &local_40);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    iVar10 = *(int*)(lVar14 + 108);
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    if (*(int*)(lVar14 + 76) < iVar10) {
                                        if (((byte)local_5c != '\0') && (*(int*)(local_50._8_8_ + 8504) == 1)) {
                                            *(undefined1*)(local_50._8_8_ + 8604) = 1;
                                            TryStartDragContents((Client*)local_50._8_8_, &local_40);
                                        }
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        iVar13 = *(int*)(lVar14 + 72) + (int)local_88;
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        iVar10 = *(int*)(lVar14 + 76);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        iVar34 = *(int*)(lVar14 + 108);
                                        in_stack_fffffffffffffd08 = local_58->GetX();
                                        in_stack_fffffffffffffd10 = local_50->GetX();
                                        DoScrollbar((Client*)local_50._8_8_, &local_40, iVar13, (int)local_80, iVar10,
                                                    iVar34, in_stack_fffffffffffffd08, in_stack_fffffffffffffd10);
                                    }
                                }
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                if (*(int*)(lVar14 + 12) == 0) {
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    iVar10 = *(int*)(lVar14 + 4);
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    iVar34 = *(int*)(lVar14 + 96);
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    in_stack_fffffffffffffd10 = (int)local_88 - iVar34;
                                    in_stack_fffffffffffffd08 = local_6c;
                                    LoopLayer((Client*)local_50._8_8_, local_160, iVar10, local_78, local_74, local_70,
                                              local_6c, in_stack_fffffffffffffd10,
                                              (int)local_80 - *(int*)(lVar14 + 100));
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    cVar5 = ((lVar14 + 2000))->empty();
                                    if (cVar5 == '\0') {
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        lVar31 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        iVar10 = *(int*)(lVar31 + 4);
                                        lVar31 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        iVar34 = *(int*)(lVar31 + 96);
                                        lVar31 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        in_stack_fffffffffffffd10 = (int)local_88 - iVar34;
                                        in_stack_fffffffffffffd08 = local_6c;
                                        LoopLayer((Client*)local_50._8_8_, (Array*)(lVar14 + 2000), iVar10, local_78,
                                                  local_74, local_70, local_6c, in_stack_fffffffffffffd10,
                                                  (int)local_80 - *(int*)(lVar31 + 100));
                                    }
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    if (*(char*)(lVar14 + 24) == '\0') {
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                        eastl::hashtable<
                                            int,
                                            eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                                   std::default_delete<
                                                                                       ChatHistory::HistoryBuffer>>>,
                                            eastl::allocator,
                                            eastl::use_first<eastl::pair<
                                                int const,
                                                std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                std::default_delete<ChatHistory::HistoryBuffer>>>>,
                                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                            true>::find((int*)local_110);
                                        eastl::hashtable<
                                            int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                            eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                            true>::end();
                                        bVar4 = eastl::operator!=(
                                            (eastl*)local_110, (hashtable_iterator_base*)&local_148, extraout_RDX_07);
                                        if (bVar4) {
                                            lVar14 = local_110->HeapBeginPtr();
                                            if (*(int*)(lVar14 + 8) == 0) {
                                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_188, local_78);
                                                cVar5 = CoordType<UICoordSpecializer>::operator>=(
                                                    (CoordType<UICoordSpecializer>*)local_58, local_188[0]);
                                                if (cVar5 != '\0') {
                                                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<
                                                        int>((XPlotBlender<graphics::XPlot_NormalAlpha>*)local_180,
                                                             local_74);
                                                    cVar5 = CoordType<UICoordSpecializer>::operator>=(
                                                        (CoordType<UICoordSpecializer>*)local_50, local_180[0]);
                                                    if (cVar5 != '\0') {
                                                        graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::
                                                            XPlotBlender<int>(
                                                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_178,
                                                                local_70);
                                                        cVar5 = CoordType<UICoordSpecializer>::operator<(
                                                            (CoordType<UICoordSpecializer>*)local_58, local_178[0]);
                                                        if (cVar5 != '\0') {
                                                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::
                                                                XPlotBlender<int>(local_170, local_6c);
                                                            cVar5 = CoordType<UICoordSpecializer>::operator<(
                                                                (CoordType<UICoordSpecializer>*)local_50);
                                                            if (((cVar5 != '\0') &&
                                                                 (cVar5 =
                                                                      (*(Minimenu**)(local_50._8_8_ + 52344))->IsOpen(),
                                                                  cVar5 == '\0')) &&
                                                                (*(char*)(local_50._8_8_ + 53265) == '\0')) {
                                                                ClearHookQueueMouseEvents(local_50[8]);
                                                                uVar27 = local_50._8_8_;
                                                                ClearHardcodedMouseEvents((Client*)local_50._8_8_);
                                                                if (*(int*)(uVar27 + 2505188) == 0) {
                                                                    new (&local_148) shared_ptr<
                                                                        rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                                                    shared_ptr<rs2lib::IfType>::operator=(
                                                                        (shared_ptr<rs2lib::IfType>*)local_128,
                                                                        (shared_ptr*)&local_148);
                                                                    local_148.~shared_ptr();
                                                                    new (&local_148) shared_ptr<
                                                                        rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                                                    shared_ptr<rs2lib::IfType>::operator=(
                                                                        (shared_ptr<rs2lib::IfType>*)local_150,
                                                                        (shared_ptr*)&local_148);
                                                                    local_148.~shared_ptr();
                                                                }
                                                                cVar5 = NeedBuildMinimenu((Client*)local_50._8_8_);
                                                                if (cVar5 != '\0') {
                                                                    (*(Minimenu**)(local_50._8_8_ + 52344))
                                                                        ->ResetMinimenu();
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            lVar14 = local_110->HeapBeginPtr();
                                            in_stack_fffffffffffffd10 = (uint)local_80;
                                            in_stack_fffffffffffffd08 = (int)local_88;
                                            LoopInterface((Client*)local_50._8_8_, *(int*)(lVar14 + 4), local_78,
                                                          local_74, local_70, local_6c, in_stack_fffffffffffffd08,
                                                          in_stack_fffffffffffffd10);
                                        }
                                    }
                                }
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                cVar5 = local_248->OverlayExistsAtIndex(*(int*)(lVar14 + 680));
                                if (cVar5 != '\0') {
                                    lVar14 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_40);
                                    pAVar32 = (Array*)local_248->GetOverlay(*(int*)(lVar14 + 680));
                                    if (pAVar32 != (Array*)0) {
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        iVar10 = *(int*)(lVar14 + 96);
                                        lVar14 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_40);
                                        in_stack_fffffffffffffd10 = (int)local_88 - iVar10;
                                        in_stack_fffffffffffffd08 = local_6c;
                                        LoopLayer((Client*)local_50._8_8_, pAVar32, -1, local_78, local_74, local_70,
                                                  local_6c, in_stack_fffffffffffffd10,
                                                  (int)local_80 - *(int*)(lVar14 + 100));
                                    }
                                }
                            }
                        }
                    LAB_1000f3b94:
                        pOVar36 = local_118;
                        param_1 = local_160;
                        param_2 = local_21c;
                    }
                }
            LAB_1000f3bb0:
                local_40.~shared_ptr();
                uVar35 = local_2a8 + 1;
                uVar15 = param_1->end();
            } while (uVar35 < uVar15);
        }
    }

    // 0x1000f6c50, 48 bytes, placed by class name and neighbouring functions
    // Client::ToggleUI()
    void Client::ToggleUI() {
        NXTPixToolkit* this_00;
        byte bVar1;

        this_00 = field_144;
        bVar1 = this_00->GetUIVisible();
        this_00->ShowUI((bool)(bVar1 ^ 1));
    }

    // 0x1000f6c80, 64 bytes, placed by class name and neighbouring functions
    // Client::ClientDrop()
    void Client::ClientDrop() {
        ServerConnection* this_00;

        if ((&field_19120)->operator_cast_to_bool()) {
            this_00 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            this_00->Close();
        }
    }

    // 0x1000f6cc0, 32 bytes, placed by class name and neighbouring functions
    // Client::SetClanTransit()
    void Client::SetClanTransit() {
        field_2506352 = field_2505808;
        field_2506356 = field_2505808;
    }

    // 0x1000f6ce0, 16 bytes, placed by class name and neighbouring functions
    // Client::ShowCoord()
    void Client::ShowCoord() {
        m_pWorldmap->field_0 = m_pWorldmap->field_0 ^ 1;
    }

    // 0x1000f6cf0, 16 bytes, placed by class name and neighbouring functions
    // Client::HardError()
    void Client::HardError() {
        field_54884 = 1;
    }

    // 0x1000f6d00, 16 bytes, placed by class name and neighbouring functions
    // Client::ToggleRenderSelf()
    void Client::ToggleRenderSelf() {
        field_52033 = field_52033 ^ 1;
    }

    // 0x1000f6d10, 32 bytes, placed by class name and neighbouring functions
    // Client::ToggleMouseOverText()
    void Client::ToggleMouseOverText() {
        undefined1* puVar1;

        puVar1 = &field_52344->field_2;
        *puVar1 = *puVar1 ^ 1;
    }

    // 0x1000f6d30, 16 bytes, placed by class name and neighbouring functions
    // Client::ToggleAntiDrag()
    void Client::ToggleAntiDrag() {
        field_54384 = field_54384 ^ 1;
    }

    // 0x1000f6d40, 176 bytes, placed by class name and neighbouring functions
    // Client::SteamShop()
    void Client::SteamShop() {
        shared_ptr<ApplicationContext>* this_00;
        long* plVar1;
        function local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (shared_ptr<ApplicationContext>*)(*(code*)**(undefined8**)this)();
        plVar1 = (long*)shared_ptr<ApplicationContext>::operator->(this_00);
        plVar1 = (long*)(**(code**)(*plVar1 + 72))(plVar1);
        std::function<bool()>::function<Client::SteamShop()::__9, void>(local_58, plVar1);
        (**(code**)(*plVar1 + 80))(plVar1, 0, 10);
        AddScheduledFunction(this, local_58, 50, -1);
        std::function<bool()>::~function((function<bool()>*)local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000f6e00, 256 bytes, placed by class name and neighbouring functions
    // Client::AddScheduledFunction(std::function<bool ()>&, unsigned long long, long long)
    /* Client::AddScheduledFunction(std::function<bool ()>&, unsigned long long, long
   long) */

    longlong Client::AddScheduledFunction(function* param_1, ulonglong param_2, longlong param_3) {
        long* plVar1;
        ulonglong uVar2;
        function<bool()>* this_00;
        longlong local_98[3];
        longlong local_80;
        TransitionInfo local_78;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_3 == -1) {
            param_3 = field_7306792;
            field_7306792 = param_3 + 1;
        }
        local_80 = param_3;
        RemoveScheduledFunction(this, param_3);
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_78._16_8_ = 0;
        uStack_60 = 0;
        local_78.field_0 = 0;
        local_78.field_8 = 0;
        new (&local_78) ScheduledFunction();
        eastl::hashtable<long long, eastl::pair<long long const, Client::ScheduledFunction>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, Client::ScheduledFunction>>,
                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::emplace<long long&, Client::ScheduledFunction>(local_98,
                                                                               (ScheduledFunction*)&field_7306736);
        local_78.~TransitionInfo();
        plVar1 = (long*)eastl::hash_map<
            long long, Client::ScheduledFunction, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator,
            false>::operator[]((hash_map<long long, Client::ScheduledFunction, eastl::hash<long long>,
                                         eastl::equal_to<long long>, eastl::allocator, false>*)&field_7306736,
                               &local_80);
        this_00 = (function<bool()>*)(plVar1 + 2);
        std::function<bool()>::operator=(this_00, param_1);
        uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this_00);
        *plVar1 = uVar2 + param_2;
        plVar1[1] = param_2;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_80;
    }

    // 0x1000f6f00, 32 bytes, placed by class name and neighbouring functions
    // Client::ReloadHighlights()
    void Client::ReloadHighlights() {
        m_highlightManager->LoadFromFiles();
    }

    // 0x1000f6f30, 176 bytes, placed by class name and neighbouring functions
    // Client::SendTestNotification()
    void Client::SendTestNotification() {
        eastl::string local_68[32];
        allocator local_48[8];
        eastl::string local_40[32];
        allocator local_20[8];

        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_68, "Heyo!", local_48);
        eastl::allocator::allocator(local_20, "EASTL basic_string");
        eastl::string::basic_string(local_40, "This is a friendly local notification!", local_20);
        notifications::SendLocalNotification((basic_string*)local_68, (basic_string*)local_40, 0, 0);
        eastl::string::~basic_string(local_40);
        eastl::string::~basic_string(local_68);
    }

    // 0x1000f6fe0, 192 bytes, placed by class name and neighbouring functions
    // Client::PrintDrawDistance()
    void Client::PrintDrawDistance() {
        uint uVar1;
        eastl::string local_68[32];
        eastl::string local_48[32];
        allocator local_28[8];

        std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
        uVar1 = dash3d::world::GetDrawDistance();
        eastl::string::basic_string(local_68);
        eastl::string::append_sprintf((char*)local_68, "Current Draw Distance is %d", (ulong)uVar1);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_48, "", local_28);
        AddChat(this, 99, (basic_string*)local_48, (basic_string*)local_68);
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_68);
    }

    // 0x1000f70b0, 304 bytes, placed by class name and neighbouring functions
    // Client::ToggleSkybox()
    void Client::ToggleSkybox() {
        bool bVar1;
        eastl::string local_70[32];
        allocator local_50[8];
        eastl::string local_48[32];
        allocator local_28[8];

        bVar1 = field_7164752;
        field_7164752 = (bool)(bVar1 ^ 1);
        if (bVar1 == false) {
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_70, "", local_50);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "Turning on Skybox", local_28);
            AddChat(this, 99, (basic_string*)local_70, (basic_string*)local_48);
        } else {
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_70, "", local_50);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "Turning off Skybox", local_28);
            AddChat(this, 99, (basic_string*)local_70, (basic_string*)local_48);
        }
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_70);
        (field_7164656, field_7164752)->DrawSkybox();
    }

    // 0x1000f71e0, 80 bytes, placed by class name and neighbouring functions
    // Client::SetSkyboxColour(int, int, int)
    void Client::SetSkyboxColour(int param_1, int param_2, int param_3) {
        FrameTime::GetCurrentTimeNS();
        field_7164753 = 1;
        Skybox::SetSkyboxColour((float)param_1, (float)param_2, (float)param_3, (ulonglong)field_7164656);
    }

    // 0x1000f7230, 192 bytes, placed by class name and neighbouring functions
    // Client::DefaultSkybox()
    void Client::DefaultSkybox() {
        eastl::string local_70[32];
        allocator local_50[8];
        eastl::string local_48[32];
        allocator local_28[8];

        field_7164753 = 0;
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_70, "", local_50);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_48, "Resetting Skybox Colour", local_28);
        AddChat(this, 99, (basic_string*)local_70, (basic_string*)local_48);
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_70);
    }

    // 0x1000f72f0, 320 bytes, placed by class name and neighbouring functions
    // Client::ToggleFog()
    void Client::ToggleFog() {
        undefined1* this_00;
        ulonglong uVar1;
        byte bVar2;
        eastl::string local_70[32];
        allocator local_50[8];
        eastl::string local_48[32];
        allocator local_28[8];

        this_00 = &field_7164760;
        bVar2 = this_00->Enabled();
        uVar1 = FrameTime::GetCurrentTimeMS();
        this_00->SetEnabled((bool)(bVar2 ^ 1), uVar1);
        if (this_00->Enabled() == '\0') {
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_70, "", local_50);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "Turning off Fog Effect", local_28);
            AddChat(this, 99, (basic_string*)local_70, (basic_string*)local_48);
        } else {
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_70, "", local_50);
            eastl::allocator::allocator(local_28, "EASTL basic_string");
            eastl::string::basic_string(local_48, "Turning on Fog Effect", local_28);
            AddChat(this, 99, (basic_string*)local_70, (basic_string*)local_48);
        }
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_70);
    }

    // 0x1000f7430, 64 bytes, placed by class name and neighbouring functions
    // Client::SetFogIntensity(int)
    void Client::SetFogIntensity(int param_1) {
        ulonglong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        *(undefined1*)((long)&field_7164880 + 1) = 1;
        (&field_7164760, param_1, uVar1)->SetFogIntensity();
    }

    // 0x1000f7470, 64 bytes, placed by class name and neighbouring functions
    // Client::SetFogIntensity(float)
    void Client::SetFogIntensity(float param_1) {
        ulonglong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        *(undefined1*)((long)&field_7164880 + 1) = 1;
        (&field_7164760, param_1, uVar1)->SetFogIntensity();
    }

    // 0x1000f74b0, 64 bytes, placed by class name and neighbouring functions
    // Client::SetFogDistance(int)
    void Client::SetFogDistance(int param_1) {
        ulonglong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        *(undefined1*)&field_7164880 = 1;
        (&field_7164760, param_1, uVar1)->SetFogDistance();
    }

    // 0x1000f74f0, 64 bytes, placed by class name and neighbouring functions
    // Client::SetFogDistance(float)
    void Client::SetFogDistance(float param_1) {
        ulonglong uVar1;

        uVar1 = FrameTime::GetCurrentTimeMS();
        *(undefined1*)&field_7164880 = 1;
        (&field_7164760, param_1, uVar1)->SetFogDistance();
    }

    // 0x1000f7530, 192 bytes, placed by class name and neighbouring functions
    // Client::DefaultFogSettings()
    void Client::DefaultFogSettings() {
        eastl::string local_70[32];
        allocator local_50[8];
        eastl::string local_48[32];
        allocator local_28[8];

        field_7164880 = 0;
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_70, "", local_50);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_48, "Resetting Fog Settings", local_28);
        AddChat(this, 99, (basic_string*)local_70, (basic_string*)local_48);
        eastl::string::~basic_string(local_48);
        eastl::string::~basic_string(local_70);
    }

    // 0x1000f75f0, 160 bytes, placed by class name and neighbouring functions
    // Client::GetLootSourceCount()
    void Client::GetLootSourceCount() {
        undefined4 uVar1;
        basic_string local_58[32];
        eastl::string local_38[32];
        allocator local_18[8];

        uVar1 = m_lootTrackerSaveHandler->GetNumberOfTrackedSources();
        eastl::string::basic_string(local_58, "Current number of sources being tracked: %d", uVar1);
        eastl::allocator::allocator(local_18, "EASTL basic_string");
        eastl::string::basic_string(local_38, "", local_18);
        AddChat(this, 99, (basic_string*)local_38, local_58);
        eastl::string::~basic_string(local_38);
        local_58->~basic_string();
    }

    // 0x1000f7690, 160 bytes, placed by class name and neighbouring functions
    // Client::ResetLootTracker()
    void Client::ResetLootTracker() {
        basic_string local_58[32];
        eastl::string local_38[32];
        allocator local_18[8];

        m_lootTrackerSaveHandler->Clear();
        eastl::string::basic_string(
            local_58, "Resetting loot tracker. Clearning Loot table and Resetting counts to 0 for Source table.");
        eastl::allocator::allocator(local_18, "EASTL basic_string");
        eastl::string::basic_string(local_38, "", local_18);
        AddChat(this, 99, (basic_string*)local_38, local_58);
        eastl::string::~basic_string(local_38);
        local_58->~basic_string();
    }

    // 0x1000f7730, 80 bytes, placed by class name and neighbouring functions
    // Client::SetUsingRSeven(bool, bool)
    void Client::SetUsingRSeven(bool param_1, bool param_2) {
        char cVar1;
        long* plVar2;
        undefined3 in_register_00000011;

        field_53258 = param_1;
        if (CONCAT31(in_register_00000011, param_2) != 0) {
            plVar2 = (long*)OSRenderCore_AudioThread::Instance();
            cVar1 = (((long)plVar2 + *(long*)(*plVar2 + -24)))->IsLogicThread();
            if (cVar1 != '\0') {
                RebuildMap(this);
                return;
            }
        }
        field_53257 = 1;
    }

    // 0x1000f77a0, 32 bytes, placed by class name and neighbouring functions
    // Client::RequestMapRebuild()
    void Client::RequestMapRebuild() {
        field_53257 = 1;
        field_53258 = m_usingRSeven;
    }

    // 0x1000f77c0, 16 bytes, placed by class name and neighbouring functions
    // Client::GetFog()
    undefined1* Client::GetFog() {
        return &field_7164760;
    }

    // 0x1000f77d0, 80 bytes, placed by class name and neighbouring functions
    // Client::DoCheat(eastl::string const&)
    void Client::DoCheat(basic_string* param_1) {
        Console* this;
        char* pcVar1;

        this = (Console*)std::unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>::operator->(
            (unique_ptr<OSClientConsole, std::default_delete<OSClientConsole>>*)(param_1 + 7306800));
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        QueueCommand(pcVar1, "", -1, true);
    }

    // 0x1000f7820, 176 bytes, placed by class name and neighbouring functions
    // Client::SendCheatToServer(eastl::string const&)
    void Client::SendCheatToServer(basic_string* param_1) {
        ServerConnection* pSVar1;
        undefined8 uVar2;
        long lVar3;
        undefined1 local_60[64];

        if (field_8448 == 30) {
            pSVar1 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar2 = pSVar1->GetOutgoingEncryption();
            local_60->MakeClientMessage(11, uVar2);
            lVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), lVar3 + 1);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_60 + 8), param_1, false);
            pSVar1 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar1->SendClientMessage(local_60);
            local_60->~ClientMessage();
        }
    }

    // 0x1000f78d0, 128 bytes, placed by class name and neighbouring functions
    // Client::RemoveScheduledFunction(long long)
    ulong Client::RemoveScheduledFunction(longlong param_1) {
        bool bVar1;
        undefined7 extraout_var;
        hashtable_iterator_base* extraout_RDX;
        eastl local_58[16];
        hashtable_iterator_base local_48[16];
        undefined8 local_38;
        undefined8 local_30;
        longlong local_28;

        local_28 = param_1;
        eastl::hashtable<jag::graphics::TextureAtlas*,
                         eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>, eastl::allocator,
                         eastl::use_first<eastl::pair<jag::graphics::TextureAtlas* const, render::SamplerState>>,
                         eastl::equal_to<jag::graphics::TextureAtlas*>, eastl::hash<jag::graphics::TextureAtlas*>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::find((TextureAtlas**)local_58);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_58, local_48, extraout_RDX);
        if (bVar1) {
            new (&local_38)
                eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_58);
            eastl::hashtable<long long, eastl::pair<long long const, Client::ScheduledFunction>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, Client::ScheduledFunction>>,
                             eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                             true>::erase(local_48, &field_7306736, local_38, local_30);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x1000f7b80, 400 bytes, placed by class name and neighbouring functions
    // Client::CinemaCameraMovePosition(int, int, int)
    void Client::CinemaCameraMovePosition(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;

        iVar2 = field_53088;
        if (iVar2 < param_1) {
            iVar2 = iVar2 + field_53016 + ((param_1 - iVar2) * field_53020) / 1000;
            if (param_1 < iVar2) {
                iVar2 = param_1;
            }
            field_53088 = iVar2;
        }
        iVar2 = field_53088;
        if (iVar2 - param_1 != 0 && param_1 <= iVar2) {
            iVar1 = (int)((ulong)((long)((iVar2 - param_1) * field_53020) * -274877907) >> 32);
            iVar2 = (iVar2 - field_53016) + ((iVar1 >> 6) - (iVar1 >> 31));
            if (iVar2 < param_1) {
                iVar2 = param_1;
            }
            field_53088 = iVar2;
        }
        iVar2 = field_53092;
        if (iVar2 < param_3) {
            iVar2 = iVar2 + field_53016 + ((param_3 - iVar2) * field_53020) / 1000;
            if (param_3 < iVar2) {
                iVar2 = param_3;
            }
            field_53092 = iVar2;
        }
        iVar2 = field_53092;
        if (iVar2 - param_3 != 0 && param_3 <= iVar2) {
            iVar1 = (int)((ulong)((long)((iVar2 - param_3) * field_53020) * -274877907) >> 32);
            iVar2 = (iVar2 - field_53016) + ((iVar1 >> 6) - (iVar1 >> 31));
            if (iVar2 < param_3) {
                iVar2 = param_3;
            }
            field_53092 = iVar2;
        }
        iVar2 = field_53096;
        if (iVar2 < param_2) {
            iVar2 = iVar2 + field_53016 + ((param_2 - iVar2) * field_53020) / 1000;
            if (param_2 < iVar2) {
                iVar2 = param_2;
            }
            field_53096 = iVar2;
        }
        iVar2 = field_53096;
        if (iVar2 - param_2 != 0 && param_2 <= iVar2) {
            iVar1 = (int)((ulong)((long)((iVar2 - param_2) * field_53020) * -274877907) >> 32);
            iVar2 = (iVar2 - field_53016) + ((iVar1 >> 6) - (iVar1 >> 31));
            if (iVar2 < param_2) {
                iVar2 = param_2;
            }
            field_53096 = iVar2;
        }
    }

    // 0x1000f7d10, 368 bytes, placed by class name and neighbouring functions
    // Client::CinemaCameraMoveAngle(int, int)
    void Client::CinemaCameraMoveAngle(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar1 = dash3d::world::ClampPitchAngle(param_1);
        iVar2 = field_53100;
        if (iVar2 < iVar1) {
            iVar2 = iVar2 + field_53036 + ((iVar1 - iVar2) * field_53040) / 1000;
            if (iVar1 < iVar2) {
                iVar2 = iVar1;
            }
        LAB_1000f7d8e:
            field_53100 = iVar2;
        } else if (iVar2 - iVar1 != 0 && iVar1 <= iVar2) {
            iVar3 = (int)((ulong)((long)((iVar2 - iVar1) * field_53040) * -274877907) >> 32);
            iVar2 = (iVar2 - field_53036) + ((iVar3 >> 6) - (iVar3 >> 31));
            if (iVar2 < iVar1) {
                iVar2 = iVar1;
            }
            goto LAB_1000f7d8e;
        }
        iVar1 = param_2 - field_53104;
        iVar2 = iVar1 + 2048;
        if (-1025 < iVar1) {
            iVar2 = iVar1;
        }
        if (1024 < iVar1) {
            iVar2 = iVar1 + -2048;
        }
        if (iVar2 < 1) {
            if (-1 < iVar2)
                goto LAB_1000f7df9;
            iVar1 = (int)((ulong)((long)-(field_53040 * iVar2) * -274877907) >> 32);
            iVar3 = (iVar1 >> 6) - (iVar1 >> 31);
            iVar1 = -field_53036;
        } else {
            iVar3 = (field_53040 * iVar2) / 1000;
            iVar1 = field_53036;
        }
        field_53104 = field_53104 + iVar1 + iVar3 & 2047;
    LAB_1000f7df9:
        iVar3 = param_2 - field_53104;
        iVar1 = iVar3 + 2048;
        if (-1025 < iVar3) {
            iVar1 = iVar3;
        }
        if (1024 < iVar3) {
            iVar1 = iVar3 + -2048;
        }
        if ((((iVar1 < 0) && (0 < iVar2)) || (0 < iVar1 && iVar2 < 0)) || (field_53104 == param_2)) {
            field_53104 = param_2;
        }
    }

    // 0x1000fd4c0, 15664 bytes, placed by __FILE__ string
    // Client::DrawLayer(Array<shared_ptr<rs2lib::IfType>, eastl::allocator> const&, int, int, int, int, int, int, int, int)
    void Client::DrawLayer(Array* param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                           int param_8, int param_9) {
        undefined4 uVar1;
        Worldmap* this_00;
        unique_ptr* this_01;
        shared_ptr<ClientPlayer>* this_02;
        uint uVar2;
        bool bVar3;
        char cVar4;
        byte bVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        uint uVar8;
        Pix3D* pPVar9;
        long lVar10;
        ulong uVar11;
        shared_ptr* psVar12;
        int* piVar13;
        undefined4* puVar14;
        char* pcVar15;
        uint* puVar16;
        DeviceOptions* this_03;
        EnvLightProbeSettings* this_04;
        ServerConnection* pSVar17;
        InputFieldKeyboardHandler* pIVar18;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        undefined1* puVar19;
        Minimap* pMVar20;
        long lVar21;
        long lVar22;
        long* plVar23;
        undefined8 uVar24;
        RollingAverageCounter* pRVar25;
        TitleFlames* this_05;
        IfType* pIVar26;
        PixfontGeneric* pPVar27;
        Pix32* pPVar28;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        FixedPrimitiveBatchData<256ul>* this_07;
        unique_ptr<configdecoder::NPCTypeCustomisation, BucketDeleter<configdecoder::NPCTypeCustomisation>>* this_08;
        SeqType* pSVar29;
        bool* pbVar30;
        array<int, 2048ul>* paVar31;
        NXTPixToolkit* this_09;
        SoundInstance* this_10;
        SoftwareWorldRenderer* this_11;
        undefined8 uVar32;
        PostProcessManager* this_12;
        shared_ptr* psVar33;
        TextRun* pTVar34;
        hashtable_iterator_base* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        undefined1 uVar35;
        uint uVar36;
        int iVar37;
        ulong uVar38;
        uint uVar39;
        _func_void_TestResults_ptr_basic_string_ptr* p_Var40;
        eastl* this_13;
        Vector2T* pVVar41;
        type* ptVar42;
        array<bool, 100ul>* this_14;
        NpcType* this_15;
        GridRect* this_16;
        Client* pCVar43;
        int iVar44;
        uint uVar45;
        uint uVar46;
        int iVar47;
        int iVar48;
        undefined4 uVar49;
        int iVar50;
        unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>* this_17;
        NXTPix3D* pNVar51;
        float fVar52;
        undefined1 auVar53[16];
        NpcType* in_stack_fffffffffffffc58;
        undefined4 uVar54;
        PixfontGeneric* in_stack_fffffffffffffc60;
        ulong in_stack_fffffffffffffc68;
        undefined4 uVar55;
        StringConstants local_360[32];
        eastl::string local_340[32];
        undefined1 local_320[64];
        shared_ptr<configdecoder::ObjType> local_2e0[16];
        undefined1 local_2d0[32];
        LocationData local_2b0;
        LocationData local_2a0;
        ulong local_290;
        array<int, 100ul>* local_288;
        array<int, 100ul>* local_280;
        array<int, 100ul>* local_278;
        array<int, 100ul>* local_270;
        unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>* local_268;
        array<CoordType<UICoordSpecializer>, 4ul>* local_260;
        array<CoordType<UICoordSpecializer>, 4ul>* local_258;
        array<bool, 100ul>* local_250;
        undefined1* local_248;
        array<bool, 100ul>* local_240;
        unique_ptr* local_238;
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
        jag* local_1e0;
        jag* local_1d8;
        unique_ptr<dash3d::SoftwareWorldRenderer, std::default_delete<dash3d::SoftwareWorldRenderer>>* local_1d0;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1c8;
        shared_ptr<rs2lib::PlayerModel>* local_1c0;
        array<shared_ptr<ClientNpc>, 65536ul>* local_1b8;
        ulong local_1b0;
        shared_ptr* local_1a8;
        CoordType<UICoordSpecializer>* local_1a0;
        CoordType<UICoordSpecializer>* local_198;
        unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>* local_190;
        float local_188;
        float local_184;
        float local_180;
        float local_17c;
        XPlotBlender<graphics::XPlot_NormalAlpha> local_178[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_170[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_168[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_160[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_158[8];
        XPlotBlender<graphics::XPlot_NormalAlpha> local_150[8];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_148;
        shared_ptr<rs2lib::IfType>* local_140;
        unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>* local_138;
        shared_ptr<ClientPlayer>* local_130;
        ulong local_128;
        shared_ptr* local_120;
        int local_118;
        int local_114;
        GridRect local_110;
        undefined1 local_f0[16];
        int local_e0;
        int local_dc;
        ulong local_d8;
        undefined8 local_d0;
        undefined1 local_c8;
        int local_bc;
        Array* local_b8;
        shared_ptr local_b0[2];
        ulong local_90;
        undefined8 local_88;
        bool local_7d;
        uint local_7c;
        uint local_78;
        uint local_74;
        ulong local_70;
        NpcType* local_68;
        PixfontGeneric* local_60;
        PixfontGeneric* local_58;
        NXTPix3D* local_50;
        Client* local_48;
        long* local_40;
        shared_ptr* local_38;

        local_118 = param_2;
        local_68 = (NpcType*)(*(code*)*field_144->field_0)();
        local_68->SetClipping(param_3, param_4, param_5, param_6);
        puVar19 = &field_1120488;
        local_48 = this;
        pPVar9 = (Pix3D*)std::unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>::operator->(
            (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)puVar19);
        local_7c = param_4;
        local_78 = param_3;
        local_74 = param_5;
        pPVar9->SetClipping(param_3, param_4, param_5, param_6);
        local_138 = (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)puVar19;
        pPVar9 = (Pix3D*)std::unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>::operator->(
            (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)puVar19);
        pPVar9->SetRenderClipping();
        lVar10 = param_1->end();
        if (lVar10 != 0) {
            local_1a8 = (shared_ptr*)local_48->field_2505104;
            local_288 = (array<int, 100ul>*)&local_48->field_2506876;
            local_280 = (array<int, 100ul>*)&local_48->field_2507276;
            local_278 = (array<int, 100ul>*)&local_48->field_2507676;
            local_270 = (array<int, 100ul>*)&local_48->field_2508076;
            local_260 = (array<CoordType<UICoordSpecializer>, 4ul>*)&local_48->field_8560;
            local_258 = (array<CoordType<UICoordSpecializer>, 4ul>*)&local_48->field_8576;
            local_188 = (float)(int)local_78;
            local_1a0 = (CoordType<UICoordSpecializer>*)&local_48->field_2505164;
            local_184 = (float)(int)local_74;
            local_140 = (shared_ptr<rs2lib::IfType>*)&local_48->field_2505120;
            local_180 = (float)(int)local_7c;
            local_198 = (CoordType<UICoordSpecializer>*)&local_48->field_2505168;
            local_17c = (float)param_6;
            local_190 = (unique_ptr<minimap::Minimap, std::default_delete<minimap::Minimap>>*)&local_48->field_8152;
            local_1e8 = (array<bool, 100ul>*)&local_48->field_2506676;
            local_250 = (array<bool, 100ul>*)&local_48->field_2506576;
            local_268 =
                (unique_ptr<option::DeviceOptions, std::default_delete<option::DeviceOptions>>*)&local_48->field_8376;
            local_238 = (unique_ptr*)&local_48->field_19120;
            local_230 = (RollingAverageCounter*)local_48->field_8;
            local_228 = (RollingAverageCounter*)local_48->field_64;
            local_220 = (RollingAverageCounter*)local_48->field_52936;
            local_218 = (RollingAverageCounter*)local_48->field_6814944;
            local_210 = (RollingAverageCounter*)local_48->field_6815000;
            local_208 = (CoordMapSquare*)&local_48->field_19056;
            local_200 = (CoordMapSquare*)&local_48->field_19060;
            local_1f8 = (CoordMapSquare*)&local_48->field_19064;
            local_1f0 = (CoordMapSquare*)&local_48->field_19068;
            local_130 = (shared_ptr<ClientPlayer>*)local_48->field_52016;
            local_120 = (shared_ptr*)local_48->field_2505056;
            local_248 = &local_48->field_53160;
            local_240 = (array<bool, 100ul>*)&local_48->field_2506776;
            local_1d8 = (jag*)local_48->field_2505072;
            local_1c8 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_48->field_1104224;
            local_1b8 = (array<shared_ptr<ClientNpc>, 65536ul>*)&local_48->field_55272;
            local_1c0 = (shared_ptr<rs2lib::PlayerModel>*)&local_48->field_2508968;
            local_1d0 = (unique_ptr<dash3d::SoftwareWorldRenderer,
                                    std::default_delete<dash3d::SoftwareWorldRenderer>>*)&local_48->field_1120496;
            local_1e0 = (jag*)local_48->field_52424;
            uVar38 = 0;
            local_148 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_1;
            do {
                local_290 = uVar38;
                psVar12 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)param_1, uVar38);
                bVar3 = operator==(psVar12, (_func_decltype_nullptr*)0);
                if ((!bVar3) &&
                    ((lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12),
                      *(int*)(lVar10 + 88) == local_118 ||
                          ((local_118 == -1412584499 && (bVar3 = operator!=(psVar12, local_1a8), !bVar3)))))) {
                    uVar36 = param_9;
                    local_38 = psVar12;
                    if (param_9 == -1) {
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        pCVar43 = local_48;
                        iVar44 = *(int*)(lVar10 + 64);
                        piVar13 =
                            (int*)std::array<int, 100ul>::operator[](local_288, (long)(int)local_48->field_2506568);
                        *piVar13 = iVar44 + param_7;
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        iVar44 = *(int*)(lVar10 + 68);
                        piVar13 =
                            (int*)std::array<int, 100ul>::operator[](local_280, (long)(int)pCVar43->field_2506568);
                        *piVar13 = iVar44 + param_8;
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        uVar49 = *(undefined4*)(lVar10 + 72);
                        puVar14 = (undefined4*)std::array<int, 100ul>::operator[](local_278,
                                                                                  (long)(int)pCVar43->field_2506568);
                        *puVar14 = uVar49;
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        uVar49 = *(undefined4*)(lVar10 + 76);
                        puVar14 = (undefined4*)std::array<int, 100ul>::operator[](local_270,
                                                                                  (long)(int)pCVar43->field_2506568);
                        *puVar14 = uVar49;
                        uVar36 = pCVar43->field_2506568;
                        pCVar43->field_2506568 = uVar36 + 1;
                    }
                    psVar12 = local_38;
                    lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_38);
                    *(uint*)(lVar10 + 2044) = uVar36;
                    iVar44 = local_48->field_8488;
                    local_58 = (PixfontGeneric*)(ulong)uVar36;
                    lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                    *(int*)(lVar10 + 2048) = iVar44;
                    pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                    if ((*pcVar15 == '\0') || (cVar4 = Hide(local_48, psVar12), cVar4 == '\0')) {
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        if (0 < *(int*)(lVar10 + 20)) {
                            ClientComponent(local_48, psVar12);
                        }
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        local_40 = (long*)(ulong)(uint)(*(int*)(lVar10 + 64) + param_7);
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        local_50 = (NXTPix3D*)(ulong)(uint)(*(int*)(lVar10 + 68) + param_8);
                        auVar53 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        uVar49 = *(undefined4*)(auVar53._0_8_ + 140);
                        bVar3 = operator==((jag*)local_1a8, psVar12, auVar53._8_8_);
                        if (bVar3) {
                            if (local_118 != -1412584499) {
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_38);
                                pCVar43 = local_48;
                                if (*(char*)(lVar10 + 784) == '\0') {
                                    local_48->field_2505192 = (Array*)local_148;
                                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                        (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_f0, param_7);
                                    *(undefined4*)&pCVar43->field_2505200 = local_f0._0_4_;
                                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                        (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_f0, param_8);
                                    *(undefined4*)&pCVar43->field_2505204 = local_f0._0_4_;
                                    goto LAB_1000fd7d0;
                                }
                            }
                            if ((local_48->field_2505184 != '\0') && (local_48->field_2505160 != '\0')) {
                                puVar16 =
                                    (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](local_260, 0);
                                local_f0._0_4_ = *puVar16;
                                puVar16 =
                                    (uint*)std::array<CoordType<UICoordSpecializer>, 4ul>::operator[](local_258, 0);
                                pCVar43 = local_48;
                                local_b0[0]._0_4_ = *puVar16;
                                CoordType<UICoordSpecializer>::operator-=((CoordType<UICoordSpecializer>*)local_f0,
                                                                          local_48->field_2505136);
                                CoordType<UICoordSpecializer>::operator-=((CoordType<UICoordSpecializer>*)local_b0,
                                                                          pCVar43->field_2505140);
                                cVar4 = CoordType<UICoordSpecializer>::operator<(
                                    (CoordType<UICoordSpecializer>*)local_f0, pCVar43->field_2505164);
                                if (cVar4 != '\0') {
                                    local_f0._0_4_ = local_48->field_2505164;
                                }
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_38);
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                    local_178, *(int*)(lVar10 + 72));
                                local_110.field_0 = CoordType<UICoordSpecializer>::operator+(
                                    (CoordType<UICoordSpecializer>*)local_f0, local_178._0_4_);
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(local_140);
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                    local_170, *(int*)(lVar10 + 72));
                                uVar6 = CoordType<UICoordSpecializer>::operator+(local_1a0, local_170._0_4_);
                                cVar4 = CoordType<UICoordSpecializer>::operator>(
                                    (CoordType<UICoordSpecializer>*)&local_110, uVar6);
                                if (cVar4 != '\0') {
                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(local_140);
                                    iVar44 = *(int*)(lVar10 + 72);
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_38);
                                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                        local_168, iVar44 - *(int*)(lVar10 + 72));
                                    local_f0._0_4_ =
                                        CoordType<UICoordSpecializer>::operator+(local_1a0, local_168._0_4_);
                                }
                                cVar4 = CoordType<UICoordSpecializer>::operator<(
                                    (CoordType<UICoordSpecializer>*)local_b0, local_48->field_2505168);
                                if (cVar4 != '\0') {
                                    local_b0[0]._0_4_ = local_48->field_2505168;
                                }
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_38);
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                    local_160, *(int*)(lVar10 + 76));
                                local_110.field_0 = CoordType<UICoordSpecializer>::operator+(
                                    (CoordType<UICoordSpecializer>*)local_b0, local_160._0_4_);
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(local_140);
                                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                    local_158, *(int*)(lVar10 + 76));
                                uVar6 = CoordType<UICoordSpecializer>::operator+(local_198, local_158._0_4_);
                                cVar4 = CoordType<UICoordSpecializer>::operator>(
                                    (CoordType<UICoordSpecializer>*)&local_110, uVar6);
                                if (cVar4 != '\0') {
                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(local_140);
                                    iVar44 = *(int*)(lVar10 + 76);
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_38);
                                    graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                        local_150, iVar44 - *(int*)(lVar10 + 76));
                                    local_b0[0]._0_4_ =
                                        CoordType<UICoordSpecializer>::operator+(local_198, local_150._0_4_);
                                }
                                local_40 = (long*)local_f0->GetX();
                                local_50 = (NXTPix3D*)local_b0->GetX();
                            }
                            psVar12 = local_38;
                            lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_38);
                            if (*(char*)(lVar10 + 784) == '\0') {
                                uVar49 = 128;
                            }
                            local_70 = CONCAT44(local_70._4_4_, uVar49);
                        } else {
                            local_70 = CONCAT44(local_70._4_4_, uVar49);
                            psVar12 = local_38;
                        }
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        iVar44 = *(int*)(lVar10 + 12);
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        iVar47 = *(int*)(lVar10 + 72);
                        uVar36 = (uint)local_40;
                        uVar45 = iVar47 + uVar36;
                        lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                        psVar12 = local_38;
                        uVar8 = (uint)local_50;
                        uVar39 = *(int*)(lVar10 + 76) + uVar8;
                        if (iVar44 == 9) {
                            if (iVar47 < 0) {
                                uVar46 = uVar45;
                                uVar45 = uVar36;
                            } else {
                                uVar46 = uVar36;
                            }
                            uVar2 = uVar39;
                            uVar36 = uVar8;
                            if (-1 < *(int*)(lVar10 + 76)) {
                                uVar2 = uVar8;
                                uVar36 = uVar39;
                            }
                            uVar8 = uVar2;
                            uVar45 = uVar45 + 1;
                            uVar39 = uVar36 + 1;
                            uVar36 = uVar46;
                        }
                        if ((int)uVar36 <= (int)local_78) {
                            uVar36 = local_78;
                        }
                        local_60 = (PixfontGeneric*)CONCAT44(local_60._4_4_, uVar36);
                        if ((int)uVar8 <= (int)local_7c) {
                            uVar8 = local_7c;
                        }
                        if ((int)local_74 <= (int)uVar45) {
                            uVar45 = local_74;
                        }
                        if (param_6 <= (int)uVar39) {
                            uVar39 = param_6;
                        }
                        pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_38);
                        if ((*pcVar15 == '\0') || (((int)(uint)local_60 < (int)uVar45 && ((int)uVar8 < (int)uVar39)))) {
                            lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                            if (*(int*)(lVar10 + 20) == 0) {
                            LAB_1000fe5b8:
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                iVar44 = *(int*)(lVar10 + 12);
                                pcVar15 =
                                    (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                psVar12 = local_38;
                                uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                if (iVar44 == 0) {
                                    if (*pcVar15 == '\0') {
                                        cVar4 = Hide(local_48, local_38);
                                        uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                        uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                        uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                        if (cVar4 != '\0') {
                                            bVar3 = operator!=(local_120, psVar12);
                                            uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                            uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                            uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                            if (bVar3)
                                                goto LAB_1000fd7d0;
                                        }
                                    }
                                    local_88 = (Worldmap*)CONCAT44(local_88._4_4_, uVar8);
                                    local_90 = CONCAT44(local_90._4_4_, uVar45);
                                    pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                    if (*pcVar15 == '\0') {
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar44 = *(int*)(lVar10 + 100);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar47 = *(int*)(lVar10 + 108);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        if (iVar47 - *(int*)(lVar10 + 76) < iVar44) {
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            iVar44 = *(int*)(lVar10 + 108);
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            iVar47 = *(int*)(lVar10 + 76);
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            *(int*)(lVar10 + 100) = iVar44 - iVar47;
                                        }
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        if (*(int*)(lVar10 + 100) < 0) {
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            *(undefined4*)(lVar10 + 100) = 0;
                                        }
                                    }
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    local_b8 = (Array*)CONCAT44(local_b8._4_4_, *(undefined4*)(lVar10 + 4));
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    iVar37 = (int)local_40 - *(int*)(lVar10 + 96);
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    pCVar43 = local_48;
                                    iVar47 = (int)local_50;
                                    iVar44 = iVar47 - *(int*)(lVar10 + 100);
                                    in_stack_fffffffffffffc68 = CONCAT44(uVar55, iVar44);
                                    in_stack_fffffffffffffc60 = (PixfontGeneric*)CONCAT44(uVar6, iVar37);
                                    in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(uVar49, uVar39);
                                    DrawLayer(local_48, (Array*)local_148, (uint)local_b8, (uint)local_60,
                                              (uint)local_88, (uint)local_90, uVar39, iVar37, iVar44, (int)local_58);
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    lVar10 = ((lVar10 + 2000))->end();
                                    uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                    uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                    uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                    if (lVar10 != 0) {
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        local_b8 = (Array*)(lVar10 + 2000);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        local_bc = *(int*)(lVar10 + 4);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar44 = (int)local_40 - *(int*)(lVar10 + 96);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar47 = iVar47 - *(int*)(lVar10 + 100);
                                        in_stack_fffffffffffffc68 = CONCAT44(uVar55, iVar47);
                                        in_stack_fffffffffffffc60 = (PixfontGeneric*)CONCAT44(uVar6, iVar44);
                                        in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(uVar49, uVar39);
                                        DrawLayer(pCVar43, local_b8, local_bc, (uint)local_60, (uint)local_88,
                                                  (uint)local_90, uVar39, iVar44, iVar47, (int)local_58);
                                    }
                                    shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    eastl::hashtable<
                                        int,
                                        eastl::pair<int const,
                                                    std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                    std::default_delete<ChatHistory::HistoryBuffer>>>,
                                        eastl::allocator,
                                        eastl::use_first<eastl::pair<
                                            int const,
                                            std::unique_ptr<ChatHistory::HistoryBuffer,
                                                            std::default_delete<ChatHistory::HistoryBuffer>>>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::find((int*)local_f0);
                                    eastl::hashtable<
                                        int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::end();
                                    bVar3 = eastl::operator!=((eastl*)local_f0, (hashtable_iterator_base*)local_b0,
                                                              extraout_RDX);
                                    uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                    uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                    uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                    if (bVar3) {
                                        lVar10 = local_f0->HeapBeginPtr();
                                        in_stack_fffffffffffffc68 = CONCAT44(uVar55, (int)local_58);
                                        in_stack_fffffffffffffc60 = (PixfontGeneric*)CONCAT44(uVar6, (int)local_50);
                                        in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(uVar49, (int)local_40);
                                        DrawInterface(local_48, *(int*)(lVar10 + 4), (uint)local_60, (uint)local_88,
                                                      (uint)local_90, uVar39, (int)local_40, (int)local_50,
                                                      (int)local_58);
                                    }
                                    uVar8 = local_74;
                                    uVar36 = local_78;
                                    uVar45 = local_7c;
                                    local_68->SetClipping(local_78, local_7c, local_74, param_6);
                                    this_17 = local_138;
                                    pPVar9 = (Pix3D*)std::unique_ptr<
                                                 dash3d::SoftwarePix3D,
                                                 std::default_delete<dash3d::SoftwarePix3D>>::operator->(local_138);
                                LAB_1000fe957:
                                    pPVar9->SetClipping(uVar36, uVar45, uVar8, param_6);
                                    pPVar9 = (Pix3D*)std::unique_ptr<
                                                 dash3d::SoftwarePix3D,
                                                 std::default_delete<dash3d::SoftwarePix3D>>::operator->(this_17);
                                    pPVar9->SetRenderClipping();
                                } else if (*(int*)(pcVar15 + 12) == 11) {
                                    cVar4 = Hide(local_48, local_38);
                                    if ((cVar4 != '\0') && (bVar3 = operator!=(local_120, psVar12), bVar3))
                                        goto LAB_1000fd7d0;
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    lVar10 = ((lVar10 + 2000))->end();
                                    uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                    uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                    uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                    if (lVar10 != 0) {
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        local_88 = (Worldmap*)(lVar10 + 2000);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        local_b8 = (Array*)CONCAT44(local_b8._4_4_, *(undefined4*)(lVar10 + 4));
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar47 = (int)local_40 - *(int*)(lVar10 + 96);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar44 = (int)local_50 - *(int*)(lVar10 + 100);
                                        in_stack_fffffffffffffc68 = CONCAT44(uVar55, iVar44);
                                        in_stack_fffffffffffffc60 = (PixfontGeneric*)CONCAT44(uVar6, iVar47);
                                        in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(uVar49, uVar39);
                                        DrawLayer(local_48, (Array*)local_88, (uint)local_b8, (uint)local_60, uVar8,
                                                  uVar45, uVar39, iVar47, iVar44, (int)local_58);
                                    }
                                    uVar8 = local_74;
                                    uVar36 = local_78;
                                    uVar45 = local_7c;
                                    local_68->SetClipping(local_78, local_7c, local_74, param_6);
                                    this_17 = local_138;
                                    pPVar9 = (Pix3D*)std::unique_ptr<
                                                 dash3d::SoftwarePix3D,
                                                 std::default_delete<dash3d::SoftwarePix3D>>::operator->(local_138);
                                    goto LAB_1000fe957;
                                }
                                psVar12 = local_38;
                                if (local_48->field_52456 == 0) {
                                    pcVar15 = (char*)std::array<bool, 100ul>::operator[](local_240,
                                                                                         (long)(int)(uint)local_58);
                                    if ((*pcVar15 == '\0') && ((int)local_48->field_2508476 < 2))
                                        goto LAB_1000fd7d0;
                                }
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                if ((*(int*)(lVar10 + 12) == 0) &&
                                    (pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                         (shared_ptr<rs2lib::IfType>*)psVar12),
                                     *pcVar15 == '\0')) {
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    iVar44 = *(int*)(lVar10 + 108);
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    if (*(int*)(lVar10 + 76) < iVar44) {
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar37 = *(int*)(lVar10 + 72) + (int)local_40._0_4_;
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar44 = *(int*)(lVar10 + 100);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar47 = *(int*)(lVar10 + 76);
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        DrawScrollbar(local_48, iVar37, (int)local_50, iVar44, iVar47,
                                                      *(int*)(lVar10 + 108));
                                    }
                                }
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                if (*(int*)(lVar10 + 12) != 1) {
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    if (*(int*)(lVar10 + 12) == 3) {
                                        cVar4 = GetIfActive(local_48, psVar12);
                                        auVar53 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        plVar23 = local_40;
                                        if (cVar4 == '\0') {
                                            uVar36 = *(uint*)(auVar53._0_8_ + 116);
                                            bVar3 = operator==((jag*)local_120, psVar12, auVar53._8_8_);
                                            if ((bVar3) && (lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12),
                                                            *(int*)(lVar10 + 124) != 0)) {
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                uVar36 = *(uint*)(lVar10 + 124);
                                            }
                                        } else {
                                            uVar36 = *(uint*)(auVar53._0_8_ + 120);
                                            bVar3 = operator==((jag*)local_120, psVar12, auVar53._8_8_);
                                            if ((bVar3) && (lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12),
                                                            *(int*)(lVar10 + 128) != 0)) {
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                uVar36 = *(uint*)(lVar10 + 128);
                                            }
                                        }
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar44 = (int)plVar23;
                                        if (*(char*)(lVar10 + 132) == '\0') {
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            iVar47 = *(int*)(lVar10 + 72);
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            if ((uint)local_70 == 0) {
                                                local_68->DrawRect(iVar44, (int)local_50, iVar47, *(int*)(lVar10 + 76),
                                                                   uVar36);
                                            } else {
                                                in_stack_fffffffffffffc58 =
                                                    (NpcType*)(CONCAT44((int)((ulong)in_stack_fffffffffffffc58 >> 32),
                                                                        ~(uint)local_70) &
                                                               18446744069414584575);
                                                local_68->DrawRectTrans(iVar44, (int)local_50, iVar47,
                                                                        *(int*)(lVar10 + 76), uVar36,
                                                                        (uint)in_stack_fffffffffffffc58);
                                            }
                                        } else {
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            psVar12 = local_38;
                                            uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                            uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                            uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                            if (*(int*)(lVar10 + 136) == 2) {
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_,
                                                                                     *(undefined4*)(lVar10 + 72));
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                local_60 = (PixfontGeneric*)CONCAT44(local_60._4_4_,
                                                                                     *(undefined4*)(lVar10 + 76));
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                uVar7 = *(undefined4*)(lVar10 + 116);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                uVar54 = *(undefined4*)(lVar10 + 120);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                iVar44 = *(int*)(lVar10 + 140);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                in_stack_fffffffffffffc68 =
                                                    CONCAT44(uVar55, 255 - *(int*)(lVar10 + 144)) &
                                                    18446744069414584575;
                                                in_stack_fffffffffffffc60 =
                                                    (PixfontGeneric*)(CONCAT44(uVar6, 255 - iVar44) &
                                                                      18446744069414584575);
                                                in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(uVar49, uVar54);
                                                (**(code**)(*(long*)local_68 + 40))(
                                                    local_68, (ulong)plVar23 & 4294967295, local_50,
                                                    (ulong)local_58 & 4294967295, (ulong)local_60 & 4294967295, uVar7,
                                                    in_stack_fffffffffffffc58, in_stack_fffffffffffffc60,
                                                    in_stack_fffffffffffffc68);
                                            } else if (*(int*)(lVar10 + 136) == 1) {
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                iVar44 = *(int*)(lVar10 + 72);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                iVar47 = *(int*)(lVar10 + 76);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                uVar36 = *(uint*)(lVar10 + 116);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                in_stack_fffffffffffffc58 =
                                                    (NpcType*)CONCAT44(uVar49, *(uint*)(lVar10 + 120));
                                                local_68->FillRectVGrad((int)local_40, (int)local_50, iVar44, iVar47,
                                                                        uVar36, *(uint*)(lVar10 + 120));
                                            } else {
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                uVar49 = *(undefined4*)(lVar10 + 72);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                if ((uint)local_70 == 0) {
                                                    (**(code**)(*(long*)local_68 + 32))(
                                                        local_68, local_40, local_50, uVar49,
                                                        *(undefined4*)(lVar10 + 76), uVar36);
                                                } else {
                                                    in_stack_fffffffffffffc58 =
                                                        (NpcType*)(CONCAT44(
                                                                       (int)((ulong)in_stack_fffffffffffffc58 >> 32),
                                                                       ~(uint)local_70) &
                                                                   18446744069414584575);
                                                    (**(code**)(*(long*)local_68 + 24))(
                                                        local_68, local_40, local_50, uVar49,
                                                        *(undefined4*)(lVar10 + 76), uVar36, in_stack_fffffffffffffc58);
                                                }
                                            }
                                        }
                                    } else {
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar44 = (int)local_40;
                                        if (*(int*)(lVar10 + 12) == 4) {
                                            local_7d = false;
                                            pIVar26 = (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            local_58 = (PixfontGeneric*)pIVar26->GetFont(&local_7d);
                                            bVar3 = operator==((shared_ptr*)local_58, (_func_decltype_nullptr*)0);
                                            uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                            uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                            uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                            if (bVar3) {
                                                if (local_7d == false) {
                                                    ComponentUpdated(local_48, local_38);
                                                }
                                            } else {
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                new (local_f0) eastl::string((basic_string*)(lVar10 + 320));
                                                cVar4 = GetIfActive(local_48, psVar12);
                                                psVar12 = local_38;
                                                if (cVar4 == '\0') {
                                                    auVar53 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    iVar44 = *(int*)(auVar53._0_8_ + 116);
                                                    bVar3 = operator==((jag*)local_120, psVar12, auVar53._8_8_);
                                                    psVar12 = local_38;
                                                    if (!bVar3)
                                                        goto LAB_1000ff100;
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    if (*(int*)(lVar10 + 124) != 0) {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        iVar44 = *(int*)(lVar10 + 124);
                                                    }
                                                } else {
                                                    auVar53 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    iVar44 = *(int*)(auVar53._0_8_ + 120);
                                                    bVar3 = operator==((jag*)local_120, psVar12, auVar53._8_8_);
                                                    if ((bVar3) && (lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38),
                                                                    *(int*)(lVar10 + 128) != 0)) {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        iVar44 = *(int*)(lVar10 + 128);
                                                    }
                                                    shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    lVar10 = eastl::basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                                    psVar12 = local_38;
                                                    if (lVar10 == 0) {
                                                    LAB_1000ff100:
                                                        psVar12 = local_38;
                                                    } else {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        eastl::string::operator=((eastl::string*)local_f0,
                                                                                 (basic_string*)(lVar10 + 352));
                                                    }
                                                }
                                                auVar53 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                psVar12 = auVar53._8_8_;
                                                if (*auVar53._0_8_ != '\0') {
                                                    auVar53 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    psVar12 = auVar53._8_8_;
                                                    if (*(int*)(auVar53._0_8_ + 1984) != -1) {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        local_2e0->List(*(int*)(lVar10 + 1984));
                                                        lVar10 =
                                                            shared_ptr<configdecoder::ObjType>::operator->(local_2e0);
                                                        eastl::string::operator=((eastl::string*)local_f0,
                                                                                 (basic_string*)(lVar10 + 8));
                                                        cVar4 = eastl::basic_string<
                                                            char,
                                                            eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::empty();
                                                        if (cVar4 != '\0') {
                                                            eastl::string::operator=(
                                                                (eastl::string*)local_f0,
                                                                (basic_string*)&constants::text::null);
                                                        }
                                                        lVar10 =
                                                            shared_ptr<configdecoder::ObjType>::operator->(local_2e0);
                                                        if (((*(int*)(lVar10 + 200) == 1) ||
                                                             (lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                  (shared_ptr<rs2lib::IfType>*)local_38),
                                                              *(int*)(lVar10 + 1988) != 1)) &&
                                                            (lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                 (shared_ptr<rs2lib::IfType>*)local_38),
                                                             *(int*)(lVar10 + 1988) != -1)) {
                                                            local_360->TAG_COLOUR(16748608);
                                                            eastl::operator+((eastl*)(local_320 + 32),
                                                                             (basic_string*)local_360,
                                                                             (basic_string*)local_f0);
                                                            eastl::operator+(
                                                                (eastl*)local_320, (basic_string*)(local_320 + 32),
                                                                (value_type*)StringConstants::TAG_COLOURCLOSE);
                                                            this_13 = (eastl*)local_2d0;
                                                            eastl::operator+(this_13, (basic_string*)local_320,
                                                                             (value_type*)&DAT_100e35840);
                                                            eastl::operator+((eastl*)&local_110, this_13, 120);
                                                            iVar47 = (int)this_13;
                                                            shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            NiceNumber((Client*)local_340, iVar47);
                                                            eastl::operator+((eastl*)local_b0,
                                                                             (basic_string*)&local_110,
                                                                             (basic_string*)local_340);
                                                            eastl::string::operator=((eastl::string*)local_f0,
                                                                                     (basic_string*)local_b0);
                                                            local_b0->~basic_string();
                                                            eastl::string::~basic_string(local_340);
                                                            local_110.~basic_string();
                                                            local_2d0->~basic_string();
                                                            local_320->~basic_string();
                                                            ((local_320 + 32))->~basic_string();
                                                            local_360->~basic_string();
                                                        }
                                                        local_2e0->~shared_ptr();
                                                        psVar12 = extraout_RDX_00;
                                                    }
                                                }
                                                bVar3 = operator==(local_1e0, local_38, psVar12);
                                                if (bVar3) {
                                                    eastl::string::operator=(
                                                        (eastl::string*)local_f0,
                                                        (basic_string*)&constants::text::pleasewait);
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    iVar44 = *(int*)(lVar10 + 116);
                                                }
                                                pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                if (*pcVar15 == '\0') {
                                                    SubstituteVars((Client*)local_b0, (basic_string*)local_48,
                                                                   (shared_ptr*)local_f0);
                                                    eastl::string::operator=((eastl::string*)local_f0,
                                                                             (basic_string*)local_b0);
                                                    local_b0->~basic_string();
                                                }
                                                local_58 =
                                                    (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
                                                        (shared_ptr<jstring::PixfontGeneric>*)local_58);
                                                psVar12 = local_38;
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                local_60 = (PixfontGeneric*)CONCAT44(local_60._4_4_,
                                                                                     *(undefined4*)(lVar10 + 72));
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                local_70 = CONCAT44(local_70._4_4_, *(undefined4*)(lVar10 + 76));
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                bVar5 = *(byte*)(lVar10 + 396);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                uVar7 = graphics::TransparencyToAlpha(*(int*)(lVar10 + 140));
                                                local_90 = CONCAT44(local_90._4_4_, uVar7);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                iVar47 = *(int*)(lVar10 + 388);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                iVar37 = *(int*)(lVar10 + 392);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                iVar48 = bVar5 - 1;
                                                in_stack_fffffffffffffc68 = CONCAT44(uVar55, (uint)local_90);
                                                in_stack_fffffffffffffc60 = (PixfontGeneric*)CONCAT44(uVar6, iVar48);
                                                in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(uVar49, iVar44);
                                                local_58->DrawStringMultiline(local_f0, (int)local_40, (int)local_50,
                                                                              (uint)local_60, (uint)local_70, iVar44,
                                                                              iVar48, (uint)local_90, iVar47, iVar37,
                                                                              *(int*)(lVar10 + 384), local_68);
                                                local_f0->~basic_string();
                                            }
                                        } else {
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            if (*(int*)(lVar10 + 12) == 5) {
                                                new (&local_110) rs2lib::TempSetUsingRSeven(false);
                                                pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                if (*pcVar15 == '\0') {
                                                    local_b0[0]._0_4_ = local_b0[0]._0_4_ & 4294967040;
                                                    pIVar26 = (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    bVar3 = (bool)GetIfActive(local_48, local_38);
                                                    psVar12 = (shared_ptr*)pIVar26->GetGraphic(bVar3, local_b0);
                                                    new (local_f0) shared_ptr<dash3d::Decor>(psVar12);
                                                    bVar3 = operator!=((shared_ptr*)local_f0,
                                                                       (_func_decltype_nullptr*)0);
                                                    if (bVar3) {
                                                        uVar24 = shared_ptr<graphics::Pix32>::operator*(
                                                            (shared_ptr<graphics::Pix32>*)local_f0);
                                                        (**(code**)(*(long*)local_68 + 176))(local_68, uVar24, local_40,
                                                                                             local_50);
                                                    } else if (local_b0[0]._0_1_ == '\0') {
                                                        ComponentUpdated(local_48, local_38);
                                                    }
                                                } else {
                                                    iVar44 = 0;
                                                    new (local_f0)
                                                        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    psVar12 = local_38;
                                                    uVar36 = (uint)((ulong)in_stack_fffffffffffffc58 >> 32);
                                                    if (*(int*)(lVar10 + 1984) == -1) {
                                                        local_b0[0]._0_4_ = local_b0[0]._0_4_ & 4294967040;
                                                        pIVar26 = (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        psVar12 = (shared_ptr*)pIVar26->GetGraphic(false, local_b0);
                                                        if (local_b0[0]._0_1_ == '\0') {
                                                            ComponentUpdated(local_48, local_38);
                                                        } else {
                                                            shared_ptr<graphics::Pix32>::operator=(
                                                                (shared_ptr<graphics::Pix32>*)local_f0, psVar12);
                                                        }
                                                    } else {
                                                        shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        iVar47 = *(int*)(lVar10 + 1984);
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        iVar37 = *(int*)(lVar10 + 1988);
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        iVar48 = *(int*)(lVar10 + 216);
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        iVar50 = *(int*)(lVar10 + 220);
                                                        shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        in_stack_fffffffffffffc58 = (NpcType*)((ulong)uVar36 << 32);
                                                        GetObjSprite((Client*)local_b0, iVar44, iVar47, iVar37, iVar48,
                                                                     iVar50);
                                                        shared_ptr<graphics::Pix32>::operator=(
                                                            (shared_ptr<graphics::Pix32>*)local_f0, local_b0);
                                                        local_b0->~shared_ptr();
                                                    }
                                                    bVar3 = operator!=((shared_ptr*)local_f0,
                                                                       (_func_decltype_nullptr*)0);
                                                    if (bVar3) {
                                                        lVar10 = shared_ptr<graphics::Pix32>::operator->(
                                                            (shared_ptr<graphics::Pix32>*)local_f0);
                                                        local_128 = (ulong) * (uint*)(lVar10 + 40);
                                                        lVar10 = shared_ptr<graphics::Pix32>::operator->(
                                                            (shared_ptr<graphics::Pix32>*)local_f0);
                                                        local_60 = (PixfontGeneric*)(ulong) * (uint*)(lVar10 + 44);
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        if (*(char*)(lVar10 + 212) == '\0') {
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            iVar44 = (*(int*)(lVar10 + 72) << 12) / (int)local_128;
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            uVar49 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                                            if (*(int*)(lVar10 + 208) == 0) {
                                                                if ((uint)local_70 == 0) {
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    if ((*(int*)(lVar10 + 72) == (int)local_128) &&
                                                                        (lVar10 =
                                                                             shared_ptr<rs2lib::IfType>::operator->(
                                                                                 (shared_ptr<rs2lib::IfType>*)local_38),
                                                                         *(int*)(lVar10 + 76) == (int)local_60)) {
                                                                        uVar24 = shared_ptr<graphics::Pix32>::operator*(
                                                                            (shared_ptr<graphics::Pix32>*)local_f0);
                                                                        (**(code**)(*(long*)local_68 + 176))(
                                                                            local_68, uVar24, local_40, local_50);
                                                                    } else {
                                                                        uVar24 = shared_ptr<graphics::Pix32>::operator*(
                                                                            (shared_ptr<graphics::Pix32>*)local_f0);
                                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                                        uVar49 = *(undefined4*)(lVar10 + 72);
                                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                                        (**(code**)(*(long*)local_68 + 208))(
                                                                            local_68, uVar24, local_40, local_50,
                                                                            uVar49, *(undefined4*)(lVar10 + 76));
                                                                    }
                                                                } else {
                                                                    uVar24 = shared_ptr<graphics::Pix32>::operator*(
                                                                        (shared_ptr<graphics::Pix32>*)local_f0);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar6 = *(undefined4*)(lVar10 + 72);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    in_stack_fffffffffffffc58 =
                                                                        (NpcType*)(CONCAT44(uVar49, ~(uint)local_70) &
                                                                                   18446744069414584575);
                                                                    (**(code**)(*(long*)local_68 + 240))(
                                                                        local_68, uVar24, local_40, local_50, uVar6,
                                                                        *(undefined4*)(lVar10 + 76),
                                                                        in_stack_fffffffffffffc58);
                                                                }
                                                            } else {
                                                                pPVar28 =
                                                                    (Pix32*)shared_ptr<graphics::Pix32>::operator*(
                                                                        (shared_ptr<graphics::Pix32>*)local_f0);
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                iVar47 = *(int*)(lVar10 + 72);
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                iVar37 = *(int*)(lVar10 + 76);
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                local_68->PixelPerfectRotateScalePlotSprite(
                                                                    pPVar28, iVar47 / 2 + (int)local_40._0_4_,
                                                                    iVar37 / 2 + (uint)local_50, *(int*)(lVar10 + 208),
                                                                    iVar44);
                                                            }
                                                        } else {
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            iVar44 = *(int*)(lVar10 + 72);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            local_68->SetSubClipping(
                                                                (int)local_40, (int)local_50, iVar44 + (int)local_40,
                                                                *(int*)(lVar10 + 76) + (int)local_50);
                                                            psVar12 = local_38;
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            iVar47 = (*(int*)(lVar10 + 72) + (int)local_128 + -1) /
                                                                     (int)local_128;
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                                            iVar44 = (int)local_60;
                                                            local_bc = (*(int*)(lVar10 + 76) + iVar44 + -1) / iVar44;
                                                            local_114 = iVar47;
                                                            if (0 < iVar47) {
                                                                uVar38 = (ulong)local_60 >> 31;
                                                                local_1b0 =
                                                                    (ulong)(uint)(((int)(((uint)(local_128 >> 31) & 1) +
                                                                                         (int)local_128) >>
                                                                                   1) +
                                                                                  (int)local_40._0_4_);
                                                                local_88 = (Worldmap*)(CONCAT44(local_88._4_4_,
                                                                                                ~(uint)local_70) &
                                                                                       18446744069414584575);
                                                                local_b8 =
                                                                    (Array*)((ulong)local_b8 & 18446744069414584320);
                                                                do {
                                                                    if (0 < local_bc) {
                                                                        iVar48 = (uint)local_b8 * (int)local_128;
                                                                        iVar47 = (int)local_1b0;
                                                                        local_90 =
                                                                            (ulong)(uint)(iVar48 + (int)local_40._0_4_);
                                                                        pNVar51 = local_50;
                                                                        iVar37 = local_bc;
                                                                        do {
                                                                            lVar10 =
                                                                                shared_ptr<rs2lib::IfType>::operator->(
                                                                                    (shared_ptr<rs2lib::IfType>*)
                                                                                        local_38);
                                                                            if (*(int*)(lVar10 + 208) == 0) {
                                                                                if ((uint)local_70 == 0) {
                                                                                    uVar24 = shared_ptr<
                                                                                        graphics::Pix32>::
                                                                                    operator*(
                                                                                        (shared_ptr<graphics::Pix32>*)
                                                                                            local_f0);
                                                                                    (**(code**)(*(long*)local_68 +
                                                                                                176))(
                                                                                        local_68, uVar24, local_90,
                                                                                        (ulong)pNVar51 & 4294967295);
                                                                                } else {
                                                                                    uVar24 = shared_ptr<
                                                                                        graphics::Pix32>::
                                                                                    operator*(
                                                                                        (shared_ptr<graphics::Pix32>*)
                                                                                            local_f0);
                                                                                    (**(code**)(*(long*)local_68 +
                                                                                                232))(
                                                                                        local_68, uVar24, local_90,
                                                                                        (ulong)pNVar51 & 4294967295,
                                                                                        (ulong)local_88 & 4294967295);
                                                                                }
                                                                            } else {
                                                                                pPVar28 = (Pix32*)
                                                                                    shared_ptr<graphics::Pix32>::
                                                                                    operator*(
                                                                                        (shared_ptr<graphics::Pix32>*)
                                                                                            local_f0);
                                                                                lVar10 =
                                                                                    shared_ptr<rs2lib::IfType>::
                                                                                    operator->(
                                                                                        (shared_ptr<rs2lib::IfType>*)
                                                                                            local_38);
                                                                                local_68
                                                                                    ->PixelPerfectRotateScalePlotSprite(
                                                                                        pPVar28, iVar47 + iVar48,
                                                                                        ((int)(((uint)uVar38 & 1) +
                                                                                               iVar44) >>
                                                                                         1) +
                                                                                            (int)pNVar51,
                                                                                        *(int*)(lVar10 + 208), 4096);
                                                                            }
                                                                            pNVar51 =
                                                                                (NXTPix3D*)(ulong)((int)pNVar51 +
                                                                                                   (uint)local_60);
                                                                            iVar37 = iVar37 + -1;
                                                                        } while (iVar37 != 0);
                                                                    }
                                                                    iVar47 = (uint)local_b8 + 1;
                                                                    local_b8 = (Array*)CONCAT44(local_b8._4_4_, iVar47);
                                                                } while (iVar47 != local_114);
                                                            }
                                                            local_68->SetClipping(local_78, local_7c, local_74,
                                                                                  param_6);
                                                        }
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        pPVar27 = local_58;
                                                        uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                                        uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                                        uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                                        if (-1 < *(int*)(lVar10 + 680)) {
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            in_stack_fffffffffffffc68 = CONCAT44(uVar55, (int)pPVar27);
                                                            in_stack_fffffffffffffc60 =
                                                                (PixfontGeneric*)CONCAT44(uVar6, (int)local_50);
                                                            in_stack_fffffffffffffc58 =
                                                                (NpcType*)CONCAT44(uVar49, (int)local_40);
                                                            DrawOverlay(local_48, *(int*)(lVar10 + 680), local_78,
                                                                        local_7c, local_74, param_6, (int)local_40,
                                                                        (int)local_50, (int)pPVar27);
                                                            local_68->SetClipping(local_78, local_7c, local_74,
                                                                                  param_6);
                                                        }
                                                    }
                                                }
                                                local_f0->~shared_ptr();
                                                local_110.~TempSetUsingRSeven();
                                            } else {
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                psVar33 = local_38;
                                                pCVar43 = local_48;
                                                if (*(int*)(lVar10 + 12) == 6) {
                                                    if (local_48->m_usingRSeven == false) {
                                                        uVar49 = 0;
                                                    } else {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        uVar49 = (undefined4)CONCAT71((int7)((ulong)lVar10 >> 8),
                                                                                      *(char*)(lVar10 + 289) != '\0');
                                                    }
                                                    local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_, uVar49);
                                                    new ((local_320 + 32)) rs2lib::TempSetUsingRSeven(SUB41(uVar49, 0));
                                                    bVar5 = GetIfActive(pCVar43, psVar33);
                                                    if (bVar5 == 0) {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        piVar13 = (int*)(lVar10 + 244);
                                                    } else {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        piVar13 = (int*)(lVar10 + 248);
                                                    }
                                                    iVar44 = *piVar13;
                                                    new (local_b0)
                                                        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(psVar33);
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    if (*(int*)(lVar10 + 1984) == -1) {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        if (*(int*)(lVar10 + 228) == 5) {
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            if (*(int*)(lVar10 + 232) == 0) {
                                                                pSVar29 =
                                                                    (SeqType*)
                                                                        shared_ptr<rs2lib::PlayerModel>::operator->(
                                                                            local_1c0);
                                                                local_f0->GetTempModel(pSVar29, 0, 4294967295, 0);
                                                                shared_ptr<dash3d::ModelLit>::operator=(
                                                                    (shared_ptr<dash3d::ModelLit>*)local_b0,
                                                                    (shared_ptr*)local_f0);
                                                            } else {
                                                                iVar44 =
                                                                    shared_ptr<ClientPlayer>::operator->(local_130);
                                                                local_f0->GetTempModel(iVar44);
                                                                shared_ptr<dash3d::ModelLit>::operator=(
                                                                    (shared_ptr<dash3d::ModelLit>*)local_b0,
                                                                    (shared_ptr*)local_f0);
                                                            }
                                                            local_f0->~shared_ptr();
                                                        } else {
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            if (*(int*)(lVar10 + 228) == 7) {
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                bVar3 = operator==((shared_ptr*)(lVar10 + 296),
                                                                                   (_func_decltype_nullptr*)0);
                                                                if (bVar3) {
                                                                    uVar24 = logger::default_logger();
                                                                    local_60 = (PixfontGeneric*)((ulong)local_60 &
                                                                                                 18446744069414584320);
                                                                    logger::Logger::Log(
                                                                        uVar24, 1, 2,

                                                                        "/Users/bamboo/bamboo-home-01/xml-data/"
                                                                        "build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                                                        "client_UI.cpp",
                                                                        826, "Trying to render a null PlayerModel");
                                                                    goto LAB_10010035e;
                                                                }
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                pSVar29 =
                                                                    (SeqType*)
                                                                        shared_ptr<rs2lib::PlayerModel>::operator->(
                                                                            (shared_ptr<rs2lib::PlayerModel>*)(lVar10 +
                                                                                                               296));
                                                                lVar10 =
                                                                    shared_ptr<ClientPlayer>::operator->(local_130);
                                                                local_110.List(*(int*)(lVar10 + 48));
                                                                iVar44 = local_110.end();
                                                                shared_ptr<ClientPlayer>::operator->(local_130);
                                                                local_f0->GetTempModel(pSVar29, 0, 4294967295, iVar44);
                                                                shared_ptr<dash3d::ModelLit>::operator=(
                                                                    (shared_ptr<dash3d::ModelLit>*)local_b0,
                                                                    (shared_ptr*)local_f0);
                                                                local_f0->~shared_ptr();
                                                                this_16 = &local_110;
                                                            } else {
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                local_70 = 0;
                                                                local_60 = (PixfontGeneric*)0;
                                                                if (*(int*)(lVar10 + 228) == 6) {
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    this_06 = (vector<dash3d::EntityHighlight*,
                                                                                      BucketAllocatorEASTL>*)
                                                                        std::array<shared_ptr<ClientNpc>, 65536ul>::
                                                                        operator[](local_1b8,
                                                                                   (long)*(int*)(lVar10 + 232));
                                                                    this_07 =
                                                                        (FixedPrimitiveBatchData<256ul>*)eastl::vector<
                                                                            dash3d::EntityHighlight*,
                                                                            BucketAllocatorEASTL>::end(this_06);
                                                                    if (this_07 == (FixedPrimitiveBatchData<256ul>*)0) {
                                                                        local_70 = 0;
                                                                        local_60 = (PixfontGeneric*)0;
                                                                    } else {
                                                                        local_60 =
                                                                            (PixfontGeneric*)((this_07 + 1024))->end();
                                                                        this_08 = (unique_ptr<
                                                                                   configdecoder::NPCTypeCustomisation,
                                                                                   BucketDeleter<
                                                                                       configdecoder::
                                                                                           NPCTypeCustomisation>>*)
                                                                            render::FixedPrimitiveBatchData<
                                                                                256ul>::GetVertexCount(this_07);
                                                                        local_70 = std::unique_ptr<
                                                                            configdecoder::NPCTypeCustomisation,
                                                                            BucketDeleter<
                                                                                configdecoder::NPCTypeCustomisation>>::
                                                                            get(this_08);
                                                                    }
                                                                }
                                                                new (local_f0)
                                                                    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
                                                                        0);
                                                                if (iVar44 == -1) {
                                                                    uVar35 = 255;
                                                                } else {
                                                                    local_110.List(iVar44);
                                                                    shared_ptr<configdecoder::SeqType>::operator=(
                                                                        (shared_ptr<configdecoder::SeqType>*)local_f0,
                                                                        (shared_ptr*)&local_110);
                                                                    local_110.~shared_ptr();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar35 =
                                                                        (undefined1) * (undefined4*)(lVar10 + 1992);
                                                                }
                                                                local_2d0._0_8_ =
                                                                    local_2d0._0_8_ & 18446744073709551360;
                                                                pSVar29 =
                                                                    (SeqType*)shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                iVar44 = local_f0->end();
                                                                lVar10 =
                                                                    shared_ptr<ClientPlayer>::operator->(local_130);
                                                                pbVar30 = (bool*)((lVar10 + 1008))->end();
                                                                in_stack_fffffffffffffc58 = (NpcType*)local_2d0;
                                                                in_stack_fffffffffffffc60 = local_60;
                                                                in_stack_fffffffffffffc68 = local_70;
                                                                local_110.GetTempModel(
                                                                    pSVar29, iVar44, (bool)uVar35,
                                                                    (PlayerModel*)(ulong)bVar5, pbVar30,
                                                                    in_stack_fffffffffffffc58, local_60);
                                                                if (local_2d0[0] == (eastl)0) {
                                                                    ComponentUpdated(pCVar43, local_38);
                                                                } else {
                                                                    shared_ptr<dash3d::ModelLit>::operator=(
                                                                        (shared_ptr<dash3d::ModelLit>*)local_b0,
                                                                        (shared_ptr*)&local_110);
                                                                }
                                                                this_16 = (GridRect*)local_f0;
                                                                local_110.~shared_ptr();
                                                            }
                                                            this_16->~shared_ptr();
                                                        }
                                                        local_60 =
                                                            (PixfontGeneric*)((ulong)local_60 & 18446744069414584320);
                                                    } else {
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        local_f0->List(*(int*)(lVar10 + 1984));
                                                        bVar3 = operator!=((shared_ptr*)local_f0,
                                                                           (_func_decltype_nullptr*)0);
                                                        local_60 =
                                                            (PixfontGeneric*)((ulong)local_60 & 18446744069414584320);
                                                        if (bVar3) {
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            local_110.GetStackSizeAlt(local_f0, *(int*)(lVar10 + 1988));
                                                            shared_ptr<configdecoder::ObjType>::operator=(
                                                                (shared_ptr<configdecoder::ObjType>*)local_f0,
                                                                (shared_ptr*)&local_110);
                                                            local_110.~shared_ptr();
                                                            iVar44 = shared_ptr<configdecoder::ObjType>::operator->(
                                                                (shared_ptr<configdecoder::ObjType>*)local_f0);
                                                            local_110.GetModelLit(iVar44);
                                                            shared_ptr<dash3d::ModelLit>::operator=(
                                                                (shared_ptr<dash3d::ModelLit>*)local_b0,
                                                                (shared_ptr*)&local_110);
                                                            local_110.~shared_ptr();
                                                            bVar3 = operator!=(local_b0, (_func_decltype_nullptr*)0);
                                                            if (bVar3) {
                                                                plVar23 =
                                                                    (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                                                        (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                (**(code**)(*plVar23 + 64))(plVar23);
                                                                lVar10 = shared_ptr<dash3d::ModelLit>::operator->(
                                                                    (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                local_60 = (PixfontGeneric*)CONCAT44(
                                                                    local_60._4_4_, *(int*)(lVar10 + 8) / 2);
                                                            } else {
                                                                ComponentUpdated(pCVar43, local_38);
                                                            }
                                                        }
                                                        local_f0->~shared_ptr();
                                                    }
                                                LAB_10010035e:
                                                    paVar31 = (array<int, 2048ul>*)dash3d::Pix3D::GetSinTable();
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    piVar13 = (int*)std::array<int, 2048ul>::operator[](
                                                        paVar31, (long)*(int*)(lVar10 + 260));
                                                    iVar44 = *piVar13;
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    iVar47 = *(int*)(lVar10 + 272);
                                                    paVar31 = (array<int, 2048ul>*)dash3d::Pix3D::GetCosTable();
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    piVar13 = (int*)std::array<int, 2048ul>::operator[](
                                                        paVar31, (long)*(int*)(lVar10 + 260));
                                                    iVar37 = *piVar13;
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                    iVar48 = *(int*)(lVar10 + 272);
                                                    bVar3 = operator!=(local_b0, (_func_decltype_nullptr*)0);
                                                    if (bVar3) {
                                                        plVar23 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                                            (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                        cVar4 = (**(code**)(*plVar23 + 56))(plVar23);
                                                        if ((char)local_58 != cVar4) {
                                                            /* WARNING: Subroutine does not return */
                                                            LogAssert(
                                                                "m->IsForRSeven() == wantRSeven",
                                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                "OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                                                                872, (char*)0);
                                                        }
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        pCVar43 = local_48;
                                                        uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                                        uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                                        uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                                        local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_,
                                                                                             iVar44 * iVar47 >> 16);
                                                        local_70 = CONCAT44(local_70._4_4_, iVar37 * iVar48 >> 16);
                                                        if (*(char*)(lVar10 + 289) == '\0') {
                                                            plVar23 = (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                                                (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                            cVar4 = (**(code**)(*plVar23 + 56))(plVar23);
                                                            if (cVar4 != '\0') {
                                                                /* WARNING: Subroutine does not return */
                                                                LogAssert(
                                                                    "m->IsForRSeven() == false",
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                                                                    939, (char*)0);
                                                            }
                                                            plVar23 = (long*)std::unique_ptr<
                                                                          dash3d::SoftwarePix3D,
                                                                          std::default_delete<dash3d::SoftwarePix3D>>::
                                                                      operator->(local_138);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            iVar44 = *(int*)(lVar10 + 72);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            (**(code**)(*plVar23 + 40))(
                                                                plVar23, iVar44 / 2 + (int)local_40._0_4_,
                                                                *(int*)(lVar10 + 76) / 2 + (uint)local_50);
                                                            this_11 = (SoftwareWorldRenderer*)std::unique_ptr<
                                                                          dash3d::SoftwareWorldRenderer,
                                                                          std::default_delete<
                                                                              dash3d::SoftwareWorldRenderer>>::
                                                                      operator->(local_1d0);
                                                            local_40 = (long*)this_11->GetModelLitRenderer();
                                                            pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            uVar49 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                                            if (*pcVar15 == '\0') {
                                                                uVar24 = shared_ptr<dash3d::ModelLit>::operator*(
                                                                    (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                uVar49 = *(undefined4*)(lVar10 + 264);
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                in_stack_fffffffffffffc68 =
                                                                    CONCAT44(uVar55, (uint)local_70);
                                                                in_stack_fffffffffffffc60 =
                                                                    (PixfontGeneric*)CONCAT44(uVar6, (uint)local_58);
                                                                in_stack_fffffffffffffc58 =
                                                                    (NpcType*)((ulong)in_stack_fffffffffffffc58 &
                                                                               18446744069414584320);
                                                                (**(code**)*local_40)(local_40, uVar24, 0, uVar49, 0,
                                                                                      *(undefined4*)(lVar10 + 260),
                                                                                      in_stack_fffffffffffffc58,
                                                                                      in_stack_fffffffffffffc60,
                                                                                      in_stack_fffffffffffffc68);
                                                            } else {
                                                                plVar23 =
                                                                    (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                                                        (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                (**(code**)(*plVar23 + 64))(plVar23);
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                if (*(char*)(lVar10 + 288) == '\0') {
                                                                    uVar24 = shared_ptr<dash3d::ModelLit>::operator*(
                                                                        (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar7 = *(undefined4*)(lVar10 + 264);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    local_50 = (NXTPix3D*)CONCAT44(
                                                                        local_50._4_4_, *(undefined4*)(lVar10 + 268));
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar54 = *(undefined4*)(lVar10 + 260);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar1 = *(undefined4*)(lVar10 + 252);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    iVar44 = *(int*)(lVar10 + 256);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    in_stack_fffffffffffffc68 = CONCAT44(
                                                                        uVar55, (uint)local_70 + *(int*)(lVar10 + 256));
                                                                    in_stack_fffffffffffffc60 =
                                                                        (PixfontGeneric*)CONCAT44(
                                                                            uVar6,
                                                                            (uint)local_58 + (uint)local_60 + iVar44);
                                                                    in_stack_fffffffffffffc58 =
                                                                        (NpcType*)CONCAT44(uVar49, uVar1);
                                                                    (**(code**)*local_40)(local_40, uVar24, 0, uVar7,
                                                                                          (ulong)local_50 & 4294967295,
                                                                                          uVar54,
                                                                                          in_stack_fffffffffffffc58,
                                                                                          in_stack_fffffffffffffc60,
                                                                                          in_stack_fffffffffffffc68);
                                                                } else {
                                                                    local_50 = (NXTPix3D*)
                                                                        shared_ptr<dash3d::ModelLit>::operator*(
                                                                            (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    local_90 = CONCAT44(local_90._4_4_,
                                                                                        *(undefined4*)(lVar10 + 264));
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    local_88 = (Worldmap*)CONCAT44(
                                                                        local_88._4_4_, *(undefined4*)(lVar10 + 268));
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar7 = *(undefined4*)(lVar10 + 260);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar54 = *(undefined4*)(lVar10 + 252);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    iVar37 = (uint)local_58 + (uint)local_60;
                                                                    iVar44 = *(int*)(lVar10 + 256);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    iVar47 = *(int*)(lVar10 + 256);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    in_stack_fffffffffffffc68 =
                                                                        CONCAT44(uVar55, iVar47 + (uint)local_70);
                                                                    in_stack_fffffffffffffc60 =
                                                                        (PixfontGeneric*)CONCAT44(uVar6,
                                                                                                  iVar37 + iVar44);
                                                                    in_stack_fffffffffffffc58 =
                                                                        (NpcType*)CONCAT44(uVar49, uVar54);
                                                                    (**(code**)(*local_40 + 8))(
                                                                        local_40, local_50, 0, local_90 & 4294967295,
                                                                        (ulong)local_88 & 4294967295, uVar7,
                                                                        in_stack_fffffffffffffc58,
                                                                        in_stack_fffffffffffffc60,
                                                                        in_stack_fffffffffffffc68,
                                                                        *(undefined4*)(lVar10 + 272));
                                                                }
                                                            }
                                                            plVar23 = (long*)std::unique_ptr<
                                                                          dash3d::SoftwarePix3D,
                                                                          std::default_delete<dash3d::SoftwarePix3D>>::
                                                                      operator->(local_138);
                                                            (**(code**)(*plVar23 + 32))(plVar23);
                                                        } else {
                                                            local_50 =
                                                                (NXTPix3D*)(*(code*)local_48->field_144->field_0[1])();
                                                            this_09 = (NXTPixToolkit*)pCVar43->GetMemoryCache();
                                                            this_10 = (SoundInstance*)this_09->GetScreen();
                                                            fVar52 = (float)this_10->GetSoundSpatialSizeMax();
                                                            local_40 = (long*)CONCAT44(local_40._4_4_, fVar52);
                                                            uVar36 = jag::math::RoundFloatToInt(fVar52 * local_188);
                                                            iVar44 =
                                                                jag::math::RoundFloatToInt(local_40._0_4_ * local_184);
                                                            iVar47 =
                                                                jag::math::RoundFloatToInt(local_40._0_4_ * local_180);
                                                            uVar8 =
                                                                jag::math::RoundFloatToInt(local_40._0_4_ * local_17c);
                                                            pNVar51 = local_50;
                                                            uVar6 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                                            iVar48 = (int)(iVar44 + uVar36) / 2;
                                                            iVar37 = (int)(uVar8 + iVar47) / 2;
                                                            if (pCVar43->m_usingRSeven == false) {
                                                                local_50->SetClipping(uVar36, iVar47, iVar44, uVar8);
                                                                pNVar51->SetRenderClipping();
                                                                pNVar51->SetRenderOrigin(iVar48, iVar37);
                                                                (*(code*)pNVar51->field_0[2])(
                                                                    pNVar51, (int)(local_40._0_4_ * 512.0), 60);
                                                                plVar23 =
                                                                    (long*)pCVar43->field_144->GetServerPosition();
                                                                local_40 = (long*)(**(code**)(*plVar23 + 8))(plVar23);
                                                                pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                uVar55 =
                                                                    (undefined4)((ulong)in_stack_fffffffffffffc60 >>
                                                                                 32);
                                                                if (*pcVar15 == '\0') {
                                                                    local_60 = (PixfontGeneric*)
                                                                        shared_ptr<dash3d::ModelLit>::operator*(
                                                                            (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                    paVar31 = (array<int, 2048ul>*)
                                                                        dash3d::Pix3D::GetSinTable();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    puVar14 = (undefined4*)
                                                                        std::array<int, 2048ul>::operator[](
                                                                            paVar31, (long)*(int*)(lVar10 + 260));
                                                                    local_90 = CONCAT44(local_90._4_4_, *puVar14);
                                                                    paVar31 = (array<int, 2048ul>*)
                                                                        dash3d::Pix3D::GetCosTable();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    puVar14 = (undefined4*)
                                                                        std::array<int, 2048ul>::operator[](
                                                                            paVar31, (long)*(int*)(lVar10 + 260));
                                                                    uVar55 = *puVar14;
                                                                    paVar31 = (array<int, 2048ul>*)
                                                                        dash3d::Pix3D::GetSinTable();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    puVar14 = (undefined4*)
                                                                        std::array<int, 2048ul>::operator[](
                                                                            paVar31, (long)*(int*)(lVar10 + 264));
                                                                    uVar7 = *puVar14;
                                                                    paVar31 = (array<int, 2048ul>*)
                                                                        dash3d::Pix3D::GetCosTable();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    puVar14 = (undefined4*)
                                                                        std::array<int, 2048ul>::operator[](
                                                                            paVar31, (long)*(int*)(lVar10 + 264));
                                                                    uVar54 = *puVar14;
                                                                    iVar44 = local_48->field_8488;
                                                                    local_f0._4_4_ = local_f0._4_4_ & 4294901760;
                                                                    local_f0._0_4_ = 0;
                                                                    new (local_f0) game::GamepadEvent();
                                                                    in_stack_fffffffffffffc68 =
                                                                        CONCAT44(uVar6, (uint)local_58);
                                                                    in_stack_fffffffffffffc58 =
                                                                        (NpcType*)CONCAT44(uVar49, uVar54);
                                                                    in_stack_fffffffffffffc60 =
                                                                        (PixfontGeneric*)((ulong)
                                                                                              in_stack_fffffffffffffc60 &
                                                                                          18446744069414584320);
                                                                    (**(code**)(*local_40 + 16))(
                                                                        local_40, local_60, 0, local_90 & 4294967295,
                                                                        uVar55, uVar7, in_stack_fffffffffffffc58,
                                                                        in_stack_fffffffffffffc60,
                                                                        in_stack_fffffffffffffc68, (uint)local_70, 0,
                                                                        iVar44, (GamepadEvent*)local_f0, 0);
                                                                } else {
                                                                    plVar23 =
                                                                        (long*)shared_ptr<dash3d::ModelLit>::operator->(
                                                                            (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                    (**(code**)(*plVar23 + 64))(plVar23);
                                                                    local_90 = shared_ptr<dash3d::ModelLit>::operator*(
                                                                        (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                    paVar31 = (array<int, 2048ul>*)
                                                                        dash3d::Pix3D::GetSinTable();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    puVar14 = (undefined4*)
                                                                        std::array<int, 2048ul>::operator[](
                                                                            paVar31, (long)*(int*)(lVar10 + 260));
                                                                    local_88 =
                                                                        (Worldmap*)CONCAT44(local_88._4_4_, *puVar14);
                                                                    paVar31 = (array<int, 2048ul>*)
                                                                        dash3d::Pix3D::GetCosTable();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    puVar14 = (undefined4*)
                                                                        std::array<int, 2048ul>::operator[](
                                                                            paVar31, (long)*(int*)(lVar10 + 260));
                                                                    local_b8 =
                                                                        (Array*)CONCAT44(local_b8._4_4_, *puVar14);
                                                                    paVar31 = (array<int, 2048ul>*)
                                                                        dash3d::Pix3D::GetSinTable();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    piVar13 = (int*)std::array<int, 2048ul>::operator[](
                                                                        paVar31, (long)*(int*)(lVar10 + 264));
                                                                    local_bc = *piVar13;
                                                                    paVar31 = (array<int, 2048ul>*)
                                                                        dash3d::Pix3D::GetCosTable();
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    piVar13 = (int*)std::array<int, 2048ul>::operator[](
                                                                        paVar31, (long)*(int*)(lVar10 + 264));
                                                                    local_114 = *piVar13;
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar7 = *(undefined4*)(lVar10 + 252);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    iVar44 = *(int*)(lVar10 + 256);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    iVar48 = (uint)local_58 + (uint)local_60;
                                                                    iVar37 = (uint)local_70 + *(int*)(lVar10 + 256);
                                                                    iVar47 = local_48->field_8488;
                                                                    local_f0._4_4_ = local_f0._4_4_ & 4294901760;
                                                                    local_f0._0_4_ = 0;
                                                                    new (local_f0) game::GamepadEvent();
                                                                    in_stack_fffffffffffffc68 =
                                                                        CONCAT44(uVar6, iVar48 + iVar44);
                                                                    in_stack_fffffffffffffc60 =
                                                                        (PixfontGeneric*)CONCAT44(uVar55, uVar7);
                                                                    in_stack_fffffffffffffc58 =
                                                                        (NpcType*)CONCAT44(uVar49, local_114);
                                                                    (**(code**)(*local_40 + 16))(
                                                                        local_40, local_90, 0,
                                                                        (ulong)local_88 & 4294967295,
                                                                        (ulong)local_b8 & 4294967295, local_bc,
                                                                        in_stack_fffffffffffffc58,
                                                                        in_stack_fffffffffffffc60,
                                                                        in_stack_fffffffffffffc68, iVar37, 0, iVar47,
                                                                        (GamepadEvent*)local_f0, 0);
                                                                }
                                                                (*(code*)local_50->field_0[4])();
                                                            } else {
                                                                local_50 = (NXTPix3D*)(ulong)uVar8;
                                                                new (local_f0)
                                                                    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
                                                                        (_func_decltype_nullptr*)(ulong)uVar36);
                                                                new (&local_e0) jag::math::Vector2T<int>();
                                                                local_d8 = local_d8 & 18446744069414584320;
                                                                new (&local_110)
                                                                    dash3d::GridRect(uVar36, iVar47, iVar44 - uVar36,
                                                                                     (int)local_50 - iVar47);
                                                                jag::math::Rect<unsigned int>::operator=(
                                                                    (Rect<unsigned int>*)local_f0, (Rect*)&local_110);
                                                                new (&local_110) sidebars::SideBarData(iVar48, iVar37);
                                                                eastl::pair<int, unsigned int>::operator=(
                                                                    (pair<int, unsigned int>*)&local_e0,
                                                                    (pair*)&local_110);
                                                                local_d8 = CONCAT44(local_d8._4_4_, local_40._0_4_);
                                                                lVar10 = Instance();
                                                                uVar36 = *(uint*)(lVar10 + 52736);
                                                                lVar10 = Instance();
                                                                pVVar41 = (Vector2T*)(ulong)uVar36;
                                                                new (local_320) sidebars::SideBarData(
                                                                    uVar36, *(int*)(lVar10 + 52740));
                                                                local_2d0._0_8_ =
                                                                    jag::math::operator-((math*)local_320, pVVar41);
                                                                jag::math::Vector2T<float>::Vector2T<int>(
                                                                    (Vector2T<float>*)&local_110, (Vector2T*)local_2d0);
                                                                local_f0->Translate((Vector2T*)&local_110);
                                                                pcVar15 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                uVar24 = dash3d::world::m_modelLitRendererRt7;
                                                                if (*pcVar15 == '\0') {
                                                                    uVar32 = shared_ptr<dash3d::ModelLit>::operator*(
                                                                        (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar49 = *(undefined4*)(lVar10 + 260);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar6 = *(undefined4*)(lVar10 + 264);
                                                                    new (&local_2b0) rs2lib::worldmap::LocationData(
                                                                        0, (uint)local_58, (uint)local_70);
                                                                    in_stack_fffffffffffffc58 = (NpcType*)local_f0;
                                                                    dash3d::RSevenModelLitRenderer::SubmitOverlayModel(
                                                                        uVar24, uVar32, uVar49, uVar6, local_2b0._0_8_,
                                                                        local_2b0.field_8, in_stack_fffffffffffffc58);
                                                                } else {
                                                                    local_40 =
                                                                        (long*)shared_ptr<dash3d::ModelLit>::operator*(
                                                                            (shared_ptr<dash3d::ModelLit>*)local_b0);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar49 = *(undefined4*)(lVar10 + 260);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar6 = *(undefined4*)(lVar10 + 264);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    iVar44 = *(int*)(lVar10 + 252);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    iVar47 = *(int*)(lVar10 + 256);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    new (&local_2a0) rs2lib::worldmap::LocationData(
                                                                        iVar44,
                                                                        (uint)local_58 + (uint)local_60 + iVar47,
                                                                        (uint)local_70 + *(int*)(lVar10 + 256));
                                                                    in_stack_fffffffffffffc58 = (NpcType*)local_f0;
                                                                    dash3d::RSevenModelLitRenderer::SubmitOverlayModel(
                                                                        uVar24, local_40, uVar49, uVar6,
                                                                        local_2a0._0_8_, local_2a0.field_8,
                                                                        in_stack_fffffffffffffc58);
                                                                }
                                                            }
                                                        }
                                                    }
                                                    local_b0->~shared_ptr();
                                                    ((local_320 + 32))->~TempSetUsingRSeven();
                                                } else {
                                                    auVar53 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                                    if (*(int*)(auVar53._0_8_ + 12) == 8) {
                                                        bVar3 = operator==(local_1d8, psVar12, auVar53._8_8_);
                                                        if ((bVar3) && (*(int*)&local_48->field_2505088 ==
                                                                        *(int*)((long)&local_48->field_2505088 + 4))) {
                                                            pPVar27 = (PixfontGeneric*)
                                                                eastl::vector<dash3d::EntityHighlight*,
                                                                              BucketAllocatorEASTL>::end(local_1c8);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                                            new (local_f0) eastl::string((basic_string*)(lVar10 + 320));
                                                            new (local_b0) eastl::string();
                                                            SubstituteVars((Client*)&local_110, (basic_string*)local_48,
                                                                           (shared_ptr*)local_f0);
                                                            eastl::string::operator=((eastl::string*)local_f0,
                                                                                     (basic_string*)&local_110);
                                                            local_110.~basic_string();
                                                            lVar10 = eastl::basic_string<char,
                                                                                         eastl::fixed_vector_allocator<
                                                                                             1ul, 40ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::size();
                                                            if (lVar10 == 0) {
                                                                iVar44 = 0;
                                                                iVar47 = 0;
                                                            } else {
                                                                iVar47 = 0;
                                                                iVar44 = 0;
                                                                local_60 = pPVar27;
                                                                do {
                                                                    iVar37 =
                                                                        local_f0->find(StringConstants::TAG_BREAK, 0);
                                                                    if (iVar37 == -1) {
                                                                        eastl::string::operator=(
                                                                            (eastl::string*)local_b0,
                                                                            (basic_string*)local_f0);
                                                                        local_f0->assign("");
                                                                    } else {
                                                                        eastl::string::substr((ulong)&local_110,
                                                                                              (ulong)local_f0);
                                                                        eastl::string::operator=(
                                                                            (eastl::string*)local_b0,
                                                                            (basic_string*)&local_110);
                                                                        local_110.~basic_string();
                                                                        eastl::string::substr((ulong)&local_110,
                                                                                              (ulong)local_f0);
                                                                        eastl::string::operator=(
                                                                            (eastl::string*)local_f0,
                                                                            (basic_string*)&local_110);
                                                                        local_110.~basic_string();
                                                                        pPVar27 = local_60;
                                                                    }
                                                                    iVar37 = pPVar27->StringWid(local_b0);
                                                                    if (iVar44 < iVar37) {
                                                                        iVar44 = iVar37;
                                                                    }
                                                                    iVar47 = iVar47 + pPVar27->field_0 + 1;
                                                                    lVar10 = eastl::basic_string<
                                                                        char, eastl::fixed_vector_allocator<
                                                                                  1ul, 40ul, 1ul, 0ul, true,
                                                                                  eastl::allocator>>::size();
                                                                } while (lVar10 != 0);
                                                            }
                                                            psVar12 = local_38;
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            iVar37 = *(int*)(lVar10 + 72);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                                            iVar47 = iVar47 + 7;
                                                            iVar48 = iVar44 + 6;
                                                            iVar44 = ((int)local_40 - iVar44) + iVar37 + -11;
                                                            iVar37 = (int)local_40 + 5;
                                                            if (iVar44 < iVar37) {
                                                                iVar44 = iVar37;
                                                            }
                                                            iVar37 = local_74 - iVar48;
                                                            if (iVar44 + iVar48 <= (int)local_74) {
                                                                iVar37 = iVar44;
                                                            }
                                                            iVar44 = param_6 - iVar47;
                                                            if ((int)local_50 + *(int*)(lVar10 + 76) + iVar47 + 5 <=
                                                                param_6) {
                                                                iVar44 = (int)local_50 + 5 + *(int*)(lVar10 + 76);
                                                            }
                                                            local_58 =
                                                                (PixfontGeneric*)CONCAT44(local_58._4_4_, iVar37);
                                                            (**(code**)(*(long*)local_68 + 32))(local_68, iVar37,
                                                                                                iVar44, iVar48, iVar47);
                                                            local_68->DrawRect((uint)local_58, iVar44, iVar48, iVar47,
                                                                               0);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            eastl::string::operator=((eastl::string*)local_f0,
                                                                                     (basic_string*)(lVar10 + 320));
                                                            iVar47 = pPVar27->field_0;
                                                            SubstituteVars((Client*)&local_110, (basic_string*)local_48,
                                                                           (shared_ptr*)local_f0);
                                                            eastl::string::operator=((eastl::string*)local_f0,
                                                                                     (basic_string*)&local_110);
                                                            local_110.~basic_string();
                                                            lVar10 = eastl::basic_string<char,
                                                                                         eastl::fixed_vector_allocator<
                                                                                             1ul, 40ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::size();
                                                            if (lVar10 != 0) {
                                                                iVar44 = iVar47 + iVar44 + 2;
                                                                local_58 = (PixfontGeneric*)CONCAT44(
                                                                    local_58._4_4_, (uint)local_58 + 3);
                                                                do {
                                                                    iVar47 =
                                                                        local_f0->find(StringConstants::TAG_BREAK, 0);
                                                                    if (iVar47 == -1) {
                                                                        eastl::string::operator=(
                                                                            (eastl::string*)local_b0,
                                                                            (basic_string*)local_f0);
                                                                        local_f0->assign("");
                                                                    } else {
                                                                        eastl::string::substr((ulong)&local_110,
                                                                                              (ulong)local_f0);
                                                                        eastl::string::operator=(
                                                                            (eastl::string*)local_b0,
                                                                            (basic_string*)&local_110);
                                                                        local_110.~basic_string();
                                                                        eastl::string::substr((ulong)&local_110,
                                                                                              (ulong)local_f0);
                                                                        eastl::string::operator=(
                                                                            (eastl::string*)local_f0,
                                                                            (basic_string*)&local_110);
                                                                        local_110.~basic_string();
                                                                    }
                                                                    in_stack_fffffffffffffc58 = local_68;
                                                                    pPVar27->DrawString(local_b0, (uint)local_58,
                                                                                        iVar44, 0, -1, local_68);
                                                                    iVar44 = iVar44 + pPVar27->field_0 + 1;
                                                                    lVar10 = eastl::basic_string<
                                                                        char, eastl::fixed_vector_allocator<
                                                                                  1ul, 40ul, 1ul, 0ul, true,
                                                                                  eastl::allocator>>::size();
                                                                } while (lVar10 != 0);
                                                            }
                                                            local_b0->~basic_string();
                                                            local_f0->~basic_string();
                                                            iVar44 = (int)local_40;
                                                            psVar12 = local_38;
                                                        }
                                                    }
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                                    iVar47 = *(int*)(lVar10 + 12);
                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                                    psVar33 = local_38;
                                                    if (iVar47 == 9) {
                                                        cVar4 = *(char*)(lVar10 + 152);
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        if (cVar4 == '\0') {
                                                            iVar44 = *(int*)(lVar10 + 72);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                                            iVar47 = (int)local_50;
                                                            local_50 =
                                                                (NXTPix3D*)(ulong)(uint)(*(int*)(lVar10 + 76) + iVar47);
                                                        } else {
                                                            iVar47 = *(int*)(lVar10 + 76) + (uint)local_50;
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                                            iVar44 = *(int*)(lVar10 + 72);
                                                        }
                                                        plVar23 = local_40;
                                                        iVar50 = (int)local_40;
                                                        iVar44 = iVar44 + iVar50;
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        iVar37 = *(int*)(lVar10 + 148);
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                        uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                                        iVar48 = *(int*)(lVar10 + 116);
                                                        if (iVar37 == 1) {
                                                            (**(code**)(*(long*)local_68 + 88))(
                                                                local_68, (ulong)plVar23 & 4294967295, iVar47, iVar44);
                                                        } else {
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                                            in_stack_fffffffffffffc58 =
                                                                (NpcType*)CONCAT44(uVar49, *(int*)(lVar10 + 148));
                                                            DrawLineWithStrokeWidth(local_48, iVar50, iVar47, iVar44,
                                                                                    (int)local_50, iVar48,
                                                                                    *(int*)(lVar10 + 148));
                                                        }
                                                    } else {
                                                        if (*(int*)(lVar10 + 12) == 10) {
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                                            lVar21 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar33);
                                                            piVar13 =
                                                                std::min<int>((int*)(lVar10 + 72), (int*)(lVar21 + 76));
                                                            iVar37 = (*piVar13 - (*piVar13 + -1 >> 31)) + -1 >> 1;
                                                            local_60 = (PixfontGeneric*)CONCAT44(local_60._4_4_,
                                                                                                 iVar44 + iVar37);
                                                            local_58 = (PixfontGeneric*)CONCAT44(
                                                                local_58._4_4_, (int)local_50 + iVar37);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar33);
                                                            cVar4 = *(char*)(lVar10 + 132);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar33);
                                                            iVar44 = *(int*)(lVar10 + 156);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar33);
                                                            iVar47 = *(int*)(lVar10 + 160);
                                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar33);
                                                            psVar12 = local_38;
                                                            uVar6 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                                            uVar49 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                                            if (cVar4 == '\0') {
                                                                if (iVar44 == iVar47) {
                                                                    uVar49 = *(undefined4*)(lVar10 + 148);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    if ((uint)local_70 == 0) {
                                                                        (**(code**)(*(long*)local_68 + 120))(
                                                                            local_68, (ulong)local_60 & 4294967295,
                                                                            (ulong)local_58 & 4294967295, iVar37,
                                                                            uVar49, *(undefined4*)(lVar10 + 116));
                                                                    } else {
                                                                        in_stack_fffffffffffffc58 =
                                                                            (NpcType*)((ulong)
                                                                                           in_stack_fffffffffffffc58 &
                                                                                       18446744069414584320);
                                                                        (**(code**)(*(long*)local_68 + 128))(
                                                                            local_68, (ulong)local_60 & 4294967295,
                                                                            (ulong)local_58 & 4294967295);
                                                                    }
                                                                } else {
                                                                    uVar55 = *(undefined4*)(lVar10 + 156);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                    uVar7 = *(undefined4*)(lVar10 + 160);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                                                    uVar54 = *(undefined4*)(lVar10 + 148);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                                                    if ((uint)local_70 == 0) {
                                                                        in_stack_fffffffffffffc60 =
                                                                            (PixfontGeneric*)CONCAT44(
                                                                                uVar6, *(undefined4*)(lVar10 + 116));
                                                                        in_stack_fffffffffffffc58 =
                                                                            (NpcType*)CONCAT44(uVar49, uVar54);
                                                                        (**(code**)(*(long*)local_68 + 152))(
                                                                            local_68, (ulong)local_60 & 4294967295,
                                                                            (ulong)local_58 & 4294967295, iVar37,
                                                                            uVar55, uVar7, in_stack_fffffffffffffc58,
                                                                            in_stack_fffffffffffffc60);
                                                                    } else {
                                                                        in_stack_fffffffffffffc68 =
                                                                            CONCAT44(
                                                                                (int)(in_stack_fffffffffffffc68 >> 32),
                                                                                ~(uint)local_70) &
                                                                            18446744069414584575;
                                                                        in_stack_fffffffffffffc60 =
                                                                            (PixfontGeneric*)CONCAT44(
                                                                                uVar6, *(undefined4*)(lVar10 + 116));
                                                                        in_stack_fffffffffffffc58 =
                                                                            (NpcType*)CONCAT44(uVar49, uVar54);
                                                                        (**(code**)(*(long*)local_68 + 160))(
                                                                            local_68, (ulong)local_60 & 4294967295,
                                                                            (ulong)local_58 & 4294967295, iVar37,
                                                                            uVar55, uVar7, in_stack_fffffffffffffc58,
                                                                            in_stack_fffffffffffffc60,
                                                                            in_stack_fffffffffffffc68);
                                                                    }
                                                                }
                                                            } else if (iVar44 == iVar47) {
                                                                if ((uint)local_70 == 0) {
                                                                    (**(code**)(*(long*)local_68 + 104))(
                                                                        local_68, (ulong)local_60 & 4294967295,
                                                                        (ulong)local_58 & 4294967295);
                                                                } else {
                                                                    (**(code**)(*(long*)local_68 + 112))(
                                                                        local_68, (ulong)local_60 & 4294967295,
                                                                        (ulong)local_58 & 4294967295, iVar37,
                                                                        *(undefined4*)(lVar10 + 116),
                                                                        ~(uint)local_70 & 255);
                                                                }
                                                            } else {
                                                                uVar6 = *(undefined4*)(lVar10 + 156);
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                                uVar55 = *(undefined4*)(lVar10 + 160);
                                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                                if ((uint)local_70 == 0) {
                                                                    in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(
                                                                        uVar49, *(undefined4*)(lVar10 + 116));
                                                                    (**(code**)(*(long*)local_68 + 136))(
                                                                        local_68, (ulong)local_60 & 4294967295,
                                                                        (ulong)local_58 & 4294967295, iVar37, uVar6,
                                                                        uVar55, in_stack_fffffffffffffc58);
                                                                } else {
                                                                    in_stack_fffffffffffffc60 =
                                                                        (PixfontGeneric*)(CONCAT44(
                                                                                              (int)((ulong)
                                                                                                        in_stack_fffffffffffffc60 >>
                                                                                                    32),
                                                                                              ~(uint)local_70) &
                                                                                          18446744069414584575);
                                                                    in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(
                                                                        uVar49, *(undefined4*)(lVar10 + 116));
                                                                    (**(code**)(*(long*)local_68 + 144))(
                                                                        local_68, (ulong)local_60 & 4294967295,
                                                                        (ulong)local_58 & 4294967295, iVar37, uVar6,
                                                                        uVar55, in_stack_fffffffffffffc58,
                                                                        in_stack_fffffffffffffc60);
                                                                }
                                                            }
                                                        }
                                                        psVar12 = local_38;
                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                        if (*(int*)(lVar10 + 12) == 12) {
                                                            pIVar26 = (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                                            this_12 = (PostProcessManager*)pIVar26->GetInputField();
                                                            pIVar26 = (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                                            puVar16 = (uint*)pIVar26->GetInputFieldAppearance();
                                                            if ((this_12 == (PostProcessManager*)0) ||
                                                                (puVar16 == (uint*)0)) {
                                                                /* WARNING: Subroutine does not return */
                                                                LogAssert(
                                                                    "inputField != nullptr && appearance != nullptr",
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                                                                    1138, (char*)0);
                                                            }
                                                            cVar4 = this_12->Is64BitOS();
                                                            psVar12 = local_38;
                                                            if (cVar4 != '\0') {
                                                                local_110.field_0 = local_110.field_0 & 4294967040;
                                                                pIVar26 =
                                                                    (IfType*)shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)local_38);
                                                                psVar33 =
                                                                    (shared_ptr*)pIVar26->GetFont((bool*)&local_110);
                                                                ptVar42 = (type*)0;
                                                                bVar3 = operator!=(psVar33, (_func_decltype_nullptr*)0);
                                                                if (bVar3) {
                                                                    new (local_f0) InputFieldLayoutParams();
                                                                    local_f0._0_4_ = SUB84(local_40, 0);
                                                                    local_f0._4_4_ = SUB84(local_50, 0);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                                                    local_f0._8_4_ = *(int*)(lVar10 + 72);
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                                                    local_f0._12_4_ = *(int*)(lVar10 + 76);
                                                                    local_e0 = this_12->GetFont11pxRegularID();
                                                                    local_dc = this_12->GetUsageType();
                                                                    local_c8 = this_12->ShowCaret();
                                                                    local_d8 = this_12->GetWrapV();
                                                                    local_d0 = this_12->GetRenderTargetsManager();
                                                                    local_b0[0].field_8._4_4_ = puVar16[1];
                                                                    local_b0[0].field_8._0_4_ = *puVar16;
                                                                    lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                        (shared_ptr<rs2lib::IfType>*)psVar12);
                                                                    if (*(char*)(lVar10 + 396) == '\0') {
                                                                        local_b0[0]._4_4_ = 4294967295;
                                                                    } else {
                                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                                                        local_b0[0]._4_4_ = *(uint*)(lVar10 + 220);
                                                                    }
                                                                    cVar4 = this_12->HasFocus();
                                                                    if (cVar4 == '\0') {
                                                                        pTVar34 =
                                                                            (TextRun*)this_12->SSOBeginPtr(ptVar42);
                                                                        cVar4 = pTVar34->IsEmpty();
                                                                        if (cVar4 == '\0')
                                                                            goto LAB_100100ee5;
                                                                        local_b0[0]._0_4_ = puVar16[2];
                                                                        pTVar34 = (TextRun*)this_12->GetOrigin();
                                                                    } else {
                                                                    LAB_100100ee5:
                                                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                                            (shared_ptr<rs2lib::IfType>*)local_38);
                                                                        local_b0[0]._0_4_ = *(uint*)(lVar10 + 116);
                                                                        pTVar34 =
                                                                            (TextRun*)this_12->SSOBeginPtr(ptVar42);
                                                                    }
                                                                    this_15 = local_68;
                                                                    InputFieldRenderer::Draw(
                                                                        (InputFieldLayoutParams*)local_f0,
                                                                        (InputFieldColourParams*)local_b0, pTVar34,
                                                                        psVar33, (Pix2D*)local_68);
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
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                if (*(int*)(lVar10 + 20) == 1336) {
                                    this_03 = (DeviceOptions*)std::unique_ptr<
                                                  option::DeviceOptions,
                                                  std::default_delete<option::DeviceOptions>>::operator->(local_268);
                                    cVar4 = this_03->GetDisplayFps();
                                    if (cVar4 != '\0') {
                                        iVar44 = (int)local_50;
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        pCVar43 = local_48;
                                        uVar36 = *(int*)(lVar10 + 72) + (int)local_40._0_4_;
                                        this_04 = (EnvLightProbeSettings*)local_48->field_152->GetFPSCounter();
                                        fVar52 = (float)this_04->GetOverbright();
                                        p_Var40 = (_func_void_TestResults_ptr_basic_string_ptr*)(ulong)uVar36;
                                        DrawDebugString(pCVar43, uVar36, iVar44 + 15, "Fps:%0.1f", (double)fVar52);
                                        this_01 = local_238;
                                        uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                        uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                        uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                        uVar36 = iVar44 + 30;
                                        if (pCVar43->field_54877 == '\0') {
                                            iVar44 = (int)local_40;
                                            psVar12 = local_38;
                                            pCVar43 = local_48;
                                        } else {
                                            bVar3 = std::operator!=(local_238, (_func_decltype_nullptr*)p_Var40);
                                            if (bVar3) {
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                iVar47 = *(int*)(lVar10 + 72) + (int)local_40._0_4_;
                                                pSVar17 =
                                                    (ServerConnection*)std::unique_ptr<
                                                        ServerConnection, std::default_delete<ServerConnection>>::
                                                    operator->(
                                                        (unique_ptr<ServerConnection,
                                                                    std::default_delete<ServerConnection>>*)this_01);
                                                local_58 = (PixfontGeneric*)pSVar17->GetBytesReceived();
                                                pSVar17 =
                                                    (ServerConnection*)std::unique_ptr<
                                                        ServerConnection, std::default_delete<ServerConnection>>::
                                                    operator->(
                                                        (unique_ptr<ServerConnection,
                                                                    std::default_delete<ServerConnection>>*)this_01);
                                                local_60 = (PixfontGeneric*)pSVar17->GetBytesSent();
                                                pIVar18 =
                                                    (InputFieldKeyboardHandler*)std::unique_ptr<
                                                        ServerConnection, std::default_delete<ServerConnection>>::
                                                    operator->(
                                                        (unique_ptr<ServerConnection,
                                                                    std::default_delete<ServerConnection>>*)this_01);
                                                bVar3 = pIVar18->PointerRelease(p_Var40);
                                                uVar24 = CONCAT71(extraout_var, bVar3);
                                                pIVar18 =
                                                    (InputFieldKeyboardHandler*)std::unique_ptr<
                                                        ServerConnection, std::default_delete<ServerConnection>>::
                                                    operator->(
                                                        (unique_ptr<ServerConnection,
                                                                    std::default_delete<ServerConnection>>*)this_01);
                                                bVar3 = pIVar18->PointerRelease(p_Var40);
                                                psVar12 = local_38;
                                                uVar32 = CONCAT71(extraout_var_00, bVar3);
                                                DrawDebugString(local_48, iVar47, uVar36,
                                                                "TCP I/O: %zu/%zu Avg: %zu/%zu", local_58, local_60,
                                                                uVar24, uVar32);
                                                uVar6 = (undefined4)((ulong)uVar32 >> 32);
                                                uVar49 = (undefined4)((ulong)uVar24 >> 32);
                                                uVar36 = iVar44 + 45;
                                            } else {
                                                psVar12 = local_38;
                                            }
                                            local_50 = (NXTPix3D*)(ulong)uVar36;
                                            lVar10 = local_230->GetAverage();
                                            lVar21 = dash3d::NXTRenderer::GetInstance();
                                            lVar21 = ((lVar21 + 224))->GetAverage();
                                            lVar22 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            iVar47 = *(int*)(lVar22 + 72) + (int)local_40._0_4_;
                                            lVar22 = local_228->GetAverage();
                                            pCVar43 = local_48;
                                            auVar53 = SEXT816(lVar10 - lVar21) * SEXT816(2361183241434822607);
                                            uVar24 = CONCAT44(
                                                uVar49,
                                                (int)(SUB168(SEXT816(lVar21) * SEXT816(2361183241434822607), 8) >> 7) -
                                                    (SUB164(SEXT816(lVar21) * SEXT816(2361183241434822607), 12) >> 31));
                                            iVar44 = (int)local_50;
                                            DrawDebugString(
                                                local_48, iVar47, iVar44, "Logic:%6i Redraw:%6i Flip:%6i",
                                                (ulong)(uint)((int)(SUB168(SEXT816(lVar22) *
                                                                               SEXT816(2361183241434822607),
                                                                           8) >>
                                                                    7) -
                                                              (SUB164(SEXT816(lVar22) * SEXT816(2361183241434822607),
                                                                      12) >>
                                                               31)),
                                                (ulong)(uint)((int)(auVar53._8_8_ >> 7) - (auVar53._12_4_ >> 31)),
                                                uVar24);
                                            uVar54 = (undefined4)((ulong)uVar24 >> 32);
                                            local_58._0_4_ = iVar44 + 15;
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            iVar44 = *(int*)(lVar10 + 72);
                                            iVar37 = (int)local_40;
                                            lVar10 = local_220->GetAverage();
                                            DrawDebugString(
                                                pCVar43, iVar44 + iVar37, (uint)local_58, "IF3:%i",
                                                (ulong)(uint)((int)(SUB168(SEXT816(lVar10) *
                                                                               SEXT816(2361183241434822607),
                                                                           8) >>
                                                                    7) -
                                                              (SUB164(SEXT816(lVar10) * SEXT816(2361183241434822607),
                                                                      12) >>
                                                               31)));
                                            iVar47 = (int)local_50;
                                            local_58._0_4_ = iVar47 + 30;
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            iVar44 = *(int*)(lVar10 + 72);
                                            lVar10 = local_218->GetAverage();
                                            pCVar43 = local_48;
                                            DrawDebugString(
                                                local_48, iVar44 + iVar37, (uint)local_58, "GDM:%i",
                                                (ulong)(uint)((int)(SUB168(SEXT816(lVar10) *
                                                                               SEXT816(2361183241434822607),
                                                                           8) >>
                                                                    7) -
                                                              (SUB164(SEXT816(lVar10) * SEXT816(2361183241434822607),
                                                                      12) >>
                                                               31)));
                                            pRVar25 = local_210;
                                            local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_, iVar47 + 45);
                                            local_210->AddSample(
                                                dash3d::ModelLitRenderer_lastModelLitWorldRenderTotalNanos);
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                            iVar44 = *(int*)(lVar10 + 72) + (int)local_40._0_4_;
                                            lVar10 = pRVar25->GetAverage();
                                            uVar49 = (undefined4)dash3d::ModelLitRenderer_lastModelLitWorldRenderTotal;
                                            local_60 = (PixfontGeneric*)CONCAT44(
                                                local_60._4_4_,
                                                (undefined4)dash3d::ModelLitRenderer_lastModelLitUploadTotal);
                                            plVar23 = (long*)OSRenderCore_AudioThread::Instance();
                                            uVar7 =
                                                (((long)plVar23 + *(long*)(*plVar23 + -24)))->GetLastModelLitNXTTotal();
                                            in_stack_fffffffffffffc68 = CONCAT44(
                                                uVar55, (undefined4)dash3d::ModelLitRenderer_lastCachedModelsTotal);
                                            uVar32 = CONCAT44(uVar6, uVar7);
                                            uVar24 = CONCAT44(uVar54, uVar49);
                                            DrawDebugString(
                                                pCVar43, iVar44, (uint)local_58, "Model:%i (%i/%i/%i/%i)",
                                                (ulong)(uint)((int)(SUB168(SEXT816(lVar10) *
                                                                               SEXT816(2361183241434822607),
                                                                           8) >>
                                                                    7) -
                                                              (SUB164(SEXT816(lVar10) * SEXT816(2361183241434822607),
                                                                      12) >>
                                                               31)),
                                                (ulong)local_60 & 4294967295, uVar24, uVar32,
                                                in_stack_fffffffffffffc68);
                                            psVar12 = local_38;
                                            uVar6 = (undefined4)((ulong)uVar32 >> 32);
                                            uVar49 = (undefined4)((ulong)uVar24 >> 32);
                                            uVar36 = iVar47 + 60;
                                            if (pCVar43->field_136 == 1) {
                                                local_58 = (PixfontGeneric*)(ulong)uVar36;
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                iVar44 = *(int*)(lVar10 + 72);
                                                iVar37 = (int)local_40;
                                                plVar23 = (long*)OSRenderCore_AudioThread::Instance();
                                                uVar24 = (((long)plVar23 + *(long*)(*plVar23 + -24)))
                                                             ->GetLastNumNXTRenderables();
                                                DrawDebugString(pCVar43, iVar44 + iVar37, (int)local_58,
                                                                "Renderables:%zu", uVar24);
                                                local_58 = (PixfontGeneric*)CONCAT44(local_58._4_4_, iVar47 + 75);
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                iVar44 = *(int*)(lVar10 + 72);
                                                pRVar25 = (RollingAverageCounter*)dash3d::NXTRenderer::GetInstance();
                                                lVar10 = pRVar25->GetAverage();
                                                lVar21 = dash3d::NXTRenderer::GetInstance();
                                                lVar21 = ((lVar21 + 56))->GetAverage();
                                                lVar22 = dash3d::NXTRenderer::GetInstance();
                                                lVar22 = ((lVar22 + 112))->GetAverage();
                                                pCVar43 = local_48;
                                                uVar24 = CONCAT44(
                                                    uVar49,
                                                    (int)(SUB168(SEXT816(lVar22) * SEXT816(2361183241434822607), 8) >>
                                                          7) -
                                                        (SUB164(SEXT816(lVar22) * SEXT816(2361183241434822607), 12) >>
                                                         31));
                                                DrawDebugString(
                                                    local_48, iVar44 + iVar37, (uint)local_58, "NXT:%6i %6i %6i",
                                                    (ulong)(uint)((int)(SUB168(SEXT816(lVar10) *
                                                                                   SEXT816(2361183241434822607),
                                                                               8) >>
                                                                        7) -
                                                                  (SUB164(SEXT816(lVar10) *
                                                                              SEXT816(2361183241434822607),
                                                                          12) >>
                                                                   31)),
                                                    (ulong)(uint)((int)(SUB168(SEXT816(lVar21) *
                                                                                   SEXT816(2361183241434822607),
                                                                               8) >>
                                                                        7) -
                                                                  (SUB164(SEXT816(lVar21) *
                                                                              SEXT816(2361183241434822607),
                                                                          12) >>
                                                                   31)),
                                                    uVar24);
                                                uVar49 = (undefined4)((ulong)uVar24 >> 32);
                                                iVar37 = (int)local_50;
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)local_38);
                                                iVar47 = *(int*)(lVar10 + 72);
                                                iVar44 = (int)local_40;
                                                lVar10 = dash3d::NXTRenderer::GetInstance();
                                                uVar36 = ((lVar10 + 168))->GetAverage();
                                                DrawDebugString(pCVar43, iVar47 + iVar44, iVar37 + 90, "Verts:%i",
                                                                (ulong)uVar36);
                                                uVar36 = iVar37 + 105;
                                            } else {
                                                iVar44 = (int)local_40;
                                            }
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                            iVar47 = *(int*)(lVar10 + 72);
                                            uVar8 = local_208->GetX();
                                            uVar45 = local_200->GetX();
                                            DrawDebugString(pCVar43, iVar47 + iVar44, uVar36, "Pointer 0 Press:%i,%i",
                                                            (ulong)uVar8, (ulong)uVar45);
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                            iVar47 = *(int*)(lVar10 + 72);
                                            uVar8 = local_1f8->GetX();
                                            uVar45 = local_1f0->GetX();
                                            DrawDebugString(local_48, iVar47 + iVar44, uVar36 + 15,
                                                            "Pointer 0 Release:%i,%i", (ulong)uVar8, (ulong)uVar45);
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                            DrawDebugString(local_48, *(int*)(lVar10 + 72) + iVar44, uVar36 + 30,
                                                            "Action Current:%i, Last:%i",
                                                            (ulong)(uint)local_48->field_8504,
                                                            (ulong) * (uint*)&local_48->field_8508);
                                            local_50 = (NXTPix3D*)CONCAT44(local_50._4_4_, uVar36 + 45);
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)local_38);
                                            this_02 = local_130;
                                            iVar47 = *(int*)(lVar10 + 72);
                                            lVar10 = shared_ptr<ClientPlayer>::operator->(local_130);
                                            local_58 =
                                                (PixfontGeneric*)CONCAT44(local_58._4_4_, *(undefined4*)(lVar10 + 24));
                                            lVar10 = shared_ptr<ClientPlayer>::operator->(this_02);
                                            local_60 =
                                                (PixfontGeneric*)CONCAT44(local_60._4_4_, *(undefined4*)(lVar10 + 28));
                                            lVar10 = shared_ptr<ClientPlayer>::operator->(this_02);
                                            iVar37 = *(int*)(lVar10 + 24);
                                            iVar48 = iVar37 + 127;
                                            if (-1 < iVar37) {
                                                iVar48 = iVar37;
                                            }
                                            lVar10 = shared_ptr<ClientPlayer>::operator->(this_02);
                                            psVar12 = local_38;
                                            pCVar43 = local_48;
                                            iVar37 = *(int*)(lVar10 + 28);
                                            iVar50 = iVar37 + 127;
                                            if (-1 < iVar37) {
                                                iVar50 = iVar37;
                                            }
                                            in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(uVar49, iVar48 >> 7);
                                            in_stack_fffffffffffffc60 = (PixfontGeneric*)CONCAT44(uVar6, iVar50 >> 7);
                                            DrawDebugString(local_48, iVar47 + iVar44, (uint)local_50,
                                                            "Loc:%d,%d (%d,%d)", (ulong)local_58 & 4294967295,
                                                            (ulong)local_60 & 4294967295, in_stack_fffffffffffffc58,
                                                            in_stack_fffffffffffffc60);
                                            uVar36 = uVar36 + 60;
                                        }
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        iVar47 = *(int*)(lVar10 + 72);
                                        dash3d::NXTRenderer::GetInstance();
                                        DrawDebugString(pCVar43, iVar44 + iVar47, uVar36, "Mem:%zik");
                                    }
                                    goto LAB_1000fd7d0;
                                }
                                lVar10 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                pCVar43 = local_48;
                                if (*(int*)(lVar10 + 20) == 1337) {
                                    iVar47 = (int)local_40;
                                    *(int*)&local_48->field_2505044 = iVar47;
                                    iVar37 = (int)local_50;
                                    *(int*)((long)&local_48->field_2505044 + 4) = iVar37;
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    pCVar43->field_2505052 = *(int*)(lVar10 + 4) >> 16;
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    iVar44 = *(int*)(lVar10 + 72);
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    GameDrawMain(pCVar43, iVar47, iVar37, iVar44, *(int*)(lVar10 + 76), (int)local_58);
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    this_14 = local_250;
                                    uVar36 = *(uint*)(lVar10 + 2044);
                                LAB_1000fdecd:
                                    puVar19 =
                                        (undefined1*)std::array<bool, 100ul>::operator[](this_14, (long)(int)uVar36);
                                    *puVar19 = 1;
                                } else {
                                    lVar10 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar12);
                                    uVar49 = (undefined4)((ulong)in_stack_fffffffffffffc58 >> 32);
                                    uVar6 = (undefined4)((ulong)in_stack_fffffffffffffc60 >> 32);
                                    uVar55 = (undefined4)(in_stack_fffffffffffffc68 >> 32);
                                    if (*(int*)(lVar10 + 20) == 1338) {
                                        if (local_48->field_8161 == '\0')
                                            goto LAB_1000fd7d0;
                                        pMVar20 = (Minimap*)std::unique_ptr<
                                                      minimap::Minimap,
                                                      std::default_delete<minimap::Minimap>>::operator->(local_190);
                                        in_stack_fffffffffffffc68 = CONCAT44(uVar55, *(int*)&local_48->field_54892);
                                        in_stack_fffffffffffffc60 =
                                            (PixfontGeneric*)CONCAT44(uVar6, *(int*)&local_48->field_54896);
                                        in_stack_fffffffffffffc58 = (NpcType*)CONCAT44(uVar49, local_48->field_54888);
                                        cVar4 =
                                            pMVar20->Draw(psVar12, (int)local_40, (int)local_50, local_48->field_54900,
                                                          local_48->field_54904, local_48->field_54888,
                                                          *(int*)&local_48->field_54896, *(int*)&local_48->field_54892);
                                        if (cVar4 != '\0') {
                                            this_14 = local_1e8;
                                            uVar36 = (uint)local_58;
                                            goto LAB_1000fdecd;
                                        }
                                    } else {
                                        lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)psVar12);
                                        if (*(int*)(lVar10 + 20) != 1339) {
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            pCVar43 = local_48;
                                            if (*(int*)(lVar10 + 20) == 1400) {
                                                local_88 = local_48->m_pWorldmap;
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                local_b8 =
                                                    (Array*)CONCAT44(local_b8._4_4_, *(undefined4*)(lVar10 + 72));
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                in_stack_fffffffffffffc58 = local_68;
                                                local_88->RenderWorldmap((int)local_40, (int)local_50, (uint)local_b8,
                                                                         *(int*)(lVar10 + 76), pCVar43->field_8488,
                                                                         (Pix2D*)local_68);
                                            }
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            if (*(int*)(lVar10 + 20) == 1401) {
                                                this_00 = local_48->m_pWorldmap;
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                local_88 =
                                                    (Worldmap*)CONCAT44(local_88._4_4_, *(undefined4*)(lVar10 + 72));
                                                lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)psVar12);
                                                this_00->RenderOverview((int)local_40, (int)local_50, (uint)local_88,
                                                                        *(int*)(lVar10 + 76), local_68);
                                            }
                                            psVar33 = psVar12;
                                            lVar10 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)psVar12);
                                            if (*(int*)(lVar10 + 20) == 1402) {
                                                this_05 =
                                                    (TitleFlames*)
                                                        std::unique_ptr<TitleFlames, std::default_delete<TitleFlames>>::
                                                        operator->(
                                                            (unique_ptr<TitleFlames, std::default_delete<TitleFlames>>*)
                                                                psVar33);
                                                this_05->RenderFlames((int)local_40, local_48->field_8488,
                                                                      (Pix2D*)local_68);
                                            }
                                            goto LAB_1000fe5b8;
                                        }
                                        pMVar20 = (Minimap*)std::unique_ptr<
                                                      minimap::Minimap,
                                                      std::default_delete<minimap::Minimap>>::operator->(local_190);
                                        pMVar20->CompassDraw(psVar12, (int)local_40, (int)local_50, (int)local_58,
                                                             local_48->field_53112);
                                    }
                                }
                                this_15 = local_68;
                            LAB_1000fded9:
                                this_15->SetClipping(local_78, local_7c, local_74, param_6);
                            }
                        }
                    }
                }
            LAB_1000fd7d0:
                param_1 = (Array*)local_148;
                uVar38 = local_290 + 1;
                uVar11 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_148);
            } while (uVar38 < uVar11);
        }
    }

    // 0x1001011f0, 576 bytes, placed by class name and neighbouring functions
    // Client::GetObjSprite(int, int, int, int, int)
    Client* Client::GetObjSprite(int param_1, int param_2, int param_3, int param_4, int param_5) {
        bool bVar2;
        char cVar3;
        long lVar4;
        byte bVar5;
        Client* pCVar6;
        undefined4 in_register_00000034;
        byte bVar7;
        uint in_stack_00000008;
        shared_ptr local_90;
        allocator local_80[8];
        shared_ptr local_78[2];
        shared_ptr local_50;

        new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(
            (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1));
        cVar3 = (char)((in_stack_00000008 & 4) >> 2);
        if ((in_stack_00000008 & 4) == 0) {
            bVar2 = true;
        } else {
            local_78->List(param_2);
            shared_ptr<configdecoder::ObjType>::operator=((shared_ptr<configdecoder::ObjType>*)&local_50, local_78);
            local_78->~shared_ptr();
            bVar2 = operator!=(&local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
                lVar4 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_50);
                bVar2 = *(int*)(lVar4 + 200) == 0;
            } else {
                bVar2 = true;
                cVar3 = '\0';
            }
        }
        bVar5 = (byte)in_stack_00000008 & 1;
        bVar7 = bVar5;
        if (param_3 == -1) {
            bVar7 = 0;
        }
        if ((in_stack_00000008 & 1) == 0) {
            bVar7 = bVar5;
        }
        if (bVar7 != 0) {
            bVar5 = 0;
            if ((in_stack_00000008 & 2) != 0 || param_3 != 1) {
                bVar5 = bVar7;
            }
            if (!bVar2) {
                bVar5 = bVar7;
            }
            bVar7 = bVar5;
        }
        if ((bVar7 == 0) && (cVar3 != '\0')) {
            shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_50);
            cVar3 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar3 == '\0') {
                lVar4 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)&local_50);
                local_78->GetSprite(param_2, param_3, param_4, param_5, 2, 0, lVar4 + 40);
                pCVar6 = (Client*)this;
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(Client*)this, local_78);
                local_78->~shared_ptr();
                goto LAB_1001013b1;
            }
        }
        eastl::allocator::allocator(local_80, "EASTL basic_string");
        new (local_78) eastl::string("", local_80);
        local_90.GetSprite(param_2, param_3, param_4, param_5, bVar7, 0, local_78);
        pCVar6 = (Client*)this;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)(Client*)this, &local_90);
        local_90.~shared_ptr();
        local_78->~basic_string();
    LAB_1001013b1:
        local_50.~shared_ptr();
        return pCVar6;
    }

    // 0x100101470, 80 bytes, placed by class name and neighbouring functions
    // Client::Hide(shared_ptr<rs2lib::IfType> const&)
    bool Client::Hide(shared_ptr* param_1) {
        long lVar2;
        bool bVar3;

        if (field_53265 == '\0') {
        LAB_1001014a0:
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            bVar3 = *(char*)(lVar2 + 92) != '\0';
        } else {
            if (GetActive(this, param_1) == 0) {
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (*(int*)(lVar2 + 12) != 0)
                    goto LAB_1001014a0;
            }
            bVar3 = false;
        }
        return bVar3;
    }

    // 0x1001014c0, 496 bytes, placed by class name and neighbouring functions
    // Client::ClientComponent(shared_ptr<rs2lib::IfType> const&)
    void Client::ClientComponent(shared_ptr* param_1) {
        int iVar1;
        long lVar2;
        GraphicsDefaults* pGVar3;
        double dVar4;

        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        switch (*(undefined4*)(lVar2 + 20)) {
        case 324:
            if (field_2508984 == -1) {
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                field_2508984 = *(int*)(lVar2 + 164);
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                field_2508988 = *(undefined4*)(lVar2 + 168);
            }
            pGVar3 = (GraphicsDefaults*)shared_ptr<rs2lib::PlayerModel>::operator->(
                (shared_ptr<rs2lib::PlayerModel>*)&field_2508968);
            iVar1 = pGVar3->GetSpriteCompassID();
            if (iVar1 != 1)
                goto LAB_10010159c;
        LAB_100101546:
            iVar1 = field_2508984;
            goto LAB_1001015a3;
        case 325:
            if (field_2508984 == -1) {
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                field_2508984 = *(int*)(lVar2 + 164);
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                field_2508988 = *(undefined4*)(lVar2 + 168);
            }
            pGVar3 = (GraphicsDefaults*)shared_ptr<rs2lib::PlayerModel>::operator->(
                (shared_ptr<rs2lib::PlayerModel>*)&field_2508968);
            iVar1 = pGVar3->GetSpriteCompassID();
            if (iVar1 != 1)
                goto LAB_100101546;
        LAB_10010159c:
            iVar1 = field_2508988;
        LAB_1001015a3:
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(int*)(lVar2 + 164) = iVar1;
            break;
        case 327:
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar2 + 260) = 150;
            dVar4 = (double)_sin((double)field_8488 * 0.025);
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(uint*)(lVar2 + 264) = (int)(dVar4 * 256.0) & 2047;
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar2 + 228) = 5;
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar2 + 232) = 0;
            break;
        case 328:
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar2 + 260) = 150;
            dVar4 = (double)_sin((double)field_8488 * 0.025);
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(uint*)(lVar2 + 264) = (int)(dVar4 * 256.0) & 2047;
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar2 + 228) = 5;
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar2 + 232) = 1;
        }
    }

    // 0x1001016e0, 368 bytes, placed by class name and neighbouring functions
    // Client::DrawDebugString(int, int, char const*, ...)
    void Client::DrawDebugString(int param_1, int param_2, char* param_3, ...) {
        char in_AL;
        char* pcVar1;
        undefined8 in_R8;
        undefined8 in_R9;
        undefined8 in_XMM0_Qa;
        undefined8 in_XMM1_Qa;
        undefined8 in_XMM2_Qa;
        undefined8 in_XMM3_Qa;
        undefined8 in_XMM4_Qa;
        undefined8 in_XMM5_Qa;
        undefined8 in_XMM6_Qa;
        undefined8 in_XMM7_Qa;
        undefined1 uStack0000000000000008;
        undefined1 local_958[32];
        undefined8 local_938;
        undefined8 local_930;
        undefined8 local_928;
        undefined8 local_918;
        undefined8 local_908;
        undefined8 local_8f8;
        undefined8 local_8e8;
        undefined8 local_8d8;
        undefined8 local_8c8;
        undefined8 local_8b8;
        eastl::string local_8a8[32];
        allocator local_888[8];
        fixed_string<char, 2048, true, eastl::allocator> local_880[2088];
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined8 local_38;

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
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_48 = local_958;
        local_50 = &uStack0000000000000008;
        local_58 = 206158430240;
        local_938 = in_R8;
        local_930 = in_R9;
        eastl::fixed_string<char, 2048, true, eastl::allocator>::fixed_string(local_880);
        local_880->sprintf_va_list(param_3, (__va_list_tag*)&local_58);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_888, "EASTL basic_string");
        eastl::string::basic_string(local_8a8, pcVar1, local_888);
        DrawDebugString(this, (basic_string*)local_8a8, param_1, param_2);
        eastl::string::~basic_string(local_8a8);
        /* WARNING: Subroutine does not return */
        local_880->~fixed_string();
    }

    // 0x100101930, 560 bytes, placed by class name and neighbouring functions
    // Client::DrawScrollbar(int, int, int, int, int)
    void Client::DrawScrollbar(int param_1, int param_2, int param_3, int param_4, int param_5) {
        ulong uVar1;
        long* plVar2;
        undefined8 uVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        ulong uVar8;

        plVar2 = (long*)(*(code*)*field_144->field_0)();
        uVar3 = Array<graphics::Pix8, eastl::allocator>::operator[](
            (Array<graphics::Pix8, eastl::allocator>*)&field_1115800, 0);
        (**(code**)(*plVar2 + 184))(plVar2, uVar3, param_1, param_2);
        uVar3 = Array<graphics::Pix8, eastl::allocator>::operator[](
            (Array<graphics::Pix8, eastl::allocator>*)&field_1115800, 1);
        (**(code**)(*plVar2 + 184))(plVar2, uVar3, param_1, param_2 + param_4 + -16);
        iVar5 = param_4 + -32;
        (**(code**)(*plVar2 + 32))(plVar2, param_1, param_2 + 16, 16, iVar5, field_1115840);
        uVar1 = (long)(iVar5 * param_4) / (long)param_5;
        uVar8 = 8;
        if (8 < (int)uVar1) {
            uVar8 = uVar1 & 4294967295;
        }
        iVar7 = (int)uVar8;
        iVar5 = ((iVar5 - iVar7) * param_3) / (param_5 - param_4);
        iVar6 = iVar5 + param_2 + 16;
        (**(code**)(*plVar2 + 32))(plVar2, param_1, iVar6, 16, uVar8, field_1115844);
        (**(code**)(*plVar2 + 72))(plVar2, param_1, iVar6, uVar8, field_1115852);
        (**(code**)(*plVar2 + 72))(plVar2, param_1 + 1, iVar6, uVar8, field_1115852);
        (**(code**)(*plVar2 + 56))(plVar2, param_1, iVar6, 16, field_1115852);
        iVar4 = iVar5 + param_2 + 17;
        (**(code**)(*plVar2 + 56))(plVar2, param_1, iVar4, 16, field_1115852);
        (**(code**)(*plVar2 + 72))(plVar2, param_1 + 15, iVar6, uVar8, field_1115848);
        (**(code**)(*plVar2 + 72))(plVar2, param_1 + 14, iVar4, iVar7 + -1, field_1115848);
        (**(code**)(*plVar2 + 56))(plVar2, param_1, iVar5 + param_2 + iVar7 + 15, 16, field_1115848);
        (**(code**)(*plVar2 + 56))(plVar2, param_1 + 1, iVar5 + param_2 + iVar7 + 14, 15, field_1115848);
    }

    // 0x100101b60, 336 bytes, placed by class name and neighbouring functions
    // Client::GetIfActive(shared_ptr<rs2lib::IfType> const&)
    ulong Client::GetIfActive(shared_ptr* param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        int* piVar5;
        ulong uVar6;
        bool bVar7;
        undefined8 unaff_R15;

        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        cVar1 = ((lVar4 + 1816))->empty();
        if (cVar1 == '\0') {
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar2 = ((lVar4 + 1816))->end();
            bVar7 = 0 < iVar2;
            if (0 < iVar2) {
                uVar6 = 0;
                do {
                    iVar3 = GetIfVar(this, param_1, (int)uVar6);
                    lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar4 + 1840), uVar6);
                    iVar2 = *piVar5;
                    lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar4 + 1816), uVar6);
                    if (*piVar5 == 2) {
                        if (iVar2 <= iVar3)
                            break;
                    } else {
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar4 + 1816), uVar6);
                        if (*piVar5 == 3) {
                            if (iVar3 <= iVar2)
                                break;
                        } else {
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)(lVar4 + 1816), uVar6);
                            if (*piVar5 == 4) {
                                if (iVar3 == iVar2)
                                    break;
                            } else if (iVar3 != iVar2)
                                break;
                        }
                    }
                    uVar6 = uVar6 + 1;
                    lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    iVar2 = ((lVar4 + 1816))->end();
                    bVar7 = (long)uVar6 < (long)iVar2;
                } while ((long)uVar6 < (long)iVar2);
            }
            uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8), bVar7) ^ 1;
        } else {
            uVar6 = 0;
        }
        return uVar6 & 4294967041;
    }

    // 0x100101de0, 1360 bytes, placed by class name and neighbouring functions
    // Client::NiceNumber(int)
    Client* Client::NiceNumber(int param_1) {
        int iVar1;
        ulong uVar2;
        uint in_EDX;
        basic_string* this_00;
        eastl local_178[32];
        eastl local_158[32];
        eastl local_138[32];
        StringConstants local_118[32];
        basic_string local_f8[32];
        basic_string local_d8[32];
        eastl::string local_b8[32];
        eastl local_98[32];
        basic_string local_78[32];
        eastl local_58[32];

        eastl::string::basic_string(local_b8);
        eastl::string::sprintf((char*)local_b8, "%i", (ulong)in_EDX);
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        iVar1 = iVar1 + -3;
        if (0 < iVar1) {
            do {
                eastl::string::substr((ulong)local_78, (ulong)local_b8);
                eastl::operator+(local_58, local_78, (value_type*)StringConstants::COMMA);
                eastl::string::substr((ulong)local_d8, (ulong)local_b8);
                eastl::operator+(local_98, (basic_string*)local_58, local_d8);
                eastl::string::operator=(local_b8, (basic_string*)local_98);
                local_98->~basic_string();
                local_d8->~basic_string();
                local_58->~basic_string();
                local_78->~basic_string();
                iVar1 = iVar1 + -3;
            } while (0 < iVar1);
        }
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (uVar2 < 10) {
            uVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (uVar2 < 7) {
                local_78->TAG_COLOUR(16776960);
                eastl::operator+(local_58, (value_type*)&DAT_100e35840, local_78);
                eastl::operator+(local_98, (basic_string*)local_58, (basic_string*)local_b8);
                eastl::operator+((eastl*)(Client*)this, (basic_string*)local_98,
                                 (value_type*)StringConstants::TAG_COLOURCLOSE);
                local_98->~basic_string();
                local_58->~basic_string();
                this_00 = local_78;
                goto LAB_1001021cb;
            }
            local_118->TAG_COLOUR(16777215);
            eastl::operator+(local_138, (value_type*)&DAT_100e35840, (basic_string*)local_118);
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::substr((ulong)local_f8, (ulong)local_b8);
            eastl::operator+(local_158, (basic_string*)local_138, local_f8);
            eastl::operator+(local_178, (basic_string*)local_158, (basic_string*)&constants::text::thousand);
            eastl::operator+((eastl*)local_d8, (basic_string*)local_178, (value_type*)&DAT_100e35840);
            eastl::operator+((eastl*)local_78, local_d8, (value_type*)StringConstants::OPEN_BRACKET);
            eastl::operator+(local_58, local_78, (basic_string*)local_b8);
            eastl::operator+(local_98, (basic_string*)local_58, (value_type*)StringConstants::CLOSE_BRACKET);
            eastl::operator+((eastl*)(Client*)this, (basic_string*)local_98,
                             (value_type*)StringConstants::TAG_COLOURCLOSE);
        } else {
            local_118->TAG_COLOUR(65408);
            eastl::operator+(local_138, (value_type*)&DAT_100e35840, (basic_string*)local_118);
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            eastl::string::substr((ulong)local_f8, (ulong)local_b8);
            eastl::operator+(local_158, (basic_string*)local_138, local_f8);
            eastl::operator+(local_178, (basic_string*)local_158, (basic_string*)&constants::text::million);
            eastl::operator+((eastl*)local_d8, (basic_string*)local_178, (value_type*)&DAT_100e35840);
            eastl::operator+((eastl*)local_78, local_d8, (value_type*)StringConstants::OPEN_BRACKET);
            eastl::operator+(local_58, local_78, (basic_string*)local_b8);
            eastl::operator+(local_98, (basic_string*)local_58, (value_type*)StringConstants::CLOSE_BRACKET);
            eastl::operator+((eastl*)(Client*)this, (basic_string*)local_98,
                             (value_type*)StringConstants::TAG_COLOURCLOSE);
        }
        local_98->~basic_string();
        local_58->~basic_string();
        local_78->~basic_string();
        local_d8->~basic_string();
        local_178->~basic_string();
        local_158->~basic_string();
        local_f8->~basic_string();
        local_138->~basic_string();
        this_00 = (basic_string*)local_118;
    LAB_1001021cb:
        this_00->~basic_string();
        eastl::string::~basic_string(local_b8);
        return (Client*)this;
    }

    // 0x100102330, 336 bytes, placed by class name and neighbouring functions
    // Client::SubstituteVars(eastl::string const&, shared_ptr<rs2lib::IfType> const&)
    Client* Client::SubstituteVars(basic_string* param_1, shared_ptr* param_2) {
        ulong uVar2;
        ulong uVar3;
        ulong uVar4;
        char* pcVar5;
        long lVar6;
        shared_ptr* in_RCX;
        eastl::string local_70[32];
        shared_ptr* local_50;
        ulong local_40;

        local_50 = in_RCX;
        new (this) eastl::string();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        reserve(uVar2);
        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        uVar2 = 0;
        do {
            local_40 = uVar2;
            do {
                uVar4 = param_2->find("%", uVar2);
                if (uVar3 <= uVar4) {
                    lVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    ((Client*)this)->append(param_2, local_40, lVar6 - local_40);
                    return (Client*)this;
                }
                uVar2 = uVar4 + 1;
                pcVar5 = (char*)eastl::string::operator[]((eastl::string*)param_2, uVar2);
            } while (4 < (byte)(*pcVar5 - 49U));
            GetIfVar((Client*)param_1, local_50, *pcVar5 + -49);
            ((Client*)this)->append(param_2, local_40, uVar4 - local_40);
            Inf((Client*)local_70, (int)param_2);
            ((Client*)this)->append();
            uVar2 = uVar4 + 2;
            eastl::string::~basic_string(local_70);
        } while (true);
    }

    // 0x100102560, 144 bytes, placed by class name and neighbouring functions
    // Client::DrawOverlay(int, int, int, int, int, int, int, int)
    void Client::DrawOverlay(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                             int param_8) {
        Array* pAVar2;

        if ((m_entityOverlays, param_1)->OverlayExistsAtIndex() != '\0') {
            pAVar2 = (Array*)(m_entityOverlays, param_1)->GetOverlay();
            if (pAVar2 != (Array*)0) {
                DrawLayer(this, pAVar2, -1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
            }
        }
    }

    // 0x100102d50, 432 bytes, placed by class name and neighbouring functions
    // Client::DrawLineWithStrokeWidth(int, int, int, int, int, int)
    void Client::DrawLineWithStrokeWidth(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        uint uVar1;
        int iVar2;
        long lVar3;
        Pix3D* pPVar4;
        SoftwarePix3D* pSVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        uint uVar11;
        int iVar12;
        undefined1* this_00;
        int iVar13;
        int iVar14;
        int iVar15;
        uint uVar16;

        uVar16 = param_3 - param_1;
        uVar9 = param_4 - param_2;
        uVar1 = -uVar16;
        if ((int)-uVar16 < 0) {
            uVar1 = uVar16;
        }
        uVar11 = -uVar9;
        if ((int)-uVar9 < 0) {
            uVar11 = uVar9;
        }
        if (uVar11 <= uVar1) {
            uVar11 = uVar1;
        }
        if (uVar11 != 0) {
            iVar6 = (int)(uVar16 * 65536) / (int)uVar11;
            iVar2 = (int)(uVar9 * 65536) / (int)uVar11;
            iVar14 = -iVar2;
            if (iVar2 <= iVar6) {
                iVar6 = -iVar6;
                iVar14 = iVar2;
            }
            iVar13 = iVar14 * param_6 >> 17;
            iVar15 = iVar14 * param_6 + 1 >> 17;
            iVar2 = iVar6 * param_6 >> 17;
            iVar12 = iVar6 * param_6 + 1 >> 17;
            lVar3 = (*(code*)*field_144->field_0)(field_144, param_6,
                                                  (long)(int)(uVar9 * 65536) % (long)(int)uVar11 & 4294967295);
            iVar7 = param_1 - *(int*)(lVar3 + 24);
            iVar8 = param_2 - *(int*)(lVar3 + 16);
            iVar14 = iVar7 + iVar13;
            iVar6 = iVar7 - iVar15;
            iVar15 = (iVar7 + uVar16) - iVar15;
            iVar13 = iVar7 + uVar16 + iVar13;
            iVar7 = iVar8 + iVar2;
            iVar10 = (iVar8 + uVar9) - iVar12;
            this_00 = &field_1120488;
            pPVar4 =
                (Pix3D*)std::unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>::operator->(
                    (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)this_00);
            pPVar4->SetHClip(iVar14, iVar6, iVar15);
            pSVar5 = (SoftwarePix3D*)
                         std::unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>::operator->(
                             (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)this_00);
            pSVar5->FlatTriangle(iVar7, iVar8 - iVar12, iVar10, iVar14, iVar6, iVar15, param_5);
            pPVar4 =
                (Pix3D*)std::unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>::operator->(
                    (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)this_00);
            pPVar4->SetHClip(iVar14, iVar15, iVar13);
            pSVar5 = (SoftwarePix3D*)
                         std::unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>::operator->(
                             (unique_ptr<dash3d::SoftwarePix3D, std::default_delete<dash3d::SoftwarePix3D>>*)this_00);
            pSVar5->FlatTriangle(iVar7, iVar10, iVar8 + uVar9 + iVar2, iVar14, iVar15, iVar13, param_5);
        }
    }

    // 0x100102fd0, 112 bytes, placed by class name and neighbouring functions
    // Client::InterfaceCalculateSizeAndPosInterface(int, int, int, bool, bool)
    void Client::InterfaceCalculateSizeAndPosInterface(int param_1, int param_2, int param_3, bool param_4,
                                                       bool param_5) {
        Array* pAVar1;

        if (((ulong)(uint)param_1)->OpenInterface(param_1) != '\0') {
            pAVar1 = (Array*)Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>*)&rs2lib::IfType::m_list,
                (long)param_1);
            InterfaceCalculateSizeAndPosArray(this, pAVar1, -1, param_2, param_3, param_4, param_5);
        }
    }

    // 0x100103040, 240 bytes, placed by class name and neighbouring functions
    // Client::InterfaceCalculateSizeAndPosComponent(shared_ptr<rs2lib::IfType> const&)
    void Client::InterfaceCalculateSizeAndPosComponent(shared_ptr* param_1) {
        long lVar1;
        shared_ptr<rs2lib::IfType>* this_00;
        WorldmapAreaMetadata* this_01;
        NXTPixScreen* this_02;
        int iVar2;
        int iVar3;
        shared_ptr in_stack_ffffffffffffffb8;
        shared_ptr<dash3d::Decor> asStack_36[6];
        uint local_30[2];

        lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar1 + 88) == -1) {
            this_01 = (WorldmapAreaMetadata*)field_144->GetScreen();
            local_30[0] = this_01->GetMinMapX();
            iVar2 = local_30->GetX();
            this_02 = (NXTPixScreen*)field_144->GetScreen();
            local_30[0] = this_02->GetUIHeight();
            iVar3 = local_30->GetX();
        } else {
            shared_ptr<dash3d::Decor>::shared_ptr(asStack_36 + -10, param_1);
            this_00 = (shared_ptr<rs2lib::IfType>*)GetInterfaceLayer(this, in_stack_ffffffffffffffb8);
            ((asStack_36 + -10))->~shared_ptr();
            lVar1 = shared_ptr<rs2lib::IfType>::operator->(this_00);
            iVar2 = *(int*)(lVar1 + 72);
            lVar1 = shared_ptr<rs2lib::IfType>::operator->(this_00);
            iVar3 = *(int*)(lVar1 + 76);
        }
        InterfaceCalculateSize(this, param_1, iVar2, iVar3, false, false);
        InterfaceCalculatePosition(this, param_1, iVar2, iVar3);
    }

    // 0x100103130, 848 bytes, placed by class name and neighbouring functions
    // Client::InterfaceCalculateSize(shared_ptr<rs2lib::IfType> const&, int, int, bool, bool)
    void Client::InterfaceCalculateSize(shared_ptr* param_1, int param_2, int param_3, bool param_4, bool param_5) {
        int iVar1;
        int iVar2;
        char cVar3;
        long lVar4;
        IfType* this_00;
        InputField* this_01;
        undefined3 in_register_00000081;
        undefined3 in_register_00000089;
        int iVar5;
        undefined1 local_c8[132];
        undefined4 local_44;
        int local_40;
        int local_3c;
        undefined4 local_38;

        local_38 = CONCAT31(in_register_00000089, param_5);
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        local_40 = *(int*)(lVar4 + 72);
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        local_3c = *(int*)(lVar4 + 76);
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        iVar5 = *(int*)(lVar4 + 40);
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        local_44 = CONCAT31(in_register_00000081, param_4);
        if (iVar5 == 0) {
            iVar5 = *(int*)(lVar4 + 56);
        LAB_1001031cd:
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(int*)(lVar4 + 72) = iVar5;
        } else {
            iVar5 = *(int*)(lVar4 + 40);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            if (iVar5 == 1) {
                iVar5 = param_2 - *(int*)(lVar4 + 56);
                goto LAB_1001031cd;
            }
            if (*(int*)(lVar4 + 40) == 2) {
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                iVar5 = param_2 * *(int*)(lVar4 + 56) >> 14;
                goto LAB_1001031cd;
            }
        }
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        iVar5 = *(int*)(lVar4 + 44);
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (iVar5 == 0) {
            iVar5 = *(int*)(lVar4 + 60);
        LAB_100103225:
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(int*)(lVar4 + 76) = iVar5;
        } else {
            iVar5 = *(int*)(lVar4 + 44);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar1 = param_3;
            if (iVar5 == 1) {
                iVar5 = param_3 - *(int*)(lVar4 + 60);
                goto LAB_100103225;
            }
            if (*(int*)(lVar4 + 44) == 2) {
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                iVar5 = iVar1 * *(int*)(lVar4 + 60) >> 14;
                goto LAB_100103225;
            }
        }
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar4 + 40) == 4) {
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar5 = *(int*)(lVar4 + 76);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar1 = *(int*)(lVar4 + 80);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar2 = *(int*)(lVar4 + 84);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(int*)(lVar4 + 72) = (iVar5 * iVar1) / iVar2;
        }
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar4 + 44) == 4) {
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar5 = *(int*)(lVar4 + 72);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar1 = *(int*)(lVar4 + 84);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar2 = *(int*)(lVar4 + 80);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(int*)(lVar4 + 76) = (iVar5 * iVar1) / iVar2;
        }
        if ((field_53265 != '\0') &&
            (lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1),
             *(int*)(lVar4 + 12) == 0)) {
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            if ((*(int*)(lVar4 + 76) < 5) &&
                (lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1),
                 *(int*)(lVar4 + 72) < 5)) {
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                *(undefined4*)(lVar4 + 76) = 5;
            } else {
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (*(int*)(lVar4 + 76) < 1) {
                    lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    *(undefined4*)(lVar4 + 76) = 5;
                }
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (0 < *(int*)(lVar4 + 72))
                    goto LAB_100103340;
            }
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar4 + 72) = 5;
        }
    LAB_100103340:
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar4 + 20) == 1337) {
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)&field_52472, param_1);
        }
        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar4 + 12) == 12) {
            this_00 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            this_01 = (InputField*)this_00->GetInputField();
            if (this_01 != (InputField*)0) {
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                iVar5 = *(int*)(lVar4 + 72);
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                this_01->SetSize(iVar5, *(int*)(lVar4 + 76));
            }
        }
        if ((char)local_44 != '\0') {
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            cVar3 = ((lVar4 + 1648))->empty();
            if (cVar3 == '\0') {
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (((local_40 == *(int*)(lVar4 + 72)) &&
                     (lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1),
                      local_3c == *(int*)(lVar4 + 76))) &&
                    ((char)local_38 == '\0')) {
                    return;
                }
                new (local_c8) HookReq();
                shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_c8 + 32), param_1);
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_c8,
                                                            (Array*)(lVar4 + 1648));
                (&field_2506384, (HookReq*)local_c8)->push_back();
                local_c8->~HookReq();
            }
        }
    }

    // 0x100103480, 768 bytes, placed by class name and neighbouring functions
    // Client::InterfaceCalculatePosition(shared_ptr<rs2lib::IfType> const&, int, int)
    void Client::InterfaceCalculatePosition(shared_ptr* param_1, int param_2, int param_3) {
        int iVar1;
        long lVar2;
        int iVar3;

        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        iVar3 = *(int*)(lVar2 + 32);
        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (iVar3 == 0) {
            iVar3 = *(int*)(lVar2 + 48);
        } else {
            iVar3 = *(int*)(lVar2 + 32);
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            if (iVar3 == 1) {
                iVar3 = *(int*)(lVar2 + 72);
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                iVar3 = (param_2 - iVar3) / 2 + *(int*)(lVar2 + 48);
            } else {
                iVar3 = *(int*)(lVar2 + 32);
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (iVar3 == 2) {
                    iVar3 = *(int*)(lVar2 + 72);
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    iVar3 = param_2 - (iVar3 + *(int*)(lVar2 + 48));
                } else {
                    iVar3 = *(int*)(lVar2 + 32);
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    if (iVar3 == 3) {
                        iVar3 = *(int*)(lVar2 + 48) * param_2 >> 14;
                    } else {
                        iVar3 = *(int*)(lVar2 + 32);
                        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        iVar1 = *(int*)(lVar2 + 72);
                        if (iVar3 == 4) {
                            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                            iVar3 = (*(int*)(lVar2 + 48) * param_2 >> 14) + (param_2 - iVar1) / 2;
                        } else {
                            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                            iVar3 = param_2 - (iVar1 + (*(int*)(lVar2 + 48) * param_2 >> 14));
                        }
                    }
                }
            }
        }
        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        *(int*)(lVar2 + 64) = iVar3;
        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        iVar3 = *(int*)(lVar2 + 36);
        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (iVar3 == 0) {
            iVar3 = *(int*)(lVar2 + 52);
        } else {
            iVar3 = *(int*)(lVar2 + 36);
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            if (iVar3 == 1) {
                iVar3 = *(int*)(lVar2 + 76);
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                iVar3 = (param_3 - iVar3) / 2 + *(int*)(lVar2 + 52);
            } else {
                iVar3 = *(int*)(lVar2 + 36);
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (iVar3 == 2) {
                    iVar3 = *(int*)(lVar2 + 76);
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    iVar3 = iVar3 + *(int*)(lVar2 + 52);
                } else {
                    iVar3 = *(int*)(lVar2 + 36);
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    if (iVar3 == 3) {
                        iVar3 = *(int*)(lVar2 + 52) * param_3 >> 14;
                        goto LAB_1001036ab;
                    }
                    iVar1 = *(int*)(lVar2 + 36);
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    iVar3 = *(int*)(lVar2 + 76);
                    if (iVar1 == 4) {
                        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        iVar3 = (*(int*)(lVar2 + 52) * param_3 >> 14) + (param_3 - iVar3) / 2;
                        goto LAB_1001036ab;
                    }
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    iVar3 = iVar3 + (*(int*)(lVar2 + 52) * param_3 >> 14);
                }
                iVar3 = param_3 - iVar3;
            }
        }
    LAB_1001036ab:
        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        *(int*)(lVar2 + 68) = iVar3;
        if ((field_53265 != '\0') &&
            (lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1),
             *(int*)(lVar2 + 12) == 0)) {
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar3 = *(int*)(lVar2 + 64);
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            if (iVar3 < 0) {
                *(undefined4*)(lVar2 + 64) = 0;
            } else {
                iVar3 = *(int*)(lVar2 + 64);
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (param_2 < iVar3 + *(int*)(lVar2 + 72)) {
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    iVar3 = *(int*)(lVar2 + 72);
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    *(int*)(lVar2 + 64) = param_2 - iVar3;
                }
            }
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar3 = *(int*)(lVar2 + 68);
            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            if (iVar3 < 0) {
                *(undefined4*)(lVar2 + 68) = 0;
            } else {
                iVar3 = *(int*)(lVar2 + 68);
                lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (param_3 < iVar3 + *(int*)(lVar2 + 76)) {
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    iVar3 = *(int*)(lVar2 + 76);
                    lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                    *(int*)(lVar2 + 68) = param_3 - iVar3;
                }
            }
        }
    }

    // 0x100103780, 368 bytes, placed by class name and neighbouring functions
    // Client::InterfaceCalculateSizeAndPosSubcomponents(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, shared_ptr<rs2lib::IfType> const&, bool)
    void Client::InterfaceCalculateSizeAndPosSubcomponents(Array* param_1, shared_ptr* param_2, bool param_3) {
        int iVar1;
        int iVar2;
        long lVar3;
        long lVar4;
        Array* pAVar5;
        char cVar6;
        undefined7 in_register_00000009;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_68[16];
        eastl local_58[16];
        undefined4 local_3c;
        Array* local_38;

        local_38 = param_1;
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        iVar1 = *(int*)(lVar3 + 104);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        iVar1 = *(int*)((ulong)(iVar1 != 0) * 32 + 72 + lVar3);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        iVar2 = *(int*)(lVar3 + 108);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        iVar2 = *(int*)((ulong)(iVar2 != 0) * 32 + 76 + lVar3);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        pAVar5 = local_38;
        local_38 = (Array*)CONCAT44(local_38._4_4_, iVar2);
        InterfaceCalculateSizeAndPosArray((Client*)this, pAVar5, *(int*)(lVar3 + 4), iVar1, iVar2, param_3, false);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        cVar6 = ((lVar3 + 2000))->empty();
        if (cVar6 == '\0') {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            InterfaceCalculateSizeAndPosArray((Client*)this, (Array*)(lVar3 + 2000), *(int*)(lVar4 + 4), iVar1,
                                              (int)local_38, param_3, false);
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        if (*(char*)(lVar3 + 24) == '\0') {
            local_3c = (int)CONCAT71(in_register_00000009, param_3);
            shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            eastl::hashtable<
                int,
                eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                       std::default_delete<ChatHistory::HistoryBuffer>>>,
                eastl::allocator,
                eastl::use_first<
                    eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>>,
                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                eastl::prime_rehash_policy, false, true, true>::find((int*)local_58);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            if (eastl::operator!=(local_58, local_68, extraout_RDX)) {
                lVar3 = local_58->HeapBeginPtr();
                InterfaceCalculateSizeAndPosInterface((Client*)this, *(int*)(lVar3 + 4), iVar1, (int)local_38,
                                                      local_3c._0_1_, false);
            }
            shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        }
    }

    // 0x1001038f0, 576 bytes, placed by class name and neighbouring functions
    // Client::InterfaceCalculateSizeAndPosArray(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, int, int, int, bool, bool)
    void Client::InterfaceCalculateSizeAndPosArray(Array* param_1, int param_2, int param_3, int param_4, bool param_5,
                                                   bool param_6) {
        int iVar1;
        int iVar2;
        long lVar4;
        ulong uVar5;
        shared_ptr* this_00;
        Array<shared_ptr<rs2lib::IfType>, eastl::allocator>* this_01;
        shared_ptr* psVar6;
        ulong uVar7;

        lVar4 = param_1->end();
        if (lVar4 != 0) {
            uVar7 = 0;
            do {
                this_00 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)param_1, uVar7);
                if (!operator==(this_00, (_func_decltype_nullptr*)0)) {
                    lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    if (*(int*)(lVar4 + 88) == param_2) {
                        if (param_2 < 0) {
                            param_2 = -1;
                        }
                        InterfaceCalculateSize(this, this_00, param_3, param_4, param_5, param_6);
                        InterfaceCalculatePosition(this, this_00, param_3, param_4);
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        iVar1 = *(int*)(lVar4 + 96);
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        iVar2 = *(int*)(lVar4 + 104);
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        if (iVar2 - *(int*)(lVar4 + 72) < iVar1) {
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            iVar1 = *(int*)(lVar4 + 104);
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            iVar2 = *(int*)(lVar4 + 72);
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            *(int*)(lVar4 + 96) = iVar1 - iVar2;
                        }
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        if (*(int*)(lVar4 + 96) < 0) {
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            *(undefined4*)(lVar4 + 96) = 0;
                        }
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        iVar1 = *(int*)(lVar4 + 100);
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        iVar2 = *(int*)(lVar4 + 108);
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        if (iVar2 - *(int*)(lVar4 + 76) < iVar1) {
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            iVar1 = *(int*)(lVar4 + 108);
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            iVar2 = *(int*)(lVar4 + 76);
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            *(int*)(lVar4 + 100) = iVar1 - iVar2;
                        }
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        if (*(int*)(lVar4 + 100) < 0) {
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            *(undefined4*)(lVar4 + 100) = 0;
                        }
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        if (*(int*)(lVar4 + 12) == 0) {
                            InterfaceCalculateSizeAndPosSubcomponents(this, param_1, this_00, param_5);
                        } else {
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            if (-1 < *(int*)(lVar4 + 680)) {
                                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                                this_01 = (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(m_entityOverlays,
                                                                                                 *(int*)(lVar4 + 680))
                                              ->GetOverlay();
                                if (this_01 != (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)0) {
                                    psVar6 =
                                        (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                                            this_01, 0);
                                    InterfacePositionOverlay(this, psVar6, this_00, param_5);
                                }
                            }
                        }
                    }
                }
                uVar7 = uVar7 + 1;
                uVar5 = param_1->end();
            } while (uVar7 < uVar5);
        }
    }

    // 0x100103b30, 240 bytes, placed by class name and neighbouring functions
    // Client::InterfacePositionOverlay(shared_ptr<rs2lib::IfType> const&, shared_ptr<rs2lib::IfType> const&, bool)
    void Client::InterfacePositionOverlay(shared_ptr* param_1, shared_ptr* param_2, bool param_3) {
        undefined4 uVar1;
        int iVar2;
        long lVar3;

        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        *(undefined4*)(lVar3 + 48) = 0;
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        *(undefined4*)(lVar3 + 52) = 0;
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        uVar1 = *(undefined4*)(lVar3 + 72);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        *(undefined4*)(lVar3 + 56) = uVar1;
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        uVar1 = *(undefined4*)(lVar3 + 76);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        *(undefined4*)(lVar3 + 60) = uVar1;
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        iVar2 = *(int*)(lVar3 + 72);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        InterfaceCalculateSize(this, param_1, iVar2, *(int*)(lVar3 + 76), false, false);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        iVar2 = *(int*)(lVar3 + 72);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        InterfaceCalculatePosition(this, param_1, iVar2, *(int*)(lVar3 + 76));
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        InterfaceCalculateSizeAndPosSubcomponents(this, (Array*)(lVar3 + 2000), param_1, param_3);
    }

    // 0x100103c20, 496 bytes, placed by class name and neighbouring functions
    // Client::DoScrollbar(shared_ptr<rs2lib::IfType> const&, int, int, int, int, int, int)
    void Client::DoScrollbar(shared_ptr* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                             int param_7) {
        int iVar1;
        uint uVar2;
        long lVar3;
        uint uVar4;

        field_1115860 = (uint)field_1115856 << 5;
        field_1115856 = 0;
        if (field_8504 == 7) {
            iVar1 = param_2 + 16;
            if (((iVar1 <= param_6 || param_6 < param_2) || (param_7 < param_3)) || (param_3 + 16 <= param_7)) {
                if (((iVar1 <= param_6 || param_6 < param_2) || (param_7 < param_4 + param_3 + -16)) ||
                    (param_4 + param_3 <= param_7)) {
                    if ((((int)(param_2 - field_1115860) <= param_6) && (param_6 < (int)(field_1115860 + iVar1))) &&
                        ((param_3 + 16 <= param_7 && (param_7 < param_4 + param_3 + -16)))) {
                        uVar2 = ((param_4 + -32) * param_4) / param_5;
                        uVar4 = 8;
                        if (8 < (int)uVar2) {
                            uVar4 = uVar2;
                        }
                        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                        *(int*)(lVar3 + 100) =
                            (int)((param_5 - param_4) * ((param_7 - ((uVar4 >> 1) + param_3)) + -16)) /
                            (int)((param_4 + -32) - uVar4);
                        ComponentUpdated(this, param_1);
                        field_1115856 = 1;
                    }
                    goto LAB_100103d86;
                }
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                *(int*)(lVar3 + 100) = *(int*)(lVar3 + 100) + 4;
            } else {
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                *(int*)(lVar3 + 100) = *(int*)(lVar3 + 100) + -4;
            }
            ComponentUpdated(this, param_1);
        }
    LAB_100103d86:
        if (field_53140 != 0) {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            if ((((param_2 - *(int*)(lVar3 + 72) <= param_6) && (param_3 <= param_7)) && (param_6 < param_2 + 16)) &&
                (param_7 <= param_4 + param_3)) {
                iVar1 = field_53140;
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                *(int*)(lVar3 + 100) = *(int*)(lVar3 + 100) + iVar1 * 45;
                ComponentUpdated(this, param_1);
            }
        }
    }

    // 0x100103e10, 128 bytes, placed by class name and neighbouring functions
    // Client::Inf(int)
    Client* Client::Inf(int param_1) {
        uint in_EDX;
        allocator local_20[8];

        if ((int)in_EDX < 999999999) {
            new (this) eastl::string();
            eastl::string::sprintf((char*)this, "%i", (ulong)in_EDX);
        } else {
            eastl::allocator::allocator(local_20, "EASTL basic_string");
            new (this) eastl::string("*", local_20);
        }
        return this;
    }

    // 0x100103e90, 1824 bytes, placed by class name and neighbouring functions
    // Client::GetIfVar(shared_ptr<rs2lib::IfType> const&, int)
    /* WARNING: Type propagation algorithm not settling */
    /* Client::GetIfVar(shared_ptr<rs2lib::IfType> const&, int) */

    int Client::GetIfVar(shared_ptr* param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        Array<int, eastl::allocator>* pAVar2;
        char cVar3;
        int iVar4;
        uint uVar5;
        long lVar6;
        int* piVar7;
        shared_ptr<rs2lib::IfType>* psVar8;
        ulong uVar9;
        byte* pbVar10;
        uint* puVar11;
        uint uVar12;
        ulong uVar13;
        array<int, 25ul>* this_02;
        uint uVar14;
        shared_ptr<RSevenDebugPresetProvider> local_80[16];
        shared_ptr<ClientPlayer>* local_70;
        ulong local_68;
        array<int, 25ul>* local_60;
        int local_58;
        int local_54;
        Client* local_50;
        Array<int, eastl::allocator>* local_48;
        ulong local_40;
        int local_34;

        local_50 = this;
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        cVar3 = ((lVar6 + 1792))->empty();
        local_58 = -2;
        if (cVar3 == '\0') {
            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar4 = ((lVar6 + 1792))->end();
            if (param_2 < iVar4) {
                lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                local_48 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)(lVar6 + 1792), (long)param_2);
                this_00 = &local_50->field_52040;
                this_02 = (array<int, 25ul>*)&local_50->field_52140;
                this_01 = &local_50->field_52240;
                local_70 = (shared_ptr<ClientPlayer>*)local_50->field_52016;
                local_68 = 0;
                local_40 = 0;
                local_54 = 0;
                local_60 = this_02;
                do {
                    iVar1 = (int)local_40;
                    local_40 = (ulong)(iVar1 + 1);
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar1);
                    iVar4 = *piVar7;
                    if (iVar4 == 0) {
                        local_58 = local_54;
                    } else {
                        uVar14 = 0;
                        local_34 = iVar4;
                        if (iVar4 == 1) {
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)(int)local_40);
                            puVar11 =
                                (uint*)std::array<int, 25ul>::operator[]((array<int, 25ul>*)this_00, (long)*piVar7);
                            uVar14 = *puVar11;
                            local_40 = (ulong)(iVar1 + 2);
                        }
                        if (local_34 == 2) {
                            iVar4 = (int)local_40;
                            local_40 = (ulong)(iVar4 + 1);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar4);
                            puVar11 = (uint*)std::array<int, 25ul>::operator[](this_02, (long)*piVar7);
                            uVar14 = *puVar11;
                        }
                        pAVar2 = local_48;
                        if (local_34 == 3) {
                            iVar4 = (int)local_40;
                            local_40 = (ulong)(iVar4 + 1);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar4);
                            puVar11 =
                                (uint*)std::array<int, 25ul>::operator[]((array<int, 25ul>*)this_01, (long)*piVar7);
                            uVar14 = *puVar11;
                            pAVar2 = local_48;
                        }
                        local_48 = pAVar2;
                        if (local_34 == 4) {
                            iVar1 = (int)local_40;
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](pAVar2, (long)iVar1);
                            iVar4 = *piVar7;
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](pAVar2, (long)(iVar1 + 1));
                            psVar8 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar4 * 65536 + *piVar7);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](pAVar2, (long)(iVar1 + 2));
                            iVar4 = *piVar7;
                            local_80->List(iVar4);
                            if (iVar4 == -1) {
                                this_02 = local_60;
                            } else {
                                lVar6 = shared_ptr<configdecoder::ObjType>::operator->(
                                    (shared_ptr<configdecoder::ObjType>*)local_80);
                                this_02 = local_60;
                                if ((*(char*)(lVar6 + 220) != '\0') || (local_50->field_8424 != false)) {
                                    uVar13 = 0;
                                    while (true) {
                                        lVar6 = shared_ptr<rs2lib::IfType>::operator->(psVar8);
                                        uVar9 = ((lVar6 + 1936))->end();
                                        if (uVar9 <= uVar13)
                                            break;
                                        lVar6 = shared_ptr<rs2lib::IfType>::operator->(psVar8);
                                        piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)(lVar6 + 1936), uVar13);
                                        if (*piVar7 == iVar4 + 1) {
                                            lVar6 = shared_ptr<rs2lib::IfType>::operator->(psVar8);
                                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                                                (Array<int, eastl::allocator>*)(lVar6 + 1960), uVar13);
                                            uVar14 = uVar14 + *piVar7;
                                        }
                                        uVar13 = uVar13 + 1;
                                    }
                                }
                            }
                            local_40 = (ulong)((int)local_40 + 3);
                            local_80->~shared_ptr();
                        }
                        if (local_34 == 5) {
                            iVar4 = (int)local_40;
                            local_40 = (ulong)(iVar4 + 1);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar4);
                            puVar11 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)*piVar7);
                            uVar14 = *puVar11;
                        }
                        if (local_34 == 6) {
                            iVar4 = (int)local_40;
                            local_40 = (ulong)(iVar4 + 1);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar4);
                            piVar7 = (int*)std::array<int, 25ul>::operator[](this_02, (long)*piVar7);
                            puVar11 = (uint*)std::array<int, 99ul>::operator[]((long)*piVar7 - 1);
                            uVar14 = *puVar11;
                        }
                        if (local_34 == 7) {
                            iVar4 = (int)local_40;
                            local_40 = (ulong)(iVar4 + 1);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar4);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)*piVar7);
                            uVar14 = (*piVar7 * 100) / 46875;
                        }
                        if (local_34 == 8) {
                            lVar6 = shared_ptr<ClientPlayer>::operator->(local_70);
                            uVar14 = *(uint*)(lVar6 + 1128);
                        }
                        if (local_34 == 9) {
                            uVar13 = 0;
                            do {
                                if (1 < (int)uVar13 - 23U) {
                                    piVar7 = (int*)std::array<int, 25ul>::operator[](this_02, uVar13);
                                    uVar14 = uVar14 + *piVar7;
                                }
                                uVar13 = uVar13 + 1;
                            } while (uVar13 != 25);
                        }
                        pAVar2 = local_48;
                        if (local_34 == 10) {
                            iVar1 = (int)local_40;
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar1);
                            iVar4 = *piVar7;
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](pAVar2, (long)(iVar1 + 1));
                            psVar8 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(iVar4 * 65536 + *piVar7);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](pAVar2, (long)(iVar1 + 2));
                            iVar4 = *piVar7;
                            local_80->List(iVar4);
                            if (iVar4 == -1) {
                                this_02 = local_60;
                            } else {
                                lVar6 = shared_ptr<configdecoder::ObjType>::operator->(
                                    (shared_ptr<configdecoder::ObjType>*)local_80);
                                this_02 = local_60;
                                if ((*(char*)(lVar6 + 220) != '\0') || (local_50->field_8424 != false)) {
                                    uVar13 = 0;
                                    do {
                                        lVar6 = shared_ptr<rs2lib::IfType>::operator->(psVar8);
                                        uVar9 = ((lVar6 + 1936))->end();
                                        if (uVar9 <= uVar13)
                                            goto LAB_100104389;
                                        lVar6 = shared_ptr<rs2lib::IfType>::operator->(psVar8);
                                        piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)(lVar6 + 1936), uVar13);
                                        uVar13 = uVar13 + 1;
                                    } while (*piVar7 != iVar4 + 1);
                                    uVar14 = 999999999;
                                }
                            }
                        LAB_100104389:
                            local_40 = (ulong)((int)local_40 + 3);
                            local_80->~shared_ptr();
                        }
                        pAVar2 = local_48;
                        if (local_34 == 11) {
                            uVar14 = *(uint*)&local_50->field_53272;
                        LAB_1001043b2:
                            if (local_34 == 13) {
                                iVar4 = (int)local_40;
                                piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar4);
                                puVar11 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)*piVar7);
                                uVar14 = *puVar11;
                                pbVar10 = (byte*)Array<int, eastl::allocator>::operator[](pAVar2, (long)(iVar4 + 1));
                                uVar14 = uVar14 >> (*pbVar10 & 31) & 1;
                                local_40 = (ulong)(iVar4 + 2);
                            }
                        } else {
                            if (local_34 != 12)
                                goto LAB_1001043b2;
                            uVar14 = local_50->field_53276;
                        }
                        if (local_34 == 14) {
                            iVar4 = (int)local_40;
                            local_40 = (ulong)(iVar4 + 1);
                            piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar4);
                            uVar14 = ClientVarCache::GetVarbit(*piVar7);
                        }
                        uVar13 = (ulong)(local_34 == 15);
                        if (local_34 == 16) {
                            uVar13 = 2;
                        }
                        if (local_34 == 17) {
                            uVar13 = 3;
                        }
                        if (local_34 == 18) {
                            lVar6 = shared_ptr<ClientPlayer>::operator->(local_70);
                            uVar14 = (*(int*)(lVar6 + 24) >> 7) + local_50->field_53220;
                            if (local_34 != 19)
                                goto LAB_100104418;
                        LAB_1001044e8:
                            lVar6 = shared_ptr<ClientPlayer>::operator->(local_70);
                            uVar14 = (*(int*)(lVar6 + 28) >> 7) + local_50->field_53224;
                            if (local_34 != 20)
                                goto LAB_100104421;
                        LAB_100104510:
                            iVar4 = (int)local_40;
                            local_40 = (ulong)(iVar4 + 1);
                            puVar11 = (uint*)Array<int, eastl::allocator>::operator[](local_48, (long)iVar4);
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

    // 0x100104660, 128 bytes, placed by class name and neighbouring functions
    // Client::KeyPressed(int)
    ulong Client::KeyPressed(int param_1) {
        ulong uVar1;
        int* piVar2;
        ulong uVar3;
        undefined8 unaff_R12;
        ulong uVar4;

        uVar1 = field_8608;
        uVar4 = CONCAT71((int7)((ulong)unaff_R12 >> 8), uVar1 != 0);
        if (uVar1 != 0) {
            piVar2 = (int*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)&field_8616, 0);
            if (*piVar2 != param_1) {
                uVar3 = 1;
                do {
                    uVar4 = CONCAT71((int7)(uVar4 >> 8), uVar3 < uVar1);
                    if (uVar1 == uVar3)
                        break;
                    piVar2 = (int*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)&field_8616, uVar3);
                    uVar3 = uVar3 + 1;
                } while (*piVar2 != param_1);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1001046e0, 1088 bytes, placed by __FILE__ string
    // Client::RunHookLayer(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, rs2lib::IfType::HookTypes)
    void Client::RunHookLayer(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_1, int param_3) {
        int iVar1;
        shared_ptr sVar2;
        bool bVar3;
        char cVar4;
        int iVar5;
        long lVar6;
        ulong uVar7;
        shared_ptr* psVar8;
        long lVar9;
        undefined8 uVar10;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar11;
        undefined4 in_stack_fffffffffffffef8;
        undefined4 in_stack_fffffffffffffefc;
        undefined4 in_stack_ffffffffffffff00;
        undefined4 in_stack_ffffffffffffff04;
        hashtable_iterator_base local_f8[16];
        shared_ptr local_e8;
        undefined1 local_d8[128];
        shared_ptr<dash3d::Decor> local_58[16];
        undefined1* local_48;
        Client* local_40;

        local_40 = this;
        lVar6 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_1);
        if (lVar6 != 0) {
            local_48 = &local_40->field_53160;
            uVar11 = 0;
            do {
                psVar8 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)param_1, uVar11);
                new (&local_e8) shared_ptr<dash3d::Decor>(psVar8);
                bVar3 = operator==(&local_e8, (_func_decltype_nullptr*)0);
                if (!bVar3) {
                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                    if (*(int*)(lVar6 + 12) == 0) {
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                        cVar4 = ((lVar6 + 2000))->empty();
                        if (cVar4 == '\0') {
                            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                            RunHookLayer(local_40, lVar6 + 2000, param_3);
                        }
                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                        eastl::hashtable<
                            int,
                            eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                   std::default_delete<ChatHistory::HistoryBuffer>>>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<
                                int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::find((int*)local_d8);
                        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar3 = eastl::operator!=((eastl*)local_d8, local_f8, extraout_RDX);
                        if (bVar3) {
                            lVar6 = local_d8->HeapBeginPtr();
                            RunHookImmediate(local_40, *(undefined4*)(lVar6 + 4), param_3);
                        }
                    }
                    if (param_3 == 26) {
                    LAB_100104898:
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                        cVar4 = ((lVar6 + 1672))->empty();
                        if (cVar4 == '\0') {
                            new (local_d8) HookReq();
                            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_d8 + 32),
                                                                  &local_e8);
                            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                            Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_d8,
                                                                        (Array*)(lVar6 + 1672));
                            ScriptRunner::ExecuteScript((HookReq*)local_d8, 500000);
                        LAB_100104729:
                            local_d8->~HookReq();
                        }
                    } else if (param_3 == 24) {
                    LAB_100104874:
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                        cVar4 = ((lVar6 + 1624))->empty();
                        if (cVar4 == '\0') {
                            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                            if (*(int*)(lVar6 + 8) < 0) {
                            LAB_100104a73:
                                new (local_d8) HookReq();
                                shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_d8 + 32),
                                                                      &local_e8);
                                lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                                Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_d8,
                                                                            (Array*)(lVar6 + 1624));
                                ScriptRunner::ExecuteScript((HookReq*)local_d8, 500000);
                                goto LAB_100104729;
                            }
                            shared_ptr<dash3d::Decor>::shared_ptr(local_58, &local_e8);
                            sVar2._4_4_ = in_stack_fffffffffffffefc;
                            sVar2._0_4_ = in_stack_fffffffffffffef8;
                            sVar2.field_8._0_4_ = in_stack_ffffffffffffff00;
                            sVar2.field_8._4_4_ = in_stack_ffffffffffffff04;
                            psVar8 = (shared_ptr*)GetParentInterface(local_40, sVar2);
                            local_58->~shared_ptr();
                            bVar3 = operator==(psVar8, (_func_decltype_nullptr*)0);
                            if (!bVar3) {
                                lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar8);
                                cVar4 = ((lVar6 + 2000))->empty();
                                if (cVar4 == '\0') {
                                    lVar6 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                                    iVar1 = *(int*)(lVar6 + 8);
                                    lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar8);
                                    iVar5 = ((lVar6 + 2000))->end();
                                    if (iVar1 < iVar5) {
                                        lVar6 =
                                            shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar8);
                                        lVar9 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)&local_e8);
                                        psVar8 = (shared_ptr*)
                                            Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                                                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar6 + 2000),
                                                (long)*(int*)(lVar9 + 8));
                                        bVar3 = operator!=(psVar8, &local_e8);
                                        if (!bVar3)
                                            goto LAB_100104a73;
                                    }
                                }
                            }
                            if (local_40->field_54760 != '\0') {
                                uVar10 = logger::default_logger();
                                lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                                in_stack_fffffffffffffef8 = *(undefined4*)(lVar6 + 4);
                                lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                                in_stack_ffffffffffffff00 = *(undefined4*)(lVar6 + 8);
                                logger::Logger::Log(
                                    uVar10, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/client_UI.cpp",
                                    3496, "Skipping script execution for deleted component - com:%i subid:%i");
                            }
                        } else if (param_3 == 26)
                            goto LAB_100104898;
                    } else if (param_3 == 23) {
                        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                        cVar4 = ((lVar6 + 1600))->empty();
                        if (cVar4 == '\0') {
                            new (local_d8) HookReq();
                            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_d8 + 32),
                                                                  &local_e8);
                            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_e8);
                            Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_d8,
                                                                        (Array*)(lVar6 + 1600));
                            ScriptRunner::ExecuteScript((HookReq*)local_d8, 500000);
                            goto LAB_100104729;
                        }
                        if (param_3 == 26)
                            goto LAB_100104898;
                        if (param_3 == 24)
                            goto LAB_100104874;
                    }
                }
                local_e8.~shared_ptr();
                uVar11 = uVar11 + 1;
                uVar7 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_1);
            } while (uVar11 < uVar7);
        }
    }

    // 0x100104b20, 16 bytes, placed by class name and neighbouring functions
    // Client::UsingOneButtonMouse()
    undefined1 Client::UsingOneButtonMouse() {
        return m_usingOneButtonMouse;
    }

    // 0x100104b30, 160 bytes, placed by class name and neighbouring functions
    // Client::TryStartDragContents(shared_ptr<rs2lib::IfType> const&)
    void Client::TryStartDragContents(shared_ptr* param_1) {
        long lVar3;
        undefined4 local_30[2];
        undefined4 local_28[2];

        if (!operator!=((shared_ptr*)field_2505208, (_func_decltype_nullptr*)0)) {
            if (field_52344->IsOpen() == '\0') {
                field_8604 = 1;
                shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)field_2505208, param_1);
                field_2505224 = 1;
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_30, *(int*)(lVar3 + 96));
                field_2505228 = local_30[0];
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                    (XPlotBlender<graphics::XPlot_NormalAlpha>*)local_28, *(int*)(lVar3 + 100));
                field_2505232 = local_28[0];
            }
        }
    }

    // 0x100104bd0, 288 bytes, placed by class name and neighbouring functions
    // Client::SetIf3ComponentScrollPos(shared_ptr<rs2lib::IfType> const&, int, int)
    void Client::SetIf3ComponentScrollPos(shared_ptr* param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        long lVar3;

        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        *(int*)(lVar3 + 96) = param_2;
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        iVar1 = *(int*)(lVar3 + 96);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        iVar2 = *(int*)(lVar3 + 104);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (iVar2 - *(int*)(lVar3 + 72) < iVar1) {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar1 = *(int*)(lVar3 + 104);
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar2 = *(int*)(lVar3 + 72);
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(int*)(lVar3 + 96) = iVar1 - iVar2;
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar3 + 96) < 0) {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar3 + 96) = 0;
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        *(int*)(lVar3 + 100) = param_3;
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        iVar1 = *(int*)(lVar3 + 100);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        iVar2 = *(int*)(lVar3 + 108);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (iVar2 - *(int*)(lVar3 + 76) < iVar1) {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar1 = *(int*)(lVar3 + 108);
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            iVar2 = *(int*)(lVar3 + 76);
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(int*)(lVar3 + 100) = iVar1 - iVar2;
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar3 + 100) < 0) {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            *(undefined4*)(lVar3 + 100) = 0;
        }
        ComponentUpdated(this, param_1);
    }

    // 0x100104d20, 448 bytes, placed by __FILE__ string
    // Client::DragTryPickup(shared_ptr<rs2lib::IfType> const&, CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void Client::DragTryPickup(shared_ptr* param_1, uint param_3, undefined4 param_4) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        bool bVar5;
        undefined4 uVar7;
        undefined4 uVar8;
        int iVar9;
        shared_ptr* psVar10;
        undefined8 uVar11;
        long lVar12;
        undefined8 uVar13;
        CoordMapSquare local_40;

        local_40.m_x = param_3;
        local_40._8_4_ = param_4;
        bVar5 = operator!=((shared_ptr*)field_2505104, (_func_decltype_nullptr*)0);
        if (!bVar5) {
            if (field_52344->IsOpen() == '\0') {
                bVar5 = operator==(param_1, (_func_decltype_nullptr*)0);
                if (!bVar5) {
                    psVar10 = (shared_ptr*)GetDragLayer(this, param_1);
                    bVar5 = operator==(psVar10, (_func_decltype_nullptr*)0);
                    if (!bVar5) {
                        if (field_54760 != '\0') {
                            uVar11 = logger::default_logger();
                            lVar12 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                            uVar13 = ((lVar12 + 760))->end();
                            lVar12 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                            uVar1 = *(undefined4*)(lVar12 + 72);
                            lVar12 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                            uVar2 = *(undefined4*)(lVar12 + 76);
                            lVar12 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                            uVar3 = *(undefined4*)(lVar12 + 64);
                            lVar12 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                            uVar4 = *(undefined4*)(lVar12 + 68);
                            uVar7 = local_40.GetX();
                            uVar8 = local_40.field_8.GetX();
                            logger::Logger::Log(uVar11, 0, 5,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/client_UI.cpp",
                                                1815, "setting dragcom - %p %i %i x:%i y:%i pickupx:%i pickupy:%i",
                                                uVar13, uVar1, uVar2, uVar3, uVar4, uVar7, uVar8);
                        }
                        field_8605 = 1;
                        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)field_2505104, param_1);
                        psVar10 = (shared_ptr*)GetDragLayer(this, param_1);
                        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)&field_2505120, psVar10);
                        field_2505136 = local_40.m_x;
                        field_2505140 = local_40._8_4_;
                        field_2505188 = 0;
                        field_2505184 = 0;
                        iVar9 = field_52344->GetDefaultClickIndex();
                        if (iVar9 != -1) {
                            StashEntry(this, iVar9);
                        }
                    }
                }
            }
        }
    }

    // 0x100104ee0, 64 bytes, placed by class name and neighbouring functions
    // Client::GetDragLayer(shared_ptr<rs2lib::IfType> const&)
    shared_ptr* Client::GetDragLayer(shared_ptr* param_1) {
        shared_ptr* psVar2;
        long lVar3;

        psVar2 = (shared_ptr*)ServerDraggable(this, param_1);
        if (operator==(psVar2, (_func_decltype_nullptr*)0)) {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            psVar2 = (shared_ptr*)(lVar3 + 760);
        }
        return psVar2;
    }

    // 0x100104f20, 32 bytes, placed by class name and neighbouring functions
    // Client::StashEntry(int)
    void Client::StashEntry(int param_1) {
        (field_52344, param_1)->StashEntry();
    }

    // 0x100104f40, 16 bytes, placed by class name and neighbouring functions
    // Client::CancelDrag()
    void Client::CancelDrag() {
        field_2505184 = 0;
    }

    // 0x100104f50, 368 bytes, placed by class name and neighbouring functions
    // Client::LegacyUpdated()
    void Client::LegacyUpdated() {
        uint uVar1;
        long lVar2;
        byte* pbVar3;
        ulong uVar4;
        int* piVar5;
        bool bVar6;
        Array<shared_ptr<rs2lib::IfType>, eastl::allocator>* this_00;
        shared_ptr* psVar8;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        byte bVar9;
        int iVar10;
        hashtable_iterator_base* this_01;
        ulong uVar11;
        eastl local_60[16];
        hashtable_iterator_base local_50[16];
        undefined1* local_40;

        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        this_01 = local_50;
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar6 = eastl::operator!=(local_60, this_01, extraout_RDX);
        if (bVar6) {
            local_40 = &field_53160;
            do {
                iVar10 = (int)this_01;
                lVar2 = local_60->HeapBeginPtr();
                uVar1 = *(uint*)(lVar2 + 4);
                if (((ulong)uVar1)->OpenInterface(iVar10) != '\0') {
                    this_00 = (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)
                        Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>,
                                   eastl::allocator>*)&rs2lib::IfType::m_list,
                            (long)(int)uVar1);
                    lVar2 = this_00->end();
                    bVar9 = 1;
                    if (lVar2 != 0) {
                        uVar11 = 0;
                        do {
                            psVar8 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                                this_00, uVar11);
                            bVar6 = operator!=(psVar8, (_func_decltype_nullptr*)0);
                            if (bVar6) {
                                pbVar3 =
                                    (byte*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar8);
                                bVar9 = *pbVar3;
                                break;
                            }
                            uVar11 = uVar11 + 1;
                            uVar4 = this_00->end();
                        } while (uVar11 < uVar4);
                    }
                    if ((bVar9 & 1) == 0) {
                        piVar5 = (int*)local_60->HeapBeginPtr();
                        psVar8 = (shared_ptr*)rs2lib::IfType::Get(*piVar5);
                        bVar6 = operator!=(psVar8, (_func_decltype_nullptr*)0);
                        if (bVar6) {
                            ComponentUpdated((Client*)this, psVar8);
                        }
                    }
                }
                this_01 = local_50;
                eastl::hashtable_iterator<eastl::pair<int const, SubInterface>, false, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, SubInterface>, false, false>*)this_01, (int)local_60);
                eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar6 = eastl::operator!=(local_60, this_01, extraout_RDX_00);
            } while (bVar6);
        }
    }

    // 0x1001050c0, 176 bytes, placed by class name and neighbouring functions
    // Client::ServerDraggable(shared_ptr<rs2lib::IfType> const&)
    shared_ptr* Client::ServerDraggable(shared_ptr* param_1) {
        bool bVar1;
        int iVar3;
        long lVar4;
        shared_ptr* psVar5;
        shared_ptr* unaff_RBX;
        int iVar6;

        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        psVar5 = (shared_ptr*)&rs2lib::NULL_IFTYPE;
        if (*(char*)(lVar4 + 24) == '\0') {
            iVar3 = GetActive(this, param_1);
            iVar3 = rs2lib::ServerActive::ServerDraggable(iVar3);
            if (iVar3 != 0) {
                lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                iVar6 = *(int*)(lVar4 + 88);
                do {
                    iVar3 = iVar3 + -1;
                    psVar5 = (shared_ptr*)rs2lib::IfType::Get(iVar6);
                    bVar1 = false;
                    if (iVar3 != 0) {
                        if (!operator==(psVar5, (_func_decltype_nullptr*)0)) {
                            lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar5);
                            iVar6 = *(int*)(lVar4 + 88);
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

    // 0x100105170, 32 bytes, placed by class name and neighbouring functions
    // Client::DraggingInterface()
    void Client::DraggingInterface() {
        operator!=((shared_ptr*)field_2505104, (_func_decltype_nullptr*)0);
    }

    // 0x100105190, 224 bytes, placed by __FILE__ string
    // Client::IfAnimReset(int)
    void Client::IfAnimReset(int param_1) {
        undefined8 in_RAX;
        undefined8 uVar3;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar4;
        ulong uVar5;
        shared_ptr* this_01;
        ulong uVar6;
        undefined4 uVar7;

        uVar7 = (undefined4)((ulong)in_RAX >> 32);
        if (((ulong)(uint)param_1)->OpenInterface(param_1) != '\0') {
            if (field_54760 != '\0') {
                uVar3 = logger::default_logger();
                logger::Logger::Log(
                    uVar3, 0, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                    1919, "Resetting anims for ifid:%d", CONCAT44(uVar7, param_1));
            }
            this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>,
                           eastl::allocator>*)&rs2lib::IfType::m_list,
                    (long)param_1);
            lVar4 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            if (lVar4 != 0) {
                uVar6 = 0;
                do {
                    this_01 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                        (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)this_00, uVar6);
                    if (!operator==(this_01, (_func_decltype_nullptr*)0)) {
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
                        *(undefined4*)(lVar4 + 1992) = 0;
                        lVar4 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
                        *(undefined4*)(lVar4 + 1996) = 0;
                    }
                    uVar6 = uVar6 + 1;
                    uVar5 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                } while (uVar6 < uVar5);
            }
        }
    }

    // 0x100105270, 1248 bytes, placed by class name and neighbouring functions
    // Client::AnimateLayer(Array<shared_ptr<rs2lib::IfType>, eastl::allocator>&, int)
    void Client::AnimateLayer(Array* param_1, int param_2) {
        ushort uVar1;
        ushort uVar2;
        bool bVar3;
        char cVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        long lVar8;
        ulong uVar9;
        shared_ptr* this_00;
        char* pcVar10;
        long lVar11;
        SeqType* pSVar12;
        int* piVar13;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar14;
        hashtable_iterator_base local_70[16];
        undefined1* local_60;
        shared_ptr* local_58;
        eastl local_48[16];
        Client* local_38;

        local_38 = this;
        lVar8 = param_1->end();
        if (lVar8 != 0) {
            local_58 = (shared_ptr*)local_38->field_2505056;
            local_60 = &local_38->field_53160;
            uVar14 = 0;
            do {
                this_00 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)param_1, uVar14);
                bVar3 = operator==(this_00, (_func_decltype_nullptr*)0);
                if (((!bVar3) && (lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00),
                                  *(int*)(lVar8 + 88) == param_2)) &&
                    ((pcVar10 = (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00),
                      *pcVar10 == '\0' || (cVar4 = Hide(local_38, this_00), cVar4 == '\0')))) {
                    lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    if (*(int*)(lVar8 + 12) == 0) {
                        pcVar10 = (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        if (((*pcVar10 == '\0') && (cVar4 = Hide(local_38, this_00), cVar4 != '\0')) &&
                            (bVar3 = operator!=(local_58, this_00), bVar3))
                            goto LAB_1001052c0;
                        lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        AnimateLayer(local_38, param_1, *(int*)(lVar8 + 4));
                        lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        cVar4 = ((lVar8 + 2000))->empty();
                        if (cVar4 == '\0') {
                            lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            lVar11 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            AnimateLayer(local_38, (Array*)(lVar8 + 2000), *(int*)(lVar11 + 4));
                        }
                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        eastl::hashtable<
                            int,
                            eastl::pair<int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                                   std::default_delete<ChatHistory::HistoryBuffer>>>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<
                                int const, std::unique_ptr<ChatHistory::HistoryBuffer,
                                                           std::default_delete<ChatHistory::HistoryBuffer>>>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::find((int*)local_48);
                        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar3 = eastl::operator!=(local_48, local_70, extraout_RDX);
                        if (bVar3) {
                            lVar8 = local_48->HeapBeginPtr();
                            AnimateInterface(local_38, *(int*)(lVar8 + 4));
                        }
                    }
                    lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                    if (*(int*)(lVar8 + 12) == 6) {
                        lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        if ((*(int*)(lVar8 + 244) != -1) ||
                            (lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00),
                             *(int*)(lVar8 + 248) != -1)) {
                            uVar5 = GetIfActive(local_38, this_00);
                            lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            iVar6 = *(int*)(lVar8 + 244 + ((ulong)uVar5 & 255) * 4);
                            if (iVar6 != -1) {
                                local_48->List(iVar6);
                                pSVar12 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                                    (shared_ptr<configdecoder::SeqType>*)local_48);
                                cVar4 = pSVar12->IsKeyFramed();
                                iVar6 = local_38->field_1115692;
                                if (cVar4 == '\0') {
                                    lVar8 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                                    *(int*)(lVar8 + 1996) = *(int*)(lVar8 + 1996) + iVar6;
                                    while (true) {
                                        lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)this_00);
                                        iVar6 = *(int*)(lVar8 + 1996);
                                        lVar8 = shared_ptr<configdecoder::SeqType>::operator->(
                                            (shared_ptr<configdecoder::SeqType>*)local_48);
                                        lVar11 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)this_00);
                                        piVar13 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)(lVar8 + 120), (long)*(int*)(lVar11 + 1992));
                                        if (iVar6 <= *piVar13)
                                            break;
                                        lVar8 = shared_ptr<configdecoder::SeqType>::operator->(
                                            (shared_ptr<configdecoder::SeqType>*)local_48);
                                        lVar11 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)this_00);
                                        piVar13 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)(lVar8 + 120), (long)*(int*)(lVar11 + 1992));
                                        iVar6 = *piVar13;
                                        lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)this_00);
                                        *(int*)(lVar8 + 1996) = *(int*)(lVar8 + 1996) - iVar6;
                                        lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)this_00);
                                        *(int*)(lVar8 + 1992) = *(int*)(lVar8 + 1992) + 1;
                                        lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)this_00);
                                        iVar6 = *(int*)(lVar8 + 1992);
                                        lVar8 = shared_ptr<configdecoder::SeqType>::operator->(
                                            (shared_ptr<configdecoder::SeqType>*)local_48);
                                        iVar7 = ((lVar8 + 72))->end();
                                        if (iVar7 <= iVar6) {
                                            lVar8 = shared_ptr<configdecoder::SeqType>::operator->(
                                                (shared_ptr<configdecoder::SeqType>*)local_48);
                                            iVar6 = *(int*)(lVar8 + 168);
                                            lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)this_00);
                                            *(int*)(lVar8 + 1992) = *(int*)(lVar8 + 1992) - iVar6;
                                            lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)this_00);
                                            if (-1 < *(int*)(lVar8 + 1992)) {
                                                lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                                    (shared_ptr<rs2lib::IfType>*)this_00);
                                                iVar6 = *(int*)(lVar8 + 1992);
                                                lVar8 = shared_ptr<configdecoder::SeqType>::operator->(
                                                    (shared_ptr<configdecoder::SeqType>*)local_48);
                                                iVar7 = ((lVar8 + 72))->end();
                                                if (iVar6 < iVar7)
                                                    goto LAB_100105602;
                                            }
                                            lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)this_00);
                                            *(undefined4*)(lVar8 + 1992) = 0;
                                        }
                                    LAB_100105602:
                                        ComponentUpdated(local_38, this_00);
                                    }
                                } else {
                                    lVar8 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                                    *(int*)(lVar8 + 1992) = *(int*)(lVar8 + 1992) + iVar6;
                                    pSVar12 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                                        (shared_ptr<configdecoder::SeqType>*)local_48);
                                    iVar6 = pSVar12->GetDuration();
                                    lVar8 =
                                        shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                                    if (iVar6 <= *(int*)(lVar8 + 1992)) {
                                        lVar8 = shared_ptr<configdecoder::SeqType>::operator->(
                                            (shared_ptr<configdecoder::SeqType>*)local_48);
                                        iVar7 = *(int*)(lVar8 + 168);
                                        lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)this_00);
                                        *(int*)(lVar8 + 1992) = *(int*)(lVar8 + 1992) - iVar7;
                                        lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                            (shared_ptr<rs2lib::IfType>*)this_00);
                                        if ((*(int*)(lVar8 + 1992) < 0) ||
                                            (lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                                 (shared_ptr<rs2lib::IfType>*)this_00),
                                             iVar6 <= *(int*)(lVar8 + 1992))) {
                                            lVar8 = shared_ptr<rs2lib::IfType>::operator->(
                                                (shared_ptr<rs2lib::IfType>*)this_00);
                                            *(undefined4*)(lVar8 + 1992) = 0;
                                        }
                                    }
                                    ComponentUpdated(local_38, this_00);
                                }
                                local_48->~shared_ptr();
                            }
                        }
                        lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                        if ((*(int*)(lVar8 + 284) != 0) && (pcVar10 = (char*)shared_ptr<rs2lib::IfType>::operator->(
                                                                (shared_ptr<rs2lib::IfType>*)this_00),
                                                            *pcVar10 == '\0')) {
                            lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            uVar1 = *(ushort*)(lVar8 + 286);
                            lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            uVar2 = *(ushort*)(lVar8 + 284);
                            iVar6 = local_38->field_1115692;
                            lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            iVar7 = *(int*)(lVar8 + 260);
                            lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            *(uint*)(lVar8 + 260) = (uint)uVar1 * iVar6 + iVar7 & 2047;
                            lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            iVar7 = *(int*)(lVar8 + 264);
                            lVar8 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                            *(uint*)(lVar8 + 264) = (uint)uVar2 * iVar6 + iVar7 & 2047;
                            ComponentUpdated(local_38, this_00);
                        }
                    }
                }
            LAB_1001052c0:
                uVar14 = uVar14 + 1;
                uVar9 = param_1->end();
            } while (uVar14 < uVar9);
        }
    }

    // 0x100105750, 16 bytes, placed by class name and neighbouring functions
    // Client::DrawDebugString(eastl::string const&, int, int)
    void Client::DrawDebugString(basic_string* param_1, int param_2, int param_3) {
        DrawDebugString((basic_string*)this, (int)param_1, param_2, param_3);
    }

    // 0x100105760, 112 bytes, placed by class name and neighbouring functions
    // Client::DrawDebugString(eastl::string const&, int, int, int)
    void Client::DrawDebugString(basic_string* param_1, int param_2, int param_3, int param_4) {
        PixfontGeneric* this;
        Pix2D* pPVar1;
        undefined4 in_register_00000034;

        this = (PixfontGeneric*)shared_ptr<jstring::PixfontGeneric>::operator->(
            (shared_ptr<jstring::PixfontGeneric>*)(param_1 + 1104256));
        pPVar1 = (Pix2D*)(**(code**)**(undefined8**)(param_1 + 144))();
        RightString((basic_string*)CONCAT44(in_register_00000034, param_2), param_3, param_4, 16776960, -1, pPVar1);
    }

    // 0x1001058a0, 272 bytes, placed by class name and neighbouring functions
    // Client::CreateObjOverlay(shared_ptr<rs2lib::IfType>)
    void Client::CreateObjOverlay(shared_ptr param_1) {
        undefined1* this_00;
        char cVar1;
        undefined4 uVar2;
        long lVar3;
        Array<shared_ptr<rs2lib::IfType>, eastl::allocator>* this_01;
        shared_ptr* psVar4;
        IfType* pIVar5;
        shared_ptr* in_RSI;
        function<void(rs2lib::IfType_const&)> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = m_entityOverlays;
        uVar2 = this_00->CreateOverlay();
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)in_RSI);
        *(undefined4*)(lVar3 + 680) = uVar2;
        cVar1 = ScriptRunner::ExecuteHeldObjOverlayTrigger(in_RSI, 500000);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)in_RSI);
        if (cVar1 == '\0') {
            this_00->DestroyOverlay(*(int*)(lVar3 + 680));
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)in_RSI);
            *(undefined4*)(lVar3 + 680) = 4294967294;
        } else {
            this_01 = (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)this_00->GetOverlay(*(int*)(lVar3 + 680));
            psVar4 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](this_01, 0);
            InterfacePositionOverlay(this, psVar4, in_RSI, true);
            pIVar5 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)in_RSI);
            std::function<void(rs2lib::IfType_const&)>::function<
                Client::CreateObjOverlay(shared_ptr<rs2lib::IfType>)::__13, void>(local_68, this);
            pIVar5->SetOnDestroyCallback(local_68);
            std::function<void(rs2lib::IfType_const&)>::~function(local_68);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001059f0, 160 bytes, placed by class name and neighbouring functions
    // Client::GetActive(shared_ptr<rs2lib::IfType> const&)
    undefined4 Client::GetActive(shared_ptr* param_1) {
        uint uVar1;
        long lVar3;
        undefined4* puVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_58[16];
        eastl local_48[16];
        long local_38;

        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        uVar1 = *(uint*)(lVar3 + 4);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        local_38 = (long)*(int*)(lVar3 + 8) + ((ulong)uVar1 << 32);
        eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                         eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((longlong*)local_48);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, local_58, extraout_RDX)) {
            lVar3 = local_48->HeapBeginPtr();
            puVar4 = (undefined4*)(lVar3 + 8);
        } else {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            puVar4 = (undefined4*)(lVar3 + 684);
        }
        return *puVar4;
    }

    // 0x100105ab0, 32 bytes, placed by class name and neighbouring functions
    // Client::ClearHookQueueMouseEvents(bool)
    void Client::ClearHookQueueMouseEvents(bool param_1) {
        undefined7 in_register_00000039;

        eastl::list<HookReq, eastl::allocator>::remove_if<Client::ClearHookQueueMouseEvents(bool)::__14>(
            (list<HookReq, eastl::allocator>*)(CONCAT71(in_register_00000039, param_1) + 2506384));
    }

    // 0x100105ad0, 32 bytes, placed by class name and neighbouring functions
    // Client::ClearHardcodedMouseEvents()
    void Client::ClearHardcodedMouseEvents() {
        (&field_2506480)->clear();
    }

    // 0x100105af0, 96 bytes, placed by class name and neighbouring functions
    // Client::ResetDragScrollLayer()
    void Client::ResetDragScrollLayer() {
        shared_ptr local_28;

        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)field_2505208, &local_28);
        local_28.~shared_ptr();
        field_2505224 = 0;
        field_8604 = 0;
    }

    // 0x100105b90, 2032 bytes, placed by __FILE__ string
    // Client::IfButtonX(int, shared_ptr<rs2lib::IfType> const&, eastl::string const&, int)
    void Client::IfButtonX(int param_1, shared_ptr* param_2, basic_string* param_3, int param_4) {
        uint uVar1;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar2;
        char cVar4;
        int iVar5;
        long lVar6;
        undefined8 uVar7;
        ServerConnection* pSVar8;
        undefined1 local_b8[32];
        shared_ptr<rs2lib::IfType> local_98[24];
        int local_80;
        eastl::string local_60[40];
        int local_34;

        if (operator==(param_2, (_func_decltype_nullptr*)0)) {
            return;
        }
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        iVar5 = *(int*)(lVar6 + 20);
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        cVar4 = ((lVar6 + 1312))->empty();
        if (cVar4 == '\0') {
            new (local_b8) HookReq();
            shared_ptr<rs2lib::IfType>::operator=(local_98, param_2);
            local_80 = param_1;
            eastl::string::operator=(local_60, param_3);
            lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
            Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_b8,
                                                        (Array*)(lVar6 + 1312));
            ScriptRunner::ExecuteScript((HookReq*)local_b8, 500000);
            local_b8->~HookReq();
        }
        if ((0 < iVar5) && (cVar4 = ClientButton(this, iVar5), cVar4 == '\0')) {
            return;
        }
        iVar5 = GetActive(this, param_2);
        uVar1 = param_1 - 1;
        cVar4 = rs2lib::ServerActive::HasOp(iVar5, uVar1);
        if (cVar4 == '\0') {
            if (field_54760 == '\0') {
                return;
            }
            uVar7 = logger::default_logger();
            logger::Logger::Log(
                uVar7, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                5139, "Skipping ifbuttonx transmit for op:%i as if_setevents not set for that op", param_1);
            return;
        }
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        iVar5 = *(int*)(lVar6 + 4);
        lVar6 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_2);
        if (9 < uVar1) {
            return;
        }
        local_34 = *(int*)(lVar6 + 8);
        switch (uVar1) {
        case 0:
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar7 = pSVar8->GetOutgoingEncryption();
            local_b8->MakeClientMessage(26, uVar7);
            pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar8->SendClientMessage(local_b8);
            local_b8->~ClientMessage();
            switch (param_1) {
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
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar7 = pSVar8->GetOutgoingEncryption();
            local_b8->MakeClientMessage(16, uVar7);
            pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar8->SendClientMessage(local_b8);
            local_b8->~ClientMessage();
            switch (param_1) {
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
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar7 = pSVar8->GetOutgoingEncryption();
            local_b8->MakeClientMessage(68, uVar7);
            pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar8->SendClientMessage(local_b8);
            local_b8->~ClientMessage();
            switch (param_1) {
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
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar7 = pSVar8->GetOutgoingEncryption();
            local_b8->MakeClientMessage(5, uVar7);
            pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar8->SendClientMessage(local_b8);
            local_b8->~ClientMessage();
            switch (param_1) {
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
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar7 = pSVar8->GetOutgoingEncryption();
            local_b8->MakeClientMessage(89, uVar7);
            pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar8->SendClientMessage(local_b8);
            local_b8->~ClientMessage();
            switch (param_1) {
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
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar7 = pSVar8->GetOutgoingEncryption();
            local_b8->MakeClientMessage(6, uVar7);
            pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar8->SendClientMessage(local_b8);
            local_b8->~ClientMessage();
            switch (param_1) {
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
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar7 = pSVar8->GetOutgoingEncryption();
            local_b8->MakeClientMessage(55, uVar7);
            pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar8->SendClientMessage(local_b8);
            local_b8->~ClientMessage();
            if (param_1 == 8)
                goto switchD_100105cba_caseD_7;
            goto LAB_100106120;
        case 7:
        switchD_100105cba_caseD_7:
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar7 = pSVar8->GetOutgoingEncryption();
            local_b8->MakeClientMessage(1, uVar7);
            pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
            pSVar8 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar8->SendClientMessage(local_b8);
            local_b8->~ClientMessage();
        LAB_100106120:
            if (param_1 == 9) {
            switchD_100105cba_caseD_8:
                pSVar8 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar7 = pSVar8->GetOutgoingEncryption();
                local_b8->MakeClientMessage(76, uVar7);
                pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
                pSVar8 = (ServerConnection*)
                             std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                 (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar8->SendClientMessage(local_b8);
                local_b8->~ClientMessage();
            }
            if (param_1 != 10) {
                return;
            }
            break;
        case 8:
            goto switchD_100105cba_caseD_8;
        }
        pSVar8 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar7 = pSVar8->GetOutgoingEncryption();
        local_b8->MakeClientMessage(32, uVar7);
        pPVar2 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)(local_b8 + 8);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar2, iVar5);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, local_34);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar2, param_4);
        pSVar8 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        pSVar8->SendClientMessage(local_b8);
        local_b8->~ClientMessage();
    switchD_10010602c_default:
    }

    // 0x100106390, 240 bytes, placed by class name and neighbouring functions
    // Client::TargetVerb(shared_ptr<rs2lib::IfType> const&)
    Client* Client::TargetVerb(shared_ptr* param_1) {
        int iVar2;
        long lVar3;
        shared_ptr* in_RDX;
        eastl::string local_48[32];
        allocator local_28[8];

        iVar2 = GetActive((Client*)param_1, in_RDX);
        iVar2 = rs2lib::ServerActive::TargetMask(iVar2);
        if (iVar2 == 0) {
            new (local_48) eastl::allocator("EASTL basic_string");
            new (this) eastl::string("", local_48);
        } else {
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)in_RDX);
            eastl::string::basic_string(local_48, (basic_string*)(lVar3 + 792));
            eastl::string::trim(local_48);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)in_RDX);
                new (this) eastl::string((basic_string*)(lVar3 + 792));
            } else {
                eastl::allocator::allocator(local_28, "EASTL basic_string");
                new (this) eastl::string("", local_28);
            }
            eastl::string::~basic_string(local_48);
        }
        return this;
    }

    // 0x100106560, 80 bytes, placed by class name and neighbouring functions
    // Client::GetParentInterface(shared_ptr<rs2lib::IfType>)
    void Client::GetParentInterface(shared_ptr param_1) {
        long lVar1;
        shared_ptr<rs2lib::IfType>* in_RSI;

        lVar1 = shared_ptr<rs2lib::IfType>::operator->(in_RSI);
        if (*(char*)(lVar1 + 24) == '\0') {
            lVar1 = shared_ptr<rs2lib::IfType>::operator->(in_RSI);
            rs2lib::IfType::Get(*(int*)(lVar1 + 4));
        } else {
            lVar1 = shared_ptr<rs2lib::IfType>::operator->(in_RSI);
            (m_entityOverlays, *(int*)(lVar1 + 4))->GetLayer();
        }
    }

    // 0x1001066f0, 32 bytes, placed by class name and neighbouring functions
    // Client::RenderAllPlayerNames()
    byte Client::RenderAllPlayerNames() {
        return ((byte)field_52036 & 4) >> 2;
    }

    // 0x100106710, 16 bytes, placed by class name and neighbouring functions
    // Client::RenderFriendNames()
    byte Client::RenderFriendNames() {
        return (byte)field_52036 & 1;
    }

    // 0x100106720, 16 bytes, placed by class name and neighbouring functions
    // Client::RenderFriendChatNames()
    byte Client::RenderFriendChatNames() {
        return ((byte)field_52036 & 2) >> 1;
    }

    // 0x100106730, 32 bytes, placed by class name and neighbouring functions
    // Client::RenderSelfName()
    byte Client::RenderSelfName() {
        return ((byte)field_52036 & 8) >> 3;
    }

    // 0x100106750, 144 bytes, placed by class name and neighbouring functions
    // Client::ShouldRenderPlayerName(ClientPlayer*)
    ulong Client::ShouldRenderPlayerName(ClientPlayer* param_1) {
        char cVar1;
        uint uVar2;
        ClientPlayer* pCVar3;
        undefined8 unaff_R15;
        ulong uVar4;

        if (field_52036 == 0) {
        LAB_1001067b7:
            uVar4 = 0;
        } else {
            pCVar3 = (ClientPlayer*)field_52016->end();
            if (pCVar3 == param_1) {
                uVar2 = RenderSelfName(this);
            } else {
                cVar1 = RenderAllPlayerNames(this);
                uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
                if (cVar1 != '\0')
                    goto LAB_1001067c7;
                cVar1 = RenderFriendNames(this);
                if (cVar1 != '\0') {
                    cVar1 = param_1->IsOnlineFriend();
                    if (cVar1 != '\0')
                        goto LAB_1001067c7;
                }
                cVar1 = RenderFriendChatNames(this);
                if (cVar1 == '\0')
                    goto LAB_1001067b7;
                uVar2 = param_1->IsFriendChat();
            }
            uVar4 = (ulong)uVar2;
        }
    LAB_1001067c7:
        return uVar4 & 4294967295;
    }

    // 0x100106840, 208 bytes, placed by class name and neighbouring functions
    // Client::DoStashed(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void Client::DoStashed() {
        undefined8 uVar1;
        undefined4 uVar2;
        Minimap* this_00;
        undefined8 in_R9;
        shared_ptr<RSevenDebugPresetProvider> local_50[32];

        this_00 = (Minimap*)minimenu::Minimenu::GetStashed();
        if (this_00 != (Minimap*)0) {
            local_50._20_4_ = this_00->GetX();
            local_50._24_4_ = this_00->GetZ();
            local_50._28_4_ = this_00->GetPos();
            uVar2 = this_00->GetLevel();
            this_00->second();
            uVar1 = this_00->GetLogStreams();
            local_50->GetComponent();
            DoAction(this, local_50._20_4_, local_50._24_4_, local_50._28_4_, uVar2, in_R9, uVar1);
            local_50->~shared_ptr();
        }
        minimenu::Minimenu::ClearStashed();
    }

    // 0x100106960, 96 bytes, placed by class name and neighbouring functions
    // Client::IsMiniMenuOpenRequired()
    ulong Client::IsMiniMenuOpenRequired() {
        char cVar1;
        int iVar2;
        int iVar3;

        iVar2 = field_52344->GetDefaultClickIndex();
        if (((m_usingOneButtonMouse == false) || (iVar3 = field_52344->GetNumEntries(), iVar3 < 3)) &&
            (cVar1 = (field_52344, iVar2)->MenuOnly(), cVar1 == '\0')) {
            return 0;
        }
        return field_52344->IsDefaultShiftClickOption() ^ 1;
    }

    // 0x1001069c0, 144 bytes, placed by class name and neighbouring functions
    // Client::RequestGroundCoordsForDeferredMove(CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>)
    void Client::RequestGroundCoordsForDeferredMove(undefined4 param_2, undefined4 param_3) {
        NXTPixToolkit* this_00;
        NXTPixScreen* pNVar1;
        world* this_01;
        int iVar2;
        int iVar3;
        int local_30;
        int local_2c;

        this_00 = (NXTPixToolkit*)GetMemoryCache();
        pNVar1 = (NXTPixScreen*)this_00->GetScreen();
        pNVar1->CalculateCanvasCoords(param_2, param_3, &local_30);
        iVar3 = local_30 - field_52736;
        iVar2 = local_2c - field_52740;
        local_30 = iVar3;
        local_2c = iVar2;
        this_01 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
        this_01->RequestGroundCoordsForOp(m_playerLevel, iVar3, iVar2, false);
    }

    // 0x100106a50, 80 bytes, placed by class name and neighbouring functions
    // Client::IsLocOnPlayersLevel(int, int, long long)
    bool Client::IsLocOnPlayersLevel(int param_1, int param_2, longlong param_3) {
        world* this_00;
        int iVar1;

        this_00 = (world*)std::unique_ptr<dash3d::world, std::default_delete<dash3d::world>>::operator->(
            (unique_ptr<dash3d::world, std::default_delete<dash3d::world>>*)&field_19184);
        iVar1 = this_00->TypeCode2(m_playerLevel, param_1, param_2, param_3);
        return -1 < iVar1;
    }

    // 0x100106aa0, 32 bytes, placed by class name and neighbouring functions
    // Client::IsMiniMenuOpen()
    void Client::IsMiniMenuOpen() {
        field_52344->IsOpen();
    }

    // 0x100106ac0, 368 bytes, placed by __FILE__ string
    // Client::ExecuteOnClickObjTrigger(minimenu::MinimenuSubject const&)
    void Client::ExecuteOnClickObjTrigger(MinimenuSubject* param_1) {
        undefined4 uVar1;
        int iVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        undefined4* puVar7;
        undefined8 uVar8;
        CoordGrid local_70;
        weak_ptr<dash3d::Decor> local_60[16];
        shared_ptr<ClientObj> local_50[16];
        shared_ptr<configdecoder::ObjType> local_40[16];

        iVar3 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(param_1->field_40);
        iVar4 = dash3d::MousePickingHelper::GetEntityXFromTypecode(param_1->field_40);
        iVar5 = dash3d::MousePickingHelper::GetEntityZFromTypecode(param_1->field_40);
        new (&local_70) rs2lib::CoordGrid(iVar3, iVar4, iVar5);
        iVar3 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(param_1->field_40);
        FindClientObj((Client*)local_50, (CoordGrid*)this, (int)&local_70, iVar3);
        if (local_50->operator_cast_to_bool()) {
            lVar6 = shared_ptr<ClientObj>::operator->(local_50);
            local_40->List(*(int*)(lVar6 + 24));
            weak_ptr<dash3d::Decor>::weak_ptr(local_60, (weak_ptr*)local_50);
            ScriptRunner::SetActiveObj(&local_70, local_60);
            local_60->~weak_ptr();
            puVar7 = (undefined4*)shared_ptr<configdecoder::ObjType>::operator->(local_40);
            uVar1 = *puVar7;
            lVar6 = shared_ptr<configdecoder::ObjType>::operator->(local_40);
            ScriptRunner::ExecuteScript(79, uVar1, *(undefined4*)(lVar6 + 672), 500000);
            local_40->~shared_ptr();
        } else {
            uVar8 = logger::default_logger();
            logger::Logger::Log(
                uVar8, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                3903, "Trying to fire onclickobj script trigger, but could not find obj based on typecode: %lld",
                param_1->field_40);
        }
        local_50->~shared_ptr();
    }

    // 0x100106c30, 192 bytes, placed by __FILE__ string
    // Client::ExecuteOnClickLocTrigger(int, long long)
    void Client::ExecuteOnClickLocTrigger(int param_1, longlong param_2) {
        undefined4 uVar1;
        shared_ptr* this_00;
        undefined4* puVar3;
        long lVar4;
        undefined8 uVar5;
        LocInfo local_30;

        new (&local_30) LocInfo(param_2);
        ScriptRunner::SetActiveLoc(&local_30);
        local_30.~pair();
        this_00 = (shared_ptr*)configdecoder::LocType::List(param_1);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            puVar3 = (undefined4*)shared_ptr<configdecoder::LocType>::operator->(
                (shared_ptr<configdecoder::LocType>*)this_00);
            uVar1 = *puVar3;
            lVar4 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)this_00);
            ScriptRunner::ExecuteScript(78, uVar1, *(undefined4*)(lVar4 + 440), 500000);
        } else {
            uVar5 = logger::default_logger();
            logger::Logger::Log(
                uVar5, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                3917, "Trying to fire onclickloc script trigger, but could not find loc type for loc id: %d", param_1);
        }
    }

    // 0x100106cf0, 144 bytes, placed by __FILE__ string
    // Client::ExecuteOnClickNPCTrigger(int)
    void Client::ExecuteOnClickNPCTrigger(int param_1) {
        undefined4 uVar1;
        long lVar2;
        undefined4* puVar3;
        undefined8 uVar4;

        lVar2 = GetClientNpc(this, param_1);
        if (lVar2 == 0) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                3932, "Trying to fire onclicknpc script trigger, but NPC no longer exists. NPC id: %d", param_1);
        } else {
            ScriptRunner::SetActiveNPC(param_1);
            puVar3 = (undefined4*)shared_ptr<configdecoder::NpcType>::operator->(
                (shared_ptr<configdecoder::NpcType>*)(lVar2 + 1024));
            uVar1 = *puVar3;
            lVar2 = shared_ptr<configdecoder::NpcType>::operator->((shared_ptr<configdecoder::NpcType>*)(lVar2 + 1024));
            ScriptRunner::ExecuteScript(80, uVar1, *(undefined4*)(lVar2 + 156), 500000);
        }
    }

    // 0x100106d80, 128 bytes, placed by __FILE__ string
    // Client::ExecuteOnClickPlayerTrigger(int)
    void Client::ExecuteOnClickPlayerTrigger(int param_1) {
        undefined8 in_RAX;
        shared_ptr* this_00;
        undefined8 uVar2;
        undefined4 uVar3;

        uVar3 = (undefined4)((ulong)in_RAX >> 32);
        this_00 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_1);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            ScriptRunner::SetActivePlayer(param_1);
            ScriptRunner::ExecuteScript(81, 4294967295, 4294967295, 500000);
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                3945, "Trying to fire onclickplayer script trigger, but player no longer exists. Player id: %d",
                CONCAT44(uVar3, param_1));
        }
    }

    // 0x100106e00, 160 bytes, placed by class name and neighbouring functions
    // Client::SendExamineObj(int)
    void Client::SendExamineObj(int param_1) {
        ServerConnection* pSVar1;
        undefined8 uVar2;
        ShuffledPacket4* this_00;
        undefined1 local_68[64];
        SuperShuffledPacketFactory local_28;

        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar2 = pSVar1->GetOutgoingEncryption();
        local_68->MakeClientMessage(30, uVar2);
        new (&local_28) SuperShuffledPacketFactory((SuperPacket*)(local_68 + 8));
        this_00 = (ShuffledPacket4*)local_28.p2_alt2();
        ShuffledPacket4::p2<int>(this_00, param_1);
        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        pSVar1->SendClientMessage(local_68);
        local_68->~ClientMessage();
    }

    // 0x100106ea0, 240 bytes, placed by class name and neighbouring functions
    // Client::SendExamineObjV2(rs2lib::CoordGrid&, int)
    void Client::SendExamineObjV2(CoordGrid* param_1, int param_2) {
        ServerConnection* pSVar1;
        undefined8 uVar2;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* this_00;
        ShuffledPacket3* this_01;
        ShuffledPacket2* this_02;
        int iVar3;
        undefined1 local_78[64];
        SuperShuffledPacketFactory local_38;

        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        uVar2 = pSVar1->GetOutgoingEncryption();
        local_78->MakeClientMessage(46, uVar2);
        new (&local_38) SuperShuffledPacketFactory((SuperPacket*)(local_78 + 8));
        this_00 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_38.p2_alt2();
        iVar3 = param_1->GetZ();
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(this_00, iVar3);
        this_01 = (ShuffledPacket3*)local_38.p2_alt2();
        ShuffledPacket3::p2<int>(this_01, param_2);
        this_02 = (ShuffledPacket2*)local_38.p2_alt2();
        iVar3 = param_1->GetPos();
        ShuffledPacket2::p2<int>(this_02, iVar3);
        pSVar1 =
            (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
        pSVar1->SendClientMessage(local_78);
        local_78->~ClientMessage();
    }

    // 0x100106f90, 20560 bytes, placed by class name and neighbouring functions
    // Client::DoAction(int, int, int, int, eastl::string const&, minimenu::MinimenuSubject const&, CoordType<UICoordSpecializer>, CoordType<UICoordSpecializer>, shared_ptr<rs2lib::IfType> const&)
    void Client::DoAction(int param_1, uint param_2, int param_3, int param_4, undefined8 param_6_00,
                          MinimenuSubject* param_6, undefined8 param_8, undefined8 param_9, shared_ptr* param_10) {
        undefined1* this_00;
        undefined4 uVar1;
        Minimenu* this_01;
        ulong uVar2;
        byte bVar3;
        undefined1 uVar4;
        bool bVar5;
        char cVar6;
        uint uVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        Array<int, eastl::allocator>* pAVar11;
        undefined4* puVar12;
        ShuffledPacket2* pSVar13;
        shared_ptr* psVar14;
        Client* pCVar15;
        int* piVar16;
        long lVar17;
        ServerConnection* pSVar18;
        undefined8 uVar19;
        ShuffledPacket4* pSVar20;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>* pPVar21;
        ShuffledPacket3* pSVar22;
        HookArg* pHVar23;
        char* pcVar24;
        CoordGrid* this_02;
        int iVar25;
        CoordGrid local_1a0[2];
        StringConstants local_180[32];
        weak_ptr<dash3d::Decor> local_160[16];
        ulong local_150;
        CoordGrid local_148[2];
        SuperShuffledPacketFactory local_128[2];
        undefined1 local_108[8];
        undefined1 local_100[48];
        int local_d0;
        eastl::string local_b0[36];
        uint local_8c;
        HookArg local_88;

        uVar7 = minimenu::Minimenu::RemovePriorityModifier(param_3);
        iVar25 = uVar7 - 1;
        switch (iVar25) {
        case 0:
        switchD_100106fd7_caseD_0:
            iVar25 = param_1;
            uVar9 = param_2;
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(18, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_52364);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(pPVar21, field_52360);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_52356);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, param_4);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_53224 + uVar9);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_53220 + iVar25);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            uVar4 = (&field_8496, 107)->KeyHeld();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
            pCVar15 = (Client*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pCVar15->SendClientMessage(local_108);
            ExecuteOnClickLocTrigger(pCVar15, param_4, param_6->field_40);
            local_108->~ClientMessage();
            switch (uVar7) {
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
                switch (uVar7) {
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
            iVar25 = param_1;
            uVar9 = param_2;
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(12, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, param_4);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_53220 + iVar25);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_53224 + uVar9);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            iVar25 = field_52344->GetTargetSubinterfaceId();
            ShuffledPacket3::p2<int>(pSVar22, iVar25);
            pSVar20 = (ShuffledPacket4*)local_88.HeapBeginPtr();
            bVar3 = (&field_8496, 107)->KeyHeld();
            ShuffledPacket4::p1<int>(pSVar20, (uint)bVar3);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            iVar25 = field_52344->GetTargetLinkObject();
            ShuffledPacket3::p2<int>(pSVar22, iVar25);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            uVar9 = field_52344->GetTargetComponent();
            ShuffledPacket2::p4<unsigned int>(pSVar13, uVar9);
            pCVar15 = (Client*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pCVar15->SendClientMessage(local_108);
            ExecuteOnClickLocTrigger(pCVar15, param_4, param_6->field_40);
            local_108->~ClientMessage();
            switch (uVar7) {
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
                switch (uVar7) {
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
            iVar25 = param_1;
            uVar9 = param_2;
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(79, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_53220 + iVar25);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, field_53224 + uVar9);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            uVar4 = (&field_8496, 107)->KeyHeld();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, param_4);
            pCVar15 = (Client*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pCVar15->SendClientMessage(local_108);
            ExecuteOnClickLocTrigger(pCVar15, param_4, param_6->field_40);
            local_108->~ClientMessage();
            switch (uVar7) {
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
                switch (uVar7) {
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
            iVar25 = param_1;
            uVar9 = param_2;
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(3, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_53220 + iVar25);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_53224 + uVar9);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, param_4);
            pSVar22 = (ShuffledPacket3*)local_88.HeapBeginPtr();
            bVar3 = (&field_8496, 107)->KeyHeld();
            ShuffledPacket3::p1<int>(pSVar22, (uint)bVar3);
            pCVar15 = (Client*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pCVar15->SendClientMessage(local_108);
            ExecuteOnClickLocTrigger(pCVar15, param_4, param_6->field_40);
            local_108->~ClientMessage();
            switch (uVar7) {
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
                switch (uVar7) {
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
            uVar9 = param_2;
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(39, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, param_4);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, field_53220 + param_1);
            pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar3 = (&field_8496, 107)->KeyHeld();
            ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_53224 + uVar9);
            pCVar15 = (Client*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pCVar15->SendClientMessage(local_108);
            ExecuteOnClickLocTrigger(pCVar15, param_4, param_6->field_40);
            local_108->~ClientMessage();
            switch (uVar7) {
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
                switch (uVar7) {
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
            uVar9 = param_2;
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(73, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            uVar4 = (&field_8496, 107)->KeyHeld();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_53224 + uVar9);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, param_4);
            iVar25 = param_1;
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, field_53220 + iVar25);
            pCVar15 = (Client*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pCVar15->SendClientMessage(local_108);
            ExecuteOnClickLocTrigger(pCVar15, param_4, param_6->field_40);
            local_108->~ClientMessage();
            switch (uVar7) {
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
                switch (uVar7) {
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
            psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
            bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
            if (bVar5) {
                SetPlayerDestination(this, param_1, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(69, uVar19);
                new (&local_88) SuperShuffledPacketFactory(local_100);
                pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
                ShuffledPacket2::p2<int>(pSVar13, field_52356);
                pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
                ShuffledPacket2::p2<int>(pSVar13, field_52364);
                pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
                ShuffledPacket2::p4<unsigned int>(pSVar13, field_52360);
                pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
                ShuffledPacket2::p2<int>(pSVar13, param_4);
                pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
                bVar3 = (&field_8496, 107)->KeyHeld();
                ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar18->SendClientMessage(local_108);
                ExecuteOnClickNPCTrigger(this, param_4);
                local_108->~ClientMessage();
            }
            if (1001 < (int)uVar7)
                goto LAB_10010951a;
            switch (uVar7) {
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
            psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
            bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
            if (bVar5) {
                SetPlayerDestination(this, param_1, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(78, uVar19);
                new (&local_88) SuperShuffledPacketFactory(local_100);
                pSVar20 = (ShuffledPacket4*)local_88.HeapBeginPtr();
                bVar3 = (&field_8496, 107)->KeyHeld();
                ShuffledPacket4::p1<int>(pSVar20, (uint)bVar3);
                pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
                ShuffledPacket4::p2<int>(pSVar20, param_4);
                pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
                iVar25 = field_52344->GetTargetLinkObject();
                ShuffledPacket2::p2<int>(pSVar13, iVar25);
                pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
                uVar9 = field_52344->GetTargetComponent();
                ShuffledPacket4::p4<unsigned int>(pSVar20, uVar9);
                pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
                iVar25 = field_52344->GetTargetSubinterfaceId();
                ShuffledPacket3::p2<int>(pSVar22, iVar25);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar18->SendClientMessage(local_108);
                ExecuteOnClickNPCTrigger(this, param_4);
                local_108->~ClientMessage();
            }
            if (1001 < (int)uVar7)
                goto LAB_10010951a;
            switch (uVar7) {
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
            psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
            bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
            if (bVar5) {
                SetPlayerDestination(this, param_1, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(34, uVar19);
                new (&local_88) SuperShuffledPacketFactory(local_100);
                pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
                bVar3 = (&field_8496, 107)->KeyHeld();
                ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
                pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
                ShuffledPacket4::p2<int>(pSVar20, param_4);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar18->SendClientMessage(local_108);
                ExecuteOnClickNPCTrigger(this, param_4);
                local_108->~ClientMessage();
            }
            if (1001 < (int)uVar7)
                goto LAB_10010951a;
            switch (uVar7) {
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
            psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
            bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
            if (bVar5) {
                SetPlayerDestination(this, param_1, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(53, uVar19);
                new (&local_88) SuperShuffledPacketFactory(local_100);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
                uVar4 = (&field_8496, 107)->KeyHeld();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
                pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
                ShuffledPacket2::p2<int>(pSVar13, param_4);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar18->SendClientMessage(local_108);
                ExecuteOnClickNPCTrigger(this, param_4);
                local_108->~ClientMessage();
            }
            if (1001 < (int)uVar7)
                goto LAB_10010951a;
            switch (uVar7) {
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
            psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
            bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
            if (bVar5) {
                SetPlayerDestination(this, param_1, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(81, uVar19);
                new (&local_88) SuperShuffledPacketFactory(local_100);
                pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
                ShuffledPacket3::p2<int>(pSVar22, param_4);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
                uVar4 = (&field_8496, 107)->KeyHeld();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar18->SendClientMessage(local_108);
                ExecuteOnClickNPCTrigger(this, param_4);
                local_108->~ClientMessage();
            }
            if ((int)uVar7 < 1002) {
                switch (uVar7) {
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
            psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
            bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
            if (bVar5) {
                SetPlayerDestination(this, param_1, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(59, uVar19);
                new (&local_88) SuperShuffledPacketFactory(local_100);
                pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
                bVar3 = (&field_8496, 107)->KeyHeld();
                ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, param_4);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar18->SendClientMessage(local_108);
                ExecuteOnClickNPCTrigger(this, param_4);
                local_108->~ClientMessage();
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
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(54, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, field_52364);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, param_4);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            uVar4 = (&field_8496, 107)->KeyHeld();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_52356);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, field_53220 + param_1);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_53224 + param_2);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p4<unsigned int>(pSVar22, field_52360);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            ExecuteOnClickObjTrigger(this, param_6);
            local_108->~ClientMessage();
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
                switch (uVar7) {
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
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(77, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, field_53220 + param_1);
            pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar3 = (&field_8496, 107)->KeyHeld();
            ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            iVar8 = field_52344->GetTargetLinkObject();
            ShuffledPacket4::p2<int>(pSVar20, iVar8);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            iVar8 = field_52344->GetTargetSubinterfaceId();
            ShuffledPacket3::p2<int>(pSVar22, iVar8);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            uVar9 = field_52344->GetTargetComponent();
            ShuffledPacket4::p4<unsigned int>(pSVar20, uVar9);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_53224 + param_2);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, param_4);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            ExecuteOnClickObjTrigger(this, param_6);
            local_108->~ClientMessage();
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
                switch (uVar7) {
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
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(28, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, param_4);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, field_53220 + param_1);
            pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar3 = (&field_8496, 107)->KeyHeld();
            ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_53224 + param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            ExecuteOnClickObjTrigger(this, param_6);
            local_108->~ClientMessage();
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
                switch (uVar7) {
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
            uVar9 = param_2;
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(50, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_53224 + uVar9);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, field_53220 + param_1);
            pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar3 = (&field_8496, 107)->KeyHeld();
            ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, param_4);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            ExecuteOnClickObjTrigger(this, param_6);
            local_108->~ClientMessage();
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
                switch (uVar7) {
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
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(25, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, field_53224 + param_2);
            pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar3 = (&field_8496, 107)->KeyHeld();
            ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, param_4);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, field_53220 + param_1);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            ExecuteOnClickObjTrigger(this, param_6);
            local_108->~ClientMessage();
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
                switch (uVar7) {
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
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(44, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
            uVar4 = (&field_8496, 107)->KeyHeld();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, field_53220 + param_1);
            pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
            ShuffledPacket4::p2<int>(pSVar20, field_53224 + param_2);
            pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
            ShuffledPacket2::p2<int>(pSVar13, param_4);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            ExecuteOnClickObjTrigger(this, param_6);
            local_108->~ClientMessage();
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
                switch (uVar7) {
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
            SetPlayerDestination(this, param_1, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(71, uVar19);
            new (&local_88) SuperShuffledPacketFactory(local_100);
            pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
            ShuffledPacket3::p2<int>(pSVar22, field_53220 + param_1);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, field_53224 + param_2);
            pSVar13 = (ShuffledPacket2*)local_88.HeapBeginPtr();
            bVar3 = (&field_8496, 107)->KeyHeld();
            ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, param_4);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            ExecuteOnClickObjTrigger(this, param_6);
            local_108->~ClientMessage();
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
                switch (uVar7) {
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
            bVar5 = shared_ptr::operator_cast_to_bool(param_10);
            if (bVar5) {
                lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                if (0 < *(int*)(lVar17 + 20)) {
                    lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                    cVar6 = ClientButton(this, *(int*)(lVar17 + 20));
                    if (cVar6 == '\0')
                        goto LAB_100107303;
                }
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(52, uVar19);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_100, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar18->SendClientMessage(local_108);
                local_108->~ClientMessage();
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
                if (uVar7 == 1001)
                    goto switchD_10010714f_caseD_3e9;
            }
            goto switchD_10010731b_caseD_17;
        case 24:
            bVar5 = shared_ptr::operator_cast_to_bool(param_10);
            if (!bVar5) {
                return;
            }
            field_52344->EndTargetMode();
            this_01 = field_52344;
            iVar25 = GetActive(this, param_10);
            iVar25 = rs2lib::ServerActive::TargetMask(iVar25);
            this_01->EnterTargetMode(param_2, param_1, iVar25, param_6->field_52);
            field_52352 = 0;
            TargetVerb((Client*)local_108, (shared_ptr*)this);
            cVar6 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar6 != '\0') {
                eastl::string::operator=((eastl::string*)local_108, (basic_string*)&constants::text::null);
            }
            new (&local_88) eastl::string();
            pcVar24 = (char*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
            if (*pcVar24 == '\0') {
                local_1a0->TAG_COLOUR(65280);
                lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                eastl::operator+((eastl*)local_148, (basic_string*)local_1a0, (basic_string*)(lVar17 + 1872));
                local_180->TAG_COLOUR(16777215);
                eastl::operator+((eastl*)local_128, (basic_string*)local_148, (basic_string*)local_180);
                eastl::string::operator=((eastl::string*)&local_88, (basic_string*)local_128);
                local_128->~basic_string();
                local_180->~basic_string();
                local_148->~basic_string();
                this_02 = local_1a0;
            } else {
                lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                local_148->TAG_COLOUR(16777215);
                eastl::operator+((basic_string*)local_128, (basic_string*)(lVar17 + 704));
                eastl::string::operator=((eastl::string*)&local_88, (basic_string*)local_128);
                local_128->~basic_string();
                this_02 = local_148;
            }
            this_02->~basic_string();
            (field_52344, (basic_string*)local_108, (basic_string*)&local_88)->SetTargetStrings();
            local_88.~basic_string();
            local_108->~basic_string();
            return;
        case 25:
        switchD_100106fd7_caseD_19:
            CloseModal(this);
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
                switch (uVar7) {
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
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(52, uVar19);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_100, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            bVar5 = shared_ptr::operator_cast_to_bool(param_10);
            if (bVar5) {
                lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                cVar6 = ((lVar17 + 1792))->empty();
                if (cVar6 == '\0') {
                    lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)(lVar17 + 1792), 0);
                    piVar16 = (int*)Array<int, eastl::allocator>::operator[](pAVar11, 0);
                    if (*piVar16 == 5) {
                        lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                        pAVar11 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)(lVar17 + 1792), 0);
                        piVar16 = (int*)Array<int, eastl::allocator>::operator[](pAVar11, 1);
                        iVar8 = *piVar16;
                        piVar16 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)iVar8);
                        iVar10 = *piVar16;
                        piVar16 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)iVar8);
                        *piVar16 = 1 - iVar10;
                        ClientVar(this, iVar8);
                    }
                }
            }
            local_108->~ClientMessage();
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
                if (uVar7 == 1001)
                    goto switchD_10010714f_caseD_3e9;
            }
            goto switchD_10010746a_caseD_16;
        case 28:
        switchD_100106fd7_caseD_1c:
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            uVar19 = pSVar18->GetOutgoingEncryption();
            local_108->MakeClientMessage(52, uVar19);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_100, param_2);
            pSVar18 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
            pSVar18->SendClientMessage(local_108);
            bVar5 = shared_ptr::operator_cast_to_bool(param_10);
            if (bVar5) {
                lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                cVar6 = ((lVar17 + 1792))->empty();
                if (cVar6 == '\0') {
                    lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                    pAVar11 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)(lVar17 + 1792), 0);
                    piVar16 = (int*)Array<int, eastl::allocator>::operator[](pAVar11, 0);
                    if (*piVar16 == 5) {
                        lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                        pAVar11 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)(lVar17 + 1792), 0);
                        piVar16 = (int*)Array<int, eastl::allocator>::operator[](pAVar11, 1);
                        iVar8 = *piVar16;
                        piVar16 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)iVar8);
                        iVar10 = *piVar16;
                        lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                        piVar16 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar17 + 1840), 0);
                        if (iVar10 != *piVar16) {
                            lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                            puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)(lVar17 + 1840), 0);
                            uVar1 = *puVar12;
                            puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)iVar8);
                            *puVar12 = uVar1;
                            ClientVar(this, iVar8);
                        }
                    }
                }
            }
            local_108->~ClientMessage();
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
                if (uVar7 == 1001)
                    goto switchD_10010714f_caseD_3e9;
            }
        switchD_1001075cb_caseD_c:
            if (1001 < (int)uVar7)
                goto LAB_10010951a;
            switch (uVar7) {
            case 13:
            switchD_100106fd7_caseD_c:
                psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                    (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
                bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    SetPlayerDestination(this, param_1, param_2);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar19 = pSVar18->GetOutgoingEncryption();
                    local_108->MakeClientMessage(35, uVar19);
                    new (&local_88) SuperShuffledPacketFactory(local_100);
                    pSVar20 = (ShuffledPacket4*)local_88.HeapBeginPtr();
                    bVar3 = (&field_8496, 107)->KeyHeld();
                    ShuffledPacket4::p1<int>(pSVar20, (uint)bVar3);
                    pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
                    ShuffledPacket2::p2<int>(pSVar13, param_4);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar18->SendClientMessage(local_108);
                    ExecuteOnClickNPCTrigger(this, param_4);
                    local_108->~ClientMessage();
                }
                if (1001 < (int)uVar7)
                    goto LAB_10010951a;
                switch (uVar7) {
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
                psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    SetPlayerDestination(this, param_1, param_2);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar19 = pSVar18->GetOutgoingEncryption();
                    local_108->MakeClientMessage(51, uVar19);
                    SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                    pSVar13 = (ShuffledPacket2*)local_128->p2_alt2();
                    ShuffledPacket2::p4<unsigned int>(pSVar13, field_52360);
                    pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                    ShuffledPacket4::p2<int>(pSVar20, field_52364);
                    pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                    ShuffledPacket4::p2<int>(pSVar20, field_52356);
                    pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                    ShuffledPacket4::p2<int>(pSVar20, param_4);
                    pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128->HeapBeginPtr();
                    uVar4 = (&field_8496, 107)->KeyHeld();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar18->SendClientMessage(local_108);
                    ExecuteOnClickPlayerTrigger(this, param_4);
                    local_108->~ClientMessage();
                }
                local_88.~shared_ptr();
                if (1001 < (int)uVar7)
                    goto LAB_10010951a;
                switch (uVar7) {
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
                psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    SetPlayerDestination(this, param_1, param_2);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar19 = pSVar18->GetOutgoingEncryption();
                    local_108->MakeClientMessage(58, uVar19);
                    SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                    pSVar22 = (ShuffledPacket3*)local_128->p2_alt2();
                    iVar25 = field_52344->GetTargetSubinterfaceId();
                    ShuffledPacket3::p2<int>(pSVar22, iVar25);
                    pSVar13 = (ShuffledPacket2*)local_128->p2_alt2();
                    iVar25 = field_52344->GetTargetLinkObject();
                    ShuffledPacket2::p2<int>(pSVar13, iVar25);
                    pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                    uVar9 = field_52344->GetTargetComponent();
                    ShuffledPacket4::p4<unsigned int>(pSVar20, uVar9);
                    pSVar13 = (ShuffledPacket2*)local_128->p2_alt2();
                    ShuffledPacket2::p2<int>(pSVar13, param_4);
                    pSVar13 = (ShuffledPacket2*)local_128->HeapBeginPtr();
                    bVar3 = (&field_8496, 107)->KeyHeld();
                    ShuffledPacket2::p1<int>(pSVar13, (uint)bVar3);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar18->SendClientMessage(local_108);
                    ExecuteOnClickPlayerTrigger(this, param_4);
                    local_108->~ClientMessage();
                }
                local_88.~shared_ptr();
            switchD_10010746a_caseD_16:
                if (1001 < (int)uVar7)
                    goto LAB_10010951a;
                switch (uVar7) {
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
                SetDeferredGroundOp(this, 23, -1, param_1, param_2);
                switch (uVar7) {
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
                psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    SetPlayerDestination(this, param_1, param_2);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar19 = pSVar18->GetOutgoingEncryption();
                    local_108->MakeClientMessage(10, uVar19);
                    SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                    pSVar22 = (ShuffledPacket3*)local_128->p2_alt2();
                    ShuffledPacket3::p2<int>(pSVar22, param_4);
                    pSVar20 = (ShuffledPacket4*)local_128->HeapBeginPtr();
                    bVar3 = (&field_8496, 107)->KeyHeld();
                    ShuffledPacket4::p1<int>(pSVar20, (uint)bVar3);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar18->SendClientMessage(local_108);
                    ExecuteOnClickPlayerTrigger(this, param_4);
                    local_108->~ClientMessage();
                }
                local_88.~shared_ptr();
                if (1001 < (int)uVar7)
                    goto LAB_10010951a;
                switch (uVar7) {
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
                psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    SetPlayerDestination(this, param_1, param_2);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar19 = pSVar18->GetOutgoingEncryption();
                    local_108->MakeClientMessage(31, uVar19);
                    SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                    pSVar22 = (ShuffledPacket3*)local_128->p2_alt2();
                    ShuffledPacket3::p2<int>(pSVar22, param_4);
                    pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128->HeapBeginPtr();
                    uVar4 = (&field_8496, 107)->KeyHeld();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar18->SendClientMessage(local_108);
                    ExecuteOnClickPlayerTrigger(this, param_4);
                    local_108->~ClientMessage();
                }
                local_88.~shared_ptr();
                if (1001 < (int)uVar7)
                    goto LAB_10010951a;
                switch (uVar7) {
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
                psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    SetPlayerDestination(this, param_1, param_2);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar19 = pSVar18->GetOutgoingEncryption();
                    local_108->MakeClientMessage(63, uVar19);
                    SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                    pSVar13 = (ShuffledPacket2*)local_128->p2_alt2();
                    ShuffledPacket2::p2<int>(pSVar13, param_4);
                    pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128->HeapBeginPtr();
                    uVar4 = (&field_8496, 107)->KeyHeld();
                    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar18->SendClientMessage(local_108);
                    ExecuteOnClickPlayerTrigger(this, param_4);
                    local_108->~ClientMessage();
                }
                local_88.~shared_ptr();
                if (1001 < (int)uVar7)
                    goto LAB_10010951a;
                switch (uVar7) {
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
                psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    SetPlayerDestination(this, param_1, param_2);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    uVar19 = pSVar18->GetOutgoingEncryption();
                    local_108->MakeClientMessage(66, uVar19);
                    SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                    pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                    ShuffledPacket4::p2<int>(pSVar20, param_4);
                    pSVar22 = (ShuffledPacket3*)local_128->HeapBeginPtr();
                    bVar3 = (&field_8496, 107)->KeyHeld();
                    ShuffledPacket3::p1<int>(pSVar22, (uint)bVar3);
                    pSVar18 =
                        (ServerConnection*)
                            std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                    pSVar18->SendClientMessage(local_108);
                    ExecuteOnClickPlayerTrigger(this, param_4);
                    local_108->~ClientMessage();
                }
                local_88.~shared_ptr();
            switchD_10010731b_caseD_17:
                if ((int)uVar7 < 1002) {
                    switch (uVar7) {
                    case 48:
                    switchD_100106fd7_caseD_2f:
                        psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                        new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                        bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            SetPlayerDestination(this, param_1, param_2);
                            pSVar18 =
                                (ServerConnection*)std::unique_ptr<ServerConnection,
                                                                   std::default_delete<ServerConnection>>::
                                operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                            uVar19 = pSVar18->GetOutgoingEncryption();
                            local_108->MakeClientMessage(13, uVar19);
                            SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                            pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                            ShuffledPacket4::p2<int>(pSVar20, param_4);
                            pSVar20 = (ShuffledPacket4*)local_128->HeapBeginPtr();
                            bVar3 = (&field_8496, 107)->KeyHeld();
                            ShuffledPacket4::p1<int>(pSVar20, (uint)bVar3);
                            pSVar18 =
                                (ServerConnection*)std::unique_ptr<ServerConnection,
                                                                   std::default_delete<ServerConnection>>::
                                operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                            pSVar18->SendClientMessage(local_108);
                            ExecuteOnClickPlayerTrigger(this, param_4);
                            local_108->~ClientMessage();
                        }
                        local_88.~shared_ptr();
                        if ((int)uVar7 < 1002) {
                            if (uVar7 == 49)
                                goto switchD_100106fd7_caseD_30;
                            goto LAB_10010952c;
                        }
                        goto LAB_10010951a;
                    case 49:
                    switchD_100106fd7_caseD_30:
                        psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                        new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                        bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            SetPlayerDestination(this, param_1, param_2);
                            pSVar18 =
                                (ServerConnection*)std::unique_ptr<ServerConnection,
                                                                   std::default_delete<ServerConnection>>::
                                operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                            uVar19 = pSVar18->GetOutgoingEncryption();
                            local_108->MakeClientMessage(48, uVar19);
                            SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                            pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                            ShuffledPacket4::p2<int>(pSVar20, param_4);
                            pSVar20 = (ShuffledPacket4*)local_128->HeapBeginPtr();
                            bVar3 = (&field_8496, 107)->KeyHeld();
                            ShuffledPacket4::p1<int>(pSVar20, (uint)bVar3);
                            pSVar18 =
                                (ServerConnection*)std::unique_ptr<ServerConnection,
                                                                   std::default_delete<ServerConnection>>::
                                operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                            pSVar18->SendClientMessage(local_108);
                            ExecuteOnClickPlayerTrigger(this, param_4);
                            local_108->~ClientMessage();
                        }
                        local_88.~shared_ptr();
                        if (1001 < (int)uVar7)
                            goto LAB_10010951a;
                    LAB_10010952c:
                        if (uVar7 == 50)
                            goto switchD_100106fd7_caseD_31;
                        if (uVar7 == 51)
                            goto switchD_100106fd7_caseD_32;
                        break;
                    case 50:
                    switchD_100106fd7_caseD_31:
                        psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                        new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                        bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            SetPlayerDestination(this, param_1, param_2);
                            pSVar18 =
                                (ServerConnection*)std::unique_ptr<ServerConnection,
                                                                   std::default_delete<ServerConnection>>::
                                operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                            uVar19 = pSVar18->GetOutgoingEncryption();
                            local_108->MakeClientMessage(20, uVar19);
                            SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                            pSVar13 = (ShuffledPacket2*)local_128->p2_alt2();
                            ShuffledPacket2::p2<int>(pSVar13, param_4);
                            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128->HeapBeginPtr();
                            uVar4 = (&field_8496, 107)->KeyHeld();
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21,
                                                                                                           uVar4);
                            pSVar18 =
                                (ServerConnection*)std::unique_ptr<ServerConnection,
                                                                   std::default_delete<ServerConnection>>::
                                operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                            pSVar18->SendClientMessage(local_108);
                            ExecuteOnClickPlayerTrigger(this, param_4);
                            local_108->~ClientMessage();
                        }
                        local_88.~shared_ptr();
                        if ((int)uVar7 < 1003) {
                            if (uVar7 == 51)
                                goto switchD_100106fd7_caseD_32;
                        LAB_10010975e:
                            if (uVar7 != 1002)
                                break;
                            goto switchD_10010714f_caseD_3ea;
                        }
                        goto LAB_1001097ed;
                    case 51:
                    switchD_100106fd7_caseD_32:
                        psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                            (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                        new (&local_88) shared_ptr<dash3d::Decor>(psVar14);
                        bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            SetPlayerDestination(this, param_1, param_2);
                            pSVar18 =
                                (ServerConnection*)std::unique_ptr<ServerConnection,
                                                                   std::default_delete<ServerConnection>>::
                                operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                            uVar19 = pSVar18->GetOutgoingEncryption();
                            local_108->MakeClientMessage(61, uVar19);
                            SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128, (SuperPacket*)local_100);
                            pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_128->HeapBeginPtr();
                            uVar4 = (&field_8496, 107)->KeyHeld();
                            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21,
                                                                                                           uVar4);
                            pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                            ShuffledPacket4::p2<int>(pSVar20, param_4);
                            pSVar18 =
                                (ServerConnection*)std::unique_ptr<ServerConnection,
                                                                   std::default_delete<ServerConnection>>::
                                operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                            pSVar18->SendClientMessage(local_108);
                            ExecuteOnClickPlayerTrigger(this, param_4);
                            local_108->~ClientMessage();
                        }
                        local_88.~shared_ptr();
                    switchD_10010762e_caseD_17:
                        if (uVar7 == 1004)
                            goto switchD_10010714f_caseD_3ec;
                        if (uVar7 != 1003)
                            goto LAB_10010975e;
                        goto switchD_10010714f_caseD_3eb;
                    }
                } else {
                LAB_10010951a:
                    if (uVar7 == 1002) {
                    switchD_10010714f_caseD_3ea:
                        pSVar18 =
                            (ServerConnection*)
                                std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                        uVar19 = pSVar18->GetOutgoingEncryption();
                        local_108->MakeClientMessage(64, uVar19);
                        new (&local_88) SuperShuffledPacketFactory(local_100);
                        pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
                        ShuffledPacket3::p2<int>(pSVar22, param_4);
                        pCVar15 =
                            (Client*)
                                std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                        pCVar15->SendClientMessage(local_108);
                        ExecuteOnClickLocTrigger(pCVar15, param_4, param_6->field_40);
                        local_108->~ClientMessage();
                    }
                LAB_1001097ed:
                    if (uVar7 == 1003) {
                    switchD_10010714f_caseD_3eb:
                        psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                            (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
                        bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
                        if (bVar5) {
                            lVar17 = shared_ptr<ClientNpc>::operator->((shared_ptr<ClientNpc>*)psVar14);
                            new (&local_88) shared_ptr<dash3d::Decor>((shared_ptr*)(lVar17 + 1024));
                            lVar17 = shared_ptr<configdecoder::NpcType>::operator->(
                                (shared_ptr<configdecoder::NpcType>*)&local_88);
                            cVar6 = ((lVar17 + 488))->empty();
                            if (cVar6 == '\0') {
                                shared_ptr<configdecoder::NpcType>::operator->(
                                    (shared_ptr<configdecoder::NpcType>*)&local_88);
                                local_108->GetMultiNpc();
                                shared_ptr<configdecoder::NpcType>::operator=(
                                    (shared_ptr<configdecoder::NpcType>*)&local_88, (shared_ptr*)local_108);
                                local_108->~shared_ptr();
                            }
                            bVar5 = operator!=((shared_ptr*)&local_88, (_func_decltype_nullptr*)0);
                            if (bVar5) {
                                pSVar18 =
                                    (ServerConnection*)std::
                                        unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                            (unique_ptr<ServerConnection,
                                                        std::default_delete<ServerConnection>>*)&field_19120);
                                uVar19 = pSVar18->GetOutgoingEncryption();
                                local_108->MakeClientMessage(65, uVar19);
                                SuperShuffledPacketFactory::SuperShuffledPacketFactory(local_128,
                                                                                       (SuperPacket*)local_100);
                                pSVar20 = (ShuffledPacket4*)local_128->p2_alt2();
                                piVar16 = (int*)shared_ptr<configdecoder::NpcType>::operator->(
                                    (shared_ptr<configdecoder::NpcType>*)&local_88);
                                ShuffledPacket4::p2<int>(pSVar20, *piVar16);
                                pSVar18 =
                                    (ServerConnection*)std::
                                        unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                            (unique_ptr<ServerConnection,
                                                        std::default_delete<ServerConnection>>*)&field_19120);
                                pSVar18->SendClientMessage(local_108);
                                ExecuteOnClickNPCTrigger(this, param_4);
                                local_108->~ClientMessage();
                            }
                            local_88.~shared_ptr();
                        }
                    } else if (uVar7 == 1004) {
                    switchD_10010714f_caseD_3ec:
                        WorldCoordFromBuildCoord((Client*)local_108, (int)this, 0, param_1);
                        SendExamineObjV2(this, (CoordGrid*)local_108, param_4);
                        ExecuteOnClickObjTrigger(this, param_6);
                        if (uVar7 == 1003)
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
            this_00 = field_52424;
            bVar5 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
            if ((bVar5) && (bVar5 = operator!=(param_10, (_func_decltype_nullptr*)0), bVar5)) {
                PauseContinue(this, param_2, param_1);
                shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)this_00, param_10);
                ComponentUpdated(this, (shared_ptr*)this_00);
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
                if (uVar7 == 1001)
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
            switch (uVar7) {
            case 1001:
            switchD_10010714f_caseD_3e9:
                iVar25 = param_1;
                uVar9 = param_2;
                SetPlayerDestination(this, param_1, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(36, uVar19);
                new (&local_88) SuperShuffledPacketFactory(local_100);
                pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
                ShuffledPacket3::p2<int>(pSVar22, field_53224 + uVar9);
                pSVar13 = (ShuffledPacket2*)local_88.p2_alt2();
                ShuffledPacket2::p2<int>(pSVar13, field_53220 + iVar25);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.HeapBeginPtr();
                uVar4 = (&field_8496, 107)->KeyHeld();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(pPVar21, uVar4);
                pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
                ShuffledPacket4::p2<int>(pSVar20, param_4);
                pCVar15 = (Client*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pCVar15->SendClientMessage(local_108);
                ExecuteOnClickLocTrigger(pCVar15, param_4, param_6->field_40);
                local_108->~ClientMessage();
                if ((int)uVar7 < 1002) {
                    switch (uVar7) {
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
        if (uVar7 == 1007) {
        LAB_10010999a:
            IfButtonX(this, param_4, param_10, (basic_string*)param_6, param_6->field_52);
            if (4 < uVar7 - 1008) {
                switch (uVar7) {
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
                    if (uVar7 != 58)
                        goto switchD_100109bf9_default;
                    goto LAB_1001099e6;
                }
            }
            goto LAB_100109ba2;
        }
        if (uVar7 == 58) {
        LAB_1001099e6:
            bVar5 = operator!=(param_10, (_func_decltype_nullptr*)0);
            if (bVar5) {
                lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                cVar6 = ((lVar17 + 1336))->empty();
                if (cVar6 == '\0') {
                    new (local_108) HookReq();
                    shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_100 + 24), param_10);
                    local_d0 = param_4;
                    eastl::string::operator=(local_b0, (basic_string*)param_6);
                    lVar17 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_10);
                    Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_108,
                                                                (Array*)(lVar17 + 1336));
                    ScriptRunner::ExecuteScript((HookReq*)local_108, 500000);
                    local_108->~HookReq();
                }
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                uVar19 = pSVar18->GetOutgoingEncryption();
                local_108->MakeClientMessage(14, uVar19);
                new (&local_88) SuperShuffledPacketFactory(local_100);
                pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
                iVar25 = field_52344->GetTargetLinkObject();
                ShuffledPacket4::p2<int>(pSVar20, iVar25);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, param_1);
                pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
                iVar25 = field_52344->GetTargetSubinterfaceId();
                ShuffledPacket3::p2<int>(pSVar22, iVar25);
                pPVar21 = (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)local_88.p2_alt2();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(pPVar21, param_6->field_52);
                pSVar20 = (ShuffledPacket4*)local_88.p2_alt2();
                uVar9 = field_52344->GetTargetComponent();
                ShuffledPacket4::p4<unsigned int>(pSVar20, uVar9);
                pSVar22 = (ShuffledPacket3*)local_88.p2_alt2();
                ShuffledPacket3::p4<unsigned int>(pSVar22, param_2);
                pSVar18 = (ServerConnection*)
                              std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                                  (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)&field_19120);
                pSVar18->SendClientMessage(local_108);
                local_108->~ClientMessage();
            }
        } else if (uVar7 == 57)
            goto LAB_10010999a;
        switch (uVar7) {
        case 1850:
        switchD_1001099da_caseD_73a:
            psVar14 = (shared_ptr*)std::array<shared_ptr<ClientNpc>, 65536ul>::operator[](
                (array<shared_ptr<ClientNpc>, 65536ul>*)&field_55272, (long)param_4);
            bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
            if (bVar5) {
                ScriptRunner::SetActiveNPC(param_4);
                new (local_108) HookReq();
                local_108->set_max_size(1, 3);
                new (&local_88) HookArg(param_1);
                pHVar23 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                    (Array<HookArg, eastl::allocator>*)local_108, 0);
                HookArg::operator=(pHVar23, &local_88);
                local_88.~LanguageMessage();
                local_8c = 30;
                ScriptRunner::ExecuteScript((HookReq*)local_108, 500000);
                local_108->~HookReq();
            }
            switch (uVar7) {
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
            new (local_108) LocInfo(param_6->field_40);
            ScriptRunner::SetActiveLoc((LocInfo*)local_108);
            local_108->~pair();
            new (local_108) HookReq();
            local_108->set_max_size(1, 3);
            new (&local_88) HookArg(param_1);
            pHVar23 =
                (HookArg*)Array<HookArg, eastl::allocator>::operator[]((Array<HookArg, eastl::allocator>*)local_108, 0);
            HookArg::operator=(pHVar23, &local_88);
            local_88.~LanguageMessage();
            local_8c = 31;
            ScriptRunner::ExecuteScript((HookReq*)local_108, 500000);
            local_108->~HookReq();
            if (uVar7 == 1852)
                goto switchD_1001099da_caseD_73c;
            goto joined_r0x000100109f1d;
        case 1852:
        switchD_1001099da_caseD_73c:
            local_150 = (ulong)uVar7;
            iVar25 = dash3d::MousePickingHelper::GetEntityLevelFromTypecode(param_6->field_40);
            iVar8 = dash3d::MousePickingHelper::GetEntityXFromTypecode(param_6->field_40);
            iVar10 = dash3d::MousePickingHelper::GetEntityZFromTypecode(param_6->field_40);
            rs2lib::CoordGrid::CoordGrid(local_148, iVar25, iVar8, iVar10);
            iVar25 = dash3d::MousePickingHelper::GetEntityIdFromTypecode(param_6->field_40);
            FindClientObj((Client*)local_128, (CoordGrid*)this, (int)local_148, iVar25);
            weak_ptr<dash3d::Decor>::weak_ptr(local_160, (weak_ptr*)local_128);
            ScriptRunner::SetActiveObj(local_148, local_160);
            local_160->~weak_ptr();
            new (local_108) HookReq();
            uVar2 = local_150;
            local_108->set_max_size(1, 3);
            new (&local_88) HookArg(param_1);
            pHVar23 =
                (HookArg*)Array<HookArg, eastl::allocator>::operator[]((Array<HookArg, eastl::allocator>*)local_108, 0);
            HookArg::operator=(pHVar23, &local_88);
            local_88.~LanguageMessage();
            local_8c = 32;
            ScriptRunner::ExecuteScript((HookReq*)local_108, 500000);
            local_108->~HookReq();
            local_128->~shared_ptr();
            uVar7 = (uint)uVar2;
        joined_r0x000100109f1d:
            if (uVar7 == 1853) {
            switchD_1001099da_caseD_73d:
                psVar14 = (shared_ptr*)std::array<shared_ptr<ClientPlayer>, 2048ul>::operator[](
                    (array<shared_ptr<ClientPlayer>, 2048ul>*)&field_19216, (long)param_4);
                new (local_128) shared_ptr<dash3d::Decor>(psVar14);
                bVar5 = operator!=((shared_ptr*)local_128, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    ScriptRunner::SetActivePlayer(param_4);
                    new (local_108) HookReq();
                    local_108->set_max_size(1, 3);
                    new (&local_88) HookArg(param_1);
                    pHVar23 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                        (Array<HookArg, eastl::allocator>*)local_108, 0);
                    HookArg::operator=(pHVar23, &local_88);
                    local_88.~LanguageMessage();
                    local_8c = 33;
                    ScriptRunner::ExecuteScript((HookReq*)local_108, 500000);
                    local_108->~HookReq();
                }
                local_128->~shared_ptr();
            }
            if (uVar7 != 1854)
                goto switchD_100109bf9_default;
        switchD_1001099da_caseD_73e:
            SetDeferredGroundOp(this, 1854, param_4, param_1, param_2);
        switchD_100109bf9_default:
            if (field_52352 != 0) {
                field_52352 = 0;
                ComponentUpdated(this, param_10);
            }
            cVar6 = field_52344->GetTargetMode();
            if (cVar6 != '\0') {
                field_52344->EndTargetMode();
            }
            return;
        case 1853:
            goto switchD_1001099da_caseD_73d;
        case 1854:
            goto switchD_1001099da_caseD_73e;
        default:
            if (4 < uVar7 - 1008)
                goto switchD_100109bf9_default;
        LAB_100109ba2:
            new (local_108) rs2lib::CoordGrid(param_1);
            new (&local_88) rs2lib::CoordGrid(param_2);
            (m_pWorldmap, uVar7, param_4, (CoordGrid*)local_108, (CoordGrid*)&local_88)->OpMapElement();
            switch (uVar7) {
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

    // 0x10010bfe0, 448 bytes, placed by __FILE__ string
    // Client::ClientButton(int)
    ulong Client::ClientButton(int param_1) {
        undefined8 uVar1;
        PlayerModel* pPVar2;
        ServerConnection* pSVar3;
        undefined1* unaff_RBX;
        ulong uVar4;
        undefined1 local_68[64];

        if (param_1 == 205) {
            if (field_54760 != '\0') {
                uVar1 = logger::default_logger();
                logger::Logger::Log(
                    uVar1, 0, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/client_UI.cpp",
                    5567, "Disconnects for the next 5 secs will be assumed to be deliberate");
            }
            field_54156 = 250;
        } else {
            if (param_1 - 300U < 14) {
                pPVar2 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
                    (shared_ptr<rs2lib::PlayerModel>*)&field_2508968);
                pPVar2->IdkChangePart((int)(param_1 - 300U) / 2, (bool)((byte)param_1 & 1));
            }
            if (param_1 - 314U < 10) {
                pPVar2 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
                    (shared_ptr<rs2lib::PlayerModel>*)&field_2508968);
                pPVar2->IdkChangeColour((int)(param_1 - 314U) / 2, (bool)((byte)param_1 & 1));
            }
            if (param_1 != 326) {
                if (param_1 == 325) {
                    pPVar2 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
                        (shared_ptr<rs2lib::PlayerModel>*)&field_2508968);
                    pPVar2->IdkChangeBodytype(1);
                } else if (param_1 == 324) {
                    pPVar2 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
                        (shared_ptr<rs2lib::PlayerModel>*)&field_2508968);
                    uVar4 = 0;
                    pPVar2->IdkChangeBodytype(0);
                    goto LAB_10010c177;
                }
                uVar4 = 0;
                goto LAB_10010c177;
            }
            unaff_RBX = &field_19120;
            pSVar3 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)unaff_RBX);
            uVar1 = pSVar3->GetOutgoingEncryption();
            local_68->MakeClientMessage(60, uVar1);
            pPVar2 = (PlayerModel*)shared_ptr<rs2lib::PlayerModel>::operator->(
                (shared_ptr<rs2lib::PlayerModel>*)&field_2508968);
            pPVar2->IdkSaveDesign((PacketJ*)(local_68 + 8));
            pSVar3 =
                (ServerConnection*)std::unique_ptr<ServerConnection, std::default_delete<ServerConnection>>::operator->(
                    (unique_ptr<ServerConnection, std::default_delete<ServerConnection>>*)unaff_RBX);
            pSVar3->SendClientMessage(local_68);
            local_68->~ClientMessage();
        }
        uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
    LAB_10010c177:
        return uVar4 & 4294967295;
    }

} // namespace jag::oldscape
