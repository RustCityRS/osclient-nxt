// libs/graphics/runetek7/animation/AnimationParameters.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::graphics {
    class AnimationParameters {
    public:
        unsigned int GetLoopsCompleted() const;
        unsigned int GetDelay() const;
        unsigned int GetCurrentIndex() const;
        uint8_t* GetAnimation() const;
        unsigned int GetLoopLength() const;
        unsigned int GetAnimationLength() const;
        uint8_t GetPaused() const;
        void ResetLoopCounter();
        void SetDelay(unsigned int arg1);
        AnimationLoopBehaviour GetLoopBehaviour() const;
        bool GetTweenLastFrameToFirst() const;
        bool IsDelayed() const;
        void SetOnFinishedCallback(fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0> callback);
        bool IsFinished() const;
        ~AnimationParameters();
        long GetLastUpdateTimeNS() const;
        unsigned long GetStartTimeNS() const;
        AnimationParameters(const shared_ptr<Animation>& animation, AnimationLoopBehaviour animationLoopBehaviour,
                            unsigned int arg3, unsigned int arg4, bool arg5, int arg6, unsigned int arg7, bool arg8);
        void Reset(unsigned int arg1, unsigned int arg2);
        void SetDelayResumeAtTime(unsigned int arg1);
        void ResetToTime(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        unsigned int GetPreLoopLength() const;
        void SetNextFrame();
        unsigned int GetTicksThroughAnimation() const;
        int GetTicksThroughFrame() const;
        void Update(unsigned int arg1);
        void UpdateKeyFrame(unsigned int arg1);
        void GetFrameCount() const;

    private:
        uint8_t* field_0;
        uint8_t _unknown_8[72];
        uint64_t field_80;
        uint64_t field_88;
        uint8_t _unknown_96[16];
        AnimationLoopBehaviour m_loopBehaviour;
        unsigned int m_loopLength;
        bool m_tweenLastFrameToFirst;
        uint8_t _unknown_121[3];
        unsigned int m_loopsCompleted;
        unsigned int field_128;
        uint8_t m_finished;
        uint8_t _unknown_133[3];
        unsigned int m_delay;
        unsigned int m_animationLength;
        unsigned int field_144;
        unsigned int field_148;
        unsigned int m_currentIndex;
        unsigned int field_156;
        bool field_160;
        uint8_t _unknown_161[7];
        unsigned long m_startTimeNS;
        long m_lastUpdateTimeNS;
        uint8_t m_paused;
    };

    // 0x1004015a0
    void AnimationParameters::ResetLoopCounter() {
        m_loopsCompleted = 0;
    }

    // 0x1004017f0
    void AnimationParameters::SetDelay(unsigned int arg1) {
        m_delay = arg1;
    }

    // 0x1006581a0
    bool AnimationParameters::IsDelayed() const {
        return m_delay != 0;
    }

    // 0x100659520
    void AnimationParameters::SetOnFinishedCallback(
        fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0> callback) {
        *this = *callback;
    }

    // 0x10066a590
    bool AnimationParameters::IsFinished() const {
        return m_finished;
    }

    // 0x1006729f0
    AnimationParameters::~AnimationParameters() {
        field_96.~shared_ptr();
    }

    // 0x10098a1f0
    int AnimationParameters::GetTicksThroughFrame() const {
        return field_148 - field_144;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1004030b0
    ObjStackEntry::ObjStackEntry(const ObjStackEntry& objStackEntry) {
        unsigned int uVar8 = objStackEntry.field_4;
        field_0 = objStackEntry.field_0;
        field_4 = uVar8;
        new (field_8) game::BuildRequest<graphics::Model, game::BuildModelMain>(objStackEntry.field_8);
        new (&field_40) shared_ptr(&objStackEntry.field_40);
        field_128 = objStackEntry.field_128;
        uint64_t uVar1 = objStackEntry.field_64;
        uint64_t uVar2 = objStackEntry.field_72;
        uint64_t uVar3 = objStackEntry.field_80;
        uint64_t uVar4 = objStackEntry.field_88;
        uint64_t uVar5 = objStackEntry.field_96;
        uint64_t uVar6 = objStackEntry.field_104;
        uint64_t uVar7 = objStackEntry.field_120;
        field_112 = objStackEntry.field_112;
        field_120 = uVar7;
        field_96 = uVar5;
        field_104 = uVar6;
        field_80 = uVar3;
        field_88 = uVar4;
        field_64 = uVar1;
        field_72 = uVar2;
    }

    // 0x100403390
    ObjStackEntry* ObjStackEntry::operator=(const ObjStackEntry& objStackEntry) {
        unsigned int uVar1 = objStackEntry.field_4;
        field_0 = objStackEntry.field_0;
        field_4 = uVar1;
        *field_8 = objStackEntry.field_8;
        field_40 = objStackEntry.field_40;
        field_64 = objStackEntry.field_64;
        field_128 = objStackEntry.field_128;
        return this;
    }

    // 0x1004034e0
    MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>*
    placement_new<MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>,
                  MakeSharedPool<graphics::Model, 3072>::RefCounterAndData*&, graphics::Model*>(
        void* arg1, MakeSharedPool<graphics::Model, 3072>::RefCounterAndData*& arg2, graphics::Model*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>(arg2, arg3);
        return arg1;
    }

    // 0x1004036e0
    MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>::MakeSharedPoolRefCounter(
        void* arg1, graphics::Model* model)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c10 + 16;
        *(void**)(this + 16) = arg1;
        *(Model**)(this + 24) = model;
    }

    // 0x100403720
    void MakeSharedPoolRefCounter<graphics::Model, MakeSharedPool<graphics::Model, 3072>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::Model, 3072>::deallocate(arg1);
    }

} // namespace jag

// 0x100401a50
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}
