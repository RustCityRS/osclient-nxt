// libs/game/runetek5/assetbuilder/AssetBuilder.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class AssetBuilder {
    public:
        // virtual methods in vtable order
        virtual ~AssetBuilder();
        AssetBuilder(unsigned int);
        void Initialise(Js5ResourceProvider*, ConfigProvider*);
        void ThreadWrapper(int);
        void AssetBuilderThread(int);
        void ProcessJob(shared_ptr<AssetWorker> const&, shared_ptr<AssetJob> const&, int);
        void SubmitJob(shared_ptr<AssetJob> const&);
        void Service();
        void RunFunctionOnAllThreads(std::function<void()> const&);

        // data members, from how the methods use this: 320 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        Js5ResourceProvider* field_40; // offset 40
        ConfigProvider* field_48;      // offset 48
        char field_56;                 // offset 56
        char _unknown_57[263];
    };

    // 0x100659b90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::AssetWorkerJob(): jumps straight to the base-object constructor

    // 0x100659c20, 48 bytes, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::operator=(AssetWorkerJob const&)
    /* AssetWorkerJob::TEMPNAMEPLACEHOLDERVALUE(AssetWorkerJob const&) */

    AssetWorkerJob* AssetWorkerJob::operator=(AssetWorkerJob* param_1) {
        shared_ptr<AssetWorker>::operator=((shared_ptr<AssetWorker>*)this, (shared_ptr*)param_1);
        shared_ptr<AssetJob>::operator=((shared_ptr<AssetJob>*)&field_16, (shared_ptr*)&param_1->field_16);
        return this;
    }

    // 0x100659cd0, 48 bytes, inline, placed by debug map only (low confidence)
    // AssetWorkerJob::operator=(AssetWorkerJob&&)
    /* AssetWorkerJob::TEMPNAMEPLACEHOLDERVALUE(AssetWorkerJob&&) */

    AssetWorkerJob* AssetWorkerJob::operator=(AssetWorkerJob* param_1) {
        shared_ptr<AssetWorker>::operator=((shared_ptr<AssetWorker>*)this, (shared_ptr*)param_1);
        shared_ptr<AssetJob>::operator=((shared_ptr<AssetJob>*)&field_16, (shared_ptr*)&param_1->field_16);
        return this;
    }

    // 0x10065f2b0, 944 bytes, inline, placed by class name
    // AssetBuilder::Service()::$_2::operator()(shared_ptr<AssetJob> const&) const
    /* AssetBuilder::Service()::$_2::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<AssetJob>
   const&) const */

    ulong AssetBuilder::Service()::$_2::operator()(shared_ptr* param_1) {
        long lVar1;
        undefined* puVar2;
        bool bVar3;
        uint uVar5;
        StockPlayerOffer* pSVar6;
        long* plVar7;
        undefined* puVar8;
        AssetJob* pAVar9;
        shared_ptr* this_00;
        GeometryBatchInstance* this_01;
        undefined8 uVar10;
        ActiveComponent* this_02;
        _func_decltype_nullptr* p_Var11;
        ulong uVar12;
        scoped_lock<std::mutex> local_70[8];
        undefined* local_68;
        ActiveComponent local_60;
        shared_ptr local_40;

        lVar1 = *(long*)this;
        this_02 = (ActiveComponent*)param_1;
        pSVar6 = (StockPlayerOffer*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
        uVar5 = pSVar6->GetCompletedGold();
        if (uVar5 == 1) {
            plVar7 = (long*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
            this_02 = *(ActiveComponent**)(lVar1 + 40);
            puVar8 = (undefined*)(**(code**)(*plVar7 + 16))(plVar7, this_02, *(undefined8*)(lVar1 + 48));
            puVar2 = DataStatus::MISSING;
            if (puVar8 == DataStatus::NOTLOADED) {
                uVar5 = 1;
                puVar2 = DataStatus::NOTLOADED;
            } else {
                local_68 = DataStatus::NOTLOADED;
                pAVar9 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                if (puVar8 == puVar2) {
                    new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(this_02);
                    p_Var11 = (_func_decltype_nullptr*)2;
                    pAVar9->WorkerDone(2, &local_60);
                    local_60.~shared_ptr();
                    pAVar9 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                    this_02 = &local_60;
                    new (this_02) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var11);
                    pAVar9->Finish(this_02);
                LAB_10065f3fe:
                    local_60.~shared_ptr();
                } else {
                    this_00 = (shared_ptr*)pAVar9->GetDefaultValue();
                    bVar3 = shared_ptr::operator_cast_to_bool(this_00);
                    pAVar9 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                    if (!bVar3) {
                        new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(this_02);
                        p_Var11 = (_func_decltype_nullptr*)&DAT_00000001;
                        pAVar9->WorkerDone(1, &local_60);
                        local_60.~shared_ptr();
                        pAVar9 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                        this_02 = &local_60;
                        new (this_02) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var11);
                        pAVar9->Finish(this_02);
                        goto LAB_10065f3fe;
                    }
                    pAVar9->AwaitWorkerSlot();
                }
                puVar2 = local_68;
                pSVar6 = (StockPlayerOffer*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                uVar5 = pSVar6->GetCompletedGold();
            }
            if (puVar8 != puVar2)
                goto LAB_10065f426;
        } else {
        LAB_10065f426:
            if (uVar5 == 2) {
                plVar7 = (long*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                (**(code**)(*plVar7 + 24))(&local_40, plVar7);
                pAVar9 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                pAVar9->AwaitWorkerReply();
                std::scoped_lock<std::mutex>::scoped_lock(local_70, (mutex*)(lVar1 + 144));
                new (&local_60) AssetWorkerJob(&local_40, param_1);
                ((lVar1 + 208))->push((AssetWorkerJob*)&local_60);
                local_60.~ActiveComponent();
                std::scoped_lock<std::mutex>::~scoped_lock(local_70);
                std::condition_variable::notify_one();
                local_40.~shared_ptr();
                uVar12 = 0;
                goto LAB_10065f5df;
            }
            if (1 < uVar5 - 3) {
                if (uVar5 == 5) {
                    new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(this_02);
                    pAVar9 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                    if (pAVar9->IsSuccessful() != '\0') {
                        plVar7 = (long*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                        this_01 =
                            (GeometryBatchInstance*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                        uVar10 = this_01->GetMaterial();
                        (**(code**)(*plVar7 + 32))(&local_40, plVar7, uVar10);
                        shared_ptr<void>::operator=((shared_ptr<void>*)&local_60, &local_40);
                        local_40.~shared_ptr();
                        bVar3 = local_60.operator_cast_to_bool();
                        if (!bVar3) {
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/assetbuilder/AssetBuilder.cpp",
                                            200, "Asset job marked as successful but result is null");
                        }
                    }
                    pAVar9 = (AssetJob*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                    pAVar9->Finish((shared_ptr*)&local_60);
                    pSVar6 = (StockPlayerOffer*)shared_ptr<AssetJob>::operator->((shared_ptr<AssetJob>*)param_1);
                    uVar5 = pSVar6->GetCompletedGold();
                    local_60.~shared_ptr();
                }
                uVar12 = CONCAT71((int7)((ulong)param_1 >> 8), 1);
                if (uVar5 != 6) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/assetbuilder/AssetBuilder.cpp",
                                    213, "AssetBuilder: Job in invalid state: %i", (ulong)uVar5);
                }
                goto LAB_10065f5df;
            }
        }
        uVar12 = 0;
    LAB_10065f5df:
        return uVar12 & 4294967295;
    }

} // namespace jag::game
