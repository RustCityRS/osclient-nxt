// libs/graphics/runetek7/animation/asm/AnimationResourceManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::graphics {
    class AnimationResourceManager {
    public:
        // virtual methods in vtable order
        virtual ~AnimationResourceManager();
        AnimationResourceManager();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AnimationResourceManager::~AnimationResourceManager();

    // 0x1006588c0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // AnimationResourceManager::AnimationResourceManager()
    void AnimationResourceManager::AnimationResourceManager() {
        field_0 = PTR_vtable_100ee8870 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationResourceManager::~AnimationResourceManager();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationResourceManager::~AnimationResourceManager();

} // namespace jag::graphics
