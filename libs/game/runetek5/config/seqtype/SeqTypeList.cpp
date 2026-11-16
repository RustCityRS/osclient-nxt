// libs/game/runetek5/config/seqtype/SeqTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SeqTypeList.h"

namespace jag::game {
    // 0x1004c5ce0: SeqTypeList::GetSeqGroupTypeList() const has the same machine code as VarBitTypeList::GetConfigProvider()

    // 0x1004df340
    auto SeqTypeList::GetKeyFrameset(int arg1) {
        AnimKeyFrameSet* pAVar3;
        unsigned long long local_50[2];

        local_50[0] = (unsigned long long)arg1;
        int local_2c = arg1;
        auto groundDecor = field_120.Find(*local_50);
        shared_ptr<oldscape::dash3d::Decor> local_40(groundDecor);
        long lVar2 = local_40.end();
        if (lVar2 == 0) {
            MakeSharedPool<graphics::AnimKeyFrameSet, 128>::MakeShared<int&, Js5ResourceProvider&, Js5ArchiveSettings&,
                                                                       Js5ArchiveSettings&>(
                (int*)local_50, (Js5ResourceProvider*)&local_2c, field_64, Js5Archive::JS5_BASES);
            local_40 = *local_50;
            local_50[0] = (unsigned long long)local_2c;
            field_120.Put(local_40, 1, *local_50);
        } else {
            pAVar3 = (AnimKeyFrameSet*)local_40.operator->();
            if (pAVar3->IsLoaded()) {
                result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
                goto LAB_1004df46f;
            }
        }
        unsigned long uVar4 = ((Layout*)local_40.operator->())->HeapBeginPtr();
        lVar2 = FrameTime::GetCurrentTimeMS();
        if (uVar4 < lVar2 - 5U) {
            pAVar3 = (AnimKeyFrameSet*)local_40.operator->();
            if (!(pAVar3->Load())) {
                auto result(
                    (shared_ptr<oldscape::dash3d::GroundDecor>*)&graphics::AnimKeyFrameSet::NullAnimKeyFrameset);
            } else {
                result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
            }
        } else {
            new (&result)
                shared_ptr((shared_ptr<oldscape::dash3d::GroundDecor>*)&graphics::AnimKeyFrameSet::NullAnimKeyFrameset);
        }
    LAB_1004df46f:
        return result;
    }

    // 0x1004df6f0
    auto SeqTypeList::GetFrame(unsigned int arg1) {
        NXTPixToolkit* this_00;
        Array<shared_ptr<graphics::AnimationFrameRT5>>* this_01;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        ReturnValue local_30;

        GetFrameset(&local_30, this, arg1 >> 16);
        if (local_30.end() == 0) {
            auto result((shared_ptr<oldscape::dash3d::GroundDecor>*)&graphics::AnimationFrameRT5::NullAnimFrame);
        } else {
            this_00 = (NXTPixToolkit*)local_30.operator->();
            this_01 = (Array<shared_ptr<graphics::AnimationFrameRT5>>*)this_00->GetScreen();
            groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)(*this_01)[(unsigned long)(arg1 & 65535)];
            new (&result) shared_ptr(groundDecor);
        }
        return result;
    }

    // 0x1004dfd50
    auto SeqTypeList::GetFrameset(int arg1) {
        unsigned long long local_50[2];

        local_50[0] = (unsigned long long)arg1;
        int local_2c = arg1;
        auto groundDecor = field_20856.Find(*local_50);
        shared_ptr<oldscape::dash3d::Decor> local_40(groundDecor);
        long lVar2 = local_40.end();
        if (lVar2 == 0) {
            MakeSharedPool<graphics::AnimFrameset, 256>::MakeShared<int&, Js5ResourceProvider&, Js5ArchiveSettings&,
                                                                    Js5ArchiveSettings&>(
                (int*)local_50, (Js5ResourceProvider*)&local_2c, field_64, Js5Archive::JS5_BASES);
            local_40 = *local_50;
            local_50[0] = (unsigned long long)local_2c;
            field_20856.Put(local_40, 1, *local_50);
        } else {
            if (((WorldmapRenderer*)local_40.operator->())->IsValid()) {
                result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
                goto LAB_1004dfe82;
            }
        }
        unsigned long uVar3 = ((Layout*)local_40.operator->())->HeapBeginPtr();
        lVar2 = FrameTime::GetCurrentTimeMS();
        if (uVar3 < lVar2 - 5U) {
            if (!(((AnimFrameset*)local_40.operator->())->Load())) {
                auto result((shared_ptr<oldscape::dash3d::GroundDecor>*)&graphics::AnimFrameset::NullAnimFrameset);
            } else {
                result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_40);
            }
        } else {
            new (&result)
                shared_ptr((shared_ptr<oldscape::dash3d::GroundDecor>*)&graphics::AnimFrameset::NullAnimFrameset);
        }
    LAB_1004dfe82:
        return result;
    }

    // 0x1004e00d0
    SeqTypeList::SeqTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider,
                             SeqGroupTypeList& seqGroupTypeList)
        : BaseTemplateConfigTypeList<SeqType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG_SEQ), (Js5ConfigGroup*)Js5ConfigGroup::SEQTYPE,
                                              256),
          m_seqGroupTypeList(seqGroupTypeList), field_120(256, "KeyFrameSeqTypeList"), field_20856(256, "SeqTypeList") {
    }

} // namespace jag::game

namespace jag {
    // 0x1004dfb20
    shared_ptr_if_not_array<game::BuildAnimationMain>::type
    bucket_make_shared<game::BuildAnimationMain, int, shared_ptr<graphics::Animation>&,
                       Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>, Array<unsigned int>&,
                       shared_ptr<graphics::Model> const&, shared_ptr<graphics::AnimKeyFrameSet>&>(
        int&& arg1, shared_ptr<graphics::Animation>& animation,
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>&& animationFrameRT5s,
        Array<unsigned int>& arg4, const shared_ptr<graphics::Model>& model,
        shared_ptr<graphics::AnimKeyFrameSet>& animKeyFrameSet) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        shared_ptr<graphics::AnimKeyFrameSet>* in_stack_00000008;
        BuildAnimationMain* local_40[2];

        auto local_48 = BucketManager::Allocate(160, 0, 16);
        if (local_48 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<game::BuildAnimationMain, int, shared_ptr<graphics::Animation>&,
                                        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>,
                                        Array<unsigned int>&, shared_ptr<graphics::Model> const&,
                                        shared_ptr<graphics::AnimKeyFrameSet>&>(
                local_48 + 48, (int*)animation, (shared_ptr<graphics::Animation>*)animationFrameRT5s,
                (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)arg4,
                (Array<unsigned int>*)model, (shared_ptr<graphics::Model>*)animKeyFrameSet, in_stack_00000008);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<game::BuildAnimationMain>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationMain>, game::BuildAnimationMain>*&,
                game::BuildAnimationMain*&>(local_48, &local_48, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

} // namespace jag
