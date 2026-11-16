// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildSingleLocationMain.h"

namespace jag::game {
    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    shared_ptr BuildSingleLocationMain::GetRequestData();

    // 0x100625210, 224 bytes, base-object constructor, placed by class name and debug map
    // BuildSingleLocationMain::BuildSingleLocationMain(int, shared_ptr<LocType> const&, shared_ptr<LocType> const&, shared_ptr<graphics::Model> const&, Rotation90, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&)
    void BuildSingleLocationMain::BuildSingleLocationMain(undefined4 param_1, shared_ptr* param_2, shared_ptr* param_3,
                                                          shared_ptr* param_4, undefined1 param_6, int param_7,
                                                          Array* param_8, Array* param_9) {
        shared_ptr local_50;
        undefined1* local_40;
        undefined1 local_31;

        local_31 = param_6;
        new (this) AssetJob(12, param_1, 4294967295);
        field_0 = &PTR__BuildSingleLocationMain_100f0c9f0;
        new (m_requestData, (_func_decltype_nullptr*)12) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_40 = &field_96;
        new (local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(12);
        bucket_make_shared<BuildSingleLocationRequestData, shared_ptr<LocType> const&, shared_ptr<LocType> const&,
                           shared_ptr<graphics::Model> const&, Rotation90&, int&,
                           Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                           Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
            (jag*)&local_50, param_2, param_3, param_4, &local_31, &param_7, param_8, param_9);
        shared_ptr<BuildSingleLocationRequestData>::operator=(
            (shared_ptr<BuildSingleLocationRequestData>*)m_requestData, &local_50);
        local_50.~shared_ptr();
    }

    // 0x100625440, 48 bytes, complete-object constructor, placed by class name and debug map
    // BuildSingleLocationMain::BuildSingleLocationMain(int, shared_ptr<LocType> const&, shared_ptr<LocType> const&, shared_ptr<graphics::Model> const&, Rotation90, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&)
    void BuildSingleLocationMain::BuildSingleLocationMain() {
        BuildSingleLocationMain();
    }

