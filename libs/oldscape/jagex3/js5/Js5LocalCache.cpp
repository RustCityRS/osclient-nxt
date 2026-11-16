// libs/oldscape/jagex3/js5/Js5LocalCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Js5LocalCache.h"

namespace jag::oldscape::jagex3 {
    // 0x1002b8780, 320 bytes, placed by class name and debug map
    // Js5LocalCache::Initialize(Filename const&)
    int Js5LocalCache::Initialize(Filename* param_1) {
        undefined1* this_00;
        char cVar2;
        char* extraout_RDX;
        thread local_38[8];
        __1 local_30;
        Error local_28[2];

        new (local_28) callstack::Callstack();
        if (!eastl::operator==((eastl*)param_1, (basic_string*)"", extraout_RDX)) {
            (&field_672, 22, 1)->set_max_size();
            field_9712 = 18446744069414584342;
            field_9736 = 0;
            field_9768 = 0;
            field_9776 = 0;
            *(undefined1*)&this[1].field_0 = 0;
            field_9792 = 18446744069414584342;
            field_9816 = 0;
            *(undefined8*)&field_9848 = 0;
            field_9856 = 0;
            field_9848 = 1;
            this_00 = field_8;
            Filename::operator=((Filename*)this_00, param_1);
            cVar2 = this_00->Exists();
            if (cVar2 == '\0') {
                this_00->CreateDirectories(local_28);
            }
            cVar2 = local_28->IsValid();
            if (cVar2 == '\0') {
                local_28[0].field_0 = (field_312, 255, param_1)->Initialize();
            }
            cVar2 = local_28->IsValid();
            if (cVar2 == '\0') {
                local_28[0].field_0 = (field_8832, param_1)->Initialize();
            }
            local_30.field_0 = this;
            std::thread::thread<Js5LocalCache::Initialize(Filename_const&)::__1, , void>(local_38, &local_30);
            std::thread::operator=((thread*)this, local_38);
            std::thread::~thread(local_38);
        }
        return local_28[0].field_0;
    }

    // 0x1002b8a00, 192 bytes, placed by class name and debug map
    // Js5LocalCache::IndexFile::Initialize(Js5ArchiveId, Filename const&)
    undefined4 Js5LocalCache::IndexFile::Initialize(int param_2, char* param_3) {
        undefined4 uVar1;
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        _snprintf(g_indexName + 19, 13, "%d", param_2);
        Filename::operator/(local_158, param_3);
        uVar1 = Open(local_158, 2, 6144, 0);
        local_158->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1;
    }

