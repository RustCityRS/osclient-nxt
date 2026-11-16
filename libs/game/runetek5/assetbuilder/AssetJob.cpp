// libs/game/runetek5/assetbuilder/AssetJob.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "AssetJob.h"

namespace jag::game {
    // 0x100f3e4b0, 16 bytes, __data
    AssetJob::ASSET_JOB_TIMEOUT = {2000, 0, 0, 0};

    // 0x1039bc160, 8 bytes, __common; zero-initialised
    AssetJob::nextAssetJobID;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    AssetJob::GetJobID() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    AssetJob::GetFirstResult() const;

    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    AssetJob::GetResultDataDecoded() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    AssetJob::GetPriority() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    AssetJob::GetStatus() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    AssetJob::GetResultData() const;

    // 0x1003cf2a0: the linker folded this into WorldMapDefaults::GetDropShadowColourRGBA() const, which has identical code
    AssetJob::GetAssetWorker() const;

    // 0x10065a010, 48 bytes, placed by class name and debug map
    // AssetJob::Queued()
    void AssetJob::Queued() {
        int iVar1;
        int iVar2;

        iVar1 = nextAssetJobID;
        iVar2 = nextAssetJobID + 1;
        field_8 = nextAssetJobID;
        nextAssetJobID = iVar2;
        if (65534 < iVar1) {
            nextAssetJobID = 0;
        }
        field_20 = 1;
    }

    // 0x10065a570, 16 bytes, placed by class name and debug map
    // AssetJob::AwaitWorkerReply()
    void AssetJob::AwaitWorkerReply() {
        field_20 = 3;
    }

    // 0x10065a620, 16 bytes, placed by class name and debug map
    // AssetJob::AwaitWorkerService()
    void AssetJob::AwaitWorkerService() {
        field_20 = 4;
    }

    // 0x10065a630, 48 bytes, placed by class name and debug map
    // AssetJob::WorkerDone(AssetJobResult, shared_ptr<void> const&)
    void AssetJob::WorkerDone(undefined4 param_2, shared_ptr* param_3) {
        shared_ptr<void>::operator=((shared_ptr<void>*)&field_48, param_3);
        field_28 = param_2;
        field_20 = 5;
    }

    // 0x10065a660, 144 bytes, base-object constructor, placed by class name and debug map
    // AssetJob::AssetJob(AssetJobType, int, int)
    void AssetJob::AssetJob(_func_decltype_nullptr* param_2, undefined4 param_3, undefined4 param_4) {
        undefined4 uVar1;
        undefined4 uVar2;

        uVar2 = (undefined4)((ulong)param_2 >> 32);
        uVar1 = SUB84(param_2, 0);
        field_0 = PTR_vtable_100ee85f0 + 16;
        field_8 = -1;
        field_12 = uVar1;
        field_16 = param_3;
        field_20 = 0;
        field_24 = param_4;
        field_28 = 4294967295;
        new (&field_32, param_2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48, (_func_decltype_nullptr*)CONCAT44(uVar2)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(uVar1));
        new (&field_64, (_func_decltype_nullptr*)CONCAT44(uVar2)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(uVar1));
    }

    // 0x10065a6f0, 16 bytes, placed by class name and debug map
    // AssetJob::AwaitWorkerSlot()
    void AssetJob::AwaitWorkerSlot() {
        field_20 = 2;
    }

    // 0x10065a740, 32 bytes, placed by class name and debug map
    // AssetJob::Finish(shared_ptr<void> const&)
    void AssetJob::Finish(shared_ptr* param_1) {
        shared_ptr<void>::operator=((shared_ptr<void>*)&field_64, param_1);
        field_20 = 6;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AssetJob::~AssetJob();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AssetJob::~AssetJob();

} // namespace jag::game

namespace jag {
    // 0x10065a3e0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildFunctionMain>::type bucket_make_shared<game::BuildFunctionMain, int, shared_ptr<std::function<void ()> >, unsigned int&>(int&&, shared_ptr<std::function<void ()> >&&, unsigned int&)
    /* shared_ptr_if_not_array<game::BuildFunctionMain>::type
   bucket_make_shared<game::BuildFunctionMain, int, shared_ptr<std::function<void ()>
   >, unsigned int&>(int&&, shared_ptr<std::function<void ()> >&&, unsigned int&) */

    jag* jag::bucket_make_shared<game::BuildFunctionMain, int, shared_ptr<std::function<void()>>, unsigned int&>(
        int* param_1, shared_ptr* param_2, uint* param_3) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_40;
        BuildFunctionMain* local_38[2];

        local_40 = (managed_ptr_counter_and_data*)BucketManager::Allocate(144, 0, 16);
        if (local_40 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_38[0] = placement_new<game::BuildFunctionMain, int, shared_ptr<std::function<void()>>, unsigned int&>(
                local_40 + 48, param_1, param_2, param_3);
            pBVar1 = placement_new<
                BucketRefCounter<game::BuildFunctionMain>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionMain>, game::BuildFunctionMain>*&,
                game::BuildFunctionMain*&>(local_40, &local_40, local_38);
            pBVar1->~AutoSingleton(local_38[0]);
            pBVar1->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_38[0]);
        }
        return this;
    }

    // 0x10065a490, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<std::function<void ()> >::type make_shared<std::function<void ()>, std::function<void ()> const&>(std::function<void ()> const&)
    /* shared_ptr_if_not_array<std::function<void ()> >::type make_shared<std::function<void
   ()>, std::function<void ()> const&>(std::function<void ()> const&) */

    jag* make_shared<std::function<void()>, std::function<void()> const&>(function* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        function* local_30[2];

        pvVar1 = (void*)aligned_alloc(80, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] =
                placement_new<std::function<void()>, std::function<void()> const&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<std::function<void()>>, int, std::function<void()>*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
