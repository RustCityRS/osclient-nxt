// libs/oldscape/jagex3/js5/Js5NetThread.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Js5NetThread.h"

namespace jag::oldscape::jagex3 {
    // 0x1002bb5e0, 432 bytes, base-object constructor, placed by class name and debug map
    // Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&)
    void Js5NetThread::Js5NetThread(LockFreeStack* param_1, Js5LocalCache* param_2) {
        hash local_40[8];
        Js5NetThread* local_38;

        field_0 = param_1;
        new (&field_8) Array<eastl::string, eastl::allocator>();
        field_32 = param_2;
        new (&field_40, 524288) BufferedSocket();
        (field_248, 20)->PacketT();
        new (&field_280) std::thread();
        new (field_296, false) ThreadSignal();
        new (&field_416) LockFreeStack<Js5RemoteRequestData>();
        new (&field_424, local_40, (equal_to*)&local_38)
            eastl::fixed_hash_map<Js5RequestKey, Js5RemoteRequestData*, 200ul, 600ul, true, eastl::hash<Js5RequestKey>,
                                  eastl::equal_to<Js5RequestKey>, false, eastl::allocator>();
        new (field_10168) Js5RemoteRequestData();
        new (field_10248) Js5RemoteRequestData();
        *(undefined1*)&this[1].field_0 = 0;
        *(undefined1*)((long)&this[1].field_0 + 1) = 0;
        *(undefined1*)((long)&this[1].field_0 + 2) = 0;
        *(undefined4*)(field_10168 + 32) = 3;
        new ((field_10168 + 28), 0) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>();
        *(undefined4*)(field_10248 + 32) = 3;
        new ((field_10248 + 28), 0) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>();
        local_38 = this;
        std::thread::thread<Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&)::__2, ,
                            void>((thread*)local_40, (__2*)&local_38);
        std::thread::operator=((thread*)&field_280, (thread*)local_40);
        local_40->~thread();
    }

    // 0x1002bb800, 16 bytes, complete-object constructor, placed by class name
    // Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&): jumps straight to the base-object constructor

    // 0x1002bb810, 400 bytes, placed by class name
    // Js5NetThread::Initialize(Js5RemoteServerInfo const*, bool)
    bool Js5NetThread::Initialize(Js5RemoteServerInfo* param_1, bool param_2) {
        Js5RemoteServerInfo* pJVar1;
        byte bVar2;
        eastl::string* this_00;
        long lVar4;
        char* pcVar5;
        Js5RemoteServerInfo* pJVar6;
        ulong uVar7;
        uint uVar8;
        ulong uVar9;

        if (param_1->field_0 == (char*)0) {
            uVar8 = 0;
        } else {
            uVar8 = 0;
            uVar7 = 1;
            pJVar6 = param_1;
            do {
                bVar2 = pJVar6->IsOldscape();
                uVar8 = uVar8 + bVar2;
                pJVar6 = param_1 + uVar7;
                pJVar1 = param_1 + uVar7;
                uVar7 = (ulong)((int)uVar7 + 1);
            } while (pJVar1->field_0 != (char*)0);
            if (uVar8 != 0) {
                (&field_8, (ulong)uVar8, 3)->set_max_size();
                pcVar5 = param_1->field_0;
                if (pcVar5 != (char*)0) {
                    uVar9 = 0;
                    uVar7 = 1;
                    pJVar6 = param_1;
                    do {
                        if (pJVar6->IsOldscape() != '\0') {
                            lVar4 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(pcVar5);
                            if ((lVar4 != 0) && (*(char*)(lVar4 + 1) == '/')) {
                                pcVar5 = (char*)(lVar4 + 3);
                            }
                            this_00 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&field_8, uVar9);
                            eastl::string::assign(this_00, pcVar5);
                            uVar9 = (ulong)((int)uVar9 + 1);
                        }
                        pJVar6 = param_1 + uVar7;
                        pcVar5 = param_1[uVar7].field_0;
                        uVar7 = (ulong)((int)uVar7 + 1);
                    } while (pcVar5 != (char*)0);
                }
                (&field_40)->Initialize();
                if (*(char*)&this[1].field_0 != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_isConnected == false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5NetThread.cpp",
                              68, (char*)0);
                }
                if (*(char*)((long)&this[1].field_0 + 1) != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_wantConnection == false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5NetThread.cpp",
                              69, (char*)0);
                }
                field_288 = 0;
                if (param_2) {
                    SetWantConnection(this, true);
                }
            }
        }
        return uVar8 != 0;
    }

    // 0x1002bb9a0, 80 bytes, placed by neighbouring functions
    // Js5RemoteServerInfo::IsOldscape() const
    undefined8 Js5RemoteServerInfo::IsOldscape() {
        char* pcVar1;
        int iVar2;
        long lVar3;

        pcVar1 = field_0;
        if (pcVar1 != (char*)0) {
            lVar3 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(pcVar1);
            if ((lVar3 == 0) || (*(char*)(lVar3 + 1) != '/')) {
                return 1;
            }
            if ((lVar3 - (long)pcVar1 == 8) && (iVar2 = _strncmp(pcVar1, "oldscape", 8), iVar2 == 0)) {
                return 1;
            }
        }
        return 0;
    }

    // 0x1002bba00, 48 bytes, placed by class name
    // Js5NetThread::SetWantConnection(bool)
    void Js5NetThread::SetWantConnection(bool param_1) {
        if ((bool)*(char*)((long)&this[1].field_0 + 1) != param_1) {
            *(bool*)((long)&this[1].field_0 + 1) = param_1;
            field_296->RaiseSignal();
        }
    }

    // 0x1002bba30, 64 bytes, placed by class name
    // Js5NetThread::SendRequest(Js5RemoteRequestData*)
    void Js5NetThread::SendRequest(Js5RemoteRequestData* param_1) {
        ushort uVar1;
        uchar local_c;
        undefined1 local_b;
        ushort local_a;

        local_c = *(int*)&param_1->field_16 == 1;
        local_b = *(undefined1*)&param_1->field_8;
        uVar1 = *(ushort*)((long)&param_1->field_8 + 4);
        local_a = uVar1 << 8 | uVar1 >> 8;
        (&field_40, &local_c, 4, (Error*)0)->Write();
    }

    // 0x1002bba70, 128 bytes, placed by class name
    // Js5NetThread::RequestGroup(Js5RemoteRequestData*)
    void Js5NetThread::RequestGroup(Js5RemoteRequestData* param_1) {
        char cVar1;
        int iVar2;

        *(undefined4*)(param_1->field_28 + 4) = 1;
        cVar1 = (&field_40)->IsOpen();
        if ((cVar1 == '\0') || (cVar1 = SendRequest(this, param_1), cVar1 == '\0')) {
            new (param_1->field_28, 4294967295) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>();
            (field_0, param_1)->PushHead();
            return;
        }
        iVar2 = (&field_416, param_1)->PushHead();
        if (iVar2 == 0) {
            field_296->RaiseSignal();
            return;
        }
    }

    // 0x1002bbaf0, 80 bytes, placed by class name
    // Js5NetThread::EndAndJoin()
    void Js5NetThread::EndAndJoin() {
        *(undefined1*)((long)&this[1].field_0 + 2) = 1;
        if ((&field_40)->IsOpen() != '\0') {
            (&field_40)->Close();
        }
        field_296->RaiseSignal();
        std::thread::join();
    }

    // 0x1002bbb40, 288 bytes, placed by class name
    // Js5NetThread::Run_AdoptRequestFromMain(Js5ArchiveId, Js5GroupId)
    undefined8 Js5NetThread::Run_AdoptRequestFromMain(undefined4 param_2, undefined4 param_3) {
        undefined8 uVar1;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        Js5RequestKey local_80[2];
        undefined8 local_68;
        undefined8 local_60;
        Layout* local_58[2];
        Js5NetThread* local_48;
        ThreadSignal* local_40;
        undefined4 local_38;
        undefined4 local_34;

        local_40 = (ThreadSignal*)field_296;
        local_48 = this;
        local_38 = param_2;
        local_34 = param_3;
        while (true) {
            for (local_58[0] = (Layout*)(&field_416)->TakeStack(); local_58[0] != (Layout*)0;
                 local_58[0] = (Layout*)eastl::basic_string<
                     char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                         eastl::allocator>>::Layout::HeapBeginPtr(local_58[0])) {
                eastl::hashtable<Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>,
                                 eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>>,
                                 eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::emplace<Js5RequestKey&, Js5RemoteRequestData*&>(local_80, &field_424);
            }
            eastl::hashtable<Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>,
                             eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true, eastl::allocator>,
                             eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>>,
                             eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_80);
            eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            if (eastl::operator!=((eastl*)local_80, (hashtable_iterator_base*)local_58, extraout_RDX))
                break;
            local_40->WaitForAndLowerSignal();
            if (*(char*)((long)&local_48[1].field_0 + 2) != '\0') {
                return 0;
            }
        }
        lVar3 = local_80->HeapBeginPtr();
        uVar1 = *(undefined8*)(lVar3 + 8);
        new (&local_68)
            eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_80);
        eastl::hashtable<int, eastl::pair<int const, jag::graphics::TextureAtlasTextureMapping>,
                         eastl::fixed_hashtable_allocator<1026ul, 24ul, 1024ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, jag::graphics::TextureAtlasTextureMapping>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::erase((hashtable_iterator_base*)local_58,
                                                                               &field_424, local_68, local_60);
        return uVar1;
    }

    // 0x1002bbdc0, 1040 bytes, placed by class name
    // Js5NetThread::Run_ReceivePacket(int)
    uint Js5NetThread::Run_ReceivePacket(int param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        undefined1 uVar3;
        byte bVar4;
        Error EVar5;
        int iVar6;
        uchar* puVar8;
        long lVar9;
        ulong uVar10;
        PacketJ<Array<unsigned char, eastl::allocator>>* this_02;
        uint uVar11;
        uint uVar12;
        Js5RequestKey local_c0[2];
        Js5RemoteRequestData** local_a8;
        undefined1 local_a0[24];
        undefined1 local_88[40];
        BufferedSocket* local_58;
        int local_4c;
        Js5RemoteRequestData* local_48;
        uchar local_39;
        Error local_38[2];

        new (local_88) PacketJ<Array<unsigned char, eastl::allocator>>();
        new (local_38) callstack::Callstack();
        local_4c = param_1;
        if (10 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                            "Js5NetThread.cpp",
                            207, "Js5 packets preempted too many times, giving up");
        }
        this_00 = field_248;
        this_00->SetPos(0);
        puVar8 = (uchar*)this_00->GetDataPtr();
        local_58 = (BufferedSocket*)&field_40;
        cVar2 = local_58->Read(puVar8, 8, 0);
        if (cVar2 == '\0') {
            new (local_38) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(54);
        } else {
            uVar3 = this_00->g1();
            EVar5.m_code = this_00->g2();
            bVar4 = this_00->g1();
            iVar6 = this_00->g4();
            local_48 = (Js5RemoteRequestData*)Run_AdoptRequestFromMain(this, uVar3, EVar5.m_code & 65535);
            new (local_a0) RAII_RequestFailureHandler(field_0, local_48, -1);
            if (local_48 == (Js5RemoteRequestData*)0) {
                new (local_38) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(53);
                local_a0->SetCompletedCount(-2);
                EVar5.m_code = local_38[0].m_code;
            } else {
                uVar12 = iVar6 + (uint)(bVar4 != 0) * 4;
                *(uint*)((long)&local_48->field_56 + 4) = uVar12 + 5;
                *(undefined4*)&local_48->field_56 = 5;
                local_88->Reserve((ulong)(uVar12 + 5));
                local_88->SetPos(0);
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_88, (ulong)bVar4);
                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_88, iVar6);
                lVar9 = local_88->GetDataPtr();
                local_88._32_8_ = lVar9 + 5;
                local_a8 = &field_424;
                local_4c = local_4c + 1;
                iVar6 = 8;
                do {
                    uVar11 = 512U - iVar6;
                    if (uVar12 <= 512U - iVar6) {
                        uVar11 = uVar12;
                    }
                    cVar2 = local_58->Read(local_88._32_8_, uVar11, local_38);
                    if (cVar2 == '\0') {
                    LAB_1002bbf50:
                        bVar1 = true;
                        EVar5.m_code = local_38[0].m_code;
                    } else {
                        uVar12 = uVar12 - uVar11;
                        if (uVar12 == 0) {
                            if ((*(int*)((long)&local_48->field_16 + 4) != 0) || (*(int*)&local_48->field_24 != 0)) {
                                puVar8 = (uchar*)local_88->GetDataPtr();
                                uVar10 = local_88->GetTextureAtlas();
                                if (CRC32(puVar8, uVar10, 4294967295) != *(int*)((long)&local_48->field_16 + 4)) {
                                    local_a0->SetCompletedCount(-3);
                                    uVar12 = 0;
                                    bVar1 = true;
                                    EVar5.m_code = local_38[0].m_code;
                                    goto LAB_1002bbf59;
                                }
                            }
                            new (local_48->field_28)
                                std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>();
                            local_88->SetPos(0);
                            this_02 = (PacketJ<Array<unsigned char, eastl::allocator>>*)
                                shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(local_48->field_28 +
                                                                                                   12));
                            PacketJ<Array<unsigned char, eastl::allocator>>::operator=(this_02, (PacketJ*)local_88);
                            local_a0->Clear();
                            (((Js5NetThread*)this)->field_32, local_48)->ProvideDataFromNetThread();
                            cVar2 = local_38->IsValid();
                            if (cVar2 != '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssert("!ret.IsError()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/jagex3/js5/Js5NetThread.cpp",
                                          320, (char*)0);
                            }
                            uVar12 = 0;
                            goto LAB_1002bbf50;
                        }
                        *(uint*)&local_48->field_56 = *(int*)&local_48->field_56 + uVar11;
                        cVar2 = local_58->PeekByte(&local_39, local_38);
                        iVar6 = local_4c;
                        if (cVar2 == '\0') {
                            bVar1 = true;
                            EVar5.m_code = local_38[0].m_code;
                        } else if (local_39 == 255) {
                            bVar1 = false;
                            local_58->Read(&local_39, 1, 0);
                        } else {
                            local_a0->Clear();
                            eastl::hashtable<
                                Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>,
                                eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true, eastl::allocator>,
                                eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>>,
                                eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>::emplace<Js5RequestKey&, Js5RemoteRequestData*&>(local_c0, local_a8);
                            EVar5.m_code = Run_ReceivePacket((Js5NetThread*)this, iVar6);
                            bVar1 = true;
                        }
                        local_88._32_8_ = local_88._32_8_ + (ulong)uVar11;
                        iVar6 = 1;
                    }
                LAB_1002bbf59:
                } while (!bVar1);
            }
            local_a0->~RAII_RequestFailureHandler();
            local_38[0].m_code = EVar5.m_code;
        }
        local_88->~WindowSavedPosition();
        return local_38[0].m_code;
    }

    // 0x1002bc200, 576 bytes, placed by class name
    // Js5NetThread::Run_MakeConnection()
    ulong Js5NetThread::Run_MakeConnection() {
        undefined1* this_00;
        undefined1* this_01;
        char cVar1;
        undefined4 uVar2;
        ulong uVar3;
        char* pcVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        ulong uVar7;
        uchar local_40[8];
        undefined1 local_38[7];
        uchar local_31;

        if (*(char*)((long)&this[1].field_0 + 1) == '\0') {
            field_296->WaitForAndLowerSignal();
        } else {
            this_00 = &field_40;
            this_00->Close();
            uVar7 = (ulong)field_288;
            this_01 = &field_8;
            do {
                new (local_38) callstack::Callstack();
                Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)this_01,
                                                                   uVar7 & 4294967295);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                cVar1 = this_00->Connect(pcVar4, local_38);
                uVar5 = logger::default_logger();
                Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)this_01,
                                                                   uVar7 & 4294967295);
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                if (cVar1 == '\0') {
                    uVar2 = local_38->GetX();
                    logger::Logger::Log(uVar5, 0, 7,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/js5/Js5NetThread.cpp",
                                        350, "Connection to %s failed with %d!", uVar6, uVar2);
                    uVar3 = this_01->end();
                    uVar7 = (ulong)((int)uVar7 + 1) % uVar3;
                    cVar1 = field_288 == (uint)uVar7;
                } else {
                    logger::Logger::Log(uVar5, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/js5/Js5NetThread.cpp",
                                        344, "JS5 Connected to %s", uVar6);
                    cVar1 = '\x02';
                }
            } while (cVar1 == '\0');
            if (cVar1 == '\x02') {
                field_288 = (uint)uVar7;
                local_40[4] = 216;
                local_40[0] = '\x0f';
                local_40[1] = '\0';
                local_40[2] = '\0';
                local_40[3] = '\0';
                local_31 = '\0';
                cVar1 = this_00->Write(local_40, 5, 0);
                if (cVar1 != '\0') {
                    cVar1 = this_00->Read(&local_31, 1, 0);
                    if ((cVar1 != '\0') && (local_31 == '\0')) {
                        (field_0, (Js5RemoteRequestData*)field_10168)->PushHead();
                        uVar7 = CONCAT71((int7)((ulong)local_38 >> 8), 1);
                        goto LAB_1002bc426;
                    }
                }
                uVar5 = logger::default_logger();
                Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)this_01,
                                                                   uVar7 & 4294967295);
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar7 = 0;
                logger::Logger::Log(uVar5, 0, 7,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/js5/Js5NetThread.cpp",
                                    369, "Connection to %s failed handshake! (server ver %u)", uVar6, local_31);
                goto LAB_1002bc426;
            }
        }
        uVar7 = 0;
    LAB_1002bc426:
        return uVar7 & 4294967295;
    }

    // 0x1002bc440, 656 bytes, placed by class name
    // Js5NetThread::Run()
    void Js5NetThread::Run() {
        Js5RemoteRequestData** this_00;
        Js5RemoteRequestData* pJVar1;
        bool bVar2;
        char cVar3;
        bool bVar4;
        long lVar5;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        WaterNormalParamsTarget local_60;
        LockFreeStack<Js5RemoteRequestData>* local_48;
        Layout* local_40[2];

        this_thread::SetThreadName("Js5NetThread");
        local_48 = (LockFreeStack<Js5RemoteRequestData>*)&field_416;
        this_00 = &field_424;
        if (*(char*)((long)&this[1].field_0 + 2) == '\0') {
            do {
                if (*(char*)&this[1].field_0 == '\0') {
                    cVar3 = Run_MakeConnection(this);
                    *(char*)&this[1].field_0 = cVar3;
                    if (cVar3 != '\0') {
                        for (local_40[0] = (Layout*)local_48->TakeStack(); local_40[0] != (Layout*)0;
                             local_40[0] = (Layout*)eastl::basic_string<
                                 char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                 Layout::HeapBeginPtr(local_40[0])) {
                            eastl::hashtable<
                                Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>,
                                eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true, eastl::allocator>,
                                eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>>,
                                eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>::emplace<Js5RequestKey&, Js5RemoteRequestData*&>((Js5RequestKey*)&local_60,
                                                                                       this_00);
                        }
                        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>,
                                         eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::begin();
                        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::end();
                        bVar4 =
                            eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)local_40, extraout_RDX_01);
                        bVar2 = false;
                        if (bVar4) {
                            do {
                                lVar5 = local_60.HeapBeginPtr();
                                cVar3 = SendRequest(this, *(Js5RemoteRequestData**)(lVar5 + 8));
                                bVar2 = true;
                                if (cVar3 == '\0')
                                    break;
                                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::
                                operator++((hashtable_iterator<eastl::pair<long long const, unsigned int>, true,
                                                               false>*)&local_60);
                                bVar4 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)local_40,
                                                          extraout_RDX_02);
                                bVar2 = false;
                            } while (bVar4);
                        }
                        if (bVar2) {
                            *(undefined1*)&this[1].field_0 = 0;
                            *(undefined1*)((long)&this[1].field_0 + 1) = 0;
                            graphics::XPlotBlender<graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
                                (XPlotBlender<graphics::XPlot_NormalAlpha>*)&local_60, -1);
                            goto LAB_1002bc580;
                        }
                    }
                } else {
                    if (*(char*)((long)&this[1].field_0 + 1) == '\0') {
                        (&field_40)->Close();
                    }
                    local_60.field_0 = Run_ReceivePacket(this, 1);
                    cVar3 = local_60.IsValid();
                    if (cVar3 != '\0') {
                        *(undefined1*)&this[1].field_0 = 0;
                        *(undefined1*)((long)&this[1].field_0 + 1) = 0;
                    LAB_1002bc580:
                        *(int*)(field_10248 + 28) = local_60.field_0;
                        (field_0, (Js5RemoteRequestData*)field_10248)->PushHead();
                    }
                }
            } while (*(char*)((long)&this[1].field_0 + 2) == '\0');
        }
        local_40[0] = (Layout*)local_48->TakeStack();
        if (local_40[0] != (Layout*)0) {
            do {
                eastl::hashtable<Js5RequestKey, eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>,
                                 eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<Js5RequestKey_const, Js5RemoteRequestData*>>,
                                 eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::emplace<Js5RequestKey&, Js5RemoteRequestData*&>((Js5RequestKey*)&local_60,
                                                                                        this_00);
                local_40[0] = (Layout*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(local_40[0]);
            } while (local_40[0] != (Layout*)0);
        }
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar2 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)local_40, extraout_RDX);
        if (bVar2) {
            do {
                lVar5 = local_60.HeapBeginPtr();
                pJVar1 = *(Js5RemoteRequestData**)(lVar5 + 8);
                new (pJVar1->field_28, 4294967294)
                    std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>();
                (field_0, pJVar1)->PushHead();
                eastl::hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>*)&local_60);
                bVar2 = eastl::operator!=((eastl*)&local_60, (hashtable_iterator_base*)local_40, extraout_RDX_00);
            } while (bVar2);
        }
        this_00->clear();
    }

} // namespace jag::oldscape::jagex3

// 0x1002bb9f0, 16 bytes, placed by neighbouring functions
// _ZL6strchrUa9enable_ifIXLb1EEEPKci
void __ZL6strchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}
