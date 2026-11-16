// libs/graphics/runetek7/animation/asm/AnimationDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationDescriptor {
    public:
        bool GetTweenLastFrameToFirst() const;
        int GetBasAnimType() const;
        unsigned int GetSeqID() const;
        uint8_t* GetOnFinishedCallback() const;
        uint32_t GetLoopLength() const;
        int GetLoopBehaviour() const;
        AnimationDescriptor(const Json::Value& value);
        void ReadFromJson(const Json::Value& value);
        void BasAnimTypeFromString(const eastl::string& str);
        AnimationDescriptor(PacketT<Array<unsigned char>>& arg1);
        void InitialiseCallbackFunctions(VariableList& variableList);
        auto ToString(unsigned int arg1) const;
        AnimationDescriptor();
        ~AnimationDescriptor();
        AnimationDescriptor* operator=(AnimationDescriptor&& animationDescriptor);
        AnimationDescriptor(const AnimationDescriptor& animationDescriptor);
        AnimationDescriptor* operator=(const AnimationDescriptor& animationDescriptor);
        AnimationDescriptor(AnimationDescriptor&& animationDescriptor);
        static float m_basAnimTypeNames[84]; // initialised in its definition

    private:
        uint8_t _unknown_0[72];
        int m_basAnimType;
        unsigned int m_seqID;
        int m_loopBehaviour;
        uint32_t m_loopLength;
        bool m_tweenLastFrameToFirst;
        uint8_t _unknown_89[103];
        bool field_192;
        uint8_t _unknown_193[39];
        uint32_t field_232;
        uint8_t _unknown_236[20];
    };

    // 0x100659510
    int AnimationDescriptor::GetLoopBehaviour() const {
        return m_currentX;
    }

    // 0x100659540
    void AnimationResource::Construct(
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&
            animationParameters) {
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
        operator()(
            (function<void(std::unique_ptr<AnimationParameters,
                                           MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>*)&field_240,
            animationParameters);
        field_288 = 1;
    }

    // 0x100954e50
    AnimationDescriptor::AnimationDescriptor()
        : eastl::fixed_string<char, 32>(), m_basAnimType(21), m_seqID(4294967295), m_loopBehaviour(0),
          m_loopLength(4294967295), m_tweenLastFrameToFirst(true), field_192(false) {}

    // 0x100954ee0
    AnimationDescriptor::~AnimationDescriptor() {
        field_200.~basic_string();
        field_96.~function();
    }

    // 0x1009552c0
    AnimationDescriptor* AnimationDescriptor::operator=(AnimationDescriptor&& animationDescriptor) {
        *this = animationDescriptor;
        unsigned int uVar1 = animationDescriptor.m_seqID;
        int iVar2 = animationDescriptor.m_loopBehaviour;
        uint32_t uVar3 = animationDescriptor.m_loopLength;
        m_basAnimType = animationDescriptor.m_basAnimType;
        m_seqID = uVar1;
        m_loopBehaviour = iVar2;
        m_loopLength = uVar3;
        m_tweenLastFrameToFirst = animationDescriptor.m_tweenLastFrameToFirst;
        field_96 = animationDescriptor.field_96;
        field_192 = animationDescriptor.field_192;
        field_200 = &animationDescriptor.field_200;
        field_232 = animationDescriptor.field_232;
        return this;
    }

    // 0x100961c50
    AnimationDescriptor::AnimationDescriptor(const AnimationDescriptor& animationDescriptor)
        : eastl::fixed_string<char, 32>(animationDescriptor),
          m_tweenLastFrameToFirst(animationDescriptor.m_tweenLastFrameToFirst) {
        unsigned int uVar1 = animationDescriptor.m_seqID;
        int iVar2 = animationDescriptor.m_loopBehaviour;
        uint32_t uVar3 = animationDescriptor.m_loopLength;
        m_basAnimType = animationDescriptor.m_basAnimType;
        m_seqID = uVar1;
        m_loopBehaviour = iVar2;
        m_loopLength = uVar3;
        new (&field_96) fixedfunction::function(animationDescriptor.field_96);
        field_192 = animationDescriptor.field_192;
        new (&field_200) eastl::string(animationDescriptor.field_200);
        field_232 = animationDescriptor.field_232;
    }

    // 0x100965f10
    void
    AnimationDescriptor::BasAnimTypeFromString(eastl::string const&)::$_0::operator()(StringView stringView1,
                                                                                      StringView stringView2) const {

        StringView local_28(*stringView1);
        *this == &local_28;
    }

    // 0x10096b5b0
    AnimationDescriptor* AnimationDescriptor::operator=(const AnimationDescriptor& animationDescriptor) {
        *this = animationDescriptor;
        unsigned int uVar1 = animationDescriptor.m_seqID;
        int iVar2 = animationDescriptor.m_loopBehaviour;
        uint32_t uVar3 = animationDescriptor.m_loopLength;
        m_basAnimType = animationDescriptor.m_basAnimType;
        m_seqID = uVar1;
        m_loopBehaviour = iVar2;
        m_loopLength = uVar3;
        m_tweenLastFrameToFirst = animationDescriptor.m_tweenLastFrameToFirst;
        field_96 = animationDescriptor.field_96;
        field_192 = animationDescriptor.field_192;
        field_200 = &animationDescriptor.field_200;
        field_232 = animationDescriptor.field_232;
        return this;
    }

    // 0x10096dcb0
    AnimationDescriptor::AnimationDescriptor(AnimationDescriptor&& animationDescriptor)
        : eastl::fixed_string<char, 32>(animationDescriptor),
          m_tweenLastFrameToFirst(animationDescriptor.m_tweenLastFrameToFirst) {
        unsigned int uVar1 = animationDescriptor.m_seqID;
        int iVar2 = animationDescriptor.m_loopBehaviour;
        uint32_t uVar3 = animationDescriptor.m_loopLength;
        m_basAnimType = animationDescriptor.m_basAnimType;
        m_seqID = uVar1;
        m_loopBehaviour = iVar2;
        m_loopLength = uVar3;
        new (&field_96) fixedfunction::function(animationDescriptor.field_96);
        field_192 = animationDescriptor.field_192;
        new (&field_200) eastl::string(animationDescriptor.field_200);
        field_232 = animationDescriptor.field_232;
    }

} // namespace jag::graphics
