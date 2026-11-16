// libs/game/runetek5/scene/entities/LocationAnimatedModel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LocationAnimatedModel.h"

namespace jag::game {
    // 0x1003ffdf0: LocationAnimatedModel::~LocationAnimatedModel() has the same machine code as PathingEntityAnimatedModel::~PathingEntityAnimatedModel()

    // 0x1004315c0
    void LocationAnimatedModel::RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const {
        field_2352->RepeatLastOverrideAnimationFrameWhenFinished(arg1);
    }

    // 0x1004315e0
    void LocationAnimatedModel::GetDefaultModels(AnimatedModelPair& animatedModelPair, int arg2) const {
        Location::GetDefaultModel(*field_2352, (int)animatedModelPair);
    }

    // 0x100431600
    void LocationAnimatedModel::GetOverrideModels(AnimatedModelPair& animatedModelPair, int arg2) const {
        Location::GetDefaultModel(*field_2352, (int)animatedModelPair);
    }

} // namespace jag::game

// 0x100432d30
void sin(float arg1) {
    _sinf();
}

// 0x100432d40
void cos(float arg1) {
    _cosf();
}

namespace jag::math {
    // 0x100432310
    graphics::IrradianceSHCoefConsts
    Lerp<graphics::IrradianceSHCoefConsts, float>(const graphics::IrradianceSHCoefConsts& irradianceSHCoefConsts1,
                                                  const graphics::IrradianceSHCoefConsts& irradianceSHCoefConsts2,
                                                  float arg3) {
        graphics::IrradianceSHCoefConsts result;
        IrradianceSHCoefConsts local_118;
        IrradianceSHCoefConsts local_a8;

        local_a8 - irradianceSHCoefConsts2;
        &local_118* arg3;
        result + irradianceSHCoefConsts1;
        return result;
    }

} // namespace jag::math
