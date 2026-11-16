// libs/game/runetek5/assetbuilder/BuildRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    template <
        typename...> // 2 instantiations, e.g. <graphics::Animation, BuildAnimationMain>, <graphics::Model, BuildModelMain>
    class BuildRequest {
    public:
        BuildRequest<graphics::Model, BuildModelMain>*
        operator=(BuildRequest<graphics::Model, BuildModelMain>&& buildRequest);
        BuildRequest<graphics::Model, BuildModelMain>*
        operator=(const BuildRequest<graphics::Model, BuildModelMain>& buildRequest);
        BuildRequest(BuildRequest<graphics::Model, BuildModelMain>&& buildRequest);
        BuildRequest(const shared_ptr<graphics::Model>& model, const shared_ptr<BuildModelMain>& buildModelMain);
        BuildRequest();
        bool IsTaskDone() const;
        void Clear();
        unsigned long IsTaskRunning() const;
        unsigned long IsEmpty() const;
        void SetConstructedObj(const shared_ptr<graphics::Model>& model);
        BuildRequest(const BuildRequest<graphics::Model, BuildModelMain>& buildRequest);
        void SetConstructedObj(const shared_ptr<graphics::Animation>& animation);
        void SetObjAndTask(const shared_ptr<graphics::Animation>& animation,
                           const shared_ptr<BuildAnimationMain>& buildAnimationMain);
        void SetObjAndTask(const shared_ptr<graphics::Model>& model, const shared_ptr<BuildModelMain>& buildModelMain);
    };

    // 0x1004188c0
    BuildRequest<graphics::Model, BuildModelMain>* BuildRequest<graphics::Model, BuildModelMain>::operator=(
        BuildRequest<graphics::Model, BuildModelMain>&& buildRequest) {
        *this = buildRequest;
        (*((this + 16))) = (*((buildRequest + 16)));
        return this;
    }

    // 0x100419440
    BuildRequest<graphics::Model, BuildModelMain>* BuildRequest<graphics::Model, BuildModelMain>::operator=(
        const BuildRequest<graphics::Model, BuildModelMain>& buildRequest) {
        *this = buildRequest;
        (*((this + 16))) = (*((buildRequest + 16)));
        return this;
    }

    // 0x10041eed0
    BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(
        BuildRequest<graphics::Model, BuildModelMain>&& buildRequest) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(buildRequest);
        ((this + 16))->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((buildRequest + 16)));
    }

    // 0x10042ae40
    bool BuildRequest<graphics::Model, BuildModelMain>::IsTaskDone() const {
        bool bVar3;
        AssetJob* pAVar4;
        BuildModelMain* pBVar5;
        OpenGLView* this_01;
        shared_ptr<graphics::Model>* model;

        bool cVar1 = operator_cast_to_bool();
        shared_ptr* this_00 = (shared_ptr*)(this + 16);
        bool cVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar1) {
            if (cVar2) {
                pAVar4 = (AssetJob*)(*this_00).operator->();
                cVar1 = pAVar4->IsFinished();
                if (cVar1) {
                    pBVar5 = (BuildModelMain*)(*this_00).operator->();
                    cVar1 = pBVar5->IsAssetConstructed();
                    if (cVar1)
                        goto LAB_10042aeca;
                    goto LAB_10042aee5;
                }
            }
        LAB_10042aef9:
            bVar3 = false;
        } else {
            if (cVar2) {
                pAVar4 = (AssetJob*)(*this_00).operator->();
                cVar1 = pAVar4->IsFinished();
                if (!cVar1)
                    goto LAB_10042aef9;
                pBVar5 = (BuildModelMain*)(*this_00).operator->();
                cVar1 = pBVar5->IsAssetConstructed();
                if (!cVar1) {
                    reset();
                } else {
                LAB_10042aeca:
                    this_01 = (OpenGLView*)(*this_00).operator->();
                    model = (shared_ptr<graphics::Model>*)this_01->GetCursorMutex();
                    *this = *model;
                }
            LAB_10042aee5:
                this_00->reset();
            }
            bVar3 = *this != nullptr;
        }
        return bVar3;
    }

    // 0x10042c090
    void BuildRequest<graphics::Model, BuildModelMain>::Clear() {
        reset();
        ((this + 16))->reset();
    }

    // 0x10042e6b0
    unsigned long BuildRequest<graphics::Model, BuildModelMain>::IsTaskRunning() const {
        unsigned long uVar2;

        if (IsTaskDone(this) == '\0') {
            uVar2 = IsEmpty();
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10042eae0
    unsigned long BuildRequest<graphics::Model, BuildModelMain>::IsEmpty() const {
        unsigned long uVar2;

        if (operator_cast_to_bool() == '\0') {
            uVar2 = ((this + 16))->operator_cast_to_bool();
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100430d10
    void BuildRequest<graphics::Model, BuildModelMain>::SetConstructedObj(const shared_ptr<graphics::Model>& model) {
        *this = model;
        ((this + 16))->reset();
    }

    // 0x100434230
    BuildRequest<graphics::Model, BuildModelMain>::BuildRequest() : shared_ptr() {
        new ((this + 16)) shared_ptr();
    }

    // 0x100436db0
    BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(const shared_ptr<graphics::Model>& model,
                                                                const shared_ptr<BuildModelMain>& buildModelMain)
        : shared_ptr(model) {
        new ((this + 16)) shared_ptr(buildModelMain);
    }

    // 0x1004552e0
    BuildRequest<graphics::Model, BuildModelMain>::BuildRequest(
        const BuildRequest<graphics::Model, BuildModelMain>& buildRequest)
        : shared_ptr(buildRequest) {
        new ((this + 16)) shared_ptr((buildRequest + 16));
    }

    // 0x1004df2e0
    void BuildRequest<graphics::Animation, BuildAnimationMain>::SetConstructedObj(
        const shared_ptr<graphics::Animation>& animation) {
        *this = animation;
        ((this + 16))->reset();
    }

    // 0x1004dfc50
    void BuildRequest<graphics::Animation, BuildAnimationMain>::SetObjAndTask(
        const shared_ptr<graphics::Animation>& animation, const shared_ptr<BuildAnimationMain>& buildAnimationMain) {
        *this = animation;
        (*((this + 16))) = buildAnimationMain;
    }

    // 0x1004dfc80
    bool BuildRequest<graphics::Animation, BuildAnimationMain>::IsTaskDone() const {
        bool bVar3;
        AssetJob* pAVar4;
        BuildAnimationMain* pBVar5;
        WorldmapAreaMetadata* this_01;
        shared_ptr<graphics::Animation>* animation;

        bool cVar1 = operator_cast_to_bool();
        shared_ptr* this_00 = (shared_ptr*)(this + 16);
        bool cVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar1) {
            if (cVar2) {
                pAVar4 = (AssetJob*)(*this_00).operator->();
                cVar1 = pAVar4->IsFinished();
                if (cVar1) {
                    pBVar5 = (BuildAnimationMain*)(*this_00).operator->();
                    cVar1 = pBVar5->IsAssetConstructed();
                    if (cVar1)
                        goto LAB_1004dfd0a;
                    goto LAB_1004dfd25;
                }
            }
        LAB_1004dfd39:
            bVar3 = false;
        } else {
            if (cVar2) {
                pAVar4 = (AssetJob*)(*this_00).operator->();
                cVar1 = pAVar4->IsFinished();
                if (!cVar1)
                    goto LAB_1004dfd39;
                pBVar5 = (BuildAnimationMain*)(*this_00).operator->();
                cVar1 = pBVar5->IsAssetConstructed();
                if (!cVar1) {
                    reset();
                } else {
                LAB_1004dfd0a:
                    this_01 = (WorldmapAreaMetadata*)(*this_00).operator->();
                    animation = (shared_ptr<graphics::Animation>*)this_01->GetOrigin();
                    *this = *animation;
                }
            LAB_1004dfd25:
                this_00->reset();
            }
            bVar3 = *this != nullptr;
        }
        return bVar3;
    }

    // 0x100546640
    void
    BuildRequest<graphics::Model, BuildModelMain>::SetObjAndTask(const shared_ptr<graphics::Model>& model,
                                                                 const shared_ptr<BuildModelMain>& buildModelMain) {
        *this = model;
        (*((this + 16))) = buildModelMain;
    }

    // 0x100657ee0
    void BuildRequest<graphics::Animation, BuildAnimationMain>::Clear() {
        reset();
        ((this + 16))->reset();
    }

    // 0x10065c560
    BuildRequest<graphics::Animation, BuildAnimationMain>::BuildRequest() : shared_ptr() {
        new ((this + 16)) shared_ptr();
    }

} // namespace jag::game

namespace jag {
    // 0x1004194f0
    std::enable_if<!std::is_array<game::NPCTypeCustomisation>::value,
                   std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>>::type
    bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int>, eastl::vector<float>,
                       eastl::vector<math::Vector3T<float>>, eastl::vector<math::Vector3T<float>>,
                       eastl::vector<eastl::vector<int>>, eastl::vector<eastl::vector<int>>, Array<unsigned short>,
                       Array<unsigned short>, bool&, Array<unsigned char>>(
        eastl::vector<int>&& arg1, eastl::vector<float>&& arg2, eastl::vector<math::Vector3T<float>>&& vector3s1,
        eastl::vector<math::Vector3T<float>>&& vector3s2, eastl::vector<eastl::vector<int>>&& arg5,
        eastl::vector<eastl::vector<int>>&& arg6, Array<unsigned short>&& arg7, Array<unsigned short>&& arg8,
        bool& arg9, Array<unsigned char>&& arg10) {
        __good_rval_ref_type* good_rval_ref_type;
        Array<unsigned char>* in_stack_00000028;

        auto nPCTypeCustomisation = BucketManager::Allocate(280, 0, 16);
        if (nPCTypeCustomisation == nullptr) {
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, nullptr);
        }
        new (nPCTypeCustomisation) game::NPCTypeCustomisation(arg2, vector3s1, vector3s2, arg5, arg6, arg7, arg8, arg9,
                                                              (bool)*arg10, *in_stack_00000028);
        arg1.unique_ptr<true, void>(nPCTypeCustomisation, good_rval_ref_type);
        return arg1;
    }

    // 0x100419810
    std::enable_if<!std::is_array<game::NPCTypeCustomisation>::value,
                   std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>>::type
    bucket_make_unique<game::NPCTypeCustomisation, eastl::vector<int>, Array<unsigned short>, Array<unsigned short>>(
        eastl::vector<int>&& arg1, Array<unsigned short>&& arg2, Array<unsigned short>&& arg3) {
        std::enable_if<!std::is_array<game::NPCTypeCustomisation>::value,
                       std::unique_ptr<game::NPCTypeCustomisation, BucketDeleter<game::NPCTypeCustomisation>>>::type
            result;
        __good_rval_ref_type* good_rval_ref_type;

        auto nPCTypeCustomisation = BucketManager::Allocate(280, 0, 16);
        if (nPCTypeCustomisation == nullptr) {
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, nullptr);
        }
        game::NPCTypeCustomisation::NPCTypeCustomisation(nPCTypeCustomisation, arg1, arg2, arg3);
        result.unique_ptr<true, void>(nPCTypeCustomisation, good_rval_ref_type);
        return result;
    }

} // namespace jag
