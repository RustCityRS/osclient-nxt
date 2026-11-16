// libs/graphics/runetek7/animation/asm/AnimationStateResourceList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationStateResourceList {
    public:
        void GetAnimationResources();
        void GetAllConstructed() const;
        void SetAllConstructed();
        void AddAnimationResource(
            const AnimationDescriptor& animationDescriptor,
            std::function<void(
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>
                callback);
        AnimationStateResourceList();
        ~AnimationStateResourceList();
        AnimationStateResourceList(const AnimationStateResourceList& animationStateResourceList);

    private:
        uint8_t _unknown_0[8];
        AnimationResource* field_8;
        uint8_t _unknown_16[16];
        uint8_t field_32;
    };

    // 0x100658b90
    uint8_t AnimationResource::Constructed() const {
        return field_288;
    }

    // 0x100659040
    void AnimationStateResourceList::SetAllConstructed() {
        field_32 = 1;
    }

    // 0x100961780
    AnimationStateResourceList::AnimationStateResourceList() : eastl::vector<AnimationResource>(), field_32(0) {}

    // 0x100961810
    AnimationStateResourceList::~AnimationStateResourceList() {}

    // 0x100961950
    AnimationStateResourceList::AnimationStateResourceList(const AnimationStateResourceList& animationStateResourceList)
        : eastl::vector<AnimationResource>(animationStateResourceList), field_32(animationStateResourceList.field_32) {}

} // namespace jag::graphics
