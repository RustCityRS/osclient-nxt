// libs/graphics/runetek7/animation/asm/AnimationStateMachineDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationStateMachineDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~AnimationStateMachineDescriptor();
        virtual CreateStateSystem(VariableList&, shared_ptr<AnimationResourceManager> const&);
        virtual ToString() const;
        AnimationStateMachineDescriptor(Json::Value const&);
        AnimationStateMachineDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
        AnimationStateMachine* CreateStateMachine(VariableList&, shared_ptr<AnimationResourceManager> const&);
        AnimationStateMachineDescriptor(AnimationStateMachineDescriptor&&);

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[72];
    };

    // 0x10095eca0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AnimationStateMachineDescriptor::~AnimationStateMachineDescriptor(): jumps straight to the base-object destructor

    // 0x100960b10, 32 bytes, deleting destructor, inline, placed by class name
    // AnimationStateMachineDescriptor::~AnimationStateMachineDescriptor()
    void AnimationStateMachineDescriptor::~AnimationStateMachineDescriptor() {
        ~AnimationStateMachineDescriptor(this);
        operator_delete(this);
    }

    // 0x100963860, 64 bytes, base-object destructor, inline, placed by class name
    // AnimationStateMachineDescriptor::~AnimationStateMachineDescriptor()
    void AnimationStateMachineDescriptor::~AnimationStateMachineDescriptor() {
        field_0 = &PTR__AnimationStateMachineDescriptor_100f1b238;
        (&field_72)->~vector();
        (&field_40)->~vector();
        (&field_8)->~basic_string();
        ~AutoSingleton();
    }

    // 0x1009749d0, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(AnimationStateMachineDescriptor&&): jumps straight to the base-object constructor

    // 0x1009749e0, 80 bytes, base-object constructor, inline, placed by class name
    // AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(AnimationStateMachineDescriptor&&)
    void AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(AnimationStateMachineDescriptor* param_1) {
        new (this) AnimationStateMachineProvider(param_1);
        field_0 = &PTR__AnimationStateMachineDescriptor_100f1b238;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
        new (&field_40, (vector*)&param_1->field_40) eastl::vector<AnimationStateDescriptor, eastl::allocator>();
        new (&field_72, (vector*)&param_1->field_72)
            eastl::vector<AnimationStateTransitionDescriptor, eastl::allocator>();
    }

} // namespace jag::graphics

namespace jag {
    // 0x10095f570, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::LayeredAnimationStateMachine>::type make_shared<graphics::LayeredAnimationStateMachine, eastl::vector<graphics::AnimationStateMachine, eastl::allocator>, eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>, shared_ptr<graphics::AnimationResourceManager> const&>(eastl::vector<graphics::AnimationStateMachine, eastl::allocator>&&, eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>&&, shared_ptr<graphics::AnimationResourceManager> const&)
    jag* jag::make_shared<graphics::LayeredAnimationStateMachine,
                          eastl::vector<graphics::AnimationStateMachine, eastl::allocator>,
                          eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>,
                          shared_ptr<graphics::AnimationResourceManager> const&>(vector* param_1, vector* param_2,
                                                                                 shared_ptr* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        LayeredAnimationStateMachine* local_40[2];

        pvVar1 = (void*)aligned_alloc(1312, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<graphics::LayeredAnimationStateMachine,
                              eastl::vector<graphics::AnimationStateMachine, eastl::allocator>,
                              eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo, eastl::allocator>,
                              shared_ptr<graphics::AnimationResourceManager> const&>((void*)((long)pvVar1 + 32),
                                                                                     param_1, param_2, param_3);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachine>, int,
                                   graphics::LayeredAnimationStateMachine*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
