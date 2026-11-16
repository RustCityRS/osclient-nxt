// libs/game/runetek5/scene/entities/PathingEntityAnimatedModel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PathingEntityAnimatedModel.h"

namespace jag {
    // 0x1003f64d0
    unsigned long PathingEntityAnimatedModel::AbortAnimationsOnMove() {
        AnimationWrapper* pAVar2;
        uint64_t unaff_R15;
        unsigned long uVar3;

        uint8_t* this_00 = field_2024;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (cVar1) {
            pAVar2 = (AnimationWrapper*)(*this_00).operator->();
            cVar1 = pAVar2->AbortOnMove();
            if (cVar1) {
                field_1896.ResetRequestedAnimation();
                uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
                goto LAB_1003f651f;
            }
        }
        uVar3 = 0;
    LAB_1003f651f:
        cVar1 = field_1912->operator_cast_to_bool();
        unsigned long uVar4 = uVar3;
        if (cVar1) {
            pAVar2 = (AnimationWrapper*)(*field_1912).operator->();
            cVar1 = pAVar2->AbortOnMove();
            if (cVar1) {
                field_1896.ClearActiveAnimation();
                ((AnimationState*)field_1584.operator->())->ClearState();
                cVar1 = this_00->operator_cast_to_bool();
                uVar4 = 1;
                if (cVar1) {
                    uVar4 = uVar3 & 255;
                }
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1003f7ef0
    void PathingEntityAnimatedModel::RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const {
        (*field_2352->_vptr[1].UpdateHighlighting__2)();
    }

    // 0x1003f7f10
    void PathingEntityAnimatedModel::OnOverrideAnimationFinished(int arg1) {
        field_2352->OnOverrideAnimationFinished(arg1);
    }

    // 0x1003f7f30
    void PathingEntityAnimatedModel::GetDefaultModels(game::AnimatedModelPair& animatedModelPair, int arg2) const {
        field_2352->GetDefaultModel(animatedModelPair, arg2);
    }

    // 0x1003f7f50
    void PathingEntityAnimatedModel::GetOverrideModels(game::AnimatedModelPair& animatedModelPair, int arg2) const {
        field_2352->GetOverrideModel(animatedModelPair, arg2);
    }

} // namespace jag
