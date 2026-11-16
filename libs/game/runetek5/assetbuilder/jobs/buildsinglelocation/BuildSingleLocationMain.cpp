// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildSingleLocationMain.h"

namespace jag::game {
    // 0x100102fc0: BuildSingleLocationMain::GetRequestData() has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x100625210
    BuildSingleLocationMain::BuildSingleLocationMain(
        int arg1, const shared_ptr<LocType>& locType1, const shared_ptr<LocType>& locType2,
        const shared_ptr<graphics::Model>& model, Rotation90 rotation90, int arg6,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg7,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg8) {
        shared_ptr<LocType> local_50;

        uint8_t local_31 = (uint8_t)rotation90;
        new (this) AssetJob(12, arg1, -1);
        new (m_requestData) shared_ptr();
        uint8_t* local_40 = &field_96;
        new (local_40) shared_ptr();
        bucket_make_shared<BuildSingleLocationRequestData, shared_ptr<LocType> const&, shared_ptr<LocType> const&,
                           shared_ptr<graphics::Model> const&, Rotation90&, int&,
                           Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                           Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
            &local_50, locType1, (shared_ptr<graphics::Model>*)locType2, (Rotation90*)model, (int*)&local_31,
            (Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)&arg6, arg7);
        *m_requestData = local_50;
    }

    // 0x100625470
    uint8_t* BuildSingleLocationMain::RunFirst(Js5ResourceProvider* js5ResourceProvider,
                                               ConfigProvider* configProvider) {
        int iVar2;
        uint32_t uVar3;
        long lVar4;
        LocType* pLVar5;
        shared_ptr<LocType>* psVar6;
        shared_ptr<oldscape::ClientNpc> local_38;

        uint8_t* this_00 = m_requestData;
        bool cVar1 = this_00->operator_cast_to_bool();
        uint8_t** ppuVar7 = &DataStatus::MISSING;
        if (cVar1) {
            lVar4 = (*this_00).operator->();
            cVar1 = ((lVar4 + 32))->operator_cast_to_bool();
            if (cVar1) {
                cVar1 = ((*this_00).operator->())->operator_cast_to_bool();
                if (cVar1) {
                    lVar4 = (*this_00).operator->();
                    cVar1 = ((lVar4 + 16))->operator_cast_to_bool();
                    if (cVar1) {
                        lVar4 = (*this_00).operator->();
                        pLVar5 = (LocType*)(*((lVar4 + 16))).operator->();
                        lVar4 = (*this_00).operator->();
                        iVar2 = pLVar5->GetGridWidth((unsigned int)*(uint8_t*)(lVar4 + 48));
                        lVar4 = (*this_00).operator->();
                        *(int*)(lVar4 + 104) = iVar2 << 7;
                        lVar4 = (*this_00).operator->();
                        pLVar5 = (LocType*)(*((lVar4 + 16))).operator->();
                        lVar4 = (*this_00).operator->();
                        iVar2 = pLVar5->GetGridLength((unsigned int)*(uint8_t*)(lVar4 + 48));
                        lVar4 = (*this_00).operator->();
                        *(int*)(lVar4 + 108) = iVar2 << 7;
                        psVar6 = (shared_ptr<LocType>*)(*this_00).operator->();
                        pLVar5 = (LocType*)(*psVar6).operator->();
                        uVar3 = pLVar5->GetHillChangeType();
                        lVar4 = (*this_00).operator->();
                        *(uint32_t*)(lVar4 + 112) = uVar3;
                        psVar6 = (shared_ptr<LocType>*)(*this_00).operator->();
                        pLVar5 = (LocType*)(*psVar6).operator->();
                        uVar3 = pLVar5->GetHillChangeParam();
                        lVar4 = (*this_00).operator->();
                        *(uint32_t*)(lVar4 + 116) = uVar3;
                        static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_38);
                        field_32 = local_38;
                        ppuVar7 = &DataStatus::READY;
                    }
                }
            }
        }
        return *ppuVar7;
    }

    // 0x100625650
    BuildSingleLocationMain* BuildSingleLocationMain::CreateWorker() {
        ReturnValue local_28;

        bucket_make_shared<BuildSingleLocationWorker>(&local_28);
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

    // 0x100625730
    auto BuildSingleLocationMain::DecodeResult(const shared_ptr<void>& arg1) {
        BuildSingleLocationResultData* buildSingleLocationResultData;

        if (arg1.operator_cast_to_bool() != '\0') {
            buildSingleLocationResultData = (BuildSingleLocationResultData*)arg1.end();
            PostDecodeResultSetup(*buildSingleLocationResultData);
        }
        return auto(arg1);
    }

    // 0x100625780
    void BuildSingleLocationMain::PostDecodeResultSetup(BuildSingleLocationResultData& buildSingleLocationResultData) {
        Model* pMVar1;
        long lVar2;
        Location* this_00;
        fixed_vector<shared_ptr<graphics::TextureAtlasReference>, _1ul>* textureAtlasReferences;

        if (buildSingleLocationResultData.operator_cast_to_bool()) {
            pMVar1 = (Model*)buildSingleLocationResultData.operator->();
            if (!(pMVar1->IsLoaded())) {
                pMVar1 = (Model*)buildSingleLocationResultData.operator->();
                lVar2 = (*m_requestData).operator->();
                this_00 = (Location*)(*((lVar2 + 32))).operator->();
                textureAtlasReferences =
                    (fixed_vector<shared_ptr<graphics::TextureAtlasReference>, _1ul>*)this_00->GetServerPosition();
                pMVar1->SetTextureAtlasReferences(*textureAtlasReferences);
                pMVar1 = (Model*)buildSingleLocationResultData.operator->();
                pMVar1->ConstructFinishAndUpload();
            }
        }
    }

} // namespace jag::game

