// libs/graphics/runetek7/animation/asm/AnimationNodeDescriptor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationNodeDescriptor.h"

namespace jag::graphics {
    // 0x100029ea0: AnimationNodeDescriptor::GetNodeType() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100954df0
    AnimationNodeDescriptor::AnimationNodeDescriptor(const Json::Value& value) : BlendTreeNodeDescriptor() {
        field_16->ReadFromJson(value);
    }

    // 0x100954f20
    AnimationNodeDescriptor::AnimationNodeDescriptor(PacketT<Array<unsigned char>>& arg1)
        : field_16(arg1), BlendTreeNodeDescriptor() {}

    // 0x100954f60
    auto AnimationNodeDescriptor::Create(AnimationStateResourceList& animationStateResourceList,
                                         VariableList& variableList) {
        auto result;
        function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>
            local_68[56];
        long local_30;

        field_16->InitialiseCallbackFunctions(variableList);
        auto local_70 = std::make_unique<AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>>();
        auto arg1 = local_70.get();
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            function<AnimationNodeDescriptor::Create(AnimationStateResourceList&, VariableList&)::__2, void>(local_68,
                                                                                                             arg1);
        animationStateResourceList.AddAnimationResource(*field_16, local_68);
        result.unique_ptr<
            AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>,
            std::default_delete<AnimationBlendTreeNode<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>>,
            void, void>(local_70);
        return result;
    }

    // 0x1009550f0
    auto AnimationNodeDescriptor::ToString(unsigned int arg1) const {
        auto result;
        result = field_16->ToString(arg1);
        return result;
    }

} // namespace jag::graphics
