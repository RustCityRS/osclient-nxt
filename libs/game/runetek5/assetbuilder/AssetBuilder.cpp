// libs/game/runetek5/assetbuilder/AssetBuilder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "AssetBuilder.h"

namespace jag::game {
    // 0x100659570
    AssetBuilder::AssetBuilder(unsigned int arg1) {
        unsigned int uVar1;
        AssetBuilder* local_70;
        unsigned int local_68;

        uint8_t* this_00 = &field_8;
        new (this_00) eastl::vector<std::thread>();
        field_40 = nullptr;
        field_48 = nullptr;
        field_56 = '\x01';
        new (&field_64) eastl::vector<shared_ptr<AssetJob>>();
        new (&field_96) std::condition_variable();
        uint8_t* local_50 = &field_144;
        new (local_50) std::mutex();
        uint8_t* local_48 = &field_208;
        uint8_t* local_60 = &field_64;
        uint8_t* local_58 = &field_96;
        new (local_48) eastl::priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob>>();
        uint8_t* local_40 = &field_248;
        new (local_40) std::mutex();
        uint8_t* local_38 = &field_312;
        new (local_38) eastl::vector<AssetWorkerJob>();
        this_00->reserve((unsigned long)arg1);
        if (arg1 != 0) {
            uVar1 = 0;
            do {
                local_70 = this;
                local_68 = uVar1;
                this_00->emplace_back<AssetBuilder::AssetBuilder(unsigned int)::__0>(&local_70);
                uVar1 = uVar1 + 1;
            } while (arg1 != uVar1);
        }
    }

