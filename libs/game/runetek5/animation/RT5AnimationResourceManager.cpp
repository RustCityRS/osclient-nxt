// libs/game/runetek5/animation/RT5AnimationResourceManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "RT5AnimationResourceManager.h"

namespace jag::game {
    // 0x100049810: RT5AnimationResourceManager::GetModel() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x100658810
    RT5AnimationResourceManager::RT5AnimationResourceManager(AssetBuilder& assetBuilder,
                                                             const ConfigProvider& configProvider)
        : graphics::AnimationResourceManager(), field_48(assetBuilder), field_56(configProvider) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        new (&field_80) weak_ptr(local_38);
    }

    // 0x100658910
    void RT5AnimationResourceManager::Update() {
        compressed_pair<eastl::string*>* pcVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        shared_ptr* psVar3;
        shared_ptr* this_02;
        compressed_pair<eastl::string*>* this_03;

        if (m_model->operator_cast_to_bool()) {
            this_03 = (compressed_pair<eastl::string*>*)field_8.HeapBeginPtr();
            pcVar2 = (compressed_pair<eastl::string*>*)field_8.end();
            for (; this_03 != pcVar2; this_03 = this_03 + 40) {
                this_03->first();
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
                this_02 = (shared_ptr*)this_01->HeapBeginPtr();
                psVar3 = (shared_ptr*)this_01->end();
                for (; this_02 != psVar3; this_02 = (shared_ptr*)&this_02[3].field_8) {
                    if (shared_ptr::operator_cast_to_bool(this_02)) {
                        ((SeqType*)(*this_02).operator->())->CleanCache();
                    }
                }
            }
            LoadAnimations();
        }
    }

    // 0x1006589e0
    void RT5AnimationResourceManager::LoadAnimations() {
        bool bVar1;
        bool cVar2;
        uint64_t* puVar3;
        vector<graphics::AnimationResource>* this_01;
        long lVar4;
        unsigned long uVar5;
        AnimationResource* this_02;
        LoadInfo* loadInfo;
        BASType* basType;
        unsigned long arg1;
        bool bVar6;
        vector<RT5AnimationResourceManager::LoadInfo>* local_58;
        compressed_pair<eastl::string*>* local_48;
        uint64_t* local_40;

        auto local_68 = field_80.lock();
        auto this_00 = field_8.HeapBeginPtr();
        auto local_38 = field_8.end();
        if (this_00 != local_38) {
            do {
                puVar3 = (uint64_t*)this_00->first();
                local_58 = (vector<RT5AnimationResourceManager::LoadInfo>*)
                    eastl::compressed_pair<std::deque<ThreadPool::TaskInfo>*>::second();
                local_48 = this_00;
                local_40 = puVar3;
                this_01 = (vector<graphics::AnimationResource>*)(*puVar3)->SSOBeginPtr();
                lVar4 = this_01->size();
                bVar1 = true;
                bVar6 = true;
                if (lVar4 != 0) {
                    arg1 = 0;
                    do {
                        this_02 = (AnimationResource*)(*this_01)[arg1];
                        cVar2 = this_02->Constructed();
                        if (!cVar2) {
                            loadInfo = (LoadInfo*)(*local_58)[arg1];
                            basType = (BASType*)local_68.end();
                            cVar2 = LoadResource(*this_02, *loadInfo, basType);
                            bVar6 = bVar1;
                            if (!cVar2) {
                                bVar6 = false;
                                bVar1 = bVar6;
                            }
                        }
                        arg1 = arg1 + 1;
                        uVar5 = this_01->size();
                    } while (arg1 < uVar5);
                }
                if (bVar6) {
                    (*local_40)->SetAllConstructed();
                }
                this_00 = local_48 + 40;
            } while (this_00 != local_38);
        }
    }

    // 0x100658ba0
    unsigned long RT5AnimationResourceManager::LoadResource(graphics::AnimationResource& animationResource,
                                                            RT5AnimationResourceManager::LoadInfo& loadInfo,
                                                            BASType* basType) {
        uint8_t* buildRequest;
        ConfigProvider* this_00;
        AnimationResource* this_01;
        int iVar3;
        unsigned int arg3;
        long lVar4;
        GameToken* this_03;
        shared_ptr<SeqType>* seqType;
        Model* this_04;
        SeqType* pSVar5;
        uint8_t* puVar6;
        shared_ptr<graphics::Animation>* psVar7;
        Skybox* this_05;
        Animation* this_06;
        int* piVar8;
        AnimationParameters* this_07;
        function<void_(), _64ul, _16ul, _(fixedfunction::Methods) 0>* callback;
        unsigned long uVar9;
        uint64_t local_2b8;
        AnimationResource* local_c0;
        int local_b8;
        int local_b4;
        int local_b0;
        unsigned int local_ac;
        AnimationLoopBehaviour local_a0;
        bool local_9a;
        bool local_99;
        function<void(), 64ul, 16ul, (fixedfunction::Methods)0> local_98[96];
        long local_38;

        BASType* local_a8 = basType;
        auto this_02 = animationResource.SSOBeginPtr();
        int iVar2 = this_02->GetStickTime();
        if (iVar2 == -1) {
            if (local_a8 == nullptr) {
                LogAssert("basType != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/RT5AnimationResourceManager.cpp",
                          94, nullptr);
            }
            _memcpy(&local_2b8, &DAT_100f0da30, 504);
            iVar2 = this_02->GetWrapMode();
            if (iVar2 == 0) {
                iVar2 = local_a8->GetReadyAnim(-1);
            } else {
                iVar2 = this_02->GetWrapMode();
                lVar4 = local_2b8[(long)iVar2];
                if (*(long*)(lVar4 + 8) == 0) {
                    LogAssert("func",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "animation/RT5AnimationResourceManager.cpp",
                              135, nullptr);
                }
                iVar2 = std::invoke<int (BASType::* const&)() const, BASType*&>((int)lVar4 + 8, local_a8);
            }
            if (iVar2 == -1) {
                LogAssert("seqID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/RT5AnimationResourceManager.cpp",
                          139, nullptr);
            }
        } else {
            iVar2 = this_02->GetStickTime();
            if (iVar2 == -1) {
                LogAssert("seqID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/RT5AnimationResourceManager.cpp",
                          145, nullptr);
            }
        }
        bool cVar1 = loadInfo.operator_cast_to_bool();
        if (!cVar1) {
            this_00 = field_56;
            iVar2 = this_02->GetStickTime();
            seqType = this_00->GetConfig<SeqType>(iVar2, &local_2b8);
            loadInfo = *seqType;
            basType = (BASType*)&DataStatus::NOTLOADED;
            if ((uint8_t*)(((uint64_t)local_2b8._4_4_ << 32) | (uint32_t)((int)local_2b8)) != DataStatus::NOTLOADED)
                goto LAB_100658d70;
        } else {
            this_03 = (GameToken*)loadInfo.operator->();
            iVar2 = this_03->GetStatus();
            iVar3 = this_02->GetStickTime();
            if (iVar2 != iVar3) {
                LogAssert("(int)loadInfo.m_seq->GetMyID() == animDesc.GetSeqID()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/RT5AnimationResourceManager.cpp",
                          162, nullptr);
            }
        LAB_100658d70:
            cVar1 = loadInfo.operator_cast_to_bool();
            uVar9 = (((uint64_t)((int64_t)((unsigned long)basType >> 8)) << 8) | (uint8_t)1);
            if (!cVar1)
                goto LAB_100658f7e;
            local_c0 = animationResource;
            this_04 = (Model*)(*m_model).operator->();
            arg3 = this_04->GetModelRawUniqueID();
            if (loadInfo.field_16 != arg3) {
                loadInfo.field_16 = arg3;
                loadInfo.field_24->Clear();
            }
            pSVar5 = (SeqType*)loadInfo.operator->();
            buildRequest = loadInfo.field_24;
            puVar6 = (uint8_t*)pSVar5->GetAnimation(*field_48, *buildRequest, arg3, *m_model);
            if (((puVar6 == DataStatus::READY) && (cVar1 = buildRequest->IsTaskDone(), cVar1)) &&
                (cVar1 = buildRequest->IsEmpty(), !cVar1)) {
                psVar7 = (shared_ptr<graphics::Animation>*)buildRequest->SSOBeginPtr();
                this_05 = (Skybox*)(*psVar7).operator->();
                cVar1 = this_05->ShowSkybox();
                if (cVar1) {
                    local_b8 = 0;
                    local_9a = false;
                    local_b4 = 0;
                    local_2b8._0_4_ = this_02->GetLoopLength();
                    psVar7 = (shared_ptr<graphics::Animation>*)buildRequest->SSOBeginPtr();
                    this_06 = (Animation*)(*psVar7).operator->();
                    local_a0 = this_06->GetFrameCount();
                    piVar8 = std::min<int>(local_2b8, local_a0);
                    local_b0 = *piVar8;
                    psVar7 = (shared_ptr<graphics::Animation>*)buildRequest->SSOBeginPtr();
                    local_a0 = this_02->GetCurrentX();
                    pSVar5 = (SeqType*)loadInfo.operator->();
                    local_ac = pSVar5->GetMaxLoops();
                    local_99 = (bool)this_02->HasError();
                    piVar8 = &local_b8;
                    local_2b8.MakeUnique<shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour, int&,
                                         int&, bool&, int&, unsigned int, bool>(
                        psVar7, &local_a0, piVar8, &local_b4, &local_9a, &local_b0, &local_ac, &local_99);
                    this_07 = (AnimationParameters*)local_2b8.operator->();
                    callback = (function<void_(), _64ul, _16ul, _(fixedfunction::Methods) 0>*)this_02->GetCursorMutex();
                    new (local_98) fixedfunction::function(*callback);
                    this_07->SetOnFinishedCallback(local_98);
                    this_01 = local_c0;
                    this_01->Construct(local_2b8);
                    uVar9 = (((uint64_t)((int64_t)((unsigned long)piVar8 >> 8)) << 8) | (uint8_t)1);
                    goto LAB_100658f7e;
                }
            }
        }
        uVar9 = 0;
    LAB_100658f7e:
        return uVar9 & 4294967295;
    }

    // 0x100659050
    void
    RT5AnimationResourceManager::RequestResources(graphics::AnimationStateResourceList& animationStateResourceList) {
        unsigned long arg1;
        vector<RT5AnimationResourceManager::LoadInfo>* this_01;
        AnimationStateResourceList* local_50[4];

        AnimationStateResourceList** this_02 = &field_8;
        local_50[0] = animationStateResourceList;
        long lVar1 = eastl::vector_map<graphics::AnimationStateResourceList*,
                                       eastl::vector<RT5AnimationResourceManager::LoadInfo>>::find(*this_02);
        long lVar2 = this_02->end();
        if (lVar1 == lVar2) {
            arg1 = ((vector<graphics::AnimationResource>*)animationStateResourceList.SSOBeginPtr())->size();
            new (local_50) eastl::vector<RT5AnimationResourceManager::LoadInfo>(arg1, local_58);
            this_01 = (vector<RT5AnimationResourceManager::LoadInfo>*)(*this_02)[animationStateResourceList];
            *this_01 = *local_50;
        }
    }

} // namespace jag::game
