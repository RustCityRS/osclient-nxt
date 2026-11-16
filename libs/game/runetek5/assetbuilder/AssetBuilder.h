// libs/game/runetek5/assetbuilder/AssetBuilder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class AssetBuilder {
    public:
        // virtual methods in vtable order
        virtual ~AssetBuilder();
        AssetBuilder(unsigned int arg1);
        void Initialise(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        void ThreadWrapper(int arg1);
        void AssetBuilderThread(int arg1);
        void ProcessJob(const shared_ptr<AssetWorker>& assetWorker, const shared_ptr<AssetJob>& assetJob, int arg3);
        void SubmitJob(const shared_ptr<AssetJob>& assetJob);
        void Service();
        void RunFunctionOnAllThreads(const std::function<void()>& callback);

    private:
        uint8_t _unknown_8[32];
        Js5ResourceProvider* field_40;
        ConfigProvider* field_48;
        char field_56;
        uint8_t _unknown_57[263];
    };

    // 0x100659c20
    AssetWorkerJob* AssetWorkerJob::operator=(const AssetWorkerJob& assetWorkerJob) {
        *this = assetWorkerJob;
        field_16 = assetWorkerJob.field_16;
        return this;
    }

    // 0x100659cd0
    AssetWorkerJob* AssetWorkerJob::operator=(AssetWorkerJob&& assetWorkerJob) {
        *this = assetWorkerJob;
        field_16 = assetWorkerJob.field_16;
        return this;
    }

    // 0x10065f2b0
    unsigned long AssetBuilder::Service()::$_2::operator()(const shared_ptr<AssetJob>& assetJob) const {
        uint8_t* puVar2;
        bool cVar3;
        long* plVar6;
        uint8_t* puVar7;
        AssetJob* pAVar8;
        uint64_t uVar9;
        unsigned long uVar10;
        scoped_lock<std::mutex> local_70;
        uint8_t* local_68;
        ActiveComponent local_60;
        shared_ptr<AssetWorker> local_40;

        long lVar1 = field_0;
        auto pSVar5 = assetJob.operator->();
        unsigned int uVar4 = pSVar5->GetCompletedGold();
        if (uVar4 == 1) {
            plVar6 = (long*)assetJob.operator->();
            puVar7 = (uint8_t*)(**(void (**)(...))(*plVar6 + 16))(plVar6, *(uint64_t*)(lVar1 + 40),
                                                                  *(uint64_t*)(lVar1 + 48));
            puVar2 = DataStatus::MISSING;
            if (puVar7 == DataStatus::NOTLOADED) {
                uVar4 = 1;
                puVar2 = DataStatus::NOTLOADED;
            } else {
                local_68 = DataStatus::NOTLOADED;
                pAVar8 = (AssetJob*)assetJob.operator->();
                if (puVar7 == puVar2) {
                    local_60 = shared_ptr();
                    pAVar8->WorkerDone(2, local_60);
                    pAVar8 = (AssetJob*)assetJob.operator->();
                    local_60 = shared_ptr();
                    pAVar8->Finish(local_60);
                LAB_10065f3fe:
                } else {
                    cVar3 = (pAVar8->GetDefaultValue())->operator_cast_to_bool();
                    pAVar8 = (AssetJob*)assetJob.operator->();
                    if (!cVar3) {
                        new (&local_60) shared_ptr();
                        pAVar8->WorkerDone(1, local_60);
                        pAVar8 = (AssetJob*)assetJob.operator->();
                        new (&local_60) shared_ptr();
                        pAVar8->Finish(local_60);
                        goto LAB_10065f3fe;
                    }
                    pAVar8->AwaitWorkerSlot();
                }
                puVar2 = local_68;
                pSVar5 = (StockPlayerOffer*)assetJob.operator->();
                uVar4 = pSVar5->GetCompletedGold();
            }
            if (puVar7 != puVar2)
                goto LAB_10065f426;
        } else {
        LAB_10065f426:
            if (uVar4 == 2) {
                plVar6 = (long*)assetJob.operator->();
                (**(void (**)(...))(*plVar6 + 24))(&local_40, plVar6);
                pAVar8 = (AssetJob*)assetJob.operator->();
                pAVar8->AwaitWorkerReply();
                local_70 = std::scoped_lock(*((lVar1 + 144)));
                local_60 = AssetWorkerJob(local_40, assetJob);
                ((lVar1 + 208))->push(local_60);
                std::condition_variable::notify_one();
                uVar10 = 0;
                goto LAB_10065f5df;
            }
            if (1 < uVar4 - 3) {
                if (uVar4 == 5) {
                    local_60 = shared_ptr();
                    pAVar8 = (AssetJob*)assetJob.operator->();
                    cVar3 = pAVar8->IsSuccessful();
                    if (cVar3) {
                        plVar6 = (long*)assetJob.operator->();
                        uVar9 = ((GeometryBatchInstance*)assetJob.operator->())->GetMaterial();
                        (**(void (**)(...))(*plVar6 + 32))(&local_40, plVar6, uVar9);
                        local_60 = local_40;
                        cVar3 = local_60.operator_cast_to_bool();
                        if (!cVar3) {
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/assetbuilder/AssetBuilder.cpp",
                                            200, "Asset job marked as successful but result is null");
                        }
                    }
                    pAVar8 = (AssetJob*)assetJob.operator->();
                    pAVar8->Finish(local_60);
                    pSVar5 = (StockPlayerOffer*)assetJob.operator->();
                    uVar4 = pSVar5->GetCompletedGold();
                }
                uVar10 = (((uint64_t)((int64_t)((unsigned long)assetJob >> 8)) << 8) | (uint8_t)1);
                if (uVar4 != 6) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/AssetBuilder.cpp",
                                    213, "AssetBuilder: Job in invalid state: %i", (unsigned long)uVar4);
                }
                goto LAB_10065f5df;
            }
        }
        uVar10 = 0;
    LAB_10065f5df:
        return uVar10 & 4294967295;
    }

} // namespace jag::game
