// libs/graphics/runetek7/animation/asm/AnimationNodeDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationNodeDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~AnimationNodeDescriptor();
        virtual uint64_t GetNodeType() const;
        virtual auto Create(AnimationStateResourceList& animationStateResourceList, VariableList& variableList);
        virtual auto ToString(unsigned int arg1) const;
        virtual auto Clone() const;
        AnimationNodeDescriptor(const Json::Value& value);
        AnimationNodeDescriptor(PacketT<Array<unsigned char>>& arg1);
        AnimationNodeDescriptor(const AnimationNodeDescriptor& animationNodeDescriptor);

    private:
        uint8_t _unknown_8[8];
        AnimationDescriptor field_16;
    };

    // 0x100960ad0
    auto AnimationNodeDescriptor::Clone() const {
        auto result;

        auto local_20 = std::make_unique<AnimationNodeDescriptor, AnimationNodeDescriptor const&>(*this);
        std::unique_ptr<BlendTreeNodeDescriptor>::unique_ptr<AnimationNodeDescriptor,
                                                             std::default_delete<AnimationNodeDescriptor>, void, void>(
            &result, (unique_ptr<AnimationNodeDescriptor, std::default_delete<AnimationNodeDescriptor> _>*)&local_20);
        return result;
    }

    // 0x1009638c0
    AnimationNodeDescriptor::~AnimationNodeDescriptor() {
        field_16->~AnimationDescriptor();
    }

    // 0x100963970
    AnimationNodeDescriptor::AnimationNodeDescriptor(const AnimationNodeDescriptor& animationNodeDescriptor)
        : field_16(animationNodeDescriptor.field_16), BlendTreeNodeDescriptor() {}

    // 0x1009677c0
    void AnimationNodeDescriptor::Create(AnimationStateResourceList&, VariableList&)::$_2::operator()(
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&
            animationParameters) const {
        AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
            SetAnimation<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>(
                *(AnimationBlendTreeNode<std::unique_ptr<
                      AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>**)this,
                animationParameters);
    }

} // namespace jag::graphics