    // 0x1006597a0
    AssetBuilder::~AssetBuilder() {
        field_56 = '\0';
        std::condition_variable::notify_all();
        uint8_t* this_00 = &field_8;
        long lVar1 = this_00->HeapBeginPtr();
        long lVar2 = this_00->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 8) {
            std::thread::join();
        }
        field_312.~vector();
        (&field_248)->~mutex();
        field_208.~priority_queue();
        (&field_144)->~mutex();
        (&field_96)->~condition_variable();
        field_64.~vector();
        this_00->~vector();
    }

    // 0x1006598f0
    void AssetBuilder::Initialise(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider) {
        field_40 = js5ResourceProvider;
        field_48 = configProvider;
    }

    // 0x100659900
    void AssetBuilder::ThreadWrapper(int arg1) {
        this_thread::GetThreadName();
        bool cVar1 = field_56;
        while (cVar1) {
            AssetBuilderThread(arg1);
            cVar1 = field_56;
        }
    }

    // 0x100659940
    void AssetBuilder::AssetBuilderThread(int arg1) {
        bool bVar1;
        int iVar2;
        AssetWorkerJob* assetWorkerJob;
        type* arg2;
        uint8_t local_b0[32];
        unique_lock<std::mutex> local_90;
        ActiveComponent local_80;

        mutex* local_60 = (mutex*)&field_144;
        condition_variable* local_48 = (condition_variable*)&field_96;
        priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob>>* local_40 =
            (priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob>>*)&field_208;
        mutex* local_58 = (mutex*)&field_248;
        vector<AssetWorkerJob>* local_50 = (vector<AssetWorkerJob>*)&field_312;
        do {
            if (field_56 == '\0') {
                return;
            }
            new (local_b0) AssetWorkerJob();
            local_90 = std::unique_lock<std::mutex>(*local_60);
            std::condition_variable::wait<AssetBuilder::AssetBuilderThread(int)::__1>(local_48, &local_90, (__1*)this);
            if (field_56 == '\0') {
                iVar2 = 1;
            LAB_100659ac6:
                bVar1 = false;
            } else {
                assetWorkerJob = (AssetWorkerJob*)local_40->top();
                *local_b0 = *assetWorkerJob;
                iVar2 = ((Option<option::EnumBrightness>*)(*((local_b0 + 16))).operator->())->GetValue();
                if ((iVar2 != -1) && (iVar2 != arg1)) {
                    (logger::default_logger())
                        ->Log(false, 8,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "assetbuilder/AssetBuilder.cpp",
                              100, "Job was retrieved on wrong asset thread (wanted %i), retrying...", iVar2);
                    local_80 = AssetWorkerJob();
                    *local_b0 = local_80;
                    local_90.unlock();
                    std::condition_variable::notify_all();
                    local_80.duration<int>(5, arg2);
                    std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>(local_80);
                    iVar2 = 2;
                    goto LAB_100659ac6;
                }
                local_40->pop();
                iVar2 = 0;
                bVar1 = true;
            }
            if (bVar1) {
                ProcessJob(*local_b0, *((local_b0 + 16)), arg1);
                local_80 = std::unique_lock<std::mutex>(*local_58);
                local_50->emplace_back<AssetWorkerJob>(*local_b0);
                iVar2 = 0;
            }
            if (iVar2 == 1) {
                return;
            }
        } while (true);
    }

    // 0x100659d20
    void AssetBuilder::ProcessJob(const shared_ptr<AssetWorker>& assetWorker, const shared_ptr<AssetJob>& assetJob,
                                  int arg3) {
        AssetWorker* this_00;
        Option<float>* this_01;
        shared_ptr<void>* arg1;
        AssetJob* pAVar2;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_02;
        bool cVar3;
        long* plVar5;
        uint8_t* puVar6;
        shared_ptr* this_03;
        ActiveComponent local_58;
        scoped_lock<std::mutex> local_38;

        auto pSVar1 = assetJob.operator->();
        int iVar4 = pSVar1->GetCompletedGold();
        if (iVar4 == 3) {
            this_00 = (AssetWorker*)assetWorker.operator->();
            this_01 = (Option<float>*)assetJob.operator->();
            arg1 = (shared_ptr<void>*)this_01->GetDefaultValue();
            this_00->SetRequestData(*arg1);
            pAVar2 = (AssetJob*)assetJob.operator->();
            pAVar2->AwaitWorkerService();
        }
        pSVar1 = (StockPlayerOffer*)assetJob.operator->();
        iVar4 = pSVar1->GetCompletedGold();
        if (iVar4 == 4) {
            plVar5 = (long*)assetWorker.operator->();
            puVar6 = (uint8_t*)(**(void (**)(...))(*plVar5 + 24))(plVar5);
            if (puVar6 == DataStatus::NOTLOADED) {
                local_38 = std::scoped_lock(field_144);
                local_58 = AssetWorkerJob(assetWorker, assetJob);
                field_208.push(local_58);
            } else {
                if (puVar6 == DataStatus::READY) {
                    this_02 =
                        (compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)assetWorker.operator->();
                    this_03 = (shared_ptr*)this_02->second();
                    cVar3 = shared_ptr::operator_cast_to_bool(this_03);
                    pAVar2 = (AssetJob*)assetJob.operator->();
                    if (cVar3) {
                        pAVar2->WorkerDone(0, *this_03);
                        return;
                    }
                    local_58 = shared_ptr();
                    pAVar2->WorkerDone(1, local_58);
                } else {
                    if (puVar6 != DataStatus::MISSING) {
                        return;
                    }
                    pAVar2 = (AssetJob*)assetJob.operator->();
                    local_58 = shared_ptr();
                    pAVar2->WorkerDone(2, local_58);
                }
            }
        }
    }

    // 0x100659f70
    void AssetBuilder::SubmitJob(const shared_ptr<AssetJob>& assetJob) {
        field_64.emplace_back<shared_ptr<AssetJob> const&>(assetJob);
        ((AssetJob*)assetJob.operator->())->Queued();
    }

    // 0x10065a040
    void AssetBuilder::Service() {
        if (field_48 == nullptr) {
            LogAssert("m_configProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/AssetBuilder.cpp",
                      135, nullptr);
        }
        if (field_40 == nullptr) {
            LogAssert("m_resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/AssetBuilder.cpp",
                      136, nullptr);
        }
        uint8_t* this_00 = &field_64;
        auto psVar1 = this_00->HeapBeginPtr();
        auto psVar2 = this_00->end();
        psVar1 = eastl::remove_if<shared_ptr<AssetJob>*, AssetBuilder::Service()::__2>(psVar1, psVar2, (__2*)this);
        psVar2 = (shared_ptr<AssetJob>*)this_00->end();
        this_00->erase(psVar1, psVar2);
        unique_lock<std::mutex> local_30(field_248);
        field_312.clear();
    }

    // 0x10065a1f0
    void AssetBuilder::RunFunctionOnAllThreads(const std::function<void()>& callback) {
        long* plVar2;
        AssetJob* pAVar3;
        unsigned long uVar4;
        unsigned long uVar5;
        ActiveComponent local_b0;
        ReturnValue local_90;
        shared_ptr<oldscape::dash3d::Decor> local_80;
        uint32_t local_70[4];
        function<void_()>* local_60;
        mutex* local_50;
        priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob>>* local_48;
        scoped_lock<std::mutex> local_40;

        vector<eastl::pair<int, int>>* local_58 = (vector<eastl::pair<int, int>>*)&field_8;
        unsigned int local_34 = 0;
        local_60 = callback;
        long lVar1 = local_58->size();
        if (lVar1 != 0) {
            local_50 = (mutex*)&field_144;
            local_48 = (priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob>>*)&field_208;
            do {
                local_70[0] = 1;
                make_shared<std::function<void()>, std::function<void()> const&>((ReturnValue*)&local_b0, local_60);
                bucket_make_shared<BuildFunctionMain, int, shared_ptr<std::function<void()>>, unsigned int&>(
                    &local_90, (int*)local_70, (shared_ptr<std::function<void_()> _>*)&local_b0, &local_34);
                plVar2 = (long*)local_90.operator->();
                (**(void (**)(...))(*plVar2 + 24))((shared_ptr<AssetWorker>*)local_70, plVar2);
                pAVar3 = (AssetJob*)local_90.operator->();
                pAVar3->Queued();
                plVar2 = (long*)local_90.operator->();
                (**(void (**)(...))(*plVar2 + 16))(plVar2, field_40, field_48);
                pAVar3 = (AssetJob*)local_90.operator->();
                pAVar3->AwaitWorkerReply();
                local_40 = std::scoped_lock(*local_50);
                local_80 = shared_ptr(&local_90);
                local_b0 = AssetWorkerJob(*local_70, local_80);
                local_48->push(local_b0);
                local_34 = local_34 + 1;
                uVar5 = (unsigned long)local_34;
                uVar4 = local_58->size();
            } while (uVar5 < uVar4);
        }
        std::condition_variable::notify_all();
    }

    // 0x10065e140
    void AssetBuilder::AssetBuilder(unsigned int)::$_0::operator()() const {
        AssetBuilder* this_00 = field_0;
        eastl::string local_40((CtorSprintf*)"AssetWorker-%u", (char*)(unsigned long)field_8);
        this_thread::SetThreadName((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
        BucketManager::Init(8, 0);
        BucketManager::CreateBucket(32, 4096, 32);
        BucketManager::CreateBucket(64, 8192, 64);
        BucketManager::CreateBucket(128, 16, 64);
        BucketManager::CreateBucket(512, 8, 64);
        BucketManager::CreateBucket(1024, 512, 64);
        BucketManager::CreateBucket(2048, 8, 64);
        BucketManager::CreateBucket(4096, 4, 64);
        BucketManager::CreateBucket(8192, 4, 64);
        BucketManager::CreateBucket(16384, 4, 64);
        BucketManager::CreateBucket(32768, 2, 64);
        ThreadWrapper(this_00, field_8);
        BucketManager::PrintMetrics();
    }

    // 0x10065e420
    bool AssetBuilder::AssetBuilderThread(int)::$_1::operator()() const {
        long lVar1 = field_0;
        bool cVar2 = ((lVar1 + 208))->empty();
        bool bVar3 = true;
        if (cVar2) {
            bVar3 = *(char*)(lVar1 + 56) == '\0';
        }
        return bVar3;
    }

} // namespace jag::game
