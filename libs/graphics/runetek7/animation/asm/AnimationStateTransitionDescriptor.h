// libs/graphics/runetek7/animation/asm/AnimationStateTransitionDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationStateTransitionDescriptor {
    public:
        class SimpleFuncDescriptor;
        GetFrom() const;
        GetTo() const;
        GetTransitionTimeNS() const;
        GetCanTransitionFunc(VariableList&) const;
        ToString(unsigned int) const;
        AnimationStateTransitionDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~AnimationStateTransitionDescriptor();
        AnimationStateTransitionDescriptor(eastl::string const&, eastl::string const&, std::function<bool()>,
                                           unsigned long long, TransitionBlendFunc);
        AnimationStateTransitionDescriptor(AnimationStateTransitionDescriptor&&);

        // data members, from how the methods use this: 176 bytes
        char _unknown_0[64];
        undefined8 field_64; // offset 64
        undefined4 field_72; // offset 72
        undefined1 field_76; // offset 76
        char _unknown_77[51];
        SimpleFuncDescriptor field_128; // offset 128
    };

    class AnimationStateTransitionDescriptor::SimpleFuncDescriptor {
    public:
        ~SimpleFuncDescriptor();
        SimpleFuncDescriptor();
        SimpleFuncDescriptor(SimpleFuncDescriptor&&);

        // data members, from how the methods use this: 48 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[36];
        undefined4 field_40; // offset 40
        char _unknown_44[4];
    };

    // 0x1009663d0, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimationStateTransitionDescriptor::~AnimationStateTransitionDescriptor(): jumps straight to the base-object destructor

    // 0x1009663e0, 64 bytes, base-object destructor, inline, placed by class name
    // AnimationStateTransitionDescriptor::~AnimationStateTransitionDescriptor()
    void AnimationStateTransitionDescriptor::~AnimationStateTransitionDescriptor() {
        field_128->~LanguageMessage();
        std::function<bool()>::~function((function<bool()>*)&field_80);
        (&field_32)->~basic_string();
        ~basic_string();
    }

    // 0x10096b650, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(eastl::string const&, eastl::string const&, std::function<bool ()>, unsigned long long, AnimationStateTransitionDescriptor::TransitionBlendFunc): jumps straight to the base-object constructor

    // 0x10096b820, 160 bytes, base-object constructor, inline, placed by class name
    // AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(eastl::string const&, eastl::string const&, std::function<bool ()>, unsigned long long, AnimationStateTransitionDescriptor::TransitionBlendFunc)
    /* AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(eastl::basic_string<char,
   eastl::allocator> const&, eastl::string const&, std::function<bool
   ()>, unsigned long long, AnimationStateTransitionDescriptor::TransitionBlendFunc)
    */

    void AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(basic_string* param_1,
                                                                                basic_string* param_2,
                                                                                function* param_4, undefined8 param_5,
                                                                                undefined4 param_6) {
        new (this) eastl::string(param_1);
        new (&field_32, param_2) eastl::string();
        field_64 = param_5;
        field_72 = param_6;
        field_76 = 0;
        std::function<bool()>::function((function<bool()>*)&field_80, param_4);
        new (field_128) SimpleFuncDescriptor();
    }

    // 0x10096ba80, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(AnimationStateTransitionDescriptor&&): jumps straight to the base-object constructor

    // 0x10096baa0, 96 bytes, base-object constructor, inline, placed by class name
    // AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(AnimationStateTransitionDescriptor&&)
    void AnimationStateTransitionDescriptor::AnimationStateTransitionDescriptor(
        AnimationStateTransitionDescriptor* param_1) {
        undefined8 uVar1;

        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
        uVar1 = param_1->field_64;
        *(undefined8*)((long)&field_64 + 5) = *(undefined8*)((long)&param_1->field_64 + 5);
        field_64 = uVar1;
        std::function<bool()>::function((function<bool()>*)&field_80, (function*)&param_1->field_80);
        new (field_128, (SimpleFuncDescriptor*)param_1->field_128) SimpleFuncDescriptor();
    }

    // 0x10096bb00, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor(AnimationStateTransitionDescriptor::SimpleFuncDescriptor&&): jumps straight to the base-object constructor

    // 0x10096bb80, 48 bytes, base-object constructor, inline, placed by class name
    // AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor(AnimationStateTransitionDescriptor::SimpleFuncDescriptor&&)
    void AnimationStateTransitionDescriptor::SimpleFuncDescriptor::SimpleFuncDescriptor(SimpleFuncDescriptor* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
        field_40 = param_1->field_40;
    }

} // namespace jag::graphics
