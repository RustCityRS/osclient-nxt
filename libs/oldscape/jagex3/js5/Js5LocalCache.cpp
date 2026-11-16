// libs/oldscape/jagex3/js5/Js5LocalCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Js5LocalCache.h"

namespace jag::oldscape::jagex3 {
    // 0x1002b8780
    int Js5LocalCache::Initialize(const Filename& filename) {
        uint8_t* this_00;
        thread local_38;
        Js5LocalCache* local_30;

        Error local_28;
        if (!(filename == "")) {
            field_672.set_max_size(22, 1);
            field_9712 = 18446744069414584342;
            field_9736 = 0;
            field_9768 = 0;
            field_9776 = 0;
            *(uint8_t*)&this[1].field_0 = 0;
            field_9792 = 18446744069414584342;
            field_9816 = 0;
            *(uint64_t*)&field_9848 = 0;
            field_9856 = 0;
            field_9848 = 1;
            this_00 = &field_8;
            *this_00 = filename;
            if (!(this_00->Exists())) {
                this_00->CreateDirectories(&local_28);
            }
            if (!(local_28.IsValid())) {
                local_28[0].m_code = field_312->Initialize(255, filename);
            }
            if (!(local_28.IsValid())) {
                local_28[0].m_code = field_8832->Initialize(filename);
            }
            local_30 = this;
            std::thread::thread<Js5LocalCache::Initialize(Filename const&)::__1, , void>(&local_38, (__1*)&local_30);
            *this = local_38;
            std::thread::~thread(&local_38);
        }
        return local_28[0].m_code;
    }

    // 0x1002b8a00
    uint32_t Js5LocalCache::IndexFile::Initialize(Js5ArchiveId js5ArchiveId, const Filename& filename) {
        _snprintf(g_indexName + 19, 13, "%d", js5ArchiveId);
        Filename local_158 = filename / g_indexName;
        uint32_t uVar1 = Open(local_158, 2, 6144, 0);
        return uVar1;
    }

    // 0x1002b8ac0
    int Js5LocalCache::DataFile::Initialize(const Filename& filename) {
        int iVar2;
        unsigned int uVar3;
        uint8_t local_160[312];

        *((local_160 + 8)) = filename / "main_file_cache.dat2";
        uint8_t* this_00 = field_360;
        local_160._0_4_ = this_00->Open(*((local_160 + 8)), 2, 520, 10000);
        bool cVar1 = local_160->IsValid();
        if (!cVar1) {
            local_160._0_4_ = Open(*((local_160 + 8)), 0, 5200, 1000);
            cVar1 = local_160->IsValid();
            if (!cVar1) {
                iVar2 = this_00->GetSize();
                if (iVar2 == 0) {
                    cVar1 = this_00->Write("", 520, 0);
                    uVar3 = 1;
                    if (!cVar1) {
                        new (local_160) std::__cxx_atomic_base_impl(5);
                    }
                } else {
                    uVar3 = (iVar2 + 519) / 520;
                }
                field_720 = uVar3;
            }
        }
        ((local_160 + 8))->~pair();
        return local_160._0_4_;
    }

    // 0x1002b8c60
    unsigned long Js5LocalCache::InitializeArchive(Js5ArchiveId js5ArchiveId) {
        unsigned int uVar2;
        unsigned long in_RAX;

        unsigned long local_28 = in_RAX;
        if (field_8 != "" == '\0') {
            new (&local_28) callstack::Callstack();
        } else {
            uVar2 = ((IndexFile*)field_672[(unsigned long)js5ArchiveId])->Initialize(js5ArchiveId, field_8);
            local_28 = (unsigned long)uVar2;
        }
        return local_28 & 4294967295;
    }

    // 0x1002b8d60
    uint8_t* Js5LocalCache::EnqueueRequestFromMainThread(Js5RemoteRequestData* js5RemoteRequestData) {
        IndexFile* this_00;
        eastl local_50;
        obj_iterator local_40;

        char cVar1 = field_8 == "";
        uint8_t** ppuVar2 = &DataStatus::MISSING;
        if (!cVar1) {
            cVar1 = js5RemoteRequestData->field_8 == g_masterIndexKey;
            if (!cVar1) {
                *(uint32_t*)(js5RemoteRequestData->field_28 + 4) = 2;
                if ((unsigned long)*(unsigned int*)&js5RemoteRequestData->field_8 == 255) {
                    this_00 = (IndexFile*)field_312;
                } else {
                    this_00 = &field_672[(unsigned long)*(unsigned int*)&js5RemoteRequestData->field_8];
                }
                cVar1 = this_00->GetEntry(js5RemoteRequestData->field_64,
                                          *(Js5GroupId*)((long)&js5RemoteRequestData->field_8 + 4));
                *(char*)&js5RemoteRequestData->field_72 = cVar1;
                if (cVar1) {
                    &local_50 = (eastl[16])field_696.find(js5RemoteRequestData->field_8);
                    &local_40 = (obj_iterator[16])field_696.end();
                    cVar1 = local_50 != local_40;
                    if (!cVar1) {
                        ((PacketT<Array<unsigned char>>*)(*((js5RemoteRequestData->field_28 + 12))).operator->())
                            ->Reserve((unsigned long)*(unsigned int*)((long)&js5RemoteRequestData->field_64 + 4));
                        if ((*(uint8_t*)&js5RemoteRequestData->field_16 & 1) != 0) {
                            LogAssert("(pRequestData->m_params.m_priority & Js5FetchPriority::URGENT) == 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/js5/Js5LocalCache.cpp",
                                      100, nullptr);
                        }
                        QueueToWorker(js5RemoteRequestData);
                        ppuVar2 = &DataStatus::NOTLOADED;
                    }
                }
            }
        }
        return *ppuVar2;
    }

