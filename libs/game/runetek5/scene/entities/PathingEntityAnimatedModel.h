// libs/game/runetek5/scene/entities/PathingEntityAnimatedModel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class PathingEntityAnimatedModel : public game::AnimatedModel // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PathingEntityAnimatedModel();
        virtual void OnOverrideAnimationFinished(int arg1);
        virtual void RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const;
        virtual void GetDefaultModels(game::AnimatedModelPair& animatedModelPair, int arg2) const;
        virtual void GetOverrideModels(game::AnimatedModelPair& animatedModelPair, int arg2) const;
        PathingEntityAnimatedModel(graphics::RT7Core& rt7Core, game::AssetBuilder& assetBuilder,
                                   const game::ConfigProvider& configProvider,
                                   graphics::AnimationLoopBehaviour animationLoopBehaviour, bool arg5,
                                   const std::function<void(int, int, int, int, int, int)>& callback,
                                   PathingEntity& pathingEntity);
        unsigned long AbortAnimationsOnMove();

    private:
        PathingEntity* field_2352;
    };

    // 0x1003fe9d0
    PathingEntityAnimatedModel::PathingEntityAnimatedModel(
        graphics::RT7Core& rt7Core, game::AssetBuilder& assetBuilder, const game::ConfigProvider& configProvider,
        graphics::AnimationLoopBehaviour animationLoopBehaviour, bool arg5,
        const std::function<void(int, int, int, int, int, int)>& callback, PathingEntity& pathingEntity)
        : game::AnimatedModel(rt7Core, assetBuilder, configProvider, animationLoopBehaviour, arg5, callback),
          field_2352(pathingEntity) {}

    // 0x1003ffdf0
    PathingEntityAnimatedModel::~PathingEntityAnimatedModel() {}

} // namespace jag
