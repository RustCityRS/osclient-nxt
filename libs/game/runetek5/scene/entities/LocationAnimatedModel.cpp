// libs/game/runetek5/scene/entities/LocationAnimatedModel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LocationAnimatedModel.h"

namespace jag::game {
    // 0x1003f0890: the linker folded this into PathingEntityAnimatedModel::~PathingEntityAnimatedModel(), which has identical code
    LocationAnimatedModel::~LocationAnimatedModel();

    // 0x1003fdc40: the linker folded this into PathingEntityAnimatedModel::~PathingEntityAnimatedModel(), which has identical code
    LocationAnimatedModel::~LocationAnimatedModel();

    // 0x1003ffdf0: the linker folded this into PathingEntityAnimatedModel::~PathingEntityAnimatedModel(), which has identical code
    LocationAnimatedModel::~LocationAnimatedModel();

    // 0x1004315c0, 32 bytes, placed by class name and debug map
    // LocationAnimatedModel::RepeatLastOverrideAnimationFrameWhenFinished(int) const
    void LocationAnimatedModel::RepeatLastOverrideAnimationFrameWhenFinished(int param_1) {
        (field_2352, param_1)->RepeatLastOverrideAnimationFrameWhenFinished();
    }

    // 0x1004315e0, 32 bytes, placed by class name and debug map
    // LocationAnimatedModel::GetDefaultModels(AnimatedModelPair&, int) const
    void LocationAnimatedModel::GetDefaultModels(AnimatedModelPair* param_1, int param_2) {
        Location::GetDefaultModel((AnimatedModelPair*)field_2352, (int)param_1);
    }

    // 0x100431600, 32 bytes, placed by class name and debug map
    // LocationAnimatedModel::GetOverrideModels(AnimatedModelPair&, int) const
    void LocationAnimatedModel::GetOverrideModels(AnimatedModelPair* param_1, int param_2) {
        Location::GetDefaultModel((AnimatedModelPair*)field_2352, (int)param_1);
    }

} // namespace jag::game

// 0x100432d30, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100432d40, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

namespace jag::math {
    // 0x100432310, 112 bytes, inline, placed by debug map only (low confidence)
    // graphics::IrradianceSHCoefConsts Lerp<graphics::IrradianceSHCoefConsts, float>(graphics::IrradianceSHCoefConsts const&, graphics::IrradianceSHCoefConsts const&, float)
    IrradianceSHCoefConsts*
    Lerp<graphics::IrradianceSHCoefConsts, float>(IrradianceSHCoefConsts* __return_storage_ptr__, math* this,
                                                  IrradianceSHCoefConsts* param_1, IrradianceSHCoefConsts* param_2,
                                                  float param_3) {
        IrradianceSHCoefConsts local_118;
        IrradianceSHCoefConsts local_a8;

        graphics::operator-(&local_a8, param_1);
        graphics::operator*(&local_118, param_3);
        graphics::operator+(__return_storage_ptr__, (IrradianceSHCoefConsts*)this);
        return __return_storage_ptr__;
    }

} // namespace jag::math
