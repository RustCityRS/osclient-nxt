// libs/graphics/runetek7/animation/asm/AnimationStateMachineDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationStateMachineDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~AnimationStateMachineDescriptor();
        virtual AnimationStateMachineDescriptor*
        CreateStateSystem(VariableList& variableList,
                          const shared_ptr<AnimationResourceManager>& animationResourceManager);
        virtual auto ToString() const;
        AnimationStateMachineDescriptor(const Json::Value& value);
        AnimationStateMachineDescriptor(PacketT<Array<unsigned char>>& arg1);
        AnimationStateMachine* CreateStateMachine(VariableList& variableList,
                                                  const shared_ptr<AnimationResourceManager>& animationResourceManager);
        AnimationStateMachineDescriptor(AnimationStateMachineDescriptor&& animationStateMachineDescriptor);

    private:
        uint8_t _unknown_8[72];
    };

    // 0x100963860
    AnimationStateMachineDescriptor::~AnimationStateMachineDescriptor() {
        field_72.~vector();
        field_40.~vector();
        field_8.~basic_string();
    }

    // 0x1009749e0
    AnimationStateMachineDescriptor::AnimationStateMachineDescriptor(
        AnimationStateMachineDescriptor&& animationStateMachineDescriptor)
        : AnimationStateMachineProvider(), field_8(animationStateMachineDescriptor.field_8),
          field_40(animationStateMachineDescriptor.field_40), field_72(animationStateMachineDescriptor.field_72) {}

} // namespace jag::graphics

namespace jag {
    // 0x10095f570
    shared_ptr_if_not_array<graphics::LayeredAnimationStateMachine>::type
    make_shared<graphics::LayeredAnimationStateMachine, eastl::vector<graphics::AnimationStateMachine>,
                eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo>,
                shared_ptr<graphics::AnimationResourceManager> const&>(
        eastl::vector<graphics::AnimationStateMachine>&& animationStateMachines,
        eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo>&& layerBlendInfos,
        const shared_ptr<graphics::AnimationResourceManager>& animationResourceManager) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        LayeredAnimationStateMachine* local_40[2];

        auto arg1 = aligned_alloc(1312, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::LayeredAnimationStateMachine>::type result;
        } else {
            local_40[0] =
                placement_new<graphics::LayeredAnimationStateMachine, eastl::vector<graphics::AnimationStateMachine>,
                              eastl::vector<graphics::LayeredAnimationStateMachine::LayerBlendInfo>,
                              shared_ptr<graphics::AnimationResourceManager> const&>(
                    (void*)((long)arg1 + 32), animationStateMachines, layerBlendInfos, animationResourceManager);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::LayeredAnimationStateMachine>, int,
                              graphics::LayeredAnimationStateMachine*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
