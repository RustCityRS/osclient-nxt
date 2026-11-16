// libs/graphics/runetek7/animation/AnimationParameters.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::graphics {
    class AnimationParameters {
    public:
        uint GetLoopsCompleted() const;
        uint GetDelay() const;
        uint GetCurrentIndex() const;
        GetAnimation() const;
        uint GetLoopLength() const;
        uint GetAnimationLength() const;
        GetPaused() const;
        void ResetLoopCounter();
        void SetDelay(unsigned int);
        int GetLoopBehaviour() const;
        GetTweenLastFrameToFirst() const;
        bool IsDelayed() const;
        void SetOnFinishedCallback(fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>);
        IsFinished() const;
        ~AnimationParameters();
        long GetLastUpdateTimeNS() const;
        ulong GetStartTimeNS() const;
        AnimationParameters(shared_ptr<Animation> const&, AnimationLoopBehaviour, unsigned int, unsigned int, bool, int,
                            unsigned int, bool);
        void Reset(unsigned int, unsigned int);
        void SetDelayResumeAtTime(unsigned int);
        void ResetToTime(unsigned int, unsigned int, unsigned int, unsigned int);
        uint GetPreLoopLength() const;
        void SetNextFrame();
        uint GetTicksThroughAnimation() const;
        int GetTicksThroughFrame() const;
        void Update(unsigned int);
        void UpdateKeyFrame(unsigned int);
        void GetFrameCount() const;

        // data members, from how the methods use this: 185 bytes
        undefined* field_0; // offset 0
        char _unknown_8[72];
        undefined8 field_80; // offset 80
        undefined8 field_88; // offset 88
        char _unknown_96[16];
        int m_loopBehaviour;                // offset 112
        uint m_loopLength;                  // offset 116
        undefined1 m_tweenLastFrameToFirst; // offset 120
        char _unknown_121[3];
        uint m_loopsCompleted; // offset 124
        uint field_128;        // offset 128
        undefined1 m_finished; // offset 132
        char _unknown_133[3];
        uint m_delay;           // offset 136
        uint m_animationLength; // offset 140
        uint field_144;         // offset 144
        uint field_148;         // offset 148
        uint m_currentIndex;    // offset 152
        uint field_156;         // offset 156
        undefined1 field_160;   // offset 160
        char _unknown_161[7];
        ulong m_startTimeNS;     // offset 168
        long m_lastUpdateTimeNS; // offset 176
        undefined1 m_paused;     // offset 184
    };

    // 0x1004015a0, 16 bytes, inline, placed by class name and debug map
    // AnimationParameters::ResetLoopCounter()
    void AnimationParameters::ResetLoopCounter() {
        m_loopsCompleted = 0;
    }

    // 0x1004017f0, 16 bytes, inline, placed by class name and debug map
    // AnimationParameters::SetDelay(unsigned int)
    void AnimationParameters::SetDelay(uint param_1) {
        m_delay = param_1;
    }

    // 0x1006581a0, 16 bytes, inline, placed by class name
    // AnimationParameters::IsDelayed() const
    bool AnimationParameters::IsDelayed() {
        return m_delay != 0;
    }

    // 0x100659520, 16 bytes, inline, placed by class name
    // AnimationParameters::SetOnFinishedCallback(fixedfunction::function<void (), 64ul, 16ul, (fixedfunction::Methods)0>)
    void AnimationParameters::SetOnFinishedCallback(function param_1) {
        function* in_RSI;

        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::operator=(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)this, in_RSI);
    }

    // 0x10066a590, 16 bytes, inline, placed by class name
    // AnimationParameters::IsFinished() const
    undefined1 AnimationParameters::IsFinished() {
        return m_finished;
    }

    // 0x1006728b0, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimationParameters::~AnimationParameters(): jumps straight to the base-object destructor

    // 0x1006729f0, 48 bytes, base-object destructor, inline, placed by class name
    // AnimationParameters::~AnimationParameters()
    void AnimationParameters::~AnimationParameters() {
        (&field_96)->~shared_ptr();
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(), 64ul, 16ul, (fixedfunction::Methods)0>*)this);
    }

    // 0x10098a1f0, 32 bytes, inline, placed by class name
    // AnimationParameters::GetTicksThroughFrame() const
    int AnimationParameters::GetTicksThroughFrame() {
        return field_148 - field_144;
    }

} // namespace jag::graphics

namespace jag {
    // 0x100403090, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ObjStackEntry::ObjStackEntry(ObjStackEntry const&): jumps straight to the base-object constructor

    // 0x1004030b0, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ObjStackEntry::ObjStackEntry(ObjStackEntry const&)
    void ObjStackEntry::ObjStackEntry(ObjStackEntry* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        uint uVar8;

        uVar8 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = uVar8;
        new (field_8, (BuildRequest*)param_1->field_8) game::BuildRequest<graphics::Model, game::BuildModelMain>();
        new (&field_40, (shared_ptr*)&param_1->field_40) shared_ptr<oldscape::dash3d::Decor>();
        field_128 = param_1->field_128;
        uVar1 = param_1->field_64;
        uVar2 = param_1->field_72;
        uVar3 = param_1->field_80;
        uVar4 = param_1->field_88;
        uVar5 = param_1->field_96;
        uVar6 = param_1->field_104;
        uVar7 = param_1->field_120;
        field_112 = param_1->field_112;
        field_120 = uVar7;
        field_96 = uVar5;
        field_104 = uVar6;
        field_80 = uVar3;
        field_88 = uVar4;
        field_64 = uVar1;
        field_72 = uVar2;
    }

    // 0x100403390, 80 bytes, inline, placed by debug map only (low confidence)
    // ObjStackEntry::operator=(ObjStackEntry const&)
    /* ObjStackEntry::TEMPNAMEPLACEHOLDERVALUE(ObjStackEntry const&) */

    ObjStackEntry* ObjStackEntry::operator=(ObjStackEntry* param_1) {
        uint uVar1;

        uVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        game::BuildRequest<graphics::Model, game::BuildModelMain>::operator=(
            (BuildRequest<graphics::Model, game::BuildModelMain>*)field_8, (BuildRequest*)param_1->field_8);
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)&field_40,
                                               (shared_ptr*)&param_1->field_40);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_64, (Matrix44T*)&param_1->field_64);
        field_128 = param_1->field_128;
        return this;
    }

    // 0x1004034e0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072> >* placement_new<MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072> >, MakeSharedPool<graphics::Model, 3072>::RefCounterAndData*&, graphics::Model*>(void*, MakeSharedPool<graphics::Model, 3072>::RefCounterAndData*&, graphics::Model*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>,
                       MakeSharedPool<graphics::Model, 3072>::RefCounterAndData*&, graphics::Model*>(
        void* param_1, RefCounterAndData** param_2, Model** param_3) {
        MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1004036d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072> >::MakeSharedPoolRefCounter(void*, graphics::Model*): jumps straight to the base-object constructor

    // 0x1004036e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072> >::MakeSharedPoolRefCounter(void*, graphics::Model*)
    void MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>* this, void* param_1,
        Model* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c10 + 16;
        *(void**)(this + 16) = param_1;
        *(Model**)(this + 24) = param_2;
    }

    // 0x100403720, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072> >::DeleteSelf()
    void MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::Model, 3072>::deallocate(pvVar1);
    }

} // namespace jag

// 0x100401a50, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}
