// libs/game/runetek5/assetbuilder/AssetBuilder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "AssetBuilder.h"

namespace jag::game {
    // 0x100659570, 336 bytes, base-object constructor, placed by class name
    // AssetBuilder::AssetBuilder(unsigned int)
    void AssetBuilder::AssetBuilder(uint param_1) {
        undefined1* this_00;
        uint uVar1;
        __0 local_70;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        field_0 = &PTR__AssetBuilder_100f0dc38;
        this_00 = &field_8;
        new (this_00) eastl::vector<std::thread, eastl::allocator>();
        field_40 = (Js5ResourceProvider*)0;
        field_48 = (ConfigProvider*)0;
        field_56 = '\x01';
        new (&field_64) eastl::vector<shared_ptr<AssetJob>, eastl::allocator>();
        new (&field_96) std::condition_variable();
        local_50 = &field_144;
        new (local_50) std::mutex();
        local_48 = &field_208;
        local_60 = &field_64;
        local_58 = &field_96;
        new (local_48) eastl::priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob, eastl::allocator>,
                                             eastl::less<AssetWorkerJob>>();
        local_40 = &field_248;
        new (local_40) std::mutex();
        local_38 = &field_312;
        new (local_38) eastl::vector<AssetWorkerJob, eastl::allocator>();
        this_00->reserve((ulong)param_1);
        if (param_1 != 0) {
            uVar1 = 0;
            do {
                local_70.field_0 = this;
                local_70.field_8 = uVar1;
                eastl::vector<std::thread, eastl::allocator>::emplace_back<AssetBuilder::AssetBuilder(
                    unsigned int)::__0>((vector<std::thread, eastl::allocator>*)this_00, &local_70);
                uVar1 = uVar1 + 1;
            } while (param_1 != uVar1);
        }
    }

    // 0x100659790, 16 bytes, complete-object constructor, placed by class name
    // AssetBuilder::AssetBuilder(unsigned int): jumps straight to the base-object constructor