    // 0x1002b8e90
    uint32_t Js5LocalCache::IndexFile::GetEntry(Js5LocalCache::IndexEntry& indexEntry, Js5GroupId js5GroupId) {
        uint64_t in_RAX;

        uint64_t uStack_28 = in_RAX;
        bool cVar1 = IsOpen();
        if ((!cVar1) || (cVar1 = Read((unsigned char*)((long)&uStack_28 + 2), 6, js5GroupId * 6), !cVar1)) {
            return 0;
        }
        *(unsigned int*)(indexEntry + 4) =
            (unsigned int)uStack_28._4_1_ | (unsigned int)uStack_28._3_1_ << 8 | (unsigned int)uStack_28._2_1_ << 16;
        unsigned int uVar3 = (unsigned int)uStack_28._6_1_ << 8 | (unsigned int)uStack_28._5_1_ << 16;
        unsigned int uVar2 = uStack_28._7_1_ | uVar3;
        *(unsigned int*)indexEntry = uVar2;
        return uVar2 != 0;
    }

    // 0x1002b8fa0
    void Js5LocalCache::QueueToWorker(Js5RemoteRequestData* js5RemoteRequestData) {
        if (field_9568.PushHead(js5RemoteRequestData) == 0) {
            field_9584->RaiseSignal();
        }
    }

    // 0x1002b8fd0
    uint8_t* Js5LocalCache::BlockingFetchFromMainThread(Js5RemoteRequestData* js5RemoteRequestData) {
        IndexFile* this_00;
        eastl local_48;
        obj_iterator local_38;

        char cVar1 = field_8 == "";
        if (!cVar1) {
            cVar1 = js5RemoteRequestData->field_8 == g_masterIndexKey;
            if (!cVar1) {
                *(uint32_t*)(js5RemoteRequestData->field_28 + 4) = 2;
                if ((unsigned long)*(unsigned int*)&js5RemoteRequestData->field_8 == 255) {
                    this_00 = (IndexFile*)field_312;
                } else {
                    this_00 = &field_672[(unsigned long)*(unsigned int*)&js5RemoteRequestData->field_8];
                }
                cVar1 = this_00->GetEntry(js5RemoteRequestData->field_64,
                                          *(Js5GroupId*)((long)&js5RemoteRequestData->field_8 + 4));
                *(char*)&js5RemoteRequestData->field_72 = cVar1;
                if (cVar1) {
                    &local_48 = (eastl[16])field_696.find(js5RemoteRequestData->field_8);
                    &local_38 = (obj_iterator[16])field_696.end();
                    cVar1 = local_48 != local_38;
                    if (!cVar1) {
                        ((PacketT<Array<unsigned char>>*)(*((js5RemoteRequestData->field_28 + 12))).operator->())
                            ->Reserve((unsigned long)*(unsigned int*)((long)&js5RemoteRequestData->field_64 + 4));
                        if ((*(uint8_t*)&js5RemoteRequestData->field_16 & 1) == 0) {
                            LogAssert("(pRequestData->m_params.m_priority & Js5FetchPriority::URGENT) != 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/js5/Js5LocalCache.cpp",
                                      134, nullptr);
                        }
                        return (uint8_t*)field_8832->FetchDataFromMainThread(js5RemoteRequestData);
                    }
                }
            }
        }
        return DataStatus::MISSING;
    }

    // 0x1002b90f0
    uint8_t* Js5LocalCache::DataFile::FetchDataFromMainThread(Js5RemoteRequestData* js5RemoteRequestData) {
        bool cVar1;
        uint8_t** ppuVar2;

        if (((*(char*)&js5RemoteRequestData->field_72 == '\0') ||
             (65534 < *(int*)((long)&js5RemoteRequestData->field_8 + 4))) ||
            (cVar1 = ReadFromFile(*this, js5RemoteRequestData), !cVar1)) {
            ppuVar2 = &DataStatus::MISSING;
        } else {
            ppuVar2 = &DataStatus::READY;
        }
        return *ppuVar2;
    }

    // 0x1002b9130
    void Js5LocalCache::InvalidateFromMainThread(const Js5RequestKey& js5RequestKey) {

        if (field_8 != "" == '\0') {
            LogAssert("m_cacheLocation != \"\"",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5LocalCache.cpp",
                      140, nullptr);
        }
        auto local_30 = field_696.emplace<Js5RequestKey const&>(js5RequestKey);
    }

