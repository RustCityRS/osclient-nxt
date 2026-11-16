// libs/graphics/runetek7/animation/asm/AnimationStateResourceList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationStateResourceList.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AnimationStateResourceList::GetAnimationResources();

    // 0x100064280: the linker folded this into eastl::optional<eastl::vector<char, eastl::allocator> >::operator bool() const, which has identical code
    AnimationStateResourceList::GetAllConstructed() const;

    // 0x1009550a0, 16 bytes, placed by class name and debug map
    // AnimationStateResourceList::AddAnimationResource(AnimationDescriptor const&, std::function<void (std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>)
    /* AnimationStateResourceList::AddAnimationResource(AnimationDescriptor
   const&, std::function<void (std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>) */

    void AnimationStateResourceList::AddAnimationResource(AnimationDescriptor* param_1, function* param_3) {
        eastl::vector<AnimationResource, eastl::allocator>::emplace_back<
            AnimationDescriptor_const&,
            std::function<void(
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>&>(
            (vector<AnimationResource, eastl::allocator>*)this, param_1, param_3);
    }

} // namespace jag::graphics
