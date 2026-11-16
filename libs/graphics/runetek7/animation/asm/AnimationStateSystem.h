// libs/graphics/runetek7/animation/asm/AnimationStateSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::graphics {
    class AnimationStateSystem {
    public:
        // virtual methods in vtable order
        virtual ~AnimationStateSystem();
        AnimationStateSystem();
        AnimationStateSystem(AnimationStateSystem&&);

        // data members, from how the methods use this: 17 bytes
        undefined* field_0;  // offset 0, vtable pointer
        uint field_8;        // offset 8
        undefined1 field_12; // offset 12
        char _unknown_13[4];
    };

    class AnimationStateSystemDescriptor {
    public:
        AnimationStateSystemDescriptor* FromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100956d30, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // AnimationStateSystem::AnimationStateSystem()
    void AnimationStateSystem::AnimationStateSystem() {
        new (this) AnimationStateProvider();
        field_0 = PTR_vtable_100ee8818 + 16;
    }

    // 0x100956dc0, 16 bytes, base-object destructor, inline, placed by class name
    // AnimationStateSystem::~AnimationStateSystem()
    void AnimationStateSystem::~AnimationStateSystem() {
        ~AnimationStateProvider();
    }

    // 0x10096c0d0, 48 bytes, base-object constructor, inline, placed by class name
    // AnimationStateSystem::AnimationStateSystem(AnimationStateSystem&&)
    void AnimationStateSystem::AnimationStateSystem(AnimationStateSystem* param_1) {
        new (this) AnimationStateProvider(param_1);
        field_0 = PTR_vtable_100ee8818 + 16;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationStateSystem::~AnimationStateSystem();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AnimationStateSystem::~AnimationStateSystem();

} // namespace jag::graphics