    // 0x1002b8ac0, 352 bytes, placed by class name and debug map
    // Js5LocalCache::DataFile::Initialize(Filename const&)
    int Js5LocalCache::DataFile::Initialize(Filename* param_1) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        uint uVar3;
        undefined1 local_160[8];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        Filename::operator/((Filename*)(local_160 + 8), (char*)param_1);
        this_00 = field_360;
        local_160._0_4_ = this_00->Open((Filename*)(local_160 + 8), 2, 520, 10000);
        cVar1 = local_160->IsValid();
        if (cVar1 == '\0') {
            local_160._0_4_ = Open((Filename*)(local_160 + 8), 0, 5200, 1000);
            cVar1 = local_160->IsValid();
            if (cVar1 == '\0') {
                iVar2 = this_00->GetSize();
                if (iVar2 == 0) {
                    cVar1 = this_00->Write("", 520, 0);
                    uVar3 = 1;
                    if (cVar1 == '\0') {
                        new (local_160) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(5);
                    }
                } else {
                    uVar3 = (iVar2 + 519) / 520;
                }
                field_720 = uVar3;
            }
        }
        ((local_160 + 8))->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_160._0_4_;
    }

    // 0x1002b8c60, 112 bytes, placed by class name and debug map
    // Js5LocalCache::InitializeArchive(Js5ArchiveId)
    ulong Js5LocalCache::InitializeArchive(uint param_2) {
        uint uVar2;
        ulong in_RAX;
        IndexFile* pIVar3;
        ulong local_28;

        local_28 = in_RAX;
        if (Filename::operator!=((Filename*)field_8, "") == '\0') {
            new (&local_28) callstack::Callstack();
        } else {
            pIVar3 = (IndexFile*)Array<Js5LocalCache::IndexFile, eastl::allocator>::operator[](
                (Array<Js5LocalCache::IndexFile, eastl::allocator>*)&field_672, (ulong)param_2);
            uVar2 = pIVar3->Initialize(param_2, field_8);
            local_28 = (ulong)uVar2;
        }
        return local_28 & 4294967295;
    }

    // 0x1002b8d60, 304 bytes, placed by class name and debug map
    // Js5LocalCache::EnqueueRequestFromMainThread(Js5RemoteRequestData*)
    undefined* Js5LocalCache::EnqueueRequestFromMainThread(Js5RemoteRequestData* param_1) {
        bool bVar1;
        char cVar2;
        IndexFile* pIVar3;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        char* in_RDX;
        undefined** ppuVar4;
        eastl local_50[16];
        hashtable_iterator_base local_40[16];

        bVar1 = eastl::operator==((eastl*)field_8, (basic_string*)"", in_RDX);
        ppuVar4 = &DataStatus::MISSING;
        if (!bVar1) {
            cVar2 = Js5RequestKey::operator==((Js5RequestKey*)&param_1->field_8, (Js5RequestKey*)&g_masterIndexKey);
            if (cVar2 == '\0') {
                *(undefined4*)(param_1->field_28 + 4) = 2;
                if ((ulong) * (uint*)&param_1->field_8 == 255) {
                    pIVar3 = (IndexFile*)field_312;
                } else {
                    pIVar3 = (IndexFile*)Array<Js5LocalCache::IndexFile, eastl::allocator>::operator[](
                        (Array<Js5LocalCache::IndexFile, eastl::allocator>*)&field_672,
                        (ulong) * (uint*)&param_1->field_8);
                }
                cVar2 = pIVar3->GetEntry(&param_1->field_64, *(undefined4*)((long)&param_1->field_8 + 4));
                *(char*)&param_1->field_72 = cVar2;
                if (cVar2 != '\0') {
                    local_50 = (eastl[16])(&field_696, (Js5RequestKey*)&param_1->field_8)->find();
                    local_40 = (hashtable_iterator_base[16])(&field_696)->end();
                    bVar1 = eastl::operator!=(local_50, local_40, local_40._8_8_);
                    if (!bVar1) {
                        this_00 =
                            (PacketT<Array<unsigned char, eastl::allocator>>*)
                                shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(param_1->field_28 +
                                                                                                   12));
                        this_00->Reserve((ulong) * (uint*)((long)&param_1->field_64 + 4));
                        if ((*(byte*)&param_1->field_16 & 1) != 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(pRequestData->m_params.m_priority & Js5FetchPriority::URGENT) == 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/js5/Js5LocalCache.cpp",
                                      100, (char*)0);
                        }
                        QueueToWorker(this, param_1);
                        ppuVar4 = &DataStatus::NOTLOADED;
                    }
                }
            }
        }
        return *ppuVar4;
    }

    // 0x1002b8e90, 128 bytes, placed by class name and debug map
    // Js5LocalCache::IndexFile::GetEntry(Js5LocalCache::IndexEntry&, Js5GroupId)
    undefined4 Js5LocalCache::IndexFile::GetEntry(uint* param_1, int param_3) {
        char cVar1;
        uint uVar2;
        undefined8 in_RAX;
        uint uVar3;
        undefined8 uStack_28;

        uStack_28 = in_RAX;
        cVar1 = IsOpen();
        if ((cVar1 == '\0') || (cVar1 = Read((uchar*)((long)&uStack_28 + 2), 6, param_3 * 6), cVar1 == '\0')) {
            return 0;
        }
        param_1[1] = (uint)uStack_28._4_1_ | (uint)uStack_28._3_1_ << 8 | (uint)uStack_28._2_1_ << 16;
        uVar3 = (uint)uStack_28._6_1_ << 8 | (uint)uStack_28._5_1_ << 16;
        uVar2 = uStack_28._7_1_ | uVar3;
        *param_1 = uVar2;
        return CONCAT31((int3)(uVar3 >> 8), uVar2 != 0);
    }

    // 0x1002b8fa0, 48 bytes, placed by class name and debug map
    // Js5LocalCache::QueueToWorker(Js5RemoteRequestData*)
    void Js5LocalCache::QueueToWorker(Js5RemoteRequestData* param_1) {
        int iVar1;

        iVar1 = (&field_9568, param_1)->PushHead();
        if (iVar1 == 0) {
            field_9584->RaiseSignal();
        }
    }

    // 0x1002b8fd0, 288 bytes, placed by class name and debug map
    // Js5LocalCache::BlockingFetchFromMainThread(Js5RemoteRequestData*)
    undefined* Js5LocalCache::BlockingFetchFromMainThread(Js5RemoteRequestData* param_1) {
        bool bVar1;
        char cVar2;
        IndexFile* pIVar3;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        undefined* puVar4;
        char* in_RDX;
        eastl local_48[16];
        hashtable_iterator_base local_38[16];

        bVar1 = eastl::operator==((eastl*)field_8, (basic_string*)"", in_RDX);
        if (!bVar1) {
            cVar2 = Js5RequestKey::operator==((Js5RequestKey*)&param_1->field_8, (Js5RequestKey*)&g_masterIndexKey);
            if (cVar2 == '\0') {
                *(undefined4*)(param_1->field_28 + 4) = 2;
                if ((ulong) * (uint*)&param_1->field_8 == 255) {
                    pIVar3 = (IndexFile*)field_312;
                } else {
                    pIVar3 = (IndexFile*)Array<Js5LocalCache::IndexFile, eastl::allocator>::operator[](
                        (Array<Js5LocalCache::IndexFile, eastl::allocator>*)&field_672,
                        (ulong) * (uint*)&param_1->field_8);
                }
                cVar2 = pIVar3->GetEntry(&param_1->field_64, *(undefined4*)((long)&param_1->field_8 + 4));
                *(char*)&param_1->field_72 = cVar2;
                if (cVar2 != '\0') {
                    local_48 = (eastl[16])(&field_696, (Js5RequestKey*)&param_1->field_8)->find();
                    local_38 = (hashtable_iterator_base[16])(&field_696)->end();
                    bVar1 = eastl::operator!=(local_48, local_38, local_38._8_8_);
                    if (!bVar1) {
                        this_00 =
                            (PacketT<Array<unsigned char, eastl::allocator>>*)
                                shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(param_1->field_28 +
                                                                                                   12));
                        this_00->Reserve((ulong) * (uint*)((long)&param_1->field_64 + 4));
                        if ((*(byte*)&param_1->field_16 & 1) == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(pRequestData->m_params.m_priority & Js5FetchPriority::URGENT) != 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/js5/Js5LocalCache.cpp",
                                      134, (char*)0);
                        }
                        puVar4 = (undefined*)(field_8832, param_1)->FetchDataFromMainThread();
                        return puVar4;
                    }
                }
            }
        }
        return DataStatus::MISSING;
    }

    // 0x1002b90f0, 64 bytes, placed by class name and debug map
    // Js5LocalCache::DataFile::FetchDataFromMainThread(Js5RemoteRequestData*)
    undefined* Js5LocalCache::DataFile::FetchDataFromMainThread(Js5RemoteRequestData* param_1) {
        char cVar1;
        undefined** ppuVar2;

        if (((*(char*)&param_1->field_72 == '\0') || (65534 < *(int*)((long)&param_1->field_8 + 4))) ||
            (cVar1 = ReadFromFile(this, (BufferedRandomAccessFile*)this, param_1), cVar1 == '\0')) {
            ppuVar2 = &DataStatus::MISSING;
        } else {
            ppuVar2 = &DataStatus::READY;
        }
        return *ppuVar2;
    }

    // 0x1002b9130, 112 bytes, placed by class name and debug map
    // Js5LocalCache::InvalidateFromMainThread(Js5RequestKey const&)
    void Js5LocalCache::InvalidateFromMainThread(Js5RequestKey* param_1) {
        Js5RequestKey local_30[2];

        if (Filename::operator!=((Filename*)&param_1->field_8, "") == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_cacheLocation != \"\"",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5LocalCache.cpp",
                      140, (char*)0);
        }
        eastl::hashtable<Js5RequestKey, Js5RequestKey,
                         eastl::fixed_hashtable_allocator<601ul, 16ul, 200ul, 8ul, 0ul, true, eastl::allocator>,
                         eastl::use_self<Js5RequestKey>, eastl::equal_to<Js5RequestKey>, eastl::hash<Js5RequestKey>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                         true>::emplace<Js5RequestKey_const&>(local_30);
    }

    // 0x1002b91d0, 320 bytes, placed by class name and debug map
    // Js5LocalCache::MainLogic()
    void Js5LocalCache::MainLogic() {
        bool bVar1;
        Js5RemoteRequestData* this_00;
        Js5RemoteRequestData* pJVar3;
        IndexFile* this_01;
        char* in_RDX;

        bVar1 = eastl::operator==((eastl*)field_8, (basic_string*)"", in_RDX);
        if (!bVar1) {
            this_00 = (Js5RemoteRequestData*)(&field_9576)->TakeStack();
            if (this_00 == (Js5RemoteRequestData*)0) {
                bVar1 = false;
            } else {
                bVar1 = false;
                do {
                    pJVar3 = (Js5RemoteRequestData*)this_00->HeapBeginPtr();
                    if (*(int*)(this_00->field_28 + 4) == 0) {
                        FlushIndices(this);
                        if (this_00 == (Js5RemoteRequestData*)&field_9704) {
                            *(undefined1*)&this[1].field_0 = 0;
                        }
                    } else {
                        if (*(char*)((long)&this_00->field_72 + 1) != '\0') {
                            field_8832->InvalidateMainThreadReadBuffers();
                            this_01 = (IndexFile*)field_312;
                            if ((ulong) * (uint*)&this_00->field_8 != 255) {
                                this_01 = (IndexFile*)Array<Js5LocalCache::IndexFile, eastl::allocator>::operator[](
                                    (Array<Js5LocalCache::IndexFile, eastl::allocator>*)&field_672,
                                    (ulong) * (uint*)&this_00->field_8);
                            }
                            if (this_01->Update(this_00) != '\0') {
                                (&field_696, (Js5RequestKey*)&this_00->field_8)->erase();
                                bVar1 = true;
                            }
                        }
                        (field_9560, this_00)->PushHead();
                    }
                    this_00 = pJVar3;
                } while (pJVar3 != (Js5RemoteRequestData*)0);
            }
            if (bVar1) {
                FlushIndices(this);
            }
        }
    }

    // 0x1002b9340, 112 bytes, placed by class name and debug map
    // Js5LocalCache::FlushIndices()
    void Js5LocalCache::FlushIndices() {
        IndexFile* pIVar2;
        IndexFile* this_00;

        field_312->FlushToDisk();
        this_00 = (IndexFile*)(&field_672)->data();
        pIVar2 = (IndexFile*)(&field_672)->end();
        for (; this_00 != pIVar2; this_00 = (IndexFile*)&this_00[1].field_7) {
            if (this_00->IsOpen() != '\0') {
                this_00->FlushToDisk();
            }
        }
    }

    // 0x1002b93b0, 16 bytes, placed by class name and debug map
    // Js5LocalCache::DataFile::InvalidateMainThreadReadBuffers()
    void Js5LocalCache::DataFile::InvalidateMainThreadReadBuffers() {
        InvalidateBuffers();
    }

    // 0x1002b93c0, 112 bytes, placed by class name and debug map
    // Js5LocalCache::IndexFile::Update(Js5RemoteRequestData*)
    undefined8 Js5LocalCache::IndexFile::Update(Js5RemoteRequestData* param_1) {
        undefined4 uVar1;
        undefined8 uVar3;
        uchar local_1e;
        undefined1 local_1d;
        undefined1 local_1c;
        undefined1 local_1b;
        undefined1 local_1a;
        undefined1 local_19;

        if (IsOpen() == '\0') {
            uVar3 = 0;
        } else {
            uVar1 = *(undefined4*)((long)&param_1->field_64 + 4);
            local_1e = (uchar)((uint)uVar1 >> 16);
            local_1d = (undefined1)((uint)uVar1 >> 8);
            local_1c = (undefined1)uVar1;
            uVar1 = *(undefined4*)&param_1->field_64;
            local_1b = (undefined1)((uint)uVar1 >> 16);
            local_1a = (undefined1)((uint)uVar1 >> 8);
            local_19 = (undefined1)uVar1;
            uVar3 = Write(&local_1e, 6, *(int*)((long)&param_1->field_8 + 4) * 6);
        }
        return uVar3;
    }

    // 0x1002b9560, 96 bytes, placed by class name and debug map
    // Js5LocalCache::ProvideDataFromNetThread(Js5RemoteRequestData*)
    void Js5LocalCache::ProvideDataFromNetThread(Js5RemoteRequestData* param_1) {
        char cVar2;
        char* in_RDX;

        if ((eastl::operator==((eastl*)field_8, (basic_string*)"", in_RDX)) ||
            (cVar2 = Js5RequestKey::operator==((Js5RequestKey*)&param_1->field_8, (Js5RequestKey*)&g_masterIndexKey),
             cVar2 != '\0')) {
            (field_9560, param_1)->PushHead();
            return;
        }
        QueueToWorker(this, param_1);
    }

    // 0x1002b95c0, 288 bytes, placed by class name and debug map
    // Js5LocalCache::Run()
    void Js5LocalCache::Run() {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        Js5RemoteRequestData* this_01;
        Js5RemoteRequestData* pJVar3;
        LockFreeStack* this_02;

        this_thread::SetThreadName("Js5LocalCache");
        this_00 = field_8832;
        do {
            this_01 = (Js5RemoteRequestData*)(&field_9568)->TakeStack();
            if (this_01 == (Js5RemoteRequestData*)0) {
                field_9584->WaitForAndLowerSignal();
                iVar2 = 3;
            } else {
                do {
                    if (this_01 == (Js5RemoteRequestData*)0) {
                        iVar2 = 0;
                        break;
                    }
                    pJVar3 = (Js5RemoteRequestData*)this_01->HeapBeginPtr();
                    iVar2 = *(int*)(this_01->field_28 + 4);
                    if (iVar2 == 2) {
                        this_00->FetchDataForWorkerThread(this_01);
                        this_02 = field_9560;
                    LAB_1002b9656:
                        this_02->PushHead(this_01);
                    LAB_1002b965e:
                        iVar2 = 0;
                    } else {
                        if (iVar2 == 1) {
                            this_00->WriteDataForWorkerThread(this_01);
                            this_02 = (LockFreeStack*)&field_9576;
                            goto LAB_1002b9656;
                        }
                        if (iVar2 != 0)
                            goto LAB_1002b965e;
                        this_00->FlushForWorkerThread();
                        cVar1 = *(char*)&this_01->field_64;
                        (&field_9576, this_01)->PushHead();
                        if (cVar1 == '\0')
                            goto LAB_1002b965e;
                        iVar2 = 1;
                    }
                    this_01 = pJVar3;
                } while (iVar2 == 0);
            }
            if (iVar2 == 1) {
                return;
            }
        } while (true);
    }

    // 0x1002b96e0, 32 bytes, placed by class name and debug map
    // Js5LocalCache::DataFile::FlushForWorkerThread()
    void Js5LocalCache::DataFile::FlushForWorkerThread() {
        field_360->FlushToDisk();
    }

    // 0x1002b9700, 16 bytes, placed by class name and debug map
    // Js5LocalCache::DataFile::WriteDataForWorkerThread(Js5RemoteRequestData*)
    void Js5LocalCache::DataFile::WriteDataForWorkerThread(Js5RemoteRequestData* param_1) {
        WriteToFile(this, param_1);
    }

    // 0x1002b9710, 80 bytes, placed by class name and debug map
    // Js5LocalCache::DataFile::FetchDataForWorkerThread(Js5RemoteRequestData*)
    void Js5LocalCache::DataFile::FetchDataForWorkerThread(Js5RemoteRequestData* param_1) {
        byte bVar1;
        int iVar2;

        iVar2 = 5;
        if ((*(char*)&param_1->field_72 != '\0') && (*(int*)((long)&param_1->field_8 + 4) < 65535)) {
            bVar1 = ReadFromFile(this, (BufferedRandomAccessFile*)field_360, param_1);
            iVar2 = (uint)(bVar1 ^ 1) * 5;
        }
        new (param_1->field_28, iVar2) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>();
    }

    // 0x1002b9760, 80 bytes, placed by class name and debug map
    // Js5LocalCache::QueueFlushToDisk()
    undefined8 Js5LocalCache::QueueFlushToDisk() {
        undefined8 uVar2;
        char* in_RDX;

        if ((eastl::operator==((eastl*)field_8, (basic_string*)"", in_RDX)) || (*(char*)&this[1].field_0 != '\0')) {
            uVar2 = 0;
        } else {
            *(undefined1*)&this[1].field_0 = 1;
            QueueToWorker(this, (Js5RemoteRequestData*)&field_9704);
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x1002b97b0, 80 bytes, placed by class name and debug map
    // Js5LocalCache::EndAndJoin()
    void Js5LocalCache::EndAndJoin() {
        char* in_RDX;

        if (!eastl::operator==((eastl*)field_8, (basic_string*)"", in_RDX)) {
            QueueToWorker(this, (Js5RemoteRequestData*)&field_9784);
            std::thread::join();
            MainLogic(this);
        }
    }

    // 0x1002b9840, 368 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::Open(Filename const&, int, unsigned int, unsigned int)
    uint Js5LocalCache::BufferedRandomAccessFile::Open(Filename* param_1, int param_2, uint param_3, uint param_4) {
        char cVar1;
        uint uVar3;
        undefined1 local_178[320];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_178) callstack::Callstack();
        new ((local_178 + 8)) File(param_1, param_2, local_178);
        File::operator=((File*)this, (File*)(local_178 + 8));
        ((local_178 + 8))->~File();
        cVar1 = local_178->IsValid();
        if (cVar1 != '\0') {
            if (local_178->GetX() == 2) {
                create(local_178);
            }
        }
        cVar1 = local_178->IsValid();
        if (cVar1 == '\0') {
            field_316 = param_4;
            uVar3 = 1;
            if (param_3 != 0) {
                uVar3 = param_3;
            }
            field_312 = uVar3;
            if (param_4 == 0) {
                field_352 = 0;
                field_344 = 0;
                field_348 = 0;
                BufferAll(this);
            } else {
                (&field_320, (ulong)(param_4 * param_3), 3)->set_max_size();
                field_352 = 0;
                field_344 = 0;
                field_348 = 0;
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_178._0_4_;
    }

    // 0x1002b99b0, 16 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::IsOpen() const
    void Js5LocalCache::BufferedRandomAccessFile::IsOpen() {
        IsValid();
    }

    // 0x1002b99c0, 944 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::Read(unsigned char*, unsigned int, unsigned int)
    ulong Js5LocalCache::BufferedRandomAccessFile::Read(uchar* param_1, uint param_2, uint param_3) {
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar1;
        char cVar2;
        byte bVar3;
        int iVar4;
        undefined8 uVar5;
        long lVar6;
        ulong uVar7;
        uchar* puVar8;
        ulong uVar9;
        void* pvVar10;
        size_t sVar11;
        uint uVar12;
        BufferedRandomAccessFile* pBVar13;
        uint uVar14;
        uint uVar15;
        undefined1 local_70[16];
        Callstack local_60;
        uchar* local_50;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_48;
        ulong local_40;
        BufferedRandomAccessFile* local_38;

        pBVar13 = (BufferedRandomAccessFile*)(ulong)param_3;
        uVar9 = (ulong)param_2;
        local_48 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)&field_320;
        local_50 = param_1;
        uVar5 = local_48->end();
        uVar15 = field_344;
        uVar7 = (ulong)uVar15;
        uVar14 = field_348 + uVar15;
        local_40 = uVar9;
        if (param_3 < uVar15) {
        LAB_1002b9a73:
            pAVar1 = local_48;
            uVar12 = (param_3 + param_2 + field_312) - 1;
            uVar12 = uVar12 - uVar12 % field_312;
            if (field_316 == 0) {
                local_38 = pBVar13;
                if (field_344 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_bufferOffset == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5LocalCache.cpp",
                              820, (char*)0);
                }
                local_48->set_max_size((ulong)uVar12, 7);
                local_60._8_4_ = field_344;
                iVar4 = pAVar1->end();
                uVar15 = iVar4 + local_60._8_4_;
                pBVar13 = local_38;
                if (uVar14 <= (uint)local_38)
                    goto LAB_1002b9b0c;
            LAB_1002b9bf5:
                if (field_316 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_numPagesMax != 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5LocalCache.cpp",
                              846, (char*)0);
                }
                if (field_312 < (uint)local_40) {
                    new ((local_70 + 8)) callstack::Callstack();
                    uVar7 = 0;
                    cVar2 = seek((ulong)pBVar13 & 4294967295, 0, (Error*)(local_70 + 8));
                    uVar9 = local_40;
                    if (cVar2 != '\0') {
                        uVar7 = read(local_50, (uint)local_40, 0, (Error*)(local_70 + 8));
                        bVar3 = ((local_70 + 8))->IsValid();
                        uVar7 = CONCAT71((int7)(uVar7 >> 8), uVar7 == (uVar9 & 4294967295) & ~bVar3);
                    }
                    goto LAB_1002b9d37;
                }
                FlushToDisk(this);
                field_344 = (uint)pBVar13;
                new (&local_60) callstack::Callstack();
                uVar7 = 0;
                cVar2 = seek((ulong)pBVar13 & 4294967295, 0, 0);
                if (cVar2 == '\0')
                    goto LAB_1002b9d37;
                puVar8 = (uchar*)local_48->data();
                uVar7 = 0;
                uVar9 = read(puVar8, field_312, 0, (Error*)&local_60);
                cVar2 = local_60.IsValid();
                if (cVar2 != '\0')
                    goto LAB_1002b9d37;
                sVar11 = local_40 & 4294967295;
                if (uVar9 < sVar11)
                    goto LAB_1002b9d34;
                field_348 = (uint)uVar9;
                pvVar10 = (void*)local_48->data();
                goto LAB_1002b9cb9;
            }
            uVar15 = uVar15 + (int)uVar5;
            if ((uint)pBVar13 < uVar14)
                goto LAB_1002b9bf5;
        LAB_1002b9b0c:
            if (uVar15 < uVar12)
                goto LAB_1002b9bf5;
            uVar15 = field_348;
            local_38 = pBVar13;
            uVar7 = local_48->end();
            if (uVar7 < uVar15 + (uVar12 - uVar14)) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_bufferValid + (newSize - validFenceOffset) <= m_buffer.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                          "Js5LocalCache.cpp",
                          829, (char*)0);
            }
            new (local_70) callstack::Callstack();
            uVar7 = 0;
            cVar2 = seek((ulong)uVar14, 0, local_70);
            pAVar1 = local_48;
            if (cVar2 == '\0')
                goto LAB_1002b9d37;
            puVar8 = (uchar*)local_48->data();
            uVar7 = read(puVar8, uVar12 - uVar14, field_348, (Error*)local_70);
            cVar2 = local_70->IsValid();
            if ((cVar2 != '\0') || (uVar9 = local_40 & 4294967295, uVar7 < uVar9)) {
            LAB_1002b9d34:
                uVar7 = 0;
                goto LAB_1002b9d37;
            }
            lVar6 = pAVar1->data();
            _memcpy(local_50, (void*)((((ulong)local_38 & 4294967295) + lVar6) - (ulong)field_344), uVar9);
            field_348 = field_348 + (int)uVar7;
        } else {
            uVar12 = uVar14 - param_3;
            if (uVar14 < param_3 || uVar12 == 0)
                goto LAB_1002b9a73;
            local_38 = pBVar13;
            if (uVar14 < param_3 + param_2) {
                local_60._8_8_ = uVar5;
                lVar6 = local_48->data();
                puVar8 = local_50;
                uVar7 = (ulong)local_38 & 4294967295;
                local_38 = this;
                _memcpy(local_50, (void*)((uVar7 + lVar6) - (ulong)field_344), (ulong)uVar12);
                local_40 = (ulong)((int)local_40 - uVar12);
                local_50 = puVar8 + uVar12;
                pBVar13 = (BufferedRandomAccessFile*)(ulong)uVar14;
                uVar5 = local_60._8_8_;
                this = local_38;
                goto LAB_1002b9a73;
            }
            lVar6 = local_48->data();
            pvVar10 = (void*)((((ulong)local_38 & 4294967295) + lVar6) - (ulong)field_344);
            sVar11 = local_40 & 4294967295;
        LAB_1002b9cb9:
            _memcpy(local_50, pvVar10, sVar11);
        }
        uVar7 = CONCAT71((int7)(uVar7 >> 8), 1);
    LAB_1002b9d37:
        return uVar7 & 4294967295;
    }

    // 0x1002b9d70, 768 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::Write(unsigned char const*, unsigned int, unsigned int)
    undefined8 Js5LocalCache::BufferedRandomAccessFile::Write(uchar* param_1, uint param_2, uint param_3) {
        char cVar1;
        int iVar2;
        uint uVar3;
        long lVar4;
        uint* puVar5;
        ulong uVar6;
        undefined8 uVar7;
        void* pvVar8;
        ulong uVar9;
        uint uVar10;
        uint uVar11;
        uint uVar12;
        uint local_68;
        undefined1 local_58[20];
        uint local_44;
        uint local_3c;
        uint local_38;
        uint local_34;

        local_58._8_8_ = &field_320;
        local_34 = param_3;
        iVar2 = local_58._8_8_->end();
        uVar3 = field_344;
        local_68 = iVar2 + uVar3;
        local_38 = field_348 + uVar3;
        local_44 = local_34 + param_2;
        if (field_316 == 0) {
            if (uVar3 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_bufferOffset == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                          "Js5LocalCache.cpp",
                          929, (char*)0);
            }
            uVar12 = (local_44 + field_312) - 1;
            uVar12 = uVar12 - uVar12 % field_312;
            uVar3 = local_58._8_8_->end();
            if (uVar3 < uVar12) {
                local_58._8_8_->set_max_size((ulong)uVar12, 7);
            }
            if (local_38 < local_34) {
                lVar4 = local_58._8_8_->data();
                ___bzero((ulong)field_348 + lVar4, local_34 - local_38);
                local_38 = local_34;
                field_348 = local_34 - field_344;
                local_68 = uVar12 + field_344;
            }
        }
        uVar3 = local_44;
        uVar9 = (ulong)local_34;
        if ((field_344 < local_44) && (local_34 < local_38)) {
            local_3c = local_34;
            puVar5 = std::max<unsigned int>(&field_344, &local_34);
            uVar12 = *puVar5;
            puVar5 = std::min<unsigned int>(&local_38, &local_44);
            uVar9 = (ulong)local_3c;
            uVar10 = uVar12 - local_3c;
            if ((uVar12 < local_3c || uVar10 == 0) || (uVar3 <= *puVar5)) {
                uVar11 = *puVar5 - uVar12;
                lVar4 = local_58._8_8_->data();
                _memcpy((void*)((ulong)(uVar12 - field_344) + lVar4), param_1 + uVar10, (ulong)uVar11);
                field_352 = 1;
                uVar6 = 0;
                uVar3 = 0;
                if (uVar12 == local_34) {
                    uVar6 = (ulong)uVar11;
                    uVar3 = uVar11;
                }
                local_3c = local_3c + uVar3;
                uVar9 = (ulong)local_3c;
                param_1 = param_1 + uVar6;
                uVar3 = param_2 - uVar11;
            } else {
                uVar3 = param_2;
            }
        } else {
            uVar3 = param_2;
        }
        uVar12 = param_2;
        uVar10 = 0;
        if (uVar3 != 0) {
            if (((uint)uVar9 == local_38) && (local_44 <= local_68)) {
                field_352 = 1;
                local_3c = (uint)uVar9;
                lVar4 = local_58._8_8_->data();
                _memcpy((void*)((ulong)field_348 + lVar4), param_1, (ulong)uVar3);
                uVar9 = (ulong)local_3c;
                field_348 = field_348 + uVar12;
            } else {
                uVar10 = uVar3;
            }
        }
        uVar7 = 1;
        if (uVar10 != 0) {
            if (field_316 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_numPagesMax > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                          "Js5LocalCache.cpp",
                          996, (char*)0);
            }
            FlushToDisk(this);
            if (uVar10 < field_312) {
                field_352 = 1;
                pvVar8 = (void*)local_58._8_8_->data();
                _memcpy(pvVar8, param_1, (ulong)uVar10);
                field_344 = (uint)uVar9;
                field_348 = uVar10;
                uVar7 = 1;
            } else {
                new (local_58) callstack::Callstack();
                cVar1 = seek(uVar9, 0, 0);
                if (cVar1 == '\0') {
                    uVar7 = 0;
                } else {
                    uVar9 = write(param_1, uVar10, local_58);
                    cVar1 = local_58->IsValid();
                    uVar7 = 0;
                    if ((cVar1 == '\0') && (uVar9 == uVar10)) {
                        uVar7 = 1;
                    }
                }
            }
        }
        return uVar7;
    }

    // 0x1002ba070, 80 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::InvalidateBuffers()
    void Js5LocalCache::BufferedRandomAccessFile::InvalidateBuffers() {
        if (field_352 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_bufferDirty",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5LocalCache.cpp",
                      1028, (char*)0);
        }
        field_352 = 0;
        field_344 = 0;
        field_348 = 0;
    }

    // 0x1002ba0c0, 64 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::GetSize()
    undefined8 Js5LocalCache::BufferedRandomAccessFile::GetSize() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = seek(0, 2, 0);
        uVar2 = 4294967295;
        if (cVar1 != '\0') {
            uVar2 = tell();
        }
        return uVar2;
    }

    // 0x1002ba100, 496 bytes, placed by class name
    // Js5LocalCache::DataFile::ReadFromFile(Js5LocalCache::BufferedRandomAccessFile&, Js5RemoteRequestData*)
    ulong Js5LocalCache::DataFile::ReadFromFile(BufferedRandomAccessFile* param_1, Js5RemoteRequestData* param_2) {
        int iVar1;
        bool bVar2;
        undefined8 this_00;
        Js5RemoteRequestData* pJVar3;
        char cVar4;
        int iVar5;
        DataFile* pDVar6;
        uchar* puVar7;
        ulong uVar8;
        ulong uVar9;
        uint uVar10;
        uint uVar11;
        DataFile* this_01;
        ulong uVar12;
        uint uVar13;
        int iVar14;
        undefined1 local_80[24];
        DataFile* local_68;
        undefined1 local_60[24];
        ulong local_48;
        Js5RemoteRequestData* local_40;

        pDVar6 = (DataFile*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(param_2->field_28 + 12));
        puVar7 = (uchar*)pDVar6->GetDataPtr();
        uVar8 = pDVar6->GetTextureAtlas();
        uVar9 = pDVar6->GetTextureAtlas();
        if (uVar9 < 16777216) {
            uVar12 = uVar8 & 4294967295;
            this_01 = pDVar6;
            local_60._16_8_ = puVar7;
            uVar9 = pDVar6->GetTextureAtlas();
            if (uVar12 <= uVar9) {
                iVar14 = *(int*)&param_2->field_64;
                local_80._16_8_ = pDVar6;
                local_48 = uVar8;
                if ((iVar14 == 0) || (*(char*)&param_2->field_72 == '\0')) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("block != 0 && entry.m_wasInIndex",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5LocalCache.cpp",
                              518, (char*)0);
                }
                local_60._12_4_ = *(undefined4*)&param_2->field_8;
                local_60._0_4_ = *(int*)((long)&param_2->field_8 + 4);
                local_60._4_2_ = 0;
                local_40 = param_2;
                do {
                    pDVar6 = (DataFile*)param_1;
                    if (iVar14 == 0) {
                        *(undefined1*)&local_40->field_72 = 0;
                        goto LAB_1002ba2d7;
                    }
                    cVar4 = ReadBlockHeader(this_01, (BlockHeader*)local_80,
                                            (BufferedRandomAccessFile*)(DataFile*)param_1, iVar14 * 520);
                    if ((cVar4 == '\0') || (cVar4 = local_80->Matches(local_60), cVar4 == '\0')) {
                        *(undefined1*)&local_40->field_72 = 0;
                        uVar12 = 0;
                        break;
                    }
                    uVar10 = iVar14 * 520 + 8;
                    uVar8 = (ulong)uVar10;
                    uVar11 = (uint)local_48;
                    uVar13 = 512;
                    if (uVar11 < 512) {
                        uVar13 = uVar11;
                    }
                    cVar4 = pDVar6->Read(local_60._16_8_, uVar13, uVar10);
                    pJVar3 = local_40;
                    this_00 = local_80._16_8_;
                    if (cVar4 == '\0') {
                        *(undefined1*)&local_40->field_72 = 0;
                    LAB_1002ba297:
                        bVar2 = false;
                        uVar12 = 0;
                    } else if (uVar11 < 513) {
                        if (local_80._8_4_ != 0)
                            goto LAB_1002ba297;
                        if ((*(int*)((long)&local_40->field_16 + 4) != 0) || (*(int*)&local_40->field_24 != 0)) {
                            local_68 = (DataFile*)local_80._16_8_->GetDataPtr();
                            uVar9 = this_00->GetTextureAtlas();
                            pDVar6 = local_68;
                            iVar5 = CRC32((uchar*)local_68, uVar9, 4294967295);
                            iVar1 = *(int*)((long)&pJVar3->field_16 + 4);
                            if (iVar5 != iVar1) {
                                bVar2 = false;
                                uVar12 = CONCAT71((int7)(uVar8 >> 8), iVar5 == iVar1 & (byte)uVar12) & 4294967295;
                                goto LAB_1002ba2b7;
                            }
                        }
                        uVar12 = CONCAT71((int7)(uVar12 >> 8), 1);
                        bVar2 = false;
                    } else {
                        local_60._4_2_ = local_60._4_2_ + 1;
                        local_60._16_8_ = local_60._16_8_ + (ulong)uVar13;
                        local_48 = (ulong)(uVar11 - uVar13);
                        bVar2 = true;
                        iVar14 = local_80._8_4_;
                    }
                LAB_1002ba2b7:
                    this_01 = pDVar6;
                } while (bVar2);
                goto LAB_1002ba2da;
            }
        }
    LAB_1002ba2d7:
        uVar12 = 0;
    LAB_1002ba2da:
        return uVar12 & 18446744073709551361;
    }

    // 0x1002ba2f0, 608 bytes, placed by class name
    // Js5LocalCache::DataFile::WriteToFile(Js5RemoteRequestData*)
    void Js5LocalCache::DataFile::WriteToFile(Js5RemoteRequestData* param_1) {
        uint uVar1;
        bool bVar2;
        char cVar4;
        uint uVar5;
        DataFile* this_00;
        uint uVar7;
        DataFile* this_01;
        int iVar8;
        uint uVar9;
        uint uVar10;
        undefined1 local_78[8];
        uint local_70;
        Js5RemoteRequestData* local_60;
        uchar* local_58;
        uint local_4c;
        undefined1 local_48[24];

        *(undefined1*)((long)&param_1->field_72 + 1) = 0;
        this_00 = (DataFile*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(param_1->field_28 + 12));
        local_58 = (uchar*)this_00->GetDataPtr();
        if (*(char*)&param_1->field_72 == '\0') {
            uVar9 = 0;
        } else {
            uVar9 = *(uint*)&param_1->field_64;
        }
        uVar5 = uVar9;
        if (uVar9 == 0) {
            uVar5 = field_720;
        }
        *(uint*)&param_1->field_64 = uVar5;
        uVar5 = this_00->GetTextureAtlas();
        if (this_00->GetTextureAtlas() < 16777216) {
            local_48._16_8_ = field_360;
            *(uint*)((long)&param_1->field_64 + 4) = uVar5;
            local_48._12_4_ = *(undefined4*)&param_1->field_8;
            local_48._0_4_ = *(int*)((long)&param_1->field_8 + 4);
            local_48._4_2_ = 0;
            local_60 = param_1;
            do {
                uVar1 = ((DataFile*)this)->field_720;
                if (uVar1 <= uVar9) {
                    uVar9 = 0;
                }
                uVar10 = 512;
                if ((int)uVar5 < 512) {
                    uVar10 = uVar5;
                }
                uVar7 = uVar9;
                if (uVar9 == 0) {
                    uVar7 = uVar1;
                }
                uVar7 = uVar7 * 520;
                local_48._8_4_ = 0;
                if (uVar9 == 0) {
                    ((DataFile*)this)->field_720 = uVar1 + 1;
                    bVar2 = true;
                LAB_1002ba43b:
                    if ((int)uVar5 < 513) {
                        if (local_48._8_4_ != 0) {
                            bVar2 = true;
                        }
                        local_48._8_4_ = 0;
                    } else if ((local_48._8_4_ == 0) || (((DataFile*)this)->field_720 <= (uint)local_48._8_4_)) {
                        local_48._8_4_ = ((DataFile*)this)->field_720;
                        bVar2 = true;
                    }
                    if (bVar2) {
                        cVar4 = WriteBlockHeader(this_00, (BlockHeader*)local_48,
                                                 (BufferedRandomAccessFile*)local_48._16_8_, uVar7);
                        iVar8 = 1;
                        if (cVar4 == '\0')
                            goto LAB_1002ba3a6;
                    }
                    if (0 < (int)uVar5) {
                        this_00 = (DataFile*)local_48._16_8_;
                        cVar4 = local_48._16_8_->Write(local_58, uVar10, uVar7 + 8);
                        iVar8 = 1;
                        if (cVar4 == '\0')
                            goto LAB_1002ba3a6;
                    }
                    if ((int)uVar5 < 513) {
                        iVar8 = 2;
                        if ((int)uVar5 < 512) {
                            this_00 = (DataFile*)local_48._16_8_;
                            local_48._16_8_->Write("", 512 - uVar10, uVar7 + 8 + uVar10);
                        }
                    } else {
                        uVar5 = uVar5 - uVar10;
                        local_58 = local_58 + (int)uVar10;
                        local_48._4_2_ = local_48._4_2_ + 1;
                        iVar8 = 0;
                        uVar9 = local_48._8_4_;
                    }
                } else {
                    this_01 = (DataFile*)local_78;
                    local_4c = uVar7;
                    cVar4 = ReadBlockHeader(this_00, (BlockHeader*)this_01, (BufferedRandomAccessFile*)local_48._16_8_,
                                            uVar7);
                    if (cVar4 != '\0') {
                        cVar4 = this_01->Matches(local_48);
                        this_00 = this_01;
                        if (cVar4 != '\0') {
                            local_48._8_4_ = local_70;
                            bVar2 = false;
                            uVar7 = local_4c;
                            goto LAB_1002ba43b;
                        }
                    }
                    iVar8 = 1;
                }
            LAB_1002ba3a6:
            } while (iVar8 == 0);
            if (iVar8 == 2) {
                local_48._16_8_->FlushToDisk();
                *(undefined1*)((long)&local_60->field_72 + 1) = 1;
            }
        }
    }

    // 0x1002ba550, 144 bytes, placed by class name
    // Js5LocalCache::DataFile::ReadBlockHeader(Js5LocalCache::DataFile::BlockHeader&, Js5LocalCache::BufferedRandomAccessFile&, unsigned int)
    void Js5LocalCache::DataFile::ReadBlockHeader(BlockHeader* param_1, BufferedRandomAccessFile* param_2,
                                                  uint param_3) {
        ushort local_20;
        ushort local_1e;
        byte local_1c;
        byte local_1b;
        byte local_1a;
        byte local_19;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2->Read((uchar*)&local_20, 8, param_3) != '\0') {
            param_1->field_0 = ((uint)local_20 | (local_20 & 255) << 16) >> 8;
            param_1->field_4 = local_1e << 8 | local_1e >> 8;
            *(uint*)&param_1->field_8 = (uint)local_1a | (uint)local_1b << 8 | (uint)local_1c << 16;
            param_1->field_12 = (uint)local_19;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002ba5e0, 112 bytes, placed by class name
    // Js5LocalCache::DataFile::WriteBlockHeader(Js5LocalCache::DataFile::BlockHeader const&, Js5LocalCache::BufferedRandomAccessFile&, unsigned int)
    void Js5LocalCache::DataFile::WriteBlockHeader(BlockHeader* param_1, BufferedRandomAccessFile* param_2,
                                                   uint param_3) {
        ushort uVar1;
        undefined4 uVar2;
        ushort local_18;
        ushort local_16;
        undefined1 local_14;
        undefined1 local_13;
        undefined1 local_12;
        undefined1 local_11;
        long local_10;

        local_10 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = (ushort)param_1->field_0;
        local_18 = uVar1 << 8 | uVar1 >> 8;
        local_16 = param_1->field_4 << 8 | (ushort)param_1->field_4 >> 8;
        uVar2 = *(undefined4*)&param_1->field_8;
        local_14 = (undefined1)((uint)uVar2 >> 16);
        local_13 = (undefined1)((uint)uVar2 >> 8);
        local_12 = (undefined1)uVar2;
        local_11 = (undefined1)param_1->field_12;
        param_2->Write((uchar*)&local_18, 8, param_3);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_10) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002ba650, 48 bytes, placed by class name
    // Js5LocalCache::DataFile::BlockHeader::Matches(Js5LocalCache::DataFile::BlockHeader const&) const
    undefined2 Js5LocalCache::DataFile::BlockHeader::Matches(BlockHeader* param_1) {
        if ((field_0 == param_1->field_0) && (field_12 == param_1->field_12)) {
            return CONCAT11((char)((ushort)field_4 >> 8), field_4 == param_1->field_4);
        }
        return 0;
    }

    // 0x1002ba680, 96 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::FlushToDisk()
    void Js5LocalCache::BufferedRandomAccessFile::FlushToDisk() {
        uchar* puVar1;

        if ((field_352 != '\0') && (field_348 != 0)) {
            if (seek((ulong)field_344, 0, (Error*)0) != '\0') {
                puVar1 = (uchar*)(&field_320)->data();
                write(puVar1, field_348, (Error*)0);
            }
            field_352 = 0;
        }
    }

    // 0x1002ba710, 208 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::BufferAll()
    undefined8 Js5LocalCache::BufferedRandomAccessFile::BufferAll() {
        uint uVar2;
        int iVar3;
        uchar* puVar4;
        uint uVar6;
        undefined8 uVar7;

        uVar2 = GetSize(this);
        if (field_316 == 0) {
            uVar6 = (uVar2 + field_312) - 1;
            (&field_320, (long)(int)(uVar6 - uVar6 % field_312), 3)->set_max_size();
        } else {
            iVar3 = (&field_320)->end();
            if (iVar3 < (int)uVar2) {
                uVar2 = (&field_320)->end();
            }
        }
        uVar7 = 0;
        if (seek(0, 0, 0) != '\0') {
            puVar4 = (uchar*)(&field_320)->data();
            uVar7 = 0;
            if (read(puVar4, uVar2, 0, 0) != 0) {
                field_344 = 0;
                field_348 = uVar2;
                field_352 = 0;
                uVar7 = 1;
            }
        }
        return uVar7;
    }

    // 0x1002ba7e0, 48 bytes, placed by class name
    // Js5LocalCache::BufferedRandomAccessFile::Close()
    void Js5LocalCache::BufferedRandomAccessFile::Close() {
        close(0);
        field_344 = 0;
        field_348 = 0;
        field_352 = 0;
    }

    // 0x1002e03c0, 16 bytes, placed by class name
    // Js5LocalCache::Initialize(Filename const&)::$_1::operator()() const
    /* Js5LocalCache::Initialize(Filename
   const&)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    void Js5LocalCache::Initialize(Filename_const&)::$_1::operator()() {
        Run(field_0);
    }

} // namespace jag::oldscape::jagex3