namespace jag {
    // 0x1006252f0
    shared_ptr_if_not_array<game::BuildSingleLocationRequestData>::type
    bucket_make_shared<game::BuildSingleLocationRequestData, shared_ptr<game::LocType> const&,
                       shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&,
                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
        const shared_ptr<game::LocType>& locType1, const shared_ptr<game::LocType>& locType2,
        const shared_ptr<graphics::Model>& model, Rotation90& rotation90, int& arg5,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg6,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg7) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>* in_stack_00000010;
        BuildSingleLocationRequestData* local_40[2];

        auto local_48 = BucketManager::Allocate(168, 0, 16);
        if (local_48 == nullptr) {
            new (locType1) shared_ptr();
        } else {
            local_40[0] =
                placement_new<game::BuildSingleLocationRequestData, shared_ptr<game::LocType> const&,
                              shared_ptr<game::LocType> const&, shared_ptr<graphics::Model> const&, Rotation90&, int&,
                              Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                              Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
                    local_48 + 48, locType2, (shared_ptr<game::LocType>*)model,
                    (shared_ptr<graphics::Model>*)rotation90, (Rotation90*)arg5, (int*)arg6, arg7, in_stack_00000010);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildSingleLocationRequestData>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationRequestData>,
                                                           game::BuildSingleLocationRequestData>*&,
                              game::BuildSingleLocationRequestData*&>(local_48, &local_48, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (locType1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return locType1;
    }

    // 0x1006256a0
    shared_ptr_if_not_array<game::BuildSingleLocationWorker>::type
    bucket_make_shared<game::BuildSingleLocationWorker>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildSingleLocationWorker* local_28[2];

        auto local_30 = BucketManager::Allocate(88, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildSingleLocationWorker>::type result;
        } else {
            local_28[0] = placement_new<game::BuildSingleLocationWorker>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildSingleLocationWorker>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationWorker>,
                                                           game::BuildSingleLocationWorker>*&,
                              game::BuildSingleLocationWorker*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