    // 0x100625470, 400 bytes, placed by class name and debug map
    // BuildSingleLocationMain::RunFirst(Js5ResourceProvider*, ConfigProvider*)
    undefined* BuildSingleLocationMain::RunFirst(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        undefined4 uVar3;
        long lVar4;
        shared_ptr* this_01;
        LocType* pLVar5;
        shared_ptr<LocType>* psVar6;
        undefined** ppuVar7;
        undefined1 auVar8[16];
        shared_ptr local_38;

        this_00 = m_requestData;
        bVar1 = this_00->operator_cast_to_bool();
        ppuVar7 = &DataStatus::MISSING;
        if (bVar1) {
            lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                (shared_ptr<BuildSingleLocationRequestData>*)this_00);
            bVar1 = ((lVar4 + 32))->operator_cast_to_bool();
            if (bVar1) {
                this_01 = (shared_ptr*)shared_ptr<BuildSingleLocationRequestData>::operator->(
                    (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                if (bVar1) {
                    lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                        (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                    bVar1 = ((lVar4 + 16))->operator_cast_to_bool();
                    if (bVar1) {
                        lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        pLVar5 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar4 + 16));
                        lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        iVar2 = pLVar5->GetGridWidth(*(undefined1*)(lVar4 + 48));
                        lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        *(int*)(lVar4 + 104) = iVar2 << 7;
                        lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        pLVar5 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar4 + 16));
                        lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        iVar2 = pLVar5->GetGridLength(*(undefined1*)(lVar4 + 48));
                        lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        *(int*)(lVar4 + 108) = iVar2 << 7;
                        psVar6 = (shared_ptr<LocType>*)shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        pLVar5 = (LocType*)shared_ptr<LocType>::operator->(psVar6);
                        uVar3 = pLVar5->GetHillChangeType();
                        lVar4 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        *(undefined4*)(lVar4 + 112) = uVar3;
                        psVar6 = (shared_ptr<LocType>*)shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        pLVar5 = (LocType*)shared_ptr<LocType>::operator->(psVar6);
                        uVar3 = pLVar5->GetHillChangeParam();
                        auVar8 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                            (shared_ptr<BuildSingleLocationRequestData>*)this_00);
                        *(undefined4*)(auVar8._0_8_ + 116) = uVar3;
                        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                            &local_38, (jag*)this_00, auVar8._8_8_);
                        shared_ptr<void>::operator=((shared_ptr<void>*)&field_32, &local_38);
                        local_38.~shared_ptr();
                        ppuVar7 = &DataStatus::READY;
                    }
                }
            }
        }
        return *ppuVar7;
    }

    // 0x100625650, 80 bytes, placed by class name and debug map
    // BuildSingleLocationMain::CreateWorker()
    BuildSingleLocationMain* BuildSingleLocationMain::CreateWorker() {
        shared_ptr local_28;

        bucket_make_shared<BuildSingleLocationWorker>((jag*)&local_28);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x100625730, 80 bytes, placed by class name and debug map
    // BuildSingleLocationMain::DecodeResult(shared_ptr<void> const&)
    BuildSingleLocationMain* BuildSingleLocationMain::DecodeResult(shared_ptr* param_1) {
        BuildSingleLocationResultData* pBVar2;
        shared_ptr* in_RDX;

        if (shared_ptr::operator_cast_to_bool(in_RDX)) {
            pBVar2 = (BuildSingleLocationResultData*)in_RDX->end();
            PostDecodeResultSetup((BuildSingleLocationMain*)param_1, pBVar2);
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(in_RDX);
        return this;
    }

    // 0x100625780, 128 bytes, placed by class name and debug map
    // BuildSingleLocationMain::PostDecodeResultSetup(BuildSingleLocationResultData&)
    void BuildSingleLocationMain::PostDecodeResultSetup(BuildSingleLocationResultData* param_1) {
        Model* pMVar1;
        long lVar2;
        Location* this_00;
        fixed_vector* pfVar3;

        if (param_1->operator_cast_to_bool()) {
            pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_1);
            if (pMVar1->IsLoaded() == '\0') {
                pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_1);
                lVar2 = shared_ptr<BuildSingleLocationRequestData>::operator->(
                    (shared_ptr<BuildSingleLocationRequestData>*)m_requestData);
                this_00 =
                    (Location*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)(lVar2 + 32));
                pfVar3 = (fixed_vector*)this_00->GetServerPosition();
                pMVar1->SetTextureAtlasReferences(pfVar3);
                pMVar1 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_1);
                pMVar1->ConstructFinishAndUpload();
            }
        }
    }

} // namespace jag::game

namespace jag {
    // 0x1006252f0, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildSingleLocationRequestData>::type bucket_make_shared<game::BuildSingleLocationRequestData, shared_ptr<game::LocType> const&, shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> >(shared_ptr<game::LocType> const&, shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&)
    jag* jag::bucket_make_shared<game::BuildSingleLocationRequestData, shared_ptr<game::LocType> const&,
                                 shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&,
                                 int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                                 Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
        shared_ptr* param_1, shared_ptr* param_2, shared_ptr* param_3, Rotation90* param_4, int* param_5,
        Array* param_6, Array* param_7) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_48;
        BuildSingleLocationRequestData* local_40[2];

        local_48 = (managed_ptr_counter_and_data*)BucketManager::Allocate(168, 0, 16);
        if (local_48 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_40[0] =
                placement_new<game::BuildSingleLocationRequestData, shared_ptr<game::LocType> const&,
                              shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&,
                              Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                              Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
                    local_48 + 48, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
            pBVar1 = placement_new<BucketRefCounter<game::BuildSingleLocationRequestData>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationRequestData>,
                                                                game::BuildSingleLocationRequestData>*&,
                                   game::BuildSingleLocationRequestData*&>(local_48, &local_48, local_40);
            pBVar1->~AutoSingleton(local_40[0]);
            pBVar1->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_40[0]);
        }
        return this;
    }

    // 0x1006256a0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildSingleLocationWorker>::type bucket_make_shared<game::BuildSingleLocationWorker>()
    jag* bucket_make_shared<game::BuildSingleLocationWorker>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildSingleLocationWorker* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(88, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildSingleLocationWorker>(local_30 + 48);
            pBVar1 = placement_new<BucketRefCounter<game::BuildSingleLocationWorker>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationWorker>,
                                                                game::BuildSingleLocationWorker>*&,
                                   game::BuildSingleLocationWorker*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

} // namespace jag
