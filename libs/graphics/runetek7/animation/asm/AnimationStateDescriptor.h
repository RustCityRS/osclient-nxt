// libs/graphics/runetek7/animation/asm/AnimationStateDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationStateDescriptor {
    public:
        void GetName() const;
        AnimationStateDescriptor(const Json::Value& value);
        AnimationStateDescriptor(PacketT<Array<unsigned char>>& arg1);
        auto Create(VariableList& variableList);
        auto ToString(unsigned int arg1) const;
        ~AnimationStateDescriptor();
        AnimationStateDescriptor(const AnimationStateDescriptor& animationStateDescriptor);

    private:
        uint8_t _unknown_0[48];
        AnimationDescriptor field_48;
    };

    // 0x100966310
    AnimationStateDescriptor::~AnimationStateDescriptor() {
        field_48->~AnimationDescriptor();
        field_32.~unique_ptr();
    }

    // 0x100969960
    void AnimState::AnimState(AnimationDescriptor const&)::$_3::operator()(
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&
            animationParameters) const {
        (*((unique_ptr<AnimationParameters,
                       MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)(*(long*)this + 8))) =
            animationParameters;
    }

    // 0x10096b4e0
    AnimationStateDescriptor::AnimationStateDescriptor(const AnimationStateDescriptor& animationStateDescriptor)
        : eastl::string() {
        long* plVar2;
        unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor> _> local_38;

        field_32.unique_ptr<true, void>();
        new (field_48) AnimationDescriptor();
        *this = animationStateDescriptor;
        if ((&animationStateDescriptor.field_32)->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)animationStateDescriptor.field_32.operator->();
            (**(void (**)(...))(*plVar2 + 40))(&local_38, plVar2);
            field_32 = local_38;
        }
        *field_48 = animationStateDescriptor.field_48;
        *(uint32_t*)(field_48 + 240) = *(uint32_t*)(animationStateDescriptor.field_48 + 240);
    }

    // 0x10096c260
    SimpleTwoNodeBlendTreeNode<unsigned long long>::SimpleTwoNodeBlendTreeNode(
        SimpleTwoNodeBlendTreeNode<unsigned long long>&& simpleTwoNodeBlendTreeNode)
        : TwoNodeBaseBlendTreeNode<unsigned long long>(simpleTwoNodeBlendTreeNode) {
        *(uint8_t**)this = PTR_vtable_100ee88a0 + 16;
        uint64_t uVar1 = *(uint64_t*)(simpleTwoNodeBlendTreeNode + 80);
        *(uint64_t*)(this + 72) = *(uint64_t*)(simpleTwoNodeBlendTreeNode + 72);
        *(uint64_t*)(this + 80) = uVar1;
    }

    // 0x10096c290
    TwoNodeBaseBlendTreeNode<unsigned long long>::TwoNodeBaseBlendTreeNode(
        TwoNodeBaseBlendTreeNode<unsigned long long>&& twoNodeBaseBlendTreeNode)
        : BlendTreeNode(twoNodeBaseBlendTreeNode) {
        *(uint8_t**)this = PTR_vtable_100ee8880 + 16;
        uint64_t uVar1 = *(uint64_t*)(twoNodeBaseBlendTreeNode + 48);
        uint64_t uVar2 = *(uint64_t*)(twoNodeBaseBlendTreeNode + 56);
        uint64_t uVar3 = *(uint64_t*)(twoNodeBaseBlendTreeNode + 64);
        *(uint64_t*)(this + 40) = *(uint64_t*)(twoNodeBaseBlendTreeNode + 40);
        *(uint64_t*)(this + 48) = uVar1;
        *(uint64_t*)(this + 56) = uVar2;
        *(uint64_t*)(this + 64) = uVar3;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10096beb0
    graphics::AnimationStateMachine* placement_new<graphics::AnimationStateMachine, graphics::AnimationStateMachine>(
        void* arg1, graphics::AnimationStateMachine&& animationStateMachine) {
        new (arg1) graphics::AnimationStateMachine(animationStateMachine);
        return arg1;
    }

    // 0x10096bed0
    ref_counter_shared<graphics::AnimationStateMachine>*
    placement_new<ref_counter_shared<graphics::AnimationStateMachine>, int, graphics::AnimationStateMachine*&>(
        void* arg1, int&& arg2, graphics::AnimationStateMachine*& arg3) {
        new (arg1) ref_counter_shared<graphics::AnimationStateMachine>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag
