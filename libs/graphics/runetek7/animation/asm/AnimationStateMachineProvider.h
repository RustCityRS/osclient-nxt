// libs/graphics/runetek7/animation/asm/AnimationStateMachineProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationStateMachineProvider {
    public:
        // virtual methods in vtable order
        virtual ~AnimationStateMachineProvider();
        AnimationStateMachineProvider();
        AnimationStateMachineProvider(const AnimationStateMachineProvider& arg1);
    };

    // 0x100958d00
    AnimationStateMachineProvider::AnimationStateMachineProvider() {}

} // namespace jag::graphics

namespace jag {
    // 0x100959300
    shared_ptr_if_not_array<graphics::AnimationStateMachine>::type
    make_shared<graphics::AnimationStateMachine, graphics::AnimationStateMachine>(
        graphics::AnimationStateMachine&& animationStateMachine) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        AnimationStateMachine* local_30[2];

        auto arg1 = aligned_alloc(824, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::AnimationStateMachine>::type result;
        } else {
            local_30[0] = placement_new<graphics::AnimationStateMachine, graphics::AnimationStateMachine>(
                (void*)((long)arg1 + 32), animationStateMachine);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::AnimationStateMachine>, int,
                              graphics::AnimationStateMachine*&>(arg1, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
