// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildFunctionMain.h"

namespace jag::game {
    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    shared_ptr BuildFunctionMain::GetRequestData();

    // 0x100642f40, 176 bytes, base-object constructor, placed by class name and debug map
    // BuildFunctionMain::BuildFunctionMain(int, shared_ptr<std::function<void ()> > const&, int)
    /* BuildFunctionMain::BuildFunctionMain(int, shared_ptr<std::function<void ()> >
   const&, int) */

    void BuildFunctionMain::BuildFunctionMain(int param_1, shared_ptr* param_2, int param_3) {
        undefined1* this_00;
        shared_ptr<std::function<void()>>* this_01;
        _func_decltype_nullptr* p_Var1;
        shared_ptr local_30;

        p_Var1 = (_func_decltype_nullptr*)60;
        new (this) AssetJob(60, param_1);
        field_0 = &PTR__BuildFunctionMain_100f0d508;
        this_00 = m_requestData;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var1);
        bucket_make_shared<BuildFunctionRequestData>((jag*)&local_30);
        shared_ptr<BuildFunctionRequestData>::operator=((shared_ptr<BuildFunctionRequestData>*)this_00, &local_30);
        local_30.~shared_ptr();
        this_01 = (shared_ptr<std::function<void()>>*)shared_ptr<BuildFunctionRequestData>::operator->(
            (shared_ptr<BuildFunctionRequestData>*)this_00);
        shared_ptr<std::function<void()>>::operator=(this_01, param_2);
    }

    // 0x100643140, 16 bytes, complete-object constructor, placed by class name and debug map
    // BuildFunctionMain::BuildFunctionMain(int, shared_ptr<std::function<void ()> > const&, int): jumps straight to the base-object constructor

    // 0x100643150, 128 bytes, placed by class name and debug map
    // BuildFunctionMain::RunFirst(Js5ResourceProvider*, ConfigProvider*)
    undefined* BuildFunctionMain::RunFirst(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        undefined** ppuVar2;
        shared_ptr* extraout_RDX;
        shared_ptr local_30;

        if (m_requestData->operator_cast_to_bool()) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_30, (jag*)m_requestData,
                                                                                         extraout_RDX);
            shared_ptr<void>::operator=((shared_ptr<void>*)&field_32, &local_30);
            local_30.~shared_ptr();
            ppuVar2 = &DataStatus::READY;
        } else {
            ppuVar2 = &DataStatus::MISSING;
        }
        return *ppuVar2;
    }

    // 0x1006431d0, 80 bytes, placed by class name and debug map
    // BuildFunctionMain::CreateWorker()
    BuildFunctionMain* BuildFunctionMain::CreateWorker() {
        shared_ptr local_28;

        bucket_make_shared<BuildFunctionWorker>((jag*)&local_28);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x1006432b0, 64 bytes, placed by class name and debug map
    // BuildFunctionMain::DecodeResult(shared_ptr<void> const&)
    BuildFunctionMain* BuildFunctionMain::DecodeResult(shared_ptr* param_1) {
        shared_ptr* in_RDX;

        if (shared_ptr::operator_cast_to_bool(in_RDX)) {
            in_RDX->end();
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(in_RDX);
        return this;
    }

    // 0x1006432f0, 16 bytes, placed by class name and debug map
    // BuildFunctionMain::PostDecodeResultSetup(BuildFunctionResultData&)
    void BuildFunctionMain::PostDecodeResultSetup(BuildFunctionResultData* param_1) {}

} // namespace jag::game

namespace jag {
    // 0x100642ff0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildFunctionRequestData>::type bucket_make_shared<game::BuildFunctionRequestData>()
    jag* bucket_make_shared<game::BuildFunctionRequestData>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildFunctionRequestData* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(64, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildFunctionRequestData>(local_30 + 48);
            pBVar1 = placement_new<BucketRefCounter<game::BuildFunctionRequestData>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionRequestData>,
                                                                game::BuildFunctionRequestData>*&,
                                   game::BuildFunctionRequestData*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

    // 0x100643220, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildFunctionWorker>::type bucket_make_shared<game::BuildFunctionWorker>()
    jag* bucket_make_shared<game::BuildFunctionWorker>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildFunctionWorker* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(88, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildFunctionWorker>(local_30 + 48);
            pBVar1 = placement_new<
                BucketRefCounter<game::BuildFunctionWorker>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionWorker>, game::BuildFunctionWorker>*&,
                game::BuildFunctionWorker*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

} // namespace jag
