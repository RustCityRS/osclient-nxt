// libs/graphics/runetek7/animation/asm/AnimationDescriptor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimationDescriptor {
    public:
        bool GetTweenLastFrameToFirst() const;
        int GetBasAnimType() const;
        uint GetSeqID() const;
        GetOnFinishedCallback() const;
        GetLoopLength() const;
        int GetLoopBehaviour() const;
        AnimationDescriptor(Json::Value const&);
        void ReadFromJson(Json::Value const&);
        void BasAnimTypeFromString(eastl::string const&);
        AnimationDescriptor(PacketT<Array<unsigned char, eastl::allocator>>&);
        void InitialiseCallbackFunctions(VariableList&);
        ToString(unsigned int) const;
        AnimationDescriptor();
        ~AnimationDescriptor();
        AnimationDescriptor* operator=(AnimationDescriptor&&);
        AnimationDescriptor(AnimationDescriptor const&);
        AnimationDescriptor* operator=(AnimationDescriptor const&);
        AnimationDescriptor(AnimationDescriptor&&);
        static /* 336 bytes */ m_basAnimTypeNames; // initialised in its definition

        // data members, from how the methods use this: 240 bytes
        char _unknown_0[72];
        int m_basAnimType;            // offset 72
        uint m_seqID;                 // offset 76
        int m_loopBehaviour;          // offset 80
        undefined4 m_loopLength;      // offset 84
        bool m_tweenLastFrameToFirst; // offset 88
        char _unknown_89[103];
        bool field_192; // offset 192
        char _unknown_193[39];
        undefined4 field_232; // offset 232
        char _unknown_236[4];
    };

    // 0x100659510, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // AnimationDescriptor::GetLoopBehaviour() const
    /* ui::Component::GetCurrentX() const */

    int ui::Component::GetCurrentX() {
        return m_currentX;
    }

    // 0x100659540, 48 bytes, inline, placed by debug map only (low confidence)
    // AnimationResource::Construct(std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)
    /* AnimationResource::Construct(std::unique_ptr<AnimationParameters,
   MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&) */

    void AnimationResource::Construct(unique_ptr* param_1) {
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
        operator()(
            (function<void(std::unique_ptr<AnimationParameters,
                                           MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>*)&field_240,
            param_1);
        field_288 = 1;
    }

    // 0x100954e50, 112 bytes, base-object constructor, inline, placed by class name
    // AnimationDescriptor::AnimationDescriptor()
    void AnimationDescriptor::AnimationDescriptor() {
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>();
        m_basAnimType = 21;
        m_seqID = 4294967295;
        m_loopBehaviour = 0;
        m_loopLength = 4294967295;
        m_tweenLastFrameToFirst = true;
        new (&field_96) math::Vector2T<int>();
        field_192 = false;
        new (&field_200) eastl::string();
    }

    // 0x100954ee0, 48 bytes, base-object destructor, inline, placed by class name
    // AnimationDescriptor::~AnimationDescriptor()
    void AnimationDescriptor::~AnimationDescriptor() {
        (&field_200)->~basic_string();
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)&field_96);
        /* WARNING: Subroutine does not return */
        ~fixed_string();
    }

    // 0x1009552b0, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationDescriptor::AnimationDescriptor(): jumps straight to the base-object constructor

    // 0x1009552c0, 112 bytes, inline, placed by class name
    // AnimationDescriptor::operator=(AnimationDescriptor&&)
    /* AnimationDescriptor::TEMPNAMEPLACEHOLDERVALUE(AnimationDescriptor&&)
    */

    AnimationDescriptor* AnimationDescriptor::operator=(AnimationDescriptor* param_1) {
        uint uVar1;
        int iVar2;
        undefined4 uVar3;

        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)this, (fixed_string*)param_1);
        uVar1 = param_1->m_seqID;
        iVar2 = param_1->m_loopBehaviour;
        uVar3 = param_1->m_loopLength;
        m_basAnimType = param_1->m_basAnimType;
        m_seqID = uVar1;
        m_loopBehaviour = iVar2;
        m_loopLength = uVar3;
        m_tweenLastFrameToFirst = param_1->m_tweenLastFrameToFirst;
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::operator=(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)&field_96, (function*)&param_1->field_96);
        field_192 = param_1->field_192;
        eastl::string::operator=((eastl::string*)&field_200, (basic_string*)&param_1->field_200);
        field_232 = param_1->field_232;
        return this;
    }

    // 0x100955330, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimationDescriptor::~AnimationDescriptor(): jumps straight to the base-object destructor

    // 0x100961c30, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationDescriptor::AnimationDescriptor(AnimationDescriptor const&): jumps straight to the base-object constructor

    // 0x100961c50, 144 bytes, base-object constructor, inline, placed by class name
    // AnimationDescriptor::AnimationDescriptor(AnimationDescriptor const&)
    void AnimationDescriptor::AnimationDescriptor(AnimationDescriptor* param_1) {
        uint uVar1;
        int iVar2;
        undefined4 uVar3;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        m_tweenLastFrameToFirst = param_1->m_tweenLastFrameToFirst;
        uVar1 = param_1->m_seqID;
        iVar2 = param_1->m_loopBehaviour;
        uVar3 = param_1->m_loopLength;
        m_basAnimType = param_1->m_basAnimType;
        m_seqID = uVar1;
        m_loopBehaviour = iVar2;
        m_loopLength = uVar3;
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::function(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)&field_96, (function*)&param_1->field_96);
        field_192 = param_1->field_192;
        new (&field_200, (basic_string*)&param_1->field_200) eastl::string();
        field_232 = param_1->field_232;
    }

    // 0x100965f10, 48 bytes, inline, placed by class name
    // AnimationDescriptor::BasAnimTypeFromString(eastl::string const&)::$_0::operator()(StringView, StringView) const
    /* AnimationDescriptor::BasAnimTypeFromString(eastl::basic_string<char,
   eastl::allocator> const&)::$_0::TEMPNAMEPLACEHOLDERVALUE(StringView, StringView) const
    */

    void AnimationDescriptor::BasAnimTypeFromString(eastl::stringconst&)::$_0::operator()(StringView param_1,
                                                                                          StringView param_2) {
        uchar* extraout_RDX;
        StringView SVar1;
        StringView local_28;

        new (&local_28) StringView(param_1.field_8);
        SVar1.field_8 = extraout_RDX;
        SVar1.field_0 = (ulong)&local_28;
        StringView::operator==((StringView*)param_1.field_0, SVar1);
    }

    // 0x10096b5b0, 112 bytes, inline, placed by class name
    // AnimationDescriptor::operator=(AnimationDescriptor const&)
    /* AnimationDescriptor::TEMPNAMEPLACEHOLDERVALUE(AnimationDescriptor
   const&) */

    AnimationDescriptor* AnimationDescriptor::operator=(AnimationDescriptor* param_1) {
        uint uVar1;
        int iVar2;
        undefined4 uVar3;

        eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
            (fixed_string<char, 32, true, eastl::allocator>*)this, (fixed_string*)param_1);
        uVar1 = param_1->m_seqID;
        iVar2 = param_1->m_loopBehaviour;
        uVar3 = param_1->m_loopLength;
        m_basAnimType = param_1->m_basAnimType;
        m_seqID = uVar1;
        m_loopBehaviour = iVar2;
        m_loopLength = uVar3;
        m_tweenLastFrameToFirst = param_1->m_tweenLastFrameToFirst;
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::operator=(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)&field_96, (function*)&param_1->field_96);
        field_192 = param_1->field_192;
        eastl::string::operator=((eastl::string*)&field_200, (basic_string*)&param_1->field_200);
        field_232 = param_1->field_232;
        return this;
    }

    // 0x10096dc90, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationDescriptor::AnimationDescriptor(AnimationDescriptor&&): jumps straight to the base-object constructor

    // 0x10096dcb0, 128 bytes, base-object constructor, inline, placed by class name
    // AnimationDescriptor::AnimationDescriptor(AnimationDescriptor&&)
    void AnimationDescriptor::AnimationDescriptor(AnimationDescriptor* param_1) {
        uint uVar1;
        int iVar2;
        undefined4 uVar3;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        m_tweenLastFrameToFirst = param_1->m_tweenLastFrameToFirst;
        uVar1 = param_1->m_seqID;
        iVar2 = param_1->m_loopBehaviour;
        uVar3 = param_1->m_loopLength;
        m_basAnimType = param_1->m_basAnimType;
        m_seqID = uVar1;
        m_loopBehaviour = iVar2;
        m_loopLength = uVar3;
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::function(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)&field_96, (function*)&param_1->field_96);
        field_192 = param_1->field_192;
        new (&field_200, (basic_string*)&param_1->field_200) eastl::string();
        field_232 = param_1->field_232;
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x100659530, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (), 64ul, 16ul, (Methods)0>::function(function<void (), 64ul, 16ul, (Methods)0> const&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
