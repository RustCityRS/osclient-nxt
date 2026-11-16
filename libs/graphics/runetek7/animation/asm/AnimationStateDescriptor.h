// libs/graphics/runetek7/animation/asm/AnimationStateDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationStateDescriptor {
    public:
        GetName() const;
        AnimationStateDescriptor(Json::Value const&);
        AnimationStateDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
        Create(VariableList&);
        ToString(unsigned int) const;
        ~AnimationStateDescriptor();
        AnimationStateDescriptor(AnimationStateDescriptor const&);

        // data members, from how the methods use this: 296 bytes
        char _unknown_0[48];
        AnimationDescriptor field_48; // offset 48
        int field_288;                // offset 288
        char _unknown_292[4];
    };

    // 0x100966300, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AnimationStateDescriptor::~AnimationStateDescriptor(): jumps straight to the base-object destructor

    // 0x100966310, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // AnimationStateDescriptor::~AnimationStateDescriptor()
    void AnimationStateDescriptor::~AnimationStateDescriptor() {
        field_48->~AnimationDescriptor();
        (&field_32)->~unique_ptr();
        ~basic_string();
    }

    // 0x100969960, 32 bytes, inline, placed by debug map only (low confidence)
    // AnimState::AnimState(AnimationDescriptor const&)::$_3::operator()(std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&) const
    /* AnimState::AnimState(AnimationDescriptor
   const&)::$_3::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&) const */

    void AnimState::AnimState(AnimationDescriptor_const&)::$_3::operator()(unique_ptr* param_1) {
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::operator=(
            (unique_ptr<AnimationParameters,
                        MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)(*(long*)this + 8),
            param_1);
    }

    // 0x10096b4d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AnimationStateDescriptor::AnimationStateDescriptor(AnimationStateDescriptor const&): jumps straight to the base-object constructor

    // 0x10096b4e0, 208 bytes, base-object constructor, inline, placed by class name and debug map
    // AnimationStateDescriptor::AnimationStateDescriptor(AnimationStateDescriptor const&)
    void AnimationStateDescriptor::AnimationStateDescriptor(AnimationStateDescriptor* param_1) {
        long* plVar2;
        unique_ptr local_38[8];

        new (this) eastl::string();
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&field_32);
        new (field_48) AnimationDescriptor();
        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        if ((&param_1->field_32)->operator_cast_to_bool()) {
            plVar2 =
                (long*)
                    std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator->(
                        (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&param_1
                            ->field_32);
            (**(code**)(*plVar2 + 40))(local_38, plVar2);
            std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::operator=(
                (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)&field_32,
                local_38);
            local_38->~unique_ptr();
        }
        AnimationDescriptor::operator=((AnimationDescriptor*)field_48, (AnimationDescriptor*)param_1->field_48);
        field_288 = param_1->field_288;
    }

    // 0x10096c110, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<unsigned long long>::SimpleTwoNodeBlendTreeNode(SimpleTwoNodeBlendTreeNode<unsigned long long>&&): jumps straight to the base-object constructor

    // 0x10096c260, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<unsigned long long>::SimpleTwoNodeBlendTreeNode(SimpleTwoNodeBlendTreeNode<unsigned long long>&&)
    void
    SimpleTwoNodeBlendTreeNode<unsigned long long>::SimpleTwoNodeBlendTreeNode(SimpleTwoNodeBlendTreeNode* param_1) {
        undefined8 uVar1;

        new (this) TwoNodeBaseBlendTreeNode<unsigned long long>(param_1);
        *(undefined**)this = PTR_vtable_100ee88a0 + 16;
        uVar1 = *(undefined8*)(param_1 + 80);
        *(undefined8*)(this + 72) = *(undefined8*)(param_1 + 72);
        *(undefined8*)(this + 80) = uVar1;
    }

    // 0x10096c290, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<unsigned long long>::TwoNodeBaseBlendTreeNode(TwoNodeBaseBlendTreeNode<unsigned long long>&&)
    void TwoNodeBaseBlendTreeNode<unsigned long long>::TwoNodeBaseBlendTreeNode(TwoNodeBaseBlendTreeNode* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        new (this) BlendTreeNode(param_1);
        *(undefined**)this = PTR_vtable_100ee8880 + 16;
        uVar1 = *(undefined8*)(param_1 + 48);
        uVar2 = *(undefined8*)(param_1 + 56);
        uVar3 = *(undefined8*)(param_1 + 64);
        *(undefined8*)(this + 40) = *(undefined8*)(param_1 + 40);
        *(undefined8*)(this + 48) = uVar1;
        *(undefined8*)(this + 56) = uVar2;
        *(undefined8*)(this + 64) = uVar3;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10096beb0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimationStateMachine* placement_new<graphics::AnimationStateMachine, graphics::AnimationStateMachine>(void*, graphics::AnimationStateMachine&&)
    AnimationStateMachine*
    placement_new<graphics::AnimationStateMachine, graphics::AnimationStateMachine>(void* param_1,
                                                                                    AnimationStateMachine* param_2) {
        graphics::AnimationStateMachine::AnimationStateMachine(param_1, param_2);
        return param_1;
    }

    // 0x10096bed0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::AnimationStateMachine>* placement_new<ref_counter_shared<graphics::AnimationStateMachine>, int, graphics::AnimationStateMachine*&>(void*, int&&, graphics::AnimationStateMachine*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<graphics::AnimationStateMachine>, int, graphics::AnimationStateMachine*&>(
        void* param_1, int* param_2, AnimationStateMachine** param_3) {
        ref_counter_shared<graphics::AnimationStateMachine>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
