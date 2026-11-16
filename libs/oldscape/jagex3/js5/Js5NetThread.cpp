// libs/oldscape/jagex3/js5/Js5NetThread.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Js5NetThread.h"

namespace jag::oldscape::jagex3 {
    // 0x1002bb5e0
    Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>& lockFreeStack, Js5LocalCache& js5LocalCache)
        : field_0(lockFreeStack) {
        hash<Js5RequestKey> local_40;
        Js5NetThread* local_38;

        new (&field_8) Array<eastl::string>();
        field_32 = js5LocalCache;
        new (&field_40) BufferedSocket(524288);
        field_248->PacketT(20);
        new (&field_280) std::thread();
        new (field_296) ThreadSignal(false);
        new (&field_416) LockFreeStack<Js5RemoteRequestData>();
        new (&field_424)
            eastl::fixed_hash_map<Js5RequestKey, Js5RemoteRequestData*, 200ul, 600ul, true, eastl::hash<Js5RequestKey>,
                                  eastl::equal_to<Js5RequestKey>, false>(local_40, local_38);
        new (field_10168) Js5RemoteRequestData();
        new (field_10248) Js5RemoteRequestData();
        *(uint8_t*)&this[1].field_0 = 0;
        *(uint8_t*)((long)&this[1].field_0 + 1) = 0;
        *(uint8_t*)((long)&this[1].field_0 + 2) = 0;
        *(uint32_t*)(field_10168 + 32) = 3;
        new ((field_10168 + 28)) std::__cxx_atomic_base_impl(0);
        *(uint32_t*)(field_10248 + 32) = 3;
        new ((field_10248 + 28)) std::__cxx_atomic_base_impl(0);
        local_38 = this;
        std::thread::thread<Js5NetThread::Js5NetThread(LockFreeStack<Js5RemoteRequestData>&, Js5LocalCache&)::__2, ,
                            void>(&local_40, (__2*)&local_38);
        field_280 = local_40;
        std::thread::~thread(&local_40);
    }

    // 0x1002bb810
    bool Js5NetThread::Initialize(const Js5RemoteServerInfo* js5RemoteServerInfo, bool arg2) {
        Js5RemoteServerInfo* pJVar1;
        uint8_t bVar2;
        eastl::string* this_00;
        long lVar4;
        char* str;
        Js5RemoteServerInfo* pJVar5;
        unsigned long uVar6;
        unsigned int uVar7;
        unsigned long arg1;

        if (js5RemoteServerInfo->field_0 == nullptr) {
            uVar7 = 0;
        } else {
            uVar7 = 0;
            uVar6 = 1;
            pJVar5 = js5RemoteServerInfo;
            do {
                bVar2 = pJVar5->IsOldscape();
                uVar7 = uVar7 + bVar2;
                pJVar5 = js5RemoteServerInfo + uVar6;
                pJVar1 = js5RemoteServerInfo + uVar6;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            } while (pJVar1->field_0 != nullptr);
            if (uVar7 != 0) {
                field_8.set_max_size((unsigned long)uVar7, 3);
                str = js5RemoteServerInfo->field_0;
                if (str != nullptr) {
                    arg1 = 0;
                    uVar6 = 1;
                    pJVar5 = js5RemoteServerInfo;
                    do {
                        if (pJVar5->IsOldscape() != '\0') {
                            lVar4 = __ZL6strchrUa9enable_ifIXLb1EEEPKci(str);
                            if ((lVar4 != 0) && (*(char*)(lVar4 + 1) == '/')) {
                                str = (char*)(lVar4 + 3);
                            }
                            this_00 = &field_8[arg1];
                            eastl::string::assign(this_00, str);
                            arg1 = (unsigned long)((int)arg1 + 1);
                        }
                        pJVar5 = js5RemoteServerInfo + uVar6;
                        str = js5RemoteServerInfo[uVar6].field_0;
                        uVar6 = (unsigned long)((int)uVar6 + 1);
                    } while (str != nullptr);
                }
                field_40.Initialize();
                if (*(char*)&this[1].field_0 != '\0') {
                    LogAssert("m_isConnected == false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5NetThread.cpp",
                              68, nullptr);
                }
                if (*(char*)((long)&this[1].field_0 + 1) != '\0') {
                    LogAssert("m_wantConnection == false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5NetThread.cpp",
                              69, nullptr);
                }
                field_288 = 0;
                if (arg2) {
                    SetWantConnection(true);
                }
            }
        }
        return uVar7 != 0;
    }

    // 0x1002bb9a0
    bool Js5RemoteServerInfo::IsOldscape() const {
        int iVar2;
        long lVar3;

        char* pcVar1 = field_0;
        if (pcVar1 != nullptr) {
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

    // 0x1002bba00
    void Js5NetThread::SetWantConnection(bool arg1) {
        if (*(char*)((long)&this[1].field_0 + 1) != arg1) {
            *(bool*)((long)&this[1].field_0 + 1) = arg1;
            field_296->RaiseSignal();
        }
    }

    // 0x1002bba30
    void Js5NetThread::SendRequest(Js5RemoteRequestData* js5RemoteRequestData) {
        unsigned char local_c = *(int*)&js5RemoteRequestData->field_16 == 1;
        uint8_t local_b = *(uint8_t*)&js5RemoteRequestData->field_8;
        unsigned short uVar1 = *(unsigned short*)((long)&js5RemoteRequestData->field_8 + 4);
        unsigned short local_a = uVar1 << 8 | uVar1 >> 8;
        field_40.Write(&local_c, 4, nullptr);
    }

    // 0x1002bba70
    void Js5NetThread::RequestGroup(Js5RemoteRequestData* js5RemoteRequestData) {
        *(uint32_t*)(js5RemoteRequestData->field_28 + 4) = 1;
        bool cVar1 = field_40.IsOpen();
        if ((!cVar1) || (cVar1 = SendRequest(js5RemoteRequestData), !cVar1)) {
            new (js5RemoteRequestData->field_28) std::__cxx_atomic_base_impl(-1);
            field_0->PushHead(js5RemoteRequestData);
            return;
        }
        if (field_416.PushHead(js5RemoteRequestData) == 0) {
            field_296->RaiseSignal();
            return;
        }
    }

    // 0x1002bbaf0
    void Js5NetThread::EndAndJoin() {
        *(uint8_t*)((long)&this[1].field_0 + 2) = 1;
        if (field_40.IsOpen() != '\0') {
            field_40.Close();
        }
        field_296->RaiseSignal();
        std::thread::join();
    }

    // 0x1002bbb40
    uint64_t Js5NetThread::Run_AdoptRequestFromMain(Js5ArchiveId js5ArchiveId, Js5GroupId js5GroupId) {
        ReturnValue local_80;
        hashtable_iterator<eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>, true, false>* local_68[2];

        uint8_t* this_00 = &field_424;
        ThreadSignal* local_40 = (ThreadSignal*)field_296;
        Js5NetThread* local_48 = this;
        Js5GroupId local_34 = js5GroupId;
        while (true) {
            for (local_58[0] = (ReturnValue)field_416.TakeStack(); local_58[0] != (ReturnValue)0;
                 local_58[0] = (ReturnValue)local_58[0]->HeapBeginPtr()) {
                local_80 = this_00->emplace<Js5RequestKey&, Js5RemoteRequestData*&>(
                    *((Js5RequestKey*)((long)local_58[0] + 8)), local_58);
            }
            local_80 = this_00->find(js5ArchiveId);
            local_58 = this_00->end();
            if (local_80 != local_58 != '\0')
                break;
            local_40->WaitForAndLowerSignal();
            if (*(char*)((long)&local_48[1].field_0 + 2) != '\0') {
                return 0;
            }
        }
        long lVar3 = local_80.HeapBeginPtr();
        uint64_t uVar1 = *(uint64_t*)(lVar3 + 8);
        new (local_68) eastl::hashtable_iterator(&local_80);
        auto local_58 = this_00->erase(local_68[0]);
        return uVar1;
    }

    // 0x1002bbdc0
    Js5GroupId Js5NetThread::Run_ReceivePacket(int arg1) {
        bool bVar1;
        uint8_t bVar3;
        Js5ArchiveId JVar4;
        Error EVar5;
        unsigned int uVar6;
        unsigned long arg2;
        PacketJ<Array<unsigned char>>* this_02;
        int iVar10;
        unsigned int uVar11;
        ReturnValue local_c0;
        hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>,
                  eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true>,
                  eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>>,
                  eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_a8;
        uint8_t local_a0[24];
        uint8_t local_88[40];
        Js5RemoteRequestData* local_48;
        unsigned char local_39;

        new (local_88) PacketJ();
        Error local_38;
        int local_4c = arg1;
        if (10 < arg1) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                            "Js5NetThread.cpp",
                            207, "Js5 packets preempted too many times, giving up");
        }
        uint8_t* this_00 = field_248;
        this_00->SetPos(0);
        auto puVar8 = this_00->GetDataPtr();
        BufferedSocket* local_58 = (BufferedSocket*)&field_40;
        bool cVar2 = local_58->Read(puVar8, 8, nullptr);
        if (!cVar2) {
            local_38 = std::__cxx_atomic_base_impl(54);
        } else {
            JVar4 = this_00->g1();
            EVar5.m_code = this_00->g2();
            bVar3 = this_00->g1();
            uVar6 = this_00->g4();
            local_48 = (Js5RemoteRequestData*)Run_AdoptRequestFromMain(JVar4 & 255, EVar5.m_code & 65535);
            new (local_a0) RAII_RequestFailureHandler(*field_0, local_48, -1);
            if (local_48 == nullptr) {
                local_38 = std::__cxx_atomic_base_impl(53);
                local_a0->SetCompletedCount(-2);
                EVar5.m_code = local_38[0].m_code;
            } else {
                uVar11 = uVar6 + (unsigned int)(bVar3 != 0) * 4;
                *(unsigned int*)((long)&local_48->field_56 + 4) = uVar11 + 5;
                *(uint32_t*)&local_48->field_56 = 5;
                local_88->Reserve((unsigned long)(uVar11 + 5));
                local_88->SetPos(0);
                local_88->p1<unsigned long>((unsigned int)bVar3);
                local_88->p4<int>(uVar6);
                local_88._32_8_ = local_88->GetDataPtr() + 5;
                local_a8 =
                    (hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>,
                               eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true>,
                               eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>>,
                               eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>, eastl::mod_range_hashing,
                               eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_424;
                local_4c = local_4c + 1;
                iVar10 = 8;
                do {
                    uVar6 = 512U - iVar10;
                    if (uVar11 <= 512U - iVar10) {
                        uVar6 = uVar11;
                    }
                    cVar2 = local_58->Read(local_88._32_8_, uVar6, &local_38);
                    if (!cVar2) {
                    LAB_1002bbf50:
                        bVar1 = true;
                        EVar5.m_code = local_38[0].m_code;
                    } else {
                        uVar11 = uVar11 - uVar6;
                        if (uVar11 == 0) {
                            if ((*(int*)((long)&local_48->field_16 + 4) != 0) || (*(int*)&local_48->field_24 != 0)) {
                                puVar8 = (unsigned char*)local_88->GetDataPtr();
                                arg2 = local_88->GetTextureAtlas();
                                if (CRC32(puVar8, arg2, 4294967295) != *(int*)((long)&local_48->field_16 + 4)) {
                                    local_a0->SetCompletedCount(-3);
                                    uVar11 = 0;
                                    bVar1 = true;
                                    EVar5.m_code = local_38[0].m_code;
                                    goto LAB_1002bbf59;
                                }
                            }
                            new (local_48->field_28) std::__cxx_atomic_base_impl(0);
                            local_88->SetPos(0);
                            this_02 = (PacketJ<Array<unsigned char>>*)*(*((local_48->field_28 + 12)));
                            *this_02 = *local_88;
                            local_a0->Clear();
                            field_32->ProvideDataFromNetThread(local_48);
                            cVar2 = local_38.IsValid();
                            if (cVar2) {
                                LogAssert("!ret.IsError()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/jagex3/js5/Js5NetThread.cpp",
                                          320, nullptr);
                            }
                            uVar11 = 0;
                            goto LAB_1002bbf50;
                        }
                        *(unsigned int*)&local_48->field_56 = *(int*)&local_48->field_56 + uVar6;
                        cVar2 = local_58->PeekByte(&local_39, &local_38);
                        iVar10 = local_4c;
                        if (!cVar2) {
                            bVar1 = true;
                            EVar5.m_code = local_38[0].m_code;
                        } else if (local_39 == 255) {
                            bVar1 = false;
                            local_58->Read(&local_39, 1, nullptr);
                        } else {
                            local_a0->Clear();
                            eastl::hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>,
                                             eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true>,
                                             eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>>,
                                             eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true, true>::
                                emplace<Js5RequestKey&, Js5RemoteRequestData*&>(
                                    &local_c0, local_a8, (Js5RequestKey*)&local_48->field_8, &local_48);
                            EVar5.m_code = Run_ReceivePacket(iVar10);
                            bVar1 = true;
                        }
                        local_88._32_8_ = local_88._32_8_ + (unsigned long)uVar6;
                        iVar10 = 1;
                    }
                LAB_1002bbf59:
                } while (!bVar1);
            }
            local_38[0].m_code = EVar5.m_code;
        }
        return local_38[0].m_code;
    }

    // 0x1002bc200
    unsigned long Js5NetThread::Run_MakeConnection() {
        uint8_t* this_00;
        uint8_t* this_01;
        char cVar1;
        unsigned int uVar2;
        unsigned long uVar3;
        Logger* pLVar4;
        uint64_t uVar5;
        unsigned long uVar6;
        unsigned char local_40[8];
        uint8_t local_38[7];
        uint8_t local_31;

        if (*(char*)((long)&this[1].field_0 + 1) == '\0') {
            field_296->WaitForAndLowerSignal();
        } else {
            this_00 = &field_40;
            this_00->Close();
            uVar6 = (unsigned long)field_288;
            this_01 = &field_8;
            do {
                new (local_38) callstack::Callstack();
                (*this_01)[uVar6 & 4294967295];
                cVar1 = this_00->Connect((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), local_38);
                pLVar4 = logger::default_logger();
                (*this_01)[uVar6 & 4294967295];
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                if (!cVar1) {
                    uVar2 = local_38->GetX();
                    pLVar4->Log(false, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "js5/Js5NetThread.cpp",
                                350, "Connection to %s failed with %d!", uVar5, (unsigned long)uVar2);
                    uVar3 = this_01->end();
                    uVar6 = (unsigned long)((int)uVar6 + 1) % uVar3;
                    cVar1 = field_288 == (unsigned int)uVar6;
                } else {
                    pLVar4->Log(false, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "js5/Js5NetThread.cpp",
                                344, "JS5 Connected to %s", uVar5);
                    cVar1 = '\x02';
                }
            } while (!cVar1);
            if (cVar1 == '\x02') {
                field_288 = (unsigned int)uVar6;
                local_40[4] = 216;
                local_40[0] = '\x0f';
                local_40[1] = '\0';
                local_40[2] = '\0';
                local_40[3] = '\0';
                local_31 = 0;
                cVar1 = this_00->Write(local_40, 5, nullptr);
                if (cVar1) {
                    cVar1 = this_00->Read(&local_31, 1, nullptr);
                    if ((cVar1) && (local_31 == 0)) {
                        field_0->PushHead(field_10168);
                        uVar6 = (((uint64_t)((int64_t)((unsigned long)local_38 >> 8)) << 8) | (uint8_t)1);
                        goto LAB_1002bc426;
                    }
                }
                pLVar4 = logger::default_logger();
                (*this_01)[uVar6 & 4294967295];
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar6 = 0;
                pLVar4->Log(false, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                            "Js5NetThread.cpp",
                            369, "Connection to %s failed handshake! (server ver %u)", uVar5, (unsigned long)local_31);
                goto LAB_1002bc426;
            }
        }
        uVar6 = 0;
    LAB_1002bc426:
        return uVar6 & 4294967295;
    }

    // 0x1002bc440
    void Js5NetThread::Run() {
        Js5RemoteRequestData* js5RemoteRequestData;
        bool bVar1;
        char cVar2;
        long lVar3;

        this_thread::SetThreadName("Js5NetThread");
        LockFreeStack<Js5RemoteRequestData>* local_48 = (LockFreeStack<Js5RemoteRequestData>*)&field_416;
        uint8_t* this_00 = &field_424;
        if (*(char*)((long)&this[1].field_0 + 2) == '\0') {
            do {
                if (*(char*)&this[1].field_0 == '\0') {
                    cVar2 = Run_MakeConnection();
                    *(char*)&this[1].field_0 = cVar2;
                    if (cVar2) {
                        for (local_40[0] = (ReturnValue)local_48->TakeStack(); local_40[0] != (ReturnValue)0;
                             local_40[0] = (ReturnValue)local_40[0]->HeapBeginPtr()) {
                            eastl::hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>,
                                             eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true>,
                                             eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>>,
                                             eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>,
                                             eastl::mod_range_hashing, eastl::default_ranged_hash,
                                             eastl::prime_rehash_policy, false, true,
                                             true>::emplace<Js5RequestKey&,
                                                            Js5RemoteRequestData*&>(
                                (ReturnValue*)&local_60,
                                (hashtable<Js5RequestKey, eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>,
                                           eastl::fixed_hashtable_allocator<601ul, 24ul, 200ul, 8ul, 0ul, true>,
                                           eastl::use_first<eastl::pair<Js5RequestKey const, Js5RemoteRequestData*>>,
                                           eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>,
                                           eastl::mod_range_hashing, eastl::default_ranged_hash,
                                           eastl::prime_rehash_policy, false, true, true>*)this_00,
                                (Js5RequestKey*)((long)local_40[0] + 8), (Js5RemoteRequestData**)&local_40);
                        }
                        local_60 = this_00->begin();
                        local_40 = this_00->end();
                        cVar2 = local_60 != local_40;
                        while (bVar1 = false, cVar2) {
                            lVar3 = local_60.HeapBeginPtr();
                            cVar2 = SendRequest(*(Js5RemoteRequestData**)(lVar3 + 8));
                            bVar1 = true;
                            if (!cVar2)
                                break;
                            ++local_60;
                            cVar2 = local_60 != local_40;
                        }
                        if (bVar1) {
                            *(uint8_t*)&this[1].field_0 = 0;
                            *(uint8_t*)((long)&this[1].field_0 + 1) = 0;
                            local_60.XPlotBlender<int>(4294967295);
                            goto LAB_1002bc580;
                        }
                    }
                } else {
                    if (*(char*)((long)&this[1].field_0 + 1) == '\0') {
                        field_40.Close();
                    }
                    local_60.field_0 = Run_ReceivePacket(1);
                    cVar2 = local_60.IsValid();
                    if (cVar2) {
                        *(uint8_t*)&this[1].field_0 = 0;
                        *(uint8_t*)((long)&this[1].field_0 + 1) = 0;
                    LAB_1002bc580:
                        *(int*)(field_10248 + 28) = local_60.field_0;
                        field_0->PushHead(field_10248);
                    }
                }
            } while (*(char*)((long)&this[1].field_0 + 2) == '\0');
        }
        local_40[0] = (ReturnValue)local_48->TakeStack();
        if (local_40[0] != (ReturnValue)0) {
            do {
                local_60 = this_00->emplace<Js5RequestKey&, Js5RemoteRequestData*&>(
                    *((Js5RequestKey*)((long)local_40[0] + 8)), local_40);
                local_40[0] = (ReturnValue)local_40[0]->HeapBeginPtr();
            } while (local_40[0] != (ReturnValue)0);
        }
        WaterNormalParamsTarget local_60 = this_00->begin();
        auto local_40 = this_00->end();
        cVar2 = local_60 != local_40;
        if (cVar2) {
            do {
                lVar3 = local_60.HeapBeginPtr();
                js5RemoteRequestData = *(Js5RemoteRequestData**)(lVar3 + 8);
                new (js5RemoteRequestData->field_28) std::__cxx_atomic_base_impl(-2);
                field_0->PushHead(js5RemoteRequestData);
                ++local_60;
                cVar2 = local_60 != local_40;
            } while (cVar2);
        }
        this_00->clear();
    }

} // namespace jag::oldscape::jagex3

// 0x1002bb9f0
void __ZL6strchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}
