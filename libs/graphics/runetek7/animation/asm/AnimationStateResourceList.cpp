// libs/graphics/runetek7/animation/asm/AnimationStateResourceList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationStateResourceList.h"

namespace jag::graphics {
    // 0x100009ca0: AnimationStateResourceList::GetAnimationResources() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100064280: AnimationStateResourceList::GetAllConstructed() const has the same machine code as eastl::optional<eastl::vector<char>>::operator bool() const

    // 0x1009550a0
    void AnimationStateResourceList::AddAnimationResource(
        const AnimationDescriptor& animationDescriptor,
        std::function<
            void(std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>
            callback) {
        emplace_back<
            AnimationDescriptor const&,
            std::function<void(
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>&>(
            animationDescriptor, *callback);
    }

} // namespace jag::graphics
