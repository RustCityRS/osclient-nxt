// libs/graphics/runetek7/animation/asm/AnimationNodeDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationNodeDescriptor.h"

namespace jag::graphics {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AnimationNodeDescriptor::GetNodeType() const;

    // 0x100954df0, 96 bytes, base-object constructor, placed by class name and debug map
    // AnimationNodeDescriptor::AnimationNodeDescriptor(Json::Value const&)
    void AnimationNodeDescriptor::AnimationNodeDescriptor(Value* param_1) {
        new (field_16) AnimationDescriptor();
        new (this) BlendTreeNodeDescriptor(param_1);
        field_0 = &PTR__AnimationNodeDescriptor_100f1b198;
        (field_16, param_1)->ReadFromJson();
    }

    // 0x100954f10, 16 bytes, complete-object constructor, placed by class name
    // AnimationNodeDescriptor::AnimationNodeDescriptor(Json::Value const&): jumps straight to the base-object constructor

    // 0x100954f20, 48 bytes, base-object constructor, placed by class name
    // AnimationNodeDescriptor::AnimationNodeDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&)
    void AnimationNodeDescriptor::AnimationNodeDescriptor(PacketT* param_1) {
        new (field_16, param_1) AnimationDescriptor();
        new (this) BlendTreeNodeDescriptor(param_1);
        field_0 = &PTR__AnimationNodeDescriptor_100f1b198;
    }

    // 0x100954f50, 16 bytes, complete-object constructor, placed by class name
    // AnimationNodeDescriptor::AnimationNodeDescriptor(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100954f60, 208 bytes, placed by class name
    // AnimationNodeDescriptor::Create(AnimationStateResourceList&, VariableList&)
    AnimationNodeDescriptor* AnimationNodeDescriptor::Create(AnimationStateResourceList* param_1,
                                                             VariableList* param_2) {
        undefined8 uVar1;
        VariableList* in_RCX;
        unique_ptr<
            AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>,
            std::default_delete<AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>>>
            local_70[8];
        function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>
            local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        (&param_1->field_16, in_RCX)->InitialiseCallbackFunctions();
        std::make_unique<AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>>();
        uVar1 = std::unique_ptr<
            AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>,
            std::default_delete<AnimationBlendTreeNode<std::unique_ptr<
                AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>>>::get(local_70);
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            function<AnimationNodeDescriptor::Create(AnimationStateResourceList&, VariableList&)::__2, void>(local_68,
                                                                                                             uVar1);
        param_2->AddAnimationResource(&param_1->field_16, local_68);
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            ~function(local_68);
        std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::unique_ptr<
            AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>,
            std::default_delete<AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>>,
            void, void>((unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)this, (unique_ptr*)local_70);
        std::unique_ptr<
            AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>,
            std::default_delete<AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>>>::
            ~unique_ptr(local_70);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1009550f0, 32 bytes, placed by class name
    // AnimationNodeDescriptor::ToString(unsigned int) const
    AnimationNodeDescriptor* AnimationNodeDescriptor::ToString(uint param_1) {
        ToString(param_1 + 16);
        return this;
    }

} // namespace jag::graphics
