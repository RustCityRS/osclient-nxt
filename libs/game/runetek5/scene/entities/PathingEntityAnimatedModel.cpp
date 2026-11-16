// libs/game/runetek5/scene/entities/PathingEntityAnimatedModel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PathingEntityAnimatedModel.h"

namespace jag {
    // 0x1003f64d0, 192 bytes, placed by class name and debug map
    // PathingEntityAnimatedModel::AbortAnimationsOnMove()
    ulong PathingEntityAnimatedModel::AbortAnimationsOnMove() {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        AnimationWrapper* pAVar3;
        AnimationState* this_01;
        undefined8 unaff_R15;
        ulong uVar4;
        ulong uVar5;

        this_00 = field_2024;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            pAVar3 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)this_00);
            cVar2 = pAVar3->AbortOnMove();
            if (cVar2 != '\0') {
                (&field_1896)->ResetRequestedAnimation();
                uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
                goto LAB_1003f651f;
            }
        }
        uVar4 = 0;
    LAB_1003f651f:
        bVar1 = field_1912->operator_cast_to_bool();
        uVar5 = uVar4;
        if (bVar1) {
            pAVar3 = (AnimationWrapper*)shared_ptr<game::AnimationWrapper>::operator->(
                (shared_ptr<game::AnimationWrapper>*)field_1912);
            cVar2 = pAVar3->AbortOnMove();
            if (cVar2 != '\0') {
                (&field_1896)->ClearActiveAnimation();
                this_01 = (AnimationState*)shared_ptr<graphics::AnimationState>::operator->(
                    (shared_ptr<graphics::AnimationState>*)&field_1584);
                this_01->ClearState();
                bVar1 = this_00->operator_cast_to_bool();
                uVar5 = 1;
                if (bVar1) {
                    uVar5 = uVar4 & 255;
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x1003f7ef0, 32 bytes, placed by class name
    // PathingEntityAnimatedModel::RepeatLastOverrideAnimationFrameWhenFinished(int) const
    void PathingEntityAnimatedModel::RepeatLastOverrideAnimationFrameWhenFinished(int param_1) {
        (*(code*)field_2352->field_0[63])();
    }

    // 0x1003f7f10, 32 bytes, placed by class name
    // PathingEntityAnimatedModel::OnOverrideAnimationFinished(int)
    void PathingEntityAnimatedModel::OnOverrideAnimationFinished(int param_1) {
        (field_2352, param_1)->OnOverrideAnimationFinished();
    }

    // 0x1003f7f30, 32 bytes, placed by class name
    // PathingEntityAnimatedModel::GetDefaultModels(game::AnimatedModelPair&, int) const
    void PathingEntityAnimatedModel::GetDefaultModels(AnimatedModelPair* param_1, int param_2) {
        (field_2352, param_1, param_2)->GetDefaultModel();
    }

    // 0x1003f7f50, 32 bytes, placed by class name
    // PathingEntityAnimatedModel::GetOverrideModels(game::AnimatedModelPair&, int) const
    void PathingEntityAnimatedModel::GetOverrideModels(AnimatedModelPair* param_1, int param_2) {
        (field_2352, param_1, param_2)->GetOverrideModel();
    }

} // namespace jag