    // 0x1002b91d0
    void Js5LocalCache::MainLogic() {
        bool bVar2;
        Js5RemoteRequestData* js5RemoteRequestData;
        Js5RemoteRequestData* pJVar3;
        IndexFile* this_00;

        if (!(field_8 == "")) {
            js5RemoteRequestData = (Js5RemoteRequestData*)field_9576.TakeStack();
            if (js5RemoteRequestData == nullptr) {
                bVar2 = false;
            } else {
                bVar2 = false;
                do {
                    pJVar3 = (Js5RemoteRequestData*)js5RemoteRequestData->HeapBeginPtr();
                    if (*(int*)(js5RemoteRequestData->field_28 + 4) == 0) {
                        FlushIndices();
                        if (js5RemoteRequestData == (Js5RemoteRequestData*)&field_9704) {
                            *(uint8_t*)&this[1].field_0 = 0;
                        }
                    } else {
                        if (*(char*)((long)&js5RemoteRequestData->field_72 + 1) != '\0') {
                            field_8832->InvalidateMainThreadReadBuffers();
                            this_00 = (IndexFile*)field_312;
                            if ((unsigned long)*(unsigned int*)&js5RemoteRequestData->field_8 != 255) {
                                this_00 = &field_672[(unsigned long)*(unsigned int*)&js5RemoteRequestData->field_8];
                            }
                            if (this_00->Update(js5RemoteRequestData)) {
                                field_696.erase(js5RemoteRequestData->field_8);
                                bVar2 = true;
                            }
                        }
                        field_9560->PushHead(js5RemoteRequestData);
                    }
                    js5RemoteRequestData = pJVar3;
                } while (pJVar3 != nullptr);
            }
            if (bVar2) {
                FlushIndices();
            }
        }
    }

    // 0x1002b9340
    void Js5LocalCache::FlushIndices() {
        field_312->FlushToDisk();
        auto this_00 = field_672.data();
        auto pIVar2 = field_672.end();
        for (; this_00 != pIVar2; this_00 = (IndexFile*)&this_00[1].field_7) {
            if (this_00->IsOpen() != '\0') {
                this_00->FlushToDisk();
            }
        }
    }

    // 0x1002b93b0
    void Js5LocalCache::DataFile::InvalidateMainThreadReadBuffers() {
        InvalidateBuffers();
    }

    // 0x1002b93c0
    uint64_t Js5LocalCache::IndexFile::Update(Js5RemoteRequestData* js5RemoteRequestData) {
        uint32_t uVar1;
        uint64_t uVar3;
        unsigned char local_1e;
        uint8_t local_1d;
        uint8_t local_1c;
        uint8_t local_1b;
        uint8_t local_1a;
        uint8_t local_19;

        if (IsOpen() == '\0') {
            uVar3 = 0;
        } else {
            uVar1 = *(uint32_t*)((long)&js5RemoteRequestData->field_64 + 4);
            local_1e = (unsigned char)((unsigned int)uVar1 >> 16);
            local_1d = (uint8_t)((unsigned int)uVar1 >> 8);
            local_1c = (uint8_t)uVar1;
            uVar1 = *(uint32_t*)&js5RemoteRequestData->field_64;
            local_1b = (uint8_t)((unsigned int)uVar1 >> 16);
            local_1a = (uint8_t)((unsigned int)uVar1 >> 8);
            local_19 = (uint8_t)uVar1;
            uVar3 = Write(&local_1e, 6, *(int*)((long)&js5RemoteRequestData->field_8 + 4) * 6);
        }
        return uVar3;
    }

    // 0x1002b9560
    void Js5LocalCache::ProvideDataFromNetThread(Js5RemoteRequestData* js5RemoteRequestData) {
        bool cVar1 = field_8 == "";
        if ((!cVar1) && (cVar1 = js5RemoteRequestData->field_8 == g_masterIndexKey, !cVar1)) {
            QueueToWorker(js5RemoteRequestData);
            return;
        }
        field_9560->PushHead(js5RemoteRequestData);
    }

    // 0x1002b95c0
    void Js5LocalCache::Run() {
        bool cVar1;
        int iVar2;
        Js5RemoteRequestData* js5RemoteRequestData;
        Js5RemoteRequestData* pJVar3;
        LockFreeStack<Js5RemoteRequestData>* this_01;

        this_thread::SetThreadName("Js5LocalCache");
        uint8_t* this_00 = field_8832;
        do {
            js5RemoteRequestData = (Js5RemoteRequestData*)field_9568.TakeStack();
            if (js5RemoteRequestData == nullptr) {
                field_9584->WaitForAndLowerSignal();
                iVar2 = 3;
            } else {
                do {
                    if (js5RemoteRequestData == nullptr) {
                        iVar2 = 0;
                        break;
                    }
                    pJVar3 = (Js5RemoteRequestData*)js5RemoteRequestData->HeapBeginPtr();
                    iVar2 = *(int*)(js5RemoteRequestData->field_28 + 4);
                    if (iVar2 == 2) {
                        this_00->FetchDataForWorkerThread(js5RemoteRequestData);
                        this_01 = field_9560;
                    LAB_1002b9656:
                        this_01->PushHead(js5RemoteRequestData);
                    LAB_1002b965e:
                        iVar2 = 0;
                    } else {
                        if (iVar2 == 1) {
                            this_00->WriteDataForWorkerThread(js5RemoteRequestData);
                            this_01 = (LockFreeStack<Js5RemoteRequestData>*)&field_9576;
                            goto LAB_1002b9656;
                        }
                        if (iVar2 != 0)
                            goto LAB_1002b965e;
                        this_00->FlushForWorkerThread();
                        cVar1 = *(char*)&js5RemoteRequestData->field_64;
                        field_9576.PushHead(js5RemoteRequestData);
                        if (!cVar1)
                            goto LAB_1002b965e;
                        iVar2 = 1;
                    }
                    js5RemoteRequestData = pJVar3;
                } while (iVar2 == 0);
            }
            if (iVar2 == 1) {
                return;
            }
        } while (true);
    }

    // 0x1002b96e0
    void Js5LocalCache::DataFile::FlushForWorkerThread() {
        field_360->FlushToDisk();
    }

