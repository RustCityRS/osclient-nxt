// libs/graphics/runetek7/animation/asm/AnimationStateMachineProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationStateMachineProvider {
    public:
        // virtual methods in vtable order
        virtual ~AnimationStateMachineProvider();
        AnimationStateMachineProvider();
        AnimationStateMachineProvider(AnimationStateMachineProvider const&);

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100958d00, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // AnimationStateMachineProvider::AnimationStateMachineProvider()
    /* AnimationStateMachineProvider::AnimationStateMachineProvider(AnimationStateMachineProvider
   const&) */

    void AnimationStateMachineProvider::AnimationStateMachineProvider(AnimationStateMachineProvider* param_1) {
        field_0 = PTR_vtable_100ee88b8 + 16;
    }

} // namespace jag::graphics

namespace jag {
    // 0x100959300, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::AnimationStateMachine>::type make_shared<graphics::AnimationStateMachine, graphics::AnimationStateMachine>(graphics::AnimationStateMachine&&)
    jag* make_shared<graphics::AnimationStateMachine, graphics::AnimationStateMachine>(AnimationStateMachine* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        AnimationStateMachine* local_30[2];

        pvVar1 = (void*)aligned_alloc(824, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<graphics::AnimationStateMachine, graphics::AnimationStateMachine>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::AnimationStateMachine>, int,
                                   graphics::AnimationStateMachine*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
