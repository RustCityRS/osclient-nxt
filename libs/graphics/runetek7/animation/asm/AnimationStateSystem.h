// libs/graphics/runetek7/animation/asm/AnimationStateSystem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag::graphics {
    class AnimationStateSystem {
    public:
        // virtual methods in vtable order
        virtual ~AnimationStateSystem();
        AnimationStateSystem();
        AnimationStateSystem(AnimationStateSystem&& animationStateSystem);

    private:
        unsigned int field_8;
        uint8_t field_12;
        uint8_t _unknown_13[4];
    };

    class AnimationStateSystemDescriptor {
    public:
        auto FromPacket(PacketT<Array<unsigned char>>& arg1);
    };

    // 0x100956d30
    AnimationStateSystem::AnimationStateSystem() : AnimationStateProvider() {}

    // 0x100956dc0
    AnimationStateSystem::~AnimationStateSystem() {}

    // 0x10096c0d0
    AnimationStateSystem::AnimationStateSystem(AnimationStateSystem&& animationStateSystem)
        : AnimationStateProvider(animationStateSystem) {}

} // namespace jag::graphics
