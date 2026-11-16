// libs/game/runetek5/scene/entities/PathingEntityAnimatedModel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class PathingEntityAnimatedModel : public game::AnimatedModel // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~PathingEntityAnimatedModel();
        virtual void OnOverrideAnimationFinished(int);
        virtual void RepeatLastOverrideAnimationFrameWhenFinished(int) const;
        virtual void GetDefaultModels(game::AnimatedModelPair&, int) const;
        virtual void GetOverrideModels(game::AnimatedModelPair&, int) const;
        PathingEntityAnimatedModel(graphics::RT7Core&, game::AssetBuilder&, game::ConfigProvider const&,
                                   graphics::AnimationLoopBehaviour, bool,
                                   std::function<void(int, int, int, int, int, int)> const&, PathingEntity&);
        ulong AbortAnimationsOnMove();

        // data members, from how the methods use this: 2360 bytes, the first 2352 are AnimatedModel
        PathingEntity* field_2352; // offset 2352
    };

    // 0x1003f0610, 32 bytes, complete-object constructor, inline, placed by class name and debug map
    // PathingEntityAnimatedModel::PathingEntityAnimatedModel(graphics::RT7Core&, game::AssetBuilder&, game::ConfigProvider const&, graphics::AnimationLoopBehaviour, bool, std::function<void (int, int, int, int, int, int)> const&, PathingEntity&)
    /* PathingEntityAnimatedModel::PathingEntityAnimatedModel(graphics::RT7Core&,
   game::AssetBuilder&, game::ConfigProvider const&,
   graphics::AnimationLoopBehaviour, bool, std::function<void (int, int, int, int, int, int)>
   const&, PathingEntity&) */

    void PathingEntityAnimatedModel::PathingEntityAnimatedModel() {
        PathingEntityAnimatedModel();
    }

    // 0x1003f0630, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PathingEntityModels::PathingEntityModels(): jumps straight to the base-object constructor

    // 0x1003f0890, 16 bytes, complete-object destructor, inline, placed by class name
    // PathingEntityAnimatedModel::~PathingEntityAnimatedModel(): jumps straight to the base-object destructor

    // 0x1003fdc40, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PathingEntityAnimatedModel::~PathingEntityAnimatedModel()
    /* game::LocationAnimatedModel::~LocationAnimatedModel() */

    void game::LocationAnimatedModel::~LocationAnimatedModel() {
        ~LocationAnimatedModel(this);
        operator_delete(this);
    }

    // 0x1003fe9d0, 64 bytes, base-object constructor, inline, placed by class name
    // PathingEntityAnimatedModel::PathingEntityAnimatedModel(graphics::RT7Core&, game::AssetBuilder&, game::ConfigProvider const&, graphics::AnimationLoopBehaviour, bool, std::function<void (int, int, int, int, int, int)> const&, PathingEntity&)
    /* PathingEntityAnimatedModel::PathingEntityAnimatedModel(graphics::RT7Core&,
   game::AssetBuilder&, game::ConfigProvider const&,
   graphics::AnimationLoopBehaviour, bool, std::function<void (int, int, int, int, int, int)>
   const&, PathingEntity&) */

    void PathingEntityAnimatedModel::PathingEntityAnimatedModel() {
        PathingEntity* in_stack_00000010;

        game::AnimatedModel::AnimatedModel();
        field_0 = &PTR__LocationAnimatedModel_100efeff0;
        field_2352 = in_stack_00000010;
    }

    // 0x1003ffdf0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PathingEntityAnimatedModel::~PathingEntityAnimatedModel()
    /* game::LocationAnimatedModel::~LocationAnimatedModel() */

    void game::LocationAnimatedModel::~LocationAnimatedModel() {
        ~AnimatedModel();
    }

} // namespace jag