    // 0x1002b9700
    void Js5LocalCache::DataFile::WriteDataForWorkerThread(Js5RemoteRequestData* js5RemoteRequestData) {
        WriteToFile(js5RemoteRequestData);
    }

    // 0x1002b9710
    void Js5LocalCache::DataFile::FetchDataForWorkerThread(Js5RemoteRequestData* js5RemoteRequestData) {
        uint8_t bVar1;

        int arg1 = 5;
        if ((*(char*)&js5RemoteRequestData->field_72 != '\0') &&
            (*(int*)((long)&js5RemoteRequestData->field_8 + 4) < 65535)) {
            bVar1 = ReadFromFile(*field_360, js5RemoteRequestData);
            arg1 = (unsigned int)(bVar1 ^ 1) * 5;
        }
        new (js5RemoteRequestData->field_28) std::__cxx_atomic_base_impl(arg1);
    }

    // 0x1002b9760
    uint64_t Js5LocalCache::QueueFlushToDisk() {
        uint64_t uVar2;

        if ((field_8 == "" == '\0') && (*(char*)&this[1].field_0 == '\0')) {
            *(uint8_t*)&this[1].field_0 = 1;
            QueueToWorker(&field_9704);
            uVar2 = 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1002b97b0
    void Js5LocalCache::EndAndJoin() {
        if (field_8 == "" == '\0') {
            QueueToWorker(&field_9784);
            std::thread::join();
            MainLogic();
        }
    }

    // 0x1002b9840
    unsigned int Js5LocalCache::BufferedRandomAccessFile::Open(const Filename& filename, int arg2, unsigned int arg3,
                                                               unsigned int arg4) {
        unsigned int uVar3;
        uint8_t local_178[320];

        new (local_178) callstack::Callstack();
        new ((local_178 + 8)) File(filename, arg2, local_178);
        *this = (*((local_178 + 8)));
        ((local_178 + 8))->~File();
        if (local_178->IsValid()) {
            if (local_178->GetX() == 2) {
                create(local_178);
            }
        }
        if (!(local_178->IsValid())) {
            field_316 = arg4;
            uVar3 = 1;
            if (arg3 != 0) {
                uVar3 = arg3;
            }
            field_312 = uVar3;
            if (arg4 == 0) {
                field_352 = 0;
                field_344 = 0;
                field_348 = 0;
                BufferAll();
            } else {
                field_320.set_max_size((unsigned long)(arg4 * arg3), 3);
                field_352 = 0;
                field_344 = 0;
                field_348 = 0;
            }
        }
        return local_178._0_4_;
    }

    // 0x1002b99b0
    void Js5LocalCache::BufferedRandomAccessFile::IsOpen() const {
        IsValid();
    }

    // 0x1002b99c0
    unsigned long Js5LocalCache::BufferedRandomAccessFile::Read(unsigned char* arg1, unsigned int arg2,
                                                                unsigned int arg3) {
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar1;
        bool cVar2;
        uint8_t bVar3;
        long lVar6;
        unsigned char* puVar8;
        void* pvVar10;
        size_t sVar11;
        unsigned int uVar12;
        uint8_t local_70[16];
        Callstack local_60;
        BufferedRandomAccessFile* local_38;

        BufferedRandomAccessFile* pBVar13 = (BufferedRandomAccessFile*)(unsigned long)arg3;
        unsigned long uVar9 = (unsigned long)arg2;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_48 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&field_320;
        unsigned char* local_50 = arg1;
        uint64_t uVar5 = local_48->end();
        unsigned int uVar15 = field_344;
        unsigned long uVar7 = (unsigned long)uVar15;
        unsigned int uVar14 = field_348 + uVar15;
        unsigned long local_40 = uVar9;
        if (arg3 < uVar15) {
        LAB_1002b9a73:
            pAVar1 = local_48;
            uVar12 = (arg3 + arg2 + field_312) - 1;
            uVar12 = uVar12 - uVar12 % field_312;
            if (field_316 == 0) {
                local_38 = pBVar13;
                if (field_344 != 0) {
                    LogAssert("m_bufferOffset == 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5LocalCache.cpp",
                              820, nullptr);
                }
                local_48->set_max_size((unsigned long)uVar12, 7);
                local_60._8_4_ = field_344;
                uVar15 = pAVar1->end() + local_60._8_4_;
                pBVar13 = local_38;
                if (uVar14 <= (unsigned int)local_38)
                    goto LAB_1002b9b0c;
            LAB_1002b9bf5:
                if (field_316 == 0) {
                    LogAssert("m_numPagesMax != 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5LocalCache.cpp",
                              846, nullptr);
                }
                if (field_312 < (unsigned int)local_40) {
                    new ((local_70 + 8)) callstack::Callstack();
                    uVar7 = 0;
                    cVar2 = seek((unsigned long)pBVar13 & 4294967295, 0, (local_70 + 8));
                    uVar9 = local_40;
                    if (cVar2) {
                        uVar7 = read(local_50, (unsigned int)local_40, 0, (local_70 + 8));
                        bVar3 = ((local_70 + 8))->IsValid();
                        uVar7 = (((uint64_t)((int64_t)(uVar7 >> 8)) << 8) |
                                 (uint8_t)(uVar7 == (uVar9 & 4294967295) & ~bVar3));
                    }
                    goto LAB_1002b9d37;
                }
                FlushToDisk();
                field_344 = (unsigned int)pBVar13;
                local_60 = callstack::Callstack();
                uVar7 = 0;
                cVar2 = seek((unsigned long)pBVar13 & 4294967295, 0, nullptr);
                if (!cVar2)
                    goto LAB_1002b9d37;
                puVar8 = (unsigned char*)local_48->data();
                uVar7 = 0;
                uVar9 = read(puVar8, field_312, 0, &local_60);
                cVar2 = local_60.IsValid();
                if (cVar2)
                    goto LAB_1002b9d37;
                sVar11 = local_40 & 4294967295;
                if (uVar9 < sVar11)
                    goto LAB_1002b9d34;
                field_348 = (unsigned int)uVar9;
                pvVar10 = (void*)local_48->data();
                goto LAB_1002b9cb9;
            }
            uVar15 = uVar15 + (int)uVar5;
            if ((unsigned int)pBVar13 < uVar14)
                goto LAB_1002b9bf5;
        LAB_1002b9b0c:
            if (uVar15 < uVar12)
                goto LAB_1002b9bf5;
            uVar15 = field_348;
            local_38 = pBVar13;
            uVar7 = local_48->end();
            if (uVar7 < uVar15 + (uVar12 - uVar14)) {
                LogAssert("m_bufferValid + (newSize - validFenceOffset) <= m_buffer.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                          "Js5LocalCache.cpp",
                          829, nullptr);
            }
            new (local_70) callstack::Callstack();
            uVar7 = 0;
            cVar2 = seek((unsigned long)uVar14, 0, local_70);
            pAVar1 = local_48;
            if (!cVar2)
                goto LAB_1002b9d37;
            puVar8 = (unsigned char*)local_48->data();
            uVar7 = read(puVar8, uVar12 - uVar14, field_348, local_70);
            cVar2 = local_70->IsValid();
            if ((cVar2) || (uVar9 = local_40 & 4294967295, uVar7 < uVar9)) {
            LAB_1002b9d34:
                uVar7 = 0;
                goto LAB_1002b9d37;
            }
            lVar6 = pAVar1->data();
            _memcpy(local_50, (void*)((((unsigned long)local_38 & 4294967295) + lVar6) - (unsigned long)field_344),
                    uVar9);
            field_348 = field_348 + (int)uVar7;
        } else {
            uVar12 = uVar14 - arg3;
            if (uVar14 < arg3 || uVar12 == 0)
                goto LAB_1002b9a73;
            local_38 = pBVar13;
            if (uVar14 < arg3 + arg2) {
                local_60._8_8_ = uVar5;
                lVar6 = local_48->data();
                puVar8 = local_50;
                uVar7 = (unsigned long)local_38 & 4294967295;
                local_38 = this;
                _memcpy(local_50, (void*)((uVar7 + lVar6) - (unsigned long)field_344), (unsigned long)uVar12);
                local_40 = (unsigned long)((int)local_40 - uVar12);
                local_50 = puVar8 + uVar12;
                pBVar13 = (BufferedRandomAccessFile*)(unsigned long)uVar14;
                uVar5 = local_60._8_8_;
                this = local_38;
                goto LAB_1002b9a73;
            }
            lVar6 = local_48->data();
            pvVar10 = (void*)((((unsigned long)local_38 & 4294967295) + lVar6) - (unsigned long)field_344);
            sVar11 = local_40 & 4294967295;
        LAB_1002b9cb9:
            _memcpy(local_50, pvVar10, sVar11);
        }
        uVar7 = (((uint64_t)((int64_t)(uVar7 >> 8)) << 8) | (uint8_t)1);
    LAB_1002b9d37:
        return uVar7 & 4294967295;
    }

    // 0x1002b9d70
    uint64_t Js5LocalCache::BufferedRandomAccessFile::Write(const unsigned char* arg1, unsigned int arg2,
                                                            unsigned int arg3) {
        bool cVar1;
        long lVar4;
        unsigned int* puVar5;
        unsigned long uVar6;
        unsigned int uVar10;
        unsigned int uVar11;
        unsigned int uVar12;
        uint8_t local_58[20];
        unsigned int local_3c;

        local_58._8_8_ = &field_320;
        int iVar2 = local_58._8_8_->end();
        unsigned int uVar3 = field_344;
        unsigned int local_68 = iVar2 + uVar3;
        unsigned int local_38 = field_348 + uVar3;
        unsigned int local_44 = arg3 + arg2;
        if (field_316 == 0) {
            if (uVar3 != 0) {
                LogAssert("m_bufferOffset == 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                          "Js5LocalCache.cpp",
                          929, nullptr);
            }
            uVar12 = (local_44 + field_312) - 1;
            uVar12 = uVar12 - uVar12 % field_312;
            uVar3 = local_58._8_8_->end();
            if (uVar3 < uVar12) {
                local_58._8_8_->set_max_size((unsigned long)uVar12, 7);
            }
            if (local_38 < arg3) {
                lVar4 = local_58._8_8_->data();
                ___bzero((unsigned long)field_348 + lVar4, arg3 - local_38);
                local_38 = arg3;
                field_348 = arg3 - field_344;
                local_68 = uVar12 + field_344;
            }
        }
        uVar3 = local_44;
        unsigned long uVar9 = (unsigned long)arg3;
        if ((field_344 < local_44) && (arg3 < local_38)) {
            local_3c = arg3;
            puVar5 = std::max<unsigned int>(field_344, arg3);
            uVar12 = *puVar5;
            puVar5 = std::min<unsigned int>(local_38, local_44);
            uVar9 = (unsigned long)local_3c;
            uVar10 = uVar12 - local_3c;
            if ((uVar12 < local_3c || uVar10 == 0) || (uVar3 <= *puVar5)) {
                uVar11 = *puVar5 - uVar12;
                lVar4 = local_58._8_8_->data();
                _memcpy((void*)((unsigned long)(uVar12 - field_344) + lVar4), arg1 + uVar10, (unsigned long)uVar11);
                field_352 = 1;
                uVar6 = 0;
                uVar3 = 0;
                if (uVar12 == arg3) {
                    uVar6 = (unsigned long)uVar11;
                    uVar3 = uVar11;
                }
                local_3c = local_3c + uVar3;
                uVar9 = (unsigned long)local_3c;
                arg1 = arg1 + uVar6;
                uVar3 = arg2 - uVar11;
            } else {
                uVar3 = arg2;
            }
        } else {
            uVar3 = arg2;
        }
        uVar12 = arg2;
        uVar10 = 0;
        if (uVar3 != 0) {
            if (((unsigned int)uVar9 == local_38) && (local_44 <= local_68)) {
                field_352 = 1;
                local_3c = (unsigned int)uVar9;
                lVar4 = local_58._8_8_->data();
                _memcpy((void*)((unsigned long)field_348 + lVar4), arg1, (unsigned long)uVar3);
                uVar9 = (unsigned long)local_3c;
                field_348 = field_348 + uVar12;
            } else {
                uVar10 = uVar3;
            }
        }
        uint64_t uVar7 = 1;
        if (uVar10 != 0) {
            if (field_316 == 0) {
                LogAssert("m_numPagesMax > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                          "Js5LocalCache.cpp",
                          996, nullptr);
            }
            FlushToDisk();
            if (uVar10 < field_312) {
                field_352 = 1;
                _memcpy((void*)local_58._8_8_->data(), arg1, (unsigned long)uVar10);
                field_344 = (unsigned int)uVar9;
                field_348 = uVar10;
                uVar7 = 1;
            } else {
                new (local_58) callstack::Callstack();
                cVar1 = seek(uVar9, 0, nullptr);
                if (!cVar1) {
                    uVar7 = 0;
                } else {
                    uVar9 = write(arg1, uVar10, local_58);
                    cVar1 = local_58->IsValid();
                    uVar7 = 0;
                    if ((!cVar1) && (uVar9 == uVar10)) {
                        uVar7 = 1;
                    }
                }
            }
        }
        return uVar7;
    }

    // 0x1002ba070
    void Js5LocalCache::BufferedRandomAccessFile::InvalidateBuffers() {
        if (field_352 != '\0') {
            LogAssert("!m_bufferDirty",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5LocalCache.cpp",
                      1028, nullptr);
        }
        field_352 = 0;
        field_344 = 0;
        field_348 = 0;
    }

    // 0x1002ba0c0
    uint64_t Js5LocalCache::BufferedRandomAccessFile::GetSize() {
        bool cVar1 = seek(0, 2, nullptr);
        uint64_t uVar2 = 4294967295;
        if (cVar1) {
            uVar2 = tell();
        }
        return uVar2;
    }

    // 0x1002ba100
    unsigned long
    Js5LocalCache::DataFile::ReadFromFile(Js5LocalCache::BufferedRandomAccessFile& bufferedRandomAccessFile,
                                          Js5RemoteRequestData* js5RemoteRequestData) {
        int iVar1;
        bool bVar2;
        uint64_t this_00;
        Js5RemoteRequestData* pJVar3;
        bool cVar4;
        int iVar5;
        unsigned int arg3;
        unsigned int uVar10;
        DataFile* this_01;
        unsigned long uVar11;
        unsigned int arg2;
        int iVar12;
        uint8_t local_80[24];
        DataFile* local_68;
        uint8_t local_60[24];
        unsigned long local_48;
        Js5RemoteRequestData* local_40;

        auto pDVar6 = *(*((js5RemoteRequestData->field_28 + 12)));
        auto puVar7 = pDVar6->GetDataPtr();
        unsigned long uVar8 = pDVar6->GetTextureAtlas();
        unsigned long uVar9 = pDVar6->GetTextureAtlas();
        if (uVar9 < 16777216) {
            uVar11 = uVar8 & 4294967295;
            this_01 = pDVar6;
            local_60._16_8_ = puVar7;
            uVar9 = pDVar6->GetTextureAtlas();
            if (uVar11 <= uVar9) {
                iVar12 = *(int*)&js5RemoteRequestData->field_64;
                local_80._16_8_ = pDVar6;
                local_48 = uVar8;
                if ((iVar12 == 0) || (*(char*)&js5RemoteRequestData->field_72 == '\0')) {
                    LogAssert("block != 0 && entry.m_wasInIndex",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5LocalCache.cpp",
                              518, nullptr);
                }
                local_60._12_4_ = *(uint32_t*)&js5RemoteRequestData->field_8;
                local_60._0_4_ = *(int*)((long)&js5RemoteRequestData->field_8 + 4);
                local_60._4_2_ = 0;
                local_40 = js5RemoteRequestData;
                do {
                    pDVar6 = (DataFile*)bufferedRandomAccessFile;
                    if (iVar12 == 0) {
                        *(uint8_t*)&local_40->field_72 = 0;
                        goto LAB_1002ba2d7;
                    }
                    cVar4 =
                        ReadBlockHeader(this_01, (BlockHeader*)local_80,
                                        (BufferedRandomAccessFile*)(DataFile*)bufferedRandomAccessFile, iVar12 * 520);
                    if ((!cVar4) || (cVar4 = local_80->Matches(*local_60), !cVar4)) {
                        *(uint8_t*)&local_40->field_72 = 0;
                        uVar11 = 0;
                        break;
                    }
                    arg3 = iVar12 * 520 + 8;
                    uVar8 = (unsigned long)arg3;
                    uVar10 = (unsigned int)local_48;
                    arg2 = 512;
                    if (uVar10 < 512) {
                        arg2 = uVar10;
                    }
                    cVar4 = pDVar6->Read(local_60._16_8_, arg2, arg3);
                    pJVar3 = local_40;
                    this_00 = local_80._16_8_;
                    if (!cVar4) {
                        *(uint8_t*)&local_40->field_72 = 0;
                    LAB_1002ba297:
                        bVar2 = false;
                        uVar11 = 0;
                    } else if (uVar10 < 513) {
                        if (local_80._8_4_ != 0)
                            goto LAB_1002ba297;
                        if ((*(int*)((long)&local_40->field_16 + 4) != 0) || (*(int*)&local_40->field_24 != 0)) {
                            local_68 = (DataFile*)local_80._16_8_->GetDataPtr();
                            uVar9 = this_00->GetTextureAtlas();
                            pDVar6 = local_68;
                            iVar5 = CRC32((unsigned char*)local_68, uVar9, 4294967295);
                            iVar1 = *(int*)((long)&pJVar3->field_16 + 4);
                            if (iVar5 != iVar1) {
                                bVar2 = false;
                                uVar11 = (((uint64_t)((int64_t)(uVar8 >> 8)) << 8) |
                                          (uint8_t)(iVar5 == iVar1 & (uint8_t)uVar11)) &
                                         4294967295;
                                goto LAB_1002ba2b7;
                            }
                        }
                        uVar11 = (((uint64_t)((int64_t)(uVar11 >> 8)) << 8) | (uint8_t)1);
                        bVar2 = false;
                    } else {
                        local_60._4_2_ = local_60._4_2_ + 1;
                        local_60._16_8_ = local_60._16_8_ + (unsigned long)arg2;
                        local_48 = (unsigned long)(uVar10 - arg2);
                        bVar2 = true;
                        iVar12 = local_80._8_4_;
                    }
                LAB_1002ba2b7:
                    this_01 = pDVar6;
                } while (bVar2);
                goto LAB_1002ba2da;
            }
        }
    LAB_1002ba2d7:
        uVar11 = 0;
    LAB_1002ba2da:
        return uVar11 & 18446744073709551361;
    }

    // 0x1002ba2f0
    void Js5LocalCache::DataFile::WriteToFile(Js5RemoteRequestData* js5RemoteRequestData) {
        unsigned int uVar1;
        bool bVar2;
        bool cVar4;
        unsigned int uVar7;
        DataFile* blockHeader;
        int iVar8;
        unsigned int uVar9;
        unsigned int arg2;
        uint8_t local_78[8];
        unsigned int local_70;
        Js5RemoteRequestData* local_60;
        unsigned int local_4c;
        uint8_t local_48[24];

        *(uint8_t*)((long)&js5RemoteRequestData->field_72 + 1) = 0;
        auto this_00 = *(*((js5RemoteRequestData->field_28 + 12)));
        auto local_58 = this_00->GetDataPtr();
        if (*(char*)&js5RemoteRequestData->field_72 == '\0') {
            uVar9 = 0;
        } else {
            uVar9 = *(unsigned int*)&js5RemoteRequestData->field_64;
        }
        unsigned int uVar5 = uVar9;
        if (uVar9 == 0) {
            uVar5 = field_720;
        }
        *(unsigned int*)&js5RemoteRequestData->field_64 = uVar5;
        uVar5 = this_00->GetTextureAtlas();
        if (this_00->GetTextureAtlas() < 16777216) {
            local_48._16_8_ = field_360;
            *(unsigned int*)((long)&js5RemoteRequestData->field_64 + 4) = uVar5;
            local_48._12_4_ = *(uint32_t*)&js5RemoteRequestData->field_8;
            local_48._0_4_ = *(int*)((long)&js5RemoteRequestData->field_8 + 4);
            local_48._4_2_ = 0;
            local_60 = js5RemoteRequestData;
            do {
                uVar1 = field_720;
                if (uVar1 <= uVar9) {
                    uVar9 = 0;
                }
                arg2 = 512;
                if ((int)uVar5 < 512) {
                    arg2 = uVar5;
                }
                uVar7 = uVar9;
                if (uVar9 == 0) {
                    uVar7 = uVar1;
                }
                uVar7 = uVar7 * 520;
                local_48._8_4_ = 0;
                if (uVar9 == 0) {
                    field_720 = uVar1 + 1;
                    bVar2 = true;
                LAB_1002ba43b:
                    if ((int)uVar5 < 513) {
                        if (local_48._8_4_ != 0) {
                            bVar2 = true;
                        }
                        local_48._8_4_ = 0;
                    } else if ((local_48._8_4_ == 0) || (field_720 <= (unsigned int)local_48._8_4_)) {
                        local_48._8_4_ = field_720;
                        bVar2 = true;
                    }
                    if (bVar2) {
                        cVar4 = WriteBlockHeader(this_00, (BlockHeader*)local_48,
                                                 (BufferedRandomAccessFile*)local_48._16_8_, uVar7);
                        iVar8 = 1;
                        if (!cVar4)
                            goto LAB_1002ba3a6;
                    }
                    if (0 < (int)uVar5) {
                        this_00 = (DataFile*)local_48._16_8_;
                        cVar4 = local_48._16_8_->Write(local_58, arg2, uVar7 + 8);
                        iVar8 = 1;
                        if (!cVar4)
                            goto LAB_1002ba3a6;
                    }
                    if ((int)uVar5 < 513) {
                        iVar8 = 2;
                        if ((int)uVar5 < 512) {
                            this_00 = (DataFile*)local_48._16_8_;
                            local_48._16_8_->Write("", 512 - arg2, uVar7 + 8 + arg2);
                        }
                    } else {
                        uVar5 = uVar5 - arg2;
                        local_58 = local_58 + (int)arg2;
                        local_48._4_2_ = local_48._4_2_ + 1;
                        iVar8 = 0;
                        uVar9 = local_48._8_4_;
                    }
                } else {
                    blockHeader = (DataFile*)local_78;
                    local_4c = uVar7;
                    cVar4 = ReadBlockHeader(this_00, (BlockHeader*)blockHeader,
                                            (BufferedRandomAccessFile*)local_48._16_8_, uVar7);
                    if (cVar4) {
                        cVar4 = blockHeader->Matches(*local_48);
                        this_00 = blockHeader;
                        if (cVar4) {
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
                *(uint8_t*)((long)&local_60->field_72 + 1) = 1;
            }
        }
    }

    // 0x1002ba550
    void Js5LocalCache::DataFile::ReadBlockHeader(Js5LocalCache::DataFile::BlockHeader& blockHeader,
                                                  Js5LocalCache::BufferedRandomAccessFile& bufferedRandomAccessFile,
                                                  unsigned int arg3) {
        unsigned short local_20;
        unsigned short local_1e;
        uint8_t local_1c;
        uint8_t local_1b;
        uint8_t local_1a;
        uint8_t local_19;

        if (bufferedRandomAccessFile.Read(&local_20, 8, arg3) != '\0') {
            blockHeader.field_0 = ((unsigned int)local_20 | (local_20 & 255) << 16) >> 8;
            blockHeader.field_4 = local_1e << 8 | local_1e >> 8;
            *(unsigned int*)&blockHeader.field_8 =
                (unsigned int)local_1a | (unsigned int)local_1b << 8 | (unsigned int)local_1c << 16;
            blockHeader.field_12 = (unsigned int)local_19;
        }
    }

    // 0x1002ba5e0
    void Js5LocalCache::DataFile::WriteBlockHeader(const Js5LocalCache::DataFile::BlockHeader& blockHeader,
                                                   Js5LocalCache::BufferedRandomAccessFile& bufferedRandomAccessFile,
                                                   unsigned int arg3) {
        unsigned short uVar1 = (unsigned short)blockHeader.field_0;
        unsigned short local_18 = uVar1 << 8 | uVar1 >> 8;
        unsigned short local_16 = blockHeader.field_4 << 8 | (unsigned short)blockHeader.field_4 >> 8;
        uint32_t uVar2 = *(uint32_t*)&blockHeader.field_8;
        uint8_t local_14 = (uint8_t)((unsigned int)uVar2 >> 16);
        uint8_t local_13 = (uint8_t)((unsigned int)uVar2 >> 8);
        uint8_t local_12 = (uint8_t)uVar2;
        uint8_t local_11 = (uint8_t)blockHeader.field_12;
        bufferedRandomAccessFile.Write(&local_18, 8, arg3);
    }

    // 0x1002ba650
    uint16_t
    Js5LocalCache::DataFile::BlockHeader::Matches(const Js5LocalCache::DataFile::BlockHeader& blockHeader) const {
        if ((field_0 == blockHeader.field_0) && (field_12 == blockHeader.field_12)) {
            return field_4 == blockHeader.field_4;
        }
        return 0;
    }

    // 0x1002ba680
    void Js5LocalCache::BufferedRandomAccessFile::FlushToDisk() {
        if ((field_352 != '\0') && (field_348 != 0)) {
            if (seek((unsigned long)field_344, 0, nullptr) != '\0') {
                write((unsigned char*)field_320.data(), field_348, nullptr);
            }
            field_352 = 0;
        }
    }

    // 0x1002ba710
    uint64_t Js5LocalCache::BufferedRandomAccessFile::BufferAll() {
        unsigned char* arg1;
        unsigned int uVar4;

        unsigned int arg2 = GetSize();
        if (field_316 == 0) {
            uVar4 = (arg2 + field_312) - 1;
            field_320.set_max_size((long)(int)(uVar4 - uVar4 % field_312), 3);
        } else {
            if (field_320.end() < (int)arg2) {
                arg2 = field_320.end();
            }
        }
        uint64_t uVar5 = 0;
        if (seek(0, 0, nullptr) != '\0') {
            arg1 = (unsigned char*)field_320.data();
            uVar5 = 0;
            if (read(arg1, arg2, 0, nullptr) != 0) {
                field_344 = 0;
                field_348 = arg2;
                field_352 = 0;
                uVar5 = 1;
            }
        }
        return uVar5;
    }

    // 0x1002ba7e0
    void Js5LocalCache::BufferedRandomAccessFile::Close() {
        close(nullptr);
        field_344 = 0;
        field_348 = 0;
        field_352 = 0;
    }

    // 0x1002e03c0
    void Js5LocalCache::Initialize(Filename const&)::$_1::operator()() const {
        Run(field_0);
    }

} // namespace jag::oldscape::jagex3
