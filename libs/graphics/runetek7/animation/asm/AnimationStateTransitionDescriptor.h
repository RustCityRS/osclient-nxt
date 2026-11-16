// libs/graphics/runetek7/animation/asm/AnimationStateTransitionDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationStateTransitionDescriptor {
    public:
        class SimpleFuncDescriptor;
        void GetFrom() const;
        Option<float>* GetTo() const;
        uint64_t GetTransitionTimeNS() const;
        auto GetCanTransitionFunc(VariableList& variableList) const;
        auto ToString(unsigned int arg1) const;
        AnimationStateTransitionDescriptor(PacketT<Array<unsigned char>>& arg1);
        ~AnimationStateTransitionDescriptor();
        AnimationStateTransitionDescriptor(const eastl::string& arg1, const eastl::string& arg2,
                                           std::function<bool()> arg3, unsigned long long arg4,
                                           TransitionBlendFunc arg5);
        AnimationStateTransitionDescriptor(const eastl::string& str1, const eastl::string& str2,
                                           std::function<bool()> callback, unsigned long long arg4,
                                           TransitionBlendFunc arg5);
        AnimationStateTransitionDescriptor(AnimationStateTransitionDescriptor&& animationStateTransitionDescriptor);

    private:
        uint8_t _unknown_0[64];
        uint64_t m_transitionTimeNS;
        int field_72;
        uint8_t field_76;
        uint8_t _unknown_77[51];
        SimpleFuncDescriptor field_128;
    };

    class AnimationStateTransitionDescriptor::SimpleFuncDescriptor {
    public:
        ~SimpleFuncDescriptor();
        SimpleFuncDescriptor();
        SimpleFuncDescriptor(SimpleFuncDescriptor&& simpleFuncDescriptor);

    private:
        uint32_t field_0;
        uint8_t _unknown_4[36];
        uint32_t field_40;
        uint8_t _unknown_44[4];
    };

    // 0x1009663e0
    AnimationStateTransitionDescriptor::~AnimationStateTransitionDescriptor() {
        field_128->~LanguageMessage();
        field_80.~function();
        field_32.~basic_string();
    }

    // 0x10096b820
    AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(
        const eastl::string& str1, const eastl::string& str2, std::function<bool()> callback, unsigned long long arg4,
        AnimationStateTransitionDescriptor::TransitionBlendFunc arg5)
        : eastl::string(str1), field_32(str2), m_transitionTimeNS(arg4), field_72(param_6), field_76(0),
          field_80(*callback) {}

    // 0x10096baa0
    AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(
        AnimationStateTransitionDescriptor&& animationStateTransitionDescriptor)
        : eastl::string(animationStateTransitionDescriptor), field_32(animationStateTransitionDescriptor.field_32) {
        uint64_t uVar1 = animationStateTransitionDescriptor.m_transitionTimeNS;
        *(uint64_t*)((long)&m_transitionTimeNS + 5) =
            *(uint64_t*)((long)&animationStateTransitionDescriptor.m_transitionTimeNS + 5);
        m_transitionTimeNS = uVar1;
        new (&field_80) std::function<bool()>(animationStateTransitionDescriptor.field_80);
        new (field_128) SimpleFuncDescriptor(animationStateTransitionDescriptor.field_128);
    }

    // 0x10096bb80
    AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor(
        AnimationStateTransitionDescriptor::SimpleFuncDescriptor&& simpleFuncDescriptor)
        : field_0(simpleFuncDescriptor.field_0), field_8(simpleFuncDescriptor.field_8),
          field_40(simpleFuncDescriptor.field_40) {}

} // namespace jag::graphics