    // 0x1006597a0, 288 bytes, base-object destructor, placed by class name
    // AssetBuilder::~AssetBuilder()
    void AssetBuilder::~AssetBuilder() {
        undefined1* this_00;
        long lVar1;
        long lVar2;

        field_0 = &PTR__AssetBuilder_100f0dc38;
        field_56 = '\0';
        std::condition_variable::notify_all();
        this_00 = &field_8;
        lVar1 = this_00->HeapBeginPtr();
        lVar2 = this_00->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 8) {
            std::thread::join();
        }
        (&field_312)->~vector();
        (&field_248)->~mutex();
        (&field_208)->~priority_queue();
        (&field_144)->~mutex();
        (&field_96)->~condition_variable();
        (&field_64)->~vector();
        this_00->~vector();
    }

    // 0x1006598c0, 16 bytes, complete-object destructor, placed by class name
    // AssetBuilder::~AssetBuilder(): jumps straight to the base-object destructor

    // 0x1006598d0, 32 bytes, deleting destructor, placed by class name
    // AssetBuilder::~AssetBuilder()
    void AssetBuilder::~AssetBuilder() {
        ~AssetBuilder(this);
        operator_delete(this);
    }

    // 0x1006598f0, 16 bytes, placed by class name
    // AssetBuilder::Initialise(Js5ResourceProvider*, ConfigProvider*)
    void AssetBuilder::Initialise(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        field_40 = param_1;
        field_48 = param_2;
    }

    // 0x100659900, 64 bytes, placed by class name
    // AssetBuilder::ThreadWrapper(int)
    void AssetBuilder::ThreadWrapper(int param_1) {
        char cVar1;

        this_thread::GetThreadName();
        cVar1 = field_56;
        while (cVar1 != '\0') {
            AssetBuilderThread(this, param_1);
            cVar1 = field_56;
        }
    }

    // 0x100659940, 592 bytes, placed by class name
    // AssetBuilder::AssetBuilderThread(int)
    void AssetBuilder::AssetBuilderThread(int param_1) {
        bool bVar1;
        int iVar2;
        AssetWorkerJob* pAVar3;
        Option<option::EnumBrightness>* this_00;
        undefined8 uVar4;
        undefined1 local_b0[16];
        shared_ptr local_a0;
        unique_lock<std::mutex> local_90[16];
        ActiveComponent local_80;
        mutex* local_60;
        mutex* local_58;
        vector<AssetWorkerJob, eastl::allocator>* local_50;
        condition_variable* local_48;
        priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob, eastl::allocator>, eastl::less<AssetWorkerJob>>*
            local_40;
        undefined4 local_38;
        int local_34;

        local_60 = (mutex*)&field_144;
        local_48 = (condition_variable*)&field_96;
        local_40 = (priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob, eastl::allocator>,
                                   eastl::less<AssetWorkerJob>>*)&field_208;
        local_58 = (mutex*)&field_248;
        local_50 = (vector<AssetWorkerJob, eastl::allocator>*)&field_312;
        local_34 = param_1;
        do {
            if (field_56 == '\0') {
                return;
            }
            new (local_b0) AssetWorkerJob();
            std::unique_lock<std::mutex>::unique_lock(local_90, local_60);
            std::condition_variable::wait<AssetBuilder::AssetBuilderThread(int)::__1>(local_48, local_90, this);
            if (field_56 == '\0') {
                iVar2 = 1;
            LAB_100659ac6:
                bVar1 = false;
            } else {
                pAVar3 = (AssetWorkerJob*)
                    eastl::priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob, eastl::allocator>,
                                          eastl::less<AssetWorkerJob>>::top(local_40);
                AssetWorkerJob::operator=((AssetWorkerJob*)local_b0, pAVar3);
                this_00 = (Option<option::EnumBrightness>*)shared_ptr<AssetJob>::operator->(
                    (shared_ptr<AssetJob>*)(local_b0 + 16));
                iVar2 = this_00->GetValue();
                if ((iVar2 != -1) && (iVar2 != local_34)) {
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(uVar4, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/assetbuilder/AssetBuilder.cpp",
                                        100, "Job was retrieved on wrong asset thread (wanted %i), retrying...", iVar2);
                    new (&local_80) AssetWorkerJob();
                    AssetWorkerJob::operator=((AssetWorkerJob*)local_b0, (AssetWorkerJob*)&local_80);
                    local_80.~ActiveComponent();
                    std::unique_lock<std::mutex>::unlock(local_90);
                    std::condition_variable::notify_all();
                    local_38 = 5;
                    std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)&local_80,
                                                                                           (type*)&local_38);
                    std::this_thread::sleep_for<long long, std::ratio<1l, 1000l>>((duration*)&local_80);
                    iVar2 = 2;
                    goto LAB_100659ac6;
                }
                eastl::priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob, eastl::allocator>,
                                      eastl::less<AssetWorkerJob>>::pop(local_40);
                iVar2 = 0;
                bVar1 = true;
            }
            std::unique_lock<std::mutex>::~unique_lock(local_90);
            if (bVar1) {
                ProcessJob(this, (shared_ptr*)local_b0, (shared_ptr*)(local_b0 + 16), local_34);
                new (&local_80) std::unique_lock<std::mutex>(local_58);
                eastl::vector<AssetWorkerJob, eastl::allocator>::emplace_back<AssetWorkerJob>(
                    local_50, (AssetWorkerJob*)local_b0);
                local_80.~unique_lock();
                iVar2 = 0;
            }
            local_b0->~ActiveComponent();
            if (iVar2 == 1) {
                return;
            }
        } while (true);
    }

    // 0x100659d20, 480 bytes, placed by class name
    // AssetBuilder::ProcessJob(shared_ptr<AssetWorker> const&, shared_ptr<AssetJob> const&, int)
    void AssetBuilder::ProcessJob(shared_ptr* param_1, shared_ptr* param_2, int param_3) {
        StockPlayerOffer* pSVar1;
        AssetWorker* this_00;
        Option<float>* this_01;
        AssetJob* pAVar2;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_02;
        bool bVar3;
        int iVar4;
        long* plVar5;
        undefined* puVar6;
        shared_ptr* psVar7;
        _func_decltype_nullptr* p_Var8;
        ActiveComponent local_58;
        scoped_lock<std::mutex> local_38[8];

        pSVar1 = (StockPlayerOffer*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_2);
        iVar4 = pSVar1->GetCompletedGold();
        if (iVar4 == 3) {
            this_00 = (AssetWorker*)shared_ptr<AssetWorker>::operator->((shared_ptr<AssetWorker>*)param_1);
            this_01 = (Option<float>*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_2);
            psVar7 = (shared_ptr*)this_01->GetDefaultValue();
            this_00->SetRequestData(psVar7);
            pAVar2 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_2);
            pAVar2->AwaitWorkerService();
        }
        pSVar1 = (StockPlayerOffer*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_2);
        iVar4 = pSVar1->GetCompletedGold();
        if (iVar4 == 4) {
            plVar5 = (long*)shared_ptr<AssetWorker>::operator->((shared_ptr<AssetWorker>*)param_1);
            p_Var8 = (_func_decltype_nullptr*)(ulong)(uint)param_3;
            puVar6 = (undefined*)(**(code**)(*plVar5 + 24))(plVar5);
            if (puVar6 == DataStatus::NOTLOADED) {
                std::scoped_lock<std::mutex>::scoped_lock(local_38, (mutex*)&field_144);
                new (&local_58) AssetWorkerJob(param_1, param_2);
                (&field_208, (AssetWorkerJob*)&local_58)->push();
                local_58.~ActiveComponent();
                std::scoped_lock<std::mutex>::~scoped_lock(local_38);
            } else {
                if (puVar6 == DataStatus::READY) {
                    this_02 = (compressed_pair_imp<
                               eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                       eastl::allocator>>::Layout,
                               eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                                  shared_ptr<AssetWorker>::operator->((shared_ptr<AssetWorker>*)param_1);
                    psVar7 = (shared_ptr*)eastl::compressed_pair_imp<
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_02);
                    bVar3 = shared_ptr::operator_cast_to_bool(psVar7);
                    pAVar2 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_2);
                    if (bVar3) {
                        pAVar2->WorkerDone(0, psVar7);
                        return;
                    }
                    new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var8);
                    pAVar2->WorkerDone(1, &local_58);
                } else {
                    if (puVar6 != DataStatus::MISSING) {
                        return;
                    }
                    pAVar2 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_2);
                    new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var8);
                    pAVar2->WorkerDone(2, &local_58);
                }
                local_58.~shared_ptr();
            }
        }
    }

    // 0x100659f70, 48 bytes, placed by class name
    // AssetBuilder::SubmitJob(shared_ptr<AssetJob> const&)
    void AssetBuilder::SubmitJob(shared_ptr* param_1) {
        AssetJob* this_00;

        eastl::vector<shared_ptr<AssetJob>, eastl::allocator>::emplace_back<shared_ptr<AssetJob> const&>(
            (vector<shared_ptr<AssetJob>, eastl::allocator>*)&field_64, param_1);
        this_00 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
        this_00->Queued();
    }

    // 0x10065a040, 240 bytes, placed by class name
    // AssetBuilder::Service()
    void AssetBuilder::Service() {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        shared_ptr* psVar3;
        shared_ptr* psVar4;
        unique_lock<std::mutex> local_30[16];

        if (field_48 == (ConfigProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_configProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/AssetBuilder.cpp",
                      135, (char*)0);
        }
        if (field_40 == (Js5ResourceProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/AssetBuilder.cpp",
                      136, (char*)0);
        }
        this_00 = &field_64;
        uVar1 = this_00->HeapBeginPtr();
        uVar2 = this_00->end();
        psVar3 = eastl::remove_if<shared_ptr<AssetJob>*, AssetBuilder::Service()::__2>(uVar1, uVar2, this);
        psVar4 = (shared_ptr*)this_00->end();
        this_00->erase(psVar3, psVar4);
        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)&field_248);
        (&field_312)->clear();
        std::unique_lock<std::mutex>::~unique_lock(local_30);
    }

    // 0x10065a1f0, 496 bytes, placed by class name
    // AssetBuilder::RunFunctionOnAllThreads(std::function<void ()> const&)
    /* AssetBuilder::RunFunctionOnAllThreads(std::function<void ()> const&) */

    void AssetBuilder::RunFunctionOnAllThreads(function* param_1) {
        long lVar1;
        long* plVar2;
        AssetJob* pAVar3;
        ulong uVar4;
        ulong uVar5;
        ActiveComponent local_b0;
        shared_ptr local_90;
        shared_ptr local_80;
        shared_ptr local_70;
        function* local_60;
        vector<eastl::pair<int, int>, eastl::allocator>* local_58;
        mutex* local_50;
        priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob, eastl::allocator>, eastl::less<AssetWorkerJob>>*
            local_48;
        scoped_lock<std::mutex> local_40[12];
        uint local_34;

        local_58 = (vector<eastl::pair<int, int>, eastl::allocator>*)&field_8;
        local_34 = 0;
        local_60 = param_1;
        lVar1 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_58);
        if (lVar1 != 0) {
            local_50 = (mutex*)&field_144;
            local_48 = (priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob, eastl::allocator>,
                                       eastl::less<AssetWorkerJob>>*)&field_208;
            do {
                local_70._0_4_ = 1;
                make_shared<std::function<void()>, std::function<void()> const&>((jag*)&local_b0, local_60);
                bucket_make_shared<BuildFunctionMain, int, shared_ptr<std::function<void()>>, unsigned int&>(
                    (jag*)&local_90, (int*)&local_70, (shared_ptr*)&local_b0, &local_34);
                local_b0.~shared_ptr();
                plVar2 = (long*)shared_ptr<BuildFunctionMain>::operator->((shared_ptr<BuildFunctionMain>*)&local_90);
                (**(code**)(*plVar2 + 24))(&local_70, plVar2);
                pAVar3 =
                    (AssetJob*)shared_ptr<BuildFunctionMain>::operator->((shared_ptr<BuildFunctionMain>*)&local_90);
                pAVar3->Queued();
                plVar2 = (long*)shared_ptr<BuildFunctionMain>::operator->((shared_ptr<BuildFunctionMain>*)&local_90);
                (**(code**)(*plVar2 + 16))(plVar2, field_40, field_48);
                pAVar3 =
                    (AssetJob*)shared_ptr<BuildFunctionMain>::operator->((shared_ptr<BuildFunctionMain>*)&local_90);
                pAVar3->AwaitWorkerReply();
                std::scoped_lock<std::mutex>::scoped_lock(local_40, local_50);
                new (&local_80) shared_ptr<oldscape::dash3d::Decor>(&local_90);
                new (&local_b0) AssetWorkerJob(&local_70, &local_80);
                eastl::priority_queue<AssetWorkerJob, eastl::vector<AssetWorkerJob, eastl::allocator>,
                                      eastl::less<AssetWorkerJob>>::push(local_48, (AssetWorkerJob*)&local_b0);
                local_b0.~ActiveComponent();
                local_80.~shared_ptr();
                std::scoped_lock<std::mutex>::~scoped_lock(local_40);
                local_70.~shared_ptr();
                local_90.~shared_ptr();
                local_34 = local_34 + 1;
                uVar5 = (ulong)local_34;
                uVar4 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_58);
            } while (uVar5 < uVar4);
        }
        std::condition_variable::notify_all();
    }

    // 0x10065e140, 336 bytes, placed by class name
    // AssetBuilder::AssetBuilder(unsigned int)::$_0::operator()() const
    /* AssetBuilder::AssetBuilder(unsigned int)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    void AssetBuilder::AssetBuilder(unsigned int)::$_0::operator()() {
        AssetBuilder* this_00;
        char* pcVar1;
        eastl::string local_40[32];

        this_00 = field_0;
        eastl::string::basic_string(local_40, "AssetWorker-%u", field_8);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_thread::SetThreadName(pcVar1);
        eastl::string::~basic_string(local_40);
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

    // 0x10065e420, 48 bytes, placed by class name
    // AssetBuilder::AssetBuilderThread(int)::$_1::operator()() const
    /* AssetBuilder::AssetBuilderThread(int)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    bool AssetBuilder::AssetBuilderThread(int)::$_1::operator()() {
        long lVar1;
        char cVar2;
        bool bVar3;

        lVar1 = *(long*)this;
        cVar2 = ((lVar1 + 208))->empty();
        bVar3 = true;
        if (cVar2 != '\0') {
            bVar3 = *(char*)(lVar1 + 56) == '\0';
        }
        return bVar3;
    }

} // namespace jag::game
