// libs/graphics/runetek7/animation/asm/AnimationNodeDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationNodeDescriptor {
    public:
        // virtual methods in vtable order
        virtual ~AnimationNodeDescriptor();
        virtual GetNodeType() const;
        virtual Create(AnimationStateResourceList&, VariableList&);
        virtual ToString(unsigned int) const;
        virtual AnimationNodeDescriptor* Clone() const;
        AnimationNodeDescriptor(Json::Value const&);
        AnimationNodeDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
        AnimationNodeDescriptor(AnimationNodeDescriptor const&);

        // data members, from how the methods use this: 256 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        AnimationDescriptor field_16; // offset 16
    };

    // 0x100960aa0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // AnimationNodeDescriptor::~AnimationNodeDescriptor(): jumps straight to the base-object destructor

    // 0x100960ab0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // AnimationNodeDescriptor::~AnimationNodeDescriptor()
    void AnimationNodeDescriptor::~AnimationNodeDescriptor() {
        ~AnimationNodeDescriptor(this);
        operator_delete(this);
    }

    // 0x100960ad0, 64 bytes, inline, placed by class name and debug map
    // AnimationNodeDescriptor::Clone() const
    AnimationNodeDescriptor* AnimationNodeDescriptor::Clone() {
        undefined1 local_20[8];

        std::make_unique<AnimationNodeDescriptor, AnimationNodeDescriptor_const&>((AnimationNodeDescriptor*)local_20);
        std::unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>::unique_ptr<
            AnimationNodeDescriptor, std::default_delete<AnimationNodeDescriptor>, void, void>(
            (unique_ptr<BlendTreeNodeDescriptor, std::default_delete<BlendTreeNodeDescriptor>>*)this,
            (unique_ptr*)local_20);
        local_20->~unique_ptr();
        return this;
    }

    // 0x1009638c0, 48 bytes, base-object destructor, inline, placed by class name
    // AnimationNodeDescriptor::~AnimationNodeDescriptor()
    void AnimationNodeDescriptor::~AnimationNodeDescriptor() {
        AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton();
        field_16->~AnimationDescriptor();
    }

    // 0x100963950, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationNodeDescriptor::AnimationNodeDescriptor(AnimationNodeDescriptor const&): jumps straight to the base-object constructor

    // 0x100963970, 64 bytes, base-object constructor, inline, placed by class name
    // AnimationNodeDescriptor::AnimationNodeDescriptor(AnimationNodeDescriptor const&)
    void AnimationNodeDescriptor::AnimationNodeDescriptor(AnimationNodeDescriptor* param_1) {
        new (field_16, (AnimationDescriptor*)param_1->field_16) AnimationDescriptor();
        new (this) BlendTreeNodeDescriptor(param_1);
        field_0 = &PTR__AnimationNodeDescriptor_100f1b198;
    }

    // 0x1009677c0, 16 bytes, inline, placed by class name
    // AnimationNodeDescriptor::Create(AnimationStateResourceList&, VariableList&)::$_2::operator()(std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&) const
    /* AnimationNodeDescriptor::Create(AnimationStateResourceList&,
   VariableList&)::$_2::TEMPNAMEPLACEHOLDERVALUE(std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&) const */

    void AnimationNodeDescriptor::Create(AnimationStateResourceList&,
                                         VariableList&)::$_2::operator()(unique_ptr* param_1) {
        AnimationBlendTreeNode<
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>::
            SetAnimation<
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>(
                *(AnimationBlendTreeNode<std::unique_ptr<
                      AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>>**)this,
                param_1);
    }

} // namespace jag::graphics
