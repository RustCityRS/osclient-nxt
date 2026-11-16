// libs/graphics/runetek7/animation/asm/AnimationStateResourceList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationStateResourceList {
    public:
        GetAnimationResources();
        GetAllConstructed() const;
        void SetAllConstructed();
        void AddAnimationResource(
            AnimationDescriptor const&,
            std::function<void(
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>);
        AnimationStateResourceList();
        ~AnimationStateResourceList();
        AnimationStateResourceList(AnimationStateResourceList const&);

        // data members, from how the methods use this: 33 bytes
        char _unknown_0[8];
        AnimationResource* field_8; // offset 8
        char _unknown_16[16];
        undefined1 field_32; // offset 32
    };

    // 0x100658b90, 16 bytes, inline, placed by debug map only (low confidence)
    // AnimationResource::Constructed() const
    undefined1 AnimationResource::Constructed() {
        return field_288;
    }

    // 0x100659040, 16 bytes, inline, placed by class name and debug map
    // AnimationStateResourceList::SetAllConstructed()
    void AnimationStateResourceList::SetAllConstructed() {
        field_32 = 1;
    }

    // 0x1009560e0, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationStateResourceList::AnimationStateResourceList(): jumps straight to the base-object constructor

    // 0x100956250, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimationStateResourceList::~AnimationStateResourceList(): jumps straight to the base-object destructor

    // 0x100956800, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationStateResourceList::AnimationStateResourceList(AnimationStateResourceList const&): jumps straight to the base-object constructor

    // 0x100961780, 32 bytes, base-object constructor, inline, placed by class name
    // AnimationStateResourceList::AnimationStateResourceList()
    void AnimationStateResourceList::AnimationStateResourceList() {
        new (this) eastl::vector<AnimationResource, eastl::allocator>();
        field_32 = 0;
    }

    // 0x100961810, 16 bytes, base-object destructor, inline, placed by class name
    // AnimationStateResourceList::~AnimationStateResourceList()
    void AnimationStateResourceList::~AnimationStateResourceList() {
        ~vector();
    }

    // 0x100961950, 32 bytes, base-object constructor, inline, placed by class name
    // AnimationStateResourceList::AnimationStateResourceList(AnimationStateResourceList const&)
    void AnimationStateResourceList::AnimationStateResourceList(AnimationStateResourceList* param_1) {
        new (this) eastl::vector<AnimationResource, eastl::allocator>(param_1);
        field_32 = param_1->field_32;
    }

} // namespace jag::graphics
